// Function: FUN_01c04130
// Address: 01c04130
// Size: 840 bytes
// Class: MUMultiTrackDropTarget
// String references:
//   "MUMultiTrackDropTarget"

void FUN_01c04130(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02662ff0;
  FUN_01c044f0();
  FUN_01c047b0();
  FUN_01c04a70();
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e8983 == '\0') {
    FUN_01c04d30();
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e8983 == '\0') {
    FUN_01c04ec0();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_027e8983 == '\0') {
    FUN_01c05050();
    FUN_00e87980();
  }
  return;
}

