// Function: FUN_011bf720
// Address: 011bf720
// Size: 1217 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "GNUni"
//   "MUTimeline"
//   "float"
//   "MUElementAnalyzer"
//   "double"
//   "_isPreliminary"
//   "MUTempoAnalyzerEvent"
//   "_sourceDuration"
//   "_maxUsedPeriod"
//   "_elementsAreTonal"
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


void FUN_011bf720(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00044470();
  *this_ptr = &g_025f2cd0;
  this_ptr[2] = &g_025f3088;
  this_ptr[3] = &g_025f30c0;
  this_ptr[0xc] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bfda0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTempoAnalyzerEvent");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bfe90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTempoAnalyzerEvent");
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011bff80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011c0070();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011c0160();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzer");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x12) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x95) = 0;
  lVar2 = FUN_011bf510();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

