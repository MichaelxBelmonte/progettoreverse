// Function: FUN_00de1d40
// Address: 00de1d40
// Size: 667 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00de1f31) */
/* WARNING: Removing unreachable block (ram,0x00de1f3a) */
/* WARNING: Removing unreachable block (ram,0x00de1e91) */
/* WARNING: Removing unreachable block (ram,0x00de1e9a) */
/* WARNING: Removing unreachable block (ram,0x00de1e41) */
/* WARNING: Removing unreachable block (ram,0x00de1e4a) */
/* WARNING: Removing unreachable block (ram,0x00de1ee1) */
/* WARNING: Removing unreachable block (ram,0x00de1eea) */
/* WARNING: Removing unreachable block (ram,0x00de1f81) */
/* WARNING: Removing unreachable block (ram,0x00de1f8a) */

void FUN_00de1d40(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a8720;
  if ((DAT_028a8720 == (undefined8 *)0x0) || (DAT_028a8729 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a8720 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a8720 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a8720 != (undefined8 *)0x0;
        DAT_028a8720 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8728 == '\0') {
        DAT_028a8728 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772fc0;
      if (DAT_02772fc0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027e3b70;
      if (DAT_027e3b70 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772fd8;
      if (DAT_02772fd8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772fd0;
      if (DAT_02772fd0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772fe0;
      if (DAT_02772fe0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a8729 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a8729 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a8720;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00de1fc1;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00de1fc1:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


