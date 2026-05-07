// Function: FUN_005f86e0
// Address: 005f86e0
// Size: 2297 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNTextField"
//   "GNButton"
//   "GNImage"
//   "GNColor"
//   "GNCoord"
//   "_showsCloseButtons"
//   "MDTabTargetDelegate"
//   "_header"
//   "MDWorkspaceTabHeaderViewItem"
//   "_showsMenuButtons"
//   "_maxItemLength"
//   "_minTabCount"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f86e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_000a5ee0();
  *unaff_RDI = &DAT_02506210;
  unaff_RDI[2] = &DAT_02506d08;
  unaff_RDI[0x31] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9380();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_header";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9470();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  unaff_RDI[0x33] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9560();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  puVar4 = unaff_RDI + 0x34;
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9650();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem",param_3,param_4,puVar4);
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9740();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  unaff_RDI[0x36] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9830();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  unaff_RDI[0x37] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9920();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  unaff_RDI[0x38] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9a10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNColor");
  }
  unaff_RDI[0x39] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x3a] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9bf0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x3b] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9ce0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x3c] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9dd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNImage");
  }
  *(undefined1 *)(unaff_RDI + 0x3d) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02721e88 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721e50 = FUN_005f84d0();
        _DAT_02721e48 = "_showsCloseButtons";
        _DAT_02721e58 = 0;
        _DAT_02721e60 = 0x6200;
        _DAT_02721e68 = "bool";
        _DAT_02721e70 = 0;
        uRam0000000002721e78 = 0;
        _DAT_02721e80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1e9) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02721ed0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721e98 = FUN_005f84d0();
        _DAT_02721e90 = "_showsMenuButtons";
        _DAT_02721ea0 = 0;
        _DAT_02721ea8 = 0x6200;
        _DAT_02721eb0 = "bool";
        _DAT_02721eb8 = 0;
        uRam0000000002721ec0 = 0;
        _DAT_02721ec8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1ec) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02721f18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721ee0 = FUN_005f84d0();
        _DAT_02721ed8 = "_maxItemLength";
        _DAT_02721ee8 = 0;
        _DAT_02721ef0 = 0x6600;
        _DAT_02721ef8 = "GNCoord";
        _DAT_02721f00 = 0;
        uRam0000000002721f08 = 0;
        _DAT_02721f10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3e) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f9ec0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 500) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02721fb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721f80 = FUN_005f84d0();
        _DAT_02721f78 = "_minTabCount";
        _DAT_02721f88 = 0;
        _DAT_02721f90 = 0x6900;
        _DAT_02721f98 = "GNInt";
        _DAT_02721fa0 = 0;
        uRam0000000002721fa8 = 0;
        _DAT_02721fb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3f) = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fa030();
    FUN_00e87980();
  }
  unaff_RDI[0x40] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fa210();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDTabTargetDelegate");
  }
  unaff_RDI[0x41] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fa350();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTextField");
  }
  unaff_RDI[0x42] = 0;
  lVar2 = FUN_005f84d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005fa440();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceTabHeaderViewItem");
  }
  FUN_005fa530();
  return;
}


