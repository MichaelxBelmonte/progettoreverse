// Function: FUN_0188b880
// Address: 0188b880
// Size: 740 bytes
// Class: MUAlignmentAssignment
// String references:
//   "MUAlignmentAssignment"

void FUN_0188b880(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0260ee38;
  FUN_0188bbc0();
  FUN_0188be40();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7a83 == '\0') {
    FUN_0188c0c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7a83 == '\0') {
    FUN_0188c230();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027d7a83 == '\0') {
    FUN_0188c3a0();
    FUN_00e87980();
  }
  return;
}

