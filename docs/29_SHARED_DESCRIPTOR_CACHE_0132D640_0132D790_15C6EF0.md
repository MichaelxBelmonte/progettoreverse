# 29 — Shared Descriptor Cache `0x0132d640 / 0x0132d790 / 0x15c6ef0`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Fissare il blocco descriptor/cache condiviso che compare in:

- ramo poly DNA2
- ramo mono analyzer
- `MUAudioSourceDescription`
- `MUSpectrumShaper`
- `assignEnergyClaimsInSampleRange()`

Questo documento serve a stringere il tipo del wrapper passato come `rsi` nel bridge `01447a70 -> 013903d0`.

---

## Conclusione Principale

`0132d790` non e' un helper "config object" generico.

E' il getter di un descriptor cache condiviso, conservato a:

- `state + 0x1a0`

Se il cache manca, `0132d790` lo materializza tramite `0132d640`, che:

1. alloca un oggetto da `0x88` byte
2. lo mette in `state + 0x1a0`
3. lo popola via `15c6ef0`

Questo descriptor viene poi riusato da piu' corridoi:

- nel ramo poly `01447a70`, dove `descriptor + 0x20` viene usato come size per `GNFastFourierTransformer::create`
- nel ramo mono `0146c830`, dove `0132dc40` e `0132dca0` convertono range/sample offsets
- nei metodi `MUAudioSourceDescription`, dove `descriptor + 0x30` e `+0x38` governano il mapping sample -> time-slice
- in `MUSpectralTimeSlice`, dove `15c7140` usa `descriptor + 0x24` e `+0x2c` per costruire la cache di riferimento di `trueFreqData`
- nel cluster renderer/slot condiviso tra analyzer poly e `MUSpectrumShaper`, dove `descriptor + 0x88` governa la cardinalita' degli slot assemblati

Conclusione operativa:

- il wrapper a `self + 0x68` nel ramo poly punta con alta probabilita' a un oggetto `MUAudioSourceDescription`-like o allo stesso family state object che possiede il descriptor cache a `+0x1a0`

---

## 1. Getter Del Cache: `0132d790`

Il body reale e' molto stretto:

```asm
0x132d79d  movq   0x1a0(%rsi), %rbx
...
0x132d7dc  callq  0x132d640
...
0x132d7bb  movq   %rbx, (%r14)
0x132d7be  movb   $0x1, 0x8(%r14)
```

Quindi:

- input: `state` in `rsi`
- output: wrapper `ptr + ownership byte` in `rdi`
- source reale: `state + 0x1a0`
- fallback: `0132d640(state, 0x1000)`

Lettura pratica:

- `0132d790` e' un `getOrBuildDescriptorCache()`
- non costruisce ogni volta un nuovo oggetto, ma espone un cache condiviso

---

## 2. Materializzazione Del Cache: `0132d640`

Il materializzatore fa tre cose chiave:

### 1. Alloca il descriptor

```asm
movl   $0x88, %edi
callq  0xe8fc40
```

Quindi il descriptor ha size base:

- `0x88` byte

### 2. Lo installa in `state + 0x1a0`

```asm
movq   0x1a0(%r12), %rdi
...
movq   %rbx, 0x1a0(%r12)
```

### 3. Lo popola via `15c6ef0`

```asm
movq   (%rbx), %rax
movq   %rbx, %rdi
callq  *0x370(%rax)      ; source->vfunc
movl   0x94(%r12), %edx
movsd  0x98(%r12), %xmm1
movq   %r15, %rdi
movl   %r14d, %esi
callq  0x15c6ef0
```

Subito dopo, se `state + 0x98 <= 0`, il materializzatore copia due valori dal descriptor dentro il state:

```asm
movl   0x28(%rax), %ecx
movl   %ecx, 0x94(%r12)
movsd  0x38(%rax), %xmm0
movsd  %xmm0, 0x98(%r12)
```

Quindi:

- `state + 0x94` e `state + 0x98` sono override/cache secondari guidati dal descriptor
- `descriptor + 0x28` e `descriptor + 0x38` sono valori chiave riusati a monte

---

## 3. Field Map Minima Del Descriptor

### Campi forti

| Offset | Ruolo operativo | Evidenza | Confidence |
|--------|------------------|----------|------------|
| `+0x10` | `sampleRateLike` / base-rate double | scritto da `15c6ef0` da `xmm0`; riusato in calcoli di step e mapping | High |
| `+0x18` | `scaleConstantLike` / base spectral scale | scelto in `15c6ef0` da una tabella di costanti in base a `+0x10` | Medium |
| `+0x20` | `fftSize` / spectrum size | scritto da `15c6ef0`; usato nel ramo poly come size per `0x00e83120` | Very High |
| `+0x24` | `halfFftSize` / half-spectrum count | `15c6ef0` scrive `size / 2`; `15c7140` lo usa per la cache ramp di `trueFreqData` | High |
| `+0x28` | `countA` / count-like primario | usato da `0132d640` per retro-scrivere `state + 0x94`; scritto da `15c6ef0` | Medium |
| `+0x2c` | `referenceScaleLike` | scritto da `15c6ef0`; `15c7140` usa `1.0 / (descriptor + 0x2c)` | High |
| `+0x30` | `timeSliceSampleCountLike` | usato nei metodi `MUAudioSourceDescription` come divisore sample -> slice | High |
| `+0x38` | `timeSliceTimeDistanceLike` | usato nei metodi `MUAudioSourceDescription` come delta temporale double | High |
| `+0x40` | `nearestPowerOfTwoLike` / quantized scale | derivato in `15c6ef0` da `+0x10` e `+0x20` | Medium |
| `+0x48` | `derivedPair[2]` | `15c6ef0` scrive due double derivati; layout SIMD esplicito | Medium |
| `+0x68` | cache ptr A | azzerato da `15c6ef0`; popolato da `15c7140` | High |
| `+0x70` | cache ptr B | azzerato da `15c6ef0`; popolato da `015c73a0` | High |
| `+0x78` | cache ptr C | azzerato da `15c6ef0` | Medium |
| `+0x80` | cache ptr D | azzerato via `0xe83070`; coerente con cache heap buffer | High |
| `+0x88` | `assembledElementRendererCountLike` / `analysisLaneCount` | getter `0132dbe0` ritorna `*(int *)(obj + 0x88)`; il valore scala allocazioni e slot template downstream | Very High |
| `+0xa0` | `sampleToIndexScale` | getter `0132dc40`; `0132dca0` lo usa per sample offset -> index | High |
| `+0xa8` | `maxIndexClamp` | getter `0132dc90`; `0132dca0` clampa il risultato con questo campo | High |

### Formula forte di `0132dca0`

`0132dca0` implementa:

```c
index = clamp(
    int((sampleOffset / sourceRateLike) * descriptor->sampleToIndexScale + 0.5),
    0,
    descriptor->maxIndexClamp
);
```

Quindi:

- `+0xa0` e `+0xa8` non sono metadata passivi
- sono parte reale del mapping sample -> grid/index

---

## 4. Uso Nel Ramo Poly

Nel ramo `01447a70`:

1. il `self` espone un wrapper a `+0x68`
2. quel wrapper viene dereferenziato in un oggetto state/source-description-like
3. il ramo chiama `0132d790`
4. dal descriptor result usa:
   - `+0x20` come size FFT
   - `+0x88` come cardinalita' renderer/slot downstream

Callsite osservato:

```asm
0x1447b61  movq   -0x1a8(%rbp), %rax
0x1447b68  movq   0x68(%rax), %rbx
...
0x1447bba  callq  0x132dbe0
...
0x1447bcd  callq  0xe83120
```

Questa e' la prova piu' forte che il front-load poly non parte da un oggetto astratto qualsiasi, ma da un descriptor numerico condiviso con il resto della pipeline.

---

## 5. Uso Nei Metodi `MUAudioSourceDescription`

In `014ce440`, `014ceed0`, `014cfcc0` il pattern e' coerente:

1. `FUN_0132d790()`
2. lettura di `descriptor + 0x30`
3. lettura di `descriptor + 0x38`
4. uso di `this_ptr->vfunc[0x380] / [0x388]`
5. interpolazione sample -> slice / valore

Lettura pratica:

- `+0x30` e `+0x38` sono i due campi piu' solidi del mapping sample-domain -> slice-domain
- questo allinea bene la semantica di `013903d0`, che divide i sample offset usando gli stessi parametri

---

## 6. Uso In `MUSpectralTimeSlice`

La cache `015c7140` usa:

- `descriptor + 0x24`
- `descriptor + 0x2c`
- `descriptor + 0x68`

Quindi il descriptor cache non e' solo per alto livello analyzer:

- alimenta anche i derivatori spettrali bassi della slice

Questo chiude il ponte:

- `state/source-description`
- descriptor cache
- FFT / slice init
- claim kernel

---

## 7. Impatto Sul Replication Effort

1. Il wrapper `self + 0x68` del ramo poly e' ora molto piu' stretto: punta a uno state/source-description-like owner del descriptor cache `+0x1a0`.
2. `0132d790` e `0132d640` vanno trattate come funzioni P1 reali del layout dati, non come helper secondari.
3. `descriptor + 0x20`, `+0x30`, `+0x38`, `+0xa0`, `+0xa8` sono gia' abbastanza stabili da entrare in una spec clean-room.
4. `descriptor + 0x88` va ormai trattato come count operativo del cluster renderer/slot, non come metrica vaga.
5. Il front-end spettrale e il mapping sample -> slice condividono lo stesso descriptor: non vanno ricostruiti come moduli isolati.

---

## Next Step

1. Canonizzare i nomi classe del cluster slot/renderer che dipende da `descriptor + 0x88`.
2. Verificare se il wrapper a `self + 0x68` sia nominabile direttamente come `MUAudioSourceDescriptionRef`.
3. Tipizzare meglio `descriptor + 0x18`, `+0x2c` e `+0x40`.
4. Cercare se `MikeCoreF` mantiene lo stesso layout del descriptor cache.

Dettaglio aggiuntivo sul count a `+0x88`:

- [30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md](30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md)
