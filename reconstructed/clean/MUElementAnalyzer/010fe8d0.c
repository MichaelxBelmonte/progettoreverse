// Function: FUN_010fe8d0
// Address: 010fe8d0
// Size: 1197 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUElementAnalyzer"
//   "MUAudioSourceItem"
//   "MUAudioSourceAttackItem"
//   "GNInt"
//   "_isMarkedAsPreliminaryItem"
//   "_sortingValue"
//   "_harmonicNumber"
//   "_timePosIndexOfPitchCenterRelevanceStart"
//   "_timePosIndexOfPitchCenterRelevanceEnd"
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


void FUN_010fe8d0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_010fee50();
  *this_ptr = &g_025e7818;
  this_ptr[7] = &g_025e7c80;
  this_ptr[0x27] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzer");
  }
  this_ptr[0x28] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceAttackItem");
  }
  this_ptr[0x29] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceItem");
  }
  *(void*)(this_ptr + 0x2a) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x154) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2b) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x15c) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2c) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

