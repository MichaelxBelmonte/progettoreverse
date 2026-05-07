// Function: FUN_001bf8f0
// Address: 001bf8f0
// Size: 724 bytes
// Class: GNUni
// String references:
//   "GNUni"
//   "GNControl"
//   "GNSize"
//   "_intercellSpacing"
//   "_matrixSize"
//   "_suggestedCellSize"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001bf8f0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_000f62d0();
  *unaff_RDI = &DAT_026ab048;
  unaff_RDI[2] = &DAT_026abb78;
  *(undefined4 *)(unaff_RDI + 0x39) = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001bfc30();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1cc) = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ead30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026eacf8 = FUN_001bf670();
        _DAT_026eacf0 = "_matrixSize";
        _DAT_026ead00 = 0;
        _DAT_026ead08 = 0x5300;
        _DAT_026ead10 = "GNSize";
        _DAT_026ead18 = 0;
        uRam00000000026ead20 = 0;
        _DAT_026ead28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1d4) = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ead78 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ead40 = FUN_001bf670();
        _DAT_026ead38 = "_intercellSpacing";
        _DAT_026ead48 = 0;
        _DAT_026ead50 = 0x5300;
        _DAT_026ead58 = "GNSize";
        _DAT_026ead60 = 0;
        uRam00000000026ead68 = 0;
        _DAT_026ead70 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1dc) = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026eadc0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ead88 = FUN_001bf670();
        _DAT_026ead80 = "_suggestedCellSize";
        _DAT_026ead90 = 0;
        _DAT_026ead98 = 0x5300;
        _DAT_026eada0 = "GNSize";
        _DAT_026eada8 = 0;
        uRam00000000026eadb0 = 0;
        _DAT_026eadb8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x3d] = 0;
  lVar2 = FUN_001bf670();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001bfdb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNControl");
  }
  return;
}


