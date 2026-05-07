// Function: FUN_017955a0
// Address: 017955a0
// Size: 823 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNViewController"
//   "MUTimeline"
//   "MUPart"
//   "MUScalePitchSystem"
//   "MUPerformance"
//   "MUChordRootAnalyzerEntry"
//   "_calcsAlternateChords"
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


void FUN_017955a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00d4ff80();
  *this_ptr = &g_026021a8;
  FUN_01114080();
  FUN_011143b0();
  *this_ptr = &g_02602550;
  puVar4 = this_ptr + 4;
  this_ptr[4] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01795af0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline",param_3,param_4,puVar4);
  }
  this_ptr[5] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01795be0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePitchSystem");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01795cd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPart");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01795dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformance");
  }
  *(void*)(this_ptr + 8) = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_01795eb0();
  FUN_01795f90();
  this_ptr[0xb] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01796070();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUChordRootAnalyzerEntry");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_01795180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01796160();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  FUN_01796250();
  return;
}

