// Function: FUN_00ce1020
// Address: 00ce1020
// Size: 539 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ce10bf) */
/* WARNING: Removing unreachable block (ram,0x00ce11f9) */
/* WARNING: Removing unreachable block (ram,0x00ce11fe) */
/* WARNING: Removing unreachable block (ram,0x00ce1209) */
/* WARNING: Removing unreachable block (ram,0x00ce10c9) */
/* WARNING: Removing unreachable block (ram,0x00ce1068) */
/* WARNING: Removing unreachable block (ram,0x00ce1071) */

void FUN_00ce1020(undefined8 param_1)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RSI + 0x368))();
  if (local_38 == '\0') {
    if (local_40 == 0) goto LAB_00ce10d9;
    FUN_00d50b00();
  }
  else if (local_40 == 0) goto LAB_00ce10d9;
  iVar3 = FUN_00d8c7a0();
  if (1 < iVar3) {
    sVar2 = FUN_00d8cbc0();
    if (((sVar2 == 0x2f) && (FUN_00d97ce0(param_1,iVar3 + -1), local_38 != '\0')) && (local_40 != 0)
       ) {
      FUN_00d50b20();
    }
  }
LAB_00ce10d9:
  if (local_40 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    iVar3 = FUN_00d90c90();
    if (iVar3 == -1) {
      iVar3 = FUN_00d90c90();
      if ((iVar3 == 0) && (iVar3 = FUN_00d8c7a0(), lVar1 = DAT_02704060, 1 < iVar3)) {
        if (DAT_02704060 != 0) {
          FUN_00d50b00();
        }
        FUN_00cddf30();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
      }
    }
    else {
      FUN_00d8ee20();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00cddf30();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  return;
}


