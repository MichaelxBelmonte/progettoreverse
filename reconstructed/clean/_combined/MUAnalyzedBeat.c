// ===================================================================
// MUAnalyzedBeat — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (5):
//                   _position
//                   _correlationQuality
//                   _beatMatchingWeightedQuality
//                   _isInConstantTempoRegion
//                   _usedTempoRegion


// ============================================================
// 010ef780
// ============================================================
// Function: FUN_010ef780
// Address: 010ef780
// Size: 918 bytes
// Class: MUAnalyzedBeat
// String references:
//   "MUAnalyzedBeat"
// === MUAnalyzedBeat properties ===
//                   _position
//                   _correlationQuality
//                   _beatMatchingWeightedQuality
//                   _isInConstantTempoRegion
//                   _usedTempoRegion


void FUN_010ef780(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025baef0;
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_0278cc7b == '\0') {
    FUN_010efb40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278cc7b == '\0') {
    FUN_010efcb0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278cc7b == '\0') {
    FUN_010efe20();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278cc7b == '\0') {
    FUN_010eff90();
    FUN_00e87980();
  }
  FUN_010f0100();
  return;
}

