// Function: FUN_00c4a000
// Address: 00c4a000
// Size: 674 bytes
// Class: GNRangeFactorFormatter
// String references:
//   "GNRangeFactorFormatter"

void FUN_00c4a000(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00038300();
  *this_ptr = &g_0255ebc0;
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276ee13 == '\0') {
    FUN_00c4a2d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276ee13 == '\0') {
    FUN_00c4a440();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276ee13 == '\0') {
    FUN_00c4a5b0();
    FUN_00e87980();
  }
  return;
}

