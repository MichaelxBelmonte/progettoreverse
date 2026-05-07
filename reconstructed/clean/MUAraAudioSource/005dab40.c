// Function: FUN_005dab40
// Address: 005dab40
// Size: 1742 bytes
// Class: MUAraAudioSource
// String references:
//   "bool"
//   "GNUni"
//   "MUAraAudioPlaybackRegion"
//   "GNHeartbeatHandler"
//   "_cursorTime"
//   "MDPluginProcessor"
//   "_lastHostCursorTime"
//   "_lastHostCursorTimeValid"
//   "_hostPlaybackPendingStopTime"
//   "MURenderer"
//   "_controlsLocalPlayback"
//   "_distributedLocalPlayback"
//   "_lastPendingHostCycleUpdateRequestTime"
//   "double"
// === MUAraAudioSource properties ===
//   double          _cursorTime
//   double          _lastHostCursorTime
//   bool            _lastHostCursorTimeValid
//   double          _hostPlaybackPendingStopTime
//   bool            _controlsLocalPlayback
//   bool            _distributedLocalPlayback
//   double          _lastPendingHostCycleUpdateRequestTime
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_005dab40(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_005da070();
  this_ptr[5] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024f67b8;
  this_ptr[2] = &g_024f6cb8;
  this_ptr[5] = &g_024f6df8;
  this_ptr[6] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginProcessor");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  this_ptr[0xc] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginProcessor");
  }
  this_ptr[0xd] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraAudioPlaybackRegion");
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db760();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x74) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x75) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

