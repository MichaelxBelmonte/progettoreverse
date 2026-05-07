// Function: FUN_01a6cf00
// Address: 01a6cf00
// Size: 2239 bytes
// Class: MUChord
// String references:
//   "MUChord"
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void FUN_01a6cf00(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  char *pcVar9;
  int64_t *plVar10;
  int64_t *this_ptr;
  int64_t *plVar11;
  bool bVar12;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint64_t uVar13;
  float fVar14;
  float extraout_XMM0_Db;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar16 [16];
  float extraout_XMM0_Dd;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  float fVar17;
  float in_XMM1_Dd;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint64_t local_148;
  int64_t *local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  uint64_t local_d8;
  uint64_t local_d0;
  char local_c8;
  undefined7 uStack_c7;
  char local_c0;
  uint8_t local_b8 [16];
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  char local_58 [8];
  int64_t *local_50;
  uint64_t local_48;
  int local_40;
  uint64_t local_38;
  
  fVar17 = (float)((uint64_t)param_2 >> 0x20);
  local_d8 = FUN_00e7bdb0();
  local_148 = FUN_00e7bdb0();
  local_b8._0_8_ = FUN_01e436c0();
  local_b8._8_8_ = extraout_XMM0_Qb;
  iVar4 = FUN_01d3a5a0();
  if (iVar4 == 1) {
    FUN_01d3abf0();
    local_b8._0_8_ = FUN_01e466c0();
    local_b8._8_8_ = extraout_XMM0_Qb_00;
    FUN_01a66e80();
    plVar1 = local_90;
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*this_ptr + 0xa70))();
    FUN_012523c0(&local_d8,0,&local_148,0);
    plVar11 = local_60;
    pcVar9 = &local_c8;
    if (local_58[0] != '\0') {
      pcVar9 = local_58;
    }
    local_c8 = local_58[0];
    *pcVar9 = '\0';
    if ((local_58[0] != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 == (int64_t *)0x0) {
      plVar11 = (int64_t *)0x0;
      uVar13 = 0;
    }
    else {
      uVar13 = CONCAT71((int7)((uint64_t)unaff_R15 >> 8),1);
      if (local_c8 == '\0') {
        FUN_00d50b00();
      }
    }
    if ((local_88 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x6f8))();
    plVar10 = local_60;
    if (local_60 == (int64_t *)0x0) {
      plVar10 = (int64_t *)0x0;
      uVar15 = 0;
    }
    else {
      uVar15 = CONCAT71((int7)((uint64_t)plVar1 >> 8),1);
      if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    cVar3 = (**(code **)(*this_ptr + 0x9d0))();
    if (cVar3 != '\0') {
      uVar6 = (**(code **)(*this_ptr + 0x9d8))();
      local_d8 = uVar6;
      local_148 = (**(code **)(*this_ptr + 0x9e0))();
      if (uVar6 >> 0x20 != 0) {
        auVar20._0_8_ = (**(code **)(*this_ptr + 0xa68))();
        auVar20._8_8_ = extraout_XMM0_Qb_01;
        auVar16._4_12_ = auVar20._4_12_;
        auVar16._0_4_ = (float)auVar20._0_8_ + g_02390124;
        auVar20 = blendps(auVar16,g_023b1620,0xe);
        (**(code **)(*this_ptr + 0x6f8))(auVar20._0_8_);
        plVar10 = local_60;
        if (local_60 == (int64_t *)0x0) {
          plVar10 = (int64_t *)0x0;
          uVar15 = 0;
        }
        else {
          uVar15 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
          if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
             (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        uVar13 = 0;
        plVar11 = (int64_t *)0x0;
        goto LAB_01a6d196;
      }
    }
    uVar13 = 0;
    plVar11 = (int64_t *)0x0;
    uVar15 = 0;
    plVar10 = (int64_t *)0x0;
  }
LAB_01a6d196:
  local_d0 = uVar15;
  local_70 = plVar11;
  local_68 = plVar10;
  (**(code **)(*this_ptr + 0x640))();
  plVar10 = local_60;
  local_138 = g_027e2710;
  if (g_027e2710 != 0) {
    FUN_00d50b00();
  }
  local_130 = '\x01';
  local_128 = 0;
  local_120 = '\0';
  (**(code **)(*plVar10 + 0x5d0))(0);
  plVar10 = local_68;
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_d8 >> 0x20 != 0) {
    local_b8._0_8_ = (**(code **)(*this_ptr + 0xa68))();
    local_b8._8_8_ = extraout_XMM0_Qb_02;
  }
  FUN_01e3f820();
  fVar14 = (float)FUN_01e436c0();
  if ((float)local_b8._0_4_ < fVar14) {
    local_b8._0_8_ = FUN_01e436c0();
    local_b8._8_8_ = extraout_XMM0_Qb_03;
  }
  if (plVar10 == (int64_t *)0x0) goto LAB_01a6d796;
  iVar4 = -1;
  local_38 = uVar13;
  if (plVar11 == (int64_t *)0x0) {
LAB_01a6d693:
    local_78 = 0;
    FUN_00d50b00();
    bVar12 = false;
  }
  else {
    FUN_01d5e2b0();
    plVar1 = local_60;
    if (local_58[0] == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01a6d311;
      }
      goto LAB_01a6d693;
    }
    if (local_60 == (int64_t *)0x0) goto LAB_01a6d693;
LAB_01a6d311:
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_140 = plVar1;
    local_50 = plVar1;
    local_48 = 0xffffffff;
    local_40 = 0;
    bVar12 = false;
    while( true ) {
      lVar7 = (int64_t)(int)local_48;
      iVar4 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar4);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar4) break;
      local_60 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
      uVar15 = FUN_01d66da0();
      lVar7 = g_027e2688;
      if (g_027e2688 != 0) {
        uVar15 = FUN_00d50b00();
      }
      local_118 = lVar7;
      local_110 = '\x01';
      FUN_000175c0(uVar15,&local_118);
      plVar10 = local_90;
      if ((g_02794b40 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_02794a90 = FUN_00d4fe50();
        g_02794a78 = "MUChord";
        g_02794a80 = 0x20;
        g_02794a88 = FUN_01113770;
        g_02794a98 = 0;
        ram_0000000002794aa0 = 0;
        g_02794aa8 = 0;
        g_02794b20 = 0;
        ram_0000000002794b28 = 0;
        g_02794b30 = 0;
        g_02794b32 = 2;
        g_02794ab0 = 0;
        ram_0000000002794ab8 = 0;
        g_02794ac0 = 0;
        ram_0000000002794ac8 = 0;
        g_02794ad0 = 0;
        ram_0000000002794ad8 = 0;
        g_02794ae0 = 0;
        ram_0000000002794ae8 = 0;
        g_02794af0 = 0;
        ram_0000000002794af8 = 0;
        g_02794b00 = 0;
        ram_0000000002794b08 = 0;
        g_02794b10 = 0;
        ram_0000000002794b18 = 0;
        g_02794b3b = 0;
        g_02794b33 = 0;
        ___cxa_guard_release();
      }
      pplVar8 = (int64_t **)&g_02802688;
      if (plVar10 != (int64_t *)0x0) {
        (**(code **)(*plVar10 + 0x360))();
        cVar3 = FUN_00e85ea0();
        pplVar8 = &local_90;
        if (cVar3 == '\0') {
          pplVar8 = (int64_t **)&g_02802688;
        }
      }
      plVar10 = *pplVar8;
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar10 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar8 + 1) = 0;
      }
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_110 != '\0') && (local_118 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (CONCAT71(uStack_c7,local_c8) != 0)) {
        FUN_00d50b20();
      }
      if (plVar10 != (int64_t *)0x0) {
        local_108 = local_70;
        local_100 = '\0';
        cVar3 = (**(code **)(*plVar10 + 0x50))();
        if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar4 = local_40;
        iVar2 = (int)local_48;
        FUN_00d50b20();
        if (cVar3 != '\0') {
          iVar4 = iVar4 + iVar2;
          goto LAB_01a6d60b;
        }
      }
      cVar3 = FUN_01d65e30();
      if (cVar3 != '\0') {
        bVar12 = true;
      }
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar4 = -local_48._4_4_;
        }
        else {
          local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar4 = 0;
        }
        local_48 = CONCAT44(iVar4,(int)local_48);
      }
    }
    iVar4 = -1;
LAB_01a6d60b:
    FUN_002a0a30();
    FUN_00d50b20();
    plVar10 = local_68;
    plVar11 = local_70;
    if (bVar12) {
      (**(code **)(*this_ptr + 0x640))();
      fVar14 = (float)(**(code **)(*local_60 + 0x5c8))();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_b8._0_4_ = local_b8._0_4_ - fVar14;
      goto LAB_01a6d693;
    }
    if (this_ptr != (int64_t *)0x0) goto LAB_01a6d693;
    bVar12 = true;
  }
  local_78 = '\x01';
  local_80 = this_ptr;
  FUN_01d62b10();
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_98 = 0;
  if (!bVar12) {
    FUN_00d50b00();
  }
  fVar14 = (fVar17 - extraout_XMM0_Db) * g_0239011c;
  auVar18._0_4_ = g_023945e0 & (uint)fVar14;
  auVar18._4_4_ = _UNK_023945e4 & (uint)(fVar17 - extraout_XMM0_Db);
  auVar18._8_4_ = _UNK_023945e8 & (uint)(in_XMM1_Dd - extraout_XMM0_Dd);
  auVar18._12_4_ = _UNK_023945ec & (uint)(in_XMM1_Dd - extraout_XMM0_Dd);
  auVar19._4_12_ = SUB1612(auVar18 | g_023945f0,4);
  auVar19._0_4_ = SUB164(auVar18 | g_023945f0,0) + fVar14;
  auVar20 = roundss(auVar19,auVar19,0xb);
  auVar20 = insertps(local_b8,auVar20,0x10);
  local_98 = '\x01';
  local_f8 = 0;
  local_f0 = '\0';
  local_a0 = this_ptr;
  FUN_01d5ef60(auVar20._0_8_,iVar4);
  uVar13 = local_38;
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d62b80();
LAB_01a6d796:
  if (((char)uVar13 != '\0') && (plVar11 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (plVar10 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

