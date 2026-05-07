// Function: FUN_007c0ba0
// Address: 007c0ba0
// Size: 516 bytes
// Class: GNSoundFileSNDWriter
// String references:
//   "GNSoundFileSNDWriter"

void FUN_007c0ba0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_007b7610();
  *this_ptr = &g_02543f30;
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dc3b == '\0') {
    FUN_007c0e20();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272dc3b == '\0') {
    FUN_007c0fb0();
    FUN_00e87980();
  }
  return;
}

