# 42 — Shared Spectral Preamble `0x00e83120 / 0x00e83530 / 0x015c4d90`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Fissare il pattern condiviso che oggi emerge come corridoio reale del front-end spettrale, evitando di cercare un singolo "STFT loop magico" nel punto sbagliato.

---

## Conclusione Principale

Nel materiale locale non emerge ancora un unico loop STFT canonico.

Emerge pero' in modo abbastanza forte un preamble condiviso:

1. `0x00e83120` — factory/setup FFT
2. `0x00e83010` — alloc helper riusato come provider dei buffer di lavoro
3. `0x00e83da0` — provider di buffer/tabella float
4. `0x00e83530` — wrapper forward FFT reale (`vDSP_ctoz -> vDSP_vsmul -> vDSP_fft_zrip -> vDSP_ztoc`)
5. `0x015c4d90` / `0x015c4e40` — adapter thin + materializzazione di `MUSpectralTimeSlice`

Questo pattern compare in piu' funzioni `MUElementAnalyzer` e converge poi in `MUSpectralTimeSlice`.

Lettura operativa:

- il front-end spettrale va ricostruito come corridoio condiviso
- non come singola funzione isolata

---

## 1. Pattern Ricorrente Nei Caller Analyzer

### `0x013903d0`

In [013903d0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/013903d0.c):

- `FUN_00e83120()` a `#L613`
- `FUN_00e83da0()` a `#L617`
- `FUN_00e83010()` a `#L618` e `#L619`
- `FUN_015c4d90(...)` a `#L645` e `#L714`

Lettura:

- il kernel claim non entra direttamente sui getter slice
- costruisce prima oggetti slice temporanei attraverso il corridoio spettrale comune

### `0x014b0a60`

In [014b0a60.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/014b0a60.c):

- `FUN_00e83120()` a `#L139`
- `FUN_00e83010()` a `#L143` e `#L144`
- `FUN_00e83da0()` a `#L145`
- `FUN_015c4d90(...)` a `#L507`

Subito dopo il setup compare anche:

- loop `sqrtps / sqrtss` sul buffer `local_100`

Lettura:

- questo e' un consumer spettrale reale, non solo metadata
- il preamble condiviso puo' essere seguito da trasformazioni magnitude-like esplicite

### `0x0138f140`

In [0138f140.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0138f140.c):

- `FUN_00e83120()` a `#L205`
- `FUN_00e83da0()` a `#L216`
- `FUN_00e83010()` a `#L217` e `#L218`
- `FUN_015c4d90(...)` a `#L264` e `#L323`

Lettura:

- stesso corridoio di setup
- stesso pattern di materializzazione slice

---

## 2. `0x015c4e40` Chiude Il Corridoio Lato Slice

In [015c4e40.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUSpectralTimeSlice/015c4e40.c#L426):

- `FUN_00e83530()` compare subito prima della fase che:
  - prende buffer via `FUN_00e83010()`
  - riempie `complexSpectrum`
  - deriva magnitude e phase con `SQRT` e `_atan2f`

Questo lega in modo molto piu' stretto `00e83530` al wrapper FFT concreto, non solo a un helper gestionale.

Lettura operativa:

- `015c4e40` non e' il factory FFT
- ma e' il punto in cui il risultato della trasformazione viene trasformato in campi slice concreti

---

## 3. `0x0149f6a0` Come Estimatore Spettrale Reale

In [0149f6a0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c):

- `FUN_00e83120()` a `#L61`
- `FUN_00e83010()` a `#L74`, `#L75`, `#L76`
- `FUN_00e83530()` nei loop a `#L121`, `#L161`, `#L385`

Subito dopo `FUN_00e83530()` la funzione entra in un loop dove accumula:

```c
re * re + im * im
```

su un buffer destinazione, iterando una lista di input item.

La coda della funzione poi:

- applica `sqrt` ai 512 bin accumulati
- costruisce la soglia `0.5 * totalMagnitude`
- trova il primo bin cumulativo che supera la soglia
- converte il bin in Hz con `1 / 1024`

Quindi `0149f6a0` non va piu' trattata come "accumulo FFT candidato", ma come:

- `spectralMedianFrequencyHz`
- lettura equivalente: `rolloff 50%` della magnitudine cumulata

Non e' il "main STFT loop", ma e' un feature extractor numerico reale e replicabile.

---

## 4. Modello Operativo Aggiornato

Il modello piu' prudente e utile oggi e':

1. `00e83120`
   - setup/factory FFT
2. `00e83010`
   - buffer working/output
3. `00e83da0`
   - buffer/tabella float ausiliaria
4. `00e83530`
   - wrapper forward FFT del transformer, condiviso tra analyzer e renderer
5. `015c4d90` / `015c4e40`
   - adapter thin + materializzazione di `MUSpectralTimeSlice`
6. caller analyzer come `013903d0`, `014b0a60`, `0138f140`, `0149f6a0`
   - usano il corridoio comune per claim, scoring o feature extraction spettrale

---

## Impatto Sul Replication Effort

1. Il front-end spettrale va replicato come pipeline condivisa, non come singola funzione.
2. `01103ee0` esce dal focus numerico.
3. `0149f6a0` entra nella spec eseguibile come metrica concreta: spectral median frequency / rolloff 50% in Hz.
4. `015c4d90` esce dalla categoria "factory misteriosa" e resta un adapter thin sopra `015c4e40`.
5. `015c4e40` resta il punto chiave per capire come la trasformazione riempie i campi di `MUSpectralTimeSlice`.
6. `00e83530 / 00e83640` vanno trattate come wrapper FFT su buffer caller-side aliasabili; i return value visibili nel decompilato non sono parte affidabile del contratto.

---

## Next Step

1. Fissare la convenzione packed-spectrum `DC/Nyquist` osservata dai caller di `0x00e83530 / 0x00e83640`.
2. Mappare i consumer downstream di `0x0149f6a0`, partendo da `01484bc0`.
3. Riconciliare helper-per-helper la slice `x86_64` di `MikeCoreF` con i dump `deep_*`.
