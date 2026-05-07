// ===================================================================
// GNTypographicLayout — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (5):
//                   _containers
//                   _rect
//                   _ascender
//                   _descender
//                   _characterRange


// ============================================================
// 001e02c0
// ============================================================
// Function: FUN_001e02c0
// Address: 001e02c0
// Size: 542 bytes
// Class: GNTypographicLayout
// String references:
//   "GNTypographicLayout"
// === GNTypographicLayout properties ===
//                   _containers
//                   _rect
//                   _ascender
//                   _descender
//                   _characterRange


void FUN_001e02c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026acab8;
  FUN_001e0570();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_026ef8fb == '\0') {
    FUN_001e07f0();
    FUN_00e87980();
  }
  FUN_001e0960();
  FUN_001e0c50();
  *(void*)(this_ptr + 6) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ef8fb == '\0') {
    FUN_001e0f60();
    FUN_00e87980();
  }
  return;
}

