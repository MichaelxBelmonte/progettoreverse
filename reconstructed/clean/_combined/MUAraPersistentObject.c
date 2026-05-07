// ===================================================================
// MUAraPersistentObject — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 016962f0
// ============================================================
// Function: FUN_016962f0
// Address: 016962f0
// Size: 548 bytes
// Class: MUAraPersistentObject
// String references:
//   "MUAraPersistentObject"

void FUN_016962f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_016961d0();
  *this_ptr = &g_025fdb98;
  FUN_01696560();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708bab == '\0') {
    FUN_01696820();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  // [STATIC_INIT: property registration]
  if (g_02708bab == '\0') {
    FUN_016969b0();
    FUN_00e87980();
  }
  return;
}

