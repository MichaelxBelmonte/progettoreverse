// Function: FUN_0158b470
// Address: 0158b470
// Size: 1315 bytes
// Class: GNDictionary
// String references:
//   "%@.%@"

void* FUN_0158b470(void)

{
  bool bVar1;
  char cVar2;
  void*arg1;
  void*this_ptr;
  int64_t *plVar3;
  int64_t *plVar4;
  bool bVar5;
  int64_t local_e8;
  void*local_e0;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
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
  
  (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
  plVar3 = local_b0;
  (**(code **)(*(int64_t *)*arg1 + 0x388))();
  FUN_014ffc90();
  FUN_00df1af0();
  local_e8 = local_80;
  FUN_00083ea0(2,&local_e8);
  FUN_00d8cb40();
  local_a0 = local_50;
  local_98 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_98 = '\x01';
  (**(code **)(*plVar3 + 0x400))();
  plVar3 = local_40;
  if (local_40 == (int64_t *)0x0) {
    bVar5 = true;
    plVar3 = (int64_t *)0x0;
    bVar1 = false;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
      bVar1 = true;
      if ((local_38 == '\0') || (local_40 == (int64_t *)0x0)) goto LAB_0158b5b9;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = true;
    bVar5 = false;
  }
LAB_0158b5b9:
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  local_e0 = (void*)&g_0253d630;
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  local_e0 = &g_024c5048;
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = plVar3;
  if ((plVar3 == (int64_t *)0x0) || (cVar2 = (**(code **)(*plVar3 + 0x398))(), cVar2 == '\0')) {
    (**(code **)(*(int64_t *)*arg1 + 0x3f0))();
    plVar4 = local_b0;
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    FUN_014ffc90();
    FUN_00df1af0();
    local_e8 = local_80;
    FUN_00083ea0(2,&local_e8);
    FUN_00d8cb40();
    local_60 = local_50;
    local_58 = 0;
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*plVar4 + 0x400))();
    plVar4 = local_40;
    if (local_40 == plVar3) {
      plVar4 = plVar3;
      if ((bool)(bVar5 & local_40 != (int64_t *)0x0)) {
        if (local_38 != '\0') goto LAB_0158b7f7;
        bVar1 = true;
        FUN_00d50b00();
      }
LAB_0158b845:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar5 = (bool)(bVar1 & plVar3 != (int64_t *)0x0);
        bVar1 = true;
        if (bVar5) {
          FUN_00d50b20();
        }
        goto LAB_0158b845;
      }
      bVar5 = plVar3 != (int64_t *)0x0;
      plVar3 = local_40;
      if ((bool)(bVar1 & bVar5)) {
        FUN_00d50b20();
      }
LAB_0158b7f7:
      local_38 = '\0';
      bVar1 = true;
      plVar4 = plVar3;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    local_e0 = (void*)&g_0253d630;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_e0 = &g_024c5048;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      return this_ptr;
    }
    cVar2 = (**(code **)(*plVar4 + 0x398))();
    if (cVar2 == '\0') {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      if (!bVar1) {
        return this_ptr;
      }
      FUN_00d50b20();
      return this_ptr;
    }
    *(void*)(this_ptr + 1) = 0;
    if (bVar1) goto LAB_0158b6b7;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if (!bVar5) goto LAB_0158b6b7;
  }
  FUN_00d50b00();
LAB_0158b6b7:
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

