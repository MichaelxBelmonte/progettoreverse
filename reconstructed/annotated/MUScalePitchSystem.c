// ===== MUScalePitchSystem — Annotated small functions =====
// 116 readable functions
// Known properties: 9
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope

// ==================================================
// @01999380 (2811 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 uVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined8 *arg1;
  longlong *this;
  longlong lVar12;
  longlong *plVar13;
  char cVar14;
  longlong *plVar15;
  ulonglong uVar16;
  float fVar17;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar23 [16];
  float fVar18;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 auVar24 [16];
  float extraout_XMM0_Db_01;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined1 in_XMM1 [16];
  undefined1 auVar31 [16];
  undefined1 auVar34 [12];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 local_158;
  undefined8 uStack_150;
  float fStack_144;
  undefined4 uStack_13c;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  ulonglong local_68;
  longlong *local_60;
  char local_58 [8];
  undefined8 *local_50;
  ulonglong local_48;
  longlong *local_40;
  char local_38 [8];
  undefined8 extraout_XMM0_Qb_02;
  
  if (*(int *)(this[0x41] + 0xc) == 0) {
    return;
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
  puVar7[6] = 0;
  puVar7[7] = 0;
  *(undefined8 *)((longlong)puVar7 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x41) = 0;
  (*DAT_02680418)();
  uVar19 = FUN_004f2260(0,FUN_01999250);
  if (local_60 == (longlong *)0x0) {
    bVar4 = true;
    plVar15 = (longlong *)0x0;
  }
  else {
    plVar15 = local_60;
    if (local_58[0] == '\0') {
      uVar19 = FUN_00d50b00();
      bVar4 = false;
      if ((local_58[0] == '\0') || (local_60 == (longlong *)0x0)) goto LAB_01999450;
      uVar19 = FUN_00d50b20();
    }
    bVar4 = false;
  }
LAB_01999450:
  iVar6 = *(int *)((longlong)plVar15 + 0xc);
  if (iVar6 < 2) {
    local_68 = 0;
    plVar13 = (longlong *)0x0;
    local_48 = 0;
    local_40 = (longlong *)0x0;
    local_d8 = 0;
  }
  else {
    lVar12 = 0;
    local_d8 = 0;
    local_40 = (longlong *)0x0;
    local_48 = 0;
    plVar13 = (longlong *)0x0;
    local_68 = 0;
    local_50 = puVar7;
    do {
      plVar11 = local_40;
      uVar16 = local_48 & 0xffffffff;
      cVar14 = (char)uVar16;
      if (lVar12 == 0) {
        lVar1 = *(longlong *)plVar15[2];
        local_f0 = 0;
        if (lVar1 != 0) {
          uVar19 = FUN_00d50b00();
        }
        local_f0 = '\x01';
        local_f8 = lVar1;
        uVar19 = (**(code **)(*this + 0xab0))(uVar19,&local_f8);
        local_40 = local_60;
        plVar8 = local_60;
        if (local_60 == plVar11) {
          local_48 = uVar16;
          local_40 = plVar11;
          if ((cVar14 == '\0') && (local_60 != (longlong *)0x0)) {
            if (local_58[0] != '\0') goto LAB_01999653;
            local_48 = CONCAT71((int7)((ulonglong)local_60 >> 8),1);
            uVar19 = FUN_00d50b00();
          }
LAB_019996a2:
          if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
            uVar19 = FUN_00d50b20();
          }
        }
        else {
          if (local_58[0] == '\0') {
            uVar9 = 0;
            if (local_60 != (longlong *)0x0) {
              uVar9 = FUN_00d50b00();
              uVar19 = extraout_XMM0_Qa_00;
            }
            local_48 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
            if ((cVar14 != '\0') && (plVar11 != (longlong *)0x0)) {
              uVar19 = FUN_00d50b20();
            }
            goto LAB_019996a2;
          }
          if ((cVar14 != '\0') && (plVar11 != (longlong *)0x0)) {
            plVar8 = (longlong *)FUN_00d50b20();
            uVar19 = extraout_XMM0_Qa;
          }
LAB_01999653:
          local_58[0] = '\0';
          local_48 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
        }
        uVar5 = local_48;
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          uVar19 = FUN_00d50b20();
          uVar5 = local_48;
        }
      }
      else if (local_40 == plVar13) {
        uVar5 = uVar16;
        if ((((char)local_68 != '\0') && (cVar14 == '\0')) && (local_40 != (longlong *)0x0)) {
          local_48 = CONCAT71((int7)(local_48 >> 8),1);
          uVar16 = 0;
          uVar19 = FUN_00d50b00();
          uVar5 = local_48;
        }
      }
      else {
        if (((char)local_68 != '\0') && (plVar13 != (longlong *)0x0)) {
          uVar19 = FUN_00d50b00();
        }
        local_48 = local_68;
        uVar5 = local_48;
        local_40 = plVar13;
        if ((cVar14 != '\0') && (uVar5 = local_48, plVar11 != (longlong *)0x0)) {
          uVar19 = FUN_00d50b20();
          local_48 = local_68;
          uVar5 = local_48;
        }
      }
      local_48 = uVar5;
      lVar1 = *(longlong *)(plVar15[2] + 8 + lVar12 * 8);
      local_e0 = 0;
      if (lVar1 != 0) {
        uVar19 = FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      uVar9 = (**(code **)(*this + 0xab0))(uVar19,&local_e8);
      uVar19 = extraout_XMM0_Qa_01;
      if (local_60 == plVar13) {
        plVar11 = plVar13;
        if (((char)local_68 != '\0') || (local_60 == (longlong *)0x0)) {
          local_68 = local_68 & 0xffffffff;
          goto joined_r0x019997b7;
        }
        if (local_58[0] == '\0') {
          uVar19 = FUN_00d50b00();
          goto joined_r0x01999996;
        }
LAB_01999754:
        local_58[0] = '\0';
        local_68 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
        plVar13 = plVar11;
      }
      else {
        if (local_58[0] != '\0') {
          plVar11 = local_60;
          if (((char)local_68 != '\0') && (plVar13 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
            uVar19 = extraout_XMM0_Qa_02;
          }
          goto LAB_01999754;
        }
        if (local_60 != (longlong *)0x0) {
          uVar19 = FUN_00d50b00();
        }
        plVar11 = local_60;
        if (((char)local_68 != '\0') && (plVar13 != (longlong *)0x0)) {
          uVar19 = FUN_00d50b20();
        }
joined_r0x01999996:
        local_68 = CONCAT71((int7)(uVar16 >> 8),1);
joined_r0x019997b7:
        plVar13 = plVar11;
        if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
          uVar19 = FUN_00d50b20();
        }
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        uVar19 = FUN_00d50b20();
      }
      if ((local_40 != (longlong *)0x0) && (plVar13 != (longlong *)0x0)) {
        local_108 = (**(code **)(*local_40 + 0x4d8))(local_48);
        uStack_100 = extraout_XMM0_Qb;
        auVar22._4_12_ = local_108._4_12_;
        auVar38._0_4_ = (float)local_108 + DAT_02394298;
        auVar38._4_12_ = auVar22._4_12_;
        local_158 = (**(code **)(*plVar13 + 0x4d8))(local_48);
        uStack_150 = extraout_XMM0_Qb_00;
        auVar23._4_12_ = local_158._4_12_;
        auVar23._0_4_ = (float)local_158 + DAT_02394298;
        (**(code **)(*local_40 + 0x4d8))(local_48);
        fVar17 = in_XMM1._4_4_ * DAT_0239011c;
        (**(code **)(*plVar13 + 0x4d8))(local_48);
        plVar11 = local_40;
        fVar18 = in_XMM1._4_4_ * DAT_0239011c;
        (**(code **)(*local_40 + 0x4d8))();
        auVar34 = in_XMM1._4_12_;
        fVar29 = in_XMM1._0_4_ * DAT_023908d8 * DAT_0239426c;
        fVar30 = fVar29;
        uVar19 = (**(code **)(*plVar11 + 0x4d8))();
        fVar17 = extraout_XMM0_Db + fVar17;
        fVar30 = (fVar30 + fVar30) * DAT_0241b63c;
        if ((local_d8 & 1) == 0) {
          auVar24._4_4_ = extraout_XMM0_Db;
          auVar24._0_4_ = fVar17;
          auVar24._8_4_ = extraout_XMM0_Dd;
          auVar24._12_4_ = extraout_XMM0_Dd;
          auVar24 = insertps(auVar38,auVar24,0x10);
          local_d8 = CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
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
      iVar6 = *(int *)((longlong)plVar15 + 0xc);
      puVar7 = local_50;
    } while (lVar12 < (longlong)iVar6 + -1);
  }
  auVar32._8_8_ = 0;
  auVar32._0_8_ = DAT_023dccdc;
  if (((float)*(undefined8 *)((longlong)this + 0x28c) != (float)DAT_023dccdc ||
       (float)((ulonglong)*(undefined8 *)((longlong)this + 0x28c) >> 0x20) !=
       (float)(DAT_023dccdc >> 0x20)) && ((local_d8 & 1) != 0)) {
    if ((plVar13 == (longlong *)0x0) && (iVar6 != 0)) {
      uVar19 = FUN_00d23340();
      pcVar10 = local_38;
      if (local_58[0] != '\0') {
        pcVar10 = local_58;
      }
      local_38[0] = local_58[0];
      *pcVar10 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
        uVar19 = FUN_00d50b20();
      }
      local_c8 = 0;
      if (local_38[0] == '\0') {
        if (local_60 != (longlong *)0x0) {
          uVar19 = FUN_00d50b00();
        }
      }
      else {
        local_38[0] = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_60;
      (**(code **)(*this + 0xab0))(uVar19,&local_d0);
      plVar13 = local_a0;
      if (local_a0 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
      }
      else if (local_98 == '\0') {
        FUN_00d50b00();
        local_68._0_1_ = '\x01';
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_98 = '\0';
        local_68._0_1_ = '\x01';
      }
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      uVar19 = (**(code **)(*plVar13 + 0x4d8))();
      fVar30 = *(float *)((longlong)this + 0x28c);
      (**(code **)(*plVar13 + 0x4d8))();
      lVar12 = this[0x52];
      auVar22 = auVar32;
      (**(code **)(*plVar13 + 0x4d8))();
      auVar3._8_8_ = extraout_XMM0_Qb_01;
      auVar3._0_8_ = uVar19;
      auVar37._4_12_ = auVar3._4_12_;
      auVar37._0_4_ = (float)uVar19 + DAT_02394298;
      fStack_144 = auVar32._4_4_;
      uStack_13c = auVar32._12_4_;
      auVar25._4_4_ = fStack_144;
      auVar25._0_4_ = fStack_144;
      auVar25._8_4_ = uStack_13c;
      auVar25._12_4_ = uStack_13c;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = fStack_144 * DAT_0239011c + extraout_XMM0_Db_01;
      auVar33._4_12_ = auVar22._4_12_;
      auVar33._0_4_ = auVar22._0_4_ * DAT_023908d8 * DAT_0239426c + auVar37._0_4_;
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
      divps(auVar35,_DAT_0241b5a0);
      FUN_01d38af0();
    }
  }
  FUN_01cfcdc0();
  local_b8 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_b8 = '\x01';
  local_c0 = local_60;
  FUN_01d488d0();
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  auVar27._0_8_ = (**(code **)(*this + 3000))();
  auVar27._8_8_ = extraout_XMM0_Qb_02;
  auVar28._4_12_ = auVar27._4_12_;
  auVar28._0_4_ = (float)auVar27._0_8_ * DAT_023b5d7c;
  FUN_01d48b40(auVar28._0_8_);
  (**(code **)(*(longlong *)*arg1 + 0x3a8))();
  (**(code **)(*this + 0x640))();
  (**(code **)(*local_a0 + 0x390))();
  local_a8 = 0;
  if (local_58[0] == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_a8 = '\x01';
  local_b0 = local_60;
  FUN_01d488d0();
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*(longlong *)*arg1 + 0x3a8))();
  if (puVar7 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_48 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019928f0 (2716 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  undefined8 *arg1;
  longlong *this;
  pthread_key_t pVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  longlong local_c0;
  char local_b8;
  longlong local_a8;
  char local_a0;
  int local_90;
  longlong local_68;
  char local_60;
  
  FUN_01993800();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    FUN_01993800();
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0134a740();
    if (local_60 == '\0') {
      if (local_68 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != 0) {
      pvVar6 = _pthread_getspecific(param_1);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        param_1 = (pthread_key_t)local_68;
      }
      FUN_01313ad0();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      fVar13 = (float)(**(code **)(*this + 3000))();
      fVar14 = (float)(**(code **)(*this + 3000))();
      FUN_01cfcdc0(DAT_02394214,DAT_02390128,DAT_02390128,DAT_0239011c);
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      uVar23 = (ulonglong)DAT_02390128;
      FUN_01cfcdc0(0,uVar23,DAT_02390128,DAT_0239011c);
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      uVar18 = (**(code **)(*this + 0xa60))();
      (**(code **)(*this + 0x9b0))();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      dVar19 = (double)FUN_012912a0(0,0,0);
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        if (0 < *(int *)(local_68 + 0xc)) {
          fVar13 = fVar13 * DAT_02390438;
          fVar14 = fVar14 * DAT_02394240;
          pVar11 = 0;
          do {
            lVar7 = local_a8;
            pvVar6 = _pthread_getspecific(pVar11);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e6160();
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                FUN_00d50b00();
                goto LAB_01992e4e;
              }
            }
            else if (local_a8 != 0) {
LAB_01992e4e:
              local_a0 = '\0';
              local_a8 = 0;
              local_90 = -1;
LAB_01992ea2:
              while( true ) {
                lVar8 = (longlong)local_90;
                local_90 = local_90 + 1;
                if (*(int *)(lVar7 + 0xc) <= local_90) break;
                lVar12 = *(longlong *)(lVar7 + 0x10);
                local_a8 = *(longlong *)(lVar12 + 8 + lVar8 * 8);
                pvVar6 = _pthread_getspecific((pthread_key_t)lVar12);
                if (pvVar6 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012e9900(uVar18,uVar23);
                if (local_b8 == '\0') goto LAB_01992f90;
                if (local_c0 != 0) {
                  iVar1 = *(int *)(local_c0 + 0xc);
                  goto joined_r0x01992fc3;
                }
              }
              FUN_000be170();
              FUN_00d50b20();
            }
            pVar11 = pVar11 + 1;
          } while ((int)pVar11 < *(int *)(local_68 + 0xc));
        }
        FUN_000be170();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
LAB_01992f90:
  if (local_c0 != 0) {
    FUN_00d50b00();
    iVar1 = *(int *)(local_c0 + 0xc);
joined_r0x01992fc3:
    if (0 < iVar1) {
      lVar8 = 0;
      bVar4 = false;
      lVar12 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(local_c0 + 0x10) + lVar8 * 8);
        lVar10 = local_c0;
        if (lVar12 == lVar2) {
          lVar2 = lVar12;
          bVar5 = bVar4;
          if ((!bVar4) && (lVar12 != 0)) {
            FUN_00d50b00();
            bVar5 = true;
          }
        }
        else {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          bVar5 = true;
          if ((bVar4) && (lVar12 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar4 = bVar5;
        lVar12 = lVar2;
        pVar9 = (pthread_key_t)lVar10;
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar20 = (double)FUN_0125a280();
        fVar15 = (float)(**(code **)(*this + 0x938))(dVar20 + dVar19);
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar20 = (double)FUN_01259520();
        fVar16 = (float)(**(code **)(*this + 0x938))(dVar20 + dVar19);
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2c0();
        fVar17 = (float)(**(code **)(*this + 0xbf8))();
        fVar21 = fVar17 - fVar13;
        (**(code **)(*(longlong *)*arg1 + 0x4d8))(fVar15);
        fVar22 = fVar13 + fVar17;
        (**(code **)(*(longlong *)*arg1 + 0x4e8))(fVar15);
        fVar3 = DAT_023908d8;
        if (DAT_023908d8 <= fVar16 - fVar15) {
          fVar3 = fVar16 - fVar15;
        }
        (**(code **)(*(longlong *)*arg1 + 0x4e8))(fVar3 + fVar15,fVar14 + fVar17);
        (**(code **)(*(longlong *)*arg1 + 0x4e8))(fVar3 + fVar15,fVar17 - fVar14);
        (**(code **)(*(longlong *)*arg1 + 0x4e8))(fVar15,fVar21);
        FUN_01d488d0();
        (**(code **)(*(longlong *)*arg1 + 0x518))();
        (**(code **)(*(longlong *)*arg1 + 0x4d8))(fVar15,fVar21);
        (**(code **)(*(longlong *)*arg1 + 0x4e8))(fVar15,fVar22);
        fVar16 = fVar15 + DAT_023908d8;
        (**(code **)(*(longlong *)*arg1 + 0x4e8))(fVar16,fVar22);
        (**(code **)(*(longlong *)*arg1 + 0x4e8))(fVar16,fVar21);
        (**(code **)(*(longlong *)*arg1 + 0x4e8))(fVar15,fVar21);
        FUN_01d488d0();
        (**(code **)(*(longlong *)*arg1 + 0x518))();
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(local_c0 + 0xc));
      if ((bVar4) && (lVar12 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  goto LAB_01992ea2;
}




// ==================================================
// @019b61e0 (2712 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *arg1;
  longlong *this;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  uint uVar10;
  longlong local_78;
  char local_70;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  plVar4 = (longlong *)*arg1;
  cVar6 = (char)arg1[1];
  if ((cVar6 == '\0') || (plVar4 == (longlong *)0x0)) {
    if (plVar4 != (longlong *)0x0) goto LAB_019b6242;
    plVar4 = (longlong *)*arg1;
    cVar1 = (char)arg1[1];
    if (plVar4 != (longlong *)0x0) goto LAB_019b63e9;
LAB_019b6648:
    lVar3 = *arg1;
  }
  else {
    FUN_00d50b00();
LAB_019b6242:
    do {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_01263cf0();
      if (cVar1 == '\0') {
        if (plVar4 != (longlong *)0x0) goto LAB_019b6391;
        goto LAB_019b6666;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012640f0();
      if (local_40 == plVar4) {
        if ((cVar6 == '\0') && (local_40 != (longlong *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_019b6340;
          }
          goto LAB_019b622f;
        }
joined_r0x019b6363:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar7 = cVar6 != '\0';
          cVar6 = '\x01';
          if (bVar7) {
            FUN_00d50b20();
LAB_019b6340:
            cVar6 = '\x01';
            goto joined_r0x019b6363;
          }
        }
        else {
          if (cVar6 != '\0') {
            FUN_00d50b20();
          }
LAB_019b622f:
          local_38 = '\0';
          cVar6 = '\x01';
        }
      }
    } while (plVar4 != (longlong *)0x0);
    plVar4 = (longlong *)*arg1;
    cVar1 = (char)arg1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_019b6648;
LAB_019b63e9:
    cVar6 = cVar1;
    if ((cVar6 != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (plVar4 == (longlong *)0x0) goto LAB_019b6648;
    do {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_01263cf0();
      if (cVar1 == '\0') goto LAB_019b6391;
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012641c0();
      if (local_40 == plVar4) {
        if ((cVar6 == '\0') && (local_40 != (longlong *)0x0)) {
          cVar6 = '\x01';
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_019b6550;
          }
        }
        else {
joined_r0x019b6586:
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar4 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar7 = cVar6 != '\0';
          cVar6 = '\x01';
          if (bVar7) {
            FUN_00d50b20();
LAB_019b6550:
            cVar6 = '\x01';
            goto joined_r0x019b6586;
          }
        }
        else {
          bVar7 = cVar6 != '\0';
          cVar6 = '\x01';
          if (bVar7) {
            FUN_00d50b20();
            cVar6 = '\x01';
          }
        }
      }
    } while (plVar4 != (longlong *)0x0);
LAB_019b6666:
    lVar3 = *arg1;
  }
  bVar7 = true;
  if (lVar3 != 0) {
LAB_019b667a:
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if (local_40 == (longlong *)0x0) {
      bVar8 = false;
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      bVar8 = local_60 != 0;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar8) {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      plVar4 = local_40;
      if (local_40 != (longlong *)0x0) {
        do {
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_014bc070();
          if (cVar1 == '\0') {
            plVar5 = local_40;
            if (local_40 != (longlong *)0x0) goto LAB_019b69ca;
            goto LAB_019b6caa;
          }
          pvVar2 = _pthread_getspecific(param_1);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc340();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        } while (local_40 != (longlong *)0x0);
        plVar4 = (longlong *)0x0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar5 = plVar4;
      if (local_40 == plVar4) {
LAB_019b6b78:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar5 = local_40;
          if (plVar4 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_019b6b78;
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        plVar5 = local_40;
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      while (plVar5 != (longlong *)0x0) {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_014bc070();
        if (cVar1 == '\0') goto LAB_019b69ca;
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc420();
        if (local_40 == plVar5) {
LAB_019b6c8a:
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            plVar5 = local_40;
            goto LAB_019b6c8a;
          }
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
    }
  }
LAB_019b6caa:
  uVar10 = (**(code **)(*this + 0xc40))();
  arg1 = (longlong *)(ulonglong)uVar10;
  goto LAB_019b6cbc;
LAB_019b6391:
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_0125a2d0();
  if (cVar1 == '\0') {
    bVar7 = false;
    if (*arg1 == 0) goto LAB_019b6caa;
    goto LAB_019b667a;
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar10 = FUN_0125a2c0();
  arg1 = (longlong *)(ulonglong)uVar10;
  bVar7 = false;
  if (cVar6 == '\0') goto LAB_019b6cd0;
  goto LAB_019b6cc4;
LAB_019b69ca:
  pvVar2 = _pthread_getspecific(param_1);
  plVar4 = plVar5;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar4 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  fVar9 = (float)(**(code **)(*plVar4 + 0x3e0))();
  if (!NAN(fVar9)) {
    pvVar2 = _pthread_getspecific(param_1);
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    uVar10 = (**(code **)(*plVar5 + 0x3e0))();
    arg1 = (longlong *)(ulonglong)uVar10;
  }
  FUN_00d50b20();
  if (NAN(fVar9)) goto LAB_019b6caa;
LAB_019b6cbc:
  if (cVar6 != '\0') {
LAB_019b6cc4:
    if (!bVar7) {
      FUN_00d50b20();
    }
  }
LAB_019b6cd0:
  return (ulonglong)arg1 & 0xffffffff;
}




// ==================================================
// @01af1380 (2636 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong this;
  longlong lVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01ad3cb0();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  FUN_01a1d6e0();
  plVar8 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (longlong *)0x0) goto LAB_01af1e04;
  FUN_01a1d6e0();
  iVar3 = (**(code **)(*local_40 + 0xd20))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (iVar3 == 0) goto LAB_01af1e04;
  FUN_01ad6350();
  FUN_01a1d6e0();
  (**(code **)(*local_50 + 0xe30))();
  plVar8 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((plVar8 == (longlong *)0x0) || (*(int *)((longlong)plVar8 + 0xc) == 0)) {
    FUN_01a1d6e0();
    (**(code **)(*local_50 + 0xe70))();
    plVar1 = local_40;
    if (plVar8 == local_40) {
LAB_01af1512:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar10 = plVar8 != (longlong *)0x0;
        plVar8 = plVar1;
        if (bVar10) {
          FUN_00d50b20();
        }
        goto LAB_01af1512;
      }
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      plVar8 = plVar1;
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (longlong *)0x0) goto LAB_01af1e04;
  }
  if (*(int *)((longlong)plVar8 + 0xc) != 0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    plVar1 = *(longlong **)(this + 0x2a8);
    if (plVar1 == plVar4) {
      FUN_00d50b20();
    }
    else {
      *(longlong **)(this + 0x2a8) = plVar4;
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (0 < *(int *)((longlong)plVar8 + 0xc)) {
      lVar9 = 0;
      do {
        plVar1 = *(longlong **)(plVar8[2] + lVar9 * 8);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        plVar4 = local_40;
        if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar11 = (float)FUN_0125a2c0();
        if (plVar4 == (longlong *)0x0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          plVar7 = plVar2;
          if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            param_1 = plVar2;
            plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
          }
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125dfa0();
          (**(code **)(*plVar7 + 0x3a8))();
        }
        else {
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            param_1 = plVar4;
          }
          FUN_0152ebe0();
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = plVar2;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = plVar2;
          plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar12 = (float)(**(code **)(*plVar7 + 0x3a0))();
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        plVar7 = plVar2;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          param_1 = plVar2;
          plVar7 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar13 = (float)(**(code **)(*plVar7 + 0x3a0))();
        plVar7 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar7 + 0x18))();
        uVar14 = FUN_00d46530();
        plVar7 = DAT_027e3b98;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
            plVar7 = DAT_027e3b98;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027e3b98 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar7;
        FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d46dc0(fVar11);
        plVar7 = DAT_027e3ba0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
            plVar7 = DAT_027e3ba0;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027e3ba0 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar7;
        FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d46dc0(fVar11 - fVar12);
        plVar7 = DAT_02708700;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
            plVar7 = DAT_02708700;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_02708700 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar7;
        FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d46dc0((fVar11 - fVar12) / (fVar13 - fVar12));
        plVar7 = DAT_027e3bb0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
            plVar7 = DAT_027e3bb0;
          }
        }
        else {
          local_48 = '\0';
        }
        DAT_027e3bb0 = plVar7;
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b00();
        }
        local_38 = '\0';
        local_40 = plVar7;
        uVar14 = FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (plVar7 != (longlong *)0x0) {
          uVar14 = FUN_00d50b20();
        }
        if (local_50 != (longlong *)0x0) {
          uVar14 = FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (plVar4 != (longlong *)0x0) {
          pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
            param_1 = plVar4;
          }
          FUN_0152e220();
          uVar14 = FUN_00d46530();
          plVar7 = DAT_027e3bb8;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              uVar14 = FUN_00d50b00();
              plVar7 = DAT_027e3bb8;
            }
          }
          else {
            local_48 = '\0';
          }
          DAT_027e3bb8 = plVar7;
          if (plVar7 != (longlong *)0x0) {
            uVar14 = FUN_00d50b00();
          }
          local_38 = '\0';
          local_40 = plVar7;
          uVar14 = FUN_00ca0840(uVar14,&local_40);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
          if (plVar7 != (longlong *)0x0) {
            uVar14 = FUN_00d50b20();
          }
          if (local_50 != (longlong *)0x0) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            uVar14 = FUN_00d50b20();
          }
        }
        local_38 = '\0';
        local_40 = plVar1;
        FUN_00ca0840(uVar14,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)((longlong)plVar8 + 0xc));
    }
  }
  FUN_00d50b20();
LAB_01af1e04:
  FUN_00d50b20();
  return;
}




// ==================================================
// @01a42180 (2617 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  undefined1 uVar2;
  longlong lVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *this;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined8 uVar12;
  double dVar13;
  undefined1 uVar14;
  longlong local_130;
  undefined1 local_128;
  longlong local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  double local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  char local_80 [8];
  longlong local_78;
  undefined8 local_70;
  int local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  undefined8 local_48;
  int local_40;
  
  local_c0 = param_1;
  (**(code **)(*(longlong *)*this + 0xe20))();
  local_a8 = local_60;
  local_a0 = 0;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  local_a0 = '\x01';
  FUN_00243390();
  lVar9 = local_88;
  if (local_80[0] == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), local_80[0] != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80[0] = '\0';
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)(lVar9 + 0xc) == 0) {
    iVar7 = 0;
    goto LAB_01a42bdc;
  }
  local_c8 = lVar9;
  (**(code **)(*(longlong *)*this + 0xe20))();
  lVar3 = local_60;
  if (local_58 == '\0') {
    if (local_60 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_01a40b30(local_c0);
  local_90 = local_88;
  if ((local_80[0] == '\0') && (local_88 != 0)) {
    FUN_00d50b00();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00c9fe20();
  lVar3 = local_88;
  plVar6 = &local_60;
  if (local_80[0] != '\0') {
    plVar6 = (longlong *)local_80;
  }
  local_60 = CONCAT71(local_60._1_7_,local_80[0]);
  *(undefined1 *)plVar6 = 0;
  if ((local_80[0] != '\0') && (local_88 != 0)) {
    uVar12 = FUN_00d50b20();
  }
  if ((char)local_60 == '\0') {
    if (lVar3 != 0) {
      uVar12 = FUN_00d50b00();
      goto LAB_01a42383;
    }
LAB_01a42752:
    iVar7 = 0;
  }
  else {
    if (lVar3 == 0) goto LAB_01a42752;
LAB_01a42383:
    iVar7 = 0;
    if (*(int *)(lVar3 + 0xc) == 0) {
LAB_01a42bc1:
      FUN_00d50b20();
    }
    else {
      local_80[0] = '\0';
      local_88 = 0;
      local_98 = lVar3;
      local_78 = lVar3;
      local_70 = 0xffffffff;
      local_68 = 0;
      while( true ) {
        if (iVar7 != 0) {
          if (iVar7 < 1) {
            iVar7 = -iVar7;
          }
          else {
            local_70 = CONCAT44(local_70._4_4_,(int)local_70 - iVar7);
            FUN_00d23690(uVar12,iVar7);
            local_68 = local_68 + local_70._4_4_;
            iVar7 = 0;
          }
          local_70 = CONCAT44(iVar7,(int)local_70);
        }
        lVar3 = (longlong)(int)local_70;
        iVar7 = (int)local_70 + 1;
        local_70 = CONCAT44(local_70._4_4_,iVar7);
        if (*(int *)(local_78 + 0xc) <= iVar7) {
          FUN_00115190();
          local_80[0] = '\0';
          local_88 = 0;
          local_78 = local_98;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_70._4_4_ = 0;
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar7 = -local_70._4_4_;
              }
              else {
                iVar7 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar7);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar7 = 0;
              }
              local_70 = CONCAT44(iVar7,(int)local_70);
            }
            lVar3 = (longlong)(int)local_70;
            iVar7 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar7);
            if (*(int *)(local_78 + 0xc) <= iVar7) break;
            local_108 = *(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar3 * 8);
            uVar14 = 0;
            local_100 = '\0';
            local_88 = local_108;
            FUN_0076f110(*this,&local_108);
            lVar3 = local_60;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_128 = 1;
            local_130 = lVar3;
            uVar2 = (**(code **)((longlong)&dylib_command_00001220.dylib.current_version +
                                *(longlong *)*this))();
            FUN_01a41040(local_c0,&local_130,uVar2,param_4,uVar14);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
          }
          FUN_00115190();
          FUN_00d23310();
          lVar3 = local_88;
          plVar6 = (longlong *)local_80;
          if (local_80[0] == '\0') {
            plVar6 = &local_60;
          }
          local_60 = CONCAT71(local_60._1_7_,local_80[0]);
          *(char *)plVar6 = '\0';
          if ((local_80[0] != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)plVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar7 = FUN_01326de0();
          if (((char)local_60 != '\0') && (lVar3 != 0)) {
            FUN_00d50b20();
          }
          bVar11 = false;
          if ((*(int *)(local_98 + 0xc) == 1) && (iVar7 != 3)) {
            bVar11 = *(int *)(lVar9 + 0xc) == 2;
          }
          uVar12 = (**(code **)(*(longlong *)*this + 0xda0))();
          if (bVar11) {
            plVar6 = *(longlong **)(lVar9 + 0x10);
            lVar3 = *plVar6;
            if (lVar3 != 0) {
              FUN_00d50b00();
              plVar6 = *(longlong **)(lVar9 + 0x10);
            }
            lVar8 = plVar6[1];
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pVar5 = (pthread_key_t)plVar6;
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_c0 = (double)FUN_0125a280();
            pvVar4 = _pthread_getspecific(pVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar13 = (double)FUN_0125a280();
            if (dVar13 <= local_c0) {
              local_d0 = '\0';
              local_d8 = lVar8;
              (**(code **)(*(longlong *)*this + 0xda8))(dVar13,1);
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_e0 = '\0';
              local_e8 = lVar3;
              (**(code **)(*(longlong *)*this + 0xda8))(dVar13,1);
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            iVar7 = 1;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
          }
          else {
            local_f0 = '\0';
            local_f8 = lVar9;
            (**(code **)(*(longlong *)*this + 0xdb8))(uVar12,1);
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(longlong *)*this + 0xea0))();
            iVar7 = 1;
            (**(code **)(*(longlong *)*this + 0xda0))();
          }
          goto LAB_01a42bb5;
        }
        local_88 = *(longlong *)(*(longlong *)(local_78 + 0x10) + 8 + lVar3 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)*(longlong *)(local_78 + 0x10));
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar7 = FUN_0132dd30();
        if (iVar7 == 0) break;
        local_118 = local_88;
        local_110 = '\0';
        uVar12 = FUN_0076f110();
        lVar3 = local_60;
        if (local_58 == '\0') {
          if (((local_60 != 0) && (uVar12 = FUN_00d50b00(), local_58 != '\0')) && (local_60 != 0)) {
            uVar12 = FUN_00d50b20();
          }
        }
        else {
          local_58 = '\0';
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_58 = '\0';
          local_60 = 0;
          local_120 = lVar3;
          local_50 = lVar3;
          local_48 = 0xffffffff;
          local_40 = 0;
          local_48._4_4_ = 0;
          bVar11 = false;
          lVar9 = 0;
          while( true ) {
            if (local_48._4_4_ != 0) {
              if (local_48._4_4_ < 1) {
                iVar7 = -local_48._4_4_;
              }
              else {
                iVar7 = (int)local_48 - local_48._4_4_;
                local_48 = CONCAT44(local_48._4_4_,iVar7);
                FUN_00d23690();
                local_40 = local_40 + local_48._4_4_;
                iVar7 = 0;
              }
              local_48 = CONCAT44(iVar7,(int)local_48);
            }
            lVar3 = (longlong)(int)local_48;
            iVar10 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar10);
            iVar7 = *(int *)(local_50 + 0xc);
            if (iVar7 <= iVar10) break;
            local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
            pVar5 = (pthread_key_t)*(longlong *)(local_50 + 0x10);
            bVar1 = bVar11;
            if (local_40 == 0 && iVar10 == 0) {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar8 = local_b8;
              if (lVar9 == local_b8) {
                lVar8 = lVar9;
                if ((!bVar11) && (lVar9 != 0)) {
                  bVar1 = true;
                  if (local_b0 != '\0') goto LAB_01a42506;
                  FUN_00d50b00();
                  bVar1 = true;
                }
              }
              else {
                if (local_b0 != '\0') {
                  bVar1 = true;
                  if ((bVar11) && (lVar9 != 0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01a42506;
                }
                if (local_b8 != 0) {
                  FUN_00d50b00();
                }
                bVar1 = true;
                if ((bVar11) && (lVar9 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              lVar3 = local_b8;
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              lVar8 = lVar9;
              if (lVar9 != lVar3) break;
            }
LAB_01a42506:
            bVar11 = bVar1;
            lVar9 = lVar8;
          }
          FUN_001159b0();
          uVar12 = FUN_00d50b20();
          if ((bVar11) && (lVar9 != 0)) {
            uVar12 = FUN_00d50b20();
          }
          lVar9 = local_c8;
          if (iVar10 < iVar7) break;
        }
        iVar7 = local_70._4_4_;
      }
      FUN_00115190();
      iVar7 = 0;
LAB_01a42bb5:
      if (local_98 != 0) goto LAB_01a42bc1;
    }
  }
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 == 0) {
    return iVar7;
  }
LAB_01a42bdc:
  FUN_00d50b20();
  return iVar7;
}




// ==================================================
// @019fcdf0 (2536 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *arg1;
  longlong *this;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (this[0xd] != *arg1) {
    if (this[0xd] != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar1 = this + 2;
        (**(code **)(this[2] + 0x10))();
        FUN_00d50b00();
        FUN_0013db50();
        FUN_00e86210();
        lVar5 = DAT_027e1398;
        if (DAT_027e1398 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00e8b9a0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        FUN_0013db50();
        FUN_00e86210();
        lVar5 = DAT_027e13a0;
        if (DAT_027e13a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00e8b9a0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        FUN_0013db50();
        FUN_00e86210();
        lVar5 = DAT_027e13a8;
        if (DAT_027e13a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        lVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00e8b9a0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        FUN_019f8880();
        FUN_019f8cb0();
        FUN_019f90e0();
      }
    }
    lVar5 = *arg1;
    lVar2 = this[0xd];
    lVar3 = lVar2;
    if (lVar2 != lVar5) {
      if (lVar5 != 0) {
        FUN_00d50b00();
      }
      this[0xd] = lVar5;
      lVar3 = lVar5;
      if (lVar2 != 0) {
        FUN_00d50b20();
        lVar3 = this[0xd];
      }
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar1 = this + 2;
        (**(code **)(this[2] + 0x10))();
        FUN_00d50b00();
        FUN_0013db50();
        FUN_00e86210();
        lVar5 = DAT_027e1398;
        if (DAT_027e1398 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        local_70 = local_40;
        local_68 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_68 = '\x01';
        pVar6 = 4;
        FUN_00e8b850(4,&local_70);
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        FUN_0013db50();
        FUN_00e86210();
        lVar5 = DAT_027e13a0;
        if (DAT_027e13a0 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        local_60 = local_40;
        local_58 = 0;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_58 = '\x01';
        pVar6 = 4;
        FUN_00e8b850(4,&local_60);
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        FUN_0013db50();
        FUN_00e86210();
        lVar5 = DAT_027e13a8;
        if (DAT_027e13a8 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
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
        FUN_00e8b850(4,&local_50);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*this + 0x370))();
  }
  return;
}




// ==================================================
// @01a2db70 (2493 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  void *pvVar10;
  pthread_key_t pVar11;
  longlong lVar12;
  longlong **pplVar13;
  longlong *plVar14;
  longlong *arg1;
  undefined8 *this;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  longlong local_88;
  char local_80;
  int local_70;
  longlong local_60;
  char local_58;
  float local_4c;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  FUN_01a296f0(param_1,0,param_3,param_4,0);
  iVar5 = (**(code **)(&UNK_00001588 + *(longlong *)*this))();
  if (iVar5 != 4) {
    (**(code **)(&UNK_00001580 + *(longlong *)*this))();
  }
  FUN_01a295a0();
  lVar1 = *arg1;
  if (lVar1 == local_88) {
    if (((char)arg1[1] != '\0') || (local_88 == 0)) {
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01a2dc99;
    }
    if (local_80 == '\0') {
      FUN_00d50b00();
    }
  }
  else {
    lVar9 = arg1[1];
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_88;
      if (((char)lVar9 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = local_88;
      if (((char)lVar9 != '\0') && (lVar1 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  *(undefined1 *)(arg1 + 1) = 1;
LAB_01a2dc99:
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_70 = -1;
    while( true ) {
      lVar9 = (longlong)local_70;
      local_70 = local_70 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_70) break;
      lVar12 = *(longlong *)(lVar1 + 0x10);
      lVar9 = *(longlong *)(lVar12 + 8 + lVar9 * 8);
      pvVar10 = _pthread_getspecific((pthread_key_t)lVar12);
      pVar11 = (pthread_key_t)lVar12;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0125a2d0();
      if (cVar4 != '\0') {
        pvVar10 = _pthread_getspecific(pVar11);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        if (cVar4 == '\0') {
          pvVar10 = _pthread_getspecific(pVar11);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar15 = FUN_0125e930();
          local_38 = local_48;
          if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
              (uVar15 = FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
            uVar15 = FUN_00d50b20();
          }
          local_58 = '\0';
          local_60 = lVar9;
          FUN_019d4fe0(uVar15,&local_60);
          plVar2 = local_48;
          if ((DAT_027c0160 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            _DAT_0270ab28 = FUN_0015ea50();
            _DAT_0270ab10 = "MUScalePitchSystem";
            _DAT_0270ab18 = 0x78;
            _DAT_0270ab20 = FUN_0015ecf0;
            _DAT_0270ab30 = 0;
            uRam000000000270ab38 = 0;
            _DAT_0270ab40 = 0;
            uRam000000000270ab48 = 0;
            _DAT_0270ab50 = 0;
            uRam000000000270ab58 = 0;
            _DAT_0270ab60 = 0;
            uRam000000000270ab68 = 0;
            _DAT_0270ab70 = 0;
            uRam000000000270ab78 = 0;
            _DAT_0270ab80 = 0;
            uRam000000000270ab88 = 0;
            _DAT_0270ab90 = 0;
            uRam000000000270ab98 = 0;
            _DAT_0270aba0 = 0;
            uRam000000000270aba8 = 0;
            _DAT_0270abb0 = 0;
            uRam000000000270abb8 = 0;
            _DAT_0270abc0 = 0;
            uRam000000000270abc8 = 0;
            _DAT_0270abd0 = 0;
            ___cxa_guard_release();
          }
          pplVar13 = (longlong **)&DAT_02802688;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x360))();
            cVar4 = FUN_00e85ea0();
            pplVar13 = &local_48;
            if (cVar4 == '\0') {
              pplVar13 = (longlong **)&DAT_02802688;
            }
          }
          plVar2 = *pplVar13;
          if (*(char *)(pplVar13 + 1) == '\0') {
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar13 + 1) = 0;
          }
          pVar11 = (pthread_key_t)pplVar13;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != (longlong *)0x0) && (plVar2 != (longlong *)0x0)) {
            pvVar10 = _pthread_getspecific(pVar11);
            plVar14 = plVar2;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar6 = (**(code **)(*plVar14 + 0x3a8))();
            pvVar10 = _pthread_getspecific(pVar11);
            plVar14 = plVar2;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            cVar4 = (**(code **)(*plVar14 + 0x438))();
            if (cVar4 == '\0') {
              pvVar10 = _pthread_getspecific(pVar11);
              plVar14 = plVar2;
              if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
              }
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a2c0();
              iVar6 = (**(code **)(*plVar14 + 0x3b0))();
            }
            pvVar10 = _pthread_getspecific(pVar11);
            plVar14 = plVar2;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            local_4c = (float)(**(code **)(*plVar14 + 0x3a0))();
            pvVar10 = _pthread_getspecific(pVar11);
            plVar14 = plVar2;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar7 = (**(code **)(*plVar14 + 0x3a8))();
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar15 = FUN_0125a2c0();
            uVar8 = iVar7 - iVar6;
            if (uVar8 != 0) {
              uVar3 = -uVar8;
              if (0 < (int)uVar8) {
                uVar3 = uVar8;
              }
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar16 = (float)FUN_0125dfa0();
              pVar11 = 0x241bdd0;
              fVar16 = *(float *)(&DAT_0241bdd0 + (ulonglong)(DAT_0239424c < fVar16 - local_4c) * 4)
              ;
              do {
                if (iVar7 == iVar6) goto LAB_01a2e378;
                pvVar10 = _pthread_getspecific(pVar11);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                fVar17 = (float)FUN_0125a2c0();
                pvVar10 = _pthread_getspecific(pVar11);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a580((fVar17 - local_4c) + fVar16 + local_4c);
                pvVar10 = _pthread_getspecific(pVar11);
                plVar14 = plVar2;
                if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  plVar14 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar9 + 0x154) & 1) + 4];
                }
                pvVar10 = _pthread_getspecific(pVar11);
                if (pvVar10 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125dfa0();
                iVar7 = (**(code **)(*plVar14 + 0x3a8))();
                uVar8 = iVar7 - iVar6;
                pVar11 = -uVar8;
                if (0 < (int)uVar8) {
                  pVar11 = uVar8;
                }
              } while (pVar11 <= uVar3);
              pvVar10 = _pthread_getspecific(pVar11);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a580(uVar15);
LAB_01a2e378:
              pvVar10 = _pthread_getspecific(pVar11);
              if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar11 = (pthread_key_t)local_38;
              }
              FUN_0152ec70();
              pvVar10 = _pthread_getspecific(pVar11);
              if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                pVar11 = (pthread_key_t)local_38;
              }
              FUN_0152dc80();
            }
            pvVar10 = _pthread_getspecific(pVar11);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152df60();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
    }
    FUN_001159b0();
  }
  if (iVar5 != 4) {
    (**(code **)(&UNK_00001580 + *(longlong *)*this))();
  }
  return;
}




// ==================================================
// @019cddf0 (2428 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  int iVar10;
  longlong *this;
  longlong *plVar11;
  longlong *plVar12;
  longlong **pplVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  (**(code **)(*this + 0xe20))();
  plVar12 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)plVar12 + 0xc) == 0) {
    uVar14 = 0;
    goto LAB_019ce70c;
  }
  pplVar13 = &local_78;
  uVar16 = (**(code **)(*this + 0xa28))();
  plVar11 = local_78;
  if ((DAT_027c0160 == '\0') &&
     (iVar10 = ___cxa_guard_acquire(), uVar16 = extraout_XMM0_Da_01, iVar10 != 0)) {
    local_50 = plVar12;
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    uVar16 = ___cxa_guard_release();
    plVar12 = local_50;
  }
  if (plVar11 == (longlong *)0x0) {
LAB_019cde95:
    pplVar13 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar16 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_019cde95;
  }
  plVar11 = *pplVar13;
  if (*(char *)(pplVar13 + 1) == '\0') {
    if (plVar11 != (longlong *)0x0) {
      uVar16 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar13 + 1) = 0;
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    uVar16 = FUN_00d50b20();
  }
  uVar14 = 0;
  if (plVar11 != (longlong *)0x0) {
    local_38 = (longlong *)CONCAT44(local_38._4_4_,param_2);
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = plVar12;
    local_50 = plVar12;
    do {
      iVar10 = (int)uVar14;
      if (iVar10 != 0) {
        if (iVar10 < 1) {
          uVar14 = (ulonglong)(uint)-iVar10;
        }
        else {
          local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar10);
          FUN_00d23690(uVar16,uVar14);
          local_58 = local_58 + local_60._4_4_;
          uVar14 = 0;
        }
        local_60 = CONCAT44((int)uVar14,(int)local_60);
      }
      lVar4 = (longlong)(int)local_60;
      iVar10 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar10);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar10) {
        FUN_001159b0();
        plVar12 = local_50;
        uVar14 = CONCAT71((int7)(uVar14 >> 8),1);
        if ((char)local_38 == '\0') goto LAB_019ce6ff;
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        plVar9 = (longlong *)&DAT_02572358;
        *puVar6 = &DAT_02572358;
        uVar16 = (*DAT_02572370)();
        uVar16 = (**(code **)(*this + 0x9b0))(uVar16,1);
        plVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 == (longlong *)0x0) goto LAB_019ce69b;
          FUN_00d50b00();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_78 == (longlong *)0x0) goto LAB_019ce69b;
        local_70 = '\0';
        local_78 = (longlong *)0x0;
        local_68 = plVar1;
        local_58 = 0;
        local_60 = 0;
        local_38 = plVar11;
        if (0 < *(int *)((longlong)plVar1 + 0xc)) {
          lVar4 = 0;
          do {
            plVar12 = *(longlong **)(plVar1[2] + lVar4 * 8);
            local_78 = plVar12;
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            plVar11 = local_48;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar11 == (longlong *)0x0) {
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar16 = FUN_0125a2c0();
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              plVar11 = local_38;
              if ((pvVar5 != (void *)0x0) &&
                 (lVar7 = FUN_00e8b990(), plVar11 = local_38, lVar7 != 0)) {
                plVar9 = local_38;
                plVar11 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
              (**(code **)(*plVar11 + 0x3a8))(uVar16);
            }
            else {
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125e930();
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0152ebe0();
              pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01507f00();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
            }
            pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar9 = local_38;
            }
            cVar2 = FUN_017516f0();
            if (cVar2 != '\0') {
              local_40 = '\0';
              local_48 = plVar12;
              FUN_00d21140();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar4 = lVar4 + 1;
            local_60 = CONCAT44(local_60._4_4_,(int)lVar4);
          } while ((int)lVar4 < *(int *)((longlong)plVar1 + 0xc));
        }
        FUN_001159b0();
        uVar16 = FUN_00d50b20();
        plVar12 = local_50;
LAB_019ce69b:
        if (*(int *)((longlong)puVar6 + 0xc) != 0) {
          (**(code **)(*this + 0xdb8))(uVar16,1);
        }
        FUN_00d50b20();
        goto LAB_019ce6ff;
      }
      lVar7 = local_68[2];
      local_78 = *(longlong **)(lVar7 + 8 + lVar4 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
      pVar8 = (pthread_key_t)lVar7;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      if (local_48 == (longlong *)0x0) {
        bVar15 = true;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar10 = FUN_0132dd30();
        bVar15 = iVar10 == 0;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar15) goto LAB_019ce306;
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e930();
      plVar12 = local_48;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar12 == (longlong *)0x0) {
        pvVar5 = _pthread_getspecific(pVar8);
        plVar12 = plVar11;
        if ((pvVar5 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar12 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a2c0();
        uVar16 = (**(code **)(*plVar12 + 0x3a8))();
        if ((int)local_60 != 0 || local_58 != 0) goto LAB_019ce276;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152ebe0();
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_01507f00();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          uVar16 = FUN_00d50b20();
        }
        if ((int)local_60 != 0 || local_58 != 0) {
LAB_019ce276:
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar10 = FUN_01751520();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar3 = FUN_01751520();
          uVar16 = extraout_XMM0_Da_00;
          if (iVar10 != iVar3) goto LAB_019ce306;
        }
      }
      uVar14 = local_60 >> 0x20;
    } while( true );
  }
LAB_019ce70c:
  FUN_00d50b20();
  return uVar14;
LAB_019ce306:
  FUN_001159b0();
  uVar14 = 0;
  plVar12 = local_50;
LAB_019ce6ff:
  FUN_00d50b20();
  if (plVar12 == (longlong *)0x0) {
    return uVar14;
  }
  goto LAB_019ce70c;
}




// ==================================================
// @01a35080 (2370 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong **pplVar5;
  longlong *arg1;
  undefined8 *this;
  undefined4 uVar6;
  longlong *local_1c0;
  char local_1b8;
  undefined4 local_150;
  undefined4 uStack_14c;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  undefined8 *local_100;
  char local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (param_1 == 0) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_001b9f00();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01cfc6a0(DAT_0241be18);
    local_150 = 0;
    FUN_01cfc6a0(DAT_0241be1c);
    local_9c = 0x3eaaaa3b;
    FUN_01cfc6a0(DAT_0241be20);
    local_98 = 0x3f2aaa3b;
    FUN_01cfc6a0(DAT_0241be24);
    local_94 = 0x3f800000;
    pplVar5 = &local_90;
    FUN_01ae52c0(pplVar5,&local_150,&local_9c,&local_d0);
    FUN_01f7ba60(DAT_023b5d80,&local_1c0);
    FUN_019fe220();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)uStack_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = DAT_0241bef0;
    local_78 = _DAT_0241be70;
    uStack_70 = _UNK_0241be78;
    local_68 = _DAT_0241be80;
    uStack_64 = _UNK_0241be84;
    uStack_60 = _UNK_0241be88;
    uStack_5c = _UNK_0241be8c;
    local_58 = 0x3f4caacc3f060b0a;
    _uStack_50 = CONCAT44((int)((ulonglong)_UNK_0241bee8 >> 0x20),0x3ed0d4aa);
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_001b9f00();
    (**(code **)(*plVar2 + 0x18))();
    FUN_01cfbee0(DAT_0241f36c,DAT_0241be28,DAT_0241be2c);
    local_9c = 0;
    FUN_01cfbee0(uStack_70._4_4_,DAT_0241be30,DAT_0241be34);
    local_98 = 0x3f000000;
    FUN_01cfbee0(DAT_0241f36c,DAT_0241be38,DAT_0241be3c);
    local_94 = 0x3f000000;
    FUN_01cfbee0(DAT_0241be40,DAT_0241be44,DAT_0241be48);
    local_f0 = 0x3f800000;
    pplVar5 = &local_d0;
    FUN_01ae52c0(pplVar5,&local_9c,&local_98,&local_e0);
    FUN_01f7ba60(DAT_023b5d80,&local_1c0);
    FUN_019fe220();
    if ((local_148 != '\0') && (CONCAT44(uStack_14c,local_150) != 0)) {
      FUN_00d50b20();
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_140 = 0;
  local_138 = '\0';
  local_80 = plVar2;
  uVar3 = FUN_01d4e800(_DAT_02420ca0);
  plVar2 = local_1c0;
  if (local_1c0 == (longlong *)0x0) {
    local_ec = (undefined4)CONCAT71((int7)((ulonglong)pplVar5 >> 8),1);
    plVar2 = (longlong *)0x0;
    local_e8 = 0;
  }
  else {
    if (local_1b8 == '\0') {
      uVar3 = FUN_00d50b00();
      local_ec = 0;
      local_e8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if ((local_1b8 == '\0') || (local_1c0 == (longlong *)0x0)) goto LAB_01a354b8;
      FUN_00d50b20();
    }
    else {
      local_1b8 = '\0';
      local_e8 = CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
    }
    local_ec = 0;
  }
LAB_01a354b8:
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d52700();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
  (*DAT_02680418)();
  if (param_2 == 0) {
    FUN_01d39400(0,0);
    FUN_01d38ba0(DAT_023908ec,0);
    FUN_01d38ba0(0,DAT_023908ec);
    FUN_01d38b10();
  }
  else {
    FUN_01d39400(0,0);
    FUN_01d38ba0(DAT_023908ec,0);
    FUN_01d38ba0(DAT_023908ec,DAT_023908ec);
    FUN_01d38b10();
  }
  if ((char)param_1 == '\0') {
    FUN_01d52740();
    uVar6 = (**(code **)(*arg1 + 0x640))();
    plVar1 = local_90;
    local_120 = DAT_027e1fb0;
    if (DAT_027e1fb0 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_118 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar6,&local_120);
    local_b0 = local_78;
    local_a8 = 0;
    if ((char)uStack_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      uStack_70 = uStack_70 & 0xffffffffffffff00;
    }
    local_a8 = '\x01';
    FUN_01d488d0();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (((char)uStack_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d52740();
    uVar6 = (**(code **)(*arg1 + 0x640))();
    plVar1 = local_90;
    local_130 = DAT_026e4200;
    if (DAT_026e4200 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_128 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar6,&local_130);
    local_c0 = local_78;
    local_b8 = 0;
    if ((char)uStack_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      uStack_70 = uStack_70 & 0xffffffffffffff00;
    }
    local_b8 = '\x01';
    FUN_01d488d0();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (((char)uStack_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d52740();
  (**(code **)(*local_1c0 + 0x3b0))(0,_DAT_02420ca0);
  if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_110 = local_80;
  local_108 = '\0';
  FUN_01d488d0();
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_f8 = '\0';
  local_100 = puVar4;
  (**(code **)(*local_1c0 + 0x3a0))();
  if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  *(undefined1 *)(this + 1) = 0;
  if ((char)local_e8 == '\0' && plVar2 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  *this = plVar2;
  *(undefined1 *)(this + 1) = 1;
  FUN_00d50b20();
  FUN_00d50b20();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return this;
}




// ==================================================
// @01997db0 (2255 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  undefined8 *arg1;
  longlong *this;
  longlong *plVar7;
  longlong *plVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar13 [16];
  float extraout_XMM0_Da;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar14 [16];
  float fVar15;
  longlong local_138;
  undefined1 local_130;
  undefined1 local_128 [16];
  undefined1 local_110;
  float local_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  longlong *local_f0;
  char local_e8;
  int local_dc;
  float local_d8;
  float local_d4;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  fVar9 = (float)(**(code **)(&UNK_00001448 + *this))();
  if (((!NAN((double)this[0x55])) &&
      (uVar10 = (**(code **)(*this + 0x938))(), !NAN(*(float *)(this + 0x56)))) &&
     ((fVar9 != 0.0 || (NAN(fVar9))))) {
    (**(code **)(*this + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    if (((int)this[0x4e] == 4) || ((int)this[0x4e] == 2)) {
      FUN_01cfc6a0(DAT_0241b634 * fVar9 + DAT_02394234);
      local_c8 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_c8 = '\x01';
      local_d0 = local_40;
      FUN_01d488d0();
      if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    plVar7 = local_40;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      param_1 = local_40;
      plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    iVar3 = (**(code **)(*plVar7 + 0x3a8))();
    fVar11 = (float)(**(code **)(*this + 3000))();
    (**(code **)(*this + 0x640))();
    (**(code **)(*local_b0 + 0x378))();
    local_b8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b8 = '\x01';
    local_c0 = local_40;
    FUN_01d48a10();
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    local_108 = (float)FUN_01d43b70();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_128 = ZEXT416((uint)(DAT_023908e0 * fVar11));
    fVar12 = DAT_023b1608 + DAT_023908e0 * fVar11;
    fVar15 = DAT_02390d34;
    if (DAT_02390d34 <= fVar12) {
      fVar15 = fVar12;
    }
    if (fVar15 < local_108) {
      local_108 = fVar15;
      FUN_01d48ad0();
      FUN_01d44d80();
      local_98 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_98 = '\x01';
      local_a0 = local_40;
      FUN_01d48a10();
      if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (this[0x4c] == 0) {
      local_d4 = 0.0;
    }
    else {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_110 = 1;
      local_d4 = (float)FUN_01998b60();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    auVar13 = roundss(ZEXT416(uVar10),ZEXT416(uVar10),9);
    auVar13._0_4_ = auVar13._0_4_ + DAT_023b1698;
    local_dc = iVar3 + 6;
    fVar11 = fVar11 * DAT_02394240;
    local_128 = insertps(_DAT_023b16c0,local_128._0_4_,0x10);
    local_d8 = DAT_0241b638 * fVar9 + DAT_02394234;
    iVar3 = iVar3 + -7;
    plVar7 = (longlong *)0x0;
    bVar1 = false;
    do {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      plVar8 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        param_1 = local_40;
        plVar8 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      pVar6 = (pthread_key_t)param_1;
      iVar3 = iVar3 + 1;
      (**(code **)(*plVar8 + 0x3a0))();
      (**(code **)(*this + 0xbf8))();
      uStack_100 = extraout_XMM0_Qb;
      local_108 = extraout_XMM0_Da;
      uStack_104 = extraout_XMM0_Db;
      pvVar4 = _pthread_getspecific(pVar6);
      plVar8 = local_40;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        plVar8 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      cVar2 = (**(code **)(*plVar8 + 0x3b8))();
      if (cVar2 == '\0') {
        FUN_01cfc6a0();
        local_78 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_78 = '\x01';
        local_80 = local_40;
        FUN_01d488d0();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01cfc6a0();
        local_88 = 0;
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_88 = '\x01';
        local_90 = local_40;
        FUN_01d488d0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar5 = DAT_027e1380;
      if (DAT_027e1380 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar5;
      local_130 = 1;
      param_1 = &local_138;
      FUN_01998ff0(param_1,iVar3,0);
      if (plVar7 == local_40) {
        if ((bVar1) || (plVar7 == (longlong *)0x0)) goto joined_r0x01998593;
        plVar8 = plVar7;
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_019985b0;
        }
LAB_01998544:
        local_38 = '\0';
        bVar1 = true;
        plVar7 = plVar8;
      }
      else {
        if (local_38 != '\0') {
          plVar8 = local_40;
          if ((bVar1) && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01998544;
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar8 = local_40;
        if ((bVar1) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019985b0:
        bVar1 = true;
        plVar7 = plVar8;
joined_r0x01998593:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      auVar14._4_4_ = uStack_104;
      auVar14._0_4_ = (local_108 - local_d4) - fVar11;
      auVar14._8_4_ = (undefined4)uStack_100;
      auVar14._12_4_ = uStack_100._4_4_;
      auVar14 = insertps(auVar13,auVar14,0x10);
      local_e8 = '\0';
      local_f0 = plVar7;
      (**(code **)(*(longlong *)*arg1 + 0x3f8))(auVar14._0_8_,local_128._0_4_);
      if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    } while (iVar3 < local_dc);
    if ((bVar1) && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @017178d0 (2215 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  undefined8 *puVar7;
  pthread_key_t pVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *arg1;
  longlong *this;
  longlong lVar12;
  uint local_34;
  
  lVar12 = *arg1;
  if (lVar12 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  pvVar5 = _pthread_getspecific(param_1);
  if (pvVar5 != (void *)0x0) {
    lVar12 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  if (*(longlong *)(lVar12 + 0x50) != 0) {
    lVar12 = *arg1;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      lVar12 = *arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
    }
    *(undefined1 *)(this + 1) = 0;
    lVar12 = *(longlong *)(lVar12 + 0x50);
    if (lVar12 != 0) {
      FUN_00d50b00();
    }
    *this = lVar12;
    goto LAB_01718097;
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025fbbb0;
  *(undefined8 *)((longlong)puVar7 + 0xc) = 0;
  puVar7[3] = 0;
  FUN_00d500e0();
  plVar9 = (longlong *)*arg1;
  if ((DAT_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar9 == (longlong *)0x0) {
LAB_01717a0f:
    plVar9 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar9 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar9 = arg1;
    if (cVar2 == '\0') goto LAB_01717a0f;
  }
  lVar12 = plVar9[1];
  if (((char)lVar12 == '\0') || (*plVar9 == 0)) {
    if (*plVar9 != 0) goto LAB_01717a3a;
    plVar11 = (longlong *)*arg1;
    pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
    pVar8 = (pthread_key_t)plVar9;
    if (pvVar5 != (void *)0x0) {
      plVar11 = (longlong *)*arg1;
      lVar12 = FUN_00e8b990();
      if (lVar12 != 0) {
        plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
      }
    }
    local_34 = 0;
    cVar2 = (**(code **)(*plVar11 + 1000))();
    if (cVar2 == '\0') {
      plVar9 = (longlong *)*arg1;
      pvVar5 = _pthread_getspecific(pVar8);
      if (pvVar5 != (void *)0x0) {
        plVar9 = (longlong *)*arg1;
        lVar12 = FUN_00e8b990();
        if (lVar12 != 0) {
          plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
        }
      }
      local_34 = 1;
      cVar2 = (**(code **)(*plVar9 + 1000))();
      if (cVar2 == '\0') {
        plVar9 = (longlong *)*arg1;
        pvVar5 = _pthread_getspecific(pVar8);
        if (pvVar5 != (void *)0x0) {
          plVar9 = (longlong *)*arg1;
          lVar12 = FUN_00e8b990();
          if (lVar12 != 0) {
            plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
          }
        }
        local_34 = 2;
        cVar2 = (**(code **)(*plVar9 + 1000))();
        if (cVar2 == '\0') {
          plVar9 = (longlong *)*arg1;
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            plVar9 = (longlong *)*arg1;
            lVar12 = FUN_00e8b990();
            if (lVar12 != 0) {
              plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
            }
          }
          local_34 = 3;
          cVar2 = (**(code **)(*plVar9 + 1000))();
          if (cVar2 == '\0') {
            plVar9 = (longlong *)*arg1;
            pvVar5 = _pthread_getspecific(pVar8);
            if (pvVar5 != (void *)0x0) {
              plVar9 = (longlong *)*arg1;
              lVar12 = FUN_00e8b990();
              if (lVar12 != 0) {
                plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
              }
            }
            local_34 = 4;
            cVar2 = (**(code **)(*plVar9 + 1000))();
            if (cVar2 == '\0') {
              plVar9 = (longlong *)*arg1;
              pvVar5 = _pthread_getspecific(pVar8);
              if (pvVar5 != (void *)0x0) {
                plVar9 = (longlong *)*arg1;
                lVar12 = FUN_00e8b990();
                if (lVar12 != 0) {
                  plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                }
              }
              local_34 = 5;
              cVar2 = (**(code **)(*plVar9 + 1000))();
              if (cVar2 == '\0') {
                plVar9 = (longlong *)*arg1;
                pvVar5 = _pthread_getspecific(pVar8);
                if (pvVar5 != (void *)0x0) {
                  plVar9 = (longlong *)*arg1;
                  lVar12 = FUN_00e8b990();
                  if (lVar12 != 0) {
                    plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                  }
                }
                local_34 = 6;
                cVar2 = (**(code **)(*plVar9 + 1000))();
                if (cVar2 == '\0') {
                  plVar9 = (longlong *)*arg1;
                  pvVar5 = _pthread_getspecific(pVar8);
                  if (pvVar5 != (void *)0x0) {
                    plVar9 = (longlong *)*arg1;
                    lVar12 = FUN_00e8b990();
                    if (lVar12 != 0) {
                      plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                    }
                  }
                  local_34 = 7;
                  cVar2 = (**(code **)(*plVar9 + 1000))();
                  if (cVar2 == '\0') {
                    plVar9 = (longlong *)*arg1;
                    pvVar5 = _pthread_getspecific(pVar8);
                    if (pvVar5 != (void *)0x0) {
                      plVar9 = (longlong *)*arg1;
                      lVar12 = FUN_00e8b990();
                      if (lVar12 != 0) {
                        plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                      }
                    }
                    local_34 = 8;
                    cVar2 = (**(code **)(*plVar9 + 1000))();
                    if (cVar2 == '\0') {
                      plVar9 = (longlong *)*arg1;
                      pvVar5 = _pthread_getspecific(pVar8);
                      if (pvVar5 != (void *)0x0) {
                        plVar9 = (longlong *)*arg1;
                        lVar12 = FUN_00e8b990();
                        if (lVar12 != 0) {
                          plVar9 = (longlong *)
                                   plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                        }
                      }
                      local_34 = 9;
                      cVar2 = (**(code **)(*plVar9 + 1000))();
                      if (cVar2 == '\0') {
                        plVar9 = (longlong *)*arg1;
                        pvVar5 = _pthread_getspecific(pVar8);
                        if (pvVar5 != (void *)0x0) {
                          plVar9 = (longlong *)*arg1;
                          lVar12 = FUN_00e8b990();
                          if (lVar12 != 0) {
                            plVar9 = (longlong *)
                                     plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                          }
                        }
                        local_34 = 10;
                        cVar2 = (**(code **)(*plVar9 + 1000))();
                        if (cVar2 == '\0') {
                          plVar9 = (longlong *)*arg1;
                          pvVar5 = _pthread_getspecific((pthread_key_t)arg1);
                          if (pvVar5 != (void *)0x0) {
                            plVar9 = (longlong *)*arg1;
                            lVar12 = FUN_00e8b990();
                            if (lVar12 != 0) {
                              plVar9 = (longlong *)
                                       plVar9[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
                            }
                          }
                          local_34 = 0xb;
                          cVar2 = (**(code **)(*plVar9 + 1000))();
                          if (cVar2 == '\0') {
                            *(undefined1 *)(this + 1) = 0;
                            *this = 0;
                            FUN_00d50b20();
                            return this;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    bVar3 = ((char)local_34 + ((byte)(local_34 / 3) & 0xfc) * -3) * '\a';
    bVar3 = bVar3 + (bVar3 / 3 & 0xfc) * -3 + 6;
    uVar1 = (bVar3 / 3 & 0xfffffffc) * 3;
    puVar10 = (undefined8 *)(ulonglong)uVar1;
    *(uint *)((longlong)puVar7 + 0xc) = (byte)(bVar3 - (char)uVar1) - 6;
  }
  else {
    FUN_00d50b00();
LAB_01717a3a:
    pvVar5 = _pthread_getspecific((pthread_key_t)plVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar4 = FUN_01743720();
    *(int *)((longlong)puVar7 + 0xc) = iVar4;
    iVar4 = iVar4 * 7;
    iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
    puVar10 = (undefined8 *)(ulonglong)((iVar4 >> 0x1f & 0xcU) + iVar4);
    if ((char)lVar12 != '\0') {
      FUN_00d50b20();
    }
  }
  *(undefined4 *)(puVar7 + 2) = 0;
  bVar3 = 0;
  lVar12 = 0;
  do {
    plVar9 = (longlong *)*arg1;
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
    if (pvVar5 != (void *)0x0) {
      plVar9 = (longlong *)*arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    (**(code **)(*plVar9 + 0x378))();
    plVar9 = (longlong *)*arg1;
    pvVar5 = _pthread_getspecific((pthread_key_t)puVar10);
    if (pvVar5 != (void *)0x0) {
      plVar9 = (longlong *)*arg1;
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        plVar9 = (longlong *)plVar9[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    cVar2 = (**(code **)(*plVar9 + 0x3b8))();
    if (cVar2 != '\0') {
      puVar7[3] = puVar7[3] & ~(0xfL << (bVar3 & 0x3f));
      puVar10 = puVar7;
    }
    pVar8 = (pthread_key_t)puVar10;
    lVar12 = lVar12 + 1;
    bVar3 = bVar3 + 4;
  } while (lVar12 != 0xc);
  FUN_01715d80();
  lVar12 = *arg1;
  pvVar5 = _pthread_getspecific(pVar8);
  if (pvVar5 != (void *)0x0) {
    lVar12 = *arg1;
    lVar6 = FUN_00e8b990();
    if (lVar6 != 0) {
      lVar12 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
  }
  puVar10 = *(undefined8 **)(lVar12 + 0x50);
  if (puVar10 != puVar7) {
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    *(undefined8 **)(lVar12 + 0x50) = puVar7;
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  *this = (longlong)puVar7;
LAB_01718097:
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01a32100 (2195 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *arg1;
  longlong *this;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  undefined1 auVar8 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if ((DAT_028b2a80 == 0) || (DAT_028b2a89 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2a80 == 0) {
      FUN_01cfcdc0();
      lVar5 = DAT_028b2a80;
      if (DAT_028b2a80 != local_38) {
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
        bVar3 = DAT_028b2a80 != 0;
        DAT_028b2a80 = lVar5;
        if (bVar3) {
          FUN_00d50b20();
          lVar5 = local_38;
        }
      }
      if ((lVar5 != 0) && (DAT_028b2a88 == '\0')) {
        DAT_028b2a88 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_38;
      }
      if ((local_30 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      in_XMM1 = ZEXT416((uint)DAT_0239011c);
      FUN_01cfcdc0();
      lVar5 = DAT_028b2a70;
      if (DAT_028b2a70 != local_38) {
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
        bVar3 = DAT_028b2a70 != 0;
        DAT_028b2a70 = lVar5;
        if (bVar3) {
          FUN_00d50b20();
          lVar5 = local_38;
        }
      }
      if ((lVar5 != 0) && (DAT_028b2a78 == '\0')) {
        DAT_028b2a78 = '\x01';
        FUN_00e8cb90();
        lVar5 = local_38;
      }
      if ((local_30 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b2a89 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2a89 = '\x01';
      FUN_00e8cb70();
    }
  }
  uVar6 = FUN_01e3f820();
  uStack_d0 = (undefined4)extraout_XMM0_Qb;
  uStack_cc = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar12 = DAT_02394240;
  if (this[0x28] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this + 0x640))();
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
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    lVar5 = this[0x28];
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
    fStack_54 = (float)((ulonglong)uVar7 >> 0x20);
    fStack_54 = fStack_54 * fStack_54;
    auVar8._4_4_ = fStack_54;
    auVar8._0_4_ = fStack_54;
    auVar8._8_4_ = extraout_XMM0_Dd * extraout_XMM0_Dd;
    auVar8._12_4_ = extraout_XMM0_Dd * extraout_XMM0_Dd;
    auVar11._4_12_ = auVar8._4_12_;
    auVar11._0_4_ = SQRT(fStack_54 + local_58 * local_58) * DAT_0239011c + DAT_02390124;
    auVar8 = roundss(auVar11,auVar11,10);
    fVar12 = DAT_02394240;
    if (DAT_02394240 <= auVar8._0_4_) {
      fVar12 = auVar8._0_4_;
    }
  }
  lVar5 = DAT_028b2a80;
  if (DAT_028b2a80 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  auVar10._4_12_ = in_XMM1._4_12_;
  auVar10._0_4_ = in_XMM1._0_4_ * DAT_0239011c;
  auVar2._8_4_ = uStack_d0;
  auVar2._0_8_ = uVar6;
  auVar2._12_4_ = uStack_cc;
  auVar8 = insertps(auVar2,fVar12,0x10);
  auVar11 = blendps(auVar10,_DAT_023b45e0,0xe);
  FUN_01d48b40();
  (**(code **)(*(longlong *)*arg1 + 0x3c8))();
  lVar5 = DAT_028b2a70;
  if (DAT_028b2a70 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (*(float *)(this + 0x27) <= 0.0) {
    FUN_01d48b40();
    (**(code **)(*(longlong *)*arg1 + 0x3e0))();
    lVar5 = this[0x28];
  }
  else {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
    (*DAT_02680418)();
    FUN_01d39400();
    FUN_01d39310();
    FUN_01d38ba0();
    (**(code **)(*(longlong *)*arg1 + 0x3a0))();
    FUN_00d50b20();
    lVar5 = this[0x28];
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this + 0x640))();
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
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48ad0();
    lVar5 = this[0x28];
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
    fStack_54 = (float)((ulonglong)uVar6 >> 0x20);
    fStack_50 = (float)extraout_XMM0_Qb_00;
    fStack_4c = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
    fVar12 = auVar11._0_4_ + auVar8._0_4_ + local_58 * _DAT_023b5dd0;
    fVar13 = auVar11._4_4_ + auVar8._4_4_ + fStack_54 * _UNK_023b5dd4;
    fVar14 = auVar11._8_4_ + auVar8._8_4_ + fStack_50 * _UNK_023b5dd8;
    fVar15 = auVar11._12_4_ + auVar8._12_4_ + fStack_4c * _UNK_023b5ddc;
    auVar9._0_4_ = (float)(_DAT_023945e0 & (uint)fVar12 | _DAT_023945f0) + fVar12;
    auVar9._4_4_ = (float)(_UNK_023945e4 & (uint)fVar13 | _UNK_023945f4) + fVar13;
    auVar9._8_4_ = (float)(_UNK_023945e8 & (uint)fVar14 | _UNK_023945f8) + fVar14;
    auVar9._12_4_ = (float)(_UNK_023945ec & (uint)fVar15 | _UNK_023945fc) + fVar15;
    auVar8 = roundps(auVar9,auVar9,0xb);
    FUN_00d05530(auVar8._0_8_);
    lVar5 = DAT_028b2a80;
    if (DAT_028b2a80 != 0) {
      FUN_00d50b00();
    }
    FUN_01d488d0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    (**(code **)(*(longlong *)*arg1 + 0x3b0))();
    (**(code **)(*this + 0x640))();
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
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*arg1;
    lVar5 = this[0x28];
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




// ==================================================
// @01525150 (2111 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  longlong this;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong unaff_R15;
  undefined7 uVar13;
  double dVar14;
  undefined8 uVar15;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 *local_90;
  undefined1 local_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined8 *local_60;
  undefined1 local_58;
  code *local_50;
  undefined *local_48;
  double local_38;
  
  local_38 = *(double *)(this + 0x38);
  lVar7 = *(longlong *)(this + 0x48);
  if (*(int *)(lVar7 + 0xc) < 1) {
    param_2 = 0;
    lVar10 = 0;
    lVar7 = *(longlong *)(this + 0x50);
    iVar2 = *(int *)(lVar7 + 0xc);
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    local_48 = (undefined *)0x0;
    uVar12 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar11 * 8);
      uVar13 = (undefined7)(unaff_R15 >> 8);
      if (lVar10 == lVar7) {
        lVar7 = lVar10;
        if (((char)uVar12 == '\0') && (lVar10 != 0)) {
          FUN_00d50b00(param_1,param_2);
          param_2 = CONCAT71(uVar13,1);
        }
        else {
          param_2 = uVar12 & 0xffffffff;
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00(param_1,param_2);
        }
        param_2 = CONCAT71(uVar13,1);
        if (((char)uVar12 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar7;
      pVar9 = (pthread_key_t)param_1;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (code *)FUN_01524a20();
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(undefined **)(lVar7 + 0x38) = local_48;
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(double *)(lVar7 + 0x40) = local_38;
      if (((double)local_50 == DAT_02390448) && (!NAN((double)local_50) && !NAN(DAT_02390448)))
      break;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01524a10();
      local_48 = (undefined *)((double)local_48 + (double)local_50);
      local_38 = local_38 + dVar14 * (double)local_50;
      lVar11 = lVar11 + 1;
      lVar7 = *(longlong *)(this + 0x48);
      param_1 = (longlong)*(int *)(lVar7 + 0xc);
      uVar12 = param_2;
      unaff_R15 = param_2;
    } while (lVar11 < param_1);
    local_38 = *(double *)(this + 0x38);
    lVar7 = *(longlong *)(this + 0x50);
    iVar2 = *(int *)(lVar7 + 0xc);
  }
  if (0 < iVar2) {
    lVar11 = 0;
    local_48 = (undefined *)0x0;
    uVar12 = param_2 & 0xffffffff;
    do {
      pVar9 = (pthread_key_t)param_2;
      lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x10) + lVar11 * 8);
      uVar13 = (undefined7)((ulonglong)this >> 8);
      if (lVar10 == lVar7) {
        lVar7 = lVar10;
        if (((char)uVar12 == '\0') && (lVar10 != 0)) {
          param_2 = CONCAT71(uVar13,1);
          FUN_00d50b00();
        }
        else {
          param_2 = uVar12 & 0xffffffff;
        }
      }
      else {
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        param_2 = CONCAT71(uVar13,1);
        if (((char)uVar12 != '\0') && (lVar10 != 0)) {
          FUN_00d50b20();
        }
      }
      lVar10 = lVar7;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (code *)FUN_01524a20();
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(undefined **)(lVar7 + 0x38) = local_48;
      pvVar5 = _pthread_getspecific(pVar9);
      lVar7 = lVar10;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        lVar7 = *(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      *(double *)(lVar7 + 0x40) = local_38;
      if (((double)local_50 == DAT_02390448) && (!NAN((double)local_50) && !NAN(DAT_02390448)))
      break;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar14 = (double)FUN_01524a10();
      local_48 = (undefined *)((double)local_48 - (double)local_50);
      local_38 = local_38 - dVar14 * (double)local_50;
      lVar11 = lVar11 + 1;
      lVar7 = *(longlong *)(this + 0x50);
      uVar12 = param_2;
    } while (lVar11 < *(int *)(lVar7 + 0xc));
  }
  puVar1 = (undefined8 *)(this + 0x60);
  FUN_00d64850();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_48 = &DAT_025683c0;
  *puVar8 = &DAT_025683c0;
  local_50 = DAT_025683d8;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525621:
    puVar8 = (undefined8 *)*puVar1;
    if (puVar8 != (undefined8 *)0x0) goto LAB_0152563c;
    bVar4 = true;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525621;
    }
LAB_0152563c:
    local_88 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_88 = 1;
  lVar7 = *(longlong *)(this + 0x48);
  local_90 = puVar8;
  if (lVar7 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_c8 = 1;
  local_d0 = lVar7;
  FUN_01525c50(uVar15,&local_d0);
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  FUN_00d64910();
  puVar1 = (undefined8 *)(this + 0x68);
  FUN_00d64850();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525727:
    puVar8 = (undefined8 *)*puVar1;
    if (puVar8 != (undefined8 *)0x0) goto LAB_0152573f;
    bVar4 = true;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525727;
    }
LAB_0152573f:
    local_78 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_78 = 1;
  lVar7 = *(longlong *)(this + 0x50);
  local_80 = puVar8;
  if (lVar7 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_b8 = 1;
  local_c0 = lVar7;
  FUN_01525c50(uVar15,&local_c0);
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  FUN_00d64910();
  puVar1 = (undefined8 *)(this + 0x78);
  FUN_00d64850();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_01525821:
    puVar8 = (undefined8 *)*puVar1;
    if (puVar8 != (undefined8 *)0x0) goto LAB_01525839;
    bVar4 = true;
    puVar8 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_01525821;
    }
LAB_01525839:
    local_68 = 0;
    uVar15 = FUN_00d50b00();
    bVar4 = false;
  }
  local_68 = 1;
  lVar7 = *(longlong *)(this + 0x48);
  local_70 = puVar8;
  if (lVar7 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_a8 = 1;
  local_b0 = lVar7;
  FUN_01525fb0(uVar15,&local_b0);
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  FUN_00d64910();
  puVar1 = (undefined8 *)(this + 0x80);
  FUN_00d64850();
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = local_48;
  (*local_50)();
  FUN_00c92170();
  FUN_00c92160();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 == puVar8) {
    uVar15 = FUN_00d50b20();
LAB_0152591e:
    puVar8 = (undefined8 *)*puVar1;
    if (puVar8 == (undefined8 *)0x0) {
      bVar4 = true;
      puVar8 = (undefined8 *)0x0;
      goto LAB_01525941;
    }
  }
  else {
    *puVar1 = puVar8;
    if (puVar3 != (undefined8 *)0x0) {
      uVar15 = FUN_00d50b20();
      goto LAB_0152591e;
    }
  }
  local_58 = 0;
  uVar15 = FUN_00d50b00();
  bVar4 = false;
LAB_01525941:
  local_58 = 1;
  lVar7 = *(longlong *)(this + 0x50);
  local_60 = puVar8;
  if (lVar7 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_98 = 1;
  local_a0 = lVar7;
  FUN_01525fb0(uVar15,&local_a0);
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (!bVar4) {
    FUN_00d50b20();
  }
  FUN_00d64910();
  if (((char)param_2 != '\0') && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01523ca0 (1976 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  size_t sVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  double *pdVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  int iVar23;
  longlong arg1;
  undefined8 *this;
  int iVar24;
  undefined8 *puVar25;
  uint uVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  longlong local_68;
  char local_60;
  
  lVar11 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_00c8e710();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  iVar24 = *(int *)(arg1 + 0x18);
  if (1 < iVar24) {
    uVar26 = 1;
    do {
      lVar17 = *(longlong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(arg1 + 0x10) + 0x10) +
                  (ulonglong)(uVar26 >> 10) * 8) + 0x10);
      lVar20 = (ulonglong)(uVar26 & 0x3ff) * 0x20;
      lVar27 = (longlong)*(int *)(local_68 + 0x18);
      if ((*(int *)(local_68 + 0x18) + 0x1fU < 0x3f) ||
         (dVar28 = *(double *)(lVar17 + 8 + lVar20),
         pdVar18 = (double *)(lVar27 + -0x18 + *(longlong *)(local_68 + 0x10)),
         *pdVar18 <= dVar28 && dVar28 != *pdVar18)) {
        FUN_00c8e340(iVar24,1);
        puVar25 = (undefined8 *)(lVar17 + lVar20);
        lVar17 = *(longlong *)(local_68 + 0x10);
        uVar7 = *puVar25;
        uVar13 = puVar25[1];
        uVar14 = puVar25[3];
        puVar16 = (undefined8 *)(lVar17 + 0x10 + lVar27);
        *puVar16 = puVar25[2];
        puVar16[1] = uVar14;
        puVar16 = (undefined8 *)(lVar17 + lVar27);
        *puVar16 = uVar7;
        puVar16[1] = uVar13;
        iVar24 = *(int *)(arg1 + 0x18);
      }
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < iVar24);
  }
  iVar24 = *(int *)(local_68 + 0x18);
  iVar15 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar15 = iVar24;
  }
  if (0x63f < iVar24) {
    iVar15 = iVar15 >> 5;
    pdVar18 = (double *)(((longlong)iVar15 + -0x14) * 0x20 + *(longlong *)(local_68 + 0x10) + 0x48);
    lVar17 = 0;
    do {
      if (lVar17 == -0x12) goto LAB_01523ecc;
      dVar28 = ((pdVar18[-4] - pdVar18[-8]) / (pdVar18[-5] - pdVar18[-9])) * DAT_023b4df8;
      auVar31._0_8_ = *pdVar18 - pdVar18[-4];
      auVar31._8_8_ = pdVar18[-8] - pdVar18[-0xc];
      auVar32._0_8_ = pdVar18[-1] - pdVar18[-5];
      auVar32._8_8_ = pdVar18[-9] - pdVar18[-0xd];
      auVar32 = divpd(auVar31,auVar32);
      dVar29 = (auVar32._8_8_ * _UNK_02411888 + auVar32._0_8_ * _DAT_02411880) * DAT_023942d0;
      lVar17 = lVar17 + -1;
    } while ((dVar29 * DAT_023942d0 <= dVar28) && (pdVar18 = pdVar18 + 4, dVar28 <= dVar29 + dVar29)
            );
    iVar15 = (int)((longlong)iVar15 + -0x14) - (int)lVar17;
LAB_01523ecc:
    uVar26 = iVar15 - 2;
    lVar17 = *(longlong *)(local_68 + 0x10);
    pdVar18 = (double *)(lVar17 + 0x2c8);
    uVar21 = 0x13;
    do {
      if (uVar21 == 0xffffffffffffffff) {
        uVar19 = 0;
        uVar22 = uVar26;
        goto joined_r0x015242d5;
      }
      dVar28 = (pdVar18[-4] - pdVar18[-8]) / (pdVar18[-5] - pdVar18[-9]);
      lVar20 = (uVar21 & 0xffffffff) * 0x20;
      auVar33._0_8_ = *pdVar18 - pdVar18[-4];
      auVar33._8_8_ = pdVar18[-8] - *(double *)(lVar17 + 8 + lVar20);
      auVar30._0_8_ = pdVar18[-1] - pdVar18[-5];
      auVar30._8_8_ = pdVar18[-9] - *(double *)(lVar17 + lVar20);
      auVar32 = divpd(auVar33,auVar30);
      dVar29 = (auVar32._8_8_ + auVar32._0_8_) * DAT_023942d0;
      uVar21 = uVar21 - 1;
    } while ((dVar29 * DAT_023942d0 <= dVar28) &&
            (pdVar18 = pdVar18 + -4, dVar28 <= dVar29 + dVar29));
    uVar19 = (int)uVar21 + 3;
    uVar22 = uVar26 - uVar19;
joined_r0x015242d5:
    if (0x31 < (int)uVar22) {
      FUN_00c8e710();
      if ((local_60 == '\0') && (local_68 != 0)) {
        FUN_00d50b00();
      }
      dVar28 = (double)FUN_00c92170();
      if ((int)uVar19 <= (int)uVar26) {
        uVar21 = (ulonglong)uVar19;
        iVar24 = *(int *)(local_68 + 0x18);
        dVar29 = DAT_02395720;
        do {
          while( true ) {
            lVar17 = *(longlong *)(local_68 + 0x10);
            FUN_00c8e340(dVar28,1);
            lVar20 = *(longlong *)(local_68 + 0x10);
            pdVar18 = (double *)(lVar17 + uVar21 * 0x20);
            dVar28 = *pdVar18;
            dVar3 = pdVar18[1];
            puVar16 = (undefined8 *)(lVar17 + 0x10 + uVar21 * 0x20);
            uVar7 = puVar16[1];
            puVar25 = (undefined8 *)(lVar20 + 0x10 + (longlong)iVar24);
            *puVar25 = *puVar16;
            puVar25[1] = uVar7;
            pdVar18 = (double *)(lVar20 + iVar24);
            *pdVar18 = dVar28;
            pdVar18[1] = dVar3;
            lVar17 = *(longlong *)(local_68 + 0x10);
            iVar24 = *(int *)(local_68 + 0x18);
            lVar20 = (longlong)iVar24;
            if (uVar21 == uVar26) break;
LAB_01524380:
            uVar21 = uVar21 + 1;
            pdVar18 = (double *)(*(longlong *)(local_68 + 0x10) + uVar21 * 0x20);
            pdVar2 = (double *)(lVar17 + -0x20 + lVar20);
            dVar28 = *pdVar18 - *pdVar2;
            dVar29 = ((pdVar18[1] - pdVar2[1]) * DAT_023b4df8) / dVar28;
            *(double *)(lVar17 + -0x10 + lVar20) = dVar29;
            if (uVar21 == iVar15 - 1) goto LAB_01523fd1;
          }
          iVar10 = *(int *)(local_68 + 0x18);
          iVar23 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar23 = iVar10;
          }
          if ((longlong)(ulonglong)uVar26 < (longlong)((iVar23 >> 5) + -1)) goto LAB_01524380;
          uVar21 = uVar21 + 1;
          *(double *)(lVar17 + -0x10 + lVar20) = dVar29;
        } while (uVar21 != iVar15 - 1);
      }
LAB_01523fd1:
      puVar16 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar16 = &DAT_025683c0;
      (*DAT_025683d8)();
      FUN_00c92170();
      auVar12._8_8_ = 0;
      auVar12._0_8_ = *(double *)(*(longlong *)(local_68 + 0x10) + 0x88) * DAT_0241c3f0;
      auVar32 = roundsd(ZEXT816(0),auVar12,10);
      dVar29 = auVar32._0_8_ * DAT_0240e9b8;
      uVar21 = (ulonglong)*(int *)(local_68 + 0x18);
      dVar28 = *(double *)((uVar21 - 0x18) + *(longlong *)(local_68 + 0x10));
      if (dVar29 < dVar28) {
        uVar26 = 4;
        do {
          iVar24 = (int)uVar21;
          iVar15 = iVar24 + 0x1f;
          if (-1 < iVar24) {
            iVar15 = iVar24;
          }
          lVar27 = (longlong)((iVar15 >> 5) + -1);
          lVar17 = (longlong)(int)uVar26 + 5;
          lVar20 = lVar17;
          if (lVar17 < lVar27) {
            lVar20 = lVar27;
          }
          sVar1 = (size_t)lVar20;
          uVar19 = sVar1 - 5;
          lVar20 = (longlong)(int)uVar26 * 0x20 + 0x28;
          uVar26 = uVar26 - 1;
          do {
            uVar22 = uVar26;
            uVar26 = uVar19;
            if (lVar27 <= lVar17) goto joined_r0x015240c6;
            uVar26 = uVar22 + 1;
            lVar17 = lVar17 + 1;
            pdVar18 = (double *)(*(longlong *)(local_68 + 0x10) + lVar20);
            lVar20 = lVar20 + 0x20;
          } while (*pdVar18 <= dVar29);
          sVar1 = uVar22 + 6;
joined_r0x015240c6:
          if (iVar15 >> 5 <= (int)sVar1) break;
          lVar17 = *(longlong *)(local_68 + 0x10);
          lVar20 = (longlong)(int)uVar26 * 0x20;
          lVar27 = ((longlong)(int)uVar26 + 1) * 0x20;
          dVar3 = *(double *)(lVar17 + -0x40 + lVar20);
          dVar4 = *(double *)(lVar17 + -0x38 + lVar20);
          dVar5 = *(double *)(lVar17 + 0x68 + lVar20);
          dVar6 = *(double *)(lVar17 + 0x60 + lVar20);
          _qsort(FUN_00e8b5f0,8,sVar1,(int *)(ulonglong)uVar19);
          lVar17 = *(longlong *)(local_68 + 0x10);
          uVar7 = *(undefined8 *)(lVar17 + 0x10 + lVar27);
          uVar8 = *(undefined2 *)(lVar17 + 0x18 + lVar27);
          uVar9 = *(undefined2 *)(lVar17 + 0x1a + lVar27);
          lVar20 = (longlong)*(int *)(puVar16 + 3);
          FUN_00c8e340(uVar7,1);
          lVar17 = puVar16[2];
          *(double *)(lVar17 + lVar20) =
               (dVar6 - dVar3) * ((dVar29 - dVar4) / (dVar5 - dVar4)) + dVar3;
          *(double *)(lVar17 + 8 + lVar20) = dVar29;
          *(undefined8 *)(lVar17 + 0x10 + lVar20) = uVar7;
          *(undefined2 *)(lVar17 + 0x18 + lVar20) = uVar8;
          *(undefined2 *)(lVar17 + 0x1a + lVar20) = uVar9;
          dVar29 = dVar29 + DAT_0240e9b8;
          if (dVar28 <= dVar29) break;
          uVar21 = (ulonglong)*(uint *)(local_68 + 0x18);
        } while( true );
      }
      FUN_01524590();
      *this = puVar16;
      *(undefined1 *)(this + 1) = 1;
      FUN_00d50b20();
      goto LAB_0152432a;
    }
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
LAB_0152432a:
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar11) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return this;
}




// ==================================================
// @01b17840 (1955 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  int iVar12;
  longlong *plVar13;
  longlong *arg1;
  longlong *this;
  bool bVar14;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_88;
  char local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  longlong *local_48;
  char local_40;
  
  plVar13 = (longlong *)*arg1;
  if ((DAT_027c0160 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar13 == (longlong *)0x0) {
LAB_01b17899:
    plVar13 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar13 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar13 = arg1;
    if (cVar2 == '\0') goto LAB_01b17899;
  }
  if (*plVar13 != 0) {
    if (*param_2 != 0) {
      FUN_00d74120();
      lVar1 = DAT_027e3cf0;
      if (DAT_027e3cf0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_48 + 0x50))();
      bVar14 = true;
      if (cVar2 == '\0') {
        bVar14 = *param_2 == 0;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar14) goto LAB_01b1794a;
    }
    FUN_01b14f90();
    FUN_01ad48c0();
  }
LAB_01b1794a:
  FUN_01ad3cb0();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b1797f;
    }
LAB_01b17aaa:
    bVar14 = true;
  }
  else {
    if (local_48 == (longlong *)0x0) goto LAB_01b17aaa;
LAB_01b1797f:
    plVar13 = (longlong *)*arg1;
    FUN_011a7c20();
    if (plVar13 == (longlong *)0x0) {
LAB_01b179b7:
      plVar13 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar13 = arg1;
      if (cVar2 == '\0') goto LAB_01b179b7;
    }
    if ((*plVar13 != 0) && (*param_2 != 0)) {
      FUN_00d74120();
      lVar1 = DAT_027e13b0;
      pVar11 = (pthread_key_t)plVar13;
      if (DAT_027e13b0 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_48 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        lVar1 = *arg1;
        cVar2 = (char)arg1[1];
        if ((cVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01770f00();
        cVar3 = FUN_00d23d70();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((cVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar9 = _pthread_getspecific(pVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770f00();
          iVar4 = FUN_00d237a0();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          FUN_01e436c0();
          auVar17 = in_XMM1;
          pvVar9 = _pthread_getspecific(pVar11);
          plVar13 = local_48;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar13 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          (**(code **)(*this + 0x920))();
          iVar5 = (**(code **)(*plVar13 + 0x3a8))();
          pvVar9 = _pthread_getspecific(pVar11);
          plVar13 = local_48;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar13 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          local_78._4_4_ = in_XMM1._4_4_;
          uStack_70._4_4_ = in_XMM1._12_4_;
          auVar15._4_4_ = extraout_XMM0_Db + (float)local_78._4_4_;
          auVar15._12_4_ = extraout_XMM0_Dd + uStack_70._4_4_;
          auVar15._0_4_ = auVar15._4_4_;
          auVar15._8_4_ = auVar15._12_4_;
          auVar16._4_12_ = auVar15._4_12_;
          auVar16._0_4_ = auVar15._4_4_ + DAT_02390d00;
          (**(code **)(*this + 0x920))(auVar16._0_8_);
          iVar6 = (**(code **)(*plVar13 + 0x3a8))();
          if ((*(int *)((longlong)this + 0x284) != 1) &&
             (*(int *)((longlong)this + 0x284) != 0)) {
            local_78 = (undefined1  [8])FUN_01e3f820();
            uStack_70 = extraout_XMM0_Qb;
            if (*(int *)((longlong)this + 0x284) == 3) {
              auVar15 = auVar17;
              FUN_01e3f820();
              auVar18 = blendps(auVar15,_DAT_0241c700,0xd);
            }
            else {
              auVar18._8_8_ = 0;
              auVar18._0_8_ = DAT_023dccf4;
            }
            auVar19._0_4_ = auVar18._0_4_ + SUB84(local_78,0);
            auVar19._4_4_ = auVar18._4_4_ + (float)((ulonglong)local_78 >> 0x20);
            auVar19._8_4_ = auVar18._8_4_ + (float)extraout_XMM0_Qb;
            auVar19._12_4_ = auVar18._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
            blendps(auVar19,_local_78,2);
            blendps(auVar17,_DAT_0241c710,0xd);
          }
          FUN_01adad50();
          FUN_00d052e0();
          FUN_01adabe0();
          FUN_00d052e0();
          pvVar9 = _pthread_getspecific(pVar11);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01770870();
          pVar11 = 0x2802558;
          if (cVar3 == '\0') {
            pvVar9 = _pthread_getspecific(0x2802558);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01770ea0();
            FUN_01b17610();
          }
          else {
            pvVar9 = _pthread_getspecific(0x2802558);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar7 = FUN_01770c70();
            pvVar9 = _pthread_getspecific(pVar11);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar8 = FUN_01770ea0();
            iVar12 = iVar4 + iVar7 + iVar8;
            iVar4 = iVar4 + iVar8 + iVar7 * 2;
            do {
              iVar12 = iVar12 - iVar7;
              iVar4 = iVar4 - iVar7;
            } while (iVar6 < iVar12);
            for (; iVar4 < iVar5; iVar4 = iVar4 + iVar7) {
              FUN_01b17610();
            }
          }
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((cVar2 != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01b17abe;
      }
    }
    bVar14 = false;
  }
  (**(code **)(*this + 0x620))();
  if (bVar14) {
    return;
  }
LAB_01b17abe:
  FUN_00d50b20();
  return;
}




// ==================================================
// @0171ab80 (1886 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong this;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  FUN_00d6f370();
  lVar2 = local_30;
  if ((local_28 == '\0') && (local_30 != 0)) {
    FUN_00d50b00();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027cc818;
  if (DAT_027cc818 != 0) {
    FUN_00d50b00();
  }
  local_180 = lVar1;
  local_178 = '\x01';
  local_170 = 0;
  local_168 = '\0';
  FUN_00d704d0(&local_170,&local_180);
  lVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_160 = lVar1;
    local_158 = '\0';
    uVar4 = FUN_00c716c0();
    *(undefined4 *)(this + 0x18) = uVar4;
    if ((local_158 != '\0') && (local_160 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc820;
  if (DAT_027cc820 != 0) {
    FUN_00d50b00();
  }
  local_150 = lVar1;
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_00d704d0(&local_140,&local_150);
  lVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_130 = lVar1;
    local_128 = '\0';
    uVar3 = FUN_00c70bc0();
    *(undefined1 *)(this + 0x1c) = uVar3;
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc828;
  if (DAT_027cc828 != 0) {
    FUN_00d50b00();
  }
  local_120 = lVar1;
  local_118 = '\x01';
  local_110 = 0;
  local_108 = '\0';
  FUN_00d704d0(&local_110,&local_120);
  lVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_100 = lVar1;
    local_f8 = '\0';
    uVar4 = FUN_00c716c0();
    *(undefined4 *)(this + 0x20) = uVar4;
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc830;
  if (DAT_027cc830 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  local_e0 = 0;
  local_d8 = '\0';
  FUN_00d704d0(&local_e0,&local_f0);
  lVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_d0 = lVar1;
    local_c8 = '\0';
    uVar4 = FUN_00c716c0();
    *(undefined4 *)(this + 0x24) = uVar4;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc838;
  if (DAT_027cc838 != 0) {
    FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d704d0(&local_b0,&local_c0);
  lVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_a0 = lVar1;
    local_98 = '\0';
    uVar3 = FUN_00c70bc0();
    *(undefined1 *)(this + 0x28) = uVar3;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc840;
  if (DAT_027cc840 != 0) {
    FUN_00d50b00();
  }
  local_90 = lVar1;
  local_88 = '\x01';
  local_80 = 0;
  local_78 = '\0';
  FUN_00d704d0(&local_80,&local_90);
  lVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_70 = lVar1;
    local_68 = '\0';
    uVar4 = FUN_00c716c0();
    *(undefined4 *)(this + 0x2c) = uVar4;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  lVar1 = DAT_027cc848;
  if (DAT_027cc848 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  local_58 = '\x01';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d704d0(&local_50,&local_60);
  lVar1 = local_30;
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    local_40 = lVar1;
    local_38 = '\0';
    uVar4 = FUN_00c716c0();
    *(undefined4 *)(this + 0x30) = uVar4;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b15940 (1883 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  longlong this;
  float fVar10;
  undefined4 uVar11;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this + 0x315) == '\0') || (*(char *)(this + 0x316) == '\0'))
  goto LAB_01b15b3b;
  if (param_2 != '\0') {
    FUN_00d50b00();
    *(int *)(this + 0x2fc) = *(int *)(this + 0x2fc) + 1;
    uVar11 = DAT_023b26e8;
    if (NAN(*(float *)(this + 0x1dc))) {
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_01742280();
    }
    *(undefined4 *)(this + 0x1dc) = uVar11;
    FUN_01af6500();
    FUN_00d50b20();
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    goto LAB_01b15b3d;
  }
  FUN_01caeae0();
  if (local_58 == '\0') {
    if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b15a3b;
    }
  }
  else if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
LAB_01b15a3b:
    FUN_01ad3cb0();
    if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    lVar6 = DAT_027e4590;
    local_70 = in_stack_ffffffffffffffa0;
    if ((*(longlong *)(this + 0x1b0) == 0) || (in_stack_ffffffffffffffa0 == (longlong *)0x0)) {
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027e3cd8;
      if (DAT_027e3cd8 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar2;
      local_110 = '\x01';
      local_108 = 0;
      local_100 = '\0';
      FUN_00d31230(&local_108,&local_118);
      local_90 = 0;
      if (local_58 == '\0') {
        if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_90 = '\x01';
      local_98 = in_stack_ffffffffffffffa0;
      FUN_01d64eb0();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      uVar9 = 0;
      FUN_01d66ab0();
    }
    else {
      local_78 = (longlong *)CONCAT44(local_78._4_4_,*(float *)(this + 0x1dc));
      if (NAN(*(float *)(this + 0x1dc))) {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar11 = FUN_01742280();
        local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar11);
      }
      FUN_0173ba80();
      pvVar8 = _pthread_getspecific(param_1);
      plVar7 = in_stack_ffffffffffffffa0;
      if ((pvVar8 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar7 = (longlong *)
                 in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      iVar4 = (**(code **)(*plVar7 + 0x3a8))(local_78._0_4_);
      if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        param_1 = (pthread_key_t)local_70;
      }
      fVar10 = (float)FUN_0173e3a0();
      iVar5 = FUN_00e7d780(fVar10 / DAT_023908e0);
      plVar7 = *(longlong **)(this + 0x1b0);
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        plVar7 = *(longlong **)(this + 0x1b0);
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar7 = (longlong *)plVar7[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      lVar6 = DAT_026e3bc8;
      if (DAT_026e3bc8 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar6;
      local_f0 = '\x01';
      local_e8 = 0;
      local_e0 = '\0';
      (**(code **)(*plVar7 + 0x3c0))(&local_f8,iVar4 - iVar5,&local_e8);
      if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      local_78 = in_stack_ffffffffffffffa0;
      plVar7 = (longlong *)FUN_00e8fc40();
      FUN_00022d50();
      uVar11 = (**(code **)(*plVar7 + 0x18))();
      lVar6 = DAT_027e3ce0;
      local_d0 = '\0';
      local_d8 = in_stack_ffffffffffffffa0;
      if (DAT_027e3ce0 != 0) {
        uVar11 = FUN_00d50b00();
      }
      FUN_00ca0840(uVar11,&stack0xffffffffffffffa0);
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027e3ce8;
      local_c8 = lVar2;
      local_c0 = '\x01';
      if (DAT_027e3ce8 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar3;
      local_b0 = '\x01';
      local_a0 = '\0';
      local_a8 = plVar7;
      FUN_00d31230(&local_a8,&local_b8);
      local_80 = 0;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar6;
      FUN_01d64eb0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d66ab0(*(undefined4 *)(this + 0x1dc));
      FUN_00d50b20();
      uVar9 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
      if (local_78 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01b15b3d;
  }
LAB_01b15b3b:
  uVar9 = 0;
LAB_01b15b3d:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9 & 0xffffffff;
}




// ==================================================
// @01a20ee0 (1869 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *arg1;
  longlong *this;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  longlong *local_d8;
  char local_d0;
  float local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong *local_40;
  char local_38;
  
  iVar3 = FUN_01d3a5a0();
  if (iVar3 != 1) {
LAB_01a21104:
    FUN_01e459c0();
    return;
  }
  iVar3 = FUN_01d3b630();
  if (iVar3 != 1) {
    iVar3 = FUN_01d3b630();
    if (iVar3 == 2) {
      FUN_01a1d6e0();
      (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                  *local_d8 + 0x38))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if (local_d0 != '\0') {
        FUN_00d50b20();
      }
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_01d3abf0();
      uVar11 = FUN_01e466c0();
      uVar12 = (**(code **)(*this + 0x4d8))();
      FUN_01a1d6e0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01d62b10();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b00();
      local_58 = (float)uVar12;
      uStack_54 = (undefined4)((ulonglong)uVar12 >> 0x20);
      uStack_50 = (undefined4)extraout_XMM0_Qb_00;
      uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar1._8_8_ = extraout_XMM0_Qb;
      auVar1._0_8_ = uVar11;
      auVar13._4_4_ = uStack_54;
      auVar13._0_4_ = local_58 + param_2 + DAT_02390d00 + DAT_023b8b2c;
      auVar13._8_4_ = uStack_50;
      auVar13._12_4_ = uStack_4c;
      auVar13 = blendps(auVar1,auVar13,1);
      FUN_01d5ef60(auVar13._0_8_,_DAT_02420ca0);
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_01d62b80();
      (**(code **)(*this + 0x620))();
      FUN_00d50b20();
      return;
    }
    goto LAB_01a21104;
  }
  FUN_01d3abf0();
  FUN_01e466c0();
  (**(code **)(*this + 0x928))();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  (**(code **)(*this + 0x920))();
  pvVar7 = _pthread_getspecific(param_1);
  plVar9 = local_40;
  if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
    plVar9 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
  }
  iVar3 = (**(code **)(*plVar9 + 0x3a8))();
  lVar8 = FUN_00e7b4e0();
  this[0x28] = lVar8;
  (**(code **)(*this + 0x620))();
  iVar4 = FUN_01d3b620();
  plVar9 = (longlong *)(ulonglong)(1 - iVar3);
  while( true ) {
    (**(code **)(*this + 0x658))();
    plVar10 = (longlong *)*arg1;
    if (plVar10 != local_40) break;
    if (((char)arg1[1] == '\0') && (local_40 != (longlong *)0x0)) {
      if (local_38 == '\0') {
        FUN_00d50b00();
        goto LAB_01a212dc;
      }
LAB_01a21292:
      *(undefined1 *)(arg1 + 1) = 1;
      local_38 = '\0';
    }
    if (*arg1 == 0) goto LAB_01a213ea;
LAB_01a212ee:
    iVar5 = FUN_01d3a5a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 6) goto LAB_01a213fe;
    iVar5 = FUN_01d3a5a0();
    if (iVar5 == 5) {
      FUN_01d3abf0();
      FUN_01e466c0();
      FUN_01e3f820();
      cVar2 = FUN_00d05410();
      if (cVar2 == '\0') {
        lVar8 = FUN_00e7b4e0();
      }
      else {
        (**(code **)(*this + 0x920))();
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
        plVar10 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar9 = local_40;
          plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        iVar5 = (**(code **)(*plVar10 + 0x3a8))();
        if (iVar5 < iVar3) {
          lVar8 = FUN_00e7b4e0();
        }
        else {
          lVar8 = FUN_00e7b4e0();
        }
      }
      this[0x28] = lVar8;
      (**(code **)(*this + 0x620))();
    }
  }
  lVar8 = arg1[1];
  if (local_38 != '\0') {
    *arg1 = (longlong)local_40;
    if (((char)lVar8 != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_01a21292;
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  *arg1 = (longlong)local_40;
  if (((char)lVar8 != '\0') && (plVar10 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a212dc:
  *(undefined1 *)(arg1 + 1) = 1;
  if (*arg1 != 0) goto LAB_01a212ee;
LAB_01a213ea:
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a213fe:
  if ((*(int *)((longlong)this + 0x144) == 0) || (*arg1 == 0)) goto LAB_01a2161b;
  uVar6 = FUN_01d3b590();
  if (*(int *)((longlong)this + 0x144) == 1) {
    if (iVar4 < 2) {
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xdf8))(1,(uVar6 & 4) >> 2,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xdf8))(1,1,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      FUN_01a1d6e0();
      (**(code **)(*local_40 + 0xe00))(1,(uVar6 & 4) >> 2,1);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01a1d6e0();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((uVar6 & 4) == 0) {
      (**(code **)(*local_40 + 0xda0))();
    }
    iVar3 = *(int *)((longlong)this + 0x144);
    if (iVar3 == 0) {
      if (local_40 == (longlong *)0x0) goto LAB_01a215fc;
    }
    else {
      do {
        (**(code **)(*local_40 + 0xdf8))(1,1,1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00d50b20();
  }
LAB_01a215fc:
  lVar8 = FUN_00e7b4e0();
  this[0x28] = lVar8;
  (**(code **)(*this + 0x620))();
LAB_01a2161b:
  FUN_00d50b20();
  return;
}




// ==================================================
// @019b7a60 (1826 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  uint uVar1;
  code *pcVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  code *in_RCX;
  code *pcVar8;
  code *pcVar9;
  longlong *this;
  code *pcVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  char local_a0;
  code *local_88;
  char local_80;
  longlong local_70;
  char local_68;
  code *local_48;
  char local_40;
  
  pcVar3 = local_48;
  pcVar8 = in_RCX;
  if (param_2 == 0) {
    param_1 = (**(code **)(*this + 0xda0))();
  }
  (**(code **)(*this + 0x9b0))(param_1,(ulonglong)in_RCX & 0xff);
  if (local_40 == '\0') {
    if (local_48 == (code *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (code *)0x0) {
    return;
  }
  uVar1 = *(uint *)(local_48 + 0xc);
  if ((ulonglong)uVar1 == 0) goto LAB_019b8102;
  (**(code **)(*this + 0xa28))();
  local_88 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (code *)0x0) {
      local_88 = (code *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  local_80 = '\x01';
  if ((DAT_027c0160 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    pcVar8 = FUN_0015ecf0;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (local_88 == (code *)0x0) {
LAB_019b7b55:
    pcVar9 = DAT_02802688;
    local_80 = DAT_02802690;
    if (DAT_02802690 != '\0') goto LAB_019b7ba9;
LAB_019b7bb8:
    if (pcVar9 != (code *)0x0) goto LAB_019b7bc1;
  }
  else {
    (**(code **)(*(longlong *)local_88 + 0x360))();
    cVar4 = FUN_00e85ea0();
    pcVar9 = local_88;
    if (cVar4 == '\0') goto LAB_019b7b55;
LAB_019b7ba9:
    if (pcVar9 == (code *)0x0) goto LAB_019b7bb8;
    FUN_00d50b00();
LAB_019b7bc1:
    uVar15 = FUN_0025e9a0();
    if ((local_40 == '\0') && (local_48 != (code *)0x0)) {
      uVar15 = FUN_00d50b00();
    }
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        pcVar2 = *(code **)(*(longlong *)(pcVar3 + 0x10) + uVar11 * 8);
        if (pcVar2 != (code *)0x0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_40 != '\0') && (local_48 != (code *)0x0)) {
          FUN_00d50b20();
        }
        if (local_48 == (code *)0x0) {
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar15 = FUN_0125a2c0();
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          pcVar10 = local_88;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            pcVar8 = local_88;
            pcVar10 = *(code **)(local_88 + ((ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4) * 8);
          }
          (**(code **)(*(longlong *)pcVar10 + 0x3a8))(uVar15);
        }
        else {
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_40 == '\0') {
            if (local_48 != (code *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01507f00();
          if (local_48 != (code *)0x0) {
            FUN_00d50b20();
          }
        }
        pvVar6 = _pthread_getspecific((pthread_key_t)pcVar8);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          pcVar8 = pcVar9;
        }
        cVar4 = FUN_01751560();
        uVar15 = extraout_XMM0_Da;
        if (cVar4 != '\0') {
          local_40 = '\0';
          uVar15 = FUN_00d21140();
          local_48 = pcVar2;
        }
        if (pcVar2 != (code *)0x0) {
          uVar15 = FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
    }
    uVar11 = (ulonglong)*(uint *)(pcVar3 + 0xc);
    if (uVar11 == 0) {
LAB_019b80d2:
      FUN_00d50b20();
    }
    else {
      local_a0 = (char)param_2;
      if ((local_a0 == '\0') || (param_3 == '\0')) {
LAB_019b8039:
        (**(code **)(*this + 0xdb8))(uVar15,1);
        goto LAB_019b80d2;
      }
      if (0 < (int)*(uint *)(pcVar3 + 0xc)) {
        bVar13 = true;
        uVar12 = 1;
        do {
          lVar7 = *(longlong *)(*(longlong *)(pcVar3 + 0x10) + -8 + uVar12 * 8);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*this + 0xe20))();
          cVar4 = FUN_00d23d70();
          uVar15 = extraout_XMM0_Da_00;
          if ((local_68 != '\0') && (local_70 != 0)) {
            uVar15 = FUN_00d50b20();
          }
          if (lVar7 != 0) {
            uVar15 = FUN_00d50b20();
          }
          if (cVar4 == '\0') {
            if (bVar13) goto LAB_019b8039;
            break;
          }
          bVar13 = uVar12 < uVar11;
          bVar14 = uVar12 != uVar11;
          uVar12 = uVar12 + 1;
        } while (bVar14);
      }
      (**(code **)(*this + 0xdc0))(uVar15,1);
      if (pcVar3 != (code *)0x0) goto LAB_019b80d2;
    }
    if (local_80 != '\0') {
      FUN_00d50b20();
    }
  }
  if (local_88 != (code *)0x0) {
    FUN_00d50b20();
  }
LAB_019b8102:
  FUN_00d50b20();
  return;
}




// ==================================================
// @0199b3a0 (1793 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *this;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  (**(code **)("/usr/lib/libobjc.A.dylib" + *this + 0x18))();
  if ((longlong *)this[0x69] == (longlong *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*(longlong *)this[0x69] + 0x50))();
  if (cVar2 != '\0') {
    return;
  }
  if (*(char *)((longlong)this + 0x4dd) == '\0') {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c150(DAT_0238fee8);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0142c160(0);
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265ae0();
  lVar1 = this[0x70];
  lVar4 = lVar1;
  if (lVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar4 = 0;
        goto LAB_0199b4d7;
      }
      FUN_00d50b00();
      lVar1 = this[0x70];
      this[0x70] = local_38;
      lVar4 = local_38;
    }
    else {
      local_30 = '\0';
      lVar4 = local_38;
LAB_0199b4d7:
      this[0x70] = lVar4;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  lVar1 = this[0x6f];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01539260();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01264970();
  FUN_015392e0(this[0x74]);
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_40 = 0;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  local_40 = '\x01';
  local_48 = local_98;
  pVar7 = 0;
  (**(code **)((longlong)&linkedit_data_command_000013f8.dataoff + *this))(0,&local_48);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar9 = FUN_01264970();
  lVar1 = *(longlong *)(local_c8 + 0x28);
  if (lVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == 0) {
        *(undefined8 *)(local_c8 + 0x28) = 0;
      }
      else {
        uVar9 = FUN_00d50b00();
        lVar1 = *(longlong *)(local_c8 + 0x28);
        *(longlong *)(local_c8 + 0x28) = local_38;
      }
    }
    else {
      local_30 = '\0';
      *(longlong *)(local_c8 + 0x28) = local_38;
    }
    if (lVar1 != 0) {
      uVar9 = FUN_00d50b20();
    }
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    uVar9 = FUN_00d50b20();
  }
  lVar1 = this[0x70];
  if (lVar1 != 0) {
    uVar9 = FUN_00d50b00();
  }
  (**(code **)("/usr/lib/libobjc.A.dylib" + *this))(uVar9,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_016779b0();
  lVar4 = this[0x71];
  lVar6 = lVar4;
  if (lVar4 == local_38) goto LAB_0199b8a6;
  if (local_30 == '\0') {
    if (local_38 == 0) {
      lVar6 = 0;
      goto LAB_0199b85b;
    }
    FUN_00d50b00();
    lVar4 = this[0x71];
    this[0x71] = local_38;
    lVar6 = local_38;
  }
  else {
    local_30 = '\0';
    lVar6 = local_38;
LAB_0199b85b:
    this[0x71] = lVar6;
  }
  pVar7 = (pthread_key_t)lVar4;
  if (lVar4 != 0) {
    FUN_00d50b20();
    lVar6 = local_38;
  }
LAB_0199b8a6:
  if ((local_30 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01264170();
  FUN_01677b30(0,uVar8,DAT_0238fee8);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar5 = (longlong *)FUN_00e8b990();
  lVar1 = this[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x3a0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1fa0();
  plVar5 = (longlong *)this[0x69];
  lVar1 = this[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0xf0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a30260 (1727 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong *this;
  longlong *plVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 local_f8 [8];
  undefined1 local_f0;
  undefined1 local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30 [8];
  
  FUN_01a58e40();
  if (local_38 == (longlong *)0x0) {
    bVar10 = true;
  }
  else {
    FUN_01a58e40();
    bVar10 = *(int *)((longlong)local_48 + 0xc) == 0;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    uVar8 = 0;
  }
  else {
    FUN_01a58e40();
    local_88 = local_38;
    local_80 = 0;
    if (local_30[0] == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30[0] = '\0';
    }
    local_80 = '\x01';
    uVar3 = (**(code **)(*this + 0x488))();
    uVar8 = (ulonglong)uVar3;
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)uVar3 & param_2) != 0) {
      uVar11 = FUN_01caec40();
      local_c8 = DAT_027e1e88;
      if (DAT_027e1e88 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_c0 = '\x01';
      FUN_000175c0(uVar11,&local_c8);
      plVar2 = local_38;
      if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        FUN_01a58dc0();
        plVar2 = local_38;
        if (local_30[0] == '\0') {
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30[0] = '\0';
        }
        local_e0 = 1;
        FUN_01a58dc0();
        (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0xa00))();
        plVar9 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01a58e40();
        local_a8 = CONCAT71(uStack_67,local_68);
        if (local_60 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_a0 = '\x01';
        FUN_01a58dc0();
        uVar11 = (**(code **)(*local_78 + 0xd08))();
        pVar7 = 1;
        FUN_01a29bc0(1,&local_a8,uVar11,0);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01a58dc0();
        plVar2 = local_38;
        if (local_30[0] == '\0') {
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30[0] = '\0';
        }
        FUN_01a58dc0();
        (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0xa00))();
        plVar9 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01a58e40();
        local_b8 = CONCAT71(uStack_67,local_68);
        if (local_60 == '\0') {
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_b0 = '\x01';
        FUN_01a58dc0();
        (**(code **)(*local_d8 + 0xe58))();
        plVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_f0 = 1;
        pVar7 = 0;
        FUN_01a26560(DAT_02390124,&local_b8,local_f8,0);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01a58f00();
      FUN_00d23310();
      plVar2 = local_38;
      local_58 = local_30[0];
      pcVar4 = &local_58;
      if (local_30[0] != '\0') {
        pcVar4 = local_30;
      }
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      plVar9 = plVar2;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x1a0))();
      if ((local_58 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a58dc0();
      plVar2 = local_48;
      FUN_01a58f00();
      FUN_00d23310();
      pcVar4 = local_30;
      if (local_30[0] == '\0') {
        pcVar4 = &local_68;
      }
      local_68 = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = 0;
      if ((local_68 == '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_98 = local_38;
      local_90 = '\x01';
      (**(code **)("/usr/lib/libobjc.A.dylib" + *plVar2 + 8))();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
    }
  }
  return uVar8 & 0xffffffff;
}




// ==================================================
// @01a30e70 (1727 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  ulonglong uVar8;
  longlong *this;
  longlong *plVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined1 local_f8 [8];
  undefined1 local_f0;
  undefined1 local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30 [8];
  
  FUN_01a58e40();
  if (local_38 == (longlong *)0x0) {
    bVar10 = true;
  }
  else {
    FUN_01a58e40();
    bVar10 = *(int *)((longlong)local_48 + 0xc) == 0;
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar10) {
    uVar8 = 0;
  }
  else {
    FUN_01a58e40();
    local_88 = local_38;
    local_80 = 0;
    if (local_30[0] == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30[0] = '\0';
    }
    local_80 = '\x01';
    uVar3 = (**(code **)(*this + 0x488))();
    uVar8 = (ulonglong)uVar3;
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((byte)uVar3 & param_2) != 0) {
      uVar11 = FUN_01caec40();
      local_c8 = DAT_027e1e88;
      if (DAT_027e1e88 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_c0 = '\x01';
      FUN_000175c0(uVar11,&local_c8);
      plVar2 = local_38;
      if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        FUN_01a58dc0();
        plVar2 = local_38;
        if (local_30[0] == '\0') {
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30[0] = '\0';
        }
        local_e0 = 1;
        FUN_01a58dc0();
        (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0xa00))();
        plVar9 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01a58e40();
        local_a8 = CONCAT71(uStack_67,local_68);
        if (local_60 == '\0') {
          if (local_a8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_a0 = '\x01';
        FUN_01a58dc0();
        uVar11 = (**(code **)(*local_78 + 0xd08))();
        pVar7 = 0xffffffff;
        FUN_01a29bc0(0xffffffff,&local_a8,uVar11,0);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01a58dc0();
        plVar2 = local_38;
        if (local_30[0] == '\0') {
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_30[0] = '\0';
        }
        FUN_01a58dc0();
        (**(code **)(*(longlong *)CONCAT71(uStack_57,local_58) + 0xa00))();
        plVar9 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_01a58e40();
        local_b8 = CONCAT71(uStack_67,local_68);
        if (local_60 == '\0') {
          if (local_b8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_b0 = '\x01';
        FUN_01a58dc0();
        (**(code **)(*local_d8 + 0xe58))();
        plVar1 = local_78;
        if (local_70 == '\0') {
          if (local_78 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_f0 = 1;
        pVar7 = 0;
        FUN_01a26560(DAT_02390d00,&local_b8,local_f8,0);
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
          FUN_00d50b20();
        }
        if (plVar9 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01a58f00();
      FUN_00d23310();
      plVar2 = local_38;
      local_58 = local_30[0];
      pcVar4 = &local_58;
      if (local_30[0] != '\0') {
        pcVar4 = local_30;
      }
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar5 = _pthread_getspecific(pVar7);
      plVar9 = plVar2;
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        plVar9 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar9 + 0x1a0))();
      if ((local_58 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01a58dc0();
      plVar2 = local_48;
      FUN_01a58f00();
      FUN_00d23310();
      pcVar4 = local_30;
      if (local_30[0] == '\0') {
        pcVar4 = &local_68;
      }
      local_68 = local_30[0];
      *pcVar4 = '\0';
      if ((local_30[0] != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = 0;
      if ((local_68 == '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      local_98 = local_38;
      local_90 = '\x01';
      (**(code **)("/usr/lib/libobjc.A.dylib" + *plVar2 + 8))();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((ulonglong)local_38 >> 8),1);
    }
  }
  return uVar8 & 0xffffffff;
}




// ==================================================
// @019ba840 (1713 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined4 in_EDX;
  longlong *plVar7;
  longlong *arg1;
  longlong *this;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 auVar14 [16];
  float fVar15;
  undefined4 uVar16;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined4 uStack_104;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  undefined4 local_c4;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_98;
  longlong local_90;
  char local_88;
  longlong *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *local_48;
  char local_40;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar15 = (float)param_2;
  if (*arg1 != 0) {
    local_c4 = in_EDX;
    (**(code **)(*this + 0x9b0))(param_1,0);
    local_b8 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_b8 = '\x01';
    local_c0 = local_90;
    FUN_019bb310();
    local_98 = local_48;
    if (local_48 == (longlong *)0x0) {
      bVar5 = true;
      local_98 = (longlong *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar5 = false;
    }
    else {
      local_40 = '\0';
      bVar5 = false;
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_0197dd90();
    local_a8 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_a8 = '\x01';
    local_b0 = local_90;
    uVar13 = FUN_00243390();
    local_78 = local_48;
    if (local_48 == (longlong *)0x0) {
      bVar3 = true;
      local_78 = (longlong *)0x0;
    }
    else if (local_40 == '\0') {
      uVar13 = FUN_00d50b00();
      bVar3 = false;
    }
    else {
      local_40 = '\0';
      bVar3 = false;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    uVar8 = *(uint *)((longlong)local_78 + 0xc);
    uVar9 = (ulonglong)uVar8;
    if ((int)uVar8 < 1) {
      plVar7 = (longlong *)0x0;
      bVar4 = false;
    }
    else {
      lVar10 = uVar9 + 1;
      bVar4 = false;
      plVar7 = (longlong *)0x0;
      do {
        uVar8 = uVar8 - 1;
        plVar11 = *(longlong **)(local_78[2] + (ulonglong)uVar8 * 8);
        local_68 = SUB84(plVar7,0);
        uStack_64 = (undefined4)((ulonglong)plVar7 >> 0x20);
        if (plVar7 == plVar11) {
          if ((!bVar4) && (plVar7 != (longlong *)0x0)) {
            bVar4 = true;
            FUN_00d50b00();
            goto LAB_019bab1f;
          }
          if (plVar7 != (longlong *)0x0) goto LAB_019baae9;
LAB_019baa70:
          plVar7 = (longlong *)0x0;
LAB_019baa7a:
          uVar13 = FUN_00d23620();
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar4) && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar7 = plVar11;
          bVar4 = true;
          if (plVar11 == (longlong *)0x0) goto LAB_019baa70;
LAB_019baae9:
          local_68 = SUB84(plVar7,0);
          uStack_64 = (undefined4)((ulonglong)plVar7 >> 0x20);
LAB_019bab1f:
          plVar7 = (longlong *)CONCAT44(uStack_64,local_68);
          local_40 = '\0';
          cVar6 = FUN_00e3a2e0();
          uVar13 = extraout_XMM0_Qa;
          local_48 = plVar7;
          if (cVar6 == '\0') goto LAB_019baa7a;
        }
        lVar10 = lVar10 + -1;
      } while (1 < lVar10);
      uVar9 = (ulonglong)*(uint *)((longlong)local_78 + 0xc);
    }
    bVar1 = false;
    plVar11 = (longlong *)0x0;
    do {
      if (((char)local_c4 == '\0') || ((int)uVar9 < 1)) goto LAB_019bae78;
      uVar9 = (ulonglong)((int)uVar9 - 1);
      plVar12 = *(longlong **)(local_78[2] + uVar9 * 8);
      if (plVar7 == plVar12) {
        plVar12 = plVar7;
        bVar2 = bVar4;
        if ((!bVar4) && (plVar7 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b00();
          bVar2 = true;
        }
      }
      else {
        if (plVar12 != (longlong *)0x0) {
          uVar13 = FUN_00d50b00();
        }
        bVar2 = true;
        if ((bVar4) && (plVar7 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      bVar4 = bVar2;
      plVar7 = plVar12;
      local_f0 = '\0';
      local_f8 = plVar7;
      uVar13 = (**(code **)(*this + 0xab0))(uVar13,&local_f8);
      plVar12 = local_48;
      if (local_48 == plVar11) {
        plVar12 = plVar11;
        bVar2 = bVar1;
        if ((!bVar1) && (local_48 != (longlong *)0x0)) {
          if (local_40 != '\0') goto LAB_019bac94;
          uVar13 = FUN_00d50b00();
          bVar2 = true;
        }
LAB_019bacd9:
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
      }
      else {
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            uVar13 = FUN_00d50b00();
          }
          bVar2 = true;
          if ((bVar1) && (plVar11 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          goto LAB_019bacd9;
        }
        if ((bVar1) && (plVar11 != (longlong *)0x0)) {
          uVar13 = FUN_00d50b20();
        }
LAB_019bac94:
        local_40 = '\0';
        bVar2 = true;
      }
      if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      bVar1 = bVar2;
      if (plVar12 == (longlong *)0x0) {
        local_e0 = '\0';
        local_e8 = plVar7;
        (**(code **)(*this + 0xae8))(uVar13,&local_e8);
        if (local_48 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
        }
        else if (local_40 == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          plVar12 = local_48;
        }
        else {
          local_40 = '\0';
          bVar2 = true;
          plVar12 = local_48;
        }
        if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar1 = bVar2;
        if (plVar12 == (longlong *)0x0) {
          plVar12 = (longlong *)0x0;
          break;
        }
      }
      FUN_01e436c0();
      (**(code **)(*plVar12 + 0x4d8))();
      cVar6 = FUN_00d05440();
      plVar11 = plVar12;
      uVar13 = extraout_XMM0_Qa_00;
    } while (cVar6 != '\0');
    uVar13 = FUN_0197dd80();
    (**(code **)(*this + 0xa78))((double)(float)uVar13,SUB84((double)fVar15,0),0);
    auVar14._4_4_ = uVar16;
    auVar14._0_4_ = fVar15;
    auVar14._8_4_ = in_XMM1_Dc;
    auVar14._12_4_ = in_XMM1_Dd;
    uStack_104 = (undefined4)((ulonglong)uVar13 >> 0x20);
    auVar14 = insertps(auVar14,uStack_104,0xc);
    uVar13 = (**(code **)(*this + 0xaa0))(auVar14._0_8_);
    plVar11 = plVar12;
LAB_019bae78:
    local_d8 = local_78;
    local_d0 = '\0';
    (**(code **)(*this + 0xdc8))(uVar13,1);
    if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (plVar7 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar1) && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    if (!bVar5 && local_98 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01a33850 (1673 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *arg1;
  bool bVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  float fVar13;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 extraout_XMM0_Qb_03;
  float fVar15;
  float fVar18;
  float in_XMM1_Dc;
  float fVar19;
  float fVar20;
  float in_XMM1_Dd;
  float fVar21;
  float fVar22;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float local_128;
  float fStack_124;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  undefined8 uStack_d0;
  longlong *local_c0;
  char local_b8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  fVar23 = (float)param_2;
  FUN_01a58dc0();
  local_38 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_58 = 1;
    local_38 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_58 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_01a338c4;
      FUN_00d50b20();
    }
    local_58 = 0;
  }
LAB_01a338c4:
  FUN_01e42030();
  plVar1 = local_48;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    local_5c = DAT_02390124;
  }
  else {
    FUN_01e42030();
    (**(code **)(*local_c0 + 0x9a0))();
    local_5c = (float)(**(code **)(*local_48 + 0x448))();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_38 + 0x7b0))();
  local_50 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_54 = 1;
    local_50 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_54 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_01a339bf;
      FUN_00d50b20();
    }
    local_54 = 0;
  }
LAB_01a339bf:
  FUN_01cf74c0();
  local_e8 = 0;
  uStack_e0 = 0;
  bVar7 = true;
  if (*arg1 != 0) {
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 != 1) || (iVar5 = FUN_01d3b630(), iVar5 != 1)) {
      FUN_01cf74c0();
      goto LAB_01a33dd1;
    }
    if (*arg1 != 0) {
      iVar5 = FUN_01d3b620();
      if (iVar5 == 2) {
        (**(code **)(*local_38 + 0xcc0))();
        goto LAB_01a33dd1;
      }
      if (*arg1 != 0) {
        FUN_01d3abf0();
        local_e8 = FUN_01e466c0();
        bVar7 = false;
        uStack_e0 = extraout_XMM0_Qb;
      }
    }
  }
  local_d8 = (undefined1  [8])FUN_01cf5cf0();
  uStack_d0 = extraout_XMM0_Qb_00;
  uVar9 = FUN_01e3f820();
  fVar15 = fVar23;
  fVar18 = fVar8;
  fVar19 = in_XMM1_Dc;
  fVar21 = in_XMM1_Dd;
  FUN_01e436c0();
  fVar13 = fVar15;
  fVar14 = fVar18;
  fVar20 = fVar19;
  fVar22 = fVar21;
  FUN_01e436c0();
  auVar11._0_4_ = fVar23 - fVar15;
  auVar11._4_4_ = fVar8 - fVar18;
  auVar11._8_4_ = in_XMM1_Dc - fVar19;
  auVar11._12_4_ = in_XMM1_Dd - fVar21;
  auVar10._0_4_ = fVar23 - fVar13;
  auVar10._4_4_ = fVar8 - fVar14;
  auVar10._8_4_ = in_XMM1_Dc - fVar20;
  auVar10._12_4_ = in_XMM1_Dd - fVar22;
  blendps(auVar10,auVar11,0xd);
  local_128 = (float)uVar9;
  fStack_124 = (float)((ulonglong)uVar9 >> 0x20);
  fVar23 = auVar11._0_4_ + local_128 + DAT_02390d00;
LAB_01a33b30:
  do {
    (**(code **)(*local_38 + 0x658))();
    plVar3 = local_48;
    plVar1 = (longlong *)*arg1;
    if (plVar1 == local_48) {
      if (((char)arg1[1] == '\0') && (local_48 != (longlong *)0x0)) {
        if (local_40 == '\0') {
          FUN_00d50b00();
          goto LAB_01a33bdd;
        }
        goto LAB_01a33b92;
      }
LAB_01a33b9b:
      if (*arg1 != 0) goto LAB_01a33bef;
LAB_01a33d7f:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a33d93:
      local_80 = *arg1;
      local_78 = '\0';
      FUN_0199eb40();
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cf74c0();
      goto LAB_01a33dd1;
    }
    lVar2 = arg1[1];
    if (local_40 != '\0') {
      *arg1 = (longlong)local_48;
      if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01a33b92:
      *(undefined1 *)(arg1 + 1) = 1;
      local_40 = '\0';
      goto LAB_01a33b9b;
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *arg1 = (longlong)plVar3;
    if (((char)lVar2 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01a33bdd:
    *(undefined1 *)(arg1 + 1) = 1;
    if (*arg1 == 0) goto LAB_01a33d7f;
LAB_01a33bef:
    iVar5 = FUN_01d3a5a0();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (iVar5 == 6) goto LAB_01a33d93;
    iVar5 = FUN_01d3a5a0();
    if (iVar5 == 5) {
      if (bVar7) {
        FUN_01d3abf0();
        bVar7 = false;
        local_e8 = FUN_01e466c0();
        uStack_e0 = extraout_XMM0_Qb_01;
        goto LAB_01a33b30;
      }
      FUN_01d3abf0();
      uVar9 = FUN_01e466c0();
      fVar13 = (float)((ulonglong)uVar9 >> 0x20) - local_e8._4_4_;
      fVar14 = (float)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) - uStack_e0._4_4_;
      fVar8 = ((float)uVar9 - (float)local_e8) / local_5c;
      auVar24._0_4_ = (uint)fVar8 & _DAT_023945e0;
      auVar24._4_4_ = (uint)fVar13 & _UNK_023945e4;
      auVar24._8_4_ = (uint)((float)extraout_XMM0_Qb_02 - (float)uStack_e0) & _UNK_023945e8;
      auVar24._12_4_ = (uint)fVar14 & _UNK_023945ec;
      auVar25._4_12_ = SUB1612(auVar24 | ZEXT416(DAT_02394dc8),4);
      auVar25._0_4_ = SUB164(auVar24 | ZEXT416(DAT_02394dc8),0) + fVar8;
      auVar17._0_12_ = ZEXT812(0);
      auVar17._12_4_ = 0;
      auVar11 = roundss(auVar17,auVar25,0xb);
      auVar26._0_4_ = (uint)(fVar13 / local_5c) & _DAT_023945e0;
      auVar26._4_4_ = (uint)fVar13 & _UNK_023945e4;
      auVar26._8_4_ = (uint)fVar14 & _UNK_023945e8;
      auVar26._12_4_ = (uint)fVar14 & _UNK_023945ec;
      auVar27._4_12_ = SUB1612(auVar26 | ZEXT416(DAT_02394dc8),4);
      auVar27._0_4_ = SUB164(auVar26 | ZEXT416(DAT_02394dc8),0) + fVar13 / local_5c;
      auVar16._0_12_ = ZEXT812(0);
      auVar16._12_4_ = 0;
      auVar17 = roundss(auVar16,auVar27,0xb);
      auVar28._4_4_ = local_d8._4_4_;
      auVar28._0_4_ = local_d8._4_4_;
      auVar28._8_4_ = uStack_d0._4_4_;
      auVar28._12_4_ = uStack_d0._4_4_;
      fVar8 = (float)local_d8._0_4_ - auVar11._0_4_ * local_5c;
      auVar29._4_12_ = auVar28._4_12_;
      auVar29._0_4_ = (float)local_d8._4_4_ - auVar17._0_4_ * local_5c;
      auVar12._4_4_ = local_d8._4_4_;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = (undefined4)uStack_d0;
      auVar12._12_4_ = uStack_d0._4_4_;
      _local_d8 = insertps(auVar12,auVar29,0x10);
      cVar4 = FUN_00d05410();
      if (cVar4 == '\0') {
        if ((((auVar10._4_4_ != DAT_0239424c) || (NAN(auVar10._4_4_) || NAN(DAT_0239424c))) ||
            (fVar8 < fStack_124)) || (fVar23 <= fVar8)) {
          bVar7 = false;
          local_d8 = (undefined1  [8])FUN_01cf5cf0();
          uStack_d0 = extraout_XMM0_Qb_03;
          local_e8 = uVar9;
          uStack_e0 = extraout_XMM0_Qb_02;
          goto LAB_01a33b30;
        }
      }
      bVar7 = false;
      FUN_01cf7140();
      goto LAB_01a33b30;
    }
    iVar5 = FUN_01d3a5a0();
    bVar7 = false;
  } while (iVar5 != 4);
  FUN_01cf74c0();
  uVar6 = FUN_01d3b590();
  if ((uVar6 & 4) == 0) {
    local_68 = 0;
    lVar2 = local_38[0x82];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_70 = lVar2;
    uVar9 = (**(code **)(*local_38 + 0xed8))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      uVar9 = FUN_00d50b20();
    }
    local_90 = 0;
    local_88 = '\0';
    (**(code **)(*(longlong *)local_38[0x82] + 0x380))(uVar9,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_01a33dd1:
  if ((char)local_54 == '\0' && local_50 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_58 == '\0') {
    FUN_00d50b20();
  }
  return 1;
}




// ==================================================
// @01b1d080 (1647 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  ulonglong uVar10;
  longlong *arg1;
  longlong this;
  longlong *local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this + 0x315) == '\0') || (*(char *)(this + 0x316) == '\0')) {
LAB_01b1d1e1:
    uVar10 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b1d1e1;
      FUN_00d50b00();
      if (*arg1 != 0) goto LAB_01b1d0f4;
LAB_01b1d1da:
      uVar10 = 0;
    }
    else {
      if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b1d1e1;
      if (*arg1 == 0) goto LAB_01b1d1da;
LAB_01b1d0f4:
      if (param_2 == '\0') {
        FUN_01caeae0();
        local_138 = arg1;
        if (local_58 == '\0') {
          if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_01b1d223;
          }
        }
        else if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
LAB_01b1d223:
          puVar5 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar9 = 0x25795a8;
          *puVar5 = &DAT_025795a8;
          (*DAT_025795c0)();
          if (*(int *)(this + 0x194) == -1000000) {
            pvVar6 = _pthread_getspecific(pVar9);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar8 = (longlong *)
                       in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            lVar7 = DAT_027e45c8;
            if (DAT_027e45c8 != 0) {
              FUN_00d50b00();
            }
            local_128 = lVar7;
            local_120 = '\x01';
            local_118 = 0;
            local_110 = '\0';
            (**(code **)(*plVar8 + 0x3c0))(&local_128,0x3c,&local_118);
            if (local_58 == '\0') {
              if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00d8dbf0();
            if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            pvVar6 = _pthread_getspecific(pVar9);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
              plVar8 = (longlong *)
                       in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
            }
            lVar7 = DAT_027e45c8;
            uVar1 = *(undefined4 *)(this + 0x194);
            if (DAT_027e45c8 != 0) {
              FUN_00d50b00();
            }
            local_108 = lVar7;
            local_100 = '\x01';
            local_f8 = 0;
            local_f0 = '\0';
            (**(code **)(*plVar8 + 0x3c8))(&local_108,uVar1,&local_f8);
            if (local_58 == '\0') {
              if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            FUN_00d8dbf0();
            if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
          }
          plVar8 = (longlong *)FUN_00e8fc40();
          FUN_00022d50();
          (**(code **)(*plVar8 + 0x18))();
          lVar7 = DAT_027e3ce0;
          local_e0 = '\0';
          local_e8 = puVar5;
          if (DAT_027e3ce0 != 0) {
            FUN_00d50b00();
          }
          FUN_00ca0840();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          lVar4 = DAT_027e4590;
          if (DAT_027e4590 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_027e3d50;
          local_d8 = lVar4;
          local_d0 = '\x01';
          if (DAT_027e3d50 != 0) {
            FUN_00d50b00();
          }
          local_c8 = lVar3;
          local_c0 = '\x01';
          local_b0 = '\0';
          local_b8 = plVar8;
          FUN_00d31230(&local_b8,&local_c8);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          FUN_01d64eb0();
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          FUN_00d50b20();
          uVar10 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          FUN_00d50b20();
          goto LAB_01b1d6be;
        }
      }
      else {
        FUN_00d50b00();
        *(int *)(this + 0x2fc) = *(int *)(this + 0x2fc) + 1;
        FUN_01b40210();
        FUN_00d50b00();
        FUN_01acf890();
        if (this != 0) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01af6500();
        FUN_00d50b20();
      }
      uVar10 = CONCAT71((int7)((ulonglong)local_138 >> 8),1);
    }
LAB_01b1d6be:
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar2) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10 & 0xffffffff;
}




// ==================================================
// @01b1dbf0 (1618 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong this;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  longlong local_b0;
  char local_a8;
  longlong local_88;
  char local_80;
  longlong *local_50;
  undefined4 local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x290) == 0) {
    return;
  }
  FUN_01ad3cb0();
  plVar1 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  iVar2 = (**(code **)(**(longlong **)(this + 0x290) + 0xa88))();
  if (iVar2 != 0) {
    iVar2 = (**(code **)(**(longlong **)(this + 0x290) + 0xa88))();
    if (iVar2 == 1) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01740240();
      if ((char)local_48 == '\0') {
        if (local_50 == (longlong *)0x0) goto LAB_01b1e19c;
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_50 == (longlong *)0x0) goto LAB_01b1e19c;
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar8 = (**(code **)(**(longlong **)(this + 0x290) + 0x970))();
      local_48 = 1;
      local_50 = &DAT_024c5048;
      local_38 = 0;
      if (local_b0 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_40 = local_b0;
      local_38 = '\x01';
      FUN_00d8cb40(uVar8,&local_50);
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      FUN_01739510();
      if (local_88 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      local_50 = &DAT_024c5048;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017381f0();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    goto LAB_01b1e19c;
  }
  FUN_01af1380();
  if (*(int *)(this + 0x18c) == 2) {
    fVar7 = (float)(**(code **)(**(longlong **)(this + 0x290) + 0x930))();
    fVar6 = (float)FUN_01ae51a0();
    fVar7 = (fVar7 - fVar6) * _DAT_0241c6f4;
  }
  else {
    if (*(int *)(this + 0x18c) == 1) {
      fVar6 = (float)(**(code **)(**(longlong **)(this + 0x290) + 0x930))();
      fVar7 = 0.0;
      if (fVar6 <= DAT_02390124) goto LAB_01b1dfd8;
      fVar7 = (float)_logf(fVar6 * DAT_02394204);
      pvVar3 = _pthread_getspecific(param_1);
      plVar5 = plVar1;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
      fVar7 = fVar7 * DAT_02394208;
    }
    else {
      fVar7 = (float)(**(code **)(**(longlong **)(this + 0x290) + 0x930))();
      fVar6 = (float)FUN_01b1e460();
    }
    fVar7 = fVar7 - fVar6;
  }
LAB_01b1dfd8:
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  fVar9 = (float)(**(code **)(*plVar5 + 0x3a0))();
  fVar9 = fVar9 - DAT_027e30c0;
  pvVar3 = _pthread_getspecific(param_1);
  plVar5 = plVar1;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  fVar10 = (float)(**(code **)(*plVar5 + 0x3a0))();
  fVar10 = fVar10 + DAT_027e30c0;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01776680(~-(uint)(fVar6 + fVar7 < fVar10) & ~-(uint)(fVar9 < fVar6 + fVar7) & (uint)fVar7,
               DAT_027e30c0);
  if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01b07460();
  FUN_01ad37a0();
  FUN_01ad6540();
LAB_01b1e19c:
  (**(code **)(**(longlong **)(this + 0x290) + 0xa20))();
  plVar5 = *(longlong **)(this + 0x290);
  if ((plVar5 != (longlong *)0x0) && (FUN_00d50b00(), *(longlong *)(this + 0x290) != 0)) {
    *(undefined8 *)(this + 0x290) = 0;
    FUN_00d50b20();
  }
  (**(code **)(*plVar5 + 0x478))();
  FUN_00d50b20();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019973f0 (1608 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  void *pvVar5;
  pthread_key_t in_ECX;
  longlong arg1;
  undefined8 *this;
  longlong *plVar6;
  longlong local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  float local_3c;
  float local_38;
  char local_31;
  
  local_3c = param_2;
  local_38 = param_1;
  (**(code **)(**(longlong **)(arg1 + 0x40) + 0xa28))();
  plVar6 = local_80;
  local_90 = local_80;
  if (local_78 == '\0') {
    if (local_80 == (longlong *)0x0) {
      local_90 = (longlong *)0x0;
      local_88 = '\x01';
      plVar6 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
      local_88 = '\x01';
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_88 = '\x01';
  }
  iVar3 = (**(code **)(&UNK_00001588 + **(longlong **)(arg1 + 0x40)))();
  if (iVar3 != 0) {
    (**(code **)(**(longlong **)(arg1 + 0x40) + 0xa18))();
    if (local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01997516;
      }
    }
    else if (local_80 != (longlong *)0x0) {
LAB_01997516:
      if (iVar3 == 1) {
        FUN_019fb4c0(local_38,local_3c);
      }
      else if (iVar3 == 2) {
        FUN_019fb4c0(local_38,local_3c);
      }
      else if (iVar3 == 3) {
        FUN_019f95e0(local_38,local_3c);
      }
      else {
        FUN_019fb4c0(local_38,local_3c);
        plVar6 = local_80;
        if ((((local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_78 != '\0')) && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_019f95e0(local_38,local_3c);
        if (plVar6 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      goto LAB_01997962;
    }
    FUN_00d46dc0((local_3c - local_38) + DAT_02390124);
    local_98 = local_50;
    FUN_00083ea0(2,&local_98);
    FUN_019f9540();
    local_80 = (longlong *)&DAT_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01997962;
  }
  if ((DAT_027c0160 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_0270ab28 = FUN_0015ea50();
    _DAT_0270ab10 = "MUScalePitchSystem";
    _DAT_0270ab18 = 0x78;
    in_ECX = 0x15ecf0;
    _DAT_0270ab20 = FUN_0015ecf0;
    _DAT_0270ab30 = 0;
    uRam000000000270ab38 = 0;
    _DAT_0270ab40 = 0;
    uRam000000000270ab48 = 0;
    _DAT_0270ab50 = 0;
    uRam000000000270ab58 = 0;
    _DAT_0270ab60 = 0;
    uRam000000000270ab68 = 0;
    _DAT_0270ab70 = 0;
    uRam000000000270ab78 = 0;
    _DAT_0270ab80 = 0;
    uRam000000000270ab88 = 0;
    _DAT_0270ab90 = 0;
    uRam000000000270ab98 = 0;
    _DAT_0270aba0 = 0;
    uRam000000000270aba8 = 0;
    _DAT_0270abb0 = 0;
    uRam000000000270abb8 = 0;
    _DAT_0270abc0 = 0;
    uRam000000000270abc8 = 0;
    _DAT_0270abd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_019974e5:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_019974e5;
    pplVar4 = &local_90;
  }
  local_31 = *(char *)(pplVar4 + 1);
  if ((local_31 == '\0') || (*pplVar4 == (longlong *)0x0)) {
    if (*pplVar4 != (longlong *)0x0) goto LAB_0199767d;
    bVar1 = true;
LAB_01997944:
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    FUN_00d50b00();
LAB_0199767d:
    if (*(longlong *)(arg1 + 0x48) == 0) {
      bVar1 = false;
      goto LAB_01997944;
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0176f850();
    FUN_01774240();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d46dc0((local_3c - local_38) + DAT_02390124);
    local_98 = local_50;
    FUN_00083ea0(2,&local_98);
    FUN_019f9540();
    local_80 = (longlong *)&DAT_0253d630;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    bVar1 = false;
  }
  if ((local_31 != '\0') && (!bVar1)) {
    FUN_00d50b20();
  }
LAB_01997962:
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a24830 (1605 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *this;
  longlong *plVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar18;
  undefined8 extraout_XMM0_Qb_04;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 local_a8 [16];
  longlong local_88;
  char local_80;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined1 local_58 [16];
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_03;
  
  if ((int)this[0x35] != 0) {
    return;
  }
  if ((this[0x3b] == 0) || (FUN_01bcc520(), local_40 == (longlong *)0x0)) {
    FUN_01d9af40();
    return;
  }
  if (local_38 == '\0') {
    FUN_00d50b00();
  }
  plVar9 = (longlong *)this[0x2b];
  if (plVar9 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
    bVar2 = false;
  }
  else {
    FUN_00d50b00();
    (**(code **)(*plVar9 + 0x4d8))();
    _local_78 = in_XMM1;
    iVar6 = FUN_01bead40();
    if (iVar6 == 0) {
      uVar11 = FUN_01e3f820();
      auVar16._8_4_ = (int)extraout_XMM0_Qb_00;
      auVar16._0_8_ = uVar11;
      auVar16._12_4_ = (int)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar17._4_12_ = auVar16._4_12_;
      auVar17._0_4_ = (float)uVar11 + in_XMM1._0_4_ + DAT_02390d00;
    }
    else {
      uVar11 = FUN_01be7cc0();
      auVar17._8_4_ = (int)extraout_XMM0_Qb;
      auVar17._0_8_ = uVar11;
      auVar17._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
    }
    auVar19._4_12_ = auVar17._4_12_;
    auVar19._0_4_ = auVar17._0_4_ + DAT_02390d00;
    bVar2 = true;
    in_XMM1 = blendps(auVar19,_local_78,0xe);
    (**(code **)(*plVar9 + 0x4d0))();
    plVar7 = plVar9;
  }
  FUN_01d9af40();
  fVar10 = (float)FUN_01bf1450();
  if (0.0 < fVar10) {
    plVar8 = (longlong *)this[0x2a];
    if (plVar8 == plVar7) {
      if ((plVar9 == (longlong *)0x0) && (plVar8 != (longlong *)0x0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (plVar9 == (longlong *)0x0 || plVar7 == (longlong *)0x0) {
        bVar2 = true;
        plVar7 = plVar8;
      }
      else {
        FUN_00d50b20();
        bVar2 = true;
        plVar7 = plVar8;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      auVar12._0_8_ = (**(code **)(*plVar7 + 0x4d8))();
      auVar12._8_8_ = extraout_XMM0_Qb_01;
      auVar13._4_12_ = auVar12._4_12_;
      auVar13._0_4_ = (float)auVar12._0_8_ + fVar10;
      in_XMM1._0_4_ = in_XMM1._0_4_ - fVar10;
      (**(code **)(*plVar7 + 0x4d0))(auVar13._0_8_);
    }
    FUN_01d97870();
    if (local_40 == plVar7) {
      plVar9 = plVar7;
      bVar5 = bVar2;
      if ((!bVar2) && (local_40 != (longlong *)0x0)) {
        bVar5 = true;
        if (local_38 != '\0') goto LAB_01a24ab5;
        FUN_00d50b00();
        bVar5 = true;
      }
LAB_01a24aa1:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar9 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar5 = true;
        if ((bVar2) && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a24aa1;
      }
      bVar5 = true;
      if ((bVar2) && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01a24ab5:
    if (plVar9 == (longlong *)0x0) goto LAB_01a24b6a;
    local_78 = (undefined1  [8])(**(code **)(*plVar9 + 0x4d8))();
    uStack_70 = extraout_XMM0_Qb_02;
    auVar14._4_12_ = local_78._4_12_;
    auVar14._0_4_ = SUB84(local_78,0) + fVar10;
    auVar24._4_12_ = in_XMM1._4_12_;
    auVar24._0_4_ = in_XMM1._0_4_ - fVar10;
    (**(code **)(*plVar9 + 0x4d0))(auVar14._0_8_);
    if ((longlong *)this[0x28] != (longlong *)0x0) {
      auVar15._0_8_ = (**(code **)(*(longlong *)this[0x28] + 0x4d8))();
      auVar15._8_8_ = extraout_XMM0_Qb_03;
      fVar25 = (float)local_78._0_4_ - (float)auVar15._0_8_;
      fVar10 = (float)((ulonglong)auVar15._0_8_ >> 0x20);
      fVar26 = (float)local_78._4_4_ - fVar10;
      fVar27 = (float)uStack_70 - (float)extraout_XMM0_Qb_03;
      fVar18 = (float)((ulonglong)extraout_XMM0_Qb_03 >> 0x20);
      fVar28 = uStack_70._4_4_ - fVar18;
      auVar20._0_4_ = (float)auVar15._0_8_ + fVar25;
      auVar20._4_4_ = fVar10 + fVar26;
      auVar20._8_4_ = (float)extraout_XMM0_Qb_03 + fVar27;
      auVar20._12_4_ = fVar18 + fVar28;
      blendps(auVar20,auVar15,2);
      auVar23._0_4_ = auVar24._0_4_ - fVar25;
      auVar23._4_4_ = auVar24._4_4_ - fVar26;
      auVar23._8_4_ = auVar24._8_4_ - fVar27;
      auVar23._12_4_ = auVar24._12_4_ - fVar28;
      auVar24 = blendps(auVar23,auVar24,2);
      (**(code **)(*(longlong *)this[0x28] + 0x4d0))();
    }
    plVar7 = (longlong *)this[0x2b];
    if (plVar7 == plVar9) {
      if ((!bVar5) && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b00();
        bVar5 = true;
      }
LAB_01a24b97:
      bVar2 = bVar5;
      local_58._0_8_ = (**(code **)(*plVar9 + 0x4d8))();
      local_58._8_8_ = extraout_XMM0_Qb_04;
      auVar16 = auVar24;
      iVar6 = FUN_01bead40();
      if (iVar6 == 0) {
        FUN_01e3f820();
        auVar17 = blendps(local_58,_DAT_023b1620,0xe);
        uVar11 = auVar17._0_8_;
        fVar10 = auVar16._4_4_;
        auVar21._4_4_ = fVar10;
        auVar21._0_4_ = fVar10;
        auVar21._8_4_ = auVar16._12_4_;
        auVar21._12_4_ = auVar16._12_4_;
        auVar22._4_12_ = auVar21._4_12_;
        auVar22._0_4_ = fVar10 + DAT_023b1608;
        auVar24 = insertps(auVar24,auVar22,0x10);
      }
      else {
        auVar1._4_4_ = auVar24._4_4_ - (local_78._4_4_ - (float)((ulonglong)local_58._0_8_ >> 0x20))
        ;
        auVar1._0_4_ = auVar24._0_4_ - (local_78._0_4_ - (float)local_58._0_8_);
        auVar1._8_4_ = auVar24._8_4_ - (local_78._8_4_ - (float)extraout_XMM0_Qb_04);
        auVar1._12_4_ =
             auVar24._12_4_ - (local_78._12_4_ - (float)((ulonglong)extraout_XMM0_Qb_04 >> 0x20));
        auVar24 = blendps(auVar24,auVar1,2);
        auVar16 = blendps(local_58,_local_78,2);
        uVar11 = auVar16._0_8_;
      }
      (**(code **)(*plVar9 + 0x4d0))(uVar11);
      plVar8 = (longlong *)this[0x2e];
      plVar7 = plVar8;
      bVar3 = bVar2;
      if (plVar8 != plVar9) goto LAB_01a24c2b;
LAB_01a24c68:
      plVar7 = plVar9;
      if ((!bVar2) && (plVar8 != (longlong *)0x0)) {
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (bVar5) {
        FUN_00d50b20();
      }
      bVar2 = true;
      bVar3 = true;
      plVar9 = plVar7;
      bVar5 = true;
      if (plVar7 != (longlong *)0x0) goto LAB_01a24b97;
      plVar9 = (longlong *)0x0;
      plVar7 = (longlong *)this[0x2e];
      plVar8 = (longlong *)0x0;
      if (plVar7 == (longlong *)0x0) goto LAB_01a24c68;
LAB_01a24c2b:
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar2 = true;
      if ((bVar3) && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
        bVar2 = true;
      }
    }
    if (plVar7 != (longlong *)0x0) {
      local_a8._0_8_ = (**(code **)(*plVar7 + 0x4d8))();
      local_a8._8_8_ = extraout_XMM0_Qb_05;
      iVar6 = FUN_01bead40();
      if (iVar6 == 0) {
        blendps(_local_78,local_a8,2);
      }
      else {
        blendps(local_a8,ZEXT816(0),1);
      }
      (**(code **)(*plVar7 + 0x4d0))();
    }
    iVar6 = FUN_01bead40();
    if (iVar6 == 0) {
      if (this[0x29] != 0) {
        FUN_01e40eb0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == this) {
          local_78 = (undefined1  [8])(**(code **)(*(longlong *)this[0x29] + 0x4d8))();
          uStack_70 = extraout_XMM0_Qb_06;
          auVar16 = auVar24;
          FUN_01e3f820();
          blendps(auVar24,auVar16,2);
          auVar16 = blendps(_local_78,ZEXT816(0),2);
          (**(code **)(*(longlong *)this[0x29] + 0x4d0))(auVar16._0_8_);
        }
      }
      if (this[0x27] != 0) {
        FUN_01d9cbc0();
      }
    }
    FUN_00d403d0();
    lVar4 = DAT_027e7c00;
    if (DAT_027e7c00 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_88 = 0;
    local_80 = '\0';
    FUN_00d40470(&local_88,&stack0xffffffffffffff98,1,3);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (this != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((bVar2) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01a24b6a:
  FUN_00d50b20();
  return;
}




// ==================================================
// @019ceb00 (1599 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong **pplVar10;
  char in_DL;
  undefined8 unaff_RBX;
  undefined7 uVar12;
  longlong *plVar11;
  longlong *this;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong *local_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 *local_a0;
  char local_98;
  ulonglong local_90;
  longlong *local_88;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*this + 0xaa8))();
  plVar13 = local_40;
  uVar12 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019ceb5d;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_019ceb5d:
    local_90 = (ulonglong)*(uint *)((longlong)plVar13 + 0xc);
    uVar15 = CONCAT71(uVar12,local_90 == 0);
    if ((local_90 != 0) && (in_DL != '\0')) {
      local_88 = plVar13;
      (**(code **)(*this + 0xe20))();
      plVar11 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019cebcc;
        }
LAB_019cebd2:
        local_44 = 0;
      }
      else {
        if (local_40 == (longlong *)0x0) goto LAB_019cebd2;
LAB_019cebcc:
        if (*(int *)((longlong)plVar11 + 0xc) != 0) goto LAB_019cebd2;
        uVar8 = FUN_00d50b20();
        local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        plVar11 = (longlong *)0x0;
      }
      (**(code **)(*this + 0x4a0))();
      plVar4 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      local_a8 = &DAT_02572358;
      *puVar9 = &DAT_02572358;
      local_b0 = DAT_02572370;
      (*DAT_02572370)();
      local_50 = puVar9;
      if (0 < (int)local_90) {
        uVar15 = 0;
        do {
          plVar2 = *(longlong **)(plVar13[2] + uVar15 * 8);
          uVar19 = param_2;
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
            uVar19 = param_2;
          }
          local_b8 = plVar2;
          uVar16 = (**(code **)(*plVar2 + 0x4d8))();
          local_38 = '\0';
          param_2 = uVar19;
          local_40 = plVar2;
          cVar5 = FUN_00d23d70();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') {
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x928))();
              plVar3 = local_60;
              if (local_58 == '\0') {
                if (local_60 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_40 = plVar3;
              local_38 = '\0';
              cVar5 = FUN_00d23d70();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar3 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar5 == '\0') goto LAB_019cefb0;
            }
            uVar14 = 0;
            do {
              if (uVar15 != uVar14) {
                plVar3 = *(longlong **)(plVar13[2] + uVar14 * 8);
                uVar18 = param_2;
                if (plVar3 != (longlong *)0x0) {
                  FUN_00d50b00();
                  uVar18 = param_2;
                }
                local_60 = plVar3;
                uVar17 = (**(code **)(*plVar3 + 0x4d8))();
                param_2 = uVar19;
                cVar5 = FUN_00d054a0(uVar16,uVar19,uVar17,uVar18);
                if (cVar5 != '\0') {
                  local_38 = '\0';
                  local_40 = plVar3;
                  cVar5 = FUN_00d23d70();
                  uVar18 = extraout_XMM0_Da;
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    uVar18 = FUN_00d50b20();
                  }
                  if (cVar5 == '\0') {
                    iVar6 = FUN_019a4cd0(uVar18,this);
                    if (iVar6 < 0) {
                      local_38 = '\0';
                      local_40 = plVar2;
                      FUN_00d21140();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (iVar6 == 0) {
                      local_38 = '\0';
                      local_40 = plVar2;
                      iVar6 = FUN_00d237a0();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_38 = '\0';
                      local_40 = plVar3;
                      iVar7 = FUN_00d237a0();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      pplVar10 = &local_b8;
                      if (iVar7 < iVar6) {
                        pplVar10 = &local_60;
                      }
                      local_40 = *pplVar10;
                      local_38 = '\0';
                      FUN_00d21140();
                      plVar13 = local_88;
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_38 = '\0';
                      local_40 = plVar3;
                      FUN_00d21140();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                  }
                }
                FUN_00d50b20();
              }
              uVar14 = uVar14 + 1;
            } while (local_90 != uVar14);
          }
LAB_019cefb0:
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != local_90);
      }
      uVar1 = *(uint *)((longlong)local_50 + 0xc);
      if ((ulonglong)uVar1 != 0) {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = local_a8;
        uVar19 = (*local_b0)();
        if (0 < (int)uVar1) {
          uVar15 = 0;
          do {
            plVar13 = *(longlong **)(local_50[2] + uVar15 * 8);
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            (**(code **)(*plVar13 + 0x928))();
            plVar13 = local_60;
            if (local_58 == '\0') {
              if (local_60 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_40 = plVar13;
            local_38 = '\0';
            FUN_00d21140();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar19 = FUN_00d50b20();
            uVar15 = uVar15 + 1;
          } while (uVar1 != uVar15);
        }
        local_98 = '\0';
        local_a0 = puVar9;
        (**(code **)(*this + 0xdc8))(uVar19,1);
        if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*this + 0xb48))();
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      if (plVar4 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((char)local_44 == '\0' && plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar15 = 0;
    }
    FUN_00d50b20();
    goto LAB_019cf154;
  }
  uVar15 = CONCAT71(uVar12,1);
LAB_019cf154:
  return (uVar15 ^ 1) & 0xffffffff;
}




// ==================================================
// @019fb4c0 (1578 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 *puVar5;
  pthread_key_t in_ECX;
  code *pcVar6;
  longlong arg1;
  undefined8 *this;
  longlong *plVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 local_120 [8];
  undefined1 local_118 [16];
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  code *local_e0;
  undefined1 local_d8 [4];
  int iStack_d4;
  longlong local_d0;
  char local_c8;
  undefined4 local_bc;
  longlong local_b0;
  char local_a8;
  float local_9c;
  code *local_98;
  char local_90;
  code *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  float local_48;
  float local_44;
  code *local_40;
  undefined8 local_38;
  
  local_48 = param_2;
  local_44 = param_1;
  (**(code **)(**(longlong **)(arg1 + 0x40) + 0xa18))();
  pcVar8 = local_88;
  if ((((local_80 == '\0') && (local_88 != (code *)0x0)) && (FUN_00d50b00(), local_80 != '\0')) &&
     (local_88 != (code *)0x0)) {
    FUN_00d50b20();
  }
  local_a8 = '\0';
  local_b0 = 0;
  local_40 = pcVar8;
  (**(code **)(**(longlong **)(arg1 + 0x40) + 0xa20))();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  pcVar1 = local_88;
  if (local_80 == '\0') {
    if (((local_88 != (code *)0x0) && (FUN_00d50b00(), local_80 != '\0')) &&
       (local_88 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80 = '\0';
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_bc = 0xffffffff;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(**(longlong **)(arg1 + 0x40) + 0x930))(local_44);
  local_f8 = FUN_016c25f0();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(**(longlong **)(arg1 + 0x40) + 0x930))(local_48);
  local_f0 = FUN_016c25f0();
  local_e0 = DAT_02572370;
  puVar5 = (undefined8 *)0x0;
  local_e8 = &DAT_02572358;
  local_38 = 0;
  local_9c = local_44;
  pcVar6 = DAT_02572370;
  while( true ) {
    pvVar3 = _pthread_getspecific((pthread_key_t)pcVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pcVar6 = (code *)local_120;
    uVar9 = local_f0;
    cVar2 = FUN_01252f30(local_f8,&local_b0,local_d8,&local_bc);
    fVar12 = (float)uVar9;
    if (cVar2 == '\0') break;
    if (local_b0 == 0) {
      FUN_00d46dc0((local_48 - local_44) + DAT_02390124);
      local_108 = local_b0;
      local_100 = local_58;
      FUN_00083ea0(2,&local_100);
      FUN_019f9540();
      local_88 = (code *)&DAT_0253d630;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_88 = (code *)&DAT_024c5048;
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019fb9d0;
    }
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = local_e8;
      (*local_e0)();
      uVar9 = FUN_00d227d0();
      local_38 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      plVar7 = *(longlong **)(arg1 + 0x40);
      if (iStack_d4 != 0) goto LAB_019fb752;
LAB_019fb7f8:
      uVar9 = FUN_01e3f820();
      auVar13._8_4_ = (int)extraout_XMM0_Qb;
      auVar13._0_8_ = uVar9;
      auVar13._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar14._4_12_ = auVar13._4_12_;
      auVar14._0_4_ = (float)uVar9 + fVar12 + DAT_02390d00;
    }
    else {
      plVar7 = *(longlong **)(arg1 + 0x40);
      if (iStack_d4 == 0) goto LAB_019fb7f8;
LAB_019fb752:
      pvVar3 = _pthread_getspecific((pthread_key_t)pcVar6);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        pcVar6 = local_40;
      }
      FUN_016c98e0();
      uVar9 = (**(code **)(*plVar7 + 0x938))();
      auVar10._0_4_ = (uint)(float)uVar9 & _DAT_023945e0;
      auVar10._4_4_ = (uint)((ulonglong)uVar9 >> 0x20) & _UNK_023945e4;
      auVar10._8_4_ = (uint)extraout_XMM0_Qb_00 & _UNK_023945e8;
      auVar10._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) & _UNK_023945ec;
      auVar11._4_12_ = SUB1612(auVar10 | _DAT_023945f0,4);
      auVar11._0_4_ = SUB164(auVar10 | _DAT_023945f0,0) + (float)uVar9;
      auVar14 = roundss(in_XMM5,auVar11,0xb);
    }
    pcVar8 = local_40;
    fVar12 = (auVar14._0_4_ - local_9c) + DAT_02390124;
    local_9c = local_9c + fVar12;
    in_XMM5._4_4_ = auVar14._4_4_;
    in_XMM5._0_4_ = ~-(uint)(local_48 < local_9c) & (uint)fVar12;
    in_XMM5._8_4_ = auVar14._8_4_;
    in_XMM5._12_4_ = auVar14._12_4_;
    in_XMM5 = ZEXT416((uint)(fVar12 - ((local_9c - local_48) + DAT_02390d00)) &
                      -(uint)(local_48 < local_9c)) | in_XMM5;
    local_118 = in_XMM5;
    if (in_XMM5._0_4_ < DAT_02390124) break;
    local_d0 = local_b0;
    local_c8 = '\0';
    FUN_00d21140();
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d46dc0(local_118._0_8_);
    local_98 = local_88;
    local_90 = 0;
    if (local_80 == '\0') {
      if (local_88 != (code *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_90 = '\x01';
    FUN_00d21140();
    if ((local_90 != '\0') && (local_98 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (code *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(this + 1) = 0;
  if (((char)local_38 == '\0') && (puVar5 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *this = puVar5;
  *(undefined1 *)(this + 1) = 1;
  local_38 = 0;
LAB_019fb9d0:
  if (pcVar1 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_38 != '\0') && (puVar5 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (pcVar8 != (code *)0x0) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01b20d80 (1546 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int unaff_ESI;
  longlong *this;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 local_58 [12];
  float fStack_4c;
  longlong local_48;
  char local_40;
  
  if ((longlong *)this[0x52] == (longlong *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*(longlong *)this[0x52] + 0xa88))();
  FUN_01b1dbf0();
  FUN_01ad3cb0();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_01b20dec;
    }
  }
  else if (local_48 != 0) {
LAB_01b20dec:
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01770870();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_0174a9c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_0174a9c0();
      if ((unaff_ESI < 1) || (iVar6 <= iVar4)) {
        if ((-1 < unaff_ESI) || (iVar4 <= iVar6)) {
          bVar1 = false;
          goto LAB_01b21082;
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_01770c70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        unaff_ESI = unaff_ESI + iVar6;
      }
      else {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar6 = FUN_01770c70();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        unaff_ESI = unaff_ESI - iVar6;
      }
    }
    bVar1 = false;
    goto LAB_01b21082;
  }
  bVar1 = true;
LAB_01b21082:
  iVar6 = unaff_ESI + *(int *)((longlong)this + 0x194);
  *(int *)((longlong)this + 0x194) = iVar6;
  FUN_01ad3320();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 == 0) {
    iVar6 = -1000000;
  }
  if ((int)this[0x32] != iVar6) {
    *(int *)(this + 0x32) = iVar6;
    (**(code **)(*this + 0x620))();
  }
  FUN_01b03750();
  FUN_01ad37a0();
  if (iVar3 == 1) {
    FUN_01b06140();
    if ((*(int *)((longlong)this + 0x284) == 1) || (*(int *)((longlong)this + 0x284) == 0)
       ) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = DAT_023dccec;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_023dccf4;
    }
    else {
      local_58._0_8_ = FUN_01e3f820();
      local_58._8_4_ = extraout_XMM0_Dc_00;
      fStack_4c = extraout_XMM0_Dd_00;
      if (*(int *)((longlong)this + 0x284) == 3) {
        auVar13 = in_XMM1;
        FUN_01e3f820();
        auVar11 = blendps(auVar13,_DAT_0241c700,0xd);
      }
      else {
        auVar11._8_8_ = 0;
        auVar11._0_8_ = DAT_023dccf4;
      }
      auVar14._0_4_ = auVar11._0_4_ + (float)local_58._0_8_;
      auVar14._4_4_ = auVar11._4_4_ + (float)((ulonglong)local_58._0_8_ >> 0x20);
      auVar14._8_4_ = auVar11._8_4_ + extraout_XMM0_Dc_00;
      auVar14._12_4_ = auVar11._12_4_ + extraout_XMM0_Dd_00;
      auVar13 = blendps(auVar14,_local_58,2);
      auVar18 = blendps(in_XMM1,_DAT_0241c710,0xd);
    }
    fVar9 = auVar18._0_4_;
    auVar19._4_12_ = auVar18._4_12_;
    auVar17._4_12_ = auVar13._4_12_;
    auVar17._0_4_ = auVar13._0_4_ + fVar9 * DAT_0239011c;
    if ((fVar9 == 0.0) && (!NAN(fVar9))) {
      auVar17 = auVar13;
    }
    auVar19._0_4_ = fVar9 * DAT_0239011c;
    if ((fVar9 == 0.0) && (!NAN(fVar9))) {
      auVar19 = auVar18;
    }
    fVar9 = auVar17._0_4_ + DAT_023942a8;
    if ((auVar19._0_4_ == 0.0) && (!NAN(auVar19._0_4_))) {
      fVar9 = auVar17._0_4_;
    }
    (**(code **)(*this + 0x618))(fVar9);
    uVar8 = FUN_01b05190();
    FUN_01e436c0();
    cVar2 = FUN_00d054a0(uVar8);
    if (cVar2 == '\0') {
      FUN_01b05190();
      (**(code **)(*this + 0x518))();
    }
  }
  else if (iVar3 == 0) {
    FUN_01b058e0();
    if ((*(int *)((longlong)this + 0x284) == 1) || (*(int *)((longlong)this + 0x284) == 0)
       ) {
      fVar9 = (float)DAT_023dccec;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = DAT_023dccf4;
    }
    else {
      local_58._0_8_ = FUN_01e3f820();
      local_58._8_4_ = extraout_XMM0_Dc;
      fStack_4c = extraout_XMM0_Dd;
      if (*(int *)((longlong)this + 0x284) == 3) {
        auVar13 = in_XMM1;
        FUN_01e3f820();
        auVar10 = blendps(auVar13,_DAT_0241c700,0xd);
      }
      else {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = DAT_023dccf4;
      }
      auVar12._0_4_ = auVar10._0_4_ + (float)local_58._0_8_;
      auVar12._4_4_ = auVar10._4_4_ + (float)((ulonglong)local_58._0_8_ >> 0x20);
      auVar12._8_4_ = auVar10._8_4_ + extraout_XMM0_Dc;
      auVar12._12_4_ = auVar10._12_4_ + extraout_XMM0_Dd;
      auVar13 = blendps(auVar12,_local_58,2);
      fVar9 = auVar13._0_4_;
      auVar15 = blendps(in_XMM1,_DAT_0241c710,0xd);
    }
    fVar7 = auVar15._0_4_;
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = fVar7 * DAT_0239011c;
    if ((fVar7 == 0.0) && (!NAN(fVar7))) {
      auVar16 = auVar15;
    }
    fVar7 = fVar9 + DAT_023942a8;
    if ((auVar16._0_4_ == 0.0) && (!NAN(auVar16._0_4_))) {
      fVar7 = fVar9;
    }
    (**(code **)(*this + 0x618))(fVar7);
    uVar8 = FUN_01b05190();
    FUN_01e436c0();
    cVar2 = FUN_00d054a0(uVar8);
    if (cVar2 == '\0') {
      FUN_01b05190();
      (**(code **)(*this + 0x518))();
    }
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b195d0 (1538 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *arg1;
  longlong this;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  uint local_8c;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  lVar5 = DAT_027e3df8;
  if (*arg1 == 0) {
    return;
  }
  if (DAT_027e3df8 != 0) {
    FUN_00d50b00();
  }
  FUN_01d5e6e0();
  local_88 = local_70;
  if (local_68 == '\0') {
    if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
       (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68 = '\0';
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (local_88 == (longlong *)0x0) {
    return;
  }
  FUN_01d654e0();
  if (((*(int *)(this + 0x194) != -1000000) || (*(int *)(this + 400) != -1000000)) &&
     (*(longlong *)(this + 0x1a0) != 0)) {
    FUN_01ad3cb0();
    plVar3 = local_70;
    if (local_68 == '\0') {
      if (local_70 == (longlong *)0x0) goto LAB_01b19ba1;
      FUN_00d50b00();
    }
    else if (local_70 == (longlong *)0x0) goto LAB_01b19ba1;
    local_80 = plVar3;
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_001d7da0();
    (**(code **)(*plVar3 + 0x18))();
    local_48 = plVar3;
    FUN_01d5e5a0();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_017753d0(&local_8c);
    plVar3 = local_48;
    local_78 = local_70;
    if (local_68 == '\0') {
      if (((local_70 != (longlong *)0x0) && (FUN_00d50b00(), local_68 != '\0')) &&
         (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_68 = '\0';
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_60 = local_78;
      local_58 = 0xffffffff;
      local_50 = 0;
      local_58._4_4_ = 0;
      while( true ) {
        if (local_58._4_4_ != 0) {
          if (local_58._4_4_ < 1) {
            iVar7 = -local_58._4_4_;
          }
          else {
            iVar7 = (int)local_58 - local_58._4_4_;
            local_58 = CONCAT44(local_58._4_4_,iVar7);
            FUN_00d23690();
            local_50 = local_50 + local_58._4_4_;
            iVar7 = 0;
          }
          local_58 = CONCAT44(iVar7,(int)local_58);
        }
        lVar5 = (longlong)(int)local_58;
        iVar7 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar7);
        if (*(int *)((longlong)local_60 + 0xc) <= iVar7) break;
        lVar6 = local_60[2];
        local_70 = *(longlong **)(lVar6 + 8 + lVar5 * 8);
        uVar2 = FUN_00d45870();
        uVar1 = -uVar2;
        if (0 < (int)uVar2) {
          uVar1 = uVar2;
        }
        pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
        lVar5 = DAT_026e3bc8;
        plVar3 = local_80;
        if ((pvVar4 != (void *)0x0) &&
           (lVar6 = FUN_00e8b990(), lVar5 = DAT_026e3bc8, plVar3 = local_80, lVar6 != 0)) {
          plVar3 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        DAT_026e3bc8 = lVar5;
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        local_d8 = '\x01';
        local_d0 = 0;
        local_c8 = '\0';
        local_e0 = lVar5;
        (**(code **)(*plVar3 + 0x3c0))(&local_e0,uVar1 % 0xc,&local_d0);
        lVar5 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = DAT_027e3e00;
        local_c0 = lVar5;
        local_b8 = '\0';
        if (DAT_027e3e00 != 0) {
          FUN_00d50b00();
        }
        local_b0 = lVar6;
        local_a8 = '\x01';
        FUN_01d5d9b0();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d5e230();
        lVar6 = local_40;
        if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != 0)) {
          FUN_00d50b20();
        }
        plVar3 = local_48;
        if (local_8c == uVar1 % 0xc) {
          FUN_01d66ab0();
        }
        FUN_01d65260();
        iVar7 = local_50 + (int)local_58;
        if (iVar7 == 2) {
          FUN_01d65490();
        }
        else if (iVar7 == 1) {
          FUN_01d65490();
        }
        else if (iVar7 == 0) {
          FUN_01d65490();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00136b80();
    }
    local_98 = '\0';
    local_a0 = plVar3;
    FUN_01d654e0();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_01b19ba1:
  FUN_00d50b20();
  return;
}




// ==================================================
// @01a36f10 (1537 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *arg1;
  longlong this;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined1 auVar11 [16];
  undefined4 local_d8;
  undefined4 uStack_d4;
  char local_d0;
  undefined4 local_c4;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  float fStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (*(char *)(this + 0x1ad) != '\0') {
    if ((DAT_028b2b68 == (longlong *)0x0) || (DAT_028b2b71 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b2b68 == (longlong *)0x0) {
        plVar4 = (longlong *)FUN_00e8fc40();
        FUN_001b9f00();
        (**(code **)(*plVar4 + 0x18))();
        if (DAT_028b2b68 == plVar4) {
          bVar8 = false;
          bVar2 = false;
        }
        else {
          bVar8 = true;
          bVar2 = true;
          bVar7 = DAT_028b2b68 != (longlong *)0x0;
          DAT_028b2b68 = plVar4;
          if (bVar7) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b2b70 == '\0') {
          DAT_028b2b70 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar8;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        FUN_01cfc6a0();
        local_d8 = 0;
        FUN_01cfc6a0();
        local_4c = 0x3dcccccd;
        FUN_01cfc6a0();
        local_48 = 0x3f666666;
        FUN_01cfc6a0();
        local_44 = 0x3f800000;
        FUN_01ae52c0(&local_70,&local_d8,&local_4c,&local_60);
        FUN_01f7ba60();
        FUN_019fe220();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_38 != '\0') && (CONCAT44(fStack_3c,local_40) != 0)) {
          FUN_00d50b20();
        }
        DAT_028b2b71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b2b71 = '\x01';
        FUN_00e8cb70();
      }
    }
    plVar3 = DAT_028b2b68;
    auVar11 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)((uint)(*param_2 + DAT_02390d00) & _DAT_023945e0 |
                                            DAT_02394dc8) + *param_2 + DAT_02390d00)),0xb);
    local_40 = auVar11._0_4_;
    fStack_3c = 0.0;
    uStack_34 = *(undefined4 *)(this + 0x118);
    auVar11 = roundss(ZEXT816(0),
                      ZEXT416((uint)((float)(_DAT_023945e0 & (uint)(param_2[2] + DAT_02390d34) |
                                            DAT_02394dc8) + param_2[2] + DAT_02390d34)),0xb);
    local_38 = auVar11._0_4_;
    lVar1 = *(longlong *)(this + 0x158);
    plVar4 = (longlong *)*arg1;
    uVar9 = auVar11._0_8_;
    if (lVar1 == 0) {
      local_b0 = 0;
      if (DAT_028b2b68 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_b8 = plVar3;
      local_b0 = '\x01';
      (**(code **)(*plVar4 + 0x420))(uVar9,&local_b8);
      if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_a0 = 0;
      FUN_00d50b00();
      local_a0 = '\x01';
      local_a8 = lVar1;
      FUN_01d488d0();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*arg1 + 0x3b0))
                (CONCAT44(fStack_3c,local_40),CONCAT44(uStack_34,local_38));
    }
    if (1 < *(int *)(*(longlong *)(this + 0x188) + 0xc)) {
      if ((DAT_028b2b78 == (longlong *)0x0) || (DAT_028b2b81 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028b2b78 == (longlong *)0x0) {
          plVar4 = (longlong *)FUN_00e8fc40();
          FUN_001b9f00();
          (**(code **)(*plVar4 + 0x18))();
          if (DAT_028b2b78 == plVar4) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
            bVar8 = DAT_028b2b78 != (longlong *)0x0;
            DAT_028b2b78 = plVar4;
            if (bVar8) {
              FUN_00d50b20();
            }
          }
          if (DAT_028b2b80 == '\0') {
            DAT_028b2b80 = '\x01';
            FUN_00e8cb90();
          }
          if (!bVar2) {
            FUN_00d50b20();
          }
          FUN_01cfc6a0();
          local_4c = 0;
          FUN_01cfc6a0();
          local_48 = 0x3f000000;
          FUN_01cfc6a0();
          local_44 = 0x3f000000;
          FUN_01cfc6a0();
          local_c4 = 0x3f800000;
          FUN_01ae52c0(&local_60,&local_4c,&local_48,&local_80);
          FUN_01f7ba60();
          FUN_019fe220();
          if ((local_d0 != '\0') && (CONCAT44(uStack_d4,local_d8) != 0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          DAT_028b2b81 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b2b81 = '\x01';
          FUN_00e8cb70();
        }
      }
      uStack_34 = 0x41400000;
      if (1 < *(int *)(*(longlong *)(this + 0x188) + 0xc)) {
        iVar5 = 1;
        iVar6 = 0x1a;
        do {
          plVar3 = DAT_028b2b78;
          fStack_3c = (float)iVar6;
          uVar10 = (ulonglong)(uint)fStack_3c;
          plVar4 = (longlong *)*arg1;
          local_90 = 0;
          if (DAT_028b2b78 != (longlong *)0x0) {
            uVar10 = FUN_00d50b00();
          }
          local_98 = plVar3;
          local_90 = '\x01';
          (**(code **)(*plVar4 + 0x420))(uVar10,&local_98);
          if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 0x20;
        } while (iVar5 < *(int *)(*(longlong *)(this + 0x188) + 0xc));
      }
    }
  }
  return;
}




// ==================================================
// @019939d0 (1508 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *arg1;
  longlong *this;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  float in_XMM0_Dc;
  float extraout_XMM0_Dc;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float fVar11;
  float fVar12;
  undefined8 local_128;
  float fStack_120;
  longlong local_118;
  undefined1 local_110;
  undefined8 local_108;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  longlong *local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_48;
  char local_40;
  
  fVar12 = (float)((ulonglong)param_2 >> 0x20);
  fVar11 = (float)param_2;
  fStack_84 = (float)((ulonglong)param_1 >> 0x20);
  local_88 = (float)param_1;
  *(undefined4 *)(this + 0x78) = 0xfffffffe;
  lVar7 = this[7];
  plVar8 = (longlong *)0x0;
  bVar3 = false;
  local_f8 = fVar11;
  fStack_80 = in_XMM0_Dc;
  fStack_7c = in_XMM0_Dd;
  iVar5 = -2;
  do {
    if (0 < *(int *)(lVar7 + 0xc)) {
      lVar9 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar9 * 8);
        if (plVar8 == plVar1) {
          if ((!bVar3) && (plVar8 != (longlong *)0x0)) {
            bVar3 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar3) && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar3 = true;
            plVar8 = plVar1;
          }
          else {
            bVar3 = true;
            plVar8 = plVar1;
          }
        }
        lVar7 = this[0x78];
        iVar5 = FUN_01989fa0();
        if (iVar5 <= (int)lVar7) {
          lVar7 = this[0x78];
          iVar5 = FUN_01989fa0();
          iVar6 = FUN_01989fb0();
          if ((int)lVar7 < iVar6 + iVar5) {
            (**(code **)(*plVar8 + 0x4e0))();
            cVar4 = FUN_00d054a0();
            if (cVar4 != '\0') {
              uVar10 = (**(code **)(*plVar8 + 0x4d8))();
              fStack_100 = extraout_XMM0_Dc;
              fStack_fc = extraout_XMM0_Dd;
              local_108 = uVar10;
              (**(code **)(*(longlong *)*arg1 + 0x368))();
              (**(code **)(*plVar8 + 0x500))();
              local_88 = local_88 - (float)local_108;
              fStack_84 = fStack_84 - local_108._4_4_;
              fStack_80 = fStack_80 - fStack_100;
              fStack_7c = fStack_7c - fStack_fc;
              uVar10 = FUN_00d05360();
              fStack_120 = fVar11;
              local_128 = uVar10;
              if ((DAT_0239424c < fVar11) && (DAT_0239424c < fVar12)) {
                local_e0 = '\0';
                local_d8 = *arg1;
                local_d0 = '\0';
                local_e8 = plVar8;
                (**(code **)(*this + 0x7a0))(&local_128,&local_d8);
                if ((local_d0 != '\0') && (local_d8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              (**(code **)(*(longlong *)*arg1 + 0x368))((uint)(float)local_108 ^ _DAT_023945e0)
              ;
              local_88 = local_88 + (float)local_108;
              fStack_84 = fStack_84 + local_108._4_4_;
              fStack_80 = fStack_80 + fStack_100;
              fStack_7c = fStack_7c + fStack_fc;
            }
          }
        }
        lVar9 = lVar9 + 1;
        lVar7 = this[7];
      } while (lVar9 < *(int *)(lVar7 + 0xc));
      iVar5 = (int)this[0x78];
    }
    *(int *)(this + 0x78) = iVar5 + 1;
    bVar2 = iVar5 < 3;
    iVar5 = iVar5 + 1;
  } while (bVar2);
  *(undefined4 *)(this + 0x78) = 0;
  if (*(char *)((longlong)this + 0x441) != '\0') {
    local_118 = *arg1;
    local_110 = 0;
    FUN_019928f0();
  }
  if (((*(float *)(this + 0x40) != 0.0) || (NAN(*(float *)(this + 0x40)))) &&
     ((*(float *)((longlong)this + 0x204) != 0.0 ||
      (NAN(*(float *)((longlong)this + 0x204)))))) {
    FUN_01d39800((int)this[0x3f],(int)this[0x40],DAT_023908d8);
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01cfcdc0(DAT_0239011c,DAT_0239011c,DAT_0239011c,DAT_0239011c);
    local_68 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_68 = '\x01';
    local_70 = local_48;
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_c8 = local_48;
    local_c0 = '\0';
    (**(code **)(*(longlong *)*arg1 + 0x3a0))();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    FUN_01cfcdc0(0,0,0,DAT_0239011c);
    local_58 = 0;
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_58 = '\x01';
    local_60 = local_48;
    FUN_01d488d0();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_b8 = local_48;
    local_b0 = '\0';
    (**(code **)(*(longlong *)*arg1 + 0x3a8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
    }
  }
  if ((1 < *(int *)(this[0x41] + 0xc)) && ((char)this[0x51] != '\0')) {
    local_a8 = *arg1;
    local_a0 = '\0';
    (**(code **)(*this + 0xb90))(local_88,local_f8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((*(float *)(this + 0x5c) == (float)DAT_023dccec) &&
     (!NAN(*(float *)(this + 0x5c)) && !NAN((float)DAT_023dccec))) {
    if ((*(float *)((longlong)this + 0x2e4) == DAT_023dccec._4_4_) &&
       (!NAN(*(float *)((longlong)this + 0x2e4)) && !NAN(DAT_023dccec._4_4_))) {
      if ((*(float *)(this + 0x5d) == (float)DAT_023dccf4) &&
         (!NAN(*(float *)(this + 0x5d)) && !NAN((float)DAT_023dccf4))) {
        if ((*(float *)((longlong)this + 0x2ec) == DAT_023dccf4._4_4_) &&
           (!NAN(*(float *)((longlong)this + 0x2ec)) && !NAN(DAT_023dccf4._4_4_)))
        goto LAB_01993fa6;
      }
    }
  }
  local_98 = *arg1;
  local_90 = '\0';
  (**(code **)(*this + 0xb98))(local_88,local_f8);
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
LAB_01993fa6:
  if ((bVar3) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @015235b0 (1483 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  longlong lVar9;
  int extraout_var;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong arg1;
  longlong *this;
  byte bVar17;
  int iVar18;
  longlong lVar19;
  bool bVar20;
  double dVar21;
  undefined8 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double local_78;
  longlong local_68;
  char local_60;
  double local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(int *)(arg1 + 0x18) < 3) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return this;
  }
  plVar4 = *(longlong **)(*(longlong *)(arg1 + 0x10) + 0x10);
  puVar5 = *(undefined8 **)(*plVar4 + 0x10);
  uVar14 = *(int *)(arg1 + 0x18) - 1;
  lVar6 = *(longlong *)(plVar4[uVar14 >> 10] + 0x10);
  FUN_01908400();
  if ((local_60 == '\0') && (local_68 != 0)) {
    FUN_00d50b00();
  }
  local_38 = *puVar5;
  local_40 = puVar5[1];
  local_48 = (double)puVar5[2];
  lVar9 = FUN_01907d40();
  FUN_00e7bcc0();
  FUN_00e7bdc0();
  FUN_01523ca0();
  if (local_60 == '\0') {
    if (lVar9 != 0) {
      FUN_00d50b00();
      goto LAB_015236d7;
    }
  }
  else if (lVar9 != 0) {
LAB_015236d7:
    uVar16 = *(uint *)(lVar9 + 0x18);
    uVar1 = uVar16 + 0x1f;
    if (uVar1 < 0x3f) {
      *(undefined1 *)(this + 1) = 0;
      *this = 0;
    }
    else {
      uVar12 = uVar16;
      if ((int)uVar16 < 0) {
        uVar12 = uVar1;
      }
      if (0x1f < (int)uVar16) {
        iVar11 = (int)uVar12 >> 5;
        iVar15 = (int)lVar9;
        if (iVar15 == 1) {
          iVar15 = 0;
          lVar19 = 0x10;
          bVar17 = 0;
          bVar20 = false;
          dVar24 = local_48;
          do {
            dVar25 = dVar24;
            bVar7 = bVar17;
            if (iVar15 != 0) {
              lVar13 = *(longlong *)(lVar9 + 0x10);
              uVar22 = *(undefined8 *)(lVar13 + -0x10 + lVar19);
              uVar2 = *(undefined8 *)(lVar13 + -8 + lVar19);
              dVar21 = *(double *)(lVar13 + lVar19);
              dVar23 = dVar21;
              if (dVar21 <= local_48) {
                dVar23 = local_48;
              }
              dVar25 = dVar21;
              if (dVar24 <= dVar21) {
                dVar25 = dVar24;
              }
              if (dVar23 < dVar25 * _DAT_0240e9b0) {
                bVar17 = 1;
                if ((!bVar20) && (local_48 = dVar23, bVar7 = 1, iVar15 + 1 < iVar11))
                goto LAB_0152376f;
              }
              FUN_01908480(local_40,local_38,uVar2,uVar22);
              bVar20 = (bool)(~bVar17 & 1);
              uVar16 = *(uint *)(lVar9 + 0x18);
              local_40 = uVar2;
              local_38 = uVar22;
              dVar25 = dVar21;
              local_48 = dVar21;
              bVar7 = 0;
            }
LAB_0152376f:
            bVar17 = bVar7;
            iVar15 = iVar15 + 1;
            uVar12 = uVar16 + 0x1f;
            if (-1 < (int)uVar16) {
              uVar12 = uVar16;
            }
            iVar11 = (int)uVar12 >> 5;
            lVar19 = lVar19 + 0x20;
            dVar24 = dVar25;
          } while (iVar15 < iVar11);
        }
        else {
          iVar18 = 0;
          bVar7 = 0;
          bVar17 = false;
          local_78 = local_48;
          do {
            lVar19 = *(longlong *)(lVar9 + 0x10);
            lVar13 = (longlong)iVar18 * 0x20;
            uVar22 = *(undefined8 *)(lVar19 + 8 + lVar13);
            dVar24 = local_78;
            if (iVar18 == 0) {
              iVar18 = 0;
              lVar19 = 0x28;
              do {
                FUN_00e7cd00();
                uVar10 = FUN_00e7cd00(uVar22);
                if (((extraout_var != 0) && (uVar10 >> 0x20 != 0)) &&
                   (cVar8 = FUN_00e7c000(), cVar8 != '\0')) break;
                iVar18 = iVar18 + 1;
                uVar22 = *(undefined8 *)(*(longlong *)(lVar9 + 0x10) + lVar19);
                lVar19 = lVar19 + 0x20;
              } while (iVar18 < iVar15 * 2);
            }
            else {
              uVar2 = *(undefined8 *)(lVar19 + lVar13);
              dVar25 = *(double *)(lVar19 + 0x10 + lVar13);
              dVar21 = dVar25;
              if (dVar25 <= local_48) {
                dVar21 = local_48;
              }
              dVar24 = dVar25;
              if (local_78 <= dVar25) {
                dVar24 = local_78;
              }
              if (((dVar24 * _DAT_0240e9b0 <= dVar21) || (bVar7 = 1, (bool)bVar17)) ||
                 (local_48 = dVar21, iVar11 <= iVar15 + iVar18)) {
                FUN_01908480(local_40,local_38,uVar22,uVar2);
                bVar17 = ~bVar7;
                bVar7 = 0;
                local_40 = uVar22;
                local_38 = uVar2;
                dVar24 = dVar25;
                local_48 = dVar25;
              }
            }
            iVar18 = iVar18 + iVar15;
            iVar3 = *(int *)(lVar9 + 0x18);
            iVar11 = iVar3 + 0x1f;
            if (-1 < iVar3) {
              iVar11 = iVar3;
            }
            iVar11 = iVar11 >> 5;
            local_78 = dVar24;
          } while (iVar18 < iVar11);
        }
      }
      lVar9 = (ulonglong)(uVar14 & 0x3ff) * 0x20;
      FUN_01908480(local_40,local_38,*(undefined8 *)(lVar6 + 8 + lVar9),
                   *(undefined8 *)(lVar6 + lVar9));
      *this = local_68;
      *(undefined1 *)(this + 1) = 1;
    }
    bVar20 = 0x3e < uVar1;
    FUN_00d50b20();
    goto LAB_0152393f;
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  bVar20 = false;
LAB_0152393f:
  if ((!bVar20) && (local_68 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @019fc330 (1463 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  longlong *plVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong arg1;
  undefined8 *this;
  longlong lVar7;
  undefined8 *puVar8;
  longlong local_140;
  undefined8 *local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined4 local_9c;
  undefined8 *local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  lVar7 = *param_2;
  local_31 = (char)param_2[1];
  if ((local_31 != '\0') && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  local_a8 = lVar7;
  if (*(longlong *)(arg1 + 0x20) == 0) {
    plVar4 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar4 + 0x18))();
    lVar7 = *(longlong *)(arg1 + 0x20);
    *(longlong **)(arg1 + 0x20) = plVar4;
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
  }
  local_140 = local_a8;
  FUN_00083ea0(2,&local_140);
  FUN_019f9540();
  local_80 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  local_78 = (undefined8 *)&DAT_0253d630;
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  local_78 = &DAT_024c5048;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = FUN_00ca18c0();
  lVar7 = local_80;
  if ((char)uVar3 != '\0') {
    local_c0 = local_80;
    local_b8 = '\0';
    FUN_00c9fe40();
    puVar8 = local_78;
    plVar4 = &local_70;
    if ((char)local_70 == '\0') {
      plVar4 = &local_48;
    }
    local_48 = CONCAT71(local_48._1_7_,(char)local_70);
    *(undefined1 *)plVar4 = 0;
    if (((char)local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar8 == (undefined8 *)0x0) {
      bVar2 = false;
      bVar1 = false;
    }
    else {
      bVar2 = true;
      bVar1 = true;
      if ((char)local_48 == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_b8 != '\0') && (bVar1 = bVar2, local_c0 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_019fc891;
  }
  FUN_017178d0();
  puVar8 = local_78;
  if (local_78 == (undefined8 *)0x0) {
    local_9c = (undefined4)CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
  }
  else {
    if ((char)local_70 == '\0') {
      FUN_00d50b00();
      local_9c = 0;
      if (((char)local_70 == '\0') || (local_78 == (undefined8 *)0x0)) goto LAB_019fc5c9;
      FUN_00d50b20();
    }
    else {
      local_70._0_1_ = '\0';
    }
    local_9c = 0;
  }
LAB_019fc5c9:
  local_100 = puVar8;
  local_f8 = '\0';
  pVar6 = 0;
  local_b0 = puVar8;
  FUN_017921e0(0,&local_100,0);
  lVar7 = local_80;
  local_98 = local_78;
  if ((char)local_70 == '\0') {
    if (((local_78 != (undefined8 *)0x0) && (FUN_00d50b00(), (char)local_70 != '\0')) &&
       (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70._0_1_ = '\0';
  }
  if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = local_98;
  local_e8 = '\0';
  if (*param_1 == 0) {
    local_40 = '\0';
    local_48 = 0;
LAB_019fc741:
    local_90 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    local_90 = local_48;
    local_88 = 0;
    if (local_40 == '\0') {
      if (local_48 == 0) goto LAB_019fc741;
      FUN_00d50b00();
    }
    else {
      local_40 = '\0';
    }
  }
  local_88 = '\x01';
  FUN_01718c10();
  puVar8 = local_78;
  if (local_78 == (undefined8 *)0x0) {
    bVar1 = false;
  }
  else if ((char)local_70 == '\0') {
    FUN_00d50b00();
    bVar1 = true;
    if (((char)local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70._0_1_ = '\0';
    bVar1 = true;
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  local_e0 = puVar8;
  local_d8 = '\0';
  local_d0 = lVar7;
  local_c8 = '\0';
  FUN_00ca0840();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_9c == '\0' && local_b0 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
LAB_019fc891:
  *(undefined1 *)(this + 1) = 0;
  if ((!bVar1) && (puVar8 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *this = puVar8;
  *(undefined1 *)(this + 1) = 1;
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01a37880 (1443 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *in_RDX;
  undefined8 *arg1;
  longlong *this;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong *local_f8;
  char local_f0;
  longlong local_e0;
  char local_d8;
  undefined4 local_cc;
  float local_c8;
  float local_c4;
  float local_b8;
  longlong local_98;
  char local_90;
  longlong local_40;
  char local_38;
  
  fVar12 = (float)((ulonglong)param_3 >> 0x20);
  (**(code **)(*(longlong *)*in_RDX + 0x388))();
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_90 = '\0';
  }
  FUN_01d48a10();
  if (local_98 != 0) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  fVar8 = (float)((ulonglong)param_4 >> 0x20) + fVar12 + DAT_02390d00;
  param_1 = param_1 + DAT_023b36a8;
  fVar11 = param_2 + DAT_0241fd58 + param_1 + DAT_02390d00;
  (**(code **)(*(longlong *)*in_RDX + 0x368))();
  if (local_90 == '\0') {
    if (local_98 != 0) {
      FUN_00d50b00();
      goto LAB_01a37a0e;
    }
  }
  else if (local_98 != 0) {
LAB_01a37a0e:
    fVar13 = DAT_023942a8 + fVar12;
    if (0 < *(int *)(local_98 + 0xc)) {
      local_c8 = DAT_023908ec + fVar12;
      local_c4 = DAT_02390d04 + fVar12;
      fVar12 = fVar12 + DAT_0241be54;
      lVar7 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_98 + 0x10) + lVar7 * 8);
        iVar6 = (**(code **)(*plVar1 + 0x380))();
        local_b8 = fVar12;
        if (iVar6 == 0) {
          (**(code **)(*plVar1 + 0x378))();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            cVar5 = (**(code **)(*(longlong *)this[0x2d] + 0x3c8))();
            local_b8 = local_c8;
            if (cVar5 == '\0') {
              local_b8 = fVar13;
            }
            FUN_01d48370();
            uVar9 = (**(code **)(*this + 0x640))();
            lVar4 = DAT_027e1fb8;
            if (DAT_027e1fb8 != 0) {
              uVar9 = FUN_00d50b00();
            }
            local_e0 = lVar4;
            local_d8 = '\x01';
            (**(code **)(*local_f8 + 0x3b0))(uVar9,&local_e0);
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
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar2 = (longlong *)*arg1;
            (**(code **)(*plVar1 + 0x378))();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            fVar10 = (float)(**(code **)(*plVar1 + 0x368))();
            (**(code **)(*plVar2 + 0x3f0))(fVar10 + DAT_02390d2c,local_c4);
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d48390();
          }
        }
        cVar5 = (**(code **)(*(longlong *)this[0x2d] + 0x3c8))();
        if ((cVar5 != '\0') || (iVar6 = (**(code **)(*plVar1 + 0x380))(), iVar6 == 0)) {
          plVar2 = (longlong *)*arg1;
          local_cc = (**(code **)(*plVar1 + 0x368))();
          uVar9 = (**(code **)(*plVar1 + 0x368))();
          (**(code **)(*plVar2 + 0x3e0))(local_cc,local_b8,uVar9,fVar8);
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < *(int *)(local_98 + 0xc));
    }
    FUN_01a01420();
    bVar3 = false;
    goto LAB_01a37dc5;
  }
  fVar13 = fVar12 + DAT_023942a8;
  bVar3 = true;
LAB_01a37dc5:
  (**(code **)(*(longlong *)*arg1 + 0x3e0))(param_1,fVar13,fVar11,fVar13);
  (**(code **)(*(longlong *)*arg1 + 0x3e0))(param_1,fVar8,fVar11,fVar8);
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b0e720 (1432 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  longlong *this;
  longlong **pplVar6;
  undefined8 unaff_R14;
  undefined4 uVar7;
  float fVar8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_98;
  longlong *local_90;
  float local_84;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar2 = *(longlong *)PTR____stack_chk_guard_024a9898;
  cVar1 = *(char *)((longlong)this + 0x315);
  if ((cVar1 == '\0') || (param_2 == '\0')) goto LAB_01b0ec8e;
  FUN_01caeae0();
  if (local_58 == '\0') {
    if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b0ec8e;
    FUN_00d50b00();
  }
  else if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b0ec8e;
  FUN_00d50b00();
  *(int *)((longlong)this + 0x2fc) = *(int *)((longlong)this + 0x2fc) + 1;
  uVar7 = FUN_01d66da0();
  local_e0 = DAT_027e1430;
  if (DAT_027e1430 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_d8 = '\x01';
  pplVar6 = &local_70;
  FUN_000175c0(uVar7,&local_e0);
  plVar3 = local_70;
  FUN_00053ac0();
  if (plVar3 == (longlong *)0x0) {
LAB_01b0e860:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b0e860;
  }
  local_90 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (local_90 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  uVar7 = FUN_01d66da0();
  local_d0 = DAT_027e3bd0;
  if (DAT_027e3bd0 != 0) {
    uVar7 = FUN_00d50b00();
  }
  local_c8 = '\x01';
  pplVar6 = &local_70;
  FUN_000175c0(uVar7,&local_d0);
  plVar3 = local_70;
  FUN_00053ac0();
  if (plVar3 == (longlong *)0x0) {
LAB_01b0e94b:
    pplVar6 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01b0e94b;
  }
  local_98 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (local_98 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (local_90 == (longlong *)0x0) {
    if (local_98 != (longlong *)0x0) {
      FUN_00d459e0();
      FUN_017736a0();
      goto LAB_01b0ec54;
    }
  }
  else {
    local_84 = (float)FUN_00d459e0();
    FUN_01ad3cb0();
    plVar3 = local_70;
    if (local_68 == '\0') {
      if (local_70 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01b0e9fb;
      }
    }
    else {
LAB_01b0e9fb:
      if ((plVar3 == (longlong *)0x0) || ((local_84 == 0.0 && (!NAN(local_84))))) {
        if (plVar3 == (longlong *)0x0) goto LAB_01b0ec48;
      }
      else {
        FUN_01af1380();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173b790();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_01770220();
        FUN_01770230(fVar8 + local_84);
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01b07460();
        *(float *)((longlong)this + 0x1e4) = local_84;
        (**(code **)(*this + 0x620))();
        FUN_01f27fe0();
        local_a8 = 0;
        (**(code **)(this[0x2d] + 0x10))();
        uVar7 = FUN_00d50b00();
        local_a8 = '\x01';
        local_c0 = 0;
        local_b8 = '\0';
        local_b0 = this + 0x2d;
        FUN_01f47190(uVar7,&local_c0);
        if ((local_b8 != '\0') && (local_c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          (**(code **)(*local_b0 + 0x10))();
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
LAB_01b0ec48:
    if (local_98 != (longlong *)0x0) {
LAB_01b0ec54:
      FUN_00d50b20();
      if (local_90 == (longlong *)0x0) goto LAB_01b0ec72;
    }
    FUN_00d50b20();
  }
LAB_01b0ec72:
  FUN_01af6500();
  FUN_00d50b20();
  FUN_00d50b20();
LAB_01b0ec8e:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar2) {
    return CONCAT71((int7)((ulonglong)unaff_R14 >> 8),cVar1) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ==================================================
// @01750eb0 (1418 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  char cVar28;
  int iVar29;
  void *pvVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong *arg1;
  longlong this;
  longlong local_40;
  char local_38;
  
  cVar28 = FUN_0173ed60();
  if (cVar28 != '\0') {
    pvVar30 = _pthread_getspecific(param_1);
    if (pvVar30 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar28 = FUN_0173ed60();
    if (cVar28 != '\0') {
      lVar33 = *(longlong *)(this + 0x60);
      if (lVar33 != 0) {
        FUN_00d50b00();
      }
      pvVar30 = _pthread_getspecific(param_1);
      if (pvVar30 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar29 = FUN_01770c70();
      bVar5 = true;
      if (iVar29 < 0xd) {
        lVar32 = *arg1;
        pvVar30 = _pthread_getspecific(param_1);
        if (pvVar30 != (void *)0x0) {
          lVar32 = *arg1;
          lVar31 = FUN_00e8b990();
          if (lVar31 != 0) {
            lVar32 = *(longlong *)(lVar32 + 0x20 + (ulonglong)(*(uint *)(lVar31 + 0x154) & 1) * 8);
          }
        }
        lVar32 = *(longlong *)(lVar32 + 0x60);
        if (lVar32 != 0) {
          FUN_00d50b00();
        }
        pvVar30 = _pthread_getspecific(param_1);
        if (pvVar30 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar29 = FUN_01770c70();
        bVar5 = 0xc < iVar29;
        if (lVar32 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar33 != 0) {
        FUN_00d50b20();
      }
      if (!bVar5) {
        lVar33 = *arg1;
        pvVar30 = _pthread_getspecific(param_1);
        if (pvVar30 != (void *)0x0) {
          lVar33 = *arg1;
          lVar32 = FUN_00e8b990();
          if (lVar32 != 0) {
            lVar33 = *(longlong *)(lVar33 + 0x20 + (ulonglong)(*(uint *)(lVar32 + 0x154) & 1) * 8);
          }
        }
        FUN_0174c730();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_0174c730();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c8e690();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        FUN_00c92170();
        FUN_00c92160();
        puVar1 = *(undefined8 **)(local_40 + 0x10);
        puVar2 = *(undefined8 **)(local_40 + 0x10);
        uVar21 = puVar2[0xb];
        puVar1[10] = puVar2[10];
        puVar1[0xb] = uVar21;
        uVar21 = puVar2[9];
        puVar1[8] = puVar2[8];
        puVar1[9] = uVar21;
        uVar21 = *puVar2;
        uVar22 = puVar2[1];
        uVar23 = puVar2[2];
        uVar24 = puVar2[3];
        uVar25 = puVar2[4];
        uVar26 = puVar2[5];
        uVar27 = puVar2[7];
        puVar1[6] = puVar2[6];
        puVar1[7] = uVar27;
        puVar1[4] = uVar25;
        puVar1[5] = uVar26;
        puVar1[2] = uVar23;
        puVar1[3] = uVar24;
        *puVar1 = uVar21;
        puVar1[1] = uVar22;
        lVar32 = *(longlong *)(local_40 + 0x10);
        puVar3 = *(undefined4 **)(local_40 + 0x10);
        uVar21 = *(undefined8 *)(puVar3 + 0x16);
        *(undefined8 *)(lVar32 + 0xb0) = *(undefined8 *)(puVar3 + 0x14);
        *(undefined8 *)(lVar32 + 0xb8) = uVar21;
        uVar21 = *(undefined8 *)(puVar3 + 0x12);
        *(undefined8 *)(lVar32 + 0xa0) = *(undefined8 *)(puVar3 + 0x10);
        *(undefined8 *)(lVar32 + 0xa8) = uVar21;
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        uVar8 = puVar3[2];
        uVar9 = puVar3[3];
        uVar10 = puVar3[4];
        uVar11 = puVar3[5];
        uVar12 = puVar3[6];
        uVar13 = puVar3[7];
        uVar14 = puVar3[8];
        uVar15 = puVar3[9];
        uVar16 = puVar3[10];
        uVar17 = puVar3[0xb];
        uVar18 = puVar3[0xd];
        uVar19 = puVar3[0xe];
        uVar20 = puVar3[0xf];
        *(undefined4 *)(lVar32 + 0x90) = puVar3[0xc];
        *(undefined4 *)(lVar32 + 0x94) = uVar18;
        *(undefined4 *)(lVar32 + 0x98) = uVar19;
        *(undefined4 *)(lVar32 + 0x9c) = uVar20;
        *(undefined4 *)(lVar32 + 0x80) = uVar14;
        *(undefined4 *)(lVar32 + 0x84) = uVar15;
        *(undefined4 *)(lVar32 + 0x88) = uVar16;
        *(undefined4 *)(lVar32 + 0x8c) = uVar17;
        *(undefined4 *)(lVar32 + 0x70) = uVar10;
        *(undefined4 *)(lVar32 + 0x74) = uVar11;
        *(undefined4 *)(lVar32 + 0x78) = uVar12;
        *(undefined4 *)(lVar32 + 0x7c) = uVar13;
        *(undefined4 *)(lVar32 + 0x60) = uVar6;
        *(undefined4 *)(lVar32 + 100) = uVar7;
        *(undefined4 *)(lVar32 + 0x68) = uVar8;
        *(undefined4 *)(lVar32 + 0x6c) = uVar9;
        lVar32 = *(longlong *)(local_40 + 0x10);
        lVar31 = 0;
        do {
          if (*(int *)(lVar32 + lVar31 * 4) == 0) goto LAB_01751190;
          piVar4 = *(int **)(local_40 + 0x10);
          if (*(int *)(lVar32 + lVar31 * 4) == 0) {
            if (*piVar4 == 0) goto LAB_017511c1;
LAB_017513ff:
            uVar34 = 0;
            if (local_40 == 0) goto LAB_0175140e;
            goto LAB_01751406;
          }
          if (*piVar4 == 0) goto LAB_017513ff;
LAB_017511c1:
          if (*(int *)(lVar32 + 4 + lVar31 * 4) == 0) {
            if (piVar4[1] == 0) goto LAB_017511dc;
            goto LAB_017513ff;
          }
          if (piVar4[1] == 0) goto LAB_017513ff;
LAB_017511dc:
          if (*(int *)(lVar32 + 8 + lVar31 * 4) == 0) {
            if (piVar4[2] == 0) goto LAB_017511f7;
            goto LAB_017513ff;
          }
          if (piVar4[2] == 0) goto LAB_017513ff;
LAB_017511f7:
          if (*(int *)(lVar32 + 0xc + lVar31 * 4) == 0) {
            if (piVar4[3] == 0) goto LAB_01751212;
            goto LAB_017513ff;
          }
          if (piVar4[3] == 0) goto LAB_017513ff;
LAB_01751212:
          if (*(int *)(lVar32 + 0x10 + lVar31 * 4) == 0) {
            if (piVar4[4] == 0) goto LAB_0175122d;
            goto LAB_017513ff;
          }
          if (piVar4[4] == 0) goto LAB_017513ff;
LAB_0175122d:
          if (*(int *)(lVar32 + 0x14 + lVar31 * 4) == 0) {
            if (piVar4[5] == 0) goto LAB_01751248;
            goto LAB_017513ff;
          }
          if (piVar4[5] == 0) goto LAB_017513ff;
LAB_01751248:
          if (*(int *)(lVar32 + 0x18 + lVar31 * 4) == 0) {
            if (piVar4[6] == 0) goto LAB_01751263;
            goto LAB_017513ff;
          }
          if (piVar4[6] == 0) goto LAB_017513ff;
LAB_01751263:
          if (*(int *)(lVar32 + 0x1c + lVar31 * 4) == 0) {
            if (piVar4[7] == 0) goto LAB_0175127e;
            goto LAB_017513ff;
          }
          if (piVar4[7] == 0) goto LAB_017513ff;
LAB_0175127e:
          if (*(int *)(lVar32 + 0x20 + lVar31 * 4) == 0) {
            if (piVar4[8] == 0) goto LAB_01751299;
            goto LAB_017513ff;
          }
          if (piVar4[8] == 0) goto LAB_017513ff;
LAB_01751299:
          if (*(int *)(lVar32 + 0x24 + lVar31 * 4) == 0) {
            if (piVar4[9] == 0) goto LAB_017512b4;
            goto LAB_017513ff;
          }
          if (piVar4[9] == 0) goto LAB_017513ff;
LAB_017512b4:
          if (*(int *)(lVar32 + 0x28 + lVar31 * 4) == 0) {
            if (piVar4[10] == 0) goto LAB_017512cf;
            goto LAB_017513ff;
          }
          if (piVar4[10] == 0) goto LAB_017513ff;
LAB_017512cf:
          if (*(int *)(lVar32 + 0x2c + lVar31 * 4) == 0) {
            if (piVar4[0xb] == 0) goto LAB_017512ea;
            goto LAB_017513ff;
          }
          if (piVar4[0xb] == 0) goto LAB_017513ff;
LAB_017512ea:
          if (*(int *)(lVar32 + 0x30 + lVar31 * 4) == 0) {
            if (piVar4[0xc] == 0) goto LAB_01751305;
            goto LAB_017513ff;
          }
          if (piVar4[0xc] == 0) goto LAB_017513ff;
LAB_01751305:
          if (*(int *)(lVar32 + 0x34 + lVar31 * 4) == 0) {
            if (piVar4[0xd] == 0) goto LAB_01751320;
            goto LAB_017513ff;
          }
          if (piVar4[0xd] == 0) goto LAB_017513ff;
LAB_01751320:
          if (*(int *)(lVar32 + 0x38 + lVar31 * 4) == 0) {
            if (piVar4[0xe] == 0) goto LAB_0175133b;
            goto LAB_017513ff;
          }
          if (piVar4[0xe] == 0) goto LAB_017513ff;
LAB_0175133b:
          if (*(int *)(lVar32 + 0x3c + lVar31 * 4) == 0) {
            if (piVar4[0xf] == 0) goto LAB_01751356;
            goto LAB_017513ff;
          }
          if (piVar4[0xf] == 0) goto LAB_017513ff;
LAB_01751356:
          if (*(int *)(lVar32 + 0x40 + lVar31 * 4) == 0) {
            if (piVar4[0x10] == 0) goto LAB_01751371;
            goto LAB_017513ff;
          }
          if (piVar4[0x10] == 0) goto LAB_017513ff;
LAB_01751371:
          if (*(int *)(lVar32 + 0x44 + lVar31 * 4) == 0) {
            if (piVar4[0x11] == 0) goto LAB_01751385;
            goto LAB_017513ff;
          }
          if (piVar4[0x11] == 0) goto LAB_017513ff;
LAB_01751385:
          if (*(int *)(lVar32 + 0x48 + lVar31 * 4) == 0) {
            if (piVar4[0x12] == 0) goto LAB_01751399;
            goto LAB_017513ff;
          }
          if (piVar4[0x12] == 0) goto LAB_017513ff;
LAB_01751399:
          if (*(int *)(lVar32 + 0x4c + lVar31 * 4) == 0) {
            if (piVar4[0x13] == 0) goto LAB_017513ad;
            goto LAB_017513ff;
          }
          if (piVar4[0x13] == 0) goto LAB_017513ff;
LAB_017513ad:
          if (*(int *)(lVar32 + 0x50 + lVar31 * 4) == 0) {
            if (piVar4[0x14] == 0) goto LAB_017513c1;
            goto LAB_017513ff;
          }
          if (piVar4[0x14] == 0) goto LAB_017513ff;
LAB_017513c1:
          if (*(int *)(lVar32 + 0x54 + lVar31 * 4) == 0) {
            if (piVar4[0x15] == 0) goto LAB_017513d5;
            goto LAB_017513ff;
          }
          if (piVar4[0x15] == 0) goto LAB_017513ff;
LAB_017513d5:
          if (*(int *)(lVar32 + 0x58 + lVar31 * 4) == 0) {
            if (piVar4[0x16] == 0) goto LAB_017513e9;
            goto LAB_017513ff;
          }
          if (piVar4[0x16] == 0) goto LAB_017513ff;
LAB_017513e9:
          if (*(int *)(lVar32 + 0x5c + lVar31 * 4) == 0) {
            if (piVar4[0x17] != 0) goto LAB_017513ff;
          }
          else if (piVar4[0x17] == 0) goto LAB_017513ff;
LAB_01751190:
          lVar31 = lVar31 + 1;
        } while (lVar31 != 0x18);
        uVar34 = CONCAT71((int7)((ulonglong)lVar33 >> 8),1);
        if (local_40 != 0) {
LAB_01751406:
          FUN_00d50b20();
        }
LAB_0175140e:
        if (local_40 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
        goto LAB_01751017;
      }
    }
  }
  uVar34 = 0;
LAB_01751017:
  return uVar34 & 0xffffffff;
}




// ==================================================
// @0199ab50 (1384 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong *this;
  undefined4 uVar8;
  longlong local_c0;
  char local_b8;
  longlong local_90;
  char local_88;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)("/usr/lib/libobjc.A.dylib" + *this + 0x18))();
  if ((longlong *)this[0x69] == (longlong *)0x0) {
    return;
  }
  cVar2 = (**(code **)(*(longlong *)this[0x69] + 0x50))();
  if (cVar2 != '\0') {
    return;
  }
  if (*(char *)((longlong)this + 0x4dd) == '\0') {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01265ae0();
  lVar1 = this[0x70];
  lVar4 = lVar1;
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar4 = 0;
        goto LAB_0199abfe;
      }
      FUN_00d50b00();
      lVar1 = this[0x70];
      this[0x70] = local_40;
      lVar4 = local_40;
    }
    else {
      local_38 = '\0';
      lVar4 = local_40;
LAB_0199abfe:
      this[0x70] = lVar4;
    }
    param_1 = (pthread_key_t)lVar1;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar4 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  local_48 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_48 = '\x01';
  local_50 = local_90;
  pVar7 = 0;
  (**(code **)((longlong)&linkedit_data_command_000013f8.dataoff + *this))(0,&local_50);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01264970();
  lVar1 = *(longlong *)(local_c0 + 0x28);
  if (lVar1 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == 0) {
        *(undefined8 *)(local_c0 + 0x28) = 0;
      }
      else {
        uVar8 = FUN_00d50b00();
        lVar1 = *(longlong *)(local_c0 + 0x28);
        *(longlong *)(local_c0 + 0x28) = local_40;
      }
    }
    else {
      local_38 = '\0';
      *(longlong *)(local_c0 + 0x28) = local_40;
    }
    if (lVar1 != 0) {
      uVar8 = FUN_00d50b20();
    }
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar1 = this[0x70];
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b00();
  }
  (**(code **)("/usr/lib/libobjc.A.dylib" + *this))(uVar8,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_016779b0();
  lVar4 = this[0x71];
  lVar6 = lVar4;
  if (lVar4 == local_40) goto LAB_0199aec5;
  if (local_38 == '\0') {
    if (local_40 == 0) {
      lVar6 = 0;
      goto LAB_0199ae77;
    }
    FUN_00d50b00();
    lVar4 = this[0x71];
    this[0x71] = local_40;
    lVar6 = local_40;
  }
  else {
    local_38 = '\0';
    lVar6 = local_40;
LAB_0199ae77:
    this[0x71] = lVar6;
  }
  pVar7 = (pthread_key_t)lVar4;
  if (lVar4 != 0) {
    FUN_00d50b20();
    lVar6 = local_40;
  }
LAB_0199aec5:
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar8 = FUN_01264170();
  FUN_01677b30(0,uVar8,DAT_0238fee8);
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  plVar5 = (longlong *)FUN_00e8b990();
  lVar1 = this[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0x3a0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  FUN_00cb1fa0();
  plVar5 = (longlong *)this[0x69];
  lVar1 = this[0x70];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar5 + 0xf0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019b7240 (1327 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  undefined1 in_CL;
  longlong *plVar9;
  int unaff_ESI;
  longlong *this;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  char local_80;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  plVar3 = local_40;
  if (param_2 == 0) {
    param_1 = (**(code **)(*this + 0xda0))();
  }
  (**(code **)(*this + 0x9b0))(param_1,in_CL);
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (longlong *)0x0) {
    return;
  }
  uVar1 = *(uint *)((longlong)local_40 + 0xc);
  if ((ulonglong)uVar1 != 0) {
    (**(code **)(*this + 0xa28))();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar9 = (longlong *)&DAT_02572358;
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    uVar15 = FUN_00d21370();
    if (0 < (int)uVar1) {
      uVar11 = 0;
      do {
        plVar2 = *(longlong **)(plVar3[2] + uVar11 * 8);
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 == (longlong *)0x0) {
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar15 = FUN_0125a2c0();
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          plVar10 = plVar3;
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            plVar9 = plVar3;
            plVar10 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
          }
          iVar5 = (**(code **)(*plVar10 + 0x3a8))(uVar15);
          uVar15 = extraout_XMM0_Da_00;
        }
        else {
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)plVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar5 = FUN_01507f00();
          uVar15 = extraout_XMM0_Da;
          if (local_40 != (longlong *)0x0) {
            uVar15 = FUN_00d50b20();
          }
        }
        if (iVar5 == unaff_ESI) {
          local_38 = '\0';
          uVar15 = FUN_00d21140();
          local_40 = plVar2;
        }
        if (plVar2 != (longlong *)0x0) {
          uVar15 = FUN_00d50b20();
        }
        uVar11 = uVar11 + 1;
      } while (uVar1 != uVar11);
    }
    uVar11 = (ulonglong)*(uint *)((longlong)puVar6 + 0xc);
    if (uVar11 != 0) {
      local_80 = (char)param_2;
      if ((local_80 == '\0') || (param_3 == '\0')) {
LAB_019b76f3:
        (**(code **)(*this + 0xdb8))(uVar15,1);
      }
      else {
        if (0 < (int)*(uint *)((longlong)puVar6 + 0xc)) {
          bVar13 = true;
          uVar12 = 1;
          do {
            lVar8 = *(longlong *)(puVar6[2] + -8 + uVar12 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            (**(code **)(*this + 0xe20))();
            cVar4 = FUN_00d23d70();
            uVar15 = extraout_XMM0_Da_01;
            if ((local_58 != '\0') && (local_60 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            if (lVar8 != 0) {
              uVar15 = FUN_00d50b20();
            }
            if (cVar4 == '\0') {
              if (bVar13) goto LAB_019b76f3;
              break;
            }
            bVar13 = uVar12 < uVar11;
            bVar14 = uVar12 != uVar11;
            uVar12 = uVar12 + 1;
          } while (bVar14);
        }
        (**(code **)(*this + 0xdc0))(uVar15,1);
      }
    }
    FUN_00d50b20();
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01b1c160 (1302 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *arg1;
  longlong this;
  longlong *plVar8;
  float fVar9;
  float fVar10;
  float local_64;
  longlong *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this + 0x316) != '\0') && (*(char *)(this + 0x315) != '\0')) {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
        FUN_00d50b00();
        goto LAB_01b1c1c4;
      }
    }
    else if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
LAB_01b1c1c4:
      FUN_01caeae0();
      if (local_58 == '\0') {
        if (in_stack_ffffffffffffffa0 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01b1c210;
        }
LAB_01b1c2c5:
        uVar7 = 0;
      }
      else {
        if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b1c2c5;
LAB_01b1c210:
        if (param_2 == '\0') {
          iVar2 = FUN_01d654a0();
          if (((iVar2 == 0) || (iVar2 = FUN_01d654a0(), iVar2 == 1)) &&
             ((*(int *)(this + 400) == -1000000 || (*(longlong *)(this + 0x1a0) == 0)))) {
LAB_01b1c63e:
            uVar7 = 0;
          }
          else {
            iVar2 = FUN_01d654a0();
            if (iVar2 == 1) {
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0173b790();
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar3 = FUN_01770870();
              arg1 = (undefined8 *)(ulonglong)uVar3;
              if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)uVar3 != '\0') {
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0173b790();
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar3 = FUN_01770ea0();
                arg1 = (undefined8 *)(ulonglong)uVar3;
                if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar4 = FUN_0174a9c0();
                if (uVar3 == uVar4) goto LAB_01b1c63e;
              }
            }
            iVar2 = FUN_01d654a0();
            uVar7 = CONCAT71((int7)((ulonglong)arg1 >> 8),1);
            if (iVar2 == 2) goto LAB_01b1c63e;
          }
        }
        else {
          FUN_00d50b00();
          *(int *)(this + 0x2fc) = *(int *)(this + 0x2fc) + 1;
          fVar9 = *(float *)(this + 0x198);
          iVar2 = FUN_01d654a0();
          if (iVar2 == 0) {
            pvVar5 = _pthread_getspecific(param_1);
            plVar8 = in_stack_ffffffffffffffa0;
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              plVar8 = (longlong *)
                       in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            local_64 = (float)(**(code **)(*plVar8 + 0x3a0))();
            pvVar5 = _pthread_getspecific(param_1);
            if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
              in_stack_ffffffffffffffa0 =
                   (longlong *)
                   in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
            }
            fVar9 = (float)(**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
LAB_01b1c477:
            fVar9 = (fVar9 - local_64) * DAT_0239011c;
LAB_01b1c487:
            arg1 = &DAT_02802558;
            FUN_01b05350(fVar9);
          }
          else {
            iVar2 = FUN_01d654a0();
            if (iVar2 == 1) {
              pvVar5 = _pthread_getspecific(param_1);
              plVar8 = in_stack_ffffffffffffffa0;
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                plVar8 = (longlong *)
                         in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              local_64 = (float)(**(code **)(*plVar8 + 0x3a0))();
              pvVar5 = _pthread_getspecific(param_1);
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                in_stack_ffffffffffffffa0 =
                     (longlong *)
                     in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              fVar9 = (float)(**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
              goto LAB_01b1c477;
            }
            iVar2 = FUN_01d654a0();
            if (iVar2 == 2) {
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_017423e0(fVar9);
              pvVar5 = _pthread_getspecific(param_1);
              if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
                in_stack_ffffffffffffffa0 =
                     (longlong *)
                     in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
              }
              fVar10 = (float)(**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
              fVar9 = fVar9 - fVar10;
              goto LAB_01b1c487;
            }
          }
          FUN_01af6500();
          FUN_00d50b20();
          uVar7 = CONCAT71((int7)((ulonglong)arg1 >> 8),1);
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01b1c650;
    }
  }
  uVar7 = 0;
LAB_01b1c650:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == lVar1) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ==================================================
// @01a385a0 (1240 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *arg1;
  longlong *this;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  undefined8 uStack_d0;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  float local_8c;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  float local_44;
  longlong local_40;
  char local_38;
  
  fStack_dc = (float)((ulonglong)param_2 >> 0x20);
  fStack_e0 = (float)param_2;
  fStack_e4 = (float)((ulonglong)param_1 >> 0x20);
  local_e8 = (float)param_1;
  if (*(int *)(this[0x31] + 0xc) == 0) {
    local_c0 = *arg1;
    local_b8 = '\0';
    (**(code **)(*this + 0x9f8))(local_e8,&local_e8);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    local_44 = local_e8;
    _local_d8 = CONCAT44(fStack_d4,fStack_e0 + local_e8);
    FUN_01d48b40(DAT_02390124);
    uVar4 = (**(code **)(*this + 0x640))();
    plVar1 = local_58;
    local_b0 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_b0);
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    fVar5 = local_d8 + DAT_02390d00;
    lVar3 = *(longlong *)*arg1;
    uVar4 = 0;
    fVar6 = local_44;
  }
  else {
    FUN_01a38090();
    fVar6 = local_e8;
    local_44 = *(float *)(this + 0x23) + DAT_02390d00;
    local_d8 = fStack_e0 + local_e8;
    fStack_d4 = fStack_dc + fStack_e4;
    uStack_d0 = 0;
    if (local_44 <= fStack_d4 + DAT_02390d00) {
      FUN_01d48b40(DAT_02390124);
      uVar4 = (**(code **)(*this + 0x640))();
      plVar1 = local_58;
      local_a0 = DAT_026e41f0;
      if (DAT_026e41f0 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_98 = '\x01';
      (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_a0);
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      FUN_01d488d0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(longlong *)*arg1 + 0x3e0))
                (fVar6,local_44,local_d8 + DAT_02390d00,local_44);
    }
    cVar2 = (**(code **)(*this + 0x9b0))();
    if (cVar2 == '\0') {
      return;
    }
    dVar7 = (double)(**(code **)(*this + 0x9c0))();
    if (NAN(dVar7)) {
      return;
    }
    fVar5 = (float)(**(code **)(*(longlong *)this[0x2d] + 0x390))();
    local_8c = (float)FUN_01a34a00();
    local_44 = (float)(**(code **)(*this + 0x9d0))();
    (**(code **)(*this + 0x640))();
    (**(code **)(*local_58 + 0x3a0))();
    _local_d8 = CONCAT44(fStack_d4,*(undefined4 *)(local_40 + 0x18));
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02390124);
    FUN_01cfcdc0(local_d8,local_d8,local_d8,local_44 * local_44);
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    fVar5 = fVar5 - local_8c;
    lVar3 = *(longlong *)*arg1;
    fVar6 = fVar5;
    uVar4 = DAT_023942a8;
  }
  (**(code **)(lVar3 + 0x3e0))(fVar6,0,fVar5,uVar4);
  return;
}




// ==================================================
// @01522730 (1224 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  longlong arg1;
  longlong *this;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_60;
  char local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  char local_40;
  double local_38;
  
  FUN_01522cd0();
  lVar7 = local_48;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      lVar1 = *param_2;
      goto joined_r0x0152278c;
    }
  }
  else if (local_48 != 0) {
    lVar1 = *param_2;
joined_r0x0152278c:
    if (lVar1 != 0) {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_016c2e90();
      if (iVar4 != 0) {
        pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar4 = FUN_016c2e90();
        if (iVar4 != 1) {
          iVar4 = *(int *)(arg1 + 0x18);
          if (iVar4 == 0) {
            dVar9 = 0.0;
            dVar13 = 0.0;
          }
          else {
            plVar2 = *(longlong **)(*(longlong *)(arg1 + 0x10) + 0x10);
            uVar3 = iVar4 + 0x3fe;
            if (-1 < (int)(iVar4 - 1U)) {
              uVar3 = iVar4 - 1U;
            }
            dVar9 = **(double **)(*plVar2 + 0x10);
            param_1 = *(longlong *)(plVar2[(int)uVar3 >> 10] + 0x10);
            dVar13 = *(double *)
                      (param_1 + (longlong)(int)((iVar4 - (uVar3 & 0xfffffc00)) + -1) * 0x20) -
                     dVar9;
          }
          pVar6 = (pthread_key_t)param_1;
          dVar13 = dVar13 + dVar9;
          if (*(int *)(arg1 + 0x20) != 2) {
            local_50 = 0xffffffff;
            local_4c = 0xffffffff;
            dVar11 = dVar9;
            dVar10 = local_38;
            while( true ) {
              local_38 = dVar11;
              if (dVar13 < local_38) {
                *(undefined1 *)(this + 1) = 0;
                *this = 0;
                local_38 = dVar10;
                FUN_00d50b20();
                return;
              }
              pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar10 = (double)FUN_016c25f0(local_38);
              pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar11 = (double)FUN_016c25f0(local_38);
              local_48 = FUN_01907d40();
              dVar12 = (double)FUN_00e7c860();
              pVar6 = (pthread_key_t)param_1;
              if (dVar12 * DAT_023942d0 * _DAT_0240e9a0 <
                  (double)((ulonglong)(dVar11 - dVar10) & _DAT_023908f0)) break;
              dVar10 = local_38 + DAT_0238fee8;
              dVar11 = dVar10;
            }
          }
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_38 = (double)FUN_016c9870();
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = (double)FUN_016c9950();
          if ((!NAN(local_38)) &&
             ((uVar8 = -(ulonglong)(dVar13 < DAT_0240e9a8 + dVar10), local_38 + DAT_023908d0 < dVar9
              || (!NAN((double)(-(ulonglong)NAN(dVar10) & (ulonglong)dVar13 |
                               ~-(ulonglong)NAN(dVar10) &
                               (~uVar8 & DAT_023908c8 | uVar8 & (ulonglong)dVar13))))))) {
            local_60 = lVar7;
            local_58 = '\0';
            FUN_016c3770(dVar9,&local_60);
            lVar1 = local_48;
            if (local_40 == '\0') {
              if (((local_48 != 0) && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40 = '\0';
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_00d50130();
              if (lVar7 != lVar1) {
                FUN_00d50b00();
                FUN_00d50b20();
                lVar7 = lVar1;
              }
              FUN_00d50b20();
            }
          }
        }
      }
    }
    *this = lVar7;
    *(undefined1 *)(this + 1) = 1;
    return;
  }
  *(undefined1 *)(this + 1) = 0;
  *this = 0;
  return;
}




// ==================================================
// @01af7d60 (1213 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *this;
  longlong *plVar6;
  undefined8 uVar7;
  float extraout_XMM0_Db;
  undefined8 in_XMM0_Qb;
  uint extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_98;
  char local_90;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  uVar7 = FUN_01ad3cb0();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    uVar7 = FUN_00d50b20();
  }
  if ((plVar1 != (longlong *)0x0) && (*(char *)((longlong)this + 0x315) != '\0')) {
    FUN_01b0adb0(uVar7,*(undefined4 *)((longlong)this + 0x194));
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_38 == (longlong *)0x0) {
      return;
    }
    iVar2 = FUN_01d5b230();
    if (iVar2 != 0) {
      uVar7 = (**(code **)(*this + 0x640))();
      plVar1 = local_38;
      FUN_01d5b240(uVar7,0);
      FUN_01d65230();
      lVar4 = local_48;
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      (**(code **)(*this + 0x640))();
      (**(code **)(*local_c8 + 0x370))();
      local_60 = 0;
      if (local_90 == '\0') {
        if (local_98 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = '\0';
      }
      local_60 = '\x01';
      local_68 = local_98;
      pVar5 = 0;
      (**(code **)(*plVar1 + 0x5d0))(0,&local_68);
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01ad3cb0();
      plVar1 = local_38;
      pvVar3 = _pthread_getspecific(pVar5);
      plVar6 = plVar1;
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        plVar6 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x3a0))();
      uVar7 = (**(code **)(*this + 0x918))();
      if ((local_30 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e42030();
      plVar1 = local_38;
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_01e4ac90();
        FUN_01e42030();
        plVar1 = local_38;
        FUN_01e4ace0();
        local_58 = local_48;
        local_50 = 0;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_50 = '\x01';
        (**(code **)(*plVar1 + 0x920))();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b00();
      local_e8 = (float)uVar7;
      uStack_e4 = (uint)((ulonglong)uVar7 >> 0x20);
      uStack_e0 = (uint)extraout_XMM0_Qb;
      uStack_dc = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar14._0_4_ = _DAT_023945e0 & (uint)local_e8;
      auVar14._4_4_ = _UNK_023945e4 & uStack_e4;
      auVar14._8_4_ = _UNK_023945e8 & uStack_e0;
      auVar14._12_4_ = _UNK_023945ec & uStack_dc;
      auVar8._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
      auVar8._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + local_e8;
      auVar9 = roundss(auVar8,auVar8,0xb);
      fVar12 = extraout_XMM0_Db * DAT_02390118 + auVar9._0_4_;
      auVar10._0_4_ = _DAT_023945e0 & (uint)fVar12;
      auVar10._4_4_ = _UNK_023945e4 & (uint)extraout_XMM0_Db;
      auVar10._8_4_ = _UNK_023945e8 & extraout_XMM0_Dd;
      auVar10._12_4_ = _UNK_023945ec & extraout_XMM0_Dd;
      auVar11._4_12_ = SUB1612(auVar10 | _DAT_023945f0,4);
      auVar11._0_4_ = SUB164(auVar10 | _DAT_023945f0,0) + fVar12;
      auVar13._0_12_ = ZEXT812(0);
      auVar13._12_4_ = 0;
      auVar14 = roundss(auVar13,auVar11,0xb);
      auVar9._8_8_ = in_XMM0_Qb;
      auVar9._0_8_ = param_1;
      auVar9 = insertps(auVar9,auVar14,0x10);
      FUN_01d5ef60(auVar9._0_8_,0);
      if (this != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((*(float *)((longlong)this + 0x1e4) == 0.0) &&
         (!NAN(*(float *)((longlong)this + 0x1e4)))) {
        FUN_01b08e50();
        *(undefined1 *)((longlong)this + 0x1e1) = 0;
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a1cd40 (1206 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  undefined8 uVar2;
  longlong this;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_30;
  char local_28;
  
  FUN_01e3b710();
  uVar2 = FUN_00e7b4e0();
  *(undefined8 *)(this + 0x140) = uVar2;
  *(undefined4 *)(this + 0x148) = 0;
  FUN_00d403d0();
  lVar1 = local_a0;
  if ((((local_98 == '\0') && (local_a0 != 0)) && (FUN_00d50b00(), local_98 != '\0')) &&
     (local_a0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_150 = DAT_02709dd0;
  if (DAT_02709dd0 != 0) {
    FUN_00d50b00();
  }
  local_148 = '\x01';
  local_140 = 0;
  local_138 = '\0';
  FUN_00d41430(&local_140,&local_150);
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_130 = DAT_027e1450;
  if (DAT_027e1450 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_00d41430(&local_120,&local_130);
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_110 = DAT_026fc738;
  if (DAT_026fc738 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  FUN_01a1d6e0();
  local_28 = 0;
  if ((local_98 == '\0') && (local_a0 != 0)) {
    FUN_00d50b00();
  }
  local_30 = local_a0;
  local_28 = '\x01';
  FUN_00d41430(&local_30,&local_110);
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_100 = DAT_027e3bc0;
  if (DAT_027e3bc0 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_00d41430(&local_f0,&local_100);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_e0 = DAT_026fce70;
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_00d41430(&local_d0,&local_e0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_c0 = DAT_027e13d8;
  if (DAT_027e13d8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = '\x01';
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d41430(&local_b0,&local_c0);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a2fbc0 (1206 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012dff00();
  if (local_b8 == 0) {
    cVar2 = '\x01';
  }
  else {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    if (local_a8 == 0) {
      cVar2 = '\x01';
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0125a2d0();
      cVar2 = '\x01';
      if (cVar1 != '\0') {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dff70();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_0125a2d0();
        cVar2 = '\x01';
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01263cf0();
          cVar2 = '\x01';
          if (cVar1 == '\0') {
            pvVar4 = _pthread_getspecific(param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012dff70();
            pvVar4 = _pthread_getspecific(param_1);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01263cf0();
            cVar2 = '\x01';
            if (cVar1 == '\0') {
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dff00();
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar1 = FUN_01263ef0();
              cVar2 = '\x01';
              if (cVar1 == '\0') {
                pvVar4 = _pthread_getspecific(param_1);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_012dff70();
                pvVar4 = _pthread_getspecific(param_1);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar2 = FUN_01263ef0();
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar3 = FUN_01a5a210();
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}




// ==================================================
// @01b03750 (1183 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int iVar9;
  longlong *this;
  bool bVar10;
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  longlong local_48;
  char local_40;
  
  FUN_01ad3cb0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(param_1);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_01770870();
  if (((cVar5 != '\0') && ((char)this[0x31] == '\0')) &&
     (iVar9 = (int)this[0x32], iVar9 != -1000000)) {
    while( true ) {
      iVar7 = *(int *)((longlong)this + 0x184);
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar6 = FUN_01770c70();
      if (iVar9 - iVar7 < iVar6) break;
      iVar9 = *(int *)((longlong)this + 0x184);
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01770c70();
      iVar7 = iVar7 + iVar9;
      if (*(int *)((longlong)this + 0x184) != iVar7) {
        *(int *)((longlong)this + 0x184) = iVar7;
        if ((*(int *)((longlong)this + 0x284) == 1) ||
           (*(int *)((longlong)this + 0x284) == 0)) {
          fVar19 = (float)DAT_023dccf4;
          bVar10 = NAN(fVar19) || NAN(DAT_0239424c);
          auVar20._8_8_ = 0;
          auVar20._0_8_ = DAT_023dccf4;
          in_XMM1._0_4_ = fVar19 * DAT_0239011c;
          in_XMM1._4_4_ = (int)(DAT_023dccf4 >> 0x20);
          in_XMM1._8_8_ = 0;
          uVar11 = DAT_023dccec;
          if (fVar19 == DAT_0239424c) goto LAB_01b039e8;
        }
        else {
          uVar11 = FUN_01e3f820();
          if (*(int *)((longlong)this + 0x284) == 3) {
            auVar18 = in_XMM1;
            FUN_01e3f820();
            auVar12 = blendps(auVar18,_DAT_0241c700,0xd);
          }
          else {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = DAT_023dccf4;
          }
          auVar1._8_8_ = extraout_XMM0_Qb;
          auVar1._0_8_ = uVar11;
          auVar13._0_4_ = auVar12._0_4_ + (float)uVar11;
          auVar13._4_4_ = auVar12._4_4_ + (float)((ulonglong)uVar11 >> 0x20);
          auVar13._8_4_ = auVar12._8_4_ + (float)extraout_XMM0_Qb;
          auVar13._12_4_ = auVar12._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar18 = blendps(auVar13,auVar1,2);
          uVar11 = auVar18._0_8_;
          auVar20 = blendps(in_XMM1,_DAT_0241c710,0xd);
          fVar19 = auVar20._0_4_;
          bVar10 = NAN(fVar19) || NAN(DAT_0239424c);
          in_XMM1._4_12_ = auVar20._4_12_;
          in_XMM1._0_4_ = fVar19 * DAT_0239011c;
          if (fVar19 == DAT_0239424c) {
LAB_01b039e8:
            if (!bVar10) {
              in_XMM1 = auVar20;
            }
          }
        }
        (**(code **)(*this + 0x618))(uVar11);
      }
      iVar9 = (int)this[0x32];
    }
    while( true ) {
      iVar9 = *(int *)((longlong)this + 0x184);
      lVar4 = this[0x32];
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01770c70();
      if (iVar9 - (int)lVar4 < iVar7) break;
      iVar9 = *(int *)((longlong)this + 0x184);
      pvVar8 = _pthread_getspecific(param_1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar7 = FUN_01770c70();
      iVar9 = iVar9 - iVar7;
      if (*(int *)((longlong)this + 0x184) != iVar9) {
        *(int *)((longlong)this + 0x184) = iVar9;
        if ((*(int *)((longlong)this + 0x284) == 1) ||
           (*(int *)((longlong)this + 0x284) == 0)) {
          fVar19 = (float)DAT_023dccf4;
          bVar10 = NAN(fVar19) || NAN(DAT_0239424c);
          auVar18._8_8_ = 0;
          auVar18._0_8_ = DAT_023dccf4;
          in_XMM1._0_4_ = fVar19 * DAT_0239011c;
          in_XMM1._4_4_ = (int)(DAT_023dccf4 >> 0x20);
          in_XMM1._8_8_ = 0;
          uVar11 = DAT_023dccec;
          if (fVar19 == DAT_0239424c) goto LAB_01b03b68;
        }
        else {
          uVar11 = FUN_01e3f820();
          if (*(int *)((longlong)this + 0x284) == 3) {
            auVar18 = in_XMM1;
            FUN_01e3f820();
            auVar14 = blendps(auVar18,_DAT_0241c700,0xd);
          }
          else {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = DAT_023dccf4;
          }
          auVar2._8_8_ = extraout_XMM0_Qb_00;
          auVar2._0_8_ = uVar11;
          auVar15._0_4_ = auVar14._0_4_ + (float)uVar11;
          auVar15._4_4_ = auVar14._4_4_ + (float)((ulonglong)uVar11 >> 0x20);
          auVar15._8_4_ = auVar14._8_4_ + (float)extraout_XMM0_Qb_00;
          auVar15._12_4_ = auVar14._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          auVar18 = blendps(auVar15,auVar2,2);
          uVar11 = auVar18._0_8_;
          auVar18 = blendps(in_XMM1,_DAT_0241c710,0xd);
          fVar19 = auVar18._0_4_;
          bVar10 = NAN(fVar19) || NAN(DAT_0239424c);
          in_XMM1._4_12_ = auVar18._4_12_;
          in_XMM1._0_4_ = fVar19 * DAT_0239011c;
          if (fVar19 == DAT_0239424c) {
LAB_01b03b68:
            if (!bVar10) {
              in_XMM1 = auVar18;
            }
          }
        }
        (**(code **)(*this + 0x618))(uVar11);
      }
    }
  }
  uVar11 = DAT_023dccec;
  if ((*(int *)((longlong)this + 0x284) != 1) && (*(int *)((longlong)this + 0x284) != 0))
  {
    uVar11 = FUN_01e3f820();
    if (*(int *)((longlong)this + 0x284) == 3) {
      auVar18 = in_XMM1;
      FUN_01e3f820();
      auVar16 = blendps(auVar18,_DAT_0241c700,0xd);
    }
    else {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = DAT_023dccf4;
    }
    auVar3._8_8_ = extraout_XMM0_Qb_01;
    auVar3._0_8_ = uVar11;
    auVar17._0_4_ = auVar16._0_4_ + (float)uVar11;
    auVar17._4_4_ = auVar16._4_4_ + (float)((ulonglong)uVar11 >> 0x20);
    auVar17._8_4_ = auVar16._8_4_ + (float)extraout_XMM0_Qb_01;
    auVar17._12_4_ = auVar16._12_4_ + (float)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
    auVar18 = blendps(auVar17,auVar3,2);
    blendps(in_XMM1,_DAT_0241c710,0xd);
    uVar11 = auVar18._0_8_;
  }
  (**(code **)(*this + 0x618))(uVar11);
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019d3530 (1157 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *this;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  iVar3 = FUN_01caea40();
  if (param_2 != 0) {
    (**(code **)(*this + 0xd08))();
    (**(code **)(*this + 0xd00))();
    (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                *this + 0x40))();
  }
  FUN_01caeae0();
  if (local_30 == '\0') {
    if (local_38 == 0) {
      return 1;
    }
    FUN_00d50b00();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_38 == 0) {
    return 1;
  }
  (**(code **)(*this + 0xd08))();
  FUN_01d66ab0();
  if (iVar3 == 2) {
    iVar3 = (**(code **)(&UNK_00001588 + *this))();
    lVar1 = DAT_027e13f8;
    if (iVar3 == 3) {
      if (DAT_027e13f8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027e1400;
      if (DAT_027e1400 != 0) {
        FUN_00d50b00();
      }
      local_e8 = lVar2;
      local_e0 = '\x01';
      local_d8 = 0;
      local_d0 = '\0';
      FUN_00d31230(&local_d8,&local_e8);
      local_68 = local_38;
      local_60 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_60 = '\x01';
      FUN_01d64eb0();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else if (iVar3 == 4) {
      if (DAT_027e13f8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027e1408;
      local_c8 = lVar1;
      local_c0 = '\x01';
      if (DAT_027e1408 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar2;
      local_b0 = '\x01';
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d31230(&local_a8,&local_b8);
      local_58 = local_38;
      local_50 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_50 = '\x01';
      FUN_01d64eb0();
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_027e13f8 != 0) {
        FUN_00d50b00();
      }
      lVar2 = DAT_027e1410;
      local_98 = lVar1;
      local_90 = '\x01';
      if (DAT_027e1410 != 0) {
        FUN_00d50b00();
      }
      local_88 = lVar2;
      local_80 = '\x01';
      local_78 = 0;
      local_70 = '\0';
      FUN_00d31230(&local_78,&local_88);
      local_48 = local_38;
      local_40 = 0;
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      local_40 = '\x01';
      FUN_01d64eb0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
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
    }
  }
  FUN_00d50b20();
  return 1;
}




// ==================================================
// @01b7ca00 (1126 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  undefined1 *puVar10;
  char *pcVar11;
  longlong *this;
  undefined8 extraout_XMM0_Qa;
  undefined1 local_78 [8];
  undefined8 local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*this + 0x9a0))();
  if (cVar3 == '\0') {
    uVar8 = (**(code **)(*this + 0x370))();
    uVar4 = (**(code **)(*local_68 + 0x3b8))(uVar8,param_2);
    uVar6 = (ulonglong)uVar4;
    if (local_60[0] == '\0') {
      return uVar6;
    }
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
      return uVar6;
    }
    return uVar6;
  }
  cVar3 = (**(code **)(*this + 0x9d0))();
  if (cVar3 == '\0') {
    return 0;
  }
  uVar6 = (**(code **)(*this + 0x9e0))();
  if (uVar6 >> 0x20 == 0) {
    return 0;
  }
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  uVar6 = (**(code **)(*this + 0x9e0))();
  if (uVar6 >> 0x20 != 0) {
    lVar1 = this[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = (**(code **)(*this + 0x9e0))();
    FUN_012521f0(uVar8,0,local_78,&local_70);
    pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar8 >> 8),local_60[0]);
    pcVar11 = local_40;
    if (local_60[0] != '\0') {
      pcVar11 = local_60;
    }
    local_40[0] = local_60[0];
    *pcVar11 = '\0';
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = local_78;
    FUN_012535e0(puVar10,&local_58,&local_70,0);
    pVar9 = (pthread_key_t)puVar10;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this[0x2b];
    goto joined_r0x01b7cd68;
  }
  lVar1 = this[0x2b];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar10 = local_78;
  FUN_012527b0(puVar10,0,&local_70,0);
  pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar10 >> 8),local_60[0]);
  pcVar11 = local_38;
  if (local_60[0] != '\0') {
    pcVar11 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar11 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = local_50;
  plVar2 = local_58;
  if (local_58 == local_68) {
    if ((local_50 == '\0') && (local_68 != (longlong *)0x0)) {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01b7cd49;
    }
    if ((local_38[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = local_68;
      if ((cVar3 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = local_68;
      if ((local_50 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01b7cd49:
    local_50 = '\x01';
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this[0x2b];
joined_r0x01b7cd68:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01253c10(local_78,&local_58,&local_70,0);
  uVar8 = extraout_XMM0_Qa;
  if (lVar1 != 0) {
    uVar8 = FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    return 0;
  }
  if (param_2 != '\0') {
    uVar8 = (**(code **)(*this + 0x9f0))(uVar8,local_70);
    FUN_01b7bf20(uVar8,local_70);
    FUN_01b754b0(DAT_023908d0);
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
}




// ==================================================
// @019e0e60 (1120 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  longlong *this;
  undefined8 unaff_R14;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_019e12ab;
  (**(code **)(*this + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  lVar5 = local_48;
  if (iVar1 == 0) {
    (**(code **)(*this + 0x9b0))();
    if (local_48 == 0) {
      bVar6 = false;
    }
    else {
      (**(code **)(*this + 0x9b0))();
      bVar6 = *(int *)(local_58 + 0xc) != 0;
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      (**(code **)(*this + 0x9b0))();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01266b80();
      if (local_48 == 0) {
        lVar5 = 0;
        bVar6 = false;
      }
      else if (local_40[0] == '\0') {
        FUN_00d50b00();
        bVar6 = true;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar6 = true;
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this + 0xda8))();
      goto LAB_019e10af;
    }
  }
  else {
    (**(code **)(*this + 0xe20))();
    FUN_00d23340();
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      bVar6 = false;
      lVar5 = 0;
    }
    else {
      bVar6 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_019e10af:
    if (lVar5 != 0) {
      (**(code **)((longlong)&dylib_command_00001150.dylib.current_version + *this))();
      if (local_48 == lVar5) {
        bVar2 = bVar6;
        if ((bVar6) || (local_48 == 0)) {
LAB_019e1144:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019e1158;
        }
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          goto LAB_019e1144;
        }
        bVar2 = true;
      }
      else {
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          lVar5 = local_48;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_019e1144;
        }
        bVar2 = true;
        lVar5 = local_48;
        if (bVar6) {
          FUN_00d50b20();
        }
LAB_019e1158:
        if (lVar5 == 0) goto LAB_019e12a8;
      }
      FUN_01caec40();
      lVar5 = DAT_027e1458;
      if (DAT_027e1458 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        (**(code **)(*this + 0xda0))();
      }
      (**(code **)(*this + 0xda8))();
      (**(code **)("/usr/lib/libobjc.A.dylib" + *this + 8))();
      FUN_019e1580();
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019e12ab;
    }
  }
LAB_019e12a8:
  uVar4 = 0;
LAB_019e12ab:
  return uVar4 & 0xffffffff;
}




// ==================================================
// @019e16b0 (1120 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  longlong *this;
  undefined8 unaff_R14;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_019e1afb;
  (**(code **)(*this + 0xe20))();
  iVar1 = *(int *)(local_48 + 0xc);
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  lVar5 = local_48;
  if (iVar1 == 0) {
    (**(code **)(*this + 0x9b0))();
    if (local_48 == 0) {
      bVar6 = false;
    }
    else {
      (**(code **)(*this + 0x9b0))();
      bVar6 = *(int *)(local_58 + 0xc) != 0;
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (bVar6) {
      (**(code **)(*this + 0x9b0))();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01266770();
      if (local_48 == 0) {
        lVar5 = 0;
        bVar6 = false;
      }
      else if (local_40[0] == '\0') {
        FUN_00d50b00();
        bVar6 = true;
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        bVar6 = true;
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this + 0xda8))();
      goto LAB_019e18ff;
    }
  }
  else {
    (**(code **)(*this + 0xe20))();
    FUN_00d23340();
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      bVar6 = false;
      lVar5 = 0;
    }
    else {
      bVar6 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
LAB_019e18ff:
    if (lVar5 != 0) {
      (**(code **)((longlong)&dylib_command_00001150.dylib.name.offset + *this))();
      if (local_48 == lVar5) {
        bVar2 = bVar6;
        if ((bVar6) || (local_48 == 0)) {
LAB_019e1994:
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_019e19a8;
        }
        if (local_40[0] == '\0') {
          FUN_00d50b00();
          bVar2 = true;
          goto LAB_019e1994;
        }
        bVar2 = true;
      }
      else {
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          bVar2 = true;
          lVar5 = local_48;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_019e1994;
        }
        bVar2 = true;
        lVar5 = local_48;
        if (bVar6) {
          FUN_00d50b20();
        }
LAB_019e19a8:
        if (lVar5 == 0) goto LAB_019e1af8;
      }
      FUN_01caec40();
      lVar5 = DAT_027e1458;
      if (DAT_027e1458 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        (**(code **)(*this + 0xda0))();
      }
      (**(code **)(*this + 0xda8))();
      (**(code **)("/usr/lib/libobjc.A.dylib" + *this + 8))();
      FUN_019e1580();
      if (bVar2) {
        FUN_00d50b20();
      }
      goto LAB_019e1afb;
    }
  }
LAB_019e1af8:
  uVar4 = 0;
LAB_019e1afb:
  return uVar4 & 0xffffffff;
}




// ==================================================
// @01b7d2f0 (1097 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  pthread_key_t pVar9;
  undefined1 *puVar10;
  char *pcVar11;
  longlong *this;
  undefined1 local_78 [8];
  undefined1 local_70 [8];
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  cVar3 = (**(code **)(*this + 0x9a0))();
  if (cVar3 == '\0') {
    (**(code **)(*this + 0x370))();
    uVar4 = (**(code **)(*local_68 + 0x3b8))();
    uVar6 = (ulonglong)uVar4;
    if (local_60[0] == '\0') {
      return uVar6;
    }
    if (local_68 != (longlong *)0x0) {
      FUN_00d50b20();
      return uVar6;
    }
    return uVar6;
  }
  cVar3 = (**(code **)(*this + 0x9d0))();
  if (cVar3 == '\0') {
    return 0;
  }
  uVar6 = (**(code **)(*this + 0x9e0))();
  if (uVar6 >> 0x20 == 0) {
    return 0;
  }
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  uVar6 = (**(code **)(*this + 0x9e0))();
  if (uVar6 >> 0x20 != 0) {
    lVar1 = this[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar8 = (**(code **)(*this + 0x9e0))();
    FUN_012521f0(uVar8,0,local_78,local_70);
    pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar8 >> 8),local_60[0]);
    pcVar11 = local_40;
    if (local_60[0] != '\0') {
      pcVar11 = local_60;
    }
    local_40[0] = local_60[0];
    *pcVar11 = '\0';
    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar7 = _pthread_getspecific(pVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar10 = local_78;
    FUN_012535e0(puVar10,&local_58,local_70,0);
    pVar9 = (pthread_key_t)puVar10;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = this[0x2b];
    goto joined_r0x01b7d658;
  }
  lVar1 = this[0x2b];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar10 = local_78;
  FUN_012527b0(puVar10,0,local_70,0);
  pVar9 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar10 >> 8),local_60[0]);
  pcVar11 = local_38;
  if (local_60[0] != '\0') {
    pcVar11 = local_60;
  }
  local_38[0] = local_60[0];
  *pcVar11 = '\0';
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = local_50;
  plVar2 = local_58;
  if (local_58 == local_68) {
    if ((local_50 == '\0') && (local_68 != (longlong *)0x0)) {
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01b7d639;
    }
    if ((local_38[0] != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_58 = local_68;
      if ((cVar3 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58 = local_68;
      if ((local_50 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01b7d639:
    local_50 = '\x01';
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  lVar1 = this[0x2b];
joined_r0x01b7d658:
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar7 = _pthread_getspecific(pVar9);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar5 = FUN_01253c10(local_78,&local_58,local_70,0);
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar5 == '\0') {
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    return 0;
  }
  if (param_2 != '\0') {
    (**(code **)(*this + 0x9f8))();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return CONCAT71((uint7)(uint3)((uint)uVar5 >> 8),1);
}




// ==================================================
// @011a6790 (1080 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_026034e8;
  this[7] = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011a6cc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScalePitchSystem");
  }
  FUN_011a6db0();
  FUN_011a6e90();
  FUN_011a6f70();
  *(undefined1 *)(this + 0xb) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027aff88 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aff50 = FUN_011a6590();
        _DAT_027aff48 = "_tuningIsSuggestedRelevant";
        _DAT_027aff58 = 0;
        _DAT_027aff60 = 0x6200;
        _DAT_027aff68 = "bool";
        _DAT_027aff70 = 0;
        uRam00000000027aff78 = 0;
        _DAT_027aff80 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x59) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027affd0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027aff98 = FUN_011a6590();
        _DAT_027aff90 = "_modeIsSuggestedRelevant";
        _DAT_027affa0 = 0;
        _DAT_027affa8 = 0x6200;
        _DAT_027affb0 = "bool";
        _DAT_027affb8 = 0;
        uRam00000000027affc0 = 0;
        _DAT_027affc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x5a) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b0018 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027affe0 = FUN_011a6590();
        _DAT_027affd8 = "_tuningPitchAnchorIsSuggestedRelevant";
        _DAT_027affe8 = 0;
        _DAT_027afff0 = 0x6200;
        _DAT_027afff8 = "bool";
        _DAT_027b0000 = 0;
        uRam00000000027b0008 = 0;
        _DAT_027b0010 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x5b) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b0060 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b0028 = FUN_011a6590();
        _DAT_027b0020 = "_modeFundamentalOffsetIsSuggestedRelevant";
        _DAT_027b0030 = 0;
        _DAT_027b0038 = 0x6200;
        _DAT_027b0040 = "bool";
        _DAT_027b0048 = 0;
        uRam00000000027b0050 = 0;
        _DAT_027b0058 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x5c) = 0;
  lVar9 = FUN_011a6590();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027b00a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027b0070 = FUN_011a6590();
        _DAT_027b0068 = "_stretchingIsSuggestedRelevant";
        _DAT_027b0078 = 0;
        _DAT_027b0080 = 0x6200;
        _DAT_027b0088 = "bool";
        _DAT_027b0090 = 0;
        uRam00000000027b0098 = 0;
        _DAT_027b00a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_011a7050();
  return;
}




// ==================================================
// @019cf5e0 (1072 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char cVar7;
  int unaff_ESI;
  longlong this;
  undefined8 *local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 *local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(this + 0x318) != 0) {
    if ((unaff_ESI != 0) && (DAT_028b28d8 != (undefined8 *)0x0)) {
      FUN_01d5b240(param_1,unaff_ESI + -1);
      puVar5 = local_60;
      if ((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      puVar3 = DAT_028b28d8;
      local_68 = 0;
      if (DAT_028b28d8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      local_70 = puVar3;
      local_68 = '\x01';
      FUN_01d64eb0();
      if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (DAT_028b28d8 != (undefined8 *)0x0) {
        DAT_028b28d8 = (undefined8 *)0x0;
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    if (param_2 != 0) {
      FUN_01d5b240();
      puVar5 = local_60;
      if ((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d65230();
      puVar3 = local_60;
      if ((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      lVar2 = DAT_02704e20;
      if (DAT_02704e20 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_026fb948;
      local_d0 = lVar2;
      local_c8 = '\x01';
      if (DAT_026fb948 != 0) {
        FUN_00d50b00();
      }
      local_c0 = lVar1;
      local_b8 = '\x01';
      local_b0 = 0;
      local_a8 = '\0';
      FUN_00d31230(&local_b0,&local_c0);
      puVar6 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (undefined8 *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_58 = '\0';
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      local_a0 = puVar6;
      local_98 = '\0';
      cVar7 = FUN_00d90eb0();
      if ((local_98 != '\0') && (local_a0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      puVar4 = DAT_028b28d8;
      if (cVar7 == '\0') {
        if (DAT_028b28d8 != puVar3) {
          if (puVar3 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          DAT_028b28d8 = puVar3;
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((puVar3 != (undefined8 *)0x0) && (DAT_028b28e0 == '\0')) {
          DAT_028b28e0 = '\x01';
          FUN_00e8cb90();
        }
        local_d8 = puVar6;
        FUN_00083ea0(2,&local_d8);
        FUN_00d8cb40();
        lVar2 = local_80;
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_78 = '\0';
        }
        local_60 = (undefined8 *)&DAT_0253d630;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_60 = &DAT_024c5048;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        local_90 = lVar2;
        local_88 = '\0';
        FUN_01d64eb0();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
      if (puVar6 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @01a368e0 (1054 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  longlong lVar6;
  undefined8 *arg1;
  longlong *this;
  bool bVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar17;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  longlong local_38;
  char local_30;
  
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  uVar8 = (**(code **)(*this + 0x938))();
  if ((fVar17 != 0.0) || (NAN(fVar17))) {
    cVar5 = FUN_00d054a0();
    if (cVar5 != '\0') {
      if ((DAT_028b2b38 == 0) || (DAT_028b2b41 == '\0')) {
        FUN_00e8cb50();
        if (DAT_028b2b38 == 0) {
          FUN_01cfc6a0();
          lVar6 = DAT_028b2b38;
          if (DAT_028b2b38 != local_38) {
            if (local_30 == '\0') {
              if (local_38 == 0) {
                lVar6 = 0;
              }
              else {
                FUN_00d50b00();
                lVar6 = local_38;
              }
            }
            else {
              local_30 = '\0';
              lVar6 = local_38;
            }
            bVar7 = DAT_028b2b38 != 0;
            DAT_028b2b38 = lVar6;
            if (bVar7) {
              FUN_00d50b20();
              lVar6 = local_38;
            }
          }
          if ((lVar6 != 0) && (DAT_028b2b40 == '\0')) {
            DAT_028b2b40 = '\x01';
            FUN_00e8cb90();
            lVar6 = local_38;
          }
          if ((local_30 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          DAT_028b2b41 = '\x01';
          FUN_00e8cb70();
        }
        else {
          DAT_028b2b41 = '\x01';
          FUN_00e8cb70();
        }
      }
      if (((longlong *)this[0x28] != (longlong *)0x0) &&
         (cVar5 = (**(code **)(*(longlong *)this[0x28] + 0xb0))(), lVar6 = DAT_028b2b38,
         cVar5 != '\0')) {
        if (DAT_028b2b38 != 0) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*arg1 + 0x3b0))();
      }
    }
    auVar15._8_8_ = extraout_XMM0_Qb;
    auVar15._0_8_ = uVar8;
    fVar1 = (float)uVar8;
    if (this[0x28] != 0) {
      auVar9._4_12_ = auVar15._4_12_;
      auVar9._0_4_ = fVar1 - fVar17;
      cVar5 = FUN_00d054a0(auVar9._0_8_);
      if (cVar5 != '\0') {
        FUN_01a34870();
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        auVar2._8_8_ = extraout_XMM0_Qb;
        auVar2._0_8_ = uVar8;
        auVar10._4_12_ = auVar2._4_12_;
        auVar10._0_4_ = fVar1 - fVar17;
        (**(code **)(*this + 0x640))();
        auVar3._8_8_ = extraout_XMM0_Qb;
        auVar3._0_8_ = uVar8;
        auVar15 = blendps(auVar10,auVar3,0xe);
        auVar11._0_4_ = DAT_0239011c * fVar17 + auVar15._0_4_;
        auVar11._4_4_ = DAT_0239011c * fVar17 + auVar15._4_4_;
        auVar11._8_4_ = auVar15._8_4_ + 0.0;
        auVar11._12_4_ = auVar15._12_4_ + 0.0;
        auVar15 = roundps(auVar11,auVar11,9);
        FUN_01cb3a30(auVar15._0_8_,2);
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
      auVar4._8_8_ = extraout_XMM0_Qb;
      auVar4._0_8_ = uVar8;
      auVar12._0_4_ = fVar14 + fVar1;
      auVar12._4_4_ = fVar17 + (float)((ulonglong)uVar8 >> 0x20);
      auVar12._8_4_ = in_XMM1_Dc + (float)extraout_XMM0_Qb;
      auVar12._12_4_ = in_XMM1_Dd + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar15 = blendps(auVar12,auVar4,2);
      cVar5 = FUN_00d054a0();
      if (cVar5 != '\0') {
        FUN_01a34870();
        if ((local_30 == '\0') && (local_38 != 0)) {
          FUN_00d50b00();
        }
        FUN_01d488d0();
        if (local_38 != 0) {
          FUN_00d50b20();
        }
        (**(code **)(*this + 0x640))();
        auVar13._0_4_ = DAT_0239011c * fVar17;
        auVar13._4_4_ = auVar13._0_4_;
        auVar13._8_8_ = 0;
        local_b8 = auVar15._0_4_;
        fStack_b4 = auVar15._4_4_;
        fStack_b0 = auVar15._8_4_;
        fStack_ac = auVar15._12_4_;
        auVar16._0_4_ = local_b8 + auVar13._0_4_;
        auVar16._4_4_ = fStack_b4 + auVar13._0_4_;
        auVar16._8_4_ = fStack_b0 + 0.0;
        auVar16._12_4_ = fStack_ac + 0.0;
        auVar15 = roundps(auVar13,auVar16,9);
        FUN_01cb3a30(auVar15._0_8_,0);
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ==================================================
// @0091ac08 (1027 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  ulonglong uVar5;
  longlong *arg1;
  ulonglong uVar6;
  longlong this;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this + 0x14;
  lVar8 = this + 0x10;
  lVar9 = this + 0xc;
  lVar10 = this + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,lVar9,lVar10,uVar11,uVar12,uVar13
                      );
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar11 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x58) = 1;
      goto LAB_0091af17;
    case 2:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x59) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x5a) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x5b) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x18);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_0091acdd::switchdataD_0091b03c,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x20) - *(longlong *)(this + 0x18);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x20) = *(longlong *)(this + 0x18) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x5c) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_48[0] == 0xf) {
        *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x30);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_0091acdd::switchdataD_0091b03c,&local_34);
        uVar6 = (ulonglong)local_34;
        uVar5 = *(longlong *)(this + 0x38) - *(longlong *)(this + 0x30);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(ulonglong *)(this + 0x38) = *(longlong *)(this + 0x30) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(undefined1 *)(this + 0x5d) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x5e) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(this + 0x5f) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_0091af17:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @01af6500 (1024 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *this;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  plVar3 = local_40;
  piVar1 = (int *)((longlong)this + 0x2fc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_01ad3cb0();
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_40 == (longlong *)0x0) {
      return;
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar6 = FUN_00e8b990();
    if (lVar6 == 0) {
      lVar6 = this[99];
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d50b00();
    }
    FUN_00cb1f10();
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    cVar4 = FUN_00db6540();
    if ((cVar4 != '\0') && (cVar4 = FUN_00db3680(), cVar4 == '\0')) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_0173f250();
      if (cVar4 == '\0') {
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0173ef00();
        iVar2 = *(int *)((longlong)local_40 + 0xc);
        if (local_38 != '\0') {
          FUN_00d50b20();
        }
        if (1 < iVar2) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01738240();
          pvVar5 = _pthread_getspecific(param_1);
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            param_1 = (pthread_key_t)
                      *(undefined8 *)
                       (local_80 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b6f0();
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          uVar8 = FUN_00e7bdb0();
          uVar9 = FUN_00e7bdb0();
          local_40 = local_60;
          local_38 = '\0';
          FUN_012502a0(uVar9,uVar8,1);
          param_1 = (pthread_key_t)uVar9;
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      (**(code **)(*this + 0x928))();
      pvVar5 = _pthread_getspecific(param_1);
      plVar10 = local_40;
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar10 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar10 + 0x3f8))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019b9500 (1002 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong *arg1;
  longlong *this;
  int local_50;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_50 = -1;
    while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
      cVar2 = FUN_00d23d70();
      if (cVar2 == '\0') {
        FUN_00d21140();
      }
    }
    FUN_001159b0();
    if ((*arg1 != 0) && (lVar1 = this[0x41], lVar1 != 0)) {
      local_50 = -1;
      while (local_50 = local_50 + 1, local_50 < *(int *)(lVar1 + 0xc)) {
        cVar2 = FUN_00d23d70();
        if (cVar2 == '\0') {
          FUN_00d21140();
        }
      }
      FUN_001159b0();
    }
  }
  if (*(int *)((longlong)puVar3 + 0xc) != 0) {
    lVar1 = *arg1;
    FUN_00d243f0();
    if (this[0x94] != 0) {
      this[0x94] = 0;
      FUN_00d50b20();
    }
    if (this[0x95] != 0) {
      this[0x95] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*this + 0xb10))();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    if ((*(char *)((longlong)this + 0x21c) == '\0') &&
       (cVar2 = (**(code **)((longlong)&dylib_command_000013a0.dylib.name.offset + *this))(),
       cVar2 == '\0')) {
      (**(code **)(*this + 0xa70))();
    }
    else {
      (**(code **)(*this + 0x620))();
    }
    (**(code **)(*this + 0xeb8))();
    (**(code **)(*this + 0x400))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @0193ded0 (997 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong *arg1;
  longlong *this;
  longlong lVar9;
  longlong *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  
  lVar7 = this[0x41];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*this + 0xb10))();
  plVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_00d216c0();
  lVar7 = *arg1;
  if (0 < *(int *)(lVar7 + 0xc)) {
    lVar9 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar9 * 8);
      local_38 = '\0';
      local_40 = plVar1;
      FUN_0006e1c0();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_40;
        if (cVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar2 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
        if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar2 != (longlong *)0x0) {
        local_38 = '\0';
        local_40 = plVar2;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar1 = *(longlong **)(*(longlong *)(*arg1 + 0x10) + lVar9 * 8);
      local_38 = '\0';
      local_40 = plVar1;
      FUN_007ef2d0();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar5 = FUN_00e85ea0();
        pplVar8 = &local_40;
        if (cVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar3 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(undefined1 *)(pplVar8 + 1) = 0;
        if ((local_38 != '\0') && (plVar1 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar3 != (longlong *)0x0) {
        local_38 = '\0';
        local_40 = plVar3;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      lVar9 = lVar9 + 1;
      lVar7 = *arg1;
    } while (lVar9 < *(int *)(lVar7 + 0xc));
  }
  (**(code **)(*this + 0xdc8))();
  (**(code **)(*this + 0xb10))();
  if (local_68 == '\0') {
    if (local_70 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_68 = '\0';
  }
  local_40 = local_70;
  local_38 = '\0';
  FUN_00d23480();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_70 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this + 0x620))();
  (**(code **)(*this + 0xeb8))();
  (**(code **)(*this + 0x400))();
  if (puVar6 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01719e30 (982 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int unaff_ESI;
  longlong this;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 uVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar38;
  int iVar43;
  int iVar44;
  undefined1 auVar39 [16];
  int iVar45;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 unaff_XMM8 [16];
  int iVar58;
  int iVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  int iVar64;
  int iVar65;
  longlong lVar66;
  longlong lVar67;
  
  if (unaff_ESI == param_2) {
    return 0;
  }
  iVar13 = param_2;
  iVar14 = unaff_ESI;
  if (param_2 < unaff_ESI) {
    iVar13 = unaff_ESI;
    iVar14 = param_2;
  }
  iVar10 = *(int *)(this + 0xc) * 7;
  uVar16 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
  uVar9 = (int)uVar16 >> 0x1f & 0xfffffff4;
  uVar1 = *(ulonglong *)(this + 0x18);
  iVar10 = (iVar14 - uVar16) + uVar9;
  iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
  if ((~(uint)(uVar1 >> ((((byte)(iVar10 >> 0x1f) & 0xc) + (char)iVar10) * '\x04' & 0x3f)) & 0xf) ==
      0) {
    do {
      iVar10 = ~uVar16 + uVar9 + iVar14;
      iVar10 = iVar10 + (((uint)(iVar10 / 6 + (iVar10 >> 0x1f)) >> 1) - (iVar10 >> 0x1f)) * -0xc;
      iVar13 = iVar13 + -1;
      iVar14 = iVar14 + -1;
    } while ((~(uint)(uVar1 >> ((((byte)(iVar10 >> 0x1f) & 0xc) + (char)iVar10) * '\x04' & 0x3f)) &
             0xf) == 0);
  }
  iVar10 = 0;
  uVar11 = iVar13 - iVar14;
  if (uVar11 != 0 && iVar14 <= iVar13) {
    iVar10 = 0;
    iVar15 = iVar14;
    if (7 < uVar11) {
      iVar10 = uVar9 - uVar16;
      uVar17 = uVar11 & 0xfffffff8;
      iVar15 = iVar14 + uVar17;
      iVar18 = iVar14 + _DAT_0238fcc0;
      iVar19 = iVar14 + _UNK_0238fcc4;
      iVar20 = iVar14 + _UNK_0238fcc8;
      iVar14 = iVar14 + _UNK_0238fccc;
      uVar21 = (undefined4)uVar1;
      uVar28 = (undefined4)(uVar1 >> 0x20);
      iVar22 = iVar10 + 4;
      iVar58 = 0;
      iVar59 = 0;
      iVar60 = 0;
      iVar61 = 0;
      iVar62 = 0;
      iVar63 = 0;
      iVar64 = 0;
      iVar65 = 0;
      uVar12 = uVar17;
      do {
        auVar39._0_4_ = iVar10 + iVar18;
        auVar39._4_4_ = iVar10 + iVar19;
        auVar39._8_4_ = iVar10 + iVar20;
        auVar39._12_4_ = iVar10 + iVar14;
        auVar23._0_4_ = iVar22 + iVar18;
        auVar23._4_4_ = iVar22 + iVar19;
        auVar23._8_4_ = iVar22 + iVar20;
        auVar23._12_4_ = iVar22 + iVar14;
        auVar30._4_4_ = auVar39._4_4_;
        auVar30._0_4_ = auVar39._4_4_;
        auVar30._8_4_ = auVar39._12_4_;
        auVar30._12_4_ = auVar39._12_4_;
        auVar31 = pmuldq(auVar30,_DAT_02411a40);
        auVar46 = pmuldq(auVar39,_DAT_02411a40);
        auVar47._4_4_ = auVar46._4_4_;
        auVar47._12_4_ = auVar46._12_4_;
        auVar47._0_4_ = auVar47._4_4_;
        auVar47._8_4_ = auVar47._12_4_;
        auVar31 = pblendw(auVar47,auVar31,0xcc);
        auVar48._0_4_ = (auVar31._0_4_ >> 1) - (auVar31._0_4_ >> 0x1f);
        auVar48._4_4_ = (auVar31._4_4_ >> 1) - (auVar31._4_4_ >> 0x1f);
        auVar48._8_4_ = (auVar31._8_4_ >> 1) - (auVar31._8_4_ >> 0x1f);
        auVar48._12_4_ = (auVar31._12_4_ >> 1) - (auVar31._12_4_ >> 0x1f);
        auVar31 = pmulld(auVar48,_DAT_023de2c0);
        iVar38 = auVar39._0_4_ - auVar31._0_4_;
        iVar43 = auVar39._4_4_ - auVar31._4_4_;
        iVar44 = auVar39._8_4_ - auVar31._8_4_;
        iVar45 = auVar39._12_4_ - auVar31._12_4_;
        auVar32._4_4_ = auVar23._4_4_;
        auVar32._0_4_ = auVar23._4_4_;
        auVar32._8_4_ = auVar23._12_4_;
        auVar32._12_4_ = auVar23._12_4_;
        auVar31 = pmuldq(auVar32,_DAT_02411a40);
        auVar46 = pmuldq(auVar23,_DAT_02411a40);
        auVar49._4_4_ = auVar46._4_4_;
        auVar49._12_4_ = auVar46._12_4_;
        auVar49._0_4_ = auVar49._4_4_;
        auVar49._8_4_ = auVar49._12_4_;
        auVar31 = pblendw(auVar49,auVar31,0xcc);
        auVar50._0_4_ = (auVar31._0_4_ >> 1) - (auVar31._0_4_ >> 0x1f);
        auVar50._4_4_ = (auVar31._4_4_ >> 1) - (auVar31._4_4_ >> 0x1f);
        auVar50._8_4_ = (auVar31._8_4_ >> 1) - (auVar31._8_4_ >> 0x1f);
        auVar50._12_4_ = (auVar31._12_4_ >> 1) - (auVar31._12_4_ >> 0x1f);
        auVar31 = pmulld(auVar50,_DAT_023de2c0);
        auVar24._0_4_ = auVar23._0_4_ - auVar31._0_4_;
        auVar24._4_4_ = auVar23._4_4_ - auVar31._4_4_;
        auVar24._8_4_ = auVar23._8_4_ - auVar31._8_4_;
        auVar24._12_4_ = auVar23._12_4_ - auVar31._12_4_;
        auVar33._0_4_ = iVar38 >> 0x1f;
        auVar33._4_4_ = iVar43 >> 0x1f;
        auVar33._8_4_ = iVar44 >> 0x1f;
        auVar33._12_4_ = iVar45 >> 0x1f;
        auVar33 = auVar33 & _DAT_023de2c0;
        auVar51._0_4_ = auVar24._0_4_ >> 0x1f;
        auVar51._4_4_ = auVar24._4_4_ >> 0x1f;
        auVar51._8_4_ = auVar24._8_4_ >> 0x1f;
        auVar51._12_4_ = auVar24._12_4_ >> 0x1f;
        auVar51 = auVar51 & _DAT_023de2c0;
        auVar34._0_4_ = (auVar33._0_4_ + iVar38) * 4;
        auVar34._4_4_ = (auVar33._4_4_ + iVar43) * 4;
        auVar34._8_4_ = (auVar33._8_4_ + iVar44) * 4;
        auVar34._12_4_ = (auVar33._12_4_ + iVar45) * 4;
        auVar52._0_4_ = (auVar51._0_4_ + auVar24._0_4_) * 4;
        auVar52._4_4_ = (auVar51._4_4_ + auVar24._4_4_) * 4;
        auVar52._8_4_ = (auVar51._8_4_ + auVar24._8_4_) * 4;
        auVar52._12_4_ = (auVar51._12_4_ + auVar24._12_4_) * 4;
        auVar25 = pmovzxdq(auVar24,auVar34);
        unaff_XMM8 = pmovzxdq(unaff_XMM8,auVar52);
        auVar31._8_4_ = uVar21;
        auVar31._0_8_ = uVar1;
        auVar31._12_4_ = uVar28;
        auVar56._0_8_ = uVar1 >> (ulonglong)auVar34._12_4_;
        auVar56._8_8_ = auVar31._8_8_ >> (ulonglong)auVar34._12_4_;
        auVar46._8_4_ = uVar21;
        auVar46._0_8_ = uVar1;
        auVar46._12_4_ = uVar28;
        auVar40._0_8_ = uVar1 >> (ulonglong)auVar34._8_4_;
        auVar40._8_8_ = auVar46._8_8_ >> (ulonglong)auVar34._8_4_;
        auVar41._8_4_ = uVar21;
        auVar41._0_8_ = uVar1;
        auVar41._12_4_ = uVar28;
        auVar35._0_8_ = uVar1 >> auVar25._0_8_;
        auVar35._8_8_ = auVar41._8_8_ >> auVar25._0_8_;
        auVar54._8_4_ = uVar21;
        auVar54._0_8_ = uVar1;
        auVar54._12_4_ = uVar28;
        auVar26._0_8_ = uVar1 >> auVar25._8_8_;
        auVar26._8_8_ = auVar54._8_8_ >> auVar25._8_8_;
        auVar41 = pblendw(auVar40,auVar56,0xf0);
        auVar25._8_4_ = uVar21;
        auVar25._0_8_ = uVar1;
        auVar25._12_4_ = uVar28;
        auVar57._0_8_ = uVar1 >> (ulonglong)auVar52._12_4_;
        auVar57._8_8_ = auVar25._8_8_ >> (ulonglong)auVar52._12_4_;
        auVar2._8_4_ = uVar21;
        auVar2._0_8_ = uVar1;
        auVar2._12_4_ = uVar28;
        auVar53._0_8_ = uVar1 >> (ulonglong)auVar52._8_4_;
        auVar53._8_8_ = auVar2._8_8_ >> (ulonglong)auVar52._8_4_;
        auVar3._8_4_ = uVar21;
        auVar3._0_8_ = uVar1;
        auVar3._12_4_ = uVar28;
        auVar29._0_8_ = uVar1 >> unaff_XMM8._0_8_;
        auVar29._8_8_ = auVar3._8_8_ >> unaff_XMM8._0_8_;
        auVar31 = pblendw(auVar26,auVar35,0xf);
        auVar4._8_4_ = uVar21;
        auVar4._0_8_ = uVar1;
        auVar4._12_4_ = uVar28;
        auVar36._0_8_ = uVar1 >> unaff_XMM8._8_8_;
        auVar36._8_8_ = auVar4._8_8_ >> unaff_XMM8._8_8_;
        auVar54 = pblendw(auVar53,auVar57,0xf0);
        auVar46 = pblendw(auVar36,auVar29,0xf);
        lVar66 = (longlong)DAT_02411a30;
        auVar42._0_8_ = -(ulonglong)(SUB168(auVar41 & _DAT_02411a30,0) == lVar66);
        lVar67 = DAT_02411a30._8_8_;
        auVar42._8_8_ = -(ulonglong)(SUB168(auVar41 & _DAT_02411a30,8) == lVar67);
        auVar5._8_4_ = 0xffffffff;
        auVar5._0_8_ = 0xffffffffffffffff;
        auVar5._12_4_ = 0xffffffff;
        auVar27._0_8_ = -(ulonglong)(SUB168(auVar31 & _DAT_02411a30,0) == lVar66);
        auVar27._8_8_ = -(ulonglong)(SUB168(auVar31 & _DAT_02411a30,8) == lVar67);
        auVar6._8_4_ = 0xffffffff;
        auVar6._0_8_ = 0xffffffffffffffff;
        auVar6._12_4_ = 0xffffffff;
        auVar31 = packssdw(auVar27 ^ auVar6,auVar42 ^ auVar5);
        iVar58 = iVar58 - auVar31._0_4_;
        iVar59 = iVar59 - auVar31._4_4_;
        iVar60 = iVar60 - auVar31._8_4_;
        iVar61 = iVar61 - auVar31._12_4_;
        auVar55._0_8_ = -(ulonglong)(SUB168(auVar54 & _DAT_02411a30,0) == lVar66);
        auVar55._8_8_ = -(ulonglong)(SUB168(auVar54 & _DAT_02411a30,8) == lVar67);
        auVar7._8_4_ = 0xffffffff;
        auVar7._0_8_ = 0xffffffffffffffff;
        auVar7._12_4_ = 0xffffffff;
        auVar37._0_8_ = -(ulonglong)(SUB168(auVar46 & _DAT_02411a30,0) == lVar66);
        auVar37._8_8_ = -(ulonglong)(SUB168(auVar46 & _DAT_02411a30,8) == lVar67);
        auVar8._8_4_ = 0xffffffff;
        auVar8._0_8_ = 0xffffffffffffffff;
        auVar8._12_4_ = 0xffffffff;
        auVar31 = packssdw(auVar37 ^ auVar8,auVar55 ^ auVar7);
        iVar62 = iVar62 - auVar31._0_4_;
        iVar63 = iVar63 - auVar31._4_4_;
        iVar64 = iVar64 - auVar31._8_4_;
        iVar65 = iVar65 - auVar31._12_4_;
        iVar18 = iVar18 + _DAT_023de2b0;
        iVar19 = iVar19 + _UNK_023de2b4;
        iVar20 = iVar20 + _UNK_023de2b8;
        iVar14 = iVar14 + _UNK_023de2bc;
        uVar12 = uVar12 - 8;
      } while (uVar12 != 0);
      iVar10 = iVar65 + iVar61 + iVar63 + iVar59 + iVar64 + iVar60 + iVar62 + iVar58;
      if (uVar11 == uVar17) goto LAB_0171a1f8;
    }
    iVar13 = iVar13 - iVar15;
    iVar14 = (uVar9 + iVar15) - uVar16;
    do {
      iVar15 = iVar14 + (((uint)(iVar14 / 6 + (iVar14 >> 0x1f)) >> 1) - (iVar14 >> 0x1f)) * -0xc;
      iVar10 = (iVar10 + 1) -
               (uint)((~(uint)(uVar1 >> ((((byte)(iVar15 >> 0x1f) & 0xc) + (char)iVar15) * '\x04' &
                                        0x3f)) & 0xf) == 0);
      iVar14 = iVar14 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
LAB_0171a1f8:
  iVar13 = -iVar10;
  if (param_2 < unaff_ESI) {
    iVar13 = iVar10;
  }
  return iVar13;
}




// ==================================================
// @015200c0 (956 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  undefined8 *this;
  
  FUN_010ed760();
  *this = &DAT_025fee18;
  FUN_01520520();
  FUN_01520810();
  *(undefined1 *)(this + 0xd) = 0;
  if (DAT_027c0160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      _DAT_0270ab20 = FUN_0015ecf0;
      _DAT_0270ab30 = 0;
      uRam000000000270ab38 = 0;
      _DAT_0270ab40 = 0;
      uRam000000000270ab48 = 0;
      _DAT_0270ab50 = 0;
      uRam000000000270ab58 = 0;
      _DAT_0270ab60 = 0;
      uRam000000000270ab68 = 0;
      _DAT_0270ab70 = 0;
      uRam000000000270ab78 = 0;
      _DAT_0270ab80 = 0;
      uRam000000000270ab88 = 0;
      _DAT_0270ab90 = 0;
      uRam000000000270ab98 = 0;
      _DAT_0270aba0 = 0;
      uRam000000000270aba8 = 0;
      _DAT_0270abb0 = 0;
      uRam000000000270abb8 = 0;
      _DAT_0270abc0 = 0;
      _uRam000000000270abc8 = 0;
      _DAT_0270abd0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270abcb == '\0') {
    FUN_01520b00();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x69) = 0;
  if (DAT_027c0160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      _DAT_0270ab20 = FUN_0015ecf0;
      _DAT_0270ab30 = 0;
      uRam000000000270ab38 = 0;
      _DAT_0270ab40 = 0;
      uRam000000000270ab48 = 0;
      _DAT_0270ab50 = 0;
      uRam000000000270ab58 = 0;
      _DAT_0270ab60 = 0;
      uRam000000000270ab68 = 0;
      _DAT_0270ab70 = 0;
      uRam000000000270ab78 = 0;
      _DAT_0270ab80 = 0;
      uRam000000000270ab88 = 0;
      _DAT_0270ab90 = 0;
      uRam000000000270ab98 = 0;
      _DAT_0270aba0 = 0;
      uRam000000000270aba8 = 0;
      _DAT_0270abb0 = 0;
      uRam000000000270abb8 = 0;
      _DAT_0270abc0 = 0;
      _uRam000000000270abc8 = 0;
      _DAT_0270abd0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270abcb == '\0') {
    FUN_01520c70();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x6c) = 0;
  if (DAT_027c0160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      _DAT_0270ab20 = FUN_0015ecf0;
      _DAT_0270ab30 = 0;
      uRam000000000270ab38 = 0;
      _DAT_0270ab40 = 0;
      uRam000000000270ab48 = 0;
      _DAT_0270ab50 = 0;
      uRam000000000270ab58 = 0;
      _DAT_0270ab60 = 0;
      uRam000000000270ab68 = 0;
      _DAT_0270ab70 = 0;
      uRam000000000270ab78 = 0;
      _DAT_0270ab80 = 0;
      uRam000000000270ab88 = 0;
      _DAT_0270ab90 = 0;
      uRam000000000270ab98 = 0;
      _DAT_0270aba0 = 0;
      uRam000000000270aba8 = 0;
      _DAT_0270abb0 = 0;
      uRam000000000270abb8 = 0;
      _DAT_0270abc0 = 0;
      _uRam000000000270abc8 = 0;
      _DAT_0270abd0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270abcb == '\0') {
    FUN_01520de0();
    FUN_00e87980();
  }
  *(undefined4 *)(this + 0xe) = 0;
  if (DAT_027c0160 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0270ab28 = FUN_0015ea50();
      _DAT_0270ab10 = "MUScalePitchSystem";
      _DAT_0270ab18 = 0x78;
      _DAT_0270ab20 = FUN_0015ecf0;
      _DAT_0270ab30 = 0;
      uRam000000000270ab38 = 0;
      _DAT_0270ab40 = 0;
      uRam000000000270ab48 = 0;
      _DAT_0270ab50 = 0;
      uRam000000000270ab58 = 0;
      _DAT_0270ab60 = 0;
      uRam000000000270ab68 = 0;
      _DAT_0270ab70 = 0;
      uRam000000000270ab78 = 0;
      _DAT_0270ab80 = 0;
      uRam000000000270ab88 = 0;
      _DAT_0270ab90 = 0;
      uRam000000000270ab98 = 0;
      _DAT_0270aba0 = 0;
      uRam000000000270aba8 = 0;
      _DAT_0270abb0 = 0;
      uRam000000000270abb8 = 0;
      _DAT_0270abc0 = 0;
      _uRam000000000270abc8 = 0;
      _DAT_0270abd0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0270abcb == '\0') {
    FUN_01520f50();
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @0176a580 (935 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  longlong arg1;
  longlong *this;
  longlong local_38;
  char local_30;
  
  if (arg1 != 0) {
    FUN_00d50b00();
  }
  FUN_017178d0();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (arg1 != 0) {
    FUN_00d50b20();
  }
  uVar2 = *(ulonglong *)(local_38 + 0x18);
  uVar1 = (uint)uVar2;
  if ((~uVar1 & 0xf0) != 0) {
    uVar3 = (uint)(uVar2 >> 4) & 0xf;
    uVar4 = 0xffffffff;
    if (uVar3 != 0xf) {
      uVar4 = uVar3;
    }
    if ((4 < uVar4) || ((0x15U >> (uVar4 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
      uVar1 = (uint)uVar2;
    }
  }
  if ((~uVar1 & 0xf00) != 0) {
    uVar4 = (uint)(uVar2 >> 8) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
    }
  }
  uVar1 = (uint)uVar2;
  if ((~uVar1 & 0xf000) != 0) {
    uVar3 = (uint)(uVar2 >> 0xc) & 0xf;
    uVar4 = 0xffffffff;
    if (uVar3 != 0xf) {
      uVar4 = uVar3;
    }
    if ((4 < uVar4) || ((0x15U >> (uVar4 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
      uVar1 = (uint)uVar2;
    }
  }
  if ((~uVar1 & 0xf0000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x10) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
    }
  }
  uVar1 = (uint)uVar2;
  if ((~uVar1 & 0xf00000) != 0) {
    uVar3 = (uint)(uVar2 >> 0x14) & 0xf;
    uVar4 = 0xffffffff;
    if (uVar3 != 0xf) {
      uVar4 = uVar3;
    }
    if ((4 < uVar4) || ((0x15U >> (uVar4 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
      uVar1 = (uint)uVar2;
    }
  }
  if ((~uVar1 & 0xf000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x18) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
    }
  }
  if ((~(uint)uVar2 & 0xf0000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x1c) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
    }
  }
  if ((~uVar2 & 0xf00000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x20) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
    }
  }
  if ((~uVar2 & 0xf000000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x24) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
    }
  }
  if ((~uVar2 & 0xf0000000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x28) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
      uVar2 = *(ulonglong *)(local_38 + 0x18);
    }
  }
  if ((~uVar2 & 0xf00000000000) != 0) {
    uVar4 = (uint)(uVar2 >> 0x2c) & 0xf;
    uVar1 = 0xffffffff;
    if (uVar4 != 0xf) {
      uVar1 = uVar4;
    }
    if ((4 < uVar1) || ((0x15U >> (uVar1 & 0x1f) & 1) == 0)) {
      FUN_017163c0();
    }
  }
  *this = local_38;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01b1c920 (926 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined1 auVar1 [16];
  longlong lVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  longlong *this;
  float fVar7;
  undefined8 uVar8;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_01b1c964;
    }
  }
  else if (local_40 != 0) {
LAB_01b1c964:
    FUN_01caeae0();
    if (local_38 == '\0') {
      if (local_40 == 0) goto LAB_01b1ca49;
      FUN_00d50b00();
LAB_01b1c9b0:
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_0174e1b0();
      uVar6 = (ulonglong)uVar3;
      if ((param_2 & (byte)uVar3) == 1) {
        iVar4 = FUN_01d654a0();
        if (iVar4 == 0) {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0174e250();
        }
        else {
          iVar4 = FUN_01d654a0();
          if (iVar4 == 1) {
            pvVar5 = _pthread_getspecific(param_1);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0174e250();
          }
          else {
            iVar4 = FUN_01d654a0();
            if (iVar4 == 2) {
              pvVar5 = _pthread_getspecific(param_1);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0174e250();
            }
            else {
              iVar4 = FUN_01d654a0();
              if (iVar4 == 3) {
                pvVar5 = _pthread_getspecific(param_1);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0174e250();
              }
            }
          }
        }
        if ((*(int *)((longlong)this + 0x284) == 1) ||
           (*(int *)((longlong)this + 0x284) == 0)) {
          fVar9 = (float)DAT_023dccec;
          fVar12 = (float)DAT_023dccf4;
        }
        else {
          uVar8 = FUN_01e3f820();
          if (*(int *)((longlong)this + 0x284) == 3) {
            auVar10 = in_XMM1;
            FUN_01e3f820();
            auVar10 = blendps(auVar10,_DAT_0241c700,0xd);
          }
          else {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = DAT_023dccf4;
          }
          auVar1._8_4_ = extraout_XMM0_Dc;
          auVar1._0_8_ = uVar8;
          auVar1._12_4_ = extraout_XMM0_Dd;
          auVar11._0_4_ = auVar10._0_4_ + (float)uVar8;
          auVar11._4_4_ = auVar10._4_4_ + (float)((ulonglong)uVar8 >> 0x20);
          auVar11._8_4_ = auVar10._8_4_ + extraout_XMM0_Dc;
          auVar11._12_4_ = auVar10._12_4_ + extraout_XMM0_Dd;
          auVar10 = blendps(auVar11,auVar1,2);
          fVar9 = auVar10._0_4_;
          auVar10 = blendps(in_XMM1,_DAT_0241c710,0xd);
          fVar12 = auVar10._0_4_;
        }
        fVar7 = fVar9 + fVar12 * DAT_0239011c;
        if ((fVar12 == 0.0) && (!NAN(fVar12))) {
          fVar7 = fVar9;
        }
        (**(code **)(*this + 0x618))(fVar7);
        FUN_00d403d0();
        lVar2 = DAT_027e3d40;
        if (DAT_027e3d40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b00();
        local_68 = 0;
        local_60 = '\0';
        FUN_00d40470(&local_68,&stack0xffffffffffffffa8,1,3);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (this != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        uVar6 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
      }
      FUN_00d50b20();
    }
    else {
      if (local_40 != 0) goto LAB_01b1c9b0;
LAB_01b1ca49:
      uVar6 = 0;
    }
    FUN_00d50b20();
    goto LAB_01b1ccad;
  }
  uVar6 = 0;
LAB_01b1ccad:
  return uVar6 & 0xffffffff;
}




// ==================================================
// @01a296f0 (924 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  char *pcVar7;
  longlong *arg1;
  longlong *this;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  longlong local_40;
  char local_38 [8];
  
  if ((*this != 0) && (*arg1 != 0)) {
    FUN_00d23310();
    pVar6 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_50[0]);
    pcVar7 = local_38;
    if (local_50[0] != '\0') {
      pcVar7 = local_50;
    }
    local_38[0] = local_50[0];
    *pcVar7 = '\0';
    if ((local_50[0] != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_58 == 0) {
        return;
      }
      FUN_00d50b00();
    }
    else if (local_58 == 0) {
      return;
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_0129a390();
    if (cVar1 != '\0') {
      pvVar4 = _pthread_getspecific(pVar6);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0129a470();
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)*this + 0xe48))();
        local_48 = local_58;
        if (local_50[0] == '\0') {
          if (((local_58 != 0) && (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50[0] = '\0';
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          pVar6 = (pthread_key_t)local_48;
        }
        cVar1 = FUN_0129a3a0();
        if (cVar1 != '\0') {
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar6 = (pthread_key_t)local_48;
          }
          FUN_01266fe0();
          local_40 = local_58;
          if ((((local_50[0] == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50[0] != '\0'))
             && (local_58 != 0)) {
            FUN_00d50b20();
          }
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar6 = (pthread_key_t)local_40;
          }
          FUN_00e7bdb0();
          FUN_00e7bdb0();
          bVar2 = FUN_012fa750();
          pvVar4 = _pthread_getspecific(pVar6);
          if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            pVar6 = (pthread_key_t)local_40;
          }
          FUN_00e7bdb0();
          FUN_00e7bdb0();
          bVar3 = FUN_012fb890();
          if ((param_2 != '\0') && ((bVar2 | bVar3) == 1)) {
            pvVar4 = _pthread_getspecific(pVar6);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00e8b990();
            FUN_00cb1f10();
            FUN_00db32a0();
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b1b740 (921 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  char in_DL;
  longlong *this;
  longlong *plVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_XMM1_Dc;
  undefined4 uVar17;
  undefined4 in_XMM1_Dd;
  undefined4 uVar18;
  float fVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  longlong *local_68;
  char local_60;
  longlong in_stack_ffffffffffffffa8;
  char local_50;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined4)param_2;
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*(char *)((longlong)this + 0x315) == '\0') {
LAB_01b1b7ba:
    bVar8 = false;
    lVar6 = *(longlong *)PTR____stack_chk_guard_024a9898;
  }
  else {
    FUN_01ad3cb0();
    if ((local_50 != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
      FUN_00d50b20();
    }
    if (in_stack_ffffffffffffffa8 == 0) {
      bVar8 = false;
    }
    else {
      if ((*(int *)((longlong)this + 0x194) == -1000000) && ((int)this[0x32] == -1000000))
      goto LAB_01b1b7ba;
      bVar8 = this[0x34] != 0;
      if ((bVar8) && (in_DL != '\0')) {
        FUN_00d50b00();
        *(int *)((longlong)this + 0x2fc) = *(int *)((longlong)this + 0x2fc) + 1;
        FUN_01ad3cb0();
        pvVar5 = _pthread_getspecific(param_1);
        plVar7 = local_68;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar7 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar7 + 0x3a0))();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01ad3cb0();
        pvVar5 = _pthread_getspecific(param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0174b330();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01ad3cb0();
        pvVar5 = _pthread_getspecific(param_1);
        plVar7 = local_68;
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          plVar7 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        iVar4 = (**(code **)(*plVar7 + 0x3a8))();
        *(int *)((longlong)this + 0x194) = iVar4;
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
          iVar4 = *(int *)((longlong)this + 0x194);
        }
        if (*(int *)((longlong)this + 0x184) != iVar4) {
          *(int *)((longlong)this + 0x184) = iVar4;
          uVar20 = DAT_023dccf4;
          uVar9 = DAT_023dccec;
          if ((*(int *)((longlong)this + 0x284) != 1) &&
             (*(int *)((longlong)this + 0x284) != 0)) {
            uVar9 = FUN_01e3f820();
            if (*(int *)((longlong)this + 0x284) == 3) {
              uVar13 = uVar12;
              uVar16 = uVar15;
              uVar17 = in_XMM1_Dc;
              uVar18 = in_XMM1_Dd;
              FUN_01e3f820();
              auVar21._4_4_ = uVar16;
              auVar21._0_4_ = uVar13;
              auVar21._8_4_ = uVar17;
              auVar21._12_4_ = uVar18;
              auVar10 = blendps(auVar21,_DAT_0241c700,0xd);
            }
            else {
              auVar10._8_8_ = 0;
              auVar10._0_8_ = DAT_023dccf4;
            }
            auVar2._8_8_ = extraout_XMM0_Qb;
            auVar2._0_8_ = uVar9;
            auVar11._0_4_ = auVar10._0_4_ + (float)uVar9;
            auVar11._4_4_ = auVar10._4_4_ + (float)((ulonglong)uVar9 >> 0x20);
            auVar11._8_4_ = auVar10._8_4_ + (float)extraout_XMM0_Qb;
            auVar11._12_4_ = auVar10._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
            auVar10 = blendps(auVar11,auVar2,2);
            auVar3._4_4_ = uVar15;
            auVar3._0_4_ = uVar12;
            auVar3._8_4_ = in_XMM1_Dc;
            auVar3._12_4_ = in_XMM1_Dd;
            auVar21 = blendps(auVar3,_DAT_0241c710,0xd);
            uVar20 = auVar21._0_8_;
            uVar9 = auVar10._0_8_;
          }
          fVar19 = (float)uVar20;
          fVar14 = fVar19 * DAT_0239011c;
          if ((fVar19 == 0.0) && (!NAN(fVar19))) {
            fVar14 = fVar19;
          }
          (**(code **)(*this + 0x618))(uVar9,fVar14);
          iVar4 = *(int *)((longlong)this + 0x194);
        }
        FUN_01ad3320();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (longlong *)0x0) {
          iVar4 = -1000000;
        }
        if ((int)this[0x32] != iVar4) {
          *(int *)(this + 0x32) = iVar4;
          (**(code **)(*this + 0x620))();
        }
        FUN_01b14e30();
        FUN_01b03750();
        FUN_01ad37a0();
        FUN_01ad6540();
        FUN_01af6500();
        FUN_00d50b20();
        bVar8 = true;
        lVar6 = *(longlong *)PTR____stack_chk_guard_024a9898;
        goto joined_r0x01b1bace;
      }
    }
    lVar6 = *(longlong *)PTR____stack_chk_guard_024a9898;
  }
joined_r0x01b1bace:
  if (lVar6 == lVar1) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




// ==================================================
// @017181f0 (910 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 unaff_ESI;
  ulonglong uVar8;
  undefined8 *this;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  uVar11 = FUN_00c92160();
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 0;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 2;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 4;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 5;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 7;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 9;
  iVar2 = *(int *)(puVar5 + 3);
  FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 0xb;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025fbbb0;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  puVar6[3] = 0;
  FUN_00d500e0();
  *(undefined4 *)((longlong)puVar6 + 0xc) = unaff_ESI;
  uVar3 = *(uint *)(puVar5 + 3);
  if ((int)uVar3 < 4) {
LAB_01718542:
    FUN_01715d80();
    *this = puVar6;
    *(undefined1 *)(this + 1) = 1;
    FUN_00d50b20();
    return;
  }
  lVar4 = puVar5[2];
  uVar10 = puVar6[3];
  if (uVar3 < 0x10) {
    uVar8 = 0;
    do {
      uVar10 = uVar10 & ~(0xfL << ((*(byte *)(lVar4 + uVar8 * 4) & 0xf) << 2));
      uVar8 = uVar8 + 1;
joined_r0x0171851d:
    } while (uVar8 != uVar3 >> 2);
    puVar6[3] = uVar10;
    goto LAB_01718542;
  }
  uVar8 = (ulonglong)(uVar3 >> 2 & 0xfffffffc);
  auVar13._8_8_ = _UNK_023d4b78;
  auVar13._0_8_ = uVar10;
  uVar10 = (uVar8 - 4 >> 2) + 1;
  if (uVar8 - 4 == 0) {
    auVar16._8_4_ = 0xffffffff;
    auVar16._0_8_ = 0xffffffffffffffff;
    auVar16._12_4_ = 0xffffffff;
    lVar7 = 0;
  }
  else {
    lVar9 = -(uVar10 & 0xfffffffffffffffe);
    auVar16._8_4_ = 0xffffffff;
    auVar16._0_8_ = 0xffffffffffffffff;
    auVar16._12_4_ = 0xffffffff;
    lVar7 = 0;
    do {
      uVar11 = *(undefined8 *)(lVar4 + lVar7 * 4);
      uVar1 = *(undefined8 *)(lVar4 + 8 + lVar7 * 4);
      auVar30._0_4_ = (int)uVar11 << 2;
      auVar30._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
      auVar30._8_8_ = 0;
      auVar22 = pmovzxdq(auVar30,auVar30);
      auVar32._0_8_ = _DAT_02411a30 << auVar22._0_8_;
      lVar14 = auVar22._8_8_;
      auVar32._8_8_ = _UNK_02411a38 << lVar14;
      auVar27._0_4_ = (int)uVar1 << 2;
      auVar27._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
      auVar27._8_8_ = 0;
      auVar23._0_8_ = _DAT_02411a30 << lVar14;
      auVar23._8_8_ = _UNK_02411a38 << lVar14;
      auVar28 = pmovzxdq(auVar27,auVar27);
      auVar24 = pblendw(auVar23,auVar32,0xf);
      auVar33._0_8_ = _DAT_02411a30 << auVar28._0_8_;
      lVar14 = auVar28._8_8_;
      auVar33._8_8_ = _UNK_02411a38 << lVar14;
      auVar22._8_4_ = auVar28._8_4_;
      auVar22._0_8_ = lVar14;
      auVar22._12_4_ = auVar28._12_4_;
      auVar29._0_8_ = _DAT_02411a30 << lVar14;
      auVar29._8_8_ = _UNK_02411a38 << auVar22._8_8_;
      auVar30 = pblendw(auVar29,auVar33,0xf);
      uVar11 = *(undefined8 *)(lVar4 + 0x10 + lVar7 * 4);
      uVar1 = *(undefined8 *)(lVar4 + 0x18 + lVar7 * 4);
      auVar28._0_4_ = (int)uVar11 << 2;
      auVar28._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
      auVar28._8_8_ = 0;
      auVar22 = pmovzxdq(auVar28,auVar28);
      auVar34._0_8_ = _DAT_02411a30 << auVar22._0_8_;
      lVar14 = auVar22._8_8_;
      auVar34._8_8_ = _UNK_02411a38 << lVar14;
      auVar15._0_4_ = (int)uVar1 << 2;
      auVar15._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
      auVar15._8_8_ = 0;
      auVar12._0_8_ = _DAT_02411a30 << lVar14;
      auVar12._8_8_ = _UNK_02411a38 << lVar14;
      auVar28 = pmovzxdq(auVar15,auVar15);
      auVar22 = pblendw(auVar12,auVar34,0xf);
      auVar35._0_8_ = _DAT_02411a30 << auVar28._0_8_;
      lVar14 = auVar28._8_8_;
      auVar35._8_8_ = _UNK_02411a38 << lVar14;
      auVar13 = ~auVar22 & ~auVar24 & auVar13;
      auVar25._8_4_ = auVar28._8_4_;
      auVar25._0_8_ = lVar14;
      auVar25._12_4_ = auVar28._12_4_;
      auVar24._0_8_ = _DAT_02411a30 << lVar14;
      auVar24._8_8_ = _UNK_02411a38 << auVar25._8_8_;
      auVar22 = pblendw(auVar24,auVar35,0xf);
      auVar16 = ~auVar22 & ~auVar30 & auVar16;
      lVar7 = lVar7 + 8;
      lVar9 = lVar9 + 2;
    } while (lVar9 != 0);
    if ((uVar10 & 1) == 0) goto LAB_01718508;
  }
  uVar11 = *(undefined8 *)(lVar4 + 8 + lVar7 * 4);
  auVar19._0_4_ = (int)uVar11 << 2;
  auVar19._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
  auVar19._8_8_ = 0;
  auVar22 = pmovzxdq(auVar19,auVar19);
  auVar31._0_8_ = _DAT_02411a30 << auVar22._0_8_;
  lVar9 = auVar22._8_8_;
  auVar31._8_8_ = _UNK_02411a38 << lVar9;
  auVar20._8_4_ = auVar22._8_4_;
  auVar20._12_4_ = auVar22._12_4_;
  auVar20._0_8_ = lVar9;
  auVar36._0_8_ = _DAT_02411a30 << lVar9;
  auVar36._8_8_ = _UNK_02411a38 << auVar20._8_8_;
  auVar22 = pblendw(auVar36,auVar31,0xf);
  auVar16 = ~auVar22 & auVar16;
  uVar11 = *(undefined8 *)(lVar4 + lVar7 * 4);
  auVar17._0_4_ = (int)uVar11 << 2;
  auVar17._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
  auVar17._8_8_ = 0;
  auVar22 = pmovzxdq(auVar17,auVar17);
  auVar21._0_8_ = _DAT_02411a30 << auVar22._0_8_;
  lVar7 = auVar22._8_8_;
  auVar21._8_8_ = _UNK_02411a38 << lVar7;
  auVar18._8_4_ = auVar22._8_4_;
  auVar18._12_4_ = auVar22._12_4_;
  auVar18._0_8_ = lVar7;
  auVar26._0_8_ = _DAT_02411a30 << lVar7;
  auVar26._8_8_ = _UNK_02411a38 << auVar18._8_8_;
  auVar22 = pblendw(auVar26,auVar21,0xf);
  auVar13 = ~auVar22 & auVar13;
LAB_01718508:
  uVar10 = SUB168(auVar13 & auVar16,8) & SUB168(auVar13 & auVar16,0);
  goto joined_r0x0171851d;
}




// ==================================================
// @017185b0 (910 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined4 unaff_ESI;
  ulonglong uVar8;
  undefined8 *this;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  uVar11 = FUN_00c92160();
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 0;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 2;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 3;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 5;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 7;
  iVar2 = *(int *)(puVar5 + 3);
  uVar11 = FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 8;
  iVar2 = *(int *)(puVar5 + 3);
  FUN_00c8e340(uVar11,1);
  *(undefined4 *)(puVar5[2] + (longlong)iVar2) = 10;
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_025fbbb0;
  *(undefined8 *)((longlong)puVar6 + 0xc) = 0;
  puVar6[3] = 0;
  FUN_00d500e0();
  *(undefined4 *)((longlong)puVar6 + 0xc) = unaff_ESI;
  uVar3 = *(uint *)(puVar5 + 3);
  if ((int)uVar3 < 4) {
LAB_01718902:
    FUN_01715d80();
    *this = puVar6;
    *(undefined1 *)(this + 1) = 1;
    FUN_00d50b20();
    return;
  }
  lVar4 = puVar5[2];
  uVar10 = puVar6[3];
  if (uVar3 < 0x10) {
    uVar8 = 0;
    do {
      uVar10 = uVar10 & ~(0xfL << ((*(byte *)(lVar4 + uVar8 * 4) & 0xf) << 2));
      uVar8 = uVar8 + 1;
joined_r0x017188dd:
    } while (uVar8 != uVar3 >> 2);
    puVar6[3] = uVar10;
    goto LAB_01718902;
  }
  uVar8 = (ulonglong)(uVar3 >> 2 & 0xfffffffc);
  auVar13._8_8_ = _UNK_023d4b78;
  auVar13._0_8_ = uVar10;
  uVar10 = (uVar8 - 4 >> 2) + 1;
  if (uVar8 - 4 == 0) {
    auVar16._8_4_ = 0xffffffff;
    auVar16._0_8_ = 0xffffffffffffffff;
    auVar16._12_4_ = 0xffffffff;
    lVar7 = 0;
  }
  else {
    lVar9 = -(uVar10 & 0xfffffffffffffffe);
    auVar16._8_4_ = 0xffffffff;
    auVar16._0_8_ = 0xffffffffffffffff;
    auVar16._12_4_ = 0xffffffff;
    lVar7 = 0;
    do {
      uVar11 = *(undefined8 *)(lVar4 + lVar7 * 4);
      uVar1 = *(undefined8 *)(lVar4 + 8 + lVar7 * 4);
      auVar30._0_4_ = (int)uVar11 << 2;
      auVar30._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
      auVar30._8_8_ = 0;
      auVar22 = pmovzxdq(auVar30,auVar30);
      auVar32._0_8_ = _DAT_02411a30 << auVar22._0_8_;
      lVar14 = auVar22._8_8_;
      auVar32._8_8_ = _UNK_02411a38 << lVar14;
      auVar27._0_4_ = (int)uVar1 << 2;
      auVar27._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
      auVar27._8_8_ = 0;
      auVar23._0_8_ = _DAT_02411a30 << lVar14;
      auVar23._8_8_ = _UNK_02411a38 << lVar14;
      auVar28 = pmovzxdq(auVar27,auVar27);
      auVar24 = pblendw(auVar23,auVar32,0xf);
      auVar33._0_8_ = _DAT_02411a30 << auVar28._0_8_;
      lVar14 = auVar28._8_8_;
      auVar33._8_8_ = _UNK_02411a38 << lVar14;
      auVar22._8_4_ = auVar28._8_4_;
      auVar22._0_8_ = lVar14;
      auVar22._12_4_ = auVar28._12_4_;
      auVar29._0_8_ = _DAT_02411a30 << lVar14;
      auVar29._8_8_ = _UNK_02411a38 << auVar22._8_8_;
      auVar30 = pblendw(auVar29,auVar33,0xf);
      uVar11 = *(undefined8 *)(lVar4 + 0x10 + lVar7 * 4);
      uVar1 = *(undefined8 *)(lVar4 + 0x18 + lVar7 * 4);
      auVar28._0_4_ = (int)uVar11 << 2;
      auVar28._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
      auVar28._8_8_ = 0;
      auVar22 = pmovzxdq(auVar28,auVar28);
      auVar34._0_8_ = _DAT_02411a30 << auVar22._0_8_;
      lVar14 = auVar22._8_8_;
      auVar34._8_8_ = _UNK_02411a38 << lVar14;
      auVar15._0_4_ = (int)uVar1 << 2;
      auVar15._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
      auVar15._8_8_ = 0;
      auVar12._0_8_ = _DAT_02411a30 << lVar14;
      auVar12._8_8_ = _UNK_02411a38 << lVar14;
      auVar28 = pmovzxdq(auVar15,auVar15);
      auVar22 = pblendw(auVar12,auVar34,0xf);
      auVar35._0_8_ = _DAT_02411a30 << auVar28._0_8_;
      lVar14 = auVar28._8_8_;
      auVar35._8_8_ = _UNK_02411a38 << lVar14;
      auVar13 = ~auVar22 & ~auVar24 & auVar13;
      auVar25._8_4_ = auVar28._8_4_;
      auVar25._0_8_ = lVar14;
      auVar25._12_4_ = auVar28._12_4_;
      auVar24._0_8_ = _DAT_02411a30 << lVar14;
      auVar24._8_8_ = _UNK_02411a38 << auVar25._8_8_;
      auVar22 = pblendw(auVar24,auVar35,0xf);
      auVar16 = ~auVar22 & ~auVar30 & auVar16;
      lVar7 = lVar7 + 8;
      lVar9 = lVar9 + 2;
    } while (lVar9 != 0);
    if ((uVar10 & 1) == 0) goto LAB_017188c8;
  }
  uVar11 = *(undefined8 *)(lVar4 + 8 + lVar7 * 4);
  auVar19._0_4_ = (int)uVar11 << 2;
  auVar19._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
  auVar19._8_8_ = 0;
  auVar22 = pmovzxdq(auVar19,auVar19);
  auVar31._0_8_ = _DAT_02411a30 << auVar22._0_8_;
  lVar9 = auVar22._8_8_;
  auVar31._8_8_ = _UNK_02411a38 << lVar9;
  auVar20._8_4_ = auVar22._8_4_;
  auVar20._12_4_ = auVar22._12_4_;
  auVar20._0_8_ = lVar9;
  auVar36._0_8_ = _DAT_02411a30 << lVar9;
  auVar36._8_8_ = _UNK_02411a38 << auVar20._8_8_;
  auVar22 = pblendw(auVar36,auVar31,0xf);
  auVar16 = ~auVar22 & auVar16;
  uVar11 = *(undefined8 *)(lVar4 + lVar7 * 4);
  auVar17._0_4_ = (int)uVar11 << 2;
  auVar17._4_4_ = (int)((ulonglong)uVar11 >> 0x20) << 2;
  auVar17._8_8_ = 0;
  auVar22 = pmovzxdq(auVar17,auVar17);
  auVar21._0_8_ = _DAT_02411a30 << auVar22._0_8_;
  lVar7 = auVar22._8_8_;
  auVar21._8_8_ = _UNK_02411a38 << lVar7;
  auVar18._8_4_ = auVar22._8_4_;
  auVar18._12_4_ = auVar22._12_4_;
  auVar18._0_8_ = lVar7;
  auVar26._0_8_ = _DAT_02411a30 << lVar7;
  auVar26._8_8_ = _UNK_02411a38 << auVar18._8_8_;
  auVar22 = pblendw(auVar26,auVar21,0xf);
  auVar13 = ~auVar22 & auVar13;
LAB_017188c8:
  uVar10 = SUB168(auVar13 & auVar16,8) & SUB168(auVar13 & auVar16,0);
  goto joined_r0x017188dd;
}




// ==================================================
// @01521770 (909 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *this;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_40;
  uint local_38;
  undefined4 local_34;
  
  lVar1 = DAT_026e3bc8;
  if (DAT_026e3bc8 != 0) {
    FUN_00d50b00();
  }
  iVar3 = FUN_00d90650();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e3b70;
  if (DAT_027e3b70 != 0) {
    FUN_00d50b00();
  }
  iVar4 = FUN_00d90650();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (iVar3 == -1) {
    FUN_00d8b910();
    local_38 = 1;
    local_40 = &DAT_024cc6f0;
    local_34 = param_1;
    FUN_00d8cb40(param_1,&local_40);
    if (local_68 == (undefined8 *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
    }
  }
  else if (iVar4 == -1) {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else if (iVar3 < iVar4) {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d8b910();
    lVar1 = *param_2;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d8cb40();
    local_68 = local_40;
    if (local_40 == (undefined8 *)0x0) {
      bVar2 = false;
    }
    else if ((char)local_38 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
      if (((char)local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = local_38 & 0xffffff00;
      bVar2 = true;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(this + 1) = 0;
  if ((!bVar2) && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  *this = local_68;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01716ee0 (896 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int unaff_ESI;
  longlong this;
  uint uVar10;
  
  uVar3 = 0xffffffff;
  uVar10 = 0xffffffff;
  if (unaff_ESI != -1) {
    uVar10 = (unaff_ESI % 7 >> 0x1f & 7U) + unaff_ESI % 7;
  }
  uVar1 = *(ulonglong *)(this + 0x18);
  uVar2 = (uint)uVar1 & 0xf;
  if (uVar2 != 0xf) {
    cVar7 = (char)(uVar2 * 0x25 >> 8);
    uVar3 = (uint)(byte)((char)uVar2 +
                        ((byte)(((byte)((char)uVar2 - cVar7) >> 1) + cVar7) >> 2) * -7);
  }
  uVar5 = 0;
  if (uVar3 != uVar10) {
    uVar3 = (uint)(uVar1 >> 4) & 0xf;
    uVar2 = 0xffffffff;
    if (uVar3 != 0xf) {
      cVar7 = (char)(uVar3 * 0x25 >> 8);
      uVar2 = (uint)(byte)((char)uVar3 +
                          ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
    }
    uVar5 = 1;
    if (uVar2 != uVar10) {
      uVar3 = (uint)(uVar1 >> 8) & 0xf;
      uVar2 = 0xffffffff;
      if (uVar3 != 0xf) {
        cVar7 = (char)(uVar3 * 0x25 >> 8);
        uVar2 = (uint)(byte)((char)uVar3 +
                            ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
      }
      uVar5 = 2;
      if (uVar2 != uVar10) {
        uVar3 = (uint)(uVar1 >> 0xc) & 0xf;
        uVar2 = 0xffffffff;
        if (uVar3 != 0xf) {
          cVar7 = (char)(uVar3 * 0x25 >> 8);
          uVar2 = (uint)(byte)((char)uVar3 +
                              ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
        }
        uVar5 = 3;
        if (uVar2 != uVar10) {
          uVar3 = (uint)(uVar1 >> 0x10) & 0xf;
          uVar2 = 0xffffffff;
          if (uVar3 != 0xf) {
            cVar7 = (char)(uVar3 * 0x25 >> 8);
            uVar2 = (uint)(byte)((char)uVar3 +
                                ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
          }
          uVar5 = 4;
          if (uVar2 != uVar10) {
            uVar3 = (uint)(uVar1 >> 0x14) & 0xf;
            uVar2 = 0xffffffff;
            if (uVar3 != 0xf) {
              cVar7 = (char)(uVar3 * 0x25 >> 8);
              uVar2 = (uint)(byte)((char)uVar3 +
                                  ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
            }
            uVar5 = 5;
            if (uVar2 != uVar10) {
              uVar3 = (uint)(uVar1 >> 0x18) & 0xf;
              uVar2 = 0xffffffff;
              if (uVar3 != 0xf) {
                cVar7 = (char)(uVar3 * 0x25 >> 8);
                uVar2 = (uint)(byte)((char)uVar3 +
                                    ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) * -7);
              }
              uVar5 = 6;
              if (uVar2 != uVar10) {
                uVar6 = uVar1 >> 0x1c & 0xf;
                uVar3 = 0xffffffff;
                iVar4 = (int)uVar6;
                if (iVar4 != 0xf) {
                  cVar7 = (char)((uint)(iVar4 * 0x25) >> 8);
                  cVar8 = (char)uVar6;
                  uVar3 = (uint)(byte)(cVar8 + ((byte)(((byte)(cVar8 - cVar7) >> 1) + cVar7) >> 2) *
                                               -7);
                }
                uVar5 = 7;
                if (uVar3 != uVar10) {
                  uVar2 = (uint)(uVar1 >> 0x20);
                  uVar3 = uVar2 & 0xf;
                  uVar9 = 0xffffffff;
                  if (uVar3 != 0xf) {
                    cVar7 = (char)(uVar3 * 0x25 >> 8);
                    uVar9 = (uint)(byte)((char)uVar3 +
                                        ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2) *
                                        -7);
                  }
                  uVar5 = 8;
                  if (uVar9 != uVar10) {
                    uVar3 = uVar2 >> 4 & 0xf;
                    uVar9 = 0xffffffff;
                    if (uVar3 != 0xf) {
                      cVar7 = (char)(uVar3 * 0x25 >> 8);
                      uVar9 = (uint)(byte)((char)uVar3 +
                                          ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2)
                                          * -7);
                    }
                    uVar5 = 9;
                    if (uVar9 != uVar10) {
                      uVar3 = uVar2 >> 8 & 0xf;
                      uVar9 = 0xffffffff;
                      if (uVar3 != 0xf) {
                        cVar7 = (char)(uVar3 * 0x25 >> 8);
                        uVar9 = (uint)(byte)((char)uVar3 +
                                            ((byte)(((byte)((char)uVar3 - cVar7) >> 1) + cVar7) >> 2
                                            ) * -7);
                      }
                      uVar5 = 10;
                      if (uVar9 != uVar10) {
                        uVar2 = uVar2 >> 0xc & 0xf;
                        uVar3 = 0xffffffff;
                        if (uVar2 != 0xf) {
                          cVar7 = (char)(uVar2 * 0x25 >> 8);
                          uVar3 = (uint)(byte)((char)uVar2 +
                                              ((byte)(((byte)((char)uVar2 - cVar7) >> 1) + cVar7) >>
                                              2) * -7);
                        }
                        uVar5 = 0xffffffff;
                        if (uVar3 == uVar10) {
                          uVar5 = 0xb;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar5;
}




// ==================================================
// @01715d80 (895 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong this;
  
  uVar5 = *(ulonglong *)(this + 0x18);
  if ((uVar5 & 0xf) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffffffff0 | (longlong)iVar3;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffffffff0f | (longlong)iVar3 << 4;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffffff0ff | (longlong)iVar3 << 8;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffffff0fff | (longlong)iVar3 << 0xc;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffffff0ffff | (longlong)iVar3 << 0x10;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffffff0fffff | (longlong)iVar3 << 0x14;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xfffffffff0ffffff | (longlong)iVar3 << 0x18;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000000) == 0) {
    iVar1 = FUN_01716c60();
    iVar3 = 0xf;
    if (iVar1 != -1) {
      iVar3 = iVar1;
    }
    uVar5 = uVar5 & 0xffffffff0fffffff | (longlong)iVar3 << 0x1c;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (ulonglong)uVar2;
    }
    uVar5 = uVar5 & 0xfffffff0ffffffff | uVar4 << 0x20;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf000000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (ulonglong)uVar2;
    }
    uVar5 = uVar5 & 0xffffff0fffffffff | uVar4 << 0x24;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf0000000000) == 0) {
    uVar2 = FUN_01716c60();
    uVar4 = 0xf;
    if (uVar2 != 0xffffffff) {
      uVar4 = (ulonglong)uVar2;
    }
    uVar5 = uVar5 & 0xfffff0ffffffffff | uVar4 << 0x28;
    *(ulonglong *)(this + 0x18) = uVar5;
  }
  if ((uVar5 & 0xf00000000000) != 0) {
    return;
  }
  uVar2 = FUN_01716c60();
  uVar4 = 0xf;
  if (uVar2 != 0xffffffff) {
    uVar4 = (ulonglong)uVar2;
  }
  *(ulonglong *)(this + 0x18) = uVar4 << 0x2c | uVar5 & 0xffff0fffffffffff;
  return;
}




// ==================================================
// @01a38090 (886 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  char cVar2;
  undefined8 *arg1;
  longlong *this;
  int iVar3;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar8;
  undefined1 auVar7 [16];
  undefined1 local_c8 [16];
  longlong *local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  ulonglong local_40;
  float fStack_38;
  undefined4 uStack_34;
  
  local_40 = (ulonglong)param_1;
  uStack_34 = (undefined4)this[0x23];
  fStack_38 = param_2;
  FUN_01d48370();
  uVar4 = (**(code **)(*(longlong *)*arg1 + 0x390))(local_40,fStack_38);
  (**(code **)(*this + 0x9f8))(uVar4,&local_40);
  local_c8._4_4_ = 0;
  local_c8._8_4_ = 0;
  local_c8._12_4_ = 0;
  local_c8._0_4_ = fStack_38 + DAT_02390d30;
  local_40 = CONCAT44(local_40._4_4_,(float)local_40 + DAT_023b1d84);
  fStack_38 = (float)local_c8._0_4_;
  if (((longlong *)this[0x28] != (longlong *)0x0) &&
     (cVar2 = (**(code **)(*(longlong *)this[0x28] + 0xa8))(), cVar2 != '\0')) {
    local_c8._8_4_ = 0;
    local_c8._12_4_ = 0;
    local_c8._0_4_ = fStack_38;
    local_c8._4_4_ = uStack_34;
    FUN_01a368e0(local_40);
  }
  lVar1 = this[0x2c];
  if (lVar1 == 0) {
    (**(code **)(*this + 0x640))();
    (**(code **)(*local_b0 + 0x3a0))();
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    FUN_01d488d0();
    if (local_90 != 0) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    FUN_01d488d0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this + 0x9e0))();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  uVar4 = FUN_01e3f820();
  if (local_90 != 0) {
    if (0 < *(int *)(local_90 + 0xc)) {
      auVar7._8_4_ = (int)extraout_XMM0_Qb;
      auVar7._0_8_ = uVar4;
      auVar7._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      blendps(local_c8,_DAT_0241be90,0xe);
      iVar3 = 0;
      do {
        FUN_01a37880(local_40,fStack_38);
        fVar8 = auVar7._4_4_;
        auVar5._4_4_ = fVar8;
        auVar5._0_4_ = fVar8;
        auVar5._8_4_ = auVar7._12_4_;
        auVar5._12_4_ = auVar7._12_4_;
        auVar6._4_12_ = auVar5._4_12_;
        auVar6._0_4_ = fVar8 + DAT_023b169c;
        auVar7 = insertps(auVar7,auVar6,0x10);
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(local_90 + 0xc));
    }
    FUN_0010bf70();
  }
  FUN_01d48390();
  if (local_90 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019b8500 (840 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  longlong *this;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  longlong local_98;
  char local_90;
  longlong local_60;
  char local_58;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  uVar6 = (*DAT_02572370)();
  uVar6 = (**(code **)(*this + 0x9b0))(uVar6,0);
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_019b8809;
    FUN_00d50b00();
  }
  else if (local_98 == 0) goto LAB_019b8809;
  if (0 < *(int *)(local_98 + 0xc)) {
    iVar5 = 0;
    do {
      if (param_2 <= DAT_02390448) {
LAB_019b86f0:
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e7c0();
        if (local_58 == '\0') {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        cVar1 = FUN_00d23d70();
        if (local_60 != 0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (cVar1 != '\0') {
          FUN_00d21140();
        }
      }
      else {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_0125a280();
        if (param_1 <= dVar7) {
          pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar7 = (double)FUN_01259520();
          if (dVar7 <= param_1 + param_2) goto LAB_019b86f0;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_98 + 0xc));
  }
  FUN_001159b0();
  uVar6 = FUN_00d50b20();
LAB_019b8809:
  (**(code **)(*this + 0xdc8))(uVar6,1);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b18590 (835 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  undefined4 uVar4;
  int unaff_ESI;
  undefined4 uVar5;
  longlong local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return 0xffffffff;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return 0xffffffff;
  }
  uVar5 = 0xffffffff;
  if (unaff_ESI == -1000000) {
LAB_01b188b7:
    uVar4 = uVar5;
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01740240();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
        goto LAB_01b1867b;
      }
    }
    else if (local_40 != 0) {
LAB_01b1867b:
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_01739620();
      if (cVar1 == '\0') {
LAB_01b18738:
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01739a80();
        if (cVar1 == '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01739620();
          if (cVar1 != '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01739960();
            if (cVar1 != '\0') {
              pvVar3 = _pthread_getspecific(param_1);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              cVar1 = FUN_01739b20();
              if (cVar1 == '\0') {
                uVar5 = 1;
                cVar2 = '\0';
                goto LAB_01b188a5;
              }
            }
          }
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01739b20();
          if (cVar1 == '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_01739620();
            uVar5 = 2;
          }
          else {
            uVar5 = 5;
            cVar2 = '\0';
          }
        }
        else {
          uVar5 = 4;
          cVar2 = '\0';
        }
      }
      else {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01739960();
        if (cVar1 != '\0') goto LAB_01b18738;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar1 = FUN_01739a80();
        uVar5 = 0;
        cVar2 = '\0';
        if (cVar1 != '\0') goto LAB_01b18738;
      }
LAB_01b188a5:
      FUN_00d50b20();
      uVar4 = 0xffffffff;
      if (cVar2 != '\0') goto LAB_01b188ba;
      goto LAB_01b188b7;
    }
    uVar4 = 0xffffffff;
  }
LAB_01b188ba:
  FUN_00d50b20();
  return uVar4;
}




// ==================================================
// @008c9134 (833 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *arg1;
  ulonglong uVar5;
  longlong this;
  undefined4 extraout_XMM0_Da;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,local_48);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0xb) {
      if (local_36 == 1) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(this + 0x5c) = 1;
          goto LAB_008c9379;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 10) {
        if (local_48[0] == 0xf) {
          *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar5 = (ulonglong)local_34;
          uVar4 = *(longlong *)(this + 0x18) - *(longlong *)(this + 0x10);
          if (uVar4 < uVar5) {
            FUN_0088d550();
          }
          else if (uVar5 < uVar4) {
            *(ulonglong *)(this + 0x18) = *(longlong *)(this + 0x10) + uVar5;
          }
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x128))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(this + 0x5d) = 1;
          goto LAB_008c9379;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008c9321:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008c9373:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xb) {
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c9373;
      }
      *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (ulonglong)local_34;
      uVar4 = *(longlong *)(this + 0x30) - *(longlong *)(this + 0x28);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(ulonglong *)(this + 0x30) = *(longlong *)(this + 0x28) + uVar5;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(undefined1 *)(this + 0x5e) = 1;
    }
    else if (local_36 == 0x14) {
      if (local_48[0] != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c9373;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x5f) = 1;
    }
    else {
      if (local_36 != 10000) goto LAB_008c9321;
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c9373;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(this + 0x60) = 1;
    }
LAB_008c9379:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}




// ==================================================
// @017163f0 (831 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  undefined4 unaff_ESI;
  ulonglong uVar11;
  undefined8 *this;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 extraout_XMM0_Qa;
  longlong lVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  longlong local_50;
  char local_48;
  
  iVar3 = *(int *)(param_2 + 8);
  FUN_00c8e710();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (0 < iVar3) {
    iVar10 = 0;
    do {
      uVar7 = FUN_00e8ce70();
      iVar4 = *(int *)(local_50 + 0x18);
      FUN_00c8e340(extraout_XMM0_Qa,1);
      *(undefined4 *)(*(longlong *)(local_50 + 0x10) + (longlong)iVar4) = uVar7;
      iVar10 = iVar10 + 1;
    } while (iVar3 != iVar10);
  }
  puVar8 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &DAT_025fbbb0;
  *(undefined8 *)((longlong)puVar8 + 0xc) = 0;
  puVar8[3] = 0;
  FUN_00d500e0();
  *(undefined4 *)((longlong)puVar8 + 0xc) = unaff_ESI;
  if (local_50 == 0) {
    FUN_01715d80();
    *this = puVar8;
    *(undefined1 *)(this + 1) = 1;
  }
  else {
    uVar5 = *(uint *)(local_50 + 0x18);
    if (3 < (int)uVar5) {
      lVar6 = *(longlong *)(local_50 + 0x10);
      uVar13 = puVar8[3];
      if (0xf < uVar5) {
        uVar11 = (ulonglong)(uVar5 >> 2 & 0xfffffffc);
        auVar15._8_8_ = _UNK_023d4b78;
        auVar15._0_8_ = uVar13;
        uVar13 = (uVar11 - 4 >> 2) + 1;
        if (uVar11 - 4 == 0) {
          auVar18._8_4_ = 0xffffffff;
          auVar18._0_8_ = 0xffffffffffffffff;
          auVar18._12_4_ = 0xffffffff;
          lVar9 = 0;
        }
        else {
          lVar12 = -(uVar13 & 0xfffffffffffffffe);
          auVar18._8_4_ = 0xffffffff;
          auVar18._0_8_ = 0xffffffffffffffff;
          auVar18._12_4_ = 0xffffffff;
          lVar9 = 0;
          do {
            uVar1 = *(undefined8 *)(lVar6 + lVar9 * 4);
            uVar2 = *(undefined8 *)(lVar6 + 8 + lVar9 * 4);
            auVar32._0_4_ = (int)uVar1 << 2;
            auVar32._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
            auVar32._8_8_ = 0;
            auVar24 = pmovzxdq(auVar32,auVar32);
            auVar34._0_8_ = _DAT_02411a30 << auVar24._0_8_;
            lVar16 = auVar24._8_8_;
            auVar34._8_8_ = _UNK_02411a38 << lVar16;
            auVar29._0_4_ = (int)uVar2 << 2;
            auVar29._4_4_ = (int)((ulonglong)uVar2 >> 0x20) << 2;
            auVar29._8_8_ = 0;
            auVar25._0_8_ = _DAT_02411a30 << lVar16;
            auVar25._8_8_ = _UNK_02411a38 << lVar16;
            auVar30 = pmovzxdq(auVar29,auVar29);
            auVar26 = pblendw(auVar25,auVar34,0xf);
            auVar35._0_8_ = _DAT_02411a30 << auVar30._0_8_;
            lVar16 = auVar30._8_8_;
            auVar35._8_8_ = _UNK_02411a38 << lVar16;
            auVar24._8_4_ = auVar30._8_4_;
            auVar24._0_8_ = lVar16;
            auVar24._12_4_ = auVar30._12_4_;
            auVar31._0_8_ = _DAT_02411a30 << lVar16;
            auVar31._8_8_ = _UNK_02411a38 << auVar24._8_8_;
            auVar32 = pblendw(auVar31,auVar35,0xf);
            uVar1 = *(undefined8 *)(lVar6 + 0x10 + lVar9 * 4);
            uVar2 = *(undefined8 *)(lVar6 + 0x18 + lVar9 * 4);
            auVar30._0_4_ = (int)uVar1 << 2;
            auVar30._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
            auVar30._8_8_ = 0;
            auVar24 = pmovzxdq(auVar30,auVar30);
            auVar36._0_8_ = _DAT_02411a30 << auVar24._0_8_;
            lVar16 = auVar24._8_8_;
            auVar36._8_8_ = _UNK_02411a38 << lVar16;
            auVar17._0_4_ = (int)uVar2 << 2;
            auVar17._4_4_ = (int)((ulonglong)uVar2 >> 0x20) << 2;
            auVar17._8_8_ = 0;
            auVar14._0_8_ = _DAT_02411a30 << lVar16;
            auVar14._8_8_ = _UNK_02411a38 << lVar16;
            auVar30 = pmovzxdq(auVar17,auVar17);
            auVar24 = pblendw(auVar14,auVar36,0xf);
            auVar37._0_8_ = _DAT_02411a30 << auVar30._0_8_;
            lVar16 = auVar30._8_8_;
            auVar37._8_8_ = _UNK_02411a38 << lVar16;
            auVar15 = ~auVar24 & ~auVar26 & auVar15;
            auVar27._8_4_ = auVar30._8_4_;
            auVar27._0_8_ = lVar16;
            auVar27._12_4_ = auVar30._12_4_;
            auVar26._0_8_ = _DAT_02411a30 << lVar16;
            auVar26._8_8_ = _UNK_02411a38 << auVar27._8_8_;
            auVar24 = pblendw(auVar26,auVar37,0xf);
            auVar18 = ~auVar24 & ~auVar32 & auVar18;
            lVar9 = lVar9 + 8;
            lVar12 = lVar12 + 2;
          } while (lVar12 != 0);
          if ((uVar13 & 1) == 0) goto LAB_017166b7;
        }
        uVar1 = *(undefined8 *)(lVar6 + 8 + lVar9 * 4);
        auVar21._0_4_ = (int)uVar1 << 2;
        auVar21._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
        auVar21._8_8_ = 0;
        auVar24 = pmovzxdq(auVar21,auVar21);
        auVar33._0_8_ = _DAT_02411a30 << auVar24._0_8_;
        lVar12 = auVar24._8_8_;
        auVar33._8_8_ = _UNK_02411a38 << lVar12;
        auVar22._8_4_ = auVar24._8_4_;
        auVar22._12_4_ = auVar24._12_4_;
        auVar22._0_8_ = lVar12;
        auVar38._0_8_ = _DAT_02411a30 << lVar12;
        auVar38._8_8_ = _UNK_02411a38 << auVar22._8_8_;
        auVar24 = pblendw(auVar38,auVar33,0xf);
        auVar18 = ~auVar24 & auVar18;
        uVar1 = *(undefined8 *)(lVar6 + lVar9 * 4);
        auVar19._0_4_ = (int)uVar1 << 2;
        auVar19._4_4_ = (int)((ulonglong)uVar1 >> 0x20) << 2;
        auVar19._8_8_ = 0;
        auVar24 = pmovzxdq(auVar19,auVar19);
        auVar23._0_8_ = _DAT_02411a30 << auVar24._0_8_;
        lVar9 = auVar24._8_8_;
        auVar23._8_8_ = _UNK_02411a38 << lVar9;
        auVar20._8_4_ = auVar24._8_4_;
        auVar20._12_4_ = auVar24._12_4_;
        auVar20._0_8_ = lVar9;
        auVar28._0_8_ = _DAT_02411a30 << lVar9;
        auVar28._8_8_ = _UNK_02411a38 << auVar20._8_8_;
        auVar24 = pblendw(auVar28,auVar23,0xf);
        auVar15 = ~auVar24 & auVar15;
LAB_017166b7:
        uVar13 = SUB168(auVar15 & auVar18,8) & SUB168(auVar15 & auVar18,0);
        goto joined_r0x017166cc;
      }
      uVar11 = 0;
      do {
        uVar13 = uVar13 & ~(0xfL << ((*(byte *)(lVar6 + uVar11 * 4) & 0xf) << 2));
        uVar11 = uVar11 + 1;
joined_r0x017166cc:
      } while (uVar11 != uVar5 >> 2);
      puVar8[3] = uVar13;
    }
    FUN_01715d80();
    *this = puVar8;
    *(undefined1 *)(this + 1) = 1;
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01b18f00 (830 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  char in_DL;
  longlong *this;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 in_XMM1_Dc;
  undefined4 uVar16;
  undefined4 in_XMM1_Dd;
  undefined4 uVar17;
  float fVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  longlong local_88;
  char local_80;
  longlong *in_stack_ffffffffffffffa8;
  char local_50;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)((longlong)this + 0x315) == '\0') ||
     (*(char *)((longlong)this + 0x316) == '\0')) {
LAB_01b19021:
    uVar4 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_50 == '\0') {
      if (in_stack_ffffffffffffffa8 == (longlong *)0x0) goto LAB_01b19021;
      FUN_00d50b00();
      if (in_DL != '\0') goto LAB_01b18f67;
LAB_01b18ff0:
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_017583b0();
    }
    else {
      if (in_stack_ffffffffffffffa8 == (longlong *)0x0) goto LAB_01b19021;
      if (in_DL == '\0') goto LAB_01b18ff0;
LAB_01b18f67:
      FUN_00d50b00();
      *(int *)((longlong)this + 0x2fc) = *(int *)((longlong)this + 0x2fc) + 1;
      FUN_01ad6350();
      pvVar6 = _pthread_getspecific(param_1);
      plVar8 = in_stack_ffffffffffffffa8;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar8 = (longlong *)
                 in_stack_ffffffffffffffa8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar8 + 0x3a0))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01758890();
      pvVar6 = _pthread_getspecific(param_1);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        in_stack_ffffffffffffffa8 =
             (longlong *)in_stack_ffffffffffffffa8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      iVar5 = (**(code **)(*in_stack_ffffffffffffffa8 + 0x3a8))();
      if (*(int *)((longlong)this + 0x184) != iVar5) {
        *(int *)((longlong)this + 0x184) = iVar5;
        uVar19 = DAT_023dccf4;
        uVar9 = DAT_023dccec;
        if ((*(int *)((longlong)this + 0x284) != 1) &&
           (*(int *)((longlong)this + 0x284) != 0)) {
          uVar9 = FUN_01e3f820();
          if (*(int *)((longlong)this + 0x284) == 3) {
            uVar12 = uVar4;
            uVar15 = uVar14;
            uVar16 = in_XMM1_Dc;
            uVar17 = in_XMM1_Dd;
            FUN_01e3f820();
            auVar20._4_4_ = uVar15;
            auVar20._0_4_ = uVar12;
            auVar20._8_4_ = uVar16;
            auVar20._12_4_ = uVar17;
            auVar10 = blendps(auVar20,_DAT_0241c700,0xd);
          }
          else {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = DAT_023dccf4;
          }
          auVar2._8_8_ = extraout_XMM0_Qb;
          auVar2._0_8_ = uVar9;
          auVar11._0_4_ = auVar10._0_4_ + (float)uVar9;
          auVar11._4_4_ = auVar10._4_4_ + (float)((ulonglong)uVar9 >> 0x20);
          auVar11._8_4_ = auVar10._8_4_ + (float)extraout_XMM0_Qb;
          auVar11._12_4_ = auVar10._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar10 = blendps(auVar11,auVar2,2);
          auVar3._4_4_ = uVar14;
          auVar3._0_4_ = uVar4;
          auVar3._8_4_ = in_XMM1_Dc;
          auVar3._12_4_ = in_XMM1_Dd;
          auVar20 = blendps(auVar3,_DAT_0241c710,0xd);
          uVar19 = auVar20._0_8_;
          uVar9 = auVar10._0_8_;
        }
        fVar18 = (float)uVar19;
        fVar13 = fVar18 * DAT_0239011c;
        if ((fVar18 == 0.0) && (!NAN(fVar18))) {
          fVar13 = fVar18;
        }
        (**(code **)(*this + 0x618))(uVar9,fVar13);
      }
      *(undefined4 *)((longlong)this + 0x194) = 0xfff0bdc0;
      FUN_01ad3320();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((int)this[0x32] != -1000000) {
        *(undefined4 *)(this + 0x32) = 0xfff0bdc0;
        (**(code **)(*this + 0x620))();
      }
      FUN_01ad71a0();
      FUN_01b03750();
      FUN_01ad37a0();
      FUN_01ad6540();
      FUN_01af6500();
      FUN_00d50b20();
      uVar4 = 0x2802501;
    }
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}




// ==================================================
// @01998b60 (814 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *arg1;
  longlong *this;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  longlong local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  longlong local_b0;
  undefined1 local_a8;
  longlong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  longlong local_80;
  undefined1 local_78;
  undefined1 local_68;
  undefined1 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  fVar6 = 0.0;
  if ((*(float *)((longlong)this + 0x4d4) != 0.0) ||
     (NAN(*(float *)((longlong)this + 0x4d4)))) {
    lVar4 = this[0x9e];
    if (lVar4 == 0) {
      uVar7 = (**(code **)(*this + 0x988))();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar7 = FUN_00d50b00();
        }
        lVar1 = this[0x3e];
      }
      else {
        local_38 = '\0';
        lVar1 = this[0x3e];
      }
      local_68 = 1;
      if (lVar1 != 0) {
        local_68 = 1;
        uVar7 = FUN_00d50b00();
      }
      local_c8 = 1;
      local_d0 = lVar1;
      FUN_019f2c90(uVar7,&local_d0);
      lVar2 = local_50;
      lVar5 = this[0x9e];
      if (lVar5 == local_50) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar5 = this[0x9e];
          }
        }
        else {
          local_48 = '\0';
        }
        this[0x9e] = lVar2;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = this[0x9e];
    }
    local_c0 = *arg1;
    local_b8 = 0;
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    local_a8 = 1;
    local_b0 = lVar4;
    iVar3 = FUN_019f3840();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if (iVar3 < 0) {
      uVar7 = (**(code **)(*this + 0x988))();
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar7 = FUN_00d50b00();
        }
        lVar1 = this[0x3e];
      }
      else {
        local_38 = '\0';
        lVar1 = this[0x3e];
      }
      local_58 = 1;
      if (lVar1 != 0) {
        local_58 = 1;
        uVar7 = FUN_00d50b00();
      }
      local_98 = 1;
      local_a0 = lVar1;
      FUN_019f2c90(uVar7,&local_a0);
      lVar5 = this[0x9e];
      if (lVar5 == local_50) {
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar5 = this[0x9e];
          }
        }
        else {
          local_48 = '\0';
        }
        this[0x9e] = local_50;
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_90 = *arg1;
      local_88 = 0;
      lVar4 = this[0x9e];
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      local_78 = 1;
      local_80 = lVar4;
      iVar3 = FUN_019f3840();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    fVar6 = (float)(**(code **)(*this + 3000))();
    fVar6 = (float)iVar3 * fVar6 * DAT_02390d38 * *(float *)((longlong)this + 0x4d4);
  }
  return fVar6;
}




// ==================================================
// @01b18b60 (811 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  char in_DL;
  longlong *this;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_XMM1_Dc;
  undefined4 uVar15;
  undefined4 in_XMM1_Dd;
  undefined4 uVar16;
  float fVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  longlong local_88;
  char local_80;
  longlong *in_stack_ffffffffffffffa8;
  char local_50;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = (undefined4)param_2;
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)((longlong)this + 0x315) == '\0') ||
     (*(char *)((longlong)this + 0x316) == '\0')) {
LAB_01b18c81:
    uVar4 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_50 == '\0') {
      if (in_stack_ffffffffffffffa8 == (longlong *)0x0) goto LAB_01b18c81;
      FUN_00d50b00();
      if (in_DL != '\0') goto LAB_01b18bc7;
LAB_01b18c50:
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar4 = FUN_017588a0();
    }
    else {
      if (in_stack_ffffffffffffffa8 == (longlong *)0x0) goto LAB_01b18c81;
      if (in_DL == '\0') goto LAB_01b18c50;
LAB_01b18bc7:
      FUN_00d50b00();
      *(int *)((longlong)this + 0x2fc) = *(int *)((longlong)this + 0x2fc) + 1;
      FUN_01ad6350();
      pvVar6 = _pthread_getspecific(param_1);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        in_stack_ffffffffffffffa8 =
             (longlong *)in_stack_ffffffffffffffa8[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      (**(code **)(*in_stack_ffffffffffffffa8 + 0x3a0))();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01759030();
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar5 = FUN_017423e0();
      if (*(int *)((longlong)this + 0x184) != iVar5) {
        *(int *)((longlong)this + 0x184) = iVar5;
        uVar18 = DAT_023dccf4;
        uVar8 = DAT_023dccec;
        if ((*(int *)((longlong)this + 0x284) != 1) &&
           (*(int *)((longlong)this + 0x284) != 0)) {
          uVar8 = FUN_01e3f820();
          if (*(int *)((longlong)this + 0x284) == 3) {
            uVar11 = uVar4;
            uVar14 = uVar13;
            uVar15 = in_XMM1_Dc;
            uVar16 = in_XMM1_Dd;
            FUN_01e3f820();
            auVar19._4_4_ = uVar14;
            auVar19._0_4_ = uVar11;
            auVar19._8_4_ = uVar15;
            auVar19._12_4_ = uVar16;
            auVar9 = blendps(auVar19,_DAT_0241c700,0xd);
          }
          else {
            auVar9._8_8_ = 0;
            auVar9._0_8_ = DAT_023dccf4;
          }
          auVar2._8_8_ = extraout_XMM0_Qb;
          auVar2._0_8_ = uVar8;
          auVar10._0_4_ = auVar9._0_4_ + (float)uVar8;
          auVar10._4_4_ = auVar9._4_4_ + (float)((ulonglong)uVar8 >> 0x20);
          auVar10._8_4_ = auVar9._8_4_ + (float)extraout_XMM0_Qb;
          auVar10._12_4_ = auVar9._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar9 = blendps(auVar10,auVar2,2);
          auVar3._4_4_ = uVar13;
          auVar3._0_4_ = uVar4;
          auVar3._8_4_ = in_XMM1_Dc;
          auVar3._12_4_ = in_XMM1_Dd;
          auVar19 = blendps(auVar3,_DAT_0241c710,0xd);
          uVar18 = auVar19._0_8_;
          uVar8 = auVar9._0_8_;
        }
        fVar17 = (float)uVar18;
        fVar12 = fVar17 * DAT_0239011c;
        if ((fVar17 == 0.0) && (!NAN(fVar17))) {
          fVar12 = fVar17;
        }
        (**(code **)(*this + 0x618))(uVar8,fVar12);
      }
      FUN_01ad3320();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((int)this[0x32] != -1000000) {
        *(undefined4 *)(this + 0x32) = 0xfff0bdc0;
        (**(code **)(*this + 0x620))();
      }
      FUN_01ad71a0();
      FUN_01ad37a0();
      FUN_01ad6540();
      FUN_01af6500();
      FUN_00d50b20();
      uVar4 = 0x2802501;
    }
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}




// ==================================================
// @01a31a80 (807 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  void *pvVar2;
  char *pcVar3;
  pthread_key_t pVar4;
  undefined8 unaff_R12;
  ulonglong uVar5;
  char *pcVar6;
  double dVar7;
  double dVar8;
  longlong local_68;
  char local_60;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  FUN_01a58dc0();
  cVar1 = FUN_019f2900();
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_01a58dc0();
    cVar1 = FUN_019a9840();
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),1);
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      local_40[0] = local_48[0];
      pcVar3 = local_40;
      if (local_48[0] != '\0') {
        pcVar3 = local_48;
      }
      *pcVar3 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pcVar3 = local_38;
      pcVar6 = local_48;
      if (local_48[0] == '\0') {
        pcVar6 = pcVar3;
      }
      local_38[0] = local_48[0];
      *pcVar6 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pVar4 = (pthread_key_t)pcVar3;
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar7 = (double)FUN_01259520();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_012f7cb0();
      if (dVar7 <= dVar8) {
        uVar5 = 0;
      }
      else {
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar7 = (double)FUN_0125a280();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar8 = (double)FUN_012f9490();
        uVar5 = CONCAT71(0x28025,dVar7 < dVar8);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5 & 0xffffffff;
}




// ==================================================
// @01b15110 (806 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *this;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01ad3cb0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      cVar1 = *(char *)((longlong)this + 0x315);
      goto joined_r0x01b15167;
    }
  }
  else if (local_40 != 0) {
    cVar1 = *(char *)((longlong)this + 0x315);
joined_r0x01b15167:
    if ((cVar1 == '\0') || (*(char *)((longlong)this + 0x316) == '\0')) {
      uVar5 = 0;
    }
    else if ((char)param_2 == '\0') {
      FUN_01caeae0();
      if (local_38 == '\0') {
        if (local_40 == 0) goto LAB_01b153b1;
        FUN_00d50b00();
      }
      else if (local_40 == 0) {
LAB_01b153b1:
        uVar5 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
        goto LAB_01b1541d;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar2 = _pthread_getspecific(param_1);
      lVar4 = local_40;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar4 = *(longlong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      FUN_01736840();
      FUN_01d66ab0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      FUN_00d50b20();
    }
    else {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      pvVar2 = _pthread_getspecific(param_1);
      lVar4 = local_50;
      if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        lVar4 = *(longlong *)(local_50 + 0x20 + (ulonglong)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
      FUN_01736840();
      FUN_01736c00();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar6 = DAT_023dccec;
      uVar9 = DAT_023dccf4;
      if ((*(int *)((longlong)this + 0x284) != 1) &&
         (*(int *)((longlong)this + 0x284) != 0)) {
        uVar6 = FUN_01e3f820();
        if (*(int *)((longlong)this + 0x284) == 3) {
          auVar7 = in_XMM1;
          FUN_01e3f820();
          auVar7 = blendps(auVar7,_DAT_0241c700,0xd);
        }
        else {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = DAT_023dccf4;
        }
        auVar10._8_8_ = extraout_XMM0_Qb;
        auVar10._0_8_ = uVar6;
        auVar8._0_4_ = auVar7._0_4_ + (float)uVar6;
        auVar8._4_4_ = auVar7._4_4_ + (float)((ulonglong)uVar6 >> 0x20);
        auVar8._8_4_ = auVar7._8_4_ + (float)extraout_XMM0_Qb;
        auVar8._12_4_ = auVar7._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar7 = blendps(auVar8,auVar10,2);
        auVar10 = blendps(in_XMM1,_DAT_0241c710,0xd);
        uVar6 = auVar7._0_8_;
        uVar9 = auVar10._0_8_;
      }
      uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      (**(code **)(*this + 0x618))(uVar6,uVar9);
    }
LAB_01b1541d:
    FUN_00d50b20();
    goto LAB_01b15425;
  }
  uVar5 = 0;
LAB_01b15425:
  return uVar5 & 0xffffffff;
}




// ==================================================
// @01523040 (798 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  int iVar10;
  short sVar11;
  longlong arg1;
  longlong *this;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  
  if (*param_2 == 0) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
  }
  else {
    local_68 = 0;
    local_60 = '\0';
    FUN_016c2780(param_1,&local_68);
    lVar3 = local_58;
    pVar9 = (pthread_key_t)param_1;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016caa50();
    lVar8 = *(longlong *)(**(longlong **)(*(longlong *)(arg1 + 0x10) + 0x10) + 0x10);
    sVar11 = *(short *)(lVar8 + 0x18);
    iVar12 = (int)*(short *)(lVar8 + 0x1a);
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_00e7bdb0();
    FUN_016c3060(uVar6,iVar12,0);
    pVar9 = (pthread_key_t)uVar6;
    iVar4 = *(int *)(arg1 + 0x18);
    if (1 < iVar4) {
      uVar13 = 1;
      do {
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)(arg1 + 0x10) + 0x10) +
                 (ulonglong)(uVar13 >> 10) * 8);
        lVar2 = *(longlong *)(lVar8 + 0x10);
        lVar14 = (ulonglong)(uVar13 & 0x3ff) * 0x20;
        iVar10 = (int)*(short *)(lVar2 + 0x1a + lVar14);
        sVar1 = *(short *)(lVar2 + 0x18 + lVar14);
        if ((iVar12 != iVar10) || (sVar11 != sVar1)) {
          pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
          lVar8 = lVar3;
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar8 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          local_48 = lVar8;
          lVar8 = FUN_00e7cc50(*(undefined8 *)(lVar2 + 8 + lVar14));
          FUN_016c3060(lVar8,iVar10,0);
          iVar4 = *(int *)(arg1 + 0x18);
          iVar12 = iVar10;
          sVar11 = sVar1;
        }
        pVar9 = (pthread_key_t)lVar8;
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 < iVar4);
    }
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c30e0();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c3130();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016c1150();
    *this = lVar3;
    *(undefined1 *)(this + 1) = 1;
  }
  return this;
}




// ==================================================
// @019fbe00 (783 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong arg1;
  longlong *this;
  longlong local_70;
  char local_68;
  longlong local_58;
  
  pVar7 = (pthread_key_t)param_1;
  lVar1 = *param_2;
  lVar3 = param_2[1];
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  if (*(longlong *)(arg1 + 0x18) == 0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
    lVar2 = *(longlong *)(arg1 + 0x18);
    *(longlong **)(arg1 + 0x18) = plVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  cVar4 = FUN_00ca18c0();
  if (cVar4 != '\0') {
    FUN_019fcd40();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    goto LAB_019fc0cd;
  }
  if (*param_1 == 0) {
    local_68 = '\0';
    local_70 = 0;
LAB_019fbf7f:
    local_58 = 0;
  }
  else {
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    if (local_68 == '\0') {
      if (local_70 == 0) goto LAB_019fbf7f;
      FUN_00d50b00();
      local_58 = local_70;
    }
    else {
      local_58 = local_70;
      local_68 = '\0';
    }
  }
  FUN_01718c10();
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00ca0840();
LAB_019fc0cd:
  *(undefined1 *)(this + 1) = 0;
  *this = lVar1;
  *(undefined1 *)(this + 1) = 1;
  if (((char)lVar3 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @019d4170 (782 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  void *pvVar2;
  int unaff_ESI;
  longlong *this;
  longlong local_80;
  char local_78;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if ((int)this[0x5e] != unaff_ESI) {
    if (unaff_ESI != 0) {
      *(int *)((longlong)this + 0x2f4) = unaff_ESI;
    }
    *(int *)(this + 0x5e) = unaff_ESI;
    (**(code **)(*this + 0xa00))();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      (**(code **)(*this + 0xa00))();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c9740();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        FUN_00d46530();
        local_40 = DAT_026dc290;
        if ((local_48 == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
          local_40 = DAT_026dc290;
        }
        DAT_026dc290 = local_40;
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        local_38 = '\0';
        FUN_00ca0840();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if (local_50 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00d6f370();
    lVar1 = DAT_027e1348;
    if (DAT_027e1348 != 0) {
      FUN_00d50b00();
    }
    FUN_00d707b0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = DAT_02709dd0;
    if (DAT_02709dd0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_80 = 0;
    local_78 = '\0';
    FUN_00d40470(&local_80,&stack0xffffffffffffff90,1,3);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (this != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01a21920 (781 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  longlong *this;
  bool bVar7;
  longlong *local_b8;
  char local_b0;
  longlong *local_38;
  char local_30;
  
  FUN_00d3ecc0();
  if ((local_30 == '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = DAT_02709dd0;
  if (DAT_02709dd0 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*local_38 + 0x50))();
  lVar2 = DAT_027e1450;
  cVar5 = '\x01';
  if (cVar4 == '\0') {
    if (DAT_027e1450 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_38 + 0x50))();
    lVar3 = DAT_027e3bc0;
    cVar5 = '\x01';
    if (cVar4 == '\0') {
      if (DAT_027e3bc0 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*local_38 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_026fc738;
  if (cVar5 == '\0') {
    if (DAT_026fc738 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*local_38 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_026fce70;
    if (cVar4 == '\0') {
      if (DAT_026fce70 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*local_38 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_027e13d8;
      if (cVar4 == '\0') {
        if (DAT_027e13d8 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*local_38 + 0x50))();
        if (cVar4 == '\0') {
          bVar7 = false;
        }
        else {
          FUN_00d3ecf0();
          FUN_01a1d6e0();
          bVar7 = local_38 == local_b8;
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (bVar7) {
          (**(code **)(*this + 0x958))();
          (**(code **)(*this + 0x620))();
        }
      }
      else {
        (**(code **)(*this + 0x620))();
      }
      FUN_00d530a0();
    }
    else {
      iVar6 = FUN_01a1dbe0();
      if (iVar6 != (int)this[0x29]) {
        *(int *)(this + 0x29) = iVar6;
        (**(code **)(*this + 0x620))();
      }
    }
  }
  else {
    (**(code **)(*this + 0x620))();
  }
  FUN_00d50b20();
  return;
}




// ==================================================
// @01525fb0 (778 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  pthread_key_t pVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong *arg1;
  ulonglong this;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double local_48;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    lVar6 = *arg1;
    iVar2 = *(int *)(lVar6 + 0x18);
    FUN_00c8e340(param_1,1);
    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = 0;
    lVar6 = *param_2;
    if (0 < *(int *)(lVar6 + 0xc)) {
      iVar2 = *(int *)(*arg1 + 0x18);
      iVar11 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar11 = iVar2;
      }
      local_48 = (double)((iVar11 >> 2) * *(int *)(this + 0x70));
      uVar13 = 0;
      uVar14 = 0;
      lVar12 = 0;
      bVar3 = false;
      uVar10 = this;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + uVar13 * 8);
        if (lVar12 == lVar6) {
          lVar6 = lVar12;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar12 != 0)) {
            FUN_00d50b00();
            bVar4 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          bVar4 = true;
          if ((bVar3) && (lVar12 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        lVar12 = lVar6;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_01524a20();
        if ((dVar15 == DAT_02390448) && (!NAN(dVar15) && !NAN(DAT_02390448))) break;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar10);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          dVar1 = *(double *)(lVar12 + 0x40);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                   0x40);
        }
        if (local_48 <= dVar1) {
          lVar6 = *arg1;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1,1);
          *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = (int)uVar13;
          iVar2 = *(int *)(*arg1 + 0x18);
          iVar11 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar11 = iVar2;
          }
          uVar9 = (iVar11 >> 2) * *(int *)(this + 0x70);
          uVar10 = (ulonglong)uVar9;
          local_48 = (double)(int)uVar9;
          uVar14 = uVar13 & 0xffffffff;
        }
        while( true ) {
          pVar8 = (pthread_key_t)uVar10;
          pvVar5 = _pthread_getspecific(pVar8);
          lVar6 = lVar12;
          if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
            lVar6 = *(longlong *)(lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
          }
          dVar1 = *(double *)(lVar6 + 0x40);
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar16 = (double)FUN_01524a10();
          if (dVar1 + dVar16 * dVar15 <= local_48) break;
          lVar6 = *arg1;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar16 * dVar15,1);
          *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = (int)uVar14;
          iVar2 = *(int *)(*arg1 + 0x18);
          iVar11 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar11 = iVar2;
          }
          uVar9 = (iVar11 >> 2) * *(int *)(this + 0x70);
          uVar10 = (ulonglong)uVar9;
          local_48 = (double)(int)uVar9;
        }
        uVar13 = uVar13 + 1;
        lVar6 = *param_2;
        uVar10 = (ulonglong)*(int *)(lVar6 + 0xc);
      } while ((longlong)uVar13 < (longlong)uVar10);
      if ((bVar3) && (lVar12 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @015269a0 (766 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025eb518;
  this[7] = 0;
  lVar9 = FUN_015267a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3898 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3860 = FUN_015267a0();
        _DAT_027c3858 = "_startPulse";
        _DAT_027c3868 = 0;
        _DAT_027c3870 = 0x6411;
        _DAT_027c3878 = "double";
        _DAT_027c3880 = 0;
        uRam00000000027c3888 = 0;
        _DAT_027c3890 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  this[8] = 0;
  lVar9 = FUN_015267a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c38e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c38a8 = FUN_015267a0();
        _DAT_027c38a0 = "_startTime";
        _DAT_027c38b0 = 0;
        _DAT_027c38b8 = 0x6411;
        _DAT_027c38c0 = "double";
        _DAT_027c38c8 = 0;
        uRam00000000027c38d0 = 0;
        _DAT_027c38d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  this[9] = 0;
  lVar9 = FUN_015267a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3928 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c38f0 = FUN_015267a0();
        _DAT_027c38e8 = "_width";
        _DAT_027c38f8 = 0;
        _DAT_027c3900 = 0x6400;
        _DAT_027c3908 = "double";
        _DAT_027c3910 = 0;
        uRam00000000027c3918 = 0;
        _DAT_027c3920 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  this[10] = 0;
  lVar9 = FUN_015267a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027c3970 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027c3938 = FUN_015267a0();
        _DAT_027c3930 = "_scope";
        _DAT_027c3940 = 0;
        _DAT_027c3948 = 0x6400;
        _DAT_027c3950 = "double";
        _DAT_027c3958 = 0;
        uRam00000000027c3960 = 0;
        _DAT_027c3968 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @019f81d0 (753 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  void *pvVar2;
  longlong this;
  longlong local_80;
  char local_78;
  longlong local_30;
  char local_28;
  
  FUN_019d4cc0();
  if (*(longlong *)(this + 0x68) != 0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510280();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_019f8880();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_019f8cb0();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_019f90e0();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(&DAT_000015b0 + **(longlong **)(this + 0x40)))();
  (**(code **)(**(longlong **)(this + 0x40) + 0x620))();
  FUN_00d403d0();
  lVar1 = DAT_027e1340;
  if (DAT_027e1340 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_80 = 0;
  local_78 = '\0';
  FUN_00d40470(&local_80,&stack0xffffffffffffff90,1,3);
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @019f90e0 (753 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *arg1;
  longlong this;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(this + 0x80) != *arg1) {
    if (*(longlong *)(this + 0x80) != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_40 = 0;
        (**(code **)(*(longlong *)(this + 0x10) + 0x10))();
        FUN_00d50b00();
        local_40 = '\x01';
        local_30 = 0;
        local_38 = *(longlong *)(this + 0x80);
        local_48 = (longlong *)(this + 0x10);
        if (local_38 != 0) {
          FUN_00d50b00();
        }
        local_30 = '\x01';
        local_88 = 0;
        local_80 = '\0';
        plVar5 = &local_88;
        FUN_00cbadd0(plVar5,&local_38);
        param_1 = (pthread_key_t)plVar5;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *arg1;
    lVar1 = *(longlong *)(this + 0x80);
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0x80) = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(longlong *)(this + 0x80);
      }
    }
    if (lVar2 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        (**(code **)(*(longlong *)(this + 0x10) + 0x10))();
        FUN_00d50b00();
        local_70 = '\x01';
        local_50 = 0;
        local_58 = *(longlong *)(this + 0x80);
        local_78 = (longlong *)(this + 0x10);
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = 0;
        local_60 = '\0';
        FUN_00cbad80(&local_68,&local_58,0x20);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          (**(code **)(*local_78 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ==================================================
// @01525c50 (747 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  double dVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *arg1;
  ulonglong uVar11;
  longlong this;
  ulonglong uVar12;
  double dVar13;
  double local_48;
  ulonglong local_40;
  
  if (*(int *)(*param_2 + 0xc) != 0) {
    lVar6 = *arg1;
    iVar2 = *(int *)(lVar6 + 0x18);
    FUN_00c8e340(param_1,1);
    *(undefined4 *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = 0;
    lVar6 = *param_2;
    if (0 < *(int *)(lVar6 + 0xc)) {
      iVar2 = *(int *)(*arg1 + 0x18);
      iVar8 = iVar2 + 3;
      if (-1 < iVar2) {
        iVar8 = iVar2;
      }
      uVar9 = (iVar8 >> 2) * *(int *)(this + 0x58);
      uVar11 = (ulonglong)uVar9;
      local_48 = (double)(int)uVar9;
      local_40 = 0;
      uVar12 = 0;
      lVar10 = 0;
      bVar3 = false;
      do {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + local_40 * 8);
        uVar7 = local_40;
        if (lVar10 == lVar6) {
          lVar6 = lVar10;
          bVar4 = bVar3;
          if ((!bVar3) && (lVar10 != 0)) {
            FUN_00d50b00(local_40,uVar11);
            bVar4 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00(local_40,uVar11);
          }
          bVar4 = true;
          if ((bVar3) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = bVar4;
        lVar10 = lVar6;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01524a20();
        if ((dVar13 == DAT_02390448) && (!NAN(dVar13) && !NAN(DAT_02390448))) break;
        pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
        if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
          dVar1 = *(double *)(lVar10 + 0x38);
        }
        else {
          dVar1 = *(double *)
                   (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                   0x38);
        }
        if (local_48 <= dVar1) {
          lVar6 = *arg1;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1,1);
          *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = (int)local_40;
          iVar2 = *(int *)(*arg1 + 0x18);
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          uVar9 = (iVar8 >> 2) * *(int *)(this + 0x58);
          uVar7 = (ulonglong)uVar9;
          local_48 = (double)(int)uVar9;
          uVar12 = local_40 & 0xffffffff;
        }
        while( true ) {
          pvVar5 = _pthread_getspecific((pthread_key_t)uVar7);
          if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
            dVar1 = *(double *)(lVar10 + 0x38);
          }
          else {
            dVar1 = *(double *)
                     (*(longlong *)(lVar10 + 0x20 + (ulonglong)(*(uint *)(lVar6 + 0x154) & 1) * 8) +
                     0x38);
          }
          if (dVar1 + dVar13 <= local_48) break;
          lVar6 = *arg1;
          iVar2 = *(int *)(lVar6 + 0x18);
          FUN_00c8e340(dVar1 + dVar13,1);
          *(int *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar2) = (int)uVar12;
          iVar2 = *(int *)(*arg1 + 0x18);
          iVar8 = iVar2 + 3;
          if (-1 < iVar2) {
            iVar8 = iVar2;
          }
          uVar9 = (iVar8 >> 2) * *(int *)(this + 0x58);
          uVar7 = (ulonglong)uVar9;
          local_48 = (double)(int)uVar9;
        }
        uVar11 = local_40 + 1;
        lVar6 = *param_2;
        local_40 = uVar11;
      } while ((longlong)uVar11 < (longlong)*(int *)(lVar6 + 0xc));
      if ((bVar3) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ==================================================
// @01b05350 (731 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  char cVar3;
  int iVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t in_ECX;
  longlong *this;
  longlong *plVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_XMM1_Dc;
  undefined4 uVar17;
  undefined4 in_XMM1_Dd;
  undefined4 uVar18;
  float fVar19;
  ulonglong uVar20;
  undefined1 auVar21 [16];
  longlong *local_40;
  char local_38;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar12 = (undefined4)param_2;
  FUN_01ad3cb0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  plVar7 = local_40;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar7 + 0x3a0))();
  pvVar5 = _pthread_getspecific(in_ECX);
  plVar7 = local_40;
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
  }
  fVar8 = (float)(**(code **)(*plVar7 + 0x3a0))();
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_01749eb0();
  if (cVar3 != '\0') {
    FUN_01ad6350();
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = local_40;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (**(code **)(*plVar7 + 0x3a8))();
    if (*(int *)((longlong)this + 0x184) != iVar4) {
      *(int *)((longlong)this + 0x184) = iVar4;
      uVar20 = DAT_023dccf4;
      uVar9 = DAT_023dccec;
      if ((*(int *)((longlong)this + 0x284) != 1) &&
         (*(int *)((longlong)this + 0x284) != 0)) {
        uVar9 = FUN_01e3f820();
        if (*(int *)((longlong)this + 0x284) == 3) {
          uVar13 = uVar12;
          uVar16 = uVar15;
          uVar17 = in_XMM1_Dc;
          uVar18 = in_XMM1_Dd;
          FUN_01e3f820();
          auVar21._4_4_ = uVar16;
          auVar21._0_4_ = uVar13;
          auVar21._8_4_ = uVar17;
          auVar21._12_4_ = uVar18;
          auVar10 = blendps(auVar21,_DAT_0241c700,0xd);
        }
        else {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = DAT_023dccf4;
        }
        auVar1._8_8_ = extraout_XMM0_Qb;
        auVar1._0_8_ = uVar9;
        auVar11._0_4_ = auVar10._0_4_ + (float)uVar9;
        auVar11._4_4_ = auVar10._4_4_ + (float)((ulonglong)uVar9 >> 0x20);
        auVar11._8_4_ = auVar10._8_4_ + (float)extraout_XMM0_Qb;
        auVar11._12_4_ = auVar10._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar10 = blendps(auVar11,auVar1,2);
        auVar2._4_4_ = uVar15;
        auVar2._0_4_ = uVar12;
        auVar2._8_4_ = in_XMM1_Dc;
        auVar2._12_4_ = in_XMM1_Dd;
        auVar21 = blendps(auVar2,_DAT_0241c710,0xd);
        uVar20 = auVar21._0_8_;
        uVar9 = auVar10._0_8_;
      }
      fVar19 = (float)uVar20;
      fVar14 = fVar19 * DAT_0239011c;
      if ((fVar19 == 0.0) && (!NAN(fVar19))) {
        fVar14 = fVar19;
      }
      (**(code **)(*this + 0x618))(uVar9,fVar14);
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    plVar7 = local_40;
    if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      plVar7 = (longlong *)local_40[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
    }
    iVar4 = (**(code **)(*plVar7 + 0x3a8))(fVar8 + param_1);
    *(int *)((longlong)this + 0x194) = iVar4;
    FUN_01ad3320();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) {
      iVar4 = -1000000;
    }
    if ((int)this[0x32] != iVar4) {
      *(int *)(this + 0x32) = iVar4;
      (**(code **)(*this + 0x620))();
    }
    FUN_01ad71a0();
    FUN_01b03750();
    FUN_01ad37a0();
    FUN_01ad6540();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b1bda0 (727 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined7 uVar7;
  ulonglong uVar6;
  longlong this;
  longlong in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this + 0x316) == '\0') || (*(char *)(this + 0x315) == '\0')) {
LAB_01b1be54:
    uVar6 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_58 == '\0') {
      if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b1be54;
      FUN_00d50b00();
      if (*(int *)(this + 400) == -1000000) goto LAB_01b1be02;
LAB_01b1be22:
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b6f0();
      if ((local_58 == '\0') && (in_stack_ffffffffffffffa0 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_0174a9c0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar4 = FUN_01770ea0();
      if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = (undefined7)((ulonglong)this >> 8);
      if (param_2 == '\0') {
        if (*(longlong *)(this + 0x1a0) == 0) {
          uVar6 = 0;
        }
        else {
          pvVar5 = _pthread_getspecific(param_1);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01736e30();
          lVar2 = *(longlong *)(this + 0x1a0);
          if ((local_58 != '\0') && (in_stack_ffffffffffffffa0 != 0)) {
            FUN_00d50b20();
          }
          uVar6 = CONCAT71(uVar7,lVar2 != in_stack_ffffffffffffffa0 && iVar3 != iVar4);
        }
      }
      else {
        FUN_00d50b00();
        *(int *)(this + 0x2fc) = *(int *)(this + 0x2fc) + 1;
        FUN_01b05670();
        FUN_01af6500();
        FUN_00d50b20();
        uVar6 = CONCAT71(uVar7,1);
      }
      if (in_stack_ffffffffffffffa0 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      if (in_stack_ffffffffffffffa0 == 0) goto LAB_01b1be54;
      if (*(int *)(this + 400) != -1000000) goto LAB_01b1be22;
LAB_01b1be02:
      uVar6 = 0;
    }
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar6 & 0xffffffff;
}




// ==================================================
// @019f8880 (717 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *arg1;
  longlong this;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(this + 0x78) != *arg1) {
    if (*(longlong *)(this + 0x78) != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_40 = 0;
        (**(code **)(*(longlong *)(this + 0x10) + 0x10))();
        FUN_00d50b00();
        local_40 = '\x01';
        local_30 = 0;
        local_38 = *(longlong *)(this + 0x78);
        local_48 = (longlong *)(this + 0x10);
        if (local_38 != 0) {
          FUN_00d50b00();
        }
        local_30 = '\x01';
        local_88 = 0;
        local_80 = '\0';
        plVar5 = &local_88;
        FUN_00cbadd0(plVar5,&local_38);
        param_1 = (pthread_key_t)plVar5;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *arg1;
    lVar1 = *(longlong *)(this + 0x78);
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0x78) = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(longlong *)(this + 0x78);
      }
    }
    if (lVar2 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        (**(code **)(*(longlong *)(this + 0x10) + 0x10))();
        FUN_00d50b00();
        local_70 = '\x01';
        local_50 = 0;
        local_58 = *(longlong *)(this + 0x78);
        local_78 = (longlong *)(this + 0x10);
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = 0;
        local_60 = '\0';
        FUN_00cbad80(&local_68,&local_58,0x20);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          (**(code **)(*local_78 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ==================================================
// @019f8cb0 (717 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *arg1;
  longlong this;
  longlong local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(this + 0x70) != *arg1) {
    if (*(longlong *)(this + 0x70) != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        local_40 = 0;
        (**(code **)(*(longlong *)(this + 0x10) + 0x10))();
        FUN_00d50b00();
        local_40 = '\x01';
        local_30 = 0;
        local_38 = *(longlong *)(this + 0x70);
        local_48 = (longlong *)(this + 0x10);
        if (local_38 != 0) {
          FUN_00d50b00();
        }
        local_30 = '\x01';
        local_88 = 0;
        local_80 = '\0';
        plVar5 = &local_88;
        FUN_00cbadd0(plVar5,&local_38);
        param_1 = (pthread_key_t)plVar5;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          (**(code **)(*local_48 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    lVar4 = *arg1;
    lVar1 = *(longlong *)(this + 0x70);
    lVar2 = lVar1;
    if (lVar1 != lVar4) {
      if (lVar4 != 0) {
        FUN_00d50b00();
      }
      *(longlong *)(this + 0x70) = lVar4;
      lVar2 = lVar4;
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = *(longlong *)(this + 0x70);
      }
    }
    if (lVar2 != 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_00e8b990();
      if (lVar4 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00e8b990();
        (**(code **)(*(longlong *)(this + 0x10) + 0x10))();
        FUN_00d50b00();
        local_70 = '\x01';
        local_50 = 0;
        local_58 = *(longlong *)(this + 0x70);
        local_78 = (longlong *)(this + 0x10);
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        local_50 = '\x01';
        local_68 = 0;
        local_60 = '\0';
        FUN_00cbad80(&local_68,&local_58,0x20);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          (**(code **)(*local_78 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ==================================================
// @01a255c0 (681 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *this;
  longlong local_68;
  char local_60;
  longlong local_28;
  char local_20;
  
  FUN_00d50100();
  if ((DAT_028b2a50 == 0) || (DAT_028b2a59 == '\0')) {
    FUN_00e8cb50();
    lVar5 = DAT_027e1e78;
    if (DAT_028b2a50 == 0) {
      if (DAT_027e1e78 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01d20ca0(_DAT_0241bda0);
      lVar4 = DAT_028b2a50;
      if (DAT_028b2a50 != local_28) {
        if (local_20 == '\0') {
          if (local_28 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_28;
          }
        }
        else {
          local_20 = '\0';
          lVar4 = local_28;
        }
        bVar2 = DAT_028b2a50 != 0;
        DAT_028b2a50 = lVar4;
        if (bVar2) {
          FUN_00d50b20();
          lVar4 = local_28;
        }
      }
      if ((lVar4 != 0) && (DAT_028b2a58 == '\0')) {
        DAT_028b2a58 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_28;
      }
      if ((local_20 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      DAT_028b2a59 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2a59 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b2a50 == 0) {
      lVar5 = 0;
      goto LAB_01a2577d;
    }
  }
  lVar5 = DAT_028b2a50;
  FUN_00d50b00();
LAB_01a2577d:
  (**(code **)(*this + 0x390))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00274ea0();
  *puVar3 = &DAT_02633dd0;
  puVar3[2] = &DAT_02634290;
  puVar3[7] = 0;
  (*DAT_02633de8)();
  puVar1 = (undefined8 *)this[7];
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    this[7] = (longlong)puVar3;
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01a259e0();
  if ((local_20 == '\0') && (local_28 != 0)) {
    FUN_00d50b00();
  }
  FUN_01a5dfe0();
  if (local_28 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01524590 (680 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *this;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  
  dVar12 = _UNK_0240e9c8;
  dVar11 = _DAT_0240e9c0;
  auVar10 = _DAT_0240d420;
  dVar27 = DAT_0240d1c0;
  uVar20 = _UNK_023908f8;
  uVar19 = _DAT_023908f0;
  dVar9 = DAT_0238fee8;
  lVar5 = *this;
  iVar4 = *(int *)(lVar5 + 0x18);
  iVar15 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar15 = iVar4;
  }
  uVar22 = iVar15 >> 5;
  if (0x11f < iVar4) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    uVar18 = (ulonglong)(uVar22 - 3);
    lVar24 = (longlong)(int)uVar22 * 0x20;
    uVar16 = uVar18 + 0xfffffffd;
    iVar15 = uVar22 - 4;
    lVar23 = uVar18 * 0x20;
    iVar13 = 0;
    dVar7 = (double)DAT_0240d420;
    dVar8 = DAT_0240d420._8_8_;
    lVar21 = lVar6;
    dVar30 = *(double *)(lVar6 + (ulonglong)(uVar22 - 1) * 0x20) -
             *(double *)(lVar6 + (ulonglong)(uVar22 - 2) * 0x20);
    do {
      dVar38 = *(double *)(lVar21 + 0x20 + lVar23);
      dVar31 = dVar38 - *(double *)(lVar21 + lVar23);
      dVar25 = dVar31 / dVar30;
      if (dVar25 < dVar9) {
        dVar25 = dVar9 / dVar25;
      }
      if (dVar25 < dVar27) {
        iVar13 = iVar13 + 1;
        iVar17 = iVar15 + 1;
      }
      else {
        if ((5 < iVar13) && (6 < iVar15 + 1)) {
          lVar14 = (uVar16 & 0xffffffff) * 0x20;
          dVar25 = *(double *)(lVar21 + -0x120 + lVar24);
          dVar2 = *(double *)(lVar21 + -0x100 + lVar24);
          dVar3 = *(double *)(lVar21 + -0xe0 + lVar24);
          dVar33 = dVar25 - *(double *)(lVar21 + -0x140 + lVar24);
          dVar25 = dVar2 - dVar25;
          auVar28._0_8_ = dVar3 - dVar2;
          auVar28._8_8_ = *(double *)(lVar21 + -0xc0 + lVar24) - dVar3;
          auVar32._8_8_ =
               *(double *)(lVar6 + (ulonglong)((int)uVar16 + 1) * 0x20) -
               *(double *)(lVar6 + lVar14);
          auVar32._0_8_ = auVar28._8_8_;
          auVar34._8_8_ = dVar25;
          auVar34._0_8_ = dVar33;
          auVar29._8_8_ = auVar28._0_8_;
          auVar29._0_8_ = dVar25;
          auVar35 = divpd(auVar34,auVar29);
          auVar29 = divpd(auVar28,auVar32);
          auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < dVar8);
          auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < dVar7);
          auVar37 = divpd(auVar10,auVar35);
          auVar36 = blendvpd(auVar35,auVar37,auVar36);
          auVar35 = divpd(auVar10,auVar29);
          auVar37._8_8_ = -(ulonglong)(auVar29._8_8_ < dVar8);
          auVar37._0_8_ = -(ulonglong)(auVar29._0_8_ < dVar7);
          auVar29 = blendvpd(auVar29,auVar35,auVar37);
          auVar26._8_8_ = -(ulonglong)(dVar12 <= auVar36._8_8_);
          auVar26._0_8_ = -(ulonglong)(dVar11 <= auVar36._0_8_);
          auVar35._8_8_ = -(ulonglong)(dVar12 <= auVar29._8_8_);
          auVar35._0_8_ = -(ulonglong)(dVar11 <= auVar29._0_8_);
          auVar29 = packssdw(auVar26,auVar35);
          iVar13 = movmskps((int)lVar14,auVar29);
          if (iVar13 == 0) {
            dVar38 = dVar38 - dVar30;
            pdVar1 = (double *)(lVar6 + (longlong)iVar15 * 0x20);
            if ((double)((ulonglong)((dVar38 - *pdVar1) - dVar33) & uVar19) <
                (double)((ulonglong)((*(double *)(lVar21 + lVar23) - *pdVar1) - dVar33) & uVar20)) {
              *(double *)(lVar21 + lVar23) = dVar38;
            }
          }
        }
        iVar17 = (int)uVar18;
        iVar13 = 0;
      }
      uVar18 = uVar18 - 1;
      uVar16 = uVar16 - 1;
      iVar15 = iVar15 + -1;
      lVar21 = lVar21 + -0x20;
      dVar30 = dVar31;
    } while (1 < iVar17);
  }
  dVar9 = DAT_023b4df8;
  if (0x1f < iVar4) {
    uVar19 = 0;
    pdVar1 = *(double **)(lVar5 + 0x10);
    dVar27 = DAT_02395720;
    do {
      uVar20 = uVar19 + 1;
      if ((longlong)uVar19 < (longlong)(int)(uVar22 - 1)) {
        dVar27 = ((pdVar1[5] - pdVar1[1]) * dVar9) / (pdVar1[4] - *pdVar1);
      }
      pdVar1[2] = dVar27;
      uVar19 = uVar20;
      pdVar1 = pdVar1 + 4;
    } while (uVar22 != uVar20);
  }
  return;
}




// ==================================================
// @019e1dd0 (667 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char *pcVar1;
  longlong *this;
  undefined8 unaff_R14;
  ulonglong uVar2;
  longlong lVar3;
  longlong local_98;
  char local_90;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_019e2044;
  (**(code **)(*this + 0xe20))();
  lVar3 = local_48;
  if (*(int *)(local_58 + 0xc) == 0) {
    lVar3 = 0;
  }
  else {
    (**(code **)(*this + 0xe20))();
    FUN_00d23340();
    pcVar1 = local_38;
    if (local_40[0] != '\0') {
      pcVar1 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar1 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_48 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation" +
                *this))();
    if (local_48 == lVar3) {
LAB_019e1f0c:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar3 = local_48;
        goto LAB_019e1f0c;
      }
      FUN_00d50b20();
      lVar3 = local_48;
    }
    if (lVar3 != 0) {
      FUN_01caec40();
      lVar3 = DAT_027e1458;
      if (DAT_027e1458 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        (**(code **)(*this + 0xda0))();
      }
      (**(code **)(*this + 0xda8))();
      (**(code **)("/usr/lib/libobjc.A.dylib" + *this + 8))();
      FUN_019e1580();
      FUN_00d50b20();
      goto LAB_019e2044;
    }
  }
  uVar2 = 0;
LAB_019e2044:
  return uVar2 & 0xffffffff;
}




// ==================================================
// @019e21f0 (667 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char *pcVar1;
  longlong *this;
  undefined8 unaff_R14;
  ulonglong uVar2;
  longlong lVar3;
  longlong local_98;
  char local_90;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (param_2 == 0) goto LAB_019e2464;
  (**(code **)(*this + 0xe20))();
  lVar3 = local_48;
  if (*(int *)(local_58 + 0xc) == 0) {
    lVar3 = 0;
  }
  else {
    (**(code **)(*this + 0xe20))();
    FUN_00d23340();
    pcVar1 = local_38;
    if (local_40[0] != '\0') {
      pcVar1 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar1 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] == '\0') {
      if (local_48 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation" +
                *this + 8))();
    if (local_48 == lVar3) {
LAB_019e232c:
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        lVar3 = local_48;
        goto LAB_019e232c;
      }
      FUN_00d50b20();
      lVar3 = local_48;
    }
    if (lVar3 != 0) {
      FUN_01caec40();
      lVar3 = DAT_027e1458;
      if (DAT_027e1458 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == 0) {
        (**(code **)(*this + 0xda0))();
      }
      (**(code **)(*this + 0xda8))();
      (**(code **)("/usr/lib/libobjc.A.dylib" + *this + 8))();
      FUN_019e1580();
      FUN_00d50b20();
      goto LAB_019e2464;
    }
  }
  uVar2 = 0;
LAB_019e2464:
  return uVar2 & 0xffffffff;
}




// ==================================================
// @01b1e460 (646 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  void *pvVar2;
  longlong this;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong local_48;
  char local_40;
  
  FUN_01ad3cb0();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar3 = (float)FUN_01742280();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar4 = (float)FUN_01742280();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar5 = (float)FUN_017708f0();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01770870();
  fVar3 = fVar3 - fVar4;
  if ((cVar1 != '\0') && (*(char *)(this + 0x188) == '\0')) {
    for (; fVar5 <= fVar3; fVar3 = fVar3 - fVar5) {
    }
    for (; fVar3 < 0.0; fVar3 = fVar3 + fVar5) {
    }
  }
  if (local_48 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return fVar3;
}




// ==================================================
// @01a25ee0 (629 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong *arg1;
  longlong lVar6;
  longlong local_98;
  char local_90;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01a58dc0();
  local_70 = *arg1;
  local_68 = '\0';
  local_60 = *param_1;
  local_58 = '\0';
  plVar5 = &local_60;
  (**(code **)(*local_40 + 0xe50))(plVar5,&local_70);
  if ((local_90 == '\0') && (local_98 != 0)) {
    FUN_00d50b00();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_98 != 0) {
    if (0 < *(int *)(local_98 + 0xc)) {
      lVar6 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(local_98 + 0x10) + lVar6 * 8);
        pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar3 = FUN_0125a2d0();
        if (cVar3 != '\0') {
          pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_01263cf0();
          if (cVar3 == '\0') {
            FUN_01a58dc0();
            plVar2 = local_40;
            local_48 = '\0';
            local_50 = lVar1;
            pvVar4 = _pthread_getspecific((pthread_key_t)plVar5);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a2c0();
            (**(code **)(
                        "/System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation"
                        + *plVar2 + 0x48))();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_98 + 0xc));
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b16ca0 (615 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  longlong lVar6;
  longlong this;
  undefined8 unaff_R15;
  float fVar7;
  longlong local_70;
  char local_68;
  longlong *in_stack_ffffffffffffffa0;
  char local_58;
  
  lVar3 = *(longlong *)PTR____stack_chk_guard_024a9898;
  cVar1 = *(char *)(this + 0x315);
  if (cVar1 == '\0') goto LAB_01b16ee0;
  FUN_01ad3cb0();
  if (local_58 == '\0') {
    if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b16ee0;
    FUN_00d50b00();
    if (in_stack_ffffffffffffffa0 != (longlong *)0x0) goto LAB_01b16d0e;
LAB_01b16d9f:
    if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b16ee0;
  }
  else {
    if (in_stack_ffffffffffffffa0 == (longlong *)0x0) goto LAB_01b16d9f;
LAB_01b16d0e:
    if ((param_2 == '\0') || (*(longlong *)(this + 0x220) == 0)) goto LAB_01b16d9f;
    FUN_00d50b00();
    *(int *)(this + 0x2fc) = *(int *)(this + 0x2fc) + 1;
    if (*(int *)(this + 0x184) != *(int *)(this + 400)) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = *(undefined4 *)(this + 400);
      (**(code **)(**(longlong **)(this + 0x220) + 0x930))();
      fVar7 = (float)_logf();
      cVar4 = FUN_017766f0(fVar7 * DAT_02394208,uVar2);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar4 != '\0') {
        FUN_01ad6540();
        FUN_01b07460();
        FUN_01b06a50();
        pvVar5 = _pthread_getspecific(param_1);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          in_stack_ffffffffffffffa0 =
               (longlong *)in_stack_ffffffffffffffa0[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        (**(code **)(*in_stack_ffffffffffffffa0 + 0x3a0))();
        FUN_01aada00();
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_01af6500();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b16ee0:
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar3) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return CONCAT71((int7)((ulonglong)unaff_R15 >> 8),cVar1) & 0xffffffff;
}




// ==================================================
// @01521110 (611 bytes) — logic_branch
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  
  if (DAT_028ad030 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028acff8 = FUN_0015ea50();
      _DAT_028acff0 = "getPitchForPitchIndex";
      _DAT_028ad000 = 0;
      _DAT_028ad008 = &DAT_027c3778;
      _DAT_028ad010 = FUN_01522240;
      _DAT_028ad018 = 0x3a1;
      _DAT_028ad020 = 0;
      uRam00000000028ad028 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ad078 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ad040 = FUN_0015ea50();
      _DAT_028ad038 = "getClosestPitchIndexForPitch";
      _DAT_028ad048 = 0;
      _DAT_028ad050 = &DAT_027c377b;
      _DAT_028ad058 = FUN_01522270;
      _DAT_028ad060 = 0x3a9;
      _DAT_028ad068 = 0;
      uRam00000000028ad070 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ad0c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ad088 = FUN_0015ea50();
      _DAT_028ad080 = "getClosestScalePitchIndexForPitch";
      _DAT_028ad090 = 0;
      _DAT_028ad098 = &DAT_027c377b;
      _DAT_028ad0a0 = FUN_01522270;
      _DAT_028ad0a8 = 0x3b1;
      _DAT_028ad0b0 = 0;
      uRam00000000028ad0b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ad108 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_028ad0d0 = FUN_0015ea50();
      _DAT_028ad0c8 = "doesPitchIndexBelongToScale";
      _DAT_028ad0d8 = 0;
      _DAT_028ad0e0 = &DAT_027c377e;
      _DAT_028ad0e8 = FUN_015222a0;
      _DAT_028ad0f0 = 0x3b9;
      _DAT_028ad0f8 = 0;
      uRam00000000028ad100 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ==================================================
// @01b192b0 (608 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong this;
  longlong local_68;
  char local_60;
  longlong in_stack_ffffffffffffffa8;
  char local_50;
  
  lVar1 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(char *)(this + 0x315) == '\0') || (*(char *)(this + 0x316) == '\0')) {
LAB_01b193dc:
    uVar2 = 0;
  }
  else {
    FUN_01ad3cb0();
    if (local_50 == '\0') {
      if (in_stack_ffffffffffffffa8 == 0) goto LAB_01b193dc;
      FUN_00d50b00();
      if (param_2 != '\0') goto LAB_01b19317;
LAB_01b193ab:
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_017732e0();
      if ((local_50 != '\0') && (in_stack_ffffffffffffffa8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (in_stack_ffffffffffffffa8 == 0) goto LAB_01b193dc;
      if (param_2 == '\0') goto LAB_01b193ab;
LAB_01b19317:
      FUN_00d50b00();
      *(int *)(this + 0x2fc) = *(int *)(this + 0x2fc) + 1;
      FUN_01ad6350();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0173b790();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01773460();
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_01ad71a0();
      FUN_01b03750();
      FUN_01ad37a0();
      FUN_01ad6540();
      FUN_01af6500();
      FUN_00d50b20();
      uVar2 = 0x2802501;
    }
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != lVar1) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}




// ==================================================
// @0173ef00 (592 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined *puVar6;
  pthread_key_t pVar7;
  longlong arg1;
  undefined8 *this;
  longlong local_58;
  char local_50;
  undefined8 *local_48;
  longlong local_40;
  char local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  pvVar4 = _pthread_getspecific((pthread_key_t)puVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01738240();
  lVar1 = local_40;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_48 = puVar3;
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(arg1 + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
    local_58 = 0;
    while( true ) {
      pVar7 = (pthread_key_t)puVar6;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01738240();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_00e7bdb0();
      puVar6 = (undefined *)FUN_00e7bdb0();
      cVar2 = FUN_01252960(puVar6,uVar5,&local_58,0);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') break;
      if (local_58 != 0) {
        local_40 = local_58;
        local_38 = '\0';
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  *this = local_48;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01521e60 (589 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  int iVar1;
  int iVar2;
  char cVar3;
  int unaff_ESI;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *this;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = unaff_ESI - 0x3c;
  uVar8 = 0;
  if (unaff_ESI < 0x3c) {
    uVar8 = 0xfffffff4;
    if (-0xc < (int)uVar10) {
      uVar8 = uVar10;
    }
    iVar1 = (uVar8 - unaff_ESI) + 0x3c;
    uVar8 = (uint)(iVar1 != 0);
    uVar8 = (iVar1 - uVar8) / 0xc + uVar8;
    uVar10 = (unaff_ESI + uVar8 * 0xc) - 0x30;
    uVar8 = ~uVar8;
  }
  uVar9 = uVar10 % 0xc;
  iVar1 = (**(code **)(*this + 0x408))();
  uVar5 = uVar10 % 0xc - 1;
  if (iVar1 < 0) {
    iVar4 = 0;
    uVar7 = 0;
    iVar2 = 0;
    if (uVar5 < 0xb) {
      uVar7 = *(undefined4 *)(&DAT_0240e8ec + (longlong)(int)uVar5 * 4);
      iVar2 = *(int *)(&DAT_0240e918 + (longlong)(int)uVar5 * 4);
    }
    iVar6 = 1;
    if (1 < -iVar1) {
      iVar6 = -iVar1;
    }
    do {
      iVar4 = iVar4 + 5;
      iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
      cVar3 = (char)iVar4 + '\x05';
      uVar5 = cVar3 * 0x2b;
      if (uVar9 == (int)(char)(cVar3 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              )) {
        uVar7 = 0;
        break;
      }
      cVar3 = (char)iVar4 + '\x06';
      uVar5 = cVar3 * 0x2b;
      if (uVar9 == (int)(char)(cVar3 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc
                              )) goto LAB_01522057;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  else {
    uVar7 = 0;
    iVar2 = 0;
    if (uVar5 < 0xb) {
      uVar7 = *(undefined4 *)(&DAT_0240e944 + (longlong)(int)uVar5 * 4);
      iVar2 = *(int *)(&DAT_0240e970 + (longlong)(int)uVar5 * 4);
    }
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        iVar4 = iVar4 + 7;
        iVar4 = iVar4 + (((uint)(iVar4 / 6 + (iVar4 >> 0x1f)) >> 1) - (iVar4 >> 0x1f)) * -0xc;
        if (uVar9 == (byte)((char)(iVar4 + 0xbU) + ((byte)((iVar4 + 0xbU & 0xff) / 3) & 0xfc) * -3))
        {
          uVar7 = 0;
          break;
        }
        cVar3 = (char)iVar4 + '\n';
        uVar5 = cVar3 * 0x2b;
        if (uVar9 == (byte)(cVar3 + ((char)((uVar5 & 0xffff) >> 0xf) + (char)(uVar5 >> 9)) * -0xc))
        goto LAB_01522057;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
joined_r0x015220a9:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = uVar7;
  }
  return iVar2 + ((int)uVar10 / 0xc + uVar8) * 7;
LAB_01522057:
  uVar7 = 3;
  goto joined_r0x015220a9;
}




// ==================================================
// @0171b9c0 (585 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *this;
  bool bVar5;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  undefined8 *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  puVar4 = DAT_028adaa8;
  if ((DAT_028adaa8 == (undefined8 *)0x0) || (DAT_028adab1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028adaa8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025fbf30;
      puVar4[2] = 0;
      *(undefined4 *)(puVar4 + 3) = 0;
      *(undefined1 *)((longlong)puVar4 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      puVar4[4] = 0;
      *(undefined1 *)(puVar4 + 5) = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      FUN_00d500e0();
      if (DAT_028adaa8 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028adaa8 != (undefined8 *)0x0;
        DAT_028adaa8 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028adab0 == '\0') {
        DAT_028adab0 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_0171ab80();
      FUN_00d403d0();
      local_40 = DAT_028adaa8;
      local_38 = 0;
      if (DAT_028adaa8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      lVar3 = DAT_027e2660;
      local_38 = '\x01';
      if (DAT_027e2660 != 0) {
        FUN_00d50b00();
      }
      local_60 = lVar3;
      local_58 = '\x01';
      FUN_00d6f370();
      local_30 = local_50;
      local_28 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_28 = '\x01';
      FUN_00d41430(&local_30,&local_60);
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      DAT_028adab1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028adab1 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028adaa8;
    *(undefined1 *)(this + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_0171bbef;
    }
  }
  else {
    *(undefined1 *)(this + 1) = 0;
  }
  FUN_00d50b00();
LAB_0171bbef:
  *this = puVar4;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01b05670 (570 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  void *pvVar4;
  longlong lVar5;
  longlong *this;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_XMM1_Dc;
  undefined4 uVar15;
  undefined4 in_XMM1_Dd;
  undefined4 uVar16;
  float fVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  longlong *local_38;
  char local_30;
  
  uVar13 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar10 = (undefined4)param_2;
  FUN_01ad3cb0();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == (longlong *)0x0) {
    return;
  }
  FUN_01ad6350();
  pvVar4 = _pthread_getspecific(param_1);
  plVar6 = local_38;
  if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
    plVar6 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar6 + 0x3a0))();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0174aa60();
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar3 = FUN_017423e0();
  if (*(int *)((longlong)this + 0x184) != iVar3) {
    *(int *)((longlong)this + 0x184) = iVar3;
    uVar18 = DAT_023dccf4;
    uVar7 = DAT_023dccec;
    if ((*(int *)((longlong)this + 0x284) != 1) && (*(int *)((longlong)this + 0x284) != 0)
       ) {
      uVar7 = FUN_01e3f820();
      if (*(int *)((longlong)this + 0x284) == 3) {
        uVar11 = uVar10;
        uVar14 = uVar13;
        uVar15 = in_XMM1_Dc;
        uVar16 = in_XMM1_Dd;
        FUN_01e3f820();
        auVar19._4_4_ = uVar14;
        auVar19._0_4_ = uVar11;
        auVar19._8_4_ = uVar15;
        auVar19._12_4_ = uVar16;
        auVar8 = blendps(auVar19,_DAT_0241c700,0xd);
      }
      else {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = DAT_023dccf4;
      }
      auVar1._8_8_ = extraout_XMM0_Qb;
      auVar1._0_8_ = uVar7;
      auVar9._0_4_ = auVar8._0_4_ + (float)uVar7;
      auVar9._4_4_ = auVar8._4_4_ + (float)((ulonglong)uVar7 >> 0x20);
      auVar9._8_4_ = auVar8._8_4_ + (float)extraout_XMM0_Qb;
      auVar9._12_4_ = auVar8._12_4_ + (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar8 = blendps(auVar9,auVar1,2);
      auVar2._4_4_ = uVar13;
      auVar2._0_4_ = uVar10;
      auVar2._8_4_ = in_XMM1_Dc;
      auVar2._12_4_ = in_XMM1_Dd;
      auVar19 = blendps(auVar2,_DAT_0241c710,0xd);
      uVar18 = auVar19._0_8_;
      uVar7 = auVar8._0_8_;
    }
    fVar17 = (float)uVar18;
    fVar12 = fVar17 * DAT_0239011c;
    if ((fVar17 == 0.0) && (!NAN(fVar17))) {
      fVar12 = fVar17;
    }
    (**(code **)(*this + 0x618))(uVar7,fVar12);
  }
  FUN_01ad3320();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((int)this[0x32] != -1000000) {
    *(undefined4 *)(this + 0x32) = 0xfff0bdc0;
    (**(code **)(*this + 0x620))();
  }
  FUN_01ad71a0();
  FUN_01ad37a0();
  FUN_01ad6540();
  FUN_00d50b20();
  return;
}




// ==================================================
// @01a36510 (566 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *this;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong local_68;
  char local_60;
  undefined1 local_58 [16];
  float local_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (this[0x2a] == 0) {
    if (this[0x28] == 0) {
      return DAT_023dccec;
    }
    dVar5 = (double)(**(code **)(*this + 0xa30))();
    dVar6 = (double)(**(code **)(*this + 0xa38))();
    if ((dVar5 == dVar6) && (!NAN(dVar5) && !NAN(dVar6))) {
      return DAT_023dccec;
    }
    plVar1 = (longlong *)this[0x2d];
    (**(code **)(*this + 0xa30))();
    local_38 = (float)(**(code **)(*plVar1 + 0x390))();
    plVar1 = (longlong *)this[0x2d];
    (**(code **)(*this + 0xa38))();
    lVar3 = *plVar1;
  }
  else {
    plVar1 = (longlong *)this[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013201a0();
    local_38 = (float)(**(code **)(*plVar1 + 0x390))();
    plVar1 = (longlong *)this[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320130();
    lVar3 = *plVar1;
  }
  uVar4 = (**(code **)(lVar3 + 0x390))();
  local_38 = (float)uVar4 - local_38;
  uVar7 = DAT_023dccec;
  if (DAT_02390d30 < local_38) {
    fStack_34 = (float)((ulonglong)uVar4 >> 0x20);
    uStack_30 = (undefined4)extraout_XMM0_Qb;
    uStack_2c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
    FUN_01a36140();
    local_58._0_8_ = FUN_01d526f0();
    local_58._8_8_ = extraout_XMM0_Qb_00;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    auVar11 = local_58;
    if (local_38 < DAT_02394298 * (float)local_58._0_8_) {
      do {
        auVar10 = auVar11;
        local_58._0_4_ = local_58._0_4_ + DAT_02390d00;
        auVar11 = blendps(auVar10,local_58,1);
      } while (local_38 < local_58._0_4_ * DAT_02394298);
      blendps(auVar10,local_58,1);
    }
    fVar8 = fStack_34;
    uVar9 = uStack_2c;
    FUN_01e3f820();
    auVar10._4_4_ = fStack_34;
    auVar10._0_4_ = (float)uVar4 - local_58._0_4_;
    auVar10._8_4_ = uStack_30;
    auVar10._12_4_ = uStack_2c;
    auVar11._4_4_ = fVar8;
    auVar11._0_4_ = fVar8 + DAT_023b2664;
    auVar11._8_4_ = uVar9;
    auVar11._12_4_ = uVar9;
    auVar11 = insertps(auVar10,auVar11,0x10);
    uVar7 = auVar11._0_8_;
  }
  return uVar7;
}




// ==================================================
// @01a362b0 (554 bytes) — math_loop
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong *this;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  float fVar8;
  undefined4 in_XMM1_Dd;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong local_68;
  char local_60;
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  
  fVar8 = (float)((ulonglong)param_2 >> 0x20);
  if (this[0x2a] == 0) {
    if (this[0x28] == 0) {
      return DAT_023dccec;
    }
    dVar6 = (double)(**(code **)(*this + 0xa30))();
    fStack_44 = (float)((ulonglong)dVar6 >> 0x20);
    dVar7 = (double)(**(code **)(*this + 0xa38))();
    in_XMM1_Dd = 0;
    if ((dVar6 == dVar7) && (!NAN(dVar6) && !NAN(dVar7))) {
      return DAT_023dccec;
    }
    plVar1 = (longlong *)this[0x2d];
    (**(code **)(*this + 0xa30))();
    fVar8 = fStack_44;
    uVar5 = (**(code **)(*plVar1 + 0x390))();
    local_48 = (float)uVar5;
    fStack_44 = (float)((ulonglong)uVar5 >> 0x20);
    plVar1 = (longlong *)this[0x2d];
    (**(code **)(*this + 0xa38))();
    lVar3 = *plVar1;
    uStack_40 = extraout_XMM0_Qb_01;
  }
  else {
    plVar1 = (longlong *)this[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013201a0();
    uVar5 = (**(code **)(*plVar1 + 0x390))();
    local_48 = (float)uVar5;
    fStack_44 = (float)((ulonglong)uVar5 >> 0x20);
    plVar1 = (longlong *)this[0x2d];
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320130();
    lVar3 = *plVar1;
    uStack_40 = extraout_XMM0_Qb;
  }
  fVar4 = (float)(**(code **)(lVar3 + 0x390))();
  fVar4 = fVar4 - local_48;
  uVar5 = DAT_023dccec;
  if (DAT_02390d30 < fVar4) {
    FUN_01a35fd0();
    local_58._0_8_ = FUN_01d526f0();
    local_58._8_8_ = extraout_XMM0_Qb_00;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (fVar4 < DAT_02394298 * (float)local_58._0_8_) {
      fVar8 = 0.0;
      in_XMM1_Dd = 0;
      auVar10 = local_58;
      do {
        auVar9 = auVar10;
        local_58._0_4_ = local_58._0_4_ + DAT_02390d00;
        auVar10 = blendps(auVar9,local_58,1);
      } while (fVar4 < local_58._0_4_ * DAT_02394298);
      blendps(auVar9,local_58,1);
    }
    FUN_01e3f820();
    auVar9._4_4_ = fStack_44;
    auVar9._0_4_ = local_48;
    auVar9._8_8_ = uStack_40;
    auVar10._4_4_ = fVar8;
    auVar10._0_4_ = fVar8 + DAT_023b2664;
    auVar10._8_4_ = in_XMM1_Dd;
    auVar10._12_4_ = in_XMM1_Dd;
    auVar10 = insertps(auVar9,auVar10,0x10);
    uVar5 = auVar10._0_8_;
  }
  return uVar5;
}




// ==================================================
// @01a25050 (546 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  int iVar2;
  longlong this;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  longlong local_68;
  char local_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  undefined4 uStack_40;
  float fStack_3c;
  longlong local_38;
  char local_30;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  
  fVar4 = (float)((ulonglong)param_2 >> 0x20);
  local_48._0_4_ = (undefined4)param_2;
  bVar3 = true;
  if ((*(longlong *)(this + 0x1d8) == 0) || (FUN_01bcc520(), local_38 == 0)) {
    bVar1 = false;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
    }
    iVar2 = FUN_01bead40();
    bVar1 = true;
    if ((iVar2 == 0) && (*(longlong *)(this + 0x138) != 0)) {
      FUN_01e40eb0();
      if (local_38 == this) {
        FUN_01cf3f40();
        bVar3 = local_68 != 0;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        bVar3 = false;
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
      if (bVar3) {
        uVar6 = (**(code **)(**(longlong **)(this + 0x138) + 0x4d8))();
        uStack_50 = (undefined4)extraout_XMM0_Qb;
        uStack_4c = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        local_48._4_4_ = fVar4;
        uStack_40 = in_XMM1_Dc;
        fStack_3c = (float)in_XMM1_Dd;
        FUN_01e3f820();
        auVar11._4_4_ = fVar4;
        auVar11._0_4_ = fVar4;
        auVar11._8_4_ = in_XMM1_Dd;
        auVar11._12_4_ = in_XMM1_Dd;
        auVar7._4_12_ = auVar11._4_12_;
        auVar7._0_4_ = fVar4 + DAT_023b1608;
        auVar11 = insertps(_local_48,auVar7,0x10);
        auVar8._8_4_ = uStack_50;
        auVar8._0_8_ = uVar6;
        auVar8._12_4_ = uStack_4c;
        auVar8 = blendps(auVar8,_DAT_023b1620,0xe);
        (**(code **)(**(longlong **)(this + 0x138) + 0x4d0))(auVar8._0_8_);
        FUN_01cf3f40();
        FUN_01e3f820();
        auVar8 = auVar11;
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        FUN_01e3f820();
        local_48._4_4_ = auVar11._4_4_;
        fStack_3c = auVar11._12_4_;
        fVar4 = (float)-(uint)(auVar8._4_4_ < (float)local_48._4_4_);
        fVar5 = (float)-(uint)(auVar8._12_4_ < fStack_3c);
        if (((uint)fVar4 & 1) == 0) {
          auVar10._0_8_ = FUN_01cf5cf0();
          auVar10._8_8_ = extraout_XMM0_Qb_01;
          auVar8 = blendps(auVar10,ZEXT816(0),2);
          FUN_01cf5c80(auVar8._0_8_);
        }
        else {
          FUN_01e3f820();
          auVar9._0_8_ = FUN_01cf5cf0();
          auVar9._8_8_ = extraout_XMM0_Qb_00;
          auVar12._4_4_ = (float)local_48._4_4_ - fVar4;
          auVar12._12_4_ = fStack_3c - fVar5;
          auVar12._0_4_ = auVar12._4_4_;
          auVar12._8_4_ = auVar12._12_4_;
          auVar13._4_12_ = auVar12._4_12_;
          auVar13._0_4_ = auVar12._4_4_ + DAT_02390d00;
          if (auVar13._0_4_ < (float)((ulonglong)auVar9._0_8_ >> 0x20)) {
            auVar8 = insertps(auVar9,auVar13,0x10);
            FUN_01cf5c80(auVar8._0_8_);
          }
        }
        bVar3 = false;
        goto LAB_01a250cf;
      }
    }
    bVar3 = false;
  }
  FUN_01d9cbc0();
  if (!bVar1) {
    return;
  }
LAB_01a250cf:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01a1dd20 (534 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *this;
  bool bVar4;
  undefined1 local_e0 [112];
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar3 = DAT_028b29e0;
  if ((DAT_028b29e0 == (longlong *)0x0) || (DAT_028b29e9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b29e0 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b29e0 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b29e0 != (longlong *)0x0;
        DAT_028b29e0 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b29e8 == '\0') {
        DAT_028b29e8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(DAT_02390124);
      local_30 = 0;
      FUN_01cfc6a0(DAT_02390124);
      local_2c = 0x3dcccccd;
      FUN_01cfc6a0(DAT_02390124);
      local_28 = 0x3f666666;
      FUN_01cfc6a0(DAT_02390124);
      local_24 = 0x3f800000;
      FUN_01ae52c0(&local_50,&local_30,&local_2c,&local_40);
      FUN_01f7ba60(0,local_e0);
      FUN_019fe220();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b29e9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b29e9 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = DAT_028b29e0;
    *(undefined1 *)(this + 1) = 0;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_01a1df19;
    }
  }
  else {
    *(undefined1 *)(this + 1) = 0;
  }
  FUN_00d50b00();
LAB_01a1df19:
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01a1e050 (534 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *this;
  bool bVar4;
  undefined1 local_e0 [112];
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar3 = DAT_028b29f0;
  if ((DAT_028b29f0 == (longlong *)0x0) || (DAT_028b29f9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b29f0 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b29f0 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b29f0 != (longlong *)0x0;
        DAT_028b29f0 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b29f8 == '\0') {
        DAT_028b29f8 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(DAT_023b8bc0);
      local_30 = 0;
      FUN_01cfc6a0(DAT_0241c6e0);
      local_2c = 0x3dcccccd;
      FUN_01cfc6a0(DAT_0241c6e0);
      local_28 = 0x3f666666;
      FUN_01cfc6a0(DAT_023b8bc0);
      local_24 = 0x3f800000;
      FUN_01ae52c0(&local_50,&local_30,&local_2c,&local_40);
      FUN_01f7ba60(0,local_e0);
      FUN_019fe220();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b29f9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b29f9 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = DAT_028b29f0;
    *(undefined1 *)(this + 1) = 0;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_01a1e249;
    }
  }
  else {
    *(undefined1 *)(this + 1) = 0;
  }
  FUN_00d50b00();
LAB_01a1e249:
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01a1e380 (534 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 *this;
  bool bVar4;
  undefined1 local_e0 [112];
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  plVar3 = DAT_028b2a00;
  if ((DAT_028b2a00 == (longlong *)0x0) || (DAT_028b2a09 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b2a00 == (longlong *)0x0) {
      plVar3 = (longlong *)FUN_00e8fc40();
      FUN_001b9f00();
      (**(code **)(*plVar3 + 0x18))();
      if (DAT_028b2a00 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar4 = DAT_028b2a00 != (longlong *)0x0;
        DAT_028b2a00 = plVar3;
        if (bVar4) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b2a08 == '\0') {
        DAT_028b2a08 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      FUN_01cfc6a0(DAT_0241c6cc);
      local_30 = 0;
      FUN_01cfc6a0(DAT_02390120);
      local_2c = 0x3dcccccd;
      FUN_01cfc6a0(DAT_02390120);
      local_28 = 0x3f666666;
      FUN_01cfc6a0(DAT_023b3888);
      local_24 = 0x3f800000;
      FUN_01ae52c0(&local_50,&local_30,&local_2c,&local_40);
      FUN_01f7ba60(0,local_e0);
      FUN_019fe220();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      DAT_028b2a09 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2a09 = '\x01';
      FUN_00e8cb70();
    }
    plVar3 = DAT_028b2a00;
    *(undefined1 *)(this + 1) = 0;
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_01a1e579;
    }
  }
  else {
    *(undefined1 *)(this + 1) = 0;
  }
  FUN_00d50b00();
LAB_01a1e579:
  *this = plVar3;
  *(undefined1 *)(this + 1) = 1;
  return;
}




// ==================================================
// @01a33500 (522 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *this;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  FUN_00d50100();
  if ((DAT_028b2a90 == 0) || (DAT_028b2a99 == '\0')) {
    FUN_00e8cb50();
    lVar3 = DAT_027ebc00;
    if (DAT_028b2a90 == 0) {
      if (DAT_027ebc00 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d20ca0(_DAT_023b1900);
      lVar2 = DAT_028b2a90;
      if (DAT_028b2a90 != local_48) {
        if (local_40 == '\0') {
          if (local_48 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_48;
          }
        }
        else {
          local_40 = '\0';
          lVar2 = local_48;
        }
        bVar1 = DAT_028b2a90 != 0;
        DAT_028b2a90 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_48;
        }
      }
      if ((lVar2 != 0) && (DAT_028b2a98 == '\0')) {
        DAT_028b2a98 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_48;
      }
      if ((local_40 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      FUN_01d21160();
      DAT_028b2a99 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b2a99 = '\x01';
      FUN_00e8cb70();
    }
    if (DAT_028b2a90 == 0) {
      lVar3 = 0;
      goto LAB_01a336ca;
    }
  }
  lVar3 = DAT_028b2a90;
  FUN_00d50b00();
LAB_01a336ca:
  (**(code **)(*this + 0x390))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01b17610 (521 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  void *pvVar3;
  longlong lVar4;
  pthread_key_t in_ECX;
  longlong *this;
  longlong *plVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  longlong *local_38;
  char local_30;
  
  FUN_01ad3cb0();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_38 == (longlong *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  plVar5 = local_38;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    plVar5 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x3a0))();
  uVar7 = (**(code **)(*this + 0x918))();
  uVar8 = FUN_01a1da00();
  pvVar3 = _pthread_getspecific(in_ECX);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    local_38 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
  }
  (**(code **)(*local_38 + 0x3a0))();
  uVar9 = (**(code **)(*this + 0x918))();
  uVar10 = FUN_01a1da00();
  local_58 = (float)uVar8;
  uStack_54 = (uint)((ulonglong)uVar8 >> 0x20);
  uStack_50 = (uint)extraout_XMM0_Qb_00;
  uStack_4c = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
  auVar16._0_4_ = (uint)(local_58 * DAT_02390438) & _DAT_023945e0;
  auVar16._4_4_ = uStack_54 & _UNK_023945e4;
  auVar16._8_4_ = uStack_50 & _UNK_023945e8;
  auVar16._12_4_ = uStack_4c & _UNK_023945ec;
  auVar19._4_12_ = SUB1612(auVar16 | ZEXT416(DAT_02394dc8),4);
  auVar19._0_4_ = SUB164(auVar16 | ZEXT416(DAT_02394dc8),0) + local_58 * DAT_02390438;
  auVar15._0_12_ = ZEXT812(0);
  auVar15._12_4_ = 0;
  auVar16 = roundss(auVar15,auVar19,0xb);
  fVar6 = DAT_02392fd8;
  if (auVar16._0_4_ <= DAT_02392fd8) {
    fVar6 = auVar16._0_4_;
  }
  auVar16 = ZEXT416((uint)((float)((uint)(fVar6 * DAT_0239011c) & _DAT_023945e0 | DAT_02394dc8) +
                          fVar6 * DAT_0239011c));
  auVar16 = roundss(auVar16,auVar16,0xb);
  local_68 = (float)uVar7;
  uStack_64 = (uint)((ulonglong)uVar7 >> 0x20);
  uStack_60 = (uint)extraout_XMM0_Qb;
  uStack_5c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  local_68 = local_68 - auVar16._0_4_;
  auVar17._0_4_ = (uint)local_68 & _DAT_023945e0;
  auVar17._4_4_ = uStack_64 & _UNK_023945e4;
  auVar17._8_4_ = uStack_60 & _UNK_023945e8;
  auVar17._12_4_ = uStack_5c & _UNK_023945ec;
  auVar18._4_12_ = SUB1612(auVar17 | ZEXT416(DAT_02394dc8),4);
  auVar18._0_4_ = SUB164(auVar17 | ZEXT416(DAT_02394dc8),0) + local_68;
  auVar19 = roundss(auVar18,auVar18,0xb);
  fVar6 = (float)uVar10 * DAT_02390438;
  auVar20._0_4_ = (uint)fVar6 & _DAT_023945e0;
  auVar20._4_4_ = (uint)((ulonglong)uVar10 >> 0x20) & _UNK_023945e4;
  auVar20._8_4_ = (uint)extraout_XMM0_Qb_02 & _UNK_023945e8;
  auVar20._12_4_ = (uint)((ulonglong)extraout_XMM0_Qb_02 >> 0x20) & _UNK_023945ec;
  auVar21._4_12_ = SUB1612(auVar20 | ZEXT416(DAT_02394dc8),4);
  auVar21._0_4_ = SUB164(auVar20 | ZEXT416(DAT_02394dc8),0) + fVar6;
  auVar11._0_12_ = ZEXT812(0);
  auVar11._12_4_ = 0;
  auVar16 = roundss(auVar11,auVar21,0xb);
  fVar6 = DAT_02392fd8;
  if (auVar16._0_4_ <= DAT_02392fd8) {
    fVar6 = auVar16._0_4_;
  }
  auVar16 = ZEXT416((uint)((float)((uint)(fVar6 * DAT_0239011c) & _DAT_023945e0 | DAT_02394dc8) +
                          fVar6 * DAT_0239011c));
  auVar16 = roundss(auVar16,auVar16,0xb);
  fVar6 = (float)uVar9 + auVar16._0_4_;
  auVar13._0_4_ = _DAT_023945e0 & (uint)fVar6;
  auVar13._4_4_ = _UNK_023945e4 & (uint)((ulonglong)uVar9 >> 0x20);
  auVar13._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb_01;
  auVar13._12_4_ = _UNK_023945ec & (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
  auVar14._4_12_ = SUB1612(auVar13 | ZEXT416(DAT_02394dc8),4);
  auVar14._0_4_ = SUB164(auVar13 | ZEXT416(DAT_02394dc8),0) + fVar6;
  auVar16 = roundss(ZEXT816(0),auVar14,0xb);
  auVar12._4_12_ = auVar16._4_12_;
  auVar12._0_4_ = auVar16._0_4_ - auVar19._0_4_;
  auVar1._8_8_ = in_XMM1_Qb;
  auVar1._0_8_ = param_2;
  auVar15 = insertps(auVar1,auVar12,0x10);
  auVar2._8_8_ = in_XMM0_Qb;
  auVar2._0_8_ = param_1;
  auVar16 = insertps(auVar2,auVar19,0x10);
  (**(code **)(*this + 0x618))(auVar16._0_8_,auVar15._0_8_);
  FUN_00d50b20();
  return;
}




// ==================================================
// @01a20c30 (520 bytes) — calculation
// Known properties of MUScalePitchSystem:
// _tuningIsSuggestedRelevant, _modeIsSuggestedRelevant, _tuningPitchAnchorIsSuggestedRelevant, _modeFundamentalOffsetIsSuggestedRelevant, _stretchingIsSuggestedRelevant, _startPulse, _startTime, _width, _scope

{
  longlong lVar1;
  longlong lVar2;
  longlong *arg1;
  longlong *this;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong local_30;
  char local_28;
  
  fVar3 = *(float *)(arg1 + 0x2c);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    FUN_00d50b00();
    uVar5 = (**(code **)(*arg1 + 0x918))();
    fVar3 = (float)(**(code **)(*arg1 + 0x918))();
    local_68 = (float)uVar5;
    uStack_64 = (uint)((ulonglong)uVar5 >> 0x20);
    uStack_60 = (uint)extraout_XMM0_Qb;
    uStack_5c = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
    auVar7._0_4_ = _DAT_023945e0 & (uint)(local_68 - fVar3);
    auVar7._4_4_ = _UNK_023945e4 & uStack_64;
    auVar7._8_4_ = _UNK_023945e8 & uStack_60;
    auVar7._12_4_ = _UNK_023945ec & uStack_5c;
    auVar6._4_12_ = SUB1612(auVar7 | _DAT_023945f0,4);
    auVar6._0_4_ = SUB164(auVar7 | _DAT_023945f0,0) + (local_68 - fVar3);
    auVar7 = roundss(auVar6,auVar6,0xb);
    fVar4 = auVar7._0_4_ + DAT_023b1608;
    fVar3 = DAT_023908ec;
    if (fVar4 <= DAT_023908ec) {
      fVar3 = fVar4;
    }
    *(float *)(arg1 + 0x2c) = fVar3;
    FUN_00d50b20();
    fVar3 = *(float *)(arg1 + 0x2c);
  }
  if (fVar3 < DAT_02390d30) {
    *(undefined1 *)(this + 1) = 0;
    *this = 0;
    return;
  }
  lVar2 = arg1[0x2b];
  if (lVar2 != 0) goto LAB_01a20e09;
  (**(code **)(*arg1 + 0x640))();
  (**(code **)(*local_40 + 0x370))();
  auVar7 = ZEXT416(_DAT_023945e0 & (uint)*(float *)(arg1 + 0x2c)) | _DAT_023945f0;
  auVar8._4_12_ = auVar7._4_12_;
  auVar8._0_4_ = auVar7._0_4_ + *(float *)(arg1 + 0x2c);
  auVar7 = roundss(ZEXT816(0),auVar8,0xb);
  FUN_01d44d80(auVar7._0_8_);
  lVar2 = arg1[0x2b];
  lVar1 = lVar2;
  if (lVar2 != local_30) {
    lVar1 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar1 = 0;
        goto LAB_01a20d7f;
      }
      FUN_00d50b00();
      lVar2 = arg1[0x2b];
      arg1[0x2b] = local_30;
    }
    else {
      local_28 = '\0';
LAB_01a20d7f:
      arg1[0x2b] = lVar1;
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar1 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = arg1[0x2b];
LAB_01a20e09:
  *(undefined1 *)(this + 1) = 0;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *this = lVar2;
  *(undefined1 *)(this + 1) = 1;
  return;
}



