// Function: FUN_005fbb80
// Address: 005fbb80
// Size: 505 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNViewController"
//   "MUAudioRecorderCenterDelegate"
//   "MUDeviceContext"
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


void FUN_005fbb80(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00009570();
  this_ptr[0x29] = &g_025de6f0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024ea8e8;
  this_ptr[2] = &g_024eb0c8;
  this_ptr[0x20] = &g_024eb110;
  this_ptr[0x21] = &g_024eb140;
  this_ptr[0x29] = &g_024eb170;
  this_ptr[0x2a] = 0;
  lVar2 = FUN_003708c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fbe10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDeviceContext");
  }
  this_ptr[0x2b] = 0;
  lVar2 = FUN_003708c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fbf00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  this_ptr[0x2c] = 0;
  lVar2 = FUN_003708c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fbff0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  return;
}

