// ===================================================================
// MUTempoDetectionRegion — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (9):
//                   _descriptionType
//                   _useAutomaticDetection
//                   _percussiveSeparation
//                   _hasDistinctAttacks
//                   _findSibilantPointsAutomatically
//                   _isPreliminary
//                   _isTonalicOnly
//                   _allowAutomaticPolyphonicDetection
//                   _usedRanges


// ============================================================
// 011c3290
// ============================================================
// Function: FUN_011c3290
// Address: 011c3290
// Size: 1662 bytes
// Class: MUTempoDetectionRegion
// String references:
//   "MUTempoDetectionRegion"
// === MUTempoDetectionRegion properties ===
//                   _descriptionType
//                   _useAutomaticDetection
//                   _percussiveSeparation
//                   _hasDistinctAttacks
//                   _findSibilantPointsAutomatically
//                   _isPreliminary
//                   _isTonalicOnly
//                   _allowAutomaticPolyphonicDetection
//                   _usedRanges


void FUN_011c3290(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025c52a0;
  FUN_011c3980();
  FUN_011c3c70();
  FUN_011c3f50();
  FUN_011c4230();
  FUN_011c4510();
  FUN_011c47f0();
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b65db == '\0') {
    FUN_011c4a70();
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  // [STATIC_INIT: property registration]
  if (g_027b65db == '\0') {
    FUN_011c4be0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b65db == '\0') {
    FUN_011c4d50();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b65db == '\0') {
    FUN_011c4ec0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b65db == '\0') {
    FUN_011c5030();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b65db == '\0') {
    FUN_011c51a0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_027b65db == '\0') {
    FUN_011c5310();
    FUN_00e87980();
  }
  FUN_011c5480();
  return;
}

