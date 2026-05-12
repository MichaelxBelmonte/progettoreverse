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
