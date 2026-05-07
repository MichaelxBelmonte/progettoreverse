# 28 — Poly Claim Bridge `0x01447a70 -> 0x013903d0`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Fissare il bridge reale tra il ramo poly DNA2 e `assignEnergyClaimsInSampleRange()`:

- prova della call diretta
- ABI operativa reale di `013903d0`
- mapping concreto del callsite osservato dentro `01447a70`
- implicazioni pratiche per la replica

Questo documento chiude la vecchia contraddizione "edge solo Ghidra vs nessuna call LLDB".

---

## Conclusione Principale

Nel ramo poly esiste una call diretta a `0x013903d0`.

Il callsite osservato e' questo:

```asm
0x14593ef  movq   %rax, 0x8(%rsp)
0x14593f4  movl   $0x0, (%rsp)
0x14593fb  leaq   -0x9a0(%rbp), %rdi
0x1459402  leaq   -0x488(%rbp), %rdx
0x1459419  movq   %rbx, %rsi
0x145941c  xorl   %ecx, %ecx
0x145941e  movq   %r14, %r8
0x1459421  xorl   %r9d, %r9d
0x1459424  callq  0x13903d0
```

Punto nuovo importante:

- `-0x1a8(%rbp)` nel ramo poly e' il vero `self`
- il wrapper su stack `&(-0x3e0)` viene costruito proprio a partire da `self`
- `r8` nasce da `*(self + 0x90)`
- `rsi` nasce dal dereference di un wrapper a `self + 0x68`

Quindi il ramo poly:

- entra in `013903d0` con `sampleStart = 0`
- passa un `sampleCountLike` o `rangeLenLike` in `r8`
- disabilita il flag stack che poi diventa `enableTonalityWeighting`
- passa un wrapper aggiuntivo su stack che viene usato da `013903d0` come sink callback/progress-like sullo stesso `self`

Il kernel claim non e' quindi solo un helper del path analyzer "leggibile": e' uno stage reale del corridoio DNA2 poly.

---

## 1. ABI Reale Di `013903d0`

L'entry assembly della funzione e' questa:

```asm
0x13903e4  movss  %xmm1, -0x118(%rbp)
0x13903ec  movss  %xmm0, -0x114(%rbp)
0x13903f4  movl   %r9d,  -0x120(%rbp)
0x13903fb  movq   %r8,   %r13
0x13903fe  movq   %rcx,  -0x50(%rbp)
0x1390402  movq   %rdx,  %r14
0x1390405  movq   %rsi,  -0xc8(%rbp)
0x139040c  movq   %rdi,  -0xf8(%rbp)
```

La forma operativa minima oggi piu' rigorosa e':

```c
void assignEnergyClaimsInSampleRange(
    RefWrapper *outRef,              // rdi
    AnalyzerStateLike *state,        // rsi
    ItemListRef *sourceItems,        // rdx
    int64_t sampleStart,             // rcx
    int64_t sampleCountOrLen,        // r8
    uint32_t flagA,                  // r9d
    float callbackValueBase,         // xmm0
    float callbackValueScale,        // xmm1
    uint8_t flagB,                   // [rsp]
    RefWrapper *callbackSinkRef      // [rsp+8]
);
```

Questa firma e' ancora prudente sui naming, ma e' gia' molto piu' corretta del vecchio pseudo:

```c
FUN_013903d0(float, float, int64_t, uint32_t)
```

---

## 2. Cosa Sappiamo Dei Parametri

### `outRef` in `rdi`

`013903d0` scrive il risultato in `*outRef` quando il path corto termina presto:

```asm
0x1390480  movq   -0xf8(%rbp), %rbx
0x1390487  movq   %rax, (%rbx)
0x139048a  movb   $0x1, 0x8(%rbx)
```

Lettura pratica:

- `rdi` e' un wrapper `ptr + ownership flag`
- il risultato viene restituito via wrapper, non via valore di ritorno puro

### `state` in `rsi`

Il secondo argomento viene letto come oggetto stato/config:

- `state + 0x1a0` -> descriptor/cache lazily materialized
- `state + 0x88` -> limite superiore di slice/time positions

Lettura pratica:

- `rsi` non e' un item
- e' un contesto analyzer/source-description-like con metadata temporali e descriptor spettrale
- nel callsite poly osservato deriva dal dereference del wrapper a `self + 0x68`

Doc di dettaglio:

- [29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md](29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md)

### `sourceItems` in `rdx`

Il terzo argomento viene dereferenziato come lista di item:

- `(*sourceItems) + 0xc` -> count
- `(*sourceItems) + 0x10` -> array di puntatori

Lettura pratica:

- `rdx` e' una list-ref o wrapper equivalente, non un item singolo

### `sampleStart` in `rcx` e `sampleCountOrLen` in `r8`

La funzione divide `sampleStart` per il divisore `descriptor + 0x30`, poi fa:

```asm
addq %rsi, %r13
```

dove `r13` e' nato da `r8`.

Lettura pratica:

- `rcx` e' il punto iniziale del range
- `r8` e' la lunghezza del range o il delta che produce il sample end

La funzione lavora quindi su un range `start + length`, non su due float arbitrari.

### `flagA` in `r9d`

Questo valore non guida il corpo alto di `013903d0`, ma viene inoltrato a `013924d0`:

```asm
0x1391b4a  movzbl -0x120(%rbp), %eax
0x1391b51  movl   %eax, (%rsp)
```

Lettura pratica:

- `flagA` e' un flag di mode/ownership che scende nel claim kernel
- nel callsite poly osservato vale `0`

### `callbackValueBase` e `callbackValueScale`

Questi due float non vengono passati a `013924d0`.

Vengono invece usati piu' tardi per costruire il valore inviato al sink su stack:

```asm
0x1391bc1  cvtsi2ssl -0xa8(%rbp), %xmm0
0x1391bc9  mulss  -0x118(%rbp), %xmm0
0x1391bd1  mulss  -0xe4(%rbp), %xmm0
0x1391bd9  addss  -0x114(%rbp), %xmm0
0x1391beb  callq  *0x380(%rax)
```

Lettura pratica:

- i due float sono parametri di mapping verso un valore progress/position-like
- non sono i parametri numerici del claim kernel interno

### `flagB` su stack

Questo byte viene passato a `013924d0` come secondo stack arg:

```asm
0x1391b42  movzbl 0x10(%rbp), %eax
0x1391b46  movl   %eax, 0x8(%rsp)
```

Nel path `013924d0` questo diventa il gate del ramo tonality-weighted.

### `callbackSinkRef` su stack

Dopo la call a `013924d0`, `013903d0` legge:

```asm
0x1391b87  movq   0x18(%rbp), %rax
0x1391b8b  movq   (%rax), %rdi
...
0x1391beb  callq  *0x380(%rax)
```

Quindi l'ottavo argomento e' un wrapper verso un oggetto con vfunc a offset `0x380`.

Lettura pratica:

- non e' un flag
- non e' un buffer spettrale
- e' un sink object per callback/progress/value update
- nel callsite poly osservato e' un wrapper costruito sullo stesso `self`

---

## 3.5 Mini Field Map Del `self` Poly

Dal ramo `01447a70` emergono tre campi concreti del `self` analyzer-like:

| Offset su `self` | Uso osservato | Lettura operativa | Confidence |
|------------------|---------------|-------------------|------------|
| `+0x68` | wrapper dereferenziato poi passato a `013903d0` come `rsi`; riusato anche nel ramo mono con `0132dc40/0132d790` | state/source-description-like wrapper | High |
| `+0x90` | letto in `r14` e passato a `013903d0` come `r8` con `sampleStart = 0` | sample-count / range-len-like | Medium |
| `+0x3c` | controllato dopo le vcall `*0x380(self)` | cancel/abort/request-stop-like flag | Medium |

Questo riduce l'ambiguita' del bridge:

- `013903d0` non riceve un callback sink arbitrario
- riceve un wrapper sul `self` del ramo poly
- il path callback/value update torna quindi dentro la stessa istanza analyzer-like

---

## 4. Mapping Del Callsite Poly

Il callsite in `01447a70` prepara cosi' gli argomenti:

```asm
0x14593ab  movq   %rax, -0x488(%rbp)
0x14593b2  movb   $0x0, -0x480(%rbp)
...
0x14593da  movq   %rax, -0x3e0(%rbp)
0x14593e1  movb   $0x1, -0x3d8(%rbp)
0x14593e8  leaq   -0x3e0(%rbp), %rax
0x14593ef  movq   %rax, 0x8(%rsp)
0x14593f4  movl   $0x0, (%rsp)
0x14593fb  leaq   -0x9a0(%rbp), %rdi
0x1459402  leaq   -0x488(%rbp), %rdx
0x1459419  movq   %rbx, %rsi
0x145941c  xorl   %ecx, %ecx
0x145941e  movq   %r14, %r8
0x1459421  xorl   %r9d, %r9d
0x1459424  callq  0x13903d0
```

Mappa operativa:

| Slot/registro | Valore osservato | Ruolo operativo | Confidence |
|---------------|------------------|-----------------|------------|
| `rdi` | `&(-0x9a0)` | out-wrapper del risultato temporaneo | Very High |
| `rsi` | `%rbx = *(self + 0x68)` dopo unwrap thread-local | `state` / source-description-like | High |
| `rdx` | `&(-0x488)` | wrapper input della lista item sorgente | High |
| `rcx` | `0` | `sampleStart = 0` | Very High |
| `r8` | `%r14 = *(object + 0x90)` | `sampleCountOrLenLike` | Medium |
| `r9d` | `0` | `flagA = 0` | Very High |
| `[rsp]` | `0` | `flagB = 0` | Very High |
| `[rsp+8]` | `&(-0x3e0)` | wrapper callback/progress sink su `self` | Very High |

---

## 5. Cleanup Post-Call

Subito dopo il callsite poly:

```asm
0x1459429  cmpb   $0x0, -0x998(%rbp)
0x1459432  movq   -0x9a0(%rbp), %rdi
0x145943e  callq  0xd50b20

0x1459443  cmpb   $0x0, -0x3d8(%rbp)
0x145944c  movq   -0x3e0(%rbp), %rdi
0x1459458  callq  0xd50b20

0x145945d  cmpb   $0x0, -0x480(%rbp)
0x1459466  movq   -0x488(%rbp), %rdi
0x1459472  callq  0xd50b20
```

Conclusioni forti:

- l'out-wrapper di `013903d0` non sembra essere consumato dal ramo poly dopo la call
- il sink wrapper passato su stack viene anch'esso rilasciato subito dopo
- anche la list-ref input `-0x488/-0x480` viene trattata come wrapper reference-counted

Lettura pratica:

- il valore importante della call e' nelle side effect su item/matrici/sink, non nel wrapper ritornato

---

## 6. Cosa Significa Per Il Claim Kernel

Il path ora si legge cosi':

1. il ramo poly prepara una list-ref di item sorgente
2. prepara un out-wrapper temporaneo
3. passa un range di sample che inizia da zero
4. disattiva il flag che poi abilita il path tonality-weighted di `013924d0`
5. passa un sink object per callback/progress/value update costruito su `self`
6. chiama `013903d0`, che a sua volta:
   - converte range sample -> range slice
   - legge `MUSpectralTimeSlice`
   - invoca `013924d0` per-slice
   - usa il sink stack per emettere value update

Quindi il corridoio poly non salta il claim kernel: ci entra con una configurazione precisa e relativamente "plain".

---

## 7. Impatto Sul Replication Effort

1. `013903d0` va trattata come bridge P0 tra orchestrazione poly e scoring per-slice, non solo come helper locale dell'analyzer.
2. Il callsite poly osservato disabilita `enableTonalityWeighting`, quindi la replica del ramo poly deve prevedere almeno un path unweighted.
3. Il wrapper su stack `&(-0x3e0)` mostra che esiste una side-channel di callback/progress/value update da preservare o emulare, e che questa side-channel torna sullo stesso `self`.
4. Il risultato wrapper di `013903d0` sembra transitorio; il comportamento utile e' nelle side effect interne.

---

## Next Step

1. Stringere il tipo concreto del wrapper a `self + 0x68` e del suo oggetto dereferenziato passato in `rsi`.
2. Stringere il significato di `self + 0x90` per capire se sia sample count totale, region length o frame count.
3. Tipizzare meglio la vfunc `self + vtable[0x380]` e capire se corrisponda a progress, position o update di property point.
4. Verificare se esistono altri callsite a `013903d0` nel corpo poly con `flagB != 0`.
