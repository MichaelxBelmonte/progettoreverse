// Function: FUN_00becd50
// Address: 00becd50
// Size: 4742 bytes
// Class: GNAudioDevicePrefCtrl
// String references:
//   "%I Samples"
//   "%I-%I"
//   "%@/%@"
// === GNAudioDevicePrefCtrl properties ===
//                   _devicePopUpButton
//                   _sampleRatePopUpButton
//                   _bufferSizePopUpButton
//                   _outputPopUpButton
//                   _ignoreBufferUnderrunsSwitch
//                   _showASIOControlPanelButton
//                   _recordingAccessView
//                   _sampleRateFormatter


void FUN_00becd50(uint64_t param_1,int64_t *param_2)

{
  uint uVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  undefined7 uVar10;
  int64_t this_ptr;
  int iVar11;
  bool bVar12;
  uint64_t unaff_R14;
  char cVar13;
  bool bVar14;
  uint64_t uVar15;
  float fVar16;
  double dVar17;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  void*local_1b0;
  int64_t *local_1a8;
  uint64_t local_1a0;
  int64_t *local_198;
  char local_190;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  uint32_t local_124;
  void*local_120;
  uint32_t local_118;
  int local_114;
  int64_t *local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  uint64_t local_f0;
  uint32_t local_e4;
  uint64_t local_e0;
  uint64_t local_d8;
  uint32_t local_d0;
  uint32_t local_cc;
  int64_t *local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  int64_t *local_a0;
  uint local_98;
  uint32_t local_94;
  uint64_t local_90;
  int64_t *local_88;
  uint local_80;
  int local_7c;
  int64_t *local_78;
  uint64_t local_70;
  int local_68;
  uint32_t uStack_64;
  char local_60;
  int64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  int64_t *local_40;
  
  FUN_00d6f370();
  plVar6 = local_88;
  if (((char)local_80 == '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_110 = plVar6;
  uVar5 = FUN_00b15f30();
  plVar6 = local_88;
  if (local_88 == (int64_t *)0x0) {
    local_e4 = (uint32_t)CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
    plVar6 = (int64_t *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    if ((char)local_80 == '\0') {
      FUN_00d50b00();
      local_e4 = 0;
      if (((char)local_80 == '\0') || (local_88 == (int64_t *)0x0)) goto LAB_00becdfd;
      FUN_00d50b20();
    }
    local_e4 = 0;
  }
LAB_00becdfd:
  local_1a0 = uVar5;
  local_f8 = plVar6;
  FUN_00b160d0();
  local_b8 = local_88;
  if (local_88 == (int64_t *)0x0) {
    local_d0 = 1;
    local_b8 = (int64_t *)0x0;
    local_f0 = 0;
  }
  else {
    plVar6 = local_88;
    if ((char)local_80 == '\0') {
      uVar5 = FUN_00d50b00();
      if (((char)local_80 == '\0') || (local_88 == (int64_t *)0x0)) {
        local_d0 = 0;
        local_f0 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        goto LAB_00bece8a;
      }
      plVar6 = (int64_t *)FUN_00d50b20();
    }
    local_f0 = CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    local_d0 = 0;
  }
LAB_00bece8a:
  local_50 = (int64_t *)0x0;
  local_48 = (int64_t *)0x0;
  local_90 = 0;
  local_a8 = 0;
  local_58 = 0;
  local_e0 = 0;
  local_c8 = (int64_t *)0x0;
  local_b0 = 0;
  local_c0 = (int64_t *)0x0;
  FUN_01d6f8d0();
  uVar1 = *(uint *)((int64_t)local_f8 + 0xc);
  if ((int)uVar1 < 1) {
    local_b0 = 0;
    plVar6 = (int64_t *)0x0;
  }
  else {
    uVar15 = 0;
    local_c0 = (int64_t *)0x0;
    local_b0 = 0;
    plVar9 = local_f8;
    do {
      lVar7 = plVar9[2];
      plVar6 = *(int64_t **)(lVar7 + uVar15 * 8);
      if (local_c0 == plVar6) {
        if (((char)local_b0 == '\0') && (local_c0 != (int64_t *)0x0)) {
          local_b0 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar6 != (int64_t *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_b0 == '\0') || (local_c0 == (int64_t *)0x0)) {
          local_b0 = CONCAT71((int7)((uint64_t)lVar7 >> 8),1);
          local_c0 = plVar6;
        }
        else {
          local_c0 = plVar6;
          uVar5 = FUN_00d50b20();
          local_b0 = CONCAT71((int7)((uint64_t)uVar5 >> 8),1);
        }
      }
      (**(code **)(*local_c0 + 0x5e0))();
      local_108 = local_88;
      local_100 = 0;
      if ((char)local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = local_80 & 0xffffff00;
      }
      plVar9 = local_f8;
      local_100 = '\x01';
      FUN_01d6f990();
      if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      uVar15 = uVar15 + 1;
      plVar6 = local_c0;
    } while (uVar1 != uVar15);
  }
  local_50 = (int64_t *)0x0;
  local_48 = (int64_t *)0x0;
  local_90 = 0;
  local_a8 = 0;
  local_58 = 0;
  local_e0 = 0;
  local_c8 = (int64_t *)0x0;
  local_c0 = plVar6;
  FUN_01d6ed40();
  local_50 = (int64_t *)0x0;
  local_48 = (int64_t *)0x0;
  local_90 = 0;
  local_a8 = 0;
  local_58 = 0;
  local_e0 = 0;
  local_c8 = (int64_t *)0x0;
  FUN_01d6f8d0();
  (**(code **)(*local_b8 + 0x600))();
  plVar9 = local_88;
  if (local_88 == (int64_t *)0x0) {
    local_124 = (uint32_t)CONCAT71((int7)((uint64_t)plVar6 >> 8),1);
    plVar9 = (int64_t *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if ((char)local_80 == '\0') {
      FUN_00d50b00();
      local_124 = 0;
      if (((char)local_80 == '\0') || (local_88 == (int64_t *)0x0)) goto LAB_00bed198;
      FUN_00d50b20();
    }
    local_124 = 0;
  }
LAB_00bed198:
  local_e0 = uVar5;
  local_c8 = plVar9;
  if (*(int *)((int64_t)plVar9 + 0xc) < 1) {
    bVar12 = false;
    local_40 = (int64_t *)0x0;
    local_a8 = 0;
    local_58 = 0;
  }
  else {
    lVar7 = 0;
    local_58 = 0;
    local_a8 = 0;
    local_40 = (int64_t *)0x0;
    bVar12 = false;
    do {
      lVar2 = *(int64_t *)(plVar9[2] + lVar7 * 8);
      cVar13 = (char)local_a8;
      uVar10 = (undefined7)((uint64_t)local_a8 >> 8);
      if (local_58 == lVar2) {
        uVar5 = local_a8;
        if ((cVar13 == '\0') && (local_58 != 0)) {
          uVar5 = CONCAT71(uVar10,1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        if ((cVar13 == '\0') || (local_58 == 0)) {
          uVar5 = CONCAT71(uVar10,1);
          local_58 = lVar2;
        }
        else {
          local_58 = lVar2;
          FUN_00d50b20();
          uVar5 = CONCAT71(uVar10,1);
        }
      }
      plVar6 = *(int64_t **)(this_ptr + 0xa8);
      local_a8 = uVar5;
      fVar16 = (float)FUN_00d459e0();
      (**(code **)(*plVar6 + 0x378))(fVar16 / g_02393944);
      plVar6 = local_88;
      plVar9 = local_c8;
      if (local_88 == local_40) {
        plVar6 = local_40;
        bVar14 = bVar12;
        if ((bVar12) || (local_88 == (int64_t *)0x0)) goto joined_r0x00bed34b;
        bVar14 = true;
        if ((char)local_80 == '\0') {
          FUN_00d50b00();
          goto LAB_00bed337;
        }
      }
      else if ((char)local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar14 = true;
        if ((bVar12) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_40 = plVar6;
LAB_00bed337:
          plVar6 = local_40;
          bVar14 = true;
        }
joined_r0x00bed34b:
        local_40 = plVar6;
        plVar6 = local_40;
        if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      else {
        bVar14 = true;
        if ((bVar12) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar12 = bVar14;
      local_190 = '\0';
      local_198 = plVar6;
      local_40 = plVar6;
      FUN_01d6f990();
      if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = (int64_t *)FUN_00b335d0();
      dVar17 = (double)FUN_00d45bc0();
      param_2 = local_48;
      if (((double)local_48 == dVar17) && (!NAN((double)local_48) && !NAN(dVar17))) {
        FUN_01d6ed40();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((int64_t)plVar9 + 0xc));
  }
  plVar9 = local_40;
  local_50 = (int64_t *)0x0;
  local_48 = (int64_t *)0x0;
  local_90 = 0;
  FUN_01d6f8d0();
  local_50 = (int64_t *)0x0;
  local_48 = (int64_t *)0x0;
  local_90 = 0;
  FUN_01d6ed40();
  (**(code **)(*local_b8 + 0x618))();
  plVar6 = local_88;
  if ((char)local_80 == '\0') {
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b00();
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00bed4d6;
    }
  }
  else if (local_88 != (int64_t *)0x0) {
LAB_00bed4d6:
    local_80 = local_80 & 0xffffff00;
    local_88 = (int64_t *)0x0;
    local_48 = plVar6;
    local_78 = plVar6;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar4 = -local_70._4_4_;
        }
        else {
          iVar4 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar4);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar4 = 0;
        }
        local_70 = CONCAT44(iVar4,(int)local_70);
      }
      lVar7 = (int64_t)(int)local_70;
      iVar4 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar4);
      if (*(int *)((int64_t)local_78 + 0xc) <= iVar4) break;
      local_88 = *(int64_t **)(local_78[2] + 8 + lVar7 * 8);
      iVar4 = FUN_00d45870();
      iVar3 = FUN_00d45870();
      if (g_02802538 <= iVar3) {
        local_118 = 1;
        local_120 = &g_024cc6f0;
        local_114 = iVar4;
        FUN_00d8cb40(extraout_XMM0_Qa,&local_120);
        plVar6 = local_a0;
        if (local_a0 == local_40) {
          plVar6 = local_40;
          bVar14 = bVar12;
          if ((bVar12) || (local_a0 == (int64_t *)0x0)) goto joined_r0x00bed655;
          bVar14 = true;
          if ((char)local_98 == '\0') {
            FUN_00d50b00();
            goto LAB_00bed63b;
          }
        }
        else if ((char)local_98 == '\0') {
          if (local_a0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar14 = true;
          if ((bVar12) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
            local_40 = plVar6;
LAB_00bed63b:
            plVar6 = local_40;
            bVar14 = true;
          }
joined_r0x00bed655:
          local_40 = plVar6;
          plVar6 = local_40;
          if (((char)local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar6 = local_40;
          }
        }
        else {
          bVar14 = true;
          if ((bVar12) && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_180 = '\0';
        local_188 = plVar6;
        local_40 = plVar6;
        FUN_01d6f990();
        if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d70010();
        FUN_01d65490();
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar3 = (**(code **)(*local_b8 + 0x6c8))();
        bVar12 = bVar14;
        if (iVar3 == iVar4) {
          FUN_01d6fde0();
          FUN_01d6ed40();
        }
      }
    }
    FUN_00136b80();
    FUN_00d50b20();
    plVar9 = local_40;
  }
  local_50 = (int64_t *)0x0;
  local_48 = (int64_t *)0x0;
  local_90 = 0;
  iVar4 = FUN_01d70da0();
  plVar6 = plVar9;
  lVar7 = g_027674a0;
  bVar14 = bVar12;
  if (iVar4 == -1) {
    local_94 = (**(code **)(*local_b8 + 0x6c8))();
    local_98 = 1;
    local_a0 = &g_024cc6f0;
    FUN_00d8cb40(&g_024cc6f0,&local_a0);
    plVar6 = local_88;
    if (local_88 == plVar9) {
      if ((!bVar12) && (local_88 != (int64_t *)0x0)) {
        bVar14 = true;
        plVar6 = plVar9;
        if ((char)local_80 != '\0') goto LAB_00bed872;
        bVar12 = true;
        FUN_00d50b00();
      }
LAB_00bed85e:
      plVar6 = plVar9;
      bVar14 = bVar12;
joined_r0x00bed862:
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar14 = true;
        if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar6;
          bVar12 = true;
          goto LAB_00bed85e;
        }
        goto joined_r0x00bed862;
      }
      bVar14 = true;
      if ((bVar12) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00bed872:
    local_170 = '\0';
    local_178 = plVar6;
    (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x968))();
    lVar7 = g_027674a0;
    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
      FUN_00d50b20();
      lVar7 = g_027674a0;
    }
  }
  g_027674a0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_b8 + 0x5e0))();
  local_1b0 = local_120;
  uVar5 = FUN_00083ea0(2,&local_1b0);
  uVar8 = FUN_00d8cb40(uVar5,&local_88);
  local_50 = local_a0;
  uVar5 = extraout_XMM0_Qa_00;
  if (local_a0 == (int64_t *)0x0) {
    local_cc = (uint32_t)CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
    uVar8 = 0;
  }
  else {
    if ((char)local_98 == '\0') {
      uVar5 = FUN_00d50b00();
      if (((char)local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
    }
    else {
      local_98 = local_98 & 0xffffff00;
    }
    uVar8 = 1;
    local_cc = 0;
  }
  if ((local_60 != '\0') &&
     (local_88 = (int64_t *)&g_0253d630, CONCAT44(uStack_64,local_68) != 0)) {
    uVar5 = FUN_00d50b20();
  }
  local_88 = &g_024c5048;
  if (((char)local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if (((char)local_118 != '\0') && (local_120 != (void*)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if (lVar7 != 0) {
    uVar5 = FUN_00d50b20();
  }
  local_168 = local_50;
  local_160 = '\0';
  (**(code **)(*local_110 + 0x88))(uVar5,&local_168);
  plVar9 = local_88;
  local_1a8 = local_88;
  if (local_88 == (int64_t *)0x0) {
    local_48 = (int64_t *)0x0;
    uVar5 = 0;
joined_r0x00beda65:
    if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar10 = (undefined7)((uint64_t)local_88 >> 8);
    if ((char)local_80 == '\0') {
      FUN_00d50b00();
      uVar5 = CONCAT71(uVar10,1);
      local_48 = plVar9;
      goto joined_r0x00beda65;
    }
    local_80 = local_80 & 0xffffff00;
    uVar5 = CONCAT71(uVar10,1);
    local_48 = local_88;
  }
  if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = uVar5;
  if (*(int64_t *)(this_ptr + 0x88) == 0) goto LAB_00bede8f;
  FUN_01d6ed40();
  FUN_01d6f8d0();
  iVar4 = (**(code **)(*local_b8 + 0x668))();
  uVar5 = extraout_XMM0_Qa_01;
  local_d8 = uVar8;
  local_40 = plVar6;
  if (1 < iVar4) {
    iVar3 = 1;
    do {
      local_80 = 2;
      local_88 = (int64_t *)&g_024c3df0;
      local_78 = (int64_t *)CONCAT44(local_78._4_4_,iVar3 + 1);
      local_7c = iVar3;
      FUN_00d8cb40(&g_024c3df0,&local_88);
      plVar6 = local_a0;
      if (local_a0 == local_40) {
        plVar6 = local_40;
        bVar12 = bVar14;
        if ((bVar14) || (local_a0 == (int64_t *)0x0)) goto joined_r0x00bedca1;
        bVar12 = true;
        if ((char)local_98 == '\0') {
          FUN_00d50b00();
          goto LAB_00bedc87;
        }
      }
      else if ((char)local_98 == '\0') {
        if (local_a0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = true;
        if ((bVar14) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          local_40 = plVar6;
LAB_00bedc87:
          plVar6 = local_40;
          bVar12 = true;
        }
joined_r0x00bedca1:
        local_40 = plVar6;
        plVar6 = local_40;
        if (((char)local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      else {
        bVar12 = true;
        if ((bVar14) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar14 = bVar12;
      local_150 = '\0';
      local_158 = plVar6;
      local_40 = plVar6;
      uVar5 = FUN_01d6f990();
      if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
      iVar11 = iVar3 + 3;
      iVar3 = iVar3 + 2;
    } while (iVar11 <= iVar4);
  }
  plVar9 = local_40;
  lVar7 = g_027674a8;
  plVar6 = local_40;
  if (local_48 != (int64_t *)0x0) {
    if (g_027674a8 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_148 = lVar7;
    local_140 = '\x01';
    FUN_000175c0(uVar5,&local_148);
    plVar6 = local_88;
    if (local_88 == plVar9) {
      plVar6 = plVar9;
      bVar12 = bVar14;
      if ((!bVar14) && (local_88 != (int64_t *)0x0)) {
        if ((char)local_80 != '\0') goto LAB_00bedd6a;
        FUN_00d50b00();
        bVar12 = true;
      }
LAB_00beddf7:
      bVar14 = bVar12;
      if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_80 == '\0') {
        if (local_88 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = true;
        if ((bVar14) && (plVar9 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00beddf7;
      }
      if ((bVar14) && (plVar9 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_00bedd6a:
      local_80 = local_80 & 0xffffff00;
      bVar14 = true;
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      local_130 = '\0';
      local_138 = plVar6;
      (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x968))();
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00bede8f;
    }
    plVar6 = (int64_t *)0x0;
  }
  FUN_01d6ed40();
LAB_00bede8f:
  plVar9 = *(int64_t **)(this_ptr + 0x90);
  FUN_00b1be20();
  (**(code **)(*plVar9 + 0x918))();
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    FUN_01e40eb0();
    plVar9 = local_88;
    if (((char)local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
      plVar9 = *(int64_t **)(this_ptr + 0x70);
      (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x4d8))();
      (**(code **)(*plVar9 + 0x4e8))(param_2);
    }
  }
  if (*(int64_t **)(this_ptr + 0x78) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x998))();
  }
  if (*(int64_t **)(this_ptr + 0x80) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x998))();
  }
  if (*(int64_t **)(this_ptr + 0x88) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x998))();
  }
  if (local_110 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = local_50;
  if ((local_1a8 != (int64_t *)0x0) && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_cc == '\0' && plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = local_f8;
  if ((bVar14) && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_c0;
  if (((char)local_a8 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_124 == '\0' && local_c8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_e4 == '\0' && plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_d0 == '\0' && local_b8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

