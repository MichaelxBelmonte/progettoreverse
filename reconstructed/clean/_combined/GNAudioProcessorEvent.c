// ===================================================================
// GNAudioProcessorEvent — Complete reconstructed pseudocode
// 2 functions
// ===================================================================

// Registered properties (1):
//   bool            _receiveOnAllMidiSources


// ============================================================
// 00b03ae0
// ============================================================
// Function: FUN_00b03ae0
// Address: 00b03ae0
// Size: 518 bytes
// Class: GNAudioProcessorEvent
// String references:
//   "bool"
//   "GNAudioProcessorEvent"
//   "GNMidiConnection"
//   "GNMidiQueue"
//   "_receiveOnAllMidiSources"
// === GNAudioProcessorEvent properties ===
//   bool            _receiveOnAllMidiSources


void FUN_00b03ae0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_02538ce8;
  this_ptr[0x12] = 0;
  lVar2 = FUN_00b03700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b03dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiConnection");
  }
  this_ptr[0x13] = 0;
  lVar2 = FUN_00b03700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b03ec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAudioProcessorEvent");
  }
  FUN_00b03fb0();
  this_ptr[0x15] = 0;
  lVar2 = FUN_00b03700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b04090();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiQueue");
  }
  *(void*)(this_ptr + 0x16) = 0;
  lVar2 = FUN_00b03700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 007ab0a0
// ============================================================
// Function: FUN_007ab0a0
// Address: 007ab0a0
// Size: 934 bytes
// Class: GNAudioProcessorEvent
// String references:
//   "GNAudioProcessorEvent"
// === GNAudioProcessorEvent properties ===
//   bool            _receiveOnAllMidiSources


void FUN_007ab0a0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_02532d78;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272ac43 == '\0') {
    FUN_007ab4a0();
    FUN_00e87980();
  }
  FUN_007ab610();
  *(void*)(this_ptr + 3) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272ac43 == '\0') {
    FUN_007ab900();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x1c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272ac43 == '\0') {
    FUN_007aba70();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 4) = 0;
  // [STATIC_INIT: property registration]
  if (g_0272ac43 == '\0') {
    FUN_007abbe0();
    FUN_00e87980();
  }
  return;
}

