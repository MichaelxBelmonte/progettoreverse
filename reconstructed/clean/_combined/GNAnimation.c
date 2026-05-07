// ===================================================================
// GNAnimation — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (9):
//   GNAnimationCurve _interpolationMethod
//                   _mergesSegmentsAtBorders
//                   _isMoving
//                   _isStretching
//                   _allowGaps
//                   _isEditingSequence
//                   _splitsOnBars
//                   _titleRects
//                   _visibleRange


// ============================================================
// 01e78970
// ============================================================
// Function: FUN_01e78970
// Address: 01e78970
// Size: 1248 bytes
// Class: GNAnimation
// String references:
//   "GNAnimation"
// === GNAnimation properties ===
//   GNAnimationCurve _interpolationMethod
//                   _mergesSegmentsAtBorders
//                   _isMoving
//                   _isStretching
//                   _allowGaps
//                   _isEditingSequence
//                   _splitsOnBars
//                   _titleRects
//                   _visibleRange


void FUN_01e78970(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026c3e50;
  FUN_01e78f30();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_02801523 == '\0') {
    FUN_01e79290();
    FUN_00e87980();
  }
  FUN_01e794c0();
  FUN_01e79740();
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_02801523 == '\0') {
    FUN_01e799c0();
    FUN_00e87980();
  }
  FUN_01e79b30();
  FUN_01e79e20();
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  // [STATIC_INIT: property registration]
  if (g_02801523 == '\0') {
    FUN_01e7a110();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_02801523 == '\0') {
    FUN_01e7a280();
    FUN_00e87980();
  }
  this_ptr[0xc] = 0;
  // [STATIC_INIT: property registration]
  if (g_02801523 == '\0') {
    FUN_01e7a3f0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01e79290
// ============================================================
// Function: FUN_01e79290
// Address: 01e79290
// Size: 519 bytes
// Class: GNAnimation
// String references:
//   "GNAnimation"
//   "_interpolationMethod"
//   "GNAnimationCurve"
// === GNAnimation properties ===
//   GNAnimationCurve _interpolationMethod
//                   _mergesSegmentsAtBorders
//                   _isMoving
//                   _isStretching
//                   _allowGaps
//                   _isEditingSequence
//                   _splitsOnBars
//                   _titleRects
//                   _visibleRange


void* FUN_01e79290(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027f45a0 = "_interpolationMethod";
      g_027f45a8 = &g_02801468;
      g_027f45b0 = 0;
      g_027f45b8 = 0x6500;
      g_027f45c0 = "GNAnimationCurve";
      g_027f45c8 = &g_027f4640;
      g_027f45d0 = 0;
      ram_00000000027f45d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027f45a0;
}

