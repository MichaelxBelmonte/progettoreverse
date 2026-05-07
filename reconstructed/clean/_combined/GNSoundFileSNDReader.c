// ===================================================================
// GNSoundFileSNDReader — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 007bfbe0
// ============================================================
// Function: FUN_007bfbe0
// Address: 007bfbe0
// Size: 1504 bytes
// Class: GNSoundFileSNDReader
// String references:
//   "GNSoundFileSNDReader"

void FUN_007bfbe0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_007b58a0();
  *this_ptr = &g_02543b38;
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272d9bb == '\0') {
    FUN_007c01f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272d9bb == '\0') {
    FUN_007c0380();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272d9bb == '\0') {
    FUN_007c0510();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272d9bb == '\0') {
    FUN_007c06a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272d9bb == '\0') {
    FUN_007c0830();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272d9bb == '\0') {
    FUN_007c09c0();
    FUN_00e87980();
  }
  return;
}

