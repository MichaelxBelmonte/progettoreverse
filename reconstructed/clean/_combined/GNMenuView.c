// ===================================================================
// GNMenuView — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (6):
//   GNEdge          _expandDirection
//                   _menu
//                   _submenu
//                   _super
//                   _itemRects
//                   _showsCheckMarks


// ============================================================
// 00184f70
// ============================================================
// Function: FUN_00184f70
// Address: 00184f70
// Size: 584 bytes
// Class: GNMenuView
// String references:
//   "GNMenuView"
// === GNMenuView properties ===
//   GNEdge          _expandDirection
//                   _menu
//                   _submenu
//                   _super
//                   _itemRects
//                   _showsCheckMarks


void FUN_00184f70(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_208;
  int64_t local_1d8;
  int64_t local_1c0;
  
  if ((g_026e4f48 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_026e4e98 = FUN_0006d940();
    g_026e4e80 = "GNMenuView";
    g_026e4e88 = 400;
    g_026e4e90 = FUN_0018ecc0;
    g_026e4ea0 = 0;
    ram_00000000026e4ea8 = 0;
    g_026e4eb0 = 0;
    g_026e4f28 = 0;
    ram_00000000026e4f30 = 0;
    g_026e4f38 = 0;
    g_026e4f3a = 1;
    g_026e4eb8 = 0;
    ram_00000000026e4ec0 = 0;
    g_026e4ec8 = 0;
    ram_00000000026e4ed0 = 0;
    g_026e4ed8 = 0;
    ram_00000000026e4ee0 = 0;
    g_026e4ee8 = 0;
    ram_00000000026e4ef0 = 0;
    g_026e4ef8 = 0;
    ram_00000000026e4f00 = 0;
    g_026e4f08 = 0;
    ram_00000000026e4f10 = 0;
    g_026e4f18 = 0;
    ram_00000000026e4f20 = 0;
    g_026e4f43 = 0;
    g_026e4f3b = 0;
    ___cxa_guard_release();
  }
  if (g_026e4f3b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0018ed50();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1c0 != 0) {
      FUN_00d50b20();
    }
    if (local_1d8 != 0) {
      FUN_00d50b20();
    }
    if (local_208 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



// ============================================================
// 0018ed50
// ============================================================
// Function: FUN_0018ed50
// Address: 0018ed50
// Size: 1458 bytes
// Class: GNMenuView
// String references:
//   "GNMenuView"
// === GNMenuView properties ===
//   GNEdge          _expandDirection
//                   _menu
//                   _submenu
//                   _super
//                   _itemRects
//                   _showsCheckMarks


void FUN_0018ed50(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_026b4ed8;
  this_ptr[2] = &g_026b5850;
  FUN_0018f3b0();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e4f3b == '\0') {
    FUN_0018f6e0();
    FUN_00e87980();
  }
  FUN_0018f870();
  FUN_0018fb90();
  FUN_0018feb0();
  *(void*)(this_ptr + 0x2c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e4f3b == '\0') {
    FUN_001901d0();
    FUN_00e87980();
  }
  FUN_00190360();
  FUN_00190620();
  *(void*)(this_ptr + 0x2f) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e4f3b == '\0') {
    FUN_00190940();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x17c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e4f3b == '\0') {
    FUN_00190ad0();
    FUN_00e87980();
  }
  FUN_00190d20();
  *(void*)(this_ptr + 0x31) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e4f3b == '\0') {
    FUN_00190fe0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 00190ad0
// ============================================================
// Function: FUN_00190ad0
// Address: 00190ad0
// Size: 547 bytes
// Class: GNMenuView
// String references:
//   "GNMenuView"
//   "GNEdge"
//   "_expandDirection"
// === GNMenuView properties ===
//   GNEdge          _expandDirection
//                   _menu
//                   _submenu
//                   _super
//                   _itemRects
//                   _showsCheckMarks


void* FUN_00190ad0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  // [STATIC_INIT: property registration]
  FUN_00e876a0();
  // [STATIC_INIT: property registration]
      g_026e51d8 = "_expandDirection";
      g_026e51e0 = &g_026e4e80;
      g_026e51e8 = 0;
      g_026e51f0 = 0x6500;
      g_026e51f8 = "GNEdge";
      g_026e5200 = &g_026e5270;
      g_026e5208 = 0;
      ram_00000000026e5210 = 0;
      ___cxa_guard_release();
    }
  }
  return &g_026e51d8;
}

