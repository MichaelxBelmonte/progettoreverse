// Function: FUN_010fe8d0
// Address: 010fe8d0
// Size: 1197 bytes
// Class: MUElementAnalyzer
// String references:
//   "bool"
//   "GNUni"
//   "float"
//   "MUElementAnalyzer"
//   "MUAudioSourceItem"
//   "MUAudioSourceAttackItem"
//   "GNInt"
//   "_isMarkedAsPreliminaryItem"
//   "_sortingValue"
//   "_harmonicNumber"
//   "_timePosIndexOfPitchCenterRelevanceStart"
//   "_timePosIndexOfPitchCenterRelevanceEnd"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010fe8d0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_010fee50();
  *unaff_RDI = &DAT_025e7818;
  unaff_RDI[7] = &DAT_025e7c80;
  unaff_RDI[0x27] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102a80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElementAnalyzer");
  }
  unaff_RDI[0x28] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102b70();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceAttackItem");
  }
  unaff_RDI[0x29] = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01102c60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUAudioSourceItem");
  }
  *(undefined1 *)(unaff_RDI + 0x2a) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790df0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790db8 = FUN_010fe3b0();
        _DAT_02790db0 = "_isMarkedAsPreliminaryItem";
        _DAT_02790dc0 = 0;
        _DAT_02790dc8 = 0x6210;
        _DAT_02790dd0 = "bool";
        _DAT_02790dd8 = 0;
        uRam0000000002790de0 = 0;
        _DAT_02790de8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x154) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790e38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790e00 = FUN_010fe3b0();
        _DAT_02790df8 = "_sortingValue";
        _DAT_02790e08 = 0;
        _DAT_02790e10 = 0x6610;
        _DAT_02790e18 = "float";
        _DAT_02790e20 = 0;
        uRam0000000002790e28 = 0;
        _DAT_02790e30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790e80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790e48 = FUN_010fe3b0();
        _DAT_02790e40 = "_harmonicNumber";
        _DAT_02790e50 = 0;
        _DAT_02790e58 = 0x6910;
        _DAT_02790e60 = "GNInt";
        _DAT_02790e68 = 0;
        uRam0000000002790e70 = 0;
        _DAT_02790e78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x15c) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790ec8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790e90 = FUN_010fe3b0();
        _DAT_02790e88 = "_timePosIndexOfPitchCenterRelevanceStart";
        _DAT_02790e98 = 0;
        _DAT_02790ea0 = 0x6910;
        _DAT_02790ea8 = "GNInt";
        _DAT_02790eb0 = 0;
        uRam0000000002790eb8 = 0;
        _DAT_02790ec0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2c) = 0;
  lVar2 = FUN_010fe3b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02790f10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02790ed8 = FUN_010fe3b0();
        _DAT_02790ed0 = "_timePosIndexOfPitchCenterRelevanceEnd";
        _DAT_02790ee0 = 0;
        _DAT_02790ee8 = 0x6910;
        _DAT_02790ef0 = "GNInt";
        _DAT_02790ef8 = 0;
        uRam0000000002790f00 = 0;
        _DAT_02790f08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


