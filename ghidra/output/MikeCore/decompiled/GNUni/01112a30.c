// Function: FUN_01112a30
// Address: 01112a30
// Size: 1179 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "_points"
//   "double"
//   "MUDataPointFunction"
//   "_x"
//   "_y"
//   "_slope"
//   "_isXLocked"
//   "_isYLocked"
//   "_isOffsetToNextPointLocked"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01112a30(void)

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
  *unaff_RDI = &DAT_025ddb28;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01112390();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794758 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794720 = FUN_01112390();
        _DAT_02794718 = "_x";
        _DAT_02794728 = 0;
        _DAT_02794730 = 0x6400;
        _DAT_02794738 = "double";
        _DAT_02794740 = 0;
        uRam0000000002794748 = 0;
        _DAT_02794750 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_01112390();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027947a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794768 = FUN_01112390();
        _DAT_02794760 = "_y";
        _DAT_02794770 = 0;
        _DAT_02794778 = 0x6400;
        _DAT_02794780 = "double";
        _DAT_02794788 = 0;
        uRam0000000002794790 = 0;
        _DAT_02794798 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_01112390();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027947e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027947b0 = FUN_01112390();
        _DAT_027947a8 = "_slope";
        _DAT_027947b8 = 0;
        _DAT_027947c0 = 0x6400;
        _DAT_027947c8 = "double";
        _DAT_027947d0 = 0;
        uRam00000000027947d8 = 0;
        _DAT_027947e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_01112390();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794830 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027947f8 = FUN_01112390();
        _DAT_027947f0 = "_isXLocked";
        _DAT_02794800 = 0;
        _DAT_02794808 = 0x6200;
        _DAT_02794810 = "bool";
        _DAT_02794818 = 0;
        uRam0000000002794820 = 0;
        _DAT_02794828 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x51) = 0;
  lVar9 = FUN_01112390();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794878 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794840 = FUN_01112390();
        _DAT_02794838 = "_isYLocked";
        _DAT_02794848 = 0;
        _DAT_02794850 = 0x6200;
        _DAT_02794858 = "bool";
        _DAT_02794860 = 0;
        uRam0000000002794868 = 0;
        _DAT_02794870 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x52) = 0;
  lVar9 = FUN_01112390();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027948c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794888 = FUN_01112390();
        _DAT_02794880 = "_isOffsetToNextPointLocked";
        _DAT_02794890 = 0;
        _DAT_02794898 = 0x6200;
        _DAT_027948a0 = "bool";
        _DAT_027948a8 = 0;
        uRam00000000027948b0 = 0;
        _DAT_027948b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_01112390();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01112f50();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_points";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  return;
}


