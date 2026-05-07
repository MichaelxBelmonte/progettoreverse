// Function: FUN_01103ee0
// Address: 01103ee0
// Size: 9650 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "MUTimeline"
//   "GNObject"
//   "float"
//   "MUAudioSource"
//   "MUPart"
//   "MUAudioSourceDescription"
//   "MUDocument"
//   "_decomposedAudioSignalsAreInvalid"
//   "MUAdjustAtacksParameterSet"
//   "_isEditingDetection"
//   "_audioSourceDescription"
//   "MUAudioSourceItem"
//   "float *"
//   "MUAudioSourceElement"
//   "MUAudioSourceAttackItem"
//   "MUAudioSourcePrincipalItem"
//   "double"
//   "GNInt"
//   "MUAnalyzerParameterSet"
//   ... +42 more
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


void FUN_01103ee0(void)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025d8f90;
  this_ptr[7] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01106f80();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSource");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107070();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  FUN_01107160();
  this_ptr[10] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107240();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseTimeline");
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107330();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107420();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107510();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xf) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x84) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x11) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x12) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x13] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x15) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01107600();
  *(void*)(this_ptr + 0x17) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xbc) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x18) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x19] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011076e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  this_ptr[0x1a] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011077d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceAttackItem");
  }
  this_ptr[0x1b] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011078c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceSibilantItem");
  }
  this_ptr[0x1c] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011079b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  this_ptr[0x1d] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107aa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  this_ptr[0x1e] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107b90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  this_ptr[0x1f] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107c80();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  this_ptr[0x20] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107d70();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceAttackItem");
  }
  this_ptr[0x21] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107e60();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceAttackItem");
  }
  this_ptr[0x22] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107f50();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceAttackItem");
  }
  this_ptr[0x23] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108040();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  this_ptr[0x24] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108130();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  this_ptr[0x25] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108220();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  *(void*)(this_ptr + 0x26) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x134) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108310();
    FUN_00e87980();
  }
  this_ptr[0x27] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108490();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioRenderInfo");
  }
  *(void*)(this_ptr + 0x28) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x141) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x29] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108580();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAnalyzerParameterSet");
  }
  this_ptr[0x2a] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108670();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAdjustAtacksParameterSet");
  }
  this_ptr[0x2b] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108760();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAdjustAtacksParameterSet");
  }
  *(void*)(this_ptr + 0x2c) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108850();
    FUN_00e87980();
  }
  FUN_011089c0();
  *(void*)(this_ptr + 0x2e) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x171) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x172) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x173) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x2f] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108aa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElementAnalyzerEngine");
  }
  *(void*)(this_ptr + 0x30) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x184) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x31) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x32] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x33] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108b90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"GNObject");
  }
  this_ptr[0x34] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108c80();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeSliceParameterBuffer");
  }
  *(void*)(this_ptr + 0x35) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1a9) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1aa) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ab) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ac) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x36] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108d70();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDocument");
  }
  FUN_01108e60();
  FUN_01108f40();
  FUN_01109020();
  *(void*)(this_ptr + 0x3a) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01109100();
  this_ptr[0x3c] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011091e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescriptions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioRecordingDescription");
  }
  this_ptr[0x3d] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011092d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceInstrumentPortion");
  }
  this_ptr[0x3e] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011093c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  FUN_011094b0();
  this_ptr[0x40] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01109590();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDocument");
  }
  this_ptr[0x41] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01109680();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  *(void*)(this_ptr + 0x42) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x214) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01109770();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x43) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011098e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21c) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01109a60();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x44) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

