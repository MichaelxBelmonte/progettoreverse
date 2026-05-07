// ===================================================================
// GNAudioNullDevice — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 00af9e20
// ============================================================
// Function: FUN_00af9e20
// Address: 00af9e20
// Size: 532 bytes
// Class: GNAudioNullDevice
// String references:
//   "GNAudioNullDevice"

void FUN_00af9e20(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_007c71c0();
  *this_ptr = &g_02530ed8;
  *(void*)((int64_t)this_ptr + 0xcc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275628b == '\0') {
    FUN_00afa0d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xcd) = 0;
  // [STATIC_INIT: property registration]
  if (g_0275628b == '\0') {
    FUN_00afa240();
    FUN_00e87980();
  }
  FUN_00afa3b0();
  FUN_00afa6a0();
  return;
}

