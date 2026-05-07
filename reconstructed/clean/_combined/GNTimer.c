// ===================================================================
// GNTimer — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (9):
//                   _lastMenuActionName
//                   _lastMenuActionTitle
//                   _showFullPathsInResentMenu
//                   _terminatesOnLastDocumentClosed
//                   _areDocumentsUnstable
//                   _isRunningDialog
//                   _isRunningSystemDialog
//                   _provokeExceptionWithinNextEvent
//                   _defaultFileType


// ============================================================
// 00201ac0
// ============================================================
// Function: FUN_00201ac0
// Address: 00201ac0
// Size: 602 bytes
// Class: GNTimer
// String references:
//   "GNTimer"
// === GNTimer properties ===
//                   _lastMenuActionName
//                   _lastMenuActionTitle
//                   _showFullPathsInResentMenu
//                   _terminatesOnLastDocumentClosed
//                   _areDocumentsUnstable
//                   _isRunningDialog
//                   _isRunningSystemDialog
//                   _provokeExceptionWithinNextEvent
//                   _defaultFileType


void FUN_00201ac0(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0269e0f8;
  this_ptr[2] = *(void*)(arg1 + 0x10);
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027fb49b == '\0') {
    FUN_00201d90();
    FUN_00e87980();
  }
  FUN_00201f20();
  FUN_002021e0();
  this_ptr[6] = *(void*)(arg1 + 0x30);
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_027fb49b == '\0') {
    FUN_00202510();
    FUN_00e87980();
  }
  FUN_002026a0();
  this_ptr[9] = *(void*)(arg1 + 0x48);
  return;
}

