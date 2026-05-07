// Function: FUN_0050da50
// Address: 0050da50
// Size: 719 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "_showsReplaceRanges"
//   "_isEditingDetection"
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


void FUN_0050da50(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_0050aad0();
  *this_ptr = &g_024e31c0;
  this_ptr[2] = &g_024e3c40;
  this_ptr[0x27] = &g_024e3c80;
  *(void*)((int64_t)this_ptr + 0x1ae) = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_0050de10();
  this_ptr[0x37] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050def0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x38] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050dfe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x39] = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0050e0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  *(void*)(this_ptr + 0x3a) = 0;
  lVar2 = FUN_00275860();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

