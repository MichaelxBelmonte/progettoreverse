// Reconstructed implementation of MUAraDocumentController
// From MikeCore binary — reverse-engineered pseudocode

#include "MUAraDocumentController.h"

// ============================================================
// @006024d0 — 10476 bytes
// str: ""bool""
// str: ""GNFilePath""
// str: ""MDNotificationObserver""
// str: ""GNList""
// str: ""_processor""
// ============================================================

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




// ============================================================
// @016a1890 — 2625 bytes
// str: ""MUAraDocumentController""
// str: ""GNOperationProgressObserver""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016a1890(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  unaff_RDI[2] = &DAT_024c15b0;
  if (DAT_0278c930 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ceef0 = "GNOperationProgressObserver";
      DAT_026cef00 = 0;
      _DAT_026ceef8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_025f89b0;
  unaff_RDI[2] = &DAT_025f8d70;
  FUN_016a2460();
  FUN_016a2790();
  unaff_RDI[5] = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a2ac0();
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a2c50();
    FUN_00e87980();
  }
  FUN_016a2de0();
  FUN_016a3110();
  FUN_016a3440();
  FUN_016a3770();
  FUN_016a3aa0();
  FUN_016a3dd0();
  FUN_016a4100();
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4430();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x71) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a45c0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x72) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4750();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x73) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a48e0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x74) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4a70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x75) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4c00();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x76) = 0;
  if (DAT_027cb3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027cb300 = FUN_00d4fe50();
      _DAT_027cb2e8 = "MUAraDocumentController";
      _DAT_027cb2f0 = 0x80;
      _DAT_027cb2f8 = FUN_016be860;
      _DAT_027cb308 = 0;
      uRam00000000027cb310 = 0;
      _DAT_027cb318 = 0;
      _DAT_027cb390 = 0;
      uRam00000000027cb398 = 0;
      _DAT_027cb3a0 = 0;
      DAT_027cb3a2 = 1;
      _DAT_027cb320 = 0;
      uRam00000000027cb328 = 0;
      _DAT_027cb330 = 0;
      uRam00000000027cb338 = 0;
      _DAT_027cb340 = 0;
      uRam00000000027cb348 = 0;
      _DAT_027cb350 = 0;
      uRam00000000027cb358 = 0;
      _DAT_027cb360 = 0;
      uRam00000000027cb368 = 0;
      _DAT_027cb370 = 0;
      uRam00000000027cb378 = 0;
      _DAT_027cb380 = 0;
      uRam00000000027cb388 = 0;
      DAT_027cb3ab = 0;
      _DAT_027cb3a3 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027cb3a3 == '\0') {
    FUN_016a4d90();
    FUN_00e87980();
  }
  FUN_016a4f20();
  return;
}




// ============================================================
// @016b08f0 — 1708 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->getDocumentRoot()->getAudioSources()->getCount() == 0""
// str: ""documentController->getDocumentRoot()->getAudioModifications()->getCount() == 0""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b0ebd) */
/* WARNING: Removing unreachable block (ram,0x016b0ec9) */

void FUN_016b08f0(undefined8 param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong in_stack_ffffffffffffffc0;
  char local_38 [16];
  char local_28 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    FUN_00d50b00();
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537d40();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537d40();
        FUN_00d23310();
        param_1 = CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537fd0();
      pVar4 = (pthread_key_t)param_1;
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537fd0();
        FUN_00d23310();
        pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_38[0]);
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_0167ab60();
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01537ab0();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(pVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ab0();
        FUN_00d23310();
        pcVar5 = local_28;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_28[0] = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_28[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_01689520();
      if (*(int *)(local_60 + 0xc) != 0) {
        FUN_01689520();
        FUN_00d23310();
        pcVar5 = &local_70;
        if (local_38[0] != '\0') {
          pcVar5 = local_38;
        }
        local_70 = local_38[0];
        *pcVar5 = '\0';
        if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_70 != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      lVar1 = DAT_027cb138;
      if (DAT_027cb138 != 0) {
        FUN_00d50b00();
      }
      local_90 = 0;
      local_88 = '\0';
      FUN_00d40470(&local_90,&stack0xffffffffffffff60,1,3);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (in_stack_ffffffffffffffc0 != 0)) {
        FUN_00d50b20();
      }
      local_38[0] = '\0';
      FUN_00d23f50();
      if ((local_38[0] != '\0') && (unaff_RDI != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50130();
    }
    FUN_00d50b20();
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b2af0 — 1369 bytes
// str: ""properties != NULL""
// str: ""properties->structSize >= ARA::kARAAudioSourcePropertiesMinSize""
// str: ""persistentID != NULL""
// str: ""gn_strlen(persistentID) > 0""
// str: ""sampleRate > 10.0""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b2d37) */
/* WARNING: Removing unreachable block (ram,0x016b2d44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016b2af0(undefined8 param_1)

{
  double dVar1;
  ulonglong uVar2;
  int iVar3;
  void *pvVar4;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar5;
  pthread_key_t pVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  ulonglong *unaff_RSI;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  if (unaff_RSI == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties != NULL";
LAB_016b2be8:
                    /* WARNING: Could not recover jumptable at 0x016b2bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar8);
    return;
  }
  if (*unaff_RSI < 0x30) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar8 = "properties->structSize >= ARA::kARAAudioSourcePropertiesMinSize";
    goto LAB_016b2be8;
  }
  uVar2 = unaff_RSI[1];
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  pVar6 = (pthread_key_t)param_1;
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar2 == 0) {
    local_38 = '\0';
    local_40 = 0;
LAB_016b2c08:
    local_50 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_016b2c08;
      FUN_00d50b00();
      local_50 = local_40;
    }
    else {
      local_50 = local_40;
      local_38 = '\0';
    }
  }
  uVar9 = FUN_01667bd0();
  if (local_50 != 0) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  uVar2 = unaff_RSI[2];
  if (((uVar2 == 0) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)(uVar9,"persistentID != NULL");
  }
  iVar3 = FUN_00e7dde0();
  if (((iVar3 < 1) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)(extraout_XMM0_Qa,"gn_strlen(persistentID) > 0");
  }
  if ((uVar2 == 0) || (iVar3 = FUN_00e7dde0(), iVar3 < 1)) {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01733bc0();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d91a70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01733bc0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  dVar1 = (double)unaff_RSI[4];
  if (((dVar1 <= _DAT_0241eeb8) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)(dVar1,"sampleRate > 10.0");
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01666d20(dVar1);
  if ((((longlong)unaff_RSI[3] < 2) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)(uVar9,"sampleCount > 1");
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01666df0();
  if ((((int)unaff_RSI[5] < 1) && (DAT_02802f60 != (longlong *)0x0)) &&
     ((code *)*DAT_02802f60 != (code *)0x0)) {
    uVar9 = (*(code *)*DAT_02802f60)(uVar9,"properties->channelCount > 0");
  }
  if (*unaff_RSI < 0x35) {
    pVar7 = 0;
    if (0x30 < *unaff_RSI) {
      if (DAT_02802f60 == (longlong *)0x0) {
        return;
      }
      if ((code *)*DAT_02802f60 == (code *)0x0) {
        return;
      }
      (*(code *)*DAT_02802f60)
                (0,
                 "!ARA_IMPLEMENTS_FIELD(properties, ARAAudioSourceProperties, channelArrangementDataType)"
                );
      return;
    }
    goto switchD_016b2f1a_caseD_0;
  }
  pVar7 = 0x16b3160;
  switch((int)unaff_RSI[6]) {
  case 0:
    goto switchD_016b2f1a_caseD_0;
  case 1:
    pVar7 = 0x16b3160;
    break;
  case 2:
    pVar7 = 0x16b3160;
    lVar5 = FUN_00bce6e0();
    if (lVar5 != 0) goto switchD_016b2f1a_caseD_0;
    break;
  case 3:
    pVar7 = 0x16b3160;
    break;
  default:
    pVar7 = pVar6;
    if ((DAT_02802f60 != (longlong *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar9,"false && \"channel layout information uses wrong Companion API\"");
    }
    goto switchD_016b2f1a_caseD_0;
  }
  FUN_00bce6e0();
switchD_016b2f1a_caseD_0:
  pvVar4 = _pthread_getspecific(pVar7);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016b29c0();
  FUN_01666ee0();
  return;
}




// ============================================================
// @016adf20 — 1340 bytes
// str: ""MUAraDocumentController""
// str: ""hostInstance != NULL""
// str: ""hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize""
// str: ""hostInstance->audioAccessControllerInterface != NULL""
// str: ""hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterface"
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_016adf20(void)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong *unaff_RDI;
  undefined4 uVar7;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar7 = FUN_00da7190();
  if (unaff_RDI == (ulonglong *)0x0) {
    if (DAT_02802f60 != (undefined8 *)0x0) {
      uVar6 = 0;
      if ((code *)*DAT_02802f60 != (code *)0x0) {
        (*(code *)*DAT_02802f60)(uVar7,"hostInstance != NULL");
        uVar6 = 0;
      }
      goto LAB_016ae19b;
    }
  }
  else if (*unaff_RDI < 0x58) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar7,"hostInstance->structSize >= ARA::kARADocumentControllerHostInstanceMinSize")
      ;
    }
  }
  else if ((ulonglong *)unaff_RDI[2] == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar7,"hostInstance->audioAccessControllerInterface != NULL");
    }
  }
  else if (*(ulonglong *)unaff_RDI[2] < 0x20) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)
                (uVar7,
                 "hostInstance->audioAccessControllerInterface->structSize >= ARA::kARAAudioAccessControllerInterfaceMinSize"
                );
    }
  }
  else if ((ulonglong *)unaff_RDI[4] == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar7,"hostInstance->archivingControllerInterface != NULL");
    }
  }
  else {
    iVar4 = 0;
    if (DAT_027cb0f0 != -1) {
      iVar4 = DAT_027cb0f0;
    }
    uVar1 = *(ulonglong *)unaff_RDI[4];
    if (iVar4 < 4) {
      if (0x2f < uVar1) goto LAB_016ae0c6;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA::kARAArchivingControllerInterfaceMinSize"
                  );
      }
    }
    else if (uVar1 < 0x38) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->archivingControllerInterface->structSize >= ARA_IMPLEMENTED_STRUCT_SIZE(ARAArchivingControllerInterface, getDocumentArchiveID)"
                  );
      }
    }
    else {
LAB_016ae0c6:
      if (((ulonglong *)unaff_RDI[6] == (ulonglong *)0x0) || (0x4f < *(ulonglong *)unaff_RDI[6])) {
        if (((ulonglong *)unaff_RDI[8] == (ulonglong *)0x0) || (0x1f < *(ulonglong *)unaff_RDI[8]))
        {
          if (iVar4 - 2U < 5) {
            if ((DAT_028ad840 == 0) || (DAT_028ad849 == '\0')) {
              FUN_00e8cb50();
              if (DAT_028ad840 == 0) {
                if ((DAT_027cb3b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
                  _DAT_027cb300 = FUN_00d4fe50();
                  _DAT_027cb2e8 = "MUAraDocumentController";
                  _DAT_027cb2f0 = 0x80;
                  _DAT_027cb2f8 = FUN_016be860;
                  _DAT_027cb308 = 0;
                  uRam00000000027cb310 = 0;
                  _DAT_027cb318 = 0;
                  _DAT_027cb390 = 0;
                  uRam00000000027cb398 = 0;
                  _DAT_027cb3a0 = 0;
                  DAT_027cb3a2 = 1;
                  _DAT_027cb320 = 0;
                  uRam00000000027cb328 = 0;
                  _DAT_027cb330 = 0;
                  uRam00000000027cb338 = 0;
                  _DAT_027cb340 = 0;
                  uRam00000000027cb348 = 0;
                  _DAT_027cb350 = 0;
                  uRam00000000027cb358 = 0;
                  _DAT_027cb360 = 0;
                  uRam00000000027cb368 = 0;
                  _DAT_027cb370 = 0;
                  uRam00000000027cb378 = 0;
                  _DAT_027cb380 = 0;
                  uRam00000000027cb388 = 0;
                  DAT_027cb3ab = 0;
                  _DAT_027cb3a3 = 0;
                  ___cxa_guard_release();
                }
                lVar5 = FUN_00e86210();
                lVar2 = DAT_028ad840;
                if (DAT_028ad840 != lVar5) {
                  if (lVar5 != 0) {
                    FUN_00d50b00();
                  }
                  DAT_028ad840 = lVar5;
                  if (lVar2 != 0) {
                    FUN_00d50b20();
                  }
                }
                if ((lVar5 != 0) && (DAT_028ad848 == '\0')) {
                  DAT_028ad848 = '\x01';
                  FUN_00e8cb90();
                }
                DAT_028ad849 = '\x01';
                FUN_00e8cb70();
              }
              else {
                DAT_028ad849 = '\x01';
                FUN_00e8cb70();
              }
            }
            FUN_00c811e0();
            plVar3 = local_40;
            if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar7 = (**(code **)(*plVar3 + 0x18))();
            FUN_0167a4d0(uVar7,&DAT_025f9ff0);
            FUN_0167b270();
            FUN_016b0100();
            FUN_0167b310();
            local_38 = '\0';
            local_40 = plVar3;
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d403d0();
            lVar2 = DAT_026fb7d8;
            if (DAT_026fb7d8 != 0) {
              FUN_00d50b00();
            }
            local_60 = plVar3;
            local_58 = '\0';
            local_50 = 0;
            local_48 = '\0';
            FUN_00d40470(&local_50,&local_60,1,3);
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar6 = FUN_0167aaf0();
            FUN_00d50b20();
            goto LAB_016ae19b;
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar1,
                     "hostInstance->modelUpdateControllerInterface->structSize >= ARA::kARAModelUpdateControllerInterfaceMinSize"
                    );
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)
                  (uVar1,
                   "hostInstance->contentAccessControllerInterface->structSize >= ARA::kARAContentAccessControllerInterfaceMinSize"
                  );
      }
    }
  }
  uVar6 = 0;
LAB_016ae19b:
  FUN_00da71b0();
  return uVar6;
}




// ============================================================
// @016af970 — 1313 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""!documentController->isHostEditingDocument()""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""audioSource->getDocumentController() == documentController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016afd8b) */
/* WARNING: Removing unreachable block (ram,0x016afd97) */
/* WARNING: Removing unreachable block (ram,0x016afd71) */
/* WARNING: Removing unreachable block (ram,0x016afd7d) */
/* WARNING: Removing unreachable block (ram,0x016afdbe) */
/* WARNING: Removing unreachable block (ram,0x016afdc7) */

undefined4 FUN_016af970(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  undefined8 *puVar6;
  char *pcVar7;
  longlong unaff_RDI;
  longlong local_b0;
  char local_a8;
  int local_60;
  undefined4 uStack_5c;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  puVar6 = param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        uVar2 = 0;
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        FUN_01689520();
        pVar5 = (pthread_key_t)puVar6;
        if (*(int *)(CONCAT44(uStack_5c,local_60) + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar5 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar6 >> 8),local_48[0]);
          pcVar7 = local_38;
          if (local_48[0] != '\0') {
            pcVar7 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar7 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
          FUN_00d50b20();
        }
        if ((param_2 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == unaff_RDI) {
            DAT_02802f48 = DAT_02802f48 + 1;
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_016670b0();
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124df10();
            if (local_48[0] == '\0') {
              if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            if ((local_58 != '\0') && (CONCAT44(uStack_5c,local_60) != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar5);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01733b90();
            if (((local_48[0] == '\0') && (local_50 != 0)) &&
               ((FUN_00d50b00(), local_48[0] != '\0' && (local_50 != 0)))) {
              FUN_00d50b20();
            }
            FUN_012e16c0();
            if (local_48[0] == '\0') {
              if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_48[0] = '\0';
            }
            uVar2 = FUN_01684310();
            lVar4 = FUN_000030c0();
            *param_1 = *(undefined8 *)(lVar4 + (longlong)local_60 * 8);
            *param_3 = 0;
            DAT_02802f48 = DAT_02802f48 + -1;
            if (local_50 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
          else {
            uVar2 = 0;
            if ((DAT_02802f60 != (undefined8 *)0x0) &&
               (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
          uVar2 = 0;
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ============================================================
// @016b4010 — 1064 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioSource->getDocumentController() == documentController""
// ============================================================

void FUN_016b4010(pthread_key_t param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60 [16];
  int local_50;
  undefined8 local_4c;
  char local_38 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_88 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_60[0]);
          pcVar4 = local_38;
          if (local_60[0] != '\0') {
            pcVar4 = local_60;
          }
          local_38[0] = local_60[0];
          *pcVar4 = '\0';
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_60[0] != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 == unaff_RDI) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar2 = FUN_016670a0();
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01667050();
            if ((param_2 == 0 & (bVar2 ^ 1)) == 0) {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016678c0();
              if (local_60[0] == '\0') {
                if (local_68 == 0) goto LAB_016b41a8;
                FUN_00d50b00();
                if ((local_60[0] != '\0') && (local_68 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_68 == 0) goto LAB_016b41a8;
              local_60[0] = '\0';
              local_4c = 0;
              iVar5 = 0;
              do {
                local_50 = iVar5;
                if (*(int *)(local_68 + 0xc) <= iVar5) {
                  FUN_0049cc10();
                  FUN_00d50b20();
                  goto LAB_016b41a8;
                }
                pvVar3 = _pthread_getspecific(param_1);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar1 = FUN_01650890();
                iVar5 = iVar5 + 1;
              } while (cVar1 != '\0');
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              FUN_0049cc10();
              FUN_00d50b20();
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
LAB_016b41a8:
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b4550 — 1004 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioSource->getDocumentController() == documentController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b47db) */
/* WARNING: Removing unreachable block (ram,0x016b47e4) */

void FUN_016b4550(pthread_key_t param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660c60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016678c0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537ea0();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          FUN_0168a050();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b24e0 — 943 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""musicalContext->getDocumentController() == documentController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b2736) */
/* WARNING: Removing unreachable block (ram,0x016b273f) */

void FUN_016b24e0(pthread_key_t param_1)

{
  int iVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_01713980(), cVar2 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_00d50b00();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f550();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01713cc0();
        iVar1 = *(int *)(local_48 + 0xc);
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
        if (iVar1 == 0) {
          FUN_0167ab60();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01537c10();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00d50130();
          cVar2 = FUN_0167b260();
          if (cVar2 == '\0') {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else {
            FUN_01689520();
            if (*(int *)(local_78 + 0xc) != 0) {
              FUN_01689520();
              FUN_00d23310();
              pcVar4 = local_30;
              if (local_40[0] != '\0') {
                pcVar4 = local_40;
              }
              local_30[0] = local_40[0];
              *pcVar4 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              if ((local_30[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
      FUN_00d50b20();
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b1510 — 913 bytes
// str: ""properties != NULL""
// str: ""properties->structSize >= ARA::kARAMusicalContextPropertiesMinSize""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b183b) */
/* WARNING: Removing unreachable block (ram,0x016b1674) */
/* WARNING: Removing unreachable block (ram,0x016b167d) */
/* WARNING: Removing unreachable block (ram,0x016b1844) */

void FUN_016b1510(pthread_key_t param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  ulonglong *unaff_RSI;
  longlong local_38;
  char local_30;
  
  if (unaff_RSI == (ulonglong *)0x0) {
    if ((DAT_02802f60 != (longlong *)0x0) &&
       (UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      pcVar4 = "properties != NULL";
LAB_016b1613:
                    /* WARNING: Could not recover jumptable at 0x016b161f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
      return;
    }
  }
  else if (*unaff_RSI < 8) {
    if ((DAT_02802f60 != (longlong *)0x0) &&
       (UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
      pcVar4 = "properties->structSize >= ARA::kARAMusicalContextPropertiesMinSize";
      goto LAB_016b1613;
    }
  }
  else {
    if ((*unaff_RSI == 8) || (unaff_RSI[1] == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f5a0();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d93290();
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_0170f5a0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((*unaff_RSI < 9) || (unaff_RSI[1] == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f690();
      uVar1 = *unaff_RSI;
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f690();
      uVar1 = *unaff_RSI;
    }
    if ((uVar1 < 0x15) || (*(longlong *)((longlong)unaff_RSI + 0x14) == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0170f710();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar2 = *(undefined4 **)((longlong)unaff_RSI + 0x14);
      FUN_01cfbee0(*puVar2,puVar2[1],puVar2[2]);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_0170f710();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @016b38f0 — 835 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioSource->getDocumentController() == documentController""
// ============================================================

void FUN_016b38f0(pthread_key_t param_1,undefined8 *param_2)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), uVar4 = extraout_XMM0_Qa, cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (extraout_XMM0_Qa_01,"documentController->isHostEditingDocument()");
        }
      }
      else {
        uVar4 = FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          uVar4 = FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar3 = local_38;
          if (local_48[0] != '\0') {
            pcVar3 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar3 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            uVar4 = (*(code *)*DAT_02802f60)
                              (uVar4,"documentController->getContentReaders()->getCount() == 0");
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            uVar4 = FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          uVar4 = FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), uVar4 = extraout_XMM0_Qa_02, cVar1 == '\0')
           ) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)(uVar4,"provided object ref is invalid");
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar4 = FUN_01660830();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            uVar4 = FUN_00d50b20();
          }
          if (local_50 == unaff_RDI) {
            if (param_2 == (undefined8 *)0x0) {
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar4 = FUN_01666eb0();
              FUN_01668800(0,uVar4);
            }
            else {
              pvVar2 = _pthread_getspecific(param_1);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01668800(*param_2,param_2[1]);
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)
                      (uVar4,"audioSource->getDocumentController() == documentController");
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b4a70 — 795 bytes
// str: ""properties != NULL""
// str: ""persistentID != NULL""
// str: ""gn_strlen(persistentID) > 0""
// str: ""properties->structSize >= ARA::kARAAudioModificationPropertiesMinSize""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b4cb8) */
/* WARNING: Removing unreachable block (ram,0x016b4cc5) */

void FUN_016b4a70(pthread_key_t param_1)

{
  ulonglong uVar1;
  int iVar2;
  void *pvVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  ulonglong *unaff_RSI;
  longlong local_50;
  longlong local_40;
  char local_38;
  
  if (unaff_RSI == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "properties != NULL";
LAB_016b4b68:
                    /* WARNING: Could not recover jumptable at 0x016b4b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar4);
    return;
  }
  if (*unaff_RSI < 0x18) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar4 = "properties->structSize >= ARA::kARAAudioModificationPropertiesMinSize";
    goto LAB_016b4b68;
  }
  uVar1 = unaff_RSI[1];
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  if (uVar1 == 0) {
    local_38 = '\0';
    local_40 = 0;
  }
  else {
    FUN_00d93290();
    if (local_38 != '\0') {
      local_50 = local_40;
      local_38 = '\0';
      goto LAB_016b4ba2;
    }
    if (local_40 != 0) {
      FUN_00d50b00();
      local_50 = local_40;
      goto LAB_016b4ba2;
    }
  }
  local_50 = 0;
LAB_016b4ba2:
  FUN_01650680();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  uVar1 = unaff_RSI[2];
  if (((uVar1 == 0) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)();
  }
  iVar2 = FUN_00e7dde0();
  if (((iVar2 < 1) && (DAT_02802f60 != (longlong *)0x0)) && ((code *)*DAT_02802f60 != (code *)0x0))
  {
    (*(code *)*DAT_02802f60)();
  }
  if ((uVar1 == 0) || (iVar2 = FUN_00e7dde0(), iVar2 < 1)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01733bc0();
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d91a70();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01733bc0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @016b19d0 — 740 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b1c03) */
/* WARNING: Removing unreachable block (ram,0x016b1c0c) */
/* WARNING: Removing unreachable block (ram,0x016b1c85) */
/* WARNING: Removing unreachable block (ram,0x016b1c8e) */

longlong * FUN_016b19d0(pthread_key_t param_1)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
          plVar2 = (longlong *)0x0;
        }
        goto LAB_016b1b79;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_90 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar4 = local_38;
          if (local_48[0] != '\0') {
            pcVar4 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        plVar2 = (longlong *)FUN_00e8fc40();
        FUN_00274a00();
        (**(code **)(*plVar2 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0170cec0();
        FUN_016b1510();
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537ae0();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_016b1b79;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b1b79;
      }
    }
  }
  plVar2 = (longlong *)0x0;
LAB_016b1b79:
  FUN_00da71b0();
  return plVar2;
}




// ============================================================
// @016b3170 — 740 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b33a3) */
/* WARNING: Removing unreachable block (ram,0x016b33ac) */
/* WARNING: Removing unreachable block (ram,0x016b3425) */
/* WARNING: Removing unreachable block (ram,0x016b342e) */

longlong * FUN_016b3170(pthread_key_t param_1)

{
  char cVar1;
  longlong *plVar2;
  void *pvVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
          plVar2 = (longlong *)0x0;
        }
        goto LAB_016b3319;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_90 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
          pcVar4 = local_38;
          if (local_48[0] != '\0') {
            pcVar4 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar4 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        plVar2 = (longlong *)FUN_00e8fc40();
        FUN_0049c930();
        (**(code **)(*plVar2 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016607b0();
        FUN_016b2af0();
        FUN_0167ab60();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01537d70();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        goto LAB_016b3319;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        plVar2 = (longlong *)0x0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016b3319;
      }
    }
  }
  plVar2 = (longlong *)0x0;
LAB_016b3319:
  FUN_00da71b0();
  return plVar2;
}




// ============================================================
// @016b2150 — 738 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""musicalContext->getDocumentController() == documentController""
// ============================================================

void FUN_016b2150(ulonglong param_1)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  uVar4 = param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        pVar3 = (pthread_key_t)uVar4;
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pVar3 = (pthread_key_t)CONCAT71((int7)(uVar4 >> 8),local_48[0]);
          pcVar5 = local_38;
          if (local_48[0] != '\0') {
            pcVar5 = local_48;
          }
          local_38[0] = local_48[0];
          *pcVar5 = '\0';
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_38[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_01713980(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0170f550();
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (local_50 == unaff_RDI) {
            if ((~(uint)param_1 & 0x1c) != 0) {
              pvVar2 = _pthread_getspecific(pVar3);
              if (pvVar2 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0170d420((param_1 & 0x10) == 0,(param_1 & 8) == 0,0);
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016a5910 — 691 bytes
// str: ""bool""
// str: ""MUAraMusicalContext""
// str: ""MUAraAudioSource""
// str: ""MUAraAudioModification""
// str: ""_isUnstable""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016a5910(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  *unaff_RDI = &DAT_025ee8e8;
  unaff_RDI[7] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5d30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraDocumentData");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5e20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContext");
  }
  unaff_RDI[9] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5f10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioSource");
  }
  puVar11 = unaff_RDI + 10;
  unaff_RDI[10] = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a6000();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioModification",param_3,param_4,puVar11);
  }
  FUN_016a60f0();
  FUN_016a61d0();
  FUN_016a62b0();
  FUN_016a6390();
  *(undefined1 *)(unaff_RDI + 0xf) = 0;
  lVar9 = FUN_015388a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca790 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca758 = FUN_015388a0();
        _DAT_027ca750 = "_isUnstable";
        _DAT_027ca760 = 0;
        _DAT_027ca768 = 0x6210;
        _DAT_027ca770 = "bool";
        _DAT_027ca778 = 0;
        uRam00000000027ca780 = 0;
        _DAT_027ca788 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @016b1e00 — 660 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""musicalContext->getDocumentController() == documentController""
// ============================================================

void FUN_016b1e00(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_01713980(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0170f550();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == unaff_RDI) {
            FUN_016b1510();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b35a0 — 660 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioSource->getDocumentController() == documentController""
// ============================================================

void FUN_016b35a0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        FUN_01689520();
        if (*(int *)(local_68 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          param_1 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660830();
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 == unaff_RDI) {
            FUN_016b2af0();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016b3ce0 — 646 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""audioSource->getDocumentController() == documentController""
// ============================================================

void FUN_016b3ce0(pthread_key_t param_1)

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [16];
  char local_38 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      FUN_01689520();
      if (*(int *)(local_70 + 0xc) != 0) {
        FUN_01689520();
        FUN_00d23310();
        param_1 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
        pcVar3 = local_38;
        if (local_48[0] != '\0') {
          pcVar3 = local_48;
        }
        local_38[0] = local_48[0];
        *pcVar3 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
        if ((local_38[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660830();
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == unaff_RDI) {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01660c60();
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016a5360 — 612 bytes
// str: ""bool""
// str: ""MUAraDocumentController""
// str: ""MUAraMusicalContextPersistentData""
// str: ""_archiveIsPotentiallyUnstable""
// str: ""_mustSyncPitchSystemsAfterImportingPreM41Archive""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016a5360(void)

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
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  char *pcVar10;
  
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
  *unaff_RDI = &DAT_025f7f28;
  unaff_RDI[7] = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5650();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraDocumentController");
  }
  unaff_RDI[8] = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_016a5740();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraMusicalContextPersistentData");
  }
  FUN_016a5830();
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca4c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca488 = FUN_016be450();
        _DAT_027ca480 = "_archiveIsPotentiallyUnstable";
        _DAT_027ca490 = 0;
        _DAT_027ca498 = 0x6210;
        _DAT_027ca4a0 = "bool";
        _DAT_027ca4a8 = 0;
        uRam00000000027ca4b0 = 0;
        _DAT_027ca4b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x51) = 0;
  lVar9 = FUN_016be450();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027ca508 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027ca4d0 = FUN_016be450();
        _DAT_027ca4c8 = "_mustSyncPitchSystemsAfterImportingPreM41Archive";
        _DAT_027ca4d8 = 0;
        _DAT_027ca4e0 = 0x6211;
        _DAT_027ca4e8 = "bool";
        _DAT_027ca4f0 = 0;
        uRam00000000027ca4f8 = 0;
        _DAT_027ca500 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @016b0100 — 589 bytes
// str: ""properties != NULL""
// str: ""properties->structSize >= ARA::kARADocumentPropertiesMinSize""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016b0151) */
/* WARNING: Removing unreachable block (ram,0x016b015a) */
/* WARNING: Removing unreachable block (ram,0x016b02d6) */
/* WARNING: Removing unreachable block (ram,0x016b02df) */

void FUN_016b0100(pthread_key_t param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  int iVar6;
  ulonglong *unaff_RSI;
  longlong local_60;
  char local_58;
  longlong local_38;
  
  lVar2 = local_60;
  if (unaff_RSI == (ulonglong *)0x0) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar5 = "properties != NULL";
LAB_016b0211:
                    /* WARNING: Could not recover jumptable at 0x016b021d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,pcVar5);
    return;
  }
  if (*unaff_RSI < 0x10) {
    if (DAT_02802f60 == (longlong *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = (code *)*DAT_02802f60;
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      return;
    }
    pcVar5 = "properties->structSize >= ARA::kARADocumentPropertiesMinSize";
    goto LAB_016b0211;
  }
  FUN_0167ab60();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  uVar1 = unaff_RSI[1];
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
    if (uVar1 == 0) goto LAB_016b01a3;
LAB_016b022b:
    FUN_00d93290();
    if (local_58 == '\0') {
      if (local_60 == 0) goto LAB_016b01b3;
      FUN_00d50b00();
      local_38 = local_60;
    }
    else {
      local_38 = local_60;
      local_58 = '\0';
    }
  }
  else {
    if (uVar1 != 0) goto LAB_016b022b;
LAB_016b01a3:
    local_58 = '\0';
    local_60 = 0;
LAB_016b01b3:
    local_38 = 0;
  }
  FUN_01538290();
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01689950();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_016b0333;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_016b0333;
  for (iVar6 = 0; iVar6 < *(int *)(local_60 + 0xc); iVar6 = iVar6 + 1) {
    FUN_01693550();
  }
  FUN_016be7c0();
  FUN_00d50b20();
LAB_016b0333:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @016aeee0 — 560 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016af059) */
/* WARNING: Removing unreachable block (ram,0x016af062) */

undefined1 FUN_016aeee0(void)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af0a5;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_78 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_016841e0();
        if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar2 = FUN_0167bc80(0);
        FUN_0167b310();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        goto LAB_016af0a5;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af0a5;
      }
    }
  }
  uVar2 = 0;
LAB_016af0a5:
  FUN_00da71b0();
  return uVar2;
}




// ============================================================
// @016af570 — 558 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""!documentController->isHostEditingDocument()""
// str: ""documentController->getContentReaders()->getCount() == 0""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016af774) */
/* WARNING: Removing unreachable block (ram,0x016af77d) */

undefined4 FUN_016af570(void)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38 [8];
  char local_30 [8];
  
  if ((unaff_RDI != 0) && (cVar2 = FUN_0168a120(), cVar2 != '\0')) {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 == (undefined8 *)0x0) {
        return 0;
      }
      pcVar1 = (code *)*DAT_02802f60;
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        FUN_01689520();
        if (*(int *)(local_70 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar4 = local_30;
          if (local_38[0] != '\0') {
            pcVar4 = local_38;
          }
          local_30[0] = local_38[0];
          *pcVar4 = '\0';
          if ((local_38[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        DAT_02802f48 = DAT_02802f48 + 1;
        FUN_01682950();
        if ((((local_38[0] == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
           (local_40 != 0)) {
          FUN_00d50b20();
        }
        DAT_02802f48 = DAT_02802f48 + -1;
        uVar3 = FUN_01684310();
        if (local_40 == 0) {
          return uVar3;
        }
        FUN_00d50b20();
        return uVar3;
      }
      if (DAT_02802f60 == (undefined8 *)0x0) {
        return 0;
      }
      pcVar1 = (code *)*DAT_02802f60;
    }
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
    }
    return 0;
  }
  if (DAT_02802f60 == (undefined8 *)0x0) {
    return 0;
  }
  if ((code *)*DAT_02802f60 == (code *)0x0) {
    return 0;
  }
  (*(code *)*DAT_02802f60)();
  return 0;
}




// ============================================================
// @016af230 — 553 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->getContentReaders()->getCount() == 0""
// str: ""documentController->isHostEditingDocument()""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016af3aa) */
/* WARNING: Removing unreachable block (ram,0x016af3b3) */

undefined1 FUN_016af230(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  char *pcVar3;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [16];
  char local_30 [8];
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af3ee;
      }
    }
    else {
      cVar1 = FUN_0167b260();
      if (cVar1 != '\0') {
        FUN_01689520();
        if (*(int *)(local_78 + 0xc) != 0) {
          FUN_01689520();
          FUN_00d23310();
          pcVar3 = local_30;
          if (local_40[0] != '\0') {
            pcVar3 = local_40;
          }
          local_30[0] = local_40[0];
          *pcVar3 = '\0';
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
          if ((local_30[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        FUN_016841e0();
        if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != 0)) {
          FUN_00d50b20();
        }
        uVar2 = FUN_0167bc80(param_2);
        if (local_48 != 0) {
          FUN_00d50b20();
        }
        goto LAB_016af3ee;
      }
      if (DAT_02802f60 != (undefined8 *)0x0) {
        uVar2 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)();
        }
        goto LAB_016af3ee;
      }
    }
  }
  uVar2 = 0;
LAB_016af3ee:
  FUN_00da71b0();
  return uVar2;
}



