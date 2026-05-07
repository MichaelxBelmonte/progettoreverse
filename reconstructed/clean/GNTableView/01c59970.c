// Function: FUN_01c59970
// Address: 01c59970
// Size: 3055 bytes
// Class: GNTableView
// === GNTableView properties ===
//   GNTableViewDropFeedback _dropFeedback
//                   _mouseTrackingValueRowIndex
//                   _mouseTrackingValueColumnIndex
//                   _mouseTrackingPrototype
//                   _focusedRowIndex
//                   _didGetMouseDownFromCell
//                   _postSelectionTimer
//                   _postSelectionRow
//                   _columns


void FUN_01c59970(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  int64_t lVar4;
  int64_t *plVar5;
  char cVar6;
  char *pcVar7;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar8;
  float fVar9;
  uint64_t uVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar11;
  float fVar12;
  uint32_t in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar13;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  float local_f8;
  float fStack_f4;
  uint32_t uStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_dc;
  uint64_t local_d8;
  uint64_t local_c8;
  uint32_t uStack_c0;
  float fStack_bc;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  fStack_f4 = (float)((uint64_t)param_2 >> 0x20);
  local_f8 = (float)param_2;
  fStack_e4 = (float)((uint64_t)param_1 >> 0x20);
  local_e8 = (float)param_1;
  uStack_f0 = in_XMM1_Dc;
  fStack_ec = in_XMM1_Dd;
  fStack_dc = in_XMM0_Dd;
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_40;
  pcVar7 = local_48;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = plVar1;
  if (((char)this_ptr[0x5c] == '\0') && (this_ptr[0x2e] != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (int64_t *)this_ptr[0x2e];
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    uVar8 = (**(code **)(*plVar1 + 0x390))((int)this_ptr[0x4b]);
    *(void*)((int64_t)this_ptr + 0x254) = uVar8;
    FUN_00d50b20();
  }
  if (local_f8 < g_023908d8) {
    local_e8 = local_e8 + g_023b1614;
    local_f8 = local_f8 + g_023b36b0;
  }
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  uVar8 = uStack_f0;
  fVar13 = fStack_ec;
  FUN_01e3f820();
  if ((int)this_ptr[0x39] == 1) {
    local_d8 = FUN_01e3f820();
    lVar4 = this_ptr[0x39];
    local_c8._0_4_ = fVar11;
    local_c8._4_4_ = fVar12;
    uStack_c0 = uVar8;
    fStack_bc = fVar13;
    FUN_01d48370();
    auVar3._4_4_ = local_c8._4_4_;
    auVar3._0_4_ = (float)local_c8;
    auVar3._8_4_ = uStack_c0;
    auVar3._12_4_ = fStack_bc;
    if ((int)lVar4 == 1) {
      auVar2._4_4_ = local_c8._4_4_;
      auVar2._0_4_ = local_c8._4_4_ + g_0241c6e4;
      auVar2._8_4_ = fStack_bc;
      auVar2._12_4_ = fStack_bc;
      insertps(auVar3,auVar2,0x10);
    }
    plVar1 = (int64_t *)*arg1;
    FUN_00d05360(local_e8,local_f8,(uint32_t)local_d8);
    (**(code **)(*plVar1 + 0x390))();
  }
  FUN_01c532f0(local_e8,local_f8);
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  uVar8 = uStack_f0;
  fVar13 = fStack_ec;
  FUN_01c54470(local_e8);
  if (((((*(float *)((int64_t)this_ptr + 0x21c) != (float)g_023dccec) ||
        (NAN(*(float *)((int64_t)this_ptr + 0x21c)) || NAN((float)g_023dccec))) ||
       (*(float *)(this_ptr + 0x44) != g_023dccec._4_4_)) ||
      ((NAN(*(float *)(this_ptr + 0x44)) || NAN(g_023dccec._4_4_) ||
       (*(float *)((int64_t)this_ptr + 0x224) != (float)g_023dccf4)))) ||
     (NAN(*(float *)((int64_t)this_ptr + 0x224)) || NAN((float)g_023dccf4))) {
LAB_01c59bbf:
    FUN_01d39800((int)*(void*)((int64_t)this_ptr + 0x21c),
                 (int)*(void*)((int64_t)this_ptr + 0x224),g_02390124);
    plVar1 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_58 + 0x390))();
    plVar5 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d488d0();
    FUN_01d48b40(g_02390124);
    fVar11 = (float)*(void*)((int64_t)this_ptr + 0x21c);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))
              (fVar11,(float)((uint64_t)*(void*)((int64_t)this_ptr + 0x21c) >> 0x20) +
                      g_02394248,*(float *)((int64_t)this_ptr + 0x224) + fVar11 + g_02390d00);
    uVar8 = (uint32_t)*(void*)((int64_t)this_ptr + 0x21c);
    (**(code **)(*(int64_t *)*arg1 + 0x3e0))
              (uVar8,(float)((uint64_t)*(void*)((int64_t)this_ptr + 0x21c) >> 0x20) +
                     g_02394248,uVar8);
    fVar12 = (float)((uint64_t)*(void*)((int64_t)this_ptr + 0x21c) >> 0x20);
    fVar9 = *(float *)((int64_t)this_ptr + 0x224) +
            (float)*(void*)((int64_t)this_ptr + 0x21c) + g_02390d00;
    uVar8 = 0;
    fVar13 = 0.0;
    fVar11 = fVar12 + g_02394248;
    fVar9 = (float)(**(code **)(*(int64_t *)*arg1 + 0x3e0))(fVar9,fVar11,fVar9);
    if (plVar5 != (int64_t *)0x0) {
      fVar9 = (float)FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      fVar9 = (float)FUN_00d50b20();
    }
  }
  else {
    fVar9 = *(float *)(this_ptr + 0x45);
    if ((fVar9 != g_023dccf4._4_4_) || (NAN(fVar9) || NAN(g_023dccf4._4_4_))) goto LAB_01c59bbf;
  }
  if ((int)this_ptr[0x39] == 1) {
    FUN_01d48390();
    fVar11 = local_f8;
    fVar9 = (float)FUN_01c5ab50(local_e8);
    fVar12 = fStack_f4;
    uVar8 = uStack_f0;
    fVar13 = fStack_ec;
  }
  lVar4 = g_026e41f0;
  if ((*(char *)((int64_t)this_ptr + 0x22d) != '\0') ||
     (*(char *)((int64_t)this_ptr + 0x22e) != '\0')) {
    if (g_026e41f0 != 0) {
      fVar9 = (float)FUN_00d50b00();
    }
    local_128 = lVar4;
    local_120 = '\x01';
    (**(code **)(*local_58 + 0x3b0))(fVar9,&local_128);
    local_98 = local_40;
    local_90 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_90 = '\x01';
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (*(char *)((int64_t)this_ptr + 0x22e) != '\0') {
      plVar1 = (int64_t *)*arg1;
      fVar9 = (float)FUN_01e3f820();
      fVar9 = fVar9 + fVar11;
      fVar11 = 0.0;
      fVar12 = 0.0;
      uVar8 = 0;
      fVar13 = 0.0;
      (**(code **)(*plVar1 + 0x3e0))(0,0,fVar9 + g_02390d00);
    }
    if (*(char *)((int64_t)this_ptr + 0x22d) != '\0') {
      plVar1 = (int64_t *)*arg1;
      uVar10 = FUN_01e3f820();
      local_c8._0_4_ = fVar11;
      local_c8._4_4_ = fVar12;
      uStack_c0 = uVar8;
      fStack_bc = fVar13;
      local_d8 = uVar10;
      fVar9 = (float)FUN_01e3f820();
      FUN_01e3f820();
      fVar12 = extraout_XMM0_Db + fVar12;
      auVar14._4_4_ = fVar12;
      auVar14._0_4_ = fVar12;
      auVar14._8_4_ = extraout_XMM0_Dd + fVar13;
      auVar14._12_4_ = extraout_XMM0_Dd + fVar13;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = fVar12 + g_02390d00;
      (**(code **)(*plVar1 + 0x3e0))
                (0,local_d8._4_4_ + local_c8._4_4_ + g_02390d00,fVar9 + fVar11 + g_02390d00,
                 auVar15._0_8_);
    }
  }
  fVar11 = 0.0;
  fVar12 = 0.0;
  if ((*(float *)((int64_t)this_ptr + 0x23c) != 0.0) ||
     (NAN(*(float *)((int64_t)this_ptr + 0x23c)))) {
    uVar8 = FUN_01d48a00();
    local_d8._0_4_ = uVar8;
    FUN_01d489d0(*(void*)((int64_t)this_ptr + 0x23c));
    FUN_01d48b40(g_02390124);
    FUN_01c4b410();
    local_b8 = local_40;
    local_b0 = 0;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    FUN_01d488d0();
    if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_c8._0_4_ = (float)this_ptr[0x49];
    local_c8._4_4_ = (float)((uint64_t)this_ptr[0x49] >> 0x20);
    uStack_c0 = 0;
    fStack_bc = 0.0;
    FUN_01e3f820();
    fVar11 = extraout_XMM0_Db_00 + fVar11;
    auVar16._4_4_ = fVar11;
    auVar16._0_4_ = fVar11;
    auVar16._8_4_ = extraout_XMM0_Dd_00 + fVar12;
    auVar16._12_4_ = extraout_XMM0_Dd_00 + fVar12;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = fVar11 + g_02390d00;
    (**(code **)(*plVar1 + 0x3e0))((float)local_c8,0,(float)local_c8,auVar17._0_8_);
    FUN_01d489d0((uint32_t)local_d8);
  }
  lVar4 = this_ptr[0x5b];
  if (lVar4 != 0) {
    FUN_00d50b00();
    FUN_01d48b40(g_02390124);
    FUN_01c4b410();
    local_a8 = local_40;
    local_a0 = 0;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    uVar10 = FUN_00dd6bf0();
    local_d8 = uVar10;
    local_c8 = FUN_00dd6bf0();
    uStack_c0 = extraout_XMM0_Dc;
    fStack_bc = extraout_XMM0_Dd_01;
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3e0))((uint32_t)local_d8,0,(float)local_c8);
  }
  if ((((char)this_ptr[0x4a] != '\0') && (local_e8 <= *(float *)((int64_t)this_ptr + 0x254))) &&
     (*(float *)((int64_t)this_ptr + 0x254) <= local_e8 + local_f8 + g_02390d00)) {
    FUN_01d48b40(g_02390124);
    (**(code **)(*local_58 + 0x390))();
    local_88 = local_40;
    local_80 = 0;
    fVar11 = fStack_e4;
    fVar12 = fStack_dc;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        fVar11 = fStack_e4;
        fVar12 = fStack_dc;
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    uVar10 = local_d8;
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
      uVar10 = local_d8;
    }
    local_d8._4_4_ = (float)((uint64_t)uVar10 >> 0x20);
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      local_d8 = uVar10;
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    local_d8._0_4_ = *(void*)((int64_t)this_ptr + 0x254);
    uVar10 = FUN_01e3f820();
    uVar8 = *(void*)((int64_t)this_ptr + 0x254);
    uStack_c0 = extraout_XMM0_Dc_00;
    fStack_bc = extraout_XMM0_Dd_02;
    local_c8 = uVar10;
    FUN_01e3f820();
    fVar11 = extraout_XMM0_Db_01 + fVar11;
    auVar18._4_4_ = fVar11;
    auVar18._0_4_ = fVar11;
    auVar18._8_4_ = extraout_XMM0_Dd_03 + fVar12;
    auVar18._12_4_ = extraout_XMM0_Dd_03 + fVar12;
    auVar19._4_12_ = auVar18._4_12_;
    auVar19._0_4_ = fVar11 + g_02390d00;
    (**(code **)(*plVar1 + 0x3e0))((uint32_t)local_d8,local_c8._4_4_,uVar8,auVar19._0_8_);
  }
  if ((*(float *)(this_ptr + 0x52) == (float)g_023dccec) &&
     (!NAN(*(float *)(this_ptr + 0x52)) && !NAN((float)g_023dccec))) {
    if ((*(float *)((int64_t)this_ptr + 0x294) == g_023dccec._4_4_) &&
       (!NAN(*(float *)((int64_t)this_ptr + 0x294)) && !NAN(g_023dccec._4_4_))) {
      if ((*(float *)(this_ptr + 0x53) == (float)g_023dccf4) &&
         (!NAN(*(float *)(this_ptr + 0x53)) && !NAN((float)g_023dccf4))) {
        if ((*(float *)((int64_t)this_ptr + 0x29c) == g_023dccf4._4_4_) &&
           (!NAN(*(float *)((int64_t)this_ptr + 0x29c)) && !NAN(g_023dccf4._4_4_)))
        goto LAB_01c5a52a;
      }
    }
  }
  cVar6 = FUN_00d054a0((int)this_ptr[0x52],(int)this_ptr[0x53],local_e8);
  if (cVar6 != '\0') {
    FUN_01d39800((int)this_ptr[0x52],(int)this_ptr[0x53],g_02390d34);
    plVar1 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_58 + 0x390))();
    plVar5 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfcdc0((int)plVar5[2],*(void*)((int64_t)plVar5 + 0x14),(int)plVar5[3],
                 *(float *)((int64_t)plVar5 + 0x1c) * g_023b1610);
    local_78 = local_40;
    local_70 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_118 = plVar1;
    local_110 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a0))();
    if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_58 + 0x390))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_60 = '\x01';
    FUN_01d488d0();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(g_02390124);
    local_108 = plVar1;
    local_100 = '\0';
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01c5a52a:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

