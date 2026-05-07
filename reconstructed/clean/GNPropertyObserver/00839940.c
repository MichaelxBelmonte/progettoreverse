// Function: FUN_00839940
// Address: 00839940
// Size: 1005 bytes
// Class: GNPropertyObserver
// String references:
//   "GNPropertyObserver"
//   "MUPitchSystemRulerView"

void FUN_00839940(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  this_ptr[0x27] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0262ed90;
  this_ptr[2] = &g_0262f700;
  this_ptr[0x27] = &g_0262f740;
  this_ptr[0x28] = 0;
  // [STATIC_INIT: property registration]
  if (g_026f980b == '\0') {
    FUN_00839da0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f980b == '\0') {
    FUN_00839f30();
    FUN_00e87980();
  }
  FUN_0083a1a0();
  FUN_0083a4d0();
  *(void*)(this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f980b == '\0') {
    FUN_0083a790();
    FUN_00e87980();
  }
  return;
}

