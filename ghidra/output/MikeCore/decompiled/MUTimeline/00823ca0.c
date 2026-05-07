// Function: FUN_00823ca0
// Address: 00823ca0
// Size: 959 bytes
// Class: MUTimeline
// String references:
//   "bool"
//   "MUTimeline"
//   "GNPropertyObserver"
//   "_numerator"
//   "_denominator"
//   "_offset"
//   "_isDynamicTimeGrid"
//   "double"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00823ca0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_008233b0();
  unaff_RDI[5] = &DAT_025768d0;
  if (DAT_026ea710 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f7680 = "GNPropertyObserver";
      DAT_026f7690 = 0;
      _DAT_026f7688 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02639460;
  unaff_RDI[5] = &DAT_02639858;
  unaff_RDI[6] = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00824120();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeline");
  }
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731828 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027317f0 = FUN_00083c20();
        _DAT_027317e8 = "_numerator";
        _DAT_027317f8 = 0;
        _DAT_02731800 = 0x6900;
        _DAT_02731808 = "GNInt";
        _DAT_02731810 = 0;
        uRam0000000002731818 = 0;
        _DAT_02731820 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731870 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731838 = FUN_00083c20();
        _DAT_02731830 = "_denominator";
        _DAT_02731840 = 0;
        _DAT_02731848 = 0x6900;
        _DAT_02731850 = "GNInt";
        _DAT_02731858 = 0;
        uRam0000000002731860 = 0;
        _DAT_02731868 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027318b8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731880 = FUN_00083c20();
        _DAT_02731878 = "_offset";
        _DAT_02731888 = 0;
        _DAT_02731890 = 0x6400;
        _DAT_02731898 = "double";
        _DAT_027318a0 = 0;
        uRam00000000027318a8 = 0;
        _DAT_027318b0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00824210();
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar2 = FUN_00083c20();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02731948 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02731910 = FUN_00083c20();
        _DAT_02731908 = "_isDynamicTimeGrid";
        _DAT_02731918 = 0;
        _DAT_02731920 = 0x6200;
        _DAT_02731928 = "bool";
        _DAT_02731930 = 0;
        uRam0000000002731938 = 0;
        _DAT_02731940 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


