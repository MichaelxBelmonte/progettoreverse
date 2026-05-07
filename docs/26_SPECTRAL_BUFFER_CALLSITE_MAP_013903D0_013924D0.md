# 26 — Spectral Buffer Callsite Map `0x013903d0 -> 0x013924d0`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Fissare con disassembly reale la mappa dei buffer spettrali passati dal caller analyzer `013903d0` al kernel claim `013924d0`, e poi il relay interno verso `014eecb0` e `014b71e0`.

Questo documento corregge la lettura troppo debole nata dal solo pseudocode.

---

## Conclusione Principale

Nel path analyzer, `013924d0` non riceve solo `tonalityData`.

Riceve esplicitamente tutti e tre i buffer spettrali:

- `magnitudeData`
- `trueFreqData`
- `tonalityData`

Inoltre:

- il secondo parametro "visibile" del decompilato non e' un `uint32_t`, ma un float in `xmm1`
- la funzione riceve anche due flag addizionali su stack
- `014eecb0` riordina i tre buffer in modo coerente con il modello del kernel locale:
  - `trueFreqData` -> asse frequenziale
  - `magnitudeData` -> buffer energia/magnitudine
  - `tonalityData` -> weight/mask addizionale

---

## 1. Callsite Reale In `013903d0`

Nel blocco assembly del caller:

```asm
0x1391a5d  callq 0x15c6b60   ; getMagnitudeData
0x1391a72  callq 0x15c66c0   ; getTrueFreqData
0x1391a87  callq 0x15c6ba0   ; getTonalityData
...
0x1391b54  movq  -0xc8(%rbp), %rdi
0x1391b5b  leaq  -0x1f0(%rbp), %rsi
0x1391b62  movq  %r13, %rdx
0x1391b65  movq  %r12, %rcx
0x1391b68  movq  %r15, %r8
0x1391b6b  movss ..., %xmm0
0x1391b73  movss ..., %xmm1
0x1391b7b  movl  -0xb4(%rbp), %r9d
0x1391b82  callq 0x13924d0
```

Mappa operativa:

| Registro / slot | Sorgente | Ruolo operativo | Confidence |
|-----------------|----------|-----------------|------------|
| `rdi` | `-0xc8(%rbp)` | `this_ptr` / analyzer context | High |
| `rsi` | `&(-0x1f0)` | wrapper/ref della lista item corrente | High |
| `rdx` | ritorno `015c6b60()` | `magnitudeData` | Very High |
| `rcx` | ritorno `015c66c0()` | `trueFreqData` | Very High |
| `r8` | ritorno `015c6ba0()` | `tonalityData` | Very High |
| `xmm0` | global float | scale globale del kernel | High |
| `xmm1` | global float | esponente/decay usato poi da `powf` | Very High |
| `r9d` | `-0xb4(%rbp)` | numero colonne/ordini armonici | High |
| `[rsp]` | byte da `-0x120(%rbp)` | `stackFlagA` ownership/mode flag | Medium |
| `[rsp+8]` | byte da `0x10(%rbp)` del caller | `stackFlagB` gate del tonality-weighted path | High |

Origine reale dei due byte:

- `stackFlagA` non nasce dentro `013903d0`: e' il sesto argomento intero del caller, ricevuto in `r9d`
- `stackFlagB` e' il primo stack arg di `013903d0` e quindi puo' essere pilotato direttamente dal caller alto, incluso il ramo poly DNA2

Correzione importante:

- la firma decompilata `FUN_013924d0(float,uint32_t,int64_t,uint)` e' fuorviante
- il kernel reale usa una ABI mista GPR/XMM/stack molto piu' ricca

---

## 2. Corroborazione All'Entry Di `013924d0`

L'entry del callee conferma il mapping:

```asm
0x13924e4  movl  %r9d,  -0x4c(%rbp)
0x13924e8  movss %xmm1, -0x60(%rbp)
0x13924ed  movss %xmm0, -0x84(%rbp)
0x13924f5  movq  %r8,   %rbx
0x13924f8  movq  %rcx,  %r15
0x13924fb  movq  %rdx,  -0xe8(%rbp)
0x1392502  movq  %rsi,  -0xc8(%rbp)
0x1392509  movq  %rdi,  %r12
```

Quindi dentro `013924d0`:

- `rbx / -0xb8` mantiene `tonalityData`
- `r15` mantiene `trueFreqData`
- `-0xe8` mantiene `magnitudeData`
- `-0xc8` mantiene il wrapper della lista item
- `r12` e' il vero `this_ptr`

Inoltre il primo stack flag viene letto davvero:

```asm
0x1392621  cmpb $0x0, 0x10(%rbp)
```

e il secondo pure:

```asm
0x1392c15  andb 0x18(%rbp), %cl
```

Quindi i due stack arg esistono e sono semanticamente vivi, anche se il naming finale resta aperto.

Lettura operativa aggiornata:

- `stackFlagA` sceglie tra due loop iniziali quasi identici e sembra legato soprattutto alla gestione del wrapper/list-ref, non al kernel matematico puro
- `stackFlagB` viene combinato con `tonalityData != NULL` e decide se il path finale usa il weighting tonality-aware

---

## 3. Relay Interno `013924d0 -> 014eecb0`

Nel callsite di `014eecb0` dentro `013924d0`:

```asm
0x1392890  movl  0x20(%rax), %r8d
0x1392894  movq  %r14, %rdi
0x1392897  movq  %r15, %rsi
0x139289a  movq  -0xe8(%rbp), %rdx
0x13928a1  movq  -0xb8(%rbp), %rcx
0x13928a8  movss -0x84(%rbp), %xmm0
0x13928b0  movss -0x80(%rbp), %xmm1
0x13928b5  movss -0x70(%rbp), %xmm2
0x13928ba  callq 0x14eecb0
```

Mappa:

| Arg `014eecb0` | Provenienza | Ruolo operativo | Confidence |
|----------------|-------------|-----------------|------------|
| `rdi` | item corrente | target item | Very High |
| `rsi` | `r15` | `trueFreqData` | Very High |
| `rdx` | `-0xe8(%rbp)` | `magnitudeData` | Very High |
| `rcx` | `-0xb8(%rbp)` | `tonalityData` | Very High |
| `r8d` | descriptor `+0x20` | `binCount` / count locale | High |
| `xmm0` | global scale | `relativeWidthScale`-like | High |
| `xmm1` | descriptor `+0x50` | `binStepHz` | Very High |
| `xmm2` | descriptor `+0x2c` | `windowSpanBins` | High |

---

## 4. Relay Finale `014eecb0 -> 014b71e0`

L'entry e il callsite di `014eecb0` chiudono il giro:

```asm
0x14eecd4  movq %rcx, %r12
0x14eecd7  movq %rdx, %r13
0x14eecda  movq %rsi, %r14
...
0x14eed16  movq %r14, %rdi
0x14eed19  movq %r13, %rsi
0x14eed1c  movq %r12, %rdx
0x14eed1f  movq %r15, %rcx
0x14eed22  movl -0x34(%rbp), %r8d
0x14eed26  movss -0x38(%rbp), %xmm3
0x14eed2b  callq 0x14b71e0
```

Quindi il mapping di `014b71e0` ora e':

| Arg `014b71e0` | Buffer reale | Ruolo operativo | Confidence |
|----------------|-------------|-----------------|------------|
| hidden `rdi` | `trueFreqData` | asse frequenziale per-bin | Very High |
| hidden `rsi` | `magnitudeData` | buffer energia/magnitudine | Very High |
| hidden `rdx` | `tonalityData` | weight/mask addizionale per-bin | Very High |
| `rcx` | `&item[+0x24]` | out `local_overlap_evidence` | Very High |
| `r8d` | count locale | `binCount` | High |
| `xmm3` | `windowSpanBins` | finestra locale | High |
| `xmm4` | zero | no depletion in questo call path | High |

Questo allinea definitivamente il modello del kernel locale:

- `trueFreqData` fornisce l'asse reale su cui fare `abs(centerHz - axis[i])`
- `magnitudeData` fornisce l'energia disponibile
- `tonalityData` pesa i contributi come mask/weight opzionale

---

## 5. Correzioni Rispetto Alla Lettura Precedente

Le affermazioni seguenti vanno corrette:

- non e' piu' corretto dire che in `013903d0` solo `tonalityData` venga passata a `013924d0`
- non e' piu' corretto trattare `param_2` di `013924d0` come `uint32_t`
- gli hidden args di `014eecb0` e `014b71e0` non sono piu' da considerare "da tipizzare meglio" nel path analyzer principale

La versione piu' rigorosa oggi e':

```c
void claim_kernel(
    AnalyzerLike *self,
    ItemListRef *items,
    float *magnitudeData,
    float *trueFreqData,
    float *tonalityData,
    float globalScale,
    float harmonicDecayExponent,
    int harmonicColumnCount,
    uint8_t stackFlagA,
    uint8_t stackFlagB
);
```

I nomi dei due flag restano inferenziali.

Una forma ancora piu' vicina al comportamento osservato e':

```c
void claim_kernel(
    AnalyzerLike *self,
    ItemListRef *items,
    float *magnitudeData,
    float *trueFreqData,
    float *tonalityData,
    float globalScale,
    float harmonicDecayExponent,
    int harmonicColumnCount,
    uint8_t itemListOwnershipMode,
    uint8_t enableTonalityWeighting
);
```

Solo `enableTonalityWeighting` ha oggi un legame DSP abbastanza forte da essere promosso oltre il semplice placeholder.

---

## 6. Cross-Check Nel `MUSpectrumShaper`

Nel callsite shaper osservato a `0x149664c..0x149668a`:

```asm
movl $0x0, 0x8(%rsp)
movl $0x0, (%rsp)
leaq -0x328(%rbp), %rsi
movq -0xa0(%rbp), %rdx
movq -0xd0(%rbp), %rcx
movq %rbx, %r8
movss ..., %xmm0
movss ..., %xmm1
movq -0x88(%rbp), %r9
callq 0x13924d0
```

e nel callsite shaper di `014eecb0` a `0x1496550..0x149658d`:

```asm
movq %r14, %rdi
movq -0xd0(%rbp), %rsi
movq -0xa0(%rbp), %rdx
movq -0xb0(%rbp), %rcx
movl %ebx, %r8d
...
callq 0x14eecb0
```

Questo conferma due punti importanti:

1. l'ordine `trueFreqData -> rsi`, `magnitudeData -> rdx`, `tonalityData -> rcx/r8` e' riusato anche fuori dall'analyzer
2. nello shaper il callsite di `013924d0` mette entrambi gli stack flag a zero, quindi il kernel condiviso esiste con modalita' di invocazione diverse

---

## Impatto Sul Replication Effort

1. Il bridge `slice -> spectral buffers -> claim kernel` e' ora molto piu' chiuso.
2. `014b71e0` puo' essere modellata con input reali e non piu' solo con ruoli generici.
3. `013924d0` puo' essere riscritta clean-room con una firma operativa finalmente coerente.
4. Il prossimo collo di bottiglia non e' piu' l'identita' dei buffer, ma la quantificazione precisa del path tonality-weighted e della fase finale di scoring/normalizzazione.
5. Analyzer e `MUSpectrumShaper` condividono davvero il nucleo helper/claim, non solo per naming ma per ABI concreta dei buffer spettrali.

---

## Next Step

1. Stringere il ruolo di `stackFlagA` e `stackFlagB` dentro `013924d0`.
2. Chiudere il dot product finale per capire quanto `tonalityData` pesi anche oltre il helper locale `014b71e0`.
3. Cercare lo stesso call pattern nel path `MUSpectrumShaper` per verificare la convergenza completa analyzer/shaper.
