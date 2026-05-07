// ===================================================================
// GNStringAnalyzer — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//                   _string
//                   _stringLength
//                   _location


// ============================================================
// 00053f90
// ============================================================
// Function: FUN_00053f90
// Address: 00053f90
// Size: 553 bytes
// Class: GNStringAnalyzer
// String references:
//   "GNStringAnalyzer"
// === GNStringAnalyzer properties ===
//                   _string
//                   _stringLength
//                   _location


void FUN_00053f90(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025880b0;
  FUN_00054200();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d465b == '\0') {
    FUN_000544c0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d465b == '\0') {
    FUN_00054650();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = *(void*)(arg1 + 0x20);
  return;
}

