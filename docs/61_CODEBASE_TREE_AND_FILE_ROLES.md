# 61 - Codebase Tree And File Roles

**Ultimo aggiornamento:** 2026-05-08

## Obiettivo

Questo documento serve come mappa pratica della codebase dopo il checkpoint
GitHub iniziale e gli aggiornamenti clean-room del `2026-05-08`.

Risponde a tre domande operative:

1. dove si trova ogni famiglia di file
2. a cosa serve ogni area
3. quali file sono sorgenti attivi, ledger, output reverse o artefatti locali

Nota importante: il workspace contiene `18.650` file locali, di cui `18.557`
tracciati da Git. Espandere `ghidra/output` e `reconstructed` file-per-file in
un Markdown renderebbe il documento inutilizzabile. Qui il tree e' completo per
famiglia e per file curati manualmente; le directory generate massive sono
mappate per schema, count e uso.

---

## Tree Operativo

```text
Progetto_Reverse_Mike/
├── .gitignore
├── CLAUDE.md
├── binaries/
├── core_reconstruction/
│   ├── CMakeLists.txt
│   ├── README.md
│   ├── include/mikecore/
│   │   ├── features/
│   │   ├── fft/
│   │   ├── rawnotes/
│   │   └── runtime/
│   └── src/
│       ├── features/
│       ├── fft/
│       ├── rawnotes/
│       └── runtime/
├── data/
├── docs/
├── ghidra/
│   ├── output/
│   ├── projects/          local-only, ignored by Git
│   └── scripts/
├── reconstructed/
│   ├── annotated/
│   ├── clean/
│   └── structs/
└── tools/
```

## Size E Count

| Area | File locali | Size | Ruolo |
|------|-------------|------|-------|
| `core_reconstruction/` | 29 | 160K | codice clean-room compilabile |
| `docs/` | 65 | 676K | ledger, decisioni, mappe e stato reverse |
| `data/` | 52 | 376K | dati strutturati TSV/JSON/LOG per ledger |
| `tools/` | 11 | 176K | automazione di estrazione, pulizia e verifica |
| `binaries/` | 8 | 163M | target binari analizzati |
| `ghidra/output/` | 7.940 circa | 78M | output testuale/decompilato esportato da Ghidra |
| `ghidra/projects/` | locale | 1.1G | database Ghidra, non tracciati |
| `reconstructed/` | 9.313 circa | 200M | pseudocodice ripulito, header e class map |

## Regole Di Lettura

| Tipo | Fonte primaria | Uso corretto |
|------|----------------|--------------|
| Codice eseguibile pulito | `core_reconstruction/` | entra nel clone solo se `confidence >= 0.90` |
| Ledger interpretativo | `docs/` | source of truth per semantica, confidence e blocker |
| Evidenza strutturata | `data/` | supporto tabellare ai ledger |
| Decompilato raw/clean | `ghidra/output/`, `reconstructed/` | evidenza reverse, non codice prodotto |
| Binari | `binaries/` | sorgente di verifica tramite objdump/nm/strings/Ghidra |
| Progetti Ghidra | `ghidra/projects/` | stato locale interattivo, troppo grande per Git |

---

## File Root

| File | Ruolo |
|------|-------|
| `.gitignore` | Esclude file locali, `.DS_Store`, cache Python e `ghidra/projects/`. |
| `CLAUDE.md` | Istruzioni storiche per agenti/Claude nel progetto. |
| `.DS_Store` | Artefatto macOS locale, ignorato. |
| `0x013903d0` | Placeholder/stub locale vuoto, ignorato. |
| `Screenshot 2026-03-22 alle 15.46.33.png` | Screenshot locale, ignorato. |
| `.claude/` | Configurazione locale non tracciata. |
| `.xdg_config/` | Configurazione locale Ghidra non tracciata. |

---

## `binaries/`

Questa directory contiene i target originali usati come fonte di verita' per il
reverse. Sono tracciati nel checkpoint, ma `MikeCoreF` e' vicino al limite
GitHub: `90.77 MB`.

| File | Size | Ruolo |
|------|------|-------|
| `MikeCore` | 43M | Core DSP double precision, target principale del reverse. |
| `MikeCoreF` | 91M | Core DSP float/universal, target di confronto con `MikeCore`. |
| `mike` | 214K | Wrapper VST3. |
| `MikeAU` | 220K | Wrapper AudioUnit. |
| `MikeAAX` | 397K | Wrapper AAX. |
| `MikeStandalone` | 149K | Wrapper/app standalone. |
| `Resources.rrr` | 28M | Risorsa binaria del prodotto. |
| `default.metallib` | 5.6K | Shader/artefatto Metal. |

Uso operativo:

- `MikeCore` resta il target P0 per DSP, analyzer, DNA2 e raw-note.
- `MikeCoreF` serve per confermare costanti/formule nella variante float.
- Wrapper `mike`, `MikeAU`, `MikeAAX`, `MikeStandalone` servono per boundary,
  packaging e host integration, non per il core detection.

---

## `core_reconstruction/`

Questa e' l'unica area che oggi contiene codice clean-room compilabile.

Build verificata:

```bash
cmake -S core_reconstruction -B /private/tmp/mikecore_reconstruction_build
cmake --build /private/tmp/mikecore_reconstruction_build -j4
```

Target:

```text
mikecore_runtime_fft
```

### Tree Completo

```text
core_reconstruction/
├── CMakeLists.txt
├── README.md
├── include/mikecore/features/spectral_metrics.hpp
├── include/mikecore/fft/packed_spectrum.hpp
├── include/mikecore/fft/stft_frontend.hpp
├── include/mikecore/rawnotes/analyzer_gate_cluster_support.hpp
├── include/mikecore/rawnotes/exponential_smoother.hpp
├── include/mikecore/rawnotes/interval_gate.hpp
├── include/mikecore/rawnotes/paired_peak_gate.hpp
├── include/mikecore/rawnotes/raw_note_class12_builder.hpp
├── include/mikecore/rawnotes/raw_note_class8_builder.hpp
├── include/mikecore/rawnotes/raw_note_separation.hpp
├── include/mikecore/rawnotes/threshold_seed_matcher.hpp
├── include/mikecore/runtime/analyzer_gate_cluster.hpp
├── include/mikecore/runtime/shared_descriptor_cache.hpp
├── include/mikecore/runtime/spectral_time_slice.hpp
├── src/features/spectral_metrics.cpp
├── src/fft/packed_spectrum.cpp
├── src/fft/stft_frontend.cpp
├── src/rawnotes/analyzer_gate_cluster_support.cpp
├── src/rawnotes/exponential_smoother.cpp
├── src/rawnotes/interval_gate.cpp
├── src/rawnotes/paired_peak_gate.cpp
├── src/rawnotes/raw_note_class12_builder.cpp
├── src/rawnotes/raw_note_class8_builder.cpp
├── src/rawnotes/threshold_seed_matcher.cpp
├── src/runtime/shared_descriptor_cache.cpp
└── src/runtime/spectral_time_slice.cpp
```

### Moduli

| File | Ruolo |
|------|-------|
| `CMakeLists.txt` | Definisce la libreria statica `mikecore_runtime_fft`. |
| `README.md` | Regole clean-room e stato dei moduli implementabili. |
| `features/spectral_metrics.*` | Implementa `spectralMedianFrequencyHz` / rolloff 50%. |
| `fft/packed_spectrum.*` | Decodifica layout packed real-FFT `DC/Nyquist + re/im`. |
| `fft/stft_frontend.*` | Materializza `SpectralTimeSlice` da buffer FFT packed. |
| `runtime/spectral_time_slice.*` | Struttura dati clean-room dei payload spettrali. |
| `runtime/shared_descriptor_cache.*` | Cache descriptor condivisa e conversione sample/index. |
| `runtime/analyzer_gate_cluster.hpp` | Struct dei sei scalar analyzer `+0xf4..+0x108`. |
| `rawnotes/raw_note_separation.hpp` | Carrier clean-room `MURawNoteSeparation`, constructor `014ba9e0`, clone `014ba950`, helper constructor-only peer sintetico `0x40` e observed peer `0x10` da `01484bc0`. |
| `rawnotes/threshold_seed_matcher.*` | Matcher seedato `014af180`: seed, finestra, score, best match, wrapper sequence-level su `std::span` e subset post-match `01484bc0`, incluso mark linked-peer `0x10`, pipeline span class `2` e pipeline-plan class `1` con cursore `uVar51`; esclusi retain/release e mutazioni `GNList`. |
| `rawnotes/interval_boundary_refinement.*` | Subset scalare `014ab140`: boundary da peer linkato `+0x40->+0x18`, fallback sul minimo segnale nel gap `>= 0.01`, clamp start/end e guard anchor fuori range; esclusi target object e `GNList`. |
| `rawnotes/pitch_matrix_bridge.*` | Subset lattice `0149d5b0 / 0149ded0 / 0149e4a0 / 0149ebe0 / 014b3460 / 014b3ce0`: histogram qualita' first-peak, primary value `+0x18`, attenuazione distanza centro, envelope row da mean-abs, interpolazione output, reset/link nearest-neighbour, conversione pitch-bin/Hz e bridge anchor/frequency; esclusi builder chain e smoothing. |
| `rawnotes/analyzer_gate_cluster_support.*` | Aggregati `014a74b0`: mediana ratio `_allEnergyRelevantRegionRatio`, `item->+0x40->+0x20`, mediana, coverage e writer parziale dei soli campi `+0x100/+0x104/+0x108`. |
| `rawnotes/exponential_smoother.*` | Smoother `015c1480 / 015c0b60`, inclusi scalar pieces e loop mode `0` usato dal path class `8`. |
| `rawnotes/interval_gate.*` | Subset `014a3900 / 014a42b0`: class-gap `1/2`, third-neighbour guard, costo pair-arbitration, metadata class `2` a `+0x24`, merge max/OR, predicato peak-gate, predicato/collector candidato primario, helper scalari ranking span/score, planner one-pass e planner iterativo vector-backed; esclusi contenitore/refcount `GNList` originali. |
| `rawnotes/paired_peak_gate.*` | Subset numerico `014a3550`: metriche `+0x28/+0x2c/+0x30` e peak gates `+0x34/+0x38`, senza traversal `GNList`/refcount. |
| `rawnotes/raw_note_class12_builder.*` | Subset `014a2170` per candidati class `1/2`: preprocessing output-only `015c2d90`, high-shelf bidirezionale, baseline condiviso, run positive, durata strict, massimo locale `> 0.0f` e start da peak o item esistente. |
| `rawnotes/raw_note_class8_builder.*` | Builder candidati class `8`: mask, run filter, linked-successor protected ranges, contrasto locale, smoothing breve/lunga e gate `max-min`. |

Stato:

```text
IMPLEMENTABLE:
runtime_object_model
fft_stft_frontend
spectral_slice_local_features
raw_note_families_matcher

PARTIAL/BLOCKED:
lss_nested_graph_topology
relevance_path_ranking
quality_scoring_global
dna2_high_level
resynthesis_formants_shaper
```

---

## `docs/`

`docs/` e' la memoria ragionata del reverse. Non e' output grezzo: ogni file
contiene una decisione, una correzione, una mappa ABI o un ledger di confidence.

### Gruppi

| Range | Ruolo |
|-------|-------|
| `00..15` | mappa prodotto, architettura, wrapper, FFT, DNA, scoring, blueprint. |
| `16..31` | ledger P0/P1, dispatcher DNA2, slice spettrali, claim kernel. |
| `32..41` | property point, path ranking, matrix path, copy/init analyzer. |
| `42..50` | front-end spettrale, FFT wrapper, median consumer, raw-note matcher. |
| `51..60` | peer list, working GNList, LSS, generator, smoother. |
| `61` | questo file: tree e ruoli della codebase. |

### Documenti Chiave

| File | Uso |
|------|-----|
| `00_INDEX.md` | Indice principale e punto di ingresso. |
| `09_STATUS.md` | Stato operativo corrente del reverse. |
| `15_REPLICATION_BLUEPRINT.md` | Ordine strategico di replica. |
| `16_CANONICAL_LEDGER.md` | Ledger P0/P1 e policy di confidence. |
| `43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md` | Formula chiusa della spectral median. |
| `47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md` | Consumer della spectral reference. |
| `49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md` | Matcher raw-note implementato nel core. |
| `56_CONFIDENCE_GATED_RECONSTRUCTION.md` | Gate ufficiale per cosa puo' entrare nel codice. |
| `60_EXPONENTIAL_SMOOTHER_015C1480_015C0B60.md` | Smoother esponenziale implementabile. |

Regola:

```text
Se un comportamento non e' chiuso in docs/ e data/, non deve entrare in core_reconstruction/.
```

---

## `data/`

`data/` contiene evidenza strutturata che supporta i documenti.

### Tipi Di File

| Tipo | Ruolo |
|------|-------|
| `*.tsv` | ledger macchina-leggibili: funzioni, offset, confidence, callsite. |
| `*.json` | inventario, confidence database, stato estrazione. |
| `*.txt` | dump stringhe o liste DSP. |
| `*.log` | log di analisi Ghidra/headless. |
| `REPORT_ANALISI_archive.md` | report storico monolitico, non fonte primaria corrente. |

### File A Più Alto Valore

| File | Uso |
|------|-----|
| `reconstruction_confidence_gate.tsv` | Stato `IMPLEMENTABLE/PARTIAL/BLOCKED` per moduli. |
| `confidence.json` | Findings verificati e confidence scoring. |
| `inventory.json` | Inventario binari/output della pipeline. |
| `spectral_median_frequency_0149f6a0.tsv` | Evidenza tabellare per `0149f6a0`. |
| `threshold_seeded_raw_note_matcher_014af180.tsv` | Evidenza tabellare per matcher `014af180`. |
| `murawnoteseparation_family_014ba950_014ba9e0_014a3550.tsv` | Field map raw-note. |
| `strings_dsp.txt` | Stringhe DSP utili per xref e naming. |

---

## `ghidra/`

### `ghidra/scripts/`

Script Java eseguiti in Ghidra headless/interattivo.

| File | Ruolo |
|------|-------|
| `MikeCoreExtract.java` | Estrae exports, functions, namespaces e string xrefs. |
| `MikeCoreDeep.java` | Cerca funzioni DSP da stringhe chiave e largest anonymous. |
| `MikeCoreDecompile.java` | Decompila funzioni e le classifica per class pattern. |
| `MikeCoreOffsetMap.java` | Mappa offset/proprieta' tramite accessor e registrazioni. |
| `MikeCoreParamExtract.java` | Estrae parametri/costanti da property registration. |

### `ghidra/output/`

Output testuale tracciato da Git. E' evidenza, non codice pulito.

| Directory | File | Size | Ruolo |
|-----------|------|------|-------|
| `MikeCore/` | 7.897 | 77M | decompilato principale e indici. |
| `MikeCoreF/` | 27 | 1.5M | confronto float/coreF. |
| `MikeAAX/` | 4 | 16K | wrapper AAX: exports/functions/namespaces/xrefs. |
| `MikeAU/` | 4 | 16K | wrapper AU. |
| `MikeStandalone/` | 4 | 16K | wrapper standalone. |
| `mike/` | 4 | 16K | wrapper VST3. |

Schema tipico:

```text
ghidra/output/<Binary>/
├── exports.txt
├── functions.txt
├── namespaces.txt
├── dsp_xrefs.txt
└── decompiled/<Class>/<address>.c
```

### `ghidra/projects/`

Progetti Ghidra locali, esclusi da Git:

```text
MikeCore_Project.rep      517M
MikeCoreF_Project.rep     584M
altri wrapper             pochi MB
```

Motivo esclusione:

- sono database binari pesanti
- cambiano spesso
- non sono adatti a Git normale
- possono essere ricostruiti dagli script/output

---

## `reconstructed/`

Questa e' la vista ripulita/organizzata del decompilato.

| Directory | File | Size | Ruolo |
|-----------|------|------|-------|
| `annotated/` | 216 | 7.8M | funzioni annotate e classificate. |
| `clean/` | 8.427 | 125M | decompilato ripulito per classe. |
| `structs/` | 670 | 2.6M | header/struct/class map estratti. |

### Pattern

```text
reconstructed/
├── <Class>.cpp
├── <Class>.h
├── clean/<Class>/<address>.c
├── clean/_combined/<Class>.c
├── annotated/<Class>/<address>.c
├── structs/<Class>.h
├── properties.json
└── vtables.json
```

Uso corretto:

- usare `clean/MUElementAnalyzer/<addr>.c` per verifiche puntuali
- usare `_combined/*.c` per scansioni ampie
- usare `structs/*.h` come hint di classe, non come ABI finale
- non copiare pseudocodice direttamente nel core clean-room

File grandi da conoscere:

| File | Size | Ruolo |
|------|------|-------|
| `reconstructed/clean/_combined/Unknown.c` | 15M | blocco enorme non classificato. |
| `reconstructed/Unknown.cpp` | 15M | aggregato C++ unknown. |
| `reconstructed/GNString.cpp` | 8.0M | framework stringhe GN. |
| `reconstructed/clean/_combined/GNString.c` | 7.6M | versione clean combinata. |
| `reconstructed/MUElementAnalyzer.cpp` | 1.8M | aggregato analyzer ad alto valore. |
| `reconstructed/clean/_combined/MUElementAnalyzer.c` | 1.9M | clean combined analyzer. |

---

## `tools/`

Automazione Python per generare e verificare materiale reverse.

| File | Ruolo |
|------|-------|
| `pipeline.py` | Pipeline completa: inventory, ghidra, extract, analyze, report, verify. |
| `orchestrator.py` | Verifica documenti contro binari e aggiorna confidence. |
| `reconstruct.py` | Genera viste C++/header da output Ghidra. |
| `clean_code.py` | Pulisce output Ghidra usando property map e naming noto. |
| `annotate_small_functions.py` | Classifica funzioni piccole, getter, setter e math loop. |
| `classify_unknown.py` | Classifica funzioni `Unknown` via prossimita', call graph e field access. |
| `extract_constants.py` | Estrae costanti numeriche dai file DSP decompilati. |
| `extract_params_from_c.py` | Estrae parametri da C decompilato e property registration. |
| `extract_properties.py` | Estrae property registration e tipi. |
| `extract_vtables.py` | Estrae vtable, typeinfo e gerarchie dal binario. |
| `__pycache__/` | Cache Python locale, ignorata. |

---

## Cosa E' Sorgente, Cosa No

| Area | Si modifica manualmente? | Motivo |
|------|--------------------------|--------|
| `core_reconstruction/` | Si | codice clean-room attivo |
| `docs/` | Si | ledger e stato reverse |
| `data/*.tsv` | Si con cautela | evidenza strutturata, deve restare coerente coi docs |
| `tools/` | Si | pipeline e automazione |
| `ghidra/scripts/` | Si | estrazione Ghidra |
| `ghidra/output/` | No, rigenerabile | output di tool |
| `reconstructed/` | No, salvo correzioni annotate | output ripulito da tool |
| `binaries/` | No | input originale del reverse |
| `ghidra/projects/` | No | database locale Ghidra, non tracciato |

---

## Percorso Consigliato Per Nuovi Lavori

1. Leggere `docs/56_CONFIDENCE_GATED_RECONSTRUCTION.md`.
2. Verificare il modulo in `data/reconstruction_confidence_gate.tsv`.
3. Aprire il ledger specifico in `docs/`.
4. Trovare evidenza puntuale in `reconstructed/clean/` o `ghidra/output/`.
5. Solo se confidence `>= 0.90`, implementare in `core_reconstruction/`.
6. Compilare `mikecore_runtime_fft`.
7. Aggiornare ledger e indice.

Comando build:

```bash
cmake -S core_reconstruction -B /private/tmp/mikecore_reconstruction_build
cmake --build /private/tmp/mikecore_reconstruction_build -j4
```

---

## Stato Git

Questa mappa e' aggiornata rispetto al workspace locale del `2026-05-07`.
Per il commit remoto corrente usare:

```bash
git log -1 --oneline origin/main
```
