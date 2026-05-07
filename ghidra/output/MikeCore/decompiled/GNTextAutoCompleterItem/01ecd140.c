// Function: FUN_01ecd140
// Address: 01ecd140
// Size: 1219 bytes
// Class: GNTextAutoCompleterItem


undefined8 FUN_01ecd140(void)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_var;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  ulonglong local_a0;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  
  uVar2 = FUN_01e15b70();
  (**(code **)(*unaff_RDI + 0x520))();
  lVar6 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_a0 = FUN_01e1aa30(uVar2,1);
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e10550();
  FUN_00d8e3d0();
  local_38 = local_48;
  if (local_48 == 0) {
    local_38 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d95590();
  local_88 = local_58;
  local_80 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  lVar7 = local_38;
  local_80 = '\x01';
  FUN_00d97d10(2,&local_88);
  lVar6 = local_48;
  if (local_48 == lVar7) {
LAB_01ecd312:
    if (local_40 != '\0') {
LAB_01ecd318:
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      if (local_38 != 0) {
        local_38 = lVar6;
        FUN_00d50b20();
        goto LAB_01ecd312;
      }
      local_38 = lVar6;
      if (local_40 == '\0') goto LAB_01ecd326;
      goto LAB_01ecd318;
    }
    if (local_38 != 0) {
      local_38 = local_48;
      FUN_00d50b20();
    }
    local_40 = '\0';
    local_38 = lVar6;
  }
LAB_01ecd326:
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  iVar3 = FUN_00d8c7a0();
  iVar5 = (int)(local_a0 >> 0x20);
  iVar4 = iVar5;
  if (iVar3 < iVar5) {
    iVar3 = FUN_00d8c7a0();
    iVar4 = FUN_00d8c7a0();
    local_a0 = (ulonglong)(uint)((iVar5 + (int)local_a0) - iVar3);
  }
  (**(code **)(*unaff_RDI + 0x520))();
  local_78 = local_48;
  local_70 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_70 = '\x01';
  FUN_01e1aa30(uVar2,0);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  FUN_01e10550();
  lVar7 = local_38;
  FUN_00d8e3d0();
  lVar6 = local_48;
  if (local_48 == lVar7) {
LAB_01ecd482:
    lVar6 = lVar7;
    if (local_40 != '\0') {
LAB_01ecd488:
      if (local_48 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
        lVar7 = lVar6;
        goto LAB_01ecd482;
      }
      if (local_40 == '\0') goto LAB_01ecd496;
      goto LAB_01ecd488;
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    local_40 = '\0';
  }
LAB_01ecd496:
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d95590();
  local_68 = local_58;
  local_60 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_60 = '\x01';
  FUN_00d97d10(4,&local_68);
  lVar1 = local_48;
  lVar7 = lVar6;
  if (local_48 != lVar6) {
    if (local_40 != '\0') {
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      local_40 = '\0';
      lVar7 = local_48;
      goto LAB_01ecd556;
    }
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    lVar7 = lVar1;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
LAB_01ecd556:
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_38 = lVar7;
  iVar5 = FUN_00d8c7a0();
  iVar3 = extraout_var;
  if (iVar5 < extraout_var) {
    iVar3 = FUN_00d8c7a0();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return CONCAT44(iVar3 + iVar4,(int)local_a0);
}


