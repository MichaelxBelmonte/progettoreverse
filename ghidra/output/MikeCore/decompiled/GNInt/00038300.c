// Function: FUN_00038300
// Address: 00038300
// Size: 1006 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_precision"
//   "_minValue"
//   "float"
//   "_maxValue"
//   "_shouldRemoveTrailingZeros"
//   "_precisionRelatesToAllDigits"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038300(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02576110;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0690 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d0658 = FUN_00037f20();
        _DAT_026d0650 = "_precision";
        _DAT_026d0660 = 0;
        _DAT_026d0668 = 0x6900;
        _DAT_026d0670 = "GNInt";
        _DAT_026d0678 = 0;
        uRam00000000026d0680 = 0;
        _DAT_026d0688 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273e360 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273e328 = FUN_00037f20();
        _DAT_0273e320 = "_minValue";
        _DAT_0273e330 = 0;
        _DAT_0273e338 = 0x6600;
        _DAT_0273e340 = "float";
        _DAT_0273e348 = 0;
        uRam000000000273e350 = 0;
        _DAT_0273e358 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d06e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d06a8 = FUN_00037f20();
        _DAT_026d06a0 = "_maxValue";
        _DAT_026d06b0 = 0;
        _DAT_026d06b8 = 0x6600;
        _DAT_026d06c0 = "float";
        _DAT_026d06c8 = 0;
        uRam00000000026d06d0 = 0;
        _DAT_026d06d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_000387e0();
  *(undefined1 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d0730 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d06f8 = FUN_00037f20();
        _DAT_026d06f0 = "_shouldRemoveTrailingZeros";
        _DAT_026d0700 = 0;
        _DAT_026d0708 = 0x6200;
        _DAT_026d0710 = "bool";
        _DAT_026d0718 = 0;
        uRam00000000026d0720 = 0;
        _DAT_026d0728 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x21) = 0;
  lVar2 = FUN_00037f20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273e400 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273e3c8 = FUN_00037f20();
        _DAT_0273e3c0 = "_precisionRelatesToAllDigits";
        _DAT_0273e3d0 = 0;
        _DAT_0273e3d8 = 0x6200;
        _DAT_0273e3e0 = "bool";
        _DAT_0273e3e8 = 0;
        uRam000000000273e3f0 = 0;
        _DAT_0273e3f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_000388c0();
  FUN_000389a0();
  FUN_00038a80();
  FUN_00038b60();
  FUN_00038c40();
  return;
}


