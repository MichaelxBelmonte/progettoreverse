// Function: FUN_01f7b490
// Address: 01f7b490
// Size: 517 bytes
// Class: GNRadialColorGradient


void FUN_01f7b490(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong *unaff_RDI;
  bool bVar6;
  
  if ((DAT_028baff0 == (undefined8 *)0x0) || (DAT_028baff9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028baff0 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_026792c0;
      puVar4[5] = 0;
      *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
      (*DAT_026792d8)();
      if (DAT_028baff0 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = DAT_028baff0 != (undefined8 *)0x0;
        DAT_028baff0 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028baff8 == '\0') {
        DAT_028baff8 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028baff9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028baff9 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028bb000 == (undefined8 *)0x0) || (DAT_028bb009 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028bb000 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_026792c0;
      puVar4[5] = 0;
      *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x19) = 0;
      (*DAT_026792d8)();
      if (DAT_028bb000 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar6 = DAT_028bb000 != (undefined8 *)0x0;
        DAT_028bb000 = puVar4;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028bb008 == '\0') {
        DAT_028bb008 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028bb009 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028bb009 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar5 = (ulonglong)DAT_028bb010;
  DAT_028bb010 = (int)(uVar5 ^ 1);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = (longlong)(&DAT_028baff0)[(uVar5 ^ 1) * 2];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


