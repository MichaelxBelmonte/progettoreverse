// ===================================================================
// PitchDetection — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (33):
//   bool            _isSlaveElementValid
//   bool            _isSlaveElementEndTimeValid
//   GNInt           _isSyncingToMasterOrValidatingCaches
//   double          _decayStartPoint
//   double          _decayEndPoint
//   float           _pitchModulationFactor
//   float           _pitchDriftFactor
//   bool            _isMuted
//   double          _anchorPoint
//   double          _releasePoint
//   double          _startTime
//   double          _duration
//   float           _pitchCenter
//   float           _amplitudeFactor
//   double          _amplitudeFadeInEndSourceTime
//   double          _amplitudeFadeOutStartSourceTime
//   double          _amplitudeFadeInShapePow
//   double          _amplitudeFadeOutShapePow
//   float           _sibilantBalance
//   float           _formantOffset
//   double          _attackDuration
//   double          _sourceTimeForElementTimeFunctionAttackSlope
//   double          _attackSlopeFactor
//   double          _fadeInTime
//   double          _fadeOutTime
//   bool            _sourceTimeForElementTimeFunctionExceedsDuration
//   bool            _didRequestCacheValidation
//   double          _initialTimeStretchingOffset
//   bool            _didFixDetection
//   bool            _didFixTime
//   bool            _didFixPitch
//   bool            _didAddAndMute
//   bool            _didShiftTime


// ============================================================
// 01135410
// ============================================================
// Function: FUN_01135410
// Address: 01135410
// Size: 8173 bytes
// Class: PitchDetection
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUElement"
//   "MUTrack"
//   "MUSampledFunction"
//   "MUFunction"
//   "MUAudioComponent"
//   "MUNoteRealization"
//   "_duration"
//   "_elements"
//   "_startTime"
//   "_element"
//   "MUDataPointLinearFunction"
//   "_isMuted"
//   "MUPulseAssignmentTarget"
//   "MUSuccessiveJoin"
//   "double"
//   "GNInt"
//   "MUAudioEffectChain"
//   ... +40 more
// === PitchDetection properties ===
//   bool            _isSlaveElementValid
//   bool            _isSlaveElementEndTimeValid
//   GNInt           _isSyncingToMasterOrValidatingCaches
//   double          _decayStartPoint
//   double          _decayEndPoint
//   float           _pitchModulationFactor
//   float           _pitchDriftFactor
//   bool            _isMuted
//   double          _anchorPoint
//   double          _releasePoint
//   double          _startTime
//   double          _duration
//   float           _pitchCenter
//   float           _amplitudeFactor
//   double          _amplitudeFadeInEndSourceTime
//   double          _amplitudeFadeOutStartSourceTime
//   double          _amplitudeFadeInShapePow
//   double          _amplitudeFadeOutShapePow
//   float           _sibilantBalance
//   float           _formantOffset
//   double          _attackDuration
//   double          _sourceTimeForElementTimeFunctionAttackSlope
//   double          _attackSlopeFactor
//   double          _fadeInTime
//   double          _fadeOutTime
//   bool            _sourceTimeForElementTimeFunctionExceedsDuration
//   bool            _didRequestCacheValidation
//   double          _initialTimeStretchingOffset
//   bool            _didFixDetection
//   bool            _didFixTime
//   ... +3 more


void FUN_01135410(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  void*puVar11;
  
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
  *this_ptr = &g_025c7fc8;
  this_ptr[7] = &g_025eefe0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025d14f8;
  this_ptr[7] = &g_025d18c0;
  this_ptr[8] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137b60();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_masterElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  this_ptr[9] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137c50();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_slaveElements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137d40();
    FUN_00e87980();
  }
  this_ptr[0xe] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137eb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_element";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUMidiComponent");
  }
  puVar11 = this_ptr + 0xf;
  this_ptr[0xf] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137fa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction",param_3,param_4,puVar11);
  }
  this_ptr[0x10] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138090();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_elements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElementRenderCluster");
  }
  this_ptr[0x11] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138180();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_elements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUConcurrentJoin");
  }
  this_ptr[0x12] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138270();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioEffectChain");
  }
  *(void*)(this_ptr + 0x13) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138360();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_precedingElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSuccessiveJoin");
  }
  this_ptr[0x15] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138450();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_followingElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSuccessiveJoin");
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x17] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x18] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x19] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138540();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_element";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteRealization");
  }
  this_ptr[0x1a] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138630();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  this_ptr[0x1b] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138720();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioComponent");
  }
  this_ptr[0x1c] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138810();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_element";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioComponent");
  }
  this_ptr[0x1d] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1e] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x1f) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x20] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138900();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_elements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this_ptr[0x21] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011389f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElementRealtimeInfo");
  }
  *(void*)(this_ptr + 0x22) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x23] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x24] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x25] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x26] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x27) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x13c) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x28] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x29] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x2a] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x2b] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138ae0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  this_ptr[0x2c] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138bd0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  this_ptr[0x2d] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138cc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  this_ptr[0x2e] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x2f] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x30) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x181) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x31] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138db0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointLinearFunction");
  }
  this_ptr[0x32] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138ea0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointLinearFunction");
  }
  this_ptr[0x33] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138f90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSampledFunction");
  }
  this_ptr[0x34] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01139080();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  this_ptr[0x35] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01139170();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDecomposedAudioSignal");
  }
  this_ptr[0x36] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x37) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1b9) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ba) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1bb) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1bc) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

