// Function: FUN_001d1410
// Address: 001d1410
// Size: 607 bytes
// Class: GNString
// String references:
//   "bool"
//   "_dragEnabled"
//   "_dropEnabled"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001d1410(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  
  FUN_000f62d0();
  *unaff_RDI = &DAT_02682cf8;
  unaff_RDI[2] = &DAT_026837c0;
  FUN_001d1700();
  *(undefined4 *)(unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001d17e0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1d4) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001d1970();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x3b) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001d1ae0();
    FUN_00e87980();
  }
  FUN_001d1c70();
  FUN_001d1d50();
  *(undefined1 *)(unaff_RDI + 0x3e) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026edd70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026edd38 = FUN_00099600();
        _DAT_026edd30 = "_dragEnabled";
        _DAT_026edd40 = 0;
        _DAT_026edd48 = 0x6200;
        _DAT_026edd50 = "bool";
        _DAT_026edd58 = 0;
        uRam00000000026edd60 = 0;
        _DAT_026edd68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1f1) = 0;
  lVar2 = FUN_00099600();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026eddb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026edd80 = FUN_00099600();
        _DAT_026edd78 = "_dropEnabled";
        _DAT_026edd88 = 0;
        _DAT_026edd90 = 0x6200;
        _DAT_026edd98 = "bool";
        _DAT_026edda0 = 0;
        uRam00000000026edda8 = 0;
        _DAT_026eddb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


