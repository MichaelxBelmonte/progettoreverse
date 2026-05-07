// Function: FUN_00c319e0
// Address: 00c319e0
// Size: 1459 bytes
// Class: GNOverloudTapedesk


/* WARNING: Removing unreachable block (ram,0x00c31d91) */
/* WARNING: Removing unreachable block (ram,0x00c31d9a) */
/* WARNING: Removing unreachable block (ram,0x00c31c93) */
/* WARNING: Removing unreachable block (ram,0x00c31c9c) */
/* WARNING: Removing unreachable block (ram,0x00c31c43) */
/* WARNING: Removing unreachable block (ram,0x00c31c4c) */
/* WARNING: Removing unreachable block (ram,0x00c31ce3) */
/* WARNING: Removing unreachable block (ram,0x00c31cec) */
/* WARNING: Removing unreachable block (ram,0x00c31edf) */
/* WARNING: Removing unreachable block (ram,0x00c31ee8) */
/* WARNING: Removing unreachable block (ram,0x00c31e8f) */
/* WARNING: Removing unreachable block (ram,0x00c31e98) */
/* WARNING: Removing unreachable block (ram,0x00c31f2f) */
/* WARNING: Removing unreachable block (ram,0x00c31f38) */
/* WARNING: Removing unreachable block (ram,0x00c31de1) */
/* WARNING: Removing unreachable block (ram,0x00c31dea) */

void FUN_00c319e0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5f58;
  puVar3 = DAT_028a5f48;
  puVar5 = DAT_028a5f38;
  if (param_2 == 10) {
    if ((DAT_028a5f58 == (undefined8 *)0x0) || (DAT_028a5f61 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5f58 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5f58 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5f58 != (undefined8 *)0x0;
          DAT_028a5f58 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5f60 == '\0') {
          DAT_028a5f60 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc70;
        if (DAT_0276cc70 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc78;
        if (DAT_0276cc78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5f61 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5f61 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5f58;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c31f77;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c31f79;
  }
  if (param_2 == 9) {
    if ((DAT_028a5f48 == (undefined8 *)0x0) || (DAT_028a5f51 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5f48 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5f48 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5f48 != (undefined8 *)0x0;
          DAT_028a5f48 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5f50 == '\0') {
          DAT_028a5f50 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc58;
        if (DAT_0276cc58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc60;
        if (DAT_0276cc60 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc68;
        if (DAT_0276cc68 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5f51 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5f51 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5f48;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c31f77;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5f38 == (undefined8 *)0x0) || (DAT_028a5f41 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5f38 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5f38 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5f38 != (undefined8 *)0x0;
          DAT_028a5f38 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5f40 == '\0') {
          DAT_028a5f40 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc40;
        if (DAT_0276cc40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc48;
        if (DAT_0276cc48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc50;
        if (DAT_0276cc50 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5f41 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5f41 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5f38;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c31f77:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c31f79;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c31f79:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


