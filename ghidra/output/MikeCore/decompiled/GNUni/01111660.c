// Function: FUN_01111660
// Address: 01111660
// Size: 760 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MUFunction"
//   "MUDataPointLinearFunction"
//   "double"
//   "_xDistanceResolutionForLinearApproximation"
//   "_yDistanceResolutionForLinearApproximation"
//   "_didRequestCacheValidation"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01111660(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01111a30();
  *unaff_RDI = &DAT_025dd278;
  FUN_01111e60();
  *unaff_RDI = &DAT_025dce00;
  unaff_RDI[10] = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02794450 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02794418 = FUN_01111330();
        _DAT_02794410 = "_xDistanceResolutionForLinearApproximation";
        _DAT_02794420 = 0;
        _DAT_02794428 = 0x6400;
        _DAT_02794430 = "double";
        _DAT_02794438 = 0;
        uRam0000000002794440 = 0;
        _DAT_02794448 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02794498 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02794460 = FUN_01111330();
        _DAT_02794458 = "_yDistanceResolutionForLinearApproximation";
        _DAT_02794468 = 0;
        _DAT_02794470 = 0x6400;
        _DAT_02794478 = "double";
        _DAT_02794480 = 0;
        uRam0000000002794488 = 0;
        _DAT_02794490 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01112150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUDataPointLinearFunction");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01112240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunction");
  }
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_01111330();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_02794570 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_02794538 = FUN_01111330();
        _DAT_02794530 = "_didRequestCacheValidation";
        _DAT_02794540 = 0;
        _DAT_02794548 = 0x6211;
        _DAT_02794550 = "bool";
        _DAT_02794558 = 0;
        uRam0000000002794560 = 0;
        _DAT_02794568 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


