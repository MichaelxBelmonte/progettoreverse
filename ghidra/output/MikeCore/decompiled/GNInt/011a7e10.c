// Function: FUN_011a7e10
// Address: 011a7e10
// Size: 518 bytes
// Class: GNInt
// String references:
//   "float"
//   "GNInt"
//   "MUScaleTuning"
//   "_cent"
//   "_westernStandardPitchIndexOffset"
//   "_intervals"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a7e10(void)

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
  char *pcVar10;
  
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
  *unaff_RDI = &DAT_025ffd60;
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011a7c20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b04d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b04a0 = FUN_011a7c20();
        _DAT_027b0498 = "_cent";
        _DAT_027b04a8 = 0;
        _DAT_027b04b0 = 0x6600;
        _DAT_027b04b8 = "float";
        _DAT_027b04c0 = 0;
        uRam00000000027b04c8 = 0;
        _DAT_027b04d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_011a7c20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b0520 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b04e8 = FUN_011a7c20();
        _DAT_027b04e0 = "_westernStandardPitchIndexOffset";
        _DAT_027b04f0 = 0;
        _DAT_027b04f8 = 0x6900;
        _DAT_027b0500 = "GNInt";
        _DAT_027b0508 = 0;
        uRam00000000027b0510 = 0;
        _DAT_027b0518 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_011a7c20();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a8050();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_intervals";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleTuning");
  }
  return;
}


