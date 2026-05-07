// Function: FUN_005e5dc0
// Address: 005e5dc0
// Size: 965 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDToolbarGridCtrl"
//   "MDToolbarLeftConfigCtrl"
//   "MDToolbarTempoCtrl"
//   "MDToolbarTransportCtrl"
//   "MDToolbarRightConfigCtrl"
//   "MDToolbarActivityCtrl"
//   "MDToolbarScaleModeCtrl"
//   "MDToolbarVolumeCtrl"
//   "MDToolbarEdtionCtrl"
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


void FUN_005e5dc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_0026adc0();
  *this_ptr = &g_02515680;
  this_ptr[0x11] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e63f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTransportCtrl");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e64e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTempoCtrl");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e65d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarRightConfigCtrl");
  }
  puVar4 = this_ptr + 0x14;
  this_ptr[0x14] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e66c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarLeftConfigCtrl",param_3,param_4,puVar4);
  }
  this_ptr[0x15] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e67b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVolumeCtrl");
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e68a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEdtionCtrl");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarActivityCtrl");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarGridCtrl");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarScaleModeCtrl");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  return;
}

