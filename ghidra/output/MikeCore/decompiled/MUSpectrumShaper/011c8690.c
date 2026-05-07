// Function: FUN_011c8690
// Address: 011c8690
// Size: 5621 bytes
// Class: MUSpectrumShaper
// String references:
//   "bool"
//   "MUAraAudioPlaybackRegion"
//   "MUElement"
//   "MUTrack"
//   "MUAudioIOSlot"
//   "_track"
//   "_channelFormat"
//   "GNAudioChannelFormat"
//   "MUAudioGenerator"
//   "_subtracks"
//   "MUPerformance"
//   "_rootTrack"
//   "_isMuted"
//   "_isSolo"
//   "double"
//   "GNInt"
//   "MUAudioEffectChain"
//   "MUModulationSource"
//   "_isPitchToChordAdaptionEnabled"
//   "_didRequestCacheValidation"
//   ... +25 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011c8690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *unaff_RDI = &DAT_025d6680;
  unaff_RDI[7] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca1e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_sequenceTrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca2d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_regionTracks";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca3c0();
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca540();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_masterTrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca630();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_slaveTracks";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca720();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_plugInTrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioPlaybackRegion");
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7388 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7350 = FUN_000823a0();
        _DAT_027b7348 = "_isSlaveTrackValid";
        _DAT_027b7358 = 0;
        _DAT_027b7360 = 0x6201;
        _DAT_027b7368 = "bool";
        _DAT_027b7370 = 0;
        uRam00000000027b7378 = 0;
        _DAT_027b7380 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x69) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b73d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7398 = FUN_000823a0();
        _DAT_027b7390 = "_isSlaveGeneratorValid";
        _DAT_027b73a0 = 0;
        _DAT_027b73a8 = 0x6201;
        _DAT_027b73b0 = "bool";
        _DAT_027b73b8 = 0;
        uRam00000000027b73c0 = 0;
        _DAT_027b73c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6a) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7418 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b73e0 = FUN_000823a0();
        _DAT_027b73d8 = "_areElementTimesValid";
        _DAT_027b73e8 = 0;
        _DAT_027b73f0 = 0x6201;
        _DAT_027b73f8 = "bool";
        _DAT_027b7400 = 0;
        uRam00000000027b7408 = 0;
        _DAT_027b7410 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x6b) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7460 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7428 = FUN_000823a0();
        _DAT_027b7420 = "_areHeadAndTailDurationsValid";
        _DAT_027b7430 = 0;
        _DAT_027b7438 = 0x6201;
        _DAT_027b7440 = "bool";
        _DAT_027b7448 = 0;
        uRam00000000027b7450 = 0;
        _DAT_027b7458 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x6c) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b74a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7470 = FUN_000823a0();
        _DAT_027b7468 = "_isSyncingToMasterOrValidatingCaches";
        _DAT_027b7478 = 0;
        _DAT_027b7480 = 0x6901;
        _DAT_027b7488 = "GNInt";
        _DAT_027b7490 = 0;
        uRam00000000027b7498 = 0;
        _DAT_027b74a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b74f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b74b8 = FUN_000823a0();
        _DAT_027b74b0 = "_signalChangeCount";
        _DAT_027b74c0 = 0;
        _DAT_027b74c8 = 0x6901;
        _DAT_027b74d0 = "GNInt";
        _DAT_027b74d8 = 0;
        uRam00000000027b74e0 = 0;
        _DAT_027b74e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7538 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7500 = FUN_000823a0();
        _DAT_027b74f8 = "_headDurationInSlaveTimeCache";
        _DAT_027b7508 = 0;
        _DAT_027b7510 = 0x6401;
        _DAT_027b7518 = "double";
        _DAT_027b7520 = 0;
        uRam00000000027b7528 = 0;
        _DAT_027b7530 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x10] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7580 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7548 = FUN_000823a0();
        _DAT_027b7540 = "_tailDurationInSlaveTimeCache";
        _DAT_027b7550 = 0;
        _DAT_027b7558 = 0x6401;
        _DAT_027b7560 = "double";
        _DAT_027b7568 = 0;
        uRam00000000027b7570 = 0;
        _DAT_027b7578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x11) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b75c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7590 = FUN_000823a0();
        _DAT_027b7588 = "_isPreservingAudioSourceSignal";
        _DAT_027b7598 = 0;
        _DAT_027b75a0 = 0x6200;
        _DAT_027b75a8 = "bool";
        _DAT_027b75b0 = 0;
        uRam00000000027b75b8 = 0;
        _DAT_027b75c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x89) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7610 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b75d8 = FUN_000823a0();
        _DAT_027b75d0 = "_isPitchToChordAdaptionEnabled";
        _DAT_027b75e0 = 0;
        _DAT_027b75e8 = 0x6200;
        _DAT_027b75f0 = "bool";
        _DAT_027b75f8 = 0;
        uRam00000000027b7600 = 0;
        _DAT_027b7608 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x8c) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca810();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca980();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b76e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b76b0 = FUN_000823a0();
        _DAT_027b76a8 = "_channelFormat";
        _DAT_027b76b8 = 0;
        _DAT_027b76c0 = 0x6500;
        _DAT_027b76c8 = "GNAudioChannelFormat";
        _DAT_027b76d0 = 0;
        uRam00000000027b76d8 = 0;
        _DAT_027b76e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x13) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7730 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b76f8 = FUN_000823a0();
        _DAT_027b76f0 = "_cachesGeneratorSignal";
        _DAT_027b7700 = 0;
        _DAT_027b7708 = 0x6200;
        _DAT_027b7710 = "bool";
        _DAT_027b7718 = 0;
        uRam00000000027b7720 = 0;
        _DAT_027b7728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x99) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7778 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7740 = FUN_000823a0();
        _DAT_027b7738 = "_cachesEffectChainSignal";
        _DAT_027b7748 = 0;
        _DAT_027b7750 = 0x6200;
        _DAT_027b7758 = "bool";
        _DAT_027b7760 = 0;
        uRam00000000027b7768 = 0;
        _DAT_027b7770 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9a) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b77c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7788 = FUN_000823a0();
        _DAT_027b7780 = "_cachesModulationSources";
        _DAT_027b7790 = 0;
        _DAT_027b7798 = 0x6200;
        _DAT_027b77a0 = "bool";
        _DAT_027b77a8 = 0;
        uRam00000000027b77b0 = 0;
        _DAT_027b77b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9b) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7808 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b77d0 = FUN_000823a0();
        _DAT_027b77c8 = "_isMuted";
        _DAT_027b77d8 = 0;
        _DAT_027b77e0 = 0x6200;
        _DAT_027b77e8 = "bool";
        _DAT_027b77f0 = 0;
        uRam00000000027b77f8 = 0;
        _DAT_027b7800 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7850 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7818 = FUN_000823a0();
        _DAT_027b7810 = "_isSolo";
        _DAT_027b7820 = 0;
        _DAT_027b7828 = 0x6200;
        _DAT_027b7830 = "bool";
        _DAT_027b7838 = 0;
        uRam00000000027b7840 = 0;
        _DAT_027b7848 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011cab00();
  unaff_RDI[0x15] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cabe0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_supertrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  unaff_RDI[0x16] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cacd0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_track";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  unaff_RDI[0x17] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cadc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioEffectChain");
  }
  unaff_RDI[0x18] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011caeb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUModulationSource");
  }
  unaff_RDI[0x19] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cafa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUModulationSource");
  }
  unaff_RDI[0x1a] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb090();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_track";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackAutomation");
  }
  unaff_RDI[0x1b] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb180();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_track";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheSegment");
  }
  unaff_RDI[0x1c] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb270();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUMidiIOSlot");
  }
  *(undefined1 *)(unaff_RDI + 0x1d) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7b20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7ae8 = FUN_000823a0();
        _DAT_027b7ae0 = "_isRecordingEnabled";
        _DAT_027b7af0 = 0;
        _DAT_027b7af8 = 0x6200;
        _DAT_027b7b00 = "bool";
        _DAT_027b7b08 = 0;
        uRam00000000027b7b10 = 0;
        _DAT_027b7b18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011cb360();
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb440();
    FUN_00e87980();
  }
  FUN_011cb5b0();
  *(undefined4 *)(unaff_RDI + 0x21) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7cd0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7c98 = FUN_000823a0();
        _DAT_027b7c90 = "_updateSpectrumShaperDisabled";
        _DAT_027b7ca0 = 0;
        _DAT_027b7ca8 = 0x6911;
        _DAT_027b7cb0 = "GNInt";
        _DAT_027b7cb8 = 0;
        uRam00000000027b7cc0 = 0;
        _DAT_027b7cc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x22] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb690();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_subtracks";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  puVar11 = unaff_RDI + 0x23;
  unaff_RDI[0x23] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb780();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_track";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioGenerator");
  }
  unaff_RDI[0x24] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb870();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOSlot",param_3,param_4,puVar11);
  }
  unaff_RDI[0x25] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb960();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOSlot");
  }
  unaff_RDI[0x26] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cba50();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_rootTrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPerformance");
  }
  unaff_RDI[0x27] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cbb40();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackElementsCache");
  }
  *(undefined1 *)(unaff_RDI + 0x28) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7ec8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7e90 = FUN_000823a0();
        _DAT_027b7e88 = "_didRequestCacheValidation";
        _DAT_027b7e98 = 0;
        _DAT_027b7ea0 = 0x6211;
        _DAT_027b7ea8 = "bool";
        _DAT_027b7eb0 = 0;
        uRam00000000027b7eb8 = 0;
        _DAT_027b7ec0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x29] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b7f10 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b7ed8 = FUN_000823a0();
        _DAT_027b7ed0 = "_effectTempoFactor";
        _DAT_027b7ee0 = 0;
        _DAT_027b7ee8 = 0x6401;
        _DAT_027b7ef0 = "double";
        _DAT_027b7ef8 = 0;
        uRam00000000027b7f00 = 0;
        _DAT_027b7f08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


