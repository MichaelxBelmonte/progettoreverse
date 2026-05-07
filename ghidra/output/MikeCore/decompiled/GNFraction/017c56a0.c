// Function: FUN_017c56a0
// Address: 017c56a0
// Size: 638 bytes
// Class: GNFraction
// String references:
//   "bool"
//   "GNFraction"
//   "_startQuarter"
//   "double"
//   "_quarterDeviation"
//   "_isAccent"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017c56a0(void)

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
  *unaff_RDI = &DAT_026038a0;
  unaff_RDI[7] = 0x100000000;
  lVar9 = FUN_017c3330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d2e40 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d2e08 = FUN_017c3330();
        _DAT_027d2e00 = "_startQuarter";
        _DAT_027d2e10 = 0;
        _DAT_027d2e18 = 0x7100;
        _DAT_027d2e20 = "GNFraction";
        _DAT_027d2e28 = 0;
        uRam00000000027d2e30 = 0;
        _DAT_027d2e38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_017c3330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d2e88 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d2e50 = FUN_017c3330();
        _DAT_027d2e48 = "_quarterDeviation";
        _DAT_027d2e58 = 0;
        _DAT_027d2e60 = 0x6400;
        _DAT_027d2e68 = "double";
        _DAT_027d2e70 = 0;
        uRam00000000027d2e78 = 0;
        _DAT_027d2e80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_017c3330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_017c5970();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_017c3330();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027d2f90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027d2f58 = FUN_017c3330();
        _DAT_027d2f50 = "_isAccent";
        _DAT_027d2f60 = 0;
        _DAT_027d2f68 = 0x6200;
        _DAT_027d2f70 = "bool";
        _DAT_027d2f78 = 0;
        uRam00000000027d2f80 = 0;
        _DAT_027d2f88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


