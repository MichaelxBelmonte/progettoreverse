// Function: FUN_005da070
// Address: 005da070
// Size: 684 bytes
// Class: MDPlaybackController
// String references:
//   "MDPlaybackController"
//   "MUPlaybackController"
// === MDPlaybackController properties ===
//   MDPlaybackSetup _playbackSetup
//   MDPlaybackState _playbackState


void FUN_005da070(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_0263ce20;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024e2bb0;
  this_ptr[2] = &g_024e3080;
  FUN_005da360();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270228b == '\0') {
    FUN_005da690();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270228b == '\0') {
    FUN_005da8e0();
    FUN_00e87980();
  }
  return;
}

