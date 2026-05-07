// Function: FUN_01141790
// Address: 01141790
// Size: 11251 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "SInt64"
//   "GNInt *"
//   "float"
//   "MUElementAnalyzer"
//   "MUAudioSource"
//   "_sampleRate"
//   "_sampleCount"
//   "_duration"
//   "_maxAmplitude"
//   "MUAudioSourceItem"
//   "float *"
//   "MUAudioSourceAttackItem"
//   "double"
//   "GNInt"
//   "MUAnalyzerParameterSet"
//   "MUAudioSourcePropertyPoint"
//   "_timeSliceCount"
//   "_parameterValuesPerSecond"
//   "_parameterDataSize"
//   ... +53 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01141790(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00044470();
  *unaff_RDI = &DAT_025e5748;
  unaff_RDI[2] = &DAT_025e5b00;
  unaff_RDI[3] = &DAT_025e5b38;
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01144cf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzer");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01144de0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSource");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01144ed0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAnalyzerParameterSet");
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c0d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c0a0 = FUN_01140ee0();
        _DAT_0279c098 = "_engineSampleOffset";
        _DAT_0279c0a8 = 0;
        _DAT_0279c0b0 = 0x6c00;
        _DAT_0279c0b8 = "SInt64";
        _DAT_0279c0c0 = 0;
        uRam000000000279c0c8 = 0;
        _DAT_0279c0d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c120 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c0e8 = FUN_01140ee0();
        _DAT_0279c0e0 = "_engineIndex";
        _DAT_0279c0f0 = 0;
        _DAT_0279c0f8 = 0x6900;
        _DAT_0279c100 = "GNInt";
        _DAT_0279c108 = 0;
        uRam000000000279c110 = 0;
        _DAT_0279c118 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c168 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c130 = FUN_01140ee0();
        _DAT_0279c128 = "_originalSignal";
        _DAT_0279c138 = 0;
        _DAT_0279c140 = 0x5e00;
        _DAT_0279c148 = "float *";
        _DAT_0279c150 = 0;
        uRam000000000279c158 = 0;
        _DAT_0279c160 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c1b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c178 = FUN_01140ee0();
        _DAT_0279c170 = "_originalSignalBufferWithMargin";
        _DAT_0279c180 = 0;
        _DAT_0279c188 = 0x5e00;
        _DAT_0279c190 = "float *";
        _DAT_0279c198 = 0;
        uRam000000000279c1a0 = 0;
        _DAT_0279c1a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c1f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c1c0 = FUN_01140ee0();
        _DAT_0279c1b8 = "_sampleCount";
        _DAT_0279c1c8 = 0;
        _DAT_0279c1d0 = 0x6c00;
        _DAT_0279c1d8 = "SInt64";
        _DAT_0279c1e0 = 0;
        uRam000000000279c1e8 = 0;
        _DAT_0279c1f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c240 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c208 = FUN_01140ee0();
        _DAT_0279c200 = "_nonSilentSampleCount";
        _DAT_0279c210 = 0;
        _DAT_0279c218 = 0x6c00;
        _DAT_0279c220 = "SInt64";
        _DAT_0279c228 = 0;
        uRam000000000279c230 = 0;
        _DAT_0279c238 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c288 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c250 = FUN_01140ee0();
        _DAT_0279c248 = "_sampleRate";
        _DAT_0279c258 = 0;
        _DAT_0279c260 = 0x6400;
        _DAT_0279c268 = "double";
        _DAT_0279c270 = 0;
        uRam000000000279c278 = 0;
        _DAT_0279c280 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c2d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c298 = FUN_01140ee0();
        _DAT_0279c290 = "_duration";
        _DAT_0279c2a0 = 0;
        _DAT_0279c2a8 = 0x6400;
        _DAT_0279c2b0 = "double";
        _DAT_0279c2b8 = 0;
        uRam000000000279c2c0 = 0;
        _DAT_0279c2c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c318 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c2e0 = FUN_01140ee0();
        _DAT_0279c2d8 = "_parameterValuesPerSecond";
        _DAT_0279c2e8 = 0;
        _DAT_0279c2f0 = 0x6400;
        _DAT_0279c2f8 = "double";
        _DAT_0279c300 = 0;
        uRam000000000279c308 = 0;
        _DAT_0279c310 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x18) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c360 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c328 = FUN_01140ee0();
        _DAT_0279c320 = "_parameterDataSize";
        _DAT_0279c330 = 0;
        _DAT_0279c338 = 0x6900;
        _DAT_0279c340 = "GNInt";
        _DAT_0279c348 = 0;
        uRam000000000279c350 = 0;
        _DAT_0279c358 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xc4) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c3a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c370 = FUN_01140ee0();
        _DAT_0279c368 = "_maxAmplitude";
        _DAT_0279c378 = 0;
        _DAT_0279c380 = 0x6600;
        _DAT_0279c388 = "float";
        _DAT_0279c390 = 0;
        uRam000000000279c398 = 0;
        _DAT_0279c3a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c3f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c3b8 = FUN_01140ee0();
        _DAT_0279c3b0 = "_propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum";
        _DAT_0279c3c0 = 0;
        _DAT_0279c3c8 = 0x6600;
        _DAT_0279c3d0 = "float";
        _DAT_0279c3d8 = 0;
        uRam000000000279c3e0 = 0;
        _DAT_0279c3e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xcc) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c438 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c400 = FUN_01140ee0();
        _DAT_0279c3f8 = "_propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum";
        _DAT_0279c408 = 0;
        _DAT_0279c410 = 0x6600;
        _DAT_0279c418 = "float";
        _DAT_0279c420 = 0;
        uRam000000000279c428 = 0;
        _DAT_0279c430 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01144fc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURawNoteSeparation");
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011450b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURawNoteSeparation");
  }
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c510 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c4d8 = FUN_01140ee0();
        _DAT_0279c4d0 = "_isPercussive";
        _DAT_0279c4e0 = 0;
        _DAT_0279c4e8 = 0x6200;
        _DAT_0279c4f0 = "bool";
        _DAT_0279c4f8 = 0;
        uRam000000000279c500 = 0;
        _DAT_0279c508 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xe1) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c558 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c520 = FUN_01140ee0();
        _DAT_0279c518 = "_isPolyphonic";
        _DAT_0279c528 = 0;
        _DAT_0279c530 = 0x6200;
        _DAT_0279c538 = "bool";
        _DAT_0279c540 = 0;
        uRam000000000279c548 = 0;
        _DAT_0279c550 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xe4) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c5a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c568 = FUN_01140ee0();
        _DAT_0279c560 = "_pitchJumpsSum";
        _DAT_0279c570 = 0;
        _DAT_0279c578 = 0x6600;
        _DAT_0279c580 = "float";
        _DAT_0279c588 = 0;
        uRam000000000279c590 = 0;
        _DAT_0279c598 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1d) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c5e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c5b0 = FUN_01140ee0();
        _DAT_0279c5a8 = "_pitchBarycenter";
        _DAT_0279c5b8 = 0;
        _DAT_0279c5c0 = 0x6600;
        _DAT_0279c5c8 = "float";
        _DAT_0279c5d0 = 0;
        uRam000000000279c5d8 = 0;
        _DAT_0279c5e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xec) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c630 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c5f8 = FUN_01140ee0();
        _DAT_0279c5f0 = "_allPercussiveDecay";
        _DAT_0279c600 = 0;
        _DAT_0279c608 = 0x6600;
        _DAT_0279c610 = "float";
        _DAT_0279c618 = 0;
        uRam000000000279c620 = 0;
        _DAT_0279c628 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1e) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c678 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c640 = FUN_01140ee0();
        _DAT_0279c638 = "_allRhythmicQuality";
        _DAT_0279c648 = 0;
        _DAT_0279c650 = 0x6600;
        _DAT_0279c658 = "float";
        _DAT_0279c660 = 0;
        uRam000000000279c668 = 0;
        _DAT_0279c670 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xf4) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c6c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c688 = FUN_01140ee0();
        _DAT_0279c680 = "_allTonality";
        _DAT_0279c690 = 0;
        _DAT_0279c698 = 0x6600;
        _DAT_0279c6a0 = "float";
        _DAT_0279c6a8 = 0;
        uRam000000000279c6b0 = 0;
        _DAT_0279c6b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1f) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c708 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c6d0 = FUN_01140ee0();
        _DAT_0279c6c8 = "_allCentDiffPerMillisecond";
        _DAT_0279c6d8 = 0;
        _DAT_0279c6e0 = 0x6600;
        _DAT_0279c6e8 = "float";
        _DAT_0279c6f0 = 0;
        uRam000000000279c6f8 = 0;
        _DAT_0279c700 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xfc) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c750 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c718 = FUN_01140ee0();
        _DAT_0279c710 = "_allPitchRangePerNote";
        _DAT_0279c720 = 0;
        _DAT_0279c728 = 0x6600;
        _DAT_0279c730 = "float";
        _DAT_0279c738 = 0;
        uRam000000000279c740 = 0;
        _DAT_0279c748 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c798 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c760 = FUN_01140ee0();
        _DAT_0279c758 = "_allEnergyRelevantRegionRatio";
        _DAT_0279c768 = 0;
        _DAT_0279c770 = 0x6600;
        _DAT_0279c778 = "float";
        _DAT_0279c780 = 0;
        uRam000000000279c788 = 0;
        _DAT_0279c790 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x104) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c7e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c7a8 = FUN_01140ee0();
        _DAT_0279c7a0 = "_allAttackPeakQuality";
        _DAT_0279c7b0 = 0;
        _DAT_0279c7b8 = 0x6600;
        _DAT_0279c7c0 = "float";
        _DAT_0279c7c8 = 0;
        uRam000000000279c7d0 = 0;
        _DAT_0279c7d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x21) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c828 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c7f0 = FUN_01140ee0();
        _DAT_0279c7e8 = "_allAttackPeakToEnergyRegionRatio";
        _DAT_0279c7f8 = 0;
        _DAT_0279c800 = 0x6600;
        _DAT_0279c808 = "float";
        _DAT_0279c810 = 0;
        uRam000000000279c818 = 0;
        _DAT_0279c820 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x10c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c870 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c838 = FUN_01140ee0();
        _DAT_0279c830 = "_allMonophony";
        _DAT_0279c840 = 0;
        _DAT_0279c848 = 0x6600;
        _DAT_0279c850 = "float";
        _DAT_0279c858 = 0;
        uRam000000000279c860 = 0;
        _DAT_0279c868 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x22) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c8b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c880 = FUN_01140ee0();
        _DAT_0279c878 = "_referenceAttackPeakValue";
        _DAT_0279c888 = 0;
        _DAT_0279c890 = 0x6600;
        _DAT_0279c898 = "float";
        _DAT_0279c8a0 = 0;
        uRam000000000279c8a8 = 0;
        _DAT_0279c8b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x114) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279c900 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279c8c8 = FUN_01140ee0();
        _DAT_0279c8c0 = "_referencePeakRmsLevel";
        _DAT_0279c8d0 = 0;
        _DAT_0279c8d8 = 0x6600;
        _DAT_0279c8e0 = "float";
        _DAT_0279c8e8 = 0;
        uRam000000000279c8f0 = 0;
        _DAT_0279c8f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011451a0();
  FUN_01145280();
  FUN_01145360();
  FUN_01145440();
  *(undefined1 *)(unaff_RDI + 0x27) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ca68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ca30 = FUN_01140ee0();
        _DAT_0279ca28 = "_origRMSValid";
        _DAT_0279ca38 = 0;
        _DAT_0279ca40 = 0x6200;
        _DAT_0279ca48 = "bool";
        _DAT_0279ca50 = 0;
        uRam000000000279ca58 = 0;
        _DAT_0279ca60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x28] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279cab0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ca78 = FUN_01140ee0();
        _DAT_0279ca70 = "_nonSilentRmsVals";
        _DAT_0279ca80 = 0;
        _DAT_0279ca88 = 0x5e00;
        _DAT_0279ca90 = "GNInt *";
        _DAT_0279ca98 = 0;
        uRam000000000279caa0 = 0;
        _DAT_0279caa8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x29) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279caf8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279cac0 = FUN_01140ee0();
        _DAT_0279cab8 = "_pitchMatrixTimePosCount";
        _DAT_0279cac8 = 0;
        _DAT_0279cad0 = 0x6900;
        _DAT_0279cad8 = "GNInt";
        _DAT_0279cae0 = 0;
        uRam000000000279cae8 = 0;
        _DAT_0279caf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x2a] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279cb40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279cb08 = FUN_01140ee0();
        _DAT_0279cb00 = "_pitchMatrix";
        _DAT_0279cb10 = 0;
        _DAT_0279cb18 = 0x5e00;
        _DAT_0279cb20 = "float *";
        _DAT_0279cb28 = 0;
        uRam000000000279cb30 = 0;
        _DAT_0279cb38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01145520();
  unaff_RDI[0x2c] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01145600();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectralTimeSlice");
  }
  unaff_RDI[0x2d] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011456f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectralTimeSlice");
  }
  unaff_RDI[0x2e] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011457e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceAttackItem");
  }
  unaff_RDI[0x2f] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011458d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourcePropertyPoint");
  }
  unaff_RDI[0x30] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011459c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceItem");
  }
  unaff_RDI[0x31] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01145ab0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"PNTestMatrixPath");
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01145ba0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFilterEngine");
  }
  *(undefined1 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279cdc8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279cd90 = FUN_01140ee0();
        _DAT_0279cd88 = "_useDNA2ForPolyphonicDetection";
        _DAT_0279cd98 = 0;
        _DAT_0279cda0 = 0x6200;
        _DAT_0279cda8 = "bool";
        _DAT_0279cdb0 = 0;
        uRam000000000279cdb8 = 0;
        _DAT_0279cdc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x19c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ce10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279cdd8 = FUN_01140ee0();
        _DAT_0279cdd0 = "_timeSliceCount";
        _DAT_0279cde0 = 0;
        _DAT_0279cde8 = 0x6900;
        _DAT_0279cdf0 = "GNInt";
        _DAT_0279cdf8 = 0;
        uRam000000000279ce00 = 0;
        _DAT_0279ce08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x34) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279ce58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ce20 = FUN_01140ee0();
        _DAT_0279ce18 = "_foundPropertyPointCount";
        _DAT_0279ce28 = 0;
        _DAT_0279ce30 = 0x6900;
        _DAT_0279ce38 = "GNInt";
        _DAT_0279ce40 = 0;
        uRam000000000279ce48 = 0;
        _DAT_0279ce50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279cea0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ce68 = FUN_01140ee0();
        _DAT_0279ce60 = "_polyPitchEnergyMatrixExtracted";
        _DAT_0279ce70 = 0;
        _DAT_0279ce78 = 0x5e00;
        _DAT_0279ce80 = "float *";
        _DAT_0279ce88 = 0;
        uRam000000000279ce90 = 0;
        _DAT_0279ce98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x36] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279cee8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279ceb0 = FUN_01140ee0();
        _DAT_0279cea8 = "_polyPitchEnergyMatrixOriginal";
        _DAT_0279ceb8 = 0;
        _DAT_0279cec0 = 0x5e00;
        _DAT_0279cec8 = "float *";
        _DAT_0279ced0 = 0;
        uRam000000000279ced8 = 0;
        _DAT_0279cee0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x37] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279cf30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279cef8 = FUN_01140ee0();
        _DAT_0279cef0 = "_polyPitchRelevanceMatrixExtracted";
        _DAT_0279cf00 = 0;
        _DAT_0279cf08 = 0x5e00;
        _DAT_0279cf10 = "float *";
        _DAT_0279cf18 = 0;
        uRam000000000279cf20 = 0;
        _DAT_0279cf28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x38] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279cf78 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279cf40 = FUN_01140ee0();
        _DAT_0279cf38 = "_polyPitchRelevanceMatrixOriginal";
        _DAT_0279cf48 = 0;
        _DAT_0279cf50 = 0x5e00;
        _DAT_0279cf58 = "float *";
        _DAT_0279cf60 = 0;
        uRam000000000279cf68 = 0;
        _DAT_0279cf70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x39] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279cfc0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279cf88 = FUN_01140ee0();
        _DAT_0279cf80 = "_polyPitchCentMatrixForAdditionalDisplay";
        _DAT_0279cf90 = 0;
        _DAT_0279cf98 = 0x5e00;
        _DAT_0279cfa0 = "float *";
        _DAT_0279cfa8 = 0;
        uRam000000000279cfb0 = 0;
        _DAT_0279cfb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3a] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01145c90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeSliceParameterBuffer");
  }
  *(undefined4 *)(unaff_RDI + 0x3b) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d050 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d018 = FUN_01140ee0();
        _DAT_0279d010 = "_processedTimeSliceCount";
        _DAT_0279d020 = 0;
        _DAT_0279d028 = 0x6900;
        _DAT_0279d030 = "GNInt";
        _DAT_0279d038 = 0;
        uRam000000000279d040 = 0;
        _DAT_0279d048 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01145d80();
  FUN_01145e60();
  FUN_01145f40();
  FUN_01146020();
  FUN_01146100();
  FUN_011461e0();
  FUN_011462c0();
  *(undefined4 *)(unaff_RDI + 0x43) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d290 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d258 = FUN_01140ee0();
        _DAT_0279d250 = "_previousRenderedBackgroundDisplayType";
        _DAT_0279d260 = 0;
        _DAT_0279d268 = 0x6900;
        _DAT_0279d270 = "GNInt";
        _DAT_0279d278 = 0;
        uRam000000000279d280 = 0;
        _DAT_0279d288 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x21c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d2d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d2a0 = FUN_01140ee0();
        _DAT_0279d298 = "_previousTestValue1";
        _DAT_0279d2a8 = 0;
        _DAT_0279d2b0 = 0x6600;
        _DAT_0279d2b8 = "float";
        _DAT_0279d2c0 = 0;
        uRam000000000279d2c8 = 0;
        _DAT_0279d2d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x44) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d320 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d2e8 = FUN_01140ee0();
        _DAT_0279d2e0 = "_previousTestValue2";
        _DAT_0279d2f0 = 0;
        _DAT_0279d2f8 = 0x6600;
        _DAT_0279d300 = "float";
        _DAT_0279d308 = 0;
        uRam000000000279d310 = 0;
        _DAT_0279d318 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x224) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d368 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d330 = FUN_01140ee0();
        _DAT_0279d328 = "_previousTestValue3";
        _DAT_0279d338 = 0;
        _DAT_0279d340 = 0x6600;
        _DAT_0279d348 = "float";
        _DAT_0279d350 = 0;
        uRam000000000279d358 = 0;
        _DAT_0279d360 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x45) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d3b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d378 = FUN_01140ee0();
        _DAT_0279d370 = "_previousTestValue4";
        _DAT_0279d380 = 0;
        _DAT_0279d388 = 0x6600;
        _DAT_0279d390 = "float";
        _DAT_0279d398 = 0;
        uRam000000000279d3a0 = 0;
        _DAT_0279d3a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x22c) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d3f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d3c0 = FUN_01140ee0();
        _DAT_0279d3b8 = "_previousRelevanceRankLimit";
        _DAT_0279d3c8 = 0;
        _DAT_0279d3d0 = 0x6900;
        _DAT_0279d3d8 = "GNInt";
        _DAT_0279d3e0 = 0;
        uRam000000000279d3e8 = 0;
        _DAT_0279d3f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x46) = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d440 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d408 = FUN_01140ee0();
        _DAT_0279d400 = "_previousRelevanceRankLimitForNewPaths";
        _DAT_0279d410 = 0;
        _DAT_0279d418 = 0x6900;
        _DAT_0279d420 = "GNInt";
        _DAT_0279d428 = 0;
        uRam000000000279d430 = 0;
        _DAT_0279d438 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x47] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d488 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d450 = FUN_01140ee0();
        _DAT_0279d448 = "_originalColumnEnergyOfPolyPitchEnergyMatrixInv";
        _DAT_0279d458 = 0;
        _DAT_0279d460 = 0x5e00;
        _DAT_0279d468 = "float *";
        _DAT_0279d470 = 0;
        uRam000000000279d478 = 0;
        _DAT_0279d480 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x48] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d4d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d498 = FUN_01140ee0();
        _DAT_0279d490 = "_posNoiseEnergies";
        _DAT_0279d4a0 = 0;
        _DAT_0279d4a8 = 0x5e00;
        _DAT_0279d4b0 = "float *";
        _DAT_0279d4b8 = 0;
        uRam000000000279d4c0 = 0;
        _DAT_0279d4c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x49] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d518 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d4e0 = FUN_01140ee0();
        _DAT_0279d4d8 = "_spectrogramMagnitudeSums";
        _DAT_0279d4e8 = 0;
        _DAT_0279d4f0 = 0x5e00;
        _DAT_0279d4f8 = "float *";
        _DAT_0279d500 = 0;
        uRam000000000279d508 = 0;
        _DAT_0279d510 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4a] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d560 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d528 = FUN_01140ee0();
        _DAT_0279d520 = "_filteredSpectrogramMagnitudeSums";
        _DAT_0279d530 = 0;
        _DAT_0279d538 = 0x5e00;
        _DAT_0279d540 = "float *";
        _DAT_0279d548 = 0;
        uRam000000000279d550 = 0;
        _DAT_0279d558 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4b] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0279d5a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0279d570 = FUN_01140ee0();
        _DAT_0279d568 = "_maxRelevancePropertyPointsOfCentMatrixColumns";
        _DAT_0279d578 = 0;
        _DAT_0279d580 = 0x5e00;
        _DAT_0279d588 = "int2FloatStruct *";
        _DAT_0279d590 = 0;
        uRam000000000279d598 = 0;
        _DAT_0279d5a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011463a0();
  FUN_01146480();
  FUN_01146560();
  FUN_01146640();
  FUN_01146720();
  FUN_01146800();
  FUN_011468e0();
  FUN_011469c0();
  FUN_01146aa0();
  FUN_01146b80();
  FUN_01146c60();
  unaff_RDI[0x57] = 0;
  lVar2 = FUN_01140ee0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01146d40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzerEngineStaticTables");
  }
  return;
}


