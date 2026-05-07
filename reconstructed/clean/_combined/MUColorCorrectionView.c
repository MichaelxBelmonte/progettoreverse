// ===================================================================
// MUColorCorrectionView — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 0081f080
// ============================================================
// Function: FUN_0081f080
// Address: 0081f080
// Size: 656 bytes
// Class: MUColorCorrectionView
// String references:
//   "MUColorCorrectionView"

void FUN_0081f080(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0264ce20;
  this_ptr[2] = &g_0264d750;
  FUN_0081f390();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_02730c33 == '\0') {
    FUN_0081f650();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x144) = 0;
  // [STATIC_INIT: property registration]
  if (g_02730c33 == '\0') {
    FUN_0081f7e0();
    FUN_00e87980();
  }
  FUN_0081f970();
  FUN_0081fc30();
  FUN_0081fef0();
  return;
}

