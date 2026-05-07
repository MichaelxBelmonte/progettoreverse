// Function: FUN_017aa1e0
// Address: 017aa1e0
// Size: 524 bytes
// Class: GNData


void FUN_017aa1e0(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  plVar4 = DAT_028adf28;
  if ((DAT_028adf28 == (longlong *)0x0) || (DAT_028adf31 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adf28 == (longlong *)0x0) {
      plVar4 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar4 + 0x18))();
      if (DAT_028adf28 == plVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028adf28 != (longlong *)0x0;
        DAT_028adf28 = plVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028adf30 == '\0') {
        DAT_028adf30 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027d2a40;
      if (DAT_027d2a40 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027d2a48;
      if (DAT_027d2a48 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027d2a50;
      if (DAT_027d2a50 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027d2a58;
      if (DAT_027d2a58 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028adf31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adf31 = '\x01';
      FUN_00e8cb70();
    }
    plVar4 = DAT_028adf28;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_017aa3d2;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_017aa3d2:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


