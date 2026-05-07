// ===================================================================
// GNMidiFileTimeSignature — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00b09ea0
// ============================================================
// Function: FUN_00b09ea0
// Address: 00b09ea0
// Size: 1022 bytes
// Class: GNMidiFileTimeSignature
// String references:
//   "GNMidiFileTimeSignature"

void FUN_00b09ea0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0253ac48;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_0275a15b == '\0') {
    FUN_00b0a2d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275a15b == '\0') {
    FUN_00b0a460();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275a15b == '\0') {
    FUN_00b0a5f0();
    FUN_00e87980();
  }
  this_ptr[4] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_0275a15b == '\0') {
    FUN_00b0a780();
    FUN_00e87980();
  }
  return;
}

