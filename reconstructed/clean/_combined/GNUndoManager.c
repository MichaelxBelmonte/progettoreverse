// ===================================================================
// GNUndoManager — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00065940
// ============================================================
// Function: FUN_00065940
// Address: 00065940
// Size: 1652 bytes
// Class: GNUndoManager
// String references:
//   "GNUndoManager"

void FUN_00065940(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0257aeb0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277be4b == '\0') {
    FUN_00066080();
    FUN_00e87980();
  }
  FUN_000661f0();
  FUN_000664e0();
  FUN_000667d0();
  FUN_00066ac0();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277be4b == '\0') {
    FUN_00066da0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277be4b == '\0') {
    FUN_00066f10();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277be4b == '\0') {
    FUN_00067080();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277be4b == '\0') {
    FUN_000671f0();
    FUN_00e87980();
  }
  FUN_00067360();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277be4b == '\0') {
    FUN_00067650();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277be4b == '\0') {
    FUN_000677c0();
    FUN_00e87980();
  }
  return;
}

