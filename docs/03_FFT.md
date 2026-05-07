# 03 — FFT Implementation (Fase C — Completa)

## Libreria

Melodyne **NON** implementa una FFT custom. Usa **Apple vDSP** (Accelerate framework) — hardware-optimized: SSE/AVX su x86, NEON su ARM.

### Simboli importati

| Funzione | Ruolo |
|----------|-------|
| `vDSP_create_fftsetup` | Crea config FFT (twiddle factors, una tantum) |
| `vDSP_destroy_fftsetup` | Libera configurazione |
| `vDSP_fft_zrip` | **FFT radix-2 in-place su dati REALI** |
| `vDSP_ctoz` | Split complex → interleaved complex |
| `vDSP_ztoc` | Interleaved → split complex |
| `vDSP_maxmgv` | Maximum magnitude value (peak finding) |
| `vDSP_maxv` | Maximum value |
| `vDSP_vadd` | Vector add |
| `vDSP_vmul` | Vector multiply (windowing, scaling) |
| `vDSP_vsmul` | Vector-scalar multiply (normalizzazione) |
| `vDSP_vsadd` | Vector-scalar add (DC offset) |
| `vDSP_vclr` | Vector clear / zero fill |

`vDSP_fft_zrip` e' Real-to-Complex FFT in-place. Output in formato "split complex" (array separati Re/Im).

## Dimensioni FFT supportate

Funzione factory a `0x12b98e0` — grande `switch`. Solo potenze di 2:

| Dimensione | Log2 | Uso probabile |
|-----------|------|---------------|
| 16 | 4 | Micro-analisi, sub-frame |
| 32 | 5 | Micro-analisi |
| 64 | 6 | Sub-band analysis |
| 128 | 7 | Sub-band analysis |
| 256 | 8 | Onset detection, transient analysis |
| 512 | 9 | Short-time analysis |
| **1024** | **10** | **STFT standard (probabile default)** |
| **2048** | **11** | **STFT high-quality** |
| **4096** | **12** | **High-res pitch detection** |
| 8192 | 13 | Very high-res (basse frequenze) |
| 16384 | 14 | Maximum resolution |

Altro valore → `GNFFTException: "Inappropriate table size for FFT (%I)!"`

Ogni dimensione ha un **set pre-calcolato** di puntatori a tabelle nel segmento dati (~0x28ac698-0x28ac740) — tabelle **statiche e pre-computate**, non generate a runtime.

## Dual FFT

```
_fft1    → FFT primaria (magnitudine/fase per lo spettro base)
_fft2    → FFT secondaria (frequency reassignment / true frequency)
```

`DNA2Test_UseStackedFft` abilita "stacked FFT" — FFT con finestre di dimensioni diverse per risoluzione tempo-frequenza adattiva:

- Finestra grande (4096/8192) → alta risoluzione in frequenza
- Finestra piccola (256/512) → alta risoluzione in tempo
- Combinati ("stacked") per il meglio di entrambi

## Processing loop (magnitudine/fase)

A `0x12b9bc6` — conversione complesso → magnitudine/fase con SSE:

```asm
movsd    → carica coppia (Re, Im)
movshdup → duplica parte immaginaria
andps    → valore assoluto (abs)
divss    → divisione per atan2 (fase)
mulss    → quadrato per magnitudine
addss    → somma Re^2 + Im^2
```

Gestisce casi speciali (Re=0, Im=0) con branch `je`/`jnp` per evitare div-by-zero.

## Sample Rate Reduction

```
_sampleRateReductionForFourierProcessing    → fattore riduzione per FFT
_sampleRateReductionForOutputReadBuffer     → fattore per output buffer
_sampleRateReductionsRatio                  → rapporto tra le due
```

Ottimizzazione: audio 96kHz → ridotto prima della FFT. Il pitch utile arriva a ~8kHz, quindi ridurre il SR a 16kHz fa si' che FFT 4096 copra 0-8kHz con risoluzione 4× migliore.

## Tipo di finestra

La finestra FFT e' **Hann (sqrt-Hann)**, confermata dalla variabile `_hannWindowSqrt` nel binario.

Stringhe di errore correlate:
```
filter2DimensionalMatrixHorizontallyWithFIRWithConstantSizeHannWindow: filterSize too big!
filterMatrixUsingVectors : filterIndex >= fineStepHannWindowsCount !
```

La sqrt-Hann (radice quadrata della finestra di Hann) e' la scelta standard per STFT con overlap-add: applicata sia in analisi che in sintesi, il prodotto delle due sqrt-Hann ricostruisce perfettamente il segnale originale (proprieta' COLA — Constant Overlap-Add).

## Window Overlap

```
_windowOverlapForTimeSlices    → overlap per l'analisi delle time slices
_windowOverlapForTrueFreqs     → overlap per il calcolo delle true frequencies (reassignment)
```

Due overlap separati suggeriscono che l'analisi base e il frequency reassignment usano hop size diversi. Il reassignment richiede tipicamente overlap maggiore (75-87.5%) rispetto all'analisi standard (50-75%).

La funzione che referenzia `_windowOverlapForTimeSlices` (a `0x01103ee0`, 9650 bytes, 52 chiamate) era stata inizialmente interpretata come loop STFT principale.

**Correzione aggiornata:** le prove locali oggi la fanno convergere molto piu' chiaramente su:

- copy/init di `MUElementAnalyzer`
- setup vtable
- property graph / metadata registration

e non su un loop STFT principale.

Quindi `0x01103ee0` non va piu' usata come anchor del front-end numerico.
Il vero STFT loop va cercato altrove, seguendo i caller reali della FFT factory e i path che entrano in `MUSpectralTimeSlice::initFromTimeSignal`.

Dettaglio:

- [41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md](41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md)
- [42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md](42_SHARED_SPECTRAL_PREAMBLE_00E83120_00E83530_015C4D90.md)
- [43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md](43_SPECTRAL_MEDIAN_FREQUENCY_0149F6A0.md)
- [44_FFT_HELPER_CLUSTER_00E83010_00E83530_015C4D90.md](44_FFT_HELPER_CLUSTER_00E83010_00E83530_015C4D90.md)

## Da completare

- [x] ~~**Tipo di finestra**~~ → Hann (sqrt-Hann)
- [x] ~~**Overlap factor**~~ → `_windowOverlapForTimeSlices`, `_windowOverlapForTrueFreqs` (valori numerici ancora sconosciuti)
- [x] ~~**FFT size di default**~~ → non determinabile staticamente (dipende dal materiale audio), ma `GNFastFourierTransformer::create` a `0x00e83120` mostra il factory completo con switch size→log2 e chiamata a `vDSP_create_fftsetup`. Codice decompilato in `reconstructed/clean/GNFastFourierTransformer/00e83120.c`
- [x] **`0x01103ee0` declassata da STFT loop** → decompilata a `reconstructed/clean/MUElementAnalyzer/01103ee0.c` (9650 bytes, 51 chiamate), oggi piu' coerente con `MUElementAnalyzer copy/init + property graph`
- [x] **`0x0149f6a0` stretta a metrica spettrale concreta** → accumula `re^2 + im^2`, applica `sqrt`, prende il primo bin oltre il `50%` della magnitudine cumulata e lo converte in Hz con `sampleRate / 1024`; oggi il nome di lavoro migliore e' `spectralMedianFrequencyHz`
- [x] **`0x00e83530` tipizzata concretamente** → wrapper forward FFT del `GNFastFourierTransformer`, con binding verificato agli import `vDSP_ctoz`, `vDSP_vsmul`, `vDSP_fft_zrip`, `vDSP_ztoc`; `0x015c4d90` resta invece un adapter thin sopra `MUSpectralTimeSlice::initFromTimeSignal`
- [x] **Contratto dei wrapper FFT stretto a buffer aliasabili `src/dst`** → `0x00e83530` e `0x00e83640` non sono piu' letti come funzioni "single-buffer + return", ma come primitive operative su buffer caller-side con aliasing possibile; i return value del decompilato non sono piu' considerati parte affidabile della spec
