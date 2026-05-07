// ===================================================================
// GNToolBoxView — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 001a2a30
// ============================================================
// Function: FUN_001a2a30
// Address: 001a2a30
// Size: 521 bytes
// Class: GNToolBoxView
// String references:
//   "GNToolBoxView"

void FUN_001a2a30(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0269fe88;
  this_ptr[2] = &g_026a07b0;
  FUN_001a2c80();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6fab == '\0') {
    FUN_001a2f70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x141) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e6fab == '\0') {
    FUN_001a30e0();
    FUN_00e87980();
  }
  return;
}

