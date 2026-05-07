// Function: FUN_0177c2f0
// Address: 0177c2f0
// Size: 830 bytes
// Class: GNUni


/* WARNING: Removing unreachable block (ram,0x0177c584) */
/* WARNING: Removing unreachable block (ram,0x0177c58d) */
/* WARNING: Removing unreachable block (ram,0x0177c4e4) */
/* WARNING: Removing unreachable block (ram,0x0177c4ed) */
/* WARNING: Removing unreachable block (ram,0x0177c444) */
/* WARNING: Removing unreachable block (ram,0x0177c44d) */
/* WARNING: Removing unreachable block (ram,0x0177c3f4) */
/* WARNING: Removing unreachable block (ram,0x0177c3fd) */
/* WARNING: Removing unreachable block (ram,0x0177c494) */
/* WARNING: Removing unreachable block (ram,0x0177c49d) */
/* WARNING: Removing unreachable block (ram,0x0177c534) */
/* WARNING: Removing unreachable block (ram,0x0177c53d) */
/* WARNING: Removing unreachable block (ram,0x0177c5d4) */
/* WARNING: Removing unreachable block (ram,0x0177c5dd) */

void FUN_0177c2f0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028adbb0;
  if ((DAT_028adbb0 == (undefined8 *)0x0) || (DAT_028adbb9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adbb0 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028adbb0 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028adbb0 != (undefined8 *)0x0;
        DAT_028adbb0 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028adbb8 == '\0') {
        DAT_028adbb8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce7a8;
      if (DAT_027ce7a8 != 0) {
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
      lVar3 = DAT_027ce7b0;
      if (DAT_027ce7b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce7b8;
      if (DAT_027ce7b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce7c0;
      if (DAT_027ce7c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce7c8;
      if (DAT_027ce7c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ce7d0;
      if (DAT_027ce7d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028adbb9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adbb9 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028adbb0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_0177c614;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0177c614:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


