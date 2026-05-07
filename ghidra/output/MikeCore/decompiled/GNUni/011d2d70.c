// Function: FUN_011d2d70
// Address: 011d2d70
// Size: 770 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUElement"
//   "GNInt"
//   "MUTrackElementsCache"
//   "_timeSegments"
//   "_maximumElementRendererCount"
//   "_maximumElementRendererCountIsValid"
//   "_index"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011d2d70(void)

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
  *unaff_RDI = &DAT_025ec690;
  unaff_RDI[7] = 0;
  lVar9 = FUN_011d2b00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011d30f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_011d2b00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b8f80 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8f48 = FUN_011d2b00();
        _DAT_027b8f40 = "_index";
        _DAT_027b8f50 = 0;
        _DAT_027b8f58 = 0x6911;
        _DAT_027b8f60 = "GNInt";
        _DAT_027b8f68 = 0;
        uRam00000000027b8f70 = 0;
        _DAT_027b8f78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_011d2b00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011d31e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_timeSegments";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackElementsCache");
  }
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_011d2b00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b9010 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8fd8 = FUN_011d2b00();
        _DAT_027b8fd0 = "_maximumElementRendererCount";
        _DAT_027b8fe0 = 0;
        _DAT_027b8fe8 = 0x6901;
        _DAT_027b8ff0 = "GNInt";
        _DAT_027b8ff8 = 0;
        uRam00000000027b9000 = 0;
        _DAT_027b9008 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_011d2b00();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b9058 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b9020 = FUN_011d2b00();
        _DAT_027b9018 = "_maximumElementRendererCountIsValid";
        _DAT_027b9028 = 0;
        _DAT_027b9030 = 0x6201;
        _DAT_027b9038 = "bool";
        _DAT_027b9040 = 0;
        uRam00000000027b9048 = 0;
        _DAT_027b9050 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


