// Function: FUN_0053e5a0
// Address: 0053e5a0
// Size: 705 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MUTimeline"
//   "MUTrack"
//   "MUAudioSource"
//   "MUPart"
//   "MUDocument"
//   "_trackIndex"
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


void FUN_0053e5a0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_0053c980();
  *this_ptr = &g_024d2168;
  this_ptr[0x10] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053e9b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDocument");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053eaa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053eb90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPart");
  }
  puVar4 = this_ptr + 0x13;
  this_ptr[0x13] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053ec80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSource",param_3,param_4,puVar4);
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0053ed70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  FUN_0053ee60();
  *(void*)(this_ptr + 0x16) = 0;
  lVar2 = FUN_0015e5d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

