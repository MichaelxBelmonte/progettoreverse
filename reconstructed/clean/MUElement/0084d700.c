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

