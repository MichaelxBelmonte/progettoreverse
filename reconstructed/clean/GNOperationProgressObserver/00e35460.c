// Function: FUN_00e35460
// Address: 00e35460
// Size: 688 bytes
// Class: GNOperationProgressObserver
// String references:
//   "GNOperationProgressObserver"
//   "GNOperationProgressScalingAdapter"

void FUN_00e35460(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025831e0;
  this_ptr[2] = &g_02583570;
  FUN_00e35760();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027863e3 == '\0') {
    FUN_00e35b00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027863e3 == '\0') {
    FUN_00e35c90();
    FUN_00e87980();
  }
  return;
}

