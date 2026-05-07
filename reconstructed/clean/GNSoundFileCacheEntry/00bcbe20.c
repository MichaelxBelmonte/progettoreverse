// Function: FUN_00bcbe20
// Address: 00bcbe20
// Size: 1008 bytes
// Class: GNSoundFileCacheEntry
// String references:
//   "GNSoundFileCacheEntry"

void FUN_00bcbe20(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0254a888;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02765d03 == '\0') {
    FUN_00bcc240();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_02765d03 == '\0') {
    FUN_00bcc3d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_02765d03 == '\0') {
    FUN_00bcc560();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02765d03 == '\0') {
    FUN_00bcc6f0();
    FUN_00e87980();
  }
  return;
}

