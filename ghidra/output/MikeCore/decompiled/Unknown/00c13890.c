// Function: FUN_00c13890
// Address: 00c13890
// Size: 1405 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00c13d3b) */
/* WARNING: Removing unreachable block (ram,0x00c13d44) */
/* WARNING: Removing unreachable block (ram,0x00c13a88) */
/* WARNING: Removing unreachable block (ram,0x00c13a91) */
/* WARNING: Removing unreachable block (ram,0x00c13c8a) */
/* WARNING: Removing unreachable block (ram,0x00c13c93) */
/* WARNING: Removing unreachable block (ram,0x00c13bea) */
/* WARNING: Removing unreachable block (ram,0x00c13bf3) */
/* WARNING: Removing unreachable block (ram,0x00c13c3a) */
/* WARNING: Removing unreachable block (ram,0x00c13c43) */
/* WARNING: Removing unreachable block (ram,0x00c13a38) */
/* WARNING: Removing unreachable block (ram,0x00c13a41) */
/* WARNING: Removing unreachable block (ram,0x00c13ad8) */
/* WARNING: Removing unreachable block (ram,0x00c13ae1) */
/* WARNING: Removing unreachable block (ram,0x00c13d8b) */
/* WARNING: Removing unreachable block (ram,0x00c13d94) */

void FUN_00c13890(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar4;
  float fVar5;
  
  puVar3 = DAT_028a5d70;
  if (param_2 == 7) {
    if ((DAT_028a5d80 == (undefined8 *)0x0) || (DAT_028a5d89 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5d80 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5d80 == puVar3) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar4 = DAT_028a5d80 != (undefined8 *)0x0;
          DAT_028a5d80 = puVar3;
          if (bVar4) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5d88 == '\0') {
          DAT_028a5d88 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c3e8;
        if (DAT_0276c3e8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c3f0;
        if (DAT_0276c3f0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c3f8;
        if (DAT_0276c3f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5d89 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5d89 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((DAT_028a5d90 == (undefined8 *)0x0) || (DAT_028a5d99 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5d90 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5d90 == puVar3) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar4 = DAT_028a5d90 != (undefined8 *)0x0;
          DAT_028a5d90 = puVar3;
          if (bVar4) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5d98 == '\0') {
          DAT_028a5d98 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c3e8;
        if (DAT_0276c3e8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c3f0;
        if (DAT_0276c3f0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5d99 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5d99 = '\x01';
        FUN_00e8cb70();
      }
    }
    fVar5 = (float)(**(code **)(*unaff_RSI + 0x458))();
    bVar1 = NAN(DAT_02390d34);
    bVar4 = fVar5 == DAT_02390d34;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    puVar3 = DAT_028a5d80;
    if ((bVar4) && (!NAN(fVar5) && !bVar1)) {
      puVar3 = DAT_028a5d90;
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    if (param_2 != 0) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5d70 == (undefined8 *)0x0) || (DAT_028a5d79 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5d70 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5d70 == puVar3) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar4 = DAT_028a5d70 != (undefined8 *)0x0;
          DAT_028a5d70 = puVar3;
          if (bVar4) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5d78 == '\0') {
          DAT_028a5d78 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c3d0;
        if (DAT_0276c3d0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c3d8;
        if (DAT_0276c3d8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276c3e0;
        if (DAT_0276c3e0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5d79 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5d79 = '\x01';
        FUN_00e8cb70();
      }
      puVar3 = DAT_028a5d70;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar3 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto LAB_00c13de5;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c13de5:
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


