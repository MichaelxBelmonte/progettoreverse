// Function: FUN_0026b600
// Address: 0026b600
// Size: 1063 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "MDToolbarVersionCtrl"
//   "MDToolbarQuantizeMacrosCtrl"
//   "MDToolbarUndoCtrl"
//   "MDToolbarToolCtrl"
//   "MDToolbarEditMixCtrl"
//   "MDToolbarEditModeCtrl"
//   "MDToolbarEditorViewCtrl"
//   "MDToolbarTrackMemoryUsageCtrl"
//   "_showsEditorBar"
// === MDNotificationObserver properties ===
//   bool            _didChooseQuantization
//   bool            _customValue
//   bool            _showsReplaceRanges
//   bool            _isEditingDetection
//   float           _trackHeaderWidth
//   GNDoubleRange   _startTimeRange
//   GNDoubleRange   _destTimeRange
//   float           _animateZoomToTimeProgress
//   bool            _updateViewPositionDisabled
//   GNInt           _selectedIndex
//   GNInt           _fixedCount
//   bool            _showsEditorBar
//   double          _stopTime
//   double          _startTime


void FUN_0026b600(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_0026adc0();
  *this_ptr = &g_024c8000;
  *(void*)(this_ptr + 0x11) = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bc70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditMixCtrl");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bd60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditModeCtrl");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026be50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarQuantizeMacrosCtrl");
  }
  puVar4 = this_ptr + 0x15;
  this_ptr[0x15] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bf40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarUndoCtrl",param_3,param_4,puVar4);
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c030();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarToolCtrl");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditorViewCtrl");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c210();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c300();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVersionCtrl");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c3f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTrackMemoryUsageCtrl");
  }
  return;
}

