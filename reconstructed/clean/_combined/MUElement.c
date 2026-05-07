// ===================================================================
// MUElement — Complete reconstructed pseudocode
// 6 functions
// ===================================================================

// Registered properties (26):
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


// ============================================================
// 01181260
// ============================================================
// Function: FUN_01181260
// Address: 01181260
// Size: 1771 bytes
// Class: MUElement
// String references:
//   "bool"
//   "float"
//   "MUElement"
//   "_noteRealization"
//   "MUNote"
//   "double"
//   "GNInt"
//   "_realizations"
//   "_originalAnchorTime"
//   "_timeQuantization"
//   "_originalPitchDeviation"
//   "_pitchQuantization"
//   "_pitchWasSetManually"
//   "_timeWasSetManually"
//   "_manuallySetAmpFactor"
//   "_pitchDriftWasSetManually"
//   "_westernStandardScaleSnapOffset"
// === MUElement properties ===
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


void FUN_01181260(void)

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
  *this_ptr = &g_025ecd90;
  this_ptr[7] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181a00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteRealization";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  this_ptr[0xd] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181af0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_realizations";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  return;
}



// ============================================================
// 0084d700
// ============================================================
// Function: FUN_0084d700
// Address: 0084d700
// Size: 1572 bytes
// Class: MUElement
// String references:
//   "MUElement"
//   "MUTrack"
//   "GNHeartbeatHandler"
//   "MUScalePitchSystem"
//   "GNTimeInterval"
//   "_startTime"
//   "_stopTime"
//   "_intervalPreviewStartDelay"
//   "_referencePitchIndex"
//   "_selectedPitchIndex"
//   "double"
//   "GNInt"
// === MUElement properties ===
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


void FUN_0084d700(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_0084c490();
  this_ptr[7] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02642358;
  this_ptr[7] = &g_02642700;
  puVar4 = this_ptr + 8;
  this_ptr[8] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084df00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePitchSystem",param_3,param_4,puVar4);
  }
  FUN_0084dff0();
  this_ptr[10] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e1c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e2b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xf) = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  return;
}



// ============================================================
// 0082db10
// ============================================================
// Function: FUN_0082db10
// Address: 0082db10
// Size: 1738 bytes
// Class: MUElement
// String references:
//   "bool"
//   "MUElement"
//   "GNPropertyObserver"
//   "MUAudioSourceComponent"
//   "_showsLeftSeparator"
//   "_feedbacksEditing"
//   "_showsLeftDisjoinArrows"
//   "_showsRightDisjoinArrows"
//   "_selected"
//   "_feedbackDisconnected"
//   "_flagsDirty"
//   "GNInt"
// === MUElement properties ===
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


void FUN_0082db10(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0059c6c0();
  this_ptr[0x2d] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_026251e0;
  this_ptr[2] = &g_02625b68;
  this_ptr[0x27] = &g_02625ba8;
  this_ptr[0x2d] = &g_02625bd8;
  this_ptr[0x2e] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0x2f] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0x30] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceComponent");
  }
  *(void*)(this_ptr + 0x31) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x189) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18a) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18b) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18c) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x32) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x194) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e630();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 0086a790
// ============================================================
// Function: FUN_0086a790
// Address: 0086a790
// Size: 933 bytes
// Class: MUElement
// String references:
//   "bool"
//   "MUElement"
//   "GNPropertyObserver"
//   "_timeHandleViews"
//   "_inRegionCheck"
//   "_toolMode"
//   "MUTimeHandleTool"
//   "MUFunctionPoint"
//   "GNInt"
// === MUElement properties ===
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


void FUN_0086a790(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0059c6c0();
  this_ptr[0x2d] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02637f18;
  this_ptr[2] = &g_026388a8;
  this_ptr[0x27] = &g_026388e8;
  this_ptr[0x2d] = &g_02638918;
  this_ptr[0x2e] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ac60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  this_ptr[0x2f] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ad50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_timeHandleViews";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeHandleTool");
  }
  *(void*)(this_ptr + 0x30) = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x31] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ae40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunctionPoint");
  }
  this_ptr[0x32] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086af30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunctionPoint");
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00869410
// ============================================================
// Function: FUN_00869410
// Address: 00869410
// Size: 594 bytes
// Class: MUElement
// === MUElement properties ===
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


void FUN_00869410(void)

{
  void*this_ptr;
  
  *this_ptr = &g_0266bec8;
  this_ptr[2] = &g_0266c900;
  this_ptr[0x27] = &g_0266c940;
  this_ptr[0x28] = &g_0266c990;
  if (this_ptr[0x5b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x5a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x59] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x58] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x57] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x56] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x54] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x4e] != 0) {
    FUN_00d50b20();
  }
  if ((int64_t *)this_ptr[0x46] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x46] + 0x10))();
    FUN_00d50b20();
  }
  if (this_ptr[0x42] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x41] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x40] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x36] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x35] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x34] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x33] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x31] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x30] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x29] != 0) {
    FUN_00d50b20();
  }
  FUN_0006d770();
  return;
}



// ============================================================
// 011cbec0
// ============================================================
// Function: FUN_011cbec0
// Address: 011cbec0
// Size: 724 bytes
// Class: MUElement
// String references:
//   "MUElement"
//   "MUTrack"
//   "double"
//   "GNInt"
//   "_performanceTime"
//   "_startMargin"
//   "_endMargin"
// === MUElement properties ===
//   bool            _showsLeftSeparator
//   bool            _feedbacksEditing
//   bool            _showsLeftDisjoinArrows
//   bool            _showsRightDisjoinArrows
//   bool            _selected
//   GNInt           _feedbackDisconnected
//   bool            _flagsDirty
//   GNTimeInterval  _intervalPreviewStartDelay
//   GNInt           _referencePitchIndex
//   GNInt           _selectedPitchIndex
//   double          _startTime
//   double          _stopTime
//   GNInt           _toolMode
//   bool            _inRegionCheck
//   double          _originalAnchorTime
//   double          _timeQuantization
//   float           _originalPitchDeviation
//   float           _pitchQuantization
//   bool            _pitchWasSetManually
//   bool            _timeWasSetManually
//   float           _manuallySetAmpFactor
//   bool            _pitchDriftWasSetManually
//   GNInt           _westernStandardScaleSnapOffset
//   GNInt           _startMargin
//   GNInt           _endMargin
//   double          _performanceTime


void FUN_011cbec0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_010f86d0();
  *this_ptr = &g_025dead0;
  *(void*)(this_ptr + 0xb) = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011cc270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  this_ptr[0xe] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011cc360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  return;
}

