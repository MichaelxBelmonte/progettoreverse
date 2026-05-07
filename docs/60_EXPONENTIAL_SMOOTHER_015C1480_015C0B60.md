# 60 - Exponential Smoother `015c1480 / 015c0b60`

**Ultimo aggiornamento:** 2026-05-07

## Obiettivo

Chiudere il blocker rimasto nella pipeline classe `8` di `014afb20`: capire cosa fa realmente `015c1480` quando viene usato per lo smoothing breve/lungo del contrast buffer.

---

## Conclusione

`015c1480` non e' un box smoother e non e' un gaussian-like kernel esplicito.

E' un wrapper sopra `015c0b60` che:

1. converte una larghezza float in coefficiente esponenziale;
2. delega a un core di smoothing IIR in-place;
3. nel path usato da `014afb20` forza mode `ecx = 0` e flag `r8d = 1`.

La recurrence numerica osservata nel core e':

```c
state = sample + alpha * (state - sample);
```

cioe':

```c
state = alpha * previousState + (1.0f - alpha) * sample;
```

Questa e' una prova forte che il filtro e' uno smoother esponenziale, non una media mobile.

---

## 1. Binding Degli Stub Importati

La mappa Mach-O `__stubs -> __la_symbol_ptr` chiude i tre stub rilevanti:

| Stub | Lazy pointer | Simbolo |
|------|--------------|---------|
| `0x1f9b1c6` | `0x024aa758` | `_expf` |
| `0x1f9b322` | `0x024aa928` | `_logf` |
| `0x1f9b02e` | `0x024aa538` | `___bzero` |

Quindi la formula `expf(-2.5f / width)` e il recupero inverso tramite `logf(alpha)` sono evidenza diretta, non deduzione musicale.

---

## 2. Wrapper `015c1480`

Il wrapper applica due guardie contro valori subnormali/minimi:

- `width >= FLT_MIN`, con `g_02394274 = 1.17549435e-38f`
- `alpha >= FLT_MIN`, dopo la chiamata a `_expf`

Il coefficiente viene calcolato cosi':

```c
alpha = expf(-2.5f / width);
```

dove `-2.5f` e' letto da `0x0241106c`.

Poi il wrapper chiama `015c0b60` passando:

| Argomento | Valore nel wrapper |
|-----------|--------------------|
| `rdi` | stato/context del filtro |
| `rsi` | pointer locale al buffer float |
| `edx` | count |
| `ecx` | mode ricevuto dal caller |
| `r8d` | `1` |
| `xmm0` | `alpha` |
| `xmm1` | `0.0f` |
| `xmm2` | `0.0f` |

Nel callsite classe `8` di `014afb20`, `ecx` viene azzerato prima di entrambe le chiamate a `015c1480`.

---

## 3. Core `015c0b60`

Il core:

1. ritorna se `count <= 0`;
2. calcola `logf(alpha)`;
3. ricava una radius intera:

```c
radius = trunc(-2.5 / logf(alpha));
if (radius <= 0) radius = 1;
```

4. forza `radius = 1` e mode `1` se il mode ricevuto e' `5`;
5. usa uno scratch buffer nello stato:
   - `context + 0x18` = pointer scratch float
   - `context + 0x24` = capacita' scratch
6. assicura capacita' almeno `2 * radius + 1`;
7. prepara edge/pad in base al mode;
8. applica la recurrence esponenziale sul buffer reale, scrivendo in-place;
9. con flag `r8d = 1`, esegue anche il pass reverse sul buffer reale.

Per mode `0`, usato da `014afb20`, il ramo di preparazione usa `___bzero` sul prefisso dello scratch per `2 * radius` float. Il loop comune poi:

1. inizializza lo stato da `scratch[0]`;
2. attraversa il prefisso sinistro `scratch[1 .. radius-1]`;
3. attraversa e sovrascrive il buffer reale in forward;
4. attraversa e sovrascrive il tail destro `scratch[radius .. 2*radius-1]`;
5. se `r8d != 0`, attraversa quel tail destro al contrario come warm-up reverse;
6. attraversa e sovrascrive il buffer reale in reverse.

Questo vincola il path classe `8` a un forward/reverse con tail smussato nello scratch, non a due pass indipendenti con stato zero.

Nota importante sull'allocator: `015c0b60` alloca lo scratch tramite `00e83010`, che e' un wrapper di allocazione non-zeroing. Il sibling `00e83020` mostra esplicitamente il pattern allocazione + `___bzero`, ma non e' quello usato qui. Nel mode `0` osservato il clean-room code usa solo gli slot coperti dai loop sopra; la capacita' resta `2 * radius + 1`.

---

## 4. Callsite Classe `8` In `014afb20`

Le due chiamate osservate sono:

```asm
movss g_023908d8, %xmm0
mulss %xmm4, %xmm0
...
xorl %ecx, %ecx
callq 0x15c1480
```

e:

```asm
movss -0x48(%rbp), %xmm0
mulss g_0241fd58, %xmm0
...
xorl %ecx, %ecx
callq 0x15c1480
```

dove:

- `xmm4 = sampleRate-like / 441.0`
- `g_023908d8 = 5.0f`
- `g_0241fd58 = 30.0f`

Quindi:

```c
shortWidth = 5.0f * (sampleRateLike / 441.0);
longWidth  = 30.0f * (sampleRateLike / 441.0);

shortAlpha = expf(-2.5f / shortWidth);
longAlpha  = expf(-2.5f / longWidth);
```

La prima smoothing opera sul buffer contrast/clamped. Il risultato viene copiato, poi la seconda smoothing lunga opera sulla copia.

---

## 5. Impatto Sul Replication Effort

Il blocker precedente era: "non sappiamo se `015c1480` sia box smoothing, gaussian-like smoothing o altro".

Questo blocker e' chiuso:

- tipo filtro: exponential IIR smoother
- coefficiente: `expf(-2.5f / width)`
- radius derivata: `trunc(-2.5 / logf(alpha))`, con floor a `1`
- mode classe `8`: `0`
- edge family classe `8`: mode `0`, con `bzero` del prefisso scratch `2 * radius`
- pass direction: forward + reverse quando `r8d = 1`

Il mode `0` del path classe `8` e' ora implementato in `core_reconstruction` seguendo l'ordine dei loop del disassembly: bzero prefix, warm-up sinistro, forward buffer, tail destro, warm-up reverse e reverse buffer. In particolare, non viene piu' usato un generico forward-zero / reverse-zero.

Guardrail residuo: sono implementati solo i pezzi necessari al mode `0` usato dalla classe `8`; i mode `1/2/3/4/5` restano fuori dal perimetro clean-room.

---

## Stato

`015c1480 / 015c0b60` e' ora `IMPLEMENTABLE` per la pipeline classe `8`: scalar pieces, scratch sizing e loop mode `0` sono nel codice clean-room. Non e' una implementazione generale di tutti i mode dello smoother.
