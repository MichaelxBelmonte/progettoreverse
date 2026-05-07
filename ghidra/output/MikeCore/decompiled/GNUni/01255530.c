// Function: FUN_01255530
// Address: 01255530
// Size: 515 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNObject"
//   "GNFraction"
//   "_startQuarter"
//   "_endQuarter"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01255530(void)

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
  *unaff_RDI = &DAT_025d0af8;
  unaff_RDI[7] = 0x100000000;
  lVar9 = FUN_01255330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027bea70 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027bea38 = FUN_01255330();
        _DAT_027bea30 = "_startQuarter";
        _DAT_027bea40 = 0;
        _DAT_027bea48 = 0x7100;
        _DAT_027bea50 = "GNFraction";
        _DAT_027bea58 = 0;
        uRam00000000027bea60 = 0;
        _DAT_027bea68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0x100000000;
  lVar9 = FUN_01255330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027beab8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027bea80 = FUN_01255330();
        _DAT_027bea78 = "_endQuarter";
        _DAT_027bea88 = 0;
        _DAT_027bea90 = 0x7100;
        _DAT_027bea98 = "GNFraction";
        _DAT_027beaa0 = 0;
        uRam00000000027beaa8 = 0;
        _DAT_027beab0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_01255330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01255790();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"GNObject");
  }
  return;
}


