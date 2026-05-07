// Function: FUN_01d5f100
// Address: 01d5f100
// Size: 5334 bytes
// Class: GNMultipleValue

void FUN_01d5f100(uint64_t param_1,uint64_t param_2,int64_t *param_3,uint32_t param_4,
                 int64_t *param_5)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  bool bVar3;
  int64_t *plVar4;
  uint8_t auVar5 [8];
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  undefined7 uVar13;
  int64_t lVar10;
  int64_t *plVar11;
  void*puVar12;
  int64_t *in_RCX;
  int64_t lVar14;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar15;
  int64_t *unaff_R15;
  uint32_t extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  uint32_t extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar18 [16];
  uint64_t uVar16;
  float extraout_XMM0_Db_00;
  uint64_t extraout_XMM0_Qb_04;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t in_XMM1 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint32_t uVar27;
  float fVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  uint8_t auVar36 [16];
  int64_t *local_res8;
  int local_res10;
  int64_t *local_res18;
  void*local_res20;
  int64_t local_298;
  char local_290;
  int64_t *local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t *local_248;
  char local_240;
  int64_t *local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  float local_154;
  float local_150;
  float local_14c;
  uint64_t local_148;
  float fStack_140;
  float fStack_13c;
  uint8_t local_138 [16];
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_e0;
  char local_d8;
  uint64_t local_d0;
  uint8_t local_c8 [8];
  uint64_t uStack_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  uint32_t local_9c;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  uint8_t local_88 [8];
  uint64_t uStack_80;
  int64_t *local_68;
  int64_t *local_58;
  char local_50;
  int local_40;
  uint64_t extraout_XMM0_Qb_07;
  uint64_t extraout_XMM0_Qb_08;
  
  plVar6 = local_58;
  uStack_80 = (double)in_XMM0_Qb;
  local_88 = (uint8_t  [8])param_1;
  if (*(int *)(*(int64_t *)(this_ptr + 0x18) + 0xc) == 0) {
    return;
  }
  uVar13 = (undefined7)((uint64_t)local_58 >> 8);
  uVar15 = param_2;
  auVar23 = in_XMM1;
  local_148 = param_3;
  if (*arg1 == 0) {
    FUN_01f50d20();
    local_68 = local_58;
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    local_d0 = CONCAT71(uVar13,1);
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    FUN_01e49570();
    local_68 = local_58;
    if (local_58 == (int64_t *)0x0) {
      local_68 = (int64_t *)0x0;
      local_d0 = 0;
    }
    else {
      local_d0 = CONCAT71(uVar13,1);
      if (local_50 == '\0') {
        FUN_00d50b00();
      }
    }
    local_88 = (uint8_t  [8])FUN_01e46ed0();
    uStack_80 = (double)extraout_XMM0_Qb;
  }
  if (local_68 == (int64_t *)0x0) {
    return;
  }
  lVar10 = *param_5;
  if (lVar10 == 0) {
    FUN_01d3a560();
    local_98 = (uint8_t  [8])local_58;
    if (local_50 == '\0') {
      if (local_58 == (int64_t *)0x0) goto LAB_01d5f2d9;
      FUN_00d50b00();
LAB_01d5f294:
      iVar8 = FUN_01d3a5a0();
      if (((iVar8 != 6) && (iVar8 = FUN_01d3a5a0(), iVar8 != 1)) &&
         (iVar8 = FUN_01d3a5a0(), iVar8 != 5)) {
        bVar3 = false;
        goto LAB_01d5f2de;
      }
      local_b8 = (uint8_t  [8])FUN_01d3abf0();
      bVar3 = false;
      uStack_b0 = extraout_XMM0_Qb_00;
    }
    else {
      if (local_58 != (int64_t *)0x0) goto LAB_01d5f294;
LAB_01d5f2d9:
      bVar3 = true;
LAB_01d5f2de:
      local_b8 = local_88;
      uStack_b0 = (uint64_t)uStack_80;
    }
    FUN_01f514b0();
    if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_c8 = (uint8_t  [8])FUN_01f51370();
    uStack_c0 = extraout_XMM0_Qb_01;
    auVar17._4_4_ = local_b8._4_4_;
    auVar17._0_4_ = local_b8._4_4_;
    auVar17._8_4_ = uStack_b0._4_4_;
    auVar17._12_4_ = uStack_b0._4_4_;
    auVar36._4_12_ = auVar17._4_12_;
    auVar36._0_4_ = (float)local_b8._4_4_ + g_023b1d84;
    auVar17 = insertps(_local_c8,auVar36,0x10);
    auVar23 = blendps(auVar23,g_023b27d0,0xe);
    uVar15 = 0;
    FUN_01ede930(auVar17._0_8_,5);
    plVar11 = (int64_t *)*param_5;
    if (plVar11 == local_58) {
      if (((char)param_5[1] == '\0') && (local_58 != (int64_t *)0x0)) {
        local_c8._0_4_ = param_4;
        if (local_50 != '\0') goto LAB_01d5f430;
        FUN_00d50b00();
        goto LAB_01d5f47e;
      }
LAB_01d5f48a:
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_c8._0_4_ = param_4;
      lVar10 = param_5[1];
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *param_5 = (int64_t)local_58;
        if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01d5f47e:
        *(void*)(param_5 + 1) = 1;
        param_4 = local_c8._0_4_;
        goto LAB_01d5f48a;
      }
      *param_5 = (int64_t)local_58;
      if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_01d5f430:
      *(void*)(param_5 + 1) = 1;
      local_50 = '\0';
      param_4 = local_c8._0_4_;
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    lVar10 = *param_5;
    unaff_R15 = local_58;
    if (lVar10 != 0) goto LAB_01d5f501;
  }
  else {
LAB_01d5f501:
    if (*(int *)(lVar10 + 0xc) != 0) {
      FUN_01ede400();
      local_b8._4_4_ = extraout_XMM0_Db;
      local_b8._0_4_ = extraout_XMM0_Da;
      uStack_b0._0_4_ = (float)(int)extraout_XMM0_Qb_02;
      uStack_b0._4_4_ = (float)(int)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
      _local_98 = auVar23;
      cVar7 = FUN_00d05410();
      if (cVar7 == '\0') {
        auVar23 = _local_b8;
        if (local_b8._0_4_ <= local_88._0_4_) {
          auVar23 = _local_88;
        }
        auVar17 = blendps(_local_88,auVar23,0xd);
        fVar33 = (float)local_98._0_4_ + local_b8._0_4_;
        fVar34 = (float)local_98._4_4_ + local_b8._4_4_;
        fVar35 = uStack_90._4_4_ + local_b8._12_4_;
        auVar29._4_4_ = fVar34;
        auVar29._0_4_ = fVar33;
        auVar29._8_4_ = (float)uStack_90 + local_b8._8_4_;
        auVar29._12_4_ = fVar35;
        auVar30._4_12_ = auVar29._4_12_;
        auVar30._0_4_ = fVar33 + g_02390d00;
        if (auVar30._0_4_ < auVar23._0_4_) {
          auVar17 = blendps(auVar17,auVar30,1);
        }
        auVar36 = maxps(_local_b8,auVar17);
        _local_88 = blendps(auVar17,auVar36,2);
        auVar23._4_4_ = fVar34;
        auVar23._0_4_ = fVar34;
        auVar23._8_4_ = fVar35;
        auVar23._12_4_ = fVar35;
        auVar24._4_12_ = auVar23._4_12_;
        auVar24._0_4_ = fVar34 + g_02390d00;
        if (auVar24._0_4_ < auVar36._4_4_) {
          _local_88 = insertps(_local_88,auVar24,0x10);
        }
      }
    }
  }
  FUN_00d50b00();
  *(void*)(this_ptr + 0x23) = 1;
  if (*(char *)(this_ptr + 0x20) != '\0') {
    FUN_01d5e350();
  }
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    *(void*)(this_ptr + 0x40) = 0;
    FUN_00d50b20();
  }
  FUN_01cb4790();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (*local_148 == 0) {
    (**(code **)(*local_58 + 0x370))();
    plVar4 = local_148;
    plVar11 = (int64_t *)*local_148;
    if (plVar11 == local_58) {
      if (((char)local_148[1] != '\0') || (local_58 == (int64_t *)0x0)) goto LAB_01d5f6c1;
      if (local_50 == '\0') {
        FUN_00d50b00();
        goto LAB_01d5f6bd;
      }
    }
    else {
      lVar10 = local_148[1];
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *local_148 = (int64_t)local_58;
        if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01d5f6bd:
        unaff_R15 = plVar4 + 1;
        *(void*)unaff_R15 = 1;
LAB_01d5f6c1:
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d5f6d5;
      }
      *local_148 = (int64_t)local_58;
      if (((char)lVar10 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    unaff_R15 = plVar4 + 1;
    *(void*)unaff_R15 = 1;
  }
LAB_01d5f6d5:
  _local_b8 = blendps(ZEXT816(0),in_XMM1,0xd);
  _local_98 = roundps(_local_b8,_local_88,9);
  lVar10 = *(int64_t *)(this_ptr + 0x18);
  if (*(int *)(lVar10 + 0xc) < 1) {
    local_9c = 0;
  }
  else {
    lVar14 = 0;
    do {
      lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar14 * 8);
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      uVar9 = FUN_01d65e30();
      unaff_R15 = (int64_t *)(uint64_t)uVar9;
      if (lVar10 != 0) {
        FUN_00d50b20();
      }
      lVar10 = *(int64_t *)(this_ptr + 0x18);
      if ((byte)uVar9 != 0) {
        local_9c = (uint32_t)CONCAT71((int7)(uVar15 >> 8),1);
        goto joined_r0x01d5f783;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(lVar10 + 0xc));
    local_9c = 0;
joined_r0x01d5f783:
    if (0 < *(int *)(lVar10 + 0xc)) {
      local_c8._0_4_ = param_4;
      uVar15 = 0;
      unaff_R15 = (int64_t *)(uint64_t)(byte)uVar9;
      do {
        lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + uVar15 * 8);
        if (lVar10 != 0) {
          FUN_00d50b00();
        }
        FUN_01d65230();
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_298 = *local_148;
        local_290 = '\0';
        local_88 = (uint8_t  [8])(**(code **)(*local_58 + 0x5d0))(unaff_R15,&local_298);
        uStack_80 = (double)extraout_XMM0_Qb_03;
        if ((local_290 != '\0') && (local_298 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar10 != 0) {
          FUN_00d50b20();
        }
        auVar18._0_4_ = (float)(int)((double)local_88._0_4_ + g_0240f108);
        auVar18._4_4_ = (float)(int)uStack_80;
        auVar18._8_8_ = 0;
        if (local_b8._0_4_ < auVar18._0_4_) {
          _local_b8 = blendps(_local_b8,auVar18,1);
        }
        auVar26 = _local_98;
        if ((param_2 & 0xffffffff) == uVar15) {
          auVar26._0_4_ = local_98._0_4_ - local_b8._0_4_;
          auVar26._4_4_ = local_98._4_4_ - local_b8._4_4_;
          auVar26._8_4_ = local_98._8_4_ - local_b8._8_4_;
          auVar26._12_4_ = local_98._12_4_ - local_b8._12_4_;
        }
        _local_98 = blendps(_local_98,auVar26,2);
        auVar25._0_4_ = local_88._0_4_ + local_b8._0_4_;
        auVar25._4_4_ = (float)local_88._4_4_ + local_b8._4_4_;
        auVar25._8_4_ = (float)uStack_80 + local_b8._8_4_;
        auVar25._12_4_ = uStack_80._4_4_ + local_b8._12_4_;
        _local_b8 = blendps(auVar25,_local_b8,0xd);
        uVar15 = uVar15 + 1;
        lVar10 = *(int64_t *)(this_ptr + 0x18);
      } while ((int64_t)uVar15 < (int64_t)*(int *)(lVar10 + 0xc));
      param_4 = local_c8._0_4_;
    }
  }
  if (local_res10 == 0) {
    local_c8._4_4_ = (float)local_98._4_4_ - (float)local_b8._4_4_;
    local_c8._0_4_ = (float)local_98._0_4_ - (float)local_b8._0_4_;
    uStack_c0._0_4_ = (uint)((float)uStack_90 - (float)uStack_b0);
    uStack_c0._4_4_ = (uint)(uStack_90._4_4_ - uStack_b0._4_4_);
    lVar10 = *in_RCX;
  }
  else {
    lVar10 = *in_RCX;
    _local_c8 = _local_98;
  }
  if (lVar10 == 0) {
    _local_c8 = _local_98;
  }
  local_138._0_8_ = (**(code **)(*local_58 + 0x3c8))();
  local_138._8_8_ = extraout_XMM0_Qb_04;
  uVar16 = (**(code **)(*local_58 + 0x3c8))(local_138._0_8_,2);
  local_154 = (float)uVar16;
  local_150 = (float)(**(code **)(*local_58 + 0x3c8))(uVar16,1);
  (**(code **)(*local_58 + 0x3c8))();
  lVar10 = *param_5;
  _local_88 = ZEXT416(g_02411dec);
  local_14c = extraout_XMM0_Da_00;
  if ((lVar10 != 0) && (*(int *)(lVar10 + 0xc) != 0)) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    _local_88 = ZEXT416(g_02411dec);
    fVar33 = extraout_XMM0_Db_00;
    uVar27 = extraout_XMM0_Dd;
    while( true ) {
      lVar14 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar10 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + 8 + lVar14 * 8);
      FUN_01ede400();
      if ((float)local_88._0_4_ < fVar33) {
        FUN_01ede400();
        local_88._4_4_ = fVar33;
        local_88._0_4_ = fVar33;
        uStack_80._0_4_ = (float)uVar27;
        uStack_80._4_4_ = (float)uVar27;
      }
    }
    FUN_01edf7b0();
  }
  auVar23 = maxps(in_XMM1,_local_b8);
  local_138._0_4_ = local_138._0_4_ + local_154 + local_b8._0_4_;
  auVar19._4_4_ = auVar23._4_4_;
  auVar19._0_4_ = auVar19._4_4_;
  auVar19._12_4_ = auVar23._12_4_;
  auVar19._8_4_ = auVar19._12_4_;
  auVar20._4_12_ = auVar19._4_12_;
  auVar20._0_4_ = auVar19._4_4_ + local_150 + local_14c;
  auVar23 = insertps(local_138,auVar20,0x10);
  if (auVar20._0_4_ <= (float)local_88._0_4_) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uStack_b0;
    _local_b8 = auVar1 << 0x40;
    plVar11 = (int64_t *)*local_res20;
    local_138 = auVar23;
    if (plVar11 == (int64_t *)0x0) goto LAB_01d5fb89;
LAB_01d5fc49:
    cVar7 = *(char *)(local_res20 + 1);
    if (cVar7 != '\0') {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uStack_80;
      _local_88 = auVar2 << 0x40;
      FUN_00d50b00();
    }
    local_88 = (uint8_t  [8])(CONCAT71((int7)((uint64_t)unaff_R15 >> 8),cVar7) & 0xffffffff);
    lVar10 = plVar11[0x27];
  }
  else {
    plVar11 = (int64_t *)FUN_00e8fc40();
    FUN_00074c30();
    (**(code **)(*plVar11 + 0x18))();
    insertps(local_138,local_88._0_4_,0x10);
    local_b8 = (uint8_t  [8])plVar11;
    (**(code **)(*plVar11 + 0x4d0))();
    local_138 = insertps(auVar23,local_88._0_4_,0x10);
    plVar11 = (int64_t *)*local_res20;
    if (plVar11 != (int64_t *)0x0) goto LAB_01d5fc49;
LAB_01d5fb89:
    plVar11 = (int64_t *)FUN_00e8fc40();
    FUN_0006daf0();
    *plVar11 = (int64_t)&g_026b4ed8;
    plVar11[2] = (int64_t)&g_026b5850;
    plVar11[0x27] = 0;
    *(void*)(plVar11 + 0x28) = 0;
    *(void*)((int64_t)plVar11 + 0x17c) = 0;
    plVar11[0x30] = 0;
    *(void*)(plVar11 + 0x31) = 0;
    plVar11[0x29] = 0;
    plVar11[0x2a] = 0;
    *(void*)((int64_t)plVar11 + 0x154) = 0;
    *(void*)((int64_t)plVar11 + 0x15c) = 0;
    plVar11[0x2d] = 0;
    plVar11[0x2e] = 0;
    *(void*)(plVar11 + 0x2f) = 0;
    uVar16 = (*g_026b4ef0)();
    auVar23 = _local_88;
    local_88._1_7_ = (int7)((uint64_t)uVar16 >> 8);
    local_88[0] = 1;
    uStack_80 = auVar23._8_8_;
    lVar10 = plVar11[0x27];
  }
  if (lVar10 != this_ptr) {
    FUN_00d50b00();
    plVar11[0x27] = this_ptr;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  *(int *)(plVar11 + 0x28) = (int)param_2;
  plVar11[0x2b] = *local_148;
  plVar11[0x2e] = *local_res8;
  *(int *)((int64_t)plVar11 + 0x17c) = local_res10;
  *(void*)(plVar11 + 0x2c) = param_4;
  plVar11[0x2a] = *in_RCX;
  *(char *)(plVar11 + 0x2f) = (char)local_9c;
  (**(code **)(*plVar11 + 0x4d0))();
  lVar10 = *local_res18;
  lVar14 = plVar11[0x30];
  if (lVar14 != lVar10) {
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    plVar11[0x30] = lVar10;
    if (lVar14 != 0) {
      FUN_00d50b20();
    }
  }
  puVar12 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar12 + 0xc) = 0;
  *puVar12 = &g_026a3350;
  puVar12[2] = &g_026a37c8;
  puVar12[3] = 0;
  puVar12[4] = 0;
  *(void*)(puVar12 + 5) = 0;
  puVar12[6] = 0;
  *(void*)((int64_t)puVar12 + 0x37) = 0;
  *(void*)((int64_t)puVar12 + 0x3c) = 0;
  *(void*)((int64_t)puVar12 + 0x44) = 0;
  *(void*)((int64_t)puVar12 + 0x4c) = 0;
  *(void*)((int64_t)puVar12 + 0x54) = 0;
  *(void*)((int64_t)puVar12 + 0x5c) = 0;
  *(void*)((int64_t)puVar12 + 100) = 0;
  *(void*)((int64_t)puVar12 + 0x69) = 0;
  puVar12[0xf] = 0;
  *(void*)((int64_t)puVar12 + 0x7f) = 0;
  *(void*)((int64_t)puVar12 + 0x84) = 0;
  *(void*)((int64_t)puVar12 + 0x8c) = 0;
  *(void*)((int64_t)puVar12 + 0x94) = 0;
  uVar16 = (*g_026a3368)();
  if (*arg1 != 0) {
    uVar16 = FUN_01e42030();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      uVar16 = FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      uVar16 = FUN_01e42030();
      local_d8 = 0;
      if (local_50 == '\0') {
        if (local_58 != (int64_t *)0x0) {
          uVar16 = FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_d8 = '\x01';
      local_e0 = local_58;
      FUN_01e5b6f0(uVar16,&local_e0);
      if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d5fedb;
    }
  }
  local_288 = local_68;
  local_280 = '\0';
  FUN_01e5b850(uVar16,&local_288);
  if ((local_280 != '\0') && (local_288 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d5fedb:
  lVar10 = g_026fce30;
  if (g_026fce30 != 0) {
    FUN_00d50b00();
  }
  local_278 = lVar10;
  local_270 = '\x01';
  FUN_01e5a050();
  auVar5 = local_b8;
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  _local_c8 = blendps(_local_c8,_local_98,2);
  local_260 = '\0';
  local_268 = 0;
  FUN_01e5ba50();
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if (auVar5 == (uint8_t  [8])0x0) {
    local_230 = '\0';
    local_238 = plVar11;
    FUN_01e5c8b0();
    if ((local_230 != '\0') && (local_238 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_258 = (int64_t)auVar5;
    local_250 = '\0';
    FUN_01e5c8b0();
    if ((local_250 != '\0') && (local_258 != 0)) {
      FUN_00d50b20();
    }
    local_240 = '\0';
    local_248 = plVar11;
    FUN_01d978b0();
    if ((local_240 != '\0') && (local_248 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_218 = g_027f0960;
  local_220 = '\0';
  local_228 = plVar11;
  if (g_027f0960 != 0) {
    FUN_00d50b00();
  }
  local_210 = '\x01';
  local_120 = 0;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  local_128 = this_ptr;
  FUN_00d41430(&local_128,&local_218);
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((*param_5 != 0) && (*(int *)(*param_5 + 0xc) != 0)) {
    FUN_01e5b880();
    local_208 = *param_5;
    local_200 = '\0';
    FUN_01edf3b0();
    local_1f0 = '\0';
    local_1f8 = 0;
    FUN_01e5ba50();
    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01e5d9c0();
  if (*in_RCX != 0) {
    fVar33 = (float)FUN_01e5b880();
    fVar33 = (float)((uint)((float)local_c8._0_4_ - fVar33) & g_02390140);
    fVar34 = (float)(local_c8._4_4_ & _UNK_02390144);
    fVar35 = (float)((uint)uStack_c0 & _UNK_02390148);
    fVar28 = (float)(uStack_c0._4_4_ & _UNK_0239014c);
    if (g_023908d8 < fVar33) {
      local_98 = (uint8_t  [8])(**(code **)(*(int64_t *)*in_RCX + 0x948))();
      uStack_90 = extraout_XMM0_Qb_05;
      local_148 = (int64_t *)CONCAT44(fVar34,fVar33);
      fStack_140 = fVar35;
      fStack_13c = fVar28;
      FUN_01e42030();
      if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      uVar16 = FUN_01e46ed0();
      if (local_res10 == 0) {
        uStack_90 = extraout_XMM0_Qb_06;
        local_98 = (uint8_t  [8])uVar16;
        *(void*)((int64_t)plVar11 + 0x17c) = 2;
        auVar22._0_8_ = FUN_01e5b880();
        auVar22._8_8_ = extraout_XMM0_Qb_08;
        local_1b0 = '\0';
        local_1b8 = 0;
        auVar32._0_4_ = (float)local_148 + (float)local_98._0_4_;
        auVar32._4_4_ = local_148._4_4_ + (float)local_98._4_4_;
        auVar32._8_4_ = fStack_140 + (float)uStack_90;
        auVar32._12_4_ = fStack_13c + uStack_90._4_4_;
        blendps(auVar32,auVar22,2);
        FUN_01e5ba50();
        if ((local_1b0 != '\0') && (local_1b8 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e5b880();
        local_1a8 = *param_5;
        local_1a0 = '\0';
        FUN_01edf3b0();
        local_190 = '\0';
        local_198 = 0;
        FUN_01e5ba50();
        if ((local_190 != '\0') && (local_198 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
      }
      else if (local_res10 == 2) {
        uStack_90 = extraout_XMM0_Qb_06;
        local_98 = (uint8_t  [8])uVar16;
        *(void*)((int64_t)plVar11 + 0x17c) = 0;
        auVar21._0_8_ = FUN_01e5b880();
        auVar21._8_8_ = extraout_XMM0_Qb_07;
        local_1e0 = '\0';
        local_1e8 = 0;
        auVar31._0_4_ = (float)local_98._0_4_ - fVar33;
        auVar31._4_4_ = (float)local_98._4_4_ - fVar34;
        auVar31._8_4_ = (float)uStack_90 - fVar35;
        auVar31._12_4_ = uStack_90._4_4_ - fVar28;
        blendps(auVar31,auVar21,2);
        FUN_01e5ba50();
        if ((local_1e0 != '\0') && (local_1e8 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e5b880();
        local_1d8 = *param_5;
        local_1d0 = '\0';
        FUN_01edf3b0();
        local_1c0 = '\0';
        local_1c8 = 0;
        FUN_01e5ba50();
        if ((local_1c0 != '\0') && (local_1c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1d0 != '\0') && (local_1d8 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  local_180 = '\0';
  local_188 = 0;
  (**(code **)(*plVar11 + 0x3c0))();
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_168 = g_027f0960;
  local_170 = '\0';
  local_178 = plVar11;
  if (g_027f0960 != 0) {
    FUN_00d50b00();
  }
  local_160 = '\x01';
  local_110 = 0;
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_118 = this_ptr;
  FUN_00d41040(&local_118,&local_168);
  auVar5 = local_b8;
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x23) = 0;
  FUN_00d50b20();
  if (local_88[0] != '\0') {
    FUN_00d50b20();
  }
  if (auVar5 != (uint8_t  [8])0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((char)local_d0 != '\0') {
    FUN_00d50b20();
  }
  return;
}

