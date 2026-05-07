// Function: FUN_0151ca60
// Address: 0151ca60
// Size: 551 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNFraction"
//   "MUPart"
//   "_startQuarterCache"
//   "_endQuarterCache"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0151ca60(void)

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
  *unaff_RDI = &DAT_025ee1f0;
  FUN_0151ccf0();
  FUN_0151cdd0();
  unaff_RDI[9] = 0x100000000;
  lVar9 = FUN_0151c860();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c2c50 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c2c18 = FUN_0151c860();
        _DAT_027c2c10 = "_startQuarterCache";
        _DAT_027c2c20 = 0;
        _DAT_027c2c28 = 0x7101;
        _DAT_027c2c30 = "GNFraction";
        _DAT_027c2c38 = 0;
        uRam00000000027c2c40 = 0;
        _DAT_027c2c48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0x100000000;
  lVar9 = FUN_0151c860();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c2c98 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c2c60 = FUN_0151c860();
        _DAT_027c2c58 = "_endQuarterCache";
        _DAT_027c2c68 = 0;
        _DAT_027c2c70 = 0x7101;
        _DAT_027c2c78 = "GNFraction";
        _DAT_027c2c80 = 0;
        uRam00000000027c2c88 = 0;
        _DAT_027c2c90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_0151c860();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0151ceb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  return;
}


