# Progetto Reverse Mike

Reverse engineering di MikeCore (Melodyne DSP engine) per il plugin INSANE.

## Environment

```bash
cd ~/Desktop/Progetto_Reverse_Mike
```

## Struttura

```
binaries/          ← binari da analizzare (MikeCore, MikeCoreF, mike, MikeStandalone, metallib, Resources.rrr)
docs/              ← 12 report tematici (architettura, FFT, DNA, quality, formant, ...)
ghidra/
  scripts/         ← script Java per Ghidra headless
  output/          ← dati estratti per binario
tools/             ← orchestrator.py, pipeline.py
data/              ← confidence.json, stringhe DSP, log
```

## Commands

| Command | What It Does |
|---------|-------------|
| `/verify` | Esegue l'orchestratore: verifica docs vs binari, confidence scoring |
| `/pipeline` | Pipeline completa: inventory → Ghidra → extract → analyze → verify |
| `/pipeline inventory` | Solo inventario binari |
| `/pipeline ghidra` | Solo import/analisi Ghidra headless |
| `/pipeline extract` | Solo estrazione dati da Ghidra |
| `/pipeline analyze` | Solo analisi e confronto |
| `/analyze-binary` | Analisi approfondita di un singolo binario |
| `/update-doc` | Aggiorna un doc specifico con nuovi dati |
| `/status` | Mostra stato avanzamento del progetto |

## Key Paths

- **Binaries**: `~/Desktop/Progetto_Reverse_Mike/binaries/`
- **Docs**: `~/Desktop/Progetto_Reverse_Mike/docs/`
- **Ghidra output**: `~/Desktop/Progetto_Reverse_Mike/ghidra/output/`
- **Ghidra projects**: `~/Progetto_Mike/`, `~/MikeCore_Project/`
- **Ghidra app**: `/Applications/ghidra_12.0.4_PUBLIC/`

## Binaries

| File | Size | Arch | Analyzed |
|------|------|------|----------|
| MikeCore | 43 MB | x86_64 | Yes (Ghidra + deep extraction) |
| MikeCoreF | 91 MB | Universal (x86_64 + ARM64) | Skipped (same DSP as MikeCore, only crypto differs) |
| mike | 214 KB | Universal | Yes (Ghidra) |
| MikeStandalone | 149 KB | Universal | Skipped (clone of mike + version check) |
| default.metallib | 5.6 KB | Metal shader | Yes — blit shader only, no DSP (doc 09) |
| Resources.rrr | 28 MB | GNFA archive | Yes — 997 entries: 192 .gnui + 518 .png (doc 09) |
