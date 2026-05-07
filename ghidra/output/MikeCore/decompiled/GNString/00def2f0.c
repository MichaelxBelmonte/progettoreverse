// Function: FUN_00def2f0
// Address: 00def2f0
// Size: 731 bytes
// Class: GNString


void FUN_00def2f0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *unaff_RDI;
  bool bVar8;
  
  plVar6 = DAT_028a87c8;
  if ((DAT_028a87c8 == (longlong *)0x0) || (DAT_028a87d1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a87c8 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar6 + 0x18))();
      if (DAT_028a87c8 == plVar6) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar8 = DAT_028a87c8 != (longlong *)0x0;
        DAT_028a87c8 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a87d0 == '\0') {
        DAT_028a87d0 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      plVar6 = DAT_028a87c8;
      lVar4 = DAT_02784780;
      if (DAT_02784780 != 0) {
        FUN_00d50b00();
      }
      lVar7 = DAT_02784788;
      if (DAT_02784788 != 0) {
        FUN_00d50b00();
      }
      if (plVar6[3] != 0) {
        plVar6[3] = 0;
        FUN_00d50b20();
      }
      lVar1 = plVar6[7];
      if (lVar1 != lVar4) {
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        plVar6[7] = lVar4;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      lVar1 = plVar6[8];
      if (lVar1 != lVar7) {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        plVar6[8] = lVar7;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      plVar6 = DAT_028a87c8;
      lVar4 = DAT_02784790;
      if (DAT_02784790 == 0) {
        lVar7 = DAT_028a87c8[4];
        if (lVar7 != 0) goto LAB_00def49d;
      }
      else {
        FUN_00d50b00();
        lVar7 = plVar6[4];
        if (lVar7 != lVar4) {
          FUN_00d50b00();
LAB_00def49d:
          plVar6[4] = lVar4;
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
      cVar5 = FUN_00df1850();
      if (cVar5 != '\0') {
        DAT_028a87a0 = 0;
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_02784798;
      if (DAT_02784798 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027847a0;
      if (DAT_027847a0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_02784788;
      if (DAT_02784788 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      DAT_028a87d1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a87d1 = '\x01';
      FUN_00e8cb70();
    }
    plVar6 = DAT_028a87c8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      goto LAB_00def5ab;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00def5ab:
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


