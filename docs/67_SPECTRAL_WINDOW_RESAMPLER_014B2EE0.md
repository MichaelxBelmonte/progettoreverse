# 67 - Spectral Window Resampler `014b2ee0`

## Scope

`014b2ee0` prepara finestre da `256` campioni per sette stage spettrali. Il
kernel di sampling e' chiuso, mentre il resto della funzione resta fuori.

Implementato:

- calcolo step per stage
- calcolo start sample clampato a zero
- scelta mode nearest / interpolazione lineare / average in base a `int(step + 0.4)`
- riempimento di un output da massimo `256` campioni

Non implementato:

- chiamata FFT `00e3daa0`
- tabelle `g_02802ed0 / g_02802ed8 / g_02802ee0 / g_02802ee8`
- accumulo pesato nel buffer finale
- owner/container runtime e retain/release

## Evidenza Diretta

Nel decompilato [014b2ee0.c](../reconstructed/clean/MUElementAnalyzer/014b2ee0.c)
la funzione itera `iVar7 = 0..6`, quindi sette stage.

Lo step per stage e' diretto:

```c
dVar15 = (double)((float)(1 << (0xcU - (char)iVar7 & 0x1f)) * g_0240e35c) * param_2;
```

Con `g_0240e35c = 0.00390625f`, cioe' `1/256`, i moltiplicatori per stage sono:

| Stage | Moltiplicatore prima di `param_2` |
|-------|-----------------------------------|
| `0` | `16.0` |
| `1` | `8.0` |
| `2` | `4.0` |
| `3` | `2.0` |
| `4` | `1.0` |
| `5` | `0.5` |
| `6` | `0.25` |

Lo start sample e':

```c
start = step * -256.0 * 0.5 + center;
if (start < 0.0) start = 0.0;
```

Quindi `start = max(0, center - 128 * step)`.

Il mode e' scelto da:

```c
integerWidth = (uint)(step + 0.4);
```

Le tre modalita' osservate:

- `integerWidth == 1`: nearest sample con bias `+0.5`
- `integerWidth < 1`: interpolazione lineare tra `floor(position)` e il bin successivo
- `integerWidth > 1`: media di `integerWidth` campioni a partire da `floor(position)`

## Costanti

| Address | Valore | Ruolo |
|---------|--------|-------|
| `0x0240e35c` | `0.00390625f` | base step, `1/256` |
| `0x0240e408` | `-256.0` double | fattore start prima del `* 0.5` |
| `0x023942d0` | `0.5` double | bias nearest e mezzo frame |
| `0x0240de78` | `0.4` double | bias per `int(step + 0.4)` |

## Implementazione Clean-Room

Implementato in `fft/window_resampler.*`:

- `spectral_window_stage_step(...)`
  - `((1 << (12 - stage)) * 1/256) * scale`
- `make_spectral_window_resample_plan(...)`
  - produce stage, step, start clampato e `integer_width`
- `resample_spectral_window_256(...)`
  - azzera l'output, poi scrive al massimo `256` campioni usando una delle tre
    modalita' osservate

Le guardie bounds sono clean-room: se il sampling uscirebbe dal segnale, la
funzione lascia a zero il resto del buffer, coerente con il `bzero` precedente
nel decompilato.

## Impatto

Questo chiude la parte di prelievo temporale che alimenta il front-end
spettrale locale. Il blocco FFT/accumulo resta separato per non inventare la
semantica delle tabelle globali.
