// Function: FUN_01df9250
// Address: 01df9250
// Size: 742 bytes
// Class: GNTableColumnAssoc


void FUN_01df9250(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char unaff_SIL;
  longlong *unaff_RDI;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar4 = local_40;
  if (local_40 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
joined_r0x01df929f:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_58 = plVar4;
      goto joined_r0x01df929f;
    }
  }
  lVar1 = DAT_02800140;
  if (local_58 == (longlong *)0x0) {
    return;
  }
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  local_a0 = '\x01';
  uVar2 = FUN_01ccaae0(param_1,&local_a8);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    plVar3 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_44 = 0;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01df933a;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_44 = 0;
  }
LAB_01df933a:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    local_50 = plVar4;
    *(undefined1 *)((longlong)unaff_RDI + 0x61) = 1;
    FUN_01ed4a00();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    plVar4 = local_50;
    local_80 = '\x01';
    FUN_01d2a8f0();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_SIL == '\0') {
      (**(code **)(*plVar3 + 0x3f8))();
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      FUN_01ed73b0();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01ed7190();
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
      local_70 = '\x01';
      local_90 = '\0';
      local_98 = plVar3;
      (**(code **)(*unaff_RDI + 0x580))(param_1,&local_98);
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)((longlong)unaff_RDI + 0x61) = 0;
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


