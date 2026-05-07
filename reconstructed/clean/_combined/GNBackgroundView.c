// ===================================================================
// GNBackgroundView — Complete reconstructed pseudocode
// 5 functions
// ===================================================================

// Registered properties (5):
//                   _shrinks
//                   _borderColor
//                   _highlightedBorderColor
//                   _borderWidth
//                   _cornerRadius


// ============================================================
// 01d7f240
// ============================================================
// Function: FUN_01d7f240
// Address: 01d7f240
// Size: 2387 bytes
// Class: GNBackgroundView
// === GNBackgroundView properties ===
//                   _shrinks
//                   _borderColor
//                   _highlightedBorderColor
//                   _borderWidth
//                   _cornerRadius


void FUN_01d7f240(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  int64_t *plVar3;
  bool bVar4;
  int64_t lVar5;
  char cVar6;
  byte bVar7;
  int64_t lVar8;
  int64_t lVar9;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar10;
  bool bVar11;
  float fVar12;
  uint64_t uVar13;
  float extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  float extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint64_t in_XMM1_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint8_t local_68 [8];
  uint64_t uStack_60;
  uint8_t local_58 [8];
  uint32_t uStack_50;
  uint32_t uStack_4c;
  float local_3c;
  
  uVar13 = FUN_01e3f820();
  local_d8 = (float)param_2;
  fStack_d4 = (float)((uint64_t)param_2 >> 0x20);
  fStack_d0 = (float)in_XMM1_Qb;
  fStack_cc = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  if ((((NAN(*(float *)(this_ptr + 0x158))) || (NAN(*(float *)(this_ptr + 0x160)))) ||
      (NAN(*(float *)(this_ptr + 0x15c)))) || (NAN(*(float *)(this_ptr + 0x164)))) {
    local_58 = (uint8_t  [8])FUN_01d7fd70();
    uStack_50 = extraout_XMM0_Dc_00;
    uStack_4c = extraout_XMM0_Dd_00;
    uStack_60 = in_XMM1_Qb;
    local_68 = (uint8_t  [8])param_2;
    if (NAN(*(float *)(this_ptr + 0x158))) {
      fVar12 = *(float *)(this_ptr + 0x15c);
      fVar1 = *(float *)(this_ptr + 0x160);
      if (NAN(fVar1)) goto LAB_01d7fb14;
LAB_01d7fb4e:
      _local_68 = blendps(_local_68,ZEXT416((uint)fVar1),1);
      if (!NAN(fVar12)) goto LAB_01d7fb61;
LAB_01d7fb19:
      fVar12 = *(float *)(this_ptr + 0x164);
    }
    else {
      _local_58 = blendps(_local_58,ZEXT416((uint)*(float *)(this_ptr + 0x158)),1);
      fVar12 = *(float *)(this_ptr + 0x15c);
      fVar1 = *(float *)(this_ptr + 0x160);
      if (!NAN(fVar1)) goto LAB_01d7fb4e;
LAB_01d7fb14:
      if (NAN(fVar12)) goto LAB_01d7fb19;
LAB_01d7fb61:
      auVar15 = insertps(_local_58,ZEXT416((uint)fVar12),0x10);
      local_58 = auVar15._0_8_;
      fVar12 = *(float *)(this_ptr + 0x164);
    }
    if (!NAN(fVar12)) {
      auVar15 = insertps(_local_68,ZEXT416((uint)fVar12),0x10);
      local_68 = auVar15._0_8_;
    }
  }
  else {
    local_58 = *(uint8_t (*) [8])(this_ptr + 0x158);
    local_68 = *(uint8_t (*) [8])(this_ptr + 0x160);
  }
  lVar10 = *(int64_t *)(this_ptr + 0x148);
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  lVar2 = *(int64_t *)(this_ptr + 0x140);
  if ((lVar2 != 0) && (FUN_00d50b00(), lVar10 == 0)) {
    FUN_00d50b00();
    lVar10 = lVar2;
  }
  if (lVar10 == 0) {
    lVar10 = 0;
    goto LAB_01d7f473;
  }
  if (*(float *)(lVar10 + 0x1c) <= 0.0) goto LAB_01d7f473;
  if (((*(int64_t *)(this_ptr + 0x150) != 0) && (cVar6 = FUN_01e45650(), cVar6 != '\0')) &&
     (lVar8 = *(int64_t *)(this_ptr + 0x150), lVar8 != lVar10)) {
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b20();
    lVar10 = lVar8;
  }
  FUN_01d488d0();
  if (*(int64_t *)(this_ptr + 0x168) != 0) {
    FUN_00d50b00();
    cVar6 = !NAN((float)local_58._0_4_) && !NAN((float)local_58._0_4_);
    fVar12 = 0.0;
    if (!NAN((float)local_58._0_4_)) {
      fVar12 = (float)local_58._0_4_ + 0.0;
    }
    if (!NAN((float)local_58._4_4_)) {
      fVar12 = fVar12 + (float)local_58._4_4_;
      cVar6 = cVar6 + '\x01';
    }
    if (!NAN((float)local_68._0_4_)) {
      fVar12 = fVar12 + (float)local_68._0_4_;
    }
    if (!NAN((float)local_68._4_4_)) {
      fVar12 = fVar12 + (float)local_68._4_4_;
    }
    bVar7 = cVar6 + (!NAN((float)local_68._0_4_) && !NAN((float)local_68._0_4_)) +
            (!NAN((float)local_68._4_4_) && !NAN((float)local_68._4_4_));
    if (bVar7 != 0) {
      fVar12 = fVar12 / (float)bVar7;
    }
    FUN_01d48b40(fVar12);
    plVar3 = (int64_t *)*arg1;
    lVar8 = *(int64_t *)(this_ptr + 0x170);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar3 + 0x3a8))();
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01d7f473;
  }
  lVar8 = 0;
  bVar11 = lVar2 != 0;
  if (bVar11) {
    FUN_00d50b00();
    lVar8 = lVar2;
  }
  lVar9 = lVar10;
  if ((float)local_58._0_4_ <= 0.0) {
    local_3c = g_02390124;
LAB_01d7f520:
    if (lVar8 != 0) goto LAB_01d7f52f;
LAB_01d7f6a4:
    lVar8 = 0;
    if (lVar2 == 0) goto LAB_01d7f6b0;
LAB_01d7f5ba:
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    bVar4 = !bVar11;
    lVar5 = lVar2;
    bVar11 = true;
    if (bVar4) goto joined_r0x01d7f80c;
    bVar11 = lVar8 != 0;
    lVar8 = lVar2;
    if (bVar11) {
      FUN_00d50b20();
    }
LAB_01d7f5f3:
    bVar11 = true;
    if ((float)local_68._0_4_ <= 0.0) goto LAB_01d7f6ec;
LAB_01d7f603:
    local_3c = (float)local_68._0_4_;
    if (lVar8 != lVar10) {
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      if ((bVar11) && (lVar8 != 0)) {
        FUN_00d50b20();
        bVar4 = true;
      }
      goto LAB_01d7f6f9;
    }
    bVar4 = bVar11;
    if ((bVar11) || (lVar10 == 0)) goto LAB_01d7f6f9;
    bVar4 = true;
    FUN_00d50b00();
LAB_01d7f705:
    FUN_01d488d0();
    FUN_01d48b40(local_3c);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
    lVar8 = lVar9;
    bVar11 = bVar4;
    if (lVar2 == lVar9) goto LAB_01d7f7d4;
LAB_01d7f78e:
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    bVar4 = true;
    lVar9 = lVar2;
    if ((bVar11) && (lVar8 != 0)) {
      FUN_00d50b20();
      bVar4 = true;
    }
  }
  else {
    local_3c = (float)local_58._0_4_;
    if (lVar8 == lVar10) {
      if ((lVar2 == 0) && (lVar10 != 0)) {
        bVar11 = true;
        FUN_00d50b00();
        lVar8 = lVar10;
        goto LAB_01d7f52f;
      }
    }
    else {
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      bVar11 = true;
      if (lVar2 != 0 && lVar8 != 0) {
        FUN_00d50b20();
        lVar8 = lVar10;
        goto LAB_01d7f520;
      }
    }
    lVar8 = lVar10;
    if (lVar10 == 0) goto LAB_01d7f6a4;
LAB_01d7f52f:
    FUN_01d488d0();
    FUN_01d48b40(local_3c);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))(0);
    if (lVar2 != lVar8) goto LAB_01d7f5ba;
LAB_01d7f6b0:
    lVar5 = lVar8;
    if ((!bVar11) && (lVar2 != 0)) {
      FUN_00d50b00();
      goto LAB_01d7f5f3;
    }
joined_r0x01d7f80c:
    lVar8 = lVar5;
    if (0.0 < (float)local_68._0_4_) goto LAB_01d7f603;
LAB_01d7f6ec:
    local_3c = g_02390124;
    lVar9 = lVar8;
    bVar4 = bVar11;
LAB_01d7f6f9:
    if (lVar9 != 0) goto LAB_01d7f705;
    lVar9 = 0;
    lVar8 = lVar9;
    bVar11 = bVar4;
    if (lVar2 != 0) goto LAB_01d7f78e;
LAB_01d7f7d4:
    if ((!bVar4) && (lVar2 != 0)) {
      bVar4 = true;
      FUN_00d50b00();
    }
  }
  fVar12 = g_02390124;
  bVar11 = bVar4;
  if ((float)local_58._4_4_ <= 0.0) {
LAB_01d7f885:
    local_58._4_4_ = fVar12;
    if (lVar9 != 0) goto LAB_01d7f891;
LAB_01d7f97f:
    lVar9 = 0;
    lVar8 = lVar9;
    bVar4 = bVar11;
    if (lVar2 == 0) goto LAB_01d7f98e;
LAB_01d7f911:
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    bVar11 = true;
    lVar9 = lVar2;
    if ((bVar4) && (lVar8 != 0)) {
      FUN_00d50b20();
      bVar11 = true;
    }
  }
  else {
    if (lVar9 == lVar10) {
      if ((!bVar4) && (lVar10 != 0)) {
        bVar11 = true;
        FUN_00d50b00();
        lVar9 = lVar10;
        goto LAB_01d7f891;
      }
    }
    else {
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      bVar11 = true;
      if ((bVar4) && (lVar9 != 0)) {
        FUN_00d50b20();
        lVar9 = lVar10;
        fVar12 = (float)local_58._4_4_;
        bVar11 = true;
        goto LAB_01d7f885;
      }
    }
    lVar9 = lVar10;
    if (lVar10 == 0) goto LAB_01d7f97f;
LAB_01d7f891:
    FUN_01d488d0();
    FUN_01d48b40(local_58._4_4_);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))(0);
    lVar8 = lVar9;
    bVar4 = bVar11;
    if (lVar2 != lVar9) goto LAB_01d7f911;
LAB_01d7f98e:
    if ((!bVar11) && (lVar2 != 0)) {
      bVar11 = true;
      FUN_00d50b00();
    }
  }
  fVar12 = g_02390124;
  bVar4 = bVar11;
  lVar8 = lVar9;
  if ((float)local_68._4_4_ <= 0.0) {
joined_r0x01d7fa21:
    local_68._4_4_ = fVar12;
    if (lVar8 == 0) goto LAB_01d7f473;
  }
  else {
    fVar12 = (float)local_68._4_4_;
    lVar8 = lVar10;
    if (lVar9 != lVar10) {
      if (lVar10 != 0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      if ((bVar11) && (lVar9 != 0)) {
        FUN_00d50b20();
        bVar4 = true;
      }
      goto joined_r0x01d7fa21;
    }
    if ((bVar11) || (lVar10 == 0)) goto joined_r0x01d7fa21;
    bVar4 = true;
    FUN_00d50b00();
  }
  FUN_01d488d0();
  FUN_01d48b40(local_68._4_4_);
  auVar16._0_4_ = (float)uVar13 + local_d8;
  auVar16._4_4_ = (float)((uint64_t)uVar13 >> 0x20) + fStack_d4;
  auVar16._8_4_ = extraout_XMM0_Dc + fStack_d0;
  auVar16._12_4_ = extraout_XMM0_Dd + fStack_cc;
  auVar15._4_4_ = auVar16._4_4_;
  auVar15._0_4_ = auVar16._4_4_;
  auVar15._8_4_ = auVar16._12_4_;
  auVar15._12_4_ = auVar16._12_4_;
  auVar14._4_12_ = auVar15._4_12_;
  auVar14._0_4_ = auVar16._4_4_ + g_02390d00;
  auVar17._4_12_ = auVar16._4_12_;
  auVar17._0_4_ = auVar16._0_4_ + g_02390d00;
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))(0,auVar14._0_8_,auVar17._0_8_,auVar14._0_4_);
  if (bVar4) {
    FUN_00d50b20();
  }
LAB_01d7f473:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01d800a0
// ============================================================
// Function: FUN_01d800a0
// Address: 01d800a0
// Size: 872 bytes
// Class: GNBackgroundView
// === GNBackgroundView properties ===
//                   _shrinks
//                   _borderColor
//                   _highlightedBorderColor
//                   _borderWidth
//                   _cornerRadius


void FUN_01d800a0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  int iVar7;
  int64_t this_ptr;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  uint64_t uVar11;
  float fVar17;
  float fVar18;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float fVar19;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  float fVar20;
  float fVar23;
  float in_XMM1_Dc;
  float fVar24;
  float in_XMM1_Dd;
  float fVar25;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  uint8_t auVar29 [16];
  uint8_t auVar30 [16];
  uint32_t uVar31;
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_84;
  float fStack_7c;
  uint8_t local_78 [8];
  float fStack_70;
  float fStack_6c;
  uint8_t local_68 [8];
  float fStack_60;
  float fStack_5c;
  uint8_t local_58 [8];
  float fStack_50;
  float fStack_4c;
  uint8_t local_48 [16];
  
  local_78._4_4_ = (uint32_t)((uint64_t)param_2 >> 0x20);
  local_78._0_4_ = (uint32_t)param_2;
  local_48._0_8_ = FUN_01e3f820();
  local_48._8_8_ = extraout_XMM0_Qb;
  fStack_70 = in_XMM1_Dc;
  fStack_6c = in_XMM1_Dd;
  fVar20 = (float)local_78._0_4_;
  fVar23 = (float)local_78._4_4_;
  fVar24 = in_XMM1_Dc;
  fVar25 = in_XMM1_Dd;
  uVar11 = FUN_01e3f840();
  fVar17 = (float)((uint64_t)uVar11 >> 0x20);
  fVar9 = (float)uVar11;
  fVar18 = (float)extraout_XMM0_Qb_00;
  fVar19 = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  fVar26 = (float)local_48._0_8_;
  fVar27 = (float)((uint64_t)local_48._0_8_ >> 0x20);
  fVar10 = (float)extraout_XMM0_Qb;
  fVar28 = (float)((uint64_t)extraout_XMM0_Qb >> 0x20);
  if (NAN(fVar17)) {
    auVar33._8_4_ = fVar10;
    auVar33._0_8_ = local_48._0_8_;
    auVar33._12_4_ = fVar28;
    auVar32 = blendps(local_48,auVar33,2);
    auVar29 = _local_78;
  }
  else {
    fVar26 = fVar26 + fVar9;
    fVar27 = fVar27 + fVar17;
    fVar10 = fVar10 + fVar18;
    fVar28 = fVar28 + fVar19;
    auVar29._0_4_ = (float)local_78._0_4_ - fVar9;
    auVar29._4_4_ = (float)local_78._4_4_ - fVar17;
    auVar29._8_4_ = in_XMM1_Dc - fVar18;
    auVar29._12_4_ = in_XMM1_Dd - fVar19;
    auVar32._4_4_ = fVar27;
    auVar32._0_4_ = fVar26;
    auVar32._8_4_ = fVar10;
    auVar32._12_4_ = fVar28;
    auVar32 = blendps(local_48,auVar32,2);
  }
  if (!NAN(fVar9)) {
    auVar13._0_4_ = auVar32._0_4_ + fVar9;
    auVar13._4_4_ = auVar32._4_4_ + fVar17;
    auVar13._8_4_ = auVar32._8_4_ + fVar18;
    auVar13._12_4_ = auVar32._12_4_ + fVar19;
    auVar32 = auVar13;
  }
  auVar33 = blendps(_local_78,auVar29,2);
  auVar34 = auVar33;
  if (!NAN(fVar9)) {
    auVar34._0_4_ = auVar33._0_4_ - fVar9;
    auVar34._4_4_ = auVar33._4_4_ - fVar17;
    auVar34._8_4_ = auVar33._8_4_ - fVar18;
    auVar34._12_4_ = auVar33._12_4_ - fVar19;
  }
  auVar29 = blendps(auVar29,auVar34,0xd);
  if (NAN(fVar23) || NAN(fVar23)) {
    auVar33 = blendps(auVar34,auVar29,2);
  }
  else {
    auVar30._0_4_ = auVar29._0_4_ - fVar20;
    auVar30._4_4_ = auVar29._4_4_ - fVar23;
    auVar30._8_4_ = auVar29._8_4_ - fVar24;
    auVar30._12_4_ = auVar29._12_4_ - fVar25;
    auVar33 = blendps(auVar34,auVar30,2);
    auVar29 = auVar30;
  }
  if (NAN(fVar20)) {
    lVar1 = *(int64_t *)(this_ptr + 0x38);
  }
  else {
    auVar12._0_4_ = auVar33._0_4_ - fVar20;
    auVar12._4_4_ = auVar33._4_4_ - fVar23;
    auVar12._8_4_ = auVar33._8_4_ - fVar24;
    auVar12._12_4_ = auVar33._12_4_ - fVar25;
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    auVar33 = auVar12;
  }
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      auVar3._4_4_ = fVar27;
      auVar3._0_4_ = fVar26;
      auVar3._8_4_ = fVar10;
      auVar3._12_4_ = fVar28;
      auVar32 = blendps(auVar32,auVar3,2);
      auVar13 = blendps(auVar33,auVar29,2);
      fVar26 = auVar29._4_4_;
      uVar31 = auVar29._12_4_;
      lVar8 = 0;
      do {
        plVar2 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
        iVar7 = FUN_01e3f4f0();
        if (iVar7 == 2) {
          (**(code **)(*plVar2 + 0x5d8))(g_023dccec,g_023dccf4);
        }
        else {
          uVar11 = (**(code **)(*plVar2 + 0x5c8))();
          fVar10 = (float)FUN_01e3f500();
          local_58._0_4_ = (uint32_t)uVar11;
          local_58._4_4_ = (uint32_t)((uint64_t)uVar11 >> 0x20);
          fStack_50 = (float)extraout_XMM0_Qb_01;
          fStack_4c = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
          local_78._0_4_ = auVar33._0_4_;
          fStack_84 = auVar13._4_4_;
          if ((g_02390124 <= fVar10) ||
             (((float)local_58._0_4_ <= (float)local_78._0_4_ &&
              ((float)local_58._4_4_ <= fStack_84)))) {
            fStack_7c = auVar13._12_4_;
            auVar15._4_12_ = auVar13._4_12_;
            _local_68 = auVar13;
            if ((float)local_58._0_4_ <= (float)local_78._0_4_) {
              fStack_60 = fStack_50;
              local_68 = (uint8_t  [8])uVar11;
              fStack_5c = fStack_4c;
            }
            local_e8 = auVar13._0_4_;
            fVar10 = local_e8;
            fStack_e0 = auVar13._8_4_;
            fVar28 = fStack_e0;
            fStack_e4 = fStack_84;
            fStack_dc = fStack_7c;
            if ((float)local_58._4_4_ <= fVar26) {
              local_e8 = (float)local_58._0_4_;
              fStack_e4 = (float)local_58._4_4_;
              fStack_e0 = fStack_50;
              fStack_dc = fStack_4c;
            }
            iVar7 = FUN_01e3f510();
            auVar4._4_4_ = fStack_e4;
            auVar4._0_4_ = local_e8;
            auVar4._8_4_ = fStack_e0;
            auVar4._12_4_ = fStack_dc;
            _local_68 = blendps(_local_68,auVar4,2);
            if (iVar7 == 1) {
              auVar5._4_4_ = fVar26;
              auVar5._0_4_ = fVar26;
              auVar5._8_4_ = uVar31;
              auVar5._12_4_ = uVar31;
              auVar21._4_12_ = auVar5._4_12_;
              auVar21._0_4_ = (fVar26 - fStack_e4) * g_0239011c;
              auVar29 = roundss(ZEXT816(0),auVar21,9);
              auVar14._4_12_ = auVar29._4_12_;
              auVar14._0_4_ = auVar29._0_4_ + fVar27;
              _local_58 = insertps(auVar32,auVar14,0x10);
            }
            else if (iVar7 == 2) {
              auVar6._4_4_ = fVar26;
              auVar6._0_4_ = fVar26;
              auVar6._8_4_ = uVar31;
              auVar6._12_4_ = uVar31;
              auVar22._4_12_ = auVar6._4_12_;
              auVar22._0_4_ = (fVar26 - fStack_e4) + fVar27;
              _local_58 = insertps(auVar32,auVar22,0x10);
            }
            else {
              _local_58 = auVar32;
              if (iVar7 == 3) {
                _local_68 = blendps(_local_68,auVar13,2);
              }
            }
            iVar7 = FUN_01e3f520();
            if (iVar7 == 1) {
              auVar15._0_4_ = (fVar10 - (float)local_68._0_4_) * g_0239011c;
              roundss(auVar15,auVar15,9);
            }
            else if (iVar7 == 2) {
              auVar16._0_4_ = fVar10 - (float)local_68._0_4_;
              auVar16._4_4_ = fStack_84 - (float)local_68._4_4_;
              auVar16._8_4_ = fVar28 - fStack_60;
              auVar16._12_4_ = fStack_7c - fStack_5c;
              blendps(_local_58,auVar16,0xd);
            }
            else if (iVar7 == 3) {
              blendps(_local_68,auVar13,0xd);
            }
            FUN_01e3f530();
            FUN_00d05650();
            (**(code **)(*plVar2 + 0x5d8))();
          }
          else {
            (**(code **)(*plVar2 + 0x5d8))(g_023dccec,g_023dccf4);
          }
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_000a9680();
  }
  return;
}



// ============================================================
// 01e7a8e0
// ============================================================
// Function: FUN_01e7a8e0
// Address: 01e7a8e0
// Size: 1602 bytes
// Class: GNBackgroundView
// String references:
//   "GNBackgroundView"
// === GNBackgroundView properties ===
//                   _shrinks
//                   _borderColor
//                   _highlightedBorderColor
//                   _borderWidth
//                   _cornerRadius


void FUN_01e7a8e0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_02689d88;
  this_ptr[2] = &g_0268a6b8;
  *(void*)(this_ptr + 0x27) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f51bb == '\0') {
    FUN_01e7b080();
    FUN_00e87980();
  }
  FUN_01e7b1f0();
  FUN_01e7b470();
  FUN_01e7b6f0();
  this_ptr[0x2b] = 0;
  this_ptr[0x2c] = 0;
  // [STATIC_INIT: property registration]
  if (g_027f51bb == '\0') {
    FUN_01e7b970();
    FUN_00e87980();
  }
  FUN_01e7bae0();
  FUN_01e7bd60();
  FUN_01e7bfe0();
  *(void*)(this_ptr + 0x30) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f51bb == '\0') {
    FUN_01e7c260();
    FUN_00e87980();
  }
  FUN_01e7c3d0();
  *(void*)(this_ptr + 0x32) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f51bb == '\0') {
    FUN_01e7c650();
    FUN_00e87980();
  }
  FUN_01e7c7c0();
  this_ptr[0x34] = 0;
  this_ptr[0x35] = 0;
  // [STATIC_INIT: property registration]
  if (g_027f51bb == '\0') {
    FUN_01e7ca40();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x36) = 0;
  // [STATIC_INIT: property registration]
  if (g_027f51bb == '\0') {
    FUN_01e7cbb0();
    FUN_00e87980();
  }
  return;
}



// ============================================================
// 01d80540
// ============================================================
// Function: FUN_01d80540
// Address: 01d80540
// Size: 513 bytes
// Class: GNBackgroundView
// === GNBackgroundView properties ===
//                   _shrinks
//                   _borderColor
//                   _highlightedBorderColor
//                   _borderWidth
//                   _cornerRadius


void FUN_01d80540(uint32_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  void*arg1;
  int64_t *this_ptr;
  int64_t local_b8;
  char local_b0;
  
  if (this_ptr[0x2d] == 0) {
    if (((*(float *)(this_ptr + 0x30) <= 0.0) || (this_ptr[0x31] == 0)) &&
       ((char)this_ptr[0x36] == '\0')) {
      FUN_01e44a80(param_1,param_2);
      goto LAB_01d8069e;
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
  }
  FUN_01d48370();
  plVar1 = (int64_t *)*arg1;
  FUN_01d7ebd0();
  if ((local_b0 == '\0') && (local_b8 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x398))();
  if (local_b8 != 0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x28] != 0) {
    FUN_01d80840();
  }
  FUN_01e44a80(param_1,param_2);
  if (this_ptr[0x28] == 0) {
    FUN_01d80840();
  }
  FUN_01d48390();
LAB_01d8069e:
  if (this_ptr[0x29] != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    (**(code **)(*this_ptr + 0x918))(param_1,param_2);
  }
  return;
}



// ============================================================
// 01d7e3a0
// ============================================================
// Function: FUN_01d7e3a0
// Address: 01d7e3a0
// Size: 685 bytes
// Class: GNBackgroundView
// String references:
//   "setBackgroundColor"
//   "setBorderColor"
//   "GNBackgroundView"
// === GNBackgroundView properties ===
//                   _shrinks
//                   _borderColor
//                   _highlightedBorderColor
//                   _borderWidth
//                   _cornerRadius


void FUN_01d7e3a0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b8550 = "setBackgroundColor";
      g_028b8558 = &g_027f5100;
      g_028b8560 = 0;
      g_028b8568 = &g_027f11f8;
      g_028b8570 = FUN_01d80db0;
      g_028b8578 = FUN_01d7e670;
      g_028b8580 = 0;
      ram_00000000028b8588 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b8598 = "setBorderColor";
      g_028b85a0 = &g_027f5100;
      g_028b85a8 = 0;
      g_028b85b0 = &g_027f11f8;
      g_028b85b8 = FUN_01d80db0;
      g_028b85c0 = FUN_01d7e6d0;
      g_028b85c8 = 0;
      ram_00000000028b85d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

