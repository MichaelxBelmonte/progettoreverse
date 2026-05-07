# 04 — DNA Algorithm — Direct Note Access

## Versioni

| Versione | Evidenza | Note |
|----------|----------|------|
| DNA1 | `_useDNA2ForPolyphonicDetection` (flag di switch) | Legacy, monofonico |
| DNA2 | `DNA2Test_*` (14 parametri di test) | Attuale per polifonico |
| DNA3 | `MUSpectralPointDNA3` | In sviluppo o specializzato |

## Parametri DNA2

```
DNA2Test_UseDNA2                         → abilita DNA2 vs DNA1
DNA2Test_UseStackedFft                   → FFT multi-risoluzione (stacked)
DNA2Test_UseEnergyClaim                  → sistema claim energetici per separazione
DNA2Test_UseEQ                           → equalizzazione interna
DNA2Test_DetectMonophonic                → branch detection monofonico
DNA2Test_DetectBluesHarp                 → detection specializzato per armonica
DNA2Test_DetectBluesHarpMultiplePaths    → multiple path tracking per armonica
DNA2Test_DetectBluesHarpSubharmonicsMode → gestione sub-armonici
DNA2Test_SeparateRaspiness               → separazione componente rumorosa/raspy
DNA2Test_DisplayedHarmonic               → debug: quale armonico visualizzare
DNA2Test_ShowNormalized                  → debug: visualizza normalizzato
DNA2Test_ShowQuality                     → debug: visualizza quality score
DNA2Test_ShowRelevance                   → debug: visualizza relevance
DNA2Test_ShowRelativeRelevance           → debug: relevance relativa
DNA2Test_WriteNoiseFiles                 → debug: scrivi file rumore separato
DNA2Test_TestValue1..5                   → parametri sperimentali generici
```

## MUElementAnalyzer — Il Motore di Detection

### MUElementAnalyzerEngine

Calcolo matematico puro:
- `calcRmsAndDCData` — calcola RMS ed offset DC
- `findAmpEnvelope` — trova l'inviluppo di ampiezza

### Pipeline

```
MUElementAnalyzer
    │
    ├──► findPolyphonicDetectionItems()
    │        Trova elementi di detection polifonica
    │        Usa: _pitchMatrix, _relevanceMatrix, _spectralPointsAtSlices
    │
    ├──► makeMonophonicItems()
    │        Crea elementi monofonici dalla detection
    │        Usa: anchorSampleOffset, principalItem
    │
    ├──► _findMonophonicPitchInFrequencyDomain
    │        Pitch detection monofonico nel dominio della frequenza
    │
    ├──► separateAttacksInTimeDomain
    │        Separazione degli attacchi nel dominio del tempo
    │
    └──► detectAfterTransfer
             Detection dopo un trasferimento ARA
```

### Strutture dati centrali

```
_pitchMatrix                    → matrice 2D: tempo × pitch (cents)
_pitchMatrixPeaks               → picchi nella matrice pitch
_pitchMatrixTimePosCount        → numero colonne temporali
_relevanceMatrix                → matrice di rilevanza per ogni candidato
_relevancePeaks                 → picchi nella matrice di rilevanza
_spectralPointsAtSlices         → punti spettrali per ogni time slice
_harmonicPaths                  → percorsi armonici tracciati
_subharmonicChains              → catene di sub-armonici
_subharmonicPaths               → percorsi sub-armonici
_energyClaimFactor              → fattore di energy claim
_timeSliceCount                 → numero totale di time slices
_timeSliceSampleCount           → campioni per time slice
_timeSliceTimeDistance           → distanza temporale tra slices
```

## Polyphonic vs Monophonic Detection

Switch dinamico:

```
_analyzerCanSwitchToPolyphonicDetection     → il materiale lo permette?
_analyzerDidSwitchToPolyphonicDetection     → ha gia' switchato?
_allowAutomaticPolyphonicDetection          → l'utente lo permette?
_useDNA2ForPolyphonicDetection              → usa DNA2 per il polifonico

_detectionMinPitchCent                      → pitch minimo (cents)
_detectionMaxPitchCent                      → pitch massimo
_detectionCycleSizeCent                     → dimensione ciclo in cents
_detectionIsCyclic                          → detection ciclica?
_detectionInsertsChromaticIntervals         → inserisce intervalli cromatici
```

Flusso:
1. Analyzer inizia in modo monofonico
2. Se rileva piu' pitch simultanei → `_analyzerCanSwitchToPolyphonicDetection` = true
3. Se `_allowAutomaticPolyphonicDetection` attivo → switch automatico
4. Attiva `_useDNA2ForPolyphonicDetection` per pipeline DNA2

## Pitch Relevance Matrix

Due versioni (algoritmo iterativo):

```
_polyPitchRelevanceMatrixOriginal    → matrice originale
_polyPitchRelevanceMatrixExtracted   → dopo estrazione note
```

Algoritmo:
1. Calcola matrice di rilevanza pitch
2. Estrai la nota piu' forte
3. Sottrai energia dalla matrice
4. Ripeti finche' non ci sono note significative

Coerente con "energy claims" — ogni nota sottratta rivela le note nascoste.

## Flow completo

```
Audio input (time domain)
    │
    ▼
initFromTimeSignal()
    │
    ├──► Stacked FFT (multi-risoluzione)
    │        ├──► complexSpectrum
    │        ├──► magnitudeData
    │        └──► phaseData
    │
    ├──► Tonality Analysis → tonalityData
    ├──► Transient Detection → transiencyData
    ├──► Frequency Reassignment → trueFreqData
    │
    ▼
DNA2 Polyphonic Detection
    │
    ├──► Energy Claim System
    ├──► Subharmonic Chain Tracking
    ├──► Harmonic Ratio Quality
    ├──► Pitch Relevance Matrix (Original → Extracted)
    │
    └──► Separation
             ├──► MUAudioSourceItem (note)
             ├──► MUAudioSourceAttackItem (attacchi)
             └──► MUAudioSourceSibilanceItem (sibilanti)
```

## Stringhe DNA nel binario

Totale: **24 stringhe** contenenti "DNA" nel Core:
- 21 parametri `DNA2Test_*` (inclusi 5 `TestValue1..5`)
- 1 stringa UI: `"DNA2 Test"`
- 1 flag: `_useDNA2ForPolyphonicDetection`
- 1 classe DNA3: `MUSpectralPointDNA3`
- 1 label: `"Use DNA2"`

Non ci sono riferimenti a "DNA1" come stringa esplicita — la versione legacy e' implicita (e' il fallback quando `_useDNA2ForPolyphonicDetection` e' false).

## Da completare

- [x] ~~Disassembly di `assignEnergyClaimsInSampleRange()`~~ → decompilato a `reconstructed/clean/MUElementAnalyzer/013903d0.c` (5999 bytes). La firma decompilata a 4 parametri e' fuorviante: il corpo reale usa out-wrapper, context/state, list-ref, range sample `start + length`, due float per callback/value mapping e due argomenti stack aggiuntivi. Opera su liste di oggetti e invoca `013924d0` per-slice.
- [x] ~~Ricostruzione del sistema di energy claims~~ → struct EnergyClaimSystem estratta con 11 proprieta' (`_energyClaimFactor: float`, `_feedsbackEnergyClaimFactor: bool`, `_pixelPerCent: float`, etc.) in `reconstructed/structs/EnergyClaimSystem.h`
- [x] ~~Analisi di `_energyRawMatrix`~~ → proprieta' `float* _energyRawMatrix` trovata in MUElementAnalyzer (106 proprieta' totali in `reconstructed/structs/MUElementAnalyzer.h`)
- [x] ~~Tracciamento sub-armonici~~ → deep extraction in `ghidra/output/MikeCore/deep_subharmonic_chain.txt`. Funzioni decompilate in MUElementAnalyzer.
- [x] ~~Analisi di `MUVoiceAnalyzer`~~ → decompilato come MUVoiceMapper: 5 funzioni (6772 bytes) in `reconstructed/clean/MUVoiceMapper/`
- [x] ~~Analisi delle classi `MUPitchMapper`, `MUPitchClassMapper`, `MUPartMapper`~~ → decompilati: MUPitchMapper (9 funcs, 72KB), MUPitchClassMapper (5 funcs, 24KB), MUPart (2 funcs, 8KB) in `reconstructed/clean/`
