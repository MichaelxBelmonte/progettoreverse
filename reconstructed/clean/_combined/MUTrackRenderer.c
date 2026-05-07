// ===================================================================
// MUTrackRenderer — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (4):
//                   _renderThread
//                   _mask
//                   _protectedSampleCount
//                   _isContinuousDirectAppendingEnabled


// ============================================================
// 011ce5e0
// ============================================================
// Function: FUN_011ce5e0
// Address: 011ce5e0
// Size: 1995 bytes
// Class: MUTrackRenderer
// String references:
//   "MUTrackRenderer"
// === MUTrackRenderer properties ===
//                   _renderThread
//                   _mask
//                   _protectedSampleCount
//                   _isContinuousDirectAppendingEnabled


void FUN_011ce5e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_010f3160();
  *this_ptr = &g_025d6a08;
  FUN_011cf030();
  FUN_011cf340();
  FUN_011cf630();
  FUN_011cf920();
  FUN_011cfc10();
  FUN_011cff00();
  FUN_011d01f0();
  FUN_011d04e0();
  FUN_011d07d0();
  FUN_011d0ac0();
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b879b == '\0') {
    FUN_011d0d40();
    FUN_00e87980();
  }
  FUN_011d0eb0();
  FUN_011d11a0();
  FUN_011d1490();
  FUN_011d1780();
  FUN_011d1a70();
  *(void*)(this_ptr + 0x2d) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b879b == '\0') {
    FUN_011d1d60();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x169) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b879b == '\0') {
    FUN_011d1ed0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16a) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b879b == '\0') {
    FUN_011d2040();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16b) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b879b == '\0') {
    FUN_011d21b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x16c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b879b == '\0') {
    FUN_011d2320();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x2e) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b879b == '\0') {
    FUN_011d2490();
    FUN_00e87980();
  }
  FUN_011d2600();
  return;
}

