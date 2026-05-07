# 30 — Descriptor Slot Count `0x0132dbe0 / 0x014f7330 / 0x0145f790`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Stringere il significato operativo di `descriptor + 0x88`, oggi letto via `0132dbe0`, e fissare il cluster downstream che usa quel count nel ramo poly e in `MUSpectrumShaper`.

---

## Conclusione Principale

`descriptor + 0x88` non si comporta come numero di bin FFT.

Si comporta invece come cardinalita' di un cluster di renderer/slot di analisi, con naming candidato forte:

- `assembledElementRendererCount`
- oppure, in forma piu' prudente, `analysisLaneCount`

La catena osservata e' questa:

1. `0132dbe0` ritorna `*(int *)(descriptor + 0x88)`
2. il ramo poly usa subito quel count per:
   - allocazioni `24 * count`
   - scalature `2 * count` e `6 * count`
   - costruzione di una template collection via `014f7330`
3. `014f7330 / 014f7360` costruiscono un gruppo con nodi fissi e un sottogruppo indicizzato di size `count`
4. `0145f790` usa lo stesso count per materializzare `count` oggetti indicizzati `0..count-1`
5. `MUSpectrumShaper` espone gia' un campo classificato `_assembledElementRendererCount` adiacente alla collection a `+0x108`

Conclusione operativa:

- `+0x88` e' molto piu' vicino a "numero di slot/renderer assemblati" che a una dimensione spettrale pura
- i nodi count-sized downstream convergono ora sulla famiglia `MUAudioSourcePropertyPoint`, mentre l'oggetto da `0x168` costruito sopra di essi e' documentato separatamente in [31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md](31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md)

---

## 1. Evidenza Nel Ramo Poly

Nel front-load di `01447a70`, dopo `0132d790`, il getter `0132dbe0` viene usato come count reale.

### 1. Allocazione `24 * count`

```asm
0x1447c5c  movq   -0x200(%rbp), %rax
0x1447c63  leal   (,%rax,8), %eax
0x1447c6a  leal   (%rax,%rax,2), %esi
```

Quindi:

- `esi = 24 * count`

### 2. Costruzione collection/template

```asm
0x144818a  leaq   -0x48(%rbp), %rdi
0x144818e  leaq   -0x8e8(%rbp), %rsi
0x144819d  movq   -0x200(%rbp), %rdx
0x14481a4  callq  0x14f7330
```

Quindi:

- il count viene passato intero a `014f7330`
- il risultato e' una collection poi iterata come lista di oggetti, non un buffer FFT

### 3. Scalature `2 * count` e `6 * count`

```asm
0x144868b  movq   -0x200(%rbp), %rax
0x1448692  addl   %eax, %eax
0x144869b  leal   (%rax,%rax,2), %eax
```

Quindi:

- `-0xb0 = 2 * count`
- `-0x280 = 6 * count`

Questo e' tipico di cardinalita' di lane/slot o strutture multi-field, non di size FFT base.

### 4. Count usato come stride reale

```asm
0x144a7d8  movq   -0x200(%rbp), %rcx
0x144a7fc  leal   (%rcx,%rcx,2), %ecx
```

Il count entra in pointer arithmetic e stride di buffer downstream.

---

## 2. Template Builder `014f7330 / 014f7360`

`014f7330` e' un wrapper stretto che inoltra a `014f7360`.

L'helper esteso:

- alloca prima 5 oggetti fissi da `0x20` byte
- poi, se `count > 0`, alloca `count` oggetti addizionali da `0x20` byte
- li appende a uno dei nodi gia' creati

Snippet chiave:

```asm
0x14f7393  movl   $0x20, %edi
...
0x14f745b  cmpl   $0x0, -0xec(%rbp)
0x14f7480  movl   $0x20, %edi
...
0x14f74ac  movq   -0xe8(%rbp), %rdi
0x14f74b3  movq   %r14, %rsi
0x14f74b6  callq  0xd21140
```

Lettura pratica:

- il gruppo top-level non ha cardinalita' `count`
- il count dimensiona solo un sottogruppo interno

### Mapping item -> slot

Piu' avanti `014f7360` usa `sourceItem + 0x28` come indice nel sottogruppo count-sized:

```asm
0x14f75ba  movq   -0x38(%rbp), %rax
0x14f75be  movslq 0x28(%rax), %rax
0x14f75c2  movq   -0xe8(%rbp), %rcx
0x14f75c9  movq   0x10(%rcx), %rcx
0x14f75cd  movq   (%rcx,%rax,8), %rbx
```

Questa e' una prova forte che:

- `count` rappresenta numero di slot indirizzabili
- `item + 0x28` e' un `slotIndex` o `rendererIndex` verso quel gruppo

### Helper adiacenti

`014f6f10` non e' logica numerica:

```asm
0x14f6f1e  movq   0x10(%rsi), %r14
0x14f6f2f  movq   %r14, (%rbx)
0x14f6f32  movb   $0x1, 0x8(%rbx)
```

Quindi:

- estrae semplicemente un ref a `item + 0x10`

`014ef210` invece materializza un adapter piu' ricco:

```asm
0x14ef228  movl   $0x168, %edi
0x14ef22d  callq  0xe8fc40
...
0x14ef2bd  leaq   -0x40(%rbp), %rsi
0x14ef2c1  leaq   -0x30(%rbp), %rdx
0x14ef2c5  callq  0x14ef060
```

Quindi:

- il gruppo creato da `014f7330` non e' ancora il renderer finale
- viene trasformato in un adapter/renderer object da `0x168` byte

---

## 3. Cross-Check Esterno: `0145f790`

La funzione `0145f790` conferma la stessa lettura anche fuori dal corridoio poly immediato.

Pattern osservato:

```c
uVar8 = FUN_0132dbe0();
for (uVar25 = 0; uVar25 != uVar8; ++uVar25) {
    pcVar19 = alloc(...);
    *(uint *)(pcVar19 + 0xc) = uVar25;
    *(undefined4 *)(pcVar19 + 0x10) = ...;
    *(undefined4 *)(pcVar19 + 0x14) = ...;
    *(undefined4 *)(pcVar19 + 0x18) = ...;
    *(undefined4 *)(pcVar19 + 0x1c) = ...;
    *(undefined8 *)(pcVar19 + 0x24) = 0x3dcccccd3dcccccd;
}
```

Lettura pratica:

- lo stesso count produce `count` oggetti indicizzati `0..count-1`
- ogni oggetto riceve parametri float default per slot, non metadata di FFT

Questo e' incompatibile con una lettura "numero di bin" e molto coerente con una lettura "numero di renderer/slot/lane".

---

## 4. Convergenza Con `MUSpectrumShaper`

I clean file di `MUSpectrumShaper` convergono sul naming.

In `01430a30`:

- `this + 0x100` e' classificato `_assembledElementRendererCount`
- `this + 0x108` e' la collection dei renderer assemblati

Esempio:

```c
iVar7 = FUN_014308d0() - *(int *)(this_ptr + 0x100);
...
lVar1 = **(int64_t **)(*(int64_t *)(this_ptr + 0x108) + 0x10);
```

In `01431180` gli stessi primi tre entry della collection vengono letti e aggiornati come renderer reali.

Inferenza forte:

- il cluster `count -> collection -> child refs -> adapter` osservato nel poly e nello shaper e' lo stesso family concettuale
- il nome piu' forte oggi e' proprio `assembledElementRendererCount`

---

## 5. Downstream Metric Flow

Il cluster non si ferma alla sola cardinalita'.

`014f0020` usa la child-list dell'adapter e scrive due campi downstream per slot:

```c
*(void *)(child + 0x18) = ...
*(void *)(child + 0x1c) = ...
```

Subito dopo:

- `014f0770` legge `child + 0x14` e `child + 0x18` come due serie parallele e restringe bounds sul parent a `+0x15c` e `+0x2c`
- `014f0c40` legge `child + 0x14`, `+0x18`, `+0x1c` come tre serie float parallele

Lettura pratica:

- gli slot count-sized non sono solo "placeholder"
- diventano portatori reali di metriche downstream

Questo rende ancora piu' forte la lettura di `descriptor + 0x88` come count del cluster renderer/slot.

---

## 6. Impatto Sul Replication Effort

1. `descriptor + 0x88` puo' entrare nella spec clean-room come cardinalita' del cluster renderer/slot, non come size spettrale.
2. `sourceItem + 0x28` va trattato come indice verso quel cluster count-sized.
3. Il bridge `014f7330 -> 014f6f10 -> 014ef210 -> 014f0020` e' un corridoio P1 reale della replica, perche' trasforma slot template in adapter/renderer poi li popola con score/weight downstream.
4. I naming generici tipo `analysisCountLike` sono ora troppo deboli per `+0x88`.

---

## Next Step

1. Canonizzazione base completata: i nodi count-sized convergono su `MUAudioSourcePropertyPoint` e il `0x168` e' fissato come candidate adapter separato in [31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md](31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md).
2. Topologia base dei 5 nodi fissi chiusa come `GNList` in [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md); resta da chiudere il significato esatto dei byte-stato e della shortlist policy.
3. Verificare se `MikeCoreF` mantiene lo stesso cluster `descriptor + 0x88 -> renderer slots`.
