// Function: FUN_01a22d80
// Address: 01a22d80
// Size: 3667 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01a22d80(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  char cVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t unaff_RBX;
  int64_t *plVar6;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar7;
  float fVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  float extraout_XMM0_Db;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar11 [16];
  uint32_t extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb_04;
  float fVar12;
  int64_t lVar13;
  uint32_t uVar16;
  uint64_t in_XMM1_Qb;
  uint64_t uVar17;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint32_t uVar18;
  float fVar19;
  float local_1e8;
  float fStack_1e4;
  uint32_t uStack_1a0;
  uint32_t uStack_19c;
  int64_t local_168;
  char local_160;
  float local_154;
  float local_150;
  uint32_t local_14c;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  float local_b8;
  float fStack_b4;
  uint32_t uStack_b0;
  uint32_t uStack_ac;
  uint64_t local_a0;
  float local_98;
  uint32_t uStack_94;
  uint32_t uStack_90;
  uint32_t uStack_8c;
  int64_t *local_88;
  char local_80;
  uint64_t local_78;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  uint64_t local_40;
  uint32_t local_38;
  
  local_b8 = (float)param_1;
  fStack_b4 = (float)((uint64_t)param_1 >> 0x20);
  uStack_b0 = (uint32_t)in_XMM0_Qb;
  uStack_ac = (uint32_t)((uint64_t)in_XMM0_Qb >> 0x20);
  local_98 = (float)param_2;
  uStack_94 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uStack_90 = (uint32_t)in_XMM1_Qb;
  uStack_8c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  FUN_01d96f70();
  FUN_01d48370();
  uVar4 = (**(code **)(*(int64_t *)*arg1 + 0x390))();
  local_78 = CONCAT44(local_78._4_4_,(int)CONCAT71((int7)((uint64_t)uVar4 >> 8),1));
  if (this_ptr[0x3b] == 0) {
LAB_01a22eee:
    local_60 = (int64_t *)0x0;
    uVar4 = 0;
  }
  else {
    FUN_01bcc520();
    local_60 = local_58;
    if (local_58 == (int64_t *)0x0) goto LAB_01a22eee;
    if (((local_50 == '\0') && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    plVar6 = (int64_t *)(unaff_RBX & 0xffffffffffffff00);
    local_78 = local_78 & 0xffffffff00000000;
    cVar3 = FUN_01bf0b60();
    if (cVar3 != '\0') {
      local_78 = local_78 & 0xffffffff00000000;
      FUN_01d48370();
      plVar6 = (int64_t *)*arg1;
      FUN_01d97870();
      (**(code **)(*local_58 + 0x4d8))();
      (**(code **)(*plVar6 + 0x390))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      plVar6 = local_58;
      local_120 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_120 = '\x01';
      local_128 = plVar6;
      local_78 = FUN_01e437f0();
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x370))();
      (**(code **)(*(int64_t *)this_ptr[0x3b] + 0x930))();
      FUN_01d48390();
    }
    uVar4 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    local_78 = local_78 & 0xffffffff00000000;
  }
  FUN_01d48b40();
  local_a0 = uVar4;
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_88 + 0x3a0))();
  local_118 = local_58;
  local_110 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_110 = '\x01';
  FUN_01d488d0();
  if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d97e80();
  plVar6 = local_58;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_01d97e80();
    FUN_01e3f820();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (((((*(float *)(this_ptr + 0x38) != (float)g_023dccec) ||
        (NAN(*(float *)(this_ptr + 0x38)) || NAN((float)g_023dccec))) ||
       (*(float *)((int64_t)this_ptr + 0x1c4) != g_023dccec._4_4_)) ||
      ((NAN(*(float *)((int64_t)this_ptr + 0x1c4)) || NAN(g_023dccec._4_4_) ||
       (*(float *)(this_ptr + 0x39) != (float)g_023dccf4)))) ||
     (NAN(*(float *)(this_ptr + 0x39)) || NAN((float)g_023dccf4))) {
LAB_01a2313f:
    lVar7 = this_ptr[0x38];
    lVar13 = this_ptr[0x39];
    uVar4 = 0;
    fVar8 = (float)((uint64_t)lVar7 >> 0x20);
    if ((g_02390d34 < (g_02390d00 + (float)lVar7 + (float)lVar13) - (float)lVar7) &&
       (g_02390d34 < (fVar8 + (float)((uint64_t)lVar13 >> 0x20) + g_02390d00) - fVar8)) {
      if (this_ptr[0x3a] == 0) {
        FUN_01d39800(lVar7,lVar13,g_02390124);
        plVar6 = (int64_t *)this_ptr[0x3a];
        plVar5 = plVar6;
        if (plVar6 != local_58) {
          if (local_50 == '\0') {
            if (local_58 == (int64_t *)0x0) {
              plVar5 = (int64_t *)0x0;
              goto LAB_01a231ce;
            }
            FUN_00d50b00();
            plVar6 = (int64_t *)this_ptr[0x3a];
            this_ptr[0x3a] = (int64_t)local_58;
            plVar5 = local_58;
          }
          else {
            local_50 = '\0';
            plVar5 = local_58;
LAB_01a231ce:
            this_ptr[0x3a] = (int64_t)plVar5;
          }
          if (plVar6 != (int64_t *)0x0) {
            FUN_00d50b20();
            plVar5 = local_58;
          }
        }
        if ((local_50 != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*this_ptr + 0x640))();
      (**(code **)(*local_88 + 0x390))();
      if (local_50 == '\0') {
        if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      uVar9 = FUN_01e3f820();
      local_98 = (float)uVar9;
      uStack_94 = (uint32_t)((uint64_t)uVar9 >> 0x20);
      uStack_90 = (uint32_t)extraout_XMM0_Qb;
      uStack_8c = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
      local_b8 = (float)lVar13;
      fStack_b4 = (float)((uint64_t)lVar13 >> 0x20);
      uStack_b0 = (uint32_t)uVar4;
      uStack_ac = (uint32_t)((uint64_t)uVar4 >> 0x20);
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d97870();
      local_108 = local_58;
      local_100 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_100 = '\x01';
      uVar4 = FUN_01e437f0();
      local_98 = (float)uVar4;
      uStack_94 = (uint32_t)((uint64_t)uVar4 >> 0x20);
      uStack_90 = (uint32_t)extraout_XMM0_Qb_00;
      uStack_8c = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)*arg1 + 0x390))();
      FUN_01cfcdc0();
      local_f8 = local_58;
      local_f0 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_f0 = '\x01';
      FUN_01d488d0();
      if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      plVar6 = (int64_t *)*arg1;
      local_140 = 0;
      lVar7 = this_ptr[0x3a];
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      local_140 = '\x01';
      local_148 = lVar7;
      (**(code **)(*plVar6 + 0x3a0))();
      if ((local_140 != '\0') && (local_148 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d488d0();
      plVar6 = (int64_t *)*arg1;
      local_130 = 0;
      local_138 = this_ptr[0x3a];
      if (local_138 != 0) {
        FUN_00d50b00();
      }
      local_130 = '\x01';
      (**(code **)(*plVar6 + 0x3a8))();
      if ((local_130 != '\0') && (local_138 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  else if ((*(float *)((int64_t)this_ptr + 0x1cc) != g_023dccf4._4_4_) ||
          (NAN(*(float *)((int64_t)this_ptr + 0x1cc)) || NAN(g_023dccf4._4_4_)))
  goto LAB_01a2313f;
  FUN_01d48390();
  if ((char)local_78 != '\0') {
    return;
  }
  cVar3 = FUN_01bf0b60();
  if (cVar3 == '\0') goto LAB_01a23bab;
  uVar4 = FUN_01bf1450();
  uVar9 = 0;
  uVar17 = 0;
  local_98 = (float)uVar4;
  uStack_94 = (uint32_t)((uint64_t)uVar4 >> 0x20);
  uStack_90 = (uint32_t)extraout_XMM0_Qb_01;
  uStack_8c = (uint32_t)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
  if (0.0 < local_98) {
    FUN_01d97870();
    uVar4 = (**(code **)(*local_58 + 0x4d8))();
    local_b8 = (float)uVar4;
    fStack_b4 = (float)((uint64_t)uVar4 >> 0x20);
    uStack_b0 = (uint32_t)extraout_XMM0_Qb_02;
    uStack_ac = (uint32_t)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar4 = FUN_01e3f820();
    uStack_1a0 = (uint32_t)extraout_XMM0_Qb_03;
    uStack_19c = (uint32_t)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
    uVar10 = (**(code **)(*this_ptr + 0x640))();
    plVar6 = local_88;
    local_168 = g_026fe4b8;
    if (g_026fe4b8 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_160 = '\x01';
    (**(code **)(*plVar6 + 0x3b0))(uVar10,&local_168);
    local_e8 = local_58;
    local_e0 = 0;
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_e0 = '\x01';
    FUN_01d488d0();
    if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    auVar2._4_4_ = uStack_94;
    auVar2._0_4_ = local_98;
    auVar2._8_4_ = uStack_90;
    auVar2._12_4_ = uStack_8c;
    auVar1._4_4_ = fStack_b4;
    auVar1._0_4_ = local_b8;
    auVar1._8_4_ = uStack_b0;
    auVar1._12_4_ = uStack_ac;
    auVar14._4_12_ = auVar1._4_12_;
    auVar14._0_4_ = local_b8 - local_98;
    auVar11._8_4_ = uStack_1a0;
    auVar11._0_8_ = uVar4;
    auVar11._12_4_ = uStack_19c;
    auVar11 = blendps(auVar11,auVar14,1);
    auVar15._8_8_ = uVar17;
    auVar15._0_8_ = uVar9;
    auVar15 = blendps(auVar15,auVar2,1);
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))(auVar11._0_8_,auVar15._0_8_);
  }
  cVar3 = FUN_01bf2140();
  if (cVar3 == '\0') goto LAB_01a23bab;
  FUN_01bf2150();
  plVar6 = local_58;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (int64_t *)0x0) goto LAB_01a23bab;
  FUN_01d97870();
  local_d8 = local_58;
  local_d0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_d0 = '\x01';
  FUN_01e437f0();
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d97870();
  fVar8 = (float)FUN_01cf5cf0();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_14c = FUN_01d48a00();
  FUN_01bf2650();
  FUN_01d489d0();
  FUN_01bf2350();
  local_c8 = local_58;
  local_c0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_c0 = '\x01';
  FUN_01d488d0();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  fVar12 = extraout_XMM0_Db;
  fVar19 = extraout_XMM0_Db;
  uVar16 = extraout_XMM0_Dd;
  uVar18 = extraout_XMM0_Dd;
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
  FUN_01be8270();
  uVar4 = (**(code **)(*local_58 + 0x4d8))();
  local_98 = (float)uVar4;
  uStack_94 = (uint32_t)((uint64_t)uVar4 >> 0x20);
  uStack_90 = (uint32_t)extraout_XMM0_Qb_04;
  uStack_8c = (uint32_t)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
  local_b8 = fVar12;
  fStack_b4 = fVar19;
  uStack_b0 = uVar16;
  uStack_ac = uVar18;
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d97870();
  uVar4 = FUN_01e3f820();
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01bf2150();
  plVar6 = local_58;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a23978;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_01a23978:
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar6;
    local_38 = 0;
    local_40 = 0;
    if (0 < *(int *)((int64_t)plVar6 + 0xc)) {
      local_1e8 = (float)uVar4;
      fStack_1e4 = (float)((uint64_t)uVar4 >> 0x20);
      fVar12 = fVar12 + local_1e8 + g_02390d00;
      local_b8 = fStack_1e4 + g_02390d2c;
      lVar7 = 0;
      do {
        local_58 = *(int64_t **)(plVar6[2] + lVar7 * 8);
        FUN_01be80e0();
        plVar5 = local_88;
        FUN_00d45bc0();
        local_98 = (float)(**(code **)(*plVar5 + 0x390))();
        if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        fVar19 = local_98 - fVar8;
        if ((local_1e8 < fVar19) && (fVar19 < fVar12)) {
          local_98 = fVar19;
          (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
          local_154 = local_98 + g_023b1614;
          (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
          local_150 = local_98 + g_02390d2c;
          (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
          (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        }
        lVar7 = lVar7 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)((int64_t)plVar6 + 0xc));
    }
    FUN_00136b80();
    FUN_00d50b20();
  }
  FUN_01d489d0();
  (**(code **)(*(int64_t *)*arg1 + 0x370))();
LAB_01a23bab:
  if ((char)local_78 == '\0') {
    FUN_00d50b20();
  }
  return;
}

