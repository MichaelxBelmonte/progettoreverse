# 13 — INSANE Upgrade Plan: Melodyne-Grade Spectral Engine

**Obiettivo**: Una singola pipeline spettrale pura per TUTTO (vocals, bass, piano, guitar, drums). Zero ML, zero WORLD, zero fallback. Come Melodyne.

**Principio**: Melodyne usa un unico engine per qualsiasi audio. Non ha "stem type routing" — analizza lo spettro e decide da solo se e' mono/poly/percussivo.

---

## Cosa eliminare

TUTTO il vecchio sistema di detection:
- `BasicPitchDetector.h` — ONNX ML → **ELIMINARE**
- `WorldF0Detector.h` — WORLD vocoder → **ELIMINARE**
- `UnifiedConverter.h` — orchestrator vecchio → **ELIMINARE**
- `ConfidenceMerger.h` — mai usato → **ELIMINARE**
- `PolyphonicDetector.h` — mai usato → **ELIMINARE**
- `NoteFusion.h` — mai usato → **ELIMINARE**
- `ViterbiSmoother.h` — mai usato → **ELIMINARE**
- `PitchDetector.h` (YIN) — mai usato → **ELIMINARE**
- `SpectralValidator.h` — validava note ML → **ELIMINARE**
- `AudioToMidi.h` — legacy → **ELIMINARE**
- `detectDrums()` inline in EnhancedMidiGenerator → **ELIMINARE**

Dipendenze CMake da rimuovere:
- `ENABLE_ONNX` + ONNX Runtime (90MB) → **ELIMINARE**
- `ENABLE_WORLD` + WORLD library → **ELIMINARE**
- `libsamplerate` (usata per resample ONNX) → **ELIMINARE**
- `KissFFT` (usata da WORLD) → **ELIMINARE**

**Resta**: JUCE (ha FFT builtin), RubberBand (per time stretch fino a Fase 7).

## Cosa tenere

- `PartialTracker.h` — refactored come base del nuovo engine
- `MidiNote.h` → esteso a `SpectralNote`
- `EnhancedMidiGenerator.h` → semplificato radicalmente (un solo path)
- `BeatAnalyzer.h` — BPM detection ortogonale
- PianoRoll, NoteStore, ProjectState, undo system — tutto invariato
- RubberBandProcessor — per pitch shift/time stretch base (fino a resintesi custom)

---

## Pipeline unica

```
Audio (qualsiasi contenuto)
    │
    ▼
STFTEngine
    sqrt-Hann window, dual FFT (freq reassignment)
    Output: vector<SpectralTimeSlice>
    │
    ▼
PeakExtractor
    Local maxima + parabolic interpolation
    Frequenza da trueFreqData (reassigned)
    Output: peaks per frame
    │
    ▼
PartialTracker
    McAulay-Quatieri peak tracking
    Gap bridging, birth/death
    Output: Partial tracks (freq + amp + phase over time)
    │
    ▼
ContentAnalyzer ← NUOVO (sostituisce stem type routing)
    Analizza le partials per determinare:
    - _isPercussive (transiency alta, tonality bassa)
    - _isPolyphonic (multiple F0 simultanee)
    - _allTonality (quanto e' tonale il materiale)
    - _allMonophony (quanto e' monofonico)
    Decide automaticamente il path come Melodyne
    │
    ├── Percussivo → AttackDetector (onset-based, no pitch)
    │     Output: drum hits con timing + velocity + spectral band
    │
    ├── Monofonico → HarmonicGrouper (single voice tracking)
    │     Output: note chain con pitchCurve continua
    │
    └── Polifonico → EnergyClaims
          PitchRelevanceMatrix → iterative separation
          Output: note separate con energy assignment
    │
    ▼
NoteBuilder
    Per ogni nota: pitch, amplitude envelope, formant,
    attack shape, sibilant balance, vibrato, drift
    Output: vector<SpectralNote>
    │
    ▼
QualityScorer
    50+ metriche → nota reale vs artefatto
    Output: SpectralNote con quality scores
    │
    ▼
NoteStore → PianoRoll → MIDI Export
```

---

## FASE 0 — Pulizia radicale (1 giorno)

### 0.1 Rimuovere tutto il vecchio

```bash
# Da Source/Audio/ — eliminare:
rm BasicPitchDetector.h WorldF0Detector.h UnifiedConverter.h
rm ConfidenceMerger.h PolyphonicDetector.h NoteFusion.h
rm ViterbiSmoother.h PitchDetector.h SpectralValidator.h
rm AudioToMidi.h
```

### 0.2 Semplificare CMakeLists.txt

Rimuovere:
- FetchContent per ONNX Runtime
- FetchContent per WORLD
- FetchContent per libsamplerate
- FetchContent per KissFFT
- Tutti i flag `ENABLE_ONNX`, `ENABLE_WORLD`, `HAVE_ONNX`, `HAVE_WORLD`

### 0.3 Semplificare EnhancedMidiGenerator

Da 1130 righe con 4 path + fallback chain → ~100 righe con un solo path:

```cpp
class MidiGenerator {
public:
    GenerationResult generate(const std::vector<float>& audio,
                              double sampleRate, NoteStore& store) {
        SpectralDetector detector;
        detector.setConfig(config);
        auto notes = detector.detect(audio, sampleRate);
        
        // Quality filter
        notes.erase(std::remove_if(notes.begin(), notes.end(),
            [&](const SpectralNote& n) { return n.combinedQuality < config.minQuality; }),
            notes.end());
        
        // Add to store
        store.beginBatchOperation();
        for (auto& note : notes)
            store.addNote(note.toMidiNote());
        store.endBatchOperation();
        
        return result;
    }
};
```

### 0.4 MainComponent

Rimuovere tutto il routing per stem name (`nameLower.contains("vocal")` etc.). Un solo call:

```cpp
auto result = generator.generate(audioData.samples, audioData.sampleRate, tempStore);
```

Il `ContentAnalyzer` dentro la pipeline decide automaticamente cosa fare.

### 0.5 Nuova struttura Source/Audio/

```
Source/Audio/
    SpectralDetector.h          — orchestrator unico
    SpectralTimeSlice.h         — frame di analisi (8 campi)
    STFTEngine.h                — sqrt-Hann + dual FFT
    PeakExtractor.h             — peak finding
    PartialTracker.h            — McAulay-Quatieri (refactored)
    ContentAnalyzer.h           — mono/poly/percussive detection
    HarmonicGrouper.h           — F0 estimation + sub-harmonic chains
    EnergyClaims.h              — polyphonic separation
    AttackDetector.h            — onset/transient detection
    NoteBuilder.h               — costruisce SpectralNote
    QualityScorer.h             — 50+ metriche
    SpectralNote.h              — nota ricca (33+ campi)
    RubberBandProcessor.h       — TENUTO per pitch shift (fino a Fase 7)
    BeatAnalyzer.h              — TENUTO per BPM
```

---

## FASE 1 — STFTEngine + SpectralTimeSlice (3 giorni)

### SpectralTimeSlice
```cpp
struct SpectralTimeSlice {
    int binCount = 0;
    std::vector<float> magnitudeData;
    std::vector<float> phaseData;
    std::vector<float> trueFreqData;         // Frequency reassignment
    std::vector<float> tonalityData;         // 0=noise 1=tonal
    std::vector<float> transiencyData;       // Transient energy
    std::vector<std::complex<float>> complexSpectrum;
};
```

### STFTEngine
- sqrt-Hann window (non Hann — `w[i] = sqrt(0.5 * (1 - cos(2π*i/N)))`)
- Dual FFT per frequency reassignment
- Tonality = autocorrelazione locale dello spettro (bin tonali vs rumore)
- Transiency = differenza di energia tra frame consecutivi

**Test**: sinusoide 440 Hz → `trueFreqData[bin]` = 440.0 ± 0.1 Hz

---

## FASE 2 — PartialTracker + PeakExtractor + HarmonicGrouper (4 giorni)

Refactor dell'esistente `PartialTracker.h`:
- Input cambia da `float[] audio` a `vector<SpectralTimeSlice>`
- Peak extraction usa `trueFreqData` (non piu' phase diff interna)
- Partial contiene anche phase e tonality per frame
- HarmonicGrouper estratto come classe separata

**Test**: due sinusoidi (440 + 880 Hz) → 2 partials → 1 HarmonicGroup con F0=440

---

## FASE 3 — ContentAnalyzer + AttackDetector + NoteBuilder (3 giorni)

### ContentAnalyzer
Analizza i primi N frame e determina:
```cpp
struct ContentType {
    float tonality;      // 0-1 (da media tonalityData)
    float percussivity;  // 0-1 (da media transiencyData)
    float monophony;     // 0-1 (quante F0 simultanee)
    int estimatedVoices; // 1-N
    
    bool isPercussive() const { return percussivity > 0.7f && tonality < 0.3f; }
    bool isMonophonic() const { return monophony > 0.8f; }
};
```

Come Melodyne: `_isPercussive`, `_isPolyphonic`, `_allTonality`, `_allMonophony` (tutti in MUElementAnalyzer).

### NoteBuilder
Costruisce `SpectralNote` con tutti i 33+ campi da Melodyne `PitchDetection`.

**Test**: audio monofonico → SpectralNote con pitchCurve, amplitudeEnvelope, attackDuration compilati

---

## FASE 4 — EnergyClaims (polyphonic separation) (5 giorni)

L'algoritmo DNA2 di Melodyne:
1. Calcola `PitchRelevanceMatrix` (tempo × cent bins)
2. Trova il pitch piu' forte
3. Assegna energy claims (bin appartenenti a questa nota)
4. Sottrai energia dalla matrice
5. Ripeti

**Test**: accordo C major (C4+E4+G4) → 3 note separate con pitch corretto

---

## FASE 5 — QualityScorer (2 giorni)

10+ metriche iniziali (dalle 50+ di Melodyne):
- `pitchCenterQuality` — stabilita' pitch
- `harmonicHitQuality` — armonici presenti
- `harmonicRatioQuality` — rapporti corretti
- `attackQuality` — chiarezza attacco
- `separationQuality` — isolamento
- `combinedQuality` — score aggregato → diventa `confidence`

---

## FASE 6 — PianoRoll integration (2 giorni)

- Blob con pitchCurve (gia' supportato)
- Quality indicator (bordo colorato)
- Nuovi parametri editabili per nota (formant, drift, sibilance)
- MIDI export da SpectralNote

---

## FASE 7 — Resintesi additiva (5+ giorni, opzionale)

Sostituire RubberBand con sintetizzatore additivo da partials. Come MULSSGenerator di Melodyne.

---

## Risultato finale

```
PRIMA (INSANE attuale):
  4 engine diversi (BasicPitch, WORLD, YIN, drums)
  90MB di dipendenze (ONNX Runtime)
  Routing complesso per stem type
  Note piatte (pitch + time + velocity)

DOPO:
  1 engine spettrale (come Melodyne)
  0 dipendenze ML
  Auto-detection del contenuto
  Note ricche (33+ parametri: formant, vibrato, sibilance, attack shape)
  Separazione polifonica via energy claims
  Quality scoring multi-dimensionale
```
