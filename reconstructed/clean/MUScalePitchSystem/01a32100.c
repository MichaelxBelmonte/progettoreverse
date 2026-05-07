// Function: FUN_01a32100
// Address: 01a32100
// Size: 2195 bytes
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


void FUN_01a32100(void)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  bool bVar3;
  void*puVar4;
  int64_t lVar5;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  uint8_t auVar8 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar9 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint32_t uStack_d0;
  uint32_t uStack_cc;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if ((g_028b2a80 == 0) || (g_028b2a89 == '\0')) {
    FUN_00e8cb50();
    if (g_028b2a80 == 0) {
      FUN_01cfcdc0();
      lVar5 = g_028b2a80;
      if (g_028b2a80 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar5 = local_38;
        }
        bVar3 = g_028b2a80 != 0;
        g_028b2a80 = lVar5;
        if (bVar3) {
          FUN_00d50b20();
          lVar5 = local_38;
        }
      }
      if ((lVar5 != 0) && (g_028b2a88 == '\0')) {
        g_028b2a88 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_38;
      }
      if ((local_30 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      in_XMM1 = ZEXT416((uint)g_0239011c);
      FUN_01cfcdc0();
      lVar5 = g_028b2a70;
      if (g_028b2a70 != local_38) {
        if (local_30 == '\0') {
          if (local_38 == 0) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
            lVar5 = local_38;
          }
        }
        else {
          local_30 = '\0';
          lVar5 = local_38;
        }
        bVar3 = g_028b2a70 != 0;
        g_028b2a70 = lVar5;
        if (bVar3) {
          FUN_00d50b20();
          lVar5 = local_38;
        }
      }
      if ((lVar5 != 0) && (g_028b2a78 == '\0')) {
        g_028b2a78 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_38;
      }
      if ((local_30 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      g_028b2a89 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b2a89 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar6 = FUN_01e3f820();
  uStack_d0 = (uint32_t)extraout_XMM0_Qb;
  uStack_cc = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
  fVar12 = g_02394240;
  if (this_ptr[0x28] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_48 + 0x378))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d48a10();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    lVar5 = this_ptr[0x28];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    uVar7 = FUN_01d43d10();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    local_58 = (float)uVar7;
    fStack_54 = (float)((uint64_t)uVar7 >> 0x20);
    fStack_54 = fStack_54 * fStack_54;
    auVar8._4_4_ = fStack_54;
    auVar8._0_4_ = fStack_54;
    auVar8._8_4_ = extraout_XMM0_Dd * extraout_XMM0_Dd;
    auVar8._12_4_ = extraout_XMM0_Dd * extraout_XMM0_Dd;
    auVar11._4_12_ = auVar8._4_12_;
    auVar11._0_4_ = SQRT(fStack_54 + local_58 * local_58) * g_0239011c + g_02390124;
    auVar8 = roundss(auVar11,auVar11,10);
    fVar12 = g_02394240;
    if (g_02394240 <= auVar8._0_4_) {
      fVar12 = auVar8._0_4_;
    }
  }
  lVar5 = g_028b2a80;
  if (g_028b2a80 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  auVar10._4_12_ = in_XMM1._4_12_;
  auVar10._0_4_ = in_XMM1._0_4_ * g_0239011c;
  auVar2._8_4_ = uStack_d0;
  auVar2._0_8_ = uVar6;
  auVar2._12_4_ = uStack_cc;
  auVar8 = insertps(auVar2,fVar12,0x10);
  auVar11 = blendps(auVar10,g_023b45e0,0xe);
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x3c8))();
  lVar5 = g_028b2a70;
  if (g_028b2a70 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(float *)(this_ptr + 0x27) <= 0.0) {
    FUN_01d48b40();
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    lVar5 = this_ptr[0x28];
  }
  else {
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &g_02680400;
    *(void*)((int64_t)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(void*)((int64_t)puVar4 + 0x39) = 0;
    *(void*)((int64_t)puVar4 + 0x41) = 0;
    (*g_02680418)();
    FUN_01d39400();
    FUN_01d39310();
    FUN_01d38ba0();
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    FUN_00d50b20();
    lVar5 = this_ptr[0x28];
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_48 + 0x378))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d48a10();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    lVar5 = this_ptr[0x28];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    uVar6 = FUN_01d43d10();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    local_58 = (float)uVar6;
    fStack_54 = (float)((uint64_t)uVar6 >> 0x20);
    fStack_50 = (float)extraout_XMM0_Qb_00;
    fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    fVar12 = auVar11._0_4_ + auVar8._0_4_ + local_58 * g_023b5dd0;
    fVar13 = auVar11._4_4_ + auVar8._4_4_ + fStack_54 * _UNK_023b5dd4;
    fVar14 = auVar11._8_4_ + auVar8._8_4_ + fStack_50 * _UNK_023b5dd8;
    fVar15 = auVar11._12_4_ + auVar8._12_4_ + fStack_4c * _UNK_023b5ddc;
    auVar9._0_4_ = (float)(g_023945e0 & (uint)fVar12 | g_023945f0) + fVar12;
    auVar9._4_4_ = (float)(_UNK_023945e4 & (uint)fVar13 | _UNK_023945f4) + fVar13;
    auVar9._8_4_ = (float)(_UNK_023945e8 & (uint)fVar14 | _UNK_023945f8) + fVar14;
    auVar9._12_4_ = (float)(_UNK_023945ec & (uint)fVar15 | _UNK_023945fc) + fVar15;
    auVar8 = roundps(auVar9,auVar9,0xb);
    FUN_00d05530(auVar8._0_8_);
    lVar5 = g_028b2a80;
    if (g_028b2a80 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_48 + 0x398))();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d488d0();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    lVar5 = this_ptr[0x28];
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3f8))();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

