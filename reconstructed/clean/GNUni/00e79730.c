// Function: FUN_00e79730
// Address: 00e79730
// Size: 711 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNCelemonyAccountClient"
//   "GNLicenseContext"
//   "GNTimeInterval"
//   "_timeout"
//   "_isDemo"
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


void FUN_00e79730(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00044470();
  *this_ptr = &g_025878c0;
  this_ptr[2] = &g_02587c78;
  this_ptr[3] = &g_02587cb0;
  this_ptr[0xc] = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00e79b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLicenseContext");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00e79bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNCelemonyAccountClient");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00e79ce0();
  FUN_00e79dc0();
  FUN_00e79ea0();
  FUN_00e79f80();
  *(void*)(this_ptr + 0x13) = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00e7a060();
    FUN_00e87980();
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_00098010();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

