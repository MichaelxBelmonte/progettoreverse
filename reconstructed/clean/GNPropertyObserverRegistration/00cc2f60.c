// Function: FUN_00cc2f60
// Address: 00cc2f60
// Size: 851 bytes
// Class: GNPropertyObserverRegistration
// String references:
//   "GNPropertyObserverRegistration"
// === GNPropertyObserverRegistration properties ===
//                   _propertyObservationLock
//                   _editingLists
//                   _propertyObservationDisableLevel
//                   _modelLock
//                   _hasObserverRegistrations
//                   _registersMethodInvocationsForObjectChanges
//                   _lockModelInMainthreadCounter
//                   _lockModelInBackgroundthreadCounter
//                   _objectsToBeRemovedDueToOwnership
//                   _isPostingChangeNotifications
//                   _objectsNeedingTermination
//                   _lastAutosaveError


void FUN_00cc2f60(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02587160;
  FUN_00cc3340();
  FUN_00cc36c0();
  FUN_00cc39f0();
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277411b == '\0') {
    FUN_00cc3d20();
    FUN_00e87980();
  }
  FUN_00cc3eb0();
  *(void*)(this_ptr + 7) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277411b == '\0') {
    FUN_00cc41e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x39) = 0;
  // [STATIC_INIT: property registration]
  if (g_0277411b == '\0') {
    FUN_00cc4370();
    FUN_00e87980();
  }
  return;
}

