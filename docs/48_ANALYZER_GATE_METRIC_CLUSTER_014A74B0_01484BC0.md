# 48 — Analyzer Gate Metric Cluster `0x014a74b0 / 0x01484bc0`

**Ultimo aggiornamento:** 2026-05-11

## Obiettivo

Chiudere il cluster di metriche contiguous a:

- `MUElementAnalyzer + 0xf4`
- `MUElementAnalyzer + 0xf8`
- `MUElementAnalyzer + 0xfc`
- `MUElementAnalyzer + 0x100`
- `MUElementAnalyzer + 0x104`
- `MUElementAnalyzer + 0x108`

riducendo il rumore del decompilato e fissando:

- ABI reale di `014a74b0`
- mapping output-pointer -> offset
- ruolo operativo minimo di ogni scalar

---

## Conclusione Principale

`0x014a74b0` non e' una funzione a due output come suggerisce il decompilato sporco.

E' un writer multi-output che popola sei float contigui del `MUElementAnalyzer`.

Callsite reale in `01484bc0`:

- `r9  -> self + 0xf4`
- `stack + 0x10 -> self + 0xf8`
- `stack + 0x18 -> self + 0xfc`
- `stack + 0x20 -> self + 0x100`
- `stack + 0x28 -> self + 0x104`
- `stack + 0x30 -> self + 0x108`

La registration properties di `01141790` chiude ora i nomi canonici del cluster:

- `+0xf4` = `_allTonality`
- `+0xf8` = `_allCentDiffPerMillisecond`
- `+0xfc` = `_allPitchRangePerNote`
- `+0x100` = `_allEnergyRelevantRegionRatio`
- `+0x104` = `_allAttackPeakQuality`
- `+0x108` = `_allAttackPeakToEnergyRegionRatio`

Le letture operative del writer restano utili, ma non sono piu' il naming principale.

---

## 1. ABI Reale Di `014a74b0`

Prologo disassembly in [binaries/MikeCore](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore):

- [0x14a74c4](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `movq %r9, %r15`
- [0x14a74d7](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `movq %r8, %r13`
- [0x14a74ef](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `movq %rsi, %r14`
- [0x14a74c7](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) salva `xmm2`
- [0x14a74cf](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) salva `xmm1`
- [0x14a74da](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) salva `xmm0`

Questo conferma che la firma reale usa:

- piu' di un input floating (`xmm0`, `xmm1`, `xmm2`)
- almeno sei output pointer (`r9` + cinque stack args)

Il decompilato locale a 5 parametri va quindi trattato come incompleto.

---

## 2. Mapping Output Pointer -> Offset

Dal callsite reale di `01484bc0`:

- [0x1486baa](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `leaq 0xf4(%rdi), %r9`
- [0x1486bb1](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `leaq 0xf8(%rdi), %r8`
- [0x1486bb8](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `leaq 0xfc(%rdi), %rcx`
- [0x1486bbf](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `leaq 0x100(%rdi), %rdx`
- [0x1486bc6](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `leaq 0x104(%rdi), %rsi`
- [0x1486bcd](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) `leaq 0x108(%rdi), %rax`

poi:

- [0x1486bd4](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) stack arg = `self + 0x108`
- [0x1486bd9](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) stack arg = `self + 0x104`
- [0x1486bde](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) stack arg = `self + 0x100`
- [0x1486be3](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) stack arg = `self + 0xfc`
- [0x1486be8](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) stack arg = `self + 0xf8`

Writer side in `014a74b0`:

- [0x14a82a9](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) store to `r9` -> `+0xf4`
- [0x14a8325](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) store to `[rbp+0x10]` -> `+0xf8`
- [0x14a834e](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) store to `[rbp+0x18]` -> `+0xfc`
- [0x14a839e](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) store to `[rbp+0x20]` -> `+0x100`
- [0x14a84fe](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) and [0x14a8552](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) store to `[rbp+0x28]` -> `+0x104`
- [0x14a856a](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) store to `[rbp+0x30]` -> `+0x108`

Confidence qui e' very high.

---

## 3. Canonical Field Map

| Offset | Campo canonico | Confidence | Evidenza |
|--------|------------------|------------|----------|
| `+0xf4` | `_allTonality` | Very High | property registration in `01141790`; writer `014a74b0`; downstream gate use in `01484bc0` |
| `+0xf8` | `_allCentDiffPerMillisecond` | Very High | property registration in `01141790`; writer formula at `0x14a82ed..0x14a8325` |
| `+0xfc` | `_allPitchRangePerNote` | Very High | property registration in `01141790`; writer formula at `0x14a8329..0x14a834e` |
| `+0x100` | `_allEnergyRelevantRegionRatio` | Very High | property registration in `01141790`; writer uses sorted middle value of interval-ratio buffer |
| `+0x104` | `_allAttackPeakQuality` | Very High | property registration in `01141790`; writer uses sorted middle value of linked `field_20` buffer |
| `+0x108` | `_allAttackPeakToEnergyRegionRatio` | Very High | property registration in `01141790`; writer stores linked-present / total ratio |

### Note operative ancora utili

- `_allCentDiffPerMillisecond` nasce dal path `local_c0 / count` con normalizzazione successiva
- `_allPitchRangePerNote` nasce da un rapporto pesato `fVar37 / fVar36` costruito su span centrali del lattice `MUPitchMatrixPeak`
- `_allEnergyRelevantRegionRatio` continua a coincidere osservabilmente con la mediana del buffer di overlap/adjacency locale
- `_allAttackPeakQuality` continua a coincidere osservabilmente con la mediana del buffer `item->+0x40->+0x20`
- `_allAttackPeakToEnergyRegionRatio` continua a coincidere osservabilmente con `count(non-null links) / total`

---

## 4. `_allTonality` (`+0xf4`) E' Davvero Usato Downstream

Il consumer piu' forte e' in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L1311):

```c
fVar77 = (*(float *)(this_ptr + 0x1e) + *(float *)((int64_t)this_ptr + 0xec)) * 0.5f;
*(bool *)(this_ptr + 0x1c) =
     threshold < fVar77 / *(float *)((int64_t)this_ptr + 0xf4) &&
     (...);
```

e ancora in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L1848):

```c
if (gateConstant < (double)(fVar77 * *(float *)((int64_t)this_ptr + 0xf4))) {
  *(void*)((int64_t)this_ptr + 0xe1) = 0;
}
```

Quindi `+0xf4` non e' metadato passivo:

- entra direttamente nelle decisioni boolean downstream
- fa da normalizzatore e da fattore di gating

---

## 5. `_allEnergyRelevantRegionRatio / _allAttackPeakQuality / _allAttackPeakToEnergyRegionRatio`

### `_allEnergyRelevantRegionRatio` (`+0x100`)

`014a74b0` costruisce un primo buffer float, lo ordina con `qsort`, poi prende la mediana:

- [0x14a8352](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1)
- [0x14a837c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1)
- [0x14a839e](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1)

Dal corpo C locale questo buffer nasce dal ramo:

```c
(end - start) / (nextStart - start)
```

quindi la lettura piu' prudente oggi e':

- mediana di overlap / adjacency ratio locale

Il gate di inclusione del vicino e' chiuso dal branch:

```c
if (nextStart - currentEnd < 2.0)
```

`g_023b2c70` e' stato letto da `__TEXT,__const` a `0x023b2c70` come double
`2.0`. Se nessun ratio entra nel buffer, il fallback osservato e' ancora
`DAT_02394254 = 0.01f`.

Subset clean-room implementato:

- `collect_energy_relevant_region_ratios(items, neighborGapLimit)`
- `compute_energy_relevant_region_ratio(items, neighborGapLimit)`
- `compute_raw_note_analyzer_gate_cluster_subset(items, neighborGapLimit)`
  popola solo `+0x100`, `+0x104` e `+0x108`; i campi `+0xf4`,
  `+0xf8` e `+0xfc` restano fuori da questo subset perche' dipendono da
  formule e traversal non inclusi qui

### `_allAttackPeakQuality` (`+0x104`)

Il secondo buffer nasce da:

```c
if (item->field_40 != 0) value = item->field_40->field_20;
else value = default;
```

poi:

- sort
- mediana

store finale:

- [0x14a84fe](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1)
- [0x14a8552](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1)

Lettura operativa:

- mediana del gate/weight scalar dei link subordinati `+0x40`

Il linker che materializza `item->+0x40` e' ora chiuso in:

- [49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md](49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md)

Default chiuso dal binario:

- quando `item->+0x40 == 0`, il buffer non usa `0.0f` ma `DAT_02394254`
- dal dump `__TEXT,__const` a `0x02394254`, `DAT_02394254 = 0.01f`
- quando la lista e' vuota, il fallback scritto a `+0x104` e' `0x3c23d70a = 0.01f`

Quindi il path `+0x104` oggi e' chiuso come:

- missing-link default = `0.01f`
- empty-list fallback = `0.01f`

### `_allAttackPeakToEnergyRegionRatio` (`+0x108`)

Sempre sullo stesso secondo buffer path:

- `r12d` conta gli elementi con `item->+0x40 != 0`
- `eax` contiene il count totale
- a `0x14a8557..0x14a856a` viene scritto `countPresent / countTotal`

Quindi:

- `+0x108` = coverage ratio dei link subordinati disponibili

Caso limite chiuso:

- se il total count e' `0`, il fallback osservato non e' `0.0f` ma ancora `0.01f`

---

## 6. `_allPitchRangePerNote` (`+0xfc`)

Questo campo non e' piu' open.

La property registration di `01141790` chiude il nome canonico:

- `_allPitchRangePerNote`

La formula assembly:

- [0x14a8329](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1)
- [0x14a834e](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1)

usa:

- un rapporto `xmm3 / xmm4`
- scaling con costanti
- fallback mascherato quando non c'e' supporto statistico

Dal writer locale:

- `xmm3` deriva da `fVar37`, cioe' accumulo pesato di `(maxPitchIndex - minPitchIndex)` sul nucleo centrale dei bucket
- `xmm4` deriva da `fVar36`, cioe' peso totale corrispondente

Quindi la lettura oggi chiusa e':

- il campo non e' density, jitter o variance
- rappresenta davvero una misura aggregata di `pitch range per note/group`

---

## 7. Invalidazione E Cache

In [01662bd0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01662bd0.c#L211) il corridoio di invalidazione azzera insieme:

- `+0x108`
- `+0x110`

Questo suggerisce che almeno una parte del cluster e':

- cache-like
- ricalcolata quando cambia lo stato analyzer downstream

Non basta ancora per un naming finale dei campi, ma e' utile per la replica:

- il clone clean-room dovra' preservare anche la policy di invalidazione, non solo le formule.

---

## Impatto Sul Replication Effort

1. Il cluster `+0xf4 .. +0x108` esce dalla categoria "offset anonimi".
2. `014a74b0` entra nella spec come writer reale di metriche analyzer con nomi canonici.
3. `_allPitchRangePerNote` sale sopra il gate e puo' entrare nel clean-room object model.
4. Il corridoio `spectralMedianHz -> 014a74b0 -> gate bool / raw-note separation filter` e' ora piu' stretto.

---

## Next Step

1. Verificare se `+0xf8` o `+0x104/+0x108` hanno reader forti fuori da `01484bc0`.
2. Cercare il corrispondente helper in `MikeCoreF`.
3. Portare nel clone clean-room altri reader forti del cluster solo quando le formule sono chiuse.

Nota successiva del 2026-04-30: il seed del matcher `014af180` e' ora corretto
come `xmm0`; `xmm1` e' il `windowRadius`. La relazione con `014a74b0` e'
chiusa nei ledger [47](47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md)
e [49](49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md).
