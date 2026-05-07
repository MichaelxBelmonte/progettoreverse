// Function: FUN_002a77a0
// Address: 002a77a0
// Size: 1995 bytes
// Class: MDMetaWindowController
// String references:
//   "%.0f"

void FUN_002a77a0(uint64_t param_1,float param_2)

{
  int iVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  bool bVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  void*puVar9;
  uint64_t uVar10;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar11;
  uint uVar12;
  int64_t lVar13;
  int64_t lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float extraout_XMM0_Da;
  uint64_t uVar18;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar19 [16];
  uint8_t auVar22 [12];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t local_168 [16];
  float local_158 [4];
  uint64_t local_148;
  uint64_t uStack_140;
  uint8_t local_138 [16];
  float local_128 [4];
  uint64_t local_118;
  uint64_t uStack_110;
  void*local_108;
  uint32_t local_100;
  uint32_t local_fc;
  uint64_t local_f8;
  uint64_t uStack_f0;
  uint8_t local_e8 [8];
  uint64_t uStack_e0;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  float local_9c;
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint64_t local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int64_t local_58;
  char local_50;
  uint8_t local_48 [16];
  uint64_t extraout_XMM0_Qb_07;
  
  local_e8 = (uint8_t  [8])(**(code **)(*this_ptr + 0xb00))();
  uStack_e0 = extraout_XMM0_Qb;
  if ((*(int *)((int64_t)this_ptr + 0x1e4) != 0) &&
     (cVar7 = (**(code **)(*this_ptr + 0xae8))(), cVar7 != '\0')) {
    FUN_01d48ad0();
    local_9c = (float)FUN_01d43be0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_02572358;
    (*g_02572370)();
    uVar12 = 0xffffffff;
    lVar13 = 0;
    fVar17 = 0.0;
    bVar6 = false;
    do {
      lVar11 = g_026fbd48;
      local_48._0_8_ = lVar13;
      bVar5 = bVar6;
      if ((int)uVar12 < 0) {
        if (g_026fbd48 != 0) {
          FUN_00d50b00();
        }
        if (lVar13 == lVar11) {
          if (lVar11 != 0) {
            bVar5 = true;
          }
          if ((bVar6) && (bVar5 = true, lVar11 != 0)) {
            FUN_00d50b20();
            bVar5 = bVar6;
          }
        }
        else {
          bVar5 = true;
          if ((bVar6) && (lVar13 != 0)) {
            FUN_00d50b20();
            local_48._0_8_ = lVar11;
          }
          else {
            local_48._0_8_ = lVar11;
          }
        }
      }
      else {
        local_100 = 1;
        local_108 = &g_024d0b28;
        local_fc = (&g_023b1640)[uVar12];
        FUN_00d8cb40(&g_023b1640,&local_108);
        if (lVar13 == local_58) {
          if ((bVar6) || (lVar13 == 0)) goto joined_r0x002a7a1c;
          bVar5 = true;
          lVar11 = lVar13;
          if (local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_002a7a40;
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          lVar11 = local_58;
          if ((bVar6) && (lVar13 != 0)) {
            local_48._0_8_ = local_58;
            FUN_00d50b20();
          }
LAB_002a7a40:
          lVar13 = lVar11;
          bVar5 = true;
joined_r0x002a7a1c:
          lVar11 = lVar13;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar11 = local_58;
          bVar5 = true;
          if ((bVar6) && (bVar5 = true, lVar13 != 0)) {
            local_48._0_8_ = local_58;
            FUN_00d50b20();
          }
        }
        local_48._0_8_ = lVar11;
      }
      FUN_01d48ad0();
      local_d0 = local_48._0_8_;
      local_c8 = '\0';
      local_f8 = FUN_01d43d10();
      uStack_f0 = extraout_XMM0_Qb_00;
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      local_58 = local_48._0_8_;
      local_50 = '\0';
      FUN_00d21140();
      fVar15 = (float)local_f8;
      if ((float)local_f8 <= fVar17) {
        fVar15 = fVar17;
      }
      uVar12 = uVar12 + 1;
      lVar13 = local_48._0_8_;
      fVar17 = fVar15;
      bVar6 = bVar5;
    } while (uVar12 != 9);
    local_f8 = CONCAT44(local_f8._4_4_,fVar15);
    local_e8._0_4_ = local_e8._0_4_ + param_2 + g_02390d00;
    lVar11 = 0;
    do {
      if ((int)lVar11 + -1 < 0) {
        fVar15 = (float)(**(code **)(*this_ptr + 0xac0))();
        (**(code **)(*this_ptr + 0xad0))();
        fStack_60 = (float)extraout_XMM0_Qb_03;
        fStack_5c = (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
        local_68 = extraout_XMM0_Da;
        fStack_64 = extraout_XMM0_Db;
        fVar17 = g_02390124;
        if (0.0 < extraout_XMM0_Da) {
          fStack_64 = 0.0;
          fStack_60 = 0.0;
          fStack_5c = 0.0;
          local_68 = fVar15;
          fVar17 = 0.0;
          if (fVar15 < 0.0) {
            uVar18 = FUN_00aea6b0();
            fVar17 = (float)FUN_00aea6b0();
            local_68 = (float)uVar18;
            fStack_64 = (float)((uint64_t)uVar18 >> 0x20);
            fStack_60 = (float)extraout_XMM0_Qb_04;
            fStack_5c = (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
            local_68 = local_68 / fVar17;
            fVar17 = local_68;
          }
        }
        cVar7 = (**(code **)(*this_ptr + 0xaf0))();
        if (cVar7 != '\0') {
          fVar17 = g_02390124 - fVar17;
        }
        local_78 = *(void*)((int64_t)this_ptr + 0x1dc);
        local_48._0_8_ = (**(code **)(*this_ptr + 0xb00))();
        local_48._8_8_ = extraout_XMM0_Qb_05;
        bVar8 = (**(code **)(*this_ptr + 0xae8))();
        local_158[0] = local_68 + (float)local_48._0_8_;
        local_158[1] = fStack_64 + (float)((uint64_t)local_48._0_8_ >> 0x20);
        local_158[2] = fStack_60 + (float)extraout_XMM0_Qb_05;
        local_158[3] = fStack_5c + (float)((uint64_t)extraout_XMM0_Qb_05 >> 0x20);
        uVar10 = (uint64_t)bVar8;
        local_168 = local_48;
        local_148 = local_78;
        uStack_140 = 0;
        fVar15 = ((local_158[uVar10] + g_02390d00) - *(float *)(local_168 + uVar10 * 4)) -
                 *(float *)((int64_t)&local_148 + uVar10 * 4);
      }
      else {
        local_68 = (float)FUN_00aea5e0();
        fVar15 = (float)(**(code **)(*this_ptr + 0xac0))();
        fVar16 = (float)(**(code **)(*this_ptr + 0xad0))();
        fStack_64 = 0.0;
        fStack_60 = 0.0;
        fStack_5c = 0.0;
        fVar17 = g_02390124;
        if (local_68 < fVar16) {
          fStack_64 = 0.0;
          fStack_60 = 0.0;
          fStack_5c = 0.0;
          fVar17 = 0.0;
          if (fVar15 < local_68) {
            uVar18 = FUN_00aea6b0();
            fVar17 = (float)FUN_00aea6b0();
            local_68 = (float)uVar18;
            fStack_64 = (float)((uint64_t)uVar18 >> 0x20);
            fStack_60 = (float)extraout_XMM0_Qb_01;
            fStack_5c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
            local_68 = local_68 / fVar17;
            fVar17 = local_68;
          }
        }
        cVar7 = (**(code **)(*this_ptr + 0xaf0))();
        if (cVar7 != '\0') {
          fVar17 = g_02390124 - fVar17;
        }
        local_78 = *(void*)((int64_t)this_ptr + 0x1dc);
        local_48._0_8_ = (**(code **)(*this_ptr + 0xb00))();
        local_48._8_8_ = extraout_XMM0_Qb_02;
        bVar8 = (**(code **)(*this_ptr + 0xae8))();
        local_128[0] = local_68 + (float)local_48._0_8_;
        local_128[1] = fStack_64 + (float)((uint64_t)local_48._0_8_ >> 0x20);
        local_128[2] = fStack_60 + (float)extraout_XMM0_Qb_02;
        local_128[3] = fStack_5c + (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
        uVar10 = (uint64_t)bVar8;
        local_138 = local_48;
        local_118 = local_78;
        uStack_110 = 0;
        fVar15 = ((local_128[uVar10] + g_02390d00) - *(float *)(local_138 + uVar10 * 4)) -
                 *(float *)((int64_t)&local_118 + uVar10 * 4);
      }
      uVar12 = (uint)bVar8;
      auVar23._0_4_ = fVar17 * (fVar15 + g_02390124);
      auVar23._4_4_ = auVar23._0_4_;
      auVar23._8_4_ = auVar23._0_4_;
      auVar23._12_4_ = auVar23._0_4_;
      auVar21._0_4_ = -(uint)(uVar12 == g_0238fcc0);
      auVar21._4_4_ = -(uint)(uVar12 == _UNK_0238fcc4);
      auVar21._8_4_ = -(uint)(uVar12 == _UNK_0238fcc8);
      auVar21._12_4_ = -(uint)(uVar12 == _UNK_0238fccc);
      auVar23 = blendvps(local_48,auVar23,auVar21);
      lVar2 = *(int64_t *)(puVar9[2] + lVar11 * 8);
      auVar21 = auVar23;
      if (lVar13 == lVar2) {
        lVar14 = lVar13;
        bVar6 = bVar5;
        if ((!bVar5) && (lVar2 != 0)) {
          FUN_00d50b00();
          bVar6 = true;
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        lVar14 = lVar2;
        bVar6 = true;
        if ((bVar5) && (lVar13 != 0)) {
          FUN_00d50b20();
          bVar6 = true;
        }
      }
      bVar5 = bVar6;
      FUN_01d48ad0();
      local_b8 = '\0';
      local_c0 = lVar14;
      uVar18 = FUN_01d43d10();
      uStack_80 = (uint32_t)extraout_XMM0_Qb_06;
      uStack_7c = (uint32_t)((uint64_t)extraout_XMM0_Qb_06 >> 0x20);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      iVar1 = *(int *)((int64_t)this_ptr + 0x1e4);
      fVar17 = (float)local_e8._0_4_;
      auVar22 = stack0xffffffffffffff1c;
      if (iVar1 == 1) {
LAB_002a7ed7:
        auVar24._8_4_ = uStack_80;
        auVar24._0_8_ = uVar18;
        auVar24._12_4_ = uStack_7c;
        auVar20._0_4_ = fVar17 - (float)uVar18;
        auVar20._4_12_ = auVar22;
        auVar23 = blendps(auVar23,auVar20,1);
      }
      else if (iVar1 == 2) {
        fVar17 = (float)FUN_01e3f820();
        auVar24._8_4_ = uStack_80;
        auVar24._0_8_ = uVar18;
        auVar24._12_4_ = uStack_7c;
        auVar4._4_4_ = local_f8._4_4_;
        auVar4._0_4_ = ((float)local_f8 - (float)uVar18) + fVar17;
        auVar4._8_4_ = (uint32_t)uStack_f0;
        auVar4._12_4_ = uStack_f0._4_4_;
        auVar23 = blendps(auVar23,auVar4,1);
      }
      else {
        if (iVar1 == 3) {
          auVar19._0_8_ = FUN_01e3f820();
          auVar19._8_8_ = extraout_XMM0_Qb_07;
          fVar17 = (float)auVar19._0_8_ + auVar21._0_4_ + g_02390d00;
          auVar22 = auVar19._4_12_;
          goto LAB_002a7ed7;
        }
        auVar24._8_4_ = uStack_80;
        auVar24._0_8_ = uVar18;
        auVar24._12_4_ = uStack_7c;
      }
      auVar21 = insertps(auVar24,local_78._4_4_,0xc);
      local_a8 = '\0';
      auVar3._4_4_ = auVar23._4_4_;
      auVar3._0_4_ = ((auVar23._4_4_ + auVar21._0_4_ * g_023945d0) -
                     auVar21._4_4_ * _UNK_023945d4) - local_9c;
      auVar3._8_4_ = auVar23._12_4_;
      auVar3._12_4_ = auVar23._12_4_;
      insertps(auVar23,auVar3,0x10);
      local_b0 = lVar14;
      (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      lVar11 = lVar11 + 1;
      lVar13 = lVar14;
    } while ((int)lVar11 != 10);
    FUN_00d50b20();
    if ((bVar5) && (lVar14 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

