# Progetto Reverse

Systematic reverse engineering of **MikeCore**, the DSP engine behind Melodyne (Celemony), aimed at rebuilding its spectral analysis and note detection pipeline in a **clean room**.

This is not a crack, not a patcher, and not a redistribution of the product. It is an archive of *evidence* — reverse engineering ledgers, structured data, decompiled pseudocode — plus a small C++20 core that implements **only** what has been proven from the binary.

> **Note on language:** this README is in English, but the 70 ledgers under `docs/` are written in Italian. Function addresses, field offsets, type names and formulas are language-independent, so the documents remain readable even without Italian.

---

## ⚠️ Legal notice

This repository is **research and interoperability** material. Melodyne, MikeCore and every analyzed binary are the property of **Celemony Software GmbH**. This project is neither affiliated with nor endorsed by Celemony.

- The `binaries/` directory contains proprietary, **non-redistributable** binaries. If you are reading this README on a public repository, those files should be removed: obtain them yourself from a legitimate Melodyne installation (reference MD5 hashes are in [`data/inventory.json`](data/inventory.json)).
- The code under `core_reconstruction/` is written from scratch based on the ledgers. It is not copied Celemony code.
- In the EU, reverse engineering for interoperability is protected by Directive 2009/24/EC art. 6. Redistributing the binaries is **not**.

---

## What's inside

| Area | Content |
|------|---------|
| **70 documents** in `docs/` | Topic ledgers: architecture, FFT, DNA2, quality scoring, formant synthesis, plus ~50 ledgers covering individual function clusters |
| **7,860 decompiled functions** | C pseudocode exported from Ghidra headless, then cleaned and annotated |
| **~670 reconstructed headers/structs** | Class map derived from vtables, RTTI and property registration |
| **77 verified claims** | Every statement in the docs is validated against the binary with a confidence score |
| **42 clean-room C++20 files** | Modules that passed the `confidence >= 0.90` gate, buildable with CMake |

### The target

| Binary | Size | Arch | Role |
|--------|------|------|------|
| `MikeCore` | 43 MB | x86_64 | Double-precision DSP engine — **primary target** |
| `MikeCoreF` | 91 MB | Universal | Float DSP engine — cross-check for constants and formulas |
| `mike` | 214 KB | Universal | VST3 wrapper (only 3 exported symbols) |
| `MikeAU` / `MikeAAX` / `MikeStandalone` | ~200–400 KB | Universal | AudioUnit / AAX / standalone wrappers |
| `Resources.rrr` | 28 MB | — | GNFA archive: 997 entries (192 `.gnui`, 518 `.png`) |
| `default.metallib` | 5.6 KB | Metal | UI blit shader only — **no DSP on the GPU** |

---

## Method

The project does not advance by *perceived* completion, but by **evidence**. The flow is:

```
binaries  →  Ghidra headless  →  extraction  →  ledgers + confidence  →  clean-room C++
             (5 Java scripts)    (8 Py tools)    (docs/ + data/)         (gate ≥ 0.90)
```

### 1. Extraction

Five Ghidra headless Java scripts (`ghidra/scripts/`) produce decompiled output, an offset→property map, vtables, xrefs and DSP parameters. Eight Python tools (`tools/`) clean that output, classify `Unknown` functions by address proximity / call graph / field access patterns, and rebuild the headers.

### 2. Ledgers

Every finding lands in a numbered document with the address in its filename — e.g. [`43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md`](docs/43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md). Each ledger states what is **closed**, what is a **guardrail**, and what is a **blocker**. Corrections are explicit and tracked — see docs [`34`](docs/34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md) and [`41`](docs/41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md), which overturn earlier conclusions.

### 3. Automated verification

`tools/orchestrator.py` re-runs every claim against the real binaries (`nm`, `otool`, `strings`, `objdump`) and rewrites [`docs/10_VERIFICATION.md`](docs/10_VERIFICATION.md) and [`data/confidence.json`](data/confidence.json). Latest run: **77/77 VERIFIED**, average confidence ~100%.

### 4. Confidence gate

The rule the whole project rests on ([doc 56](docs/56_CONFIDENCE_GATED_RECONSTRUCTION.md)):

> No module enters implementation unless its perimeter is closed with `confidence >= 0.90`.

Concretely, the following are **banned** from `core_reconstruction/`: "reasonable" thresholds not traced to a source, arbitrary weights, normalizations unsupported by call sites or disassembly, and naming promoted to canonical while the evidence is still `medium`. If a value is merely inferred, it stays in the ledger — not in the code.

---

## Layout

```
├── binaries/               ← original targets (non-redistributable)
├── ghidra/
│   ├── scripts/            ← 5 Java scripts for headless extraction
│   └── output/             ← decompiled output + dumps per binary (~7,900 files)
├── reconstructed/
│   ├── clean/              ← cleaned pseudocode, grouped by class
│   ├── annotated/          ← small functions annotated with real property names
│   └── structs/            ← reconstructed headers / class map
├── docs/                   ← 70 ledgers — semantic source of truth
├── data/                   ← structured evidence in TSV/JSON/LOG
├── core_reconstruction/    ← buildable clean-room C++20 code
│   ├── include/mikecore/{runtime,fft,features,rawnotes}/
│   └── src/
└── tools/                  ← orchestrator, pipeline, Python extractors
```

### Naming conventions (internal to MikeCore)

| Prefix | Meaning | Scope |
|--------|---------|-------|
| `MU*` | Music/Math Unit | Core DSP, algorithms, musical structures |
| `MD*` | Melodyne Document/Display | UI, controllers, workspace |
| `GN*` | General/Generic | Base framework (audio I/O, files, toolkit) |
| `CM*` | Crypto/DRM | Licensing (CMS/PKCS7, OpenSSL wrappers) |

---

## Status

| Module | Status | Notes |
|--------|--------|-------|
| Runtime / object model | ✅ `IMPLEMENTABLE` | Open and building |
| FFT / STFT front-end | ✅ `IMPLEMENTABLE` | Includes the 7-stage window resampler |
| Spectral slice / local features | ✅ `IMPLEMENTABLE` | Median frequency, row floor, windowed overlap, harmonic stencil, scoring tail |
| Raw note families / matcher | ✅ `IMPLEMENTABLE` | `MURawNoteSeparation` carrier, class `1/2/8` builders, threshold-seeded matcher, exponential smoother |
| Analyzer gate cluster | ✅ `IMPLEMENTABLE` | Field map `+0xf4..+0x108` closed |
| LSS / nested graph topology | 🟡 `PARTIAL` | Layout closed, musical semantics of the links still open |
| Relevance / path ranking | 🟡 `PARTIAL` | Ranking policies not fully canonicalized |
| Global quality scoring | 🟡 `PARTIAL` | 40+ metrics named, few closed formula by formula |
| DNA2 high-level | 🔴 `BLOCKED` | Blockers: `0x01447a70`, `0x01433f60` |
| Resynthesis / formants / shaper | 🔴 `BLOCKED` | Math pipeline not yet faithful |

### A few closed results

- **FFT**: `GNFastFourierTransformer` wraps **Apple vDSP** (Accelerate); 11 sizes from 16 to 16384, dual FFT for frequency reassignment, **sqrt-Hann** window, packed `DC/Nyquist + re/im pairs` layout, aliasable `src/dst` buffers.
- **Spectral median** (`0149f6a0`): 50% rolloff in Hz, single caller `01484bc0`, cached at `MUElementAnalyzer + 0x110`.
- **Exponential smoother** (`015c1480 / 015c0b60`): `alpha = expf(-2.5f / width)`, `radius = trunc(-2.5 / logf(alpha))`, forward/reverse, used by the class `8` raw-note pipeline.
- **Candidate selection score**: `(1.0 - abs(deltaStart) / 0.07) * classWeight * field20`, with dynamic seed `max(0.7f, reference * 0.3f)`.
- **GPU**: `default.metallib` contains only `vertexShader` (passthrough) and `samplingShader` (texture blit). No DSP on the GPU.
- **VST3 wrapper**: 5-function obfuscated API, code signing verification, 45 `MUAra*` classes for the ARA interface.

---

## Usage

### Requirements

- macOS (the tools rely on `nm`, `otool`, `lipo`, `codesign`)
- [Ghidra 12.0.4](https://ghidra-sre.org/) installed at `/Applications/ghidra_12.0.4_PUBLIC/`
- Python 3.9+ (no external dependencies)
- CMake 3.22+ and a C++20 compiler for `core_reconstruction/`

### Pipeline

```bash
python3 tools/pipeline.py              # everything: inventory → ghidra → extract → analyze → report → verify
python3 tools/pipeline.py inventory    # catalog binaries only (size, arch, MD5, symbols)
python3 tools/pipeline.py ghidra       # headless import + analysis only
python3 tools/pipeline.py extract      # structured data extraction only
python3 tools/pipeline.py analyze      # comparison and diffing only
python3 tools/pipeline.py verify       # claim re-verification only
```

### Verifying the docs against the binaries

```bash
python3 tools/orchestrator.py          # rewrites docs/10_VERIFICATION.md and data/confidence.json
```

### Building the clean-room core

```bash
cmake -S core_reconstruction -B build
cmake --build build -j4                # target: mikecore_runtime_fft
```

> **Known limitation**: the Python tools in `tools/` and the Java scripts in `ghidra/scripts/` **hardcode** the workspace path (`/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike`). Adjust them before running elsewhere. `core_reconstruction/`, by contrast, is fully portable.

---

## Reading the ledgers

Start from [`docs/00_INDEX.md`](docs/00_INDEX.md), which lists every document with its area and status. In short:

- **`01`–`09`** — topic overviews (architecture, wrapper, FFT, DNA, quality, formants, data structures, security, status)
- **`10`–`16`** — verification, function map, replication blueprint, canonical ledger
- **`17`+** — per-cluster ledgers; the filename carries the addresses involved
- **`56`** — the confidence gate rules, required reading before touching `core_reconstruction/`
- **`61`** — file map and roles (what is a source, what is generated output)

Every document explicitly separates what is **closed** from what is **observed but not yet canonical**. The "Blocker" sections are the project's real to-do list.

---

## License

No explicit license has been applied to this repository yet. The derived material (ledgers, extracted data, decompiled pseudocode) describes third-party proprietary software; the code under `core_reconstruction/` is original work. Until a license is chosen, default copyright terms apply.
