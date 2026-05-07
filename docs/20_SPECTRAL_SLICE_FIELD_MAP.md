# 20 — Spectral Slice Field Map

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Fissare il layout operativo realmente provato di `MUSpectralTimeSlice`, separando:

- campi payload per-bin davvero verificati
- getter semplici con offset certi
- helper derivativi e cache
- funzioni adiacenti che oggi non vanno usate come prova del layout

Questo documento sostituisce le ipotesi troppo generiche emerse dagli header auto-generati.

---

## Conclusione Principale

La slice spettrale reale ha una batteria compatta di payload tra `+0x10` e `+0x48`.

I campi oggi verificati con buona confidenza sono:

| Offset | Campo | Evidenza principale | Confidence |
|--------|-------|---------------------|------------|
| `+0x0c` | `binCount` | letto in init e in `takeDataFromTimeSlice()` | alta |
| `+0x10` | `complexSpectrum` | alloc/copy in init; copy a 8 byte per bin | alta |
| `+0x18` | `magnitudeData` | getter `015c6b60`; derivato da `sqrt(re^2+im^2)` | alta |
| `+0x20` | `phaseData` | getter `015c6310`; derivato da `atan2f` | alta |
| `+0x28` | `trueFreqData` | getter `015c66c0`; calcolato da delta-fase con neighbour slice | alta |
| `+0x30` | `tonalityData` | getter `015c6ba0`; derivato sopra `trueFreqData` | alta |
| `+0x38` | `trueTimeSampleOffsetData` | getter `015c6be0`; derivato da differenze di fase intra-slice | alta |
| `+0x40` | `transiencyData` | getter `015c6c20` | alta |
| `+0x48` | `vectorData` | getter `015c6c60`; usato come coppia ausiliaria per true-freq / time-offset | alta |

Campi helper/cache oggi solo candidati:

| Offset | Ruolo candidato | Confidence |
|--------|------------------|------------|
| `+0x68` | reference cache per delta-fase attesa / true-freq | media |
| `+0x70` | reference cache ausiliaria / time-offset | media |
| `+0x80` | lookup cache per tonality derivata | media |

---

## Prove Dirette

### 1. `takeDataFromTimeSlice()` inchioda l'ordine dei payload

In [015c6700.c](../reconstructed/clean/MUSpectralTimeSlice/015c6700.c#L34) la bitmask di `param_2` copia in ordine gli offset:

- bit `0x01` -> `+0x10`
- bit `0x02` -> `+0x18`
- bit `0x04` -> `+0x20`
- bit `0x08` -> `+0x28`
- bit `0x10` -> `+0x30`
- bit `0x20` -> `+0x38`
- bit `0x40` -> `+0x40`
- bit `0x80` -> `+0x48`

I messaggi stringa nello stesso corridoio confermano il mapping semantico in [deep_spectral_slice.txt](../ghidra/output/MikeCore/deep_spectral_slice.txt#L436):

- `015c6b60` -> `getMagnitudeData`
- `015c6310` -> `getPhaseData`
- `015c66c0` -> `getTrueFreqData`
- `015c6ba0` -> `getTonalityData`
- `015c6be0` -> `getTrueTimeSampleOffsetData`
- `015c6c20` -> `getTransiencyData`
- `015c6c60` -> `getTransiencyData(): no vectorData data`

### 2. Getter piccoli: offset certi

Dal disassembly CLI dei getter piccoli:

- `015c6b60` ritorna `0x18(%rdi)` -> magnitude
- `015c6310` ritorna `0x20(%rdi)` -> phase
- `015c66c0` ritorna `0x28(%rdi)` -> trueFreq
- `015c6ba0` ritorna `0x30(%rdi)` -> tonality
- `015c6be0` ritorna `0x38(%rdi)` -> trueTimeSampleOffset
- `015c6c20` ritorna `0x40(%rdi)` -> transiencyData
- `015c6c60` ritorna `0x48(%rdi)` -> vectorData

### 3. `initFromTimeSignal()` popola i campi giusti

In [015c4e40.c](../reconstructed/clean/MUSpectralTimeSlice/015c4e40.c#L406):

- se `param_9 & 0x01`, alloca `+0x10`
- se `param_9 & 0xbe`, alloca `+0x18` e `+0x20`, poi:
  - `+0x18` riceve `sqrt(re^2 + im^2)`
  - `+0x20` riceve `atan2f`

Nel blocco [015c4e40.c#L450](../reconstructed/clean/MUSpectralTimeSlice/015c4e40.c#L450):

- `+0x28` viene calcolato da differenze di fase con la neighbour slice
- opzionalmente `+0x48` riceve una componente ausiliaria per bin

Nel blocco [015c4e40.c#L515](../reconstructed/clean/MUSpectralTimeSlice/015c4e40.c#L515):

- `+0x38` viene calcolato da differenze di fase intra-slice
- se `+0x48` esiste, riceve la seconda componente ausiliaria

Questa e' la prova locale piu' forte che `+0x48` non sia solo “transiency data”, ma un buffer vettoriale ausiliario accoppiato ai due derivatori.

---

## Correzione Importante Su `015c6350`

L'header auto-generato lo tratta come `getTrueFreqData`, ma questo e' fuorviante.

In [015c6350.c](../reconstructed/clean/MUSpectralTimeSlice/015c6350.c#L44):

- richiede `+0x28` come input indispensabile
- rialloca `+0x30`
- usa una finestra di vicinato sui valori di `+0x28`
- opzionalmente passa da una lookup cache generata da `015c7920`

Inferenza operativa forte:

- `015c66c0` e' il getter vero di `trueFreqData`
- `015c6350` e' piu' coerente con un derivatore di `tonalityData` a partire da `trueFreqData`

Quindi il naming storico basato sulla stringa e' da considerare ambiguo o parzialmente errato.

---

## Cache E Helper

### `015c7140`

In [015c7140.c](../reconstructed/clean/MUSpectralTimeSlice/015c7140.c#L50) popola `+0x68` con una rampa float normalizzata basata su:

- `arg1 + 0x24`
- `arg1 + 0x2c`

In `initFromTimeSignal()` viene usata subito prima del calcolo di `+0x28`.

Inferenza prudente:

- `+0x68` e' una reference table per il calcolo di `trueFreqData`
- `arg1` in questo corridoio coincide con il descriptor cache condiviso documentato in [29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md](29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md)

### `015c7920`

In [015c7920.c](../reconstructed/clean/MUSpectralTimeSlice/015c7920.c#L37) popola `+0x80` e usa:

- `this + 0x58`
- `FUN_00e83da0()`

La cache viene poi consumata da `015c6350`.

Inferenza prudente:

- `+0x80` e' una lookup table per la derivazione di `tonalityData`

### `015c73a0`

In [015c73a0.c](../reconstructed/clean/MUSpectralTimeSlice/015c73a0.c#L51) popola `+0x70` con una rampa float basata su `arg1 + 0x50`.

Il ruolo preciso resta meno chiaro di `+0x68`, ma e' con alta probabilita' una cache ausiliaria collegata ai derivatori di timing.

---

## Funzioni Da Non Usare Come Prova Del Layout

Le funzioni seguenti sono assegnate al bucket `MUSpectralTimeSlice`, ma oggi non sono prove pulite del layout payload:

- `015c91d0`
- `015c9600`
- `015c9ee0`
- `015cabc0`
- `015cbd00`
- `015cc880`

Motivo:

- il loro comportamento e' dominato da liste, item object, link fra nodi o metadata non direttamente coincidenti con i payload per-bin
- la classificazione qui e' plausibile ma non rigorosa come quella ottenuta da `takeDataFromTimeSlice`, getter piccoli e `initFromTimeSignal`

---

## Impatto Sul Replication Effort

1. Il layout spettrale fondamentale e' ormai abbastanza solido da essere usato come base clean-room.
2. Il repo contiene ancora header auto-generati fuorvianti su `MUSpectralTimeSlice`; non vanno usati come fonte primaria.
3. Il path vero e':
   `complex -> magnitude/phase -> trueFreq -> tonality -> trueTimeOffset/vectorData`
4. Nel path DNA2 claim:
   - `magnitudeData` entra come buffer energia
   - `trueFreqData` entra come asse frequenziale
   - `tonalityData` entra come weight/mask e buffer di scoring
5. Questo chiude uno dei colli di bottiglia principali per rendere leggibile `assignEnergyClaimsInSampleRange()`.

---

## Next Step

1. Rinominare locali e out-param in `013903d0` usando la field map sopra.
2. Tipizzare `param_9` di `initFromTimeSignal()` come bitmask di payload richiesti.
3. Capire se `+0x40` transiency venga scritto dentro `015c4d90` o da uno stage separato non ancora allineato.
4. Stringere il ruolo finale di `tonalityData` nel dot product e nella normalizzazione di `013924d0`.
