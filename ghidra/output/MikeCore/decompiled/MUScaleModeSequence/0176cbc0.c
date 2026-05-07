// Function: FUN_0176cbc0
// Address: 0176cbc0
// Size: 1181 bytes
// Class: MUScaleModeSequence
// String references:
//   "bool"
//   "_mode"
//   "MUScaleModeSequence"
//   "_isCyclic"
//   "MUScaleModeDegree"
//   "GNInt"
//   "_fundamentalIndex"
//   "_modeOffsetIsLocked"
//   "_modeFundamentalOffset"
//   "_modeFundamentalFifthsDirection"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0176cbc0(void)

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
  *unaff_RDI = &DAT_025fe2f0;
  FUN_0176d140();
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd738 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd700 = FUN_0013de80();
        _DAT_027cd6f8 = "_isCyclic";
        _DAT_027cd708 = 0;
        _DAT_027cd710 = 0x6200;
        _DAT_027cd718 = "bool";
        _DAT_027cd720 = 0;
        uRam00000000027cd728 = 0;
        _DAT_027cd730 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0176d220();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd7c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd790 = FUN_0013de80();
        _DAT_027cd788 = "_fundamentalIndex";
        _DAT_027cd798 = 0;
        _DAT_027cd7a0 = 0x6900;
        _DAT_027cd7a8 = "GNInt";
        _DAT_027cd7b0 = 0;
        uRam00000000027cd7b8 = 0;
        _DAT_027cd7c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d300();
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d480();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_mode";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeDegree");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d570();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeSequence");
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd990 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd958 = FUN_0013de80();
        _DAT_027cd950 = "_modeOffsetIsLocked";
        _DAT_027cd960 = 0;
        _DAT_027cd968 = 0x6200;
        _DAT_027cd970 = "bool";
        _DAT_027cd978 = 0;
        uRam00000000027cd980 = 0;
        _DAT_027cd988 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x6c) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd9d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd9a0 = FUN_0013de80();
        _DAT_027cd998 = "_modeFundamentalOffset";
        _DAT_027cd9a8 = 0;
        _DAT_027cd9b0 = 0x6900;
        _DAT_027cd9b8 = "GNInt";
        _DAT_027cd9c0 = 0;
        uRam00000000027cd9c8 = 0;
        _DAT_027cd9d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cda20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd9e8 = FUN_0013de80();
        _DAT_027cd9e0 = "_modeFundamentalFifthsDirection";
        _DAT_027cd9f0 = 0;
        _DAT_027cd9f8 = 0x6900;
        _DAT_027cda00 = "GNInt";
        _DAT_027cda08 = 0;
        uRam00000000027cda10 = 0;
        _DAT_027cda18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


