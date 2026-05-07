// Function: FUN_0086a790
// Address: 0086a790
// Size: 933 bytes
// Class: MUElement
// String references:
//   "bool"
//   "MUElement"
//   "GNPropertyObserver"
//   "_timeHandleViews"
//   "_inRegionCheck"
//   "_toolMode"
//   "MUTimeHandleTool"
//   "MUFunctionPoint"
//   "GNInt"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0086a790(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_0059c6c0();
  unaff_RDI[0x2d] = &DAT_025768d0;
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
  *unaff_RDI = &DAT_02637f18;
  unaff_RDI[2] = &DAT_026388a8;
  unaff_RDI[0x27] = &DAT_026388e8;
  unaff_RDI[0x2d] = &DAT_02638918;
  unaff_RDI[0x2e] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ac60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUElement");
  }
  unaff_RDI[0x2f] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ad50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_timeHandleViews";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTimeHandleTool");
  }
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273eb08 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273ead0 = FUN_0086a390();
        _DAT_0273eac8 = "_toolMode";
        _DAT_0273ead8 = 0;
        _DAT_0273eae0 = 0x6901;
        _DAT_0273eae8 = "GNInt";
        _DAT_0273eaf0 = 0;
        uRam000000000273eaf8 = 0;
        _DAT_0273eb00 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x31] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086ae40();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunctionPoint");
  }
  unaff_RDI[0x32] = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0086af30();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUFunctionPoint");
  }
  *(undefined1 *)(unaff_RDI + 0x33) = 0;
  lVar2 = FUN_0086a390();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0273ebe0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0273eba8 = FUN_0086a390();
        _DAT_0273eba0 = "_inRegionCheck";
        _DAT_0273ebb0 = 0;
        _DAT_0273ebb8 = 0x6200;
        _DAT_0273ebc0 = "bool";
        _DAT_0273ebc8 = 0;
        uRam000000000273ebd0 = 0;
        _DAT_0273ebd8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}


