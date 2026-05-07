// ===================================================================
// GNBinaryKeyValueUnarchiverObjectInfo — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00e5b770
// ============================================================
// Function: FUN_00e5b770
// Address: 00e5b770
// Size: 1068 bytes
// Class: GNBinaryKeyValueUnarchiverObjectInfo
// String references:
//   "GNBinaryKeyValueUnarchiverObjectInfo"

void FUN_00e5b770(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0258ddc8;
  FUN_00e5bbf0();
  FUN_00e5bf10();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_02786ef3 == '\0') {
    FUN_00e5c240();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_02786ef3 == '\0') {
    FUN_00e5c3d0();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_02786ef3 == '\0') {
    FUN_00e5c560();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_02786ef3 == '\0') {
    FUN_00e5c6f0();
    FUN_00e87980();
  }
  return;
}

