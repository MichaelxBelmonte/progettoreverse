// Function: FUN_005de2a0
// Address: 005de2a0
// Size: 788 bytes
// Class: MDPluginWindowResizeView
// String references:
//   "MDPluginWindowResizeView"

void FUN_005de2a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_024f39b0;
  this_ptr[2] = &g_024f42d8;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272640b == '\0') {
    FUN_005de5e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x139) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272640b == '\0') {
    FUN_005de770();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x13a) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272640b == '\0') {
    FUN_005de900();
    FUN_00e87980();
  }
  return;
}

