// Function: FUN_01114900
// Address: 01114900
// Size: 3471 bytes
// Class: QualityScoring
// String references:
//   "bool"
//   "GNUni"
//   "GNFraction"
//   "_detectsChurchModes"
//   "_detectsDetailedModeChanges"
//   "GNInt"
//   "MUDataPointFunction"
//   "_detectsBassNote"
//   "_detectsChordExtensions"
//   "_omitDoubtedThirds"
//   "_detectsSingleMode"
//   "_reflectsPitchSystem"
//   "_detectsPitchSystem"
//   "_assumesLowestPitchAsRoot"
//   "_assumesClosePosition"
//   "_suggestsMissingThird"
//   "_suggestsMissingFifth"
//   "_reflectsBeatStrength"
//   "_reflectsPitch"
//   "_reflectsDynamic"
//   ... +3 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01114900(void)

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
  *unaff_RDI = &DAT_02601ab0;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794e90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794e58 = FUN_011146e0();
        _DAT_02794e50 = "_detectsBassNote";
        _DAT_02794e60 = 0;
        _DAT_02794e68 = 0x6200;
        _DAT_02794e70 = "bool";
        _DAT_02794e78 = 0;
        uRam0000000002794e80 = 0;
        _DAT_02794e88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794ed8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794ea0 = FUN_011146e0();
        _DAT_02794e98 = "_detectsChordExtensions";
        _DAT_02794ea8 = 0;
        _DAT_02794eb0 = 0x6200;
        _DAT_02794eb8 = "bool";
        _DAT_02794ec0 = 0;
        uRam0000000002794ec8 = 0;
        _DAT_02794ed0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794f20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794ee8 = FUN_011146e0();
        _DAT_02794ee0 = "_detectsChurchModes";
        _DAT_02794ef0 = 0;
        _DAT_02794ef8 = 0x6200;
        _DAT_02794f00 = "bool";
        _DAT_02794f08 = 0;
        uRam0000000002794f10 = 0;
        _DAT_02794f18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3b) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794f68 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794f30 = FUN_011146e0();
        _DAT_02794f28 = "_omitDoubtedThirds";
        _DAT_02794f38 = 0;
        _DAT_02794f40 = 0x6200;
        _DAT_02794f48 = "bool";
        _DAT_02794f50 = 0;
        uRam0000000002794f58 = 0;
        _DAT_02794f60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794fb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794f78 = FUN_011146e0();
        _DAT_02794f70 = "_detectsDetailedModeChanges";
        _DAT_02794f80 = 0;
        _DAT_02794f88 = 0x6200;
        _DAT_02794f90 = "bool";
        _DAT_02794f98 = 0;
        uRam0000000002794fa0 = 0;
        _DAT_02794fa8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3d) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794ff8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794fc0 = FUN_011146e0();
        _DAT_02794fb8 = "_detectsSingleMode";
        _DAT_02794fc8 = 0;
        _DAT_02794fd0 = 0x6200;
        _DAT_02794fd8 = "bool";
        _DAT_02794fe0 = 0;
        uRam0000000002794fe8 = 0;
        _DAT_02794ff0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01115860();
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795088 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795050 = FUN_011146e0();
        _DAT_02795048 = "_reflectsPitchSystem";
        _DAT_02795058 = 0;
        _DAT_02795060 = 0x6200;
        _DAT_02795068 = "bool";
        _DAT_02795070 = 0;
        uRam0000000002795078 = 0;
        _DAT_02795080 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027950d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795098 = FUN_011146e0();
        _DAT_02795090 = "_detectsPitchSystem";
        _DAT_027950a0 = 0;
        _DAT_027950a8 = 0x6200;
        _DAT_027950b0 = "bool";
        _DAT_027950b8 = 0;
        uRam00000000027950c0 = 0;
        _DAT_027950c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795118 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027950e0 = FUN_011146e0();
        _DAT_027950d8 = "_assumesLowestPitchAsRoot";
        _DAT_027950e8 = 0;
        _DAT_027950f0 = 0x6200;
        _DAT_027950f8 = "bool";
        _DAT_02795100 = 0;
        uRam0000000002795108 = 0;
        _DAT_02795110 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795160 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795128 = FUN_011146e0();
        _DAT_02795120 = "_assumesClosePosition";
        _DAT_02795130 = 0;
        _DAT_02795138 = 0x6200;
        _DAT_02795140 = "bool";
        _DAT_02795148 = 0;
        uRam0000000002795150 = 0;
        _DAT_02795158 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027951a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795170 = FUN_011146e0();
        _DAT_02795168 = "_suggestsMissingThird";
        _DAT_02795178 = 0;
        _DAT_02795180 = 0x6200;
        _DAT_02795188 = "bool";
        _DAT_02795190 = 0;
        uRam0000000002795198 = 0;
        _DAT_027951a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4d) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027951f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027951b8 = FUN_011146e0();
        _DAT_027951b0 = "_suggestsMissingFifth";
        _DAT_027951c0 = 0;
        _DAT_027951c8 = 0x6200;
        _DAT_027951d0 = "bool";
        _DAT_027951d8 = 0;
        uRam00000000027951e0 = 0;
        _DAT_027951e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4e) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795238 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795200 = FUN_011146e0();
        _DAT_027951f8 = "_reflectsBeatStrength";
        _DAT_02795208 = 0;
        _DAT_02795210 = 0x6200;
        _DAT_02795218 = "bool";
        _DAT_02795220 = 0;
        uRam0000000002795228 = 0;
        _DAT_02795230 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4f) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795280 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795248 = FUN_011146e0();
        _DAT_02795240 = "_reflectsPitch";
        _DAT_02795250 = 0;
        _DAT_02795258 = 0x6200;
        _DAT_02795260 = "bool";
        _DAT_02795268 = 0;
        uRam0000000002795270 = 0;
        _DAT_02795278 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027952c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795290 = FUN_011146e0();
        _DAT_02795288 = "_reflectsDynamic";
        _DAT_02795298 = 0;
        _DAT_027952a0 = 0x6200;
        _DAT_027952a8 = "bool";
        _DAT_027952b0 = 0;
        uRam00000000027952b8 = 0;
        _DAT_027952c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x51) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795310 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027952d8 = FUN_011146e0();
        _DAT_027952d0 = "_reflectsDetectionQuality";
        _DAT_027952e0 = 0;
        _DAT_027952e8 = 0x6200;
        _DAT_027952f0 = "bool";
        _DAT_027952f8 = 0;
        uRam0000000002795300 = 0;
        _DAT_02795308 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795358 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795320 = FUN_011146e0();
        _DAT_02795318 = "_extensionLimit";
        _DAT_02795328 = 0;
        _DAT_02795330 = 0x6900;
        _DAT_02795338 = "GNInt";
        _DAT_02795340 = 0;
        uRam0000000002795348 = 0;
        _DAT_02795350 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0x100000000;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027953a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795368 = FUN_011146e0();
        _DAT_02795360 = "_granularity";
        _DAT_02795370 = 0;
        _DAT_02795378 = 0x7100;
        _DAT_02795380 = "GNFraction";
        _DAT_02795388 = 0;
        uRam0000000002795390 = 0;
        _DAT_02795398 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115940();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115a30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115b20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  unaff_RDI[0xf] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  return;
}


