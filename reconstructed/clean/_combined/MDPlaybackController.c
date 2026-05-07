// ===================================================================
// MDPlaybackController — Complete reconstructed pseudocode
// 4 functions
// ===================================================================

// Registered properties (2):
//   MDPlaybackSetup _playbackSetup
//   MDPlaybackState _playbackState


// ============================================================
// 005d9580
// ============================================================
// Function: FUN_005d9580
// Address: 005d9580
// Size: 500 bytes
// Class: MDPlaybackController
// === MDPlaybackController properties ===
//   MDPlaybackSetup _playbackSetup
//   MDPlaybackState _playbackState


void FUN_005d9580(void)

{
  void*this_ptr;
  
  *this_ptr = &g_02507318;
  this_ptr[0xe] = &g_025079f8;
  this_ptr[0xf] = &g_02507a28;
  if (this_ptr[0x32] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x30] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x29] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x27] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x26] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x25] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x24] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x23] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x20] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x18] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x17] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x16] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x14] != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x11] != 0) {
    FUN_00d50b20();
  }
  FUN_00015ea0();
  return;
}



// ============================================================
// 005da070
// ============================================================
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



// ============================================================
// 005da8e0
// ============================================================
// Function: FUN_005da8e0
// Address: 005da8e0
// Size: 560 bytes
// Class: MDPlaybackController
// String references:
//   "MDPlaybackController"
//   "MDPlaybackSetup"
//   "_playbackSetup"
// === MDPlaybackController properties ===
//   MDPlaybackSetup _playbackSetup
//   MDPlaybackState _playbackState


void* FUN_005da8e0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271cc28 = "_playbackSetup";
      g_0271cc30 = &g_027021d0;
      g_0271cc38 = 0;
      g_0271cc40 = 0x6500;
      g_0271cc48 = "MDPlaybackSetup";
      g_0271cc50 = &g_0271cca8;
      g_0271cc58 = 0;
      ram_000000000271cc60 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271cc28;
}



// ============================================================
// 005da690
// ============================================================
// Function: FUN_005da690
// Address: 005da690
// Size: 547 bytes
// Class: MDPlaybackController
// String references:
//   "MDPlaybackController"
//   "MDPlaybackState"
//   "_playbackState"
// === MDPlaybackController properties ===
//   MDPlaybackSetup _playbackSetup
//   MDPlaybackState _playbackState


void* FUN_005da690(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_0271cb50 = "_playbackState";
      g_0271cb58 = &g_027021d0;
      g_0271cb60 = 0;
      g_0271cb68 = 0x6500;
      g_0271cb70 = "MDPlaybackState";
      g_0271cb78 = &g_0271cbf0;
      g_0271cb80 = 0;
      ram_000000000271cb88 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_0271cb50;
}

