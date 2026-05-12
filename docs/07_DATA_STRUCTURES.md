# 07 — Strutture Dati

## MUSpectralTimeSlice

Un singolo frame di analisi spettrale — la struttura fondamentale.

Nota importante:

- l'header auto-generato in `reconstructed/structs/MUSpectralTimeSlice.h` non e' affidabile per il layout reale
- il mapping operativo aggiornato e' in [20_SPECTRAL_SLICE_FIELD_MAP.md](20_SPECTRAL_SLICE_FIELD_MAP.md)

```
┌─────────────────────────────────────────────────────────────────┐
│                    MUSpectralTimeSlice                          │
├─────────────────────────────────────────────────────────────────┤
│ complexSpectrum          → FFT complessa (Re + Im)             │
│ complexSpectrumOfChannel → FFT per canale specifico            │
│ magnitudeData            → |FFT| ampiezza per bin              │
│ phaseData                → arg(FFT) fase per bin               │
│ tonalityData             → quanto e' "tonale" ogni bin (0-1)   │
│ transiencyData           → mappa transienti/attacchi           │
│ trueFreqData             → frequenze reassigned (phase vocoder)│
│ trueTimeSampleOffsetData → offset temporali sub-campione       │
└─────────────────────────────────────────────────────────────────┘
```

Offset oggi verificati:

```
+0x0c  binCount
+0x10  complexSpectrum
+0x18  magnitudeData
+0x20  phaseData
+0x28  trueFreqData
+0x30  tonalityData
+0x38  trueTimeSampleOffsetData
+0x40  transiencyData
+0x48  vectorData
```

Entry point: `initFromTimeSignal()` — richiede `neighbourTimeSlice` per `trueFreqData`.

Errori noti (rivelano precondizioni):
```
initFromTimeSignal(): incomplete parameters!
initFromTimeSignal(): no valid neighbourTimeSlice for trueFreqs!
takeDataFromTimeSlice(): inconsistent data
getComplexSpectrum(): no complexSpectrum data
getMagnitudeData(): no magnitude data
getPhaseData(): no phase data
getTonalityData(): no tonality data
getTransiencyData(): no transiencyData data / no vectorData data
getTrueFreqData(): no trueFreq data
getTrueTimeSampleOffsetData(): no trueTimeSampleOffsetData data
```

Correzione importante:

- `015c6350` non va trattata come getter grezzo di `trueFreqData`
- il getter vero di `trueFreqData` e' `015c66c0`
- `015c6350` appare molto piu' coerente con una derivazione di `tonalityData` sopra `trueFreqData`

Bridge confermato verso il claim kernel DNA2:

- `magnitudeData` -> buffer energia per `014b71e0`
- `trueFreqData` -> asse frequenziale per `014b71e0`
- `tonalityData` -> mask/weight locale e buffer di scoring downstream

## Claim-Score Item Family

Nota importante:

- esiste una famiglia di item usata da analyzer / spectrum shaper / principal item per score e descriptor
- non va confusa con altri list node che riusano gli stessi offset per link pointer

Layout operativo oggi piu' forte:

```
+0x10  harmonic descriptor (lazy, via 014eed60)
+0x14  pitch assoluto in cents
+0x20  base frequency / spacing Hz-like (lazy, via 014eecb0)
+0x24  local overlap/residual evidence associato a 014b71e0
+0x28  claim / activation / relevance score
+0x54  running index locale
+0x58  secondary energy/quality weight
```

Correzioni importanti:

- `013924d0` usa direttamente `+0x14` e scrive `+0x28`
- `+0x10` e `+0x20` vengono solo materializzati lazy se `NaN`
- [014b3460.c](../reconstructed/clean/MUElementAnalyzer/014b3460.c) non e' la stessa famiglia: li' `+0x20` e' flag e `+0x28/+0x30` sono link

Doc di riferimento:

- [22_ITEM_SCORE_FIELD_LEDGER.md](22_ITEM_SCORE_FIELD_LEDGER.md)
- [23_DESCRIPTOR_HELPERS_014EECB0_014EED60.md](23_DESCRIPTOR_HELPERS_014EECB0_014EED60.md)
- [26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md](26_SPECTRAL_BUFFER_CALLSITE_MAP_013903D0_013924D0.md)

## Candidate Adapter `0x168`

Nota importante:

- il cluster alto con `_isMarkedAsPreliminaryItem`, `_sortingValue`, `_harmonicNumber` e l'intervallo di pitch-center relevance non appartiene al layout base di `MUElementAnalyzer`
- non appartiene neppure a `MUVibratoRange`
- appartiene invece a un oggetto distinto da `0x168` byte, con vtable `0x25e7818 / 0x25e7c80`, usato come adapter/candidato nel corridoio renderer-slot

Field map alta oggi verificata:

```
+0x108  child slot list
+0x138  analyzer ref
+0x140  assignedAttackItem ref
+0x148  assignedItem ref
+0x150  _isMarkedAsPreliminaryItem
+0x154  _sortingValue
+0x158  _harmonicNumber
+0x15c  _timePosIndexOfPitchCenterRelevanceStart
+0x160  _timePosIndexOfPitchCenterRelevanceEnd
```

## MUElementAnalyzer Self Slots

Field map ancora parziale ma ormai utile per il replication effort:

```
+0xd0   auxiliaryPeerList      GNList persistente per peer registry locale
+0x158  workingGNList          GNList di lavoro per-run nel pipeline 01484bc0
+0x110  spectralMedianFrequencyHz cache
+0xf4   _allTonality
+0xf8   _allCentDiffPerMillisecond
+0xfc   _allPitchRangePerNote
+0x100  _allEnergyRelevantRegionRatio
+0x104  _allAttackPeakQuality
+0x108  _allAttackPeakToEnergyRegionRatio
+0x118  _overallResidualItem
+0x120  _overallOverlapAtItemMarginsItem
+0x128  _overallAttacksItem
```

Doc di riferimento:

- [47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md](47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md)
- [48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md](48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md)
- [51_AUXILIARY_PEER_LIST_SLOT_SELF_0XD0_01484BC0_014AB140.md](51_AUXILIARY_PEER_LIST_SLOT_SELF_0XD0_01484BC0_014AB140.md)
- [52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md](52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md)
- [18_DNA2_CALLSITE_MAP.md](18_DNA2_CALLSITE_MAP.md)

Bridge operativo:

- `014f7360` costruisce il subgroup count-sized di slot
- il ranking locale di `014f7360` usa pero' un payload separato con float a `+0x2c / +0x30 / +0x34`
- la famiglia `MUAudioSourcePropertyPoint` entra in builder separati downstream/paralleli
- `014ef210 / 014ef060 / 014f38a0` costruiscono e popolano il candidate adapter sopra quei slot

Doc di riferimento:

- [30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md](30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md)
- [31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md](31_CANDIDATE_ADAPTER_010FE8D0_014EF210_014EF060_014F38A0.md)
- [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md)
- [33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md](33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md)
- [34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md](34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md)

## MUAudioSourcePropertyPoint Family `DAT_025e74a0`

Correzione importante:

- `MUAudioSourcePropertyPoint` resta una famiglia reale
- ma non e' il payload confrontato in `014f7360` via float `+0x2c/+0x34`

Working field map oggi piu' forte:

```
+0x0c  discrete sequence index
+0x14  primary interpolated value
+0x18  paired secondary value / weight
+0x1c  default scalar (0.1f)
+0x20  optional scalar default NaN
+0x24  interpolated scalar axis A
+0x28  interpolated scalar axis B
+0x2c  boolean/status byte
```

Prova forte:

- `014ea7b0` usa `*(byte *)(obj + 0x2c) ^ 1`

Doc di riferimento:

- [33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md](33_PROPERTY_POINT_FAMILY_DAT_025E74A0.md)
- [35_PROPERTY_POINT_COPY_INSERT_014EE580_014C2E20.md](35_PROPERTY_POINT_COPY_INSERT_014EE580_014C2E20.md)

## MURawNoteSeparation Interval Family

Correzione importante:

- `DAT_025f1488` non e' la famiglia interval/ranking
- `DAT_025f1488` e' la vtable di `MUSpectralTimeSlice`, confermata da `011aa9e0`

La famiglia oggi realmente canonica per il corridoio:

- `014a3550`
- `014a3900`
- `014a42b0`

e' invece:

- `MURawNoteSeparation`

Working field map oggi piu' utile:

```
+0x10  interval start (double)
+0x18  interval end (double)
+0x20  base strength / gate weight
+0x28  score-like scalar con optimum 1.0
+0x2c  secondary scalar / margin / residual
+0x30  local contrast / ranking weight
+0x34  threshold-like scalar A
+0x38  threshold-like scalar B
+0x3c  class / state flag-set
+0x40  trailing metadata int (ancora aperto)
```

Punti chiusi:

- `014ba9e0` inizializza `+0x10/+0x18/+0x20/+0x3c`
- `014ba950` clona `+0x10..+0x40`
- `014a3550` popola `+0x28/+0x2c/+0x30/+0x34/+0x38`
- i valori `1`, `2`, `8`, `0x10`, `0x40` sono osservati ai callsite del builder

Nota prudente:

- `MURawNoteSeparation` resta separata dal corridoio `014f7360`
- gli offset simili non vanno piu' fusi per analogia

Doc di riferimento:

- [34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md](34_RANKING_PAYLOAD_FAMILY_DAT_025F1488.md)
- [36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md](36_INTERVAL_GATE_MODEL_014A3900_014A42B0.md)
- [37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md](37_MURAWNOTESEPARATION_FAMILY_014BA950_014BA9E0_014A3550.md)

## MUElementAnalyzer Gate Metric Cluster

Nota importante:

- `014a74b0` scrive davvero un cluster contiguo di sei float in `MUElementAnalyzer`
- il decompilato a 5 parametri e' incompleto: il callsite reale in `01484bc0` passa sei output pointer

Working field map oggi piu' rigoroso:

```
+0xf4  primary gate scalar non normalizzato
+0xf8  derivato normalizzato di +0xf4
+0xfc  scalar di dispersione/regolarita' locale
+0x100 mediana di overlap/adjacency ratio
+0x104 mediana di linked field_20 dai nodi item + 0x40
+0x108 coverage ratio dei link item + 0x40 non nulli
+0x110 cached spectralMedianFrequencyHz
```

Punti chiusi:

- il mapping output-pointer -> offset e' fissato dal callsite `01484bc0 -> 014a74b0`
- `+0xf4` entra direttamente nel gate bool downstream di `01484bc0`
- `+0x108` viene invalidato insieme a `+0x110` nel corridoio `01662bd0`

Nota prudente:

- `+0xfc` resta il campo meno chiuso del cluster
- oggi va trattato come scalar di dispersione/regolarita' locale, non con un nome piu' forte

Doc di riferimento:

- [47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md](47_SPECTRAL_MEDIAN_CONSUMER_MAP_0149F6A0_01484BC0.md)
- [48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md](48_ANALYZER_GATE_METRIC_CLUSTER_014A74B0_01484BC0.md)
- [49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md](49_THRESHOLD_SEEDED_RAW_NOTE_MATCHER_014AF180.md)

## MUMatrixPathPoint Shortlist Family

Il payload locale di `014f7360` e' ora chiuso con buona rigidita' su:

- `MUMatrixPathPoint`

Field map utile per il replication path:

```
+0x10  bestNeighbourPoint
+0x18  containingPath
+0x20  object
+0x28  xPosIndex
+0x2c  yValue
+0x30  relevanceQuality
+0x34  bestNeighbourQuality
+0x38  shouldBeProcessed
```

Punti chiusi:

- `014f6f40` legge `+0x28` come indice discreto
- `014f7360` usa `+0x2c` come asse di distanza locale
- `014f7360` usa `+0x30` come weight di relevance
- `014f7360` scrive `+0x34` come quality del best neighbour
- `0x14f9df0` usa `+0x34` come sort key decrescente della shortlist
- `014f7360` usa `+0x38` come process/winner flag
- `014f6fc0` riscrive `+0x18` come back-link verso `MUMatrixPath`
- i getter adiacenti `014f9e20 / 014f9e30` non bastano ancora per estendere la field map a `+0x3c`

Doc di riferimento:

- [32_GNLIST_TOPOLOGY_014F7360.md](32_GNLIST_TOPOLOGY_014F7360.md)
- [38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md](38_MUMATRIXPATHPOINT_FAMILY_0116D770_014F7360.md)
- [40_ADJACENT_GETTER_CLUSTER_014F9E20_014F9E30.md](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/docs/40_ADJACENT_GETTER_CLUSTER_014F9E20_014F9E30.md)

## MUAudioSourceItem

Una singola "nota" o "blob" nel display di Melodyne:

```
MUAudioSourceItem
    ├── MUAudioSourceItemHarmonicSpectrum  → spettro armonico
    ├── MUAudioSourceAttackItem            → parametri attacco
    ├── MUAudioSourceSibilanceItem         → componente sibilante
    ├── MUAudioSourcePropertyPoint         → punti editabili
    └── MUAudioSourceElement               → elemento base
```

Sotto-classi:
```
MUAudioSourcePrincipalItem          → item principale
MUAudioSourceComponent              → componente audio
MUAudioSourceInstrument             → strumento rilevato
MUAudioSourceInstrumentPortion      → porzione di strumento
MUAudioSourceAnalyzerItem           → item in fase di analisi
MUAudioSourceSibilantItem           → componente sibilante (variante)
```

### Classi di supporto

```
MUAudioSource                                → classe base
MUAudioSourceSeparationPrefCtrl              → controller preferenze separazione
MUAudioSourceSeparationProgressAdapter       → adapter progresso separazione
MUAudioSourceWillBeDestroyedNotification     → notifica distruzione
MUAudioSourceDescriptionSourceKey            → chiave sorgente
MUAudioSourceDescriptionFinalizationJob      → job di finalizzazione
```

Errori aggiuntivi (rivelano logica interna):
```
MUAudioSourceDescription::cleanupOverlappingPotentialItemsForPrincipalItem(): wrong object type in list
MUAudioSourceItem cannot set PulseAssignmentTime
MUAudioSourcePrincipalItem::redetectMonophonicPitchAtSuggestedPitchAndUpdatePotentialItem(): _propertyPoints inconsistency!
```

### Pasteboard Types

```
com.celemony.MUAudioSourceDescriptonsRefPBoardType
com.celemony.MUAudioSourceDescriptonsSepationChangeCountPBoardType
```

## MUAudioSourceDescription

Metadati e separazione:

```
MUAudioSourceDescription
    ├── MUAudioSourceDescriptionType               → tipo di contenuto
    ├── MUAudioSourceDescriptionSeparationEntry     → entry di separazione
    ├── MUAudioSourceDescriptionStretchMode         → modalita' time-stretch
    ├── MUAudioSourceDescriptionFinalizationJob     → job di finalizzazione
    ├── MUAudioSourceDescriptionRange               → range della descrizione
    ├── MUAudioSourceDescriptionDestinationKey      → chiave destinazione
    ├── MUAudioSourceDescriptionSourceKey           → chiave sorgente
    ├── MUAudioSourceDescriptionDoNotStretchOnInsert → flag: non stretchare all'inserimento
    └── MUAudioSourceDescriptionStretchOnInsert     → flag: stretcha all'inserimento
```

Stretch modes (enum `MUAudioSourceDescriptionStretchMode`):
```
MUAudioSourceDescriptionStretchModeUndefined     → non definito
MUAudioSourceDescriptionDoNotStretchOnInsert     → non stretchare
MUAudioSourceDescriptionStretchOnInsert          → stretcha
```

Tipi:
```
MUPolyphonicDescriptionType              → polifonico pitched
MUPolyphonicUnpitchedDescriptionType     → polifonico unpitched
MUPercussiveDescriptionType              → percussivo
```

Errori (rivelano logica interna):
```
_activateItem(): item must be MUAudioSourcePrincipalItem
assignEnergyClaimsInSampleRange(): wrong object type in list
cleanupOverlappingPotentialItemsForPrincipalItem(): item not in _audioSourcePotentialItems
```

## MUAraAudioSource

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

## Variabili interne chiave

### Buffer e FFT
```
_audioInputBuffer              _audioOutputBuffer
_audioInputBufferOffset        _audioSampleFormat
_audioRingBuffer               _bitsPerSample
_bytesPerSample                _calcAuxBuffer0..3
_bufferStartSampleIndex        _bufferEndSampleIndex
_allocatedPoolBuffersCount     _allocatedPoolBuffersSize
```

### Spettrale
```
_complexSpectrum               _magnitudeData
_phaseData                     _tonalityData
_transiencyData                _trueFreqData
_accumulatedPhasesOfChannel    _accumulatedPhasesValid
_binFrequencies                _binCount
_binPhaseProcessingCount
_bufferedSpectralTimeSlices
```

### Pitch
```
_pitchMatrix                   _pitchMatrixPeaks
_pitchIndex                    _pitchIndexes
_pitchCent                     _pitchCenter
_pitchRange                    _pitchOffset
_averagePitchIndex             _averagePitchConsistency
_alternative1Pitch             _alternative2Pitch
```

### Timing
```
_timeSliceCount                _timeSliceIndex
_timeSliceSampleCount          _timeSliceTimeDistance
_timeSliceParameterBuffer
_anchorSampleOffset
_windowOverlapForTimeSlices
_windowOverlapForTrueFreqs
```

### MUElementAnalyzer Self Field Map (parziale, dal ramo poly DNA2)
```
+0x68   → wrapper state/source-description-like usato sia nel ramo poly sia nel ramo mono
+0x90   → sampleCount/rangeLen-like usato dal bridge `01447a70 -> 013903d0`
+0x3c   → flag cancel/abort/request-stop-like controllato dopo le vcall `+0x380`
```

Questi offset non sostituiscono ancora una struct completa affidabile, ma sono gia' utili per leggere il bridge DNA2 alto e per separare:

- `self`
- il wrapper di state/description a `+0x68`
- il sink callback/value update che nel path poly viene costruito sullo stesso `self`

Per il descriptor condiviso posseduto da quel wrapper vedi:

- [29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md](29_SHARED_DESCRIPTOR_CACHE_0132D640_0132D790_15C6EF0.md)
- [30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md](30_DESCRIPTOR_SLOT_COUNT_0132DBE0_014F7330_0145F790.md)

## MUPitchMatrixPeak (parziale, chiuso dal corridoio `0149c330 -> 014b3ce0`)

`g_025e4538` e' la family concreta `MUPitchMatrixPeak`.

Field map prudente corrente:

```text
+0x0c   rowIndex / sliceIndex-like
+0x10   pitchBinIndex / pitchIndex-like
+0x14   localRankInRow
+0x18   primaryPeakValue-like
+0x1c   workingPeakQuality / selectionScore
+0x20   stage/adjacency flag
+0x28   adjacency/back-link-like
+0x30   adjacency/forward-link-like
```

Note:

- `MUElementAnalyzer + 0x158` non e' una lista flat di questi nodi
- per il corridoio principale e' una topologia annidata `GNList<GNList<MUPitchMatrixPeak>>`
- `014b3460` resetta/linka i campi alti del peak
- `014b3ce0` usa il peak-lattice come stage intermedio e poi scrive il risultato nell'item downstream, non nel peak stesso
- la coda scalare di `014b3ce0` sceglie il massimo `+0x1c > 0.4f` e converte `+0x10` in Hz con `exp2(pitchBin / 60.0f) * 21.533203125f`

Vedi:

- [52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md](52_WORKING_GNLIST_SLOT_SELF_0X158_01484BC0.md)
- [53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md](53_WORKING_GNLIST_PAYLOAD_FAMILY_0149C330_014B3CE0.md)
- [65_PITCH_MATRIX_BRIDGE_SELECTION_014B3CE0.md](65_PITCH_MATRIX_BRIDGE_SELECTION_014B3CE0.md)

## MUPosValue (utility value-object)

Il cluster `014328b0` non costruisce peak interni, ma un piccolo value-object utility:

```text
MUPosValue
+0x10   pos / x-coordinate
+0x18   value / y-like scalar
```

Osservazioni:

- `014328b0` alloca `0x20` byte e riempie `+0x10/+0x18`
- la registration adiacente usa il nome `MUPosValue`
- i comparator vicini ordinano per `+0x10` oppure `+0x18`

L'helper adiacente `01432b10` costruisce invece un object da `0x28` con tre double, ma la sua family concreta resta ancora aperta.

Vedi:

- [54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md](54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md)

## Extended Triple-Value Point Object (`01432b10`, prudente)

`01432b10` costruisce un object affine a `MUPosValue`, ma non coincidente:

```text
extendedPoint3Candidate
+0x10   position / index-like
+0x18   value / amplitude-like
+0x20   gating / prominence / weight-like scalar
```

Punti chiusi:

- il builder alloca `0x28` byte e scrive tre double
- `014f0c40` lo usa come carrier di estremi locali e filtra i candidati con threshold su `+0x20`
- `014902f0` lo usa come marker locale nel corridoio `MUSpectrumShaper`
- non coincide ne' con `MUPosValue` ne' con `MUPitchMatrixPeak`

Nota prudente:

- la family concreta non e' ancora chiusa per nome
- il terzo campo `+0x20` va trattato come scalar di gate/prominence, non come terza coordinata geometrica pura

Vedi:

- [54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md](54_MUPOSVALUE_CLUSTER_014328B0_01432B10.md)
- [55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md](55_EXTENDED_POINT_OBJECT_01432B10_GNINT_SHAPER.md)
