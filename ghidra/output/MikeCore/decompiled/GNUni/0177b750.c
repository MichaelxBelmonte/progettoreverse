// Function: FUN_0177b750
// Address: 0177b750
// Size: 830 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x0177b9e4) */
/* WARNING: Removing unreachable block (ram,0x0177b9ed) */
/* WARNING: Removing unreachable block (ram,0x0177b944) */
/* WARNING: Removing unreachable block (ram,0x0177b94d) */
/* WARNING: Removing unreachable block (ram,0x0177b8a4) */
/* WARNING: Removing unreachable block (ram,0x0177b8ad) */
/* WARNING: Removing unreachable block (ram,0x0177b854) */
/* WARNING: Removing unreachable block (ram,0x0177b85d) */
/* WARNING: Removing unreachable block (ram,0x0177b8f4) */
/* WARNING: Removing unreachable block (ram,0x0177b8fd) */
/* WARNING: Removing unreachable block (ram,0x0177b994) */
/* WARNING: Removing unreachable block (ram,0x0177b99d) */
/* WARNING: Removing unreachable block (ram,0x0177ba34) */
/* WARNING: Removing unreachable block (ram,0x0177ba3d) */

void FUN_0177b750(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028adb90;
  if ((DAT_028adb90 == (undefined8 *)0x0) || (DAT_028adb99 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adb90 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028adb90 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028adb90 != (undefined8 *)0x0;
        DAT_028adb90 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028adb98 == '\0') {
        DAT_028adb98 = '\x01';
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
      lVar3 = DAT_0277d268;
      if (DAT_0277d268 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028adb99 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adb99 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028adb90;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_0177ba74;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0177ba74:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


