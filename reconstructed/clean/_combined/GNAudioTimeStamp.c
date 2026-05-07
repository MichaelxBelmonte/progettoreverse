// ===================================================================
// GNAudioTimeStamp — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 007adf20
// ============================================================
// Function: FUN_007adf20
// Address: 007adf20
// Size: 916 bytes
// Class: GNAudioTimeStamp
// String references:
//   "GNAudioTimeStamp"

void FUN_007adf20(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025330f0;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272b2f3 == '\0') {
    FUN_007ae2e0();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272b2f3 == '\0') {
    FUN_007ae450();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272b2f3 == '\0') {
    FUN_007ae5c0();
    FUN_00e87980();
  }
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272b2f3 == '\0') {
    FUN_007ae730();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = *(void*)(arg1 + 0x30);
  return;
}

