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

