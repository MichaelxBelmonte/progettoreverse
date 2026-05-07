// Function: FUN_017964f0
// Address: 017964f0
// Size: 1954 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUTimeline"
//   "float"
//   "GNFraction"
//   "GNInt"
//   "_timeSliceCount"
//   "_pitchOffset"
//   "MUScalePitchSystemSequence"
//   "_beatDivision"
//   "_beatCount"
//   "_allStartBeat"
//   "_isBlues"
//   "_bluesRoot"
//   "_considersBlues"
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


void FUN_017964f0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026021a8;
  FUN_01114080();
  FUN_011143b0();
  *this_ptr = &g_0260c778;
  this_ptr[4] = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01796fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  this_ptr[5] = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_017970a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePitchSystemSequence");
  }
  *(void*)(this_ptr + 6) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0x100000000;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01797190();
  FUN_01797270();
  FUN_01797350();
  FUN_01797430();
  FUN_01797510();
  FUN_017975f0();
  *(void*)(this_ptr + 0xf) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x7c) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x10) = 0;
  lVar2 = FUN_01796330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_017976d0();
  FUN_017977b0();
  FUN_01797890();
  FUN_01797970();
  FUN_01797a50();
  FUN_01797b30();
  FUN_01797c10();
  FUN_01797cf0();
  FUN_01797dd0();
  return;
}

