// Function: FUN_00c1a2c0
// Address: 00c1a2c0
// Size: 623 bytes
// Class: GNOverloudParametricEQ


/* WARNING: Removing unreachable block (ram,0x00c1a47b) */
/* WARNING: Removing unreachable block (ram,0x00c1a484) */
/* WARNING: Removing unreachable block (ram,0x00c1a3db) */
/* WARNING: Removing unreachable block (ram,0x00c1a3e4) */
/* WARNING: Removing unreachable block (ram,0x00c1a42b) */
/* WARNING: Removing unreachable block (ram,0x00c1a434) */
/* WARNING: Removing unreachable block (ram,0x00c1a4cb) */
/* WARNING: Removing unreachable block (ram,0x00c1a4d4) */

void FUN_00c1a2c0(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5e10;
  if (param_2 != 7) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5e10 == (undefined8 *)0x0) || (DAT_028a5e19 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5e10 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5e10 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5e10 != (undefined8 *)0x0;
        DAT_028a5e10 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5e18 == '\0') {
        DAT_028a5e18 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c590;
      if (DAT_0276c590 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c598;
      if (DAT_0276c598 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c5a0;
      if (DAT_0276c5a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c5a8;
      if (DAT_0276c5a8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5e19 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5e19 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5e10;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c1a511;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c1a511:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


