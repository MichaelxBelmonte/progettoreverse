// Function: FUN_0027ad60
// Address: 0027ad60
// Size: 509 bytes
// Class: Unknown


void FUN_0027ad60(undefined8 param_1)

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
  
  plVar5 = DAT_02805da8;
  if ((DAT_02805da8 == (longlong *)0x0) || (DAT_02805db1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_02805da8 == (longlong *)0x0) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_000422b0();
      (**(code **)(*plVar5 + 0x18))();
      if (DAT_02805da8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar6 = DAT_02805da8 != (longlong *)0x0;
        DAT_02805da8 = plVar5;
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      if (DAT_02805db0 == '\0') {
        DAT_02805db0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_026fbd08;
      if (DAT_026fbd08 != 0) {
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
      lVar3 = DAT_026fbd10;
      if (DAT_026fbd10 != 0) {
        FUN_00d50b00();
      }
      local_40 = lVar3;
      local_38 = '\x01';
      FUN_00df1690();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_026fbd18;
      if (DAT_026fbd18 != 0) {
        FUN_00d50b00();
      }
      local_30 = lVar3;
      local_28 = '\x01';
      FUN_00df1570();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      DAT_02805db1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_02805db1 = '\x01';
      FUN_00e8cb70();
    }
    plVar5 = DAT_02805da8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar5 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_0027af43;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_0027af43:
  *unaff_RDI = plVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


