// Function: FUN_00193b60
// Address: 00193b60
// Size: 934 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNTimer"
//   "GNObject"
//   "GNCoord"
//   "_showsSubitemIndicatorForEmptyEntries"
//   "_autoexpandingRow"
//   "_indentationPerLevel"
//   "GNInt"
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


void FUN_00193b60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00194050();
  *this_ptr = &g_026af340;
  this_ptr[2] = &g_026afdc0;
  FUN_0019e680();
  FUN_0019e850();
  this_ptr[0x56] = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0019ea20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  puVar4 = this_ptr + 0x57;
  this_ptr[0x57] = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0019eb10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  FUN_0019ec00();
  *(void*)(this_ptr + 0x59) = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2cc) = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x5a) = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x5b] = 0;
  lVar2 = FUN_00192f30();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0019ece0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTimer");
  }
  return;
}

