// Function: FUN_01a06000
// Address: 01a06000
// Size: 668 bytes
// Class: Unknown


void FUN_01a06000(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char unaff_SIL;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  if ((DAT_028b2938 == (undefined8 *)0x0) || (DAT_028b2941 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2938 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028b2938 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028b2938 != (undefined8 *)0x0;
        DAT_028b2938 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b2940 == '\0') {
        DAT_028b2940 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar4 = DAT_028b2938;
      if (DAT_028b2938 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027e56e8;
      if (DAT_027e56e8 != 0) {
        FUN_00d50b00();
      }
      FUN_01a05b50();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      DAT_028b2941 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2941 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b2948 == (undefined8 *)0x0) || (DAT_028b2951 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2948 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028b2948 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028b2948 != (undefined8 *)0x0;
        DAT_028b2948 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b2950 == '\0') {
        DAT_028b2950 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar4 = DAT_028b2948;
      if (DAT_028b2948 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027e56f0;
      if (DAT_027e56f0 != 0) {
        FUN_00d50b00();
      }
      FUN_01a05b50();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      DAT_028b2951 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2951 = '\x01';
      FUN_00e8cb70();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  puVar4 = DAT_028b2948;
  if (unaff_SIL != '\0') {
    puVar4 = DAT_028b2938;
  }
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


