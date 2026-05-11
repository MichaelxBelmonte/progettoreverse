# 09 — Stato di Avanzamento

**Ultimo aggiornamento:** 2026-04-22

## Fasi completate

### Fase A — Wrapper VST3 ✅

- [x] Meccanismo di caricamento Core.sbb ricostruito
- [x] API offuscata a 5 funzioni identificata e mappata
- [x] Code signing verification analizzato
- [x] UUID/GUID decodificati
- [x] Audio buffer flow ricostruito (pass-through)
- [x] Struttura interna (98 funzioni, 384 vtable calls)
- [x] Interfaccia ARA catalogata (45 classi MUAra*)

**Doc:** [02_WRAPPER_VST3.md](02_WRAPPER_VST3.md)

### Fase B — Entry points Core ✅

- [x] MUElementAnalyzer identificato e pipeline mappata
- [x] MUSpectralTimeSlice e tutti i suoi campi
- [x] Switch mono/poli detection
- [x] Pitch Relevance Matrix (algoritmo iterativo)
- [x] MUVoiceAnalyzer → decompilato come MUVoiceMapper (5 funzioni)
- [x] MUPitchMapper (9 funcs), MUPitchClassMapper (5 funcs), MUPartMapper/MUPart (2 funcs)
- [x] redetectMonophonicPitchAtSuggestedPitchAndUpdatePotentialItem() → decompilato a `014ea210`

**Doc:** [04_DNA_ALGORITHM.md](04_DNA_ALGORITHM.md), [07_DATA_STRUCTURES.md](07_DATA_STRUCTURES.md)

### Fase C — FFT ✅

- [x] Identificato uso di Apple vDSP (Accelerate)
- [x] 11 dimensioni FFT supportate (16-16384)
- [x] Dual FFT (_fft1, _fft2)
- [x] Processing loop SSE magnitudine/fase
- [x] Sample rate reduction pre-FFT
- [x] Tipo di finestra: Hann (sqrt-Hann)
- [x] Overlap variables: `_windowOverlapForTimeSlices`, `_windowOverlapForTrueFreqs`
- [x] FFT factory decompilato (`GNFastFourierTransformer::create`)
- [x] Funzione `0x01103ee0` riclassificata come `MUElementAnalyzer copy/init + property graph`
- [x] Funzione `0x0149f6a0` stretta a `spectralMedianFrequencyHz` / `rolloff 50%`
- [x] Funzione `0x00e83530` stretta a wrapper forward FFT reale del transformer
- [x] Funzione `0x00e83640` stretta a sibling inverse-like sullo stesso contratto buffer aliasabile `src/dst`
- [x] Funzione `0x015c4d90` stretta a adapter thin sopra `MUSpectralTimeSlice::initFromTimeSignal`
- [x] ABI bassa dei wrapper FFT stretta a buffer aliasabili `src/dst`, con packed layout `DC/Nyquist + re/im`; `MikeCoreF` conferma la stessa pipeline spettrale a livello alto, ma non ancora il mapping address-level helper-per-helper
- [x] Consumer map di `0x0149f6a0` chiuso: unico caller diretto `01484bc0`, cache a `MUElementAnalyzer + 0x110`, bridge verso `014a74b0` e prefiltro `MURawNoteSeparation` via `014a89c0`

**Doc:** [03_FFT.md](03_FFT.md)

### Fase D — DNA2 Energy Claims ✅

- [x] `assignEnergyClaimsInSampleRange()` decompilato (5999 bytes)
- [x] Struct EnergyClaimSystem estratta (11 proprieta')
- [x] `_energyRawMatrix` trovata in MUElementAnalyzer (float*)
- [x] Sub-armonici: deep extraction + decompilazione
- [x] MUVoiceMapper: 5 funzioni decompilate

**Doc:** [04_DNA_ALGORITHM.md](04_DNA_ALGORITHM.md)

### Fase E — Formant Synthesis ✅

- [x] 13 parametri FormantsSynth_* completi con tipi
- [x] Modello sintesi glottica ricostruito (fondamentale + sub + noise + pulse + growl)
- [x] Spectrum Shaper: 65 proprieta' + 155 funzioni decompilate
- [x] Resintesi: MULSSGenerator (114 funcs) + MULSSComponentRenderer (21 funcs)

**Doc:** [06_FORMANT_SYNTHESIS.md](06_FORMANT_SYNTHESIS.md)

### Fase F — Metal GPU ✅

- [x] `default.metallib` disassemblato con Metal tools (Xcode)
- [x] Solo 2 shader: vertexShader (passthrough) + samplingShader (texture blit)
- [x] Conclusione: GPU usata solo per rendering UI, zero DSP

**Doc:** [09_RESOURCES.md](09_RESOURCES.md)

### Fase G — Decompilazione completa ✅

- [x] 7,860 funzioni decompilate in pseudocode C (75MB raw, 109MB pulito)
- [x] 567 classi identificate e classificate (76.5%)
- [x] 6,217 proprieta' con nomi e tipi reali
- [x] 670 struct headers C++ generati
- [x] 1,667 funzioni small/math annotate
- [x] 620 costanti numeriche estratte
- [x] Codice pulito con tipi corretti e nomi funzione

**Output:** `reconstructed/`

## Prossima fase

### Fase H — Replication Blueprint

1. Canonical ledger delle funzioni P0/P1 (`0x01447a70`, `0x01433f60`, `0x013903d0`, `0x01103ee0`, `0x00e83120`)
2. Recovery rigoroso dei layout dati (`MUSpectralTimeSlice`, `MUElementAnalyzer`, `MUAudioSourceDescription`)
3. Spec eseguibile STFT / spectral front-end
4. Spec eseguibile DNA2 / energy claims / relevance matrix
5. Recovery formule quality scoring
6. Solo dopo: clean-room implementation di core e wrapper

### Policy attiva

- nessuna implementazione del core sotto `confidence >= 0.90`
- nessuna costante numerica inventata per "chiudere" un modulo
- implementazione consentita solo per i moduli marcati `IMPLEMENTABLE`

**Doc di policy:** [56_CONFIDENCE_GATED_RECONSTRUCTION.md](56_CONFIDENCE_GATED_RECONSTRUCTION.md)

**Doc di riferimento:** [15_REPLICATION_BLUEPRINT.md](15_REPLICATION_BLUEPRINT.md)

### Apertura workspace clean-room

- `core_reconstruction/` aperto solo per moduli `IMPLEMENTABLE`
- scaffold `runtime / fft` compilato localmente con target `mikecore_runtime_fft`
- feature locali aperte solo per `spectralMedianFrequencyHz`
- raw-note layer aperto per carrier `MURawNoteSeparation`, contratto matcher seedato e builder candidati classe `8`
- raw-note carrier esteso con constructor/clone clean-room `014ba9e0 / 014ba950`
- raw-note peer sintetico/post-match `01484bc0` aperto nel subset non mutante: constructor `start=current.start`, strength `1.0f`, flag `0x40`; propagation class `2`, claim class `1`, predicato cleanup `flags & 0x70`, piano vector-backed di insert sintetico/cleanup class `1`
- raw-note matcher esteso con finestra locale canonicale e wrapper sequence-level `014af180` su `std::span`
- raw-note smoother esteso per scalar pieces e loop mode `0` di `015c1480 / 015c0b60`: `alpha = expf(-2.5f / width)`, radius da `logf(alpha)`, recurrence one-pole, bzero prefix, warm-up sinistro, forward buffer, tail destro, warm-up reverse e reverse buffer
- raw-note builder classe `8` operativo in clean-room per mask, filtro run corte, mapping linked-successor item a range protetti, delta, contrasto centrato, smoothing breve/lunga e gate `max-min`; resta prudente il nome canonico dell'owner che fornisce quegli item
- raw-note metric writer aperto per il subset numerico `014a3550`: `+0x28`, ranking weights `+0x2c/+0x30` e peak gates `+0x34/+0x38`; restano fuori traversal `GNList` e refcount
- raw-note interval gate subset aperto per `014a3900 / 014a42b0`: costo pair-arbitration, metadata class `2` a `+0x24`, merge max/OR dei campi chiusi, predicato peak-gate, predicato/collector candidato primario, helper scalari ranking span/score, planner one-pass e planner iterativo vector-backed; contenitore/refcount `GNList` originali restano fuori
- supporto analyzer gate esteso con default `0.01f`, coverage dei linked peers, mediana `_allEnergyRelevantRegionRatio` su ratio consecutivi con gap limit `2.0`, e nomi canonici `_allTonality / _allCentDiffPerMillisecond / _allPitchRangePerNote / _allEnergyRelevantRegionRatio / _allAttackPeakQuality / _allAttackPeakToEnergyRegionRatio`
- `DNA2`, quality aggregate e resynthesis restano fuori dal codice attivo

**Ledger canonico:** [16_CANONICAL_LEDGER.md](16_CANONICAL_LEDGER.md)

**Ledger DNA2 operativo:** [17_DNA2_BRANCH_LEDGER.md](17_DNA2_BRANCH_LEDGER.md)

**Callsite map DNA2:** [18_DNA2_CALLSITE_MAP.md](18_DNA2_CALLSITE_MAP.md)

**Dispatcher stack ledger:** [19_DISPATCHER_STACK_LEDGER.md](19_DISPATCHER_STACK_LEDGER.md)

**Field map slice spettrale:** [20_SPECTRAL_SLICE_FIELD_MAP.md](20_SPECTRAL_SLICE_FIELD_MAP.md)

**Kernel claim/scoring:** [21_CLAIM_KERNEL_013924d0.md](21_CLAIM_KERNEL_013924d0.md)

**Item score ledger:** [22_ITEM_SCORE_FIELD_LEDGER.md](22_ITEM_SCORE_FIELD_LEDGER.md)

**Descriptor helpers:** [23_DESCRIPTOR_HELPERS_014EECB0_014EED60.md](23_DESCRIPTOR_HELPERS_014EECB0_014EED60.md)

**Windowed overlap kernel:** [24_WINDOWED_OVERLAP_KERNEL_014B71E0.md](24_WINDOWED_OVERLAP_KERNEL_014B71E0.md)

**Harmonic stencil writer:** [25_HARMONIC_STENCIL_WRITER_014B74F0.md](25_HARMONIC_STENCIL_WRITER_014B74F0.md)

**Spectral buffer callsite map:** [26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md](26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md)

**Final scoring model:** [27_FINAL_SCORING_MODEL_013924D0.md](27_FINAL_SCORING_MODEL_013924D0.md)

**Poly claim bridge:** [28_POLY_CLAIM_BRIDGE_01447A70_013903D0.md](28_POLY_CLAIM_BRIDGE_01447A70_013903D0.md)

**Shared descriptor cache:** [29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md](29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md)

**Descriptor slot count:** [30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md](30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md)

**Candidate adapter 0x168:** [31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md](31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md)

**GNList topology 014f7360:** [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md)

**Property point family:** [33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md](33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md)

**DAT_025f1488 correction:** [34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md](34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md)

**Property point copy/insert:** [35_PROPERTY_POINT_COPY_INSERT_014EE580_014C2E20.md](35_PROPERTY_POINT_COPY_INSERT_014EE580_014C2E20.md)

**Interval gate model:** [36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md](36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md)

**MURawNoteSeparation family:** [37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md](37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md)

**MUMatrixPathPoint family:** [38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md](38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md)

**Shaper source + shortlist policy:** [39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md](39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md)

**Adjacent getter cluster 014f9e20/014f9e30:** [40_ADJACENT_GETTER_CLUSTER_014F9E20_014F9E30.md](40_ADJACENT_GETTER_CLUSTER_014F9E20_014F9E30.md)

**MUElementAnalyzer copy/init 01103ee0:** [41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md](41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md)

**Shared spectral preamble:** [42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md](42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md)

**Spectral median frequency 0149f6a0:** [43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md](43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md)

**Spectral median consumer map:** [47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md](47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md)

**Analyzer gate metric cluster:** [48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md](48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md)

**Threshold-seeded raw note matcher:** [49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md](49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md)

**ClassCode 1 vs 2 matcher path:** [50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md](50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md)

**Auxiliary peer list slot self + 0xd0:** [51_AUXILIARY_PEER_LIST_SLOT_SELF_0XD0_01484BC0_014AB140.md](51_AUXILIARY_PEER_LIST_SLOT_SELF_0XD0_01484BC0_014AB140.md)

**Working GNList slot self + 0x158:** [52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md](52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md)

**Working GNList payload family:** [53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md](53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md)

**MUPosValue cluster:** [54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md](54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md)

**Extended point object 01432b10:** [55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md](55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md)

**FFT helper cluster:** [44_FFT_HELPER_CLUSTER_00E83010_00E83530_015C4D90.md](44_FFT_HELPER_CLUSTER_00E83010_00E83530_015C4D90.md)

**LSS nested list helpers:** [57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md](57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md)

**MULSSGenerator field map:** [58_MULSSGENERATOR_FIELD_MAP_AND_MUTATORS.md](58_MULSSGENERATOR_FIELD_MAP_AND_MUTATORS.md)

**Percussive pitch-system bridge:** [59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md](59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md)

**Exponential smoother 015c1480:** [60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md](60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md)

**Stato operativo corrente:** helper iniziali del front-load poly fissati come `collection/context -> descriptor cache condiviso -> FFT/buffer`; `MUSpectralTimeSlice` ha ora un offset map reale `0x10..0x48`; `DAT_025f1488` e' stata corretta in modo rigoroso a vtable di `MUSpectralTimeSlice`; `013924d0` resta ristretta a kernel numerico di scoring/claim weighting; la famiglia item di scoring resta separata sia dai list node di matching sia dagli object slice; `item + 0x14` e' ormai fortemente vincolato a pitch assoluto in cents; `014eed60/014eecb0` sono stati ridotti a helper lazy separati; `item + 0x58` emerge come weight numerico secondario energia/qualita', non come semplice metadata; `item + 0x24` e' ora ristretto a local overlap/residual evidence float con floor a `FLT_MIN`, alimentato da `014b71e0`; il mapping reale `013903d0 -> 013924d0 -> 014eecb0 -> 014b71e0` e' ora chiuso con `trueFreqData` come asse, `magnitudeData` come buffer energia e `tonalityData` come weight/mask addizionale; la call `0x01447a70 -> 0x013903d0` e' ora confermata direttamente a `+72116`; il dispatcher poly passa anche un gate bool esplicito su `stack[0] = (-0x198 != 0)` prima di `0x01447a70`; il local `-0x198(%rbp)` e' ormai chiuso come `GNList*` di staging derivata da `_overallOverlapAtItemMarginsItem`, flattenata via helper list-like `0x12e6160 -> 0x12e5ae0`; `0x12e6160` e `0x12e5ae0` sono ora ridotti con certezza a semplici wrapped-pointer getter rispettivamente di `source + 0xa8` e `source + 0xb0`, ma quei due offset restano volutamente senza nome canonico nel corridoio DNA2 perche' i registrar `_nextItemInSequence` / `_previousItemInSequence` non chiudono il binding offset e i consumer del `MUAudioSourcePrincipalItem` mostrano gia' campi sequence-like distinti a `+0xa0/+0xa8`; `0x00e85ea0` nel suo corridoio non e' un filtro musicale ma un predicato runtime di compatibilita' di classe usato per verificare il cast a `MUAudioSourcePrincipalItem`; il blocco `state + 0x1a0` resta descriptor cache condiviso che governa FFT size, sample->slice mapping e cardinalita' del cluster renderer/slot a `descriptor + 0x88`; il cluster alto `_isMarkedAsPreliminaryItem / _sortingValue / _harmonicNumber / relevance interval` resta separato nel candidate adapter `0x168`; il corridoio `014a3900 / 014a42b0` e' ora re-homed sulla famiglia concreta `MURawNoteSeparation`, con costruttore `014ba9e0`, copier `014ba950`, writer `014a3550` e flag osservati `1/2/8/0x10/0x40`; il matcher `014af180` aggiunge un tassello strutturale forte: filtra `MURawNoteSeparation` per class code, finestra temporale e threshold su `field_20`, poi materializza il best match in `+0x40` usando `+0x30` per class `1` e `+0x2c` per gli altri rami; il confronto diretto dei due callsite di `01484bc0` e' adesso chiuso: `class 2` propaga peer gia' esistenti e marca il vincitore con `0x20`, mentre `class 1` puo' anche materializzare un peer sintetico `0x40`, inserirlo in lista e compattare i vicini non reclamati; inoltre la lista ausiliaria di questo ramo non e' piu' `open`: e' `MUElementAnalyzer + 0xd0` (`this_ptr[0x1a]`), una `GNList` persistente inizializzata dai costruttori e riusata anche piu' avanti da `014ab140`; in parallelo il sibling `MUElementAnalyzer + 0x158` (`this_ptr[0x2b]`) non va piu' confuso con quel registry: e' anch'esso una `GNList`, ma di lavoro per-run, allocata/reset dentro `01484bc0` e propagata nella catena `0149c330 -> 0149d5b0 -> 0149ded0 -> 0149e4a0 -> 0149ebe0 -> 014aa770`; il payload del suo corridoio principale non e' piu' aperto ma chiuso su una topologia annidata `GNList<GNList<MUPitchMatrixPeak>>`, con `0149c330` come builder, `014b3460` come linker/reset helper e `014b3ce0` come bridge di selezione; in parallelo `014328b0` e' stato corretto in modo rigoroso: non e' un peak-builder ma un helper `MUPosValue` da due double (`+0x10` posizione, `+0x18` valore), mentre `01432b10` e' ora ristretto piu' precisamente a un extended point object con field map prudente `+0x10 position/index`, `+0x18 value`, `+0x20 gating/prominence scalar`, osservato sia in `GNInt` sia in `MUSpectrumShaper` e quindi non piu' trattabile come semplice variante di `MUPosValue`; il layer property-point a valle resta piu' stretto grazie a `014ee580` e `014c2e20`; il payload locale di `014f7360` non e' piu' `open` ed e' ora chiuso su `MUMatrixPathPoint`, con `MUMatrixPath` come wrapper di merge/adiacenza; il callsite `014902f0 -> 014f9d00` mostra ora che `MUMatrixPathPoint::object` e' un back-reference al source-item corrente e la shortlist finale usa sort completo decrescente su `bestNeighbourQuality` + cutdown esplicito al `75%` circa per `count >= 10`; il cluster getter adiacente `014f9e20 / 014f9e30` e' stato separato esplicitamente e non giustifica ancora un campo `+0x3c` nel payload shortlist; `01103ee0` converge ormai in modo forte su `MUElementAnalyzer copy/init + property graph`, non sul loop STFT principale; il front-end spettrale reale converge invece su un corridoio condiviso `00e83120 -> 00e83530 -> 00e83010/00e83da0 -> 015c4d90/015c4e40`, ma adesso con semantica piu' stretta: `00e83530` e' il wrapper forward FFT reale, `015c4d90` e' un adapter thin, `0149f6a0` e' chiusa come `spectralMedianFrequencyHz`, il suo consumer map e' ora chiuso su `01484bc0 -> self + 0x110 -> 014a74b0 / 014a89c0`, e `014a74b0` e' stata ridotta a writer multi-output del cluster analyzer `+0xf4 .. +0x108`.

Nota raw-note builder-side: `014ba9e0` e' ora chiuso come ABI `xmm0=start`, `xmm1=base strength`, `esi=flag`. `014a2170` genera candidate `1/2` da run positive con massimo locale sopra `g_0239424c` come `+0x20`; `014afb20` genera candidate `8` da contrasto locale sopra `g_02391090`; `01484bc0` genera peer sintetici `0x40` con `+0x20 = 1.0f`. Le soglie/finestra principali sono ora lette dal binario: `g_0239424c = 0.0f`, `g_02391090 = 0.100000001f`, `g_02390108 = 0.05`, `g_0240e400 = 0.0227`, `g_0240f0f0 = 441.0`, `g_02394254 = 0.01f`, smoothing factors `5.0f / 30.0f`. La pipeline classe `8` e' chiusa high-level come delta primo ordine -> moving contrast assoluto -> clamp `4.0f` -> smoother esponenziale breve/lungo `015c1480` mode `0` -> valley segment -> `max - min > 0.1`; il mapping linked-successor item a range protetti e' implementato, mentre resta prudente il nome canonico dell'owner di quegli item. Correzione `014a3550`: il subset numerico del writer e' ora nel core clean-room per `+0x28/+0x2c/+0x30/+0x34/+0x38`; il metadata class `2` a `+0x24`, il ranking span/score scalare, il planner one-pass e il planner iterativo vector-backed di `014a42b0` sono ora implementati con costanti reali; restano fuori contenitore/refcount `GNList` originali.

Nota implementazione clean-room `014a2170`: `raw_note_class12_builder.*` espone ora il preprocessing subset classi `1/2` e il materializzatore. Il preprocessing implementato e' limitato al branch output-only `015c2d90 -> 015c2da0` usato da `014a2170`: high-shelf bidirezionale zero-state con gain `-40.0f`, shape `0.8f`, cutoff adattivo `clamp(reference * 0.3, 15, 30)` e secondo baseline condiviso a `7.0f`. Il materializzatore resta gate durata strict, massimo locale `> 0.0f`, start da peak o riallineamento a item esistente e flag canonici `1/2`.

Nota DNA2/LSS: `012e61a0` prova che il link `+0xa8` del cluster LSS e' una lista annidata ricorsiva `GNList`-like; `012e7210` aggiunge che `+0xb0` viene aggregato ricorsivamente lungo i children `+0xa8`. Questo rafforza la lettura del dispatcher come flatten di topologia LSS verso payload `MUAudioSourcePrincipalItem`, ma non chiude ancora la semantica musicale dei link intermedi.

Nota MULSSGenerator: `01653e10`, `0164e420`, `0164f500` e `012f0b60` chiudono una field map strutturale parziale su `+0x90/+0x98/+0xa8/+0xb0/+0xb8/+0x118`; `012f0b60` e' ora ristretto a propagatore centrale LSS/pitch-system che rientra in `012e7210` e chiama helper `MUPercussivePitchSystem`, non a formula primaria di detection.

Nota pitch-system bridge: `01519670` e' chiuso come gate split/clone su `abs(fVar12 - fVar11) >= 0.001f`, con `DAT_0239425c = 0.00100000005f` e `_DAT_02390140 = 0x7fffffff` verificati da binario. L'unita' dello scalar e' ora chiusa: `01773e50 / 01773e80 / 01767a10` lavorano in cents offset rispetto ad A4/440, con conversioni basate su `8.17579936 Hz`, `1/1200`, `1200/ln(2)`, `440 Hz` e offset `-6900`. `01773fe0` e' ora selector/interpolator di pitch assoluto in cents: interpola se non trova candidati, usa il valore esatto se ne trova uno, e su candidati multipli sceglie quello piu' vicino alla media. `01774880` non e' piu' scatola nera come build policy: e' un collector di indici/key contigui per `targetIndex`, con `outLowerIndex` usato per il ramo interpolato; il pitch-table e' ristretto a layout `MUScaleTuning-like` con `+0x38 _isCyclic`, `+0x48 _rootIndex`, `+0x50 _tuning/MUScaleTuningInterval`, `+0x60 _tuningPitchAnchor`, `+0x64 _westernStandardPitchIndexAnchor` e child interval `+0x38 _cent / +0x3c _westernStandardPitchIndexOffset`. `017792c0` e' chiuso come bounded tuning lookup/extrapolator su dominio `1200..10800` cents; `017794e0` e' il transform parallelo su mapper `+0x50` con dominio dinamico `+0x58/+0x5c`. Il mapper chiamato via `vtable + 0x380` e' ora chiuso come sampled/data-point function con inserimento point via `+0x418` e interpolazione lineare tra point. Il layout del transform `MUScaleStretching` e' chiuso su `_tuning/_stretching`, `_stretchingFunction`, `_mappingFunction`, `_inverseMappingFunction`, `_lowestStretchedPitch`, `_highestStretchedPitch` e `_didRequestCacheValidation`. `MUScaleStretchTuningCtrl` chiude parzialmente la provenienza editoriale di `_stretchingFunction`: set source `+0x140`, cache `+0x148`, vertical range `+0x150`, insert point con `013fae90/013faee0/013f2cf0`, drag point e rigenerazione cache con `01778a40/01778fe0`. I payload action sono ora chiusi: `handleReset` risolve via pointer-to-member/vtable a `01b43670 -> 01777f70` e costruisce la flat 3-point `(1200,0)/(6900,0)/(10800,0)`, mentre `handleSetStandardFunction` risolve a `01b43760 -> 017780f0` e costruisce la fixed 10-point standard stretch. L'owner edge `MUScaleTuning-like +0x68 -> MUScaleStretching` e' ora vincolato da `0176d660 / 0176e1e0`, con tipo stringa `MUScaleStretching`. `017380d0` e' chiuso come offset aligner: confronta due `+0x64` e applica il delta a `dest + 0x6c` con wrap opzionale. `01516650` e' stato ridotto a wrapper `01514480 -> 01515040`; `01515040` riconcilia range sullo store payload `+0x80`, mentre `01516720` lavora sullo store payload `+0x88`. Guardrail strutturale aggiunto: `MUPercussivePitchSystem` ha size metadata `0x58` e `MUScalePitchSystem` `0x78`, quindi `+0x78/+0x80/+0x88` non vengono promossi a campi diretti della base percussiva; restano slot di payload/anchor node o derivati. `MUScalePitchSystem +0x58..+0x5c` e' ora ristretto ai flag high-level `_tuningIsSuggestedRelevant`, `_modeIsSuggestedRelevant`, `_tuningPitchAnchorIsSuggestedRelevant`, `_modeFundamentalOffsetIsSuggestedRelevant`, `_stretchingIsSuggestedRelevant` tramite `011a6790 / 0091ac08`, e non va fuso con il `scale_pitch_system_like_node +0x58` usato come step intero nel cache-builder. Il cluster scale-pitch-system-like restringe `+0x78/+0x70/+0x80`: `019f8880 / 019f8cb0 / 019f90e0` sono setter retained-reference, `019f81d0` li aggiorna da `this + 0x68`, e `01525150 / 01525c50 / 01525fb0` costruiscono cache/index objects su `+0x60/+0x68/+0x78/+0x80`. La famiglia `+0x80` e' ora distinta come `scalar-anchor + segment-store + query-cache`: `0150bf50` aggiorna store e preflight `+0x78`, `01511080` confronta stati `018232b0/0124ae30`, `015104e0` costruisce cache `+0x90`, `01510b20` la interroga con `01252670/012521f0`. La famiglia percussive `+0x88` e' ristretta a store segmentato con builder/bridge `01516720`, compatibility gate `01512000`, nested segment reconciler `0151a240`, dirty-refresh orchestrator `0150f7e0` e consumer propagativo `00154c40`. Restano aperti nome classe canonico finale del pitch-table nei clean dump, owner canonico dei payload node, distinzione musicale tra famiglia `+0x80` e `+0x88` e semantica/propagazione high-level dello stretching, quindi nessuna formula di detector primario entra ancora nel clean-room.

Nota cache `+0x90`: il payload inserito da `015104e0` e' ora ristretto a oggetti `g_025fee18` derivati. `015200c0` e' il constructor pulito; `014fdd70`, `0173c410`, `0173c840` e `0173d440` costruiscono payload pitch/scale-query con child interval `g_025ffd60` e reference slot `+0x58/+0x60`. Questo rafforza la separazione: `+0x90` non e' uno store di range audio grezzi e non va portato nel clean-room come algoritmo di note detection.

Nota `+0x88`: `01516720` ora e' piu' stretto come bridge di riconciliazione segmenti: usa `01254260` prima di inserire, `012549c0(..., flag 1)` per range mancanti e avanza lo stato solo quando `018847d0 < target` tramite `018847e0`. `0150aa70` collega il builder al contesto `_pitchSystem`, passa da fallback `MU12TETPitchSystem/MUPercussivePitchSystem/MUScalePitchSystem`, puo' costruire un payload default `g_025fee18`, poi alimenta lo store `0111d0d0` quando `this + 0x58` esiste. `0150f7e0` chiude il lifecycle dirty-refresh su flag `+0xa2`, invalidazione `vtable+0x380`, pass lista e propagazione ricorsiva; `00154c40` chiude il consumer lista/nested-list. Restano opachi gli helper `01531ce0..01531df0`.

Nota metriche inspector: `01bab160` e' ora ristretto come aggregatore selection/UI, non detector. Usa il collector `MUElementPitchInspector` `01ba9e60`, calcola un indice intero via `01507f00` o `0125dfa0 + vtable+0x3a8`, legge un valore cent-like con `0125a2c0`, calcola un delta con `0125a2c0 - 0152e000`, e scrive i campi solo quando i min/max coincidono. Per frequency converte il valore assoluto con `exp2f(cents * 1/1200) * 8.17579936`.
