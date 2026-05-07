// Function: FUN_01697750
// Address: 01697750
// Size: 1258 bytes
// Class: MUAraAudioSource
// String references:
//   "MUAraAudioModification"
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


void FUN_01697750(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_01696b40();
  *this_ptr = &g_025f5dd8;
  this_ptr[10] = &g_025f6198;
  FUN_01697d10();
  FUN_01698010();
  FUN_01698320();
  FUN_016985a0();
  *(void*)(this_ptr + 0x16) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698890();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb1) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698a00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698b70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698ce0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xb4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027c834b == '\0') {
    FUN_01698e50();
    FUN_00e87980();
  }
  return;
}

