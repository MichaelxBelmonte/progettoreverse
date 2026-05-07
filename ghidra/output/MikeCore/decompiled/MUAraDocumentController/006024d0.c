// Function: FUN_006024d0
// Address: 006024d0
// Size: 10476 bytes
// Class: MUAraDocumentController
// String references:
//   "bool"
//   "GNFilePath"
//   "MDNotificationObserver"
//   "GNList"
//   "_processor"
//   "SInt64"
//   "MUAraDocumentController"
//   "_isPlaybackRenderer"
//   "_isEditorRenderer"
//   "_isEditorView"
//   "MUAraAudioPlaybackRegion"
//   "MUTimeProgressor"
//   "float"
//   "SInt32"
//   "MDMetaWindowController"
//   "MUTrack"
//   "MDDocumentController"
//   "GNHeartbeatHandler"
//   "MUPerformanceRenderer"
//   "MDPluginDocument"
//   ... +48 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006024d0(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  unaff_RDI[0x12] = &DAT_024c8618;
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
  unaff_RDI[0x13] = &DAT_02506130;
  if (DAT_02723560 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02723548 = "MUAraPlugInWrapperDelegate";
      DAT_02723558 = 0;
      _DAT_02723550 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02501518;
  pcVar3 = &DAT_02501b50;
  unaff_RDI[0x12] = &DAT_02501b50;
  unaff_RDI[0x13] = &DAT_02501b80;
  *(undefined1 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027235a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723570 = FUN_0053c180();
        pcVar3 = "_cacheWarmUpDoWarmUp";
        _DAT_02723568 = "_cacheWarmUpDoWarmUp";
        _DAT_02723578 = 0;
        _DAT_02723580 = 0x6200;
        _DAT_02723588 = "bool";
        _DAT_02723590 = 0;
        uRam0000000002723598 = 0;
        _DAT_027235a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027235f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027235b8 = FUN_0053c180();
        pcVar3 = "_cacheWarmUpLastStartTime";
        _DAT_027235b0 = "_cacheWarmUpLastStartTime";
        _DAT_027235c0 = 0;
        _DAT_027235c8 = 0x6400;
        _DAT_027235d0 = "double";
        _DAT_027235d8 = 0;
        uRam00000000027235e0 = 0;
        _DAT_027235e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723638 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723600 = FUN_0053c180();
        pcVar3 = "_hostPlaybackParamsLastStartTime";
        _DAT_027235f8 = "_hostPlaybackParamsLastStartTime";
        _DAT_02723608 = 0;
        _DAT_02723610 = 0x6400;
        _DAT_02723618 = "double";
        _DAT_02723620 = 0;
        uRam0000000002723628 = 0;
        _DAT_02723630 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackPreloadRange");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027236c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723690 = FUN_0053c180();
        pcVar3 = "_cacheWarmUpLastCursorTime";
        _DAT_02723688 = "_cacheWarmUpLastCursorTime";
        _DAT_02723698 = 0;
        _DAT_027236a0 = 0x6400;
        _DAT_027236a8 = "double";
        _DAT_027236b0 = 0;
        uRam00000000027236b8 = 0;
        _DAT_027236c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackPreloadRange");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723758 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723720 = FUN_0053c180();
        pcVar3 = "_cacheWarmUpLastLeftCycleQuarter";
        _DAT_02723718 = "_cacheWarmUpLastLeftCycleQuarter";
        _DAT_02723728 = 0;
        _DAT_02723730 = 0x6400;
        _DAT_02723738 = "double";
        _DAT_02723740 = 0;
        uRam0000000002723748 = 0;
        _DAT_02723750 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackPreloadRange");
  }
  unaff_RDI[0x1c] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrackPreloadRange");
  }
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605d50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformanceRenderer");
  }
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605e40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeProgressor");
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027238c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723888 = FUN_0053c180();
        pcVar3 = "_expectedNextAraHostSampleIndex";
        _DAT_02723880 = "_expectedNextAraHostSampleIndex";
        _DAT_02723890 = 0;
        _DAT_02723898 = 0x6c00;
        _DAT_027238a0 = "SInt64";
        _DAT_027238a8 = 0;
        uRam00000000027238b0 = 0;
        _DAT_027238b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x20] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00605f30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioRingBuffer");
  }
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentController");
  }
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606110();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginDocument");
  }
  _memcpy(pcVar3,section_00000108.segname + 8,param_3);
  *(undefined4 *)(unaff_RDI + 0x47) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027239e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027239a8 = FUN_0053c180();
        _DAT_027239a0 = "_replaceBufferSize";
        _DAT_027239b0 = 0;
        _DAT_027239b8 = 0x6900;
        _DAT_027239c0 = "GNInt";
        _DAT_027239c8 = 0;
        uRam00000000027239d0 = 0;
        _DAT_027239d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x48] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723a28 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027239f0 = FUN_0053c180();
        _DAT_027239e8 = "_renderStateTime";
        _DAT_027239f8 = 0;
        _DAT_02723a00 = 0x6400;
        _DAT_02723a08 = "double";
        _DAT_02723a10 = 0;
        uRam0000000002723a18 = 0;
        _DAT_02723a20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x49) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723a70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723a38 = FUN_0053c180();
        _DAT_02723a30 = "_renderStateHostIsPlaying";
        _DAT_02723a40 = 0;
        _DAT_02723a48 = 0x6200;
        _DAT_02723a50 = "bool";
        _DAT_02723a58 = 0;
        uRam0000000002723a60 = 0;
        _DAT_02723a68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x249) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723ab8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723a80 = FUN_0053c180();
        _DAT_02723a78 = "_renderStateRenderingEnabled";
        _DAT_02723a88 = 0;
        _DAT_02723a90 = 0x6200;
        _DAT_02723a98 = "bool";
        _DAT_02723aa0 = 0;
        uRam0000000002723aa8 = 0;
        _DAT_02723ab0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x24a) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723b00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723ac8 = FUN_0053c180();
        _DAT_02723ac0 = "_shouldTransferContextReset";
        _DAT_02723ad0 = 0;
        _DAT_02723ad8 = 0x6200;
        _DAT_02723ae0 = "bool";
        _DAT_02723ae8 = 0;
        uRam0000000002723af0 = 0;
        _DAT_02723af8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x24b) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723b48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723b10 = FUN_0053c180();
        _DAT_02723b08 = "_shouldTransferContextEnabled";
        _DAT_02723b18 = 0;
        _DAT_02723b20 = 0x6200;
        _DAT_02723b28 = "bool";
        _DAT_02723b30 = 0;
        uRam0000000002723b38 = 0;
        _DAT_02723b40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x24c) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723b90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723b58 = FUN_0053c180();
        _DAT_02723b50 = "_lastTransferContextEnabled";
        _DAT_02723b60 = 0;
        _DAT_02723b68 = 0x6200;
        _DAT_02723b70 = "bool";
        _DAT_02723b78 = 0;
        uRam0000000002723b80 = 0;
        _DAT_02723b88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x24d) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723bd8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723ba0 = FUN_0053c180();
        _DAT_02723b98 = "_hostPlaybackParamsCycleActive";
        _DAT_02723ba8 = 0;
        _DAT_02723bb0 = 0x6200;
        _DAT_02723bb8 = "bool";
        _DAT_02723bc0 = 0;
        uRam0000000002723bc8 = 0;
        _DAT_02723bd0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x24e) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723c20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723be8 = FUN_0053c180();
        _DAT_02723be0 = "_isAAX";
        _DAT_02723bf0 = 0;
        _DAT_02723bf8 = 0x6200;
        _DAT_02723c00 = "bool";
        _DAT_02723c08 = 0;
        uRam0000000002723c10 = 0;
        _DAT_02723c18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x24f) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723c68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723c30 = FUN_0053c180();
        _DAT_02723c28 = "_hostPlaybackParamsCycleTimeValid";
        _DAT_02723c38 = 0;
        _DAT_02723c40 = 0x6200;
        _DAT_02723c48 = "bool";
        _DAT_02723c50 = 0;
        uRam0000000002723c58 = 0;
        _DAT_02723c60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4a] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723cb0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723c78 = FUN_0053c180();
        _DAT_02723c70 = "_hostPlaybackParamsCycleStartQuarter";
        _DAT_02723c80 = 0;
        _DAT_02723c88 = 0x6400;
        _DAT_02723c90 = "double";
        _DAT_02723c98 = 0;
        uRam0000000002723ca0 = 0;
        _DAT_02723ca8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4b] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723cf8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723cc0 = FUN_0053c180();
        _DAT_02723cb8 = "_hostPlaybackParamsCycleEndQuarter";
        _DAT_02723cc8 = 0;
        _DAT_02723cd0 = 0x6400;
        _DAT_02723cd8 = "double";
        _DAT_02723ce0 = 0;
        uRam0000000002723ce8 = 0;
        _DAT_02723cf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4c] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723d40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723d08 = FUN_0053c180();
        _DAT_02723d00 = "_hostPlaybackParamsCursorTime";
        _DAT_02723d10 = 0;
        _DAT_02723d18 = 0x6400;
        _DAT_02723d20 = "double";
        _DAT_02723d28 = 0;
        uRam0000000002723d30 = 0;
        _DAT_02723d38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4d] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723d88 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723d50 = FUN_0053c180();
        _DAT_02723d48 = "_hostPlaybackParamsTempo";
        _DAT_02723d58 = 0;
        _DAT_02723d60 = 0x6400;
        _DAT_02723d68 = "double";
        _DAT_02723d70 = 0;
        uRam0000000002723d78 = 0;
        _DAT_02723d80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4e] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723dd0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723d98 = FUN_0053c180();
        _DAT_02723d90 = "_hostPlaybackParamsRenderSampleIndex";
        _DAT_02723da0 = 0;
        _DAT_02723da8 = 0x6c00;
        _DAT_02723db0 = "SInt64";
        _DAT_02723db8 = 0;
        uRam0000000002723dc0 = 0;
        _DAT_02723dc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4f] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606200();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformanceRenderer");
  }
  unaff_RDI[0x50] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006062f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScrubbingTimeProgressor");
  }
  unaff_RDI[0x51] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006063e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPlaybackRequest");
  }
  *(undefined4 *)(unaff_RDI + 0x52) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723ef0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723eb8 = FUN_0053c180();
        _DAT_02723eb0 = "_localPlaybackVolume";
        _DAT_02723ec0 = 0;
        _DAT_02723ec8 = 0x6600;
        _DAT_02723ed0 = "float";
        _DAT_02723ed8 = 0;
        uRam0000000002723ee0 = 0;
        _DAT_02723ee8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x53] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006064d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeJump");
  }
  *(undefined1 *)(unaff_RDI + 0x54) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02723f80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02723f48 = FUN_0053c180();
        _DAT_02723f40 = "_hostCycleChanged";
        _DAT_02723f50 = 0;
        _DAT_02723f58 = 0x6200;
        _DAT_02723f60 = "bool";
        _DAT_02723f68 = 0;
        uRam0000000002723f70 = 0;
        _DAT_02723f78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x55] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006065c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderSliceTimeContext");
  }
  unaff_RDI[0x56] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006066b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderSliceTimeContext");
  }
  FUN_006067a0();
  *(undefined4 *)(unaff_RDI + 0x58) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027240a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724068 = FUN_0053c180();
        _DAT_02724060 = "_outOfSyncSamples";
        _DAT_02724070 = 0;
        _DAT_02724078 = 0x6900;
        _DAT_02724080 = "GNInt";
        _DAT_02724088 = 0;
        uRam0000000002724090 = 0;
        _DAT_02724098 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x59] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027240e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027240b0 = FUN_0053c180();
        _DAT_027240a8 = "_lastHostTempo";
        _DAT_027240b8 = 0;
        _DAT_027240c0 = 0x6400;
        _DAT_027240c8 = "double";
        _DAT_027240d0 = 0;
        uRam00000000027240d8 = 0;
        _DAT_027240e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x5a) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02724130 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027240f8 = FUN_0053c180();
        _DAT_027240f0 = "_tempoMapRecordingState";
        _DAT_02724100 = 0;
        _DAT_02724108 = 0x6200;
        _DAT_02724110 = "bool";
        _DAT_02724118 = 0;
        uRam0000000002724120 = 0;
        _DAT_02724128 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2d1) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02724178 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724140 = FUN_0053c180();
        _DAT_02724138 = "_doRegisterObserver";
        _DAT_02724148 = 0;
        _DAT_02724150 = 0x6200;
        _DAT_02724158 = "bool";
        _DAT_02724160 = 0;
        uRam0000000002724168 = 0;
        _DAT_02724170 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2d2) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027241c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724188 = FUN_0053c180();
        _DAT_02724180 = "_awaitsFirstTransfer";
        _DAT_02724190 = 0;
        _DAT_02724198 = 0x6200;
        _DAT_027241a0 = "bool";
        _DAT_027241a8 = 0;
        uRam00000000027241b0 = 0;
        _DAT_027241b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00606880();
  *(undefined4 *)(unaff_RDI + 0x5c) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02724250 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724218 = FUN_0053c180();
        _DAT_02724210 = "_renderLock";
        _DAT_02724220 = 0;
        _DAT_02724228 = 0x6900;
        _DAT_02724230 = "SInt32";
        _DAT_02724238 = 0;
        uRam0000000002724240 = 0;
        _DAT_02724248 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2e4) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02724298 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724260 = FUN_0053c180();
        _DAT_02724258 = "_callSimulateProcessSamples";
        _DAT_02724268 = 0;
        _DAT_02724270 = 0x6200;
        _DAT_02724278 = "bool";
        _DAT_02724280 = 0;
        uRam0000000002724288 = 0;
        _DAT_02724290 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2e5) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027242e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027242a8 = FUN_0053c180();
        _DAT_027242a0 = "_realtimeStretchingEnabled";
        _DAT_027242b0 = 0;
        _DAT_027242b8 = 0x6200;
        _DAT_027242c0 = "bool";
        _DAT_027242c8 = 0;
        uRam00000000027242d0 = 0;
        _DAT_027242d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2e6) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02724328 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027242f0 = FUN_0053c180();
        _DAT_027242e8 = "_enquededAuxiliaryRenderersPending";
        _DAT_027242f8 = 0;
        _DAT_02724300 = 0x6200;
        _DAT_02724308 = "bool";
        _DAT_02724310 = 0;
        uRam0000000002724318 = 0;
        _DAT_02724320 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x5d] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606960();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  unaff_RDI[0x5e] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606a50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNConcurrentQueue");
  }
  unaff_RDI[0x5f] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606b40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNConcurrentQueue");
  }
  unaff_RDI[0x60] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606c30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_processor";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMetaWindowController");
  }
  unaff_RDI[0x61] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606d20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraDocumentController");
  }
  unaff_RDI[0x62] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606e10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraAudioPlaybackRegion");
  }
  unaff_RDI[99] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606f00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraAudioPlaybackRegion");
  }
  unaff_RDI[100] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00606ff0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  unaff_RDI[0x65] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006070e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  unaff_RDI[0x66] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006071d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  unaff_RDI[0x67] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006072c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  unaff_RDI[0x68] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006073b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNList");
  }
  unaff_RDI[0x69] = 0;
  unaff_RDI[0x6a] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027246d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724698 = FUN_0053c180();
        _DAT_02724690 = "_hostSelectedVisibleRange";
        _DAT_027246a0 = 0;
        _DAT_027246a8 = 0;
        _DAT_027246b0 = "GNDoubleRange";
        _DAT_027246b8 = 0;
        uRam00000000027246c0 = 0;
        _DAT_027246c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x6b) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02724718 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027246e0 = FUN_0053c180();
        _DAT_027246d8 = "_isPlaybackRenderer";
        _DAT_027246e8 = 0;
        _DAT_027246f0 = 0x6200;
        _DAT_027246f8 = "bool";
        _DAT_02724700 = 0;
        uRam0000000002724708 = 0;
        _DAT_02724710 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x359) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02724760 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724728 = FUN_0053c180();
        _DAT_02724720 = "_isEditorRenderer";
        _DAT_02724730 = 0;
        _DAT_02724738 = 0x6200;
        _DAT_02724740 = "bool";
        _DAT_02724748 = 0;
        uRam0000000002724750 = 0;
        _DAT_02724758 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x35a) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027247a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724770 = FUN_0053c180();
        _DAT_02724768 = "_isEditorView";
        _DAT_02724778 = 0;
        _DAT_02724780 = 0x6200;
        _DAT_02724788 = "bool";
        _DAT_02724790 = 0;
        uRam0000000002724798 = 0;
        _DAT_027247a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x6c] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_006074a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDAraPluginDocument");
  }
  unaff_RDI[0x6d] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  *(undefined1 *)(unaff_RDI + 0x6e) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02724880 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724848 = FUN_0053c180();
        _DAT_02724840 = "_doUpdateCycle";
        _DAT_02724850 = 0;
        _DAT_02724858 = 0x6200;
        _DAT_02724860 = "bool";
        _DAT_02724868 = 0;
        uRam0000000002724870 = 0;
        _DAT_02724878 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x371) = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027248c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02724890 = FUN_0053c180();
        _DAT_02724888 = "__isRecording";
        _DAT_02724898 = 0;
        _DAT_027248a0 = 0x6200;
        _DAT_027248a8 = "bool";
        _DAT_027248b0 = 0;
        uRam00000000027248b8 = 0;
        _DAT_027248c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x6f] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x70] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x71] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x72] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x73] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607a40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x74] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607b30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x75] = 0;
  lVar2 = FUN_0053c180();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00607c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  return;
}


