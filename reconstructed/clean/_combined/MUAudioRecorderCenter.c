// ===================================================================
// MUAudioRecorderCenter — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (6):
//                   _didStop
//                   _recordersToBeAdded
//                   _recordersToBeRemoved
//                   _recorders
//                   _processLock
//                   _audioRecorderCenterDelegate


// ============================================================
// 010fa130
// ============================================================
// Function: FUN_010fa130
// Address: 010fa130
// Size: 647 bytes
// Class: MUAudioRecorderCenter
// String references:
//   "MUAudioRecorderCenter"
// === MUAudioRecorderCenter properties ===
//                   _didStop
//                   _recordersToBeAdded
//                   _recordersToBeRemoved
//                   _recorders
//                   _processLock
//                   _audioRecorderCenterDelegate


void FUN_010fa130(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025de738;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278f4f3 == '\0') {
    FUN_010fa470();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0xd) = 0;
  // [STATIC_INIT: property registration]
  if (g_0278f4f3 == '\0') {
    FUN_010fa600();
    FUN_00e87980();
  }
  FUN_010fa790();
  FUN_010faa50();
  FUN_010fad10();
  FUN_010fb040();
  FUN_010fb370();
  FUN_010fb6a0();
  return;
}

