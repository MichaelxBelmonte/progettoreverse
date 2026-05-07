// Function: FUN_01181260
// Address: 01181260
// Size: 1771 bytes
// Class: MUElement
// String references:
//   "bool"
//   "float"
//   "MUElement"
//   "_noteRealization"
//   "MUNote"
//   "double"
//   "GNInt"
//   "_realizations"
//   "_originalAnchorTime"
//   "_timeQuantization"
//   "_originalPitchDeviation"
//   "_pitchQuantization"
//   "_pitchWasSetManually"
//   "_timeWasSetManually"
//   "_manuallySetAmpFactor"
//   "_pitchDriftWasSetManually"
//   "_westernStandardScaleSnapOffset"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01181260(void)

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
  *unaff_RDI = &DAT_025ecd90;
  unaff_RDI[7] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9330 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a92f8 = FUN_001154a0();
        _DAT_027a92f0 = "_originalAnchorTime";
        _DAT_027a9300 = 0;
        _DAT_027a9308 = 0x6400;
        _DAT_027a9310 = "double";
        _DAT_027a9318 = 0;
        uRam00000000027a9320 = 0;
        _DAT_027a9328 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9378 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9340 = FUN_001154a0();
        _DAT_027a9338 = "_timeQuantization";
        _DAT_027a9348 = 0;
        _DAT_027a9350 = 0x6400;
        _DAT_027a9358 = "double";
        _DAT_027a9360 = 0;
        uRam00000000027a9368 = 0;
        _DAT_027a9370 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a93c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9388 = FUN_001154a0();
        _DAT_027a9380 = "_originalPitchDeviation";
        _DAT_027a9390 = 0;
        _DAT_027a9398 = 0x6600;
        _DAT_027a93a0 = "float";
        _DAT_027a93a8 = 0;
        uRam00000000027a93b0 = 0;
        _DAT_027a93b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9408 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a93d0 = FUN_001154a0();
        _DAT_027a93c8 = "_pitchQuantization";
        _DAT_027a93d8 = 0;
        _DAT_027a93e0 = 0x6600;
        _DAT_027a93e8 = "float";
        _DAT_027a93f0 = 0;
        uRam00000000027a93f8 = 0;
        _DAT_027a9400 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9450 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9418 = FUN_001154a0();
        _DAT_027a9410 = "_pitchWasSetManually";
        _DAT_027a9420 = 0;
        _DAT_027a9428 = 0x6200;
        _DAT_027a9430 = "bool";
        _DAT_027a9438 = 0;
        uRam00000000027a9440 = 0;
        _DAT_027a9448 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x51) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9498 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9460 = FUN_001154a0();
        _DAT_027a9458 = "_timeWasSetManually";
        _DAT_027a9468 = 0;
        _DAT_027a9470 = 0x6200;
        _DAT_027a9478 = "bool";
        _DAT_027a9480 = 0;
        uRam00000000027a9488 = 0;
        _DAT_027a9490 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a94e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a94a8 = FUN_001154a0();
        _DAT_027a94a0 = "_manuallySetAmpFactor";
        _DAT_027a94b0 = 0;
        _DAT_027a94b8 = 0x6600;
        _DAT_027a94c0 = "float";
        _DAT_027a94c8 = 0;
        uRam00000000027a94d0 = 0;
        _DAT_027a94d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9528 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a94f0 = FUN_001154a0();
        _DAT_027a94e8 = "_pitchDriftWasSetManually";
        _DAT_027a94f8 = 0;
        _DAT_027a9500 = 0x6200;
        _DAT_027a9508 = "bool";
        _DAT_027a9510 = 0;
        uRam00000000027a9518 = 0;
        _DAT_027a9520 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027a9570 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027a9538 = FUN_001154a0();
        _DAT_027a9530 = "_westernStandardScaleSnapOffset";
        _DAT_027a9540 = 0;
        _DAT_027a9548 = 0x6900;
        _DAT_027a9550 = "GNInt";
        _DAT_027a9558 = 0;
        uRam00000000027a9560 = 0;
        _DAT_027a9568 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181a00();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_noteRealization";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_001154a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01181af0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_realizations";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNote");
  }
  return;
}


