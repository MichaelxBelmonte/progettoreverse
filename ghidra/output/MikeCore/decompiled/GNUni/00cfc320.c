// Function: FUN_00cfc320
// Address: 00cfc320
// Size: 818 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_connected"
//   "GNHost"
//   "_socketFD"
//   "GNSocketT"
//   "_listening"
//   "_userAbort"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cfc320(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00cfc6e0();
  *unaff_RDI = &DAT_0257d0a8;
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02779570 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02779538 = FUN_00cfc0a0();
        _DAT_02779530 = "_socketFD";
        _DAT_02779540 = 0;
        _DAT_02779548 = 0x6900;
        _DAT_02779550 = "GNSocketT";
        _DAT_02779558 = 0;
        uRam0000000002779560 = 0;
        _DAT_02779568 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  uVar1 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x24);
  *(undefined4 *)(unaff_RDI + 3) = *(undefined4 *)(unaff_RSI + 0x18);
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar1;
  *(undefined4 *)(unaff_RDI + 4) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar3;
  unaff_RDI[5] = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    FUN_00cfce30();
    iVar4 = FUN_00e7ddf0();
    pcVar6 = "GNUni";
    if (iVar4 == 0) {
      pcVar6 = (char *)0x0;
    }
    FUN_00e879c0(pcVar6,"GNHost");
  }
  *(undefined1 *)(unaff_RDI + 6) = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02779600 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_027795c8 = FUN_00cfc0a0();
        _DAT_027795c0 = "_listening";
        _DAT_027795d0 = 0;
        _DAT_027795d8 = 0x6200;
        _DAT_027795e0 = "bool";
        _DAT_027795e8 = 0;
        uRam00000000027795f0 = 0;
        _DAT_027795f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x31) = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02779648 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02779610 = FUN_00cfc0a0();
        _DAT_02779608 = "_connected";
        _DAT_02779618 = 0;
        _DAT_02779620 = 0x6200;
        _DAT_02779628 = "bool";
        _DAT_02779630 = 0;
        uRam0000000002779638 = 0;
        _DAT_02779640 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x32) = 0;
  lVar5 = FUN_00cfc0a0();
  if (*(char *)(lVar5 + 0xbb) == '\0') {
    if (DAT_02779690 == '\0') {
      iVar4 = ___cxa_guard_acquire();
      if (iVar4 != 0) {
        _DAT_02779658 = FUN_00cfc0a0();
        _DAT_02779650 = "_userAbort";
        _DAT_02779660 = 0;
        _DAT_02779668 = 0x6200;
        _DAT_02779670 = "bool";
        _DAT_02779678 = 0;
        uRam0000000002779680 = 0;
        _DAT_02779688 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


