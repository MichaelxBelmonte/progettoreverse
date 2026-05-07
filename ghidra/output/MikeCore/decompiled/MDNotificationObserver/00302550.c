// Function: FUN_00302550
// Address: 00302550
// Size: 2538 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "float"
//   "MDDocumentViewController"
//   "MDDocumentController"
//   "MDPropertyObserver"
//   "GNHeartbeatHandler"
//   "GNColor"
//   "MDTimeGridSetter"
//   "GNDoubleRange"
//   "_trackHeaderWidth"
//   "_startTimeRange"
//   "_destTimeRange"
//   "_animateZoomToTimeProgress"
//   "MDKeyModifierActionHelper"
//   "_updateViewPositionDisabled"
//   "MDMultiTrackViewDelegate"
//   "MDSelectionController"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00302550(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_002fb9c0();
  unaff_RDI[0x45] = &DAT_024c8618;
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
  *unaff_RDI = &DAT_024e0b10;
  unaff_RDI[2] = &DAT_024e1580;
  unaff_RDI[0x27] = &DAT_024e15c0;
  unaff_RDI[0x45] = &DAT_024e16b8;
  unaff_RDI[0x46] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003032c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x47] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003033b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  puVar4 = unaff_RDI + 0x48;
  unaff_RDI[0x48] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003034a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver",param_3,param_4,puVar4);
  }
  unaff_RDI[0x49] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303590();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTimeGridSetter");
  }
  *(undefined4 *)(unaff_RDI + 0x4a) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ffad8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffaa0 = FUN_000829c0();
        _DAT_026ffa98 = "_trackHeaderWidth";
        _DAT_026ffaa8 = 0;
        _DAT_026ffab0 = 0x6600;
        _DAT_026ffab8 = "float";
        _DAT_026ffac0 = 0;
        uRam00000000026ffac8 = 0;
        _DAT_026ffad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x4b] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303680();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentController");
  }
  unaff_RDI[0x4c] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303770();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDDocumentViewController");
  }
  unaff_RDI[0x4d] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303860();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  unaff_RDI[0x4e] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303950();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  unaff_RDI[0x4f] = 0;
  unaff_RDI[0x50] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ffc40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffc08 = FUN_000829c0();
        _DAT_026ffc00 = "_startTimeRange";
        _DAT_026ffc10 = 0;
        _DAT_026ffc18 = 0;
        _DAT_026ffc20 = "GNDoubleRange";
        _DAT_026ffc28 = 0;
        uRam00000000026ffc30 = 0;
        _DAT_026ffc38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x51] = 0;
  unaff_RDI[0x52] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ffc88 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffc50 = FUN_000829c0();
        _DAT_026ffc48 = "_destTimeRange";
        _DAT_026ffc58 = 0;
        _DAT_026ffc60 = 0;
        _DAT_026ffc68 = "GNDoubleRange";
        _DAT_026ffc70 = 0;
        uRam00000000026ffc78 = 0;
        _DAT_026ffc80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x53) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ffcd0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffc98 = FUN_000829c0();
        _DAT_026ffc90 = "_animateZoomToTimeProgress";
        _DAT_026ffca0 = 0;
        _DAT_026ffca8 = 0x6600;
        _DAT_026ffcb0 = "float";
        _DAT_026ffcb8 = 0;
        uRam00000000026ffcc0 = 0;
        _DAT_026ffcc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00303a40();
  unaff_RDI[0x55] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303b20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x56] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303c10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x57] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303d00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x58] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303df0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDPropertyObserver");
  }
  unaff_RDI[0x59] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00303ee0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDKeyModifierActionHelper");
  }
  FUN_00303fd0();
  *(undefined1 *)(unaff_RDI + 0x5b) = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026fff10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ffed8 = FUN_000829c0();
        _DAT_026ffed0 = "_updateViewPositionDisabled";
        _DAT_026ffee0 = 0;
        _DAT_026ffee8 = 0x6200;
        _DAT_026ffef0 = "bool";
        _DAT_026ffef8 = 0;
        uRam00000000026fff00 = 0;
        _DAT_026fff08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x5c] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003040b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDMultiTrackViewDelegate");
  }
  unaff_RDI[0x5d] = 0;
  lVar2 = FUN_000829c0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_003041f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDSelectionController");
  }
  return;
}


