// Function: FUN_0053f150
// Address: 0053f150
// Size: 2125 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUDocument"
//   "_volume"
//   "_pitch"
//   "_pitchRange"
//   "_formant"
//   "_formantRange"
//   "MEPluginReplaceRangeContainer"
//   "_wasImported"
//   "_amplitudeScaleFactor"
//   "_visibleTimeRangeLocation"
//   "_visibleTimeRangeLength"
//   "_visiblePitchRangeLocation"
//   "_visiblePitchRangeLength"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0053f150(void)

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
  *unaff_RDI = &DAT_0250f0e0;
  unaff_RDI[7] = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0053faf0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MEPluginReplaceRangeContainer");
  }
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c3b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c380 = FUN_0053ef40();
        _DAT_0270c378 = "_wasImported";
        _DAT_0270c388 = 0;
        _DAT_0270c390 = 0x6210;
        _DAT_0270c398 = "bool";
        _DAT_0270c3a0 = 0;
        uRam000000000270c3a8 = 0;
        _DAT_0270c3b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0053fbe0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDocument");
  }
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c448 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c410 = FUN_0053ef40();
        _DAT_0270c408 = "_pitch";
        _DAT_0270c418 = 0;
        _DAT_0270c420 = 0x6610;
        _DAT_0270c428 = "float";
        _DAT_0270c430 = 0;
        uRam000000000270c438 = 0;
        _DAT_0270c440 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c490 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c458 = FUN_0053ef40();
        _DAT_0270c450 = "_volume";
        _DAT_0270c460 = 0;
        _DAT_0270c468 = 0x6610;
        _DAT_0270c470 = "float";
        _DAT_0270c478 = 0;
        uRam000000000270c480 = 0;
        _DAT_0270c488 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c4d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c4a0 = FUN_0053ef40();
        _DAT_0270c498 = "_formant";
        _DAT_0270c4a8 = 0;
        _DAT_0270c4b0 = 0x6610;
        _DAT_0270c4b8 = "float";
        _DAT_0270c4c0 = 0;
        uRam000000000270c4c8 = 0;
        _DAT_0270c4d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c520 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c4e8 = FUN_0053ef40();
        _DAT_0270c4e0 = "_formantRange";
        _DAT_0270c4f0 = 0;
        _DAT_0270c4f8 = 0x6610;
        _DAT_0270c500 = "float";
        _DAT_0270c508 = 0;
        uRam000000000270c510 = 0;
        _DAT_0270c518 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c568 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c530 = FUN_0053ef40();
        _DAT_0270c528 = "_pitchRange";
        _DAT_0270c538 = 0;
        _DAT_0270c540 = 0x6610;
        _DAT_0270c548 = "float";
        _DAT_0270c550 = 0;
        uRam000000000270c558 = 0;
        _DAT_0270c560 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 100) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c5b0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c578 = FUN_0053ef40();
        _DAT_0270c570 = "_amplitudeScaleFactor";
        _DAT_0270c580 = 0;
        _DAT_0270c588 = 0x6610;
        _DAT_0270c590 = "float";
        _DAT_0270c598 = 0;
        uRam000000000270c5a0 = 0;
        _DAT_0270c5a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c5f8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c5c0 = FUN_0053ef40();
        _DAT_0270c5b8 = "_visibleTimeRangeLocation";
        _DAT_0270c5c8 = 0;
        _DAT_0270c5d0 = 0x6410;
        _DAT_0270c5d8 = "double";
        _DAT_0270c5e0 = 0;
        uRam000000000270c5e8 = 0;
        _DAT_0270c5f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c640 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c608 = FUN_0053ef40();
        _DAT_0270c600 = "_visibleTimeRangeLength";
        _DAT_0270c610 = 0;
        _DAT_0270c618 = 0x6410;
        _DAT_0270c620 = "double";
        _DAT_0270c628 = 0;
        uRam000000000270c630 = 0;
        _DAT_0270c638 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c688 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c650 = FUN_0053ef40();
        _DAT_0270c648 = "_visiblePitchRangeLocation";
        _DAT_0270c658 = 0;
        _DAT_0270c660 = 0x6610;
        _DAT_0270c668 = "float";
        _DAT_0270c670 = 0;
        uRam000000000270c678 = 0;
        _DAT_0270c680 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar9 = FUN_0053ef40();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0270c6d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0270c698 = FUN_0053ef40();
        _DAT_0270c690 = "_visiblePitchRangeLength";
        _DAT_0270c6a0 = 0;
        _DAT_0270c6a8 = 0x6610;
        _DAT_0270c6b0 = "float";
        _DAT_0270c6b8 = 0;
        uRam000000000270c6c0 = 0;
        _DAT_0270c6c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


