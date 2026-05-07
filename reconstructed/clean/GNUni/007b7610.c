// Function: FUN_007b7610
// Address: 007b7610
// Size: 1068 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "GNFile"
//   "_dataLocation"
//   "UInt64"
//   "_sampleFrames"
//   "_channelCount"
//   "_headerNeedsUpdate"
//   "_suspendedFileOffset"
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


void FUN_007b7610(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02544ad8;
  FUN_007b72e0();
  *this_ptr = &g_02544ea0;
  this_ptr[3] = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_007b7b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFile");
  }
  *(void*)(this_ptr + 4) = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_007b7bf0();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

