// Function: FUN_005dc2b0
// Address: 005dc2b0
// Size: 2144 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MDNotificationObserver"
//   "MDToolbarVersionCtrl"
//   "MDToolbarQuantizeMacrosCtrl"
//   "MDToolbarUndoCtrl"
//   "MDToolbarToolCtrl"
//   "MDToolbarEditMixCtrl"
//   "MDToolbarEditModeCtrl"
//   "MDToolbarEditorViewCtrl"
//   "MDToolbarTrackMemoryUsageCtrl"
//   "MDToolbarActivityCtrl"
//   "MDToolbarScaleModeCtrl"
//   "_showsEditorBar"
//   "MDToolbarRightPluginConfigCtrl"
//   "MDToolbarPluginTransferCtrl"
//   "MDToolbarTempoPluginCtrl"
//   "MDToolbarAraEditModeCtrl"
//   "MDToolbarSpaceCtrl"
//   "MDToolbarLeftPluginConfigCtrl"
//   ... +2 more
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


void FUN_005dc2b0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_0026adc0();
  *this_ptr = &g_024f79e8;
  *(void*)(this_ptr + 0x11) = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dcfe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarRightPluginConfigCtrl");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTempoPluginCtrl");
  }
  puVar4 = this_ptr + 0x14;
  this_ptr[0x14] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd1c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarPluginTransferCtrl",param_3,param_4,puVar4);
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd2b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarUndoCtrl");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarToolCtrl");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarSpaceCtrl");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditMixCtrl");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditModeCtrl");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarAraEditModeCtrl");
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarQuantizeMacrosCtrl");
  }
  this_ptr[0x1c] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd940();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarLeftPluginConfigCtrl");
  }
  this_ptr[0x1d] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dda30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarActivityCtrl");
  }
  this_ptr[0x1e] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddb20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x1f] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddc10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarAraClickCtrl");
  }
  this_ptr[0x20] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddd00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVersionCtrl");
  }
  this_ptr[0x21] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dddf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x22] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddee0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarAraDebugCtrl");
  }
  this_ptr[0x23] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddfd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTrackMemoryUsageCtrl");
  }
  this_ptr[0x24] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005de0c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditorViewCtrl");
  }
  this_ptr[0x25] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005de1b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarScaleModeCtrl");
  }
  return;
}

