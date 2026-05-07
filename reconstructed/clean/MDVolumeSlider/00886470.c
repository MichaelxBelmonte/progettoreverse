// Function: FUN_00886470
// Address: 00886470
// Size: 2899 bytes
// Class: MDVolumeSlider
// === MDVolumeSlider properties ===
//                   _meterInfo
//                   _lastValue
//                   _knobBorderStyle
//                   _image0
//                   _image1
//                   _image2
//                   _image3
//                   _image4
//                   _isDimSlider
//                   _knobOnlyHitDetection


void FUN_00886470(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  code *pcVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  void*puVar7;
  int64_t lVar8;
  void*puVar9;
  void*puVar10;
  void*puVar11;
  int64_t **pplVar12;
  int iVar13;
  int64_t *this_ptr;
  int64_t *plVar14;
  float fVar15;
  float fVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  float fVar25;
  float extraout_XMM0_Db_03;
  float extraout_XMM0_Db_04;
  float extraout_XMM0_Db_05;
  float extraout_XMM0_Db_06;
  float extraout_XMM0_Db_07;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar21 [16];
  uint64_t uVar20;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint64_t extraout_XMM0_Qb_04;
  float fVar26;
  uint uVar27;
  float fVar29;
  uint64_t in_XMM1_Qb;
  uint64_t uVar30;
  uint8_t auVar28 [16];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  uint8_t local_d8 [8];
  uint64_t uStack_d0;
  uint8_t local_98 [16];
  uint8_t local_88 [8];
  uint64_t uStack_80;
  float local_74;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  
  uVar20 = param_2;
  uVar30 = in_XMM1_Qb;
  cVar5 = (**(code **)(*this_ptr + 0x3a8))();
  uVar17 = (**(code **)(*(int64_t *)this_ptr[2] + 0xa08))();
  uVar18 = (**(code **)(*(int64_t *)this_ptr[2] + 0x938))();
  (**(code **)(*(int64_t *)this_ptr[2] + 0x4a0))();
  plVar14 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar3 = g_02572370;
  (*g_02572370)();
  fStack_114 = (float)((uint64_t)uVar18 >> 0x20);
  local_38 = plVar14;
  local_f8 = (float)uVar17;
  if (plVar14 == (int64_t *)0x0) {
    bVar2 = false;
    local_74 = 0.0;
    if ((g_0239424c == 0.0) && (!NAN(g_0239424c))) goto LAB_00886776;
  }
  else {
    fVar26 = g_02390d00 + fStack_114;
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar14;
    local_48 = 0xffffffff;
    local_40 = 0;
    bVar2 = false;
    local_74 = 0.0;
    local_48._4_4_ = 0;
    while( true ) {
      auVar28 = ZEXT416((uint)fVar26);
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar13 = -local_48._4_4_;
        }
        else {
          iVar13 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar13);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar13 = 0;
        }
        local_48 = CONCAT44(iVar13,(int)local_48);
      }
      lVar8 = (int64_t)(int)local_48;
      iVar13 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar13);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar13) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      uVar19 = (**(code **)(*local_60 + 0x4d8))();
      (**(code **)(*local_60 + 0x528))();
      (**(code **)(*local_60 + 0x530))();
      local_88._4_4_ = auVar28._4_4_;
      if (((extraout_XMM0_Db != extraout_XMM0_Db_00) ||
          (cVar6 = (**(code **)(*local_60 + 0x978))(), cVar6 != '\0')) &&
         ((**(code **)(*local_60 + 0x528))(), (float)local_88._4_4_ < extraout_XMM0_Db_01)) {
        local_70 = local_60;
        local_68 = '\0';
        FUN_00d21140();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_60 + 0x528))();
        local_74 = local_74 + (extraout_XMM0_Db_02 - (float)local_88._4_4_);
      }
      local_d8._0_4_ = (uint32_t)uVar19;
      local_d8._4_4_ = (uint32_t)((uint64_t)uVar19 >> 0x20);
      if ((float)local_d8._0_4_ < 0.0) {
        bVar2 = true;
      }
      if ((float)local_d8._4_4_ <= fVar26) {
        bVar2 = true;
      }
      fVar26 = fVar26 + (float)local_88._4_4_ + local_f8;
    }
    FUN_00318710();
    if ((local_74 == g_0239424c) && (!NAN(local_74) && !NAN(g_0239424c))) {
LAB_00886776:
      if ((!bVar2) && (plVar14 = local_38, cVar5 == '\x01')) goto LAB_00886fd0;
    }
  }
  local_108 = (float)param_2;
  fStack_104 = (float)((uint64_t)param_2 >> 0x20);
  fStack_100 = (float)in_XMM1_Qb;
  fStack_fc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  local_118 = (float)uVar18;
  fStack_110 = (float)extraout_XMM0_Qb_00;
  fStack_10c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  local_138 = (float)uVar20;
  fStack_134 = (float)((uint64_t)uVar20 >> 0x20);
  fStack_130 = (float)uVar30;
  fStack_12c = (float)((uint64_t)uVar30 >> 0x20);
  fVar15 = (local_108 - local_118) - local_138;
  fVar25 = (fStack_104 - fStack_114) - fStack_134;
  uStack_f4 = (uint)((uint64_t)uVar17 >> 0x20);
  uStack_f0 = (uint)extraout_XMM0_Qb;
  uStack_ec = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
  uVar27 = g_023945e0 ^ (uint)local_f8;
  fVar29 = (float)(_UNK_023945e4 ^ uStack_f4);
  uStack_f0 = _UNK_023945e8 ^ uStack_f0;
  uStack_ec = _UNK_023945ec ^ uStack_ec;
  fVar26 = fVar29;
LAB_008867d0:
  FUN_006c6060();
  cVar5 = (**(code **)(*(int64_t *)this_ptr[2] + 0x9f8))();
  local_d8._4_4_ = fVar25;
  local_d8._0_4_ = fVar15;
  uStack_d0._4_4_ = (fStack_fc - fStack_10c) - fStack_12c;
  uStack_d0._0_4_ = (fStack_100 - fStack_110) - fStack_130;
  if (cVar5 == '\0') {
    fVar16 = *(float *)(this_ptr + 4);
    if (fVar15 <= *(float *)(this_ptr + 4)) {
      fVar16 = fVar15;
    }
    _local_d8 = ZEXT416((uint)fVar16);
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  (*pcVar3)();
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_02572358;
  (*pcVar3)();
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar11 = &g_02572358;
  (*pcVar3)();
  local_88._4_4_ = fVar29;
  local_88._0_4_ = uVar27;
  uStack_80._4_4_ = uStack_ec;
  uStack_80._0_4_ = uStack_f0;
  if (local_38 != (int64_t *)0x0) {
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = local_38;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar13 = -local_48._4_4_;
        }
        else {
          iVar13 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar13);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar13 = 0;
        }
        local_48 = CONCAT44(iVar13,(int)local_48);
      }
      lVar8 = (int64_t)(int)local_48;
      iVar13 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar13);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar13) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      (**(code **)(*local_60 + 0x4d8))();
      cVar5 = (**(code **)(*local_60 + 0x978))();
      if (cVar5 != '\0') {
        local_70 = local_60;
        local_68 = '\0';
        FUN_00d21140();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*local_60 + 0x528))();
      (**(code **)(*local_60 + 0x530))();
      if (extraout_XMM0_Db_03 != extraout_XMM0_Db_04) {
        (**(code **)(*local_60 + 0x528))();
        if (extraout_XMM0_Db_05 < fVar26) {
          local_70 = local_60;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*local_60 + 0x530))();
        if (fVar26 < extraout_XMM0_Db_06) {
          local_70 = local_60;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      local_88._0_4_ = (float)local_88._0_4_ + fVar26 + local_f8;
    }
    FUN_00318710();
  }
  FUN_006c6060();
  auVar28._0_4_ = local_88._0_4_ & g_023945e0;
  auVar28._4_4_ = local_88._4_4_ & _UNK_023945e4;
  auVar28._8_4_ = (uint)uStack_80 & _UNK_023945e8;
  auVar28._12_4_ = uStack_80._4_4_ & _UNK_023945ec;
  auVar21._4_12_ = SUB1612(auVar28 | g_023945f0,4);
  auVar21._0_4_ = SUB164(auVar28 | g_023945f0,0) + (float)local_88._0_4_;
  auVar28 = roundss(ZEXT816(0),auVar21,0xb);
  fVar26 = fVar25 - auVar28._0_4_;
  if ((local_74 != g_0239424c) || (fVar16 = fVar26, NAN(local_74) || NAN(g_0239424c))) {
    fVar16 = (float)FUN_00885a30();
    fVar16 = fVar26 - (local_74 - fVar16);
  }
  if (fVar16 <= 0.0) {
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_00885f50();
      if ((fVar16 != g_0239424c) || (NAN(fVar16) || NAN(g_0239424c))) {
        fVar16 = (float)FUN_00885520();
      }
    }
  }
  else {
    fVar16 = (float)FUN_00885a30();
    if ((fVar16 != g_0239424c) || (NAN(fVar16) || NAN(g_0239424c))) {
      fVar16 = (float)FUN_00885520();
    }
  }
  local_88._0_4_ = auVar28._0_4_ + (fVar26 - fVar16);
  local_88._4_4_ = 0;
  uStack_80._0_4_ = 0;
  uStack_80._4_4_ = 0;
  uVar20 = FUN_0065f040();
  local_98._8_8_ = extraout_XMM0_Qb_01;
  local_98._0_8_ = uVar20;
  (**(code **)(*(int64_t *)this_ptr[2] + 0x4a0))();
  plVar14 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00886c70;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_00886c70:
    local_98._0_4_ = (float)uVar20 + fStack_114;
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar14;
    local_48 = 0xffffffff;
    local_40 = 0;
    while( true ) {
      lVar8 = (int64_t)(int)local_48;
      iVar13 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar13);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar13) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      FUN_01e3f820();
      FUN_006c6060();
      cVar5 = (**(code **)(*local_60 + 0x980))();
      if ((cVar5 == '\0') && (cVar5 = (**(code **)(*local_60 + 0x950))(), cVar5 == '\0')) {
        if ((float)local_88._0_4_ < (float)local_d8._0_4_) {
          auVar24._0_8_ = (**(code **)(*local_60 + 0x528))();
          auVar24._8_8_ = extraout_XMM0_Qb_03;
          if ((float)local_d8._0_4_ < (float)auVar24._0_8_) {
            _local_88 = blendps(_local_88,_local_d8,1);
          }
          else {
            _local_88 = blendps(_local_88,auVar24,0xd);
          }
        }
      }
      else {
        _local_88 = blendps(_local_88,_local_d8,1);
      }
      auVar22._0_8_ = FUN_0065f040();
      auVar22._8_8_ = extraout_XMM0_Qb_02;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = (float)auVar22._0_8_ + local_118;
      auVar28 = insertps(auVar23,local_98._0_4_,0x10);
      (**(code **)(*local_60 + 0x4d0))(auVar28._0_8_);
      FUN_006c6060();
      local_88._0_4_ = (float)local_98._0_4_ + (float)local_88._4_4_ + local_f8;
      local_98._0_4_ = local_88._0_4_;
      local_88._4_4_ = local_98._4_4_;
      uStack_80._0_4_ = local_98._8_4_;
      uStack_80._4_4_ = local_98._12_4_;
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar13 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar13 = 0;
        }
        local_48 = CONCAT44(iVar13,(int)local_48);
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  FUN_006c6060();
  local_e8 = (float)param_1;
  fStack_e4 = (float)((uint64_t)param_1 >> 0x20);
  fStack_e0 = (float)in_XMM0_Qb;
  fStack_dc = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  fVar26 = fStack_e4;
  cVar5 = (**(code **)(*(int64_t *)this_ptr[2] + 0xa18))();
  if (cVar5 != '\0') {
    if (puVar11 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
    goto LAB_008867d0;
  }
  auVar28 = ZEXT416((uint)fVar16);
  if ((fVar16 != 0.0) || (NAN(fVar16))) {
    FUN_00d23340();
    plVar4 = local_60;
    pplVar12 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar12 = &local_70;
    }
    local_70 = (int64_t *)CONCAT71(local_70._1_7_,local_58[0]);
    *(void*)pplVar12 = 0;
    if ((local_58[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar14 = local_38;
    if ((char)local_70 == '\0') {
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00886f1b;
      }
    }
    else if (plVar4 != (int64_t *)0x0) {
LAB_00886f1b:
      (**(code **)(*plVar4 + 0x4d8))();
      (**(code **)(*plVar4 + 0x4d8))();
      fStack_134 = (fStack_e4 + fStack_104) - fStack_134;
      if (fStack_134 < extraout_XMM0_Db_07 + auVar28._4_4_) {
        uVar20 = (**(code **)(*plVar4 + 0x4d8))();
        auVar1._4_4_ = fStack_134 - (float)((uint64_t)uVar20 >> 0x20);
        auVar1._0_4_ = ((local_e8 + local_108) - local_138) - (float)uVar20;
        auVar1._8_4_ = ((fStack_e0 + fStack_100) - fStack_130) - (float)extraout_XMM0_Qb_04;
        auVar1._12_4_ =
             ((fStack_dc + fStack_fc) - fStack_12c) -
             (float)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
        auVar28 = blendps(auVar28,auVar1,2);
        (**(code **)(*plVar4 + 0x4d0))(uVar20,auVar28._0_8_);
      }
      FUN_00d50b20();
    }
    if (puVar11 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (puVar11 != (void*)0x0) {
      FUN_00d50b20();
    }
    plVar14 = local_38;
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_006c5b60();
LAB_00886fd0:
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar14 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

