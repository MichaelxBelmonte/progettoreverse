// ===================================================================
// GNSymmetricFIRFilter — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//                   _order
//   float *         _coefficients
//                   _stride


// ============================================================
// 007c58f0
// ============================================================
// Function: FUN_007c58f0
// Address: 007c58f0
// Size: 926 bytes
// Class: GNSymmetricFIRFilter
// String references:
//   "GNSymmetricFIRFilter"
// === GNSymmetricFIRFilter properties ===
//                   _order
//   float *         _coefficients
//                   _stride


void FUN_007c58f0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0254ac00;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272e75b == '\0') {
    FUN_007c5cc0();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272e75b == '\0') {
    FUN_007c5e30();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272e75b == '\0') {
    FUN_007c5fa0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272e75b == '\0') {
    FUN_007c6110();
    FUN_00e87980();
  }
  return;
}

