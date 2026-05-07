# 02 — Wrapper VST3 (Fase A — Completa)

## API Offuscata Wrapper → Core

Il wrapper non chiama funzioni con nomi leggibili. Usa **hash esadecimali a 12 caratteri** come nomi di funzione.

### Le 5 funzioni dell'API segreta

| Hash | Indirizzo Core | Tipo | Ipotesi |
|------|---------------|------|---------|
| `E47C2F6A98B9` | 0x15710 | Thin → jmp 0x1f4a320 | **GetFactory** |
| `C869701EF43D` | 0x13ad0 | Grossa (0x1C00 bytes, stack 0x468) | **Initialize** |
| `D1B1BBF33E6C` | 0x15720 | Thin → jmp 0xbce740 | **CreateInstance** |
| `F998CFF24768` | 0x15730 | Thin → jmp 0xbd0100 | **GetInfo** |
| `C8C6A8649030` | 0x15740 | Thin → jmp 0x16ace20 + singleton | **GetSharedState** |

### Storage dei puntatori

```
[base + 0x8d8] ← C869701EF43D (Initialize) — prima funzione chiamata
[base + 0x8e0] ← E47C2F6A98B9 (GetFactory)
[base + 0x8e8] ← D1B1BBF33E6C (CreateInstance)
[base + 0x8f0] ← F998CFF24768 (GetInfo)
[base + 0x8f8] ← C8C6A8649030 (GetSharedState)
```

Se una qualsiasi risoluzione fallisce (NULL), il caricamento viene abortito.

## Sequenza completa di avvio

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
         │    2. SecRequirementCreateWithString()
         │    3. Verifica la firma del Core.sbb
         │    4. Se fallisce: retry loop (thread_switch con delay 0xC8)
         │
         ├──► CFBundleCreate() → carica il bundle .sbb
         ├──► CFBundleLoadExecutable() → carica il Mach-O
         ├──► CFBundleGetFunctionPointerForName() × 5
         ├──► C869701EF43D(arg0, arg1) → Initialize Core
         ├──► Alloca factory (16 bytes: vtable ptr + refcount = 1)
         └──► Ritorna factory alla DAW
```

## UUID / GUID

```
5653544D6C70676D656C6F64796E6520 = "VSTMlpgmelodyne " (ASCII)
  ├── "VSTM"     = VST Module identifier
  ├── "lpg"      = plugin group (Celemony internal)
  └── "melodyne " = plugin name + padding

543305DE-E055-444A-B82A-1AA0F241A68E = Controller FUID (VST3 class ID)
```

Il primo e' il **Processor Component ID**, il secondo e' il **Controller ID**. La DAW li usa per istanziare le due parti del plugin.

## Struttura interna

Il wrapper contiene 2 riferimenti espliciti alla stringa "ARA Main Factory", confermando il suo ruolo di proxy anche per il protocollo ARA (oltre che VST3).

**98 funzioni** (symbol-stripped) implementano le interfacce C++ VST3 + ARA:

- `IComponent` — ciclo di vita del plugin
- `IAudioProcessor` — processing audio
- `IEditController` — parametri e UI
- `ARA::IMainFactory` — factory per ARA
- `ARA::IDocumentController` — gestione documenti ARA

**384 chiamate virtuali** (vtable dispatch) — tutto delegato al Core. Zero logica DSP nel wrapper.

## Audio buffer flow

```
DAW                    Wrapper                  Core (Rosetta 2)
 │                       │                        │
 ├─ process(data) ──────►├─ vtable dispatch ─────►├─ processa audio
 │                       │  (passa puntatori raw) │  (in-place o output)
 │◄── return ────────────┤◄── return ─────────────┤
```

Il wrapper NON copia ne' converte i buffer. Passa i puntatori raw direttamente. Questo spiega il design Universal wrapper + x86_64 Core.

## Interfaccia ARA nel Core

45 classi `MUAra*`:

| Classe | Ruolo |
|--------|-------|
| `MUAraDocumentController` | Gestione documenti |
| `MUAraAudioSource` | Sorgente audio da analizzare |
| `MUAraAudioModification` | Modifiche (pitch shift, time stretch) |
| `MUAraAudioPlaybackRegion` | Regione di playback nella timeline |
| `MUAraMusicalContext` | Contesto musicale (tonalita', tempo) |
| `MUAraNotesContentReader` | Lettura note per la DAW |
| `MUAraTempoEntriesContentReader` | Lettura tempo |
| `MUAraBarSignaturesContentReader` | Lettura time signature |
| `MUAraKeySignaturesContentReader` | Lettura key signature |
| `MUAraSheetChordsContentReader` | Lettura accordi |
| `MUAraStaticTuningContentReader` | Lettura tuning |
| `MUAraModelManager` | Gestione del modello dati |
| `MUAraPlugInWrapper` | Wrapper del plugin ARA |
