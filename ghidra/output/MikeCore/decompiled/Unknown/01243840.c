// Function: FUN_01243840
// Address: 01243840
// Size: 846 bytes
// Class: Unknown


int FUN_01243840(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
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
  char local_30;
  
  lVar2 = DAT_027be628;
  plVar1 = (longlong *)*unaff_RDI;
  if (DAT_027be628 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar2;
  local_c0 = '\x01';
  (**(code **)(*plVar1 + 0x98))(param_1,&local_c8);
  local_88 = local_48;
  local_80 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    plVar1 = (longlong *)*unaff_RSI;
    lVar2 = DAT_027be628;
  }
  else {
    local_40 = '\0';
    plVar1 = (longlong *)*unaff_RSI;
    lVar2 = DAT_027be628;
  }
  local_80 = '\x01';
  DAT_027be628 = lVar2;
  if (lVar2 != 0) {
    local_80 = '\x01';
    FUN_00d50b00();
  }
  local_b0 = '\x01';
  local_b8 = lVar2;
  (**(code **)(*plVar1 + 0x98))(param_1,&local_b8);
  local_78 = local_38;
  local_70 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_70 = '\x01';
  iVar3 = FUN_00e8b280(param_1,0);
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027be630;
  if (iVar3 == -1) {
    iVar3 = 1;
  }
  else if (iVar3 == 0) {
    plVar1 = (longlong *)*unaff_RDI;
    if (DAT_027be630 != 0) {
      FUN_00d50b00();
    }
    local_a8 = lVar2;
    local_a0 = '\x01';
    (**(code **)(*plVar1 + 0x98))(param_1,&local_a8);
    local_68 = local_48;
    local_60 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
      plVar1 = (longlong *)*unaff_RSI;
      lVar2 = DAT_027be630;
    }
    else {
      local_40 = '\0';
      plVar1 = (longlong *)*unaff_RSI;
      lVar2 = DAT_027be630;
    }
    local_60 = '\x01';
    DAT_027be630 = lVar2;
    if (lVar2 != 0) {
      local_60 = '\x01';
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_98 = lVar2;
    (**(code **)(*plVar1 + 0x98))(param_1,&local_98);
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    iVar3 = FUN_00e8b280(param_1,0);
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (iVar3 == 1) {
    iVar3 = -1;
  }
  return iVar3;
}


