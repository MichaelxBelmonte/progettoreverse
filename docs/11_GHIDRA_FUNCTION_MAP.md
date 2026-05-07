# 11 — Ghidra Function Map

Dati estratti da Ghidra 12.0.4 headless analysis del progetto MikeCore_Project.

## Statistiche globali

| Metrica | Valore |
|---------|--------|
| Export symbols | 11.624 |
| Funzioni totali | 72.103 |
| Funzioni con nome | 5.393 (7.5%) |
| Funzioni anonime (FUN_) | 66.710 (92.5%) |
| Funzioni > 500 bytes | 7.859 |
| Namespace C++ | 55 |
| Stringhe DSP con xrefs | 1.452 |

## Mega-funzioni DSP identificate

Le 10 funzioni anonime piu' grandi — queste contengono la logica core:

| Indirizzo | Size (bytes) | Ipotesi (basata su xrefs) | Confidence |
|-----------|-------------|---------------------------|------------|
| `FUN_003c19b0` | 485.284 | **MEGA: probabilmente la classe principale del documento/session** | 60% |
| `FUN_0065f880` | 390.766 | **MEGA: UI o document controller** | 50% |
| `FUN_004bd000` | 206.391 | **Grande modulo funzionale** | 50% |
| `FUN_015cd2c0` | 103.639 | **DSP pipeline** (vicino alle funzioni spectral) | 70% |
| `FUN_015592a0` | 100.487 | **DSP pipeline** | 65% |
| `FUN_013a2780` | 75.220 | **Audio source description processing** | 70% |
| **`FUN_01447a70`** | **71.837** | **findPolyphonicDetectionItems() — DNA2 CORE** | **100%** |
| `FUN_00722630` | 71.063 | **Grande modulo** | 50% |
| `FUN_007cc310` | 60.902 | **Grande modulo** | 50% |
| `FUN_01433f60` | 57.867 | **Caller di findPolyphonicDetectionItems — detection orchestrator** | 95% |

## Funzioni DSP identificate con certezza

### FFT

| Funzione | Size | Ruolo | Confidence |
|----------|------|-------|------------|
| `FUN_012b98e0` | 448 | FFT factory (switch su dimensioni, errore "Inappropriate table size") | 100% |
| `FUN_012b96f0` | 448 | FFT factory (seconda istanza, stessa struttura) | 100% |
| `FUN_012a8c90` | 45.108 | **MULSSComponentRenderer / FFT consumer** — chiama entrambe le factory ma mostra forte semantica di renderer/buffer | 60% |

La funzione `FUN_012a8c90` (45KB) chiama le due factory FFT, ma la decompilazione pulita mostra stringhe e campi di `MULSSComponentRenderer` (`getInstanceBufferWithSize`, `getProcessingBufferWithSize`, component/item rendering). Quindi non e' piu' rigoroso etichettarla come "FFT engine puro".

### Spectral Analysis

| Funzione | Size | Ruolo | Confidence |
|----------|------|-------|------------|
| `FUN_015c4e40` | 4.396 | **initFromTimeSignal()** — entry point analisi spettrale | 100% |
| `FUN_015c4d90` | caller | Wrapper/dispatcher di initFromTimeSignal | 95% |

`initFromTimeSignal` chiama **28 sotto-funzioni**, confermando la pipeline complessa:
- FFT complessa, magnitudine, fase
- Tonality analysis
- Transient detection
- Frequency reassignment

### DNA2 Polyphonic Detection

| Funzione | Size | Ruolo | Confidence |
|----------|------|-------|------------|
| **`FUN_01447a70`** | **71.837** | **findPolyphonicDetectionItems()** — il cuore di DNA2 | 100% |
| `FUN_01433f60` | 57.867 | **Detection orchestrator** — chiama findPolyphonicDetectionItems | 95% |
| `FUN_013903d0` | 5.999 | **assignEnergyClaimsInSampleRange()** | 100% |
| `FUN_01353f80` | caller | Chiama assignEnergyClaimsInSampleRange (1 di 2) | 90% |

`findPolyphonicDetectionItems` chiama **138 sotto-funzioni** — e' l'algoritmo DNA2 completo.
`assignEnergyClaimsInSampleRange` chiama **25 sotto-funzioni** — il sistema di energy claims.

### Window Overlap e Spectrum Size

| Funzione | Size | Ruolo | Confidence |
|----------|------|-------|------------|
| `FUN_01103ee0` | 9.650 | **MUElementAnalyzer copy/init + property graph** — copia campi da source object, cambia vtable e registra proprieta' analyzer | 80% |
| `FUN_011b2e50` | 2.923 | **Spectrum size calculator** | 85% |
| `FUN_0111f300` | caller | **Sample rate reduction configurator** — chiama tutti i _sampleRateReduction* | 90% |
| `FUN_01174240` | caller | **Time slice configurator** — chiama windowOverlap e sampleRateReduction | 90% |

La funzione `FUN_01103ee0` (9.6KB) referenzia `_windowOverlapForTimeSlices` e chiama **52 sotto-funzioni**, ma le prove locali oggi mostrano:

- copy iniziale da `unaff_RSI`
- base init + vtable swap
- lunga property registration analyzer

Quindi va trattata soprattutto come `MUElementAnalyzer copy/init + property graph`, non come STFT engine principale.

### Formant Synthesis

| Funzione | Size | Ruolo | Confidence |
|----------|------|-------|------------|
| `FUN_015cd2c0` | 103.639 | Potenziale resynthesis engine (vicino alle classi spectral) | 70% |

Le 13 stringhe FormantsSynth_ sono tutte referenziate dalla stessa area di codice.

## Call graph ricostruito

```
Detection Orchestrator (FUN_01433f60, 57KB)
    │
    ├──► findPolyphonicDetectionItems (FUN_01447a70, 71KB, 138 calls)
    │        │
    │        ├──► assignEnergyClaimsInSampleRange (FUN_013903d0, 6KB, 25 calls)
    │        └──► [137 altre sotto-funzioni]
    │
    └──► initFromTimeSignal (FUN_015c4e40, 4KB, 28 calls)
             │
             └──► FFT Engine (FUN_012a8c90, 45KB)
                      │
                      ├──► FFT Factory 1 (FUN_012b96f0, 448B)
                      └──► FFT Factory 2 (FUN_012b98e0, 448B)

Analyzer State Init / Property Graph (FUN_01103ee0, 9.6KB, 52 calls)
    │
    ├──► _windowOverlapForTimeSlices
    ├──► _energyRawMatrix
    └──► _findMonophonicPitchInFrequencyDomain

Sample Rate Config (FUN_0111f300)
    │
    ├──► _sampleRateReductionForFourierProcessing
    ├──► _sampleRateReductionForOutputReadBuffer
    └──► _sampleRateReductionsRatio
```

## Dati raw disponibili

| File | Contenuto |
|------|-----------|
| `ghidra_out/exports.txt` | 11.624 export symbols |
| `ghidra_out/functions.txt` | 5.393 named functions con sizes |
| `ghidra_out/namespaces.txt` | 55 C++ namespaces con counts e sizes |
| `ghidra_out/dsp_xrefs.txt` | 1.452 stringhe DSP con cross-references |
| `ghidra_out/largest_anonymous.txt` | Top 200 funzioni anonime per dimensione |
| `ghidra_out/deep_*.txt` | 22 file di cross-reference profonde per area |
