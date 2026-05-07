// Function: FUN_001e3dc0
// Address: 001e3dc0
// Size: 557 bytes
// Class: GNPopUpButton
// String references:
//   "GNPopUpButton"

void FUN_001e3dc0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000fabd0();
  *this_ptr = &g_02686350;
  this_ptr[2] = &g_02686e38;
  this_ptr[0x39] = &g_02686e78;
  FUN_001e4060();
  *(void*)(this_ptr + 0x45) = 0;
  // [STATIC_INIT: property registration]
  if (g_026efeab == '\0') {
    FUN_001e4350();
    FUN_00e87980();
  }
  FUN_001e44c0();
  *(void*)(this_ptr + 0x47) = 0;
  // [STATIC_INIT: property registration]
  if (g_026efeab == '\0') {
    FUN_001e47b0();
    FUN_00e87980();
  }
  return;
}

