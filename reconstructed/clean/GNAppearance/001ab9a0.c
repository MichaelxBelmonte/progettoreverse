// Function: FUN_001ab9a0
// Address: 001ab9a0
// Size: 752 bytes
// Class: GNAppearance
// String references:
//   "GNAppearance"
// === GNAppearance properties ===
//   GNAppearanceState _state
//                   _alpha
//                   _mouseOverIntensity
//                   _isTransparent
//                   _isBypassingEvents
//                   _drawingFrameReflectSubviews
//                   _isAutolayoutingSubviews
//                   _needsLayout
//                   _visibilityPriority


void FUN_001ab9a0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02672598;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e819b == '\0') {
    FUN_001abd00();
    FUN_00e87980();
  }
  FUN_001abf30();
  FUN_001ac1b0();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e819b == '\0') {
    FUN_001ac430();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x34) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e819b == '\0') {
    FUN_001ac5a0();
    FUN_00e87980();
  }
  return;
}

