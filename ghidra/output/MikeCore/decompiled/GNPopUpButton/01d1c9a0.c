// Function: FUN_01d1c9a0
// Address: 01d1c9a0
// Size: 757 bytes
// Class: GNPopUpButton


void FUN_01d1c9a0(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  local_70 = (longlong *)0x0;
  local_68 = '\x01';
  if (*(char *)((longlong)unaff_RDI + 0x51) == '\0') {
    *(undefined1 *)(unaff_RDI + 6) = 1;
    (**(code **)(*unaff_RDI + 0x520))();
    lVar3 = 0;
    goto LAB_01d1cc66;
  }
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  if (local_70 == plVar2) {
    plVar2 = local_70;
    if (local_68 == '\0') goto LAB_01d1ca2a;
    FUN_00d50b20();
  }
  else {
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      local_70 = plVar2;
      FUN_00d50b20();
      plVar2 = local_70;
    }
LAB_01d1ca2a:
    local_70 = plVar2;
    local_68 = '\x01';
  }
  FUN_01ccad60();
  lVar3 = local_30;
  if (local_30 == 0) {
    lVar3 = 0;
joined_r0x01d1ca60:
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_28 == '\0') {
    FUN_00d50b00();
    goto joined_r0x01d1ca60;
  }
  FUN_01e10550();
  local_60 = local_30;
  local_58 = 0;
  local_a0 = DAT_027e7c20;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      local_a0 = DAT_027e7c20;
    }
  }
  else {
    local_28 = '\0';
  }
  local_58 = '\x01';
  DAT_027e7c20 = local_a0;
  if (local_a0 != 0) {
    local_58 = '\x01';
    FUN_00d50b00();
  }
  local_98 = '\x01';
  cVar1 = (**(code **)(*unaff_RDI + 0x4d8))(&local_70,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_01e10550();
    local_40 = local_80;
    local_38 = 0;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    local_38 = '\x01';
    FUN_00d8dab0();
    local_50 = local_30;
    local_48 = 0;
    local_90 = DAT_027e7c20;
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
        local_90 = DAT_027e7c20;
      }
    }
    else {
      local_28 = '\0';
    }
    local_48 = '\x01';
    DAT_027e7c20 = local_90;
    if (local_90 != 0) {
      local_48 = '\x01';
      FUN_00d50b00();
    }
    local_88 = '\x01';
    (**(code **)(*unaff_RDI + 0x4d0))();
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01d1cc66:
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}


