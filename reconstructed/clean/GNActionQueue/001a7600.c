// Function: FUN_001a7600
// Address: 001a7600
// Size: 854 bytes
// Class: GNActionQueue
// String references:
//   "GNActionQueue"
// === GNActionQueue properties ===
//                   _actions
//                   _defaults
//                   _actionIndex
//                   _isRunningModal
//                   _logFile
//                   _logFilePath
//                   _keyboardShortCut
//                   _eventTypes


void FUN_001a7600(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02672220;
  FUN_001a79d0();
  FUN_001a7d00();
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e78a3 == '\0') {
    FUN_001a7fc0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x24) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e78a3 == '\0') {
    FUN_001a8150();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x25) = 0;
  // [STATIC_INIT: property registration]
  if (g_026e78a3 == '\0') {
    FUN_001a82e0();
    FUN_00e87980();
  }
  FUN_001a8470();
  FUN_001a87a0();
  return;
}

