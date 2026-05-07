# 01 — Architettura

## Overview

```
┌─────────┐     ┌──────────────────┐     ┌──────────────┐
│   DAW   │────►│  mike (wrapper)  │────►│   MikeCore   │
│         │◄────│  214KB, ARM+x86  │◄────│  43MB, x86   │
└─────────┘     └──────────────────┘     └──────────────┘
                  VST3 + ARA proxy         DSP engine
                  nativo su Apple Si       via Rosetta 2
                                                │
                                          ┌─────┴─────┐
                                          │ metallib  │
                                          │  5.6 KB   │
                                          │ GPU shader│
                                          └───────────┘
```

## VST3 Wrapper (`mike`)

Thin bridge — 98 funzioni, 0 logica DSP. Espone 3 simboli:

| Simbolo | Ruolo |
|---------|-------|
| `GetPluginFactory` | Entry point VST3 — la DAW istanzia il plugin da qui |
| `bundleEntry` | Init del bundle al caricamento |
| `bundleExit` | Cleanup alla chiusura |

Carica dinamicamente il Core da bundle `.sbb`:
```
Core-5.4.2.006.sbb    → MikeCore (release, double precision)
CoreF-5.4.2.006.sbb   → MikeCoreF (float, single precision)
```

Il wrapper e' Universal Binary (arm64 + x86_64) per girare nativo su Apple Silicon. Il Core e' solo x86_64 e gira via Rosetta 2. I buffer audio vengono passati come puntatori raw — nessuna copia, nessuna conversione.

## MikeCore (engine)

### Prefissi di classe (top 15 per frequenza)

| Prefisso | Count | Dominio |
|----------|-------|---------|
| `GNS*` | 133 | Generic - Sound/String |
| `MUA*` | 131 | Music - Audio |
| `MUS*` | 127 | Music - Spectral |
| `GNA*` | 113 | Generic - Audio |
| `GNC*` | 109 | Generic - Core/Cocoa |
| `MUT*` | 103 | Music - Time/Transform |
| `MDT*` | 97 | Display - Tool |
| `GNT*` | 94 | Generic - Type/Tool |
| `GNP*` | 86 | Generic - Property |
| `GNM*` | 84 | Generic - Misc |
| `GNO*` | 83 | Generic - Object/Observer |
| `MDP*` | 83 | Display - Preferences/Plug |
| `MUP*` | 76 | Music - Pitch/Property |
| `MUL*` | 75 | Music - Local/Loop |
| `MUE*` | 61 | Music - Element/Energy |

Nota: nel binario sono presenti anche prefissi crypto (PKC, CMS, EVP, ASN, RSA) da OpenSSL embedded.

Binario monolitico contenente:
- **DSP**: analisi spettrale, pitch detection (DNA2/3), risintesi, formant synthesis
- **GUI**: Cocoa/AppKit (detection editor, spectrum shaper, mixer)
- **Audio I/O**: CoreAudio, AudioToolbox, AVFoundation, CoreMIDI
- **GPU**: Metal, MetalKit (compute shader per operazioni parallele)
- **Networking/Licensing**: OpenSSL, CFNetwork, Boost (PACE/iLok)

### Framework linkati

```
Cocoa, Accelerate, Security, IOKit, QuartzCore,
Metal, MetalKit, AVFoundation, AudioToolbox,
AudioUnit, CoreAudio, CoreMIDI, CoreFoundation,
AppKit, CoreGraphics, CoreText, Foundation, ImageIO,
SystemConfiguration, libc++, libSystem, libobjc
```

## Protocollo ARA

ARA (Audio Random Access) e' il protocollo proprietario Celemony per comunicazione bidirezionale DAW ↔ plugin. A differenza del normale processing VST3 (stream sequenziale), ARA consente:

- Accesso casuale all'audio completo prima del playback
- Analisi offline dell'intero file
- Comunicazione di note, tempo, tonalita' alla DAW
- Ricezione di contesto musicale dalla DAW
- Sincronizzazione di modifiche in tempo reale

Il wrapper registra "ARA Main Factory" come classe aggiuntiva. Tutta la logica ARA (45 classi `MUAra*`) risiede nel Core.
