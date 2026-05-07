// Function: FUN_00de1440
// Address: 00de1440
// Size: 1230 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00de1864) */
/* WARNING: Removing unreachable block (ram,0x00de186d) */
/* WARNING: Removing unreachable block (ram,0x00de17c4) */
/* WARNING: Removing unreachable block (ram,0x00de17cd) */
/* WARNING: Removing unreachable block (ram,0x00de1724) */
/* WARNING: Removing unreachable block (ram,0x00de172d) */
/* WARNING: Removing unreachable block (ram,0x00de1684) */
/* WARNING: Removing unreachable block (ram,0x00de168d) */
/* WARNING: Removing unreachable block (ram,0x00de15e4) */
/* WARNING: Removing unreachable block (ram,0x00de15ed) */
/* WARNING: Removing unreachable block (ram,0x00de1544) */
/* WARNING: Removing unreachable block (ram,0x00de154d) */
/* WARNING: Removing unreachable block (ram,0x00de1594) */
/* WARNING: Removing unreachable block (ram,0x00de159d) */
/* WARNING: Removing unreachable block (ram,0x00de1634) */
/* WARNING: Removing unreachable block (ram,0x00de163d) */
/* WARNING: Removing unreachable block (ram,0x00de16d4) */
/* WARNING: Removing unreachable block (ram,0x00de16dd) */
/* WARNING: Removing unreachable block (ram,0x00de1774) */
/* WARNING: Removing unreachable block (ram,0x00de177d) */
/* WARNING: Removing unreachable block (ram,0x00de1814) */
/* WARNING: Removing unreachable block (ram,0x00de181d) */
/* WARNING: Removing unreachable block (ram,0x00de18b4) */
/* WARNING: Removing unreachable block (ram,0x00de18bd) */

void FUN_00de1440(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a8710;
  if ((DAT_028a8710 == (undefined8 *)0x0) || (DAT_028a8719 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a8710 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a8710 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a8710 != (undefined8 *)0x0;
        DAT_028a8710 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a8718 == '\0') {
        DAT_028a8718 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f88;
      if (DAT_02772f88 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f90;
      if (DAT_02772f90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772fa8;
      if (DAT_02772fa8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772fa0;
      if (DAT_02772fa0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f60;
      if (DAT_02772f60 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f68;
      if (DAT_02772f68 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f70;
      if (DAT_02772f70 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f78;
      if (DAT_02772f78 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f98;
      if (DAT_02772f98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772f80;
      if (DAT_02772f80 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772fb8;
      if (DAT_02772fb8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02772fb0;
      if (DAT_02772fb0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a8719 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a8719 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a8710;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00de18f4;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00de18f4:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


