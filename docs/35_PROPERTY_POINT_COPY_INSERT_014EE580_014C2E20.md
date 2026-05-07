# 35 — Property Point Copy/Insert `0x014ee580 / 0x014c2e20`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Chiudere il layer operativo dei `MUAudioSourcePropertyPoint` a valle dei builder:

- come vengono copiati
- come vengono inseriti nella collection ordinata

Questo non chiude ancora il bridge upstream verso `DAT_025e74a0`, ma stringe bene il comportamento del layer property-point una volta materializzato.

---

## Conclusione Principale

`014ee580` e' un copier reale di property point, non un helper vuoto.

`014c2e20` e' un inserter ordinato su collection `owner + 0x108`, guidato dall'indice discreto del point a `+0x0c`.

Quindi il modello operativo corretto oggi e':

1. builder/clone del property point
2. copy helper `014ee580`
3. ordered insert helper `014c2e20`

---

## 1. `014ee580` Come Copy Helper Reale

Il wrapper corto a `0x014ee580`:

- prende `dst` in `rdi`
- prende un wrapper `srcRef` in `rsi`
- chiama `0x014ee5f0(dst, &srcRef, 1)`

Il corpo vero a `0x014ee5f0` copia in modo diretto:

- `+0x0c`
- `+0x14`
- `+0x18`
- `+0x1c`
- `+0x24`
- `+0x28`
- `+0x40`
- `+0x44`
- `+0x48`
- `+0x4c`

Inoltre gestisce in modo NaN-aware:

- `+0x20`
- `+0x10`

Se il valore sorgente e' `NaN`, il destination riceve `NaN`.

Se non lo e', il valore viene copiato.

Conclusione forte:

- `014ee580` non fa solo ref-count o attach
- fa una copia semantica dei campi numerici principali del property point

---

## 2. `+0x2c` Non Viene Copiato

Nel disassembly di `014ee5f0` non compare alcuna store verso `dst + 0x2c`.

Questo si allinea con il ledger precedente:

- `+0x2c` e' un byte/status field
- non e' parte del payload float che il copier considera "core numeric state"

Inferenza prudente:

- lo stato `+0x2c` viene mantenuto dal builder chiamante o da logica esterna
- non dal copier numerico standard

---

## 3. Child Object A `+0x30`

Se `dl != 0` e il source ha un object a `+0x30`, `014ee5f0`:

1. alloca un object da `0x18` byte
2. inizializza la sua vtable
3. lo assegna a `dst + 0x30`
4. copia almeno:
   - child `+0x0c`
   - child `+0x10`

Lettura prudente:

- `+0x30` non e' un float
- e' un piccolo subobject opzionale
- il copier lo clona deep, non shallow

---

## 4. Child Object A `+0x38`

Se il source ha un object a `+0x38`, `014ee5f0`:

1. alloca un object da `0x20` byte
2. inizializza la sua vtable
3. lo assegna a `dst + 0x38`
4. copia almeno:
   - child `+0x0c`
   - child `+0x10`
   - child `+0x14`
   - child `+0x18`

Quindi il property point non e' solo un blocco piatto di float.

Ha almeno due child opzionali:

- uno piccolo a `+0x30`
- uno piu' ricco a `+0x38`

---

## 5. `014c2e20` Come Ordered Insert Helper

Il helper a `0x014c2e20` riceve:

- `owner` in `rdi`
- `pointRef` in `rsi`

Legge subito:

- `owner + 0x108` come collection
- `(*pointRef) + 0x0c` come indice discreto del point

Poi:

- controlla la cardinalita' attuale della collection
- legge il boundary index corrente
- decide se il nuovo point puo' essere inserito in testa/coda o via helper interni
- rifiuta gli indici non coerenti con l'ordine atteso

Infine chiama una callback virtuale su `owner` a offset `0x450`.

Conclusione forte:

- `014c2e20` mantiene una collection ordinata per indice
- non e' un semplice append blind

---

## 6. Evidence Operativa Di `014c2e20`

Punti forti del disassembly:

- `movq 0x108(%rdi), %rax`
- `movl 0xc(%rax), %r12d` dopo dereferenziazione del `pointRef`
- confronto con indice finale/iniziale della collection
- call a helper distinti `0x14c2bb0`, `0x14c2a80`, `0x14c2f80`
- callback finale `callq *0x450(%rax)`

Questo quadro e' molto piu' coerente con:

- insert ordinato in una timeline discreta
- property-point sequence maintenance

che non con una write generica di metadata.

---

## 7. Callers Osservati

`014ee580` compare in:

- `0137e3a0`
- `014ea210`
- `014e8b20`
- `014ea7b0`
- `013c9530`

`014c2e20` compare in:

- `0137e3a0`
- `01356870`
- `014902f0`
- `014f38a0`
- `0139d310`

Lettura pratica:

- copy e insert sono riusati in piu' path reali
- non sono helper occasionali di un singolo builder

---

## 8. Impatto Sul Bridge Ancora Aperto

Questo ledger chiude il layer property-point una volta materializzato, ma non dimostra ancora dove avvenga la conversione iniziale dal carrier upstream.

Quello che adesso e' rigoroso dire e':

- `DAT_025e74a0` ha un layer copy/insert proprio
- il carrier upstream del ranking/separation resta aperto
- il ponte tra le due famiglie e' ancora upstream e va cercato in altri helper/path

Cross-check utile:

- `0139d310` e' chiamata da `MUAudioSourceDescription/013469e0`
- `0138d2e0` e `01372190` emergono da `MUDetectionEditorView`

Quindi i bridge candidati trovati finora stanno nel layer editing/description/UI, non nel cuore DSP `DNA2`.

---

## Impatto Sul Replication Effort

1. La replica dei property point puo' gia' avere:
   - copy helper NaN-aware
   - deep clone opzionale dei child a `+0x30/+0x38`
   - insert ordinato per `pointIndex`
2. Questo riduce molto l'area ancora incerta del layer editing/property.
3. Il bridge di conversione resta un target separato e non va confuso con copy/insert.

---

## Next Step

1. Cercare il punto in cui un carrier upstream viene trasformato in source valido per `014ee580`.
2. Stringere il significato dei child object a `+0x30` e `+0x38`.
3. Tenere separato questo lavoro dal replication path DSP puro: i callsite candidati osservati finora sono lato editor/description.
