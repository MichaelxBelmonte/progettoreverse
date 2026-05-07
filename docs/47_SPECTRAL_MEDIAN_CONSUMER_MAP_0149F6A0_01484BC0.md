# 47 — Spectral Median Consumer Map `0x0149f6a0 -> 0x01484bc0`

**Ultimo aggiornamento:** 2026-04-30

## Obiettivo

Chiudere il consumer reale della `spectralMedianFrequencyHz`:

- quanti caller diretti esistono davvero in `MikeCore`
- dove viene salvato il return value
- quali helper downstream usano il bound

---

## Conclusione Principale

In `MikeCore`, `0x0149f6a0` ha oggi un solo consumer diretto osservabile:

- `0x01484bc0` a `0x14857f3`

Il valore di ritorno non esce subito dal corridoio analyzer. Viene invece:

1. scritto in `MUElementAnalyzer + 0x110`
2. riusato come bound frequenziale interno
3. trasformato in threshold per `014a74b0`
4. riusato come prefiltro per `014a89c0`

Quindi la lettura utile per la replica oggi e':

- `0149f6a0` produce una reference spectral frequency in Hz
- `01484bc0` la usa come anchor locale per i gate downstream del path `MURawNoteSeparation`

---

## 1. Unico Caller Diretto In `MikeCore`

Ricerca completa sul binario:

```text
xcrun llvm-objdump -d binaries/MikeCore | rg 'callq\s+0x149f6a0'
```

Risultato osservato:

- `0x14857f3: callq 0x149f6a0`

Cross-check sui decompilati locali:

- [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L573)
- [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01484bc0.c#L544)

Quindi oggi non c'e' evidenza di altri direct consumer in `MikeCore`.

Confidence: very high.

---

## 2. Store In `MUElementAnalyzer + 0x110`

Nel caller:

```c
fVar77 = (float)FUN_0149f6a0(this_ptr[0x15],this_ptr[0x13]);
...
*(float *)(this_ptr + 0x22) = fVar77;
```

in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L573) e [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L816).

Poiche' `this_ptr + 0x22` e' addressing su `uint64_t *`, il campo reale e':

- `self + 0x110`

Lettura operativa aggiornata:

- `self + 0x110` = cached spectral median / rolloff-50 reference in Hz

Confidence: high.

---

## 3. Primo Downstream Use: Threshold Seed Per `014a74b0`

Subito dopo lo store, `01484bc0` costruisce un threshold derivato da `self + 0x110`:

```c
fVar77 = DAT_02390128;
if (DAT_02390128 <= *(float *)(self + 0x110) * DAT_02394288) {
  fVar77 = *(float *)(self + 0x110) * DAT_02394288;
}
FUN_014a74b0(..., fVar77 * 0.5f, ..., self + 0xf4, ..., self + 0x108);
```

Forma osservata in [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01484bc0.c#L1272).

Cross-check ABI da disassembly a `0x1486baa..0x1486c09`:

- materializza i puntatori `self + 0xf4`
- `self + 0xf8`
- `self + 0xfc`
- `self + 0x100`
- `self + 0x104`
- `self + 0x108`
- poi chiama `0x014a74b0`

Quindi `014a74b0` non consuma il median Hz in isolamento:

- usa un threshold derivato da quel valore
- popola un cluster contiguo di metriche/threshold analyzer a `+0xf4 .. +0x108`

Le costanti globali coinvolte sono ora decodificate dal `__TEXT,__const` di `binaries/MikeCore`:

| Simbolo | Valore | Uso osservato |
|---------|--------|---------------|
| `g_02390128` | `0.7f` | floor minimo del seed |
| `g_02394288` | `0.3f` | scala applicata alla reference spectral Hz |
| `g_0239011c` | `0.5f` | dimezzamento nel bridge verso `014a74b0` |
| `g_0240d308` | `0.07` (`double`) | `windowRadius` passato a `014af180` |

Il callsite a `0x1486b7e..0x1486c09` chiude la formula del bridge:

```text
seedTo014a74b0 = max(0.7f, spectralReferenceHz * 0.3f) * 0.5f
```

Il naming preciso di tutti i sei campi resta aperto, ma il bridge e' chiuso.

Confidence: high.

### Direct matcher seed in `01484bc0`

Piu' avanti `01484bc0` chiama direttamente `014af180` due volte, con lo stesso
seed e due classi diverse.

Disassembly a `0x1488e70..0x1488ed0`:

```text
xmm0 = max(0.7f, localSpectralReference * 0.3f)
ecx  = 2
xmm1 = 0.07
call 014af180
```

Disassembly a `0x148905c..0x1489076`:

```text
xmm0 = same saved seed
ecx  = 1
xmm1 = 0.07
call 014af180
```

Quindi il matcher diretto usa il seed non dimezzato, mentre il bridge
`01484bc0 -> 014a74b0 -> 014af180` riceve il seed dimezzato all'ingresso di
`014a74b0`.

---

## 4. Secondo Downstream Use: Prefiltro `MURawNoteSeparation` In `014a89c0`

Piu' avanti nello stesso corridoio, la disassembly a `0x1486d39..0x1486daa` mostra:

1. load di `self + 0x110`
2. rescaling con un fattore costante
3. clamp contro floor costanti
4. call a `0x014a89c0`

La funzione [014a89c0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/014a89c0.c#L39) filtra elementi `MURawNoteSeparation` con la forma:

```c
if (threshold < item->field_20 &&
    timeStart <= item->start &&
    item->start < timeEnd) {
  append(...)
}
```

L'ABI osservata al callsite suggerisce inoltre:

- `param_2 = 0.0`
- `param_3 = self + 0xb0`

quindi il filtro viene applicato sul range temporale completo dell'analyzer.

Inferenza forte dai consumer gia' chiusi:

- `item->field_20` qui si comporta come gate/base-frequency-like scalar di `MURawNoteSeparation`
- `self + 0x110` non e' solo telemetria, ma entra davvero nella selezione dei candidati downstream

Confidence: high sul ruolo di prefiltro; medium-high sul fatto che `self + 0xb0` sia bound temporale completo dell'analyzer.

---

## 5. Field / Call Map Operativa

| Nodo | Ruolo | Confidence | Evidenza |
|------|-------|------------|----------|
| `0149f6a0` | `spectralMedianFrequencyHz` / rolloff 50% in Hz | Very High | doc 43 + disassembly/LLDB |
| `01484bc0 @ 0x14857f3` | unico caller diretto in `MikeCore` | Very High | `llvm-objdump` full-binary grep |
| `MUElementAnalyzer + 0x110` | cache del median Hz | High | store diretto `*(float *)(this_ptr + 0x22)` |
| `014a74b0` | consumer del threshold derivato da `+0x110`; writer del cluster `+0xf4 .. +0x108` | High | decompilato + ABI callsite |
| `014a89c0` | prefiltro `MURawNoteSeparation` su threshold da `+0x110` e finestra temporale | High | disassembly + corpo funzione |

---

## Impatto Sul Replication Effort

1. `0149f6a0` non e' una feature "orfana": ha un consumer unico e concreto.
2. Il campo analyzer `+0x110` merita di entrare nel field ledger come cache/reference frequenziale reale.
3. La replica del corridoio note-separation deve preservare:
   - il calcolo del median Hz
   - il rescaling/clamp locale
   - il bridge verso `014a74b0`
   - il prefiltro sulle `MURawNoteSeparation` in `014a89c0`

---

## Next Step

1. Stringere i nomi dei sei output `MUElementAnalyzer + 0xf4 .. +0x108` popolati da `014a74b0`.
2. Verificare se `MikeCoreF` mostra lo stesso pattern: metric extractor unico + cache a `+0x110` + gate downstream.
3. Cercare chi legge a valle il cluster `+0xf4 .. +0x108` oltre al path locale di `01484bc0`.
