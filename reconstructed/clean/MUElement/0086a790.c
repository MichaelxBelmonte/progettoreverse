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

