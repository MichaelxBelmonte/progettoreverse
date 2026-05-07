// Function: FUN_00d773e0
// Address: 00d773e0
// Size: 1159 bytes
// Class: GNList


void FUN_00d773e0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar5;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_000276d0();
  *plVar3 = (longlong)&DAT_025783f8;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x5b) = 0;
  *(undefined8 *)((longlong)plVar3 + 99) = 0;
  FUN_00d500e0();
  lVar1 = *(longlong *)(*unaff_RSI + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_40 = lVar1;
  uVar5 = FUN_00d73b40();
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if (lVar1 != 0) {
    uVar5 = FUN_00d50b20();
  }
  plVar4 = plVar3 + 10;
  lVar1 = *(longlong *)(*unaff_RSI + 0x50);
  if (lVar1 == 0) {
    if (*plVar4 != 0) {
      *plVar4 = 0;
LAB_00d774bb:
      uVar5 = FUN_00d50b20();
      if (lVar1 != 0) goto LAB_00d774c8;
    }
  }
  else {
    FUN_00d50b00();
    lVar2 = *plVar4;
    if (lVar2 != lVar1) {
      FUN_00d50b00();
      *plVar4 = lVar1;
      if (lVar2 != 0) goto LAB_00d774bb;
    }
LAB_00d774c8:
    uVar5 = FUN_00d50b20();
  }
  lVar1 = *(longlong *)(*unaff_RSI + 0x58);
  if (lVar1 == 0) {
    if (plVar3[0xb] == 0) goto LAB_00d77523;
    plVar3[0xb] = 0;
LAB_00d7750e:
    uVar5 = FUN_00d50b20();
    if (lVar1 == 0) goto LAB_00d77523;
  }
  else {
    FUN_00d50b00();
    lVar2 = plVar3[0xb];
    if (lVar2 != lVar1) {
      FUN_00d50b00();
      plVar3[0xb] = lVar1;
      if (lVar2 != 0) goto LAB_00d7750e;
    }
  }
  uVar5 = FUN_00d50b20();
LAB_00d77523:
  plVar3[0xc] = *(longlong *)(*unaff_RSI + 0x60);
  lVar1 = DAT_0277e980;
  plVar4 = (longlong *)*unaff_RSI;
  if (DAT_0277e980 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_d0 = lVar1;
  local_c8 = '\x01';
  uVar5 = (**(code **)(*plVar4 + 0x88))(uVar5,&local_d0);
  local_70 = local_40;
  local_68 = 0;
  local_c0 = DAT_0277e980;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar5 = FUN_00d50b00();
      local_c0 = DAT_0277e980;
    }
  }
  else {
    local_38 = '\0';
  }
  local_68 = '\x01';
  DAT_0277e980 = local_c0;
  if (local_c0 != 0) {
    local_68 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_b8 = '\x01';
  uVar5 = (**(code **)(*plVar3 + 0x80))(uVar5,&local_c0);
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = DAT_0277e988;
  plVar4 = (longlong *)*unaff_RSI;
  if (DAT_0277e988 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_b0 = lVar1;
  local_a8 = '\x01';
  uVar5 = (**(code **)(*plVar4 + 0x88))(uVar5,&local_b0);
  local_60 = local_40;
  local_58 = 0;
  local_a0 = DAT_0277e988;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar5 = FUN_00d50b00();
      local_a0 = DAT_0277e988;
    }
  }
  else {
    local_38 = '\0';
  }
  local_58 = '\x01';
  DAT_0277e988 = local_a0;
  if (local_a0 != 0) {
    local_58 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_98 = '\x01';
  uVar5 = (**(code **)(*plVar3 + 0x80))(uVar5,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    uVar5 = FUN_00d50b20();
  }
  lVar1 = DAT_0277e990;
  plVar4 = (longlong *)*unaff_RSI;
  if (DAT_0277e990 != 0) {
    uVar5 = FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  uVar5 = (**(code **)(*plVar4 + 0x88))(uVar5,&local_90);
  local_50 = local_40;
  local_48 = 0;
  local_80 = DAT_0277e990;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      uVar5 = FUN_00d50b00();
      local_80 = DAT_0277e990;
    }
  }
  else {
    local_38 = '\0';
  }
  local_48 = '\x01';
  DAT_0277e990 = local_80;
  if (local_80 != 0) {
    local_48 = '\x01';
    uVar5 = FUN_00d50b00();
  }
  local_78 = '\x01';
  (**(code **)(*plVar3 + 0x80))(uVar5,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


