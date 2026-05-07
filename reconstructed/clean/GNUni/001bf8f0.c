// Function: FUN_001bf8f0
// Address: 001bf8f0
// Size: 724 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNControl"
//   "GNSize"
//   "_intercellSpacing"
//   "_matrixSize"
//   "_suggestedCellSize"
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


void FUN_001bf8f0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_000f62d0();
  *this_ptr = &g_026ab048;
  this_ptr[2] = &g_026abb78;
  *(void*)(this_ptr + 0x39) = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001bfc30();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1cc) = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1d4) = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x3d] = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001bfdb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNControl");
  }
  return;
}

