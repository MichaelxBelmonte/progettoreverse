// Function: FUN_001baad0
// Address: 001baad0
// Size: 927 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNObject"
//   "GNAssociationBinding"
//   "_isMultipleSelectionSupported"
//   "_isEstablished"
//   "_objectIsEdited"
//   "_didUpdate"
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


void FUN_001baad0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00006550();
  *this_ptr = &g_02672c28;
  this_ptr[2] = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001baf60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAssociationBinding");
  }
  this_ptr[3] = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001bb050();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  *(void*)(this_ptr + 4) = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21) = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_001bb140();
  *(void*)(this_ptr + 6) = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_001bb220();
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_001ba850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

