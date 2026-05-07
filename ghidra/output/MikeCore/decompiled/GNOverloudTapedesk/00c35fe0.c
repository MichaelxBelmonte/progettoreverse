// Function: FUN_00c35fe0
// Address: 00c35fe0
// Size: 703 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x00c361eb) */
/* WARNING: Removing unreachable block (ram,0x00c361f4) */
/* WARNING: Removing unreachable block (ram,0x00c3614b) */
/* WARNING: Removing unreachable block (ram,0x00c36154) */
/* WARNING: Removing unreachable block (ram,0x00c360fb) */
/* WARNING: Removing unreachable block (ram,0x00c36104) */
/* WARNING: Removing unreachable block (ram,0x00c3619b) */
/* WARNING: Removing unreachable block (ram,0x00c361a4) */
/* WARNING: Removing unreachable block (ram,0x00c3623b) */
/* WARNING: Removing unreachable block (ram,0x00c36244) */

void FUN_00c35fe0(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5f78;
  if (param_2 != 0x13) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5f78 == (undefined8 *)0x0) || (DAT_028a5f81 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5f78 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5f78 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5f78 != (undefined8 *)0x0;
        DAT_028a5f78 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5f80 == '\0') {
        DAT_028a5f80 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cd80;
      if (DAT_0276cd80 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cd88;
      if (DAT_0276cd88 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cd90;
      if (DAT_0276cd90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cd98;
      if (DAT_0276cd98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cda0;
      if (DAT_0276cda0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5f81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5f81 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5f78;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c36281;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c36281:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


