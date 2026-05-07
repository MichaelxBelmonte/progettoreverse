// Function: FUN_01cef520
// Address: 01cef520
// Size: 3152 bytes
// Class: GNMultipleValue

void FUN_01cef520(uint64_t param_1,uint8_t param_2 [8])

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  int64_t lVar5;
  int64_t *plVar6;
  char cVar7;
  uint8_t uVar8;
  uint uVar9;
  int iVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  bool bVar13;
  float fVar14;
  uint64_t uVar15;
  double dVar16;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint64_t uVar17;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t local_1f8 [16];
  float local_1c8;
  float fStack_1c4;
  uint32_t uStack_1c0;
  uint32_t uStack_1bc;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
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
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  uint8_t local_b8 [8];
  uint64_t uStack_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  uint32_t local_54;
  uint local_50;
  uint32_t local_4c;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  cVar7 = FUN_01e420b0();
  if (cVar7 == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = (**(code **)(*this_ptr + 0x878))();
  }
  uVar1 = *(void*)((int64_t)this_ptr + 0x18c);
  (**(code **)(*this_ptr + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  iVar10 = (**(code **)(*this_ptr + 0x920))();
  (**(code **)(*this_ptr + 0xa18))();
  if (local_40 == (int64_t *)0x0) {
    bVar13 = false;
  }
  else {
    (**(code **)(*this_ptr + 0xa18))();
    lVar11 = g_027f3d60;
    if (g_027f3d60 != 0) {
      FUN_00d50b00();
    }
    cVar7 = (**(code **)(*local_1b8 + 0x50))();
    if (cVar7 == '\0') {
      bVar13 = false;
    }
    else {
      bVar13 = *(int *)((int64_t)this_ptr + 500) == 0;
    }
    if (lVar11 != 0) {
      FUN_00d50b20();
    }
    if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar13) {
    uVar1 = 0x2c;
  }
  local_50 = uVar9 & 0xff;
  if ((char)this_ptr[0x3e] != '\0') {
    if (iVar10 == 0) {
      param_2 = (uint8_t  [8])0x0;
      in_XMM1_Qb = 0;
      if (((double)this_ptr[0x43] != 0.0) || (NAN((double)this_ptr[0x43]))) {
        dVar16 = (double)FUN_00e7d6f0();
        auVar20._0_8_ = dVar16 - (double)this_ptr[0x43];
        auVar20._8_8_ = extraout_XMM0_Qb;
        auVar18._4_12_ = auVar20._4_12_;
        auVar18._0_4_ = (float)auVar20._0_8_ * g_0239011c;
        auVar20 = roundss(ZEXT816(0),auVar18,9);
        fVar14 = (auVar18._0_4_ - auVar20._0_4_) * g_02410f88;
        auVar19._0_4_ = fVar14 + fVar14;
        auVar19._4_12_ = auVar18._4_12_;
        fVar14 = (float)_cosf(auVar19._0_8_);
        auVar20 = ZEXT416((uint)((g_02390124 - fVar14) * g_0239011c));
        FUN_01cc5880();
        FUN_01e3f820();
        uVar2 = *(void*)((int64_t)this_ptr + 0x1fc);
        _local_b8 = auVar20;
        uVar8 = (**(code **)(*this_ptr + 0x9a0))();
        (**(code **)(*this_ptr + 0xa70))();
        param_2 = local_b8;
        in_XMM1_Qb = uStack_b0;
        (**(code **)(*local_48 + 0x3f0))(uVar2,uVar1,0,uVar8);
        FUN_01cc5880();
        goto LAB_01cef887;
      }
    }
    uVar15 = FUN_01e3f820();
    uStack_b0 = in_XMM1_Qb;
    local_b8 = param_2;
    uVar8 = (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    param_2 = local_b8;
    in_XMM1_Qb = uStack_b0;
    (**(code **)(*local_48 + 0x3f0))(uVar15,uVar1,iVar10,uVar8);
  }
LAB_01cef887:
  lVar11 = this_ptr[0x40];
  if (lVar11 != 0) {
    local_a0 = 0;
    FUN_00d50b00();
    local_a0 = '\x01';
    local_a8 = lVar11;
    FUN_01cc48f0();
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_54 = uVar1;
  if (this_ptr[0x3a] == 0) {
    (**(code **)(*this_ptr + 0x960))();
    plVar12 = local_40;
    if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0')
        ) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_168 = plVar12;
    local_160 = '\0';
    local_158 = *arg1;
    local_150 = '\0';
    FUN_01e3f820();
    (**(code **)(*local_48 + 0x548))();
    (**(code **)(*this_ptr + 0xa00))(param_2,&local_168);
    plVar6 = local_40;
    if (plVar12 == local_40) {
LAB_01cefa75:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = plVar12 != (int64_t *)0x0;
        plVar12 = plVar6;
        if (bVar13) {
          FUN_00d50b20();
        }
        goto LAB_01cefa75;
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      plVar12 = plVar6;
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_148 = *arg1;
    local_140 = '\0';
    uVar15 = FUN_01e3f820();
    local_130 = '\0';
    local_138 = plVar12;
    (**(code **)(*this_ptr + 0x9e0))();
    local_78 = local_40;
    local_70 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = '\x01';
    uVar1 = *(void*)((int64_t)this_ptr + 0x174);
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*local_48 + 0x400))(uVar15,param_2,&local_78,uVar1);
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_01cf010f;
  }
  uVar15 = (**(code **)(*this_ptr + 0x9a0))();
  if (((char)uVar15 == '\0') && (lVar11 = this_ptr[0x3c], lVar11 != 0)) {
    FUN_00d50b00();
LAB_01cefc22:
    local_4c = 0;
  }
  else {
    if (((int)this_ptr[0x29] != 0) &&
       ((lVar11 = this_ptr[0x3b], lVar11 != 0 && (*(int *)((int64_t)this_ptr + 500) == 1)))) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    if ((((char)this_ptr[0x31] != '\0') && (lVar11 = this_ptr[0x3b], lVar11 != 0)) &&
       (*(int *)((int64_t)this_ptr + 500) != 1)) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    lVar11 = this_ptr[0x3a];
    if (lVar11 != 0) {
      FUN_00d50b00();
      goto LAB_01cefc22;
    }
    local_4c = (uint32_t)CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
    lVar11 = 0;
  }
  uVar17 = FUN_01e3f820();
  local_1c8 = (float)uVar17;
  fStack_1c4 = (float)((uint64_t)uVar17 >> 0x20);
  uStack_1c0 = (uint32_t)extraout_XMM0_Qb_00;
  uStack_1bc = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
  local_1f8._8_8_ = in_XMM1_Qb;
  local_1f8._0_8_ = param_2;
  uStack_b0 = 0;
  local_b8 = (uint8_t  [8])g_023dccf4;
  uVar15 = param_2;
  FUN_01d530c0();
  (**(code **)(*this_ptr + 0x640))();
  fVar14 = (float)(**(code **)(*local_40 + 0x630))();
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((int)this_ptr[0x42] == 0) {
    FUN_00d05560();
  }
  else if ((int)this_ptr[0x42] == 1) {
    auVar22._4_4_ = fStack_1c4;
    auVar22._0_4_ = fStack_1c4;
    auVar22._8_4_ = uStack_1bc;
    auVar22._12_4_ = uStack_1bc;
    auVar23._4_12_ = auVar22._4_12_;
    auVar23._0_4_ = fStack_1c4 + g_02390d00;
    auVar20 = insertps(ZEXT416((uint)(g_02390d34 + fVar14 + local_1c8)),auVar23,0x10);
    FUN_00d05560(auVar20._0_8_,this_ptr[0x41]);
    auVar3._8_8_ = in_XMM1_Qb;
    auVar3._0_8_ = uVar15;
    fVar14 = fVar14 + (float)uVar15 + g_02394298;
    blendps(auVar3,local_1f8,2);
    auVar4._8_4_ = uStack_1c0;
    auVar4._0_8_ = uVar17;
    auVar4._12_4_ = uStack_1bc;
    auVar21._4_12_ = auVar4._4_12_;
    auVar21._0_4_ = local_1c8 + fVar14;
    blendps(auVar4,auVar21,1);
    register0x00001244 = local_1f8._4_12_;
    local_b8._0_4_ = SUB84(param_2,0) - fVar14;
  }
  else {
    FUN_00d05560();
  }
  local_128 = *arg1;
  local_120 = '\0';
  lVar5 = this_ptr[0x3e];
  local_110 = '\0';
  uVar1 = *(void*)((int64_t)this_ptr + 0x174);
  local_118 = lVar11;
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*local_48 + 0x408))((char)lVar5,local_54,&local_118,uVar1);
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((0.0 < (float)local_b8._0_4_) && (0.0 < (float)local_b8._4_4_)) {
    (**(code **)(*this_ptr + 0x960))();
    plVar12 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != (int64_t *)0x0 && (FUN_00d50b00(), local_38 != '\0')) &&
        (local_40 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    local_108 = plVar12;
    local_100 = '\0';
    local_f8 = *arg1;
    local_f0 = '\0';
    (**(code **)(*local_48 + 0x548))();
    (**(code **)(*this_ptr + 0xa00))(&local_f8,&local_108);
    plVar6 = local_40;
    if (plVar12 == local_40) {
LAB_01ceff74:
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar13 = plVar12 != (int64_t *)0x0;
        plVar12 = plVar6;
        if (bVar13) {
          FUN_00d50b20();
        }
        goto LAB_01ceff74;
      }
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      plVar12 = plVar6;
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_e8 = *arg1;
    local_e0 = '\0';
    local_d0 = '\0';
    local_d8 = plVar12;
    (**(code **)(*this_ptr + 0x9e0))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    uVar1 = *(void*)((int64_t)this_ptr + 0x174);
    (**(code **)(*this_ptr + 0x9a0))();
    (**(code **)(*this_ptr + 0xa70))();
    (**(code **)(*local_48 + 0x400))(&local_d8,local_54,&local_68,uVar1);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_4c == '\0' && lVar11 != 0) {
    FUN_00d50b20();
  }
LAB_01cf010f:
  if (this_ptr[0x40] != 0) {
    local_c0 = '\0';
    local_c8 = 0;
    FUN_01cc48f0();
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}

