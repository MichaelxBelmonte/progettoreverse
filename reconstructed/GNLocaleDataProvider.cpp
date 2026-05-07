// Reconstructed implementation of GNLocaleDataProvider
// From MikeCore binary — reverse-engineered pseudocode

#include "GNLocaleDataProvider.h"

// ============================================================
// @000067e0 — 4919 bytes
// str: ""bool""
// str: ""GNLocaleDataProvider""
// str: ""GNWindow""
// str: ""GNUni""
// str: ""_nWaitCursor""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000067e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00006550();
  unaff_RDI[2] = &DAT_024bfc90;
  if (DAT_02722440 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026cb310 = "GNLocaleDataProvider";
      DAT_026cb320 = 0;
      _DAT_026cb318 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_026b98e8;
  unaff_RDI[2] = &DAT_026ba010;
  unaff_RDI[3] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000081d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027224a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02722468 = FUN_00005bb0();
        _DAT_02722460 = "_nWaitCursor";
        _DAT_02722470 = 0;
        _DAT_02722478 = 0x6900;
        _DAT_02722480 = "GNInt";
        _DAT_02722488 = 0;
        uRam0000000002722490 = 0;
        _DAT_02722498 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000082c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNUndoStackFrame");
  }
  *(undefined4 *)(unaff_RDI + 6) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02722500 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027224c8 = FUN_00005bb0();
        _DAT_027224c0 = "_undoActionCountOfUndoMenu";
        _DAT_027224d0 = 0;
        _DAT_027224d8 = 0x6900;
        _DAT_027224e0 = "GNInt";
        _DAT_027224e8 = 0;
        uRam00000000027224f0 = 0;
        _DAT_027224f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cb410 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cb3d8 = FUN_00005bb0();
        _DAT_026cb3d0 = "_redoActionCountOfUndoMenu";
        _DAT_026cb3e0 = 0;
        _DAT_026cb3e8 = 0x6900;
        _DAT_026cb3f0 = "GNInt";
        _DAT_026cb3f8 = 0;
        uRam00000000026cb400 = 0;
        _DAT_026cb408 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000083b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDocumentController");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000084a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMenu");
  }
  puVar4 = unaff_RDI + 9;
  unaff_RDI[9] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow",param_3,param_4,puVar4);
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNWindow");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNInfoController");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNViewController");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008a40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMenuItem");
  }
  *(undefined1 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027226d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02722698 = FUN_00005bb0();
        _DAT_02722690 = "_isKeyboardNavigationEnabled";
        _DAT_027226a0 = 0;
        _DAT_027226a8 = 0x6200;
        _DAT_027226b0 = "bool";
        _DAT_027226b8 = 0;
        uRam00000000027226c0 = 0;
        _DAT_027226c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cb5e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cb5a8 = FUN_00005bb0();
        _DAT_026cb5a0 = "_lastModalResult";
        _DAT_026cb5b0 = 0;
        _DAT_026cb5b8 = 0x6900;
        _DAT_026cb5c0 = "GNInt";
        _DAT_026cb5c8 = 0;
        uRam00000000026cb5d0 = 0;
        _DAT_026cb5d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008b30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNFilePath");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008c20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008d10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNApplicationObjectProvider");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008e00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008ef0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHeartbeatHandlerRegistration");
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00008fe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLock");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000090d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTimer");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000091c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000092b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNString");
  }
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cb7c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cb788 = FUN_00005bb0();
        _DAT_026cb780 = "_showFullPathsInResentMenu";
        _DAT_026cb790 = 0;
        _DAT_026cb798 = 0x6200;
        _DAT_026cb7a0 = "bool";
        _DAT_026cb7a8 = 0;
        uRam00000000026cb7b0 = 0;
        _DAT_026cb7b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xc9) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027228f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027228b8 = FUN_00005bb0();
        _DAT_027228b0 = "_terminatesOnLastDocumentClosed";
        _DAT_027228c0 = 0;
        _DAT_027228c8 = 0x6200;
        _DAT_027228d0 = "bool";
        _DAT_027228d8 = 0;
        uRam00000000027228e0 = 0;
        _DAT_027228e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xca) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cb810 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cb7d8 = FUN_00005bb0();
        _DAT_026cb7d0 = "_areDocumentsUnstable";
        _DAT_026cb7e0 = 0;
        _DAT_026cb7e8 = 0x6200;
        _DAT_026cb7f0 = "bool";
        _DAT_026cb7f8 = 0;
        uRam00000000026cb800 = 0;
        _DAT_026cb808 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x1b) = *(undefined1 *)(unaff_RSI + 0xd8);
  unaff_RDI[0x1a] = *(undefined8 *)(unaff_RSI + 0xd0);
  *(undefined4 *)((longlong)unaff_RDI + 0xdc) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02722940 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02722908 = FUN_00005bb0();
        _DAT_02722900 = "_isRunningDialog";
        _DAT_02722910 = 0;
        _DAT_02722918 = 0x6900;
        _DAT_02722920 = "GNInt";
        _DAT_02722928 = 0;
        uRam0000000002722930 = 0;
        _DAT_02722938 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cb860 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cb828 = FUN_00005bb0();
        _DAT_026cb820 = "_isRunningSystemDialog";
        _DAT_026cb830 = 0;
        _DAT_026cb838 = 0x6900;
        _DAT_026cb840 = "GNInt";
        _DAT_026cb848 = 0;
        uRam00000000026cb850 = 0;
        _DAT_026cb858 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xe4) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02722990 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02722958 = FUN_00005bb0();
        _DAT_02722950 = "_provokeExceptionWithinNextEvent";
        uRam0000000002722960 = 0;
        _DAT_02722968 = 0x6200;
        _DAT_02722970 = "bool";
        _DAT_02722978 = 0;
        uRam0000000002722980 = 0;
        _DAT_02722988 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_000093a0();
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00009480();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMessagePort");
  }
  *(undefined1 *)(unaff_RDI + 0x1f) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cb910 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cb8d8 = FUN_00005bb0();
        _DAT_026cb8d0 = "_didReceiveKeyEvent";
        _DAT_026cb8e0 = 0;
        _DAT_026cb8e8 = 0x6200;
        _DAT_026cb8f0 = "bool";
        _DAT_026cb8f8 = 0;
        uRam00000000026cb900 = 0;
        _DAT_026cb908 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xf9) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02722a30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027229f8 = FUN_00005bb0();
        _DAT_027229f0 = "_enableAlternativeResourceFolder";
        _DAT_02722a00 = 0;
        _DAT_02722a08 = 0x6200;
        _DAT_02722a10 = "bool";
        _DAT_02722a18 = 0;
        uRam0000000002722a20 = 0;
        _DAT_02722a28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xfa) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cb960 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cb928 = FUN_00005bb0();
        _DAT_026cb920 = "_windowsOnlyShowMenuOnStartUp";
        _DAT_026cb930 = 0;
        _DAT_026cb938 = 0x6200;
        _DAT_026cb940 = "bool";
        _DAT_026cb948 = 0;
        uRam00000000026cb950 = 0;
        _DAT_026cb958 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xfb) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02722a80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02722a48 = FUN_00005bb0();
        _DAT_02722a40 = "_windowsOnlyCreatePreferencesMenuItemIfNeeded";
        _DAT_02722a50 = 0;
        _DAT_02722a58 = 0x6200;
        _DAT_02722a60 = "bool";
        _DAT_02722a68 = 0;
        uRam0000000002722a70 = 0;
        _DAT_02722a78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xfc) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cb9b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cb978 = FUN_00005bb0();
        _DAT_026cb970 = "_windowsOnlyCreateInfoMenuItemIfNeeded";
        _DAT_026cb980 = 0;
        _DAT_026cb988 = 0x6200;
        _DAT_026cb990 = "bool";
        _DAT_026cb998 = 0;
        uRam00000000026cb9a0 = 0;
        _DAT_026cb9a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xfd) = 0;
  lVar2 = FUN_00005bb0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02722ad0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02722a98 = FUN_00005bb0();
        _DAT_02722a90 = "_carbonOnlyPreferencesMenuItemEnabled";
        _DAT_02722aa0 = 0;
        _DAT_02722aa8 = 0x6200;
        _DAT_02722ab0 = "bool";
        _DAT_02722ab8 = 0;
        uRam0000000002722ac0 = 0;
        _DAT_02722ac8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01f29460 — 981 bytes
// ============================================================

void FUN_01f29460(void)

{
  longlong *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_38;
  char local_30;
  
  FUN_00d50100();
  *(undefined4 *)((longlong)unaff_RDI + 0xfa) = 0x1010101;
  *(undefined1 *)(unaff_RDI + 0x1b) = 0;
  iVar5 = FUN_000030b0();
  *(bool *)((longlong)unaff_RDI + 0xca) = iVar5 == 0;
  unaff_RDI[0x1a] = 0;
  if (DAT_028ba7f0 == (longlong *)0x0) {
    cVar4 = (**(code **)(*unaff_RDI + 0x450))();
    puVar3 = PTR__objc_msgSend_024a9998;
    puVar2 = PTR__NSApp_0249c0f8;
    if (cVar4 == '\0') {
      (*(code *)PTR__objc_msgSend_024a9998)();
    }
    else {
      (*(code *)PTR__objc_msgSend_024a9998)();
      (*(code *)puVar3)(*(undefined8 *)puVar2,&cf_MainMenu,0);
      (*(code *)puVar3)();
    }
    _objc_alloc();
    lVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
    unaff_RDI[0x1a] = lVar6;
    plVar1 = DAT_028ba7f0;
    if ((DAT_028ba7f0 != unaff_RDI) &&
       (FUN_00d50b00(), DAT_028ba7f0 = unaff_RDI, plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (DAT_028ba7f8 == '\0') {
      DAT_028ba7f8 = '\x01';
      FUN_00e8cb90();
    }
    FUN_00e82980();
    plVar7 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar7 + 0x18))();
    plVar1 = (longlong *)unaff_RDI[8];
    if (plVar1 == plVar7) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[8] = (longlong)plVar7;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_c8 = DAT_027fff38;
    if (DAT_027fff38 != 0) {
      FUN_00d50b00();
    }
    local_c0 = '\x01';
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00d41430(&local_b8,&local_c8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_a8 = DAT_027fff40;
    if (DAT_027fff40 != 0) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    local_98 = 0;
    local_90 = '\0';
    FUN_00d41430(&local_98,&local_a8);
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_88 = DAT_027fff48;
    if (DAT_027fff48 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    FUN_00d41430(&local_78,&local_88);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



