# 06 — Formant Synthesis (Parziale)

## Parametri di sintesi

```
FormantsSynth_FundamentalAmp       → ampiezza della fondamentale
FormantsSynth_FundamentalRandom    → randomizzazione fondamentale
FormantsSynth_Subharmonic2Amp      → ampiezza 2o sub-armonico
FormantsSynth_Subharmonic2Random   → randomizzazione 2o sub-armonico
FormantsSynth_Subharmonic3Amp      → ampiezza 3o sub-armonico
FormantsSynth_Subharmonic3Random   → randomizzazione 3o sub-armonico
FormantsSynth_Subharmonic4Amp      → ampiezza 4o sub-armonico
FormantsSynth_Subharmonic4Random   → randomizzazione 4o sub-armonico
FormantsSynth_ConstNoise           → componente di rumore costante
FormantsSynth_PulseDecay           → decadimento impulsi glottali
FormantsSynth_GrowlHiPass          → filtro hi-pass per componente "growl"
FormantsSynth_TimeRandom           → randomizzazione temporale (jitter temporale)
FormantsSynth_WaveNoise            → componente rumore forma d'onda
```

## Spectrum Shaper

### Tipi di envelope

```
MUSpectrumShaperAmpEnvelopeType            → envelope di ampiezza
MUSpectrumShaperFormantEnvelopeType         → envelope dei formanti
MUSpectrumShaperSawAmpsPowEnvelopeType      → envelope saw-amps-pow
MUSpectrumShaperSpectrumDiffPowEnvelopeType → envelope diff-pow dello spettro
```

### Tipi di editing

```
MUSpectrumShaperEditTypeBell      → forma a campana
MUSpectrumShaperEditTypePlateau   → forma a plateau
MUSpectrumShaperEditTypeWave      → forma ad onda
MUSpectrumShaperEditTypeNone      → nessun editing
```

### Tipi di spettro

```
MUSpectrumShaperCommonSpectrumType
MUSpectrumShaperEqualizerBandsSpectrumType
MUSpectrumShaperLowerSpectrumType
MUSpectrumShaperUpperSpectrumType
```

### Classi interne

| Classe | Ruolo |
|--------|-------|
| `MUSpectrumShaperController` | Controller principale |
| `MUSpectrumShaperEnvelope` | Envelope base |
| `MUSpectrumShaperEnvelopeType` | Tipo di envelope (enum base) |
| `MUSpectrumShaperEditType` | Tipo di editing (enum base) |
| `MUSpectrumShaperSpectrum` | Spettro gestito |
| `MUSpectrumShaperSpectrumType` | Tipo di spettro (enum base) |
| `MUSpectrumShaperParameterSet` | Set di parametri |
| `MUSpectrumShaperDisplayInfo` | Info display |
| `MUSpectrumShaperDisplayInfoBuffer` | Buffer info display |
| `MUSpectrumShaperMultipleSelectionHandler` | Handler selezione multipla |
| `MUSpectrumShaperModuleLayouter` | Layout modulo |

### Formatters

```
MUSpectrumShaperAmpPowFormatter                          → formato ampiezza/potenza
MUSpectrumShaperDiffFormatter                            → formato differenza
MUSpectrumShaperGainFormatter                            → formato guadagno
MUSpectrumShaperTiltFormatter                            → formato tilt
MUSpectrumShaperTonalPowFormatter                        → formato potenza tonale
MUSpectrumShaperSpectrumEqualizerBandsCombWidthFormatter  → formato bande EQ
```

### UI Controllers

```
MUSpectrumShaperSpectrumCtrl     → controller dello spettro
MUSpectrumShaperSynthCtrl        → controller della sintesi
MUSpectrumShaperSlider           → slider UI
MUSpectrumShaperSpectrumView     → vista spettro
MUSpectrumShaperEnvelopeView     → vista envelope
MDSpectrumShaperController       → controller display
MDPrefsPlugSpectrumEditorLayoutKey
MDPrefsPlugSpectrumShaperVisibleKey
MDPrefsSpectrumEditorLayoutKey
MDPrefsSpectrumShaperVisibleKey
MDWorkspaceLayoutSpectrum
CMDFeatureSpectrumShaper
```

### Pasteboard Types

```
com.celemony.MUSpectrumShaperEqualizerBandsPboardType
com.celemony.MUSpectrumShaperParameterSetPBoardType
com.celemony.MUSpectrumShaperSpectrumPboardType
```

## Modello di sintesi (ricostruzione ipotetica)

```
Fondamentale (FundamentalAmp + randomizzazione)
    │
    ├──► Sub-armonici 2/3/4 (con amp e random indipendenti)
    │
    ├──► Rumore costante (ConstNoise)
    │
    ├──► Impulsi glottali con decadimento (PulseDecay)
    │
    └──► Growl con filtro hi-pass (GrowlHiPass)
         │
         ▼
    Randomizzazione temporale (TimeRandom)
         │
         ├──► Rumore forma d'onda (WaveNoise)
         │
         ▼
    Spectrum Shaper (envelope shaping)
         │
         ▼
    Output risintetizzato
```

## Da completare

- [x] ~~Analizzare il processing dei parametri `FormantsSynth_*`~~ → deep extraction in `ghidra/output/MikeCore/deep_formant_synth.txt`. 13 parametri completi con tipi.
- [x] ~~Ricostruire il modello di sintesi glottica~~ → modello a blocchi documentato sopra (fondamentale + sub-armonici + noise + pulse decay + growl + time random + wave noise)
- [x] ~~Mappare lo Spectrum Shaper e i suoi tipi di envelope~~ → 65 proprieta' in `reconstructed/structs/MUSpectrumShaper.h`. 155 funzioni decompilate in `reconstructed/clean/MUSpectrumShaper/`. Include envelope params (`_startValue`, `_riseDuration`, `_riseEndValue`, `_decayStartTime`, `_decayFactor`, `_endValue`), 1/f tilt (`_oneByFTiltPow`, `_oneByFDiffPow`), comb filter (`_combStart`, `_combBalance`, `_combWidth`).
- [x] ~~Trovare la funzione di risintesi~~ → MULSSGenerator (Local Synthesis System): 114 funzioni decompilate (170KB) in `reconstructed/clean/MULSSGenerator/`. MULSSComponentRenderer: 21 funzioni (116KB) per il rendering per componente.
