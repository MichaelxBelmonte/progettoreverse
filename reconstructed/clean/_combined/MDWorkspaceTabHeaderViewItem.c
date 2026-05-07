// ===================================================================
// MDWorkspaceTabHeaderViewItem — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (13):
//                   _highlightedItem
//                   _highlightedToCloseItem
//                   _pressedToCloseItem
//                   _selectedItemColor
//                   _itemColor
//                   _menuButton
//                   _rightButton
//                   _leftButton
//                   _menuImage
//                   _showsMenuButtons
//                   _maxItemLength
//                   _edge
//                   _minTabCount


// ============================================================
// 005fa9b0
// ============================================================
// Function: FUN_005fa9b0
// Address: 005fa9b0
// Size: 834 bytes
// Class: MDWorkspaceTabHeaderViewItem
// String references:
//   "MDWorkspaceTabHeaderViewItem"
// === MDWorkspaceTabHeaderViewItem properties ===
//                   _highlightedItem
//                   _highlightedToCloseItem
//                   _pressedToCloseItem
//                   _selectedItemColor
//                   _itemColor
//                   _menuButton
//                   _rightButton
//                   _leftButton
//                   _menuImage
//                   _showsMenuButtons
//                   _maxItemLength
//                   _edge
//                   _minTabCount


void FUN_005fa9b0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025057e8;
  FUN_005fad50();
  FUN_005fb070();
  FUN_005fb3a0();
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  // [STATIC_INIT: property registration]
  if (g_02722273 == '\0') {
    FUN_005fb6d0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_02722273 == '\0') {
    FUN_005fb860();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  // [STATIC_INIT: property registration]
  if (g_02722273 == '\0') {
    FUN_005fb9f0();
    FUN_00e87980();
  }
  return;
}

