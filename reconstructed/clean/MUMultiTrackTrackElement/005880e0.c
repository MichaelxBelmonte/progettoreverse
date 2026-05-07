// Function: FUN_005880e0
// Address: 005880e0
// Size: 1098 bytes
// Class: MUMultiTrackTrackElement
// String references:
//   "MUMultiTrackTrackElement"
//   "GNHeartbeatHandler"
//   "GNPropertyObserver"

void FUN_005880e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  this_ptr[2] = &g_025768d0;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  this_ptr[3] = &g_024c8618;
  // [STATIC_INIT: property registration]
  FUN_00e87c40();
  *this_ptr = &g_02658280;
  this_ptr[2] = &g_02658638;
  this_ptr[3] = &g_02658688;
  FUN_00588590();
  FUN_005888c0();
  FUN_00588bf0();
  this_ptr[7] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8003 == '\0') {
    FUN_00588f10();
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8003 == '\0') {
    FUN_005890a0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 9) = 0;
  // [STATIC_INIT: property registration]
  if (g_026d8003 == '\0') {
    FUN_00589230();
    FUN_00e87980();
  }
  return;
}

