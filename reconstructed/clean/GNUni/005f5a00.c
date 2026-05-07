// Function: FUN_005f5a00
// Address: 005f5a00
// Size: 1109 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNValue"
//   "GNView"
//   "GNCoord"
//   "MDWorkspaceLayoutStrategy"
//   "MDWorkspaceLayoutViewDelegate"
//   "_layoutView"
//   "_isRoot"
//   "_dumpLayout"
//   "_workspaceNeedsLayout"
//   "_spacing"
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


void FUN_005f5a00(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_000a5ee0();
  *this_ptr = &g_025085a0;
  this_ptr[2] = &g_02508fd0;
  *(void*)(this_ptr + 0x31) = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x189) = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18a) = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18c) = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x32] = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f5f30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_layoutView";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceLayoutStrategy");
  }
  this_ptr[0x33] = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNValue");
  }
  this_ptr[0x34] = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6110();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceLayoutViewDelegate");
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  return;
}

