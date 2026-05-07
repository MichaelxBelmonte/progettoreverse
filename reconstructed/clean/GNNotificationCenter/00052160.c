// Function: FUN_00052160
// Address: 00052160
// Size: 656 bytes
// Class: GNNotificationCenter
// String references:
//   "GNNotificationCenter"
// === GNNotificationCenter properties ===
//   GNCoreHashTable * _idleQueue
//                   _coalescedIdleNotifications
//                   _notificationObservationSpecs
//                   _observerSpecsCount
//                   _specsToFire


void FUN_00052160(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02574bb0;
  FUN_000524b0();
  FUN_000527e0();
  FUN_00052b10();
  this_ptr[5] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d400b == '\0') {
    FUN_00052dd0();
    FUN_00e87980();
  }
  FUN_00052f60();
  FUN_00053220();
  *(void*)(this_ptr + 8) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d400b == '\0') {
    FUN_00053550();
    FUN_00e87980();
  }
  FUN_000536e0();
  return;
}

