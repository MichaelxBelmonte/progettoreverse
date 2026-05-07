// Function: FUN_01db0610
// Address: 01db0610
// Size: 918 bytes
// Class: GNSnapContext
// String references:
//   "GNSnapContext"
// === GNSnapContext properties ===
//                   _minFloatValue
//                   _maxFloatValue
//                   _isFineTuning
//                   _clipView


void FUN_01db0610(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0267b6f0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fa02b == '\0') {
    FUN_01db09d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fa02b == '\0') {
    FUN_01db0b40();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fa02b == '\0') {
    FUN_01db0cb0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fa02b == '\0') {
    FUN_01db0e20();
    FUN_00e87980();
  }
  FUN_01db0f90();
  return;
}

