// Function: FUN_005e4870
// Address: 005e4870
// Size: 934 bytes
// Class: MDWorkspaceView
// String references:
//   "bool"
//   "_size"
//   "MDWorkspaceView"
//   "_isVertical"
//   "GNCoord"
//   "_allowsChainedResize"
//   "_paddingLineSize"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005e4870(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000a5ee0();
  *unaff_RDI = &DAT_02501bf8;
  unaff_RDI[2] = &DAT_025025f0;
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271eb50 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271eb18 = FUN_003b6560();
        _DAT_0271eb10 = "_isVertical";
        _DAT_0271eb20 = 0;
        _DAT_0271eb28 = 0x6200;
        _DAT_0271eb30 = "bool";
        _DAT_0271eb38 = 0;
        uRam000000000271eb40 = 0;
        _DAT_0271eb48 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4cd0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceView");
  }
  unaff_RDI[0x33] = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005e4dc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceView");
  }
  *(undefined1 *)(unaff_RDI + 0x34) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ec28 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ebf0 = FUN_003b6560();
        _DAT_0271ebe8 = "_allowsChainedResize";
        _DAT_0271ebf8 = 0;
        _DAT_0271ec00 = 0x6200;
        _DAT_0271ec08 = "bool";
        _DAT_0271ec10 = 0;
        uRam000000000271ec18 = 0;
        _DAT_0271ec20 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1a4) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ec70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ec38 = FUN_003b6560();
        _DAT_0271ec30 = "_size";
        _DAT_0271ec40 = 0;
        _DAT_0271ec48 = 0x6600;
        _DAT_0271ec50 = "GNCoord";
        _DAT_0271ec58 = 0;
        uRam000000000271ec60 = 0;
        _DAT_0271ec68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x35) = 0;
  lVar2 = FUN_003b6560();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0271ecb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0271ec80 = FUN_003b6560();
        _DAT_0271ec78 = "_paddingLineSize";
        _DAT_0271ec88 = 0;
        _DAT_0271ec90 = 0x6600;
        _DAT_0271ec98 = "GNCoord";
        _DAT_0271eca0 = 0;
        uRam000000000271eca8 = 0;
        _DAT_0271ecb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


