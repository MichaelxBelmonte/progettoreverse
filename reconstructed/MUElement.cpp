// Reconstructed implementation of MUElement
// From MikeCore binary — reverse-engineered pseudocode

#include "MUElement.h"

// ============================================================
// @01181260 — 1771 bytes
// str: ""bool""
// str: ""float""
// str: ""MUElement""
// str: ""_noteRealization""
// str: ""MUNote""
// ============================================================

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




// ============================================================
// @0082db10 — 1738 bytes
// str: ""bool""
// str: ""MUElement""
// str: ""GNPropertyObserver""
// str: ""MUAudioSourceComponent""
// str: ""_showsLeftSeparator""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082db10(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0059c6c0();
  unaff_RDI[0x2d] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026251e0;
  unaff_RDI[2] = &DAT_02625b68;
  unaff_RDI[0x27] = &DAT_02625ba8;
  unaff_RDI[0x2d] = &DAT_02625bd8;
  unaff_RDI[0x2e] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0x2f] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0x30] = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceComponent");
  }
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02734568 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734530 = FUN_0082d880();
        _DAT_02734528 = "_showsLeftSeparator";
        _DAT_02734538 = 0;
        _DAT_02734540 = 0x6200;
        _DAT_02734548 = "bool";
        _DAT_02734550 = 0;
        uRam0000000002734558 = 0;
        _DAT_02734560 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x189) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027345b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734578 = FUN_0082d880();
        _DAT_02734570 = "_feedbacksEditing";
        _DAT_02734580 = 0;
        _DAT_02734588 = 0x6200;
        _DAT_02734590 = "bool";
        _DAT_02734598 = 0;
        uRam00000000027345a0 = 0;
        _DAT_027345a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x18a) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027345f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027345c0 = FUN_0082d880();
        _DAT_027345b8 = "_showsLeftDisjoinArrows";
        _DAT_027345c8 = 0;
        _DAT_027345d0 = 0x6200;
        _DAT_027345d8 = "bool";
        _DAT_027345e0 = 0;
        uRam00000000027345e8 = 0;
        _DAT_027345f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x18b) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02734640 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734608 = FUN_0082d880();
        _DAT_02734600 = "_showsRightDisjoinArrows";
        _DAT_02734610 = 0;
        _DAT_02734618 = 0x6200;
        _DAT_02734620 = "bool";
        _DAT_02734628 = 0;
        uRam0000000002734630 = 0;
        _DAT_02734638 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x18c) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02734688 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734650 = FUN_0082d880();
        _DAT_02734648 = "_selected";
        _DAT_02734658 = 0;
        _DAT_02734660 = 0x6200;
        _DAT_02734668 = "bool";
        _DAT_02734670 = 0;
        uRam0000000002734678 = 0;
        _DAT_02734680 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x32) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027346d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02734698 = FUN_0082d880();
        _DAT_02734690 = "_feedbackDisconnected";
        _DAT_027346a0 = 0;
        _DAT_027346a8 = 0x6900;
        _DAT_027346b0 = "GNInt";
        _DAT_027346b8 = 0;
        uRam00000000027346c0 = 0;
        _DAT_027346c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x194) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02734718 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027346e0 = FUN_0082d880();
        _DAT_027346d8 = "_flagsDirty";
        _DAT_027346e8 = 0;
        _DAT_027346f0 = 0x6200;
        _DAT_027346f8 = "bool";
        _DAT_02734700 = 0;
        uRam0000000002734708 = 0;
        _DAT_02734710 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_0082d880();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0082e630();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @0084d700 — 1572 bytes
// str: ""MUElement""
// str: ""MUTrack""
// str: ""GNHeartbeatHandler""
// str: ""MUScalePitchSystem""
// str: ""GNTimeInterval""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084d700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_0084c490();
  unaff_RDI[7] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02642358;
  unaff_RDI[7] = &DAT_02642700;
  puVar4 = unaff_RDI + 8;
  unaff_RDI[8] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084df00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePitchSystem",param_3,param_4,puVar4);
  }
  FUN_0084dff0();
  unaff_RDI[10] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e1c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e2b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739578 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739540 = FUN_0084c260();
        _DAT_02739538 = "_intervalPreviewStartDelay";
        _DAT_02739548 = 0;
        _DAT_02739550 = 0x6400;
        _DAT_02739558 = "GNTimeInterval";
        _DAT_02739560 = 0;
        uRam0000000002739568 = 0;
        _DAT_02739570 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027395c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739588 = FUN_0084c260();
        _DAT_02739580 = "_referencePitchIndex";
        _DAT_02739590 = 0;
        _DAT_02739598 = 0x6900;
        _DAT_027395a0 = "GNInt";
        _DAT_027395a8 = 0;
        uRam00000000027395b0 = 0;
        _DAT_027395b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739608 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027395d0 = FUN_0084c260();
        _DAT_027395c8 = "_selectedPitchIndex";
        _DAT_027395d8 = 0;
        _DAT_027395e0 = 0x6900;
        _DAT_027395e8 = "GNInt";
        _DAT_027395f0 = 0;
        uRam00000000027395f8 = 0;
        _DAT_02739600 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739650 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739618 = FUN_0084c260();
        _DAT_02739610 = "_startTime";
        _DAT_02739620 = 0;
        _DAT_02739628 = 0x6400;
        _DAT_02739630 = "double";
        _DAT_02739638 = 0;
        uRam0000000002739640 = 0;
        _DAT_02739648 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739698 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739660 = FUN_0084c260();
        _DAT_02739658 = "_stopTime";
        _DAT_02739668 = 0;
        _DAT_02739670 = 0x6400;
        _DAT_02739678 = "double";
        _DAT_02739680 = 0;
        uRam0000000002739688 = 0;
        _DAT_02739690 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  return;
}




// ============================================================
// @0086a790 — 933 bytes
// str: ""bool""
// str: ""MUElement""
// str: ""GNPropertyObserver""
// str: ""_timeHandleViews""
// str: ""_inRegionCheck""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0086a790(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0059c6c0();
  unaff_RDI[0x2d] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02637f18;
  unaff_RDI[2] = &DAT_026388a8;
  unaff_RDI[0x27] = &DAT_026388e8;
  unaff_RDI[0x2d] = &DAT_02638918;
  unaff_RDI[0x2e] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ac60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0x2f] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ad50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_timeHandleViews";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeHandleTool");
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273eb08 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273ead0 = FUN_0086a390();
        _DAT_0273eac8 = "_toolMode";
        _DAT_0273ead8 = 0;
        _DAT_0273eae0 = 0x6901;
        _DAT_0273eae8 = "GNInt";
        _DAT_0273eaf0 = 0;
        uRam000000000273eaf8 = 0;
        _DAT_0273eb00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x31] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ae40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunctionPoint");
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086af30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunctionPoint");
  }
  *(undefined1 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273ebe0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273eba8 = FUN_0086a390();
        _DAT_0273eba0 = "_inRegionCheck";
        _DAT_0273ebb0 = 0;
        _DAT_0273ebb8 = 0x6200;
        _DAT_0273ebc0 = "bool";
        _DAT_0273ebc8 = 0;
        uRam000000000273ebd0 = 0;
        _DAT_0273ebd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @011cbec0 — 724 bytes
// str: ""MUElement""
// str: ""MUTrack""
// str: ""double""
// str: ""GNInt""
// str: ""_performanceTime""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011cbec0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_010f86d0();
  *unaff_RDI = &DAT_025dead0;
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b7f58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b7f20 = FUN_000fe4b0();
        _DAT_027b7f18 = "_startMargin";
        _DAT_027b7f28 = 0;
        _DAT_027b7f30 = 0x6900;
        _DAT_027b7f38 = "GNInt";
        _DAT_027b7f40 = 0;
        uRam00000000027b7f48 = 0;
        _DAT_027b7f50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b7fa0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b7f68 = FUN_000fe4b0();
        _DAT_027b7f60 = "_endMargin";
        _DAT_027b7f70 = 0;
        _DAT_027b7f78 = 0x6900;
        _DAT_027b7f80 = "GNInt";
        _DAT_027b7f88 = 0;
        uRam00000000027b7f90 = 0;
        _DAT_027b7f98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b7fe8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b7fb0 = FUN_000fe4b0();
        _DAT_027b7fa8 = "_performanceTime";
        _DAT_027b7fb8 = 0;
        _DAT_027b7fc0 = 0x6400;
        _DAT_027b7fc8 = "double";
        _DAT_027b7fd0 = 0;
        uRam00000000027b7fd8 = 0;
        _DAT_027b7fe0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011cc270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_000fe4b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011cc360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  return;
}




// ============================================================
// @00869410 — 594 bytes
// ============================================================

void FUN_00869410(void)

{
  undefined8 *unaff_RDI;
  
  *unaff_RDI = &DAT_0266bec8;
  unaff_RDI[2] = &DAT_0266c900;
  unaff_RDI[0x27] = &DAT_0266c940;
  unaff_RDI[0x28] = &DAT_0266c990;
  if (unaff_RDI[0x5b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x5a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x59] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x58] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x57] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x56] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x54] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x4e] != 0) {
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x46] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x46] + 0x10))();
    FUN_00d50b20();
  }
  if (unaff_RDI[0x42] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x41] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x40] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x36] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x35] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x34] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x33] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x31] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x30] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2e] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2c] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x2a] != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x29] != 0) {
    FUN_00d50b20();
  }
  FUN_0006d770();
  return;
}



