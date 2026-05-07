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

