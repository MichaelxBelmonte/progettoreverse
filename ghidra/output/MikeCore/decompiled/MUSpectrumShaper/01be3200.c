// Function: FUN_01be3200
// Address: 01be3200
// Size: 677 bytes
// Class: MUSpectrumShaper
// String references:
//   "GNEditingContext"
//   "GNPropertyObserver"
//   "MULSSGenerator"
//   "MUSpectrumShaperController"
//   "_multipleSelectionHandler"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01be3200(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00006550();
  unaff_RDI[2] = &DAT_025768d0;
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
  *unaff_RDI = &DAT_0265abf8;
  unaff_RDI[2] = &DAT_0265b060;
  unaff_RDI[3] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be35b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_multipleSelectionHandler";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSpectrumShaperController");
  }
  unaff_RDI[4] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be36a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3790();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3880();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3970();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULSSGenerator");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_01bdac40();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01be3a60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  return;
}


