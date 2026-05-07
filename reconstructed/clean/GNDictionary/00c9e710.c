// Function: FUN_00c9e710
// Address: 00c9e710
// Size: 690 bytes
// Class: GNDictionary

uint64_t FUN_00c9e710(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  float fVar6;
  uint32_t uVar7;
  uint64_t uVar8;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_58;
  uint32_t local_54;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  float local_2c;
  
  local_a8 = *arg1;
  local_a0 = '\0';
  FUN_00d496b0(param_1,&local_a8);
  lVar3 = local_40;
  if (local_40 == 0) {
    lVar5 = 0;
  }
  else {
    if (local_38 != '\0') {
      local_38 = '\0';
      lVar5 = local_40;
      goto LAB_00c9e788;
    }
    FUN_00d50b00();
    lVar5 = lVar3;
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00c9e788:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = g_02727800;
  if (lVar5 == 0) {
    plVar1 = (int64_t *)*arg1;
    if (g_02727800 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02773100;
    local_98 = lVar2;
    local_90 = '\x01';
    if (g_02773100 != 0) {
      FUN_00d50b00();
    }
    local_88 = lVar3;
    local_80 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    FUN_00d31230(&local_78,&local_88);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    cVar4 = (**(code **)(*plVar1 + 0x50))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    uVar8 = 0;
    if (cVar4 == '\0') {
      local_2c = *(float *)(this_ptr + 2);
      fVar6 = local_2c;
      if (local_2c <= 0.0) {
        *(void*)(this_ptr + 2) = 0x3727c5ac;
        fVar6 = g_02411280;
      }
      local_58 = *(void*)((int64_t)this_ptr + 0x14);
      uVar7 = (**(code **)(*this_ptr + 0x3c8))(fVar6);
      *(void*)(this_ptr + 2) = uVar7;
      uVar7 = (**(code **)(*this_ptr + 0x3c8))(*(void*)((int64_t)this_ptr + 0x14));
      *(void*)((int64_t)this_ptr + 0x14) = uVar7;
      local_68 = *arg1;
      local_60 = '\0';
      local_54 = FUN_00d4afa0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      *(float *)(this_ptr + 2) = local_2c;
      *(void*)((int64_t)this_ptr + 0x14) = local_58;
      uVar8 = (**(code **)(*this_ptr + 0x3d0))(local_54);
    }
  }
  else {
    local_2c = (float)FUN_00d459e0();
    if (lVar3 == 0) {
      uVar8 = (uint64_t)(uint)local_2c;
    }
    else {
      FUN_00d50b20();
      uVar8 = (uint64_t)(uint)local_2c;
    }
  }
  return uVar8;
}

