// Function: FUN_01706fd0
// Address: 01706fd0
// Size: 511 bytes
// Class: GNFraction
// String references:
//   "GNFraction"
//   "_startQuarter"
//   "MUQuarterAnchor"
//   "_subdivison"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01706fd0(void)

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
  *unaff_RDI = &DAT_02615e70;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01706dd0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01707240();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUQuarterAnchor");
  }
  unaff_RDI[8] = 0x100000000;
  lVar9 = FUN_01706dd0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cb860 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cb828 = FUN_01706dd0();
        _DAT_027cb820 = "_startQuarter";
        _DAT_027cb830 = 0;
        _DAT_027cb838 = 0x7100;
        _DAT_027cb840 = "GNFraction";
        _DAT_027cb848 = 0;
        uRam00000000027cb850 = 0;
        _DAT_027cb858 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0x100000000;
  lVar9 = FUN_01706dd0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cb8a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cb870 = FUN_01706dd0();
        _DAT_027cb868 = "_subdivison";
        _DAT_027cb878 = 0;
        _DAT_027cb880 = 0x7100;
        _DAT_027cb888 = "GNFraction";
        _DAT_027cb890 = 0;
        uRam00000000027cb898 = 0;
        _DAT_027cb8a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


