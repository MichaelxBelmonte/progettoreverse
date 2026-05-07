// ===================================================================
// GNMidiValue — Complete reconstructed pseudocode
// 1 functions
// ===================================================================

// Registered properties (8):
//   GNMidiValue     _noteNumber
//   GNMidiValue     _startVelocity
//   GNMidiValue     _stopVelocity
//   GNMidiValue     _aftertouch
//   GNMidiValue     _programNumber
//   bool            _stopping
//   bool            _playing
//   GNInt           _signalSize


// ============================================================
// 00b0f730
// ============================================================
// Function: FUN_00b0f730
// Address: 00b0f730
// Size: 1561 bytes
// Class: GNMidiValue
// String references:
//   "bool"
//   "GNMidiValue"
//   "GNMidiSynthesizer"
//   "_startVelocity"
//   "_stopVelocity"
//   "_aftertouch"
//   "_programNumber"
//   "_stopping"
//   "_playing"
//   "_signalSize"
//   "GNInt"
//   "_noteNumber"
// === GNMidiValue properties ===
//   GNMidiValue     _noteNumber
//   GNMidiValue     _startVelocity
//   GNMidiValue     _stopVelocity
//   GNMidiValue     _aftertouch
//   GNMidiValue     _programNumber
//   bool            _stopping
//   bool            _playing
//   GNInt           _signalSize


void FUN_00b0f730(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_005fea00();
  *this_ptr = &g_0253e850;
  *(void*)(this_ptr + 0x12) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x91) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x92) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x93) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x95) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x96) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x13) = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_00b0fde0();
  this_ptr[0x15] = 0;
  lVar2 = FUN_00b0f500();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0fec0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiSynthesizer");
  }
  return;
}

