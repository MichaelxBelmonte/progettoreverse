// Function: FUN_01e73a80
// Address: 01e73a80
// Size: 521 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNSwitchButton"
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


void FUN_01e73a80(void)

{
  int64_t lVar1;
  int iVar2;
  char *pcVar3;
  uint32_t uVar4;
  int64_t local_218;
  
  lVar1 = FUN_01e7eb20();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_000f60b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000f62d0();
    FUN_01e7ed90();
    lVar1 = FUN_01e7eb20();
    if (*(char *)(lVar1 + 0xbb) == '\0') {
      FUN_01e7ee70();
      iVar2 = FUN_00e7ddf0();
      pcVar3 = "GNUni";
      if (iVar2 == 0) {
        pcVar3 = (char *)0x0;
      }
      FUN_00e879c0(pcVar3,"GNSwitchButton");
    }
    FUN_00d50c00();
    FUN_00e87770();
    uVar4 = FUN_01d01000();
    FUN_00e87920(uVar4,0);
    if (local_218 != 0) {
      FUN_00d50b20();
    }
    FUN_000993f0();
    FUN_000993f0();
  }
  return;
}

