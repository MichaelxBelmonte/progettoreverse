// Function: FUN_01af7060
// Address: 01af7060
// Size: 2466 bytes
// Class: GNEvent
// === GNEvent properties ===
//   GNEventType     _type
//   GNMouseWheelAxis _mouseWheelAxis
//   GNMouseButton   _mouseButton


void FUN_01af7060(void)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar6;
  float fVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  float fVar12;
  float fVar13;
  uint64_t extraout_XMM0_Qb;
  float fVar14;
  uint8_t auVar10 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint8_t auVar11 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  uint64_t extraout_XMM0_Qb_06;
  uint64_t extraout_XMM0_Qb_07;
  uint8_t auVar15 [8];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint8_t auVar27 [16];
  float fStack_f0;
  float fStack_ec;
  uint8_t local_e8 [16];
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  uint8_t local_98 [8];
  uint64_t uStack_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_58 [8];
  uint64_t uStack_50;
  uint8_t local_48 [8];
  uint64_t uStack_40;
  int64_t *local_38;
  char local_30;
  uint64_t extraout_XMM0_Qb_00;
  
  fVar7 = *(float *)((int64_t)this_ptr + 0x1fc);
  auVar18 = ZEXT816(0);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    *(float *)(this_ptr + 0x3f) = fVar7;
    *(void*)((int64_t)this_ptr + 0x1fc) = 0;
    local_48 = (uint8_t  [8])FUN_01adabe0();
    _local_58 = auVar18;
    FUN_01adad50();
    auVar18 = _local_58;
    uVar8 = FUN_00d052e0();
    if (*(int *)((int64_t)this_ptr + 0x284) != 0) {
      _local_58 = auVar18;
      local_48 = (uint8_t  [8])uVar8;
      uVar8 = FUN_01e3f820();
      fVar7 = (float)uVar8;
      fVar12 = (float)((uint64_t)uVar8 >> 0x20);
      fVar13 = (float)extraout_XMM0_Qb;
      fVar14 = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
      iVar3 = *(int *)((int64_t)this_ptr + 0x284);
      if (iVar3 == 3) {
        uStack_90._0_4_ = fVar13;
        local_98 = (uint8_t  [8])uVar8;
        uStack_90._4_4_ = fVar14;
        _local_68 = auVar18;
        FUN_01e3f820();
        auVar17 = blendps(auVar18,g_0241c700,0xd);
        iVar3 = *(int *)((int64_t)this_ptr + 0x284);
        auVar18 = _local_68;
        fVar7 = (float)local_98._0_4_;
        fVar12 = (float)local_98._4_4_;
        fVar13 = (float)uStack_90;
        fVar14 = uStack_90._4_4_;
      }
      else {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = g_023dccf4;
      }
      if ((iVar3 == 1) || (iVar3 == 0)) {
        auVar27._8_8_ = 0;
        auVar27._0_8_ = g_023dccf4;
        fVar23 = fVar7;
        fVar24 = fVar12;
        fVar25 = fVar13;
        fVar26 = fVar14;
      }
      else {
        local_98._4_4_ = fVar12;
        local_98._0_4_ = fVar7;
        uStack_90._0_4_ = fVar13;
        uStack_90._4_4_ = fVar14;
        auVar27 = _local_58;
        _local_68 = auVar18;
        FUN_01e3f820();
        if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar27 = blendps(auVar27,g_0241c710,0xd);
        auVar18 = _local_68;
        fVar23 = (float)local_98._0_4_;
        fVar24 = (float)local_98._4_4_;
        fVar25 = (float)uStack_90;
        fVar26 = uStack_90._4_4_;
      }
      auVar19._0_4_ = auVar17._0_4_ + fVar7 + auVar27._0_4_;
      auVar19._4_4_ = auVar17._4_4_ + fVar12 + auVar27._4_4_;
      auVar19._8_4_ = auVar17._8_4_ + fVar13 + auVar27._8_4_;
      auVar19._12_4_ = auVar17._12_4_ + fVar14 + auVar27._12_4_;
      auVar1._4_4_ = fVar24;
      auVar1._0_4_ = fVar23;
      auVar1._8_4_ = fVar25;
      auVar1._12_4_ = fVar26;
      blendps(auVar19,auVar1,2);
      blendps(auVar18,g_0241c720,0xd);
    }
    FUN_00d052e0();
                                            (**(code **)(*this_ptr + 0x618))();
    return;
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar4 + 0x18))();
  plVar6 = (int64_t *)this_ptr[0x3d];
  if (plVar6 == plVar4) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x3d] = (int64_t)plVar4;
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((int64_t)this_ptr + 0x284) == 0) {
    uStack_50 = 0;
    local_58 = (uint8_t  [8])g_023dccec;
    uStack_40 = 0;
    local_48 = (uint8_t  [8])g_023dccf4;
  }
  else {
    auVar10._0_8_ = FUN_01e3f820();
    auVar10._8_8_ = extraout_XMM0_Qb_00;
    iVar3 = *(int *)((int64_t)this_ptr + 0x284);
    _local_48 = auVar18;
    if (iVar3 == 3) {
      _local_68 = auVar10;
      FUN_01e3f820();
      auVar18 = blendps(auVar18,g_0241c700,0xd);
      iVar3 = *(int *)((int64_t)this_ptr + 0x284);
      local_58._0_4_ = auVar18._0_4_ + local_68._0_4_;
      local_58._4_4_ = auVar18._4_4_ + local_68._4_4_;
      uStack_50._0_4_ = auVar18._8_4_ + local_68._8_4_;
      uStack_50._4_4_ = auVar18._12_4_ + local_68._12_4_;
      auVar10 = _local_68;
      auVar18 = _local_48;
      if (iVar3 == 1) goto LAB_01af72fb;
LAB_01af72f7:
      _local_48 = auVar18;
      if (iVar3 == 0) goto LAB_01af72fb;
      _local_68 = auVar10;
      FUN_01e3f820();
      if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
        _local_98 = auVar18;
        FUN_01e3f820();
        auVar18 = _local_98;
      }
      auVar18 = blendps(auVar18,g_0241c710,0xd);
      auVar10 = _local_68;
    }
    else {
      local_58._0_4_ = (float)g_023dccf4 + (float)auVar10._0_8_;
      local_58._4_4_ = (float)(g_023dccf4 >> 0x20) + (float)((uint64_t)auVar10._0_8_ >> 0x20);
      uStack_50._0_4_ = (float)extraout_XMM0_Qb_00 + 0.0;
      uStack_50._4_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) + 0.0;
      if (iVar3 != 1) goto LAB_01af72f7;
LAB_01af72fb:
      auVar18._8_8_ = 0;
      auVar18._0_8_ = g_023dccf4;
    }
    auVar20._0_4_ = (float)local_58._0_4_ + auVar18._0_4_;
    auVar20._4_4_ = (float)local_58._4_4_ + auVar18._4_4_;
    auVar20._8_4_ = (float)uStack_50 + auVar18._8_4_;
    auVar20._12_4_ = uStack_50._4_4_ + auVar18._12_4_;
    _local_58 = blendps(auVar20,auVar10,2);
    _local_48 = blendps(_local_48,g_0241c720,0xd);
  }
  FUN_01adad50();
  auVar15 = local_48;
  uVar8 = uStack_40;
  local_48 = (uint8_t  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_01;
  uStack_50 = uVar8;
  local_58 = auVar15;
  FUN_01d4eaa0();
  FUN_01d52700();
  FUN_01e42030();
  plVar6 = local_38;
  if ((((local_30 == '\0') && (local_38 != (int64_t *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (uint8_t  [8])FUN_01e49120();
  uStack_40 = extraout_XMM0_Qb_02;
  FUN_01d52740();
  (**(code **)(*local_38 + 0x368))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_88 = local_38;
  local_80 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_80 = '\x01';
  auVar15 = local_58;
  uVar8 = uStack_50;
  (**(code **)(*plVar6 + 0x610))();
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  if (arg1 != (void*)0x0) {
    *arg1 = 1;
  }
  plVar5 = (int64_t *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  plVar4 = (int64_t *)this_ptr[0x3e];
  if (plVar4 == plVar5) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x3e] = (int64_t)plVar5;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((int64_t)this_ptr + 0x284) == 0) {
    uStack_40 = 0;
    local_48 = (uint8_t  [8])g_023dccec;
    uStack_50 = 0;
    local_58 = (uint8_t  [8])g_023dccf4;
  }
  else {
    local_68 = (uint8_t  [8])FUN_01e3f820();
    uStack_60 = extraout_XMM0_Qb_03;
    uStack_50 = uVar8;
    local_58 = auVar15;
    iVar3 = *(int *)((int64_t)this_ptr + 0x284);
    if (iVar3 == 3) {
      FUN_01e3f820();
      uStack_40 = uVar8;
      local_48 = auVar15;
      _local_48 = blendps(_local_48,g_0241c700,0xd);
      iVar3 = *(int *)((int64_t)this_ptr + 0x284);
      if (iVar3 == 1) goto LAB_01af75cf;
LAB_01af75cb:
      if (iVar3 == 0) goto LAB_01af75cf;
      FUN_01e3f820();
      uStack_90 = uVar8;
      local_98 = auVar15;
      if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar21 = blendps(_local_98,g_0241c710,0xd);
    }
    else {
      uStack_40 = 0;
      local_48 = (uint8_t  [8])g_023dccf4;
      if (iVar3 != 1) goto LAB_01af75cb;
LAB_01af75cf:
      auVar21._8_8_ = 0;
      auVar21._0_8_ = g_023dccf4;
    }
    auVar11._0_4_ = (float)local_48._0_4_ + local_68._0_4_ + auVar21._0_4_;
    auVar11._4_4_ = (float)local_48._4_4_ + local_68._4_4_ + auVar21._4_4_;
    auVar11._8_4_ = (float)uStack_40 + local_68._8_4_ + auVar21._8_4_;
    auVar11._12_4_ = uStack_40._4_4_ + local_68._12_4_ + auVar21._12_4_;
    _local_48 = blendps(auVar11,_local_68,2);
    _local_58 = blendps(_local_58,g_0241c720,0xd);
  }
  FUN_01adad50();
  local_48 = (uint8_t  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_04;
  FUN_01d4eaa0();
  FUN_01d52700();
  FUN_01e42030();
  if (plVar6 == local_38) {
LAB_01af76ed:
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01af76ed;
    }
    FUN_00d50b20();
  }
  local_48 = (uint8_t  [8])FUN_01e49120();
  uStack_40 = extraout_XMM0_Qb_05;
  FUN_01d52740();
  (**(code **)(*local_38 + 0x368))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_78 = local_38;
  local_70 = 0;
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_70 = '\x01';
  auVar15 = local_58;
  uVar8 = uStack_50;
  (**(code **)(*plVar6 + 0x610))();
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  if (arg1 != (void*)0x0) {
    *arg1 = 0;
  }
  *(void*)(this_ptr + 0x3f) = 0x3f800000;
  FUN_01f27fe0();
  local_a0 = 0;
  (**(code **)(this_ptr[0x2d] + 0x10))();
  uVar9 = FUN_00d50b00();
  local_a0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_a8 = this_ptr + 0x2d;
  FUN_01f47190(uVar9,&local_b8);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    (**(code **)(*local_a8 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (uint8_t  [8])FUN_01adabe0();
  local_58 = auVar15;
  uStack_50 = uVar8;
  FUN_01adad50();
  local_48 = (uint8_t  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_06;
  if (*(int *)((int64_t)this_ptr + 0x284) == 0) goto LAB_01af79d0;
  local_e8._0_8_ = local_58;
  local_e8._8_8_ = uStack_50;
  uVar8 = FUN_01e3f820();
  fStack_f0 = (float)extraout_XMM0_Qb_07;
  fStack_ec = (float)((uint64_t)extraout_XMM0_Qb_07 >> 0x20);
  uStack_90 = local_e8._8_8_;
  local_98 = (uint8_t  [8])local_e8._0_8_;
  iVar3 = *(int *)((int64_t)this_ptr + 0x284);
  if (iVar3 == 3) {
    FUN_01e3f820();
    uStack_60 = local_e8._8_8_;
    local_68 = (uint8_t  [8])local_e8._0_8_;
    _local_68 = blendps(_local_68,g_0241c700,0xd);
    iVar3 = *(int *)((int64_t)this_ptr + 0x284);
    if (iVar3 == 1) goto LAB_01af7967;
LAB_01af7963:
    if (iVar3 == 0) goto LAB_01af7967;
    FUN_01e3f820();
    if (*(int *)((int64_t)this_ptr + 0x284) == 3) {
      FUN_01e3f820();
    }
    auVar16 = blendps(local_e8,g_0241c710,0xd);
  }
  else {
    uStack_60 = 0;
    local_68 = (uint8_t  [8])g_023dccf4;
    if (iVar3 != 1) goto LAB_01af7963;
LAB_01af7967:
    auVar16._8_8_ = 0;
    auVar16._0_8_ = g_023dccf4;
  }
  auVar2._8_4_ = fStack_f0;
  auVar2._0_8_ = uVar8;
  auVar2._12_4_ = fStack_ec;
  auVar22._0_4_ = (float)local_68._0_4_ + (float)uVar8 + auVar16._0_4_;
  auVar22._4_4_ = (float)local_68._4_4_ + (float)((uint64_t)uVar8 >> 0x20) + auVar16._4_4_;
  auVar22._8_4_ = (float)uStack_60 + fStack_f0 + auVar16._8_4_;
  auVar22._12_4_ = uStack_60._4_4_ + fStack_ec + auVar16._12_4_;
  blendps(auVar22,auVar2,2);
  blendps(_local_98,g_0241c720,0xd);
LAB_01af79d0:
  FUN_00d052e0();
  (**(code **)(*this_ptr + 0x618))();
  FUN_00d50b20();
  return;
}

