# 24 — Windowed Overlap Kernel `0x014b71e0`

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Ridurre `0x014b71e0` a una lettura matematica utile per la clean-room reconstruction e chiarire il significato del float ausiliario scritto a `item + 0x24` da `014eecb0`.

---

## Conclusione Operativa

`014b71e0` non e' un flag setter.

E' un kernel di overlap locale che:

- prende una frequenza target in Hz
- costruisce una finestra locale attorno al bin centrale corrispondente
- confronta la frequenza target contro un asse di frequenze per-bin
- pesa i contributi con una LUT statica
- opzionalmente consuma/depleta il buffer di energia in-place
- restituisce uno scalar di evidence/overlap locale

Il miglior nome operativo di oggi per `item + 0x24` e':

- `local_overlap_evidence`

con la nota che il ramo "consume" puo' farlo comportare anche come residual evidence.

---

## Evidenza Forte

### 1. Finestra centrata su `centerHz / binStepHz`

In [014b71e0.c](../reconstructed/clean/MUElementAnalyzer/014b71e0.c):

```c
uVar6 = (uint)(param_4 * -0.5f + param_1 / param_3);
uVar8 = (int)param_4 + uVar6 + 1;
```

Con i literal decodificati:

- `g_02390118 = -0.5`
- `g_02390124 = 1.0`

Questa e' una costruzione classica:

- `centerBin = centerHz / binStepHz`
- `lower = floor(centerBin - 0.5 * windowSpanBins)`
- `upper = lower + windowSpanBins + 1`

Quindi:

- `param_1` = `centerHz`
- `param_3` = `binStepHz`
- `param_4` = `windowSpanBins`

### 2. Usa un asse frequenziale per-bin e un buffer di energia

Nel loop:

```c
diff = abs(centerHz - freqAxis[i]);
if (diff < windowHz) {
    kernel = LUT[(windowHz - diff) / windowHz * 64.0];
    contrib = kernel * energy[i];
}
```

L'array nascosto in `RDI` viene letto solo per il confronto con `centerHz`.

L'array nascosto in `RSI` viene letto come energia/contributo e, in un ramo, anche riscritto.

Lettura forte:

- `RDI` = asse frequenziale per-bin
- `RSI` = buffer energia/magnitudine locale

### 3. Il ramo con `RDX != 0` applica un weight addizionale

Quando `RDX` e' presente:

```c
weight = min(1.0, extraMask[i]);
weighted += weight * contrib;
raw += contrib;
```

Quindi l'array opzionale in `RDX` e' un weight/mask per-bin, non il segnale principale.

### 4. Puo' consumare il buffer in-place

Quando `in_XMM4_Da > threshold`:

```c
energy[i] = energy[i] - contrib * consumeFactor;
```

Questo spiega perche' lo stesso kernel puo' essere usato sia per misurare overlap sia per sottrarre energia gia' assegnata.

### 5. Fallback sul bin centrale se l'energia locale e' troppo bassa

Se la somma `raw` e' troppo piccola:

```c
fallback = centerSample * 0.01 * 0.1;
```

I due literal double osservati sono:

- `0.01`
- `0.1`

Quindi il kernel restituisce comunque un floor minimale derivato dal campione centrale.

---

## Firma Operativa Ricostruita

Il pseudocode non mostra bene gli argomenti nascosti. La lettura migliore oggi e':

```c
float windowed_overlap_kernel(
    float centerHz,
    float windowHz,
    float binStepHz,
    float windowSpanBins,
    float *freqAxis,          // hidden RDI
    float *energyBuffer,      // hidden RSI, optional in-place depletion
    float *extraMask,         // hidden RDX, nullable
    float *outEvidence,       // RCX, nullable
    int binCount,             // R8D
    float consumeFactor       // XMM4
);
```

Il nome dei parametri e' inferenziale, ma il ruolo e' oggi piu' robusto del naming originale.

---

## Relazione Con `014eecb0`

Dal call path osservato:

1. `014eecb0` converte `item + 0x14` da cents a Hz
2. costruisce `windowHz = max(minWidthHz, relativeWidth * centerHz)`
3. passa `&item[+0x24]` a `014b71e0`
4. scrive `item + 0x20 = max(epsilon, centerHz)`

Il mapping dei buffer nascosti nel path analyzer principale e' ora chiuso con alta confidenza:

- hidden `rdi` = `trueFreqData`
- hidden `rsi` = `magnitudeData`
- hidden `rdx` = `tonalityData`

Questo restringe il significato di `item + 0x24`:

- non e' un bitfield
- non e' un indice
- e' uno scalar di overlap/evidence locale, con floor a `FLT_MIN` applicato da `014eecb0`

---

## Relazione Con Lo Spectrum Shaper

In [014902f0.c](../reconstructed/clean/MUSpectrumShaper/014902f0.c#L1767) compare lo stesso pattern open-coded:

- `015c6b60()` fornisce magnitude
- `015c66c0()` fornisce trueFreq
- si usa la stessa LUT via `00e84250`
- si accumula su finestra locale con fallback sul bin centrale

Questo e' un indizio molto forte che `014b71e0` sia la forma riusabile dello stesso identico primitive matematico.

Nel path analyzer, il relay completo e':

`015c66c0() -> trueFreqData -> 014eecb0 -> hidden rdi`

`015c6b60() -> magnitudeData -> 014eecb0 -> hidden rsi`

`015c6ba0() -> tonalityData -> 014eecb0 -> hidden rdx`

---

## Costanti Chiave

- `g_02390118 = -0.5`
- `g_02390124 = 1.0`
- `g_02390140 = 0x7fffffff` per `abs(float)`
- `g_0240e314 = 64.0f` scala indice LUT
- `g_02394274 = 1.1754943508222875e-38f` floor raw-sum
- `g_02411280 = 9.999999747378752e-06f` floor per abilitare depletion
- `0.01` e `0.1` nel fallback
- `g_2411080 = 6.283185307179586` (`2*pi`) per costruzione LUT
- `g_23e1728 = -3.141592653589793` (`-pi`) fase iniziale LUT
- `g_23942d0 = 0.5` scala della finestra Hann periodica

Il valore `64.0f` mappa la distanza normalizzata in indice di tabella.

## LUT `00e84250`

Il disassembly diretto di `014b71e0` mostra:

```asm
14b7219: bf 80 00 00 00   movl $0x80, %edi
14b721e: callq 0xe84250
```

Quindi il kernel usa la riga LUT di dimensione `128`.

`00e84250(dimension)`:

- calcola `row = max((dimension / 2) - 1, 0)`
- calcola `offset = row * row + row`
- ritorna `global_028025d0 + offset`

`00e84290` inizializza `global_028025d0` come tabella triangolare di righe pari
`2..256`, allocata a `0x10204` byte (`16513` float, incluso sentinel). La riga
usata da `014b71e0` e' quindi:

```c
phase = -pi;
step = 2*pi / dimension;
lut[i] = (cos(phase) + 1.0) * 0.5;
phase += step;
```

Nota: esiste anche un buffer sibling normalizzato (`global_028025c8`) costruito
nello stesso initializer, ma `00e84250` ritorna il buffer non normalizzato
`global_028025d0`.

## Implementazione Clean-Room

Implementato in `features/windowed_overlap.*`:

- `make_windowed_overlap_plan(...)`
  - costruisce `lower`, `upper` e fallback index da
    `centerHz / binStepHz`, `-0.5f`, `windowSpanBins` e `binCount / 2`
- `windowed_overlap_lut_row_offset(...)`
  - replica l'offset row `row * row + row` osservato in `00e84250`
- `select_windowed_overlap_lut_row(...)`
  - seleziona una riga da tabella triangolare esterna `2..256`
- `fill_windowed_overlap_lut_row(...)`
  - materializza la riga Hann periodica osservata per `dimension=128` o altra
    dimensione pari valida
- `compute_windowed_overlap(...)`
  - scansiona `frequencyAxis[lower:upper]`
  - usa `abs(centerHz - frequencyAxis[i]) < windowHz`
  - legge `lut[int(((windowHz - diff) / windowHz) * 64.0f)]`
  - accumula `rawContribution`
  - se `extraMask` e' presente, accumula `min(1.0f, mask[i]) * contribution`
  - se `consumeFactor > 1e-5`, sottrae `contribution * consumeFactor` dal
    buffer energia
  - se il raw sum resta sotto `FLT_MIN`, usa fallback
    `energy[fallbackIndex] * 0.01 * 0.1`

Guardrail: `compute_windowed_overlap(...)` continua a ricevere la LUT come
`std::span<const float>`. Il modulo ricostruisce la formula numerica della riga
LUT, non il lifecycle globale originale (`00e84290`, ownership e teardown).

---

## Impatto Sul Replication Effort

1. `item + 0x24` puo' essere modellato come `local_overlap_evidence`.
2. Il path helper non e' piu' una black box: e' una misura locale su `trueFreq/magnitude`, pesata da `tonalityData`, con modalita' opzionale di depletion.
3. Analyzer e spectrum shaper condividono gia' un primitive matematico comune, utile per una replica coerente.
4. Il kernel e la riga LUT `128` sono ora disponibili nel core clean-room,
   lasciando fuori lifecycle globale e wiring owner-specific.

---

## Next Step

1. Verificare se il floor su `item + 0x24` serve a evitare divisioni per zero o a mantenere un minimo di activation evidence.
2. Cercare riusi ulteriori del kernel con `xmm4 != 0` per validare il path depletion in contesti diversi.
3. Collegare il generatore LUT al caller clean-room solo quando il wiring owner-specific sara' chiuso.
