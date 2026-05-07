// ===================================================================
// GNPopUpButtonAssoc — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//                   _isUpdatingUI
//                   _nullValueString
//                   _shouldSortObjects


// ============================================================
// 001e4aa0
// ============================================================
// Function: FUN_001e4aa0
// Address: 001e4aa0
// Size: 556 bytes
// Class: GNPopUpButtonAssoc
// String references:
//   "GNPopUpButtonAssoc"
// === GNPopUpButtonAssoc properties ===
//                   _isUpdatingUI
//                   _nullValueString
//                   _shouldSortObjects


void FUN_001e4aa0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001baad0();
  *this_ptr = &g_026ad958;
  FUN_001e4d70();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f001b == '\0') {
    FUN_001e5060();
    FUN_00e87980();
  }
  FUN_001e51d0();
  FUN_001e5450();
  FUN_001e56d0();
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_026f001b == '\0') {
    FUN_001e5950();
    FUN_00e87980();
  }
  return;
}

