// ===================================================================
// GNAffineTransform — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (6):
//                   _m11
//                   _m12
//                   _m21
//                   _m22
//                   _tX
//                   _tY


// ============================================================
// 001a9c00
// ============================================================
// Function: FUN_001a9c00
// Address: 001a9c00
// Size: 1336 bytes
// Class: GNAffineTransform
// String references:
//   "GNAffineTransform"
// === GNAffineTransform properties ===
//                   _m11
//                   _m12
//                   _m21
//                   _m22
//                   _tX
//                   _tY


void FUN_001a9c00(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026aacd0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e7da3 == '\0') {
    FUN_001aa170();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e7da3 == '\0') {
    FUN_001aa2e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e7da3 == '\0') {
    FUN_001aa450();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e7da3 == '\0') {
    FUN_001aa5c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e7da3 == '\0') {
    FUN_001aa730();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e7da3 == '\0') {
    FUN_001aa8a0();
    FUN_00e87980();
  }
  return;
}

