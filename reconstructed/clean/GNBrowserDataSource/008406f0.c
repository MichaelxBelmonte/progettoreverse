// Function: FUN_008406f0
// Address: 008406f0
// Size: 929 bytes
// Class: GNBrowserDataSource
// String references:
//   "GNBrowserDataSource"
//   "MUScaleBrowserCtrl"

void FUN_008406f0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0005aa20();
  this_ptr[0xe] = &g_02675300;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02642730;
  this_ptr[0xe] = &g_02642d28;
  FUN_00840b10();
  FUN_00840e00();
  FUN_00841080();
  *(void*)(this_ptr + 0x12) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273770b == '\0') {
    FUN_00841300();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x91) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273770b == '\0') {
    FUN_00841470();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x92) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273770b == '\0') {
    FUN_008415e0();
    FUN_00e87980();
  }
  FUN_00841750();
  return;
}

