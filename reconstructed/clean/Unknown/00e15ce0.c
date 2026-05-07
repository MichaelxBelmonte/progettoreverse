// Function: FUN_00e15ce0
// Address: 00e15ce0
// Size: 785 bytes
// Class: Unknown

void FUN_00e15ce0(uint64_t param_1,void*param_2)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t arg1;
  void*this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar6;
  uint64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  lVar3 = g_02785388;
  local_a8 = param_1;
  if (g_02785388 != 0) {
    param_1 = FUN_00d50b00();
  }
  lVar2 = g_02785370;
  local_90 = lVar3;
  local_88 = '\x01';
  if (g_02785370 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_80 = lVar2;
  local_78 = '\x01';
  FUN_00e16ab0(param_1,&local_80);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e169f0();
  plVar5 = local_40;
  local_70 = g_02784498;
  if (g_02784498 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  cVar4 = (**(code **)(*plVar5 + 0x50))();
  uVar6 = extraout_XMM0_Qa;
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  lVar3 = g_02785390;
  if (cVar4 != '\0') {
    if (g_02785390 != 0) {
      uVar6 = FUN_00d50b00();
    }
    lVar2 = g_02785398;
    local_60 = lVar3;
    local_58 = '\x01';
    if (g_02785398 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_50 = lVar2;
    local_48 = '\x01';
    uVar6 = FUN_00e16ab0(uVar6,&local_50);
    if ((local_48 != '\0') && (local_50 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  local_b8 = *param_2;
  local_b0 = 0;
  FUN_00e14140(uVar6,&local_b8);
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_98 = 1;
  FUN_00e13cd0();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(arg1 + 0x18) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar5 = *(int64_t **)(arg1 + 0x18);
    if (plVar5 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar5 + 0x438))(local_a8);
    FUN_00d50b20();
    if (cVar4 != '\0') {
      plVar5 = *(int64_t **)(arg1 + 0x18);
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0x3b8))();
      plVar5 = local_40;
      if (local_40 == (int64_t *)0x0) {
        bVar1 = false;
      }
      else if (local_38 == '\0') {
        FUN_00d50b00();
        bVar1 = true;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        bVar1 = true;
      }
      FUN_00d50b20();
      goto LAB_00e15fa7;
    }
  }
  bVar1 = false;
  plVar5 = (int64_t *)0x0;
LAB_00e15fa7:
  if (*(int64_t *)(arg1 + 0x18) != 0) {
    *(void*)(arg1 + 0x18) = 0;
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar1) && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

