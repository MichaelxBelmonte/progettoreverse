// Function: FUN_005e5dc0
// Address: 005e5dc0
// Size: 965 bytes
// Class: MDNotificationObserver
// String references:
//   "MDNotificationObserver"
//   "MDToolbarGridCtrl"
//   "MDToolbarLeftConfigCtrl"
//   "MDToolbarTempoCtrl"
//   "MDToolbarTransportCtrl"
//   "MDToolbarRightConfigCtrl"
//   "MDToolbarActivityCtrl"
//   "MDToolbarScaleModeCtrl"
//   "MDToolbarVolumeCtrl"
//   "MDToolbarEdtionCtrl"


void FUN_005e5dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_0026adc0();
  *unaff_RDI = &DAT_02515680;
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e63f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTransportCtrl");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e64e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarTempoCtrl");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e65d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarRightConfigCtrl");
  }
  puVar4 = unaff_RDI + 0x14;
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e66c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarLeftConfigCtrl",param_3,param_4,puVar4);
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e67b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarVolumeCtrl");
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e68a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarEdtionCtrl");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6990();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarActivityCtrl");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarGridCtrl");
  }
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDToolbarScaleModeCtrl");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_005e5ba0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e6c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  return;
}


