// ===================================================================
// GNLayoutLine — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 001d6520
// ============================================================
// Function: FUN_001d6520
// Address: 001d6520
// Size: 1089 bytes
// Class: GNLayoutLine
// String references:
//   "GNLayoutLine"

void FUN_001d6520(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026b7080;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f7f2b == '\0') {
    FUN_001d69c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f7f2b == '\0') {
    FUN_001d6b50();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f7f2b == '\0') {
    FUN_001d6ce0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f7f2b == '\0') {
    FUN_001d6e70();
    FUN_00e87980();
  }
  FUN_001d7000();
  FUN_001d72c0();
  FUN_001d75f0();
  return;
}

