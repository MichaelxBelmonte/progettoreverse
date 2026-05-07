// Function: FUN_005e3630
// Address: 005e3630
// Size: 1325 bytes
// Class: MDNotificationObserver
// String references:
//   "bool"
//   "MDNotificationObserver"
//   "GNLabel"
//   "GNSlider"
//   "GNPopUpButton"
//   "GNControlMatrix"
//   "GNSwitchButton"
//   "MUPerformance"
//   "_didChooseQuantization"
//   "GNComboBox"
//   "_customValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e3630(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_002730b0();
  *unaff_RDI = &DAT_02512e00;
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNControlMatrix");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3eb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3fa0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4090();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  puVar4 = unaff_RDI + 0x15;
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4180();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  unaff_RDI[0x16] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4270();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton");
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4360();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNPopUpButton");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4450();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUPerformance");
  }
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e6f8 = FUN_005e3450();
        _DAT_0271e6f0 = "_didChooseQuantization";
        _DAT_0271e700 = 0;
        _DAT_0271e708 = 0x6200;
        _DAT_0271e710 = "bool";
        _DAT_0271e718 = 0;
        uRam000000000271e720 = 0;
        _DAT_0271e728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4540();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDNotificationObserver");
  }
  unaff_RDI[0x1b] = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4630();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNComboBox");
  }
  *(undefined1 *)(unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_005e3450();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e808 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e7d0 = FUN_005e3450();
        _DAT_0271e7c8 = "_customValue";
        _DAT_0271e7d8 = 0;
        _DAT_0271e7e0 = 0x6200;
        _DAT_0271e7e8 = "bool";
        _DAT_0271e7f0 = 0;
        uRam000000000271e7f8 = 0;
        _DAT_0271e800 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


