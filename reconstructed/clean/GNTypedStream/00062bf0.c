// Function: FUN_00062bf0
// Address: 00062bf0
// Size: 1069 bytes
// Class: GNTypedStream
// String references:
//   "GNTypedStream"
// === GNTypedStream properties ===
//   GNEndian        _endianness


void FUN_00062bf0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0257a448;
  FUN_00063090();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d6b9b == '\0') {
    FUN_00063350();
    FUN_00e87980();
  }
  FUN_000634e0();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d6b9b == '\0') {
    FUN_00063810();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d6b9b == '\0') {
    FUN_000639a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d6b9b == '\0') {
    FUN_00063bf0();
    FUN_00e87980();
  }
  return;
}

