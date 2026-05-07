// Function: FUN_01e07690
// Address: 01e07690
// Size: 2637 bytes
// Class: GNMultipleValue

void FUN_01e07690(uint64_t param_1,uint64_t param_2)

{
  uint32_t uVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  byte bVar5;
  char cVar6;
  uint8_t uVar7;
  int iVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int64_t *arg1;
  int64_t *this_ptr;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  float extraout_XMM0_Db;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  float extraout_XMM0_Dd;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  float fVar18;
  float fVar19;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  int64_t local_170;
  char local_168;
  int64_t *local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  uint64_t local_88;
  float fStack_80;
  float fStack_7c;
  int64_t *local_58;
  int64_t *local_40;
  char local_38;
  
  fVar19 = (float)((uint64_t)param_2 >> 0x20);
  fVar18 = (float)param_2;
  cVar6 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar6 != '\0') {
    (**(code **)(*this_ptr + 0x878))();
  }
  (**(code **)(*this_ptr + 0x640))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((char)this_ptr[0x41] != '\0') {
    uVar1 = *(void*)((int64_t)this_ptr + 0x18c);
    FUN_01e3f820();
    local_88 = CONCAT44(fVar19,fVar18);
    cVar6 = *(char *)((int64_t)this_ptr + 0x1e3);
    fStack_80 = in_XMM1_Dc;
    fStack_7c = in_XMM1_Dd;
    uVar7 = (**(code **)(*this_ptr + 0x9a0))();
    uVar10 = 8;
    if (cVar6 == '\0') {
      uVar10 = 0x12;
    }
    fVar18 = (float)local_88;
    fVar19 = local_88._4_4_;
    (**(code **)(*local_40 + 0x3f0))(uVar10,uVar1,0,uVar7);
    in_XMM1_Dc = fStack_80;
    in_XMM1_Dd = fStack_7c;
  }
  local_d8 = FUN_01e3f820();
  local_88 = CONCAT44(fVar19,fVar18);
  uStack_d0 = extraout_XMM0_Qb;
  fStack_80 = in_XMM1_Dc;
  fStack_7c = in_XMM1_Dd;
  uVar10 = FUN_01e3f820();
  cVar6 = (**(code **)(*this_ptr + 0xb30))();
  if (cVar6 != '\0') {
    local_88 = CONCAT44(local_88._4_4_,(float)local_88 - fVar19);
  }
  cVar6 = (**(code **)(*this_ptr + 0xac8))();
  if (cVar6 != '\0') {
    bVar12 = false;
    local_58 = (int64_t *)0x0;
    cVar6 = (char)this_ptr[0x34];
    goto joined_r0x01e07db4;
  }
  lVar2 = this_ptr[0x42];
  if (lVar2 != 0) {
    local_b0 = 0;
    FUN_00d50b00();
    local_b0 = '\x01';
    local_b8 = lVar2;
    FUN_01cc48f0();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x960))();
  if (local_40 == (int64_t *)0x0) {
    bVar5 = 1;
    bVar11 = 0;
    bVar12 = false;
    local_58 = (int64_t *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    local_58 = local_40;
    if (*(char *)((int64_t)this_ptr + 0x222) != '\0') {
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar9 = (int64_t)&g_025795a8;
      (*g_025795c0)();
      iVar8 = FUN_00d8c7a0();
      if (0 < iVar8) {
        iVar8 = iVar8 + 1;
        do {
          lVar2 = g_02726ce0;
          if (g_02726ce0 != 0) {
            FUN_00d50b00();
          }
          FUN_00d8dbf0();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          iVar8 = iVar8 + -1;
        } while (1 < iVar8);
      }
      if (plVar9 != local_40) {
        if (plVar9 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        local_58 = plVar9;
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    bVar11 = 1;
    bVar5 = 0;
    bVar12 = true;
  }
  (**(code **)(*local_40 + 0x548))();
  local_138 = local_58;
  local_130 = '\0';
  local_128 = *arg1;
  local_120 = '\0';
  (**(code **)(*this_ptr + 0xa00))(&local_128,&local_138);
  if (local_40 == local_58) {
    if ((bool)(bVar5 & local_58 != (int64_t *)0x0)) {
      if (local_38 != '\0') goto LAB_01e07ab0;
      bVar12 = true;
      FUN_00d50b00();
    }
LAB_01e07b12:
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if ((bool)(bVar11 & local_58 != (int64_t *)0x0)) {
        local_58 = local_40;
        FUN_00d50b20();
        bVar12 = true;
      }
      else {
        local_58 = local_40;
        bVar12 = true;
      }
      goto LAB_01e07b12;
    }
    bVar12 = local_58 != (int64_t *)0x0;
    local_58 = local_40;
    if ((bool)(bVar11 & bVar12)) {
      FUN_00d50b20();
    }
LAB_01e07ab0:
    local_38 = '\0';
    bVar12 = true;
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9e0))();
  if (local_40 == (int64_t *)0x0) {
    if ((local_88._4_4_ == g_02421584) && (!NAN(local_88._4_4_) && !NAN(g_02421584))) {
      (**(code **)(*(int64_t *)*arg1 + 0x370))();
    }
  }
  else if (local_38 != '\0') {
    FUN_00d50b20();
  }
  local_118 = *arg1;
  local_110 = '\0';
  local_100 = '\0';
  local_108 = local_58;
  (**(code **)(*this_ptr + 0x9e0))();
  local_90 = 0;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_38 = '\0';
  local_90 = '\x01';
  local_98 = local_40;
  uVar1 = *(void*)((int64_t)this_ptr + 0x174);
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*local_40 + 0x400))(&local_108,(float)local_88,&local_98,uVar1);
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x9e0))();
  if (local_40 == (int64_t *)0x0) {
    if ((local_88._4_4_ == g_02421584) && (!NAN(local_88._4_4_) && !NAN(g_02421584))) {
      (**(code **)(*(int64_t *)*arg1 + 0x370))();
    }
  }
  if (this_ptr[0x42] == 0) {
    cVar6 = (char)this_ptr[0x34];
  }
  else {
    local_f0 = '\0';
    local_f8 = 0;
    FUN_01cc48f0();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    cVar6 = (char)this_ptr[0x34];
  }
joined_r0x01e07db4:
  if (cVar6 != '\0') {
    local_e8 = *arg1;
    local_e0 = '\0';
    (**(code **)(*local_40 + 0x518))();
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x970))();
  if (local_40 == (int64_t *)0x0) {
    bVar13 = this_ptr[0x45] != 0;
  }
  else {
    (**(code **)(*this_ptr + 0x970))();
    iVar8 = FUN_00d8c7a0();
    if (iVar8 == 0) {
      bVar13 = this_ptr[0x45] != 0;
    }
    else {
      bVar13 = false;
    }
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    local_d8 = g_023dccec;
    uStack_d0 = 0;
    FUN_01d526f0();
    plVar9 = (int64_t *)*arg1;
    local_a0 = 0;
    local_a8 = this_ptr[0x45];
    if (local_a8 != 0) {
      FUN_00d50b00();
    }
    auVar15._4_4_ = local_88._4_4_ - extraout_XMM0_Db;
    auVar15._12_4_ = fStack_7c - extraout_XMM0_Dd;
    auVar15._0_4_ = auVar15._4_4_;
    auVar15._8_4_ = auVar15._12_4_;
    auVar14._4_12_ = auVar15._4_12_;
    auVar14._0_4_ = auVar15._4_4_ * g_0239011c;
    auVar15 = roundss(auVar14,auVar14,10);
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = auVar15._0_4_ + g_02390d34;
    insertps(g_024215a0,auVar16,0x10);
    local_a0 = '\x01';
    (**(code **)(*plVar9 + 0x408))();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  cVar6 = (**(code **)(*this_ptr + 0xb30))();
  if (cVar6 != '\0') {
    local_88 = g_023dccec;
    fStack_80 = 0.0;
    fStack_7c = 0.0;
    FUN_01e08690();
    local_d8 = FUN_01d526f0();
    uStack_d0 = extraout_XMM0_Qb_01;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar9 = (int64_t *)*arg1;
    FUN_01e08690();
    local_c0 = 0;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_c8 = local_40;
    auVar20._0_4_ = fVar18 - fVar19;
    auVar20._4_4_ = fVar19 - fVar19;
    auVar20._8_4_ = in_XMM1_Dc - in_XMM1_Dd;
    auVar20._12_4_ = in_XMM1_Dd - in_XMM1_Dd;
    auVar4._4_4_ = fVar19;
    auVar4._0_4_ = fVar19;
    auVar4._8_4_ = in_XMM1_Dd;
    auVar4._12_4_ = in_XMM1_Dd;
    auVar17._4_12_ = auVar4._4_12_;
    auVar17._0_4_ = fVar19 - (float)local_d8;
    auVar21._0_4_ = fVar18 - (float)local_d8;
    auVar21._4_4_ = fVar19 - local_d8._4_4_;
    auVar21._8_4_ = in_XMM1_Dc - (float)uStack_d0;
    auVar21._12_4_ = in_XMM1_Dd - uStack_d0._4_4_;
    auVar15 = blendps(auVar21,auVar17,1);
    auVar22._0_4_ = auVar15._0_4_ * g_023945d0;
    auVar22._4_4_ = auVar15._4_4_ * _UNK_023945d4;
    auVar22._8_4_ = auVar15._8_4_ * _UNK_023945d8;
    auVar22._12_4_ = auVar15._12_4_ * _UNK_023945dc;
    roundps(auVar17,auVar22,10);
    auVar3._8_8_ = extraout_XMM0_Qb_00;
    auVar3._0_8_ = uVar10;
    blendps(auVar20,auVar3,2);
    local_c0 = '\x01';
    (**(code **)(*plVar9 + 0x408))();
    if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar12) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

