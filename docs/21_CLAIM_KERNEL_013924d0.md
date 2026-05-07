# 21 — Claim Kernel `0x013924d0`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Documentare in modo operativo il ruolo di `0x013924d0`, chiamata da:

- `assignEnergyClaimsInSampleRange()` in [013903d0.c](../reconstructed/clean/MUElementAnalyzer/013903d0.c#L788)
- `MUSpectrumShaper` in [014902f0.c](../reconstructed/clean/MUSpectrumShaper/014902f0.c#L3572)

Il punto chiave e' capire se si tratta di orchestration o di un kernel numerico reale.

Conclusione: e' un kernel numerico riusabile per scoring/claim weighting su liste di item.

---

## Firma Operativa

La firma decompilata e':

```c
FUN_013924d0(float param_1, uint32_t param_2, int64_t param_3, uint param_4)
```

Questa firma e' fuorviante.

Dal callsite reale in `013903d0` e dall'entry del callee, la ABI operativa del path analyzer e':

```c
void claim_kernel(
    AnalyzerLike *self,     // rdi
    ItemListRef *items,     // rsi
    float *magnitudeData,   // rdx
    float *trueFreqData,    // rcx
    float *tonalityData,    // r8
    float globalScale,      // xmm0
    float harmonicDecay,    // xmm1
    int harmonicColumns,    // r9d
    uint8_t stackFlagA,     // [rsp]
    uint8_t stackFlagB      // [rsp+8]
);
```

Il `this_ptr` implicito del pseudocode e' quindi un vero primo argomento in `rdi`, e non solo uno stato recuperato indirettamente.

Origine dei due stack flag:

- `stackFlagA` nasce da `r9d` all'entry di `013903d0`, viene conservato in `-0x120(%rbp)` e poi riversato a `(%rsp)` nel callsite di `013924d0`
- `stackFlagB` nasce da `0x10(%rbp)` di `013903d0`, cioe' dal settimo argomento del caller di `assignEnergyClaimsInSampleRange()`

Lettura prudente dei parametri:

- `globalScale`: fattore di scala/peso globale
- `harmonicDecay`: esponente o damping control usato da `_powf`
- `tonalityData`: buffer esterno per-bin usato nello scoring finale
- `harmonicColumns`: ordine / numero di colonne armoniche / larghezza del kernel

Doc di dettaglio:

- [26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md](26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md)

---

## Fatti Verificati

### 1. Usa una lista di item, non un singolo item

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c#L56):

- legge `*arg1 + 0xc` come count
- itera `*arg1 + 0x10` come array di puntatori a item

### 2. Dipende da uno stato descriptor/cache

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c#L48):

- legge `this_ptr + 0x1a0`
- se nullo, lo materializza via `FUN_0132d640()`
- poi usa almeno `lVar6 + 0x20`, `lVar6 + 0x2c`, `lVar6 + 0x50`

Quindi non e' una routine stateless pura.

Doc di dettaglio:

- [29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md](29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md)

### 3. Per-item usa almeno quattro campi chiave

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c#L101):

- `item + 0x10`
- `item + 0x14`
- `item + 0x20`
- `item + 0x28`

Lettura operativa:

- `+0x10` e' un descriptor armonico lazily materialized via `014eed60`
- `+0x14` e' un pitch assoluto in cents-like, usato nella forma `8.175799 * exp2f(pitch / 1200)`
- `+0x20` e' un base-frequency / harmonic-spacing scalar lazily materialized via `014eecb0`
- `+0x28` e' il campo di output dove viene scritto lo score finale

Correzione importante:

- `013924d0` non legge realmente `+0x10` o `+0x20` come input numerico principale
- li materializza solo se `NaN`
- il kernel usa poi direttamente `+0x14`

### 4. Costruisce una base armonica multi-order

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c#L107):

- deriva una base via `exp2f(item[0x14] * const) * const`
- itera multipli armonici finche' `fVar25 <= param_4 * step`
- ad ogni armonica usa `_powf(..., param_2)` e `FUN_014b74f0(...)`

Questo e' incompatibile con una funzione di puro dispatch. E' calcolo numerico reale.

Correzione importante:

- `014b74f0` e' ora leggibile come harmonic stencil writer
- il writer accumula una lobo nel row-buffer corrente
- il peso di stamping e' coerente con `item[+0x24] / harmonicIndex`

Doc di dettaglio:

- [25_HARMONIC_STENCIL_WRITER_014B74F0.md](25_HARMONIC_STENCIL_WRITER_014B74F0.md)

### 5. Normalizza il kernel per colonna/ordine

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c#L212):

- somma colonne distanziate di `param_4`
- se la somma supera una soglia minima, riscale l'intera colonna

Quindi il kernel costruito non viene solo accumulato: viene normalizzato.

### 6. Scrive lo score finale in `item + 0x28`

In [013924d0.c](../reconstructed/clean/Unknown/013924d0.c#L207), [013924d0.c](../reconstructed/clean/Unknown/013924d0.c#L324) e [013924d0.c](../reconstructed/clean/Unknown/013924d0.c#L393):

- inizializza `item + 0x28 = 0`
- poi vi scrive il risultato finale del prodotto/scoring

Questo e' oggi il miglior candidato locale per "claim score" o "relevance score" per item.

### 7. Il path finale puo' essere tonality-weighted

Nel blocco tardo di assembly:

```asm
movb  -0x31(%rbp), %cl
andb  0x18(%rbp), %cl
movb  %cl, -0x31(%rbp)
```

Il byte `-0x31(%rbp)` nasce da:

```asm
testq %r8, %r8
setne -0x31(%rbp)
```

quindi inizialmente rappresenta `tonalityData != NULL`.

La `and` con il secondo stack flag (`0x18(%rbp)`) restringe il path tonality-aware a:

- `tonalityData` presente
- `enableTonalityWeighting` attivo

Nel ramo pesato, il codice usa davvero `min(1.0, tonalityData[i])` nel prodotto finale.

Conclusione forte:

- il path finale non e' sempre lo stesso
- esiste un ramo `magnitude-only` e un ramo `magnitude * tonalityWeight`
- la normalizzazione e il dot product finale ignorano la colonna `k = 0`

Doc di dettaglio:

- [27_FINAL_SCORING_MODEL_013924D0.md](27_FINAL_SCORING_MODEL_013924D0.md)

---

## Relazione Con I Dati Spettrali

Nel caller analyzer `013903d0`:

- `015c6b60()` -> magnitudeData
- `015c66c0()` -> trueFreqData
- `015c6ba0()` -> tonalityData

Il decompilato mostra solo `uVar22 = FUN_015c6ba0()` nella call visibile, ma il disassembly reale del callsite dimostra che `013924d0` riceve tutti e tre i buffer:

- `rdx = magnitudeData`
- `rcx = trueFreqData`
- `r8 = tonalityData`

Inferenza forte aggiornata:

- nel path DNA2, `tonalityData` resta il buffer di scoring downstream piu' evidente
- `trueFreqData` viene rilanciata dentro `014eecb0 -> 014b71e0` come asse frequenziale
- `magnitudeData` viene rilanciata dentro `014eecb0 -> 014b71e0` come buffer energia/magnitudine
- `tonalityData` entra anche nel helper locale come weight/mask opzionale

Doc di dettaglio:

- [26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md](26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md)

---

## Lettura Operativa Del Kernel

La funzione sembra fare tre fasi:

1. materializzare descriptor/cache per-item se mancanti
2. costruire un template armonico o multi-bin per ogni item
3. normalizzare il template per colonna
4. correlare/ponderare il template contro `magnitudeData`, con weighting tonality opzionale, e scrivere il punteggio in `item + 0x28`

Questo spiega bene perche' venga riusata sia nell'analyzer sia nello spectrum shaper.

---

## Cose Da Non Dire Ancora

Non e' ancora rigoroso affermare che:

- `item + 0x28` sia "energy claim" nel naming finale
- `param_2` sia sicuramente il naming finale del decay armonico
- `lVar6 + 0x2c` sia certamente binCount o tonal grid size
- `item + 0x10` sia gia' nominabile come "activation quality" senza altre prove
- `item + 0x20` sia gia' nominabile come "fundamentalHz" senza conferme downstream

Sono ipotesi forti, ma vanno ancora tipizzate meglio.

---

## Impatto Sul Replication Effort

1. `013924d0` e' un kernel P0/P1 reale, non un helper secondario.
2. Il path `slice -> (magnitudeData, trueFreqData, tonalityData) -> 013924d0 -> item[+0x28]` e' adesso abbastanza chiaro da guidare una spec clean-room.
3. Il tonality weighting non va piu' trattato come dettaglio opzionale: e' un branch reale del kernel.
4. Il pitch interno dell'item e' ormai quasi fissato: cents assoluti.
5. Per replicare il comportamento servira' ricostruire anche i campi item `+0x10/+0x14/+0x20/+0x28`.
6. Il writer armonico `014b74f0` e' un sub-kernel separabile e testabile.
7. La normalizzazione per colonna va replicata; senza quella lo score finale divergera' anche con un template armonico corretto.

---

## Next Step

1. Stringere il ruolo dei due stack flag di `013924d0`.
2. Cercare tutti i reader di `item + 0x58`.
3. Raffinare ancora il significato di colonna `0` e il path poly alto che porta a questo kernel.
