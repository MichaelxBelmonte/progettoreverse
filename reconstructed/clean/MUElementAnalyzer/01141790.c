// Function: FUN_01141790
// Address: 01141790
// Size: 11251 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "SInt64"
//   "GNInt *"
//   "float"
//   "MUElementAnalyzer"
//   "MUAudioSource"
//   "_sampleRate"
//   "_sampleCount"
//   "_duration"
//   "_maxAmplitude"
//   "MUAudioSourceItem"
//   "float *"
//   "MUAudioSourceAttackItem"
//   "double"
//   "GNInt"
//   "MUAnalyzerParameterSet"
//   "MUAudioSourcePropertyPoint"
//   "_timeSliceCount"
//   "_parameterValuesPerSecond"
//   "_parameterDataSize"
//   ... +53 more
// === MUElementAnalyzer properties ===
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more


void FUN_01141790(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00044470();
  *this_ptr = &g_025e5748;
  this_ptr[2] = &g_025e5b00;
  this_ptr[3] = &g_025e5b38;
  this_ptr[0xc] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01144cf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzer");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01144de0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSource");
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01144ed0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAnalyzerParameterSet");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x18) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xc4) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01144fc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURawNoteSeparation");
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011450b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURawNoteSeparation");
  }
  *(void*)(this_ptr + 0x1c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe1) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1d) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xec) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1e) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf4) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1f) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xfc) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x20) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x104) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x21) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x10c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x22) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x114) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011451a0();
  FUN_01145280();
  FUN_01145360();
  FUN_01145440();
  *(void*)(this_ptr + 0x27) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x28] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x29) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x2a] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01145520();
  this_ptr[0x2c] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01145600();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectralTimeSlice");
  }
  this_ptr[0x2d] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011456f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectralTimeSlice");
  }
  this_ptr[0x2e] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011457e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceAttackItem");
  }
  this_ptr[0x2f] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011458d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourcePropertyPoint");
  }
  this_ptr[0x30] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011459c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceItem");
  }
  this_ptr[0x31] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01145ab0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"PNTestMatrixPath");
  }
  this_ptr[0x32] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01145ba0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFilterEngine");
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x34) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x36] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x37] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x38] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x39] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3a] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01145c90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeSliceParameterBuffer");
  }
  *(void*)(this_ptr + 0x3b) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01145d80();
  FUN_01145e60();
  FUN_01145f40();
  FUN_01146020();
  FUN_01146100();
  FUN_011461e0();
  FUN_011462c0();
  *(void*)(this_ptr + 0x43) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x44) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x224) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x45) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x22c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x46) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x47] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x48] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x49] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4a] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4b] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011463a0();
  FUN_01146480();
  FUN_01146560();
  FUN_01146640();
  FUN_01146720();
  FUN_01146800();
  FUN_011468e0();
  FUN_011469c0();
  FUN_01146aa0();
  FUN_01146b80();
  FUN_01146c60();
  this_ptr[0x57] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01146d40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzerEngineStaticTables");
  }
  return;
}

