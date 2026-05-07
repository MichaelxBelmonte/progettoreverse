// Function: FUN_01c2cb70
// Address: 01c2cb70
// Size: 754 bytes
// Class: GNCoord
// String references:
//   "float"
//   "GNCoord"
//   "MULoopComponent"
//   "MUBrowserLoopItem"
//   "_minWidthToDisplayLoopId"
//   "_matchGrade"
//   "_minIconWidth"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c2cb70(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01c27c60();
  *unaff_RDI = &DAT_02656608;
  unaff_RDI[5] = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2cf20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUBrowserLoopItem");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2d010();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopComponent");
  }
  FUN_01c2d100();
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eac38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027eac00 = FUN_01c2c970();
        _DAT_027eabf8 = "_minWidthToDisplayLoopId";
        _DAT_027eac08 = 0;
        _DAT_027eac10 = 0x6600;
        _DAT_027eac18 = "GNCoord";
        _DAT_027eac20 = 0;
        uRam00000000027eac28 = 0;
        _DAT_027eac30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eac80 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027eac48 = FUN_01c2c970();
        _DAT_027eac40 = "_minIconWidth";
        _DAT_027eac50 = 0;
        _DAT_027eac58 = 0x6600;
        _DAT_027eac60 = "GNCoord";
        _DAT_027eac68 = 0;
        uRam00000000027eac70 = 0;
        _DAT_027eac78 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_01c2c970();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eacc8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027eac90 = FUN_01c2c970();
        _DAT_027eac88 = "_matchGrade";
        _DAT_027eac98 = 0;
        _DAT_027eaca0 = 0x6600;
        _DAT_027eaca8 = "float";
        _DAT_027eacb0 = 0;
        uRam00000000027eacb8 = 0;
        _DAT_027eacc0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


