// Function: FUN_00deeb50
// Address: 00deeb50
// Size: 671 bytes
// Class: GNString


void FUN_00deeb50(void)

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
  
  plVar6 = DAT_028a87e8;
  if ((DAT_028a87e8 == (longlong *)0x0) || (DAT_028a87f1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a87e8 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar6 + 0x18))();
      if (DAT_028a87e8 == plVar6) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar8 = DAT_028a87e8 != (longlong *)0x0;
        DAT_028a87e8 = plVar6;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a87f0 == '\0') {
        DAT_028a87f0 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      plVar6 = DAT_028a87e8;
      lVar4 = DAT_02784780;
      if (DAT_02784780 != 0) {
        FUN_00d50b00();
      }
      lVar7 = DAT_027847c0;
      if (DAT_027847c0 != 0) {
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
      plVar6 = DAT_028a87e8;
      lVar4 = DAT_027847c8;
      if (DAT_027847c8 == 0) {
        lVar7 = DAT_028a87e8[4];
        if (lVar7 != 0) goto LAB_00deecfd;
      }
      else {
        FUN_00d50b00();
        lVar7 = plVar6[4];
        if (lVar7 != lVar4) {
          FUN_00d50b00();
LAB_00deecfd:
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
      lVar4 = DAT_027fff68;
      if (DAT_027fff68 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1570();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = DAT_027847d0;
      if (DAT_027847d0 != 0) {
        FUN_00d50b00();
      }
      FUN_00df1600();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      DAT_028a87f1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a87f1 = '\x01';
      FUN_00e8cb70();
    }
    plVar6 = DAT_028a87e8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      goto LAB_00deedcf;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00deedcf:
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


