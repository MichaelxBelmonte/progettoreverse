// Reconstructed implementation of GNView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNView.h"

// ============================================================
// @0084ee20 — 10003 bytes
// str: ""bool""
// str: ""float""
// str: ""GNView""
// str: ""GNTextField""
// str: ""GNPullDownButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084ee20(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00839940();
  unaff_RDI[0x2d] = &DAT_024c8618;
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
  unaff_RDI[0x2e] = &DAT_02645f70;
  if (DAT_02739e78 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02739e60 = "MUScaleSlideRuleViewDelegate";
      DAT_02739e70 = 0;
      _DAT_02739e68 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  unaff_RDI[0x2f] = &DAT_0263daa8;
  if (DAT_02739828 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02739810 = "MUScaleRulerHeaderPullDownButtonDelegate";
      DAT_02739820 = 0;
      _DAT_02739818 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026449b8;
  unaff_RDI[2] = &DAT_02645458;
  unaff_RDI[0x27] = &DAT_02645498;
  unaff_RDI[0x2d] = &DAT_026454e8;
  unaff_RDI[0x2e] = &DAT_02645518;
  unaff_RDI[0x2f] = &DAT_02645550;
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739ec0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739e88 = FUN_00275460();
        _DAT_02739e80 = "_scaleArrayFilterFactor";
        _DAT_02739e90 = 0;
        _DAT_02739e98 = 0x6600;
        _DAT_02739ea0 = "float";
        _DAT_02739ea8 = 0;
        uRam0000000002739eb0 = 0;
        _DAT_02739eb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x184) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739f08 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739ed0 = FUN_00275460();
        _DAT_02739ec8 = "_centDisplayReferencePitchIndex";
        _DAT_02739ed8 = 0;
        _DAT_02739ee0 = 0x6900;
        _DAT_02739ee8 = "GNInt";
        _DAT_02739ef0 = 0;
        uRam0000000002739ef8 = 0;
        _DAT_02739f00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739f50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739f18 = FUN_00275460();
        _DAT_02739f10 = "_centDisplayModePlusMinus";
        _DAT_02739f20 = 0;
        _DAT_02739f28 = 0x6200;
        _DAT_02739f30 = "bool";
        _DAT_02739f38 = 0;
        uRam0000000002739f40 = 0;
        _DAT_02739f48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x18c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739f98 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739f60 = FUN_00275460();
        _DAT_02739f58 = "_pitchDisplayMode";
        _DAT_02739f68 = 0;
        _DAT_02739f70 = 0x6900;
        _DAT_02739f78 = "GNInt";
        _DAT_02739f80 = 0;
        uRam0000000002739f88 = 0;
        _DAT_02739f90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x32) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739fe0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739fa8 = FUN_00275460();
        _DAT_02739fa0 = "_selectedPitchIndex";
        _DAT_02739fb0 = 0;
        _DAT_02739fb8 = 0x6900;
        _DAT_02739fc0 = "GNInt";
        _DAT_02739fc8 = 0;
        uRam0000000002739fd0 = 0;
        _DAT_02739fd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x194) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a028 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739ff0 = FUN_00275460();
        _DAT_02739fe8 = "_clickedPitchIndex";
        _DAT_02739ff8 = 0;
        _DAT_0273a000 = 0x6900;
        _DAT_0273a008 = "GNInt";
        _DAT_0273a010 = 0;
        uRam000000000273a018 = 0;
        _DAT_0273a020 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a070 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a038 = FUN_00275460();
        _DAT_0273a030 = "_clickedPitch";
        _DAT_0273a040 = 0;
        _DAT_0273a048 = 0x6600;
        _DAT_0273a050 = "float";
        _DAT_0273a058 = 0;
        uRam000000000273a060 = 0;
        _DAT_0273a068 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x19c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a0b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a080 = FUN_00275460();
        _DAT_0273a078 = "_pitchIndexIsHit";
        _DAT_0273a088 = 0;
        _DAT_0273a090 = 0x6200;
        _DAT_0273a098 = "bool";
        _DAT_0273a0a0 = 0;
        uRam000000000273a0a8 = 0;
        _DAT_0273a0b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00851e60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleModeDegree");
  }
  *(undefined4 *)(unaff_RDI + 0x35) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a148 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a110 = FUN_00275460();
        _DAT_0273a108 = "_closestPitchIndex";
        _DAT_0273a118 = 0;
        _DAT_0273a120 = 0x6900;
        _DAT_0273a128 = "GNInt";
        _DAT_0273a130 = 0;
        uRam000000000273a138 = 0;
        _DAT_0273a140 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1ac) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a190 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a158 = FUN_00275460();
        _DAT_0273a150 = "_closestPitch";
        _DAT_0273a160 = 0;
        _DAT_0273a168 = 0x6600;
        _DAT_0273a170 = "float";
        _DAT_0273a178 = 0;
        uRam000000000273a180 = 0;
        _DAT_0273a188 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00851f50();
  *(undefined1 *)(unaff_RDI + 0x37) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a220 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a1e8 = FUN_00275460();
        _DAT_0273a1e0 = "_detectionIsCyclic";
        _DAT_0273a1f0 = 0;
        _DAT_0273a1f8 = 0x6200;
        _DAT_0273a200 = "bool";
        _DAT_0273a208 = 0;
        uRam000000000273a210 = 0;
        _DAT_0273a218 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1bc) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a268 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a230 = FUN_00275460();
        _DAT_0273a228 = "_detectionCycleSizeCent";
        _DAT_0273a238 = 0;
        _DAT_0273a240 = 0x6900;
        _DAT_0273a248 = "GNInt";
        _DAT_0273a250 = 0;
        uRam000000000273a258 = 0;
        _DAT_0273a260 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x38) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a2b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a278 = FUN_00275460();
        _DAT_0273a270 = "_detectionMinPitchCent";
        _DAT_0273a280 = 0;
        _DAT_0273a288 = 0x6900;
        _DAT_0273a290 = "GNInt";
        _DAT_0273a298 = 0;
        uRam000000000273a2a0 = 0;
        _DAT_0273a2a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c4) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a2f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a2c0 = FUN_00275460();
        _DAT_0273a2b8 = "_detectionMaxPitchCent";
        _DAT_0273a2c8 = 0;
        _DAT_0273a2d0 = 0x6900;
        _DAT_0273a2d8 = "GNInt";
        _DAT_0273a2e0 = 0;
        uRam000000000273a2e8 = 0;
        _DAT_0273a2f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00852030();
  FUN_00852110();
  *(undefined1 *)(unaff_RDI + 0x3b) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a3d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a398 = FUN_00275460();
        _DAT_0273a390 = "_applyDetectionToScale";
        _DAT_0273a3a0 = 0;
        _DAT_0273a3a8 = 0x6200;
        _DAT_0273a3b0 = "bool";
        _DAT_0273a3b8 = 0;
        uRam000000000273a3c0 = 0;
        _DAT_0273a3c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1d9) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a418 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a3e0 = FUN_00275460();
        _DAT_0273a3d8 = "_detectionInsertsChromaticIntervals";
        _DAT_0273a3e8 = 0;
        _DAT_0273a3f0 = 0x6200;
        _DAT_0273a3f8 = "bool";
        _DAT_0273a400 = 0;
        uRam000000000273a408 = 0;
        _DAT_0273a410 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1da) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a460 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a428 = FUN_00275460();
        _DAT_0273a420 = "_scaleWasJustDetected";
        _DAT_0273a430 = 0;
        _DAT_0273a438 = 0x6200;
        _DAT_0273a440 = "bool";
        _DAT_0273a448 = 0;
        uRam000000000273a450 = 0;
        _DAT_0273a458 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1dc) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a4a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a470 = FUN_00275460();
        _DAT_0273a468 = "_preferredFundamentalPitchForDetection";
        _DAT_0273a478 = 0;
        _DAT_0273a480 = 0x6600;
        _DAT_0273a488 = "float";
        _DAT_0273a490 = 0;
        uRam000000000273a498 = 0;
        _DAT_0273a4a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a4f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a4b8 = FUN_00275460();
        _DAT_0273a4b0 = "_movingTuningPitchAnchor";
        _DAT_0273a4c0 = 0;
        _DAT_0273a4c8 = 0x6200;
        _DAT_0273a4d0 = "bool";
        _DAT_0273a4d8 = 0;
        uRam000000000273a4e0 = 0;
        _DAT_0273a4e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1e1) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a538 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a500 = FUN_00275460();
        _DAT_0273a4f8 = "_setTuningPitchAnchor";
        _DAT_0273a508 = 0;
        _DAT_0273a510 = 0x6200;
        _DAT_0273a518 = "bool";
        _DAT_0273a520 = 0;
        uRam000000000273a528 = 0;
        _DAT_0273a530 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1e4) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a580 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a548 = FUN_00275460();
        _DAT_0273a540 = "_tuningPitchAnchorAnimationOffset";
        _DAT_0273a550 = 0;
        _DAT_0273a558 = 0x6600;
        _DAT_0273a560 = "float";
        _DAT_0273a568 = 0;
        uRam000000000273a570 = 0;
        _DAT_0273a578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_008521f0();
  FUN_008522d0();
  *(undefined4 *)(unaff_RDI + 0x3f) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a658 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a620 = FUN_00275460();
        _DAT_0273a618 = "_hertzScaleInAnimationLevel";
        _DAT_0273a628 = 0;
        _DAT_0273a630 = 0x6600;
        _DAT_0273a638 = "float";
        _DAT_0273a640 = 0;
        uRam000000000273a648 = 0;
        _DAT_0273a650 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1fc) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a6a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a668 = FUN_00275460();
        _DAT_0273a660 = "_hertzScaleOutAnimationLevel";
        _DAT_0273a670 = 0;
        _DAT_0273a678 = 0x6600;
        _DAT_0273a680 = "float";
        _DAT_0273a688 = 0;
        uRam000000000273a690 = 0;
        _DAT_0273a698 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x40] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a6e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a6b0 = FUN_00275460();
        _DAT_0273a6a8 = "_movingScaleIndicatorDisplayDelay";
        _DAT_0273a6b8 = 0;
        _DAT_0273a6c0 = 0x6400;
        _DAT_0273a6c8 = "GNTimeInterval";
        _DAT_0273a6d0 = 0;
        uRam000000000273a6d8 = 0;
        _DAT_0273a6e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x41) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a6f8 = FUN_00275460();
        _DAT_0273a6f0 = "_movingScaleTuning";
        _DAT_0273a700 = 0;
        _DAT_0273a708 = 0x6200;
        _DAT_0273a710 = "bool";
        _DAT_0273a718 = 0;
        uRam000000000273a720 = 0;
        _DAT_0273a728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x209) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a778 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a740 = FUN_00275460();
        _DAT_0273a738 = "_movingScaleMode";
        _DAT_0273a748 = 0;
        _DAT_0273a750 = 0x6200;
        _DAT_0273a758 = "bool";
        _DAT_0273a760 = 0;
        uRam000000000273a768 = 0;
        _DAT_0273a770 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x20a) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a7c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a788 = FUN_00275460();
        _DAT_0273a780 = "_movingDetectedScale";
        _DAT_0273a790 = 0;
        _DAT_0273a798 = 0x6200;
        _DAT_0273a7a0 = "bool";
        _DAT_0273a7a8 = 0;
        uRam000000000273a7b0 = 0;
        _DAT_0273a7b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x20c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a808 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a7d0 = FUN_00275460();
        _DAT_0273a7c8 = "_movingTuningOffset";
        _DAT_0273a7d8 = 0;
        _DAT_0273a7e0 = 0x6600;
        _DAT_0273a7e8 = "float";
        _DAT_0273a7f0 = 0;
        uRam000000000273a7f8 = 0;
        _DAT_0273a800 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x42] = 0;
  unaff_RDI[0x43] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273a850 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273a818 = FUN_00275460();
        _DAT_0273a810 = "_movingTuningRect";
        _DAT_0273a820 = 0;
        _DAT_0273a828 = 0x5200;
        _DAT_0273a830 = "GNRect";
        _DAT_0273a838 = 0;
        uRam000000000273a840 = 0;
        _DAT_0273a848 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x44] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008523b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleSlideRuleView");
  }
  unaff_RDI[0x45] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008524a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  unaff_RDI[0x46] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  unaff_RDI[0x47] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  unaff_RDI[0x48] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleRulerHeaderPullDownButton");
  }
  unaff_RDI[0x49] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPullDownButton");
  }
  unaff_RDI[0x4a] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  unaff_RDI[0x4b] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852a40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPullDownButton");
  }
  unaff_RDI[0x4c] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852b30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPullDownButton");
  }
  unaff_RDI[0x4d] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x4e] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852d10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleRulerHeaderPullDownButton");
  }
  unaff_RDI[0x4f] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852e00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  *(undefined4 *)(unaff_RDI + 0x50) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273abf8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273abc0 = FUN_00275460();
        _DAT_0273abb8 = "_slideRuleAnchorOffset";
        _DAT_0273abc8 = 0;
        _DAT_0273abd0 = 0x6600;
        _DAT_0273abd8 = "float";
        _DAT_0273abe0 = 0;
        uRam000000000273abe8 = 0;
        _DAT_0273abf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x284) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00852ef0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x51) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273ac88 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273ac50 = FUN_00275460();
        _DAT_0273ac48 = "_intervalMonitoring";
        _DAT_0273ac58 = 0;
        _DAT_0273ac60 = 0x6200;
        _DAT_0273ac68 = "bool";
        _DAT_0273ac70 = 0;
        uRam000000000273ac78 = 0;
        _DAT_0273ac80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x52] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00853060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  *(undefined4 *)(unaff_RDI + 0x53) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273ad18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273ace0 = FUN_00275460();
        _DAT_0273acd8 = "_noteSelectionColumnWidth";
        _DAT_0273ace8 = 0;
        _DAT_0273acf0 = 0x6600;
        _DAT_0273acf8 = "GNCoord";
        _DAT_0273ad00 = 0;
        uRam000000000273ad08 = 0;
        _DAT_0273ad10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x29c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273ad60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273ad28 = FUN_00275460();
        _DAT_0273ad20 = "_noteSelectionPlusScaleSelectionColumnWidth";
        _DAT_0273ad30 = 0;
        _DAT_0273ad38 = 0x6600;
        _DAT_0273ad40 = "GNCoord";
        _DAT_0273ad48 = 0;
        uRam000000000273ad50 = 0;
        _DAT_0273ad58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00853150();
  FUN_00853230();
  *(undefined1 *)(unaff_RDI + 0x56) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273ae38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273ae00 = FUN_00275460();
        _DAT_0273adf8 = "_callUpdateElementsForNewPitchSystemInSetPitchSystem";
        _DAT_0273ae08 = 0;
        _DAT_0273ae10 = 0x6200;
        _DAT_0273ae18 = "bool";
        _DAT_0273ae20 = 0;
        uRam000000000273ae28 = 0;
        _DAT_0273ae30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00853310();
  unaff_RDI[0x58] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008533f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScaleMode");
  }
  FUN_008534e0();
  *(undefined1 *)(unaff_RDI + 0x5a) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273af58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273af20 = FUN_00275460();
        _DAT_0273af18 = "_handlePreviewByHeartbeat";
        _DAT_0273af28 = 0;
        _DAT_0273af30 = 0x6200;
        _DAT_0273af38 = "bool";
        _DAT_0273af40 = 0;
        uRam000000000273af48 = 0;
        _DAT_0273af50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x5b] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008535c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePreviewController");
  }
  FUN_008536b0();
  unaff_RDI[0x5d] = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00853790();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  FUN_00853880();
  *(undefined4 *)(unaff_RDI + 0x5f) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273b0c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273b088 = FUN_00275460();
        _DAT_0273b080 = "_clickedPitchIndexBeforeRunningOpenPanel";
        _DAT_0273b090 = 0;
        _DAT_0273b098 = 0x6900;
        _DAT_0273b0a0 = "GNInt";
        _DAT_0273b0a8 = 0;
        uRam000000000273b0b0 = 0;
        _DAT_0273b0b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x2fc) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273b108 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273b0d0 = FUN_00275460();
        _DAT_0273b0c8 = "_methodsEditingPitchSystem";
        _DAT_0273b0d8 = 0;
        _DAT_0273b0e0 = 0x6901;
        _DAT_0273b0e8 = "GNInt";
        _DAT_0273b0f0 = 0;
        uRam000000000273b0f8 = 0;
        _DAT_0273b100 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00853960();
  *(undefined4 *)(unaff_RDI + 0x61) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273b198 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273b160 = FUN_00275460();
        _DAT_0273b158 = "_boxLabelFontHeight";
        _DAT_0273b168 = 0;
        _DAT_0273b170 = 0x6600;
        _DAT_0273b178 = "float";
        _DAT_0273b180 = 0;
        uRam000000000273b188 = 0;
        _DAT_0273b190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x30c) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273b1e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273b1a8 = FUN_00275460();
        _DAT_0273b1a0 = "_isScaleSelectionAvailable";
        _DAT_0273b1b0 = 0;
        _DAT_0273b1b8 = 0x6200;
        _DAT_0273b1c0 = "bool";
        _DAT_0273b1c8 = 0;
        uRam000000000273b1d0 = 0;
        _DAT_0273b1d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x62) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273b228 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273b1f0 = FUN_00275460();
        _DAT_0273b1e8 = "_previousPitchIndex";
        _DAT_0273b1f8 = 0;
        _DAT_0273b200 = 0x6900;
        _DAT_0273b208 = "GNInt";
        _DAT_0273b210 = 0;
        uRam000000000273b218 = 0;
        _DAT_0273b220 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x314) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273b270 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273b238 = FUN_00275460();
        _DAT_0273b230 = "_canExecuteDynamicJustTuning";
        _DAT_0273b240 = 0;
        _DAT_0273b248 = 0x6200;
        _DAT_0273b250 = "bool";
        _DAT_0273b258 = 0;
        uRam000000000273b260 = 0;
        _DAT_0273b268 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x315) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273b2b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273b280 = FUN_00275460();
        _DAT_0273b278 = "_isScaleTuningEditable";
        _DAT_0273b288 = 0;
        _DAT_0273b290 = 0x6200;
        _DAT_0273b298 = "bool";
        _DAT_0273b2a0 = 0;
        uRam000000000273b2a8 = 0;
        _DAT_0273b2b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x316) = 0;
  lVar2 = FUN_00275460();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273b300 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273b2c8 = FUN_00275460();
        _DAT_0273b2c0 = "_isScaleModeEditable";
        _DAT_0273b2d0 = 0;
        _DAT_0273b2d8 = 0x6200;
        _DAT_0273b2e0 = "bool";
        _DAT_0273b2e8 = 0;
        uRam000000000273b2f0 = 0;
        _DAT_0273b2f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00853a40();
  return;
}




// ============================================================
// @01aec450 — 2295 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01aeca4b) */
/* WARNING: Removing unreachable block (ram,0x01aeca57) */
/* WARNING: Removing unreachable block (ram,0x01aec877) */
/* WARNING: Removing unreachable block (ram,0x01aec883) */
/* WARNING: Removing unreachable block (ram,0x01aec9db) */
/* WARNING: Removing unreachable block (ram,0x01aec9e7) */
/* WARNING: Removing unreachable block (ram,0x01aecc5c) */
/* WARNING: Removing unreachable block (ram,0x01aecc68) */
/* WARNING: Removing unreachable block (ram,0x01aec99d) */
/* WARNING: Removing unreachable block (ram,0x01aec9a6) */
/* WARNING: Removing unreachable block (ram,0x01aec9c4) */
/* WARNING: Removing unreachable block (ram,0x01aec9cd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01aec450(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  float fVar18;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined8 in_XMM1_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  longlong *local_d8;
  char local_d0;
  undefined1 local_78 [16];
  longlong local_68;
  char local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [8];
  undefined8 uStack_40;
  
  uStack_40 = in_XMM1_Qb;
  local_48 = (undefined1  [8])param_2;
  FUN_01ad3cb0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 == 0) {
    return;
  }
  auVar19 = _local_48;
  FUN_01aec210();
  FUN_01adabe0();
  cVar5 = FUN_00d054a0();
  if (cVar5 == '\0') {
    FUN_01adad50();
    cVar5 = FUN_00d054a0();
    if (cVar5 != '\0') goto LAB_01aec622;
    if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
      auVar19._8_8_ = 0;
      auVar19._0_8_ = DAT_023dccf4;
      cVar5 = FUN_00d054a0(DAT_023dccec);
    }
    else {
      uVar8 = FUN_01e3f820();
      fVar18 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar6 == 3) {
        auVar9 = auVar19;
        FUN_01e3f820();
        auVar9 = blendps(auVar9,_DAT_0241c700,0xd);
        iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
      }
      else {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = DAT_023dccf4;
      }
      if ((iVar6 == 1) || (iVar6 == 0)) {
        auVar30._8_8_ = 0;
        auVar30._0_8_ = DAT_023dccf4;
      }
      else {
        auVar30 = auVar19;
        FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar30 = blendps(auVar30,_DAT_0241c710,0xd);
      }
      auVar10._0_4_ = auVar9._0_4_ + (float)uVar8 + auVar30._0_4_;
      auVar10._4_4_ = auVar9._4_4_ + (float)((ulonglong)uVar8 >> 0x20) + auVar30._4_4_;
      auVar10._8_4_ = auVar9._8_4_ + (float)extraout_XMM0_Qb + auVar30._8_4_;
      auVar10._12_4_ = auVar9._12_4_ + fVar18 + auVar30._12_4_;
      auVar2._8_4_ = (float)extraout_XMM0_Qb;
      auVar2._0_8_ = uVar8;
      auVar2._12_4_ = fVar18;
      auVar9 = blendps(auVar10,auVar2,2);
      auVar19 = blendps(auVar19,_DAT_0241c720,0xd);
      cVar5 = FUN_00d054a0(auVar9._0_8_);
    }
    if (cVar5 != '\0') goto LAB_01aec622;
  }
  else {
LAB_01aec622:
    FUN_01adad50();
    cVar5 = FUN_00d054a0();
    if ((cVar5 != '\0') && (*(float *)(unaff_RDI + 0x3f) == 0.0)) {
      fVar18 = *(float *)((longlong)unaff_RDI + 0x1fc);
      auVar19 = ZEXT416((uint)fVar18);
      if ((fVar18 == 0.0) && (!NAN(fVar18))) {
        if (((char)unaff_RDI[0x3c] == '\0') && (*(char *)((longlong)unaff_RDI + 0x1e1) == '\0')) {
          auVar19 = ZEXT816(0);
          if ((*(float *)((longlong)unaff_RDI + 0x1e4) == 0.0) &&
             (!NAN(*(float *)((longlong)unaff_RDI + 0x1e4)))) goto LAB_01aec784;
        }
        uVar8 = DAT_023dccec;
        if (*(int *)((longlong)unaff_RDI + 0x284) != 0) {
          uVar8 = FUN_01e3f820();
          auVar27._8_4_ = (float)extraout_XMM0_Qb_00;
          auVar27._0_8_ = uVar8;
          fVar18 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          auVar27._12_4_ = fVar18;
          iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
          if (iVar6 == 3) {
            FUN_01e3f820();
            auVar11 = blendps(auVar19,_DAT_0241c700,0xd);
            iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
          }
          else {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = DAT_023dccf4;
          }
          if ((iVar6 == 1) || (iVar6 == 0)) {
            auVar20._8_8_ = 0;
            auVar20._0_8_ = DAT_023dccf4;
          }
          else {
            FUN_01e3f820();
            if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
              FUN_01e3f820();
            }
            auVar20 = blendps(auVar19,_DAT_0241c710,0xd);
          }
          auVar12._0_4_ = auVar11._0_4_ + (float)uVar8 + auVar20._0_4_;
          auVar12._4_4_ = auVar11._4_4_ + (float)((ulonglong)uVar8 >> 0x20) + auVar20._4_4_;
          auVar12._8_4_ = auVar11._8_4_ + (float)extraout_XMM0_Qb_00 + auVar20._8_4_;
          auVar12._12_4_ = auVar11._12_4_ + fVar18 + auVar20._12_4_;
          auVar19 = blendps(auVar12,auVar27,2);
          uVar8 = auVar19._0_8_;
        }
        FUN_01aecf20(uVar8,0);
      }
    }
LAB_01aec784:
    FUN_01ae5410();
    auVar19 = _local_48;
  }
  if ((*(int *)((longlong)unaff_RDI + 0x284) == 1) || (*(int *)((longlong)unaff_RDI + 0x284) == 0))
  {
    auVar21._8_8_ = 0;
    auVar21._0_8_ = DAT_023dccf4;
    cVar5 = FUN_00d054a0(DAT_023dccec);
  }
  else {
    uVar8 = FUN_01e3f820();
    fVar18 = (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar9 = auVar19;
      FUN_01e3f820();
      auVar13 = blendps(auVar9,_DAT_0241c700,0xd);
    }
    else {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = DAT_023dccf4;
    }
    auVar14._0_4_ = auVar13._0_4_ + (float)uVar8;
    auVar14._4_4_ = auVar13._4_4_ + (float)((ulonglong)uVar8 >> 0x20);
    auVar14._8_4_ = auVar13._8_4_ + (float)extraout_XMM0_Qb_01;
    auVar14._12_4_ = auVar13._12_4_ + fVar18;
    auVar3._8_4_ = (float)extraout_XMM0_Qb_01;
    auVar3._0_8_ = uVar8;
    auVar3._12_4_ = fVar18;
    auVar9 = blendps(auVar14,auVar3,2);
    auVar21 = blendps(auVar19,_DAT_0241c710,0xd);
    cVar5 = FUN_00d054a0(auVar9._0_8_);
  }
  if (cVar5 != '\0') {
    FUN_01add020();
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
    FUN_01e3f820();
    auVar22 = blendps(auVar21,_DAT_0241c700,0xd);
  }
  else {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = DAT_023dccf4;
  }
  cVar5 = FUN_00d054a0();
  if (cVar5 != '\0') {
    FUN_01adaf60();
  }
  if ((*(char *)((longlong)unaff_RDI + 0x315) == '\0') ||
     (*(char *)((longlong)unaff_RDI + 0x316) == '\0')) {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_d8 + 0x470))();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01cfd130();
    if (local_68 == 0) {
      lVar7 = 0;
      bVar4 = false;
    }
    else {
      lVar7 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
        bVar4 = true;
      }
      else {
        bVar4 = true;
      }
    }
    if ((*(float *)(lVar7 + 0x1c) != DAT_0241bdc0) ||
       (NAN(*(float *)(lVar7 + 0x1c)) || NAN(DAT_0241bdc0))) {
      *(undefined4 *)(lVar7 + 0x1c) = 0x3eaa7efa;
      *(undefined1 *)(lVar7 + 0xf) = 0x55;
    }
    if (local_68 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    bVar4 = false;
    lVar7 = 0;
  }
  if (*(char *)((longlong)unaff_RDI + 0x315) != '\0') goto LAB_01aecc28;
  FUN_01d488d0();
  plVar1 = (longlong *)*unaff_RSI;
  if ((*(int *)((longlong)unaff_RDI + 0x284) == 1) || (*(int *)((longlong)unaff_RDI + 0x284) == 0))
  {
    auVar28._8_8_ = 0;
    auVar28._0_8_ = DAT_023dccf4;
    uVar8 = DAT_023dccec;
  }
  else {
    local_58._0_8_ = FUN_01e3f820();
    local_58._8_8_ = extraout_XMM0_Qb_02;
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      auVar19 = auVar22;
      FUN_01e3f820();
      auVar15 = blendps(auVar19,_DAT_0241c700,0xd);
    }
    else {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = DAT_023dccf4;
    }
    auVar16._0_4_ = auVar15._0_4_ + (float)local_58._0_8_;
    auVar16._4_4_ = auVar15._4_4_ + (float)((ulonglong)local_58._0_8_ >> 0x20);
    auVar16._8_4_ = auVar15._8_4_ + (float)extraout_XMM0_Qb_02;
    auVar16._12_4_ = auVar15._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
    auVar19 = blendps(auVar16,local_58,2);
    uVar8 = auVar19._0_8_;
    auVar28 = blendps(auVar22,_DAT_0241c710,0xd);
  }
  fVar18 = auVar28._0_4_;
  auVar23._4_12_ = auVar28._4_12_;
  auVar23._0_4_ = fVar18 * DAT_0239011c;
  if ((fVar18 == 0.0) && (!NAN(fVar18))) {
    auVar23 = auVar28;
  }
  (**(code **)(*plVar1 + 0x3b0))(uVar8);
  plVar1 = (longlong *)*unaff_RSI;
  if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
    FUN_01e3f820();
    auVar24 = blendps(auVar23,_DAT_0241c700,0xd);
  }
  else {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = DAT_023dccf4;
  }
  (**(code **)(*plVar1 + 0x3b0))();
  plVar1 = (longlong *)*unaff_RSI;
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = DAT_023dccf4;
    uVar8 = DAT_023dccec;
  }
  else {
    local_78._0_8_ = FUN_01e3f820();
    local_78._8_8_ = extraout_XMM0_Qb_03;
    iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
    auVar19 = auVar24;
    if (iVar6 == 3) {
      FUN_01e3f820();
      _local_48 = blendps(auVar19,_DAT_0241c700,0xd);
      iVar6 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar6 == 1) goto LAB_01aecbbf;
LAB_01aecbbb:
      if (iVar6 == 0) goto LAB_01aecbbf;
      FUN_01e3f820();
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar29 = blendps(auVar19,_DAT_0241c710,0xd);
    }
    else {
      uStack_40 = 0;
      local_48 = (undefined1  [8])DAT_023dccf4;
      if (iVar6 != 1) goto LAB_01aecbbb;
LAB_01aecbbf:
      auVar29._8_8_ = 0;
      auVar29._0_8_ = DAT_023dccf4;
    }
    auVar17._0_4_ = (float)local_48._0_4_ + (float)local_78._0_8_ + auVar29._0_4_;
    auVar17._4_4_ =
         (float)local_48._4_4_ + (float)((ulonglong)local_78._0_8_ >> 0x20) + auVar29._4_4_;
    auVar17._8_4_ = (float)uStack_40 + (float)extraout_XMM0_Qb_03 + auVar29._8_4_;
    auVar17._12_4_ =
         uStack_40._4_4_ + (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20) + auVar29._12_4_;
    auVar19 = blendps(auVar17,local_78,2);
    auVar22 = blendps(auVar24,_DAT_0241c720,0xd);
    uVar8 = auVar19._0_8_;
  }
  (**(code **)(*plVar1 + 0x3b0))(uVar8);
LAB_01aecc28:
  if (*(char *)((longlong)unaff_RDI + 0x316) == '\0') {
    FUN_01d488d0();
    plVar1 = (longlong *)*unaff_RSI;
    if ((*(int *)((longlong)unaff_RDI + 0x284) != 1) && (*(int *)((longlong)unaff_RDI + 0x284) != 0)
       ) {
      local_58._0_8_ = FUN_01e3f820();
      local_58._8_8_ = extraout_XMM0_Qb_04;
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        auVar19 = auVar22;
        FUN_01e3f820();
        auVar25 = blendps(auVar19,_DAT_0241c700,0xd);
      }
      else {
        auVar25._8_8_ = 0;
        auVar25._0_8_ = DAT_023dccf4;
      }
      auVar26._0_4_ = auVar25._0_4_ + (float)local_58._0_8_;
      auVar26._4_4_ = auVar25._4_4_ + (float)((ulonglong)local_58._0_8_ >> 0x20);
      auVar26._8_4_ = auVar25._8_4_ + (float)extraout_XMM0_Qb_04;
      auVar26._12_4_ = auVar25._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20);
      blendps(auVar26,local_58,2);
      blendps(auVar22,_DAT_0241c710,0xd);
    }
    (**(code **)(*plVar1 + 0x3b0))();
  }
  if ((bVar4) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b21660 — 1960 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b21d83) */
/* WARNING: Removing unreachable block (ram,0x01b21d8f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b21660(double param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  float fVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 local_58 [16];
  longlong local_30;
  char local_28;
  
  if ((((char)unaff_RDI[0x41] != '\0') || (*(char *)((longlong)unaff_RDI + 0x209) != '\0')) ||
     (*(char *)((longlong)unaff_RDI + 0x20a) != '\0')) {
    auVar10._0_8_ = (double)unaff_RDI[0x40] - param_1;
    auVar10._8_8_ = 0;
    unaff_RDI[0x40] = (longlong)auVar10._0_8_;
    if (auVar10._0_8_ <= 0.0) {
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x2d != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      uVar6 = DAT_023dccec;
      if (*(char *)((longlong)unaff_RDI + 0x20a) == '\0') {
        if ((iVar4 != 1) && (iVar4 != 0)) {
          uVar6 = FUN_01e3f820();
          auVar9._8_8_ = extraout_XMM0_Qb_01;
          auVar9._0_8_ = uVar6;
          if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
            auVar7 = auVar10;
            FUN_01e3f820();
            auVar7 = blendps(auVar7,_DAT_0241c700,0xd);
          }
          else {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = DAT_023dccf4;
          }
          auVar8._0_4_ = auVar7._0_4_ + (float)uVar6;
          auVar8._4_4_ = auVar7._4_4_ + (float)((ulonglong)uVar6 >> 0x20);
          auVar8._8_4_ = auVar7._8_4_ + (float)extraout_XMM0_Qb_01;
          auVar8._12_4_ = auVar7._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
          auVar9 = blendps(auVar8,auVar9,2);
          blendps(auVar10,_DAT_0241c710,0xd);
          uVar6 = auVar9._0_8_;
        }
      }
      else if (iVar4 == 3) {
        uVar6 = FUN_01e3f820();
        blendps(auVar10,_DAT_0241c700,0xd);
      }
      (**(code **)(*unaff_RDI + 0x618))(uVar6);
    }
  }
  fVar5 = *(float *)((longlong)unaff_RDI + 0x1e4);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    if ((float)(_DAT_02390140 & (uint)fVar5) <= DAT_02390124) {
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x2d != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      *(undefined4 *)((longlong)unaff_RDI + 0x1e4) = 0;
      (**(code **)(*unaff_RDI + 0x620))();
      FUN_01b08e50();
      *(undefined1 *)((longlong)unaff_RDI + 0x1e1) = 0;
      return;
    }
    *(float *)((longlong)unaff_RDI + 0x1e4) = DAT_02390118 * fVar5 + fVar5;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  fVar5 = *(float *)(unaff_RDI + 0x3f);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    if ((fVar5 == DAT_02390124) && (!NAN(fVar5) && !NAN(DAT_02390124))) {
      *(undefined4 *)(unaff_RDI + 0x3f) = 0x3f733333;
      fVar5 = DAT_02394234;
    }
    if (DAT_024119e0 < (double)fVar5) {
      fVar5 = fVar5 - ((DAT_02390124 - fVar5) + (DAT_02390124 - fVar5));
    }
    else {
      fVar5 = fVar5 * DAT_0239011c;
    }
    *(float *)(unaff_RDI + 0x3f) = fVar5;
    local_58._0_8_ = DAT_023934c8;
    local_58._8_8_ = 0;
    if ((double)fVar5 < DAT_023934c8) {
      *(undefined4 *)(unaff_RDI + 0x3f) = 0;
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x2d != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01adabe0();
    FUN_01adad50();
    FUN_00d052e0();
    if (*(int *)((longlong)unaff_RDI + 0x284) != 0) {
      auVar10 = local_58;
      uVar6 = FUN_01e3f820();
      fVar5 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar4 == 3) {
        auVar9 = auVar10;
        FUN_01e3f820();
        auVar11 = blendps(auVar9,_DAT_0241c700,0xd);
        iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      }
      else {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = DAT_023dccf4;
      }
      if ((iVar4 == 1) || (iVar4 == 0)) {
        auVar15._8_8_ = 0;
        auVar15._0_8_ = DAT_023dccf4;
      }
      else {
        FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar15 = blendps(local_58,_DAT_0241c710,0xd);
      }
      auVar12._0_4_ = auVar11._0_4_ + (float)uVar6 + auVar15._0_4_;
      auVar12._4_4_ = auVar11._4_4_ + (float)((ulonglong)uVar6 >> 0x20) + auVar15._4_4_;
      auVar12._8_4_ = auVar11._8_4_ + (float)extraout_XMM0_Qb + auVar15._8_4_;
      auVar12._12_4_ = auVar11._12_4_ + fVar5 + auVar15._12_4_;
      auVar1._8_4_ = (float)extraout_XMM0_Qb;
      auVar1._0_8_ = uVar6;
      auVar1._12_4_ = fVar5;
      blendps(auVar12,auVar1,2);
      blendps(auVar10,_DAT_0241c720,0xd);
    }
    FUN_00d052e0();
    (**(code **)(*unaff_RDI + 0x618))();
  }
  fVar5 = *(float *)((longlong)unaff_RDI + 0x1fc);
  if ((fVar5 != 0.0) || (NAN(fVar5))) {
    fVar5 = fVar5 * DAT_0239011c;
    *(float *)((longlong)unaff_RDI + 0x1fc) = fVar5;
    local_58._0_8_ = DAT_023934c8;
    local_58._8_8_ = 0;
    if ((double)fVar5 < DAT_023934c8) {
      *(undefined4 *)((longlong)unaff_RDI + 0x1fc) = 0;
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x2d] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x2d != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x2d] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01adabe0();
    FUN_01adad50();
    FUN_00d052e0();
    if (*(int *)((longlong)unaff_RDI + 0x284) != 0) {
      auVar10 = local_58;
      uVar6 = FUN_01e3f820();
      fVar5 = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar4 == 3) {
        auVar9 = auVar10;
        FUN_01e3f820();
        auVar13 = blendps(auVar9,_DAT_0241c700,0xd);
        iVar4 = *(int *)((longlong)unaff_RDI + 0x284);
      }
      else {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = DAT_023dccf4;
      }
      if ((iVar4 == 1) || (iVar4 == 0)) {
        auVar16._8_8_ = 0;
        auVar16._0_8_ = DAT_023dccf4;
      }
      else {
        FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar16 = blendps(local_58,_DAT_0241c710,0xd);
      }
      auVar14._0_4_ = auVar13._0_4_ + (float)uVar6 + auVar16._0_4_;
      auVar14._4_4_ = auVar13._4_4_ + (float)((ulonglong)uVar6 >> 0x20) + auVar16._4_4_;
      auVar14._8_4_ = auVar13._8_4_ + (float)extraout_XMM0_Qb_00 + auVar16._8_4_;
      auVar14._12_4_ = auVar13._12_4_ + fVar5 + auVar16._12_4_;
      auVar2._8_4_ = (float)extraout_XMM0_Qb_00;
      auVar2._0_8_ = uVar6;
      auVar2._12_4_ = fVar5;
      blendps(auVar14,auVar2,2);
      blendps(auVar10,_DAT_0241c720,0xd);
    }
    FUN_00d052e0();
    (**(code **)(*unaff_RDI + 0x618))();
  }
  if ((char)unaff_RDI[0x5a] != '\0') {
    fVar5 = (float)FUN_01aade90();
    if ((DAT_02390124 <= fVar5) || (cVar3 = FUN_01aa7eb0(), cVar3 == '\0')) {
      (**(code **)(*unaff_RDI + 0x9b8))();
    }
    else if ((longlong *)unaff_RDI[0x5d] != (longlong *)0x0) {
      (**(code **)(*(longlong *)unaff_RDI[0x5d] + 0x928))();
    }
  }
  return;
}



