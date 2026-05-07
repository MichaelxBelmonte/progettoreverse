# 60 - Exponential Smoother `015c1480 / 015c0b60`

**Ultimo aggiornamento:** 2026-04-22

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

Per mode `0`, usato da `014afb20`, il ramo di preparazione usa `___bzero` sul prefisso dello scratch per `2 * radius` float. Questo vincola il path classe `8` almeno a un edge prefill a zero per quel prefisso, ma non va semplificato in "zero padding completo": lo scratch ha capacita' `2 * radius + 1` e lo slot di coda partecipa ai loop successivi.

Nota importante sull'allocator: `015c0b60` alloca lo scratch tramite `00e83010`, che e' un wrapper di allocazione non-zeroing. Il sibling `00e83020` mostra esplicitamente il pattern allocazione + `___bzero`, ma non e' quello usato qui. Quindi lo slot non coperto dal `bzero` mode `0` non va inizializzato arbitrariamente nel clean-room code.

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

Resta un guardrail solo per bit identity: l'ordine esatto degli edge-pass/scratch-loop di `015c0b60` va trascritto direttamente dal disassembly se vogliamo output numericamente identico campione-per-campione. In particolare, non bisogna sostituire il mode `0` con un generico zero-pad simmetrico. La formula del filtro e le costanti pero' non sono piu' aperte.

Altro guardrail: siccome `00e83010` non azzera lo scratch nuovo, l'implementazione clean-room deve conservare uno stato scratch persistente e rispettare la stessa copertura del `bzero` osservato, oppure dichiarare esplicitamente di non essere bit-perfect.

---

## Stato

`015c1480 / 015c0b60` e' ora `IMPLEMENTABLE` per la pipeline classe `8`, con una nota: per test bit-perfect bisogna implementare il mode `0` partendo dal loop assembly, non da una versione "semplificata" del forward-backward smoothing.
