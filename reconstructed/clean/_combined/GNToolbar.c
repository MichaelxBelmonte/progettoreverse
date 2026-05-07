// ===================================================================
// GNToolbar — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (13):
//   GNEdge          _edge
//   GNToolbarDisplayMode _displayMode
//   float           _rectRadius
//   float           _scrollerKnobMargin
//   float           _scrollerBorderRadius
//                   _firstKeyboardNavigationTarget
//                   _lastKeyboardNavigationTarget
//                   _isControllingWindow
//                   _gnuiRootObjects
//                   _namedObjects
//                   _runtimeLocalizer
//                   _dialogRootView
//                   _dialogResponder


// ============================================================
// 01e8eb00
// ============================================================
// Function: FUN_01e8eb00
// Address: 01e8eb00
// Size: 1580 bytes
// Class: GNToolbar
// String references:
//   "float"
//   "_scrollerKnobMargin"
//   "_scrollerBorderRadius"
//   "_rectRadius"
// === GNToolbar properties ===
//   GNEdge          _edge
//   GNToolbarDisplayMode _displayMode
//   float           _rectRadius
//   float           _scrollerKnobMargin
//   float           _scrollerBorderRadius
//                   _firstKeyboardNavigationTarget
//                   _lastKeyboardNavigationTarget
//                   _isControllingWindow
//                   _gnuiRootObjects
//                   _namedObjects
//                   _runtimeLocalizer
//                   _dialogRootView
//                   _dialogResponder


void FUN_01e8eb00(void)

{
  int iVar1;
  int64_t lVar2;
  void*this_ptr;
  
  FUN_001ab9a0();
  *this_ptr = &g_026a3808;
  FUN_01e8f720();
  FUN_01e8f800();
  FUN_01e8f8e0();
  FUN_01e8f9c0();
  FUN_01e8faa0();
  FUN_01e8fb80();
  FUN_01e8fc60();
  FUN_01e8fd40();
  FUN_01e8fe20();
  FUN_01e8ff00();
  FUN_01e8ffe0();
  FUN_01e900c0();
  FUN_01e901a0();
  FUN_01e90280();
  FUN_01e90360();
  FUN_01e90440();
  FUN_01e90520();
  FUN_01e90600();
  FUN_01e906e0();
  FUN_01e907c0();
  FUN_01e908a0();
  FUN_01e90980();
  FUN_01e90a60();
  FUN_01e90b40();
  FUN_01e90c20();
  FUN_01e90d00();
  FUN_01e90de0();
  FUN_01e90ec0();
  FUN_01e90fa0();
  FUN_01e91080();
  FUN_01e91160();
  FUN_01e91240();
  FUN_01e91320();
  FUN_01e91400();
  FUN_01e914e0();
  FUN_01e915c0();
  FUN_01e916a0();
  FUN_01e91780();
  FUN_01e91860();
  FUN_01e91940();
  *(void*)(this_ptr + 0x2f) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x17c) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x30) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01e8d890
// ============================================================
// Function: FUN_01e8d890
// Address: 01e8d890
// Size: 532 bytes
// Class: GNToolbar
// String references:
//   "GNToolbar"
//   "_displayMode"
//   "GNToolbarDisplayMode"
// === GNToolbar properties ===
//   GNEdge          _edge
//   GNToolbarDisplayMode _displayMode
//   float           _rectRadius
//   float           _scrollerKnobMargin
//   float           _scrollerBorderRadius
//                   _firstKeyboardNavigationTarget
//                   _lastKeyboardNavigationTarget
//                   _isControllingWindow
//                   _gnuiRootObjects
//                   _namedObjects
//                   _runtimeLocalizer
//                   _dialogRootView
//                   _dialogResponder


void* FUN_01e8d890(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027fb6a0 = "_displayMode";
      g_027fb6a8 = &g_027f1458;
      g_027fb6b0 = 0;
      g_027fb6b8 = 0x6500;
      g_027fb6c0 = "GNToolbarDisplayMode";
      g_027fb6c8 = &g_027fb728;
      g_027fb6d0 = 0;
      ram_00000000027fb6d8 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027fb6a0;
}



// ============================================================
// 01e8dad0
// ============================================================
// Function: FUN_01e8dad0
// Address: 01e8dad0
// Size: 519 bytes
// Class: GNToolbar
// String references:
//   "GNToolbar"
//   "GNEdge"
//   "_edge"
// === GNToolbar properties ===
//   GNEdge          _edge
//   GNToolbarDisplayMode _displayMode
//   float           _rectRadius
//   float           _scrollerKnobMargin
//   float           _scrollerBorderRadius
//                   _firstKeyboardNavigationTarget
//                   _lastKeyboardNavigationTarget
//                   _isControllingWindow
//                   _gnuiRootObjects
//                   _namedObjects
//                   _runtimeLocalizer
//                   _dialogRootView
//                   _dialogResponder


void* FUN_01e8dad0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_027fb760 = "_edge";
      g_027fb768 = &g_027f1458;
      g_027fb770 = 0;
      g_027fb778 = 0x6500;
      g_027fb780 = "GNEdge";
      g_027fb788 = &g_026e5270;
      g_027fb790 = 0;
      ram_00000000027fb798 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_027fb760;
}

