// Function: FUN_006dd100
// Address: 006dd100
// Size: 958 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MDNotificationObserver"
//   "MUTrack"
//   "MDPropertyObserver"
//   "_isOutputSlot"
//   "_isDefaultSlot"
//   "_stereoItemCount"
//   "MUAudioIOConfiguration"
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


void FUN_006dd100(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_001e3dc0();
  *this_ptr = &g_024f5bf0;
  this_ptr[2] = &g_024f66d8;
  this_ptr[0x39] = &g_024f6718;
  this_ptr[0x48] = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006dd610();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  *(void*)(this_ptr + 0x49) = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x249) = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24c) = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4a] = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006dd700();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  this_ptr[0x4b] = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006dd7f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioIOConfiguration");
  }
  this_ptr[0x4c] = 0;
  lVar2 = FUN_00452aa0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006dd8e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  return;
}

