// Function: FUN_00c9e140
// Address: 00c9e140
// Size: 991 bytes
// Class: GNDictionary
// String references:
//   "%@%@"

void FUN_00c9e140(float param_1)

{
  bool bVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *arg1;
  void*this_ptr;
  void*puVar5;
  void*puVar6;
  float fVar7;
  uint32_t uVar8;
  void*local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  float local_80;
  uint32_t local_7c;
  void*local_78;
  char local_70;
  void*local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  float local_34;
  
  local_34 = param_1;
  FUN_00d4ab90();
  puVar6 = local_68;
  lVar2 = g_02727800;
  if (local_68 != (void*)0x0) {
    if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = puVar6;
    goto LAB_00c9e451;
  }
  if (local_34 <= 0.0) {
    if (g_02727800 != 0) {
      FUN_00d50b00();
    }
    lVar3 = g_02773100;
    local_b0 = lVar2;
    local_a8 = '\x01';
    if (g_02773100 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar3;
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    uVar4 = FUN_00d31230(&local_90,&local_a0);
    puVar6 = local_68;
    if (local_68 == (void*)0x0) {
      local_34 = (float)CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
      puVar6 = (void*)0x0;
      bVar1 = false;
    }
    else {
      if (local_60 == '\0') {
        FUN_00d50b00();
        local_34 = 0.0;
        bVar1 = true;
        if ((local_60 == '\0') || (local_68 == (void*)0x0)) goto LAB_00c9e37b;
        FUN_00d50b20();
      }
      else {
        local_60 = '\0';
      }
      bVar1 = true;
      local_34 = 0.0;
    }
LAB_00c9e37b:
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      puVar5 = puVar6;
      if (arg1[9] == 0) goto LAB_00c9e319;
      local_b8 = puVar6;
      uVar8 = FUN_00083ea0(2,&local_b8);
      FUN_00d8cb40(uVar8,&local_68);
      puVar5 = local_78;
      if (local_78 == puVar6) {
        puVar5 = puVar6;
        if ((local_78 != (void*)0x0 & local_34._0_1_) == 1) {
          if (local_70 != '\0') goto LAB_00c9e481;
          bVar1 = true;
          FUN_00d50b00();
        }
LAB_00c9e4c0:
        if ((local_70 != '\0') && (local_78 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_70 == '\0') {
          if (local_78 != (void*)0x0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if (local_34._0_1_ == '\0') {
            FUN_00d50b20();
          }
          goto LAB_00c9e4c0;
        }
        puVar6 = local_78;
        if (local_34._0_1_ == 0) {
          FUN_00d50b20();
        }
LAB_00c9e481:
        local_70 = '\0';
        bVar1 = true;
        puVar5 = puVar6;
      }
      local_68 = (void*)&g_0253d630;
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_68 = &g_024c5048;
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_00c9e319;
    }
    *(void*)(this_ptr + 1) = 0;
    puVar5 = (void*)0x0;
  }
  else {
    local_80 = *(float *)(arg1 + 2);
    fVar7 = local_80;
    if (local_80 <= 0.0) {
      *(void*)(arg1 + 2) = 0x3727c5ac;
      fVar7 = g_02411280;
    }
    local_7c = *(void*)((int64_t)arg1 + 0x14);
    uVar8 = (**(code **)(*arg1 + 0x3c8))(fVar7);
    *(void*)(arg1 + 2) = uVar8;
    uVar8 = (**(code **)(*arg1 + 0x3c8))(*(void*)((int64_t)arg1 + 0x14));
    *(void*)((int64_t)arg1 + 0x14) = uVar8;
    (**(code **)(*arg1 + 0x3c8))(local_34);
    FUN_00d49aa0();
    puVar5 = local_68;
    if (local_68 == (void*)0x0) {
      puVar5 = (void*)0x0;
      bVar1 = false;
    }
    else {
      bVar1 = true;
      if (((local_60 == '\0') && (FUN_00d50b00(), local_60 != '\0')) &&
         (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    *(float *)(arg1 + 2) = local_80;
    *(void*)((int64_t)arg1 + 0x14) = local_7c;
LAB_00c9e319:
    *(void*)(this_ptr + 1) = 0;
    if (!bVar1) {
      if (puVar5 == (void*)0x0) {
        puVar5 = (void*)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
  }
  *this_ptr = puVar5;
LAB_00c9e451:
  *(void*)(this_ptr + 1) = 1;
  return;
}

