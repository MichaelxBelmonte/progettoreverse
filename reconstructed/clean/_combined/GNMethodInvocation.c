// ===================================================================
// GNMethodInvocation — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (5):
//                   _isAutocreateActionNamesEnabled
//                   _hasUnstackedChanges
//                   _invocations
//                   _actionName
//                   _saved


// ============================================================
// 00db6e10
// ============================================================
// Function: FUN_00db6e10
// Address: 00db6e10
// Size: 1056 bytes
// Class: GNMethodInvocation
// String references:
//   "GNMethodInvocation"
// === GNMethodInvocation properties ===
//                   _isAutocreateActionNamesEnabled
//                   _hasUnstackedChanges
//                   _invocations
//                   _actionName
//                   _saved


void FUN_00db6e10(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02573a38;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02783133 == '\0') {
    FUN_00db7280();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_02783133 == '\0') {
    FUN_00db7410();
    FUN_00e87980();
  }
  this_ptr[2] = 0;
  // [STATIC_INIT: property registration]
  if (g_02783133 == '\0') {
    FUN_00db75a0();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02783133 == '\0') {
    FUN_00db7730();
    FUN_00e87980();
  }
  FUN_00db78c0();
  FUN_00db7bf0();
  return;
}

