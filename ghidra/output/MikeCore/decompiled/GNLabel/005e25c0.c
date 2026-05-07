// Function: FUN_005e25c0
// Address: 005e25c0
// Size: 1214 bytes
// Class: GNLabel
// String references:
//   "bool"
//   "float"
//   "GNLabel"
//   "GNButton"
//   "GNSlider"
//   "GNSwitchButton"
//   "_editedCenterFloatValue"
//   "_editedDriftFloatValue"
//   "_snapToTonality"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e25c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_002730b0();
  *unaff_RDI = &DAT_0250ead8;
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2ca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2d90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSlider");
  }
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2e80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e2f70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNLabel");
  }
  puVar4 = unaff_RDI + 0x15;
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSwitchButton",param_3,param_4,puVar4);
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e2b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e280 = FUN_005e23e0();
        _DAT_0271e278 = "_editedCenterFloatValue";
        _DAT_0271e288 = 0;
        _DAT_0271e290 = 0x6600;
        _DAT_0271e298 = "float";
        _DAT_0271e2a0 = 0;
        uRam000000000271e2a8 = 0;
        _DAT_0271e2b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e300 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e2c8 = FUN_005e23e0();
        _DAT_0271e2c0 = "_editedDriftFloatValue";
        _DAT_0271e2d0 = 0;
        _DAT_0271e2d8 = 0x6600;
        _DAT_0271e2e0 = "float";
        _DAT_0271e2e8 = 0;
        uRam000000000271e2f0 = 0;
        _DAT_0271e2f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x18] = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e3240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  *(undefined1 *)(unaff_RDI + 0x19) = 0;
  lVar2 = FUN_005e23e0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271e3d8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271e3a0 = FUN_005e23e0();
        _DAT_0271e398 = "_snapToTonality";
        _DAT_0271e3a8 = 0;
        _DAT_0271e3b0 = 0x6200;
        _DAT_0271e3b8 = "bool";
        _DAT_0271e3c0 = 0;
        uRam000000000271e3c8 = 0;
        _DAT_0271e3d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


