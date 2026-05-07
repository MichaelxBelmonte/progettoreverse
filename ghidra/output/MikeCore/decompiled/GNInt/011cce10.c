// Function: FUN_011cce10
// Address: 011cce10
// Size: 1046 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_cache"
//   "GNInt"
//   "_isValid"
//   "_segmentSize"
//   "_segmentOffset"
//   "MUTrackTimeSegment"
//   "_maximumElementRendererCount"
//   "_maximumElementRendererCountIsValid"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011cce10(void)

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
  *unaff_RDI = &DAT_025ebc18;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b8338 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8300 = FUN_011ccba0();
        _DAT_027b82f8 = "_isValid";
        _DAT_027b8308 = 0;
        _DAT_027b8310 = 0x6211;
        _DAT_027b8318 = "bool";
        _DAT_027b8320 = 0;
        uRam00000000027b8328 = 0;
        _DAT_027b8330 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b8380 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8348 = FUN_011ccba0();
        _DAT_027b8340 = "_segmentSize";
        _DAT_027b8350 = 0;
        _DAT_027b8358 = 0x6901;
        _DAT_027b8360 = "GNInt";
        _DAT_027b8368 = 0;
        uRam00000000027b8370 = 0;
        _DAT_027b8378 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b83c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8390 = FUN_011ccba0();
        _DAT_027b8388 = "_segmentOffset";
        _DAT_027b8398 = 0;
        _DAT_027b83a0 = 0x6901;
        _DAT_027b83a8 = "GNInt";
        _DAT_027b83b0 = 0;
        uRam00000000027b83b8 = 0;
        _DAT_027b83c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cd2e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_cache";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackTimeSegment");
  }
  FUN_011cd3d0();
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b84a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b8468 = FUN_011ccba0();
        _DAT_027b8460 = "_maximumElementRendererCount";
        _DAT_027b8470 = 0;
        _DAT_027b8478 = 0x6901;
        _DAT_027b8480 = "GNInt";
        _DAT_027b8488 = 0;
        uRam00000000027b8490 = 0;
        _DAT_027b8498 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b84e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b84b0 = FUN_011ccba0();
        _DAT_027b84a8 = "_maximumElementRendererCountIsValid";
        _DAT_027b84b8 = 0;
        _DAT_027b84c0 = 0x6201;
        _DAT_027b84c8 = "bool";
        _DAT_027b84d0 = 0;
        uRam00000000027b84d8 = 0;
        _DAT_027b84e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


