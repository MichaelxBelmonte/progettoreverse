// Function: FUN_00317300
// Address: 00317300
// Size: 3038 bytes
// Class: Unknown

void FUN_00317300(uint64_t param_1,uint64_t param_2)

{
  bool bVar1;
  code *pcVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  void*puVar7;
  int64_t lVar8;
  void*puVar9;
  void*puVar10;
  int64_t **pplVar11;
  int iVar12;
  int64_t *this_ptr;
  float fVar13;
  float fVar15;
  float fVar16;
  float fVar14;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  uint8_t auVar21 [16];
  float extraout_XMM0_Db;
  uint8_t auVar22 [16];
  uint64_t uVar20;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint64_t extraout_XMM0_Qb_03;
  float fVar28;
  uint64_t in_XMM1_Qb;
  uint64_t uVar29;
  float fVar30;
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar31 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_c8;
  float fStack_c4;
  uint8_t local_a8 [16];
  uint8_t local_98 [8];
  uint32_t uStack_90;
  uint32_t uStack_8c;
  int64_t *local_80;
  char local_78;
  void*local_70;
  float local_64;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  int64_t *local_38;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  
  uVar20 = param_2;
  uVar29 = in_XMM1_Qb;
  cVar5 = (**(code **)(*this_ptr + 0x3a8))();
  uVar17 = (**(code **)(*(int64_t *)this_ptr[2] + 0xa08))();
  uVar18 = (**(code **)(*(int64_t *)this_ptr[2] + 0x938))();
  uVar19 = uVar20;
  (**(code **)(*(int64_t *)this_ptr[2] + 0x4a0))();
  plVar3 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  local_38 = plVar3;
  local_118 = (float)uVar18;
  local_108 = (float)uVar17;
  local_70 = puVar7;
  if (plVar3 == (int64_t *)0x0) {
    bVar1 = false;
    fVar15 = 0.0;
    if ((g_0239424c == 0.0) && (!NAN(g_0239424c))) goto LAB_003175d4;
  }
  else {
    local_a8._0_4_ = g_02390d00 + local_118;
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar3;
    local_48 = 0xffffffff;
    local_40 = 0;
    bVar1 = false;
    local_64 = 0.0;
    local_48._4_4_ = 0;
    while( true ) {
      fVar15 = (float)uVar19;
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar12 = -local_48._4_4_;
        }
        else {
          iVar12 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar12);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar12 = 0;
        }
        local_48 = CONCAT44(iVar12,(int)local_48);
      }
      lVar8 = (int64_t)(int)local_48;
      iVar12 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar12) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      uVar19 = (**(code **)(*local_60 + 0x4d8))();
      fVar13 = (float)(**(code **)(*local_60 + 0x528))();
      fVar14 = (float)(**(code **)(*local_60 + 0x530))();
      if ((((fVar13 != fVar14) || (NAN(fVar13) || NAN(fVar14))) ||
          (cVar6 = (**(code **)(*local_60 + 0x980))(), cVar6 != '\0')) &&
         (fVar13 = (float)(**(code **)(*local_60 + 0x528))(), fVar15 < fVar13)) {
        local_80 = local_60;
        local_78 = '\0';
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        fVar13 = (float)(**(code **)(*local_60 + 0x528))();
        local_64 = local_64 + (fVar13 - fVar15);
      }
      local_c8 = (float)uVar19;
      fStack_c4 = (float)((uint64_t)uVar19 >> 0x20);
      uVar19 = 0;
      if (fStack_c4 < 0.0) {
        bVar1 = true;
      }
      if (local_c8 <= (float)local_a8._0_4_) {
        bVar1 = true;
      }
      local_a8._0_4_ = (float)local_a8._0_4_ + fVar15 + local_108;
    }
    FUN_00318710();
    fVar15 = local_64;
    if ((local_64 == g_0239424c) && (!NAN(local_64) && !NAN(g_0239424c))) {
LAB_003175d4:
      if ((!bVar1) && (cVar5 == '\x01')) goto LAB_00317ee2;
    }
  }
  local_128 = (float)param_2;
  fStack_124 = (float)((uint64_t)param_2 >> 0x20);
  fStack_120 = (float)in_XMM1_Qb;
  fStack_11c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  fStack_114 = (float)((uint64_t)uVar18 >> 0x20);
  local_148 = (float)uVar20;
  fStack_144 = (float)((uint64_t)uVar20 >> 0x20);
  fStack_140 = (float)uVar29;
  fStack_13c = (float)((uint64_t)uVar29 >> 0x20);
  fVar28 = (fStack_124 - fStack_114) - fStack_144;
  fVar30 = (fStack_11c - extraout_XMM0_Dd) - fStack_13c;
  uStack_104 = (uint)((uint64_t)uVar17 >> 0x20);
  uStack_100 = (uint)extraout_XMM0_Qb;
  uStack_fc = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
  fVar14 = (float)(g_023945e0 ^ (uint)local_108);
  uStack_104 = _UNK_023945e4 ^ uStack_104;
  uStack_100 = _UNK_023945e8 ^ uStack_100;
  uStack_fc = _UNK_023945ec ^ uStack_fc;
  fVar13 = fVar14;
  local_64 = fVar15;
LAB_00317640:
  FUN_006c6060();
  cVar5 = (**(code **)(*(int64_t *)this_ptr[2] + 0x9f0))();
  auVar21._4_4_ = fVar28;
  auVar21._0_4_ = fVar28;
  auVar21._8_4_ = fVar30;
  auVar21._12_4_ = fVar30;
  if ((cVar5 == '\0') &&
     (auVar21 = ZEXT416((uint)*(float *)((int64_t)this_ptr + 0x24)),
     fVar28 <= *(float *)((int64_t)this_ptr + 0x24))) {
    auVar21 = ZEXT416((uint)fVar28);
  }
  (**(code **)(*(int64_t *)this_ptr[2] + 0x4a0))();
  plVar3 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar2)();
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  (*pcVar2)();
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_02572358;
  (*pcVar2)();
  local_a8._4_4_ = uStack_104;
  local_a8._0_4_ = fVar14;
  local_a8._12_4_ = uStack_fc;
  local_a8._8_4_ = uStack_100;
  if (plVar3 != (int64_t *)0x0) {
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar3;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar12 = -local_48._4_4_;
        }
        else {
          iVar12 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar12);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar12 = 0;
        }
        local_48 = CONCAT44(iVar12,(int)local_48);
      }
      lVar8 = (int64_t)(int)local_48;
      iVar12 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar12) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      (**(code **)(*local_60 + 0x4d8))();
      cVar5 = (**(code **)(*local_60 + 0x980))();
      if (cVar5 != '\0') {
        local_80 = local_60;
        local_78 = '\0';
        FUN_00d21140();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      fVar15 = (float)(**(code **)(*local_60 + 0x528))();
      (**(code **)(*local_60 + 0x530))();
      if ((fVar15 != extraout_XMM0_Db) || (NAN(fVar15) || NAN(extraout_XMM0_Db))) {
        fVar15 = (float)(**(code **)(*local_60 + 0x528))();
        if (fVar15 < fVar13) {
          local_80 = local_60;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        fVar15 = (float)(**(code **)(*local_60 + 0x530))();
        if (fVar13 < fVar15) {
          local_80 = local_60;
          local_78 = '\0';
          FUN_00d21140();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      fVar13 = fVar13 + local_108;
      local_a8._0_4_ = (float)local_a8._0_4_ + fVar13;
    }
    FUN_00318710();
  }
  FUN_006c6060();
  auVar26._0_4_ = local_a8._0_4_ & g_023945e0;
  auVar26._4_4_ = local_a8._4_4_ & _UNK_023945e4;
  auVar26._8_4_ = local_a8._8_4_ & _UNK_023945e8;
  auVar26._12_4_ = local_a8._12_4_ & _UNK_023945ec;
  auVar22._4_12_ = SUB1612(auVar26 | g_023945f0,4);
  auVar22._0_4_ = SUB164(auVar26 | g_023945f0,0) + (float)local_a8._0_4_;
  auVar26 = roundss(ZEXT816(0),auVar22,0xb);
  fVar15 = ((local_128 - local_118) - local_148) - auVar26._0_4_;
  if ((local_64 != g_0239424c) || (fVar16 = fVar15, NAN(local_64) || NAN(g_0239424c))) {
    fVar13 = (float)FUN_003168c0();
    fVar16 = fVar15 - (local_64 - fVar13);
  }
  if (fVar16 <= 0.0) {
    if (fVar16 < 0.0) {
      fVar16 = (float)FUN_00316de0();
      if ((fVar16 != g_0239424c) || (NAN(fVar16) || NAN(g_0239424c))) {
        fVar16 = (float)FUN_003162c0();
      }
    }
  }
  else {
    fVar16 = (float)FUN_003168c0();
    if ((fVar16 != g_0239424c) || (NAN(fVar16) || NAN(g_0239424c))) {
      fVar16 = (float)FUN_003162c0();
    }
  }
  local_98._0_4_ = auVar26._0_4_ + (fVar15 - fVar16);
  local_98._4_4_ = 0.0;
  uStack_90 = 0;
  uStack_8c = 0;
  uVar20 = FUN_0065f040();
  local_a8._8_8_ = extraout_XMM0_Qb_00;
  local_a8._0_8_ = uVar20;
  (**(code **)(*(int64_t *)this_ptr[2] + 0x4a0))();
  plVar4 = local_60;
  if (local_58[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00317b20;
    }
  }
  else if (local_60 != (int64_t *)0x0) {
LAB_00317b20:
    local_a8._0_4_ = (float)uVar20 + local_118;
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_50 = plVar4;
    local_48 = 0xffffffff;
    local_40 = 0;
    while( true ) {
      lVar8 = (int64_t)(int)local_48;
      iVar12 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar12);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar12) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar8 * 8);
      FUN_01e3f820();
      FUN_006c6060();
      cVar5 = (**(code **)(*local_60 + 0x978))();
      local_c8 = auVar21._0_4_;
      if ((cVar5 == '\0') && (cVar5 = (**(code **)(*local_60 + 0x960))(), cVar5 == '\0')) {
        if ((float)local_98._4_4_ < local_c8) {
          auVar25._0_8_ = (**(code **)(*local_60 + 0x528))();
          auVar25._8_8_ = extraout_XMM0_Qb_02;
          if (local_c8 < (float)((uint64_t)auVar25._0_8_ >> 0x20)) {
            _local_98 = insertps(_local_98,auVar21,0x10);
          }
          else {
            _local_98 = blendps(_local_98,auVar25,2);
          }
        }
      }
      else {
        _local_98 = insertps(_local_98,local_c8,0x10);
      }
      auVar23._0_8_ = FUN_0065f040();
      auVar23._8_8_ = extraout_XMM0_Qb_01;
      auVar24._4_12_ = auVar23._4_12_;
      auVar24._0_4_ = (float)auVar23._0_8_ + fStack_114;
      insertps(local_a8,auVar24,0x10);
      (**(code **)(*local_60 + 0x4d0))();
      FUN_006c6060();
      local_98._0_4_ = (float)local_98._0_4_ + local_108;
      local_a8._0_4_ = local_a8._0_4_ + (float)local_98._0_4_;
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar12 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar12 = 0;
        }
        local_48 = CONCAT44(iVar12,(int)local_48);
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  FUN_006c6060();
  local_f8 = (float)param_1;
  fStack_f4 = (float)((uint64_t)param_1 >> 0x20);
  fStack_f0 = (float)in_XMM0_Qb;
  fStack_ec = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  fVar13 = local_f8;
  cVar5 = (**(code **)(*(int64_t *)this_ptr[2] + 0xa18))();
  if (cVar5 != '\0') {
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_00317640;
  }
  auVar21 = ZEXT416((uint)fVar16);
  if ((fVar16 != 0.0) || (NAN(fVar16))) {
    FUN_00d23340();
    plVar4 = local_60;
    pplVar11 = (int64_t **)local_58;
    if (local_58[0] == '\0') {
      pplVar11 = &local_80;
    }
    local_80 = (int64_t *)CONCAT71(local_80._1_7_,local_58[0]);
    *(void*)pplVar11 = 0;
    if ((local_58[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_80 == '\0') {
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_00317e26;
      }
    }
    else if (plVar4 != (int64_t *)0x0) {
LAB_00317e26:
      fVar15 = (float)(**(code **)(*plVar4 + 0x4d8))();
      (**(code **)(*plVar4 + 0x4d8))();
      auVar27._4_12_ = auVar21._4_12_;
      auVar27._0_4_ = auVar21._0_4_ + fVar15;
      local_148 = (local_f8 + local_128) - local_148;
      if (local_148 < auVar27._0_4_) {
        uVar20 = (**(code **)(*plVar4 + 0x4d8))();
        auVar31._0_4_ = local_148 - (float)uVar20;
        auVar31._4_4_ = ((fStack_f4 + fStack_124) - fStack_144) - (float)((uint64_t)uVar20 >> 0x20)
        ;
        auVar31._8_4_ = ((fStack_f0 + fStack_120) - fStack_140) - (float)extraout_XMM0_Qb_03;
        auVar31._12_4_ =
             ((fStack_ec + fStack_11c) - fStack_13c) -
             (float)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
        blendps(auVar31,auVar27,2);
        (**(code **)(*plVar4 + 0x4d0))();
      }
      FUN_00d50b20();
    }
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (puVar10 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (puVar7 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_006c5b60();
LAB_00317ee2:
  if (local_70 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

