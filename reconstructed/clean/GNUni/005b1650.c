// Function: FUN_005b1650
// Address: 005b1650
// Size: 585 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNUndoStackFrame"
//   "GNViewController"
//   "GNDisplayGroup"
//   "_documentController"
//   "GNUndoManager"
//   "_hadChanges"
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


void FUN_005b1650(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00006550();
  *this_ptr = &g_0267fa98;
  this_ptr[2] = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b19a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_documentController";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  this_ptr[3] = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b1a90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNUndoManager");
  }
  this_ptr[4] = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b1b80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  this_ptr[5] = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005b1c70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNUndoStackFrame");
  }
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *(void*)(this_ptr + 7) = 0;
  lVar2 = FUN_000838a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_005b1d60();
  return;
}

