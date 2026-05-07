// Function: FUN_00cbe730
// Address: 00cbe730
// Size: 500 bytes
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


void FUN_00cbe730(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_80;
  int64_t local_78;
  int64_t local_68;
  
  if ((g_02774128 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_02774078 = FUN_00d4fe50();
    g_02774060 = "GNPropertyObserverRegistration";
    g_02774068 = 0x40;
    g_02774070 = FUN_00cc13c0;
    g_02774080 = 0;
    ram_0000000002774088 = 0;
    g_02774090 = 0;
    g_02774108 = 0;
    ram_0000000002774110 = 0;
    g_02774118 = 0;
    g_0277411a = 1;
    g_02774098 = 0;
    ram_00000000027740a0 = 0;
    g_027740a8 = 0;
    ram_00000000027740b0 = 0;
    g_027740b8 = 0;
    ram_00000000027740c0 = 0;
    g_027740c8 = 0;
    ram_00000000027740d0 = 0;
    g_027740d8 = 0;
    ram_00000000027740e0 = 0;
    g_027740e8 = 0;
    ram_00000000027740f0 = 0;
    g_027740f8 = 0;
    ram_0000000002774100 = 0;
    g_02774123 = 0;
    g_0277411b = 0;
    ___cxa_guard_release();
  }
  if (g_0277411b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    FUN_00d50c00();
    FUN_00cc2f60();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if (local_80 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    FUN_00d4ffa0();
  }
  return;
}

