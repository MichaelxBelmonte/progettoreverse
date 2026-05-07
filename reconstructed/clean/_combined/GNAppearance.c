// ===================================================================
// GNAppearance — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (9):
//   GNAppearanceState _state
//                   _alpha
//                   _mouseOverIntensity
//                   _isTransparent
//                   _isBypassingEvents
//                   _drawingFrameReflectSubviews
//                   _isAutolayoutingSubviews
//                   _needsLayout
//                   _visibilityPriority


// ============================================================
// 001ab9a0
// ============================================================
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



// ============================================================
// 001abd00
// ============================================================
// Function: FUN_001abd00
// Address: 001abd00
// Size: 522 bytes
// Class: GNAppearance
// String references:
//   "_state"
//   "GNAppearance"
//   "GNAppearanceState"
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


void* FUN_001abd00(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026e81b0 = "_state";
      g_026e81b8 = &g_026e80e0;
      g_026e81c0 = 0;
      g_026e81c8 = 0x6501;
      g_026e81d0 = "GNAppearanceState";
      g_026e81d8 = &g_026e8230;
      g_026e81e0 = 0;
      ram_00000000026e81e8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026e81b0;
}

