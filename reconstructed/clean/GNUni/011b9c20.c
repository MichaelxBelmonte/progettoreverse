// Function: FUN_011b9c20
// Address: 011b9c20
// Size: 510 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MULoopLibrary"
//   "_attributeOptionTypes"
//   "MUTagAttributeOption"
//   "_optionType"
//   "_isHierarchical"
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


void FUN_011b9c20(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01150e50();
  *this_ptr = &g_025c4838;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar2 = FUN_011b98d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011b9ed0();
  this_ptr[9] = 0;
  lVar2 = FUN_011b98d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_optionType";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_011b98d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011ba0a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_attributeOptionTypes";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_011b98d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011ba190();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_optionType";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  FUN_011ba280();
  return;
}

