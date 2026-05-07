// Function: FUN_005f6340
// Address: 005f6340
// Size: 854 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNScrollView"
//   "GNCoord"
//   "_horizontalScrollerHeight"
//   "_verticalScrollerWidth"
//   "_preferedFrameSizeLocked"
//   "MDWorkspaceLayoutDelegate"
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


void FUN_005f6340(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_000a5ee0();
  *this_ptr = &g_024c89f0;
  this_ptr[2] = &g_024c93f8;
  *(void*)(this_ptr + 0x31) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x18c) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6710();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x32) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6890();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x194) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x34] = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6a10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNScrollView");
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceLayoutDelegate");
  }
  return;
}

