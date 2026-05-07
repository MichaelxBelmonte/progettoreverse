// ===================================================================
// MUTempoEditorDrawHelper — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 01c80080
// ============================================================
// Function: FUN_01c80080
// Address: 01c80080
// Size: 1316 bytes
// Class: MUTempoEditorDrawHelper
// String references:
//   "MUTempoEditorDrawHelper"

void FUN_01c80080(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0266cd98;
  FUN_01c80610();
  FUN_01c808d0();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ebe1b == '\0') {
    FUN_01c80b90();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ebe1b == '\0') {
    FUN_01c80d20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ebe1b == '\0') {
    FUN_01c80eb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ebe1b == '\0') {
    FUN_01c81040();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ebe1b == '\0') {
    FUN_01c811d0();
    FUN_00e87980();
  }
  return;
}

