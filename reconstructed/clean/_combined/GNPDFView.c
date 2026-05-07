// ===================================================================
// GNPDFView — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (4):
//                   _pageIndex
//                   _zoomFactor
//                   _interpolationQuality
//                   _alignment


// ============================================================
// 01e88fc0
// ============================================================
// Function: FUN_01e88fc0
// Address: 01e88fc0
// Size: 761 bytes
// Class: GNPDFView
// String references:
//   "GNPDFView"
// === GNPDFView properties ===
//                   _pageIndex
//                   _zoomFactor
//                   _interpolationQuality
//                   _alignment


void FUN_01e88fc0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_026b0db8;
  this_ptr[2] = &g_026b16e0;
  FUN_01e89300();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f8e93 == '\0') {
    FUN_01e895f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x144) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f8e93 == '\0') {
    FUN_01e89760();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x29) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f8e93 == '\0') {
    FUN_01e898d0();
    FUN_00e87980();
  }
  return;
}

