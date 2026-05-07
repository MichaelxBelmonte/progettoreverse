# 46 — FFT Buffer Alias And Packed Layout `0x00e83530 / 0x00e83640`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Correggere il livello basso del contratto FFT dopo il primo tightening:

- chiarire la vera firma osservabile dei wrapper
- distinguere tra "semantica in-place" e "ABI src/dst aliasabile"
- fissare il layout packed dei primi bin

---

## Conclusione Principale

Il modello corretto oggi e' questo:

1. `0x00e83530` usa davvero `self + dstInterleaved + srcInterleaved`
2. `0x00e83640` usa davvero `self + srcInterleaved + dstInterleaved`
3. i due buffer possono aliasare
4. l'alto livello resta coerente con una lettura "working-buffer in-place", ma l'ABI bassa non e' piu' riducibile a `self + single buffer`
5. il layout packed osservato nei caller e' coerente con la convenzione reale-FFT `vDSP`:
   - `buffer[0] = bin0 real`
   - `buffer[1] = binNyquist real`
   - poi coppie `re[k], im[k]` da `k = 1`

---

## 1. Prova Bassa Su `0x00e83530`

Disassembly in [binaries/MikeCore](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore):

- a `0xe8353f` salva `rsi` in `r14`
- a `0xe83557` sposta `rdx` in `rdi` prima di `_vDSP_ctoz`
- a `0xe8360b` passa `r14` come `rdx` a `_vDSP_ztoc`

Questo fissa il pattern:

- `rdx` = source interleaved per `ctoz`
- `rsi` = destination interleaved per `ztoc`

Quindi `0x00e83530` non e' solo "self + buffer":

- e' `forward(self, dstInterleaved, srcInterleaved)`

---

## 2. Prova Bassa Su `0x00e83640`

Disassembly in [binaries/MikeCore](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore):

- a `0xe8364f` salva `rdx` in `r14`
- a `0xe83652` salva `rsi` in `rax`
- a `0xe8366a` passa `rax` a `_vDSP_ctoz`
- a `0xe8370c` passa `r14` come destination finale a `_vDSP_ztoc`

Quindi qui il verso argomenti e':

- `rsi` = source interleaved
- `rdx` = destination interleaved

Lettura:

- `0x00e83640` e' `inverseLike(self, srcInterleaved, dstInterleaved)`

---

## 3. Prova Dai Callsite: Source E Destination Distinti

### `015c4e40`

Nel callsite a [0x15c5a8a](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1) il pattern e':

- `movq (%rax), %rdi`
- `movq -0x58(%rbp), %rdx`
- `movq %r14, %rsi`
- `callq 0xe83530`

Quindi il caller passa esplicitamente:

- `src != dst`

### `00e3d570`

Nel callsite a [0xe3d5b4](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1):

- `movq %rbx, %rsi`
- `movq %r14, %rdx`
- `callq 0xe83530`

Nel callsite a [0xe3d5ed](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/binaries/MikeCore#L1):

- `movq %r15, %rsi`
- `movq %r14, %rdx`
- `callq 0xe83530`

Anche qui il wrapper forward viene usato con buffer distinti.

---

## 4. Prova Che L'Alias E' Consentito

Nel path di [00e3d570.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNData/00e3d570.c#L129), la coda disassemblata mostra:

- `movq %rbx, %rsi`
- `movq %rbx, %rdx`
- `jmp 0xe83640`

Questa e' una prova forte che:

- `0x00e83640` supporta aliasing `src == dst`

Quindi il modello corretto e':

- ABI bassa a tre argomenti
- uso alto livello spesso assimilabile a in-place perche' i buffer possono aliasare o essere nascosti da wrapper temporanei

---

## 5. Packed Layout: `DC / Nyquist / re-im`

### `015c4e40`

In [015c4e40.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUSpectralTimeSlice/015c4e40.c#L434):

- `*puVar16 = *param_2`
- `*puVar14 = param_2[1]`

Poi dal bin successivo il loop usa:

- `param_2[lVar26 * 2 + 2]`
- `param_2[lVar26 * 2 + 3]`

Questo indica che:

- le prime due celle sono speciali
- dal terzo float in poi il layout e' a coppie `re/im`

### `00e3d570`

In [00e3d570.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNData/00e3d570.c#L53):

- `param_1[0]` e `param_1[1]` vengono trattati separatamente
- il loop vettoriale parte da indice `2` e procede a coppie complesse

Lettura canonica:

- `buffer[0]` = `DC real`
- `buffer[1]` = `Nyquist real`
- `buffer[2], buffer[3]` = `bin1 re/im`
- `buffer[4], buffer[5]` = `bin2 re/im`

Questo e' esattamente il modello che ci serve per una replica clean-room del packing `vDSP_fft_zrip`.

---

## 6. Spec Clean-Room Aggiornata

La traduzione piu' utile oggi e':

```c
void GNFastFourierTransformer_forwardPacked(
    GNFastFourierTransformer *transformer,
    float *dstInterleaved,
    const float *srcInterleaved
);

void GNFastFourierTransformer_inversePackedLike(
    GNFastFourierTransformer *transformer,
    const float *srcInterleaved,
    float *dstInterleaved
);
```

Con nota:

- `srcInterleaved` e `dstInterleaved` possono aliasare

Per il livello architetturale resta comunque lecito riassumere il cluster come:

- "primitive FFT che trasformano working buffer caller-side"

ma non e' piu' corretto ridurre il dettaglio ABI a un singolo pointer.

---

## Impatto Sul Replication Effort

1. Il front-end FFT non e' piu' ambiguo tra `single-buffer` e `src/dst`: la ABI bassa e' chiusa meglio.
2. Il packing `DC/Nyquist` e' abbastanza stretto da poter scrivere test clean-room sensati.
3. I wrapper temporanei in `MUSpectralTimeSlice` diventano piu' leggibili: copiano l'input frame in un source buffer e poi ricevono lo spettro packed in un destination buffer separato.
4. Il prossimo step corretto non e' piu' "capire la firma FFT", ma verificare se altri caller usano packing identico anche in `MikeCoreF`.
