// Function: FUN_00c18aa0
// Address: 00c18aa0
// Size: 703 bytes
// Class: GNOverloudParametricEQ


/* WARNING: Removing unreachable block (ram,0x00c18cab) */
/* WARNING: Removing unreachable block (ram,0x00c18cb4) */
/* WARNING: Removing unreachable block (ram,0x00c18c0b) */
/* WARNING: Removing unreachable block (ram,0x00c18c14) */
/* WARNING: Removing unreachable block (ram,0x00c18bbb) */
/* WARNING: Removing unreachable block (ram,0x00c18bc4) */
/* WARNING: Removing unreachable block (ram,0x00c18c5b) */
/* WARNING: Removing unreachable block (ram,0x00c18c64) */
/* WARNING: Removing unreachable block (ram,0x00c18cfb) */
/* WARNING: Removing unreachable block (ram,0x00c18d04) */

void FUN_00c18aa0(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5df0;
  if (param_2 != 4) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5df0 == (undefined8 *)0x0) || (DAT_028a5df9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5df0 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5df0 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5df0 != (undefined8 *)0x0;
        DAT_028a5df0 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5df8 == '\0') {
        DAT_028a5df8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c478;
      if (DAT_0276c478 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c480;
      if (DAT_0276c480 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c488;
      if (DAT_0276c488 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c490;
      if (DAT_0276c490 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276c498;
      if (DAT_0276c498 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5df9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5df9 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5df0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c18d41;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c18d41:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


