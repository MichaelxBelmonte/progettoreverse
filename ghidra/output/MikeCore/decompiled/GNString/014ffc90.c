// Function: FUN_014ffc90
// Address: 014ffc90
// Size: 518 bytes
// Class: GNString


void FUN_014ffc90(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *unaff_RDI;
  bool bVar3;
  
  plVar2 = DAT_028acf98;
  if ((DAT_028acf98 == (longlong *)0x0) || (DAT_028acfa1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028acf98 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar2 + 0x18))();
      bVar3 = DAT_028acf98 == (longlong *)0x0;
      DAT_028acf98 = plVar2;
      if (((bVar3) || (FUN_00d50b20(), lVar1 = DAT_027c24b8, DAT_028acf98 != (longlong *)0x0)) &&
         (lVar1 = DAT_027c24b8, DAT_028acfa0 == '\0')) {
        DAT_028acfa0 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_027c24b8;
      }
      DAT_027c24b8 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1910();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c24c0;
      if (DAT_027c24c0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1690();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c24c8;
      if (DAT_027c24c8 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027c24d0;
      if (DAT_027c24d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028acfa1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028acfa1 = '\x01';
      FUN_00e8cb70();
    }
    plVar2 = DAT_028acf98;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)0x0;
      goto LAB_014ffe7c;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_014ffe7c:
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


