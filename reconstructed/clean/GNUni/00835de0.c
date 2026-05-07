// Function: FUN_00835de0
// Address: 00835de0
// Size: 818 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNRunLoopObserverDelegate"
//   "GNRunLoopObserver"
//   "MUTrack"
//   "GNCursor"
//   "GNPropertyObserver"
//   "GNImage"
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


void FUN_00835de0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_001b3bf0();
  this_ptr[0x3f] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x40] = &g_02582380;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0262cd28;
  this_ptr[2] = &g_0262d8b0;
  this_ptr[0x3c] = &g_0262d8f0;
  this_ptr[0x3f] = &g_0262d920;
  this_ptr[0x40] = &g_0262d970;
  this_ptr[0x41] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCursor");
  }
  this_ptr[0x42] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836340();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCursor");
  }
  this_ptr[0x43] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836430();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  this_ptr[0x44] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836520();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  this_ptr[0x45] = 0;
  lVar2 = FUN_00835bf0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00836610();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNRunLoopObserver");
  }
  return;
}

