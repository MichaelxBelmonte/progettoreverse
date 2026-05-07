// ===================================================================
// MUFormant — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//                   _frequency
//                   _amplitude
//                   _bandwidth


// ============================================================
// 008706d0
// ============================================================
// Function: FUN_008706d0
// Address: 008706d0
// Size: 677 bytes
// Class: MUFormant
// String references:
//   "MUFormant"
// === MUFormant properties ===
//                   _frequency
//                   _amplitude
//                   _bandwidth


void FUN_008706d0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025142c8;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273fe73 == '\0') {
    FUN_008709a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273fe73 == '\0') {
    FUN_00870b10();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273fe73 == '\0') {
    FUN_00870c80();
    FUN_00e87980();
  }
  return;
}

