// Function: FUN_00bd1510
// Address: 00bd1510
// Size: 648 bytes
// Class: GNPlugInWrapperDelegate


/* WARNING: Removing unreachable block (ram,0x00bd15c7) */
/* WARNING: Removing unreachable block (ram,0x00bd1590) */
/* WARNING: Removing unreachable block (ram,0x00bd1587) */
/* WARNING: Removing unreachable block (ram,0x00bd15be) */
/* WARNING: Removing unreachable block (ram,0x00bd1711) */
/* WARNING: Removing unreachable block (ram,0x00bd171a) */

void FUN_00bd1510(void)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong local_38;
  char local_30;
  
  if (unaff_RDI[6] != 0) {
    (**(code **)(*unaff_RDI + 0x5f0))();
  }
  cVar2 = (**(code **)(*(longlong *)unaff_RDI[5] + 0x390))();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0x4d8))();
  }
  if (unaff_RDI[0xd] != 0) {
    FUN_00b34c40();
  }
  FUN_00b34cd0();
  FUN_00b32c10();
  (**(code **)(*DAT_028a5770 + 0x368))();
  lVar3 = unaff_RDI[5];
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  FUN_00b69160();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_00b690c0();
  iVar1 = *(int *)(local_38 + 0xc);
  if (local_30 != '\0') {
    FUN_00d50b20();
  }
  if (iVar1 == 0) {
    lVar3 = unaff_RDI[0xc];
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    FUN_00b680a0();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50130();
  }
  if (unaff_RDI[0xc] != 0) {
    unaff_RDI[0xc] = 0;
    FUN_00d50b20();
  }
  lVar3 = unaff_RDI[0xb];
  if (lVar3 != DAT_028a5780) {
    FUN_00b68000();
    iVar1 = *(int *)(local_38 + 0xc);
    if (local_30 != '\0') {
      FUN_00d50b20();
    }
    if (iVar1 == 0) {
      lVar3 = unaff_RDI[0xb];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      FUN_00d7a770();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50130();
    }
    lVar3 = unaff_RDI[0xb];
  }
  if (lVar3 != 0) {
    unaff_RDI[0xb] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*DAT_028a5770 + 0x378))();
  FUN_00d50130();
  if (unaff_RDI[5] != 0) {
    unaff_RDI[5] = 0;
    FUN_00d50b20();
  }
  FUN_00d50550();
  return;
}


