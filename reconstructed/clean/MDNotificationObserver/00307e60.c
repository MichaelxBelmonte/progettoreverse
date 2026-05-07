// Function: FUN_00307e60
// Address: 00307e60
// Size: 1083 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "GNTextField"
//   "GNButton"
//   "MDPropertyObserver"
//   "MDVolumeSlider"
//   "MUMeterView"
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


void FUN_00307e60(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_00304cf0();
  *this_ptr = &g_024e90b8;
  this_ptr[0x16] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308500();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUMeterView");
  }
  puVar4 = this_ptr + 0x17;
  this_ptr[0x17] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003085f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField",param_3,param_4,puVar4);
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003086e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDVolumeSlider");
  }
  this_ptr[0x19] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003087d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003088c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003089b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x1c] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308aa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  this_ptr[0x1d] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308b90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  FUN_00308c80();
  this_ptr[0x1f] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308d60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x20] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308e50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x21] = 0;
  lVar2 = FUN_00307c00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00308f40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  return;
}

