// Function: FUN_01b587b0
// Address: 01b587b0
// Size: 578 bytes
// Class: GNList


void FUN_01b587b0(void)

{
  bool bVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong unaff_RDI;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d50100();
  FUN_01f27fe0();
  local_80 = DAT_027e48a8;
  if (DAT_027e48a8 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  FUN_00cac150();
  local_50 = local_60;
  local_48 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_48 = '\x01';
  (**(code **)(*local_90 + 0x5f0))(&local_50,&local_80);
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar2 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar2 + 0x398))(), cVar4 == '\0')) {
LAB_01b588fd:
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    bVar1 = true;
    plVar6 = *(longlong **)(unaff_RDI + 0x10);
    bVar3 = true;
    if (plVar6 == plVar5) goto LAB_01b589c9;
  }
  else {
    local_70 = plVar2;
    local_68 = '\0';
    FUN_00ca94c0();
    plVar5 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      bVar1 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar1 = true;
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) goto LAB_01b588fd;
    plVar6 = *(longlong **)(unaff_RDI + 0x10);
    bVar3 = bVar1;
    if (plVar6 == plVar5) goto LAB_01b589c9;
  }
  bVar1 = bVar3;
  FUN_00d50b00();
  *(longlong **)(unaff_RDI + 0x10) = plVar5;
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01b589c9:
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (bVar1) {
    FUN_00d50b20();
  }
  return;
}


