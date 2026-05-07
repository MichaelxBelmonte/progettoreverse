// Function: FUN_01c532f0
// Address: 01c532f0
// Size: 2871 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c532f0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  char cVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t **pplVar8;
  int iVar9;
  int64_t *plVar10;
  void*arg1;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  bool bVar11;
  uint64_t uVar12;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar13 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  int64_t local_180;
  char local_178;
  uint64_t local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  uint8_t local_128 [16];
  uint64_t local_110;
  uint8_t local_108 [8];
  uint64_t uStack_100;
  int64_t *local_f8;
  char local_f0;
  uint32_t local_e4;
  uint32_t local_e0;
  uint32_t local_dc;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int64_t *local_80;
  int64_t *local_78;
  int64_t local_70;
  int64_t *local_68;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  uStack_100 = in_XMM1_Qb;
  local_108 = (uint8_t  [8])param_2;
  local_98 = (float)param_1;
  fStack_94 = (float)((uint64_t)param_1 >> 0x20);
  fStack_90 = (float)in_XMM0_Qb;
  fStack_8c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  (**(code **)(*this_ptr + 0x640))();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  lVar1 = this_ptr[0x3c];
  local_68 = local_58;
  if (lVar1 == 0) {
    local_70 = 0;
    uVar12 = (**(code **)(*local_58 + 0x398))();
    local_dc = (uint32_t)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    local_110 = 0;
    local_70 = 0;
  }
  else {
    FUN_00d50b00();
    local_110 = CONCAT71((int7)((uint64_t)unaff_R12 >> 8),1);
    local_dc = 0;
    local_70 = lVar1;
  }
  (**(code **)(*this_ptr + 0x640))();
  pVar7 = 1;
  (**(code **)(*local_f8 + 0x480))(1,0x11,0);
  local_d0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_d0 = '\x01';
  local_d8 = local_58;
  FUN_01d488d0();
  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_148 = local_70;
  local_140 = '\0';
  FUN_01d488d0();
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = (int64_t *)*arg1;
  FUN_00d05530();
  (**(code **)(*plVar10 + 0x3b0))();
  FUN_01d48b40();
  plVar10 = (int64_t *)this_ptr[0x3d];
  if (plVar10 == (int64_t *)0x0) {
    (**(code **)(*local_68 + 0x3a0))();
    local_78 = local_58;
    if ((local_58 != (int64_t *)0x0) && (plVar10 = local_78, local_50 == '\0')) {
      FUN_00d50b00();
      plVar10 = local_78;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_78 = plVar10;
  plVar10 = (int64_t *)this_ptr[0x3e];
  if (plVar10 == (int64_t *)0x0) {
    (**(code **)(*local_68 + 0x3a8))();
    local_80 = local_58;
    if ((local_58 != (int64_t *)0x0) && (plVar10 = local_80, local_50 == '\0')) {
      FUN_00d50b00();
      plVar10 = local_80;
    }
  }
  else {
    FUN_00d50b00();
  }
  local_80 = plVar10;
  lVar2 = g_026e41f0;
  if (g_026e41f0 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar2;
  local_130 = '\x01';
  (**(code **)(*local_68 + 0x3b0))();
  local_c0 = 0;
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  plVar10 = local_68;
  local_c0 = '\x01';
  local_c8 = local_58;
  FUN_01d488d0();
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  FUN_01c41970();
  auVar16._4_4_ = (float)local_108._4_4_ + fStack_94;
  auVar16._12_4_ = uStack_100._4_4_ + fStack_8c;
  local_108._4_4_ = auVar16._4_4_;
  local_108._0_4_ = (float)local_108._0_4_ + local_98;
  uStack_100._0_4_ = (float)uStack_100 + fStack_90;
  uStack_100._4_4_ = auVar16._12_4_;
  auVar16._0_4_ = auVar16._4_4_;
  auVar16._8_4_ = auVar16._12_4_;
  local_128._4_12_ = auVar16._4_12_;
  local_128._0_4_ = auVar16._4_4_ + g_02390d00;
  lVar2 = this_ptr[0x40];
  if (lVar2 != 0) {
    FUN_00d50b00();
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    iVar9 = 0;
    while( true ) {
      pVar7 = 0;
      lVar5 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar2 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + 8 + lVar5 * 8);
      bVar11 = iVar9 != 0;
      iVar9 = iVar9 + -1;
      if (bVar11) {
        uVar12 = FUN_01c82bc0();
        auVar17._0_4_ = (uint)(float)uVar12 & g_023945e0;
        auVar17._4_4_ = (uint)((uint64_t)uVar12 >> 0x20) & _UNK_023945e4;
        auVar17._8_4_ = (uint)extraout_XMM0_Qb & _UNK_023945e8;
        auVar17._12_4_ = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20) & _UNK_023945ec;
        auVar18._4_12_ = SUB1612(auVar17 | g_023945f0,4);
        auVar18._0_4_ = SUB164(auVar17 | g_023945f0,0) + (float)uVar12;
        roundss(ZEXT816(0),auVar18,0xb);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
    }
    FUN_01c79df0();
    FUN_00d50b20();
    plVar10 = local_68;
  }
  lVar2 = this_ptr[0x31];
  if (lVar2 != 0) {
    FUN_00d50b00();
    pvVar6 = _pthread_getspecific(pVar7);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar9 = FUN_016c2ea0();
    if (0 < iVar9) {
      if ((int)this_ptr[0x39] == 1) {
        local_128._0_4_ = (float)local_128._0_4_ + g_0241c6e8;
      }
      local_e4 = 0xffffffff;
      pvVar6 = _pthread_getspecific(pVar7);
      if ((pvVar6 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
        plVar10 = (int64_t *)this_ptr[0x2e];
      }
      else {
        plVar10 = (int64_t *)this_ptr[0x2e];
      }
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      auVar3._4_4_ = fStack_94;
      auVar3._0_4_ = local_98;
      auVar3._8_4_ = fStack_90;
      auVar3._12_4_ = fStack_8c;
      auVar13._4_12_ = auVar3._4_12_;
      auVar13._0_4_ = local_98 + g_02390d00;
      uVar12 = (**(code **)(*plVar10 + 0x388))(auVar13._0_8_);
      local_98 = (float)uVar12;
      fStack_94 = (float)((uint64_t)uVar12 >> 0x20);
      FUN_0123fd00();
      pVar7 = (void*)&local_e4;
      uVar12 = FUN_016cb9d0(CONCAT44(fStack_94,local_98),1);
      FUN_00d50b20();
      local_e0 = 0xffffffff;
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      pplVar8 = &local_f8;
      FUN_016ca840(pplVar8,uVar12,&local_150,&local_e0);
      if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_108._0_4_ = local_108._0_4_ + g_02390d00 + g_02390124;
      while( true ) {
        pVar7 = (void*)pplVar8;
        plVar10 = (int64_t *)this_ptr[0x2e];
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016c98e0();
        uVar12 = (**(code **)(*plVar10 + 0x390))();
        local_98 = (float)uVar12;
        fStack_94 = (float)((uint64_t)uVar12 >> 0x20);
        fStack_90 = (float)extraout_XMM0_Qb_00;
        fStack_8c = (float)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        FUN_00d50b20();
        auVar14._0_4_ = (uint)local_98 & g_023945e0;
        auVar14._4_4_ = (uint)fStack_94 & _UNK_023945e4;
        auVar14._8_4_ = (uint)fStack_90 & _UNK_023945e8;
        auVar14._12_4_ = (uint)fStack_8c & _UNK_023945ec;
        auVar15._4_12_ = SUB1612(auVar14 | g_023945f0,4);
        auVar15._0_4_ = SUB164(auVar14 | g_023945f0,0) + local_98;
        auVar16 = roundss(auVar15,auVar15,0xb);
        local_98 = auVar16._0_4_;
        if ((float)local_108._0_4_ < local_98) break;
        (**(code **)(*local_68 + 0x398))();
        local_b0 = 0;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = local_58;
        FUN_01d488d0();
        if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        (**(code **)(*local_68 + 0x3a0))();
        local_a0 = 0;
        if (local_50 == '\0') {
          if (local_58 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_a0 = '\x01';
        local_a8 = local_58;
        FUN_01d488d0();
        if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_016cb720();
        if (cVar4 == '\0') {
          local_98 = local_98 + g_02390d00;
          (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        }
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        if (local_150._4_4_ == 0) break;
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        pplVar8 = (int64_t **)&local_150;
        FUN_016ca9d0(pplVar8,&local_f8,&local_e0);
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      plVar10 = local_68;
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar10 = local_68;
      }
    }
  }
  FUN_01d48390();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0 && (char)local_dc == '\0') {
    FUN_00d50b20();
  }
  return;
}

