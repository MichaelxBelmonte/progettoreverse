// Function: FUN_01696b40
// Address: 01696b40
// Size: 2494 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNDoubleRange"
//   "GNInt"
//   "MUAraTrackObserver"
//   "MUAraTrackObservationHelper"
//   "_trackUpdateRange"
//   "_notifyTrackChange"
//   "_notifyEverythingChanged"
//   "_observeTrack"
//   "_observeTimeline"
//   "_observeScales"
//   "_observeChords"
//   "_notifyTimelineChangeCount"
//   "_reportedTimelineChangeCount"
//   "_notifyScalesChangeCount"
//   "_reportedScalesChangeCount"
//   "_notifyChordsChangeCount"
//   "_reportedChordsChangeCount"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01696b40(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_016962f0();
  unaff_RDI[10] = &DAT_025f9890;
  if (DAT_027c8978 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027c8960 = "MUAraTrackObserver";
      DAT_027c8970 = 0;
      _DAT_027c8968 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_0260c3c0;
  unaff_RDI[10] = &DAT_0260c748;
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01697660();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraTrackObservationHelper");
  }
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8a08 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c89d0 = FUN_0049c750();
        _DAT_027c89c8 = "_trackUpdateRange";
        _DAT_027c89d8 = 0;
        _DAT_027c89e0 = 0x11;
        _DAT_027c89e8 = "GNDoubleRange";
        _DAT_027c89f0 = 0;
        uRam00000000027c89f8 = 0;
        _DAT_027c8a00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8a50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8a18 = FUN_0049c750();
        _DAT_027c8a10 = "_notifyTrackChange";
        _DAT_027c8a20 = 0;
        _DAT_027c8a28 = 0x6211;
        _DAT_027c8a30 = "bool";
        _DAT_027c8a38 = 0;
        uRam00000000027c8a40 = 0;
        _DAT_027c8a48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x71) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8a98 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8a60 = FUN_0049c750();
        _DAT_027c8a58 = "_notifyEverythingChanged";
        _DAT_027c8a68 = 0;
        _DAT_027c8a70 = 0x6211;
        _DAT_027c8a78 = "bool";
        _DAT_027c8a80 = 0;
        uRam00000000027c8a88 = 0;
        _DAT_027c8a90 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x72) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8ae0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8aa8 = FUN_0049c750();
        _DAT_027c8aa0 = "_observeTrack";
        _DAT_027c8ab0 = 0;
        _DAT_027c8ab8 = 0x6211;
        _DAT_027c8ac0 = "bool";
        _DAT_027c8ac8 = 0;
        uRam00000000027c8ad0 = 0;
        _DAT_027c8ad8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x73) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8b28 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8af0 = FUN_0049c750();
        _DAT_027c8ae8 = "_observeTimeline";
        _DAT_027c8af8 = 0;
        _DAT_027c8b00 = 0x6211;
        _DAT_027c8b08 = "bool";
        _DAT_027c8b10 = 0;
        uRam00000000027c8b18 = 0;
        _DAT_027c8b20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x74) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8b70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8b38 = FUN_0049c750();
        _DAT_027c8b30 = "_observeScales";
        _DAT_027c8b40 = 0;
        _DAT_027c8b48 = 0x6211;
        _DAT_027c8b50 = "bool";
        _DAT_027c8b58 = 0;
        uRam00000000027c8b60 = 0;
        _DAT_027c8b68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x75) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8bb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8b80 = FUN_0049c750();
        _DAT_027c8b78 = "_observeChords";
        _DAT_027c8b88 = 0;
        _DAT_027c8b90 = 0x6211;
        _DAT_027c8b98 = "bool";
        _DAT_027c8ba0 = 0;
        uRam00000000027c8ba8 = 0;
        _DAT_027c8bb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8c00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8bc8 = FUN_0049c750();
        _DAT_027c8bc0 = "_notifyTimelineChangeCount";
        _DAT_027c8bd0 = 0;
        _DAT_027c8bd8 = 0x6911;
        _DAT_027c8be0 = "GNInt";
        _DAT_027c8be8 = 0;
        uRam00000000027c8bf0 = 0;
        _DAT_027c8bf8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8c48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8c10 = FUN_0049c750();
        _DAT_027c8c08 = "_reportedTimelineChangeCount";
        _DAT_027c8c18 = 0;
        _DAT_027c8c20 = 0x6911;
        _DAT_027c8c28 = "GNInt";
        _DAT_027c8c30 = 0;
        uRam00000000027c8c38 = 0;
        _DAT_027c8c40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8c90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8c58 = FUN_0049c750();
        _DAT_027c8c50 = "_notifyScalesChangeCount";
        _DAT_027c8c60 = 0;
        _DAT_027c8c68 = 0x6911;
        _DAT_027c8c70 = "GNInt";
        _DAT_027c8c78 = 0;
        uRam00000000027c8c80 = 0;
        _DAT_027c8c88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x84) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8cd8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8ca0 = FUN_0049c750();
        _DAT_027c8c98 = "_reportedScalesChangeCount";
        _DAT_027c8ca8 = 0;
        _DAT_027c8cb0 = 0x6911;
        _DAT_027c8cb8 = "GNInt";
        _DAT_027c8cc0 = 0;
        uRam00000000027c8cc8 = 0;
        _DAT_027c8cd0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x11) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8d20 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8ce8 = FUN_0049c750();
        _DAT_027c8ce0 = "_notifyChordsChangeCount";
        _DAT_027c8cf0 = 0;
        _DAT_027c8cf8 = 0x6911;
        _DAT_027c8d00 = "GNInt";
        _DAT_027c8d08 = 0;
        uRam00000000027c8d10 = 0;
        _DAT_027c8d18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x8c) = 0;
  lVar2 = FUN_0049c750();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027c8d68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027c8d30 = FUN_0049c750();
        _DAT_027c8d28 = "_reportedChordsChangeCount";
        _DAT_027c8d38 = 0;
        _DAT_027c8d40 = 0x6911;
        _DAT_027c8d48 = "GNInt";
        _DAT_027c8d50 = 0;
        uRam00000000027c8d58 = 0;
        _DAT_027c8d60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


