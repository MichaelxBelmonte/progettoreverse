// Function: FUN_00836810
// Address: 00836810
// Size: 861 bytes
// Class: MUHorizontalOverviewScroller
// String references:
//   "MUHorizontalOverviewScroller"

void FUN_00836810(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00835de0();
  *this_ptr = &g_0262a5e0;
  this_ptr[2] = &g_0262b168;
  this_ptr[0x3c] = &g_0262b1a8;
  this_ptr[0x3f] = &g_0262b1d8;
  this_ptr[0x40] = &g_0262b228;
  *(void*)(this_ptr + 0x46) = 0;
  // [STATIC_INIT: property registration]
  if (g_02735a83 == '\0') {
    FUN_00836ba0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x234) = 0;
  // [STATIC_INIT: property registration]
  if (g_02735a83 == '\0') {
    FUN_00836d30();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x47) = 0;
  // [STATIC_INIT: property registration]
  if (g_02735a83 == '\0') {
    FUN_00836ec0();
    FUN_00e87980();
  }
  FUN_00837050();
  return;
}

