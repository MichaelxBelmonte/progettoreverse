// ===================================================================
// GNProperty — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (3):
//                   _key
//                   _isTransient
//                   _isExcludedFromReadCopies


// ============================================================
// 000278b0
// ============================================================
// Function: FUN_000278b0
// Address: 000278b0
// Size: 830 bytes
// Class: GNProperty
// String references:
//   "GNProperty"
// === GNProperty properties ===
//                   _key
//                   _isTransient
//                   _isExcludedFromReadCopies


void FUN_000278b0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02577518;
  FUN_00027cb0();
  FUN_00027f30();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ce193 == '\0') {
    FUN_000281b0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x21) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ce193 == '\0') {
    FUN_00028320();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_026ce193 == '\0') {
    FUN_00028490();
    FUN_00e87980();
  }
  FUN_00028600();
  FUN_000288e0();
  FUN_00028bd0();
  FUN_00028ec0();
  FUN_000291b0();
  return;
}

