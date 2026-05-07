// Function: FUN_00d05f30
// Address: 00d05f30
// Size: 1313 bytes
// Class: GNInt
// String references:
//   "bool"
//   "SInt64"
//   "_didFail"
//   "_isSuspended"
//   "_uploadLength"
//   "_didTimeOut"
//   "_httpStatusCode"
//   "_expectedResultLength"
//   "_receivedResultLength"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d05f30(void)

{
  int iVar1;
  longlong lVar2;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00e95410();
  *unaff_RDI = &DAT_0258d9f8;
  unaff_RDI[7] = *(undefined8 *)(unaff_RSI + 0x38);
  FUN_00d06520();
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c560 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c528 = FUN_00d05d00();
        _DAT_0277c520 = "_didFail";
        _DAT_0277c530 = 0;
        _DAT_0277c538 = 0x6200;
        _DAT_0277c540 = "bool";
        _DAT_0277c548 = 0;
        uRam000000000277c550 = 0;
        _DAT_0277c558 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00d06600();
  *(undefined4 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c5f0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c5b8 = FUN_00d05d00();
        _DAT_0277c5b0 = "_expectedResultLength";
        _DAT_0277c5c0 = 0;
        _DAT_0277c5c8 = 0x6900;
        _DAT_0277c5d0 = "GNInt";
        _DAT_0277c5d8 = 0;
        uRam000000000277c5e0 = 0;
        _DAT_0277c5e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c638 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c600 = FUN_00d05d00();
        _DAT_0277c5f8 = "_httpStatusCode";
        _DAT_0277c608 = 0;
        _DAT_0277c610 = 0x6900;
        _DAT_0277c618 = "GNInt";
        _DAT_0277c620 = 0;
        uRam000000000277c628 = 0;
        _DAT_0277c630 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c680 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c648 = FUN_00d05d00();
        _DAT_0277c640 = "_isSuspended";
        _DAT_0277c650 = 0;
        _DAT_0277c658 = 0x6200;
        _DAT_0277c660 = "bool";
        _DAT_0277c668 = 0;
        uRam000000000277c670 = 0;
        _DAT_0277c678 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00d066e0();
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c710 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c6d8 = FUN_00d05d00();
        _DAT_0277c6d0 = "_uploadLength";
        _DAT_0277c6e0 = 0;
        _DAT_0277c6e8 = 0x6c00;
        _DAT_0277c6f0 = "SInt64";
        _DAT_0277c6f8 = 0;
        uRam000000000277c700 = 0;
        _DAT_0277c708 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c758 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c720 = FUN_00d05d00();
        _DAT_0277c718 = "_receivedResultLength";
        _DAT_0277c728 = 0;
        _DAT_0277c730 = 0x6900;
        _DAT_0277c738 = "GNInt";
        _DAT_0277c740 = 0;
        uRam000000000277c748 = 0;
        _DAT_0277c750 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_00d05d00();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277c7a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277c768 = FUN_00d05d00();
        _DAT_0277c760 = "_didTimeOut";
        _DAT_0277c770 = 0;
        _DAT_0277c778 = 0x6200;
        _DAT_0277c780 = "bool";
        _DAT_0277c788 = 0;
        uRam000000000277c790 = 0;
        _DAT_0277c798 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


