// Function: FUN_006dc210
// Address: 006dc210
// Size: 1083 bytes
// Class: MDVolumeFader
// String references:
//   "MDVolumeFader"
// === MDVolumeFader properties ===
//   MDVolumeScalaType _volumeScalaType


void FUN_006dc210(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001b40a0();
  *this_ptr = &PTR_FUN_024da8a0;
  this_ptr[2] = &g_024db3e0;
  *(void*)((int64_t)this_ptr + 0x1dc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fbe0b == '\0') {
    FUN_006dc6d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1e4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fbe0b == '\0') {
    FUN_006dc860();
    FUN_00e87980();
  }
  FUN_006dcab0();
  *(void*)(this_ptr + 0x3e) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fbe0b == '\0') {
    FUN_006dcde0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1f1) = 0;
  // [STATIC_INIT: property registration]
  if (g_026fbe0b == '\0') {
    FUN_006dcf70();
    FUN_00e87980();
  }
  return;
}

