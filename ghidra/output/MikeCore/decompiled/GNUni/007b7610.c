// Function: FUN_007b7610
// Address: 007b7610
// Size: 1068 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "SInt64"
//   "GNFile"
//   "_dataLocation"
//   "UInt64"
//   "_sampleFrames"
//   "_channelCount"
//   "_headerNeedsUpdate"
//   "_suspendedFileOffset"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b7610(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02544ad8;
  FUN_007b72e0();
  *unaff_RDI = &DAT_02544ea0;
  unaff_RDI[3] = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_007b7b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFile");
  }
  *(undefined1 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c4e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c4b0 = FUN_007b6e40();
        _DAT_0272c4a8 = "_headerNeedsUpdate";
        _DAT_0272c4b8 = 0;
        _DAT_0272c4c0 = 0x6200;
        _DAT_0272c4c8 = "bool";
        _DAT_0272c4d0 = 0;
        uRam000000000272c4d8 = 0;
        _DAT_0272c4e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c530 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c4f8 = FUN_007b6e40();
        _DAT_0272c4f0 = "_suspendedFileOffset";
        _DAT_0272c500 = 0;
        _DAT_0272c508 = 0x6c00;
        _DAT_0272c510 = "UInt64";
        _DAT_0272c518 = 0;
        uRam000000000272c520 = 0;
        _DAT_0272c528 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 6) = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c578 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c540 = FUN_007b6e40();
        _DAT_0272c538 = "_channelCount";
        _DAT_0272c548 = 0;
        _DAT_0272c550 = 0x6900;
        _DAT_0272c558 = "GNInt";
        _DAT_0272c560 = 0;
        uRam000000000272c568 = 0;
        _DAT_0272c570 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_007b7bf0();
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c608 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c5d0 = FUN_007b6e40();
        _DAT_0272c5c8 = "_sampleFrames";
        _DAT_0272c5d8 = 0;
        _DAT_0272c5e0 = 0x6c00;
        _DAT_0272c5e8 = "SInt64";
        _DAT_0272c5f0 = 0;
        uRam000000000272c5f8 = 0;
        _DAT_0272c600 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_007b6e40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c650 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c618 = FUN_007b6e40();
        _DAT_0272c610 = "_dataLocation";
        _DAT_0272c620 = 0;
        _DAT_0272c628 = 0x6c00;
        _DAT_0272c630 = "UInt64";
        _DAT_0272c638 = 0;
        uRam000000000272c640 = 0;
        _DAT_0272c648 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


