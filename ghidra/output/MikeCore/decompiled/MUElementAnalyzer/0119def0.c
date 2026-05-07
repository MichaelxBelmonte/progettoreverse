// Function: FUN_0119def0
// Address: 0119def0
// Size: 3878 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "_duration"
//   "MUAudioSourceDescription"
//   "float **"
//   "MURecordingAnalyzerReferenceTrackInfo"
//   "float *"
//   "double"
//   "GNInt"
//   "MUAnalyzerParameterSet"
//   "MUAudioRecordingDescription"
//   "_timeSliceCount"
//   "MUElementAnalyzerEngine"
//   "_previousRenderedBackgroundDisplayType"
//   "_previousTestValue1"
//   "_previousTestValue2"
//   "_previousTestValue3"
//   "_previousTestValue4"
//   "_testFlag1"
//   ... +10 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0119def0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00044470();
  *unaff_RDI = &DAT_025f4cb8;
  unaff_RDI[2] = &DAT_025f5078;
  unaff_RDI[3] = &DAT_025f50b0;
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f1b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f2a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRecordingDescription");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f390();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAnalyzerParameterSet");
  }
  FUN_0119f480();
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f560();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzerEngine");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f650();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription");
  }
  puVar4 = unaff_RDI + 0x12;
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f740();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceDescription",param_3,param_4,puVar4);
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0119f830();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURecordingAnalyzerReferenceTrackInfo");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae2f8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae2c0 = FUN_0079bbe0();
        _DAT_027ae2b8 = "_polyPitchCentMatrixForSum";
        _DAT_027ae2c8 = 0;
        _DAT_027ae2d0 = 0x5e00;
        _DAT_027ae2d8 = "float *";
        _DAT_027ae2e0 = 0;
        uRam00000000027ae2e8 = 0;
        _DAT_027ae2f0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae340 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae308 = FUN_0079bbe0();
        _DAT_027ae300 = "_polyPitchCentMatricesForRawTracks";
        _DAT_027ae310 = 0;
        _DAT_027ae318 = 0x5e00;
        _DAT_027ae320 = "float **";
        _DAT_027ae328 = 0;
        uRam00000000027ae330 = 0;
        _DAT_027ae338 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae388 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae350 = FUN_0079bbe0();
        _DAT_027ae348 = "_spectrogramAmpEnvelopesForRawTracks";
        _DAT_027ae358 = 0;
        _DAT_027ae360 = 0x5e00;
        _DAT_027ae368 = "float **";
        _DAT_027ae370 = 0;
        uRam00000000027ae378 = 0;
        _DAT_027ae380 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae3d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae398 = FUN_0079bbe0();
        _DAT_027ae390 = "_filteredSpectrogramAmpEnvelopesForRawTracks";
        _DAT_027ae3a0 = 0;
        _DAT_027ae3a8 = 0x5e00;
        _DAT_027ae3b0 = "float **";
        _DAT_027ae3b8 = 0;
        uRam00000000027ae3c0 = 0;
        _DAT_027ae3c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae418 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae3e0 = FUN_0079bbe0();
        _DAT_027ae3d8 = "_ampNormalizingReference";
        _DAT_027ae3e8 = 0;
        _DAT_027ae3f0 = 0x5e00;
        _DAT_027ae3f8 = "float *";
        _DAT_027ae400 = 0;
        uRam00000000027ae408 = 0;
        _DAT_027ae410 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae460 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae428 = FUN_0079bbe0();
        _DAT_027ae420 = "_averageAmpNormalizingReference";
        _DAT_027ae430 = 0;
        _DAT_027ae438 = 0x6600;
        _DAT_027ae440 = "float";
        _DAT_027ae448 = 0;
        uRam00000000027ae450 = 0;
        _DAT_027ae458 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae4a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae470 = FUN_0079bbe0();
        _DAT_027ae468 = "_polyPitchCentMatrixForDisplay";
        _DAT_027ae478 = 0;
        _DAT_027ae480 = 0x5e00;
        _DAT_027ae488 = "float *";
        _DAT_027ae490 = 0;
        uRam00000000027ae498 = 0;
        _DAT_027ae4a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1b) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae4f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae4b8 = FUN_0079bbe0();
        _DAT_027ae4b0 = "_previousRenderedBackgroundDisplayType";
        _DAT_027ae4c0 = 0;
        _DAT_027ae4c8 = 0x6900;
        _DAT_027ae4d0 = "GNInt";
        _DAT_027ae4d8 = 0;
        uRam00000000027ae4e0 = 0;
        _DAT_027ae4e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xdc) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae538 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae500 = FUN_0079bbe0();
        _DAT_027ae4f8 = "_previousRenderedBackgroundAudioSourceIndex";
        _DAT_027ae508 = 0;
        _DAT_027ae510 = 0x6900;
        _DAT_027ae518 = "GNInt";
        _DAT_027ae520 = 0;
        uRam00000000027ae528 = 0;
        _DAT_027ae530 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae580 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae548 = FUN_0079bbe0();
        _DAT_027ae540 = "_previousOtherAudioSourceIndex";
        _DAT_027ae550 = 0;
        _DAT_027ae558 = 0x6900;
        _DAT_027ae560 = "GNInt";
        _DAT_027ae568 = 0;
        uRam00000000027ae570 = 0;
        _DAT_027ae578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xe4) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae5c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae590 = FUN_0079bbe0();
        _DAT_027ae588 = "_previousTestValue1";
        _DAT_027ae598 = 0;
        _DAT_027ae5a0 = 0x6600;
        _DAT_027ae5a8 = "float";
        _DAT_027ae5b0 = 0;
        uRam00000000027ae5b8 = 0;
        _DAT_027ae5c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1d) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae610 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae5d8 = FUN_0079bbe0();
        _DAT_027ae5d0 = "_previousTestValue2";
        _DAT_027ae5e0 = 0;
        _DAT_027ae5e8 = 0x6600;
        _DAT_027ae5f0 = "float";
        _DAT_027ae5f8 = 0;
        uRam00000000027ae600 = 0;
        _DAT_027ae608 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xec) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae658 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae620 = FUN_0079bbe0();
        _DAT_027ae618 = "_previousTestValue3";
        _DAT_027ae628 = 0;
        _DAT_027ae630 = 0x6600;
        _DAT_027ae638 = "float";
        _DAT_027ae640 = 0;
        uRam00000000027ae648 = 0;
        _DAT_027ae650 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1e) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae6a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae668 = FUN_0079bbe0();
        _DAT_027ae660 = "_previousTestValue4";
        _DAT_027ae670 = 0;
        _DAT_027ae678 = 0x6600;
        _DAT_027ae680 = "float";
        _DAT_027ae688 = 0;
        uRam00000000027ae690 = 0;
        _DAT_027ae698 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xf4) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae6e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae6b0 = FUN_0079bbe0();
        _DAT_027ae6a8 = "_stereoMixMode";
        _DAT_027ae6b8 = 0;
        _DAT_027ae6c0 = 0x6200;
        _DAT_027ae6c8 = "bool";
        _DAT_027ae6d0 = 0;
        uRam00000000027ae6d8 = 0;
        _DAT_027ae6e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xf5) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae6f8 = FUN_0079bbe0();
        _DAT_027ae6f0 = "_testFlag1";
        _DAT_027ae700 = 0;
        _DAT_027ae708 = 0x6200;
        _DAT_027ae710 = "bool";
        _DAT_027ae718 = 0;
        uRam00000000027ae720 = 0;
        _DAT_027ae728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae778 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae740 = FUN_0079bbe0();
        _DAT_027ae738 = "_duration";
        _DAT_027ae748 = 0;
        _DAT_027ae750 = 0x6400;
        _DAT_027ae758 = "double";
        _DAT_027ae760 = 0;
        uRam00000000027ae768 = 0;
        _DAT_027ae770 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x20) = 0;
  lVar2 = FUN_0079bbe0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ae7c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ae788 = FUN_0079bbe0();
        _DAT_027ae780 = "_timeSliceCount";
        _DAT_027ae790 = 0;
        _DAT_027ae798 = 0x6900;
        _DAT_027ae7a0 = "GNInt";
        _DAT_027ae7a8 = 0;
        uRam00000000027ae7b0 = 0;
        _DAT_027ae7b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


