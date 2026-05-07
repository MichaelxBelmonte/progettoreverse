// Function: FUN_0177b180
// Address: 0177b180
// Size: 830 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x0177b414) */
/* WARNING: Removing unreachable block (ram,0x0177b41d) */
/* WARNING: Removing unreachable block (ram,0x0177b374) */
/* WARNING: Removing unreachable block (ram,0x0177b37d) */
/* WARNING: Removing unreachable block (ram,0x0177b2d4) */
/* WARNING: Removing unreachable block (ram,0x0177b2dd) */
/* WARNING: Removing unreachable block (ram,0x0177b284) */
/* WARNING: Removing unreachable block (ram,0x0177b28d) */
/* WARNING: Removing unreachable block (ram,0x0177b324) */
/* WARNING: Removing unreachable block (ram,0x0177b32d) */
/* WARNING: Removing unreachable block (ram,0x0177b3c4) */
/* WARNING: Removing unreachable block (ram,0x0177b3cd) */
/* WARNING: Removing unreachable block (ram,0x0177b464) */
/* WARNING: Removing unreachable block (ram,0x0177b46d) */

void FUN_0177b180(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028adb80;
  if ((DAT_028adb80 == (undefined8 *)0x0) || (DAT_028adb89 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adb80 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028adb80 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028adb80 != (undefined8 *)0x0;
        DAT_028adb80 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028adb88 == '\0') {
        DAT_028adb88 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027e2710;
      if (DAT_027e2710 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c20d8;
      if (DAT_027c20d8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_02781670;
      if (DAT_02781670 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c20e8;
      if (DAT_027c20e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027c20f8;
      if (DAT_027c20f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef820;
      if (DAT_027ef820 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0277d278;
      if (DAT_0277d278 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028adb89 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adb89 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028adb80;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_0177b4a4;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0177b4a4:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


