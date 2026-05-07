// ===================================================================
// GNDraggingInfo — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 001c5b80
// ============================================================
// Function: FUN_001c5b80
// Address: 001c5b80
// Size: 587 bytes
// Class: GNDraggingInfo
// String references:
//   "GNDraggingInfo"

void FUN_001c5b80(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02680088;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ec0ab == '\0') {
    FUN_001c5e30();
    FUN_00e87980();
  }
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_026ec0ab == '\0') {
    FUN_001c5fc0();
    FUN_00e87980();
  }
  FUN_001c6150();
  FUN_001c6480();
  FUN_001c67b0();
  return;
}

