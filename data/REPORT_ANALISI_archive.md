# Reverse Engineering Report — MikeCore + VST3 Wrapper

**Data:** 2026-03-22 (ultimo aggiornamento)
**Binari analizzati:**
- `mike` (VST3 wrapper) — 214 KB, Mach-O Universal (x86_64 + arm64)
- `MikeCore` (DSP engine) — 43 MB, Mach-O x86_64
- `default.metallib` — 5.6 KB, Metal shader library

**Strumenti:** Ghidra 12.0.4 headless analysis, `nm`, `strings`, `objdump`

### Indice

1. [Architettura](#1-architettura)
2. [Naming Convention interna](#2-naming-convention-interna)
3. [DNA Algorithm — Direct Note Access](#3-dna-algorithm--direct-note-access)
4. [Sistema di Quality Scoring](#4-sistema-di-quality-scoring)
5. [Formant Synthesis](#5-formant-synthesis)
6. [Strutture dati principali](#6-strutture-dati-principali)
7. [GPU Compute (Metal)](#7-gpu-compute-metal)
8. [Licensing/DRM](#8-licensingdrm)
9. [Stato di avanzamento e prossimi passi](#9-stato-di-avanzamento-e-prossimi-passi)
10. [API Offuscata Wrapper → Core](#10-api-offuscata-wrapper--core)
11. [MUElementAnalyzer — Il Motore di Detection](#11-muelementanalyzer--il-motore-di-detection)
12. [FFT Implementation — Analisi Completa](#12-fft-implementation--analisi-completa)
13. [Polyphonic vs Monophonic Detection](#13-polyphonic-vs-monophonic-detection)
14. [Pitch Relevance Matrix](#14-pitch-relevance-matrix)
15. [Quality Variables Complete Map](#15-quality-variables-complete-map)

---

## 1. Architettura

### VST3 Wrapper (`mike`)

Il wrapper è un thin bridge che espone solo 3 simboli:

| Simbolo | Ruolo |
|---------|-------|
| `GetPluginFactory` | Entry point VST3 standard — la DAW chiama questa funzione per istanziare il plugin |
| `bundleEntry` | Inizializzazione del bundle al caricamento |
| `bundleExit` | Cleanup alla chiusura |

Il wrapper carica dinamicamente il Core cercando questi nomi all'interno del bundle `.sbb`:

```
Core-5.4.2.006.sbb    → MikeCore (release)
CoreF-5.4.2.006.sbb   → MikeCoreF (variante float/single-precision)
```

Il wrapper supporta **ARA** (Audio Random Access) — il protocollo Celemony per comunicazione bidirezionale con la DAW. Non è un semplice stream audio: ARA consente accesso casuale ai campioni, essenziale per l'analisi offline del materiale audio prima del playback.

Stringhe rilevanti:
```
VST 3.7
com.celemony.melodyne.vst3
ARA Main Factory
Audio Module Class
```

### MikeCore (engine)

Binario monolitico x86_64 (gira via Rosetta 2 su Apple Silicon). Contiene:
- DSP core (analisi spettrale, pitch detection, risintesi)
- GUI (Cocoa/AppKit)
- Networking e licensing (OpenSSL, Boost, CFNetwork)
- Audio I/O (CoreAudio, AudioToolbox, AVFoundation)
- GPU compute (Metal, MetalKit)

Framework linkati:
```
Cocoa, Accelerate, Security, IOKit, QuartzCore,
Metal, MetalKit, AVFoundation, AudioToolbox,
AudioUnit, CoreAudio, CoreMIDI, CoreFoundation,
AppKit, CoreGraphics, CoreText, Foundation, ImageIO
```

---

## 2. Naming Convention interna

| Prefisso | Significato | Scope |
|----------|-------------|-------|
| `MU*` | Music/Math Unit | Core DSP, algoritmi, strutture musicali |
| `MD*` | Melodyne Document/Display | UI, controller, prefs, workspace |
| `GN*` | General/Generic | Framework base (audio I/O, file, UI toolkit) |
| `CM*` | Crypto/DRM | Licensing (CMS/PKCS7, OpenSSL wrappers) |

---

## 3. DNA Algorithm — Direct Note Access

### Versioni

Il codice contiene riferimenti a tre generazioni dell'algoritmo:

| Versione | Evidenza | Note |
|----------|----------|------|
| DNA1 | `_useDNA2ForPolyphonicDetection` (flag di switch) | Versione legacy, probabilmente monofonico |
| DNA2 | `DNA2Test_*` (14 parametri di test) | Versione attuale per polifonico |
| DNA3 | `MUSpectralPointDNA3` | Possibile versione in sviluppo o specializzata |

### Parametri DNA2

```
DNA2Test_UseDNA2                         → abilita DNA2 vs DNA1
DNA2Test_UseStackedFft                   → FFT multi-risoluzione (stacked)
DNA2Test_UseEnergyClaim                  → sistema di claim energetici per separazione
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
DNA2Test_WriteNoiseFiles                 → debug: scrivi file di rumore separato
DNA2Test_TestValue1..5                   → parametri sperimentali generici
```

### Pipeline di analisi

La classe cardine e' **`MUSpectralTimeSlice`** — rappresenta un singolo frame di analisi spettrale. I dati contenuti in ogni frame:

```
┌─────────────────────────────────────────────────────────────────┐
│                    MUSpectralTimeSlice                          │
├─────────────────────────────────────────────────────────────────┤
│ complexSpectrum          → FFT complessa (Re + Im)             │
│ magnitudeData            → |FFT| ampiezza per bin              │
│ phaseData                → arg(FFT) fase per bin               │
│ tonalityData             → quanto e' "tonale" ogni bin (0-1)   │
│ transiencyData           → mappa transienti/attacchi           │
│ trueFreqData             → frequenze reassigned (phase vocoder)│
│ trueTimeSampleOffsetData → offset temporali sub-campione       │
└─────────────────────────────────────────────────────────────────┘
```

Il metodo `initFromTimeSignal()` e' il punto d'ingresso: riceve il segnale nel dominio del tempo e popola tutti i campi spettrali. Richiede un `neighbourTimeSlice` per calcolare `trueFreqData` (necessita di due frame adiacenti per il phase difference).

### Flow completo ricostruito

```
Audio input (time domain)
    │
    ▼
initFromTimeSignal()
    │
    ├──► Stacked FFT (multi-risoluzione)
    │        │
    │        ├──► complexSpectrum
    │        ├──► magnitudeData
    │        └──► phaseData
    │
    ├──► Tonality Analysis
    │        └──► tonalityData (separa tonale da rumore)
    │
    ├──► Transient Detection
    │        └──► transiencyData (identifica attacchi)
    │
    ├──► Frequency Reassignment
    │        ├──► trueFreqData (frequenze precise inter-bin)
    │        └──► trueTimeSampleOffsetData
    │
    ▼
DNA2 Polyphonic Detection
    │
    ├──► Energy Claim System
    │        (ogni nota candidate "reclama" energia dallo spettro)
    │
    ├──► Subharmonic Chain Tracking
    │        (traccia catene di sub-armonici per disambiguare)
    │
    ├──► Harmonic Ratio Quality
    │        (valuta quanto i parziali matchano la serie armonica)
    │
    ├──► Pitch Relevance Matrix
    │        ├──► _polyPitchRelevanceMatrixOriginal
    │        └──► _polyPitchRelevanceMatrixExtracted
    │
    └──► Separation
             ├──► Note individuali (MUAudioSourceItem)
             ├──► Attack detection (MUAudioSourceAttackItem)
             └──► Sibilance detection (MUAudioSourceSibilanceItem)
```

---

## 4. Sistema di Quality Scoring

Melodyne assegna a ogni nota/detection un punteggio di qualita' multi-dimensionale. Queste sono le metriche identificate:

### Pitch Quality
| Metrica | Descrizione |
|---------|-------------|
| `_pitchCenterQuality` | Stabilita' del pitch nel tempo |
| `_pitchHarmonicQuality` | Corrispondenza con la serie armonica |
| `_pitchQualityWeight` | Peso nel ranking finale |
| `_pitchRelevanceSampleOffset` | Offset per la rilevanza pitch |

### Harmonic Quality
| Metrica | Descrizione |
|---------|-------------|
| `_harmonicHitQuality` | Quanti armonici attesi sono presenti |
| `_harmonicRatioQuality` | Rapporto ampiezza tra armonici |
| `_correlationQuality` | Autocorrelazione |
| `_subharmonicChains` | Catene di sub-armonici rilevate |
| `_subharmonicPaths` | Percorsi di tracking sub-armonici |

### Rhythmic Quality
| Metrica | Descrizione |
|---------|-------------|
| `_attackQuality` | Qualita' del riconoscimento dell'attacco |
| `_allAttackPeakQuality` | Qualita' di tutti i picchi d'attacco |
| `_allRhythmicQuality` | Qualita' ritmica complessiva |
| `_beatMatchingQuality` | Corrispondenza con il beat |
| `_beatMatchingWeightedQuality` | Corrispondenza pesata |

### Separation Quality
| Metrica | Descrizione |
|---------|-------------|
| `_separationQuality` | Qualita' della separazione polifonica |
| `_combiningQuality` | Qualita' nel ri-combinare i parziali |
| `_envelopeRatioQuality` | Rapporto envelope atteso/trovato |

### Other
| Metrica | Descrizione |
|---------|-------------|
| `_vibratoQuality` | Riconoscimento vibrato |
| `_portamentoQuality` | Riconoscimento portamento/glide |
| `_beatingQuality` | Riconoscimento beating tra note vicine |
| `_chordQuality` | Qualita' nel riconoscimento accordi |
| `_detectionQuality` | Score complessivo di detection |

---

## 5. Formant Synthesis

Il sistema di risintesi dei formanti ha parametri granulari:

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
FormantsSynth_PulseDecay           → decadimento degli impulsi glottali
FormantsSynth_GrowlHiPass          → filtro hi-pass per la componente "growl"
```

Il Spectrum Shaper opera con diversi tipi di envelope:
```
MUSpectrumShaperAmpEnvelopeType
MUSpectrumShaperFormantEnvelopeType
MUSpectrumShaperSawAmpsPowEnvelopeType
MUSpectrumShaperSpectrumDiffPowEnvelopeType
```

E diversi tipi di editing dello spettro:
```
MUSpectrumShaperEditTypeBell
MUSpectrumShaperEditTypePlateau
MUSpectrumShaperEditTypeWave
MUSpectrumShaperEditTypeNone
```

---

## 6. Strutture dati principali

### MUAudioSourceItem

Rappresenta una singola "nota" o "blob" nel display di Melodyne:

```
MUAudioSourceItem
    ├── MUAudioSourceItemHarmonicSpectrum  → spettro armonico della nota
    ├── MUAudioSourceAttackItem            → parametri dell'attacco
    ├── MUAudioSourceSibilanceItem         → componente sibilante
    ├── MUAudioSourcePropertyPoint         → punti di proprieta' editabili
    └── MUAudioSourceElement               → elemento base
```

### MUAudioSourceDescription

Metadati e separazione:

```
MUAudioSourceDescription
    ├── DescriptionType                    → tipo (melodico, percussivo, polifonico)
    ├── SeparationEntry                    → entry di separazione
    ├── StretchMode                        → modalita' time-stretch
    └── FinalizationJob                    → job di finalizzazione
```

Tipi di descrizione:
```
MUPolyphonicDescriptionType              → polifonico pitched
MUPolyphonicUnpitchedDescriptionType     → polifonico unpitched
MUPercussiveDescriptionType              → percussivo
```

### MUAraAudioSource

Interfaccia ARA verso la DAW:

```
MUAraAudioSource
    ├── MUAraAudioModification
    ├── MUAraAudioPlaybackRegion
    ├── MUAraMusicalContext
    │       └── SequenceTrack
    ├── MUAraContentNoteEntry
    ├── MUAraNotesContentReader
    └── MUAraTempoEntriesContentReader
```

---

## 7. GPU Compute (Metal)

Il file `default.metallib` (5.6 KB) contiene shader Metal. Le dimensioni ridotte suggeriscono kernel semplici e ottimizzati — probabilmente:
- FFT butterfly o partial FFT su GPU
- Operazioni parallele su magnitudeData/phaseData
- Possibile accelerazione del calcolo di relevance matrix

**Nota:** Per disassemblare il metallib serve Xcode completo (`xcrun metal-objdump -d`). Al momento sono installati solo i Command Line Tools.

---

## 8. Licensing/DRM

Il binario contiene una copia completa di OpenSSL e un sistema di licensing basato su:
- `CMS_EnvelopedData` (PKCS#7 encrypted data)
- `pace` namespace (Boost-based) — PACE Anti-Piracy / iLok
  - `pace::MachineId`
  - `pace::MachineBinding`
  - `pace::PaceException`

---

## 9. Stato di avanzamento e prossimi passi

### Completate

- [x] **Fase A — Wrapper VST3**: meccanismo di caricamento ricostruito, API offuscata a 5 funzioni identificata (sezione 10)
- [x] **Fase B — Entry points Core**: MUElementAnalyzer, MUSpectralTimeSlice, pipeline detection mappata (sezione 11)
- [x] **Fase C — FFT**: implementazione basata su Apple vDSP, 11 dimensioni supportate (16-16384), dual FFT, processing loop SSE (sezione 13)

### Da completare

#### Fase D — DNA2 Energy Claims (prossimo step)

1. Partire da `_energyClaimFactor` e `_energyRawMatrix`
2. Tracciare `assignEnergyClaimsInSampleRange()` nel disassembly
3. Ricostruire il sistema di Energy Claims:
   - Come le note candidate reclamano energia
   - Come si risolvono i conflitti
   - Come vengono tracciate le catene di sub-armonici (`_subharmonicChains`, `_subharmonicPaths`)
4. Analizzare la `_polyPitchRelevanceMatrixOriginal` → `_polyPitchRelevanceMatrixExtracted` (algoritmo iterativo)

#### Fase E — Formant Synthesis

1. Analizzare il processing dei parametri `FormantsSynth_*`
2. Ricostruire il modello di sintesi glottica (fondamentale + sub-armonici + rumore)
3. Mappare lo Spectrum Shaper e i suoi tipi di envelope

#### Fase F — Metallib dump (richiede Xcode)

```bash
xcrun metal-objdump -d ~/Desktop/Progetto_Reverse_Mike/default.metallib > ~/Desktop/Progetto_Reverse_Mike/shader_dump.txt
```

#### Fase G — Prototipo

Una volta ricostruiti FFT + DNA2 + quality scoring:
1. Implementare un prototipo in Python per validare la comprensione
2. Confrontare i risultati con l'output di Melodyne su file di test noti
3. Portare in C++ per integrazione nel plugin INSANE

---

## 10. API Offuscata Wrapper → Core

Il wrapper non chiama funzioni con nomi leggibili. Usa **hash esadecimali a 12 caratteri** come nomi di funzione — un layer di offuscamento per rendere piu' difficile il reverse engineering.

### Sequenza di caricamento

```
1. Wrapper cerca Core.sbb in due posizioni:
   - ../../PlugIns/Melodyne.appex/Contents/Resources/Core.sbb
   - /Library/Application Support/Celemony/Bundles/Core-5.4.2.006.sbb

2. CFBundleCreate() → carica il bundle .sbb
3. CFBundleLoadExecutable() → carica il binario Mach-O
4. CFBundleGetFunctionPointerForName() × 5 → risolve le funzioni:
```

### Le 5 funzioni dell'API segreta

| Hash (nome offuscato) | Indirizzo nel Core | Tipo | Ipotesi |
|------------------------|-------------------|------|---------|
| `E47C2F6A98B9` | 0x15710 | Thin wrapper → jmp 0x1f4a320 | **GetFactory** — prima funzione risolta, probabilmente ritorna il plugin factory |
| `C869701EF43D` | 0x13ad0 | Funzione grossa (0x1C00 bytes, stack 0x468) | **Initialize** — alloca 1KB di stack, legge parametri dal bundle path, inizializza il Core |
| `D1B1BBF33E6C` | 0x15720 | Thin wrapper → jmp 0xbce740 | **CreateInstance** — crea un'istanza del processore |
| `F998CFF24768` | 0x15730 | Thin wrapper → jmp 0xbd0100 | **GetInfo** — ritorna informazioni sul plugin |
| `C8C6A8649030` | 0x15740 | Thin wrapper → jmp 0x16ace20 + singleton pattern | **GetSharedState** — ritorna stato condiviso (ha guard per inizializzazione once) |

Nota: `C869701EF43D` e' la piu' complessa — alloca 0x468 (1128) byte sullo stack, verifica il path del bundle, e inizializza lo stato globale. Le altre 4 sono thin wrapper che fanno un singolo `jmp` a funzioni interne.

### Ordine di risoluzione e storage

Il wrapper salva i 5 puntatori a funzione in posizioni fisse nella sezione dati:

```
[base + 0x8e0] ← E47C2F6A98B9 (GetFactory)
[base + 0x8d8] ← C869701EF43D (Initialize) — prima funzione chiamata dopo il load
[base + 0x8e8] ← D1B1BBF33E6C (CreateInstance)
[base + 0x8f0] ← F998CFF24768 (GetInfo)
[base + 0x8f8] ← C8C6A8649030 (GetSharedState)
```

Se una qualsiasi risoluzione fallisce (ritorna NULL), il caricamento viene abortito e `GetPluginFactory` ritorna NULL alla DAW.

Dopo aver risolto tutte le funzioni, il wrapper chiama immediatamente `C869701EF43D(arg0, arg1)` per inizializzare il Core. Se questa ritorna 0, l'intero caricamento fallisce.

### Sequenza completa di avvio

```
DAW chiama GetPluginFactory()
    │
    ├──► Singleton check: factory gia' creata? → ritorna cached
    │
    └──► Prima chiamata:
         │
         ├──► Cerca Core.sbb (2 posizioni)
         │    1. ../../PlugIns/Melodyne.appex/Contents/Resources/Core.sbb
         │    2. /Library/Application Support/Celemony/Bundles/Core-5.4.2.006.sbb
         │
         ├──► CODE SIGNING VERIFICATION
         │    1. Costruisce stringa di requisiti con valori offuscati
         │       (calcoli aritmetici per produrre i byte della stringa)
         │    2. SecRequirementCreateWithString() → crea il requisito
         │    3. Verifica la firma del Core.sbb
         │    4. Se fallisce: retry loop (thread_switch con delay 0xC8)
         │       fino a esaurimento tentativi
         │
         ├──► CFBundleCreate() → carica il bundle .sbb
         │
         ├──► CFBundleLoadExecutable() → carica il Mach-O
         │
         ├──► Risolve 5 funzioni per hash (CFBundleGetFunctionPointerForName × 5)
         │
         ├──► C869701EF43D(arg0, arg1) → Initialize Core
         │
         ├──► Alloca factory (16 bytes: vtable ptr + refcount = 1)
         │
         └──► Ritorna factory alla DAW
```

### UUID / GUID

```
5653544D6C70676D656C6F64796E6520 = "VSTMlpgmelodyne " (ASCII)
  ├── "VSTM"     = VST Module identifier
  ├── "lpg"      = plugin group (Celemony internal)
  └── "melodyne " = plugin name + padding

543305DE-E055-444A-B82A-1AA0F241A68E = Controller FUID (VST3 class ID)
```

Il primo e' il **Processor Component ID** (identifica il processore audio), il secondo e' il **Controller ID** (identifica l'interfaccia utente). La DAW li usa per istanziare le due parti del plugin.

### Struttura interna del wrapper

Il wrapper contiene **98 funzioni** (symbol-stripped) che implementano le interfacce C++ VST3 + ARA:
- `IComponent` — ciclo di vita del plugin
- `IAudioProcessor` — processing audio (process(), setupProcessing(), etc.)
- `IEditController` — parametri e UI
- `ARA::IMainFactory` — factory per ARA
- `ARA::IDocumentController` — gestione documenti ARA

Con **384 chiamate virtuali** (vtable dispatch), il wrapper delega tutto al Core attraverso le 5 funzioni hash. Non c'e' nessuna logica DSP nel wrapper — e' un puro proxy.

### Audio buffer flow

Il wrapper NON manipola i buffer audio. Il flusso e':
1. DAW chiama `IAudioProcessor::process(ProcessData&)` sul wrapper
2. Il wrapper fa vtable dispatch attraverso una delle 5 funzioni risolte
3. Il Core riceve direttamente i puntatori ai buffer audio della DAW
4. Il Core processa in-place o scrive nell'output buffer
5. Il controllo ritorna alla DAW

Questo spiega perche' il wrapper e' Universal (arm64 + x86_64) ma il Core e' solo x86_64: il wrapper deve girare nativo per interfacciarsi con la DAW, ma passa i puntatori ai buffer direttamente al Core che gira sotto Rosetta 2.

### Interfaccia ARA

L'ARA nel wrapper si limita a registrare "ARA Main Factory" come classe VST3 aggiuntiva. Tutta la logica ARA risiede nel Core, che implementa 45 classi MUAra*:

```
MUAraDocumentController          → gestione documenti
MUAraAudioSource                 → sorgente audio da analizzare
MUAraAudioModification           → modifiche (pitch shift, time stretch)
MUAraAudioPlaybackRegion         → regione di playback nella timeline
MUAraMusicalContext              → contesto musicale (tonalita', tempo)
MUAraNotesContentReader          → lettura note per la DAW
MUAraTempoEntriesContentReader   → lettura tempo per la DAW
MUAraBarSignaturesContentReader  → lettura time signature
MUAraKeySignaturesContentReader  → lettura key signature
MUAraSheetChordsContentReader    → lettura accordi
MUAraStaticTuningContentReader   → lettura tuning
MUAraModelManager                → gestione del modello dati
MUAraPlugInWrapper               → wrapper del plugin ARA
```

ARA permette a Melodyne di:
- Accedere all'audio completo prima del playback (analisi offline)
- Comunicare note, tempo, tonalita' alla DAW
- Ricevere contesto musicale dalla DAW
- Sincronizzare modifiche in tempo reale

---

## 11. MUElementAnalyzer — Il Motore di Detection

La classe `MUElementAnalyzer` e' il cuore della detection. Contiene due sotto-engine:

### MUElementAnalyzerEngine

Classe che esegue il calcolo matematico puro:
- `calcRmsAndDCData` — calcola RMS ed offset DC
- `findAmpEnvelope` — trova l'inviluppo di ampiezza

### Pipeline di detection ricostruita

```
MUElementAnalyzer
    │
    ├──► findPolyphonicDetectionItems()
    │        Trova elementi di detection polifonica
    │        Usa: _pitchMatrix, _relevanceMatrix, _spectralPointsAtSlices
    │        Errore noto: "propertyPoint->_timeSliceIndex > timeSliceCount"
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

---

## 12. FFT Implementation — ANALISI COMPLETA

### Libreria utilizzata

Melodyne **NON** implementa una FFT custom. Usa **Apple vDSP** (Accelerate framework), la libreria hardware-optimized di Apple che su x86 sfrutta SSE/AVX e su ARM usa NEON.

Simboli importati dal Core:
```
vDSP_create_fftsetup      → crea configurazione FFT (twiddle factors, una tantum)
vDSP_destroy_fftsetup     → libera configurazione
vDSP_fft_zrip             → FFT radix-2 in-place su dati REALI (la FFT vera e propria)
vDSP_ctoz                 → split complex → interleaved complex (pre-processing)
vDSP_ztoc                 → interleaved → split complex (post-processing)
vDSP_maxmgv               → maximum magnitude value (peak finding)
vDSP_maxv                 → maximum value
vDSP_vadd                 → vector add (somma spettri)
vDSP_vmul                 → vector multiply (windowing, scaling)
vDSP_vsmul                → vector-scalar multiply (normalizzazione)
vDSP_vsadd                → vector-scalar add (DC offset)
vDSP_vclr                 → vector clear / zero fill (init buffers)
```

**Insight:** `vDSP_fft_zrip` e' una Real-to-Complex FFT in-place — la piu' efficiente per segnali audio reali. Il formato output e' "split complex" (array separati per parte reale e immaginaria), motivo per cui serve `vDSP_ctoz`/`vDSP_ztoc` per le conversioni.

### Dimensioni FFT supportate

La funzione factory FFT a `0x12b98e0` contiene un grande `switch` sulle dimensioni. Solo potenze di 2 sono accettate:

| Dimensione | Log2 | Uso probabile |
|-----------|------|---------------|
| 16 | 4 | Micro-analisi, sub-frame |
| 32 | 5 | Micro-analisi |
| 64 | 6 | Sub-band analysis |
| 128 | 7 | Sub-band analysis |
| 256 | 8 | Onset detection, transient analysis |
| 512 | 9 | Short-time analysis |
| **1024** | **10** | **STFT standard (probabile default)** |
| **2048** | **11** | **STFT high-quality** |
| **4096** | **12** | **High-res pitch detection** |
| 8192 | 13 | Very high-res (basse frequenze) |
| 16384 | 14 | Maximum resolution |

Qualsiasi altro valore genera `GNFFTException: "Inappropriate table size for FFT (%I)!"`

Ogni dimensione ha un **set pre-calcolato** di puntatori a tabelle (twiddle factors, finestre). I puntatori vengono risolti a compile-time tramite `leaq` con offset fissi nel segmento dati (~0x28ac698-0x28ac740), suggerendo che le tabelle sono **statiche e pre-computate** nel binario, non generate a runtime.

### Dual FFT

Il Core mantiene **due istanze FFT** separate:
```
_fft1    → FFT primaria (magnitudine/fase per lo spettro base)
_fft2    → FFT secondaria (per frequency reassignment / true frequency)
```

Il parametro `DNA2Test_UseStackedFft` abilita la "stacked FFT" — tecnica dove si usano FFT con finestre di dimensioni diverse per ottenere risoluzione tempo-frequenza adattiva. Questo e' il meccanismo chiave per la qualita' del pitch detection:
- Finestra grande (4096/8192) → alta risoluzione in frequenza, bassa in tempo
- Finestra piccola (256/512) → alta risoluzione in tempo, bassa in frequenza
- I risultati vengono combinati ("stacked") per ottenere il meglio di entrambi

### Processing loop (magnitudine/fase)

A `0x12b9bc6` c'e' il loop di conversione complesso → magnitudine/fase. Usa istruzioni SSE:
```
movsd    → carica coppia (Re, Im) come double-packed
movshdup → duplica la parte immaginaria
andps    → maschera per valore assoluto (abs)
divss    → divisione per calcolo atan2 (fase)
mulss    → quadrato per magnitudine
addss    → somma per magnitudine (Re^2 + Im^2)
```

Il codice gestisce esplicitamente i casi speciali (Re=0, Im=0) con branch `je`/`jnp` per evitare divisioni per zero.

### Sample Rate Reduction

Prima della FFT, il segnale viene sottocampionato:
```
_sampleRateReductionForFourierProcessing    → fattore di riduzione per FFT
_sampleRateReductionForOutputReadBuffer     → fattore per il buffer di output
_sampleRateReductionsRatio                  → rapporto tra le due riduzioni
```

Questo e' un'ottimizzazione: per audio a 96kHz, una FFT da 4096 punti coprirebbe 0-48kHz. Ma il pitch musicale utile arriva a ~8kHz. Riducendo il sample rate a 16kHz, la stessa FFT da 4096 copre 0-8kHz con risoluzione 4× migliore in frequenza.

---

## 13. Polyphonic vs Monophonic Detection

Il sistema puo' switchare dinamicamente tra detection monofonico e polifonico:

```
_analyzerCanSwitchToPolyphonicDetection     → il materiale lo permette?
_analyzerDidSwitchToPolyphonicDetection     → ha gia' switchato?
_allowAutomaticPolyphonicDetection          → l'utente lo permette?
_useDNA2ForPolyphonicDetection              → usa DNA2 per il polifonico

_detectionMinPitchCent                      → pitch minimo (in cents) per detection
_detectionMaxPitchCent                      → pitch massimo
_detectionCycleSizeCent                     → dimensione del ciclo in cents
_detectionIsCyclic                          → la detection e' ciclica?
_detectionInsertsChromaticIntervals         → inserisce intervalli cromatici
```

Flusso:
1. L'analyzer inizia in modo monofonico
2. Se rileva piu' pitch simultanei, `_analyzerCanSwitchToPolyphonicDetection` diventa true
3. Se `_allowAutomaticPolyphonicDetection` e' attivo, switcha automaticamente
4. Attiva `_useDNA2ForPolyphonicDetection` per la pipeline DNA2

---

## 14. Pitch Relevance Matrix

Il sistema mantiene **due versioni** della matrice di rilevanza pitch:
```
_polyPitchRelevanceMatrixOriginal    → matrice originale (non modificata)
_polyPitchRelevanceMatrixExtracted   → matrice dopo l'estrazione delle note
```

Questo suggerisce un algoritmo iterativo:
1. Calcola la matrice di rilevanza pitch
2. Estrai la nota piu' forte
3. Sottrai la sua energia dalla matrice
4. Ripeti finche' non ci sono piu' note significative

Questo e' coerente con il sistema di "energy claims" — ogni nota reclamata sottrae energia dalla matrice, rivelando le note nascoste sotto.

---

## 15. Quality Variables Complete Map

```
=== PITCH ===
_pitchCenterQuality           _pitchHarmonicQuality
_pitchQualityWeight           _pitchRelevanceSampleOffset
_pitchBarycenter              _pitchByHarmonics
_pitchConsistency             _pitchCommonFateDeviation
_pitchCurveDeflection         _pitchCurveSlope
_pitchHorizontality           _pitchJumpsSum

=== HARMONIC ===
_harmonicHitQuality           _harmonicRatioQuality
_harmonicMagnitudes           _harmonicPaths
_harmonicSpectrum

=== SPECTRAL ===
_spectralMagnitudeSum
_spectralPointsAtSlices
_spectralPointsHorizontalQualitiesAtSlices
_spectralPointsVerticalQualitiesAtBins

=== RHYTHM/ATTACK ===
_allAttackPeakQuality         _assignedAttackQuality
_attackAssignmentQuality      _attackQuality
_allRhythmicQuality           _beatMatchingQuality
_beatMatchingWeightedQuality

=== SEPARATION ===
_separationQuality            _combiningQuality
_envelopeRatioQuality         _energyClaimFactor

=== OTHER ===
_vibratoQuality               _portamentoQuality
_beatingQuality               _chordQuality
_correlationQuality           _detectionQuality
_horizontalPathQuality        _verticalPathQuality
_interpolationQuality         _sameAttackQuality
```

---

## Appendice — File di lavoro

| File | Posizione | Contenuto |
|------|-----------|-----------|
| Binario VST3 | `~/Desktop/Progetto_Reverse_Mike/mike` | Wrapper analizzato |
| Binario Core | `~/Desktop/Progetto_Reverse_Mike/MikeCore` | Engine analizzato |
| Metal shaders | `~/Desktop/Progetto_Reverse_Mike/default.metallib` | GPU kernels |
| Ghidra project (wrapper) | `~/Progetto_Mike/` | mike analizzato |
| Ghidra project (core) | `~/MikeCore_Project/` | MikeCore analizzato |
| Stringhe DSP | `~/Desktop/Progetto_Reverse_Mike/strings_dsp.txt` | 2599 stringhe estratte |
| Log analisi | `~/Desktop/Progetto_Reverse_Mike/ghidra_analysis.log` | Log Ghidra headless |
| Questo report | `~/Desktop/Progetto_Reverse_Mike/REPORT_ANALISI.md` | Questo file |
