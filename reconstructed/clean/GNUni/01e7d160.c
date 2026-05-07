// Function: FUN_01e7d160
// Address: 01e7d160
// Size: 811 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNFilePath"
//   "GNFont"
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


void FUN_01e7d160(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_001ab9a0();
  *this_ptr = &g_026742f8;
  FUN_01e7d770();
  FUN_01e7d850();
  FUN_01e7d930();
  this_ptr[10] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7da10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  FUN_01e7db00();
  FUN_01e7dbe0();
  FUN_01e7dcc0();
  FUN_01e7dda0();
  FUN_01e7de80();
  FUN_01e7df60();
  this_ptr[0x11] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e040();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e130();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFont");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e220();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFont");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e310();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFont");
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_01e7ce20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01e7e400();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFont");
  }
  FUN_01e7e4f0();
  FUN_01e7e5d0();
  return;
}

