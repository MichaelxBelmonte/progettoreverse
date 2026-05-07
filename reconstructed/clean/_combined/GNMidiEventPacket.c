// ===================================================================
// GNMidiEventPacket — Complete reconstructed pseudocode
// 3 functions
// ===================================================================

// Registered properties (8):
//   bool            _isSource
//   bool            _isDestination
//   GNMidiValue     _currentStatus
//   bool            _closeMonitor
//   bool            _isActive
//   bool            _forwardsActiveSense
//   bool            _sendsNoteOffsOnActiveSenseLeaks
//   char            _receivedActiveSense


// ============================================================
// 00b0d440
// ============================================================
// Function: FUN_00b0d440
// Address: 00b0d440
// Size: 1721 bytes
// Class: GNMidiEventPacket
// String references:
//   "bool"
//   "char"
//   "GNMidiEventPacket"
//   "GNMidiValue"
//   "_isSource"
//   "_isDestination"
//   "_currentStatus"
//   "_closeMonitor"
//   "_isActive"
//   "_forwardsActiveSense"
//   "_sendsNoteOffsOnActiveSenseLeaks"
//   "_receivedActiveSense"
//   "GNThread"
//   "GNLock"
// === GNMidiEventPacket properties ===
//   bool            _isSource
//   bool            _isDestination
//   GNMidiValue     _currentStatus
//   bool            _closeMonitor
//   bool            _isActive
//   bool            _forwardsActiveSense
//   bool            _sendsNoteOffsOnActiveSenseLeaks
//   char            _receivedActiveSense


void FUN_00b0d440(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t arg1;
  void*this_ptr;
  void*puVar4;
  
  FUN_00d4ff80();
  *this_ptr = &g_025396e8;
  FUN_00b04210();
  FUN_00b04500();
  *this_ptr = &g_0253d668;
  this_ptr[4] = *(void*)(arg1 + 0x20);
  *(void*)(this_ptr + 5) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x2a) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0dcb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiEventPacket");
  }
  puVar4 = this_ptr + 7;
  this_ptr[7] = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0dda0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLock",param_3,param_4,puVar4);
  }
  FUN_00b0de90();
  *(void*)(this_ptr + 9) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x49) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4a) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4b) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0df70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNThread");
  }
  return;
}



// ============================================================
// 007a53d0
// ============================================================
// Function: FUN_007a53d0
// Address: 007a53d0
// Size: 508 bytes
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


void FUN_007a53d0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_78;
  int64_t local_70;
  int64_t local_58;
  void*local_40;
  
  if ((g_027594e0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0272b4c8 = FUN_00d4fe50();
    g_0272b4b0 = "GNMidiEventPacket";
    g_0272b4b8 = 0x38;
    g_0272b4c0 = FUN_007af310;
    g_0272b4d0 = 0;
    ram_000000000272b4d8 = 0;
    g_0272b4e0 = 0;
    ram_000000000272b4e8 = 0;
    g_0272b4f0 = 0;
    ram_000000000272b4f8 = 0;
    g_0272b500 = 0;
    ram_000000000272b508 = 0;
    g_0272b510 = 0;
    ram_000000000272b518 = 0;
    g_0272b520 = 0;
    ram_000000000272b528 = 0;
    g_0272b530 = 0;
    ram_000000000272b538 = 0;
    g_0272b540 = 0;
    ram_000000000272b548 = 0;
    g_0272b550 = 0;
    ram_000000000272b558 = 0;
    g_0272b560 = 0;
    _ram_000000000272b568 = 0;
    g_0272b570 = 0;
    ___cxa_guard_release();
  }
  if (g_0272b56b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    FUN_00d4ff40();
    local_40 = (void*)0x0;
    if (1 < g_02802630) {
      local_40 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_40 = &g_02572358;
      (*g_02572370)();
    }
    FUN_00d50c00();
    FUN_007af3c0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if (local_70 != 0) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
    if (local_40 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_00d4ffa0();
  }
  return;
}



// ============================================================
// 007af3c0
// ============================================================
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

