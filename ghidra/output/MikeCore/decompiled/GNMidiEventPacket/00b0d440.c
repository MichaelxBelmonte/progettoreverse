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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b0d440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_025396e8;
  FUN_00b04210();
  FUN_00b04500();
  *unaff_RDI = &DAT_0253d668;
  unaff_RDI[4] = *(undefined8 *)(unaff_RSI + 0x20);
  *(undefined1 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275aba8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ab70 = FUN_00b6f870();
        _DAT_0275ab68 = "_isSource";
        _DAT_0275ab78 = 0;
        _DAT_0275ab80 = 0x6200;
        _DAT_0275ab88 = "bool";
        _DAT_0275ab90 = 0;
        uRam000000000275ab98 = 0;
        _DAT_0275aba0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x29) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275abf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275abb8 = FUN_00b6f870();
        _DAT_0275abb0 = "_isDestination";
        _DAT_0275abc0 = 0;
        _DAT_0275abc8 = 0x6200;
        _DAT_0275abd0 = "bool";
        _DAT_0275abd8 = 0;
        uRam000000000275abe0 = 0;
        _DAT_0275abe8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2a) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ac38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ac00 = FUN_00b6f870();
        _DAT_0275abf8 = "_currentStatus";
        _DAT_0275ac08 = 0;
        _DAT_0275ac10 = 0x6300;
        _DAT_0275ac18 = "GNMidiValue";
        _DAT_0275ac20 = 0;
        uRam000000000275ac28 = 0;
        _DAT_0275ac30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
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
  puVar4 = unaff_RDI + 7;
  unaff_RDI[7] = 0;
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
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ad58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ad20 = FUN_00b6f870();
        _DAT_0275ad18 = "_closeMonitor";
        _DAT_0275ad28 = 0;
        _DAT_0275ad30 = 0x6200;
        _DAT_0275ad38 = "bool";
        _DAT_0275ad40 = 0;
        uRam000000000275ad48 = 0;
        _DAT_0275ad50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ada0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ad68 = FUN_00b6f870();
        _DAT_0275ad60 = "_isActive";
        _DAT_0275ad70 = 0;
        _DAT_0275ad78 = 0x6200;
        _DAT_0275ad80 = "bool";
        _DAT_0275ad88 = 0;
        uRam000000000275ad90 = 0;
        _DAT_0275ad98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ade8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275adb0 = FUN_00b6f870();
        _DAT_0275ada8 = "_forwardsActiveSense";
        _DAT_0275adb8 = 0;
        _DAT_0275adc0 = 0x6200;
        _DAT_0275adc8 = "bool";
        _DAT_0275add0 = 0;
        uRam000000000275add8 = 0;
        _DAT_0275ade0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ae30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275adf8 = FUN_00b6f870();
        _DAT_0275adf0 = "_sendsNoteOffsOnActiveSenseLeaks";
        _DAT_0275ae00 = 0;
        _DAT_0275ae08 = 0x6200;
        _DAT_0275ae10 = "bool";
        _DAT_0275ae18 = 0;
        uRam000000000275ae20 = 0;
        _DAT_0275ae28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar2 = FUN_00b6f870();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ae78 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ae40 = FUN_00b6f870();
        _DAT_0275ae38 = "_receivedActiveSense";
        _DAT_0275ae48 = 0;
        _DAT_0275ae50 = 0x6300;
        _DAT_0275ae58 = "char";
        _DAT_0275ae60 = 0;
        uRam000000000275ae68 = 0;
        _DAT_0275ae70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
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


