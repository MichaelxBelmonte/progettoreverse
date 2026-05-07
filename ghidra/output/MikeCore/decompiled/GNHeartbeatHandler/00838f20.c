// Function: FUN_00838f20
// Address: 00838f20
// Size: 1678 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "GNHeartbeatHandler"
//   "GNCoord"
//   "_delay"
//   "_length"
//   "_showsStereo"
//   "_timerRegistered"
//   "_left"
//   "_right"
//   "_leftTime"
//   "_rightTime"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00838f20(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_000f62d0();
  unaff_RDI[0x39] = &DAT_024c8618;
  if (DAT_026ff970 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e0230 = "GNHeartbeatHandler";
      DAT_026e0240 = 0;
      _DAT_026e0238 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02636b48;
  unaff_RDI[2] = &DAT_02637618;
  unaff_RDI[0x39] = &DAT_02637658;
  *(undefined4 *)(unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00839650();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1d4) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027363d0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736398 = FUN_00838c60();
        _DAT_02736390 = "_showsStereo";
        _DAT_027363a0 = 0;
        _DAT_027363a8 = 0x6200;
        _DAT_027363b0 = "bool";
        _DAT_027363b8 = 0;
        uRam00000000027363c0 = 0;
        _DAT_027363c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1d5) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02736418 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027363e0 = FUN_00838c60();
        _DAT_027363d8 = "_timerRegistered";
        _DAT_027363e8 = 0;
        _DAT_027363f0 = 0x6200;
        _DAT_027363f8 = "bool";
        _DAT_02736400 = 0;
        uRam0000000002736408 = 0;
        _DAT_02736410 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3b) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02736460 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736428 = FUN_00838c60();
        _DAT_02736420 = "_left";
        _DAT_02736430 = 0;
        _DAT_02736438 = 0x6600;
        _DAT_02736440 = "GNCoord";
        _DAT_02736448 = 0;
        uRam0000000002736450 = 0;
        _DAT_02736458 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1dc) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027364a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736470 = FUN_00838c60();
        _DAT_02736468 = "_right";
        _DAT_02736478 = 0;
        _DAT_02736480 = 0x6600;
        _DAT_02736488 = "GNCoord";
        _DAT_02736490 = 0;
        uRam0000000002736498 = 0;
        _DAT_027364a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027364f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027364b8 = FUN_00838c60();
        _DAT_027364b0 = "_length";
        _DAT_027364c0 = 0;
        _DAT_027364c8 = 0x6600;
        _DAT_027364d0 = "GNCoord";
        _DAT_027364d8 = 0;
        uRam00000000027364e0 = 0;
        _DAT_027364e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3d] = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02736538 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736500 = FUN_00838c60();
        _DAT_027364f8 = "_leftTime";
        _DAT_02736508 = 0;
        _DAT_02736510 = 0x6400;
        _DAT_02736518 = "double";
        _DAT_02736520 = 0;
        uRam0000000002736528 = 0;
        _DAT_02736530 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3e] = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02736580 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736548 = FUN_00838c60();
        _DAT_02736540 = "_rightTime";
        _DAT_02736550 = 0;
        _DAT_02736558 = 0x6400;
        _DAT_02736560 = "double";
        _DAT_02736568 = 0;
        uRam0000000002736570 = 0;
        _DAT_02736578 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3f] = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027365c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02736590 = FUN_00838c60();
        _DAT_02736588 = "_delay";
        _DAT_02736598 = 0;
        _DAT_027365a0 = 0x6400;
        _DAT_027365a8 = "double";
        _DAT_027365b0 = 0;
        uRam00000000027365b8 = 0;
        _DAT_027365c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x40) = 0;
  lVar2 = FUN_00838c60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_008397d0();
    FUN_00e87980();
  }
  return;
}


