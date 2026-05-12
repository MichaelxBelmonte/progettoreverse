# MikeCore Reverse Engineering — Indice

**Ultimo aggiornamento:** 2026-05-07

## Struttura progetto

```
Progetto_Reverse_Mike/
├── .gitignore                  ← esclude cache locali e database Ghidra pesanti
├── CLAUDE.md                   ← note operative storiche per agenti
├── binaries/                   ← binari da analizzare
│   ├── MikeCore                   43 MB  x86_64 only       DSP engine double precision
│   ├── MikeCoreF                  91 MB  Universal ARM+x86 DSP engine float precision
│   ├── mike                      214 KB  Universal ARM+x86 VST3 wrapper
│   ├── MikeAU                    220 KB  Universal ARM+x86 AU wrapper
│   ├── MikeAAX                   397 KB  Universal ARM+x86 AAX wrapper
│   ├── MikeStandalone            149 KB  Universal ARM+x86 Standalone app wrapper
│   ├── default.metallib          5.6 KB                    GPU shader Metal
│   └── Resources.rrr             28 MB                     Dati proprietari
├── core_reconstruction/        ← codice clean-room compilabile
│   ├── include/mikecore/          API runtime, FFT, features, rawnotes
│   └── src/                       implementazioni C++20 verificate
├── docs/                       ← ledger, report e mappe per area
├── data/                       ← evidenza strutturata TSV/JSON/LOG
├── ghidra/
│   ├── projects/               ← database Ghidra locali, esclusi da Git
│   ├── scripts/                ← script Java per headless extraction
│   │   ├── MikeCoreExtract.java
│   │   ├── MikeCoreDeep.java
│   │   ├── MikeCoreDecompile.java
│   │   ├── MikeCoreOffsetMap.java
│   │   └── MikeCoreParamExtract.java
│   └── output/                 ← dati estratti per binario
│       ├── MikeCore/              7897 file, target reverse principale
│       ├── MikeCoreF/             27 file, confronto float/coreF
│       ├── mike/                  wrapper VST3
│       ├── MikeAU/                wrapper AudioUnit
│       ├── MikeAAX/               wrapper AAX
│       └── MikeStandalone/        wrapper standalone
├── reconstructed/              ← pseudocodice ripulito e header estratti
│   ├── annotated/
│   ├── clean/
│   └── structs/
└── tools/                      ← automazione Python
    ├── orchestrator.py
    ├── pipeline.py
    ├── reconstruct.py
    └── extract_*.py / clean_code.py / classify_unknown.py
```

## Documenti

| File | Area | Stato |
|------|------|-------|
| [01_ARCHITETTURA.md](01_ARCHITETTURA.md) | Architettura generale, naming, framework | Completo |
| [02_WRAPPER_VST3.md](02_WRAPPER_VST3.md) | Wrapper VST3: API offuscata, code signing, ARA | Completo |
| [03_FFT.md](03_FFT.md) | FFT: vDSP, dimensioni, dual FFT, sample rate reduction | Completo |
| [04_DNA_ALGORITHM.md](04_DNA_ALGORITHM.md) | DNA2/DNA3, detection, MUElementAnalyzer | Parziale |
| [05_QUALITY_SCORING.md](05_QUALITY_SCORING.md) | Quality scoring (40+ metriche) | Completo |
| [06_FORMANT_SYNTHESIS.md](06_FORMANT_SYNTHESIS.md) | Formant synthesis, spectrum shaper | Parziale |
| [07_DATA_STRUCTURES.md](07_DATA_STRUCTURES.md) | MUSpectralTimeSlice, MUAudioSourceItem | Completo |
| [08_SECURITY.md](08_SECURITY.md) | Code signing, DRM/PACE, OpenSSL | Completo |
| [09_STATUS.md](09_STATUS.md) | Avanzamento e prossimi passi | Attivo |
| [10_VERIFICATION.md](10_VERIFICATION.md) | Verification log, confidence, action items | Auto-generato |
| [11_GHIDRA_FUNCTION_MAP.md](11_GHIDRA_FUNCTION_MAP.md) | Mappa funzioni Ghidra, call graph, mega-funzioni | Completo |
| [14_FULL_PRODUCT_MAP.md](14_FULL_PRODUCT_MAP.md) | Mappa completa prodotto: core, wrapper, standalone, installer, PACE | Attivo |
| [15_REPLICATION_BLUEPRINT.md](15_REPLICATION_BLUEPRINT.md) | Blueprint di replicazione: boundary wrapper/core, funzioni P0/P1, ordine di ricostruzione | Attivo |
| [16_CANONICAL_LEDGER.md](16_CANONICAL_LEDGER.md) | Ledger canonico P0/P1 con confidence, contraddizioni e next step manuali | Attivo |
| [17_DNA2_BRANCH_LEDGER.md](17_DNA2_BRANCH_LEDGER.md) | Branch map operativo DNA2: dispatcher, ramo poly/mono, write-set osservabile | Attivo |
| [18_DNA2_CALLSITE_MAP.md](18_DNA2_CALLSITE_MAP.md) | Callsite reali DNA2 via disassembly CLI: offset dispatcher e front-load spettrale del ramo poly | Attivo |
| [19_DISPATCHER_STACK_LEDGER.md](19_DISPATCHER_STACK_LEDGER.md) | Ledger ABI del dispatcher DNA2: slot stack, flag ownership, copy-in vs materializzazione mono | Attivo |
| [20_SPECTRAL_SLICE_FIELD_MAP.md](20_SPECTRAL_SLICE_FIELD_MAP.md) | Layout operativo di MUSpectralTimeSlice: offset verificati, getter reali, helper derivativi e cache | Attivo |
| [21_CLAIM_KERNEL_013924d0.md](21_CLAIM_KERNEL_013924d0.md) | Ledger del kernel numerico per-slice usato da analyzer e spectrum shaper | Attivo |
| [22_ITEM_SCORE_FIELD_LEDGER.md](22_ITEM_SCORE_FIELD_LEDGER.md) | Ledger della famiglia item usata dal claim/scoring path: score downstream, warning sui falsi positivi di layout | Attivo |
| [23_DESCRIPTOR_HELPERS_014EECB0_014EED60.md](23_DESCRIPTOR_HELPERS_014EECB0_014EED60.md) | Reverse operativo dei due helper lazy per pitch/descriptor: `+0x14`, `+0x10`, `+0x20`, `+0x24` | Attivo |
| [24_WINDOWED_OVERLAP_KERNEL_014B71E0.md](24_WINDOWED_OVERLAP_KERNEL_014B71E0.md) | Primitive riusabile di overlap locale su front-end spettrale: finestra, LUT, depletion, evidence su `+0x24` | Attivo |
| [25_HARMONIC_STENCIL_WRITER_014B74F0.md](25_HARMONIC_STENCIL_WRITER_014B74F0.md) | Writer del template armonico di `013924d0`: lobe stamping per-armonica nel row-buffer | Attivo |
| [26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md](26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md) | Mappa reale dei buffer spettrali dal caller analyzer al claim kernel e poi a `014b71e0` | Attivo |
| [27_FINAL_SCORING_MODEL_013924D0.md](27_FINAL_SCORING_MODEL_013924D0.md) | Modello operativo della coda finale di `013924d0`: normalizzazione per colonna e score finale magnitude/tonality | Attivo |
| [28_POLY_CLAIM_BRIDGE_01447A70_013903D0.md](28_POLY_CLAIM_BRIDGE_01447A70_013903D0.md) | Bridge reale ramo poly -> assignEnergyClaimsInSampleRange: call diretta, ABI operativa e sink callback/progress | Attivo |
| [29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md](29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md) | Descriptor cache condiviso tra analyzer, source description, shaper e slice init: `state + 0x1a0` | Attivo |
| [30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md](30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md) | Ruolo operativo di `descriptor + 0x88`: count del cluster renderer/slot condiviso tra poly, shaper e builder downstream | Attivo |
| [31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md](31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md) | Oggetto distinto da `0x168` byte sopra la famiglia `MUAudioSourcePropertyPoint`: analyzer ref, sort, preliminary flag e intervallo di relevance | Attivo |
| [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md) | Topologia runtime di `014f7360`: 5 contenitori `GNList` fissi, bucket per-slot e shortlist su payload `MUMatrixPathPoint` | Attivo |
| [33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md](33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md) | Ledger della famiglia `MUAudioSourcePropertyPoint`: builder ricorrenti, layout operativo e correzione di `+0x2c` come byte/status | Attivo |
| [34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md](34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md) | Correzione esplicita: `DAT_025f1488` e' `MUSpectralTimeSlice`, non la famiglia ranking/interval | Attivo |
| [35_PROPERTY_POINT_COPY_INSERT_014EE580_014C2E20.md](35_PROPERTY_POINT_COPY_INSERT_014EE580_014C2E20.md) | Layer operativo dei property point a valle: copy helper NaN-aware, deep clone dei child opzionali e insert ordinato in collection `+0x108` | Attivo |
| [36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md](36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md) | Modello interval/gate dei consumer `014a3900 / 014a42b0`, ora re-homed sulla famiglia `MURawNoteSeparation` | Attivo |
| [37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md](37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md) | Ledger della famiglia `MURawNoteSeparation`: costruttore, copier, writer dei campi metrici e flag osservati `1/2/8/0x10/0x40` | Attivo |
| [38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md](38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md) | Ledger della famiglia `MUMatrixPathPoint`: payload reale di `014f7360`, field names registrati e ponte verso `MUMatrixPath` | Attivo |
| [39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md](39_SHAPER_SOURCE_AND_SHORTLIST_POLICY_014902F0_00D242C0.md) | Callsite reale `014902f0 -> 014f9d00` e policy concreta della shortlist: object back-ref, sort decrescente su `bestNeighbourQuality` e cutdown al `75%` | Attivo |
| [40_ADJACENT_GETTER_CLUSTER_014F9E20_014F9E30.md](40_ADJACENT_GETTER_CLUSTER_014F9E20_014F9E30.md) | Boundary ledger del cluster getter adiacente: `+0x38/+0x3c` osservati in `MUPercussivePitchSystem`, ma non ancora promuovibili a campi canonici di `MUMatrixPathPoint` | Attivo |
| [41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md](41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md) | Correzione strutturale di `01103ee0`: copy/init + property graph di `MUElementAnalyzer`, non anchor STFT primaria | Attivo |
| [42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md](42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md) | Corridoio condiviso del front-end spettrale: setup FFT, alloc helper, wrapper forward FFT e bridge verso `MUSpectralTimeSlice` | Attivo |
| [43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md](43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md) | Chiusura algoritmica di `0149f6a0`: spectral median frequency / rolloff 50% in Hz sul corridoio FFT condiviso | Attivo |
| [44_FFT_HELPER_CLUSTER_00E83010_00E83530_015C4D90.md](44_FFT_HELPER_CLUSTER_00E83010_00E83530_015C4D90.md) | Riduzione concreta del cluster helper FFT: alloc/release, wrapper forward/inverse-like e adapter thin sopra `MUSpectralTimeSlice::initFromTimeSignal` | Attivo |
| [45_FFT_WRAPPER_IO_CONTRACT_00E83530_00E83640_COREF.md](45_FFT_WRAPPER_IO_CONTRACT_00E83530_00E83640_COREF.md) | Contratto eseguibile dei wrapper FFT come primitive su buffer caller-side aliasabili, declassamento dei false return value e parita' ad alto livello su `MikeCoreF` | Attivo |
| [46_FFT_BUFFER_ALIAS_AND_PACKED_LAYOUT_00E83530_00E83640.md](46_FFT_BUFFER_ALIAS_AND_PACKED_LAYOUT_00E83530_00E83640.md) | Correzione ABI dei wrapper FFT: coppia `src/dst` aliasabile e layout packed `DC/Nyquist` + coppie `re/im` | Attivo |
| [47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md](47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md) | Consumer map reale di `0149f6a0`: unico caller diretto `01484bc0`, cache a `MUElementAnalyzer + 0x110` e bridge verso `014a74b0 / 014a89c0` | Attivo |
| [48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md](48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md) | Ledger del cluster analyzer `+0xf4 .. +0x108`: ABI reale multi-output di `014a74b0`, mapping offset-by-offset e ruolo minimo dei sei scalar | Attivo |
| [49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md](49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md) | Matcher reale su `MURawNoteSeparation`: filtro per class code, gate su `field_20`, ranking weight su `field_30 / field_2c` e store del best match in `+0x40` | Attivo |
| [50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md](50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md) | Divergenza reale dei due callsite `01484bc0 -> 014af180`: `class 2` come propagazione di peer esistenti, `class 1` come peer synthesis/insert + cleanup dei vicini | Attivo |
| [51_AUXILIARY_PEER_LIST_SLOT_SELF_0XD0_01484BC0_014AB140.md](51_AUXILIARY_PEER_LIST_SLOT_SELF_0XD0_01484BC0_014AB140.md) | Chiusura di `MUElementAnalyzer + 0xd0` come slot collection persistente usato dal matcher raw-note locale per peer registry, insert/find e riuso downstream | Attivo |
| [52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md](52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md) | Boundary ledger di `MUElementAnalyzer + 0x158`: `GNList` di lavoro per-run distinta dal peer registry `+0xd0`, usata dalla catena di stage locale di `01484bc0` | Attivo |
| [53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md](53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md) | Payload del corridoio working GNList: topologia annidata `GNList<GNList<MUPitchMatrixPeak>>` e bridge di selezione | Attivo |
| [54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md](54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md) | Correzione del cluster `MUPosValue` e separazione da extended point object | Attivo |
| [55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md](55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md) | Field map prudente dell'extended point object osservato in `GNInt` e `MUSpectrumShaper` | Attivo |
| [56_CONFIDENCE_GATED_RECONSTRUCTION.md](56_CONFIDENCE_GATED_RECONSTRUCTION.md) | Gate operativo della ricostruzione clean-room: cosa entra nel codice e cosa resta bloccato | Attivo |
| [57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md](57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md) | Ledger degli helper LSS/nested-list `012e6160 / 012e5ae0`: getter `+0xa8/+0xb0`, ruolo ricorsivo di `012e61a0 / 012e7210` e anti-falso positivo `_next/_previousItemInSequence` | Attivo |
| [58_MULSSGENERATOR_FIELD_MAP_AND_MUTATORS.md](58_MULSSGENERATOR_FIELD_MAP_AND_MUTATORS.md) | Field map prudente di `MULSSGenerator`: slot `+0x90/+0x98/+0xa8/+0xb0/+0x118` e mutatori `01653e10 / 0164e420 / 0164f500` | Attivo |
| [59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md](59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md) | Ponte LSS -> `MUPercussivePitchSystem`: `01519670` gate split/clone in cents, `01516650` wrapper e bridge range `+0x80/+0x88` | Attivo |
| [60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md](60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md) | Chiusura del kernel `015c1480 / 015c0b60`: smoother esponenziale forward/reverse usato dalla pipeline raw-note classe `8` | Attivo |
| [61_CODEBASE_TREE_AND_FILE_ROLES.md](61_CODEBASE_TREE_AND_FILE_ROLES.md) | Tree operativo della codebase: directory, file curati, output generati, ruoli e policy di modifica | Attivo |
| [62_CLASS12_PREPROCESSOR_014A2170_015C2D90.md](62_CLASS12_PREPROCESSOR_014A2170_015C2D90.md) | Subset preprocessing classi `1/2`: wrapper `015c2d90`, branch output-only di `015c2da0`, high-shelf bidirezionale e baseline condiviso `014a2170` | Attivo |
| [63_RAW_NOTE_METRIC_WRITER_014A3550.md](63_RAW_NOTE_METRIC_WRITER_014A3550.md) | Subset numerico del writer raw-note `014a3550`: formule per `+0x28/+0x2c/+0x30` e warmup/range dei peak gates `+0x34/+0x38` | Attivo |
| [64_LATE_INTERVAL_BOUNDARY_REFINEMENT_014AB140.md](64_LATE_INTERVAL_BOUNDARY_REFINEMENT_014AB140.md) | Boundary refinement tardo `014ab140`: peer linkato `+0x40->+0x18` o minimo segnale nel gap, target scritto ancora non canonizzato | Attivo |
| [65_PITCH_MATRIX_BRIDGE_SELECTION_014B3CE0.md](65_PITCH_MATRIX_BRIDGE_SELECTION_014B3CE0.md) | Subset `014b3460 / 014b3ce0`: link righe `MUPitchMatrixPeak`, scelta peak da chain, conversione pitch-bin -> Hz e output anchor/frequenza | Attivo |

## Tools

```bash
# Verifica docs contro binari (confidence scoring)
cd ~/Desktop/Progetto_Reverse_Mike && python3 tools/orchestrator.py

# Pipeline completa: inventory → ghidra → extract → analyze → verify
cd ~/Desktop/Progetto_Reverse_Mike && python3 tools/pipeline.py

# Solo una fase
python3 tools/pipeline.py inventory
python3 tools/pipeline.py ghidra
python3 tools/pipeline.py extract
python3 tools/pipeline.py analyze
python3 tools/pipeline.py verify
```

### Ultimo run orchestrator

- **77 findings** analizzati
- **68 verificati** (88%)
- **9 nuove scoperte**
- **0 errori**
- **Confidence media: 98%**

## Naming convention interna

| Prefisso | Significato | Scope |
|----------|-------------|-------|
| `MU*` | Music/Math Unit | Core DSP, algoritmi, strutture musicali |
| `MD*` | Melodyne Document/Display | UI, controller, prefs, workspace |
| `GN*` | General/Generic | Framework base (audio I/O, file, UI toolkit) |
| `CM*` | Crypto/DRM | Licensing (CMS/PKCS7, OpenSSL wrappers) |

## Progetti Ghidra

| Progetto | Path | Contenuto |
|----------|------|-----------|
| Progetto_Mike | `ghidra/projects/Progetto_Mike.gpr` | mike (VST3 wrapper) |
| MikeAU_Project | `ghidra/projects/MikeAU_Project.gpr` | MikeAU (AudioUnit wrapper) |
| MikeAAX_Project | `ghidra/projects/MikeAAX_Project.gpr` | MikeAAX (AAX wrapper) |
| MikeCore_Project | `ghidra/projects/MikeCore_Project.gpr` | MikeCore (double precision) |
| MikeCoreF_Project | `ghidra/projects/MikeCoreF_Project.gpr` | MikeCoreF (float) |
| MikeStandalone_Project | `ghidra/projects/MikeStandalone_Project.gpr` | Standalone app |

## Ultime Aggiunte Doc

- [64_LATE_INTERVAL_BOUNDARY_REFINEMENT_014AB140.md](64_LATE_INTERVAL_BOUNDARY_REFINEMENT_014AB140.md)
- [63_RAW_NOTE_METRIC_WRITER_014A3550.md](63_RAW_NOTE_METRIC_WRITER_014A3550.md)
- [62_CLASS12_PREPROCESSOR_014A2170_015C2D90.md](62_CLASS12_PREPROCESSOR_014A2170_015C2D90.md)
- [61_CODEBASE_TREE_AND_FILE_ROLES.md](61_CODEBASE_TREE_AND_FILE_ROLES.md)
- [60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md](60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md)
- [52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md](52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md)
- [53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md](53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md)
- [54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md](54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md)
- [55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md](55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md)
- [56_CONFIDENCE_GATED_RECONSTRUCTION.md](56_CONFIDENCE_GATED_RECONSTRUCTION.md)
- [57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md](57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md)
- [58_MULSSGENERATOR_FIELD_MAP_AND_MUTATORS.md](58_MULSSGENERATOR_FIELD_MAP_AND_MUTATORS.md)
- [59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md](59_PERCUSSIVE_PITCH_SYSTEM_BRIDGE_012F0B60.md)
