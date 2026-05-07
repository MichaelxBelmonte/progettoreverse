# 18 — DNA2 Callsite Map

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Fissare i callsite reali osservati via disassembly CLI per:

- il dispatcher `0x01433f60`
- l'entry operativa del ramo poly `0x01447a70`

Questo documento non sostituisce il reverse GUI, ma riduce l'ambiguita' prima di aprire i graph in Ghidra.

---

## Metodo

Verifica fatta con `lldb --batch` sul binario [MikeCore](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore).

L'obiettivo non era decompilare tutto il corpo funzione, ma isolare:

- offset dei callsite
- shape degli argomenti
- cleanup post-call
- primi helper numerici del ramo poly

---

## Dispatcher `0x01433f60`

### Callsite poly confermato

- caller: `0x01433f60`
- callsite: `0x0143a782`
- offset nel caller: `+26658`
- callee: `0x01447a70`

Shape osservata:

- `rdi = self`
- `rsi = &stack[-0x8f0]`
- `rdx = &stack[-0x8e0]`
- `rcx = &stack[-0x8d0]`
- `r8  = &stack[-0x688]`
- `r9  = &stack[-0x8c0]`
- `stack[0] = (-0x198(%rbp) != 0)` viene scritto subito prima della call

Post-call osservato:

- controllo flag byte su `stack[-0x680]`
- se il flag e' attivo e il puntatore `stack[-0x688]` e' non nullo, release via `0xd50b20`

Lettura operativa:

- il ramo poly non prende un solo input semplice
- il dispatcher prepara un gruppo di out-param o scratch object prima della call
- il primo stack arg non e' anonimo: e' un gate booleano derivato dalla presenza di `-0x198(%rbp)`

### Chiusura Del Gate `stack[0]`

La lettura "forse e' `_useDNA2ForPolyphonicDetection`" non regge piu'.

Dal disassembly piu' ampio del dispatcher:

- `-0x198(%rbp)` viene scritto con un `movq`, non con un `movb`
- il local viene poi riusato ripetutamente come oggetto/puntatore:
  - dereference a `0xc`
  - dereference a `0x10`
  - passaggio come `rdi` a helper retain/release-like e copier
- solo immediatamente prima della call poly viene ridotto a booleano via `cmpq $0x0, -0x198(%rbp)` + `setne %al`

Conclusione aggiornata:

- `stack[0]` verso `0x01447a70` e' un `non-null gate` su un handle/pointer locale
- non e' oggi supportato trattarlo come mirror diretto del campo `self + 0x198` (`_useDNA2ForPolyphonicDetection`)
- il dispatcher puo' ancora usare quel flag in altre zone, ma il gate osservato al callsite poly non lo prova

### Chiusura Del Tipo Di `-0x198(%rbp)`

Questo local non e' piu' solo "un pointer locale".

L'ultimo writer osservato prima del callsite poly e':

```asm
0x1436a94  movl   $0x20, %edi
0x1436a99  callq  0xe8fc40
0x1436aa4  callq  0xd4ff40
0x1436aa9  leaq   0x2572348(%rip), %rax
0x1436ab0  leaq   0x10(%rax), %rcx
0x1436ab4  movq   %rcx, (%rbx)
0x1436aba  callq  *0x28(%rax)
0x1436abd  movq   %rbx, -0x198(%rbp)
```

Poiche' `0x2572358` e' gia' chiusa come `DAT_02572358 = GNList`, il local al callsite poly e' ora supportato come:

- `-0x198(%rbp) = GNList*` locale

Helper consumatori chiusi:

- `0x0d21140` = append di un wrapped pointer alla `GNList`
- `0x0d23620` = erase/remove a indice da `GNList`

Sorgente della lista chiusa:

- nel property graph di `01103ee0`, `self[0x24]` (`self + 0x120`) viene registrato tramite `01108130`
- il blob statico di `01108130` punta alla stringa `"_overallOverlapAtItemMarginsItem"`
- gli slot adiacenti sono:
  - `self[0x23]` (`+0x118`) = `_overallResidualItem`
  - `self[0x25]` (`+0x128`) = `_overallAttacksItem`
- i tre slot risultano registrati come family `GNUni` / `MUAudioSourcePrincipalItem`

Pattern osservato:

- il dispatcher alloca la `GNList`
- itera `self + 0x120` (`_overallOverlapAtItemMarginsItem`)
- la popola in loop via `0x0d21140`
- in un corridoio successivo rimuove elementi via `0x0d23620(list, 0)`
- solo molto piu' tardi riduce la sua presenza a bool con `cmpq != 0` per il gate verso `0x01447a70`

Lettura operativa aggiornata:

- il gate del ramo poly dipende dall'esistenza di una `GNList` locale di staging/work derivata da `_overallOverlapAtItemMarginsItem`
- non dipende direttamente da un flag bool analyzer
- il payload puntato dalla lista sorgente resta tipato come `MUAudioSourcePrincipalItem`-family; la politica precisa del filtro semantico resta ancora da stringere

### Chiusura Di `0x00e85ea0`

`0x00e85ea0` non e' un predicato di ordinamento o adiacenza tra item.

Il corpo assembly osservato e':

```asm
cmpq   %rdi, %rsi
je     return_true
cmpl   $0x0, 0xbc(%rsi)
je     return_false
movl   0xc0(%rsi), %eax
movl   0xc0(%rdi), %edx
loop:
  movl %edx, %ecx
  cmpl %eax, %edx
  jl   done
  movq 0x18(%rdi), %rdi
  leal -0x1(%rcx), %edx
  cmpq %rsi, %rdi
  jne  loop
done:
cmpl %eax, %ecx
setge %al
```

Lettura operativa ad alta confidenza:

- `rdi` e `rsi` sono class descriptor / runtime type node
- `+0x18` e' il link al parent/super descriptor
- `+0xbc` e `+0xc0` governano validita'/depth del nodo di gerarchia
- il predicato ritorna vero se `rdi` e' la stessa classe di `rsi` oppure una sua sottoclasse lungo la chain `+0x18`

La prova forte viene dai callsite diffusi:

- compare in classi UI, storage e analyzer non correlate semanticamente
- viene chiamata subito dopo un virtual a slot `+0x360`
- subito prima c'e' spesso la static init del class descriptor atteso, per esempio `MUAudioSourcePrincipalItem`, `GNJob`, `MUElementAnalyzer`, `MUAmplitudeAnalyzer`
- il risultato governa se usare il wrapper locale o ripiegare su `DAT_02802688`

Implicazione per il dispatcher DNA2:

- nel corridoio che popola la `GNList` locale derivata da `_overallOverlapAtItemMarginsItem`, `0x00e85ea0` serve a verificare che il payload wrapper sia trattabile come `MUAudioSourcePrincipalItem`
- non e' il filtro musicale che da solo decide quali item overlap entrano nel ramo poly
- il filtro semantico vero resta ancora a valle o in helper distinti

### Topologia Reale Della Popolazione Di `-0x198(%rbp)`

Il blocco `0x1436c60 .. 0x1436f4c` mostra che il dispatcher non copia direttamente `_overallOverlapAtItemMarginsItem` nella `GNList` locale.

Shape osservata:

- `rbx` e' una first-level list-like object (`count` letto a `+0xc`, storage a `+0x10`)
- per ogni elemento della first-level list:
  - `0x12e6160` materializza un secondo list-like wrapper in `r13`
- per ogni elemento della second-level list:
  - `0x12e5ae0` materializza un terzo list-like wrapper in `r14`
- se il third-level wrapper ha `count > 0`, ogni suo elemento viene appeso alla staging `GNList` via `0x0d21140`

Conseguenza ad alta confidenza:

- la `GNList` locale passata indirettamente al ramo poly e' il risultato di un flatten `outer -> inner -> payload`
- `_overallOverlapAtItemMarginsItem` non e' copiato 1:1
- i helper `0x12e6160` e `0x12e5ae0` si comportano qui come adapter/materializer di collection list-like; il loro naming canonico resta aperto

### Perimetro Reale Dei Campi `+0xa8/+0xb0`

I due helper semplici usati nel flatten hanno body ormai chiusi:

- `0x12e6160` restituisce il wrapped pointer letto a `source + 0xa8`
- `0x12e5ae0` restituisce il wrapped pointer letto a `source + 0xb0`

Questo pero' **non** giustifica ancora un naming semantico dei due offset nel corridoio dispatcher.

Motivi ad alta confidenza:

- i registrar `01101bb0` / `01101eb0` chiudono le stringhe `_nextItemInSequence` e `_previousItemInSequence`, ma non mostrano il binding offset
- nei consumer del `MUAudioSourcePrincipalItem` compaiono campi alti `+0xa0/+0xa8` con comportamento sequence-like, quindi esiste gia' una collisione numerica di offset tra famiglie diverse
- nel dispatcher `0x12e6160` e `0x12e5ae0` operano su wrapper intermedi del flatten `outer -> inner -> payload`, non su un `MUAudioSourcePrincipalItem` provato direttamente

Conclusione operativa:

- nel ledger DNA2 i campi letti da `0x12e6160` e `0x12e5ae0` vanno mantenuti come `first nested list link (+0xa8)` e `second nested list link (+0xb0)`
- promuovere qui `_nextItemInSequence` / `_previousItemInSequence` sarebbe sotto soglia di confidence e introdurrebbe drift di classe
- il cluster e' ora documentato separatamente come corridoio LSS/nested-list in [57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md](57_LSS_NESTED_LIST_HELPERS_012E6160_012E5AE0.md)
- `0x012e7210` rafforza la lettura strutturale LSS: aggrega ricorsivamente `source + 0xb0` lungo i children di `source + 0xa8`, quindi nel solo corridoio LSS i nomi prudenti salgono a `nestedChildListLink` e `directPayloadListLink`

### Callsite mono confermato

- caller: `0x01433f60`
- callsite: `0x0143d27e`
- offset nel caller: `+37662`
- callee: `0x0146c830`

Shape osservata:

- `rdi = self`
- `rsi = &stack[-0x628]`
- `rdx = &stack[-0x880]`
- `rcx = &stack[-0x870]`
- `r8  = stack[-0x1d0]`
- `r9  = stack[-0x220]`
- altri tre argomenti vengono preparati su stack: `r14`, `stack[-0x1f8]`, `stack[-0x1f0]`

Post-call osservato:

- controllo flag byte su `stack[-0x620]`
- se il flag e' attivo e il puntatore `stack[-0x628]` e' non nullo, release via `0xd50b20`

Lettura operativa:

- la call mono usa una signature apparentemente piu' ricca del ramo poly
- questo supporta l'ipotesi che `makeMonophonicItems` lavori con piu' contesto item/list/state rispetto al ramo polifonico iniziale

### Conclusione sul dispatcher

Fatti nuovi fissati:

1. il ramo poly entra a `+26658`
2. il ramo mono entra a `+37662`
3. entrambi i rami usano scratch/out-param su stack e cleanup condizionale simile
4. il dispatcher non e' solo un `if/else` su flag: orchestra oggetti temporanei prima e dopo la call
5. il callsite poly passa anche un gate booleano esplicito su `stack[0]`, costruito come `(-0x198 != 0)`

---

## Poly Entry `0x01447a70`

### Helper iniziali verificati

Nella parte iniziale del ramo poly risultano osservati questi passaggi:

1. `+82` call a `0x13fb420`
2. `+155` call a `0x132d790`
3. `+349` call a `0x00e83120`
4. `+420` call a `0x00e84080`
5. `+866` call a `0x00e83da0`

I primi due helper non hanno ancora un nome canonico, ma il loro ruolo e' oggi piu' stretto.

I tre helper numerici invece sono molto piu' interessanti:

- `0x00e83120` e' gia' canonica come FFT factory
- `0x00e83da0` e' classificata vicino a `GNFastFourierTransformer` e in [GNFastFourierTransformer.cpp](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/GNFastFourierTransformer.cpp#L1164) ritorna `float *`
- `0x00e84080` resta non nominata, ma nel contesto appare come secondo helper FFT/buffer immediatamente dopo la factory; inoltre in [014902f0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUSpectrumShaper/014902f0.c#L1976) e' seguita da accessi e squadrature elemento-per-elemento su un buffer float, quindi sembra uno stage numerico post-FFT/post-buffer, non un helper puramente gestionale

### Ruoli helper iniziali consolidati

`0x013fb420`

- compare in classi non DSP come [01484480.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNString/01484480.c#L34), [01665120.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNList/01665120.c#L128) e [000c6aa0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNRootView/000c6aa0.c#L83)
- nei caller apre quasi sempre una sequenza di retain/release + fetch da thread context + helper successivi di lista/view
- inferenza operativa piu' forte: helper di materializzazione/collection/context object, non stage FFT o numerico

`0x0132d790`

- in [01484480.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNString/01484480.c#L39) il risultato viene letto a offset `+0x18` e `+0x20` per derivare dimensioni
- in [014ceed0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUAudioSourceDescription/014ceed0.c#L128) il risultato viene letto a `+0x30` e `+0x38` per derivare divisori/rate dei time slice
- in [014902f0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUSpectrumShaper/014902f0.c#L269) il risultato viene consumato come blocco di config con campi `[8]`, `[9]`, `[10]`, `[0xc]`, `[0xe]`, `[0x14]`
- in [0146c830.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/0146c830.c#L269) il risultato viene passato a decisioni/loop analyzer, non a trasformazioni numeriche immediate
- inferenza operativa aggiornata: getter del descriptor cache condiviso a `state + 0x1a0`, materializzato via `0132d640` e riusato da analyzer, source description e shaper

Dettaglio descriptor cache:

- [29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md](29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md)

`0x00e83da0`

- in [00e83da0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNFastFourierTransformer/00e83da0.c#L6) ritorna `float *`
- costruisce una tabella float coseno-normalizzata e opzionalmente la rinormalizza
- in [015c4e40.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUSpectralTimeSlice/015c4e40.c#L121) viene chiamata tre volte prima di zeroing/memcpy di pattern finestra
- inferenza operativa piu' forte: provider/allocator di buffer finestra o tabella spettrale float

`0x00e84080`

- in [014902f0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUSpectrumShaper/014902f0.c#L1976) il risultato e' seguito da squadrature element-wise su buffer float
- in [014efd00.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNInt/014efd00.c#L95) il risultato e' seguito da `powf` vettorializzato su `*(local_68 + 0x10)`
- inferenza operativa piu' forte: stage numerico che consegna o riempie un buffer float pronto per magnitude/power shaping

### Loop numerico verificato

Subito dopo `0x00e83da0`, il ramo poly entra in un loop vettoriale esplicito:

- da `+992` a `+1010`: `sqrtps` su blocchi di float
- da `+1024` a `+1045`: `sqrtss` sul tail scalare

Lettura operativa:

- la funzione non e' solo orchestration astratta
- entro i primi `~1000` byte esegue gia' una trasformazione numerica su buffer float
- questo e' compatibile con preparazione magnitude/spectral-energy prima degli stage DNA2 successivi

### Mini branch gia' verificato

Nella stessa area:

- a `+168` c'e' un salto a `+926` se un flag locale risulta falso
- il blocco `+926 .. +971` fa cleanup del puntatore temporaneo e torna a `+178`
- da `+178` riparte il path che porta ai passaggi numerici successivi

Lettura operativa:

- esiste gia' un micro-loop di retry/cleanup molto presto
- quindi il ramo poly usa una costruzione a stage con validazione esplicita del buffer intermedio

---

## Call Diretta Confermata Su `0x013903d0`

La contraddizione precedente e' chiusa.

Nel disassembly CLI mirato del ramo poly compare una `callq` diretta:

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

Conclusione aggiornata:

- l'edge `0x01447a70 -> 0x013903d0` e' ora confermato sia da Ghidra sia da LLDB
- il callsite osservato e' a `0x01459424` (`+72116`) dentro `0x01447a70`
- il ramo poly passa un out-wrapper in `rdi`, una list-ref in `rdx`, un state/source-description-like in `rsi` ricavato da `self + 0x68`, `sampleStart = 0` in `rcx`, `self + 0x90` in `r8`, `r9d = 0`, stack arg `0 = 0` e stack arg `1 = &(-0x3e0)` costruito su `self`

Dettaglio ABI e lettura operativa del bridge:

- [28_POLY_CLAIM_BRIDGE_01447A70_013903D0.md](28_POLY_CLAIM_BRIDGE_01447A70_013903D0.md)

---

## Impatto Sul Replication Effort

Il quadro ora e' piu' preciso:

1. il dispatcher ha callsite e cleanup reali, non solo ruolo astratto
2. il ramo poly front-loada helper di collection/config, poi FFT/buffer e un loop di `sqrt` su float
3. il ramo mono riceve piu' contesto strutturale via stack
4. il collegamento poly -> energy-claim kernel e' ora confermato con call diretta a `+72116`
5. nel callsite poly osservato il gate `enableTonalityWeighting` entra a zero

Questo sposta il next step da:

- "capire genericamente cosa fa DNA2"

a:

- "tipizzare gli out-param del dispatcher"
- "rinominare i buffer del path poly iniziale"
- "capire come il poly path prepara il range e i wrapper prima della call diretta al kernel claim"

---

## Next Step Mirati

1. In Ghidra GUI, rinominare nel caller `0x01433f60` gli stack object usati nei due callsite:
   `poly_ctx_a`, `poly_ctx_b`, `poly_ctx_c`, `poly_item_out`, `poly_ctx_d`
   `mono_item_out`, `mono_ctx_a`, `mono_ctx_b`, `mono_extra_0`, `mono_extra_1`, `mono_extra_2`
2. In `0x01447a70`, etichettare il blocco `+349 .. +1050` come `spectral_frontload_candidate`.
3. Tipizzare `0x00e84080` osservando i suoi caller principali, per capire se sia `fft_execute`, `window_apply`, `magnitude_extract` o altra fase intermedia.
4. Stringere il significato di `r8 = *(object + 0x90)` nel callsite poly di `0x013903d0`.
5. Capire il tipo reale del callback/progress sink passato come stack arg `1 = &(-0x3e0)`.
