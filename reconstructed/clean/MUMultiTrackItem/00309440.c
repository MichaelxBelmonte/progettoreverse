// Function: FUN_00309440
// Address: 00309440
// Size: 1050 bytes
// Class: MUMultiTrackItem
// String references:
//   "MUMultiTrackItem"
//   "GNPropertyObserver"

void FUN_00309440(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02657e20;
  this_ptr[2] = &g_02658230;
  FUN_00309930();
  FUN_00309c60();
  FUN_00309f90();
  FUN_0030a2c0();
  FUN_0030a5e0();
  FUN_0030a910();
  FUN_0030ac40();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d7b2b == '\0') {
    FUN_0030af70();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d7b2b == '\0') {
    FUN_0030b100();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d7b2b == '\0') {
    FUN_0030b290();
    FUN_00e87980();
  }
  return;
}

