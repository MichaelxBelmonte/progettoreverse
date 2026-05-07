// Function: FUN_01a7d1d0
// Address: 01a7d1d0
// Size: 997 bytes
// Class: Unknown


void FUN_01a7d1d0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  undefined8 local_e0;
  undefined1 local_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  int local_50;
  undefined8 local_4c;
  longlong local_40;
  char local_38;
  
  local_b0 = *unaff_RSI;
  local_a8 = '\0';
  cVar3 = FUN_01a87be0();
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    local_d0 = *unaff_RSI;
    local_c8 = 0;
    local_c0 = *param_2;
    local_b8 = 0;
    FUN_01a7cd20(param_1,&local_c0);
    FUN_01a81c00();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01a78a20(param_1,&local_78);
    plVar2 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)plVar2[2];
    if (plVar1 != (longlong *)0x0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_4c = 0;
      local_58 = plVar1;
      for (lVar4 = 0; local_50 = (int)lVar4, lVar4 < *(int *)((longlong)plVar1 + 0xc);
          lVar4 = lVar4 + 1) {
        local_68 = *(longlong **)(plVar1[2] + lVar4 * 8);
        (**(code **)(*local_68 + 0x620))();
      }
      FUN_01a80d20();
      if (plVar2 == (longlong *)0x0) {
        return;
      }
    }
    FUN_00d50b20();
  }
  else {
    FUN_01a81c00();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    FUN_01a78a20(param_1,&local_88);
    plVar2 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar4 = plVar2[2];
    local_90 = plVar2;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_a0 = lVar4;
    FUN_01dcb110();
    plVar2 = local_68;
    if (local_60 == '\0') {
      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_e0 = *param_2;
    local_d8 = 0;
    FUN_01a80590(param_1,&local_e0);
    if (plVar2 != (longlong *)0x0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_58 = plVar2;
      local_4c = 0;
      for (lVar4 = 0; local_50 = (int)lVar4, local_50 < *(int *)((longlong)plVar2 + 0xc);
          lVar4 = lVar4 + 1) {
        local_68 = *(longlong **)(plVar2[2] + lVar4 * 8);
        (**(code **)(*local_68 + 0x620))();
      }
      FUN_000a9680();
      FUN_00d50b20();
      if (local_90 == (longlong *)0x0) {
        return;
      }
    }
    FUN_00d50b20();
  }
  return;
}


