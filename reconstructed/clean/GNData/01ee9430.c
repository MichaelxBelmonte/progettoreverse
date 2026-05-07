// Function: FUN_01ee9430
// Address: 01ee9430
// Size: 2219 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


void FUN_01ee9430(uint32_t param_1,int64_t *param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  bool bVar3;
  bool bVar4;
  char cVar5;
  int64_t *plVar6;
  uint64_t in_RCX;
  uint64_t uVar7;
  void*puVar8;
  void*arg1;
  int64_t this_ptr;
  void*puVar9;
  uint32_t uVar10;
  float fVar11;
  uint8_t auVar12 [16];
  void*local_e0;
  void*local_d8;
  char local_d0;
  void*local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint8_t local_a8 [16];
  uint32_t local_94;
  void*local_90;
  void*local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_60;
  char local_58;
  uint32_t local_50;
  void*local_48;
  char local_40;
  void*local_38;
  
  local_a8._0_4_ = param_1;
  cVar5 = (**(code **)(*(int64_t *)*arg1 + 0x528))();
  if (cVar5 == '\0') {
    FUN_01cfcdc0(*(void*)(*(int64_t *)(this_ptr + 0x68) + 0x10));
    puVar8 = local_88;
    if (local_88 == (void*)0x0) {
      uVar7 = CONCAT71((int7)((uint64_t)in_RCX >> 8),1);
      puVar8 = (void*)0x0;
    }
    else {
      if (local_80 == '\0') {
        FUN_00d50b00();
        uVar7 = 0;
        if ((local_80 == '\0') || (local_88 == (void*)0x0)) goto LAB_01ee958a;
        FUN_00d50b20();
      }
      uVar7 = 0;
    }
LAB_01ee958a:
    local_90 = (void*)CONCAT44(local_90._4_4_,(int)uVar7);
    auVar12 = ZEXT416(*(uint *)(*(int64_t *)(this_ptr + 0x68) + 0x14));
    FUN_01cfcdc0(*(void*)(*(int64_t *)(this_ptr + 0x68) + 0x10));
    puVar9 = local_88;
    if (local_88 == (void*)0x0) {
      uVar10 = (uint32_t)CONCAT71((int7)((uint64_t)uVar7 >> 8),1);
      puVar9 = (void*)0x0;
    }
    else {
      if (local_80 == '\0') {
        FUN_00d50b00();
        uVar10 = 0;
        if ((local_80 == '\0') || (local_88 == (void*)0x0)) goto LAB_01ee9825;
        FUN_00d50b20();
      }
      uVar10 = 0;
    }
LAB_01ee9825:
    local_38 = (void*)CONCAT44(local_38._4_4_,uVar10);
    FUN_01d48370();
    uVar10 = FUN_01d39d70();
    local_e0 = puVar8;
    if (((float)local_a8._0_4_ != g_02390124) || (NAN((float)local_a8._0_4_) || NAN(g_02390124))
       ) {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar6 + 0x18))();
      local_94 = 0;
      FUN_0049c630(&local_e0,&local_94,4);
      local_88 = (void*)&g_02647118;
      local_50 = 0x3f800000;
      FUN_01f7ba60(g_023b5d80,&local_88);
      local_88 = (void*)&g_024f9300;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_88 = &g_024c5048;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d488d0();
      local_a8 = ZEXT416(*(uint *)(this_ptr + 0x198));
      FUN_00d50b20();
      auVar2._4_4_ = local_a8._4_4_;
      auVar2._0_4_ = (float)local_a8._0_4_ * g_02394244;
      auVar2._8_4_ = local_a8._8_4_;
      auVar2._12_4_ = local_a8._12_4_;
      auVar12 = insertps(auVar12,auVar2,0x10);
      uVar7 = auVar12._0_8_;
    }
    else {
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar6 + 0x18))();
      local_94 = 0;
      FUN_0049c630(&local_e0,&local_94,4);
      local_88 = (void*)&g_02647118;
      local_50 = 0x3f800000;
      FUN_01f7ba60(g_023b5d84,&local_88);
      local_88 = (void*)&g_024f9300;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_88 = &g_024c5048;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d488d0();
      local_a8 = ZEXT416(*(uint *)(this_ptr + 0x198));
      FUN_00d50b20();
      auVar1._4_4_ = local_a8._4_4_;
      auVar1._0_4_ = (float)local_a8._0_4_ * g_02394244;
      auVar1._8_4_ = local_a8._8_4_;
      auVar1._12_4_ = local_a8._12_4_;
      auVar12 = blendps(auVar12,auVar1,1);
      uVar7 = auVar12._0_8_;
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(uVar10,uVar7);
    FUN_01d48390();
    if ((char)local_38 == '\0' && puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((char)local_90 != '\0' || puVar8 == (void*)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_01cfcdc0(*(void*)(*(int64_t *)(this_ptr + 0x68) + 0x10));
  puVar8 = local_88;
  if (local_88 == (void*)0x0) {
    bVar3 = true;
  }
  else {
    if (local_80 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_80 == '\0') || (local_88 == (void*)0x0)) goto LAB_01ee9517;
      FUN_00d50b20();
    }
    bVar3 = false;
  }
LAB_01ee9517:
  local_90 = puVar8;
  FUN_01cfcdc0(*(void*)(*(int64_t *)(this_ptr + 0x68) + 0x10));
  local_38 = local_88;
  if (local_88 == (void*)0x0) {
    bVar4 = true;
  }
  else {
    if (local_80 == '\0') {
      FUN_00d50b00();
      bVar4 = false;
      if ((local_80 == '\0') || (local_88 == (void*)0x0)) goto LAB_01ee95f6;
      FUN_00d50b20();
    }
    bVar4 = false;
  }
LAB_01ee95f6:
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x398))();
  FUN_01d39d70();
  FUN_01d48b40(g_02390124);
  if (g_02390124 < *(float *)(this_ptr + 0x198)) {
    if (((float)local_a8._0_4_ != g_02390124) || (NAN((float)local_a8._0_4_) || NAN(g_02390124))
       ) {
      local_a8._0_4_ = g_02390124;
      do {
        (**(code **)(*(int64_t *)*arg1 + 0x368))(g_023b1620);
        local_d0 = '\0';
        local_c8 = local_38;
        local_c0 = '\0';
        local_d8 = puVar8;
        FUN_01f7b740((float)local_a8._0_4_ / *(float *)(this_ptr + 0x198),&local_c8);
        local_48 = local_88;
        local_40 = 0;
        if (local_80 == '\0') {
          if (local_88 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        puVar8 = local_90;
        local_40 = '\x01';
        FUN_01d488d0();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_b8 = *param_2;
        local_b0 = '\0';
        (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        fVar11 = (float)local_a8._0_4_ + g_02390124;
        local_a8._0_4_ = fVar11;
      } while (fVar11 < *(float *)(this_ptr + 0x198));
    }
    else {
      local_a8._0_4_ = g_02390124;
      do {
        (**(code **)(*(int64_t *)*arg1 + 0x368))(g_02390124);
        local_d0 = '\0';
        local_c8 = local_38;
        local_c0 = '\0';
        local_d8 = puVar8;
        FUN_01f7b740((float)local_a8._0_4_ / *(float *)(this_ptr + 0x198),&local_c8);
        local_48 = local_88;
        local_40 = 0;
        if (local_80 == '\0') {
          if (local_88 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        puVar8 = local_90;
        local_40 = '\x01';
        FUN_01d488d0();
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_b8 = *param_2;
        local_b0 = '\0';
        (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        fVar11 = (float)local_a8._0_4_ + g_02390124;
        local_a8._0_4_ = fVar11;
      } while (fVar11 < *(float *)(this_ptr + 0x198));
    }
  }
  FUN_01d48390();
  if (!bVar4 && local_38 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (!bVar3 && puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

