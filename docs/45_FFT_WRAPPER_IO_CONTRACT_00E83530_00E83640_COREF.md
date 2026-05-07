# 45 — FFT Wrapper I/O Contract `0x00e83530 / 0x00e83640` + `MikeCoreF`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Chiudere il contratto operativo dei wrapper FFT del `GNFastFourierTransformer` in modo piu' utile per la replica:

- cosa leggono e cosa scrivono davvero
- se i return value del decompilato sono reali o rumore
- quanto si puo' gia' dire anche su `MikeCoreF`

---

## Conclusione Principale

Il modello di lavoro corretto oggi e':

1. `0x00e83530` va trattata come wrapper forward con coppia `dst/src`, aliasabile
2. `0x00e83640` va trattata come wrapper inverse-like con coppia `src/dst`, aliasabile
3. ad alto livello i caller la vivono comunque come operazione su working buffer caller-owned
4. i presunti return value nei decompilati non sono parte affidabile del contratto
5. `MikeCoreF` mostra lo stesso corridoio spettrale a livello alto, ma il mapping helper-address uno-a-uno resta ancora aperto a causa del bundle universal e dei dump `deep_*` non ancora riconciliati slice-per-slice

La parte importante per il clean-room effort e' questa:

- il contratto utile non e' "una funzione che ritorna un risultato"
- e' "un transformer che consuma e riscrive buffer interleaved/packed caller-side, con aliasing possibile"

---

## 1. Evidenza Diretta Dal Caller `MUSpectralTimeSlice`

In [015c4e40.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUSpectralTimeSlice/015c4e40.c#L406):

- il frame time-domain viene prima copiato con tre `_memcpy`
- `FUN_00e83530()` arriva subito dopo a [015c4e40.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUSpectralTimeSlice/015c4e40.c#L428)
- immediatamente dopo la funzione legge lo stesso buffer per derivare:
  - `complexSpectrum`
  - magnitude via `SQRT`
  - phase via `_atan2f`

Lettura operativa:

- `0x00e83530` popola uno spettro complesso packed/interleaved in un buffer destinazione caller-side
- il caller non usa un oggetto di ritorno separato
- legge il dominio complesso dal buffer appena popolato

---

## 2. Evidenza Dal Caller `GNData`

In [00e3d570.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNData/00e3d570.c#L45):

- il caller prepara due buffer: `param_1` e `param_2`
- chiama `FUN_00e83530()` due volte a [00e3d570.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNData/00e3d570.c#L48) e [00e3d570.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNData/00e3d570.c#L50)
- poi moltiplica esplicitamente le coppie complesse re/im nello stesso storage
- infine chiama `FUN_00e83640(...)` a [00e3d570.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNData/00e3d570.c#L129)

Questo e' il pattern classico:

1. forward in place su buffer A
2. forward in place su buffer B
3. prodotto nel dominio spettrale
4. inverse in place su buffer A

Lettura:

- `0x00e83640` e' davvero il sibling inverse-like operativo di `0x00e83530`
- il contratto e' compatibile con uso FFT packed-spectrum in place

---

## 3. Evidenza Dal Lato Renderer / Resynthesis

In [012bcdc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MULSSComponentRenderer/012bcdc0.c#L350):

- il caller azzera un buffer destinazione
- esegue `FUN_00e83530(..., pfVar6)`
- poi legge subito coppie float re/im dal buffer trasformato e le normalizza a [012bcdc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MULSSComponentRenderer/012bcdc0.c#L360)

In [012ba340.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MULSSComponentRenderer/012ba340.c#L83):

- ogni componente passa per `FUN_00e83530(...)`
- dopo moltiplicazioni e pesature spettrali, il caller rientra con `FUN_00e83640(...)` a [012ba340.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MULSSComponentRenderer/012ba340.c#L439)

Lettura:

- analyzer e renderer condividono lo stesso contratto dei wrapper FFT
- il verso forward/inverse non e' un'ipotesi solo analyzer-side

---

## 4. Contratto Eseguibile Prudente

Per la replica clean-room conviene fissare il contratto cosi':

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

Con note importanti:

- `srcInterleaved` e `dstInterleaved` possono aliasare
- il layout osservato dai caller e' interleaved/packed a coppie `re/im`
- `DC` / `Nyquist` restano ancora da formalizzare esattamente come convenzione `vDSP_fft_zrip`
- il semantic return non va usato nella spec

---

## 5. Return Value Del Decompilato: Perche' Va Declassato

In alcuni caller Ghidra lascia apparire un pattern tipo:

- `uVar = FUN_00e83530(uVar, ptr)`
- `uVar = FUN_00e83640(f, ptr)`

Ma le prove locali oggi vanno nella direzione opposta:

- il dato utile e' sempre letto dallo stesso buffer passato come argomento
- i caller successivi operano sulle celle float del buffer, non su un oggetto ritornato
- il disassembly di `0x00e83530 / 0x00e83640` mostra wrapper operativi centrati su buffer interni del transformer e conversioni `vDSP`, non funzioni "feature-returning"

Quindi la lettura piu' prudente e utile e':

- il return visibile nel decompilato e' artefatto da prototype mancante / calling convention incompleta

---

## 6. Stato Di `MikeCoreF`

Su `MikeCoreF` il livello alto e' gia' abbastanza forte:

- [deep_spectral_init.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCoreF/deep_spectral_init.txt) mostra `FUN_015cb0f0 -> FUN_015cb1a0` sul path `MUSpectralTimeSlice::initFromTimeSignal`
- [deep_spectral_slice.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCoreF/deep_spectral_slice.txt) conferma la stessa famiglia `MUSpectralTimeSlice` con getter `complexSpectrum / magnitude / phase / trueFreq`
- [deep_mono_pitch_freq.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCoreF/deep_mono_pitch_freq.txt) e [deep_window_overlap.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCoreF/deep_window_overlap.txt) mostrano che il corridoio spettrale resta centrale anche nei consumer di pitch e overlap

Pero' il mapping basso livello resta ancora aperto:

- `MikeCoreF` e' universal `x86_64 + arm64`
- i dump `deep_*` e i disassemblaggi slice-specifici non sono ancora riconciliati helper-per-helper
- quindi non e' ancora rigoroso promuovere singoli helper `MikeCoreF` a equivalenti diretti e definitivi di `00e83530 / 00e83120`

Lettura corretta oggi:

- parita' pipeline `MikeCore <-> MikeCoreF`: alta
- parita' address-level dei singoli helper FFT: ancora open

---

## Impatto Sul Replication Effort

1. La spec FFT clean-room puo' trattare `00e83530 / 00e83640` come API `void + in-place`.
2. Il falso problema dei return value decompilati scende di priorita'.
3. Il prossimo nodo tecnico non e' piu' il verso dei wrapper, ma la convenzione esatta `vDSP_fft_zrip` per `DC/Nyquist`.
4. `MikeCoreF` conferma che il corridoio spettrale non e' un artefatto locale del solo `MikeCore`, ma il livello helper resta da riallineare slice-per-slice.

---

## Next Step

1. Fissare in modo esplicito la convenzione packed-spectrum `DC/Nyquist` osservata dai caller.
2. Cercare un caller minimo dove `00e83530` o `00e83640` siano invocate con prototype leggibile senza rumore decompiler.
3. Riconciliare la slice `x86_64` di `MikeCoreF` con i dump `deep_*` per trovare gli helper corrispondenti reali.
