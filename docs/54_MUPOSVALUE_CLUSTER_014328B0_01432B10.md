# 54. `MUPosValue` Cluster: `014328b0` And Adjacent `01432b10`

## Executive Summary

`014328b0` non e' il builder di `MUPitchMatrixPeak`.

Il cluster assembly a `0x14328b0` mostra invece con buona chiarezza che:

- `014328b0` costruisce un oggetto da `0x20` byte
- l'oggetto registra la family/name `MUPosValue`
- il builder scrive due double a `+0x10` e `+0x18`

Quindi il nome di lavoro corretto oggi e':

- `buildMUPosValue(x, value)`

con out-wrapper implicito in `rdi`.

L'helper adiacente `01432b10` non e' la stessa cosa:

- alloca `0x28` byte
- scrive tre double a `+0x10/+0x18/+0x20`

ma la family concreta di questo secondo oggetto non e' ancora chiusa con lo stesso rigore.

---

## 1. Prova Assembly Diretta Per `014328b0`

Dal dump `otool` su `binaries/MikeCore`:

```asm
00000000014328c8  movl  $0x20, %edi
00000000014328cd  callq 0xe8fc40
...
00000000014328ef  movsd -0x18(%rbp), %xmm0
00000000014328f4  movsd %xmm0, 0x10(%rbx)
00000000014328f9  movsd -0x20(%rbp), %xmm0
00000000014328fe  movsd %xmm0, 0x18(%rbx)
...
0000000001432913  movq  %rbx, (%r14)
0000000001432916  movb  $0x1, 0x8(%r14)
```

Interpretazione robusta:

- `rdi` e' un out-wrapper
- il builder alloca un object reale
- imposta due campi double:
  - `+0x10`
  - `+0x18`
- poi deposita il pointer nel wrapper e marca il flag valido

Questa ABI coincide perfettamente con i pattern decompilati dove dopo `FUN_014328b0(...)` compare:

- `if (local_flag == '\0') ...`
- `FUN_00d21140()`
- release del wrapper

---

## 2. Prova Di Naming: `MUPosValue`

Nel blocco di registration immediatamente adiacente:

```asm
0000000001432a13  ... literal pool for: "MUPosValue"
0000000001432a21  movl $0x20, ...
```

Quindi l'object-size `0x20` del builder `014328b0` converge sulla family registrata come:

- `MUPosValue`

Questo e' coerente anche con:

- [00581680.c](../reconstructed/clean/GNSlider/00581680.c), che contiene la stringa `MUPosValue`

---

## 3. Comparator Adiacenti

I due piccoli helper adiacenti confermano la semantica dei campi:

### `01432950`

Confronta:

- `lhs->+0x18`
- `rhs->+0x18`

quindi `+0x18` e' il value/score ordinabile.

### `01432980`

Confronta:

- `lhs->+0x10`
- `rhs->+0x10`

quindi `+0x10` e' il pos/x coordinate ordinabile.

Field map chiusa per `MUPosValue`:

```text
+0x10  pos / x-coordinate
+0x18  value / y-like scalar
```

Confidence: alta.

---

## 4. `01432b10`: Helper Esteso A 3 Double

Il builder vicino `01432b10` mostra:

```asm
movl $0x28, %edi
callq 0xe8fc40
...
movsd ... -> 0x10(%rbx)
movsd ... -> 0x18(%rbx)
movsd ... -> 0x20(%rbx)
```

Quindi:

- non e' il medesimo `MUPosValue` da `0x20`
- e' un object affine ma esteso a 3 coordinate/scalari

Per ora il naming prudente corretto e':

- `extendedPosValue3Candidate`
- oppure `MUPosValue3Candidate`

non:

- `MUPitchMatrixPeak`
- `MURawNoteSeparation`

Il tightening semantico downstream del carrier da `0x28` e' ora raccolto separatamente in:

- [55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md](55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md)

---

## 5. Callsite Semantics

### `014a08f0`

In [014a08f0.c](../reconstructed/clean/MUElementAnalyzer/014a08f0.c):

```c
FUN_014328b0(dVar8,(double)fVar7);
...
FUN_014328b0(0,(double)param_2);
```

Qui l'helper costruisce chiaramente una lista di coppie `(pos, value)` a valle di una scansione su items/peak-derived data.

### `014a0df0`

In [014a0df0.c](../reconstructed/clean/MUElementAnalyzer/014a0df0.c):

```c
FUN_014328b0(
  *(double *)(local_40 + 0x10) * param_1 + g_023942d0,
  (int)*(void*)(local_40 + 0x18)
);
```

Ancora una volta il pattern e' da export/conversione in coordinate-value, non da costruzione di peak del lattice interno.

### `MUSpectrumShaper` e `GNInt`

Anche:

- [01984dd0.c](../reconstructed/clean/MUSpectrumShaper/01984dd0.c)
- [014f0c40.c](../reconstructed/clean/GNInt/014f0c40.c)

usano `014328b0` e `01432b10` come generic builder di punti/coordinate, coerente con una family utility-type e non con `MUPitchMatrixPeak`.

---

## 6. Correzione Del Modello Precedente

La deduzione precedente:

- `014328b0` possibile builder/helper di `MUPitchMatrixPeak`

va considerata superata.

Il modello corretto oggi e':

- `0149c330` materializza davvero `MUPitchMatrixPeak`
- `014328b0` costruisce invece `MUPosValue`
- quindi i due corridoi sono collegati solo indirettamente:
  - `MUPitchMatrixPeak` = stage interno analyzer/shaper
  - `MUPosValue` = oggetto utility/export per coordinate-valore downstream

---

## 7. Impatto Sul Replication Effort

Questa correzione evita un errore importante di clean-room:

- non bisogna implementare `014328b0` come parte del pitch-peak lattice
- bisogna implementarlo come value-object piccolo e generico

Il modello pulito ora e':

1. analyzer/shaper costruiscono strutture interne (`MUPitchMatrixPeak`, raw-note, ecc.)
2. alcuni stage proiettano quei risultati in `MUPosValue`
3. solo dopo avvengono sorting/export/curve-building/bridging

---

## 8. Next Step

1. Trovare la registration family concreta dell'oggetto da `0x28` costruito da `01432b10`.
2. Verificare se `01432b10` rappresenta `x/y/z`, `x/value/weight` o `x/min/max`.
3. Mappare i corridoi analyzer che esportano `MUPosValue` invece di lavorare ancora sui peak interni.
