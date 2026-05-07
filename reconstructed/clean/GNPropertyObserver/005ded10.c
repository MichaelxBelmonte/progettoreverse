// Function: FUN_005ded10
// Address: 005ded10
// Size: 933 bytes
// Class: GNPropertyObserver
// String references:
//   "GNPropertyObserver"
//   "GNDisplayGroupDelegate"
//   "MDProjectInsp"

void FUN_005ded10(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a2970();
  this_ptr[0x1a] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[0x1b] = &g_0267efd8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_024dda00;
  this_ptr[0x1a] = &g_024de0e8;
  this_ptr[0x1b] = &g_024de138;
  FUN_005df290();
  FUN_005df5c0();
  FUN_005df8e0();
  FUN_005dfc10();
  FUN_005dff40();
  FUN_005e0270();
  FUN_005e05a0();
  FUN_005e08d0();
  FUN_005e0c00();
  FUN_005e0f30();
  *(void*)(this_ptr + 0x26) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fcfcb == '\0') {
    FUN_005e1260();
    FUN_00e87980();
  }
  FUN_005e13f0();
  FUN_005e1720();
  FUN_005e1a50();
  FUN_005e1d80();
  FUN_005e20b0();
  return;
}

