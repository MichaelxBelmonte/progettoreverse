// Function: FUN_013dbcd0
// Address: 013dbcd0
// Size: 590 bytes
// Class: GNOperationProgressObserver
// String references:
//   "GNOperationProgressObserver"
//   "MUSeparationProgressNotificationAdapter"

void FUN_013dbcd0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_024c15b0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_025d8bd0;
  this_ptr[2] = &g_025d8f58;
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_027bf613 == '\0') {
    FUN_013dbf50();
    FUN_00e87980();
  }
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_027bf613 == '\0') {
    FUN_013dc0c0();
    FUN_00e87980();
  }
  return;
}

