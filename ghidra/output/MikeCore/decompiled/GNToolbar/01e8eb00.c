// Function: FUN_01e8eb00
// Address: 01e8eb00
// Size: 1580 bytes
// Class: GNToolbar
// String references:
//   "float"
//   "_scrollerKnobMargin"
//   "_scrollerBorderRadius"
//   "_rectRadius"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e8eb00(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_001ab9a0();
  *unaff_RDI = &DAT_026a3808;
  FUN_01e8f720();
  FUN_01e8f800();
  FUN_01e8f8e0();
  FUN_01e8f9c0();
  FUN_01e8faa0();
  FUN_01e8fb80();
  FUN_01e8fc60();
  FUN_01e8fd40();
  FUN_01e8fe20();
  FUN_01e8ff00();
  FUN_01e8ffe0();
  FUN_01e900c0();
  FUN_01e901a0();
  FUN_01e90280();
  FUN_01e90360();
  FUN_01e90440();
  FUN_01e90520();
  FUN_01e90600();
  FUN_01e906e0();
  FUN_01e907c0();
  FUN_01e908a0();
  FUN_01e90980();
  FUN_01e90a60();
  FUN_01e90b40();
  FUN_01e90c20();
  FUN_01e90d00();
  FUN_01e90de0();
  FUN_01e90ec0();
  FUN_01e90fa0();
  FUN_01e91080();
  FUN_01e91160();
  FUN_01e91240();
  FUN_01e91320();
  FUN_01e91400();
  FUN_01e914e0();
  FUN_01e915c0();
  FUN_01e916a0();
  FUN_01e91780();
  FUN_01e91860();
  FUN_01e91940();
  *(undefined4 *)(unaff_RDI + 0x2f) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027fc6e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027fc6a8 = FUN_01d74c10();
        _DAT_027fc6a0 = "_rectRadius";
        _DAT_027fc6b0 = 0;
        _DAT_027fc6b8 = 0x6600;
        _DAT_027fc6c0 = "float";
        _DAT_027fc6c8 = 0;
        uRam00000000027fc6d0 = 0;
        _DAT_027fc6d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x17c) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027fc728 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027fc6f0 = FUN_01d74c10();
        _DAT_027fc6e8 = "_scrollerKnobMargin";
        _DAT_027fc6f8 = 0;
        _DAT_027fc700 = 0x6600;
        _DAT_027fc708 = "float";
        _DAT_027fc710 = 0;
        uRam00000000027fc718 = 0;
        _DAT_027fc720 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  lVar2 = FUN_01d74c10();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027fc770 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027fc738 = FUN_01d74c10();
        _DAT_027fc730 = "_scrollerBorderRadius";
        _DAT_027fc740 = 0;
        _DAT_027fc748 = 0x6600;
        _DAT_027fc750 = "float";
        _DAT_027fc758 = 0;
        uRam00000000027fc760 = 0;
        _DAT_027fc768 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


