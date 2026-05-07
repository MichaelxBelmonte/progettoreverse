# 10 — Verification Log & Confidence Scores

**Generato:** 2026-04-07 14:20
**Findings totali:** 77

## Summary

| Status | Count |
|--------|-------|
| VERIFIED | 77 |
| PARTIAL | 0 |
| UNVERIFIED | 0 |
| WRONG | 0 |
| NEW (discoveries) | 0 |
| **Confidence media** | **100%** |

---

## 01_ARCHITETTURA

**Confidence media: 99%** | Verified: 6/6

| Confidence | Status | Claim | Notes |
|-----------|--------|-------|-------|
| 100% | ✅ VERIFIED | Wrapper espone solo 3 simboli (GetPluginFactory, bundleEntry |  |
| 100% | ✅ VERIFIED | Wrapper e' Universal Binary (arm64 + x86_64) |  |
| 100% | ✅ VERIFIED | Core e' solo x86_64 (Rosetta 2) |  |
| 100% | ✅ VERIFIED | Core linka 15 framework attesi |  |
| 100% | ✅ VERIFIED | Tabella completa prefissi di classe nel Core | Verifica se ci sono prefissi non documentati |
| 95% | ✅ VERIFIED | Naming: MU* (DSP), MD* (Display), GN* (Generic) | Prefix counts confirm the pattern |
---

## 02_WRAPPER_VST3

**Confidence media: 99%** | Verified: 16/16

| Confidence | Status | Claim | Notes |
|-----------|--------|-------|-------|
| 100% | ✅ VERIFIED | Funzione hash E47C2F6A98B9 esiste nel Core | Address: 0x0000000000015710 |
| 100% | ✅ VERIFIED | Funzione hash C869701EF43D esiste nel Core | Address: 0x0000000000013ad0 |
| 100% | ✅ VERIFIED | Funzione hash D1B1BBF33E6C esiste nel Core | Address: 0x0000000000015720 |
| 100% | ✅ VERIFIED | Funzione hash F998CFF24768 esiste nel Core | Address: 0x0000000000015730 |
| 100% | ✅ VERIFIED | Funzione hash C8C6A8649030 esiste nel Core | Address: 0x0000000000015740 |
| 100% | ✅ VERIFIED | Wrapper referenzia 'Core.sbb' |  |
| 100% | ✅ VERIFIED | Wrapper referenzia 'CoreF.sbb' |  |
| 100% | ✅ VERIFIED | Wrapper referenzia 'Core-5.4.2.006.sbb' |  |
| 100% | ✅ VERIFIED | Wrapper referenzia 'CoreF-5.4.2.006.sbb' |  |
| 100% | ✅ VERIFIED | Wrapper importa CFBundleCreate |  |
| 100% | ✅ VERIFIED | Wrapper importa CFBundleLoadExecutable |  |
| 100% | ✅ VERIFIED | Wrapper importa CFBundleGetFunctionPointerForName |  |
| 100% | ✅ VERIFIED | UUID 5653544D... decodes to 'VSTMlpgmelodyne ' |  |
| 100% | ✅ VERIFIED | Code signing via SecRequirementCreateWithString |  |
| 100% | ✅ VERIFIED | Stringhe ARA nel wrapper | Gia' documentato |
| 90% | ✅ VERIFIED | Wrapper contiene 98 funzioni | Counted 98 (doc says 98) |
---

## 03_FFT

**Confidence media: 100%** | Verified: 18/18

| Confidence | Status | Claim | Notes |
|-----------|--------|-------|-------|
| 100% | ✅ VERIFIED | Core importa vDSP_create_fftsetup |  |
| 100% | ✅ VERIFIED | Core importa vDSP_fft_zrip |  |
| 100% | ✅ VERIFIED | Core importa vDSP_ctoz |  |
| 100% | ✅ VERIFIED | Core importa vDSP_ztoc |  |
| 100% | ✅ VERIFIED | Core importa vDSP_maxmgv |  |
| 100% | ✅ VERIFIED | Core importa vDSP_vadd |  |
| 100% | ✅ VERIFIED | Core importa vDSP_vmul |  |
| 100% | ✅ VERIFIED | Core importa vDSP_vsmul |  |
| 100% | ✅ VERIFIED | Core importa vDSP_vclr |  |
| 100% | ✅ VERIFIED | Stringa 'GNFFTException' presente |  |
| 100% | ✅ VERIFIED | Stringa errore FFT table size presente |  |
| 100% | ✅ VERIFIED | Variabile _fft1 presente |  |
| 100% | ✅ VERIFIED | Variabile _fft2 presente |  |
| 100% | ✅ VERIFIED | Variabile _sampleRateReductionForFourierProcessing |  |
| 100% | ✅ VERIFIED | Variabile _sampleRateReductionsRatio |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_UseStackedFft presente |  |
| 100% | ✅ VERIFIED | Window type: Hann (sqrt-Hann) | Tipo di finestra FFT confermato |
| 100% | ✅ VERIFIED | Variabili windowOverlap | Gia' documentato |
---

## 04_DNA_ALGORITHM

**Confidence media: 100%** | Verified: 25/25

| Confidence | Status | Claim | Notes |
|-----------|--------|-------|-------|
| 100% | ✅ VERIFIED | Parametro DNA2Test_UseDNA2 |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_UseStackedFft |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_UseEnergyClaim |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_DetectMonophonic |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_DetectBluesHarp |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_SeparateRaspiness |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_WriteNoiseFiles |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_ShowQuality |  |
| 100% | ✅ VERIFIED | Parametro DNA2Test_ShowRelevance |  |
| 100% | ✅ VERIFIED | DNA3 reference (MUSpectralPointDNA3) |  |
| 100% | ✅ VERIFIED | MUElementAnalyzer classe presente |  |
| 100% | ✅ VERIFIED | Metodo findPolyphonicDetectionItems() | Trovato via stringa di errore |
| 100% | ✅ VERIFIED | Metodo makeMonophonicItems() | Trovato via stringa di errore |
| 100% | ✅ VERIFIED | Metodo findMonophonicPitchInFrequencyDomain() | Trovato via stringa di errore |
| 100% | ✅ VERIFIED | Metodo separateAttacksInTimeDomain() | Trovato via stringa di errore |
| 100% | ✅ VERIFIED | Metodo detectAfterTransfer() | Trovato via stringa di errore |
| 100% | ✅ VERIFIED | Metodo assignEnergyClaimsInSampleRange() | Trovato via stringa di errore |
| 100% | ✅ VERIFIED | Variabile _analyzerCanSwitchToPolyphonicDetection |  |
| 100% | ✅ VERIFIED | Variabile _useDNA2ForPolyphonicDetection |  |
| 100% | ✅ VERIFIED | Variabile _polyPitchRelevanceMatrixOriginal |  |
| 100% | ✅ VERIFIED | Variabile _polyPitchRelevanceMatrixExtracted |  |
| 100% | ✅ VERIFIED | Variabile _energyClaimFactor |  |
| 100% | ✅ VERIFIED | Variabile _subharmonicChains |  |
| 100% | ✅ VERIFIED | Variabile _subharmonicPaths |  |
| 100% | ✅ VERIFIED | Totale stringhe contenenti 'DNA' | Gia' documentato |
---

## 05_QUALITY_SCORING

**Confidence media: 100%** | Verified: 2/2

| Confidence | Status | Claim | Notes |
|-----------|--------|-------|-------|
| 100% | ✅ VERIFIED | Quality variables presenti nel binario (51/51) | Missing: 0 |
| 100% | ✅ VERIFIED | Tutte le 47 quality variables sono documentate | Nessuna quality variable mancante |
---

## 06_FORMANT_SYNTHESIS

**Confidence media: 100%** | Verified: 3/3

| Confidence | Status | Claim | Notes |
|-----------|--------|-------|-------|
| 100% | ✅ VERIFIED | FormantsSynth parametri presenti (13/13) |  |
| 100% | ✅ VERIFIED | Tutti i 13 parametri FormantsSynth_ sono documentati | Nessun parametro mancante |
| 100% | ✅ VERIFIED | Tutti i 37 tipi MUSpectrumShaper sono documentati | Nessun tipo mancante |
---

## 07_DATA_STRUCTURES

**Confidence media: 100%** | Verified: 3/3

| Confidence | Status | Claim | Notes |
|-----------|--------|-------|-------|
| 100% | ✅ VERIFIED | MUSpectralTimeSlice metodi verificati (8/8) |  |
| 100% | ✅ VERIFIED | MUAudioSource* gerarchia verificata (7/7) |  |
| 100% | ✅ VERIFIED | Tutte le 28 classi MUAudioSource* sono documentate | Nessuna classe mancante |
---

## 08_SECURITY

**Confidence media: 98%** | Verified: 4/4

| Confidence | Status | Claim | Notes |
|-----------|--------|-------|-------|
| 100% | ✅ VERIFIED | OpenSSL presente nel binario |  |
| 100% | ✅ VERIFIED | CMS_EnvelopedData (PKCS#7) presente |  |
| 100% | ✅ VERIFIED | SecRequirementCreateWithString nel wrapper |  |
| 90% | ✅ VERIFIED | PACE Anti-Piracy namespace presente |  |