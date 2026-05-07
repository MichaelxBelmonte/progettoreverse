// Function: FUN_01c2b230
// Address: 01c2b230
// Size: 1300 bytes
// Class: GNCoord
// String references:
//   "float"
//   "GNCoord"
//   "_tempo"
//   "GNInt"
//   "MULoop"
//   "_loopSetOrderIndex"
//   "MUTagAttributeOption"
//   "_minWidthToDisplayLoopId"
//   "_matchGrade"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c2b230(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01c27c60();
  *unaff_RDI = &DAT_02663ef8;
  FUN_01c2ba00();
  unaff_RDI[6] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2bae0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoop");
  }
  FUN_01c2bbd0();
  *(undefined4 *)(unaff_RDI + 8) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2bcb0();
    FUN_00e87980();
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2be20();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  FUN_01c2bf10();
  FUN_01c2bff0();
  FUN_01c2c0d0();
  FUN_01c2c1b0();
  FUN_01c2c290();
  FUN_01c2c370();
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ea850 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ea818 = FUN_01c2b000();
        _DAT_027ea810 = "_loopSetOrderIndex";
        _DAT_027ea820 = 0;
        _DAT_027ea828 = 0x6901;
        _DAT_027ea830 = "GNInt";
        _DAT_027ea838 = 0;
        uRam00000000027ea840 = 0;
        _DAT_027ea848 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01c2c450();
  FUN_01c2c530();
  FUN_01c2c610();
  *(undefined4 *)(unaff_RDI + 0x14) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027ea970 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ea938 = FUN_01c2b000();
        _DAT_027ea930 = "_tempo";
        _DAT_027ea940 = 0;
        _DAT_027ea948 = 0x6601;
        _DAT_027ea950 = "float";
        _DAT_027ea958 = 0;
        uRam00000000027ea960 = 0;
        _DAT_027ea968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x15] = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01c2c6f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eaa00 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027ea9c8 = FUN_01c2b000();
        _DAT_027ea9c0 = "_minWidthToDisplayLoopId";
        _DAT_027ea9d0 = 0;
        _DAT_027ea9d8 = 0x6600;
        _DAT_027ea9e0 = "GNCoord";
        _DAT_027ea9e8 = 0;
        uRam00000000027ea9f0 = 0;
        _DAT_027ea9f8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_01c2b000();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027eaa48 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027eaa10 = FUN_01c2b000();
        _DAT_027eaa08 = "_matchGrade";
        _DAT_027eaa18 = 0;
        _DAT_027eaa20 = 0x6600;
        _DAT_027eaa28 = "float";
        _DAT_027eaa30 = 0;
        uRam00000000027eaa38 = 0;
        _DAT_027eaa40 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


