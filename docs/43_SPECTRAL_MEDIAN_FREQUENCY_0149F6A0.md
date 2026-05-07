# 43 — Spectral Median Frequency `0x0149f6a0`

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Chiudere in modo replicabile il ruolo di `0x0149f6a0`, distinguendo tra:

- accumulo FFT generico
- metrica spettrale vera
- valore di ritorno finale in bin o in Hz

---

## Conclusione Principale

`0x0149f6a0` non restituisce una potenza totale e non e' il "main STFT loop".

Le prove locali puntano invece in modo forte a:

- stimatore di `spectralMedianFrequencyHz`
- lettura equivalente: `spectral rolloff 50%` della magnitudine cumulata

Pipeline osservabile:

1. crea/setup FFT con `0x00e83120`
2. prepara buffer di lavoro con `0x00e83010`
3. per ogni item/source chiama `0x00e83530`
4. accumula `re^2 + im^2` su 512 bin
5. applica `sqrt` al buffer accumulato
6. somma tutte le magnitudini
7. prende il `50%` della magnitudine totale
8. trova il primo bin cumulativo che supera la soglia
9. converte il bin in Hz con fattore `sampleRate / 1024`, corretto per il reduction factor locale

Quindi il nome operativo consigliato oggi e':

- `MUElementAnalyzer_spectralMedianFrequencyHz`

Alias ancora accettabile:

- `spectralRolloff50Hz`

---

## 1. Evidenza Di Accumulo FFT Reale

In [0149f6a0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L61):

- `FUN_00e83120()` a `#L61`
- `FUN_00e83010()` a `#L74`, `#L75`, `#L76`
- `FUN_00e83530()` a `#L121`, `#L161`, `#L385`

Subito dopo le call a `0x00e83530`, la funzione accumula esplicitamente:

```c
re * re + im * im
```

nei blocchi:

- [0149f6a0.c#L121](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L121)
- [0149f6a0.c#L161](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L161)
- [0149f6a0.c#L385](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L385)

Questo chiude il punto minimo:

- `0x00e83530` e' dentro un path di esecuzione FFT reale
- `0149f6a0` lavora su magnitudini spettrali aggregate, non su metadata

---

## 2. Evidenza Di Median / Rolloff 50%

Dopo l'accumulo, la funzione:

1. applica `sqrtps` al buffer di 512 bin in [0149f6a0.c#L449](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L449)
2. somma tutto il buffer in [0149f6a0.c#L456](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L456)
3. costruisce la soglia con:

```c
fVar34 = totalMagnitude * 0.5f;
```

in [0149f6a0.c#L467](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L467)

4. scorre il cumulativo finche' non supera la soglia in [0149f6a0.c#L469](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L469)
5. usa `512` come fallback massimo in [0149f6a0.c#L491](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L491)

Questa e' esattamente la forma di:

- median spectral frequency
- oppure, formulata in linguaggio MIR, rolloff frequency al 50%

Non e' invece coerente con:

- spectral centroid
- RMS globale
- peak bin frequency
- energy total scalar

---

## 3. Evidenza Della Conversione Finale In Hz

Il return finale e':

```c
return fVar33 * (float)((param_1 * DAT_0241d650) / (double)fVar32);
```

in [0149f6a0.c#L502](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L502)

Costanti verificate via `lldb` locale su `binaries/MikeCore`:

- `DAT_0239011c = 0.5`
- `DAT_0240e370 = 44000`
- `DAT_0240e33c = 1024`
- `DAT_0241d650 = 0.0009765625`
- `DAT_0241126c = 512`

Quindi:

- `DAT_0241d650 = 1 / 1024`
- la conversione finale e' `binIndex * effectiveBinHz`

Lettura operativa:

```text
medianHz = medianBin * ((sampleRateLike / reductionFactor) / 1024.0)
```

Il reduction factor nasce dal blocco:

- [0149f6a0.c#L77](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L77)
- [0149f6a0.c#L78](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L78)
- [0149f6a0.c#L88](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/0149f6a0.c#L88)

con base-rate `44000` e path di resampling/downsampling su finestre da `1024` sample.

---

## 4. Uso Reale Nel Caller

Il caller osservato oggi e' [01484bc0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/MUElementAnalyzer/01484bc0.c#L544):

```c
fVar77 = (float)FUN_0149f6a0(...);
fVar97 = (DAT_0240e2f4 + fVar77) * 0.5f;
fVar89 = *pfVar1 + *pfVar1;
if ((fVar97 < fVar89) && (fVar89 <= fVar77)) {
  fVar97 = fVar89;
}
```

Lettura prudente:

- `0149f6a0` produce una reference frequency-like in Hz
- il caller la usa come bound/floor per una soglia downstream
- non viene trattata come energia totale o semplice count di bin

Quindi la funzione entra nel replication path come:

- metrica spettrale intermedia usata per tarare soglie analyzer

Il consumer map downstream e' ora fissato in:

- [47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md](47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md)

---

## 5. Nome Di Lavoro Consigliato

Nome consigliato:

- `MUElementAnalyzer_spectralMedianFrequencyHz`

Alternative accettabili:

- `MUElementAnalyzer_spectralRolloff50Hz`
- `MUElementAnalyzer_referenceSpectralMedianHz`

Nome sconsigliato:

- `computeFFT`
- `accumulateSpectrum`
- `energySum`
- `peakFrequency`

---

## Impatto Sul Replication Effort

1. `0149f6a0` esce dalla categoria "candidate generico FFT".
2. Entra nella spec eseguibile del front-end come metrica precisa.
3. `00e83530` guadagna un evidence trail piu' forte come execute/apply sul frame spettrale corrente.
4. Il clone clean-room puo' ora trattare questo nodo come `feature extractor`, non come puro helper infrastrutturale.

---

## Next Step

1. Stringere i nomi del cluster analyzer `+0xf4 .. +0x108` scritto da `014a74b0`.
2. Allineare `MikeCoreF` per verificare che lo stesso schema consumer esista anche nella variante float.
3. Cercare reader a valle del cluster `+0xf4 .. +0x108` fuori da `01484bc0`.
