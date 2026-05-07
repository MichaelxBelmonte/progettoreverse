// Function: FUN_00bfbb00
// Address: 00bfbb00
// Size: 547 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00bfbc6f) */
/* WARNING: Removing unreachable block (ram,0x00bfbc78) */
/* WARNING: Removing unreachable block (ram,0x00bfbc1f) */
/* WARNING: Removing unreachable block (ram,0x00bfbc28) */
/* WARNING: Removing unreachable block (ram,0x00bfbcbf) */
/* WARNING: Removing unreachable block (ram,0x00bfbcc8) */

void FUN_00bfbb00(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5aa0;
  if ((param_2 != 0xd) && (param_2 != 0)) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5aa0 == (undefined8 *)0x0) || (DAT_028a5aa9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5aa0 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5aa0 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5aa0 != (undefined8 *)0x0;
        DAT_028a5aa0 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5aa8 == '\0') {
        DAT_028a5aa8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276bea8;
      if (DAT_0276bea8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276beb0;
      if (DAT_0276beb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276beb8;
      if (DAT_0276beb8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5aa9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5aa9 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5aa0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00bfbd05;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00bfbd05:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


