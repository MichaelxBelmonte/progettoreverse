// Function: FUN_007b8500
// Address: 007b8500
// Size: 1217 bytes
// Class: GNInt
// String references:
//   "_baseNote"
//   "_fineTune"
//   "_lowNote"
//   "_highNote"
//   "_lowVelocity"
//   "_highVelocity"
//   "_gain"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007b8500(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02548f60;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c880 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c848 = FUN_007b8310();
        _DAT_0272c840 = "_baseNote";
        _DAT_0272c850 = 0;
        _DAT_0272c858 = 0x6900;
        _DAT_0272c860 = "GNInt";
        _DAT_0272c868 = 0;
        uRam000000000272c870 = 0;
        _DAT_0272c878 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 2) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c8c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c890 = FUN_007b8310();
        _DAT_0272c888 = "_fineTune";
        _DAT_0272c898 = 0;
        _DAT_0272c8a0 = 0x6900;
        _DAT_0272c8a8 = "GNInt";
        _DAT_0272c8b0 = 0;
        uRam000000000272c8b8 = 0;
        _DAT_0272c8c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c910 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c8d8 = FUN_007b8310();
        _DAT_0272c8d0 = "_lowNote";
        _DAT_0272c8e0 = 0;
        _DAT_0272c8e8 = 0x6900;
        _DAT_0272c8f0 = "GNInt";
        _DAT_0272c8f8 = 0;
        uRam000000000272c900 = 0;
        _DAT_0272c908 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 3) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c958 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c920 = FUN_007b8310();
        _DAT_0272c918 = "_highNote";
        _DAT_0272c928 = 0;
        _DAT_0272c930 = 0x6900;
        _DAT_0272c938 = "GNInt";
        _DAT_0272c940 = 0;
        uRam000000000272c948 = 0;
        _DAT_0272c950 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c9a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c968 = FUN_007b8310();
        _DAT_0272c960 = "_lowVelocity";
        _DAT_0272c970 = 0;
        _DAT_0272c978 = 0x6900;
        _DAT_0272c980 = "GNInt";
        _DAT_0272c988 = 0;
        uRam000000000272c990 = 0;
        _DAT_0272c998 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 4) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272c9e8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c9b0 = FUN_007b8310();
        _DAT_0272c9a8 = "_highVelocity";
        _DAT_0272c9b8 = 0;
        _DAT_0272c9c0 = 0x6900;
        _DAT_0272c9c8 = "GNInt";
        _DAT_0272c9d0 = 0;
        uRam000000000272c9d8 = 0;
        _DAT_0272c9e0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  lVar2 = FUN_007b8310();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0272ca30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0272c9f8 = FUN_007b8310();
        _DAT_0272c9f0 = "_gain";
        _DAT_0272ca00 = 0;
        _DAT_0272ca08 = 0x6900;
        _DAT_0272ca10 = "GNInt";
        _DAT_0272ca18 = 0;
        uRam000000000272ca20 = 0;
        _DAT_0272ca28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


