// Function: FUN_01a063e0
// Address: 01a063e0
// Size: 668 bytes
// Class: Unknown


void FUN_01a063e0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  char unaff_SIL;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  if ((DAT_028b2958 == (undefined8 *)0x0) || (DAT_028b2961 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2958 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028b2958 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028b2958 != (undefined8 *)0x0;
        DAT_028b2958 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b2960 == '\0') {
        DAT_028b2960 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar4 = DAT_028b2958;
      if (DAT_028b2958 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027e56f8;
      if (DAT_027e56f8 != 0) {
        FUN_00d50b00();
      }
      FUN_01a05b50();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      DAT_028b2961 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2961 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b2968 == (undefined8 *)0x0) || (DAT_028b2971 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2968 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028b2968 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028b2968 != (undefined8 *)0x0;
        DAT_028b2968 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b2970 == '\0') {
        DAT_028b2970 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      puVar4 = DAT_028b2968;
      if (DAT_028b2968 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027e5700;
      if (DAT_027e5700 != 0) {
        FUN_00d50b00();
      }
      FUN_01a05b50();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      DAT_028b2971 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2971 = '\x01';
      FUN_00e8cb70();
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  puVar4 = DAT_028b2968;
  if (unaff_SIL != '\0') {
    puVar4 = DAT_028b2958;
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


