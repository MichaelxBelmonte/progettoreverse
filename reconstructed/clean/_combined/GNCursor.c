// ===================================================================
// GNCursor — Complete reconstructed pseudocode
// 1 functions
// ===================================================================


// ============================================================
// 001bfee0
// ============================================================
// Function: FUN_001bfee0
// Address: 001bfee0
// Size: 550 bytes
// Class: GNCursor
// String references:
//   "GNCursor"

void FUN_001bfee0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0267e0e8;
  FUN_001c0150();
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_026eaecb == '\0') {
    FUN_001c0480();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026eaecb == '\0') {
    FUN_001c0610();
    FUN_00e87980();
  }
  this_ptr[5] = *(void*)(arg1 + 0x28);
  return;
}

