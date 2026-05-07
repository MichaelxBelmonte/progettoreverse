// Function: FUN_005dab40
// Address: 005dab40
// Size: 1742 bytes
// Class: MUAraAudioSource
// String references:
//   "bool"
//   "GNUni"
//   "MUAraAudioPlaybackRegion"
//   "GNHeartbeatHandler"
//   "_cursorTime"
//   "MDPluginProcessor"
//   "_lastHostCursorTime"
//   "_lastHostCursorTimeValid"
//   "_hostPlaybackPendingStopTime"
//   "MURenderer"
//   "_controlsLocalPlayback"
//   "_distributedLocalPlayback"
//   "_lastPendingHostCycleUpdateRequestTime"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005dab40(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_005da070();
  unaff_RDI[5] = &DAT_024c8618;
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
  *unaff_RDI = &DAT_024f67b8;
  unaff_RDI[2] = &DAT_024f6cb8;
  unaff_RDI[5] = &DAT_024f6df8;
  unaff_RDI[6] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginProcessor");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cd68 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cd30 = FUN_0045de50();
        _DAT_0271cd28 = "_cursorTime";
        _DAT_0271cd38 = 0;
        _DAT_0271cd40 = 0x6400;
        _DAT_0271cd48 = "double";
        _DAT_0271cd50 = 0;
        uRam000000000271cd58 = 0;
        _DAT_0271cd60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cdb0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cd78 = FUN_0045de50();
        _DAT_0271cd70 = "_lastHostCursorTime";
        _DAT_0271cd80 = 0;
        _DAT_0271cd88 = 0x6400;
        _DAT_0271cd90 = "double";
        _DAT_0271cd98 = 0;
        uRam000000000271cda0 = 0;
        _DAT_0271cda8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cdf8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cdc0 = FUN_0045de50();
        _DAT_0271cdb8 = "_lastHostCursorTimeValid";
        _DAT_0271cdc8 = 0;
        _DAT_0271cdd0 = 0x6200;
        _DAT_0271cdd8 = "bool";
        _DAT_0271cde0 = 0;
        uRam000000000271cde8 = 0;
        _DAT_0271cdf0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ce40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ce08 = FUN_0045de50();
        _DAT_0271ce00 = "_hostPlaybackPendingStopTime";
        _DAT_0271ce10 = 0;
        _DAT_0271ce18 = 0x6400;
        _DAT_0271ce20 = "double";
        _DAT_0271ce28 = 0;
        uRam000000000271ce30 = 0;
        _DAT_0271ce38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MURenderer");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPluginProcessor");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAraAudioPlaybackRegion");
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005db760();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x74) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cfa8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cf70 = FUN_0045de50();
        _DAT_0271cf68 = "_controlsLocalPlayback";
        _DAT_0271cf78 = 0;
        _DAT_0271cf80 = 0x6200;
        _DAT_0271cf88 = "bool";
        _DAT_0271cf90 = 0;
        uRam000000000271cf98 = 0;
        _DAT_0271cfa0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x75) = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271cff0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271cfb8 = FUN_0045de50();
        _DAT_0271cfb0 = "_distributedLocalPlayback";
        _DAT_0271cfc0 = 0;
        _DAT_0271cfc8 = 0x6200;
        _DAT_0271cfd0 = "bool";
        _DAT_0271cfd8 = 0;
        uRam000000000271cfe0 = 0;
        _DAT_0271cfe8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_0045de50();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271d038 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271d000 = FUN_0045de50();
        _DAT_0271cff8 = "_lastPendingHostCycleUpdateRequestTime";
        _DAT_0271d008 = 0;
        _DAT_0271d010 = 0x6400;
        _DAT_0271d018 = "double";
        _DAT_0271d020 = 0;
        uRam000000000271d028 = 0;
        _DAT_0271d030 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


