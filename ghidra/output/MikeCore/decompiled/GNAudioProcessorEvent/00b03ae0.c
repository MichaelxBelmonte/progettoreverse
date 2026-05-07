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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b03ae0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_02538ce8;
  unaff_RDI[0x12] = 0;
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
  unaff_RDI[0x13] = 0;
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
  unaff_RDI[0x15] = 0;
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
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_00b03700();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027591f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027591c0 = FUN_00b03700();
        _DAT_027591b8 = "_receiveOnAllMidiSources";
        _DAT_027591c8 = 0;
        _DAT_027591d0 = 0x6200;
        _DAT_027591d8 = "bool";
        _DAT_027591e0 = 0;
        uRam00000000027591e8 = 0;
        _DAT_027591f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


