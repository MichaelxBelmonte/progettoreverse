// Function: FUN_017d66e0
// Address: 017d66e0
// Size: 1312 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "GNInt"
//   "MULoop"
//   "_loopComponents"
//   "_isAddingCrashCymbal"
//   "_variationIndex"
//   "_isDisabled"
//   "_averagePitchIndex"
//   "_densityIndex"
//   "_matchGrade"
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


void FUN_017d66e0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01150e50();
  *this_ptr = &g_02600830;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_017d6cf0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_017d6e90();
  FUN_017d6f70();
  this_ptr[0xb] = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_017d7050();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_loopComponents";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_017d7140();
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_017d7220();
    FUN_00e87980();
  }
  FUN_017d73e0();
  *(void*)(this_ptr + 0xf) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar2 = FUN_01c2d280();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

