# 39 — Shaper Source And Shortlist Policy `0x014902f0 / 0x00d242c0 / 0x014f7360`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Stringere due punti rimasti aperti nel corridoio `014f7360`:

- la provenienza reale di `MUMatrixPathPoint::object`
- la policy concreta della shortlist `puVar17` dopo `00d242c0`

---

## Conclusione Principale

Le prove raccolte oggi chiudono due cose utili per la replica:

1. Nel path `MUSpectrumShaper::014902f0`, il builder `014f9d00` riceve il source object quasi per identita':
   - `xPosIndex <- *(int *)(source + 0xc)`
   - `yValue <- *(float *)(source + 0x14)`
   - `relevanceQuality <- *(float *)(source + 0x58)`
   - `object <- source`
2. Quindi `MUMatrixPathPoint::object` non e' un payload derivato o sintetico.
   E' un back-reference al carrier upstream del ranking locale.
3. `00d242c0` non filtra e non riduce la lista.
   Ordina in place con `qsort_r`.
4. La vera riduzione della shortlist avviene in `014f7360` subito dopo il sort:
   - `count < 10` -> usa tutti gli elementi
   - `count >= 10` -> usa solo `floor(count / 4) * 3`
5. Il comparator object reale usato in questo corridoio e' `0x14f9df0`:
   - legge `MUMatrixPathPoint + 0x34`
   - restituisce `-1 / 0 / 1`
   - ordina in modo decrescente per `bestNeighbourQuality`
6. Quindi il merge finale su `puVar17` lavora solo sulla prefix ordinata della shortlist, non sull'intera lista.

---

## 1. Callsite Diretto `014902f0 -> 014f9d00`

Il callsite osservato in disassembly sta a:

- `0x1497792 .. 0x14977b7`

Sequenza rilevante:

```asm
movss  0x58(%rax), %xmm1
movl   0xc(%rax), %esi
movss  0x14(%rax), %xmm0
movq   %rax, -0x318(%rbp)
leaq   -0x318(%rbp), %rdx
leaq   -0x138(%rbp), %rdi
callq  0x14f9d00
```

Da qui segue in modo stretto:

- `%rax` e' il source object corrente preso dalla lista `*(this + 0x58)`
- `source + 0xc` entra in `014f9d00` come `xPosIndex`
- `source + 0x14` entra come `yValue`
- `source + 0x58` entra come `relevanceQuality`
- il wrapper stack a `-0x318(%rbp)` contiene lo stesso `source`

Il risultato pratico e':

- `MUMatrixPathPoint::object` e' un ref all'oggetto sorgente corrente del loop

non a un DTO intermedio.

---

## 2. Identita' Del Source Object

Il tipo nominale esatto del source object non e' ancora chiuso in modo assoluto.

Pero' il suo comportamento converge su una famiglia gia' nota:

- usa `+0xc` come indice discreto
- usa `+0x14` come coordinata/asse locale
- usa `+0x58` come weight numerico secondario

Questo e' coerente con la `claim-score item family` gia' documentata in:

- [22_ITEM_SCORE_FIELD_LEDGER.md](22_ITEM_SCORE_FIELD_LEDGER.md)

e resta anche coerente con la famiglia `MUAudioSourceItem` / carrier adiacenti osservati attorno a `g_025dc9e8`.

Lettura rigorosa oggi:

- `MUMatrixPathPoint::object` = back-reference a un upstream source-item carrier
- `MUAudioSourceItem-family` = ipotesi buona ma non ancora canonica

---

## 3. `00d242c0` Fa Sort, Non Cut

Il disassembly di `00d242c0` mostra:

```asm
movq   0x10(%rdi), %rax
movslq 0xc(%rdi), %rsi
leaq   0xd24200, %r8
callq  qsort_r
```

Quindi:

- `rdi` e' la lista da ordinare
- `0x10(%rdi)` e' l'array interno
- `0xc(%rdi)` e' il count
- `00d242c0` ordina l'intera lista in place

Non c'e' nessuna riduzione numerica dentro `00d242c0`.

---

## 4. Comparator Wrapper `00d24200`

Il wrapper usato da `qsort_r` non contiene la policy finale di ranking.

Fa questo:

1. unwrap dei due elementi confrontati
2. lookup del comparator object passato dal caller
3. dispatch del confronto vero e proprio

Nel corridoio `014f7360` il comparator object risolto e' `0x14f9df0`.

Il suo disassembly e':

```asm
movq   (%rdi), %rax
movss  0x34(%rax), %xmm0
movq   (%rsi), %rax
movss  0x34(%rax), %xmm1
ucomiss %xmm0, %xmm1
seta   %cl
ucomiss %xmm1, %xmm0
movl   $0xffffffff, %eax
cmovbel %ecx, %eax
```

Con semantica operativa:

- ritorna `-1` se `lhs->bestNeighbourQuality > rhs->bestNeighbourQuality`
- ritorna `0` se i due valori sono uguali
- ritorna `1` se `lhs->bestNeighbourQuality < rhs->bestNeighbourQuality`

Quindi il sort finale della shortlist e':

- completo sull'intera lista
- decrescente su `MUMatrixPathPoint::bestNeighbourQuality`
- ancora mediato dal wrapper `00d24200`, ma non piu' `open` sul key reale

---

## 5. Riduzione Reale Di `puVar17`

Dopo il sort, `014f7360` fa:

```c
uVar25 = *(uint *)((longlong)puVar17 + 0xc);
uVar14 = uVar25 + 3;
if (-1 < (int)uVar25) {
  uVar14 = uVar25;
}
uVar14 = ((int)uVar14 >> 2) * 3;
if ((int)uVar25 < 10) {
  uVar14 = uVar25;
}
```

Con input non negativi questo equivale a:

- `count < 10` -> `uVar14 = count`
- `count >= 10` -> `uVar14 = floor(count / 4) * 3`

Quindi la merge phase finale considera:

- tutti gli elementi per shortlist piccole
- circa il `75%` iniziale della lista ordinata per `bestNeighbourQuality` per shortlist piu' grandi

---

## 6. Modello Operativo Aggiornato

Il modello piu' pulito oggi e':

1. `MUSpectrumShaper` itera il source list a `this + 0x58`
2. per ogni source object costruisce un `MUMatrixPathPoint`
3. il point porta dentro:
   - coordinate locali per il ranking
   - relevance weight
   - back-reference al source object
4. `014f7360` ordina la shortlist in modo decrescente su `bestNeighbourQuality`
5. usa solo una prefix ridotta della lista ordinata
6. esegue merge/adiacenza via `014f6fc0`

---

## Impatto Sul Replication Effort

1. `MUMatrixPathPoint::object` va preservato come back-reference reale nel clean-room model.
2. La shortlist va replicata in due fasi separate:
   - sort completo
   - sort key = `bestNeighbourQuality` decrescente
   - cutdown esplicito della prefix
3. Il tipo concreto dell'upstream item puo' restare temporaneamente astratto come interface:
   - `getXPosIndex()`
   - `getYValue()`
   - `getRelevanceQuality()`
   - `asObjectRef()`

Questo basta per replicare `014f9d00 / 014f7360` senza aspettare la canonizzazione finale della classe.

---

## Next Step

1. Chiudere il tipo nominale del source-item carrier dietro `MUMatrixPathPoint::object`.
2. Verificare se la prefix policy `floor(count / 4) * 3` ricompare in altri corridoi di merge/matching.
3. Stringere se il payload shortlist possiede davvero un float operativo aggiuntivo a `+0x3c` oppure se quel getter appartiene a un carrier adiacente.
