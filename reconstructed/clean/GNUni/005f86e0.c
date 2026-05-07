// Function: FUN_005f86e0
// Address: 005f86e0
// Size: 2297 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNTextField"
//   "GNButton"
//   "GNImage"
//   "GNColor"
//   "GNCoord"
//   "_showsCloseButtons"
//   "MDTabTargetDelegate"
//   "_header"
//   "MDWorkspaceTabHeaderViewItem"
//   "_showsMenuButtons"
//   "_maxItemLength"
//   "_minTabCount"
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


void FUN_005f86e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_000a5ee0();
  *this_ptr = &g_02506210;
  this_ptr[2] = &g_02506d08;
  this_ptr[0x31] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9380();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_header";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  this_ptr[0x32] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9470();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  this_ptr[0x33] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9560();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  puVar4 = this_ptr + 0x34;
  this_ptr[0x34] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9650();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem",param_3,param_4,puVar4);
  }
  this_ptr[0x35] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9740();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  this_ptr[0x36] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9830();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  this_ptr[0x37] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9920();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  this_ptr[0x38] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9a10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  this_ptr[0x39] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x3a] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x3b] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x3c] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  *(void*)(this_ptr + 0x3d) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e9) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1ec) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3e) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9ec0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 500) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x3f) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fa030();
    FUN_00e87980();
  }
  this_ptr[0x40] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fa210();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTabTargetDelegate");
  }
  this_ptr[0x41] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fa350();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  this_ptr[0x42] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fa440();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  FUN_005fa530();
  return;
}

