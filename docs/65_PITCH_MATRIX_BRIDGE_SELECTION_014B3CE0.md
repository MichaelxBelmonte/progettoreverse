# 65 — Pitch Matrix Bridge Selection `0x014b3460 / 0x014b3ce0`

## Scope

`014b3ce0` e' il bridge che consuma la working lattice
`GNList<GNList<MUPitchMatrixPeak>>` e riversa una scelta sull'item sorgente.

Lo scope implementato e' volutamente stretto: solo la coda scalare gia'
chiusa dalla funzione, cioe' la selezione finale dentro una chain candidata.
Restano fuori:

- costruzione delle chain candidate dalla `GNList` esterna
- retain/release e mutazione `GNList`
- pruning completo delle chain
- smoothing `015c1480`
- binding canonico del carrier item chiamante

## Evidenza Diretta

Nel decompilato [014b3ce0.c](../reconstructed/clean/MUElementAnalyzer/014b3ce0.c):

1. La funzione itera una lista candidata di peak e cerca il massimo su `+0x1c`:

```c
local_98 = g_02394214;
...
fVar24 = *(float *)(lVar20 + 0x1c);
if (local_98 < fVar24) {
  local_98 = fVar24;
  local_58 = lVar20;
}
```

`g_02394214` e' letto dal binario come `0.4000000059604645f`, quindi il gate e'
strettamente `quality > 0.4f`.

2. Se il peak esiste, calcola il pitch bin in due modalita':

```c
if (param_4 == '\0') {
  fVar24 = (float)*(int *)(local_58 + 0x10);
}
else {
  fVar24 = (float)iVar17 / (float)*(int *)((int64_t)local_48 + 0xc);
}
```

Quindi:

- `param_4 == 0`: usa il `pitchBinIndex` del peak scelto
- `param_4 != 0`: usa la media dei `pitchBinIndex` della chain

3. La conversione in frequenza e' diretta:

```c
fVar24 = (float)_exp2f(fVar24 / g_023941f0);
*(float *)(item + 0x38) = fVar24 * g_0240e330;
```

Costanti lette da `binaries/MikeCore`:

| Address | Valore | Ruolo |
|---------|--------|-------|
| `0x02394214` | `0.4000000059604645f` | floor per `peak + 0x1c` |
| `0x023941f0` | `60.0f` | pitch bins per octave |
| `0x0240e330` | `21.533203125f` | base Hz moltiplicata dopo `exp2` |
| `0x0240e334` | `1.4426950216293335f` | `log2(e)` per conversione Hz -> pitch-bin |
| `0x0239011c` | `0.5f` | bias prima del cast a intero |
| `0x02390108` | `0.05` double | durata corta sotto cui il fallback deviazione viene respinto |
| `0x0241f368` | `0.6499999761581421f` | floor qualita' del consumer `014aa770` |
| `0x0240e350` | `-60.0f` | normalizzatore deviazione pitch-bin in `014aa770` |
| `0x02391090` | `0.10000000149011612f` | scala deviazione pitch-bin in `014aa770` |
| `0x0240e3b0` | `2.1` double | ampiezza finestra envelope in periodi nel consumer `0149ebe0` |
| `0x0240e338` | `-0.008333333767950535f` | scala attenuazione distanza pitch-bin in `0149e4a0` |
| `0x02390118` | `-0.5f` | offset quality per histogram in `0149d5b0` |
| `0x0239424c` | `0.0f` | soglia positiva dopo offset quality in `0149d5b0` |
| `0x02390d28` | `12.0f` | smoothing width e bins-per-octave histogram in `0149d5b0` |
| `0x0239109c` | `0.8999999761581421f` | soglia iniziale per focus range histogram in `0149d5b0` |
| `0x0241b638` | `-0.10000000149011612f` | decremento soglia per focus range histogram in `0149d5b0` |
| `0x023942b8` | `0.7` double | keep ratio per pruning chain |
| `0x023b19a0` | `-1.0` double | failure anchor |
| `0x02390d00` | `-1.0f` | failure frequency |

4. L'anchor time scritto su `item + 0x30` viene dal row/sample index del peak:

```c
dVar25 = (double)*(int *)(local_58 + 0xc) * param_1;
*(double *)(item + 0x30) = dVar25;
```

5. Il fallimento e' esplicito:

```c
*(float *)(item + 0x38) = -1.0f;
dVar25 = -1.0;
*(double *)(item + 0x30) = dVar25;
```

## Implementazione Clean-Room

Implementato in `rawnotes/pitch_matrix_bridge.*`:

- `PitchMatrixPeak`
  - `row_index` rappresenta il campo `+0x0c`
  - `pitch_bin_index` rappresenta il campo `+0x10`
  - `primary_peak_value` rappresenta il campo `+0x18`
  - `working_peak_quality` rappresenta il campo `+0x1c`
- `pitch_matrix_bridge_minimum_chain_length(...)`
  - espone il pruning scalar `int(maxLen * 0.7)`, con special-case `maxLen == 2`
- `pitch_matrix_bridge_frequency_from_pitch_bin(...)`
  - `exp2(pitchBin / 60.0f) * 21.533203125f`
- `pitch_matrix_bridge_pitch_bin_from_frequency(...)`
  - `int(log(freq / 21.533203125f) * 1.4426950216293335f * 60.0f + 0.5f)`
  - e' la forma vista in `014aa770` e `0149ebe0`; il codice clean-room
    aggiunge solo guardie su frequenze non positive/non finite
- `pitch_matrix_bridge_deviation_quality_accepts(...)`
  - consumer `014aa770`: `0.65f <= (deviation / -60.0f) * 0.1f + quality`
- `pitch_matrix_bridge_duration_is_short(...)`
  - consumer `014aa770`: durata `< 0.05`
- `select_best_peak_in_open_pitch_bin_range(...)`
  - fallback `014aa770`: sceglie il peak con quality massima e
    `lowerExclusive < pitchBin < upperExclusive`
- `replace_failed_bridge_frequencies_with_previous(...)`
  - consumer `0149ebe0`: se `item +0x38 <= 0`, sostituisce con l'ultima
    frequenza valida, inizializzata dal parametro in ingresso
- `pitch_matrix_mirrored_log2_exponent(...)`
  - subset `0149ded0`: `pitchBin / 60.0f`, specchiato sopra `centerLog2`
- `pitch_matrix_primary_peak_value(...)`
  - subset `0149ded0`: `pow(weightBase, mirroredExponent) * peak +0x1c`
- `pitch_matrix_weight_base_from_frequency_span(...)`
  - subset `0149ded0`: se `upperHz >= lowerHz`, calcola
    `log(upperHz / lowerHz) * 1.4426950216293335f * spanScale + baseOffset`
- `apply_pitch_matrix_primary_peak_values(...)`
  - scrive il risultato nel campo clean-room `primary_peak_value`, equivalente
    semantico di `peak +0x18`
- `pitch_matrix_per_bin_ratio_from_octave_ratio(...)`
  - subset `0149c330`: `exp(log(octaveRatio) / 60.0f)`
- `apply_pitch_matrix_descending_bin_weight(...)`
  - subset `0149c330`: moltiplica i bin dal piu' alto al piu' basso con
    pesi `1, ratio, ratio^2, ...`
- `collect_pitch_matrix_row_positive_run_peaks(...)`
  - subset `0149c330`: materializza un peak per ogni run positiva della row,
    scegliendo il massimo locale come `pitch_bin_index` e scrivendo lo stesso
    valore iniziale in `primary_peak_value` e `working_peak_quality`
- `filter_pitch_matrix_peaks_by_relative_row_max(...)`
  - subset `0149c330`: conserva i peak con `peak +0x1c >= rowMax * keepRatio`
- `pitch_matrix_row_envelope_half_window_samples(...)`
  - subset `0149ebe0`: `int((sampleRate / frequencyHz) * 2.1) / 2`
- `pitch_matrix_absolute_mean_around_center(...)`
  - subset `0149ebe0`: media di `abs(signal[i])` nella finestra clampata
- `interpolate_pitch_matrix_row_value(...)`
  - subset `0149ebe0`: interpolazione lineare tra due valori row adiacenti
- `fill_interpolated_pitch_matrix_row_values(...)`
  - pass clean-room per riempire un buffer output da row values gia' calcolati
- `pitch_matrix_peak_is_below_upper_bin(...)`
  - subset `0149ebe0`: predicato `peak +0x10 < upperPitchBin`
- `copy_peaks_below_upper_bin(...)`
  - alternativa clean-room al pruning `GNList`: copia solo i peak sotto soglia
- `pitch_matrix_peak_is_inside_open_bin_range(...)`
  - predicato condiviso per i range aperti `lower < peakBin < upper`
- `pitch_matrix_peak_is_inside_closed_bin_range(...)`
  - predicato `0149c330`: range chiuso `lower <= peakBin <= upper`
- `pitch_matrix_center_distance_attenuation(...)`
  - subset `0149e4a0`: `max(0, abs(peakBin - centerBin) * -0.0083333338 + 1)`
- `apply_pitch_matrix_center_distance_attenuation(...)`
  - moltiplica `primary_peak_value` con il fattore di distanza dal centro
- `make_empty_pitch_matrix_quality_histogram(...)`
  - crea il buffer histogram a `96` bin visto in `0149d5b0`
- `accumulate_pitch_matrix_quality_histogram(...)`
  - subset `0149d5b0`: per ogni primo peak di row accumula
    `peak +0x1c - 0.5f` nel bin `pitchBin / 5` solo se positivo
- `normalize_pitch_matrix_quality_histogram(...)`
  - subset `0149d5b0`: trova il massimo sui `96` bin e normalizza dividendo
    ogni bin per quel massimo; se il massimo non e' positivo non muta il buffer
- `pitch_matrix_histogram_frequency_from_index(...)`
  - subset `0149d5b0`: `exp2(index / 12.0f) * 21.533203125f`
- `find_pitch_matrix_quality_histogram_range(...)`
  - subset `0149d5b0`: estrae indici center/first/last peak, floor range
    e focus range dal buffer histogram gia' smoothato/normalizzato
- `pitch_matrix_histogram_range_to_frequencies(...)`
  - replica la coda output di `0149d5b0` convertendo tutti gli indici range
    tramite la stessa formula `exp2(index / 12.0f) * 21.533203125f`
- `reset_pitch_matrix_peak_linkage(...)`
  - subset `014b3460`: assegna `local_rank` e azzera flag/link alti
- `link_adjacent_pitch_matrix_peak_rows(...)`
  - subset `014b3460`: per ogni peak della row corrente sceglie un peak nella
    row successiva non ancora reclamato con distanza pitch-bin minima e
    strettamente minore di `20`
- `select_pitch_matrix_bridge_peak(...)`
  - sceglie il peak con quality maggiore di `0.4f`
  - supporta la modalita' pitch bin diretto o medio
  - espone `frequency_hz` e `anchor_time`

## Linker `014b3460`

Prima del bridge finale, `014b3460` resetta e collega le righe adiacenti:

```c
*(int *)(peak + 0x14) = index;
*(void*)(peak + 0x20) = 0;
*(void*)(peak + 0x28) = 0;
*(void*)(peak + 0x30) = 0;
```

Poi, per ogni coppia di righe adiacenti, cerca il target migliore nella row
successiva:

```c
iVar12 = 0x14;
distance = abs(current->+0x10 - next->+0x10);
if ((distance < iVar12) && (*(char *)(next + 0x20) == '\0')) {
  best = next;
}
```

Se trova un target:

```c
current->+0x28 = best;
best->+0x30 = current;
best->+0x20 = 1;
```

Nel modello clean-room questi tre campi diventano:

- `next_row_link_index`
- `previous_row_link_index`
- `adjacency_claimed`

## Consumer `014aa770`

Dopo `014b3ce0`, `014aa770` valuta il peak scelto contro finestre pitch-bin
derivate con la conversione Hz -> bin. Il frammento chiuso e' questo:

```c
if (0 < pitchDeviation) {
  if (duration < 0.05) reject;
  if (0.65f <= ((float)pitchDeviation / -60.0f) * 0.1f + peakQuality) accept;
  ...
}
```

Se il gate non passa, la funzione cerca nella row del peak selezionato il
miglior candidato in range aperto:

```c
if ((peak->+0x10 < upperBin) && (lowerBin < peak->+0x10) &&
    (bestQuality < peak->+0x1c)) {
  best = peak;
}
```

La mutazione dell'item/lista resta fuori; nel codice attivo entrano solo i
predicati numerici e la selezione fallback su span.

## Consumer `0149ebe0`

Nel path `param_4 != 0` di `014b3ce0`, `0149ebe0` normalizza le frequenze
fallite:

```c
local_44 = param_2;
...
if (*(float *)(item + 0x38) <= 0.0) {
  *(float *)(item + 0x38) = local_44;
}
local_44 = *(float *)(item + 0x38);
```

Il modulo clean-room espone questa regola come pass su `std::span<float>`:
nessuna mutazione dell'item originale, solo la sequenza di frequenze.

Sempre in `0149ebe0`, la funzione costruisce un envelope per row stimando la
media dell'assoluto del segnale intorno al centro temporale della row:

```c
centerSample = rowIndex * param_1 * sampleRateLike;
halfWindow = (int)((sampleRateLike / frequencyHz) * 2.1) / 2;
start = max(0, centerSample - halfWindow);
end = min(sampleCount, centerSample + halfWindow);
rowEnvelope[rowIndex] = sum(abs(signal[start:end])) / (end - start);
```

Dopo smoothing esterno, l'ultimo tratto osservato interpola linearmente i valori
row verso il buffer output:

```c
position = (outputIndex / outputRateLike) / param_1;
index = (int)position;
if (rowCount - 2 < index) {
  index = rowCount - 2;
  position = rowCount - 1;
}
out[i] = (row[index + 1] - row[index]) * (position - index) + row[index];
```

Il codice clean-room implementa envelope e interpolazione. La smoothing call
intermedia resta fuori da questo slice.

Il primo blocco di `0149ebe0` costruisce inoltre una proiezione filtrata degli
inner peaks e rimuove quelli sopra soglia:

```c
upperPitchBin = int(logf(freq / 21.533203125f) * 1.4426950216293335f * 60.0f + 0.5f);
if (upperPitchBin <= peak->+0x10) {
  remove peak;
}
```

Nel modulo clean-room questa mutazione diventa `copy_peaks_below_upper_bin(...)`,
quindi la semantica di filtro e' preservata senza simulare `GNList`.

## Weighting `0149ded0`

`0149ded0` aggiorna `MUPitchMatrixPeak +0x18` partendo da `+0x1c`.
Il frammento chiuso:

```c
fVar14 = (float)*(int *)(peak + 0x10) / 60.0f;
fVar14 = powf(weightBase,
              centerLog2 < fVar14 ? (centerLog2 + centerLog2) - fVar14
                                   : fVar14);
*(float *)(peak + 0x18) = fVar14 * *(float *)(peak + 0x1c);
```

Dove:

- `centerLog2` deriva da `logf(centerHz / 21.533203125f) * 1.4426950216293335f`
- `weightBase` deriva da
  `logf(upperHz / lowerHz) * 1.4426950216293335f * spanScale + baseOffset`
  dopo il guard `upperHz >= lowerHz`

Questo chiude solo la formula di weighting. Il pruning interno di `0149ded0`
resta fuori perche' usa indici/iterazione `GNList` non ancora abbastanza
stabili da replicare senza simulazione.

## Row Peak Builder `0149c330`

Nel builder della pitch matrix, prima della ricerca dei peak, un blocco
osservato calcola:

```c
perBin = expf(logf(octaveRatio) / 60.0f);
```

Poi applica una pesatura dal bin alto verso il basso. Per una row da `480`
elementi il bin `479` riceve peso `1`, il bin `478` riceve `perBin`, il bin
`477` riceve `perBin^2` e cosi' via.

Dopo questa pesatura, il frammento chiuso scansiona una row di valori float e
crea un `MUPitchMatrixPeak` per ogni run positiva:

```c
if (previous <= 0.0 && current > 0.0) {
  active = true;
  peakIndex = index;
  peakValue = current;
}
...
if (active && peakValue < current) {
  peakIndex = index;
  peakValue = current;
}
...
peak->+0x0c = rowIndex;
peak->+0x10 = peakIndex;
peak->+0x18 = peakValue;
peak->+0x1c = peakValue;
```

Subito dopo, nel path senza range pitch esplicito, la funzione calcola il
massimo della row e rimuove i peak sotto soglia relativa:

```c
threshold = rowMax * keepRatio;
if (peak->+0x18 < threshold) remove peak;
```

Nel path con range pitch esplicito, i due limiti Hz sono convertiti con la
stessa formula Hz -> pitch-bin gia' chiusa, poi vengono rimossi i peak fuori
dal range chiuso:

```c
upperBin = int(logf(upperHz / 21.533203125f) * 1.4426950216293335f * 60.0f + 0.5f);
lowerBin = int(logf(lowerHz / 21.533203125f) * 1.4426950216293335f * 60.0f + 0.5f);
if (upperBin < peak->+0x10) remove peak;
if (peak->+0x10 < lowerBin) remove peak;
```

Il codice clean-room espone questi due pass su `std::span`/`std::vector`.
Restano fuori la preparazione dei buffer a `480` bin, la pesatura pre-scan e le
mutazioni/ordinamenti `GNList`.

## Center Attenuation `0149e4a0`

`0149e4a0` lavora ancora sulla stessa lattice e applica una attenuazione sui
peak raccolti temporaneamente:

```c
distance = abs(peak->+0x10 - centerBin);
factor = distance * -0.0083333338f + 1.0f;
if (factor < 0.0f) factor = 0.0f;
peak->+0x18 = factor * peak->+0x18;
```

Il codice clean-room espone solo questo pass numerico. Restano fuori la
raccolta/rimozione nella lista temporanea e la chiamata `014b32a0`.

## Quality Histogram `0149d5b0`

`0149d5b0` contiene un pass histogram sui primi peak disponibili per row.
Il frammento chiuso e' stabile:

- legge `peak +0x1c`, sottrae `0.5f` e scarta valori non positivi
- calcola il bin histogram come `peak +0x10 / 5`
- accumula su un buffer da `96` float
- chiama una smoothing esterna `015c1480(12.0f, 96)`, non implementata qui
- trova il massimo dei `96` bin e normalizza dividendo tutti i bin per il massimo
- cerca il primo e l'ultimo local peak sopra la soglia passata a funzione
- calcola floor sinistro/destro usando `min(threshold, peakValue * 0.5f)`
- se il center e' dentro il floor range, cerca un focus range partendo da
  soglia `0.9f` e scendendo a passi di `-0.1f`; se il range supera `13` bin,
  usa fallback `center +/- 6`
- se il center cade fuori dal floor range, ricentra su `(lower + upper) / 2`
  e usa ancora il fallback `center +/- 6` clampato ai bordi
- converte un indice histogram in Hz con `exp2(index / 12.0f) * 21.533203125f`

Il codice clean-room implementa accumulo, normalizzazione, range selector e
conversione indice -> Hz. La smoothing resta fuori da questo slice perche' il
callsite non espone ancora il mode/contesto in modo sufficiente per garantire
equivalenza con il wrapper generale.

## Guardrail

Questo non ricostruisce ancora tutta `014b3ce0`.

La parte iniziale costruisce candidate chains camminando righe della lattice,
campi di adiacenza `+0x28/+0x30`, temporanei `GNList` e una smoothing call
`015c1480(3.0f, count)`. Quella parte non entra nel codice attivo finche' non
abbiamo una modellazione abbastanza alta da non simulare la struttura originale.

## Impatto Sul Replication Effort

Questo slice e' importante per il MIDI finale: quando la lattice ha gia' una
chain candidata valida, il reverse espone una conversione pitch-bin -> Hz reale
e una policy precisa per scegliere tra peak singolo e pitch medio di chain.
