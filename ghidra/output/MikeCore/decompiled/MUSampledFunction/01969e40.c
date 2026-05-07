// Function: FUN_01969e40
// Address: 01969e40
// Size: 672 bytes
// Class: MUSampledFunction


void FUN_01969e40(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  if ((DAT_028b0e58 == (undefined8 *)0x0) || (DAT_028b0e61 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0e58 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_026792c0;
      puVar5[5] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x19) = 0;
      (*DAT_026792d8)();
      if (DAT_028b0e58 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = DAT_028b0e58 != (undefined8 *)0x0;
        DAT_028b0e58 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0e60 == '\0') {
        DAT_028b0e60 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfcc50(DAT_0239011c,0,0);
      DAT_028b0e61 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0e61 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b0e68 == (undefined8 *)0x0) || (DAT_028b0e71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b0e68 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_026792c0;
      puVar5[5] = 0;
      *(undefined8 *)((longlong)puVar5 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x19) = 0;
      (*DAT_026792d8)();
      if (DAT_028b0e68 == puVar5) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = DAT_028b0e68 != (undefined8 *)0x0;
        DAT_028b0e68 = puVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b0e70 == '\0') {
        DAT_028b0e70 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01cfc880(DAT_0239011c);
      DAT_028b0e71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b0e71 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar1 = unaff_RSI[0x2f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*unaff_RSI + 0x9d8))();
  if (cVar4 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    cVar4 = *(char *)((longlong)unaff_RSI + 0x1c4);
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = DAT_028b0e58;
      goto joined_r0x0196a0be;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  puVar5 = DAT_028b0e68;
joined_r0x0196a0be:
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


