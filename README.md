# Progetto Reverse Mike

Reverse engineering sistematico di **MikeCore**, il motore DSP di Melodyne (Celemony), con l'obiettivo di ricostruire in **clean-room** la pipeline di analisi spettrale e di rilevamento note.

Non è un crack, non è un patcher e non è un redistributore del prodotto: è un archivio di *evidenza* — ledger di reverse, dati strutturati, pseudocodice decompilato — e un piccolo core C++20 che implementa **solo** ciò che è stato dimostrato dal binario.

---

## ⚠️ Nota legale

Questo repository è materiale di **ricerca e interoperabilità**. Melodyne, MikeCore e tutti i binari analizzati sono proprietà di **Celemony Software GmbH**; questo progetto non è affiliato né approvato da Celemony.

- La directory `binaries/` contiene binari proprietari **non redistribuibili**. Se stai leggendo questo README su un repository pubblico, quei file vanno rimossi: procurali autonomamente da un'installazione legittima di Melodyne (gli hash MD5 di riferimento sono in [`data/inventory.json`](data/inventory.json)).
- Il codice in `core_reconstruction/` è scritto ex novo a partire dai ledger, non è codice Celemony copiato.
- Il reverse engineering per interoperabilità è tutelato in UE dalla Direttiva 2009/24/CE art. 6; la ridistribuzione dei binari **non** lo è.

---

## Cosa c'è dentro

| Area | Contenuto |
|------|-----------|
| **70 documenti** in `docs/` | Ledger tematici: architettura, FFT, DNA2, quality scoring, formant synthesis, più ~50 ledger per singolo cluster di funzioni |
| **7.860 funzioni** decompilate | Pseudocodice C esportato da Ghidra headless, poi ripulito e annotato |
| **~670 header/struct** ricostruiti | Class map derivata da vtable, RTTI e property registration |
| **77 claim verificati** | Ogni affermazione nei doc è validata contro il binario con confidence score |
| **42 file C++20** clean-room | Moduli che hanno superato il gate `confidence >= 0.90`, compilabili con CMake |

### Il target

| Binario | Size | Arch | Ruolo |
|---------|------|------|-------|
| `MikeCore` | 43 MB | x86_64 | Engine DSP double precision — **target P0** |
| `MikeCoreF` | 91 MB | Universal | Engine DSP float — cross-check costanti/formule |
| `mike` | 214 KB | Universal | Wrapper VST3 (3 soli simboli esportati) |
| `MikeAU` / `MikeAAX` / `MikeStandalone` | ~200–400 KB | Universal | Wrapper AudioUnit / AAX / standalone |
| `Resources.rrr` | 28 MB | — | Archivio GNFA: 997 entry (192 `.gnui`, 518 `.png`) |
| `default.metallib` | 5.6 KB | Metal | Solo blit shader per la UI — **zero DSP sulla GPU** |

---

## Metodo

Il progetto non avanza per "completamento percepito", ma per **evidenza**. Il flusso è:

```
binari  →  Ghidra headless  →  estrazione  →  ledger + confidence  →  clean-room C++
           (5 script Java)     (8 tool Py)     (docs/ + data/)        (gate ≥ 0.90)
```

### 1. Estrazione

Cinque script Java per Ghidra headless (`ghidra/scripts/`) producono decompilato, mappa offset→property, vtable, xref e parametri DSP. Otto tool Python (`tools/`) puliscono l'output, classificano le funzioni `Unknown` per prossimità di indirizzo / call graph / pattern di accesso ai campi, e ricostruiscono gli header.

### 2. Ledger

Ogni scoperta finisce in un doc numerato con l'indirizzo nel nome del file — es. [`43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md`](docs/43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md). Ogni ledger dichiara: cosa è **chiuso**, cosa è **guardrail**, cosa è **blocker**. Le correzioni sono esplicite e tracciate (vedi doc [`34`](docs/34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md) e [`41`](docs/41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md), che ribaltano conclusioni precedenti).

### 3. Verifica automatica

`tools/orchestrator.py` riesegue ogni claim contro i binari reali (`nm`, `otool`, `strings`, `objdump`) e riscrive [`docs/10_VERIFICATION.md`](docs/10_VERIFICATION.md) + [`data/confidence.json`](data/confidence.json). Ultimo run: **77/77 VERIFIED**, confidence media ~100%.

### 4. Confidence gate

Regola centrale del progetto ([doc 56](docs/56_CONFIDENCE_GATED_RECONSTRUCTION.md)):

> Nessun modulo entra in implementazione se il suo perimetro non è chiuso con `confidence >= 0.90`.

In concreto, in `core_reconstruction/` sono **vietati**: threshold "ragionevoli" non tracciati a una fonte, pesi arbitrari, normalizzazioni non supportate da callsite o disassembly, naming promosso a canonico quando l'evidenza è ancora `medium`. Se un valore è solo inferito, resta nel ledger — non nel codice.

---

## Struttura

```
├── binaries/               ← target originali (non redistribuibili)
├── ghidra/
│   ├── scripts/            ← 5 script Java per headless extraction
│   └── output/             ← decompilato + dump per binario (~7.900 file)
├── reconstructed/
│   ├── clean/              ← pseudocodice ripulito, per classe
│   ├── annotated/          ← funzioni piccole annotate con nomi property reali
│   └── structs/            ← header/class map ricostruiti
├── docs/                   ← 70 ledger — source of truth semantica
├── data/                   ← evidenza strutturata TSV/JSON/LOG
├── core_reconstruction/    ← codice clean-room C++20 compilabile
│   ├── include/mikecore/{runtime,fft,features,rawnotes}/
│   └── src/
└── tools/                  ← orchestrator, pipeline, estrattori Python
```

### Convenzioni di naming (interne a MikeCore)

| Prefisso | Significato | Scope |
|----------|-------------|-------|
| `MU*` | Music/Math Unit | Core DSP, algoritmi, strutture musicali |
| `MD*` | Melodyne Document/Display | UI, controller, workspace |
| `GN*` | General/Generic | Framework base (audio I/O, file, toolkit) |
| `CM*` | Crypto/DRM | Licensing (CMS/PKCS7, wrapper OpenSSL) |

---

## Stato

| Modulo | Stato | Note |
|--------|-------|------|
| Runtime / object model | ✅ `IMPLEMENTABLE` | Aperto e compilato |
| FFT / STFT front-end | ✅ `IMPLEMENTABLE` | Incluso window resampler a 7 stage |
| Spectral slice / local features | ✅ `IMPLEMENTABLE` | Median frequency, row floor, windowed overlap, harmonic stencil, coda di scoring |
| Raw note families / matcher | ✅ `IMPLEMENTABLE` | Carrier `MURawNoteSeparation`, builder classi `1/2/8`, threshold-seeded matcher, smoother esponenziale |
| Analyzer gate cluster | ✅ `IMPLEMENTABLE` | Field map `+0xf4..+0x108` chiusa |
| LSS / nested graph topology | 🟡 `PARTIAL` | Layout chiuso, semantica musicale dei link aperta |
| Relevance / path ranking | 🟡 `PARTIAL` | Policy di ranking non tutte canonizzate |
| Quality scoring globale | 🟡 `PARTIAL` | 40+ metriche nominate, poche chiuse formula-per-formula |
| DNA2 high-level | 🔴 `BLOCKED` | Blocker: `0x01447a70`, `0x01433f60` |
| Resynthesis / formants / shaper | 🔴 `BLOCKED` | Pipeline matematica non ancora fedele |

### Alcuni risultati chiusi

- **FFT**: `GNFastFourierTransformer` è un wrapper su **Apple vDSP** (Accelerate), 11 dimensioni da 16 a 16384, dual FFT per frequency reassignment, finestra **sqrt-Hann**, layout packed `DC/Nyquist + coppie re/im`, buffer `src/dst` aliasabili.
- **Spectral median** (`0149f6a0`): rolloff 50% in Hz, unico caller `01484bc0`, cache a `MUElementAnalyzer + 0x110`.
- **Smoother esponenziale** (`015c1480 / 015c0b60`): `alpha = expf(-2.5f / width)`, `radius = trunc(-2.5 / logf(alpha))`, forward/reverse, usato dalla pipeline raw-note classe `8`.
- **Score di selezione candidato**: `(1.0 - abs(deltaStart) / 0.07) * classWeight * field20`, con seed dinamico `max(0.7f, reference * 0.3f)`.
- **GPU**: `default.metallib` contiene solo `vertexShader` (passthrough) + `samplingShader` (texture blit). Nessun DSP su GPU.
- **Wrapper VST3**: API offuscata a 5 funzioni, verifica di code signing, 45 classi `MUAra*` per l'interfaccia ARA.

---

## Uso

### Prerequisiti

- macOS (i tool usano `nm`, `otool`, `lipo`, `codesign`)
- [Ghidra 12.0.4](https://ghidra-sre.org/) in `/Applications/ghidra_12.0.4_PUBLIC/`
- Python 3.9+ (nessuna dipendenza esterna)
- CMake 3.22+ e un compilatore C++20 per `core_reconstruction/`

### Pipeline

```bash
python3 tools/pipeline.py              # tutto: inventory → ghidra → extract → analyze → report → verify
python3 tools/pipeline.py inventory    # solo catalogazione binari (size, arch, MD5, simboli)
python3 tools/pipeline.py ghidra       # solo import + analisi headless
python3 tools/pipeline.py extract      # solo estrazione dati strutturati
python3 tools/pipeline.py analyze      # solo confronto e ricerca differenze
python3 tools/pipeline.py verify       # solo riverifica dei claim
```

### Verifica dei doc contro i binari

```bash
python3 tools/orchestrator.py          # riscrive docs/10_VERIFICATION.md e data/confidence.json
```

### Build del core clean-room

```bash
cmake -S core_reconstruction -B build
cmake --build build -j4                # target: mikecore_runtime_fft
```

> **Limitazione nota**: gli script Python in `tools/` e quelli Java in `ghidra/scripts/` hanno il path del workspace **hardcoded** (`/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike`). Vanno adattati prima di eseguirli altrove. `core_reconstruction/` invece è completamente portabile.

---

## Come leggere i ledger

Parti da [`docs/00_INDEX.md`](docs/00_INDEX.md), che elenca tutti i documenti con area e stato. In sintesi:

- **`01`–`09`** — panoramiche tematiche (architettura, wrapper, FFT, DNA, quality, formant, strutture dati, sicurezza, stato)
- **`10`–`16`** — verifica, mappa funzioni, blueprint di replicazione, ledger canonico
- **`17`+** — ledger per cluster di funzioni; il nome del file contiene gli indirizzi coinvolti
- **`56`** — le regole del confidence gate, da leggere prima di toccare `core_reconstruction/`
- **`61`** — mappa dei file e loro ruolo (cosa è sorgente, cosa è output generato)

Ogni doc distingue esplicitamente ciò che è **chiuso** da ciò che è **osservato ma non canonizzato**. Le sezioni "Blocker" sono la to-do list reale del progetto.

---

## Licenza

Nessuna licenza esplicita è ancora applicata al repository. Il materiale derivato (ledger, dati estratti, pseudocodice decompilato) descrive software proprietario di terze parti; il codice in `core_reconstruction/` è opera originale. Finché non viene scelta una licenza, valgono i termini di default del copyright.
