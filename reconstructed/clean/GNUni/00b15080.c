// Function: FUN_00b15080
// Address: 00b15080
// Size: 500 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNTimer"
//   "GNTextField"
//   "GNProgressBar"
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


void FUN_00b15080(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0005aa20();
  *this_ptr = &g_02545640;
  this_ptr[0xe] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNProgressBar");
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  this_ptr[0x10] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNProgressBar");
  }
  this_ptr[0x11] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_00b14e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b15730();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTimer");
  }
  return;
}

