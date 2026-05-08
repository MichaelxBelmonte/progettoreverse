# 56 — Confidence-Gated Core Reconstruction

**Ultimo aggiornamento:** 2026-05-07

## Obiettivo

Ricostruire il core in codice pulito senza inventare formule, costanti o comportamenti non supportati dal reverse.

Da qui in poi vale una regola semplice:

- nessun modulo entra in implementazione se il suo perimetro non e' chiuso con `confidence >= 0.90`
- nessuna costante numerica viene "stimata a mano" per accelerare il lavoro
- nessun naming viene promosso a canonico se e' ancora `medium` o peggio

In pratica, il progetto di ricostruzione non avanza per "completamento percepito", ma per evidenza.

---

## Regole Operative

### 1. Confidence Floor

Ogni modulo viene classificato in una delle tre classi:

- `IMPLEMENTABLE` — perimetro e formule sufficientemente chiusi, `confidence >= 0.90`
- `PARTIAL` — layout o comportamento chiari, ma mancano formule o invarianti chiave
- `BLOCKED` — dipende ancora da reverse manuale su funzioni P0/P1 o da contraddizioni aperte

### 2. No Guessed Numbers

Non sono ammessi:

- threshold "ragionevoli" non tracciati a una fonte
- pesi arbitrari nelle formule aggregate
- normalizzazioni non supportate da callsite, disassembly o field usage

Se un valore e' solo inferito, resta:

- fuori dall'implementazione
- oppure dentro a un placeholder esplicitamente marcato come `NON_CANONICAL`

### 3. Separation Between Spec And Code

Il codice clean-room puo' usare solo:

- layout chiusi
- formule chiuse
- contratti ABI chiusi
- invarianti osservabili chiusi

Il materiale ancora `PARTIAL` o `BLOCKED` resta nei ledger e non entra nel codice operativo.

### 4. Module Gate

Ogni modulo deve avere:

- sorgenti reverse di riferimento
- confidence minima dichiarata
- lista dei campi/formule chiuse
- lista dei blocker residui

Se manca uno di questi quattro elementi, il modulo non passa in implementazione.

---

## Moduli Del Core

### Implementabili Ora

1. `Runtime/Object Model`
   Stato: `IMPLEMENTABLE`
   Base:
   - [07_DATA_STRUCTURES.md](07_DATA_STRUCTURES.md)
   - [20_SPECTRAL_SLICE_FIELD_MAP.md](20_SPECTRAL_SLICE_FIELD_MAP.md)
   - [29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md](29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md)

2. `FFT / STFT Front-End`
   Stato: `IMPLEMENTABLE`
   Base:
   - [03_FFT.md](03_FFT.md)
   - [42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md](42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md)
   - [46_FFT_BUFFER_ALIAS_AND_PACKED_LAYOUT_00E83530_00E83640.md](46_FFT_BUFFER_ALIAS_AND_PACKED_LAYOUT_00E83530_00E83640.md)

3. `Spectral Slice / Local Features`
   Stato: `IMPLEMENTABLE`
   Base:
   - [21_CLAIM_KERNEL_013924d0.md](21_CLAIM_KERNEL_013924d0.md)
   - [26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md](26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md)
   - [43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md](43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md)

4. `Raw Note Families / Matcher Locali`
   Stato: `IMPLEMENTABLE`
   Base:
   - [36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md](36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md)
   - [37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md](37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md)
   - [48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md](48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md)
   - [49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md](49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md)
   - [60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md](60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md)
   - [62_CLASS12_PREPROCESSOR_014A2170_015C2D90.md](62_CLASS12_PREPROCESSOR_014A2170_015C2D90.md)
   Chiuso:
   - carrier `MURawNoteSeparation` size `0x48`
   - ABI `014ba9e0`: `xmm0=start`, `xmm1=base strength`, `esi=class/state flag`
   - helper clean-room `014ba9e0 / 014ba950`: constructor start/strength/flag e clone completo del carrier
   - helper constructor-only del peer sintetico `01484bc0`: `start=current.start`, strength `1.0f`, flag `0x40`
   - origine builder-side di `+0x20`: massimo locale per classi `1/2`, contrasto locale per classe `8`, `1.0f` per peer sintetici `0x40`
   - preprocessing subset `014a2170 -> 015c2d90`: branch output-only `015c2da0`, high-shelf bidirezionale zero-state, cutoff adattivo `15..30` e baseline condiviso `7.0`
   - materializzatore `014a2170` per classi `1/2`: fine-run positiva, durata strict, massimo locale `> 0.0f`, start su peak o riallineamento a item esistente
   - `+0x40` come selected match / linked peer pointer, non metadata
   - `+0x34/+0x38` corretti da threshold pair a paired local smoothed peak gates: writer `014a3550`, max merge `014a3900`, OR gate `014a42b0`
   - subset numerico `014a3550` implementato: `+0x28` center score, `+0x2c` non-class1 ranking weight, `+0x30` class1 ranking weight, peak gates `+0x34/+0x38`
   - costanti builder lette da binario: `g_0239424c = 0.0f`, `g_02391090 = 0.100000001f`, `g_02390108 = 0.05`, `g_0240e400 = 0.0227`, `g_0240f0f0 = 441.0`, `g_02394254 = 0.01f`, fattori smoothing `5.0f / 30.0f`
   - `015c1480 / 015c0b60` chiuso come smoother esponenziale forward/reverse: `alpha = expf(-2.5f / width)`, radius `trunc(-2.5 / logf(alpha))`, mode `0` nel path classe `8`
   - pipeline classe `8` high-level: delta primo ordine, moving contrast assoluto scalato, clamp `4.0f`, smoothing esponenziale breve/lunga, segmenti valley, gate `max - min > 0.1`
   - implementazione clean-room operativa `raw_note_class8_builder.*`: mask positiva, filtro run corte, range protetti da linked successor item, delta, contrasto centrato, smoothing breve/lunga mode `0` e materializzazione `class_state_flags = 8`
   - subset clean-room `014a3900 / 014a42b0`: test class-gap `1/2`, controllo del terzo vicino, costo pair-arbitration, metadata di assorbimento class `2` a `+0x24`, merge max/OR dei campi chiusi, predicato peak-gate, predicato candidato primario, helper scalari del ranking span/score, planner one-pass e planner iterativo vector-backed; esclusi contenitore/refcount `GNList` originali
   Guardrail:
   - lo smoother mode `0` del path classe `8` e' implementato; i mode `1/2/3/4/5` restano fuori perimetro

### Implementabili Solo In Parte

5. `LSS / Nested Graph Topology`
   Stato: `PARTIAL`
   Base:
   - [57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md](57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md)
   - [58_MULSSGENERATOR_FIELD_MAP_AND_MUTATORS.md](58_MULSSGENERATOR_FIELD_MAP_AND_MUTATORS.md)
   - [59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md](59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md)
   Chiuso:
   - `012e6160` getter `source + 0xa8`
   - `012e5ae0` getter `source + 0xb0`
   - `012e7210` aggregazione ricorsiva di `+0xb0` lungo children `+0xa8`
   - field map strutturale `MULSSGenerator +0x90/+0x98/+0xa8/+0xb0/+0x118`
   - `012f0b60` identificato come propagatore centrale LSS/pitch-system, non come formula detector primaria
   - `01519670` identificato come gate split/clone su `abs(fVar12 - fVar11) >= 0.001f`, non come detector primario
   - `01516650` identificato come wrapper `01514480 -> 01515040`
   - `01515040` identificato come range reconciliation bridge su `+0x80`; `01516720` come bridge parallelo su `+0x88`
   - guardrail ownership aggiunto: `MUPercussivePitchSystem` ha metadata size `0x58`, quindi `+0x78/+0x80/+0x88` restano slot di payload/anchor node o derivati, non campi diretti implementabili della base percussiva
   - `MUScalePitchSystem` ha metadata size `0x78`; `011a6790 / 0091ac08` restringono i flag high-level `+0x58..+0x5c` a `_tuningIsSuggestedRelevant`, `_modeIsSuggestedRelevant`, `_tuningPitchAnchorIsSuggestedRelevant`, `_modeFundamentalOffsetIsSuggestedRelevant`, `_stretchingIsSuggestedRelevant`
   - `01252960` identificato come range/segment iterator usato dal pitch-system bridge
   - unita' scalar del bridge chiusa come cents offset rispetto ad A4/440 tramite `01773e50 / 01773e80 / 01767a10`
   - `01773fe0` identificato come selector/interpolator di pitch assoluto in cents
   - `01774880` identificato come collector di run candidate: costruisce una lista di indici contigui per `targetIndex`, con `outLowerIndex` usato dal ramo interpolato
   - pitch-table di `01774880` ristretto a layout `MUScaleTuning-like`: `+0x38 _isCyclic`, `+0x48 _rootIndex`, `+0x50 _tuning` / `MUScaleTuningInterval`, `+0x58 _scaleTuning`, `+0x60 _tuningPitchAnchor`, `+0x64 _westernStandardPitchIndexAnchor`, `+0x68 _stretching`
   - child `MUScaleTuningInterval` ristretto a `+0x38 _cent`, `+0x3c _westernStandardPitchIndexOffset`, `+0x40 _intervals`
   - `017792c0` identificato come bounded tuning lookup/extrapolator su dominio `1200..10800` cents
   - `017794e0` identificato come lookup/extrapolator parallelo su mapper `+0x50`, gated da dominio dinamico `+0x58/+0x5c`
   - mapper `FUN_000bea40` identificato come sampled/data-point function con inserimento point via `vtable + 0x418` e lookup piecewise-linear via `vtable + 0x380`
   - layout transform `MUScaleTuning` chiuso per `+0x38 _tuning/_stretching`, `+0x40 _stretchingFunction`, `+0x48 _mappingFunction`, `+0x50 _inverseMappingFunction`, `+0x58/+0x5c` bounds e `+0x60` cache-validation flag
   - `MUScaleStretchTuningCtrl` identificato come editor/render path parziale per `_stretchingFunction`: set source, insert point, move point, render curva, vertical range e rigenerazione cache mapper
   - payload `_stretchingFunction` chiusi per `01777f70` flat 3-point `(1200,0)/(6900,0)/(10800,0)` e `017780f0` fixed 10-point standard stretch
   - binding action chiuso tramite pointer-to-member/vtable: `handleReset -> 01777f70`, `handleSetStandardFunction -> 017780f0`, `handleSetVerticalRange -> 01b43f40`
   - owner edge `MUScaleTuning-like +0x68 -> MUScaleStretching` vincolato tramite `0176d660 / 0176e1e0`, con tipo stringa `MUScaleStretching`
   - `017380d0` identificato come offset aligner: delta tra due `+0x64`, applicato a `dest + 0x6c` con wrap opzionale
   - `019f8880 / 019f8cb0 / 019f90e0` identificati come setter retained-reference scale-pitch-system-like per `+0x78/+0x70/+0x80`
   - `01525150 / 01525c50 / 01525fb0` identificati come cache/index builder scale-pitch-system-like per `+0x60/+0x68/+0x78/+0x80`
   - collisione di owner documentata: `MUScalePitchSystem +0x58..+0x5c` sono flag suggested-relevant, mentre `scale_pitch_system_like_node +0x58` e' step intero nel cache-builder; non vanno fusi
   - famiglia `+0x80` ristretta come `scalar-anchor + segment-store + query-cache`: `0150bf50` builder/update, `01511080` compatibility gate, `015104e0` builder cache `+0x90`, `01510b20` query adapter
   - payload della cache `+0x90` ristretto: `015104e0` inserisce oggetti `g_025fee18`; `015200c0` e' il constructor pulito; `014fdd70`, `0173c410`, `0173c840`, `0173d440` mostrano builder di payload pitch/scale-query con child interval `g_025ffd60`, non range audio grezzi
   - famiglia percussive `+0x88` ristretta: `01516720` builder/bridge con `01254260/012549c0` e state advance `018847d0/018847e0`, `01512000` compatibility gate, `0151a240` nested segment reconciler con helper opachi `01531ce0..01531df0`, `0150f7e0` dirty-refresh orchestrator, `00154c40` propagation consumer
   - metriche inspector/selezione ristrette: `01bab160` aggrega indice pitch, delta cent-like e valore assoluto cent-like; scrive campi UI solo se min/max coincidono, altrimenti resetta/mantiene multi-value. La conversione frequency usa `exp2f(cents * 1/1200) * 8.17579936`
   - nomi candidati `_noiseRanges`, `_rangesByAudioSourceItem` e `_audioSource*Items` non sono bindati a `+0x80/+0x88`; l'evidenza corrente li colloca rispettivamente in `MUTimeSliceParameterBuffer`, `MUElementAnalyzerEngineStaticTables` e contesto timeline/audio-source
   Blocker:
   - classe owner finale dei wrapper intermedi non chiusa
   - semantica musicale dei link non chiusa
   - mutatori completi del grafo LSS non chiusi
   - semantica dell'owner high-level e propagazione high-level dello stretching non ancora chiuse
   - nome classe canonico finale del pitch-table ancora prudente perche' i clean dump classificano il cluster come `GNInt`, anche se il layout operativo `MUScaleTuning-like` e' ora ristretto
   - owner canonico dei payload/anchor node che espongono `+0x78/+0x80/+0x88` non ancora chiuso
   - semantica musicale distinta tra famiglia `+0x80` come `scalar-anchor + segment-store + query-cache` e famiglia percussive `+0x88` non ancora chiusa

6. `Relevance / Path Ranking`
   Stato: `PARTIAL`
   Base:
   - [38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md](38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md)
   - [39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md](39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md)
   Blocker:
   - non tutte le policy di ranking/path sono canonizzate
   - il cluster getter adiacente `014f9e20 / 014f9e30` resta non chiuso

7. `Quality Scoring Globale`
   Stato: `PARTIAL`
   Base:
   - [05_QUALITY_SCORING.md](05_QUALITY_SCORING.md)
   - [27_FINAL_SCORING_MODEL_013924D0.md](27_FINAL_SCORING_MODEL_013924D0.md)
   Blocker:
   - molte metriche sono nominate ma non ancora chiuse formula-per-formula

### Ancora Bloccati

8. `DNA2 High-Level`
   Stato: `BLOCKED`
   Base:
   - [16_CANONICAL_LEDGER.md](16_CANONICAL_LEDGER.md)
   - [17_DNA2_BRANCH_LEDGER.md](17_DNA2_BRANCH_LEDGER.md)
   - [18_DNA2_CALLSITE_MAP.md](18_DNA2_CALLSITE_MAP.md)
   - [19_DISPATCHER_STACK_LEDGER.md](19_DISPATCHER_STACK_LEDGER.md)
   Blocker:
   - `0x01447a70`
   - `0x01433f60`

9. `Resynthesis / Formants / Shaper`
   Stato: `BLOCKED`
   Base:
   - [06_FORMANT_SYNTHESIS.md](06_FORMANT_SYNTHESIS.md)
   Blocker:
   - pipeline matematica non ancora chiusa in modo fedele

---

## Policy Per Il Codice Clean-Room

Quando apriremo `core_reconstruction/`, il codice dovra' essere organizzato cosi':

- `implemented/` solo per moduli `IMPLEMENTABLE`
- `experimental/` vietato
- `blocked/` solo note o stub documentali, nessuna formula attiva

Ogni file implementato dovra' riportare:

- modulo
- confidence gate
- documenti reverse da cui deriva
- elenco dei campi/formule inclusi

---

## Decisione Operativa

Il prossimo passo corretto non e' "scrivere tutto il core".

Il prossimo passo corretto e':

1. aprire `core_reconstruction/` solo per i moduli `IMPLEMENTABLE`
2. lasciare fuori DNA2 high-level, quality aggregate e resynthesis
3. continuare il reverse esclusivamente sui blocker P0/P1

Questo e' l'unico modo per arrivare a una ricostruzione fedele con confidence > 90%.

---

## Stato Di Apertura Del Workspace Clean-Room

### Gia' aperto e verificato in compilazione

- `Runtime/Object Model`
- `FFT / STFT Front-End`
- `Spectral Slice / Local Features`
  solo per:
  - `spectralMedianFrequencyHz`
- `Raw Note Families / Matcher Locali`
  solo per:
  - carrier `MURawNoteSeparation`
  - constructor/clone `014ba9e0 / 014ba950`
  - constructor-only peer sintetico `01484bc0` con strength `1.0f` e flag `0x40`
  - finestra locale del matcher
  - contratto `threshold-seeded matcher`
  - seed dinamico da cached spectral reference:
    `max(0.7f, reference * 0.3f)` e bridge `* 0.5f`
  - score di selezione candidato:
    `(1.0 - abs(deltaStart) / 0.07) * classWeight * field20`
  - origine builder-side di `+0x20` per classi `1/2/8/0x40`
  - soglie/finestra numeriche dei builder raw-note lette da binario
  - pipeline classe `8` high-level chiusa, con `015c1480 / 015c0b60` ristretto a smoother esponenziale forward/reverse mode `0`
  - builder classe `8` clean-room operativo, incluso il mapping item linked-successor a range protetti; resta prudente il nome canonico dell'owner
  - scalar pieces clean-room di `015c1480 / 015c0b60`: width->alpha, alpha->radius, recurrence one-pole, scratch sizing e loop mode `0`
  - subset numerico del writer `014a3550`, esclusi traversal `GNList` e refcount
  - interval-gate subset di `014a3900 / 014a42b0`, limitato a class-gap, third-neighbour guard, cost/predicate/field merge verificati, metadata class `2` a `+0x24`, primary candidate gate, helper scalari gap-ranking, planner one-pass e planner iterativo vector-backed
- `Analyzer Gate Cluster Support`
  solo per:
  - estrazione middle-value da buffer ordinato
  - default scalar `0.01f` del path `+0x104`
  - raccolta `item->+0x40->+0x20`
  - `linked-field20 coverage ratio`
  - field map canonica `+0xf4..+0x108` chiusa via property registration di `MUElementAnalyzer`

Build locale verificata il `2026-04-22` con target:

- `mikecore_runtime_fft`

Restano fuori dal codice attivo:

- `trueFreqData` derivation
- `tonalityData` derivation
- `transiencyData` derivation
- `DNA2 High-Level`
- `Quality Scoring Globale`
- `Resynthesis / Formants / Shaper`
