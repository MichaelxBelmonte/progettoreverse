// Function: FUN_00b1e0d0
// Address: 00b1e0d0
// Size: 6657 bytes
// Class: GNMultipleValue
// String references:
//   "%I kHz"
//   "%I Hz"
//   "+ %I dB"
//   "- %I dB"

void FUN_00b1e0d0(uint64_t param_1,float param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  char cVar5;
  uint64_t uVar6;
  undefined7 uVar7;
  int64_t lVar8;
  void*arg1;
  int64_t *this_ptr;
  byte bVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint8_t auVar12 [8];
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint64_t uVar18;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar30 [16];
  float fVar31;
  uint32_t uVar32;
  uint32_t uVar33;
  uint32_t uVar34;
  uint32_t uStack_f0;
  uint32_t uStack_ec;
  int64_t *local_d8;
  uint32_t local_d0;
  int local_cc;
  float local_c8;
  float fStack_c4;
  uint32_t uStack_c0;
  uint32_t uStack_bc;
  uint64_t local_b0;
  float local_a8;
  float fStack_a4;
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  int64_t local_90;
  uint8_t local_88 [8];
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint8_t local_68 [16];
  int64_t local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  FUN_00b1d5b0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  uVar18 = *arg1;
  (**(code **)(*this_ptr + 0xac0))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = (int64_t *)*arg1;
  local_b0 = 0;
  local_90 = 0;
  FUN_01e3f820();
  local_b0 = 0;
  local_90 = 0;
  (**(code **)(*plVar1 + 0x3b0))();
  FUN_01cb4790();
  (**(code **)(*local_d8 + 0x380))();
  local_90 = local_40;
  if (local_40 == 0) {
    bVar9 = 1;
    local_90 = 0;
    uVar18 = 0;
  }
  else {
    uVar7 = (undefined7)((uint64_t)uVar18 >> 8);
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar9 = 0;
      uVar18 = CONCAT71(uVar7,1);
    }
    else {
      local_38 = '\0';
      uVar18 = CONCAT71(uVar7,1);
      bVar9 = 0;
    }
  }
  if (((char)local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar8 = local_90;
  uVar6 = FUN_01d44d80();
  uVar7 = (undefined7)((uint64_t)uVar6 >> 8);
  if (local_40 == lVar8) {
    local_b0 = uVar18;
    if ((bool)(bVar9 & local_40 != 0)) {
      local_b0 = CONCAT71(uVar7,1);
      if (local_38 != '\0') goto LAB_00b1e3a4;
      local_b0 = CONCAT71(uVar7,1);
      FUN_00d50b00();
    }
  }
  else {
    if (local_38 != '\0') {
      local_b0 = CONCAT71(uVar7,1);
      if (((byte)uVar18 & local_90 != 0) == 1) {
        local_90 = local_40;
        FUN_00d50b20();
      }
      else {
        local_90 = local_40;
      }
      goto LAB_00b1e3a4;
    }
    if (local_40 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_b0 = CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
    if (((byte)uVar18 & local_90 != 0) != 1) {
      local_90 = local_40;
      goto LAB_00b1e3a4;
    }
    local_90 = local_40;
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
LAB_00b1e3a4:
  FUN_01d48a10();
  FUN_01e3f820();
  (**(code **)(*this_ptr + 0xac8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x550))();
  if (0.0 < param_2) {
    local_c8 = 0.0;
    do {
      fVar31 = local_c8;
      FUN_01e3f820();
      fVar14 = (float)_logf();
      local_88._0_4_ = fVar14 / g_0241c6f0;
      auVar29._0_8_ = _logf();
      auVar29._8_8_ = extraout_XMM0_Qb;
      auVar19._4_12_ = auVar29._4_12_;
      fVar14 = 0.0;
      uVar32 = 0;
      auVar19._0_4_ =
           ((float)auVar29._0_8_ / g_0241c6f0 - (float)local_88._0_4_) * (local_c8 / fVar31) +
           (float)local_88._0_4_;
      local_88._0_4_ = _exp2f(auVar19._0_8_);
      plVar1 = (int64_t *)*arg1;
      if ((local_c8 != g_0239424c) || (NAN(local_c8) || NAN(g_0239424c))) {
        FUN_01e3f820();
        local_a8 = fVar14 * g_0239011c;
        fStack_a4 = fVar14;
        uStack_a0 = uVar32;
        uStack_9c = uVar32;
        if (0 < *(int *)(this_ptr[0x39] + 0xc)) {
          lVar8 = 0;
          do {
            FUN_00b398f0();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
        }
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x4e8))();
      }
      else {
        FUN_01e3f820();
        local_a8 = fVar14 * g_0239011c;
        fStack_a4 = fVar14;
        uStack_a0 = uVar32;
        uStack_9c = uVar32;
        if (0 < *(int *)(this_ptr[0x39] + 0xc)) {
          lVar8 = 0;
          do {
            FUN_00b398f0();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
        }
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x4d8))();
      }
      local_c8 = local_c8 + g_02390124;
    } while (local_c8 < param_2);
  }
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x4e8))();
  plVar1 = (int64_t *)*arg1;
  FUN_01e3f820();
  FUN_01e3f820();
  (**(code **)(*plVar1 + 0x4e8))();
  (**(code **)(*(int64_t *)*arg1 + 0x558))();
  (**(code **)(*(int64_t *)*arg1 + 0x518))();
  (**(code **)(*(int64_t *)*arg1 + 0x560))();
  cVar5 = (**(code **)(*this_ptr + 0xab8))();
  if (cVar5 != '\0') {
    (**(code **)(*this_ptr + 0xad0))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    if (0.0 < param_2) {
      local_c8 = g_0240e350 + param_2;
      local_68._0_4_ = 0.0;
      do {
        uVar34 = 0;
        uVar33 = 0;
        uVar32 = 0;
        fVar31 = (float)local_68._0_4_;
        FUN_01e3f820();
        local_88._4_4_ = uVar32;
        local_88._0_4_ = fVar31;
        uStack_80 = uVar33;
        uStack_7c = uVar34;
        local_a8 = (float)_logf();
        local_a8 = local_a8 / g_0241c6f0;
        auVar20._0_8_ = _logf();
        auVar20._8_8_ = extraout_XMM0_Qb_00;
        auVar21._4_12_ = auVar20._4_12_;
        auVar21._0_4_ =
             ((float)auVar20._0_8_ / g_0241c6f0 - local_a8) *
             ((float)local_68._0_4_ / (float)local_88._0_4_) + local_a8;
        uVar32 = _exp2f(auVar21._0_8_);
        if (((int)(float)local_68._0_4_ * -0x11111111 + 0x8888888U >> 2 |
            (int)(float)local_68._0_4_ * -0x40000000) < 0x4444445) {
          local_88._0_4_ = uVar32;
          plVar1 = (int64_t *)*arg1;
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x3e0))();
          fVar31 = 0.0;
          if ((float)local_68._0_4_ < local_c8) {
            plVar1 = (int64_t *)*arg1;
            if ((float)local_88._0_4_ <= g_02394264) {
              local_cc = (int)(float)local_88._0_4_;
              local_d0 = 1;
              local_d8 = &g_024cc6f0;
              FUN_00d8cb40();
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_01e3f820();
              (**(code **)(*plVar1 + 0x3f0))
                        ((float)local_68._0_4_ + g_02390d34,fVar31 + g_023b1608);
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_cc = (int)((float)local_88._0_4_ / g_02393944);
              local_d0 = 1;
              local_d8 = &g_024cc6f0;
              FUN_00d8cb40((float)local_88._0_4_ / g_02393944,&local_d8);
              if (local_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              FUN_01e3f820();
              (**(code **)(*plVar1 + 0x3f0))
                        ((float)local_68._0_4_ + g_02390d34,fVar31 + g_023b1608);
              if (local_40 != 0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        local_68._0_4_ = (float)local_68._0_4_ + g_02390124;
      } while ((float)local_68._0_4_ < param_2);
    }
    if (g_0239424c < g_028a0e30) {
      iVar13 = 0;
      local_68._0_4_ = 0.0;
      do {
        fVar31 = 0.0;
        FUN_01e3f820();
        fVar14 = 0.0;
        uVar32 = 0;
        uVar33 = 0;
        fVar31 = (((float)local_68._0_4_ * fVar31) / g_028a0e30) * g_0239011c;
        plVar1 = (int64_t *)*arg1;
        if (iVar13 == 0) {
          FUN_01e3f820();
          FUN_01e3f820();
          local_88._4_4_ = fVar14;
          local_88._0_4_ = fVar31;
          uStack_80 = uVar32;
          uStack_7c = uVar33;
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x3e0))();
        }
        else {
          fVar15 = fVar31;
          FUN_01e3f820();
          auVar22._4_4_ = fVar14;
          auVar22._0_4_ = fVar14;
          auVar22._8_4_ = uVar33;
          auVar22._12_4_ = uVar33;
          register0x00001204 = auVar22._4_12_;
          local_88._0_4_ = fVar14 * g_0239011c;
          FUN_01e3f820();
          local_a8 = fVar15;
          fStack_a4 = fVar14;
          uStack_a0 = uVar32;
          uStack_9c = uVar33;
          FUN_01e3f820();
          fVar14 = (float)local_88._4_4_;
          uVar32 = uStack_7c;
          uVar18 = (**(code **)(*plVar1 + 0x3e0))();
          plVar1 = (int64_t *)*arg1;
          local_d0 = 1;
          local_d8 = &g_024cc6f0;
          local_cc = iVar13;
          FUN_00d8cb40(uVar18,&local_d8);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01e3f820();
          fVar31 = (fVar14 * g_0239011c - fVar31) + g_02390d28;
          uVar33 = uVar32;
          (**(code **)(*plVar1 + 0x3f0))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          plVar1 = (int64_t *)*arg1;
          FUN_01e3f820();
          auVar23._4_4_ = fVar14;
          auVar23._0_4_ = fVar14;
          auVar23._8_4_ = uVar33;
          auVar23._12_4_ = uVar33;
          register0x00001204 = auVar23._4_12_;
          local_88._0_4_ = fVar14 * g_0239011c;
          FUN_01e3f820();
          local_a8 = fVar31;
          fStack_a4 = fVar14;
          uStack_a0 = uVar32;
          uStack_9c = uVar33;
          FUN_01e3f820();
          uVar18 = (**(code **)(*plVar1 + 0x3e0))();
          plVar1 = (int64_t *)*arg1;
          local_d0 = 1;
          local_d8 = &g_024cc6f0;
          local_cc = iVar13;
          FUN_00d8cb40(uVar18,&local_d8);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x3f0))();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar13 = iVar13 + 6;
        local_68._0_4_ = (uint32_t)iVar13;
      } while ((float)local_68._0_4_ < g_028a0e30);
    }
  }
  (**(code **)(*this_ptr + 0xad8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  local_68._0_4_ = 0.0;
  if (0.0 < param_2) {
    local_c8 = 0.0;
    do {
      fVar31 = local_c8;
      FUN_01e3f820();
      fVar14 = (float)_logf();
      local_88._0_4_ = fVar14 / g_0241c6f0;
      auVar24._0_8_ = _logf();
      auVar24._8_8_ = extraout_XMM0_Qb_01;
      auVar25._4_12_ = auVar24._4_12_;
      fVar14 = 0.0;
      uVar32 = 0;
      auVar25._0_4_ =
           ((float)auVar24._0_8_ / g_0241c6f0 - (float)local_88._0_4_) * (local_c8 / fVar31) +
           (float)local_88._0_4_;
      local_88._0_4_ = _exp2f(auVar25._0_8_);
      plVar1 = (int64_t *)*arg1;
      if ((local_c8 != g_0239424c) || (NAN(local_c8) || NAN(g_0239424c))) {
        FUN_01e3f820();
        local_a8 = fVar14 * g_0239011c;
        fStack_a4 = fVar14;
        uStack_a0 = uVar32;
        uStack_9c = uVar32;
        if (0 < *(int *)(this_ptr[0x39] + 0xc)) {
          lVar8 = 0;
          do {
            FUN_00b398f0();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
        }
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x4e8))();
      }
      else {
        FUN_01e3f820();
        local_a8 = fVar14 * g_0239011c;
        fStack_a4 = fVar14;
        uStack_a0 = uVar32;
        uStack_9c = uVar32;
        if (0 < *(int *)(this_ptr[0x39] + 0xc)) {
          lVar8 = 0;
          do {
            FUN_00b398f0();
            lVar8 = lVar8 + 1;
          } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
        }
        FUN_01e3f820();
        (**(code **)(*plVar1 + 0x4d8))();
      }
      local_68._0_4_ = local_c8 + g_02390124;
      local_c8 = (float)local_68._0_4_;
    } while ((float)local_68._0_4_ < param_2);
  }
  uVar33 = 0;
  uVar32 = 0;
  fVar31 = 0.0;
  (**(code **)(*(int64_t *)*arg1 + 0x520))();
  if (local_40 != 0) {
    (**(code **)(*this_ptr + 0xae0))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40();
    local_68._0_4_ = 0.0;
    if (0.0 < param_2) {
      local_68._0_4_ = 0.0;
      do {
        uVar34 = 0;
        uVar33 = 0;
        uVar32 = 0;
        fVar31 = (float)local_68._0_4_;
        FUN_01e3f820();
        local_88._4_4_ = uVar32;
        local_88._0_4_ = fVar31;
        uStack_80 = uVar33;
        uStack_7c = uVar34;
        local_a8 = (float)_logf();
        local_a8 = local_a8 / g_0241c6f0;
        auVar26._0_8_ = _logf();
        auVar26._8_8_ = extraout_XMM0_Qb_02;
        auVar27._4_12_ = auVar26._4_12_;
        fVar14 = 0.0;
        uVar33 = 0;
        uVar34 = 0;
        fVar31 = (float)local_68._0_4_ / (float)local_88._0_4_;
        auVar27._0_4_ = ((float)auVar26._0_8_ / g_0241c6f0 - local_a8) * fVar31 + local_a8;
        uVar32 = _exp2f(auVar27._0_8_);
        plVar1 = (int64_t *)*arg1;
        local_88._0_4_ = uVar32;
        if (((float)local_68._0_4_ != g_0239424c) ||
           (NAN((float)local_68._0_4_) || NAN(g_0239424c))) {
          FUN_01e3f820();
          local_a8 = fVar31;
          fStack_a4 = fVar14;
          uStack_a0 = uVar33;
          uStack_9c = uVar34;
          local_88._0_4_ = FUN_00b398f0();
          local_c8 = g_028a0e30;
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x4e8))();
        }
        else {
          FUN_01e3f820();
          local_a8 = fVar31;
          fStack_a4 = fVar14;
          uStack_a0 = uVar33;
          uStack_9c = uVar34;
          local_88._0_4_ = FUN_00b398f0();
          local_c8 = g_028a0e30;
          FUN_01e3f820();
          (**(code **)(*plVar1 + 0x4d8))();
        }
        local_68._0_4_ = (float)local_68._0_4_ + g_02390124;
      } while ((float)local_68._0_4_ < param_2);
    }
    uVar33 = 0;
    uVar32 = 0;
    fVar31 = 0.0;
    (**(code **)(*(int64_t *)*arg1 + 0x520))();
  }
  (**(code **)(*this_ptr + 0xad8))();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01d488d0();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = this_ptr[0x39];
  if (*(int *)(lVar8 + 0xc) < 1) {
    auVar12 = (uint8_t  [8])0x0;
    lVar11 = 0;
  }
  else {
    lVar10 = 0;
    lVar11 = 0;
    auVar12 = (uint8_t  [8])0x0;
    do {
      lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + lVar10 * 8);
      cVar5 = SUB81(auVar12,0);
      if (lVar11 == lVar8) {
        lVar8 = lVar11;
        if ((cVar5 == '\0') && (lVar11 != 0)) {
          auVar12 = (uint8_t  [8])0x1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        auVar12 = (uint8_t  [8])0x1;
        if ((cVar5 != '\0') && (lVar11 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar11 = lVar8;
      FUN_00b39c60();
      FUN_01e3f820();
      local_c8 = (float)local_68._0_4_;
      fStack_c4 = fVar31;
      uStack_c0 = uVar32;
      uStack_bc = uVar33;
      fVar14 = (float)_logf();
      fVar15 = (float)_logf();
      uVar18 = _logf();
      uStack_f0 = (uint32_t)extraout_XMM0_Qb_03;
      uStack_ec = (uint32_t)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
      uVar32 = FUN_00b39c60();
      local_88._0_4_ = uVar32;
      FUN_01e3f820();
      local_a8 = fVar31 * g_0239011c;
      fStack_a4 = fVar31;
      uStack_a0 = uVar33;
      uStack_9c = uVar33;
      if (*(int *)(this_ptr[0x39] + 0xc) < 1) {
        local_68 = ZEXT816(0);
      }
      else {
        local_68 = ZEXT816(0);
        lVar8 = 0;
        do {
          fVar16 = (float)FUN_00b398f0();
          fVar31 = 0.0;
          local_68._4_4_ = 0;
          local_68._0_4_ = (float)local_68._0_4_ - (fVar16 / g_028a0e30) * local_a8;
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)(this_ptr[0x39] + 0xc));
      }
      FUN_01e3f820();
      auVar4._8_4_ = uStack_f0;
      auVar4._0_8_ = uVar18;
      auVar4._12_4_ = uStack_ec;
      auVar28._4_12_ = auVar4._4_12_;
      auVar28._0_4_ =
           (((float)uVar18 / g_0241c6f0 - fVar14 / g_0241c6f0) * local_c8) /
           (fVar15 / g_0241c6f0 - fVar14 / g_0241c6f0);
      auVar2._4_4_ = 0;
      auVar2._0_4_ = (float)local_68._0_4_ + fVar31 * g_0239011c;
      auVar2._8_4_ = local_68._8_4_;
      auVar2._12_4_ = local_68._12_4_;
      auVar29 = insertps(auVar28,auVar2,0x10);
      fVar31 = 0.0;
      uVar32 = 0;
      uVar33 = 0;
      local_68._0_4_ = g_02390d2c;
      (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar29._0_8_);
      lVar10 = lVar10 + 1;
      lVar8 = this_ptr[0x39];
    } while (lVar10 < *(int *)(lVar8 + 0xc));
  }
  if (local_40 != 0) {
    FUN_00b39c60();
    FUN_01e3f820();
    local_c8 = (float)local_68._0_4_;
    fStack_c4 = fVar31;
    uStack_c0 = uVar32;
    uStack_bc = uVar33;
    fVar16 = (float)_logf();
    fVar17 = (float)_logf();
    local_68._0_8_ = _logf();
    local_68._8_8_ = extraout_XMM0_Qb_04;
    local_a8 = (float)FUN_00b39c60();
    local_88 = auVar12;
    FUN_01e3f820();
    fVar15 = fVar31;
    local_a8 = (float)FUN_00b398f0();
    fVar14 = g_028a0e30;
    FUN_01e3f820();
    (**(code **)(*this_ptr + 0xae0))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar30._4_12_ = local_68._4_12_;
    auVar30._0_4_ =
         (((float)local_68._0_8_ / g_0241c6f0 - fVar16 / g_0241c6f0) * local_c8) /
         (fVar17 / g_0241c6f0 - fVar16 / g_0241c6f0);
    auVar3._4_4_ = fVar15;
    auVar3._0_4_ = fVar15 * g_0239011c + (0.0 - (local_a8 / fVar14) * fVar31 * g_0239011c);
    auVar3._8_4_ = uVar33;
    auVar3._12_4_ = uVar33;
    auVar29 = insertps(auVar30,auVar3,0x10);
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar29._0_8_,g_02390d2c);
    (**(code **)(*this_ptr + 0xac0))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_01d488d0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    auVar12 = local_88;
    (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
  }
  if ((SUB81(auVar12,0) != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  lVar8 = local_90;
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return;
}

