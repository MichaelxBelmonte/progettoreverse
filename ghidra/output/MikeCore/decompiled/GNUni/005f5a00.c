// Function: FUN_005f5a00
// Address: 005f5a00
// Size: 1109 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "GNValue"
//   "GNView"
//   "GNCoord"
//   "MDWorkspaceLayoutStrategy"
//   "MDWorkspaceLayoutViewDelegate"
//   "_layoutView"
//   "_isRoot"
//   "_dumpLayout"
//   "_workspaceNeedsLayout"
//   "_spacing"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005f5a00(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000a5ee0();
  *unaff_RDI = &DAT_025085a0;
  unaff_RDI[2] = &DAT_02508fd0;
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027212c0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721288 = FUN_000a94a0();
        _DAT_02721280 = "_isRoot";
        _DAT_02721290 = 0;
        _DAT_02721298 = 0x6200;
        _DAT_027212a0 = "bool";
        _DAT_027212a8 = 0;
        uRam00000000027212b0 = 0;
        _DAT_027212b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x189) = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02721308 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027212d0 = FUN_000a94a0();
        _DAT_027212c8 = "_dumpLayout";
        _DAT_027212d8 = 0;
        _DAT_027212e0 = 0x6200;
        _DAT_027212e8 = "bool";
        _DAT_027212f0 = 0;
        uRam00000000027212f8 = 0;
        _DAT_02721300 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x18a) = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02721350 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721318 = FUN_000a94a0();
        _DAT_02721310 = "_workspaceNeedsLayout";
        _DAT_02721320 = 0;
        _DAT_02721328 = 0x6200;
        _DAT_02721330 = "bool";
        _DAT_02721338 = 0;
        uRam0000000002721340 = 0;
        _DAT_02721348 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x18c) = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02721398 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02721360 = FUN_000a94a0();
        _DAT_02721358 = "_spacing";
        _DAT_02721368 = 0;
        _DAT_02721370 = 0x6600;
        _DAT_02721378 = "GNCoord";
        _DAT_02721380 = 0;
        uRam0000000002721388 = 0;
        _DAT_02721390 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f5f30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_layoutView";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceLayoutStrategy");
  }
  unaff_RDI[0x33] = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNValue");
  }
  unaff_RDI[0x34] = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6110();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MDWorkspaceLayoutViewDelegate");
  }
  unaff_RDI[0x35] = 0;
  lVar2 = FUN_000a94a0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_005f6250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  return;
}


