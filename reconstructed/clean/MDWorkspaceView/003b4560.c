// Function: FUN_003b4560
// Address: 003b4560
// Size: 4112 bytes
// Class: MDWorkspaceView
// String references:
//   "MDWorkspaceView"
// === MDWorkspaceView properties ===
//   bool            _isVertical
//   bool            _allowsChainedResize
//   GNCoord         _size
//   GNCoord         _paddingLineSize
//   GNBorderStyle   _borderStyle


void FUN_003b4560(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  char cVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t **pplVar6;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  uint32_t uVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint64_t uVar10;
  uint64_t uVar11;
  uint32_t in_XMM0_Dc;
  uint32_t extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  float extraout_XMM0_Dc_03;
  uint32_t in_XMM0_Dd;
  uint32_t extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar12;
  float fVar13;
  uint32_t in_XMM1_Dc;
  float fVar14;
  float fVar15;
  uint32_t in_XMM1_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar20;
  uint8_t auVar19 [16];
  int64_t local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  uint64_t local_148;
  float fStack_140;
  float fStack_13c;
  uint64_t local_138;
  float fStack_130;
  float fStack_12c;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  uint8_t local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  int64_t *local_e8;
  char local_e0;
  uint8_t local_d8 [8];
  float fStack_d0;
  float fStack_cc;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  int64_t *local_78;
  char local_70;
  int64_t *local_68;
  char local_60;
  int64_t *local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  fStack_d0 = (float)in_XMM1_Dc;
  local_d8 = (uint8_t  [8])param_2;
  fStack_cc = (float)in_XMM1_Dd;
  fStack_f0 = (float)in_XMM0_Dc;
  local_f8 = (uint8_t  [8])param_1;
  fStack_ec = (float)in_XMM0_Dd;
  FUN_01d48370();
  plVar7 = (int64_t *)*arg1;
  (**(code **)(*this_ptr + 0x500))();
  (**(code **)(*plVar7 + 0x390))();
  fVar18 = (float)local_d8._0_4_;
  fVar20 = (float)local_d8._4_4_;
  fVar14 = fStack_d0;
  fVar16 = fStack_cc;
  FUN_01e44a80(local_f8._0_4_);
  FUN_01d48390();
  cVar2 = (**(code **)(*this_ptr + 0x988))();
  if (cVar2 == '\0') goto LAB_003b4ab9;
  uVar9 = (**(code **)(*this_ptr + 0x640))();
  plVar7 = local_40;
  local_1c8 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_1c0 = '\x01';
  (**(code **)(*plVar7 + 0x3b0))(uVar9,&local_1c8);
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_1b8 = plVar7;
  local_1b0 = '\0';
  local_138 = plVar7;
  FUN_01d488d0();
  if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar8 = (int64_t *)*arg1;
  FUN_003b3d20();
  local_e8 = local_68;
  local_e0 = 0;
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  (**(code **)(*plVar8 + 0x3a8))();
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar8 = local_40;
  local_1a8 = g_026fe4b8;
  if (g_026fe4b8 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = '\x01';
  (**(code **)(*plVar8 + 0x3b0))();
  plVar8 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (int64_t *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_148 = plVar8;
  (**(code **)(*this_ptr + 0x4a0))();
  plVar5 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_003b4897;
    }
  }
  else if (local_68 != (int64_t *)0x0) {
LAB_003b4897:
    plVar8 = local_148;
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_88 = plVar5;
    local_58 = plVar5;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if (local_50._4_4_ < 1) {
          iVar3 = -local_50._4_4_;
        }
        else {
          iVar3 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar3);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar3 = 0;
          plVar7 = local_138;
        }
        local_50 = CONCAT44(iVar3,(int)local_50);
      }
      lVar4 = (int64_t)(int)local_50;
      iVar3 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar3);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar3) break;
      plVar7 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
      local_68 = plVar7;
      FUN_003b6560();
      pplVar6 = (int64_t **)&g_02802688;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar6 = &local_68;
        if (cVar2 == '\0') {
          pplVar6 = (int64_t **)&g_02802688;
        }
      }
      plVar7 = local_138;
      if (*pplVar6 != (int64_t *)0x0) {
        local_f8 = (uint8_t  [8])(**(code **)(*local_68 + 0x4d8))();
        fStack_f0 = (float)extraout_XMM0_Dc;
        fStack_ec = (float)extraout_XMM0_Dd;
        local_d8._4_4_ = fVar20;
        local_d8._0_4_ = fVar18;
        fStack_d0 = fVar14;
        fStack_cc = fVar16;
        local_198 = plVar8;
        local_190 = '\0';
        FUN_01d488d0();
        if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*arg1 + 0x3b0))(local_f8._0_4_,local_d8._0_4_);
        local_188 = plVar7;
        local_180 = '\0';
        FUN_01d488d0();
        if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_d8._0_4_ = (float)local_d8._0_4_ + (float)local_f8._0_4_;
        local_d8._4_4_ = (float)local_d8._4_4_ + (float)local_f8._4_4_;
        fStack_d0 = fStack_d0 + fStack_f0;
        fStack_cc = fStack_cc + fStack_ec;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        fVar18 = (float)local_d8._4_4_ + g_02390d00;
        fVar20 = (float)local_d8._4_4_;
        fVar14 = fStack_cc;
        fVar16 = fStack_cc;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))(local_f8._0_4_);
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
    plVar8 = local_148;
  }
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_003b4ab9:
  uVar9 = (**(code **)(*this_ptr + 0x4a0))();
  plVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 == (int64_t *)0x0) {
      return;
    }
    uVar9 = FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
  }
  else if (local_68 == (int64_t *)0x0) {
    return;
  }
  local_60 = 0;
  local_68 = (int64_t *)0x0;
  local_88 = plVar7;
  local_58 = plVar7;
  local_50._0_4_ = -1;
  local_50._4_4_ = 0;
  local_48 = 0;
LAB_003b4b4b:
  do {
    iVar3 = local_50._4_4_;
    if (local_50._4_4_ != 0) {
      if (local_50._4_4_ < 1) {
        local_50._4_4_ = -local_50._4_4_;
      }
      else {
        local_50._0_4_ = (int)local_50 - local_50._4_4_;
        uVar9 = FUN_00d23690(uVar9,local_50._4_4_);
        local_48 = local_48 + iVar3;
        local_50._4_4_ = 0;
      }
    }
    lVar4 = (int64_t)(int)local_50;
    local_50._0_4_ = (int)local_50 + 1;
    if (*(int *)((int64_t)local_58 + 0xc) <= (int)local_50) {
      FUN_000a9680();
      FUN_00d50b20();
      return;
    }
    plVar7 = *(int64_t **)(local_58[2] + 8 + lVar4 * 8);
    local_68 = plVar7;
    if ((g_026fddd0 == '\0') &&
       (iVar3 = ___cxa_guard_acquire(), uVar9 = extraout_XMM0_Da_00, iVar3 != 0)) {
      g_026d9988 = FUN_0006d940();
      g_026d9970 = "MDWorkspaceView";
      g_026d9978 = 0x188;
      g_026d9980 = FUN_000a3150;
      g_026d9990 = 0;
      ram_00000000026d9998 = 0;
      g_026d99a0 = 0;
      g_026d9a18 = 0;
      ram_00000000026d9a20 = 0;
      g_026d9a28 = 0;
      g_026d9a2a = 1;
      g_026d99a8 = 0;
      ram_00000000026d99b0 = 0;
      g_026d99b8 = 0;
      ram_00000000026d99c0 = 0;
      g_026d99c8 = 0;
      ram_00000000026d99d0 = 0;
      g_026d99d8 = 0;
      ram_00000000026d99e0 = 0;
      g_026d99e8 = 0;
      ram_00000000026d99f0 = 0;
      g_026d99f8 = 0;
      ram_00000000026d9a00 = 0;
      g_026d9a08 = 0;
      ram_00000000026d9a10 = 0;
      g_026d9a33 = 0;
      g_026d9a2b = 0;
      uVar9 = ___cxa_guard_release();
    }
    pplVar6 = (int64_t **)&g_02802688;
    if (plVar7 != (int64_t *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar6 = &local_68;
      uVar9 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar6 = (int64_t **)&g_02802688;
      }
    }
    plVar7 = *pplVar6;
    if (*(char *)(pplVar6 + 1) == '\0') goto LAB_003b4bf0;
    *(void*)(pplVar6 + 1) = 0;
  } while (plVar7 == (int64_t *)0x0);
  goto LAB_003b4c01;
LAB_003b4bf0:
  if (plVar7 == (int64_t *)0x0) goto LAB_003b4b4b;
  FUN_00d50b00();
LAB_003b4c01:
  cVar2 = (**(code **)(*plVar7 + 0x9a8))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*plVar7 + 0x9a0))();
    if (cVar2 == '\0') goto LAB_003b4b40;
    uVar9 = (**(code **)(*this_ptr + 0x640))();
    lVar4 = g_026fe4b8;
    if (g_026fe4b8 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_168 = lVar4;
    local_160 = '\x01';
    (**(code **)(*local_78 + 0x3b0))(uVar9,&local_168);
    local_a8 = local_40;
    local_a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(g_02394298);
    plVar8 = (int64_t *)*arg1;
    (**(code **)(*plVar7 + 0x4d8))();
    FUN_00d05530();
    (**(code **)(*plVar8 + 0x3b8))();
    uVar9 = (**(code **)(*this_ptr + 0x640))();
    lVar4 = g_026e41f0;
    if (g_026e41f0 != 0) {
      uVar9 = FUN_00d50b00();
    }
    local_158 = lVar4;
    local_150 = '\x01';
    (**(code **)(*local_78 + 0x3b0))(uVar9,&local_158);
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(g_02390124);
    lVar4 = plVar7[0x30];
    if (lVar4 == 0) {
      (**(code **)(*plVar7 + 0x4d8))();
      FUN_01d39800();
      plVar8 = (int64_t *)plVar7[0x30];
      plVar5 = plVar8;
      if (plVar8 != local_40) {
        if (local_38 == '\0') {
          if (local_40 == (int64_t *)0x0) {
            plVar5 = (int64_t *)0x0;
            goto LAB_003b50eb;
          }
          FUN_00d50b00();
          plVar8 = (int64_t *)plVar7[0x30];
          plVar7[0x30] = (int64_t)local_40;
          plVar5 = local_40;
        }
        else {
          local_38 = '\0';
          plVar5 = local_40;
LAB_003b50eb:
          plVar7[0x30] = (int64_t)plVar5;
        }
        if (plVar8 != (int64_t *)0x0) {
          FUN_00d50b20();
          plVar5 = local_40;
        }
      }
      if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = plVar7[0x30];
      plVar7 = (int64_t *)*arg1;
    }
    else {
      plVar7 = (int64_t *)*arg1;
    }
    if (lVar4 != 0) {
      local_100 = 0;
      FUN_00d50b00();
    }
    local_100 = '\x01';
    local_108 = lVar4;
    (**(code **)(*plVar7 + 0x3a8))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_003b4b40;
  }
  uVar10 = (**(code **)(*plVar7 + 0x938))();
  fVar13 = (float)((uint64_t)uVar10 >> 0x20);
  fStack_130 = fVar14;
  fStack_12c = fVar16;
  local_138._0_4_ = fVar18;
  local_138._4_4_ = fVar20;
  local_f8 = (uint8_t  [8])FUN_01e3f820();
  fStack_f0 = (float)extraout_XMM0_Dc_01;
  fStack_ec = (float)extraout_XMM0_Dd_01;
  local_d8._4_4_ = fVar20;
  local_d8._0_4_ = fVar18;
  fStack_d0 = fVar14;
  fStack_cc = fVar16;
  local_148 = (int64_t *)(**(code **)(*plVar7 + 0x4d8))();
  fStack_140 = extraout_XMM0_Dc_02;
  fStack_13c = extraout_XMM0_Dd_02;
  uVar11 = (**(code **)(*plVar7 + 0x4d8))();
  fVar18 = (float)local_f8._0_4_ + (float)uVar10;
  fVar20 = (float)local_f8._4_4_ + fVar13;
  fVar12 = (float)local_d8._0_4_ - ((float)local_138 + (float)uVar10);
  fVar13 = (float)local_d8._4_4_ - (local_138._4_4_ + fVar13);
  fVar15 = fStack_d0 - (fStack_130 + extraout_XMM0_Dc_00);
  fVar17 = fStack_cc - (fStack_12c + extraout_XMM0_Dd_00);
  auVar19._0_4_ = fVar18 + (float)uVar11;
  auVar19._4_4_ = fVar20 + (float)((uint64_t)uVar11 >> 0x20);
  auVar19._8_4_ = fStack_f0 + extraout_XMM0_Dc_00 + extraout_XMM0_Dc_03;
  auVar19._12_4_ = fStack_ec + extraout_XMM0_Dd_00 + extraout_XMM0_Dd_03;
  auVar1._4_4_ = local_148._4_4_ + fVar20;
  auVar1._0_4_ = (float)local_148 + fVar18;
  auVar1._8_4_ = fStack_140 + fStack_f0 + extraout_XMM0_Dc_00;
  auVar1._12_4_ = fStack_13c + fStack_ec + extraout_XMM0_Dd_00;
  _local_f8 = blendps(auVar19,auVar1,0xd);
  local_d8._4_4_ = fVar13;
  local_d8._0_4_ = fVar12;
  fStack_d0 = fVar15;
  fStack_cc = fVar17;
  local_138 = (int64_t *)FUN_00d05530(local_f8._0_4_);
  fVar18 = fVar12;
  fVar20 = fVar13;
  fVar14 = fVar15;
  fVar16 = fVar17;
  FUN_01d48b40(g_02394298);
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_78 + 0x4c0))();
  local_c8 = local_40;
  local_c0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_c0 = '\x01';
  FUN_01d488d0();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = plVar7[0x2e];
  if (lVar4 == 0) {
    FUN_01d39800((float)local_138);
    plVar8 = (int64_t *)plVar7[0x2e];
    plVar5 = plVar8;
    if (plVar8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
          goto LAB_003b4e95;
        }
        FUN_00d50b00();
        plVar8 = (int64_t *)plVar7[0x2e];
        plVar7[0x2e] = (int64_t)local_40;
        plVar5 = local_40;
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
LAB_003b4e95:
        plVar7[0x2e] = (int64_t)plVar5;
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = plVar7[0x2e];
    plVar8 = (int64_t *)*arg1;
    fVar18 = fVar12;
    fVar20 = fVar13;
    fVar14 = fVar15;
    fVar16 = fVar17;
  }
  else {
    plVar8 = (int64_t *)*arg1;
  }
  if (lVar4 != 0) {
    local_120 = 0;
    FUN_00d50b00();
  }
  local_120 = '\x01';
  local_128 = lVar4;
  (**(code **)(*plVar8 + 0x3a8))();
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40(g_02390124);
  uVar9 = (**(code **)(*this_ptr + 0x640))();
  lVar4 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar9 = FUN_00d50b00();
  }
  local_178 = lVar4;
  local_170 = '\x01';
  (**(code **)(*local_78 + 0x3b0))(uVar9,&local_178);
  local_b8 = local_40;
  local_b0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_b0 = '\x01';
  FUN_01d488d0();
  if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = plVar7[0x2f];
  if (lVar4 == 0) {
    fVar18 = (float)local_d8._0_4_;
    fVar20 = (float)local_d8._4_4_;
    fVar14 = fStack_d0;
    fVar16 = fStack_cc;
    FUN_01d39800(local_f8._0_4_);
    plVar8 = (int64_t *)plVar7[0x2f];
    plVar5 = plVar8;
    if (plVar8 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
          goto LAB_003b531a;
        }
        FUN_00d50b00();
        plVar8 = (int64_t *)plVar7[0x2f];
        plVar7[0x2f] = (int64_t)local_40;
        plVar5 = local_40;
      }
      else {
        local_38 = '\0';
        plVar5 = local_40;
LAB_003b531a:
        plVar7[0x2f] = (int64_t)plVar5;
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar5 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = plVar7[0x2f];
    plVar7 = (int64_t *)*arg1;
  }
  else {
    plVar7 = (int64_t *)*arg1;
  }
  if (lVar4 != 0) {
    local_110 = 0;
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_118 = lVar4;
  (**(code **)(*plVar7 + 0x3a8))();
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
LAB_003b4b40:
  uVar9 = FUN_00d50b20();
  goto LAB_003b4b4b;
}

