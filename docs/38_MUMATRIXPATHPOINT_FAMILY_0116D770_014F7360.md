# 38 — MUMatrixPathPoint Family `0x0116d770 / 0x014f7360 / 0x014f6fc0`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Chiudere in modo rigoroso l'identita' del payload locale usato dal builder `014f7360`.

---

## Conclusione Principale

Il payload shortlist/local-ranking di `014f7360` non e':

- `DAT_025f1488`
- `MURawNoteSeparation`
- `MUAudioSourcePropertyPoint`

E' invece la famiglia:

- `MUMatrixPathPoint`

Le prove forti sono queste:

1. `0116d770` registra `MUMatrixPathPoint` con size `0x40` e inizializza proprio i campi:
   - `+0x28`
   - `+0x2c`
   - `+0x30`
   - `+0x34`
   - `+0x38`
2. I registrar di classe nominano i campi:
   - `+0x10` = `bestNeighbourPoint`
   - `+0x18` = `containingPath`
   - `+0x20` = `object`
   - `+0x28` = `xPosIndex`
   - `+0x2c` = `yValue`
   - `+0x30` = `relevanceQuality`
   - `+0x34` = `bestNeighbourQuality`
   - `+0x38` = `shouldBeProcessed`
3. `014f7360` usa esattamente questi offset con semantica coerente:
   - legge `+0x28` come indice discreto di bucket
   - confronta la distanza su `+0x2c`
   - pesa il match con `+0x30`
   - scrive il winner score locale su `+0x34`
   - marca il winner su `+0x38`
4. `014f9d00` alloca direttamente un `MUMatrixPathPoint` e popola:
   - `+0x28 = xPosIndex`
   - `+0x2c = yValue`
   - `+0x30 = relevanceQuality`
   - `+0x20 = object`
5. `014f6fc0` scrive `element + 0x18 = containingPath`, coerente col property name di `MUMatrixPathPoint`.
6. `014f6db0` costruisce un `MUMatrixPath` singleton attorno a un singolo `MUMatrixPathPoint`, non attorno a un separation item.

---

## 1. Prova Strutturale Da `0116d770`

Il costruttore/copier `0116d770` inizializza una classe `0x40` byte:

- `+0x10` tramite `0116dc60`
- `+0x18` tramite `0116df40`
- `+0x20` tramite `0116e220`
- `+0x28 = 0`
- `+0x2c = 0`
- `+0x30 = 0`
- `+0x34 = 0`
- `+0x38 = 0`

Questo pattern coincide in modo stretto con gli offset osservati in `014f7360`.

---

## 2. Field Names Registrati

Dal disassembly dei registrar:

| Offset | Field name | Tipo registrato | Confidence |
|--------|------------|-----------------|------------|
| `+0x10` | `bestNeighbourPoint` | `GNUni` / ref object | Very High |
| `+0x18` | `containingPath` | `MUMatrixPath` | Very High |
| `+0x20` | `object` | `GNObject` | Very High |
| `+0x28` | `xPosIndex` | `GNInt` | Very High |
| `+0x2c` | `yValue` | `float` | Very High |
| `+0x30` | `relevanceQuality` | `float` | Very High |
| `+0x34` | `bestNeighbourQuality` | `float` | Very High |
| `+0x38` | `shouldBeProcessed` | `bool` | Very High |

---

## 3. Allineamento Diretto Con `014f7360`

I punti chiave del loop locale combaciano senza forzature:

1. `014f6f40` legge `0x28(%rbx)` e lo usa come indice di adiacenza.
   Questo e' compatibile con `xPosIndex`, non con uno score float di `MURawNoteSeparation`.
2. Nel cuore di `014f7360` il confronto di prossimita' usa:

```c
abs(current->field_2c - neighbour->field_2c)
```

   coerente con `yValue`.
3. Il ranking locale pesa il candidato con:

```c
(1 - normalizedDistance) * neighbour->field_30
```

   coerente con `relevanceQuality`.
4. Quando un best neighbour viene scelto:

```c
current->field_10 = bestNeighbour;
current->field_34 = localWinnerScore;
current->field_38 = 1;
```

   che coincide con:
   - `bestNeighbourPoint`
   - `bestNeighbourQuality`
   - `shouldBeProcessed`
5. Il sort della shortlist osservato in `014f7360` passa dal comparator object `0x14f9df0` e confronta proprio:

```asm
movss  0x34(%rax), %xmm0
movss  0x34(%rax), %xmm1
```

   con ritorno `-1 / 0 / 1` coerente con ordinamento decrescente su `bestNeighbourQuality`.

---

## 4. Builder Diretto `014f9d00`

Il builder immediato del payload e' ora osservabile direttamente.

Dal disassembly:

```asm
alloc 0x40
movl %r13d, 0x28(%rbx)
movss %xmm0, 0x2c(%rbx)
movss %xmm1, 0x30(%rbx)
movq (%r15), %r12
movq %r12, 0x20(%rbx)
```

Quindi `014f9d00` materializza un `MUMatrixPathPoint` da:

- `xPosIndex`
- `yValue`
- `relevanceQuality`
- `object`

Il callsite chiave ora e' stretto in `MUSpectrumShaper::014902f0`:

```asm
movss  0x58(%rax), %xmm1
movl   0xc(%rax), %esi
movss  0x14(%rax), %xmm0
movq   %rax, -0x318(%rbp)
leaq   -0x318(%rbp), %rdx
callq  0x14f9d00
```

Quindi:

- `xPosIndex <- source + 0xc`
- `yValue <- source + 0x14`
- `relevanceQuality <- source + 0x58`
- `object <- source`

Questo non chiude ancora il nome finale della classe sorgente, ma chiude il ruolo:

- `MUMatrixPathPoint::object` e' un back-reference al source-item upstream del ranking locale

Doc di dettaglio:

- [39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md](39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md)

---

## 5. Ruolo Di `MUMatrixPath`

Il layer container resta separato dal payload:

- `0116cb00` costruisce `MUMatrixPath` da `0x18` byte
- `014f6db0` alloca un `MUMatrixPath`
- `014f6d10` inserisce il point nel path e scrive `point->containingPath = path`
- `014f6fc0` fonde path adiacenti scrivendo ancora `+0x18`

Quindi il modello reale di `014f7360` e':

1. `GNList` per topologia e bucket
2. `MUMatrixPathPoint` come payload shortlist
3. `MUMatrixPath` come wrapper/list-owner dei point selezionati

---

## 6. Working Field Map

| Offset | Ruolo operativo | Confidence | Evidenza |
|--------|-----------------|------------|----------|
| `+0x10` | best neighbour point ref | Very High | `014f7360` scrive `local_50[2] = local_88`; registrar `bestNeighbourPoint` |
| `+0x18` | containing path ref | Very High | `014f6fc0` scrive `element + 0x18 = path`; registrar `containingPath` |
| `+0x20` | source object / upstream item back-ref | Very High | registrar `object` come `GNObject`; `014f9d00` copia `*objectWrapper`; `014902f0` wrappa direttamente il source object corrente |
| `+0x28` | discrete slot index | Very High | `014f6f40` legge il campo come `int`; registrar `xPosIndex` |
| `+0x2c` | local ordinate / distance axis | Very High | `014f7360` usa `abs delta`; registrar `yValue` |
| `+0x30` | local relevance weight | Very High | `014f7360` moltiplica il match score; registrar `relevanceQuality` |
| `+0x34` | best neighbour quality | Very High | `014f7360` scrive il winner score; `0x14f9df0` usa questo campo come sort key decrescente; registrar `bestNeighbourQuality` |
| `+0x38` | process flag | Very High | `014f7360` marca i winner; registrar `shouldBeProcessed` |

---

## Impatto Sul Replication Effort

1. `014f7360` non va piu' letto come ramo parallelo di `MURawNoteSeparation`.
2. La replica corretta richiede tre layer distinti:
   - `GNList`
   - `MUMatrixPathPoint`
   - `MUMatrixPath`
3. Il cluster `descriptor + 0x88` governa un problema di matching/path-building discreto per-slot, non il carrier interval/gate downstream.
4. `014f9d00` diventa il punto giusto per ricostruire il builder clean-room del payload shortlist.

---

## Next Step

1. Chiudere il tipo nominale del source-item carrier dietro `MUMatrixPathPoint::object`.
2. Verificare dove il risultato `MUMatrixPath / MUMatrixPathPoint` venga tradotto nel candidate adapter `0x168`.
3. Verificare se esiste davvero un float operativo a `+0x3c` sul payload o se quel getter appartiene a una famiglia adiacente.
