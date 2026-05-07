// Function: FUN_00068b60
// Address: 00068b60
// Size: 572 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_memoryLevel"
//   "_blockSize"
//   "_wantsGZIPHeader"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00068b60(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_0258ed08;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00068df0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d7738 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d7700 = FUN_00068910();
        _DAT_026d76f8 = "_memoryLevel";
        _DAT_026d7708 = 0;
        _DAT_026d7710 = 0x6900;
        _DAT_026d7718 = "GNInt";
        _DAT_026d7720 = 0;
        uRam00000000026d7728 = 0;
        _DAT_026d7730 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d7780 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d7748 = FUN_00068910();
        _DAT_026d7740 = "_blockSize";
        _DAT_026d7750 = 0;
        _DAT_026d7758 = 0x6900;
        _DAT_026d7760 = "GNInt";
        _DAT_026d7768 = 0;
        uRam00000000026d7770 = 0;
        _DAT_026d7778 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 3) = 0;
  lVar2 = FUN_00068910();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d77c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d7790 = FUN_00068910();
        _DAT_026d7788 = "_wantsGZIPHeader";
        _DAT_026d7798 = 0;
        _DAT_026d77a0 = 0x6200;
        _DAT_026d77a8 = "bool";
        _DAT_026d77b0 = 0;
        uRam00000000026d77b8 = 0;
        _DAT_026d77c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


