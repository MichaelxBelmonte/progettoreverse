// Function: FUN_001c3150
// Address: 001c3150
// Size: 589 bytes
// Class: GNTextViewDelegate
// String references:
//   "GNTextViewDelegate"
//   "GNTextAssoc"
// === GNTextViewDelegate properties ===
//                   _textFieldWasEditable
//                   _isTrackingChanges
//                   _activationTrackingChangesDidFail
//                   _isTrackingAllChanges
//                   _isAutofreezeUndoManagerEnabled


void FUN_001c3150(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_001baad0();
  this_ptr[9] = &g_0269d6b8;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_0267d5a8;
  this_ptr[9] = &g_0267dae0;
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_026eb5fb == '\0') {
    FUN_001c33d0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x51) = 0;
  // [STATIC_INIT: property registration]
  if (g_026eb5fb == '\0') {
    FUN_001c3540();
    FUN_00e87980();
  }
  return;
}

