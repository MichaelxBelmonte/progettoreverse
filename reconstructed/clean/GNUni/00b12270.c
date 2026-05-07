// Function: FUN_00b12270
// Address: 00b12270
// Size: 812 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "_count"
//   "GNHiPassEqualizer"
//   "_delayLineLength"
//   "_delayLineWriteOffset"
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


void FUN_00b12270(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t arg1;
  void*this_ptr;
  char *pcVar3;
  void*puVar4;
  
  FUN_005fea00();
  *this_ptr = &g_025465c0;
  this_ptr[0x12] = *(void*)(arg1 + 0x90);
  *(void*)(this_ptr + 0x13) = 0;
  lVar2 = FUN_00b12030();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  lVar2 = FUN_00b12030();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x14) = 0;
  lVar2 = FUN_00b12030();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00b12690();
  FUN_00b12770();
  FUN_00b12850();
  puVar4 = this_ptr + 0x18;
  FUN_00b12930();
  FUN_00b12a10();
  this_ptr[0x1a] = 0;
  lVar2 = FUN_00b12030();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b12af0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHiPassEqualizer",param_3,param_4,puVar4);
  }
  return;
}

