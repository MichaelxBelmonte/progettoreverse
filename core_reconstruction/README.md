# Core Reconstruction

Questo spazio e' riservato alla ricostruzione clean-room del core.

## Regola principale

Da qui in poi si implementano solo moduli con `confidence >= 0.90`.

Riferimento operativo:

- [56_CONFIDENCE_GATED_RECONSTRUCTION.md](../docs/56_CONFIDENCE_GATED_RECONSTRUCTION.md)
- [reconstruction_confidence_gate.tsv](../data/reconstruction_confidence_gate.tsv)

## Cosa entra qui

- moduli `IMPLEMENTABLE`
- codice derivato da layout, formule e contratti chiusi

## Cosa non entra qui

- formule stimate
- threshold inventati
- placeholder comportamentali
- moduli ancora `PARTIAL` o `BLOCKED`

## Moduli candidati iniziali

1. runtime / object model
2. FFT / STFT front-end
3. spectral slice / local features
4. raw note families / local matcher

DNA2 high-level, quality aggregate e resynthesis restano fuori fino a chiusura del reverse.

## Stato attuale

- `runtime / object model` aperto e compilato
- `FFT / STFT front-end` aperto e compilato
- `spectral slice / local features` aperto solo per `spectralMedianFrequencyHz`
- `raw note families / matcher` aperto per carrier `MURawNoteSeparation`, constructor/clone `014ba9e0 / 014ba950`, helper constructor-only peer sintetico `01484bc0`, finestra locale, seed dinamico da cached spectral reference, score di selezione candidato, contratto `threshold-seeded matcher`, preprocessing/materializzatore classi `1/2` da `014a2170 -> 015c2d90`, smoother mode `0` reverse-derived di `015c1480 / 015c0b60`, subset numerico metric writer `014a3550`, scalar/predicate/ranking-span/one-pass/iterative planner helpers `014a3900 / 014a42b0` e builder candidati classe `8` con mask, contrasto e smoothing
- `analyzer gate cluster support` aperto per middle-value extraction, default `0.01f`, `linked-field20 coverage` e field map canonica `_allTonality / _allCentDiffPerMillisecond / _allPitchRangePerNote / _allEnergyRelevantRegionRatio / _allAttackPeakQuality / _allAttackPeakToEnergyRegionRatio`

Configure/build locale verificato il `2026-05-08` con:

```bash
cmake -S core_reconstruction -B /tmp/mikecore_reconstruction_build
cmake --build /tmp/mikecore_reconstruction_build -j4
```

Target verificato:

- `mikecore_runtime_fft`
