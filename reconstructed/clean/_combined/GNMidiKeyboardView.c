// ===================================================================
// GNMidiKeyboardView — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 0086e480
// ============================================================
// Function: FUN_0086e480
// Address: 0086e480
// Size: 1313 bytes
// Class: GNMidiKeyboardView
// String references:
//   "GNMidiKeyboardView"

void FUN_0086e480(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0253c920;
  this_ptr[2] = &g_0253d250;
  FUN_0086ea80();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273f9fb == '\0') {
    FUN_0086ed00();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x141) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273f9fb == '\0') {
    FUN_0086ee70();
    FUN_00e87980();
  }
  FUN_0086efe0();
  FUN_0086f260();
  FUN_0086f550();
  *(void*)(this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273f9fb == '\0') {
    FUN_0086f840();
    FUN_00e87980();
  }
  FUN_0086f9b0();
  *(void*)(this_ptr + 0x2e) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273f9fb == '\0') {
    FUN_0086fca0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x174) = 0;
  // [STATIC_INIT: property registration]
  if (g_0273f9fb == '\0') {
    FUN_0086fe10();
    FUN_00e87980();
  }
  FUN_00870050();
  return;
}

