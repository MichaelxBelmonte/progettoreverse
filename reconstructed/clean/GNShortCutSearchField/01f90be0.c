// Function: FUN_01f90be0
// Address: 01f90be0
// Size: 536 bytes
// Class: GNShortCutSearchField
// String references:
//   "GNShortCutSearchField"

void FUN_01f90be0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001f8d00();
  *this_ptr = &g_026850b0;
  this_ptr[2] = &g_02685c08;
  this_ptr[0x39] = &g_02685c48;
  *(void*)(this_ptr + 0x48) = 0;
  // [STATIC_INIT: property registration]
  if (g_0280122b == '\0') {
    FUN_01f90e50();
    FUN_00e87980();
  }
  FUN_01f90fc0();
  *(void*)(this_ptr + 0x4a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0280122b == '\0') {
    FUN_01f91240();
    FUN_00e87980();
  }
  return;
}

