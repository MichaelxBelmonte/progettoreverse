// Function: FUN_005f6340
// Address: 005f6340
// Size: 854 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNScrollView"
//   "GNCoord"
//   "_horizontalScrollerHeight"
//   "_verticalScrollerWidth"
//   "_preferedFrameSizeLocked"
//   "MDWorkspaceLayoutDelegate"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f6340(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000a5ee0();
  *unaff_RDI = &DAT_024c89f0;
  unaff_RDI[2] = &DAT_024c93f8;
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027215d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721598 = FUN_000b6330();
        _DAT_02721590 = "_preferedFrameSizeLocked";
        _DAT_027215a0 = 0;
        _DAT_027215a8 = 0x6200;
        _DAT_027215b0 = "bool";
        _DAT_027215b8 = 0;
        uRam00000000027215c0 = 0;
        _DAT_027215c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x18c) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6710();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x32) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6890();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x194) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027216a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721670 = FUN_000b6330();
        _DAT_02721668 = "_verticalScrollerWidth";
        _DAT_02721678 = 0;
        _DAT_02721680 = 0x6600;
        _DAT_02721688 = "GNCoord";
        _DAT_02721690 = 0;
        uRam0000000002721698 = 0;
        _DAT_027216a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027216f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027216b8 = FUN_000b6330();
        _DAT_027216b0 = "_horizontalScrollerHeight";
        _DAT_027216c0 = 0;
        _DAT_027216c8 = 0x6600;
        _DAT_027216d0 = "GNCoord";
        _DAT_027216d8 = 0;
        uRam00000000027216e0 = 0;
        _DAT_027216e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6a10();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNScrollView");
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_000b6330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6b00();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceLayoutDelegate");
  }
  return;
}


