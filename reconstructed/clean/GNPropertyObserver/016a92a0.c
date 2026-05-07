// Function: FUN_016a92a0
// Address: 016a92a0
// Size: 943 bytes
// Class: GNPropertyObserver
// String references:
//   "GNPropertyObserver"
//   "MUAraTrackObservationHelper"

void FUN_016a92a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025fdf10;
  this_ptr[2] = &g_025fe2a0;
  FUN_016a96a0();
  FUN_016a9a20();
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_027cade3 == '\0') {
    FUN_016a9d50();
    FUN_00e87980();
  }
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_027cade3 == '\0') {
    FUN_016a9ee0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027cade3 == '\0') {
    FUN_016aa070();
    FUN_00e87980();
  }
  return;
}

