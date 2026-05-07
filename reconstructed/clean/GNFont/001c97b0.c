// Function: FUN_001c97b0
// Address: 001c97b0
// Size: 1098 bytes
// Class: GNFont
// String references:
//   "GNFont"

void FUN_001c97b0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02680b28;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  FUN_001c9c60();
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecc4b == '\0') {
    FUN_001c9f20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecc4b == '\0') {
    FUN_001ca0b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecc4b == '\0') {
    FUN_001ca240();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecc4b == '\0') {
    FUN_001ca3d0();
    FUN_00e87980();
  }
  FUN_001ca560();
  FUN_001ca820();
  return;
}

