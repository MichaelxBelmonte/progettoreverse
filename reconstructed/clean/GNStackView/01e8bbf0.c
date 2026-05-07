// Function: FUN_01e8bbf0
// Address: 01e8bbf0
// Size: 713 bytes
// Class: GNStackView
// String references:
//   "GNStackView"
// === GNStackView properties ===
//   GNOrientation   _orientation


void FUN_01e8bbf0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_026bcae8;
  this_ptr[2] = &g_026bd410;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_028008bb == '\0') {
    FUN_01e8bef0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x13c) = 0;
  // [STATIC_INIT: property registration]
  if (g_028008bb == '\0') {
    FUN_01e8c120();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_028008bb == '\0') {
    FUN_01e8c290();
    FUN_00e87980();
  }
  return;
}

