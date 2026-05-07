// Function: FUN_0084d700
// Address: 0084d700
// Size: 1572 bytes
// Class: MUElement
// String references:
//   "MUElement"
//   "MUTrack"
//   "GNHeartbeatHandler"
//   "MUScalePitchSystem"
//   "GNTimeInterval"
//   "_startTime"
//   "_stopTime"
//   "_intervalPreviewStartDelay"
//   "_referencePitchIndex"
//   "_selectedPitchIndex"
//   "double"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0084d700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_0084c490();
  unaff_RDI[7] = &DAT_024c8618;
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
  *unaff_RDI = &DAT_02642358;
  unaff_RDI[7] = &DAT_02642700;
  puVar4 = unaff_RDI + 8;
  unaff_RDI[8] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084df00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUScalePitchSystem",param_3,param_4,puVar4);
  }
  FUN_0084dff0();
  unaff_RDI[10] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e1c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e2b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739578 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739540 = FUN_0084c260();
        _DAT_02739538 = "_intervalPreviewStartDelay";
        _DAT_02739548 = 0;
        _DAT_02739550 = 0x6400;
        _DAT_02739558 = "GNTimeInterval";
        _DAT_02739560 = 0;
        uRam0000000002739568 = 0;
        _DAT_02739570 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027395c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739588 = FUN_0084c260();
        _DAT_02739580 = "_referencePitchIndex";
        _DAT_02739590 = 0;
        _DAT_02739598 = 0x6900;
        _DAT_027395a0 = "GNInt";
        _DAT_027395a8 = 0;
        uRam00000000027395b0 = 0;
        _DAT_027395b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739608 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027395d0 = FUN_0084c260();
        _DAT_027395c8 = "_selectedPitchIndex";
        _DAT_027395d8 = 0;
        _DAT_027395e0 = 0x6900;
        _DAT_027395e8 = "GNInt";
        _DAT_027395f0 = 0;
        uRam00000000027395f8 = 0;
        _DAT_02739600 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739650 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739618 = FUN_0084c260();
        _DAT_02739610 = "_startTime";
        _DAT_02739620 = 0;
        _DAT_02739628 = 0x6400;
        _DAT_02739630 = "double";
        _DAT_02739638 = 0;
        uRam0000000002739640 = 0;
        _DAT_02739648 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02739698 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02739660 = FUN_0084c260();
        _DAT_02739658 = "_stopTime";
        _DAT_02739668 = 0;
        _DAT_02739670 = 0x6400;
        _DAT_02739678 = "double";
        _DAT_02739680 = 0;
        uRam0000000002739688 = 0;
        _DAT_02739690 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_0084c260();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0084e490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTrack");
  }
  return;
}


