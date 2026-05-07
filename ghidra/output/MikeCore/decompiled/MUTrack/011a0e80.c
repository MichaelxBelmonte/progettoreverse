// Function: FUN_011a0e80
// Address: 011a0e80
// Size: 759 bytes
// Class: MUTrack
// String references:
//   "_location"
//   "MUTrack"
//   "_duration"
//   "double"
//   "MURenderCacheData"
//   "_renderCacheSegments"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011a0e80(void)

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
  *unaff_RDI = &DAT_025c3d08;
  unaff_RDI[7] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aebb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aeb78 = FUN_011a0b60();
        _DAT_027aeb70 = "_location";
        _DAT_027aeb80 = 0;
        _DAT_027aeb88 = 0x6400;
        _DAT_027aeb90 = "double";
        _DAT_027aeb98 = 0;
        uRam00000000027aeba0 = 0;
        _DAT_027aeba8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aebf8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aebc0 = FUN_011a0b60();
        _DAT_027aebb8 = "_duration";
        _DAT_027aebc8 = 0;
        _DAT_027aebd0 = 0x6400;
        _DAT_027aebd8 = "double";
        _DAT_027aebe0 = 0;
        uRam00000000027aebe8 = 0;
        _DAT_027aebf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1230();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_renderCacheSegments";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1320();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1410();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_011a0b60();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a1500();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheData");
  }
  return;
}


