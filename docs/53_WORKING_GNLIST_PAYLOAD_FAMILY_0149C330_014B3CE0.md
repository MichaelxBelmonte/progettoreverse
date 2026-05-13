# 53. Working GNList Payload Family: `0149c330 -> 0149ebe0 -> 014b3460 -> 014b3ce0`

## Executive Summary

Il payload dello slot `MUElementAnalyzer + 0x158` non e' piu' `open` nel corridoio principale che parte da `01484bc0`.

La chiusura piu' rigorosa oggi e':

- `self + 0x158` e' una `GNList`
- i suoi elementi sono altre `GNList`
- gli elementi interni sono della famiglia `MUPitchMatrixPeak` (`g_025e4538`)

Quindi, per il stage chain osservato:

`MUElementAnalyzer + 0x158 ~= GNList< GNList< MUPitchMatrixPeak > >`

con confidence alta.

Questo non significa ancora che ogni consumer tardivo dello slot usi sempre esattamente la stessa proiezione semantica, ma chiude il payload reale della fase `0149c330 -> 014b3ce0`.

---

## 1. Prove Forti

### A. `0149c330` costruisce esplicitamente `GNList` annidate con nodi `g_025e4538`

Nel builder di stage [0149c330.c](../reconstructed/clean/MUElementAnalyzer/0149c330.c):

- alloca una `GNList` outer con `g_02572358`
- per ogni iterazione alloca una seconda `GNList` inner con `g_02572358`
- quando trova un picco alloca un oggetto con `g_025e4538`

Snippet chiave:

```c
puVar12 = (void*)FUN_00e8fc40();
*puVar12 = &g_02572358;
...
puVar13 = (undefined8 *)FUN_00e8fc40();
*puVar13 = &g_025e4538;
```

Poi inizializza campi concreti sul nodo peak:

- `+0x0c = iVar14`
- `+0x10 = uVar17`
- `+0x18 = fVar21`
- `+0x1c = fVar21`

in [0149c330.c](../reconstructed/clean/MUElementAnalyzer/0149c330.c).

### B. `g_025e4538` e' gia' una family chiusa: `MUPitchMatrixPeak`

Il costruttore [01198120.c](../reconstructed/clean/MUPitchMatrixPeak/01198120.c) registra esplicitamente:

- stringa `"MUPitchMatrixPeak"`
- size `0x38`
- vtable `g_025e4538`

Quindi il nodo allocato da `0149c330` non e' solo un carrier anonimo: e' un `MUPitchMatrixPeak`.

### C. `0149ebe0` consuma esattamente una outer list di inner lists

In [0149ebe0.c](../reconstructed/clean/MUElementAnalyzer/0149ebe0.c):

- itera `*in_RDX`
- per ogni entry ottiene una lista `lVar14`
- poi itera gli elementi di quella lista
- filtra per `peak + 0x10`

Snippet strutturale:

```c
lVar14 = *(int64_t *)(*(int64_t *)(*in_RDX + 0x10) + uVar19 * 8);
iVar15 = *(int *)((int64_t)puVar8 + 0xc);
...
*(int *)(*(int64_t *)(puVar8[2] + ... ) + 0x10)
```

Questo e' coerente con:

- outer `GNList` di bucket/row
- inner `GNList` di `MUPitchMatrixPeak`

### D. `014b3460` resetta e collega i campi del peak

In [014b3460.c](../reconstructed/clean/MUElementAnalyzer/014b3460.c):

- itera outer list
- itera inner peaks
- scrive su ciascun peak:
  - `+0x14 = local rank/order`
  - `+0x20 = 0`
  - `+0x28 = 0`
  - `+0x30 = 0`
- sulle righe adiacenti sceglie il target non reclamato (`+0x20 == 0`) con
  distanza minima tra `+0x10` e `next +0x10`, sotto soglia stretta `0x14`
- quando linka:
  - `current +0x28 = selectedNext`
  - `selectedNext +0x30 = current`
  - `selectedNext +0x20 = 1`

Questa funzione non tratta il payload come raw-note o property-point; lo tratta come una lattice di peak con bookkeeping intra/inter-row.

### E. `014b3ce0` usa la stessa topologia per selezione e bridging

In [014b3ce0.c](../reconstructed/clean/MUElementAnalyzer/014b3ce0.c):

- `param_2` viene letto come outer list di inner lists
- per i peak interni usa:
  - `+0x10` come indice pitch-like
  - `+0x1c` come quality/score
  - `+0x28/+0x30` come link/chain di adiacenza

Poi il risultato viene riversato nell'item sorgente a `item + 0x38`, cioe' non nel peak stesso.

Quindi il peak-lattice e' uno stage intermedio di selezione, non il prodotto finale.

La coda scalare del bridge e' ora stretta in
[65_PITCH_MATRIX_BRIDGE_SELECTION_014B3CE0.md](65_PITCH_MATRIX_BRIDGE_SELECTION_014B3CE0.md):

- floor reale su `peak + 0x1c`: `0.4f`
- conversione reale pitch-bin -> Hz: `exp2(pitchBin / 60.0f) * 21.533203125f`
- output semantici: `item + 0x38` frequenza, `item + 0x30` anchor time
- fallimento: `-1.0f` / `-1.0`

---

## 2. Modello Canonico Corrente

### Topologia

```text
MUElementAnalyzer + 0x158
  -> GNList outer
      -> GNList inner (per row / per time-slice-like bucket)
          -> MUPitchMatrixPeak
```

### Campo map prudente di `MUPitchMatrixPeak`

Questa field map e' sufficiente per il reverse corrente, ma non ancora definitiva a livello property-registration:

```text
+0x0c  rowIndex / sliceIndex-like
+0x10  pitchBinIndex / pitchIndex-like
+0x14  localRankInRow
+0x18  primaryPeakValue
+0x1c  workingPeakQuality / selectionScore
+0x20  stage/adjacency flag
+0x28  adjacency/back-link-like
+0x30  adjacency/forward-link-like
```

Confidence:

- `+0x10`: alta
- `+0x14`: alta
- `+0x1c`: alta
- `+0x28/+0x30`: alta
- `+0x0c`: media-alta
- `+0x18`: alta

---

## 3. Cosa Cambia Rispetto Al Modello Precedente

Prima:

- `self + 0x158 = GNList di lavoro`
- payload ancora `open`

Adesso:

- `self + 0x158 = GNList` confermata
- payload del corridoio principale chiuso a `GNList<GNList<MUPitchMatrixPeak>>`

Questa correzione evita tre errori grossi nel clean-room effort:

1. confondere la working list con `MURawNoteSeparation`
2. confonderla con `MUMatrixPathPoint`
3. trattarla come lista flat invece che annidata

---

## 4. Note Di Cautela

### A. `014328b0` non appartiene alla family `MUPitchMatrixPeak`

Questa era l'ipotesi prudente precedente, ma ora va considerata superata.

Il cluster assembly mostra che:

- `014328b0` costruisce un object da `0x20`
- la registration adiacente lo lega a `MUPosValue`
- scrive due double a `+0x10/+0x18`

Quindi:

- `0149c330` costruisce davvero i `MUPitchMatrixPeak`
- `014328b0` costruisce invece `MUPosValue`

Il ledger corretto e' ora:

- [54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md](54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md)

### B. `+0x18` contro typing del decompiler

`0149c330` scrive `+0x18/+0x1c` come float-like, mentre altri decompilati a volte rileggono zone vicine come double.

La lettura prudente corretta oggi e':

- `+0x1c` e' il vero score/quality downstream
- `+0x18` e' un valore peak primario inizializzato insieme a `+0x1c` e poi
  riscritto da `0149ded0` come `pow(weightBase, mirroredExponent) * +0x1c`
- il typing e' float-like nel corridoio `0149c330 / 0149ded0`

---

## 5. Impatto Sul Replication Effort

Questo e' un passo reale verso la replica, perche' il pipeline locale dell'analyzer non e' piu' solo:

`spectral arrays -> note candidates`

ma piu' precisamente:

`spectral arrays -> per-row peak lattice -> inter-row linking -> selection bridge -> item frequency cache`

Questa topologia e' il pezzo che serviva per separare:

- front-end spettrale
- peak extraction locale
- linking/propagation tra row adiacenti
- bridging finale verso gli item downstream

---

## 6. Next Step

1. Stringere il terzo campo dell'helper esteso `01432b10`.
2. Verificare se i consumer tardivi di `self + 0x158` lavorano ancora sulla stessa topologia annidata o su una proiezione gia' ridotta.
3. Chiudere la chain construction completa di `014b3ce0` solo se il traversal `GNList` diventa sufficientemente stabile.
