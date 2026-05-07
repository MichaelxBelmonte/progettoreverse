// Function: FUN_01cca020
// Address: 01cca020
// Size: 1209 bytes
// Class: GNDictionary

void FUN_01cca020(int64_t *param_1,int64_t *param_2,char param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  byte bVar3;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint32_t extraout_XMM0_Da;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  void*local_b0;
  char local_a8;
  void*local_a0;
  char local_98;
  void*local_40;
  char local_38;
  
  uVar4 = (**(code **)(*this_ptr + 0x448))();
  if (local_d8 == 0) {
    bVar3 = 1;
  }
  else {
    (**(code **)(*this_ptr + 0x448))();
    local_40 = (void*)*arg1;
    local_38 = '\0';
    bVar3 = FUN_00d23d70();
    uVar4 = extraout_XMM0_Da;
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      uVar4 = FUN_00d50b20();
    }
    bVar3 = bVar3 ^ 1;
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  if (bVar3 != 0) {
    return;
  }
  local_e8 = *arg1;
  local_e0 = 0;
  local_b8 = param_2;
  FUN_01cc98b0(uVar4,&local_e8);
  if (local_38 == '\0') {
    if (local_40 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_01cca14b;
    }
LAB_01cca1c3:
    local_40 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_40 = &g_02673140;
    local_40[2] = 0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = 0;
    *(void*)(local_40 + 6) = 0;
    uVar4 = FUN_00d500e0();
    if (param_3 != '\0') {
      local_a8 = '\0';
      local_b0 = local_40;
      FUN_00d649d0(uVar4,this_ptr + 2);
      if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar4 = FUN_00d21140();
    if (param_3 == '\0') {
LAB_01cca410:
      lVar1 = *local_b8;
      lVar2 = local_40[2];
      if (lVar2 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[2] = lVar1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      *(void*)(local_40 + 6) = 0xffffffff;
      lVar1 = *arg1;
      lVar2 = local_40[3];
      if (lVar2 != lVar1) {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_40[3] = lVar1;
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (local_40[5] == 0) {
        local_40[5] = *param_1;
        FUN_00d50b00();
        FUN_01d26050();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01cca47e;
    }
    local_98 = '\0';
    local_a0 = local_40;
    FUN_00d64e50(uVar4,this_ptr + 2);
    if ((local_98 != '\0') && (local_a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == (void*)0x0) goto LAB_01cca1c3;
LAB_01cca14b:
    if (local_40[5] != *param_1) {
      if (param_3 != '\0') {
        FUN_00d50b00();
        FUN_01d262d0();
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d64850();
        local_40[5] = 0;
        FUN_00d64910();
        goto LAB_01cca2bd;
      }
      FUN_00d50b00();
      FUN_01d261f0();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_40[5] = 0;
      goto LAB_01cca410;
    }
    if (param_3 == '\0') goto LAB_01cca410;
  }
LAB_01cca2bd:
  lVar1 = *local_b8;
  FUN_00d64850();
  lVar2 = local_40[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(local_40 + 6) = 0xffffffff;
  FUN_00d64910();
  lVar1 = *arg1;
  FUN_00d64850();
  lVar2 = local_40[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_40[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40[5] == 0) {
    lVar1 = *param_1;
    FUN_00d64850();
    local_40[5] = lVar1;
    FUN_00d64910();
    FUN_00d50b00();
    FUN_01d260c0();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01cca47e:
  FUN_00d50b20();
  return;
}

