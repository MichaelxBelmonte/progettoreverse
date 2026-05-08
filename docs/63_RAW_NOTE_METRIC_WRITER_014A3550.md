# 63 - Raw Note Metric Writer `014a3550`

## Scope

Questo documento chiude il subset numerico di `014a3550` che popola i campi
downstream di `MURawNoteSeparation`.

Implementato:

- `+0x28`
- `+0x2c`
- `+0x30`
- `+0x34`
- `+0x38`

Fuori perimetro:

- traversal `GNList`
- retain/release sugli item
- nome musicale canonico dei due buffer input

## ABI Osservata

Nel disassembly diretto:

| Registro | Ruolo |
|----------|-------|
| `xmm0` | sampleRate-like |
| `xmm1` | peak-scan window seconds |
| `xmm2` | local-average window seconds |
| `rsi` | list wrapper |
| `rdx` | lane non-class1 / score-like |
| `rcx` | lane class1 / auxiliary |
| `r8d` | sample count |

Le finestre sono troncate a campioni:

```text
peakScanSamples = max(1, trunc(xmm1 * sampleRateLike))
averageSamples  = max(1, trunc(xmm2 * sampleRateLike))
averageScale    = 1.0f / averageSamples
```

## Formule Numeriche

Per ogni item:

```text
startSample  = trunc(item.start * sampleRateLike)
centerSample = startSample + 1
```

La finestra precedente usa:

```text
preBegin = max(centerSample - averageSamples, 0)
preEnd   = min(centerSample, sampleCount - 1)
```

La finestra successiva usa:

```text
futureBegin      = centerSample
futureAverageEnd = min(centerSample + averageSamples, sampleCount - 1)
futurePeakEnd    = min(centerSample + peakScanSamples, sampleCount - 1)
```

Campi scritti:

```text
+0x28 = 0.5f * (nonClass1Lane[centerSample] + nonClass1Lane[startSample])

+0x2c =
    average(nonClass1Lane[futureBegin .. futureAverageEnd)) -
    min(+0x28, average(nonClass1Lane[preBegin .. preEnd)))

+0x30 =
    average(class1Lane[futureBegin .. futureAverageEnd)) -
    average(class1Lane[preBegin .. preEnd))
```

Il writer originale materializza `+0x2c` come:

```text
futureNonClass1Sum * averageScale - min(centerScore, previousNonClass1Sum * averageScale)
```

e `+0x30` come:

```text
(futureClass1Sum - previousClass1Sum) * averageScale
```

## Peak Gates

Il kernel gia' documentato resta invariato:

```text
state = (state + samplePair) * 0.5f
peak  = max(peak, state)
```

La differenza ora chiusa e' l'intervallo:

- lo stato viene warmato sulla finestra precedente `[preBegin, preEnd)`
- il picco viene accumulato sulla finestra successiva `[futureBegin, futurePeakEnd)`

Output:

```text
+0x34 = peak lane non-class1
+0x38 = peak lane class1
```

## Implementazione Clean-Room

Implementato in:

- `core_reconstruction/include/mikecore/rawnotes/paired_peak_gate.hpp`
- `core_reconstruction/src/rawnotes/paired_peak_gate.cpp`

API:

- `compute_raw_note_metric_fields(...)`
- `apply_raw_note_metric_fields(...)`
- `write_raw_note_metric_fields(...)`

Confidence: `High` per le formule numeriche e gli offset scritti. Il nome
musicale finale delle due lane resta volutamente prudente; i nomi operativi
seguono il consumer `014af180`, dove `+0x30` e' il ranking weight per class `1`
e `+0x2c` quello per i rami non-class1.
