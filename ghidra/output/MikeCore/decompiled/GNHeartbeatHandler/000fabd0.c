// Function: FUN_000fabd0
// Address: 000fabd0
// Size: 1175 bytes
// Class: GNHeartbeatHandler
// String references:
//   "bool"
//   "GNHeartbeatHandler"
//   "_isBordered"
//   "_isDefaultButton"
//   "_imageOffset"
//   "GNPoint"
//   "_flashingTime"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fabd0(void)

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
  *unaff_RDI = &DAT_02677e10;
  unaff_RDI[2] = &DAT_026788e8;
  unaff_RDI[0x39] = &DAT_02678928;
  FUN_000fb150();
  FUN_000fb230();
  FUN_000fb310();
  FUN_000fb3f0();
  *(undefined1 *)(unaff_RDI + 0x3e) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e03b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e0378 = FUN_000f5df0();
        _DAT_026e0370 = "_isBordered";
        _DAT_026e0380 = 0;
        _DAT_026e0388 = 0x6200;
        _DAT_026e0390 = "bool";
        _DAT_026e0398 = 0;
        uRam00000000026e03a0 = 0;
        _DAT_026e03a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 500) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb4d0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x3f) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e04b0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e0478 = FUN_000f5df0();
        _DAT_026e0470 = "_isDefaultButton";
        _DAT_026e0480 = 0;
        _DAT_026e0488 = 0x6200;
        _DAT_026e0490 = "bool";
        _DAT_026e0498 = 0;
        uRam00000000026e04a0 = 0;
        _DAT_026e04a8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1fc) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb650();
    FUN_00e87980();
  }
  FUN_000fb7e0();
  unaff_RDI[0x41] = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e0588 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e0550 = FUN_000f5df0();
        _DAT_026e0548 = "_imageOffset";
        _DAT_026e0558 = 0;
        _DAT_026e0560 = 0x5000;
        _DAT_026e0568 = "GNPoint";
        _DAT_026e0570 = 0;
        uRam00000000026e0578 = 0;
        _DAT_026e0580 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x42) = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000fb8c0();
    FUN_00e87980();
  }
  unaff_RDI[0x43] = 0;
  lVar2 = FUN_000f5df0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026e06a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026e0670 = FUN_000f5df0();
        _DAT_026e0668 = "_flashingTime";
        _DAT_026e0678 = 0;
        _DAT_026e0680 = 0x6401;
        _DAT_026e0688 = "double";
        _DAT_026e0690 = 0;
        uRam00000000026e0698 = 0;
        _DAT_026e06a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


