// Function: FUN_01135410
// Address: 01135410
// Size: 8173 bytes
// Class: PitchDetection
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUElement"
//   "MUTrack"
//   "MUSampledFunction"
//   "MUFunction"
//   "MUAudioComponent"
//   "MUNoteRealization"
//   "_duration"
//   "_elements"
//   "_startTime"
//   "_element"
//   "MUDataPointLinearFunction"
//   "_isMuted"
//   "MUPulseAssignmentTarget"
//   "MUSuccessiveJoin"
//   "double"
//   "GNInt"
//   "MUAudioEffectChain"
//   ... +40 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01135410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  undefined8 *puVar11;
  
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
  *unaff_RDI = &DAT_025c7fc8;
  unaff_RDI[7] = &DAT_025eefe0;
  if (DAT_0272fca8 == '\0') {
    iVar8 = ___cxa_guard_acquire();
    if (iVar8 != 0) {
      _DAT_027902e0 = "MUPulseAssignmentTarget";
      DAT_027902f0 = 0;
      _DAT_027902e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025d14f8;
  unaff_RDI[7] = &DAT_025d18c0;
  unaff_RDI[8] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137b60();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_masterElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137c50();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_slaveElements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a2c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a290 = FUN_0006e1c0();
        _DAT_0279a288 = "_isSlaveElementValid";
        _DAT_0279a298 = 0;
        _DAT_0279a2a0 = 0x6201;
        _DAT_0279a2a8 = "bool";
        _DAT_0279a2b0 = 0;
        uRam000000000279a2b8 = 0;
        _DAT_0279a2c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x51) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a310 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a2d8 = FUN_0006e1c0();
        _DAT_0279a2d0 = "_isSlaveElementEndTimeValid";
        _DAT_0279a2e0 = 0;
        _DAT_0279a2e8 = 0x6201;
        _DAT_0279a2f0 = "bool";
        _DAT_0279a2f8 = 0;
        uRam000000000279a300 = 0;
        _DAT_0279a308 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a358 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a320 = FUN_0006e1c0();
        _DAT_0279a318 = "_isSyncingToMasterOrValidatingCaches";
        _DAT_0279a328 = 0;
        _DAT_0279a330 = 0x6901;
        _DAT_0279a338 = "GNInt";
        _DAT_0279a340 = 0;
        uRam000000000279a348 = 0;
        _DAT_0279a350 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a3a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a368 = FUN_0006e1c0();
        _DAT_0279a360 = "_decayStartPoint";
        _DAT_0279a370 = 0;
        _DAT_0279a378 = 0x6400;
        _DAT_0279a380 = "double";
        _DAT_0279a388 = 0;
        uRam000000000279a390 = 0;
        _DAT_0279a398 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a3e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a3b0 = FUN_0006e1c0();
        _DAT_0279a3a8 = "_decayEndPoint";
        _DAT_0279a3b8 = 0;
        _DAT_0279a3c0 = 0x6400;
        _DAT_0279a3c8 = "double";
        _DAT_0279a3d0 = 0;
        uRam000000000279a3d8 = 0;
        _DAT_0279a3e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xd) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137d40();
    FUN_00e87980();
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137eb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_element";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUMidiComponent");
  }
  puVar11 = unaff_RDI + 0xf;
  unaff_RDI[0xf] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01137fa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction",param_3,param_4,puVar11);
  }
  unaff_RDI[0x10] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138090();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_elements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElementRenderCluster");
  }
  unaff_RDI[0x11] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138180();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_elements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUConcurrentJoin");
  }
  unaff_RDI[0x12] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138270();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioEffectChain");
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a670 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a638 = FUN_0006e1c0();
        _DAT_0279a630 = "_pitchModulationFactor";
        _DAT_0279a640 = 0;
        _DAT_0279a648 = 0x6600;
        _DAT_0279a650 = "float";
        _DAT_0279a658 = 0;
        uRam000000000279a660 = 0;
        _DAT_0279a668 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a6b8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a680 = FUN_0006e1c0();
        _DAT_0279a678 = "_pitchDriftFactor";
        _DAT_0279a688 = 0;
        _DAT_0279a690 = 0x6600;
        _DAT_0279a698 = "float";
        _DAT_0279a6a0 = 0;
        uRam000000000279a6a8 = 0;
        _DAT_0279a6b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138360();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_precedingElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSuccessiveJoin");
  }
  unaff_RDI[0x15] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138450();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_followingElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSuccessiveJoin");
  }
  *(undefined1 *)(unaff_RDI + 0x16) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a790 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a758 = FUN_0006e1c0();
        _DAT_0279a750 = "_isMuted";
        _DAT_0279a760 = 0;
        _DAT_0279a768 = 0x6200;
        _DAT_0279a770 = "bool";
        _DAT_0279a778 = 0;
        uRam000000000279a780 = 0;
        _DAT_0279a788 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a7d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a7a0 = FUN_0006e1c0();
        _DAT_0279a798 = "_anchorPoint";
        _DAT_0279a7a8 = 0;
        _DAT_0279a7b0 = 0x6400;
        _DAT_0279a7b8 = "double";
        _DAT_0279a7c0 = 0;
        uRam000000000279a7c8 = 0;
        _DAT_0279a7d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x18] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a820 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a7e8 = FUN_0006e1c0();
        _DAT_0279a7e0 = "_releasePoint";
        _DAT_0279a7f0 = 0;
        _DAT_0279a7f8 = 0x6400;
        _DAT_0279a800 = "double";
        _DAT_0279a808 = 0;
        uRam000000000279a810 = 0;
        _DAT_0279a818 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x19] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138540();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_element";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUNoteRealization");
  }
  unaff_RDI[0x1a] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138630();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[0x1b] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138720();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioComponent");
  }
  unaff_RDI[0x1c] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138810();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_element";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioComponent");
  }
  unaff_RDI[0x1d] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a988 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a950 = FUN_0006e1c0();
        _DAT_0279a948 = "_startTime";
        _DAT_0279a958 = 0;
        _DAT_0279a960 = 0x6400;
        _DAT_0279a968 = "double";
        _DAT_0279a970 = 0;
        uRam000000000279a978 = 0;
        _DAT_0279a980 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1e] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279a9d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a998 = FUN_0006e1c0();
        _DAT_0279a990 = "_duration";
        _DAT_0279a9a0 = 0;
        _DAT_0279a9a8 = 0x6400;
        _DAT_0279a9b0 = "double";
        _DAT_0279a9b8 = 0;
        uRam000000000279a9c0 = 0;
        _DAT_0279a9c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279aa18 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279a9e0 = FUN_0006e1c0();
        _DAT_0279a9d8 = "_pitchCenter";
        _DAT_0279a9e8 = 0;
        _DAT_0279a9f0 = 0x6600;
        _DAT_0279a9f8 = "float";
        _DAT_0279aa00 = 0;
        uRam000000000279aa08 = 0;
        _DAT_0279aa10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x20] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138900();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_elements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  unaff_RDI[0x21] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011389f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElementRealtimeInfo");
  }
  *(undefined4 *)(unaff_RDI + 0x22) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279aaf0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279aab8 = FUN_0006e1c0();
        _DAT_0279aab0 = "_amplitudeFactor";
        _DAT_0279aac0 = 0;
        _DAT_0279aac8 = 0x6600;
        _DAT_0279aad0 = "float";
        _DAT_0279aad8 = 0;
        uRam000000000279aae0 = 0;
        _DAT_0279aae8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x23] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279ab38 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279ab00 = FUN_0006e1c0();
        _DAT_0279aaf8 = "_amplitudeFadeInEndSourceTime";
        _DAT_0279ab08 = 0;
        _DAT_0279ab10 = 0x6400;
        _DAT_0279ab18 = "double";
        _DAT_0279ab20 = 0;
        uRam000000000279ab28 = 0;
        _DAT_0279ab30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x24] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279ab80 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279ab48 = FUN_0006e1c0();
        _DAT_0279ab40 = "_amplitudeFadeOutStartSourceTime";
        _DAT_0279ab50 = 0;
        _DAT_0279ab58 = 0x6400;
        _DAT_0279ab60 = "double";
        _DAT_0279ab68 = 0;
        uRam000000000279ab70 = 0;
        _DAT_0279ab78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x25] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279abc8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279ab90 = FUN_0006e1c0();
        _DAT_0279ab88 = "_amplitudeFadeInShapePow";
        _DAT_0279ab98 = 0;
        _DAT_0279aba0 = 0x6400;
        _DAT_0279aba8 = "double";
        _DAT_0279abb0 = 0;
        uRam000000000279abb8 = 0;
        _DAT_0279abc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x26] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279ac10 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279abd8 = FUN_0006e1c0();
        _DAT_0279abd0 = "_amplitudeFadeOutShapePow";
        _DAT_0279abe0 = 0;
        _DAT_0279abe8 = 0x6400;
        _DAT_0279abf0 = "double";
        _DAT_0279abf8 = 0;
        uRam000000000279ac00 = 0;
        _DAT_0279ac08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279ac58 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279ac20 = FUN_0006e1c0();
        _DAT_0279ac18 = "_sibilantBalance";
        _DAT_0279ac28 = 0;
        _DAT_0279ac30 = 0x6600;
        _DAT_0279ac38 = "float";
        _DAT_0279ac40 = 0;
        uRam000000000279ac48 = 0;
        _DAT_0279ac50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x13c) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279aca0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279ac68 = FUN_0006e1c0();
        _DAT_0279ac60 = "_formantOffset";
        _DAT_0279ac70 = 0;
        _DAT_0279ac78 = 0x6600;
        _DAT_0279ac80 = "float";
        _DAT_0279ac88 = 0;
        uRam000000000279ac90 = 0;
        _DAT_0279ac98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x28] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279ace8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279acb0 = FUN_0006e1c0();
        _DAT_0279aca8 = "_attackDuration";
        _DAT_0279acb8 = 0;
        _DAT_0279acc0 = 0x6400;
        _DAT_0279acc8 = "double";
        _DAT_0279acd0 = 0;
        uRam000000000279acd8 = 0;
        _DAT_0279ace0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x29] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279ad30 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279acf8 = FUN_0006e1c0();
        _DAT_0279acf0 = "_sourceTimeForElementTimeFunctionAttackSlope";
        _DAT_0279ad00 = 0;
        _DAT_0279ad08 = 0x6400;
        _DAT_0279ad10 = "double";
        _DAT_0279ad18 = 0;
        uRam000000000279ad20 = 0;
        _DAT_0279ad28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x2a] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279ad78 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279ad40 = FUN_0006e1c0();
        _DAT_0279ad38 = "_attackSlopeFactor";
        _DAT_0279ad48 = 0;
        _DAT_0279ad50 = 0x6400;
        _DAT_0279ad58 = "double";
        _DAT_0279ad60 = 0;
        uRam000000000279ad68 = 0;
        _DAT_0279ad70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x2b] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138ae0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[0x2c] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138bd0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  unaff_RDI[0x2d] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138cc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[0x2e] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279ae98 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279ae60 = FUN_0006e1c0();
        _DAT_0279ae58 = "_fadeInTime";
        _DAT_0279ae68 = 0;
        _DAT_0279ae70 = 0x6400;
        _DAT_0279ae78 = "double";
        _DAT_0279ae80 = 0;
        uRam000000000279ae88 = 0;
        _DAT_0279ae90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x2f] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279aee0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279aea8 = FUN_0006e1c0();
        _DAT_0279aea0 = "_fadeOutTime";
        _DAT_0279aeb0 = 0;
        _DAT_0279aeb8 = 0x6400;
        _DAT_0279aec0 = "double";
        _DAT_0279aec8 = 0;
        uRam000000000279aed0 = 0;
        _DAT_0279aed8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x30) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279af28 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279aef0 = FUN_0006e1c0();
        _DAT_0279aee8 = "_sourceTimeForElementTimeFunctionExceedsDuration";
        _DAT_0279aef8 = 0;
        _DAT_0279af00 = 0x6200;
        _DAT_0279af08 = "bool";
        _DAT_0279af10 = 0;
        uRam000000000279af18 = 0;
        _DAT_0279af20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x181) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279af70 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279af38 = FUN_0006e1c0();
        _DAT_0279af30 = "_didRequestCacheValidation";
        _DAT_0279af40 = 0;
        _DAT_0279af48 = 0x6211;
        _DAT_0279af50 = "bool";
        _DAT_0279af58 = 0;
        uRam000000000279af60 = 0;
        _DAT_0279af68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x31] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138db0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointLinearFunction");
  }
  unaff_RDI[0x32] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138ea0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointLinearFunction");
  }
  unaff_RDI[0x33] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01138f90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUSampledFunction");
  }
  unaff_RDI[0x34] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01139080();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUFunction");
  }
  unaff_RDI[0x35] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01139170();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDecomposedAudioSignal");
  }
  unaff_RDI[0x36] = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279b120 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279b0e8 = FUN_0006e1c0();
        _DAT_0279b0e0 = "_initialTimeStretchingOffset";
        _DAT_0279b0f0 = 0;
        _DAT_0279b0f8 = 0x6400;
        _DAT_0279b100 = "double";
        _DAT_0279b108 = 0;
        uRam000000000279b110 = 0;
        _DAT_0279b118 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x37) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279b168 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279b130 = FUN_0006e1c0();
        _DAT_0279b128 = "_didFixDetection";
        _DAT_0279b138 = 0;
        _DAT_0279b140 = 0x6201;
        _DAT_0279b148 = "bool";
        _DAT_0279b150 = 0;
        uRam000000000279b158 = 0;
        _DAT_0279b160 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1b9) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279b1b0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279b178 = FUN_0006e1c0();
        _DAT_0279b170 = "_didFixTime";
        _DAT_0279b180 = 0;
        _DAT_0279b188 = 0x6201;
        _DAT_0279b190 = "bool";
        _DAT_0279b198 = 0;
        uRam000000000279b1a0 = 0;
        _DAT_0279b1a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1ba) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279b1f8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279b1c0 = FUN_0006e1c0();
        _DAT_0279b1b8 = "_didFixPitch";
        _DAT_0279b1c8 = 0;
        _DAT_0279b1d0 = 0x6201;
        _DAT_0279b1d8 = "bool";
        _DAT_0279b1e0 = 0;
        uRam000000000279b1e8 = 0;
        _DAT_0279b1f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1bb) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279b240 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279b208 = FUN_0006e1c0();
        _DAT_0279b200 = "_didAddAndMute";
        _DAT_0279b210 = 0;
        _DAT_0279b218 = 0x6201;
        _DAT_0279b220 = "bool";
        _DAT_0279b228 = 0;
        uRam000000000279b230 = 0;
        _DAT_0279b238 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1bc) = 0;
  lVar9 = FUN_0006e1c0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0279b288 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0279b250 = FUN_0006e1c0();
        _DAT_0279b248 = "_didShiftTime";
        _DAT_0279b258 = 0;
        _DAT_0279b260 = 0x6201;
        _DAT_0279b268 = "bool";
        _DAT_0279b270 = 0;
        uRam000000000279b278 = 0;
        _DAT_0279b280 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


