# 16 — Canonical Ledger

**Ultimo aggiornamento:** 2026-04-08

## Obiettivo

Consolidare in un solo punto le funzioni P0/P1 che bloccano la replica fedele del software.

Questo ledger distingue:

- fatti supportati da stringhe/xref/pseudocodice
- inferenze ancora ragionevoli ma non canoniche
- contraddizioni da risolvere in Ghidra GUI

---

## Summary

| Addr | Size | Best Current Name | Confidence | Stato |
|------|------|-------------------|------------|-------|
| `0x01447a70` | 71.837 | `findPolyphonicDetectionItems` | High | critico, decompile failed |
| `0x01433f60` | 57.867 | `detection_orchestrator` | High | critico, decompile failed |
| `0x013903d0` | 5.999 | `assignEnergyClaimsInSampleRange` | Very high | leggibile, da rifinire semanticamente |
| `0x01103ee0` | 9.650 | `MUElementAnalyzer_copy_init_and_property_graph` | High | ex-anchor STFT declassata; copy/init + property registration ormai forti |
| `0x00e83120` | 956 | `GNFastFourierTransformer_create` | Very high | canonico |
| `0x012a8c90` | 45.108 | `MULSSComponentRenderer_or_fft_consumer` | Medium | ruolo misto da confermare |
| `0x01146100` | 175 | `relevanceMatrix_property_init_or_accessor` | Medium-high | helper piccolo ma chiave semantica |
| `0x015cd2c0` | 103.639 | `MUSpectralTimeSlice_or_spectral_pipeline_unknown` | Low | mega-funzione opaca |

---

## P0 Functions

### `0x01447a70`

Best current name:

- `MUElementAnalyzer::findPolyphonicDetectionItems`

Evidence:

- stringa diretta in [deep_poly_detect.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_poly_detect.txt)
- size `71.837` e classe `MUElementAnalyzer` in [index.tsv](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/index.tsv)
- chiamata da `0x01433f60`
- chiama `0x013903d0`

Current assessment:

- questo e' il cuore della separazione polifonica DNA2
- e' il target con il maggior rapporto valore/tempo per il replication effort

Open questions:

- come ordina i candidati
- dove aggiorna `_relevanceMatrix`
- quali threshold fermano l'estrazione iterativa

Next manual step:

- seguire in Ghidra i loop maggiori, le scritture su matrici e i callsite verso `0x013903d0`

### `0x01433f60`

Best current name:

- `MUElementAnalyzer::detection_orchestrator`

Evidence:

- e' il caller diretto di `0x01447a70` in [deep_poly_detect.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_poly_detect.txt)
- e' anche il caller di `makeMonophonicItems` a `0x0146c830` in [deep_mono_detect.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_mono_detect.txt)
- size `57.867` in [largest_anonymous.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/largest_anonymous.txt)

Current assessment:

- sembra il dispatcher alto livello tra detection polifonica e monofonica
- e' probabilmente il punto dove si prende la decisione architetturale piu' importante della pipeline

Open questions:

- branch mono/poly reali
- prerequisiti per chiamare `findPolyphonicDetectionItems`
- rapporto con `initFromTimeSignal` e con la parte spectral

Next manual step:

- mappare i branch verso `0x01447a70`, `0x0146c830` e i relativi predicate inputs

### `0x013903d0`

Best current name:

- `MUAudioSourceDescription::assignEnergyClaimsInSampleRange`

Evidence:

- stringa diretta e callers in [deep_energy_claims.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_energy_claims.txt)
- mapping nominale in [func_names.tsv](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/func_names.tsv)
- pseudocodice pulito in [013903d0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/013903d0.c)
- usa getter di `MUSpectralTimeSlice` in [deep_spectral_slice.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_spectral_slice.txt)

Current assessment:

- funzione canonica e ad alta confidenza
- converte sample range in window/time-slice range e itera strutture/liste di source items
- e' il ponte piu' concreto tra spectral data e DNA2 separation

Open questions:

- semantica esatta di `param_3` e `param_4`
- regola esatta di claim / skip / merge
- rapporto con `_energyRawMatrix`

Next manual step:

- annotare i punti in cui legge magnitude/trueFreq/tonality e dove scrive i claim

### `0x01103ee0`

Best current name:

- `MUElementAnalyzer_copy_init_and_property_graph`

Evidence:

- xref su `_windowOverlapForTimeSlices` in [deep_window_overlap.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_window_overlap.txt)
- pseudocodice pulito in [01103ee0.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01103ee0.c)
- l'entry copia i campi `0x10..0x30` da `unaff_RSI` a `unaff_RDI`
- il corpo mostra base init + vtable swap + lunga property registration
- doc di dettaglio in [41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md](41_MUELEMENTANALYZER_COPY_INIT_01103EE0.md)

Current assessment:

- qui la contraddizione rispetto alla doc precedente e' sostanzialmente chiusa
- oggi e' piu' corretto trattarla come funzione strutturale di copy/init e property graph
- non e' un buon target per la replica numerica STFT

Open questions:

- dove si trovi la vera funzione STFT distinta che la doc iniziale aveva fuso con questa
- quanto del copy iniziale appartenga a clone completo vs init di sotto-oggetto analyzer-like

Next manual step:

- cercare il vero STFT loop seguendo i caller di `0x00e83120` e i path che entrano in `0x015c4e40`

### `0x00e83120`

Best current name:

- `GNFastFourierTransformer::create`

Evidence:

- pseudocodice pulito in [00e83120.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/GNFastFourierTransformer/00e83120.c)
- classe coerente in [index_classified.tsv](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/index_classified.tsv)
- stringa FFT diretta in [deep_fft_factory.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_fft_factory.txt)

Current assessment:

- funzione canonica
- crea oggetto FFT, mappa size -> log2, alloca buffer e chiama `vDSP_create_fftsetup`

Open questions:

- quali size siano realmente usate dal prodotto nelle varie modalita'
- se esistano factory wrapper ulteriori sopra questa funzione

Next manual step:

- risalire i caller principali per estrarre i valori reali di size/hop e il legame con `fft1/fft2`

---

## P1 Functions

### `0x012a8c90`

Best current name:

- `MULSSComponentRenderer_or_fft_consumer`

Evidence:

- stringhe esplicite `MULSSComponentRenderer::*BufferWithSize` in [012a8c90.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MULSSComponentRenderer/012a8c90.c)
- chiamante delle due FFT factory in [deep_fft_factory.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_fft_factory.txt)
- classificazione `MULSSComponentRenderer` in [index_classified.tsv](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/index_classified.tsv)

Current assessment:

- il nome "FFT engine" usato in passato e' troppo stretto
- il file pulito suggerisce un blocco renderer/resynthesis che consuma FFT e gestisce buffer

Open questions:

- quanto e' renderer
- quanto e' analisi FFT
- se crea o usa una FFT per componente, frame o voce

Next manual step:

- separare i blocchi di buffer management, scheduling e chiamate FFT dentro la mega-funzione

### `0x01146100`

Best current name:

- `relevanceMatrix_property_init_or_accessor`

Evidence:

- stringa `_relevanceMatrix` in [deep_relevance_matrix.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/deep_relevance_matrix.txt)
- chiamata da `0x01141790` in [01141790.c](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/reconstructed/clean/MUElementAnalyzer/01141790.c)
- size minima `175` con pattern da helper

Current assessment:

- helper piccolo ma semanticamente importante
- non sembra logica di update della matrix, ma piu' probabilmente init/access/property metadata

Open questions:

- qual e' la funzione sorella che esegue l'update reale della relevance matrix

Next manual step:

- mappare la serie `0x01145d80..0x011462c0` e identificare quale helper corrisponde a quale campo/matrice

### `0x015cd2c0`

Best current name:

- `MUSpectralTimeSlice_or_spectral_pipeline_unknown`

Evidence:

- top-4 mega-funzione per size in [largest_anonymous.txt](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/largest_anonymous.txt)
- classificata come `MUSpectralTimeSlice` solo per prossimita' indirizzo in [index_classified.tsv](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/index_classified.tsv)
- `DECOMPILE_FAILED` in [index.tsv](/Users/michaelbelmonte/Desktop/Progetto_Reverse_Mike/ghidra/output/MikeCore/decompiled/index.tsv)

Current assessment:

- il nome attuale non e' canonico
- e' un target ad alto valore ma ad alto rischio di misclassificazione

Open questions:

- e' davvero `MUSpectralTimeSlice`
- e' resynthesis
- e' spectral pipeline
- e' un aggregatore di piu' responsabilita'

Next manual step:

- attacco da callers/callees e string xref vicini alla regione spectral/formant, non da addr proximity

---

## Corrections To Previous Assumptions

Due punti vanno de-rischiati subito:

- `0x01103ee0`: non e' piu' corretto trattarla come "STFT loop" ad alta confidenza; il clean file sembra soprattutto init/copy/property registration
- `0x012a8c90`: non e' piu' corretto trattarla come "FFT engine puro"; il clean file la colloca piu' vicino a `MULSSComponentRenderer` con gestione buffer

Questo non invalida il lavoro precedente.
Significa solo che la replica precisa richiede una canonizzazione semantica piu' rigorosa prima di implementare.

---

## Next Step

Il prossimo passo ad alto valore e':

1. aprire in Ghidra GUI `0x01433f60` e `0x01447a70`
2. annotare branch principali, loop e write-set
3. decidere se `0x01103ee0` va declassata da P0 algoritmica a P1 strutturale
4. attaccare `0x015cd2c0` da contesto reale e non da classificazione euristica
