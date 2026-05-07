// Function: FUN_000a8dd0
// Address: 000a8dd0
// Size: 577 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDInspectorViewController"
//   "_selectedIndex"
//   "_fixedCount"
//   "GNInt"
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


void FUN_000a8dd0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_000a5ee0();
  *this_ptr = &g_024e46f0;
  this_ptr[2] = &g_024e50e0;
  this_ptr[0x31] = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a9080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDInspectorViewController");
  }
  this_ptr[0x32] = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000a9170();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  *(void*)(this_ptr + 0x33) = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19c) = 0;
  lVar2 = FUN_000a2ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

