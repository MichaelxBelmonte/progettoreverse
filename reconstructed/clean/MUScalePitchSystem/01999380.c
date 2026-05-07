// Function: FUN_01999380
// Address: 01999380
// Size: 2811 bytes
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


void FUN_01999380(void)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  bool bVar4;
  uint64_t uVar5;
  int iVar6;
  void*puVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  char *pcVar10;
  int64_t *plVar11;
  void*arg1;
  int64_t *this_ptr;
  int64_t lVar12;
  int64_t *plVar13;
  char cVar14;
  int64_t *plVar15;
  uint64_t uVar16;
  float fVar17;
  uint64_t uVar19;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar23 [16];
  float fVar18;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint8_t auVar24 [16];
  float extraout_XMM0_Db_01;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float fVar29;
  float fVar30;
  uint8_t in_XMM1 [16];
  uint8_t auVar31 [16];
  uint8_t auVar34 [12];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint64_t local_158;
  uint64_t uStack_150;
  float fStack_144;
  uint32_t uStack_13c;
  uint64_t local_108;
  uint64_t uStack_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  uint64_t local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  uint64_t local_68;
  int64_t *local_60;
  char local_58 [8];
  void*local_50;
  uint64_t local_48;
  int64_t *local_40;
  char local_38 [8];
  uint64_t extraout_XMM0_Qb_02;
  
  if (*(int *)(this_ptr[0x41] + 0xc) == 0) {
    return;
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02680400;
  *(void*)((int64_t)puVar7 + 0xc) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(void*)((int64_t)puVar7 + 0x39) = 0;
  *(void*)((int64_t)puVar7 + 0x41) = 0;
  (*g_02680418)();
  uVar19 = FUN_004f2260(0,FUN_01999250);
  if (local_60 == (int64_t *)0x0) {
    bVar4 = true;
    plVar15 = (int64_t *)0x0;
  }
  else {
    plVar15 = local_60;
    if (local_58[0] == '\0') {
      uVar19 = FUN_00d50b00();
      bVar4 = false;
      if ((local_58[0] == '\0') || (local_60 == (int64_t *)0x0)) goto LAB_01999450;
      uVar19 = FUN_00d50b20();
    }
    bVar4 = false;
  }
LAB_01999450:
  iVar6 = *(int *)((int64_t)plVar15 + 0xc);
  if (iVar6 < 2) {
    local_68 = 0;
    plVar13 = (int64_t *)0x0;
    local_48 = 0;
    local_40 = (int64_t *)0x0;
    local_d8 = 0;
  }
  else {
    lVar12 = 0;
    local_d8 = 0;
    local_40 = (int64_t *)0x0;
    local_48 = 0;
    plVar13 = (int64_t *)0x0;
    local_68 = 0;
    local_50 = puVar7;
    do {
      plVar11 = local_40;
      uVar16 = local_48 & 0xffffffff;
      cVar14 = (char)uVar16;
      if (lVar12 == 0) {
        lVar1 = *(int64_t *)plVar15[2];
        local_f0 = 0;
        if (lVar1 != 0) {
          uVar19 = FUN_00d50b00();
        }
        local_f0 = '\x01';
        local_f8 = lVar1;
        uVar19 = (**(code **)(*this_ptr + 0xab0))(uVar19,&local_f8);
        local_40 = local_60;
        plVar8 = local_60;
        if (local_60 == plVar11) {
          local_48 = uVar16;
          local_40 = plVar11;
          if ((cVar14 == '\0') && (local_60 != (int64_t *)0x0)) {
            if (local_58[0] != '\0') goto LAB_01999653;
            local_48 = CONCAT71((int7)((uint64_t)local_60 >> 8),1);
            uVar19 = FUN_00d50b00();
          }
LAB_019996a2:
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            uVar19 = FUN_00d50b20();
          }
        }
        else {
          if (local_58[0] == '\0') {
            uVar9 = 0;
            if (local_60 != (int64_t *)0x0) {
              uVar9 = FUN_00d50b00();
              uVar19 = extraout_XMM0_Qa_00;
            }
            local_48 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
            if ((cVar14 != '\0') && (plVar11 != (int64_t *)0x0)) {
              uVar19 = FUN_00d50b20();
            }
            goto LAB_019996a2;
          }
          if ((cVar14 != '\0') && (plVar11 != (int64_t *)0x0)) {
            plVar8 = (int64_t *)FUN_00d50b20();
            uVar19 = extraout_XMM0_Qa;
          }
LAB_01999653:
          local_58[0] = '\0';
          local_48 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
        }
        uVar5 = local_48;
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          uVar19 = FUN_00d50b20();
          uVar5 = local_48;
        }
      }
      else if (local_40 == plVar13) {
        uVar5 = uVar16;
        if ((((char)local_68 != '\0') && (cVar14 == '\0')) && (local_40 != (int64_t *)0x0)) {
          local_48 = CONCAT71((int7)(local_48 >> 8),1);
          uVar16 = 0;
          uVar19 = FUN_00d50b00();
          uVar5 = local_48;
        }
      }
      else {
        if (((char)local_68 != '\0') && (plVar13 != (int64_t *)0x0)) {
          uVar19 = FUN_00d50b00();
        }
        local_48 = local_68;
        uVar5 = local_48;
        local_40 = plVar13;
        if ((cVar14 != '\0') && (uVar5 = local_48, plVar11 != (int64_t *)0x0)) {
          uVar19 = FUN_00d50b20();
          local_48 = local_68;
          uVar5 = local_48;
        }
      }
      local_48 = uVar5;
      lVar1 = *(int64_t *)(plVar15[2] + 8 + lVar12 * 8);
      local_e0 = 0;
      if (lVar1 != 0) {
        uVar19 = FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      uVar9 = (**(code **)(*this_ptr + 0xab0))(uVar19,&local_e8);
      uVar19 = extraout_XMM0_Qa_01;
      if (local_60 == plVar13) {
        plVar11 = plVar13;
        if (((char)local_68 != '\0') || (local_60 == (int64_t *)0x0)) {
          local_68 = local_68 & 0xffffffff;
          goto joined_r0x019997b7;
        }
        if (local_58[0] == '\0') {
          uVar19 = FUN_00d50b00();
          goto joined_r0x01999996;
        }
LAB_01999754:
        local_58[0] = '\0';
        local_68 = CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
        plVar13 = plVar11;
      }
      else {
        if (local_58[0] != '\0') {
          plVar11 = local_60;
          if (((char)local_68 != '\0') && (plVar13 != (int64_t *)0x0)) {
            uVar9 = FUN_00d50b20();
            uVar19 = extraout_XMM0_Qa_02;
          }
          goto LAB_01999754;
        }
        if (local_60 != (int64_t *)0x0) {
          uVar19 = FUN_00d50b00();
        }
        plVar11 = local_60;
        if (((char)local_68 != '\0') && (plVar13 != (int64_t *)0x0)) {
          uVar19 = FUN_00d50b20();
        }
joined_r0x01999996:
        local_68 = CONCAT71((int7)(uVar16 >> 8),1);
joined_r0x019997b7:
        plVar13 = plVar11;
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          uVar19 = FUN_00d50b20();
        }
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        uVar19 = FUN_00d50b20();
      }
      if ((local_40 != (int64_t *)0x0) && (plVar13 != (int64_t *)0x0)) {
        local_108 = (**(code **)(*local_40 + 0x4d8))(local_48);
        uStack_100 = extraout_XMM0_Qb;
        auVar22._4_12_ = local_108._4_12_;
        auVar38._0_4_ = (float)local_108 + g_02394298;
        auVar38._4_12_ = auVar22._4_12_;
        local_158 = (**(code **)(*plVar13 + 0x4d8))(local_48);
        uStack_150 = extraout_XMM0_Qb_00;
        auVar23._4_12_ = local_158._4_12_;
        auVar23._0_4_ = (float)local_158 + g_02394298;
        (**(code **)(*local_40 + 0x4d8))(local_48);
        fVar17 = in_XMM1._4_4_ * g_0239011c;
        (**(code **)(*plVar13 + 0x4d8))(local_48);
        plVar11 = local_40;
        fVar18 = in_XMM1._4_4_ * g_0239011c;
        (**(code **)(*local_40 + 0x4d8))();
        auVar34 = in_XMM1._4_12_;
        fVar29 = in_XMM1._0_4_ * g_023908d8 * g_0239426c;
        fVar30 = fVar29;
        uVar19 = (**(code **)(*plVar11 + 0x4d8))();
        fVar17 = extraout_XMM0_Db + fVar17;
        fVar30 = (fVar30 + fVar30) * g_0241b63c;
        if ((local_d8 & 1) == 0) {
          auVar24._4_4_ = extraout_XMM0_Db;
          auVar24._0_4_ = fVar17;
          auVar24._8_4_ = extraout_XMM0_Dd;
          auVar24._12_4_ = extraout_XMM0_Dd;
          auVar24 = insertps(auVar38,auVar24,0x10);
          local_d8 = CONCAT71((int7)((uint64_t)uVar19 >> 8),1);
          FUN_01d39180(auVar24._0_8_);
        }
        auVar20._4_4_ = extraout_XMM0_Db_00;
        auVar20._0_4_ = extraout_XMM0_Db_00;
        auVar20._8_4_ = extraout_XMM0_Dd_00;
        auVar20._12_4_ = extraout_XMM0_Dd_00;
        auVar21._4_12_ = auVar20._4_12_;
        auVar21._0_4_ = extraout_XMM0_Db_00 + fVar18;
        auVar24 = insertps(auVar23,auVar21,0x10);
        auVar36._4_4_ = auVar21._0_4_;
        auVar36._0_4_ = auVar21._0_4_;
        auVar36._8_4_ = extraout_XMM0_Dd_00;
        auVar36._12_4_ = extraout_XMM0_Dd_00;
        auVar22._0_4_ = auVar38._0_4_ + fVar29;
        auVar2._4_4_ = extraout_XMM0_Db;
        auVar2._0_4_ = fVar17;
        auVar2._8_4_ = extraout_XMM0_Dd;
        auVar2._12_4_ = extraout_XMM0_Dd;
        auVar22 = insertps(auVar22,auVar2,0x10);
        auVar31._0_4_ = fVar30 + auVar23._0_4_;
        auVar31._4_12_ = auVar34;
        in_XMM1 = blendps(auVar31,auVar36,0xe);
        uVar19 = FUN_01d38af0(auVar22._0_8_,in_XMM1._0_8_,auVar24._0_8_);
      }
      lVar12 = lVar12 + 1;
      iVar6 = *(int *)((int64_t)plVar15 + 0xc);
      puVar7 = local_50;
    } while (lVar12 < (int64_t)iVar6 + -1);
  }
  auVar32._8_8_ = 0;
  auVar32._0_8_ = g_023dccdc;
  if (((float)*(void*)((int64_t)this_ptr + 0x28c) != (float)g_023dccdc ||
       (float)((uint64_t)*(void*)((int64_t)this_ptr + 0x28c) >> 0x20) !=
       (float)(g_023dccdc >> 0x20)) && ((local_d8 & 1) != 0)) {
    if ((plVar13 == (int64_t *)0x0) && (iVar6 != 0)) {
      uVar19 = FUN_00d23340();
      pcVar10 = local_38;
      if (local_58[0] != '\0') {
        pcVar10 = local_58;
      }
      local_38[0] = local_58[0];
      *pcVar10 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      local_c8 = 0;
      if (local_38[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          uVar19 = FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_60;
      (**(code **)(*this_ptr + 0xab0))(uVar19,&local_d0);
      plVar13 = local_a0;
      if (local_a0 == (int64_t *)0x0) {
        plVar13 = (int64_t *)0x0;
      }
      else if (local_98 == '\0') {
        FUN_00d50b00();
        local_68._0_1_ = '\x01';
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = '\0';
        local_68._0_1_ = '\x01';
      }
      if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar13 == (int64_t *)0x0) {
      plVar13 = (int64_t *)0x0;
    }
    else {
      uVar19 = (**(code **)(*plVar13 + 0x4d8))();
      fVar30 = *(float *)((int64_t)this_ptr + 0x28c);
      (**(code **)(*plVar13 + 0x4d8))();
      lVar12 = this_ptr[0x52];
      auVar22 = auVar32;
      (**(code **)(*plVar13 + 0x4d8))();
      auVar3._8_8_ = extraout_XMM0_Qb_01;
      auVar3._0_8_ = uVar19;
      auVar37._4_12_ = auVar3._4_12_;
      auVar37._0_4_ = (float)uVar19 + g_02394298;
      fStack_144 = auVar32._4_4_;
      uStack_13c = auVar32._12_4_;
      auVar25._4_4_ = fStack_144;
      auVar25._0_4_ = fStack_144;
      auVar25._8_4_ = uStack_13c;
      auVar25._12_4_ = uStack_13c;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = fStack_144 * g_0239011c + extraout_XMM0_Db_01;
      auVar33._4_12_ = auVar22._4_12_;
      auVar33._0_4_ = auVar22._0_4_ * g_023908d8 * g_0239426c + auVar37._0_4_;
      auVar22 = insertps(auVar33,auVar26,0x10);
      if (fVar30 < auVar33._0_4_) {
        blendps(auVar22,ZEXT416((uint)fVar30),1);
      }
      auVar38 = insertps(auVar37,auVar26,0x10);
      auVar22 = insertps(ZEXT416((uint)fVar30),(int)lVar12,0x10);
      auVar35._0_4_ = auVar22._0_4_ - auVar38._0_4_;
      auVar35._4_4_ = auVar22._4_4_ - auVar38._4_4_;
      auVar35._8_4_ = auVar22._8_4_ - auVar38._8_4_;
      auVar35._12_4_ = auVar22._12_4_ - auVar38._12_4_;
      divps(auVar35,g_0241b5a0);
      FUN_01d38af0();
    }
  }
  FUN_01cfcdc0();
  local_b8 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_b8 = '\x01';
  local_c0 = local_60;
  FUN_01d488d0();
  if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  auVar27._0_8_ = (**(code **)(*this_ptr + 3000))();
  auVar27._8_8_ = extraout_XMM0_Qb_02;
  auVar28._4_12_ = auVar27._4_12_;
  auVar28._0_4_ = (float)auVar27._0_8_ * g_023b5d7c;
  FUN_01d48b40(auVar28._0_8_);
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_a0 + 0x390))();
  local_a8 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_a8 = '\x01';
  local_b0 = local_60;
  FUN_01d488d0();
  if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  return;
}

