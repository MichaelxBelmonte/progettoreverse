// Function: FUN_01c0ffb0
// Address: 01c0ffb0
// Size: 518 bytes
// Class: GNString


void FUN_01c0ffb0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  
  plVar2 = DAT_028b62e0;
  if ((DAT_028b62e0 == (longlong *)0x0) || (DAT_028b62e9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b62e0 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar2 + 0x18))();
      bVar3 = DAT_028b62e0 == (longlong *)0x0;
      DAT_028b62e0 = plVar2;
      if (((bVar3) || (FUN_00d50b20(), lVar1 = DAT_027e8d80, DAT_028b62e0 != (longlong *)0x0)) &&
         (lVar1 = DAT_027e8d80, DAT_028b62e8 == '\0')) {
        DAT_028b62e8 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_027e8d80;
      }
      DAT_027e8d80 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027e8d88;
      if (DAT_027e8d88 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027e8d90;
      if (DAT_027e8d90 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027e8d98;
      if (DAT_027e8d98 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028b62e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b62e9 = '\x01';
      FUN_00e8cb70();
    }
    plVar2 = DAT_028b62e0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
      goto LAB_01c1019c;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01c1019c:
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


