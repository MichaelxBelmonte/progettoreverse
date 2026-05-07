// ===================================================================
// GNSoundFileCacheRequest — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00bcc880
// ============================================================
// Function: FUN_00bcc880
// Address: 00bcc880
// Size: 550 bytes
// Class: GNSoundFileCacheRequest
// String references:
//   "GNSoundFileCacheRequest"

void FUN_00bcc880(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0254a510;
  FUN_00bccaf0();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02765c33 == '\0') {
    FUN_00bcce20();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_02765c33 == '\0') {
    FUN_00bccfb0();
    FUN_00e87980();
  }
  return;
}

