// Function: FUN_01103ee0
// Address: 01103ee0
// Size: 9650 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "MUTimeline"
//   "GNObject"
//   "float"
//   "MUAudioSource"
//   "MUPart"
//   "MUAudioSourceDescription"
//   "MUDocument"
//   "_decomposedAudioSignalsAreInvalid"
//   "MUAdjustAtacksParameterSet"
//   "_isEditingDetection"
//   "_audioSourceDescription"
//   "MUAudioSourceItem"
//   "float *"
//   "MUAudioSourceElement"
//   "MUAudioSourceAttackItem"
//   "MUAudioSourcePrincipalItem"
//   "double"
//   "GNInt"
//   "MUAnalyzerParameterSet"
//   ... +42 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01103ee0(void)

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
  *unaff_RDI = &DAT_025d8f90;
  unaff_RDI[7] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01106f80();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSource");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107070();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  FUN_01107160();
  unaff_RDI[10] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107240();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPulseTimeline");
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107330();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107420();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107510();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPart");
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791588 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791550 = FUN_002771e0();
        _DAT_02791548 = "_lowerSuggestedPitchRangeLimit";
        _DAT_02791558 = 0;
        _DAT_02791560 = 0x6600;
        _DAT_02791568 = "float";
        _DAT_02791570 = 0;
        uRam0000000002791578 = 0;
        _DAT_02791580 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x74) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027915d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791598 = FUN_002771e0();
        _DAT_02791590 = "_upperSuggestedPitchRangeLimit";
        _DAT_027915a0 = 0;
        _DAT_027915a8 = 0x6600;
        _DAT_027915b0 = "float";
        _DAT_027915b8 = 0;
        uRam00000000027915c0 = 0;
        _DAT_027915c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791618 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027915e0 = FUN_002771e0();
        _DAT_027915d8 = "_itemDetectionQualityLimit";
        _DAT_027915e8 = 0;
        _DAT_027915f0 = 0x6600;
        _DAT_027915f8 = "float";
        _DAT_02791600 = 0;
        uRam0000000002791608 = 0;
        _DAT_02791610 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791660 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791628 = FUN_002771e0();
        _DAT_02791620 = "_attackItemDetectionQualityLimit";
        _DAT_02791630 = 0;
        _DAT_02791638 = 0x6600;
        _DAT_02791640 = "float";
        _DAT_02791648 = 0;
        uRam0000000002791650 = 0;
        _DAT_02791658 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027916a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791670 = FUN_002771e0();
        _DAT_02791668 = "_attackItemDefaultDetectionQualityLimit";
        _DAT_02791678 = 0;
        _DAT_02791680 = 0x6600;
        _DAT_02791688 = "float";
        _DAT_02791690 = 0;
        uRam0000000002791698 = 0;
        _DAT_027916a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x84) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027916f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027916b8 = FUN_002771e0();
        _DAT_027916b0 = "_propertyPointsMagnitudeToEnvelopeAmplitudeFactor";
        _DAT_027916c0 = 0;
        _DAT_027916c8 = 0x6600;
        _DAT_027916d0 = "float";
        _DAT_027916d8 = 0;
        uRam00000000027916e0 = 0;
        _DAT_027916e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x11) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791738 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791700 = FUN_002771e0();
        _DAT_027916f8 = "_timeSliceCount";
        _DAT_02791708 = 0;
        _DAT_02791710 = 0x6900;
        _DAT_02791718 = "GNInt";
        _DAT_02791720 = 0;
        uRam0000000002791728 = 0;
        _DAT_02791730 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x8c) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791780 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791748 = FUN_002771e0();
        _DAT_02791740 = "_itemDetectionVisualQualityLimit";
        _DAT_02791750 = 0;
        _DAT_02791758 = 0x6610;
        _DAT_02791760 = "float";
        _DAT_02791768 = 0;
        uRam0000000002791770 = 0;
        _DAT_02791778 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027917c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791790 = FUN_002771e0();
        _DAT_02791788 = "_attackItemDetectionVisualQualityLimit";
        _DAT_02791798 = 0;
        _DAT_027917a0 = 0x6610;
        _DAT_027917a8 = "float";
        _DAT_027917b0 = 0;
        uRam00000000027917b8 = 0;
        _DAT_027917c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791810 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027917d8 = FUN_002771e0();
        _DAT_027917d0 = "_windowOverlapForTimeSlices";
        _DAT_027917e0 = 0;
        _DAT_027917e8 = 0x6900;
        _DAT_027917f0 = "GNInt";
        _DAT_027917f8 = 0;
        uRam0000000002791800 = 0;
        _DAT_02791808 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x13] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791858 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791820 = FUN_002771e0();
        _DAT_02791818 = "_explicitTimeSliceTimeDistance";
        _DAT_02791828 = 0;
        _DAT_02791830 = 0x6400;
        _DAT_02791838 = "double";
        _DAT_02791840 = 0;
        uRam0000000002791848 = 0;
        _DAT_02791850 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027918a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791868 = FUN_002771e0();
        _DAT_02791860 = "_parameterValuesPerSecond";
        _DAT_02791870 = 0;
        _DAT_02791878 = 0x6400;
        _DAT_02791880 = "double";
        _DAT_02791888 = 0;
        uRam0000000002791890 = 0;
        _DAT_02791898 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027918e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027918b0 = FUN_002771e0();
        _DAT_027918a8 = "_parameterDataSize";
        _DAT_027918b8 = 0;
        _DAT_027918c0 = 0x6900;
        _DAT_027918c8 = "GNInt";
        _DAT_027918d0 = 0;
        uRam00000000027918d8 = 0;
        _DAT_027918e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01107600();
  *(undefined4 *)(unaff_RDI + 0x17) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791978 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791940 = FUN_002771e0();
        _DAT_02791938 = "_modelSpectrumSize";
        _DAT_02791948 = 0;
        _DAT_02791950 = 0x6900;
        _DAT_02791958 = "GNInt";
        _DAT_02791960 = 0;
        uRam0000000002791968 = 0;
        _DAT_02791970 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xbc) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027919c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791988 = FUN_002771e0();
        _DAT_02791980 = "_modelSpectraSemitoneCount";
        _DAT_02791990 = 0;
        _DAT_02791998 = 0x6900;
        _DAT_027919a0 = "GNInt";
        _DAT_027919a8 = 0;
        uRam00000000027919b0 = 0;
        _DAT_027919b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x18) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791a08 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027919d0 = FUN_002771e0();
        _DAT_027919c8 = "_decomposedAudioSignalsAreLoaded";
        _DAT_027919d8 = 0;
        _DAT_027919e0 = 0x6201;
        _DAT_027919e8 = "bool";
        _DAT_027919f0 = 0;
        uRam00000000027919f8 = 0;
        _DAT_02791a00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x19] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011076e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  unaff_RDI[0x1a] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011077d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceAttackItem");
  }
  unaff_RDI[0x1b] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011078c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceSibilantItem");
  }
  unaff_RDI[0x1c] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011079b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceItem");
  }
  unaff_RDI[0x1d] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107aa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  unaff_RDI[0x1e] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107b90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  unaff_RDI[0x1f] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107c80();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  unaff_RDI[0x20] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107d70();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceAttackItem");
  }
  unaff_RDI[0x21] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107e60();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceAttackItem");
  }
  unaff_RDI[0x22] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01107f50();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceAttackItem");
  }
  unaff_RDI[0x23] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108040();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  unaff_RDI[0x24] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108130();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  unaff_RDI[0x25] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108220();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourcePrincipalItem");
  }
  *(undefined1 *)(unaff_RDI + 0x26) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791df8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791dc0 = FUN_002771e0();
        _DAT_02791db8 = "_itemsAreNonAdjacentAtAttacks";
        _DAT_02791dc8 = 0;
        _DAT_02791dd0 = 0x6200;
        _DAT_02791dd8 = "bool";
        _DAT_02791de0 = 0;
        uRam0000000002791de8 = 0;
        _DAT_02791df0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x134) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108310();
    FUN_00e87980();
  }
  unaff_RDI[0x27] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108490();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioRenderInfo");
  }
  *(undefined1 *)(unaff_RDI + 0x28) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791f48 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791f10 = FUN_002771e0();
        _DAT_02791f08 = "_hasBestTempoDetection";
        _DAT_02791f18 = 0;
        _DAT_02791f20 = 0x6200;
        _DAT_02791f28 = "bool";
        _DAT_02791f30 = 0;
        uRam0000000002791f38 = 0;
        _DAT_02791f40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x141) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02791f90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02791f58 = FUN_002771e0();
        _DAT_02791f50 = "_didRecalcAllElementsPeriodsAndPitchCentersFromDecomposedAudioSignals";
        _DAT_02791f60 = 0;
        _DAT_02791f68 = 0x6200;
        _DAT_02791f70 = "bool";
        _DAT_02791f78 = 0;
        uRam0000000002791f80 = 0;
        _DAT_02791f88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x29] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108580();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAnalyzerParameterSet");
  }
  unaff_RDI[0x2a] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108670();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAdjustAtacksParameterSet");
  }
  unaff_RDI[0x2b] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108760();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAdjustAtacksParameterSet");
  }
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108850();
    FUN_00e87980();
  }
  FUN_011089c0();
  *(undefined1 *)(unaff_RDI + 0x2e) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792140 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792108 = FUN_002771e0();
        _DAT_02792100 = "_aTestFlag";
        _DAT_02792110 = 0;
        _DAT_02792118 = 0x6211;
        _DAT_02792120 = "bool";
        _DAT_02792128 = 0;
        uRam0000000002792130 = 0;
        _DAT_02792138 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x171) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792188 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792150 = FUN_002771e0();
        _DAT_02792148 = "_useOverallResidualItems";
        _DAT_02792158 = 0;
        _DAT_02792160 = 0x6211;
        _DAT_02792168 = "bool";
        _DAT_02792170 = 0;
        uRam0000000002792178 = 0;
        _DAT_02792180 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x172) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027921d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792198 = FUN_002771e0();
        _DAT_02792190 = "_updateDecomposedAudioSignalsImmediately";
        _DAT_027921a0 = 0;
        _DAT_027921a8 = 0x6211;
        _DAT_027921b0 = "bool";
        _DAT_027921b8 = 0;
        uRam00000000027921c0 = 0;
        _DAT_027921c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x173) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792218 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027921e0 = FUN_002771e0();
        _DAT_027921d8 = "_isEditingDetection";
        _DAT_027921e8 = 0;
        _DAT_027921f0 = 0x6211;
        _DAT_027921f8 = "bool";
        _DAT_02792200 = 0;
        uRam0000000002792208 = 0;
        _DAT_02792210 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x2f] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108aa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElementAnalyzerEngine");
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027922a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792270 = FUN_002771e0();
        _DAT_02792268 = "_displayMatrixTimeSliceCount";
        _DAT_02792278 = 0;
        _DAT_02792280 = 0x6911;
        _DAT_02792288 = "GNInt";
        _DAT_02792290 = 0;
        uRam0000000002792298 = 0;
        _DAT_027922a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x184) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027922f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027922b8 = FUN_002771e0();
        _DAT_027922b0 = "_displayMatrixStartSliceIndex";
        _DAT_027922c0 = 0;
        _DAT_027922c8 = 0x6911;
        _DAT_027922d0 = "GNInt";
        _DAT_027922d8 = 0;
        uRam00000000027922e0 = 0;
        _DAT_027922e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x31) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792338 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792300 = FUN_002771e0();
        _DAT_027922f8 = "_displayMatrixStartSliceIndexInRingBuffer";
        _DAT_02792308 = 0;
        _DAT_02792310 = 0x6911;
        _DAT_02792318 = "GNInt";
        _DAT_02792320 = 0;
        uRam0000000002792328 = 0;
        _DAT_02792330 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x32] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792380 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792348 = FUN_002771e0();
        _DAT_02792340 = "_energyRawMatrix";
        _DAT_02792350 = 0;
        _DAT_02792358 = 0x5e11;
        _DAT_02792360 = "float *";
        _DAT_02792368 = 0;
        uRam0000000002792370 = 0;
        _DAT_02792378 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x33] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108b90();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"GNObject");
  }
  unaff_RDI[0x34] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108c80();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeSliceParameterBuffer");
  }
  *(undefined1 *)(unaff_RDI + 0x35) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792458 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792420 = FUN_002771e0();
        _DAT_02792418 = "_decomposedAudioSignalsAreInvalid";
        _DAT_02792428 = 0;
        _DAT_02792430 = 0x6200;
        _DAT_02792438 = "bool";
        _DAT_02792440 = 0;
        uRam0000000002792448 = 0;
        _DAT_02792450 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1a9) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027924a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792468 = FUN_002771e0();
        _DAT_02792460 = "_updateDecomposedAudioSignalsIsSuspended";
        _DAT_02792470 = 0;
        _DAT_02792478 = 0x6200;
        _DAT_02792480 = "bool";
        _DAT_02792488 = 0;
        uRam0000000002792490 = 0;
        _DAT_02792498 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1aa) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027924e8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027924b0 = FUN_002771e0();
        _DAT_027924a8 = "_shouldHandleSibilants";
        _DAT_027924b8 = 0;
        _DAT_027924c0 = 0x6200;
        _DAT_027924c8 = "bool";
        _DAT_027924d0 = 0;
        uRam00000000027924d8 = 0;
        _DAT_027924e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1ab) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792530 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027924f8 = FUN_002771e0();
        _DAT_027924f0 = "_didPerformBreathSeparation";
        _DAT_02792500 = 0;
        _DAT_02792508 = 0x6200;
        _DAT_02792510 = "bool";
        _DAT_02792518 = 0;
        uRam0000000002792520 = 0;
        _DAT_02792528 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1ac) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792578 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792540 = FUN_002771e0();
        _DAT_02792538 = "_findMonophonicPitchInFrequencyDomain";
        _DAT_02792548 = 0;
        _DAT_02792550 = 0x6200;
        _DAT_02792558 = "bool";
        _DAT_02792560 = 0;
        uRam0000000002792568 = 0;
        _DAT_02792570 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x36] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01108d70();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDocument");
  }
  FUN_01108e60();
  FUN_01108f40();
  FUN_01109020();
  *(undefined1 *)(unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027926e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027926a8 = FUN_002771e0();
        _DAT_027926a0 = "_isSingleInstrument";
        _DAT_027926b0 = 0;
        _DAT_027926b8 = 0x6200;
        _DAT_027926c0 = "bool";
        _DAT_027926c8 = 0;
        uRam00000000027926d0 = 0;
        _DAT_027926d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01109100();
  unaff_RDI[0x3c] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011091e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescriptions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioRecordingDescription");
  }
  unaff_RDI[0x3d] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011092d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceDescription";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceInstrumentPortion");
  }
  unaff_RDI[0x3e] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011093c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  FUN_011094b0();
  unaff_RDI[0x40] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01109590();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDocument");
  }
  unaff_RDI[0x41] = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01109680();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  *(undefined1 *)(unaff_RDI + 0x42) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792920 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027928e8 = FUN_002771e0();
        _DAT_027928e0 = "_isPitchToChordAdaptionEnabled";
        _DAT_027928f0 = 0;
        _DAT_027928f8 = 0x6200;
        _DAT_02792900 = "bool";
        _DAT_02792908 = 0;
        uRam0000000002792910 = 0;
        _DAT_02792918 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x214) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01109770();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x43) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011098e0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x21c) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01109a60();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x44) = 0;
  lVar9 = FUN_002771e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02792b90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02792b58 = FUN_002771e0();
        _DAT_02792b50 = "_separationChangeCount";
        _DAT_02792b60 = 0;
        _DAT_02792b68 = 0x6911;
        _DAT_02792b70 = "GNInt";
        _DAT_02792b78 = 0;
        uRam0000000002792b80 = 0;
        _DAT_02792b88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


