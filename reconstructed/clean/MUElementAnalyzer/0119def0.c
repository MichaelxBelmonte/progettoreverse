// Function: FUN_0119def0
// Address: 0119def0
// Size: 3878 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "_duration"
//   "MUAudioSourceDescription"
//   "float **"
//   "MURecordingAnalyzerReferenceTrackInfo"
//   "float *"
//   "double"
//   "GNInt"
//   "MUAnalyzerParameterSet"
//   "MUAudioRecordingDescription"
//   "_timeSliceCount"
//   "MUElementAnalyzerEngine"
//   "_previousRenderedBackgroundDisplayType"
//   "_previousTestValue1"
//   "_previousTestValue2"
//   "_previousTestValue3"
//   "_previousTestValue4"
//   "_testFlag1"
//   ... +10 more
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


void FUN_0119def0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00044470();
  *this_ptr = &g_025f4cb8;
  this_ptr[2] = &g_025f5078;
  this_ptr[3] = &g_025f50b0;
  this_ptr[0xc] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f1b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f2a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRecordingDescription");
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f390();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAnalyzerParameterSet");
  }
  FUN_0119f480();
  this_ptr[0x10] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f560();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzerEngine");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f650();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription");
  }
  puVar4 = this_ptr + 0x12;
  this_ptr[0x12] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f740();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription",param_3,param_4,puVar4);
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f830();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURecordingAnalyzerReferenceTrackInfo");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1b) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xdc) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1c) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1d) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xec) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1e) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf4) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xf5) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1f] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x20) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

