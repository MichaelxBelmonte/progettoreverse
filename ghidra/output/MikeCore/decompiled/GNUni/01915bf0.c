// Function: FUN_01915bf0
// Address: 01915bf0
// Size: 743 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_steps"
//   "MULineMapper"
//   "_canGoUp"
//   "_canRepeat"
//   "_canGoDown"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01915bf0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_02619ec0;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_019159c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027e0480 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027e0448 = FUN_019159c0();
        _DAT_027e0440 = "_canGoUp";
        _DAT_027e0450 = 0;
        _DAT_027e0458 = 0x6200;
        _DAT_027e0460 = "bool";
        _DAT_027e0468 = 0;
        uRam00000000027e0470 = 0;
        _DAT_027e0478 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar9 = FUN_019159c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027e04c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027e0490 = FUN_019159c0();
        _DAT_027e0488 = "_canRepeat";
        _DAT_027e0498 = 0;
        _DAT_027e04a0 = 0x6200;
        _DAT_027e04a8 = "bool";
        _DAT_027e04b0 = 0;
        uRam00000000027e04b8 = 0;
        _DAT_027e04c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_019159c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027e0510 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027e04d8 = FUN_019159c0();
        _DAT_027e04d0 = "_canGoDown";
        _DAT_027e04e0 = 0;
        _DAT_027e04e8 = 0x6200;
        _DAT_027e04f0 = "bool";
        _DAT_027e04f8 = 0;
        uRam00000000027e0500 = 0;
        _DAT_027e0508 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_019159c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01915f20();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_019159c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_019160a0();
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_019159c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01916230();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_steps";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MULineMapper");
  }
  return;
}


