// ===================================================================
// MUPlaybackRequest — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 01199c00
// ============================================================
// Function: FUN_01199c00
// Address: 01199c00
// Size: 902 bytes
// Class: MUPlaybackRequest
// String references:
//   "MUPlaybackRequest"

void FUN_01199c00(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025e08b0;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ca33 == '\0') {
    FUN_01199fb0();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ca33 == '\0') {
    FUN_0119a120();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ca33 == '\0') {
    FUN_0119a290();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270ca33 == '\0') {
    FUN_0119a400();
    FUN_00e87980();
  }
  return;
}

