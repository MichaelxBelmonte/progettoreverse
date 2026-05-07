// Function: FUN_00302550
// Address: 00302550
// Size: 2538 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "float"
//   "MDDocumentViewController"
//   "MDDocumentController"
//   "MDPropertyObserver"
//   "GNHeartbeatHandler"
//   "GNColor"
//   "MDTimeGridSetter"
//   "GNDoubleRange"
//   "_trackHeaderWidth"
//   "_startTimeRange"
//   "_destTimeRange"
//   "_animateZoomToTimeProgress"
//   "MDKeyModifierActionHelper"
//   "_updateViewPositionDisabled"
//   "MDMultiTrackViewDelegate"
//   "MDSelectionController"
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


void FUN_00302550(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_002fb9c0();
  this_ptr[0x45] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024e0b10;
  this_ptr[2] = &g_024e1580;
  this_ptr[0x27] = &g_024e15c0;
  this_ptr[0x45] = &g_024e16b8;
  this_ptr[0x46] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003032c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x47] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003033b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  puVar4 = this_ptr + 0x48;
  this_ptr[0x48] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003034a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver",param_3,param_4,puVar4);
  }
  this_ptr[0x49] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTimeGridSetter");
  }
  *(void*)(this_ptr + 0x4a) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x4b] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentController");
  }
  this_ptr[0x4c] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentViewController");
  }
  this_ptr[0x4d] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  this_ptr[0x4e] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  this_ptr[0x4f] = 0;
  this_ptr[0x50] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x51] = 0;
  this_ptr[0x52] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x53) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00303a40();
  this_ptr[0x55] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303b20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x56] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303c10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x57] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303d00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0x58] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303df0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  this_ptr[0x59] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303ee0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDKeyModifierActionHelper");
  }
  FUN_00303fd0();
  *(void*)(this_ptr + 0x5b) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x5c] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003040b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMultiTrackViewDelegate");
  }
  this_ptr[0x5d] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003041f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDSelectionController");
  }
  return;
}

