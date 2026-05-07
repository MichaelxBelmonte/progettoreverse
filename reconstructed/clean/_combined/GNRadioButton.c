// ===================================================================
// GNRadioButton — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (3):
//                   _variableTempoButton
//                   _stretchButton
//                   _renderSliceTimeContext


// ============================================================
// 01e77210
// ============================================================
// Function: FUN_01e77210
// Address: 01e77210
// Size: 616 bytes
// Class: GNRadioButton
// === GNRadioButton properties ===
//                   _variableTempoButton
//                   _stretchButton
//                   _renderSliceTimeContext


void FUN_01e77210(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint64_t local_2c0;
  uint64_t local_2b0;
  uint64_t local_2a0;
  
  lVar1 = FUN_01dbfa10();
  if (*(char *)(lVar1 + 0xbb) == '\0') {
    FUN_001871b0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_001e7990();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_2a0 != 0) {
      FUN_00d50b20();
    }
    if (local_2b0 != 0) {
      FUN_00d50b20();
    }
    if (local_2c0 != 0) {
      FUN_00d50b20();
    }
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}



// ============================================================
// 01e769d0
// ============================================================
// Function: FUN_01e769d0
// Address: 01e769d0
// Size: 580 bytes
// Class: GNRadioButton
// String references:
//   "GNRadioButton"
// === GNRadioButton properties ===
//                   _variableTempoButton
//                   _stretchButton
//                   _renderSliceTimeContext


void FUN_01e769d0(void)

{
  int iVar1;
  uint32_t uVar2;
  
  // [STATIC_INIT: property registration]
  if (g_027f9dfb == '\0') {
    FUN_000f5b20();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_000fabd0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    FUN_000fba40();
    FUN_000fba40();
  }
  return;
}

