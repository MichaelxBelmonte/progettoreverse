// Function: FUN_0085a3b0
// Address: 0085a3b0
// Size: 569 bytes
// Class: GNFraction
// String references:
//   "GNFraction"
//   "_offset"
//   "_linesPerSecond"
//   "_secondsPerGrid"
//   "double"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0085a3b0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_008233b0();
  *unaff_RDI = &DAT_02639cd8;
  *(undefined8 *)((longlong)unaff_RDI + 0x24) = 0x100000000;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273c650 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273c618 = FUN_000be800();
        _DAT_0273c610 = "_linesPerSecond";
        _DAT_0273c620 = 0;
        _DAT_0273c628 = 0x7100;
        _DAT_0273c630 = "GNFraction";
        _DAT_0273c638 = 0;
        uRam000000000273c640 = 0;
        _DAT_0273c648 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273c698 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273c660 = FUN_000be800();
        _DAT_0273c658 = "_secondsPerGrid";
        _DAT_0273c668 = 0;
        _DAT_0273c670 = 0x6400;
        _DAT_0273c678 = "double";
        _DAT_0273c680 = 0;
        uRam000000000273c688 = 0;
        _DAT_0273c690 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_000be800();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273c6e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273c6a8 = FUN_000be800();
        _DAT_0273c6a0 = "_offset";
        _DAT_0273c6b0 = 0;
        _DAT_0273c6b8 = 0x6400;
        _DAT_0273c6c0 = "double";
        _DAT_0273c6c8 = 0;
        uRam000000000273c6d0 = 0;
        _DAT_0273c6d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0085a660();
  return;
}


