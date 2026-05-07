// Function: FUN_002720c0
// Address: 002720c0
// Size: 1651 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUPart"
//   "_autoanalyzesSplitsAndJoins"
//   "_tuningIsEditable"
//   "MUScaleModeFormatter"
//   "_detectsChurchModes"
//   "_detectsDetailedModeChanges"
//   "_previewsKeys"
//   "_canFindMoreModes"
//   "_canFindLessModes"
//   "_modesCountDirection"
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


void FUN_002720c0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0026cd40();
  *this_ptr = &g_02650890;
  this_ptr[2] = &g_02651410;
  this_ptr[0x27] = &g_02651450;
  this_ptr[0x28] = &g_026514a0;
  this_ptr[0x3f] = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00272840();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPart");
  }
  *(void*)(this_ptr + 0x40) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x41] = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00272930();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleModeFormatter");
  }
  *(void*)(this_ptr + 0x42) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x211) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x212) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x213) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x214) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x215) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x43) = 0;
  lVar2 = FUN_00271e80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

