// Function: FUN_017770f0
// Address: 017770f0
// Size: 931 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUDataPointLinearFunction"
//   "_didRequestCacheValidation"
//   "MUScaleTuning"
//   "_stretching"
//   "_lowestStretchedPitch"
//   "_highestStretchedPitch"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_017770f0(void)

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
  *unaff_RDI = &DAT_025ff650;
  unaff_RDI[7] = 0;
  lVar9 = FUN_01a01970();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01777580();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_stretching";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuning");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_01a01970();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01777670();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointLinearFunction");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_01a01970();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01777760();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointLinearFunction");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_01a01970();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01777850();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointLinearFunction");
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_01a01970();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ce130 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ce0f8 = FUN_01a01970();
        _DAT_027ce0f0 = "_lowestStretchedPitch";
        _DAT_027ce100 = 0;
        _DAT_027ce108 = 0x6601;
        _DAT_027ce110 = "float";
        _DAT_027ce118 = 0;
        uRam00000000027ce120 = 0;
        _DAT_027ce128 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_01a01970();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ce178 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ce140 = FUN_01a01970();
        _DAT_027ce138 = "_highestStretchedPitch";
        _DAT_027ce148 = 0;
        _DAT_027ce150 = 0x6601;
        _DAT_027ce158 = "float";
        _DAT_027ce160 = 0;
        uRam00000000027ce168 = 0;
        _DAT_027ce170 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_01a01970();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ce1c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ce188 = FUN_01a01970();
        _DAT_027ce180 = "_didRequestCacheValidation";
        _DAT_027ce190 = 0;
        _DAT_027ce198 = 0x6211;
        _DAT_027ce1a0 = "bool";
        _DAT_027ce1a8 = 0;
        uRam00000000027ce1b0 = 0;
        _DAT_027ce1b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


