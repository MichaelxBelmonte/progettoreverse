# 49 — Threshold-Seeded Raw Note Matcher `0x014af180`

**Ultimo aggiornamento:** 2026-05-11

## Obiettivo

Chiudere il ruolo di `014af180` nel corridoio analyzer:

- che family attraversa davvero
- cosa scrive su `item + 0x40`
- come usa `threshold seed`, finestra temporale e class code

---

## Conclusione Principale

`014af180` non e' un helper generico di sorting.

E' un matcher che, per ogni `MURawNoteSeparation` della lista sorgente:

1. filtra per `classCode == in_ECX`
2. costruisce una finestra temporale locale
3. scorre una lista candidata secondaria
4. sceglie il miglior candidato sopra `thresholdSeed < candidate->field_20`
5. scrive il vincitore in:
   - `rawNoteSeparation + 0x40`

La funzione quindi materializza un link secondario per-item, non un semplice numero.

Chiusura ABI aggiornata dal disassemblato:

- `xmm0` = `thresholdSeed`
- `xmm1` = `windowRadius`
- `xmm2` = `globalEnd`
- `ecx` = `classCode`

Questa correzione e' importante: vecchie letture decompiler-style potevano far sembrare
`xmm1` il seed, ma in `014af180` `xmm1` viene usato come raggio/finestra.

---

## 1. Family E Campi Coinvolti

La lista primaria viene letta come carrier con:

- `+0x10` start
- `+0x18` end
- `+0x20` base gate weight
- `+0x2c` secondary weight
- `+0x30` local ranking weight
- `+0x3c` class/state flag
- `+0x40` selected link pointer

Questo e' coerente con la field map gia' fissata in [37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md](37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md).

---

## 2. Filtro Su `classCode`

All'inizio del loop principale:

```c
iVar2 = *(int *)(current + 0x3c);
if (iVar2 == in_ECX) { ... }
```

in [014af180.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014af180.c#L92).

Questa e' la prova forte che il quarto argomento integer reale di `014af180` e':

- `classCode`

Callsite gia' osservati:

- `014a74b0` lo chiama con `classCode = 2`
- `01484bc0` lo chiama anche con `classCode = 1`

Quindi il matcher e' riusato su almeno due sottoclassi reali del corridoio raw-note.

---

## 3. Finestra Temporale Locale

Per ogni item selezionato, `014af180` costruisce due bounds:

- lower bound `local_60`
- upper bound `dVar16`

Schema osservabile:

```c
lower = max(0, start - windowRadius);
if (prev != 0) lower = max(lower, 0.5 * (prev.start + start));

upper = 0.5 * (end + start);
upper = min(upper, min(start + windowRadius, globalEnd));
```

Il dettaglio numerico dei cap e' visibile in [014af180.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014af180.c#L167).

Quindi il matcher non usa un intorno globale fisso:

- usa una finestra locale centrata sull'item
- la restringe rispetto ai vicini

### Chiusura Del Midpoint Factor

Il coefficiente condiviso dei due midpoint non e' piu' solo inferito.

Dal dump `__TEXT,__const` di `binaries/MikeCore`:

```text
00000000023942d0  00 00 00 00 00 00 e0 3f
```

che corrisponde a:

- `DAT_023942d0 = 0.5` (`double`, little-endian)

Quindi la policy di finestra locale e' oggi chiusa come:

```text
lower = max(0, start - windowRadius)
if (prev != null)
  lower = max(lower, 0.5 * (prev.start + start))

upper = 0.5 * (end + start)
upper = min(upper, min(start + windowRadius, globalEnd))
```

---

## 4. Gate Su `field_20`

Il filtro base sui candidati e' esplicito:

```c
if ((lower < candidateStart) && (thresholdSeed < *(float *)(candidate + 0x20))) { ... }
```

in [014af180.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014af180.c#L220) e [014af180.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014af180.c#L281).

Questa e' la prova forte che:

- `field_20` di `MURawNoteSeparation` entra come gate/base strength reale
- il `thresholdSeed` passato da `014a74b0` non e' solo telemetria

---

## 5. Score Di Selezione Class-Specific

Il matcher usa due formule quasi uguali, ma non identiche.

### Caso `classCode == 1`

```c
score =
  (1.0 - abs(current.start - candidate.start) / windowRadius) *
  candidate->field_30 *
  candidate->field_20;
```

### Caso `classCode != 1`

```c
score =
  (1.0 - abs(current.start - candidate.start) / windowRadius) *
  candidate->field_2c *
  candidate->field_20;
```

Il branch e' visibile in [014af180.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014af180.c#L200) e [014af180.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014af180.c#L260).

Quindi oggi la lettura piu' forte e':

- `+0x20` = gate/base strength comune
- `+0x30` = ranking weight preferito per class `1`
- `+0x2c` = ranking weight preferito per class `2` e altri rami non-1
- `0x240e3f8` = initial best score sentinel `-1000.0`

Questo rafforza anche il ledger precedente sulla famiglia `MURawNoteSeparation`.

---

## 6. Store Finale In `+0x40`

Dopo la ricerca del best candidate, la funzione materializza il link:

```c
if (current->field_40 != winner) {
  retain(winner);
  current->field_40 = winner;
  release(oldWinner);
}
```

in [014af180.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014af180.c#L311).

Quindi:

- `+0x40` non e' metadata passivo
- e' un puntatore reale al candidato matchato

Questo spiega bene perche' `014a74b0` possa poi leggere:

- `item->+0x40->+0x20`

e costruire su quella lista le metriche `+0x104 / +0x108`.

### Implementazione clean-room del loop

Il core espone ora anche il wrapper di sequenza:

```c
match_threshold_seeded_sequence(
    currentItems,
    candidates,
    classCode,
    thresholdSeed,
    windowRadius,
    globalEnd);
```

La policy implementata e' la parte chiusa di `014af180`:

- processa solo `current.flags == classCode`
- deriva la finestra locale dal current e dal precedente nello span primario
- seleziona il best candidate con lo score class-specific gia' documentato
- scrive `current.selected_match = winner`
- scrive `nullptr` quando nessun winner e' trovato

Differenza intenzionale rispetto al binario: il wrapper clean-room scorre lo
span candidato completo e non replica l'indice incrementale `GNList`/retain/release.
Il risultato di matching resta equivalente per input ordinati e senza side effect
di ownership, mentre la semantica del contenitore originale resta fuori gate.

---

## 7. Relazione Con `014a74b0`

`014a74b0` chiama `014af180` nel ramo che alimenta:

- `+0x104`
- `+0x108`

con:

- `classCode = 2`
- `thresholdSeed = xmm0`
- `windowRadius = xmm1`
- `globalEnd = xmm2`

Il callsite reale a `0x14a83da..0x14a83f7` carica:

```text
movsd  0x240d308, %xmm1   ; windowRadius = 0.07
movl   $0x2, %ecx
movss  -0xfc(%rbp), %xmm0 ; thresholdSeed salvato dall'argomento di 014a74b0
movsd  -0x158(%rbp), %xmm2
callq  0x14af180
```

Poi legge per ogni item:

```c
linked = item->field_40;
if (linked != 0) value = linked->field_20;
```

e ne calcola:

- mediana -> `+0x104`
- coverage ratio -> `+0x108`

Quindi il corridoio reale e':

`spectralMedianHz -> threshold seed -> 014af180 matcher -> item->+0x40 links -> 014a74b0 aggregate metrics`

---

## Impatto Sul Replication Effort

1. `014af180` entra nella spec come matcher reale tra raw-note candidates.
2. I campi `+0x2c` e `+0x30` escono dalla categoria "weights indistinti":
   - sono ranking weights class-specific nel matcher.
3. `+0x40` diventa un campo strutturale importante della clean-room implementation.
4. Le metriche analyzer `+0x104 / +0x108` non vanno replicate senza prima replicare il matcher.
5. I due callsite di `01484bc0` non vanno piu' unificati:
   - `classCode = 2` e' propagazione di peer esistenti
   - `classCode = 1` e' anche materializzazione/compattazione di peer
6. Il cull pass clean-room non deve usare una soglia fissa inventata:
   - deve ricevere un `thresholdSeed` dinamico dal caller, come nel binario originale.
7. Lo score locale e' ora implementabile senza placeholder:
   - distance weight `1.0 - abs(deltaStart) / windowRadius`
   - moltiplicatore class-specific `+0x30` oppure `+0x2c`
   - gate comune `+0x20`
8. Il loop sequence-level e' ora disponibile in clean-room su `std::span`, con
   materializzazione del link `+0x40` modellata come `selected_match`.

Il dettaglio post-match e' ora fissato in [50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md](50_CLASSCODE_1_VS_2_MATCHER_PATH_01484BC0_014AF180.md).

---

## Next Step

1. Stringere l'identita' concreta della lista ausiliaria usata dal ramo `classCode = 1`.
2. Verificare dove i peer `0x40` sintetici vengano poi consumati fuori da `01484bc0`.
3. Verificare se `014afb20` usa la stessa logica di matching o una variante mono-specifica.
