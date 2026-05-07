// ===================================================================
// GNRunLoopObserver — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (4):
//                   _runLoopObserverDidLockModel
//                   _recommendedKeysForAttributeFaulting
//                   _coalescedPropertyObserverNotificationStoreByThreadID
//                   _currentThreadCoalescedPropertyObserverNotificationStore


// ============================================================
// 00059a60
// ============================================================
// Function: FUN_00059a60
// Address: 00059a60
// Size: 812 bytes
// Class: GNRunLoopObserver
// String references:
//   "GNRunLoopObserver"
// === GNRunLoopObserver properties ===
//                   _runLoopObserverDidLockModel
//                   _recommendedKeysForAttributeFaulting
//                   _coalescedPropertyObserverNotificationStoreByThreadID
//                   _currentThreadCoalescedPropertyObserverNotificationStore


void FUN_00059a60(void)

{
  int iVar1;
  int64_t arg1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025823b0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d560b == '\0') {
    FUN_00059df0();
    FUN_00e87980();
  }
  FUN_00059f80();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d560b == '\0') {
    FUN_0005a320();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x19) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d560b == '\0') {
    FUN_0005a4b0();
    FUN_00e87980();
  }
  FUN_0005a640();
  this_ptr[5] = *(void*)(arg1 + 0x28);
  return;
}

