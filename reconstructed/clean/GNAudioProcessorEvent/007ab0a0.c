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

