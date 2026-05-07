# 17 — DNA2 Branch Ledger

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Fissare in modo rigoroso il corridoio DNA2 oggi meglio supportato dai dati locali:

- dispatcher alto livello
- ramo polifonico
- ramo monofonico
- kernel interno di energy claim
- superfici dati toccate o richieste

Questo documento separa i fatti verificati dalle inferenze operative, cosi' il replication effort non si basi su naming o ruoli ancora gonfiati.

---

## Grafo Minimo Verificato

Call edges oggi confermati:

1. `0x01433f60 -> 0x01447a70`
2. `0x01433f60 -> 0x0146c830`
3. `0x01447a70 -> 0x013903d0`
4. `0x01353f80 -> 0x013903d0`

Fonti:

- [deep_poly_detect.txt](../ghidra/output/MikeCore/deep_poly_detect.txt)
- [deep_mono_detect.txt](../ghidra/output/MikeCore/deep_mono_detect.txt)
- [deep_energy_claims.txt](../ghidra/output/MikeCore/deep_energy_claims.txt)
- [01353f80.c](../ghidra/output/MikeCore/decompiled/MUAudioSourceDescription/01353f80.c)

Lettura operativa:

- `0x01433f60` e' il nodo di branch minimo oggi dimostrato.
- `0x01447a70` e' il ramo polifonico minimo oggi dimostrato.
- `0x0146c830` e' il ramo monofonico minimo oggi dimostrato.
- `0x013903d0` e' il kernel riusabile sample-range -> claim/slice oggi meglio leggibile.

---

## Nodi Canonici

### `0x01433f60` — dispatcher DNA2/mono

Fatti verificati:

- chiama `0x01447a70` in [deep_poly_detect.txt](../ghidra/output/MikeCore/deep_poly_detect.txt)
- chiama `0x0146c830` in [deep_mono_detect.txt](../ghidra/output/MikeCore/deep_mono_detect.txt)
- e' una mega-funzione da `57.867` byte in [index.tsv](../ghidra/output/MikeCore/decompiled/index.tsv)

Inferenza operativa:

- e' il dispatcher alto livello tra detection polifonica e costruzione item monofonici
- il predicate reale del branch non e' ancora provato dal decompilato

Rischio aperto:

- non e' ancora dimostrato che il branch usi direttamente `_useDNA2ForPolyphonicDetection`
- il gate bool osservato al callsite poly deriva da `stack[-0x198] != 0`, ma `stack[-0x198]` e' ora chiaramente un handle/pointer locale e non un mirror diretto del bool analyzer

### `0x01447a70` — polyphonic core

Fatti verificati:

- stringa diretta `findPolyphonicDetectionItems` in [deep_poly_detect.txt](../ghidra/output/MikeCore/deep_poly_detect.txt)
- chiamata da `0x01433f60`
- chiama `0x013903d0`
- ha `138` call interni ed e' grande `71.837` byte

Inferenza operativa:

- e' il cuore DNA2 della separazione polifonica
- la semantica interna sembra iterativa e multi-stage, ma il dettaglio dei loop resta da aprire in GUI
- il front-load oggi appare composto da helper di collection/context (`0x013fb420`), descriptor cache condiviso (`0x0132d790`) e poi helper FFT/buffer (`0x00e83120`, `0x00e84080`, `0x00e83da0`)

### `0x0146c830` — ramo monofonico

Fatti verificati:

- stringa diretta `makeMonophonicItems` in [deep_mono_detect.txt](../ghidra/output/MikeCore/deep_mono_detect.txt)
- chiamata da `0x01433f60`
- decompilato disponibile in [0146c830.c](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0146c830.c)

Pattern osservabili nel decompilato:

- molti loop su liste di item
- molte operazioni di retain/release e swap di puntatori
- criteri locali che guardano flag e qualita'/durate degli item

Assessment:

- questa funzione appare coerente con costruzione e rifinitura di item monofonici
- non e' il front-end STFT e non e' il kernel spettrale primario

### `0x013903d0` — kernel energy claim per sample range

Fatti verificati:

- stringa diretta `assignEnergyClaimsInSampleRange` in [deep_energy_claims.txt](../ghidra/output/MikeCore/deep_energy_claims.txt)
- caller noti: `0x01353f80` e `0x01447a70`
- decompilato disponibile in [013903d0.c](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c)

Pattern osservabili nel decompilato:

- converte un range di sample in un range di indici/slice usando divisori letti da stato analyzer/description in [013903d0.c#L126](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L126)
- limita il range con un contatore massimo in [013903d0.c#L147](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L147)
- attraversa liste di source items e bucket per time-slice in [013903d0.c#L179](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L179) e [013903d0.c#L485](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L485)
- alloca o clona oggetti temporanei per slice via `FUN_015c4d90` in [013903d0.c#L645](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L645) e [013903d0.c#L714](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L714)
- legge dati spettrali via getter `FUN_015c6b60`, `FUN_015c66c0`, `FUN_015c6ba0` in [013903d0.c#L749](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L749)
- invoca `FUN_013924d0` per ogni slice in [013903d0.c#L773](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L773)

Assessment:

- questo e' il miglior punto di ingresso numerico oggi disponibile
- e' gia' abbastanza leggibile da essere rinominato e rispecificato a mano prima ancora di sbloccare le mega-funzioni fallite

### `0x015c4e40` — spectral slice init, non `getPhaseData`

Fatti verificati:

- il decompilato contiene stringhe `initFromTimeSignal()` e controlli parametri in [015c4e40.c#L114](../ghidra/output/MikeCore/decompiled/MUSpectralTimeSlice/015c4e40.c#L114)
- usa zeroing, memcpy, cache statiche e tabelle/log domain in [015c4e40.c#L146](../ghidra/output/MikeCore/decompiled/MUSpectralTimeSlice/015c4e40.c#L146) e [015c4e40.c#L241](../ghidra/output/MikeCore/decompiled/MUSpectralTimeSlice/015c4e40.c#L241)

Contraddizione aperta:

- [func_names.tsv](../ghidra/output/MikeCore/func_names.tsv) la etichetta ancora come `MUSpectralTimeSlice::getPhaseData`

Assessment:

- per il replication effort conviene trattarla come `initFromTimeSignal` ad alta confidenza pratica
- il naming in `func_names.tsv` va considerato obsoleto o errato per questo address

---

## Superficie Dati Verificata

### Metadata e matrici registrate da `0x01141790`

Nel costruttore/property graph di `MUElementAnalyzer` risultano inizializzate almeno queste superfici:

- `_pitchMatrixTimePosCount` in [01141790.c#L672](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01141790.c#L672)
- `_pitchMatrix` in [01141790.c#L691](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01141790.c#L691)
- `_useDNA2ForPolyphonicDetection` in [01141790.c#L788](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01141790.c#L788)
- `_timeSliceCount` in [01141790.c#L807](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01141790.c#L807)
- `_polyPitchEnergyMatrixExtracted` in [01141790.c#L845](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01141790.c#L845)
- `_polyPitchEnergyMatrixOriginal` in [01141790.c#L864](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01141790.c#L864)
- `_polyPitchRelevanceMatrixExtracted` in [01141790.c#L883](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01141790.c#L883)
- `_polyPitchRelevanceMatrixOriginal` in [01141790.c#L902](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01141790.c#L902)

`_relevanceMatrix` compare come helper metadata separato in [deep_relevance_matrix.txt](../ghidra/output/MikeCore/deep_relevance_matrix.txt). Oggi e' provata la sua esistenza, non il suo writer numerico.

### Metadata registrate da `0x01103ee0`

La funzione `0x01103ee0` registra almeno:

- `_windowOverlapForTimeSlices`
- `_energyRawMatrix`
- `_findMonophonicPitchInFrequencyDomain`

Vedi [deep_window_overlap.txt](../ghidra/output/MikeCore/deep_window_overlap.txt) e [dsp_xrefs.txt](../ghidra/output/MikeCore/dsp_xrefs.txt).

Assessment:

- `0x01103ee0` e' rilevante per il layout/metadata dello stato analyzer
- non e' una prova che sia il loop STFT principale

### Superficie spettrale letta da `0x013903d0`

Il kernel energy-claim legge almeno:

- magnitude data
- true frequency data
- tonality data

La prova locale piu' forte e' in [013903d0.c#L749](../ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c#L749) e nel riepilogo xref di [deep_spectral_slice.txt](../ghidra/output/MikeCore/deep_spectral_slice.txt).

---

## Branch Map Operativo

### Fatti verificati

1. Il nodo `0x01433f60` ha almeno due uscite principali, una verso il ramo poly e una verso il ramo mono.
2. Il ramo poly porta a `0x01447a70`.
3. Il ramo mono porta a `0x0146c830`.
4. Il ramo poly usa `0x013903d0` come sottoroutine interna o stage riusabile.
5. `0x013903d0` richiede dati spettrali per-slice e usa getter di `MUSpectralTimeSlice`.
6. I callsite reali del dispatcher sono ora fissati a `+26658` per il ramo poly e `+37662` per il ramo mono in [18_DNA2_CALLSITE_MAP.md](18_DNA2_CALLSITE_MAP.md).

### Inferenze operative da tenere separate

1. Il branch in `0x01433f60` probabilmente usa config/state di analyzer, inclusa forse `_useDNA2ForPolyphonicDetection`.
   Pero' il gate bool osservato subito prima della call poly non coincide con quel campo: e' solo un `non-null gate` su un pointer local.
2. Il front-end spettrale condiviso sembra passare per `MUSpectralTimeSlice::initFromTimeSignal` e helper vicini come `FUN_015c4d90`.
3. Il front-load poly non parte direttamente con il kernel claim: entra prima in helper di materializzazione/config e poi in uno stage numerico su buffer float.
4. Il writer numerico vero di `_relevanceMatrix` e delle poly pitch matrices e' a valle delle mega-funzioni fallite, non nei small helper di metadata.
5. L'edge `0x01447a70 -> 0x013903d0` e' ora confermato anche da LLDB con `callq 0x13903d0` a `0x01459424` (`+72116`).
6. Nel callsite poly osservato `sampleStart = 0`, `r9d = 0` e il secondo stack flag verso `013924d0` viene quindi disabilitato a monte.
7. Lo stack arg addizionale passato a `013903d0` e' un wrapper costruito sul `self` analyzer-like, non un sink esterno arbitrario.
8. Il local `-0x198(%rbp)` del dispatcher, usato per derivare `stack[0]` verso il ramo poly, e' ora chiuso come `GNList*` locale: viene allocato con vtable `DAT_02572358`, popolato via append helper `0x0d21140` e consumato/erased via `0x0d23620`.
9. La lista locale nasce dal self-slot `+0x120`, oggi chiuso come `_overallOverlapAtItemMarginsItem`; gli slot adiacenti `+0x118` e `+0x128` corrispondono a `_overallResidualItem` e `_overallAttacksItem`.
10. `0x00e85ea0` non e' un filtro item-level del dispatcher: e' un predicato runtime di compatibilita' di classe, usato per verificare che i wrapper estratti da `_overallOverlapAtItemMarginsItem` siano trattabili come `MUAudioSourcePrincipalItem`.
11. Il corridoio di popolazione della staging list e' un flatten a piu' livelli: `0x12e6160` materializza una second-level list-like wrapper, `0x12e5ae0` una third-level list-like wrapper, e i payload di quest'ultima vengono appesi via `0x0d21140`.
12. I due helper semplici del flatten leggono davvero `source + 0xa8` e `source + 0xb0`, ma quei campi non sono ancora promuovibili a `_nextItemInSequence` / `_previousItemInSequence`: i registrar chiudono solo le stringhe, mentre i consumer del `MUAudioSourcePrincipalItem` mostrano gia' campi sequence-like distinti a `+0xa0/+0xa8` e nel dispatcher gli helper operano su wrapper intermedi, non su `MUAudioSourcePrincipalItem` provati direttamente.
13. Il cluster adiacente `012e57f0 / 012e5b20 / 012e61a0 / 012e7210` converge su area `MULSSGenerator` / LSS-graph; `012e61a0` prova che `+0xa8` e' un link ricorsivo a lista annidata (`GNList`-like), mentre `012e7210` aggrega ricorsivamente la lista diretta `+0xb0` lungo i children `+0xa8`.

---

## Write-Set Corrente

| Nodo | Write-set o mutazione oggi supportata | Confidence |
|------|---------------------------------------|------------|
| `0x01433f60` | dispatch verso ramo mono/poly; coordinamento alto livello | High |
| `0x01433f60` local `-0x198(%rbp)` | `GNList*` locale di staging/work derivata da `_overallOverlapAtItemMarginsItem`, flattenata via helper list-like (`0x12e6160 -> 0x12e5ae0`) che leggono `first nested list link (+0xa8)` e `second nested list link (+0xb0)` su wrapper intermedi; il corridoio LSS adiacente restringe questi a `nestedChildListLink` e `directPayloadListLink`, ma non ancora a nomi musicali; la lista viene popolata con payload runtime-checkati come `MUAudioSourcePrincipalItem`-family e governa il `non-null gate` del callsite poly | High |
| `0x01447a70` | orchestration del ramo poly, call diretta a `0x013903d0`, callback/progress sink e cleanup di wrapper temporanei | High |
| `0x0146c830` | mutazione di liste/item monofonici e flag/relazioni di item | Medium |
| `0x013903d0` | buffer/oggetti temporanei per slice, percorrenza item->slice, chiamata downstream `0x013924d0` | High |
| `0x01141790` | registration metadata delle matrici e dei campi analyzer | Very high |
| `0x01103ee0` | registration metadata analyzer, inclusi overlap ed energyRawMatrix | Very high |

Nota importante:

- `_relevanceMatrix` e `_energyRawMatrix` sono oggi provate come superfici esistenti.
- il writer numerico preciso di entrambe non e' ancora localizzato con confidenza alta.

---

## Next Step Mirati In Ghidra GUI

1. In `0x01433f60`, trovare i due callsite reali verso `0x01447a70` e `0x0146c830` e annotare i predecessor block immediati.
2. Rinominare in `0x01433f60` i predicate input che governano il branch, senza assumere ancora che uno di essi sia `_useDNA2ForPolyphonicDetection`.
3. In `0x01447a70`, identificare i loop header dominanti attorno al callsite `+72116`.
4. In `0x01447a70`, verificare se il valore di ritorno di `0x013903d0` venga ignorato e se il valore reale stia nelle side effect su item/matrici/callback.
5. In `0x013903d0`, rinominare i locali come `sliceStart`, `sliceEndExclusive`, `currentItem`, `currentSlice`, `claimAccumulator`.
6. Tipizzare `FUN_015c4d90` per capire se sia factory, clone o adapter di `MUSpectralTimeSlice`.
7. Seguire i veri writer di `_relevanceMatrix` e `_polyPitch*Matrix*` partendo da `0x01447a70`, non da `0x01146100`.
8. Cercare il vero STFT loop separato da `0x01103ee0`, dato che questa funzione oggi si comporta soprattutto come init/property graph.

---

## Conclusione Operativa

Il replication path oggi piu' solido non e':

- "partire dai wrapper"
- "fidarsi del naming automatico"
- "trattare `0x01103ee0` come STFT loop gia' chiuso"

Il path corretto e':

1. fissare il branch dispatcher `0x01433f60`
2. aprire il poly core `0x01447a70`
3. rifinire semanticamente `0x013903d0`
4. legare questi nodi alle superfici dati reali registrate da `0x01141790`
5. solo dopo ricostruire le formule e il write-set delle matrici
