// Function: FUN_007af3c0
// Address: 007af3c0
// Size: 526 bytes
// Class: GNMidiEventPacket
// String references:
//   "GNMidiEventPacket"
// === GNMidiEventPacket properties ===
//   bool            _isSource
//   bool            _isDestination
//   GNMidiValue     _currentStatus
//   bool            _closeMonitor
//   bool            _isActive
//   bool            _forwardsActiveSense
//   bool            _sendsNoteOffsOnActiveSenseLeaks
//   char            _receivedActiveSense


void FUN_007af3c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_0253a1e0;
  FUN_007af630();
  FUN_007af920();
  this_ptr[4] = 0;
  // [STATIC_INIT: property registration]
  if (g_0272b56b == '\0') {
    FUN_007afba0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 5) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272b56b == '\0') {
    FUN_007afd10();
    FUN_00e87980();
  }
  FUN_007afe80();
  return;
}

