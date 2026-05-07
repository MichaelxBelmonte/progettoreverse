// Function: FUN_011b9c20
// Address: 011b9c20
// Size: 510 bytes
// Class: GNUni
// String references:
//   "bool"
//   "GNUni"
//   "MULoopLibrary"
//   "_attributeOptionTypes"
//   "MUTagAttributeOption"
//   "_optionType"
//   "_isHierarchical"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011b9c20(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_01150e50();
  *unaff_RDI = &DAT_025c4838;
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar2 = FUN_011b98d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_027b45a0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_027b4568 = FUN_011b98d0();
        _DAT_027b4560 = "_isHierarchical";
        _DAT_027b4570 = 0;
        _DAT_027b4578 = 0x6200;
        _DAT_027b4580 = "bool";
        _DAT_027b4588 = 0;
        uRam00000000027b4590 = 0;
        _DAT_027b4598 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011b9ed0();
  unaff_RDI[9] = 0;
  lVar2 = FUN_011b98d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011b9fb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_optionType";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_011b98d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011ba0a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_attributeOptionTypes";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_011b98d0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011ba190();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_optionType";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUTagAttributeOption");
  }
  FUN_011ba280();
  return;
}


