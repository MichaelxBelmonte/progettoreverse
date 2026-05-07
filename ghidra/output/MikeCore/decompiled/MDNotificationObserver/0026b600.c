// Function: FUN_0026b600
// Address: 0026b600
// Size: 1063 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "MDToolbarVersionCtrl"
//   "MDToolbarQuantizeMacrosCtrl"
//   "MDToolbarUndoCtrl"
//   "MDToolbarToolCtrl"
//   "MDToolbarEditMixCtrl"
//   "MDToolbarEditModeCtrl"
//   "MDToolbarEditorViewCtrl"
//   "MDToolbarTrackMemoryUsageCtrl"
//   "_showsEditorBar"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0026b600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_0026adc0();
  *unaff_RDI = &DAT_024c8000;
  *(undefined1 *)(unaff_RDI + 0x11) = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026f7138 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026f7100 = FUN_000ad2d0();
        _DAT_026f70f8 = "_showsEditorBar";
        _DAT_026f7108 = 0;
        _DAT_026f7110 = 0x6200;
        _DAT_026f7118 = "bool";
        _DAT_026f7120 = 0;
        uRam00000000026f7128 = 0;
        _DAT_026f7130 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bc70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditMixCtrl");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bd60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditModeCtrl");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026be50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarQuantizeMacrosCtrl");
  }
  puVar4 = unaff_RDI + 0x15;
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026bf40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarUndoCtrl",param_3,param_4,puVar4);
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c030();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarToolCtrl");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditorViewCtrl");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c210();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c300();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVersionCtrl");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_000ad2d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0026c3f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTrackMemoryUsageCtrl");
  }
  return;
}


