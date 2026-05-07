# 15 — Replication Blueprint

**Ultimo aggiornamento:** 2026-04-09

## Obiettivo

Trasformare il reverse engineering attuale in una sequenza concreta per ricostruire il software in codice pulito, con priorita' orientate alla replica fedele del comportamento.

Questa blueprint separa:

- cosa serve davvero per replicare il comportamento audio
- cosa serve per compatibilita' host
- quali funzioni sono i colli di bottiglia reali
- in quale ordine conviene ricostruire il codice

---

## Conclusione operativa

Per arrivare a una replica precisa non bisogna partire dai wrapper.

I wrapper `VST3`, `AU`, `AAX` e `standalone` servono a:

- bootstrap host-specific
- caricamento del core condiviso
- integrazione UI / licensing / host transport

Il comportamento audio da replicare vive nel core:

- `MikeCore`
- `MikeCoreF`
- `Resources.rrr`

Quindi il percorso corretto e':

1. fissare il boundary `wrapper -> core`
2. ricostruire layout dati e pipeline nel core
3. ricostruire le formule delle metriche
4. ricostruire la resintesi
5. solo alla fine reimplementare i wrapper host-specific

---

## Stato Del Boundary Wrapper -> Core

Evidenza diretta dai binari wrapper:

- `mike` contiene `Core.sbb`, `CoreF.sbb`, `Core-5.4.2.006.sbb`, `CoreF-5.4.2.006.sbb`
- `MikeAU` contiene `Core.sbb`, `CoreF.sbb`, `AudioComponentInstanceGetComponent`, `AudioComponentGetDescription`
- `MikeAAX` contiene `Core.sbb`, `CoreF.sbb`, entrypoint `ACF*`, stringhe `GNAAXController.cpp`, `GNAAXFactory.cpp`, `MIDI Transport`, `tempo > 0.0`
- `MikeStandalone` contiene `Core.sbb`, `CoreF.sbb`

Output Ghidra locale:

- `mike`: 55 funzioni
- `MikeAU`: 114 funzioni
- `MikeAAX`: 90 funzioni
- `MikeStandalone`: 42 funzioni

Conclusione:

- i wrapper non contengono il DSP principale
- `AU` aggiunge soprattutto bootstrap AudioUnit e UI factory
- `AAX` aggiunge integrazione host/licensing piu' ricca degli altri wrapper
- il reverse dei wrapper serve a replicare packaging e host integration, non le metriche audio

---

## Core Reconstruction Stack

### Strato 1 — Runtime and Object Model

Obiettivo:

- capire inizializzazione oggetti
- ownership dei buffer
- relazioni tra analyzer, slices, matrices e note items

Target principali:

- `MUSpectralTimeSlice`
- `MUElementAnalyzer`
- `MUElementAnalyzerEngine`
- `MUAudioSourceDescription`
- `MUPitchRelevanceMatrix`
- candidate adapter `0x168` del corridoio renderer-slot, oggi driftato tra `MUElementAnalyzer` e `MUVibratoRange`

Blocco:

- senza layout e ownership corretti, le formule successive non sono replicabili in modo fedele
- il descriptor cache condiviso a `state + 0x1a0` e' ora un nodo esplicito da ricostruire, perche' unifica FFT size, sample->slice mapping, cache usate da `MUSpectralTimeSlice` e cardinalita' del cluster renderer/slot a `descriptor + 0x88`

### Strato 2 — STFT / Spectral Front-End

Obiettivo:

- ricostruire pipeline tempo-frequenza identica al prodotto

Funzioni chiave:

- `0x00e83120` — factory FFT (`GNFastFourierTransformer::create`)
- `0x01103ee0` — `MUElementAnalyzer copy/init + property graph`, utile per layout ma non come kernel STFT
- `0x0149f6a0` — `spectralMedianFrequencyHz` / rolloff 50% sul corridoio FFT condiviso
- `0x00e83530` — wrapper forward FFT reale del transformer
- `0x00e83640` — sibling inverse-like sullo stesso storage packed/interleaved
- `0x015c4d90` — adapter thin sopra `MUSpectralTimeSlice::initFromTimeSignal`
- `0x012a8c90` — orchestrazione renderer/FFT sul lato resynthesis
- `0x012b98e0` / `0x012b96f0` — validazione e switch delle size FFT

Elementi da fissare:

- size FFT usate per modalita'
- hop size reali
- rapporto tra `_windowOverlapForTimeSlices` e `_windowOverlapForTrueFreqs`
- stacked FFT / dual FFT
- uso di sqrt-Hann e normalizzazione esatta
- convenzione packed-spectrum `DC/Nyquist` dei wrapper `00e83530 / 00e83640`
- riallineamento helper-per-helper tra `MikeCore` e `MikeCoreF` nelle slice omogenee

### Strato 3 — Spectral Feature Extraction

Obiettivo:

- derivare le quantita' che alimentano detection e quality

Elementi da fissare:

- magnitudine
- fase
- true frequency / reassignment
- harmonic paths
- subharmonic chains
- pitch matrix
- relevance matrix

Funzioni chiave:

- `0x01146100` — init/access `_relevanceMatrix`
- catena attorno a `deep_spectral_slice`, `deep_complex_spectrum`, `deep_harmonic_path`, `deep_subharmonic_chain`

### Strato 4 — DNA2 / Polyphonic Separation

Obiettivo:

- ricostruire la separazione polifonica, che e' uno dei nuclei distintivi del prodotto

Funzioni chiave:

- `0x013903d0` — `assignEnergyClaimsInSampleRange()`, 5999 bytes
- `0x01447a70` — DNA2 core / orchestrator ad alta priorita'
- `0x01433f60` — orchestrator ad alta priorita'

Elementi da fissare:

- ordine di estrazione dei candidati
- uso di `_energyClaimFactor`
- aggiornamento della relevance matrix dopo ogni estrazione
- criteri di stop della separazione
- gestione sub-armonici / rumore / attacchi

### Strato 5 — Quality Scoring

Obiettivo:

- ricostruire le formule che decidono ranking, pruning e visualizzazione

Elementi da fissare:

- pesi relativi delle metriche
- soglie di accettazione / visualizzazione
- normalizzazioni
- quality aggregate vs per-dimension

Nota:

- i nomi delle metriche sono abbondanti nei doc, ma le formule non sono ancora canonizzate
- questa fase dipende direttamente da DNA2 e dai layout dati

### Strato 6 — Resynthesis / Formants

Obiettivo:

- replicare la generazione audio, non solo l'analisi

Target:

- `MULSSGenerator`
- `MULSSComponentRenderer`
- blocchi `FormantsSynth_*`

Elementi da fissare:

- combinazione armonico + noise + pulse + growl
- envelope e ri-sintesi da time slices
- dipendenze dal quality score

---

## Funzioni Prioritarie Assolute

Queste sono le funzioni che sbloccano il salto da "mappa architetturale" a "specifica replicabile":

| Priorita' | Indirizzo | Ruolo |
|----------|-----------|-------|
| P0 | `0x01447a70` | DNA2 core / separazione polifonica |
| P0 | `0x01433f60` | orchestrator core ad alta centralita' |
| P0 | `0x013903d0` | energy claims |
| P0 | `0x01103ee0` | copy/init + property graph di `MUElementAnalyzer`; nodo strutturale, non kernel DSP |
| P0 | `0x00e83120` | FFT factory / size mapping |
| P1 | `0x0149f6a0` | spectral median frequency / rolloff 50% in Hz sul front-end condiviso |
| P1 | `0x012a8c90` | orchestrazione FFT/resynthesis adiacente |
| P1 | `0x01146100` | relevance matrix access/init |
| P1 | `0x015cd2c0` | mega-funzione da confermare semanticamente |

Regola pratica:

- se una funzione P0 resta opaca, non ha senso dichiarare conclusa la replica dell'algoritmo

---

## Sequenza Di Ricostruzione Consigliata

### Fase R1 — Canonical Ledger

Produrre una tabella canonica con:

- indirizzo
- nome provvisorio
- ruolo
- callers
- callees
- stringhe correlate
- confidence
- file doc dove e' citata

Scopo:

- eliminare il drift tra nomi doc, header ricostruiti e classificazione automatica

### Fase R2 — Struct Layout Recovery

Ricostruire in modo rigoroso:

- campi
- tipi
- ordine dei campi
- buffer ownership
- cardinalita' delle matrici

Target immediati:

- `MUSpectralTimeSlice`
- `MUElementAnalyzer`
- `MUElementAnalyzerEngine`
- `MUAudioSourceDescription`

### Fase R3 — Executable Spectral Spec

Scrivere una spec tecnica eseguibile per:

- FFT setup
- windowing
- hop size
- spectral slice generation
- true frequency

Deliverable:

- pseudo-codice rigoroso
- test numerici con segnali sintetici

### Fase R4 — Executable DNA2 Spec

Scrivere una spec tecnica eseguibile per:

- pitch candidate extraction
- relevance update
- energy claims
- note extraction iterativa

Deliverable:

- pseudo-codice rigoroso
- casi di test minimi: sinusoide singola, due armoniche, dyad, triad, transienti

### Fase R5 — Quality Formula Recovery

Separare:

- metriche primitive
- metriche aggregate
- soglie operative
- visual thresholds

Deliverable:

- tabella formule / normalizzazioni / range attesi

### Fase R6 — Clean-Room Reimplementation

Ordine corretto:

1. front-end STFT
2. feature extraction
3. DNA2 / note extraction
4. quality scoring
5. resynthesis
6. host wrappers

---

## Criteri Di Verifica Per Replica Fedele

La replica non va considerata "fedele" finche' non passa almeno questi controlli:

- stessa risposta su sinusoide pura
- stessa risposta su sweep logaritmico
- stessa segmentazione su attacco singolo
- stessa stima pitch su materiale monofonico stabile
- stessa separazione diad/triad su casi sintetici
- stesso ranking tra candidati vicini
- stessa dipendenza da threshold quality
- stessa ricostruzione in overlap-add su caso semplice

---

## Cosa Non Fare Adesso

- non partire dalla GUI
- non partire da `AU` o `AAX`
- non implementare subito il clone completo
- non considerare gli header auto-generati come verita' canonica

Il collo di bottiglia non e' scrivere codice.
Il collo di bottiglia e' canonizzare funzione, formula e layout prima di implementare.

---

## Next Step Immediato

Il prossimo passo a piu' alto valore e':

1. costruire il canonical ledger P0/P1
2. confrontare i wrapper per fissare il boundary `wrapper -> core`
3. iniziare il reverse manuale delle funzioni `0x01447a70`, `0x01433f60`, `0x013903d0`, `0x00e83530`

Solo dopo questo conviene iniziare una clean-room implementation seria.
