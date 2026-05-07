// Function: FUN_00bf6440
// Address: 00bf6440
// Size: 671 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNView"
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


void FUN_00bf6440(void)

{
  int iVar1;
  int64_t lVar2;
  void*puVar3;
  char *pcVar4;
  uint32_t uVar5;
  
  lVar2 = FUN_00c43820();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0017fbd0();
    FUN_00e87760();
    FUN_00d4ff40();
    if (1 < g_02802630) {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_001bcb00();
    lVar2 = FUN_00c43820();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_00c4c000();
      iVar1 = FUN_00e7ddf0();
      pcVar4 = "GNUni";
      if (iVar1 == 0) {
        pcVar4 = (char *)0x0;
      }
      FUN_00e879c0(pcVar4,"GNView");
    }
    lVar2 = FUN_00c43820();
    if (*(char *)(lVar2 + 0xbb) == '\0') {
      FUN_00c4c0f0();
      iVar1 = FUN_00e7ddf0();
      pcVar4 = "GNUni";
      if (iVar1 == 0) {
        pcVar4 = (char *)0x0;
      }
      FUN_00e879c0(pcVar4,"GNView");
    }
    FUN_00d50c00();
    uVar5 = FUN_00e87770();
    FUN_00e87920(uVar5,0);
    FUN_001bb300();
    FUN_001bb300();
  }
  return;
}

