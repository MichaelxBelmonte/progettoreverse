// Function: FUN_018003e0
// Address: 018003e0
// Size: 1141 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x018007ab) */
/* WARNING: Removing unreachable block (ram,0x018007b4) */
/* WARNING: Removing unreachable block (ram,0x0180070b) */
/* WARNING: Removing unreachable block (ram,0x01800714) */
/* WARNING: Removing unreachable block (ram,0x0180066b) */
/* WARNING: Removing unreachable block (ram,0x01800674) */
/* WARNING: Removing unreachable block (ram,0x018005cb) */
/* WARNING: Removing unreachable block (ram,0x018005d4) */
/* WARNING: Removing unreachable block (ram,0x0180052b) */
/* WARNING: Removing unreachable block (ram,0x01800534) */
/* WARNING: Removing unreachable block (ram,0x018004db) */
/* WARNING: Removing unreachable block (ram,0x018004e4) */
/* WARNING: Removing unreachable block (ram,0x0180057b) */
/* WARNING: Removing unreachable block (ram,0x01800584) */
/* WARNING: Removing unreachable block (ram,0x0180061b) */
/* WARNING: Removing unreachable block (ram,0x01800624) */
/* WARNING: Removing unreachable block (ram,0x018006bb) */
/* WARNING: Removing unreachable block (ram,0x018006c4) */
/* WARNING: Removing unreachable block (ram,0x0180075b) */
/* WARNING: Removing unreachable block (ram,0x01800764) */
/* WARNING: Removing unreachable block (ram,0x018007fb) */
/* WARNING: Removing unreachable block (ram,0x01800804) */

void FUN_018003e0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  
  puVar2 = DAT_028af798;
  if ((DAT_028af798 == (undefined8 *)0x0) || (DAT_028af7a1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028af798 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar2 = &DAT_02572358;
      (*DAT_02572370)();
      bVar3 = DAT_028af798 == (undefined8 *)0x0;
      DAT_028af798 = puVar2;
      if (((bVar3) || (FUN_00d50b20(), lVar1 = DAT_027d50d8, DAT_028af798 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_027d50d8, DAT_028af7a0 == '\0')) {
        DAT_028af7a0 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_027d50d8;
      }
      DAT_027d50d8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d50e0;
      if (DAT_027d50e0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d50e8;
      if (DAT_027d50e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d50f0;
      if (DAT_027d50f0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d50f8;
      if (DAT_027d50f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d5100;
      if (DAT_027d5100 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d5108;
      if (DAT_027d5108 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d5110;
      if (DAT_027d5110 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d5118;
      if (DAT_027d5118 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d5120;
      if (DAT_027d5120 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027d5128;
      if (DAT_027d5128 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028af7a1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028af7a1 = '\x01';
      FUN_00e8cb70();
    }
    puVar2 = DAT_028af798;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
      goto LAB_0180083b;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0180083b:
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


