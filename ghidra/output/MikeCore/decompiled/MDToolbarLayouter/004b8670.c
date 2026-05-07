// Function: FUN_004b8670
// Address: 004b8670
// Size: 610 bytes
// Class: MDToolbarLayouter


void FUN_004b8670(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar4 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar1 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong **)(unaff_RDI + 0x10) = plVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      plVar4 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar4 == (longlong *)0x0) goto LAB_004b86dd;
    }
LAB_004b86d3:
    FUN_00d50b00();
  }
  else {
    if (plVar4 != (longlong *)0x0) goto LAB_004b86d3;
LAB_004b86dd:
    plVar4 = (longlong *)0x0;
  }
  local_70 = *unaff_RSI;
  local_68 = '\0';
  FUN_004b7f70(param_1,&local_70);
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 == 0) {
    return;
  }
  plVar4 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong **)(unaff_RDI + 0x10) = plVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar4 = *(longlong **)(unaff_RDI + 0x10);
      if (plVar4 == (longlong *)0x0) goto LAB_004b87a9;
    }
LAB_004b879f:
    FUN_00d50b00();
  }
  else {
    if (plVar4 != (longlong *)0x0) goto LAB_004b879f;
LAB_004b87a9:
    plVar4 = (longlong *)0x0;
  }
  local_40 = *unaff_RSI;
  local_38 = '\0';
  FUN_00ca13a0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  lVar2 = *param_2;
  lVar3 = *(longlong *)(lVar1 + 0x10);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(lVar1 + 0x10) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  plVar4 = *(longlong **)(unaff_RDI + 0x10);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar2 = *(longlong *)(unaff_RDI + 0x10);
    *(longlong **)(unaff_RDI + 0x10) = plVar4;
    if (lVar2 != 0) {
      FUN_00d50b20();
      plVar4 = *(longlong **)(unaff_RDI + 0x10);
      goto joined_r0x004b8855;
    }
  }
  else {
joined_r0x004b8855:
    if (plVar4 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_004b8863;
    }
  }
  FUN_00d50b00();
LAB_004b8863:
  local_60 = lVar1;
  local_58 = '\0';
  local_50 = *param_2;
  local_48 = '\0';
  FUN_004b8390(param_1,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


