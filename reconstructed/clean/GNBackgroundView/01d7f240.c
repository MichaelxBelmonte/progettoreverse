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

