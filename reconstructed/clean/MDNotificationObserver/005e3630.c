// Function: FUN_005e3630
// Address: 005e3630
// Size: 1325 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "GNLabel"
//   "GNSlider"
//   "GNPopUpButton"
//   "GNControlMatrix"
//   "GNSwitchButton"
//   "MUPerformance"
//   "_didChooseQuantization"
//   "GNComboBox"
//   "_customValue"
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


void FUN_005e3630(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_002730b0();
  *this_ptr = &g_02512e00;
  this_ptr[0x11] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNControlMatrix");
  }
  this_ptr[0x12] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3eb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3fa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  this_ptr[0x14] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4090();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  puVar4 = this_ptr + 0x15;
  this_ptr[0x15] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4180();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  this_ptr[0x16] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  this_ptr[0x17] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPopUpButton");
  }
  this_ptr[0x18] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformance");
  }
  *(void*)(this_ptr + 0x19) = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x1a] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x1b] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4630();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNComboBox");
  }
  *(void*)(this_ptr + 0x1c) = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

