// Function: FUN_005dc2b0
// Address: 005dc2b0
// Size: 2144 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MDNotificationObserver"
//   "MDToolbarVersionCtrl"
//   "MDToolbarQuantizeMacrosCtrl"
//   "MDToolbarUndoCtrl"
//   "MDToolbarToolCtrl"
//   "MDToolbarEditMixCtrl"
//   "MDToolbarEditModeCtrl"
//   "MDToolbarEditorViewCtrl"
//   "MDToolbarTrackMemoryUsageCtrl"
//   "MDToolbarActivityCtrl"
//   "MDToolbarScaleModeCtrl"
//   "_showsEditorBar"
//   "MDToolbarRightPluginConfigCtrl"
//   "MDToolbarPluginTransferCtrl"
//   "MDToolbarTempoPluginCtrl"
//   "MDToolbarAraEditModeCtrl"
//   "MDToolbarSpaceCtrl"
//   "MDToolbarLeftPluginConfigCtrl"
//   ... +2 more


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005dc2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_0026adc0();
  *unaff_RDI = &DAT_024f79e8;
  *(undefined1 *)(unaff_RDI + 0x11) = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271d380 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271d348 = FUN_00275e90();
        _DAT_0271d340 = "_showsEditorBar";
        _DAT_0271d350 = 0;
        _DAT_0271d358 = 0x6200;
        _DAT_0271d360 = "bool";
        _DAT_0271d368 = 0;
        uRam000000000271d370 = 0;
        _DAT_0271d378 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dcfe0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarRightPluginConfigCtrl");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd0d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTempoPluginCtrl");
  }
  puVar4 = unaff_RDI + 0x14;
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd1c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarPluginTransferCtrl",param_3,param_4,puVar4);
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd2b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarUndoCtrl");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd3a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarToolCtrl");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd490();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarSpaceCtrl");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd580();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditMixCtrl");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd670();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditModeCtrl");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd760();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarAraEditModeCtrl");
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd850();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarQuantizeMacrosCtrl");
  }
  unaff_RDI[0x1c] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dd940();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarLeftPluginConfigCtrl");
  }
  unaff_RDI[0x1d] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dda30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarActivityCtrl");
  }
  unaff_RDI[0x1e] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddb20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x1f] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddc10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarAraClickCtrl");
  }
  unaff_RDI[0x20] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddd00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVersionCtrl");
  }
  unaff_RDI[0x21] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005dddf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x22] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddee0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarAraDebugCtrl");
  }
  unaff_RDI[0x23] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005ddfd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTrackMemoryUsageCtrl");
  }
  unaff_RDI[0x24] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005de0c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEditorViewCtrl");
  }
  unaff_RDI[0x25] = 0;
  lVar2 = FUN_00275e90();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005de1b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarScaleModeCtrl");
  }
  return;
}


