// Function: FUN_00b12ed0
// Address: 00b12ed0
// Size: 1784 bytes
// Class: GNInt
// String references:
//   "float"
//   "_time"
//   "_nextBeepStartTime"
//   "_beepTime"
//   "_beepLength"
//   "_startPeriod"
//   "_startVariance"
//   "_endPeriod"
//   "_endVariance"
//   "_progression"
//   "_isDemoBeepPlaying"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b12ed0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_005fea00();
  *unaff_RDI = &DAT_02546b98;
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c850 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c818 = FUN_00b12ca0();
        _DAT_0275c810 = "_time";
        _DAT_0275c820 = 0;
        _DAT_0275c828 = 0x6600;
        _DAT_0275c830 = "float";
        _DAT_0275c838 = 0;
        uRam000000000275c840 = 0;
        _DAT_0275c848 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x94) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c898 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c860 = FUN_00b12ca0();
        _DAT_0275c858 = "_nextBeepStartTime";
        _DAT_0275c868 = 0;
        _DAT_0275c870 = 0x6600;
        _DAT_0275c878 = "float";
        _DAT_0275c880 = 0;
        uRam000000000275c888 = 0;
        _DAT_0275c890 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c8e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c8a8 = FUN_00b12ca0();
        _DAT_0275c8a0 = "_beepTime";
        _DAT_0275c8b0 = 0;
        _DAT_0275c8b8 = 0x6600;
        _DAT_0275c8c0 = "float";
        _DAT_0275c8c8 = 0;
        uRam000000000275c8d0 = 0;
        _DAT_0275c8d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c928 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c8f0 = FUN_00b12ca0();
        _DAT_0275c8e8 = "_beepLength";
        _DAT_0275c8f8 = 0;
        _DAT_0275c900 = 0x6600;
        _DAT_0275c908 = "float";
        _DAT_0275c910 = 0;
        uRam000000000275c918 = 0;
        _DAT_0275c920 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c970 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c938 = FUN_00b12ca0();
        _DAT_0275c930 = "_startPeriod";
        _DAT_0275c940 = 0;
        _DAT_0275c948 = 0x6600;
        _DAT_0275c950 = "float";
        _DAT_0275c958 = 0;
        uRam000000000275c960 = 0;
        _DAT_0275c968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xa4) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275c9b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c980 = FUN_00b12ca0();
        _DAT_0275c978 = "_startVariance";
        _DAT_0275c988 = 0;
        _DAT_0275c990 = 0x6600;
        _DAT_0275c998 = "float";
        _DAT_0275c9a0 = 0;
        uRam000000000275c9a8 = 0;
        _DAT_0275c9b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ca00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275c9c8 = FUN_00b12ca0();
        _DAT_0275c9c0 = "_endPeriod";
        _DAT_0275c9d0 = 0;
        _DAT_0275c9d8 = 0x6600;
        _DAT_0275c9e0 = "float";
        _DAT_0275c9e8 = 0;
        uRam000000000275c9f0 = 0;
        _DAT_0275c9f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ca48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ca10 = FUN_00b12ca0();
        _DAT_0275ca08 = "_endVariance";
        _DAT_0275ca18 = 0;
        _DAT_0275ca20 = 0x6600;
        _DAT_0275ca28 = "float";
        _DAT_0275ca30 = 0;
        uRam000000000275ca38 = 0;
        _DAT_0275ca40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275ca90 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275ca58 = FUN_00b12ca0();
        _DAT_0275ca50 = "_progression";
        _DAT_0275ca60 = 0;
        _DAT_0275ca68 = 0x6600;
        _DAT_0275ca70 = "float";
        _DAT_0275ca78 = 0;
        uRam000000000275ca80 = 0;
        _DAT_0275ca88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_00b12ca0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0275cad8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0275caa0 = FUN_00b12ca0();
        _DAT_0275ca98 = "_isDemoBeepPlaying";
        _DAT_0275caa8 = 0;
        _DAT_0275cab0 = 0x6900;
        _DAT_0275cab8 = "GNInt";
        _DAT_0275cac0 = 0;
        uRam000000000275cac8 = 0;
        _DAT_0275cad0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


