// Function: FUN_01d77a60
// Address: 01d77a60
// Size: 2956 bytes
// Class: GNMultipleValue

void FUN_01d77a60(uint64_t param_1)

{
  uint32_t uVar1;
  uint8_t auVar2 [16];
  int64_t lVar3;
  char cVar4;
  uint8_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t **pplVar9;
  int64_t *plVar10;
  bool bVar11;
  float fVar12;
  double dVar13;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t uVar14;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar17 [16];
  float fVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint8_t in_XMM1 [16];
  uint8_t auVar19 [16];
  float fVar24;
  float fVar25;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  uint64_t local_128;
  uint64_t uStack_120;
  uint32_t local_10c;
  int64_t local_108;
  char local_100;
  uint64_t local_f8;
  uint64_t uStack_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  uint64_t local_88;
  uint64_t uStack_80;
  int64_t local_68;
  char local_60;
  uint8_t local_58 [16];
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  pplVar9 = &local_40;
  local_58 = in_XMM1;
  (**(code **)(*this_ptr + 0x640))();
  plVar10 = local_40;
  FUN_01d74c10();
  if (plVar10 == (int64_t *)0x0) {
LAB_01d77ac5:
    pplVar9 = &g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_01d77ac5;
  }
  plVar10 = *pplVar9;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_01cef520(param_1);
    return;
  }
  cVar4 = FUN_01e420b0();
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(*this_ptr + 0x878))();
  }
  (**(code **)(*this_ptr + 0x640))();
  local_58._0_8_ = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = *(void*)((int64_t)this_ptr + 0x1fc);
  cVar4 = FUN_01cef4b0();
  if (cVar4 == '\0') {
    FUN_01cef410();
    bVar11 = local_40 != (int64_t *)0x0;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar7 = 0;
  }
  else {
    bVar11 = false;
  }
  uVar1 = *(void*)((int64_t)this_ptr + 0x18c);
  cVar4 = FUN_01cf0800();
  local_128 = CONCAT44(local_128._4_4_,uVar6) & 0xffffffff000000ff;
  if (cVar4 == '\0') {
    local_f8 = FUN_01e3f820();
    uVar6 = (**(code **)(*this_ptr + 0x920))();
    uVar5 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    local_88 = in_XMM1._0_8_;
    uStack_80 = in_XMM1._8_8_;
    (**(code **)(*(int64_t *)local_58._0_8_ + 0x3f0))(local_f8,uVar1,uVar6,uVar5);
  }
  else {
    dVar13 = (double)FUN_00e7d6f0();
    auVar19._0_8_ = dVar13 - (double)this_ptr[0x43];
    auVar19._8_8_ = extraout_XMM0_Qb;
    auVar15._4_12_ = auVar19._4_12_;
    auVar15._0_4_ = (float)auVar19._0_8_ * g_0239011c;
    auVar19 = roundss(in_XMM1,auVar15,9);
    fVar12 = (auVar15._0_4_ - auVar19._0_4_) * g_02410f88;
    auVar16._0_4_ = fVar12 + fVar12;
    auVar16._4_12_ = auVar15._4_12_;
    fVar12 = (float)_cosf(auVar16._0_8_);
    auVar19 = ZEXT416((uint)((g_02390124 - fVar12) * g_0239011c));
    FUN_01cc5880();
    local_f8 = FUN_01e3f820();
    uVar6 = (**(code **)(*this_ptr + 0x920))();
    uVar5 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    local_88 = auVar19._0_8_;
    uStack_80 = auVar19._8_8_;
    (**(code **)(*(int64_t *)local_58._0_8_ + 0x3f0))(uVar7,uVar1,uVar6,uVar5);
    FUN_01cc5880();
  }
  uVar14 = FUN_01e3f820();
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  FUN_01cef410();
  plVar10 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 == (int64_t *)0x0) {
    uVar14 = FUN_01e3f820();
    (**(code **)(*this_ptr + 0x960))();
    plVar10 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*this_ptr + 0x9e0))();
    local_68 = local_108;
    local_60 = 0;
    if (local_100 == '\0') {
      if (local_108 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_100 = '\0';
    }
    local_60 = '\x01';
    uVar6 = *(void*)((int64_t)this_ptr + 0x174);
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*(int64_t *)local_58._0_8_ + 0x400))(uVar14,5,&local_68,uVar6);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pplVar9 = &local_40;
    (**(code **)(*this_ptr + 0x640))();
    plVar10 = local_40;
    FUN_00209700();
    if (plVar10 == (int64_t *)0x0) {
LAB_01d780ae:
      pplVar9 = &g_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_01d780ae;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (int64_t *)0x0) {
      if ((char)this_ptr[0x4a] != '\0') {
        cVar4 = (**(code **)(*this_ptr + 0x9a0))();
        if (cVar4 == '\0') {
          local_d0 = 0;
          lVar8 = plVar10[0x12];
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_d0 = '\x01';
          local_d8 = lVar8;
          FUN_01d488d0();
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_e0 = 0;
          lVar8 = plVar10[0x11];
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          local_e0 = '\x01';
          local_e8 = lVar8;
          FUN_01d488d0();
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*this_ptr + 0x640))();
        FUN_01cb3a60();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
    goto LAB_01d785d1;
  }
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))(uVar14);
  uVar14 = (**(code **)(*this_ptr + 0x9a0))();
  if (((char)uVar14 == '\0') && (lVar8 = this_ptr[0x3c], lVar8 != 0)) {
    FUN_00d50b00();
LAB_01d78264:
    local_44 = 0;
  }
  else {
    if (((int)this_ptr[0x29] != 0) &&
       ((lVar8 = this_ptr[0x3b], lVar8 != 0 && (*(int *)((int64_t)this_ptr + 500) == 1)))) {
      FUN_00d50b00();
      goto LAB_01d78264;
    }
    if ((((char)this_ptr[0x31] != '\0') && (lVar8 = this_ptr[0x3b], lVar8 != 0)) &&
       (*(int *)((int64_t)this_ptr + 500) != 1)) {
      FUN_00d50b00();
      goto LAB_01d78264;
    }
    lVar8 = this_ptr[0x3a];
    if (lVar8 != 0) {
      FUN_00d50b00();
      goto LAB_01d78264;
    }
    local_44 = (uint32_t)CONCAT71((int7)((uint64_t)uVar14 >> 8),1);
    lVar8 = 0;
  }
  FUN_00d05560();
  local_10c = *(void*)((int64_t)this_ptr + 0x18c);
  lVar3 = this_ptr[0x3e];
  local_140 = '\0';
  local_148 = lVar8;
  (**(code **)(*this_ptr + 0x920))();
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  fVar12 = (float)local_f8;
  fVar20 = local_f8._4_4_;
  fVar22 = (float)uStack_f0;
  fVar24 = uStack_f0._4_4_;
  (**(code **)(*(int64_t *)local_58._0_8_ + 0x408))((char)lVar3,local_10c,&local_148,2);
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  pplVar9 = &local_40;
  (**(code **)(*this_ptr + 0x640))();
  plVar10 = local_40;
  FUN_00209700();
  if (plVar10 == (int64_t *)0x0) {
    pplVar9 = &g_02802688;
    plVar10 = g_02802688;
    if (g_02802690 == '\0') goto LAB_01d783e8;
LAB_01d783c9:
    *(void*)(pplVar9 + 1) = 0;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') {
      pplVar9 = &g_02802688;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) != '\0') goto LAB_01d783c9;
LAB_01d783e8:
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar11) && (plVar10 != (int64_t *)0x0)) {
    cVar4 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar4 == '\0') {
      local_b0 = 0;
      lVar3 = plVar10[0x12];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      local_b8 = lVar3;
      FUN_01d488d0();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_c0 = 0;
      lVar3 = plVar10[0x11];
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_c0 = '\x01';
      local_c8 = lVar3;
      FUN_01d488d0();
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*this_ptr + 0x640))();
    local_138 = *arg1;
    local_130 = '\0';
    local_128 = FUN_01e3f820();
    fVar18 = fVar12;
    fVar21 = fVar20;
    fVar23 = fVar22;
    fVar25 = fVar24;
    uStack_120 = extraout_XMM0_Qb_00;
    uVar14 = FUN_01e3f820();
    auVar17._0_4_ = (float)uVar14 + fVar18;
    auVar17._4_4_ = (float)((uint64_t)uVar14 >> 0x20) + fVar21;
    auVar17._8_4_ = (float)extraout_XMM0_Qb_01 + fVar23;
    auVar17._12_4_ = (float)((uint64_t)extraout_XMM0_Qb_01 >> 0x20) + fVar25;
    auVar2._4_4_ = local_128._4_4_ + fVar20;
    auVar2._0_4_ = (float)local_128 + fVar12;
    auVar2._8_4_ = (float)uStack_120 + fVar22;
    auVar2._12_4_ = uStack_120._4_4_ + fVar24;
    blendps(auVar17,auVar2,0xd);
    FUN_01cb3a60();
    if ((local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d48390();
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_44 == '\0' && lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_01d785d1:
  FUN_00d50b20();
  return;
}

