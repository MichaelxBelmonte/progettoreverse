// Function: FUN_0084ee20
// Address: 0084ee20
// Size: 10003 bytes
// Class: GNView
// String references:
//   "bool"
//   "float"
//   "GNView"
//   "GNTextField"
//   "GNPullDownButton"
//   "GNRect"
//   "GNButton"
//   "GNSlider"
//   "GNHeartbeatHandler"
//   "MUScaleMode"
//   "GNCoord"
//   "GNTimeInterval"
//   "_pitchDisplayMode"
//   "MUScaleSlideRuleView"
//   "_isScaleTuningEditable"
//   "_isScaleModeEditable"
//   "MUScalePreviewController"
//   "_selectedPitchIndex"
//   "MUScaleRulerHeaderPullDownButton"
//   "MUScaleRulerHeaderPullDownButtonDelegate"
//   ... +42 more


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


