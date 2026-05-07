// Function: FUN_01233c30
// Address: 01233c30
// Size: 510 bytes
// Class: MUQuarterAssignmentBeat
// String references:
//   "MUQuarterAssignmentBeat"

void FUN_01233c30(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025cb678;
  FUN_01233e70();
  FUN_01234170();
  this_ptr[4] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bda03 == '\0') {
    FUN_01234480();
    FUN_00e87980();
  }
  this_ptr[5] = 0x100000000;
  // [STATIC_INIT: property registration]
  if (g_027bda03 == '\0') {
    FUN_012345f0();
    FUN_00e87980();
  }
  return;
}

