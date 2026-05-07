// Function: FUN_001b5060
// Address: 001b5060
// Size: 806 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNObject"
//   "GNTableViewDelegate"
//   "GNScrollView"
//   "GNTableView"
//   "_columns"
//   "GNCoord"
//   "GNTableViewDataSource"
//   "GNBrowser"
//   "_width"
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


void FUN_001b5060(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00006550();
  this_ptr[2] = &g_02698528;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[3] = &g_02698580;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02676898;
  this_ptr[2] = &g_02676d40;
  this_ptr[3] = &g_02676d98;
  this_ptr[4] = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b5450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  this_ptr[5] = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b5540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTableView");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b5630();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNScrollView");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001b5720();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_columns";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBrowser");
  }
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_001b4e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

