// Function: FUN_0035a900
// Address: 0035a900
// Size: 574 bytes
// Class: MDKeyModifierActionHelper
// String references:
//   "MDKeyModifierActionHelper"
// === MDKeyModifierActionHelper properties ===
//                   _cachePath
//                   _updateViewPositionDisabled
//                   _multiTrackViewDelegate


void FUN_0035a900(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_024fafc8;
  FUN_0035aba0();
  FUN_0035ae60();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_027033b3 == '\0') {
    FUN_0035b190();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_027033b3 == '\0') {
    FUN_0035b320();
    FUN_00e87980();
  }
  return;
}

