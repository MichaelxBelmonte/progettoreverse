# 09 — Resources & GPU Shaders

## Resources.rrr — Archivio UI (formato GNFA)

### Header

```
Magic:   GNFA (GN File Archive)
Size:    27.8 MB
Entries: 997
```

```
@0x00: 474e4641  "GNFA" magic
@0x04: 00000014  header size (20 bytes)
@0x08: 00000000  (reserved)
@0x0C: 00000001  version (1)
@0x10: 000003e5  entry count (997)
@0x14: 0000022c  (556 — index offset?)
@0x20: 00001471  (5233 — data start?)
@0x28: 00087570  (554352 — total data size?)
```

I nomi delle risorse sono in **UTF-16 Big Endian**. Il primo entry e' `GNUpdateCheckUtility.gnui`.

### Contenuto

| Tipo | Count | Descrizione |
|------|-------|-------------|
| `.gnui` | 192 | Interfacce UI serializzate (GN User Interface) |
| `.png` | 518 | Icone, cursori, grafiche (con varianti @2x Retina) |
| Altro | ~287 | Dati binari senza estensione riconoscibile |
| **Totale** | **997** | |

### Risorse .gnui per dominio

#### Generic (GN*) — 36 file

Sistema, preferenze, framework UI:

```
GNApplication.gnui              → applicazione base
GNPreferences.gnui              → preferenze globali
GNControls.gnui                 → controlli UI base
GNShortCuts.gnui                → scorciatoie tastiera
GNShortCutOutlineController.gnui
GNUndoManager.gnui              → sistema undo
GNEvent.gnui                    → gestione eventi
GNFormatter.gnui                → formattatori testo
GNTableHeader.gnui              → header tabelle
GNImageFile.gnui                → gestione immagini
GNFileType.gnui                 → tipi di file
GNVectorAppearanceEditor.gnui   → editor aspetto vettoriale
GNAppearanceSelectionController.gnui
GNLanguageSelectionController.gnui
GNLocaleExportController.gnui
```

Audio e licensing:
```
GNAudioDevice.gnui              → dispositivi audio
GNAudioDevicePrefCtrl.gnui      → preferenze dispositivi
GNAudioFileFormats.gnui         → formati file audio
GNAudioFormats.gnui             → formati audio
GNAudioPlugins.gnui             → gestione plugin
GNLicensing.gnui                → sistema licenze
GNExpirationPanel.gnui          → pannello scadenza
GNUpdateCheckController.gnui    → controllo aggiornamenti
GNUpdateCheckUtility.gnui       → utility aggiornamenti
GNAlphaWarningPanel.gnui        → avviso versione alpha
GNWASAPIControlPanel.gnui       → pannello WASAPI (Windows)
```

Overloud FX integrati:
```
GNOverloudCompGController.gnui          → compressore generico
GNOverloudCompressor1176Controller.gnui → emulazione 1176
GNOverloudCompressorController.gnui     → compressore
GNOverloudConvolverController.gnui      → riverbero a convoluzione
GNOverloudEQ84Controller.gnui           → EQ (stile Neve 1084?)
GNOverloudMutronIIIWahController.gnui   → wah (Mu-Tron III)
GNOverloudParametricEQController.gnui   → EQ parametrico
GNOverloudTapedeskController.gnui       → saturazione tape
```

#### Display (MD*) — 68 file

Finestre, toolbar, inspector, controller della GUI principale:

```
MDMetaWindowController.gnui         → finestra principale
MDMainMenu.gnui                     → menu applicazione
MDToolbars.gnui                     → barra strumenti
MDToolbarController.gnui            → controller toolbar
MDDocumentViewController.gnui       → controller documento
MDEditorViewController.gnui         → controller editor
MDRightInspectorController.gnui     → inspector destro
MDProgressViewController.gnui       → barra progresso
```

Toolbar controls (26 sotto-controller):
```
MDToolbarToolCtrl.gnui              → selettore tool
MDToolbarEditModeCtrl.gnui          → modalita' editing
MDToolbarEditMixCtrl.gnui           → edit/mix switch
MDToolbarEditorViewCtrl.gnui        → vista editor
MDToolbarGridCtrl.gnui              → griglia
MDToolbarPositionCtrl.gnui          → posizione
MDToolbarTransportCtrl.gnui         → trasporto
MDToolbarTempoCtrl.gnui             → tempo
MDToolbarVolumeCtrl.gnui            → volume
MDToolbarUndoCtrl.gnui              → undo/redo
MDToolbarQuantizeMacrosCtrl.gnui    → macro quantizzazione
MDToolbarScaleModeCtrl.gnui         → modalita' scala
MDToolbarPluginTransferCtrl.gnui    → trasferimento plugin
MDToolbarAraClickCtrl.gnui          → click ARA
MDToolbarAraEditModeCtrl.gnui       → edit mode ARA
MDToolbarPreListeningCtrl.gnui      → pre-ascolto
MDToolbarActivityCtrl.gnui          → attivita'
MDToolbarTrackMemoryUsageCtrl.gnui  → uso memoria traccia
```

Inspector panels:
```
MDDetectionAmplitudeInsp2.gnui      → ampiezza detection
MDDetectionAudioSourceInsp2.gnui    → sorgente audio
MDDetectionElementInsp2.gnui        → elemento detection
MDElementAmplitudeInsp2.gnui        → ampiezza elemento
MDElementInsp2.gnui                 → elemento
MDElementPitchInsp.gnui             → pitch elemento
MDAudioSourceInsp2.gnui             → sorgente audio
MDFileBrowserInsp2.gnui             → file browser
MDProjectInsp2.gnui                 → progetto
MDTrackInsp2.gnui                   → traccia
```

#### Music/DSP (MU*) — 72 file

Controller per detection, editing, scale, spectrum shaper:

Detection:
```
MUDetectionActivationInsp.gnui          → attivazione detection
MUDetectionAmplitudeInsp.gnui           → ampiezza
MUDetectionMonoInsp.gnui                → mono detection
MUDetectionPercussiveAttackInsp.gnui    → attacchi percussivi
MUDetectionPitchCenterAssignmentInsp.gnui → assegnazione pitch center
MUDetectionPitchIndexAssignmentInsp.gnui  → assegnazione pitch index
MUDetectionPitchRelevanceInsp.gnui      → rilevanza pitch
MUDetectionQuarterAssignmentInsp.gnui   → assegnazione quarti
MUDetectionSeparationInsp.gnui          → separazione
MUDetectionSibilantRangeInsp.gnui       → range sibilanti
```

Element editing:
```
MUElementPitchInsp.gnui                 → pitch
MUElementPitchDriftInsp.gnui            → drift del pitch
MUElementPitchModulationInsp.gnui       → modulazione pitch
MUElementAmplitudeInsp.gnui             → ampiezza
MUElementAttackSpeedInsp.gnui           → velocita' attacco
MUElementFadeInsp.gnui                  → fade
MUElementFormantInsp.gnui               → formanti
MUElementTimeInsp.gnui                  → tempo
MUElementEmptyInsp.gnui                 → placeholder vuoto
MUVibratoInsp.gnui                      → vibrato
MUSibilantBalanceInsp.gnui              → bilanciamento sibilanti
MUElementLevelingController.gnui        → livellamento
```

Spectrum Shaper:
```
MUSpectrumShaperController.gnui         → controller principale
MUSpectrumShaperSpectrumCtrl.gnui       → controller spettro
MUSpectrumShaperSynthCtrl.gnui          → controller sintesi
```

Scale e tuning:
```
MUScaleCreatePitchSystemCtrl.gnui       → crea sistema di intonazione
MUScaleDetectionOptionsCtrl.gnui        → opzioni detection scala
MUScaleHeaderCtrl.gnui                  → header scala
MUScaleNames.gnui                       → nomi scale
MUScaleOpenPanel.gnui                   → apri scala
MUScaleSavePanel.gnui                   → salva scala
MUScaleSlideRuleView.gnui               → vista slide rule
MUScaleStretchTuningCtrl.gnui           → stretch tuning
MUScaleStrings.gnui                     → stringhe scala
MUWesternStandardPitchTitleSystem.gnui  → sistema titoli pitch occidentale
MU12TET.gnui                            → 12-TET (temperamento equabile)
MUMasterTunePrefController.gnui         → master tune (La4 = 440Hz)
```

#### Test (PN*) — 3 file

```
PNTestGrooveWindow.gnui                 → test groove
PNTestMidiWindow.gnui                   → test MIDI
PNTestSpectrumShaperWindow.gnui         → test spectrum shaper
```

### Risorse .png — Categorie principali

| Categoria | Count | Esempi |
|-----------|-------|--------|
| Cursori tool | ~130 | `CursorPitch`, `CursorFormant`, `CursorTime`, `CursorVibrato`, `CursorSibilantBalance` |
| Spectrum Shaper | ~40 | `SpectrumShaperFlat`, `SpectrumShaperSawTooth`, `SpectrumShaperWave`, `SpectrumShaperTilt*` |
| Grid/Tempo | ~50 | `grid_b1_*` (beat), `grid_t1_*` (triplet), `grid_sec` |
| Trasporto | ~20 | `ImageTranportPlay`, `ImageTranportStop`, `ImageTranportRecord` |
| Editor icons | ~40 | `EditorIcon`, `MultiBlob`, `SingleBlob`, `FilledBlob`, `OutlinedBlob` |
| Overloud FX | ~10 | `GNOverloudCompG*`, `GNOverloudEQ84`, `GNOverloudTapedesk` |
| Inspector | ~15 | `inspectorElement`, `inspectorFile`, `inspectorTrack` |
| Melodyne logos | ~20 | `MelodyneLogoeditor16`, `MelodyneLogostudio24`, `MelodyneLogoessential16` |
| Note status | 5 | `NotesTuned`, `NotesDetuned`, `NotesDrifting`, `NotesOffTime`, `NotesCorrected` |
| Browser | ~10 | `browserItem.folder`, `browserItem.soundfile`, `browserItem.loop` |

### Scoperte notevoli

1. **Overloud FX integrati**: Melodyne ha 8 controller UI per effetti Overloud (1176 comp, EQ84, convolver, tape desk, Mu-Tron III wah). Probabilmente effetti opzionali nella versione standalone.

2. **5 edizioni prodotto** (dai loghi): `essential`, `assistant`, `editor`, `studio`, `player` — tutte nello stesso binario, differenziate solo via licensing.

3. **WASAPI Controller**: `GNWASAPIControlPanel.gnui` — codice Windows nel resource file Mac, suggerisce archivio cross-platform condiviso.

4. **Scale/Tuning avanzato**: supporto per sistemi di intonazione custom (`MUScaleCreatePitchSystemCtrl`), stretch tuning, e 12-TET come caso specifico.

5. **Note status visivi**: 5 stati (`Tuned`, `Detuned`, `Drifting`, `OffTime`, `Corrected`) — feedback visivo sullo stato di correzione.

---

## default.metallib — GPU Shader (Metal)

### Info

```
Format:   MetalLib v1.2.2
Target:   air64-apple-macosx10.12.0
Compiler: Apple metal version 31001.522
SDK:      macOS 12.3
Size:     5.6 KB
```

Options: `denorms_disable`, `fast_math_enable`, `framebuffer_fetch_disable`

### Funzioni (2)

#### `vertexShader` — Vertex Shader

```metal
struct AAPLVertex {
    float2 position;
    float2 textureCoordinate;
};

vertex RasterizerData vertexShader(uint vertexID [[vertex_id]],
                                   constant AAPLVertex *vertexArray [[buffer(0)]]) {
    RasterizerData out;
    out.position = float4(vertexArray[vertexID].position, 0.0, 1.0);
    out.textureCoordinate = vertexArray[vertexID].textureCoordinate;
    return out;
}
```

Passthrough: legge posizione e UV dal vertex buffer, nessuna trasformazione.

#### `samplingShader` — Fragment Shader

```metal
fragment float4 samplingShader(RasterizerData in [[stage_in]],
                                texture2d<half, access::sample> colorTexture [[texture(0)]]) {
    return float4(colorTexture.sample(sampler, in.textureCoordinate));
}
```

Campiona una texture 2D e la restituisce come colore. Conversione `half` → `float4`.

### Conclusione

Il metallib e' un **semplice blit shader** (template Apple AAPL). Disegna una texture a schermo senza trasformazioni. Melodyne usa Metal **solo per il rendering UI** (spettrogramma, waveform) — NON per compute shader DSP. Tutto il processing audio e' CPU-only (vDSP/Accelerate).
