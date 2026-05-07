// Function: FUN_01d80e30
// Address: 01d80e30
// Size: 1010 bytes
// Class: GNCornerRadius
// String references:
//   "GNCornerRadius"
// === GNCornerRadius properties ===
//                   _outerDrawPath
//                   _innerBlurWidth
//                   _innerBlurColor
//                   _outerBlurWidth
//                   _outerBlurColor
//                   _outerBlurInset
//                   _clipsAlways


void FUN_01d80e30(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02689a10;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f11e3 == '\0') {
    FUN_01d81250();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f11e3 == '\0') {
    FUN_01d813e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x14) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f11e3 == '\0') {
    FUN_01d81570();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f11e3 == '\0') {
    FUN_01d81700();
    FUN_00e87980();
  }
  return;
}

