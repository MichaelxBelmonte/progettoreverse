// Function: FUN_002b11a0
// Address: 002b11a0
// Size: 1289 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNOperationProgressObserver"
//   "float"
//   "_progress"
//   "MDProgressViewController"
//   "MDProgressViewControllerDelegate"
//   "_duration"
//   "_preparedCondition"
//   "_progressOffset"
//   "_progressFactor"
//   "double"
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


void FUN_002b11a0(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  char *pcVar3;
  
  FUN_002b0b70();
  this_ptr[4] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[5] = &g_024d3940;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024ed660;
  this_ptr[4] = &g_024eda40;
  this_ptr[5] = &g_024eda78;
  FUN_002b17b0();
  FUN_002b1890();
  FUN_002b1970();
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_002b0910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_002b1a50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDProgressViewController");
  }
  return;
}

