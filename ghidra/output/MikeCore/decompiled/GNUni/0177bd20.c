// Function: FUN_0177bd20
// Address: 0177bd20
// Size: 830 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x0177bfb4) */
/* WARNING: Removing unreachable block (ram,0x0177bfbd) */
/* WARNING: Removing unreachable block (ram,0x0177bf14) */
/* WARNING: Removing unreachable block (ram,0x0177bf1d) */
/* WARNING: Removing unreachable block (ram,0x0177be74) */
/* WARNING: Removing unreachable block (ram,0x0177be7d) */
/* WARNING: Removing unreachable block (ram,0x0177be24) */
/* WARNING: Removing unreachable block (ram,0x0177be2d) */
/* WARNING: Removing unreachable block (ram,0x0177bec4) */
/* WARNING: Removing unreachable block (ram,0x0177becd) */
/* WARNING: Removing unreachable block (ram,0x0177bf64) */
/* WARNING: Removing unreachable block (ram,0x0177bf6d) */
/* WARNING: Removing unreachable block (ram,0x0177c004) */
/* WARNING: Removing unreachable block (ram,0x0177c00d) */

void FUN_0177bd20(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028adba0;
  if ((DAT_028adba0 == (undefined8 *)0x0) || (DAT_028adba9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adba0 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028adba0 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028adba0 != (undefined8 *)0x0;
        DAT_028adba0 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028adba8 == '\0') {
        DAT_028adba8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce770;
      if (DAT_027ce770 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce778;
      if (DAT_027ce778 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce780;
      if (DAT_027ce780 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce788;
      if (DAT_027ce788 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce790;
      if (DAT_027ce790 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce798;
      if (DAT_027ce798 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce7a0;
      if (DAT_027ce7a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028adba9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adba9 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028adba0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_0177c044;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0177c044:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


