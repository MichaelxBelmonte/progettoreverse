// Function: FUN_001cdcf0
// Address: 001cdcf0
// Size: 1251 bytes
// Class: GNImage
// String references:
//   "GNImage"
// === GNImage properties ===
//                   _alternateImage
//                   _disabledImage
//                   _alternateTitle
//                   _isBordered


void FUN_001cdcf0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026817d8;
  FUN_001ce2d0();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f73bb == '\0') {
    FUN_001ce550();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f73bb == '\0') {
    FUN_001ce6c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f73bb == '\0') {
    FUN_001ce830();
    FUN_00e87980();
  }
  FUN_001ce9a0();
  FUN_001cec20();
  FUN_001cef10();
  FUN_001cf190();
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f73bb == '\0') {
    FUN_001cf480();
    FUN_00e87980();
  }
  this_ptr[10] = *(void*)(arg1 + 0x50);
  FUN_001cf5f0();
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f73bb == '\0') {
    FUN_001cf8e0();
    FUN_00e87980();
  }
  return;
}

