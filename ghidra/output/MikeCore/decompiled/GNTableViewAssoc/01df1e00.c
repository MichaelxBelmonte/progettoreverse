// Function: FUN_01df1e00
// Address: 01df1e00
// Size: 899 bytes
// Class: GNTableViewAssoc


void FUN_01df1e00(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *unaff_RSI;
  longlong *plVar5;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  FUN_01df0390();
  if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01df0390();
  lVar1 = local_88;
  cVar3 = FUN_01dba0c0();
  if ((local_80 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if (local_38 != '\0') {
    FUN_00d50b20();
  }
  if (cVar3 != '\0') {
    return;
  }
  FUN_01df1960();
  plVar2 = local_40;
  if (local_40 == (longlong *)0x0) {
    return;
  }
  if (local_38 == '\0') {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccab60();
  plVar5 = local_40;
  if (local_40 == (longlong *)0x0) {
    uVar4 = (undefined4)CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    plVar5 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar4 = 0;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01df1f10;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    uVar4 = 0;
  }
LAB_01df1f10:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_44 = uVar4;
  if ((plVar5 == (longlong *)0x0) || (cVar3 = FUN_00d8ca50(), cVar3 == '\0')) {
    FUN_01ccad60();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    local_98 = *unaff_RSI;
    local_90 = '\0';
    cVar3 = (char)local_44;
    (**(code **)(*plVar2 + 0x518))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01ccad60();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    lVar1 = DAT_02774da0;
    local_70 = '\x01';
    local_b8 = *unaff_RSI;
    local_b0 = '\0';
    if (DAT_02774da0 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar1;
    local_a0 = '\x01';
    FUN_00d99b10();
    local_68 = local_88;
    local_60 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_60 = '\x01';
    cVar3 = (char)local_44;
    (**(code **)(*plVar2 + 0x520))(&local_68,&local_b8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (cVar3 == '\0' && plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}


