# 25 — Harmonic Stencil Writer `0x014b74f0`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Chiarire il ruolo di `0x014b74f0` dentro `013924d0` e trasformare il blocco `powf -> call helper` in una descrizione matematica concreta.

---

## Conclusione Operativa

`014b74f0` non misura uno score.

Scrive una lobo armonica dentro il row-buffer corrente dell'item.

In pratica:

- prende una frequenza armonica target
- costruisce un intorno locale in bin
- legge una LUT di forma finestra
- accumula `kernelValue * harmonicWeight` nel buffer della riga corrente

E' quindi il primitive di "stamping" del template armonico usato da `013924d0` prima della normalizzazione e del dot product finale.

---

## Evidenza Dal Callsite In `013924d0`

Nel callsite assembly di `013924d0`:

- `rbx` punta al row-buffer appena azzerato per l'item corrente
- `xmm0` riceve `harmonicHz`
- `xmm1` riceve `windowHz`
- `xmm2` riceve `binStepHz`
- `xmm3` riceve `windowSpanBins`
- `xmm4` riceve `item[+0x24] / harmonicIndex`
- `xmm5` riceve il literal `64.0f`
- `rdi` riceve `trueFreqData`
- `rsi` riceve il row-buffer corrente
- `edx` riceve `harmonicColumns`
- `rcx` riceve un wrapper temporaneo derivato da `014b9ce0`, la cui tabella e'
  letta dal callee via `(*rcx)->+0x10`

Il setup chiave e':

```c
harmonicHz = baseHz * harmonicIndex;
windowHz = max(binStepHz, pow(decayBase, exponent) * baseHz * globalScale);
harmonicWeight = item_local_overlap_evidence / harmonicIndex;
```

Poi segue la call a `014b74f0`.

Questo e' incompatibile con una routine di dispatch. E' scrittura numerica diretta del template.

---

## Comportamento Del Callee

Dal disassembly di `014b74f0`:

```c
lower = max(1, trunc((centerHz - windowHz) / binStepHz - 0.5 * spanBins));
upper = min(binCount, trunc((centerHz + windowHz) / binStepHz + 0.5 * spanBins));

for i in [lower, upper):
    diff = abs(centerHz - axis[i]);
    if diff < windowHz:
        lutIndex = int((windowHz - diff) / windowHz * lutScale);
        rowBuffer[i] += lut[lutIndex] * harmonicWeight;
```

La forma dell'indice LUT e' chiusa nel callee: `lutScale` arriva gia'
preparato dal caller in `xmm5`.

- bounds in bin
- test di distanza in Hz
- lookup di finestra
- accumulo additivo nel row-buffer

---

## Argomenti Operativi Ricostruiti

La firma decompilata standard e' fuorviante. Il ruolo migliore oggi e':

```c
void harmonic_stencil_writer(
    float centerHz,
    float windowHz,
    float binStepHz,
    float windowSpanBins,
    float *trueFreqData,      // hidden RDI
    float *rowBuffer,         // hidden RSI
    int harmonicColumns,      // EDX
    KernelWrapper *lutWrap,   // RCX, tabella letta via (*rcx)->+0x10
    float harmonicWeight,     // XMM4
    float lutScale            // XMM5 = 64.0f nel callsite 013924d0
);
```

L'identita' dell'asse non e' piu' aperta per questo callsite: viene da `rcx`
di `013924d0`, cioe' `trueFreqData` secondo la ABI gia' chiusa in
`013903d0 -> 013924d0`.

Il wrapper LUT resta parziale come tipo oggetto, ma il percorso dati locale e'
chiaro: `013924d0` chiama `014b9ce0`, conserva il risultato e passa un wrapper
stack al writer; `014b74f0` dereferenzia il payload a `(*rcx)->+0x10`.

---

## Relazione Con `013924d0`

Il flusso reale del kernel adesso appare cosi':

1. per item: prepara row-buffer a zero
2. ricava `baseHz` da `item + 0x14`
3. per armonica `n`:
   - `harmonicHz = n * baseHz`
   - `windowHz = max(binStepHz, decayTerm)`
   - `harmonicWeight = item[+0x24] / n`
   - `014b74f0(...)` scrive la lobo nel row-buffer
4. normalizza il row-buffer per colonna
5. fa dot product contro il buffer esterno
6. scrive il risultato in `item + 0x28`

La normalizzazione e il dot product finale sono ora dettagliati in:

- [27_FINAL_SCORING_MODEL_013924D0.md](27_FINAL_SCORING_MODEL_013924D0.md)

Questo collega finalmente:

- `item + 0x24` come evidence locale
- `014b74f0` come writer del template
- `item + 0x28` come score finale

---

## Correzione Importante

Nel pseudocode di `013924d0` la call:

```c
FUN_014b74f0(fVar25, fVar22, fVar20, uVar3);
```

nasconde argomenti cruciali.

In particolare:

- il quarto argomento visibile non basta a descrivere la call
- esistono hidden args in `RDI`, `RSI`, `RCX`, `XMM4`, `XMM5`
- quindi il decompiled C, preso alla lettera, sottodescrive pesantemente il writer

---

## Implementazione Clean-Room

Implementato in `features/harmonic_stencil.*`:

- `make_harmonic_stencil_plan(...)`
  - replica i bounds con `0.5f * windowSpanBins`, clamp lower a `1` e upper a
    `binCount`
- `stamp_harmonic_stencil(...)`
  - scansiona `frequencyAxis[lower:upper]`
  - usa `abs(centerHz - frequencyAxis[i]) < windowHz`
  - calcola `lutIndex = int(((windowHz - diff) / windowHz) * lutIndexScale)`
  - somma `lut[lutIndex] * harmonicWeight` nel `rowBuffer`

Guardrail: il wrapper originale in `RCX` non viene modellato come oggetto. Il
modulo riceve direttamente `std::span<const float> lut`, equivalente al payload
letto dal callee tramite `(*rcx)->+0x10`.

---

## Impatto Sul Replication Effort

1. Il cuore di `013924d0` non e' piu' solo "powf e poi qualcosa": ora c'e' un writer armonico esplicito.
2. Il template armonico puo' essere replicato come fase separata e testabile.
3. `item + 0x24` entra direttamente nel peso di stamping, quindi non e' un dettaglio secondario.
4. Il writer locale e' ora disponibile nel core clean-room; resta fuori il
   wiring del loop armonico completo di `013924d0`.

---

## Next Step

1. Tipizzare `lutWrap` e la tabella letta via `+0x10`.
2. Collegare il writer al loop armonico clean-room solo quando owner del
   row-buffer e lifecycle di `014b9ce0` sono entrambi chiusi.
3. Verificare se lo stesso writer viene riusato fuori dal callsite `013924d0`.
