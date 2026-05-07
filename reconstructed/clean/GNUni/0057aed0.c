// Function: FUN_0057aed0
// Address: 0057aed0
// Size: 515 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "MDInspector"
//   "MDInspectorViewController"
//   "_mode"
//   "MDWorkspaceModuleViewController"
//   "_inspectorPanels"
//   "MDInspectorModeFlags"
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


void FUN_0057aed0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_001d34c0();
  *this_ptr = &g_024c0458;
  this_ptr[0x15] = 0;
  lVar2 = FUN_00017df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0057b180();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_inspectorPanels";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDInspectorViewController");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_00017df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0057b270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceModuleViewController");
  }
  FUN_0057b360();
  this_ptr[0x18] = 0;
  lVar2 = FUN_00017df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0057b440();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDInspector");
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_00017df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

