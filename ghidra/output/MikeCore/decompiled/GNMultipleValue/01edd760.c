// Function: FUN_01edd760
// Address: 01edd760
// Size: 524 bytes
// Class: GNMultipleValue


void FUN_01edd760(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  plVar4 = DAT_028ba5f0;
  if ((DAT_028ba5f0 == (longlong *)0x0) || (DAT_028ba5f9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028ba5f0 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (DAT_028ba5f0 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028ba5f0 != (longlong *)0x0;
        DAT_028ba5f0 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028ba5f8 == '\0') {
        DAT_028ba5f8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027fe8b0;
      if (DAT_027fe8b0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027fe8b8;
      if (DAT_027fe8b8 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027fe8c0;
      if (DAT_027fe8c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027fe8c8;
      if (DAT_027fe8c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028ba5f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028ba5f9 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = DAT_028ba5f0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_01edd952;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01edd952:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


