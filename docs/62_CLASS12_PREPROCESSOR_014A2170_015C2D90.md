# 62 - Class 1/2 Preprocessor `014a2170 -> 015c2d90`

## Scope

Questo documento chiude solo il subset usato da `014a2170` prima del
materializzatore raw-note classi `1/2`.

Guardrail:

- `015c2d90` e' un wrapper che imposta `r8d = 0` e salta a `015c2da0`
- il codice clean-room implementa solo il branch output-only usato da `014a2170`
- non implementa il helper generico con tutti i rami `rdx/rcx` e seed-state `r8`

## ABI Osservata

Nel callsite `014a2170`:

```asm
movl  count, %edi
movq  input, %rsi
xorl  %edx, %edx
movq  output, %rcx
callq 0x15c2d90
```

`015c2d90` fa:

```asm
xorl %r8d, %r8d
jmp  0x15c2da0
```

Quindi il subset operativo e':

| Registro | Ruolo |
|----------|-------|
| `edi` | count |
| `rsi` | input buffer float |
| `rdx = 0` | primary output assente |
| `rcx` | output baseline |
| `xmm0` | gain dB |
| `xmm1` | cutoff |
| `xmm2` | shape/Q-like scalar |
| `xmm3` | sampleRate-like |
| `r8d = 0` | zero-state mode |

## Costanti

| Simbolo | Valore | Uso |
|---------|--------|-----|
| `g_023b1698` | `-40.0f` | gain del filtro nel ramo `014a2170` |
| `g_02390120` | `0.8000000119f` | scalar shape/Q-like passato in `xmm2` |
| `g_0239011c` | `0.5f` | clamp Nyquist e fattore comune |
| `g_02395718` | `40.0` | divisore `exp10(gainDb / 40)` |
| `g_02411080` | `6.283185307179586` | `2*pi` |
| `g_02394288` | `0.3000000119f` | scala del cutoff adattivo |
| `g_023945a4` | `15.0f` | floor cutoff adattivo |
| `g_0241fd58` | `30.0f` | ceiling cutoff adattivo |
| `g_0241c3ec` | `7.0f` | cutoff del baseline condiviso |

## Formula Del Branch Implementato

Il disassembly di `015c2da0` corrisponde al branch high-shelf RBJ-style,
applicato forward e poi reverse con stati iniziali zero.

Parametri:

```text
A     = exp10(gainDb / 40)
omega = 2*pi * min(cutoff, sampleRate * 0.5) / sampleRate
alpha = sin(omega) * sqrt(A) / shape
```

Coefficienti normalizzati del branch `rdx == 0`:

```text
a0 = (A + 1) - (A - 1) * cos(omega) + alpha
b0 = A * ((A + 1) + (A - 1) * cos(omega) + alpha) / a0
b1 = -2 * A * ((A - 1) + (A + 1) * cos(omega)) / a0
b2 = A * ((A + 1) + (A - 1) * cos(omega) - alpha) / a0
a1 = 2 * ((A - 1) - (A + 1) * cos(omega)) / a0
a2 = ((A + 1) - (A - 1) * cos(omega) - alpha) / a0
```

Loop:

```text
y[n] = b0*x[n] + b1*x[n-1] + b2*x[n-2] - a1*y[n-1] - a2*y[n-2]
```

Poi lo stesso filtro viene applicato in reverse sul buffer output.

## Pipeline `014a2170`

Il preprocessing classi `1/2` usa tre pass:

1. calcola cutoff adattivo:
   `clamp(referenceScalar * 0.3000000119f, 15.0f, 30.0f)`
2. filtra separatamente i due buffer con gain `-40.0f`, shape `0.8f`,
   cutoff adattivo, poi sottrae il baseline da ciascun buffer
3. costruisce `max(residual1, residual2)`, lo filtra con cutoff `7.0f` e
   sottrae questo baseline condiviso da entrambi i residual

Il risultato entra nel materializzatore positivo-run documentato in
`37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md`.

## Implementazione Clean-Room

Implementato in:

- `core_reconstruction/include/mikecore/rawnotes/raw_note_class12_builder.hpp`
- `core_reconstruction/src/rawnotes/raw_note_class12_builder.cpp`

API aggiunte:

- `class12_initial_baseline_cutoff(referenceScalar)`
- `class12_zero_phase_high_shelf_baseline(input, sampleRateLike, cutoff)`
- `preprocess_class12_detection_buffers(class1, class2, config)`
- `build_class12_raw_note_candidates_from_raw_buffers(...)`

Confidence: `High` per il subset `014a2170` perche' ABI, costanti, branch
`rdx == 0`, formula coefficienti e ordine forward/reverse sono confermati dal
disassembly diretto e dal clean dump `GNData/015c2da0.c`.
