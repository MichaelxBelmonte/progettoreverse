// Function: FUN_00b7e000
// Address: 00b7e000
// Size: 509 bytes
// Class: GNFilePath


void FUN_00b7e000(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  plVar5 = DAT_028a5630;
  if ((DAT_028a5630 == (longlong *)0x0) || (DAT_028a5639 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5630 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_028a5630 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = DAT_028a5630 != (longlong *)0x0;
        DAT_028a5630 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5638 == '\0') {
        DAT_028a5638 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0275e490;
      if (DAT_0275e490 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027641e8;
      if (DAT_027641e8 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar4;
      local_48 = '\x01';
      FUN_00df16f0(param_1,&local_50);
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027641f0;
      if (DAT_027641f0 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027641f8;
      if (DAT_027641f8 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_028a5639 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5639 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = DAT_028a5630;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_00b7e1e3;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7e1e3:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


