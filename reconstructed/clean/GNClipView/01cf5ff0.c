// Function: FUN_01cf5ff0
// Address: 01cf5ff0
// Size: 2717 bytes
// Class: GNClipView
// === GNClipView properties ===
//   GNClipViewBorderType _rightBorderType
//   GNClipViewBorderType _bottomBorderType
//   GNClipViewBorderType _leftBorderType
//   GNClipViewBorderType _topBorderType
//                   _knobProportion
//                   _increaseButtonPressed
//                   _decreaseButtonPressed
//                   _column


void FUN_01cf5ff0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  bool bVar4;
  bool bVar5;
  char cVar6;
  byte bVar7;
  int64_t lVar8;
  int64_t *plVar9;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar10;
  float fVar11;
  float extraout_XMM0_Da;
  float fVar22;
  float extraout_XMM0_Db;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t uVar12;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint64_t uVar13;
  uint64_t extraout_XMM0_Qb_03;
  uint32_t uVar23;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar24 [12];
  float fVar29;
  float fVar30;
  float fVar31;
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar44;
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint8_t auVar43 [16];
  uint8_t auVar45 [16];
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  uint8_t auVar48 [16];
  uint8_t auVar49 [16];
  uint8_t auVar50 [16];
  uint8_t auVar51 [16];
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t local_128 [48];
  uint8_t local_e8 [8];
  uint64_t uStack_e0;
  uint64_t local_c8;
  float local_b8;
  float fStack_b4;
  int64_t *local_a0;
  char local_98;
  uint8_t local_88 [16];
  uint8_t local_78 [8];
  uint64_t uStack_70;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  int64_t *local_58;
  char local_50;
  uint8_t local_48 [8];
  uint64_t uStack_40;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_02;
  
  fVar22 = (float)((uint64_t)param_2 >> 0x20);
  fVar29 = (float)param_2;
  uStack_70 = in_XMM0_Qb;
  local_78 = (uint8_t  [8])param_1;
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
  fVar32 = fVar29;
  (**(code **)(*this_ptr + 0x4d8))();
  (**(code **)(*(int64_t *)this_ptr[0x27] + 0x4d8))();
  fVar44 = fVar22;
  (**(code **)(*this_ptr + 0x4d8))();
  fVar22 = fVar22 - fVar44;
  auVar25 = ZEXT816(0);
  if ((float)param_1 < 0.0) {
    _local_78 = blendps(_local_78,ZEXT816(0),1);
  }
  auVar24 = ZEXT812(0);
  if (0.0 <= fVar29 - fVar32) {
    auVar24._4_8_ = 0;
    auVar24._0_4_ = fVar29 - fVar32;
  }
  auVar50._12_4_ = 0;
  auVar50._0_12_ = auVar24;
  if (local_78._4_4_ < 0.0) {
    _local_78 = blendps(_local_78,ZEXT816(0),2);
    if (0.0 <= fVar22) {
      auVar25 = ZEXT416((uint)fVar22);
    }
    if (local_78._0_4_ <= auVar24._0_4_) goto LAB_01cf60a4;
LAB_01cf612c:
    _local_78 = blendps(_local_78,auVar50,1);
    if (auVar25._0_4_ < local_78._4_4_) {
LAB_01cf60ad:
      _local_78 = insertps(_local_78,auVar25,0x10);
    }
  }
  else {
    if (0.0 <= fVar22) {
      auVar25 = ZEXT416((uint)fVar22);
    }
    if (auVar24._0_4_ < local_78._0_4_) goto LAB_01cf612c;
LAB_01cf60a4:
    if (auVar25._0_4_ < local_78._4_4_) goto LAB_01cf60ad;
  }
  (**(code **)(*this_ptr + 0x7b8))();
  if (local_58 == (int64_t *)0x0) {
    plVar10 = (int64_t *)0x0;
    bVar5 = true;
    lVar8 = this_ptr[0x27];
    if (lVar8 != 0) goto LAB_01cf6109;
LAB_01cf615b:
    fVar32 = 0.0;
    fVar44 = 0.0;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    bVar5 = false;
    lVar8 = this_ptr[0x27];
    plVar10 = local_58;
    if (lVar8 == 0) goto LAB_01cf615b;
LAB_01cf6109:
    fVar32 = 0.0 - (float)*(void*)(lVar8 + 0x10c);
    fVar44 = 0.0 - (float)((uint64_t)*(void*)(lVar8 + 0x10c) >> 0x20);
  }
  fVar22 = (float)local_78._0_4_ - fVar32;
  fVar29 = (float)local_78._4_4_ - fVar44;
  fVar30 = (float)uStack_70 - 0.0;
  fVar31 = uStack_70._4_4_ - 0.0;
  fVar33 = (float)local_78._4_4_ - fVar44;
  if (((fVar22 == 0.0) && (fVar33 == 0.0)) && (!NAN(fVar33))) goto LAB_01cf6a51;
  local_c8 = CONCAT44(g_023dccec._4_4_,(float)g_023dccec);
  local_68 = (uint8_t  [8])CONCAT44(g_023dccf4._4_4_,(float)g_023dccf4);
  uStack_60 = 0;
  local_e8._0_4_ = fVar22;
  local_e8._4_4_ = fVar29;
  uStack_e0._0_4_ = fVar30;
  uStack_e0._4_4_ = fVar31;
  FUN_01e436c0();
  FUN_01e3f820();
  auVar25 = _local_e8;
  local_e8 = (uint8_t  [8])FUN_00d05360();
  uStack_e0 = extraout_XMM0_Qb;
  if ((float)local_78._0_4_ <= fVar32) {
    local_128._8_8_ = 0;
    local_128._0_8_ = local_c8;
    local_88._8_8_ = 0;
    local_88._0_8_ = local_68;
    auVar17 = auVar25;
    if (fVar32 <= (float)local_78._0_4_) goto LAB_01cf628a;
LAB_01cf63a5:
    auVar50 = auVar25;
    auVar18._0_8_ = FUN_01e436c0();
    auVar18._8_8_ = extraout_XMM0_Qb_02;
    auVar40._0_4_ = fVar22 + (float)auVar18._0_8_;
    auVar40._4_4_ = fVar29 + (float)((uint64_t)auVar18._0_8_ >> 0x20);
    auVar40._8_4_ = fVar30 + (float)extraout_XMM0_Qb_02;
    auVar40._12_4_ = fVar31 + (float)((uint64_t)extraout_XMM0_Qb_02 >> 0x20);
    local_128._0_16_ = blendps(auVar40,auVar18,2);
    auVar19._0_4_ = fVar32 - (float)local_78._0_4_;
    auVar19._4_4_ = fVar44 - (float)local_78._4_4_;
    auVar19._8_4_ = 0.0 - (float)uStack_70;
    auVar19._12_4_ = 0.0 - uStack_70._4_4_;
    local_88 = blendps(auVar50,auVar19,0xd);
    auVar17._0_4_ = auVar25._0_4_ - auVar19._0_4_;
    auVar17._4_4_ = auVar25._4_4_ - auVar19._4_4_;
    auVar17._8_4_ = auVar25._8_4_ - auVar19._8_4_;
    auVar17._12_4_ = auVar25._12_4_ - auVar19._12_4_;
    _local_48 = blendps(auVar25,auVar17,0xd);
    if (fVar44 < (float)local_78._4_4_) goto LAB_01cf629e;
LAB_01cf6405:
    uVar13 = local_88._0_8_;
  }
  else {
    auVar50 = auVar25;
    auVar14._0_8_ = FUN_01e436c0();
    auVar14._8_8_ = extraout_XMM0_Qb_00;
    auVar35._0_4_ = (float)auVar14._0_8_ + auVar50._0_4_;
    auVar35._4_4_ = (float)((uint64_t)auVar14._0_8_ >> 0x20) + auVar50._4_4_;
    auVar35._8_4_ = (float)extraout_XMM0_Qb_00 + auVar50._8_4_;
    auVar35._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20) + auVar50._12_4_;
    local_128._0_16_ = blendps(auVar35,auVar14,2);
    auVar2._4_4_ = fVar29;
    auVar2._0_4_ = fVar22;
    auVar2._8_4_ = fVar30;
    auVar2._12_4_ = fVar31;
    local_88 = blendps(auVar50,auVar2,0xd);
    auVar15._0_4_ = fVar22 + SUB84(local_e8,0);
    auVar15._4_4_ = fVar29 + (float)((uint64_t)local_e8 >> 0x20);
    auVar15._8_4_ = fVar30 + (float)extraout_XMM0_Qb;
    auVar15._12_4_ = fVar31 + (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
    _local_e8 = blendps(_local_e8,auVar15,0xd);
    auVar16._0_4_ = auVar25._0_4_ - fVar22;
    auVar16._4_4_ = auVar25._4_4_ - fVar29;
    auVar16._8_4_ = auVar25._8_4_ - fVar30;
    auVar16._12_4_ = auVar25._12_4_ - fVar31;
    auVar25 = blendps(auVar25,auVar16,0xd);
    auVar17 = auVar25;
    if ((float)local_78._0_4_ < fVar32) goto LAB_01cf63a5;
LAB_01cf628a:
    _local_48 = auVar17;
    if ((float)local_78._4_4_ <= fVar44) goto LAB_01cf6405;
LAB_01cf629e:
    uVar13 = local_88._0_8_;
    uVar12 = FUN_01e436c0();
    fVar11 = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
    auVar49._0_4_ = (float)uVar12 + auVar17._0_4_;
    auVar49._4_4_ = (float)((uint64_t)uVar12 >> 0x20) + auVar17._4_4_;
    auVar49._8_4_ = (float)extraout_XMM0_Qb_01 + auVar17._8_4_;
    auVar49._12_4_ = fVar11 + auVar17._12_4_;
    auVar25._8_4_ = (float)extraout_XMM0_Qb_01;
    auVar25._0_8_ = uVar12;
    auVar25._12_4_ = fVar11;
    auVar25 = blendps(auVar25,auVar49,2);
    local_c8 = auVar25._0_8_;
    fVar11 = local_e8._4_4_;
    auVar36._4_4_ = fVar11;
    auVar36._0_4_ = fVar11;
    auVar36._8_4_ = local_e8._12_4_;
    auVar36._12_4_ = local_e8._12_4_;
    auVar37._4_12_ = auVar36._4_12_;
    auVar37._0_4_ = fVar11 + fVar33;
    insertps(_local_e8,auVar37,0x10);
    fVar11 = local_48._4_4_;
    auVar38._4_4_ = fVar11;
    auVar38._0_4_ = fVar11;
    auVar38._8_4_ = local_48._12_4_;
    auVar38._12_4_ = local_48._12_4_;
    auVar39._4_12_ = auVar38._4_12_;
    auVar39._0_4_ = fVar11 - fVar33;
    _local_48 = insertps(_local_48,auVar39,0x10);
    fVar11 = local_128._0_4_;
    auVar25 = _local_48;
    if ((((fVar11 != (float)g_023dccec) || (NAN(fVar11) || NAN((float)g_023dccec))) ||
        ((local_128._4_4_ != g_023dccec._4_4_ ||
         ((NAN(local_128._4_4_) || NAN(g_023dccec._4_4_) ||
          (auVar25 = local_88, (float)local_88._0_4_ != (float)g_023dccf4)))))) ||
       (NAN((float)local_88._0_4_) || NAN((float)g_023dccf4))) {
LAB_01cf633c:
      if (fVar11 < (float)uVar12) {
        auVar50 = blendps(auVar49,local_128._0_16_,0xd);
        local_c8 = auVar50._0_8_;
      }
      auVar17._0_4_ = auVar17._0_4_ + (float)local_88._0_4_;
      local_88 = auVar25;
    }
    else if (((float)local_88._4_4_ != g_023dccf4._4_4_) ||
            (NAN((float)local_88._4_4_) || NAN(g_023dccf4._4_4_))) goto LAB_01cf633c;
    _local_68 = insertps(auVar17,fVar33,0x10);
    auVar17 = local_88;
  }
  local_88._0_4_ = (uint32_t)uVar13;
  local_88._4_4_ = (uint32_t)((uint64_t)uVar13 >> 0x20);
  auVar27 = auVar17;
  if ((float)local_78._4_4_ < fVar44) {
    uVar13 = FUN_01e436c0();
    fVar11 = (float)((uint64_t)uVar13 >> 0x20);
    auVar41._4_4_ = fVar11;
    auVar41._0_4_ = fVar11;
    uVar23 = (uint32_t)((uint64_t)extraout_XMM0_Qb_03 >> 0x20);
    auVar41._8_4_ = uVar23;
    auVar41._12_4_ = uVar23;
    auVar42._4_12_ = auVar41._4_12_;
    auVar42._0_4_ = fVar11 + fVar33;
    auVar26._8_4_ = (int)extraout_XMM0_Qb_03;
    auVar26._0_8_ = uVar13;
    auVar26._12_4_ = uVar23;
    auVar25 = insertps(auVar26,auVar42,0x10);
    local_c8 = auVar25._0_8_;
    auVar27._0_4_ = fVar44 - (float)local_78._4_4_;
    auVar27._4_4_ = fVar44;
    auVar27._8_8_ = 0;
    fVar11 = local_48._4_4_;
    auVar45._4_4_ = fVar11;
    auVar45._0_4_ = fVar11;
    auVar45._8_4_ = local_48._12_4_;
    auVar45._12_4_ = local_48._12_4_;
    auVar46._4_12_ = auVar45._4_12_;
    auVar46._0_4_ = fVar11 - auVar27._0_4_;
    auVar25 = insertps(_local_48,auVar46,0x10);
    local_48 = auVar25._0_8_;
    fVar11 = local_128._0_4_;
    if (((((fVar11 != (float)g_023dccec) || (NAN(fVar11) || NAN((float)g_023dccec))) ||
         (local_128._4_4_ != g_023dccec._4_4_)) ||
        ((NAN(local_128._4_4_) || NAN(g_023dccec._4_4_) ||
         ((float)local_88._0_4_ != (float)g_023dccf4)))) ||
       (NAN((float)local_88._0_4_) || NAN((float)g_023dccf4))) {
LAB_01cf64a9:
      if (fVar11 < (float)uVar13) {
        auVar25 = insertps(local_128._0_16_,auVar42,0x10);
        local_c8 = auVar25._0_8_;
      }
      auVar17._0_4_ = auVar17._0_4_ + (float)local_88._0_4_;
    }
    else if (((float)local_88._4_4_ != g_023dccf4._4_4_) ||
            (NAN((float)local_88._4_4_) || NAN(g_023dccf4._4_4_))) goto LAB_01cf64a9;
    _local_68 = insertps(auVar17,auVar27,0x10);
  }
  FUN_01e42030();
  (**(code **)(*local_a0 + 0x9a0))();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  bVar4 = true;
  if ((((*(char *)((int64_t)this_ptr + 0x153) == '\0') &&
       (cVar6 = (**(code **)(*local_58 + 0x440))(), cVar6 != '\0')) &&
      (FUN_01e3f820(), (float)(g_02390140 & (uint)fVar22) <= auVar27._0_4_)) &&
     (FUN_01e3f820(), (float)(g_02390140 & (uint)fVar33) <= auVar27._4_4_)) {
    fVar11 = (float)(**(code **)(*local_58 + 0x448))();
    fVar34 = fVar22 / fVar11;
    if ((fVar34 != 0.0) || (NAN(fVar34))) {
      auVar47._0_4_ = g_023945e0 & (uint)fVar34;
      auVar47._4_4_ = _UNK_023945e4 & (uint)fVar29;
      auVar47._8_4_ = _UNK_023945e8 & (uint)fVar30;
      auVar47._12_4_ = _UNK_023945ec & (uint)fVar31;
      auVar48._4_12_ = SUB1612(auVar47 | g_023945f0,4);
      auVar48._0_4_ = SUB164(auVar47 | g_023945f0,0) + fVar34;
      auVar25 = roundss(auVar48,auVar48,0xb);
      if ((fVar34 == auVar25._0_4_) && (!NAN(fVar34) && !NAN(auVar25._0_4_))) goto LAB_01cf65d9;
LAB_01cf6610:
      bVar4 = true;
    }
    else {
LAB_01cf65d9:
      fVar11 = fVar33 / fVar11;
      if ((fVar11 != 0.0) || (bVar4 = false, NAN(fVar11))) {
        auVar20._0_4_ = g_023945e0 & (uint)fVar11;
        auVar20._4_4_ = _UNK_023945e4 & local_78._4_4_;
        auVar20._8_4_ = _UNK_023945e8 & (uint)uStack_70._4_4_;
        auVar20._12_4_ = _UNK_023945ec & (uint)uStack_70._4_4_;
        auVar21._4_12_ = SUB1612(auVar20 | g_023945f0,4);
        auVar21._0_4_ = SUB164(auVar20 | g_023945f0,0) + fVar11;
        auVar25 = roundss(auVar21,auVar21,0xb);
        if ((fVar11 != auVar25._0_4_) || (bVar4 = false, NAN(fVar11) || NAN(auVar25._0_4_)))
        goto LAB_01cf6610;
      }
    }
  }
  bVar7 = FUN_01cf3e60();
  if (bVar4 || (bVar7 ^ 1) != 0) {
    local_48._0_4_ = (float)g_023dccec;
    local_48._4_4_ = g_023dccec._4_4_;
    local_b8 = (float)g_023dccf4;
    fStack_b4 = g_023dccf4._4_4_;
    FUN_01e3f820();
    (**(code **)(*this_ptr + 0x618))();
  }
  else {
    FUN_00d50b00();
    plVar9 = this_ptr;
    if (this_ptr[0x27] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = (int64_t *)this_ptr[0x27];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar1 == this_ptr) {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b20();
        plVar9 = plVar1;
      }
    }
    (**(code **)(*plVar9 + 0x4d8))();
    FUN_01e49300();
    FUN_01e42030();
    (**(code **)(*local_a0 + 0x9a0))();
    auVar28._0_4_ = fVar44 - (float)local_78._4_4_;
    auVar28._4_4_ = fVar44;
    auVar28._8_8_ = 0;
    auVar43._0_4_ = fVar32 - (float)local_78._0_4_;
    auVar43._4_4_ = fVar44;
    auVar43._8_8_ = 0;
    insertps(auVar43,auVar28,0x10);
    (**(code **)(*local_58 + 0x450))();
    local_b8 = SUB84(local_48,0);
    fStack_b4 = (float)((uint64_t)local_48 >> 0x20);
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    local_48._0_4_ = extraout_XMM0_Da;
    local_48._4_4_ = extraout_XMM0_Db;
  }
  FUN_01cf5d20();
  if (((((float)local_48._0_4_ != (float)g_023dccec) ||
       (NAN((float)local_48._0_4_) || NAN((float)g_023dccec))) ||
      ((float)local_48._4_4_ != g_023dccec._4_4_)) ||
     (((NAN((float)local_48._4_4_) || NAN(g_023dccec._4_4_) || (local_b8 != (float)g_023dccf4))
      || (NAN(local_b8) || NAN((float)g_023dccf4))))) {
LAB_01cf6800:
    FUN_00d50b00();
    plVar9 = this_ptr;
    if (this_ptr[0x27] != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = (int64_t *)this_ptr[0x27];
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (plVar1 == this_ptr) {
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00d50b20();
        plVar9 = plVar1;
      }
    }
    FUN_01e49090();
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  else if ((fStack_b4 != g_023dccf4._4_4_) || (NAN(fStack_b4) || NAN(g_023dccf4._4_4_)))
  goto LAB_01cf6800;
  if (!bVar4 && (bVar7 ^ 1) == 0) {
    if ((((((float)local_128._0_4_ != (float)g_023dccec) ||
          (NAN((float)local_128._0_4_) || NAN((float)g_023dccec))) ||
         ((float)local_128._4_4_ != g_023dccec._4_4_)) ||
        ((NAN((float)local_128._4_4_) || NAN(g_023dccec._4_4_) ||
         ((float)local_88._0_4_ != (float)g_023dccf4)))) ||
       (NAN((float)local_88._0_4_) || NAN((float)g_023dccf4))) {
LAB_01cf68c1:
      FUN_00d052e0();
      FUN_01e436c0();
      FUN_00d05360();
      (**(code **)(*(int64_t *)this_ptr[0x27] + 0x618))();
    }
    else if (((float)local_88._4_4_ != g_023dccf4._4_4_) ||
            (NAN((float)local_88._4_4_) || NAN(g_023dccf4._4_4_))) goto LAB_01cf68c1;
    if (((float)local_c8 == (float)g_023dccec) &&
       (!NAN((float)local_c8) && !NAN((float)g_023dccec))) {
      if ((local_c8._4_4_ == g_023dccec._4_4_) &&
         (!NAN(local_c8._4_4_) && !NAN(g_023dccec._4_4_))) {
        if (((float)local_68._0_4_ == (float)g_023dccf4) &&
           (!NAN((float)local_68._0_4_) && !NAN((float)g_023dccf4))) {
          if (((float)local_68._4_4_ == g_023dccf4._4_4_) &&
             (!NAN((float)local_68._4_4_) && !NAN(g_023dccf4._4_4_))) goto LAB_01cf69cf;
        }
      }
    }
    local_78 = (uint8_t  [8])FUN_00d052e0();
    uStack_70 = extraout_XMM0_Qb_04;
    uStack_40 = uStack_60;
    local_48 = local_68;
    FUN_01e436c0();
    uVar23 = (uint32_t)((uint64_t)uStack_60 >> 0x20);
    fVar32 = (float)((uint64_t)local_68 >> 0x20);
    auVar51._4_4_ = fVar32;
    auVar51._0_4_ = fVar32;
    auVar51._8_4_ = uVar23;
    auVar51._12_4_ = uVar23;
    auVar52._4_12_ = auVar51._4_12_;
    auVar52._0_4_ = fVar32 + g_02390d34;
    uVar23 = (uint32_t)((uint64_t)extraout_XMM0_Qb_04 >> 0x20);
    fVar32 = (float)((uint64_t)local_78 >> 0x20);
    auVar53._4_4_ = fVar32;
    auVar53._0_4_ = fVar32;
    auVar53._8_4_ = uVar23;
    auVar53._12_4_ = uVar23;
    auVar54._4_12_ = auVar53._4_12_;
    auVar54._0_4_ = fVar32 + g_02390d00;
    insertps(_local_78,auVar54,0x10);
    insertps(_local_48,auVar52,0x10);
    FUN_00d05360();
    (**(code **)(*(int64_t *)this_ptr[0x27] + 0x618))();
  }
LAB_01cf69cf:
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b00();
    auVar3._4_4_ = fVar29;
    auVar3._0_4_ = fVar22;
    auVar3._8_4_ = fVar30;
    auVar3._12_4_ = fVar31;
    auVar25 = insertps(auVar3,fVar33,0x10);
    (**(code **)(*plVar10 + 0x930))(auVar25._0_8_);
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (unaff_SIL != '\0') {
    FUN_01cf6d20();
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01cf6a51:
  if (!bVar5 && plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

