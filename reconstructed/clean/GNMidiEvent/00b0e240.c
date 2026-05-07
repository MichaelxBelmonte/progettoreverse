// Function: FUN_00b0e240
// Address: 00b0e240
// Size: 792 bytes
// Class: GNMidiEvent
// String references:
//   "bool"
//   "GNMidiEvent"
//   "GNMidiTimeStamp"
//   "GNMidiPort"
//   "_notifiesOnReceipt"
//   "_copiesOnReceipt"
//   "_currentTime"
// === GNMidiEvent properties ===
//   bool            _notifiesOnReceipt
//   bool            _copiesOnReceipt
//   GNMidiTimeStamp _currentTime
//                   _parameterIndex
//                   _parameterValue
//                   _isSequenced
//                   _songTime
//                   _tempo
//                   _cycleStartQuarter
//                   _cycleEndQuarter
//                   _quarter
//                   _hostRenderSampleIndex
//                   _numerator
//                   _denominator
//                   _transportPlaying
//                   _cycleIsActive
//                   _validity


void FUN_00b0e240(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025396e8;
  FUN_00b04210();
  FUN_00b04500();
  *this_ptr = &g_0253da40;
  FUN_00b0e680();
  *(void*)(this_ptr + 5) = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x29) = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[6] = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0e760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiEvent");
  }
  this_ptr[7] = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[8] = 0;
  lVar2 = FUN_00b0e060();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00b0e850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMidiPort");
  }
  return;
}

