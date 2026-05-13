# 66 - Spectral Row Floor `014b25b0`

## Scope

`014b25b0` contiene un kernel chiuso che riduce righe spettrali a un valore
per-row e applica un floor numerico prima dello smoothing `015c1480`.

Questo documento copre solo:

- somma dei bin di magnitudine escludendo il primo bin
- sostituzione dei valori sotto floor con `1e-5`

Restano fuori:

- owner/container dei row pointer
- allocazione runtime del buffer temporaneo
- smoothing finale `015c1480(1.0 / param_1, rowCount)`

## Evidenza Diretta

Nel decompilato [014b25b0.c](../reconstructed/clean/MUElementAnalyzer/014b25b0.c),
se la row ha meno di due bin la somma viene azzerata. Altrimenti la funzione
somma dal bin `1` fino a `param_3 - 1`, quindi esclude esplicitamente il primo
bin:

```c
if ((int)param_3 < 2) {
  out[row] = 0;
}
else {
  sum = row[1] + row[2] + ... + row[param_3 - 1];
  out[row] = sum;
}
```

Dopo la riduzione, il buffer viene clampato dal basso. Le quattro soglie lane
nel path vettoriale e il literal scritto in caso di fallimento coincidono:

| Address / literal | Valore | Ruolo |
|-------------------|--------|-------|
| `0x02411280` | `9.999999747378752e-06f` | floor lane 0/4 e tail |
| `0x0240e274` | `9.999999747378752e-06f` | floor lane 1 |
| `0x0240e278` | `9.999999747378752e-06f` | floor lane 2 |
| `0x0240e27c` | `9.999999747378752e-06f` | floor lane 3 |
| `0x3727c5ac` | `9.999999747378752e-06f` | replacement literal |
| `0x0238fee8` | `1.0` double | numeratore per width smoothing `1.0 / param_1` |

Il confronto osservato e' equivalente a:

```c
if (value < 0.00001f) {
  value = 0.00001f;
}
```

## Implementazione Clean-Room

Implementato in `features/spectral_metrics.*`:

- `spectral_row_floor_value`
  - costante `9.999999747378752e-06f`
- `sum_spectral_bins_excluding_first(...)`
  - somma `magnitudeBins[1:]`, ritorna `0` se la row ha meno di due bin
- `sum_spectral_rows_excluding_first(...)`
  - wrapper row-major, con guardie clean-room sui bounds
- `apply_spectral_row_floor_in_place(...)`
  - sostituisce ogni valore `< floor` con `floor` e ritorna il numero di
    sostituzioni

## Impatto

Questo e' un tassello del front-end spettrale usato prima di smoothing e stage
successivi di detection. Non ricostruisce ancora l'intero `014b25b0`, ma chiude
la parte numerica che produce il buffer per-row floorato.
