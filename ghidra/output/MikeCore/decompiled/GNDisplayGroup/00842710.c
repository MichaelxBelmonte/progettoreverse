// Function: FUN_00842710
// Address: 00842710
// Size: 506 bytes
// Class: GNDisplayGroup
// String references:
//   "GNDisplayGroup"
//   "GNEditingContext"
//   "GNButton"
//   "GNDisplayGroupDelegate"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00842710(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_026443d8;
  FUN_008429d0();
  unaff_RDI[0xf] = &DAT_0267efd8;
  if (DAT_026eba00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e6cc0 = "GNDisplayGroupDelegate";
      DAT_027e6cd0 = 0;
      _DAT_027e6cc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c40();
  *unaff_RDI = &DAT_02642db0;
  unaff_RDI[0xf] = &DAT_02643398;
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_00842350();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00842cb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNButton");
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_00842350();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00842da0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNDisplayGroup");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00842350();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00842e90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  FUN_00842f80();
  return;
}


