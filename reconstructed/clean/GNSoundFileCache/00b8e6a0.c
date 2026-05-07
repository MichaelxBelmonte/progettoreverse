// Function: FUN_00b8e6a0
// Address: 00b8e6a0
// Size: 568 bytes
// Class: GNSoundFileCache
// String references:
//   "GNSoundFileCache"

void FUN_00b8e6a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0254a198;
  FUN_00b8e920();
  FUN_00b8ec40();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276439b == '\0') {
    FUN_00b8ef00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_0276439b == '\0') {
    FUN_00b8f090();
    FUN_00e87980();
  }
  return;
}

