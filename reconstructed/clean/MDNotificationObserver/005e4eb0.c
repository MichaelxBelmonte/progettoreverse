// Function: FUN_005e4eb0
// Address: 005e4eb0
// Size: 968 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "_startTime"
//   "MUTimeJump"
//   "MUScrubbingTimeProgressor"
//   "MURenderer"
//   "_stopTime"
//   "double"
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


void FUN_005e4eb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  void*puVar4;
  
  FUN_005da070();
  *this_ptr = &g_024e25a0;
  this_ptr[2] = &g_024e2a70;
  this_ptr[5] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5440();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeJump");
  }
  this_ptr[6] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5530();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScrubbingTimeProgressor");
  }
  this_ptr[9] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5620();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  puVar4 = this_ptr + 10;
  this_ptr[10] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5710();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver",param_3,param_4,puVar4);
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e5800();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_003235a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e58f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  FUN_005e59e0();
  FUN_005e5ac0();
  return;
}

