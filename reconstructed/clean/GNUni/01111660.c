// Function: FUN_01111660
// Address: 01111660
// Size: 760 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUFunction"
//   "MUDataPointLinearFunction"
//   "double"
//   "_xDistanceResolutionForLinearApproximation"
//   "_yDistanceResolutionForLinearApproximation"
//   "_didRequestCacheValidation"
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


void FUN_01111660(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01111a30();
  *this_ptr = &g_025dd278;
  FUN_01111e60();
  *this_ptr = &g_025dce00;
  this_ptr[10] = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01112150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDataPointLinearFunction");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01112240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunction");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

