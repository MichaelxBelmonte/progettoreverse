// ===================================================================
// GNSoundFilePreloadRange — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00bcd190
// ============================================================
// Function: FUN_00bcd190
// Address: 00bcd190
// Size: 554 bytes
// Class: GNSoundFilePreloadRange
// String references:
//   "GNSoundFilePreloadRange"

void FUN_00bcd190(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0254da28;
  FUN_00bcd400();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02765fcb == '\0') {
    FUN_00bcd730();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02765fcb == '\0') {
    FUN_00bcd8c0();
    FUN_00e87980();
  }
  return;
}

