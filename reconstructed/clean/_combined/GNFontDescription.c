// ===================================================================
// GNFontDescription — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (6):
//                   _docView
//                   _autoscrollingEnabled
//                   _backgroundColor
//                   _isForwardingDraggingInfoToDocumentView
//                   _isForwardingMouseEventsToDocumentView
//                   _graphicsContextScrollingDisabled


// ============================================================
// 001cab90
// ============================================================
// Function: FUN_001cab90
// Address: 001cab90
// Size: 527 bytes
// Class: GNFontDescription
// String references:
//   "GNFontDescription"
// === GNFontDescription properties ===
//                   _docView
//                   _autoscrollingEnabled
//                   _backgroundColor
//                   _isForwardingDraggingInfoToDocumentView
//                   _isForwardingMouseEventsToDocumentView
//                   _graphicsContextScrollingDisabled


void FUN_001cab90(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_026a7ac8;
  FUN_001cae00();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecf13 == '\0') {
    FUN_001cb080();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ecf13 == '\0') {
    FUN_001cb1f0();
    FUN_00e87980();
  }
  FUN_001cb360();
  FUN_001cb5e0();
  return;
}

