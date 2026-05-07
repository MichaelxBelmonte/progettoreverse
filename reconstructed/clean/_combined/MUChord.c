// ===================================================================
// MUChord — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (6):
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


// ============================================================
// 01a6cf00
// ============================================================
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



// ============================================================
// 01a763e0
// ============================================================
// Function: FUN_01a763e0
// Address: 01a763e0
// Size: 1799 bytes
// Class: MUChord
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void FUN_01a763e0(uint64_t param_1,uint64_t param_2)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  uint64_t uVar4;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar5;
  float fVar6;
  uint64_t uVar7;
  float fVar15;
  double dVar8;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint32_t uVar16;
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint32_t uVar17;
  float fVar18;
  float fVar19;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  uint8_t in_XMM4 [16];
  float fVar20;
  uint8_t in_XMM5 [16];
  uint8_t auVar21 [16];
  uint64_t uVar22;
  uint8_t local_88 [16];
  float local_78;
  uint32_t local_68;
  float fStack_64;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint64_t local_58;
  float fStack_50;
  float fStack_4c;
  int64_t *local_48;
  uint8_t local_40;
  int64_t *local_38;
  char local_30;
  
  fVar19 = (float)((uint64_t)param_2 >> 0x20);
  uVar17 = (uint32_t)param_2;
  (**(code **)(*this_ptr + 0x640))();
  plVar5 = local_38;
  if (local_38 == (int64_t *)0x0) {
    bVar3 = true;
    plVar5 = (int64_t *)0x0;
  }
  else {
    if (local_30 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
      if ((local_30 == '\0') || (bVar3 = false, local_38 == (int64_t *)0x0)) goto LAB_01a76441;
      FUN_00d50b20();
    }
    bVar3 = false;
  }
LAB_01a76441:
  FUN_01e3f820();
  (**(code **)(*plVar5 + 0x3f0))(8,0x11,1,1);
  FUN_01e3f820();
  uVar7 = (**(code **)(*plVar5 + 0x3d0))();
  fVar15 = (float)(uVar7 >> 0x20);
  local_88._8_4_ = uVar17;
  local_88._0_8_ = uVar7;
  local_88._12_4_ = fVar19;
  if ((int)this_ptr[0x40] == 1) {
    uVar7 = FUN_00d05530();
    fVar15 = (float)(uVar7 >> 0x20);
    uVar16 = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
    local_88._12_4_ = fVar19;
    local_88._8_4_ = uVar17;
    local_88._0_8_ = uVar7;
    uVar22 = extraout_XMM0_Qb_00;
    local_68 = uVar17;
    fStack_64 = fVar19;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
  }
  else {
    uVar16 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
    uVar22 = extraout_XMM0_Qb;
    local_68 = uVar17;
    fStack_64 = fVar19;
    uStack_60 = in_XMM1_Dc;
    uStack_5c = in_XMM1_Dd;
  }
  local_78 = fStack_64;
  dVar8 = (double)FUN_00e7d6f0();
  fVar19 = fStack_64;
  uVar17 = local_68;
  auVar21._4_4_ = fStack_64;
  auVar21._0_4_ = local_68;
  auVar21._8_4_ = uStack_60;
  auVar21._12_4_ = uStack_5c;
  uVar4 = extractps(auVar21,0);
  fVar18 = (float)uVar4;
  local_68 = SUB84(dVar8,0);
  fStack_64 = (float)((uint64_t)dVar8 >> 0x20);
  if (*(float *)(this_ptr + 0x23) < *(float *)((int64_t)this_ptr + 0x114) ||
      *(float *)(this_ptr + 0x23) == *(float *)((int64_t)this_ptr + 0x114)) {
    *(float *)(this_ptr + 0x3c) = fVar18;
    if (*(char *)((int64_t)this_ptr + 0x1d4) == '\0') {
      dVar8 = dVar8 - (double)this_ptr[0x3d];
      if (dVar8 < (double)this_ptr[0x3f]) {
        dVar8 = dVar8 / (double)this_ptr[0x3f];
        fVar18 = (g_02390124 - (float)dVar8 * (float)dVar8) * *(float *)(this_ptr + 0x3b);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar18) | g_023945f0;
        auVar12._4_12_ = auVar21._4_12_;
        auVar12._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar12,auVar12,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_68 = uVar17;
        fStack_64 = fVar19;
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(1,local_88);
      }
      else {
        local_68 = uVar17;
        fStack_64 = fVar19;
        if ((int)this_ptr[0x40] == 1) {
          local_30 = '\0';
          local_40 = 0;
          local_48 = (int64_t *)*arg1;
          local_38 = plVar5;
          FUN_01a76150(local_88,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        }
      }
    }
    else {
      local_58 = local_88._0_8_;
      auVar21 = roundss(in_XMM4,ZEXT416((uint)(g_0239011c * local_78)),9);
      fVar6 = auVar21._0_4_;
      _fStack_50 = CONCAT44(fVar6,local_88._8_4_);
      dVar2 = dVar8 - (double)this_ptr[0x3d];
      fVar18 = SUB84(dVar2,0);
      dVar1 = (double)this_ptr[0x3f];
      if (dVar2 < dVar1) {
        fVar18 = (g_02390124 - (float)(dVar2 / dVar1) * (float)(dVar2 / dVar1)) *
                 *(float *)(this_ptr + 0x3b);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar18) | g_023945f0;
        auVar10._4_12_ = auVar21._4_12_;
        auVar10._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar10,auVar10,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        uVar7 = (uint64_t)(uint)fVar6;
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(1,&local_58,SUB84(dVar1,0),dVar8,uVar7);
        fVar6 = (float)uVar7;
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      else if ((int)this_ptr[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        uVar7 = (uint64_t)(uint)fVar6;
        local_48 = (int64_t *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,fVar18,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        fVar6 = (float)uVar7;
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      fStack_64 = fVar19;
      local_68 = uVar17;
      local_58 = CONCAT44((local_78 + fVar15) - fVar6,(uint32_t)local_58);
      dVar8 = dVar8 - (double)this_ptr[0x3e];
      if (dVar8 < (double)this_ptr[0x3f]) {
        dVar8 = dVar8 / (double)this_ptr[0x3f];
        fVar19 = (g_02390124 - (float)dVar8 * (float)dVar8) *
                 *(float *)((int64_t)this_ptr + 0x1dc);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar19) | g_023945f0;
        auVar14._4_12_ = auVar21._4_12_;
        auVar14._0_4_ = auVar21._0_4_ + fVar19;
        roundss(auVar14,auVar14,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(1,&local_58);
      }
      else if ((int)this_ptr[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_48 = (int64_t *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
      }
    }
  }
  else {
    *(float *)(this_ptr + 0x3c) = local_78;
    if (*(char *)((int64_t)this_ptr + 0x1d4) == '\0') {
      dVar8 = dVar8 - (double)this_ptr[0x3d];
      if (dVar8 < (double)this_ptr[0x3f]) {
        dVar8 = dVar8 / (double)this_ptr[0x3f];
        fVar18 = (g_02390124 - (float)dVar8 * (float)dVar8) * *(float *)(this_ptr + 0x3b);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar18) | g_023945f0;
        auVar11._4_12_ = auVar21._4_12_;
        auVar11._0_4_ = auVar21._0_4_ + fVar18;
        roundss(auVar11,auVar11,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_68 = uVar17;
        fStack_64 = fVar19;
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(0,local_88);
      }
      else {
        local_68 = uVar17;
        fStack_64 = fVar19;
        if ((int)this_ptr[0x40] == 1) {
          local_30 = '\0';
          local_40 = 0;
          local_48 = (int64_t *)*arg1;
          local_38 = plVar5;
          FUN_01a76150(local_88,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
        }
      }
    }
    else {
      local_58 = local_88._0_8_;
      auVar21 = roundss(in_XMM5,ZEXT416((uint)(g_0239011c * fVar18)),9);
      fVar20 = auVar21._0_4_;
      _fStack_50 = CONCAT44(local_88._12_4_,fVar20);
      dVar1 = dVar8 - (double)this_ptr[0x3d];
      fVar6 = SUB84(dVar1,0);
      if (dVar1 < (double)this_ptr[0x3f]) {
        fVar6 = (float)(dVar1 / (double)this_ptr[0x3f]);
        fVar6 = (g_02390124 - fVar6 * fVar6) * *(float *)(this_ptr + 0x3b);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar6) | g_023945f0;
        auVar9._4_12_ = auVar21._4_12_;
        auVar9._0_4_ = auVar21._0_4_ + fVar6;
        roundss(auVar9,auVar9,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_78 = fVar18;
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(0,&local_58);
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        fVar18 = local_78;
        fVar15 = fVar20;
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      else if ((int)this_ptr[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_78 = fVar18;
        local_48 = (int64_t *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,fVar6,0,dVar8,uVar7,uVar22,fVar20,uVar16);
        dVar8 = (double)CONCAT44(fStack_64,local_68);
        fVar18 = local_78;
        fVar15 = fVar20;
        uVar17 = local_68;
        fVar19 = fStack_64;
      }
      fStack_64 = fVar19;
      local_68 = uVar17;
      local_58 = CONCAT44(local_58._4_4_,((float)uVar7 + fVar18) - fVar20);
      dVar8 = dVar8 - (double)this_ptr[0x3e];
      if (dVar8 < (double)this_ptr[0x3f]) {
        dVar8 = dVar8 / (double)this_ptr[0x3f];
        fVar19 = (g_02390124 - (float)dVar8 * (float)dVar8) *
                 *(float *)((int64_t)this_ptr + 0x1dc);
        auVar21 = ZEXT416(g_023945e0 & (uint)fVar19) | g_023945f0;
        auVar13._4_12_ = auVar21._4_12_;
        auVar13._0_4_ = auVar21._0_4_ + fVar19;
        roundss(auVar13,auVar13,0xb);
      }
      if ((int)this_ptr[0x40] == 0) {
        local_30 = '\0';
        local_38 = (int64_t *)*arg1;
        FUN_01a76200(0,&local_58);
      }
      else if ((int)this_ptr[0x40] == 1) {
        local_30 = '\0';
        local_40 = 0;
        local_48 = (int64_t *)*arg1;
        local_38 = plVar5;
        FUN_01a76150(&local_58,&local_48,0,dVar8,uVar7,uVar22,fVar15,uVar16);
      }
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a6c2e0
// ============================================================
// Function: FUN_01a6c2e0
// Address: 01a6c2e0
// Size: 1541 bytes
// Class: MUChord
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void* FUN_01a6c2e0(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  bool bVar1;
  char cVar2;
  void*puVar3;
  void *pvVar4;
  void* pVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  char *pcVar8;
  int64_t *arg1;
  void*this_ptr;
  void*local_98;
  char local_90;
  uint32_t local_84;
  int64_t local_80;
  char local_78;
  uint64_t local_70;
  int64_t *local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_84 = param_3;
  local_70 = param_2;
  (**(code **)(*arg1 + 0x988))();
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a6c350;
    }
  }
  else if (local_48 != (int64_t *)0x0) {
LAB_01a6c350:
    if (*(int *)((int64_t)local_48 + 0xc) == 0) {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar5 = 0x2572358;
      *puVar3 = &g_02572358;
      (*g_02572370)();
      if (local_70 >> 0x20 == 0) {
        FUN_01a66e80();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = 0;
        FUN_01252670(0,0,0,0);
        pVar5 = (void*)CONCAT71((int7)((uint64_t)uVar7 >> 8),local_40[0]);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = local_48;
        if (local_48 == (int64_t *)0x0) {
          local_50 = (int64_t *)0x0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_01a66e80();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = local_70;
        FUN_012521f0(local_70,0,0,0);
        pVar5 = (void*)CONCAT71((int7)(uVar6 >> 8),local_40[0]);
        pcVar8 = local_38;
        if (local_40[0] != '\0') {
          pcVar8 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar8 = '\0';
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_50 = local_48;
        if (local_48 == (int64_t *)0x0) {
          local_50 = (int64_t *)0x0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_38[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01787610();
      if ((((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_48 + 0x370))();
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6cc80();
      FUN_017873f0();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6cd50();
      FUN_01787450();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_017879e0();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01a6ce30();
      FUN_01787510();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = '\0';
      local_98 = puVar3;
      (**(code **)(*local_48 + 0x388))(param_1,local_70,&local_98,(int64_t)arg1 + 0x204);
      if (local_40[0] == '\0') {
        if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_90 != '\0') && (local_98 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        local_40[0] = '\0';
        cVar2 = FUN_00d23d70();
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_40[0] = '\0';
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_50 != (int64_t *)0x0) && ((char)local_84 != '\0')) {
        local_40[0] = '\0';
        cVar2 = FUN_00d23d70();
        if ((local_40[0] != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          local_40[0] = '\0';
          FUN_00d23370();
          if ((local_40[0] != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      *this_ptr = puVar3;
      *(void*)(this_ptr + 1) = 1;
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((bVar1) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
    return this_ptr;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}



// ============================================================
// 01a759a0
// ============================================================
// Function: FUN_01a759a0
// Address: 01a759a0
// Size: 1227 bytes
// Class: MUChord
// String references:
//   "%I_%I_%I"
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void* FUN_01a759a0(uint32_t param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t arg1;
  void*this_ptr;
  int iVar8;
  char cVar9;
  bool bVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar11;
  uint8_t auVar12 [16];
  uint8_t in_register_00001244 [12];
  int64_t *local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  int64_t *local_78;
  uint32_t local_6c;
  int64_t *local_68;
  char local_60;
  uint64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  uint local_40;
  uint32_t local_3c;
  int local_38;
  int local_34;
  
  local_6c = param_1;
  iVar3 = FUN_00e7d780();
  iVar4 = FUN_00e7d780();
  if ((g_028b2ff8 == (int64_t *)0x0) || (uVar11 = extraout_XMM0_Qa, g_028b3001 == '\0')) {
    FUN_00e8cb50();
    if (g_028b2ff8 == (int64_t *)0x0) {
      plVar5 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar5 + 0x18))();
      if (g_028b2ff8 == plVar5) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar10 = g_028b2ff8 != (int64_t *)0x0;
        g_028b2ff8 = plVar5;
        if (bVar10) {
          FUN_00d50b20();
        }
      }
      if (g_028b3000 == '\0') {
        g_028b3000 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028b3001 = '\x01';
      uVar11 = FUN_00e8cb70();
    }
    else {
      g_028b3001 = '\x01';
      uVar11 = FUN_00e8cb70();
    }
  }
  local_3c = *(void*)(arg1 + 0x1d0);
  local_40 = 3;
  local_48 = &g_0253a1a8;
  local_38 = iVar3;
  local_34 = iVar4;
  uVar11 = FUN_00d8cb40(uVar11,&local_48);
  if ((local_b0 == '\0') && (local_b8 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b00();
  }
  local_78 = local_b8;
  local_a8 = local_b8;
  local_a0 = '\0';
  uVar11 = FUN_000175c0(uVar11,&local_a8);
  plVar5 = local_48;
  if ((char)local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      uVar11 = FUN_00d50b00();
      if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
  }
  else {
    local_40 = local_40 & 0xffffff00;
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    uVar11 = FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    FUN_01a75080(uVar11,(char)local_6c);
    local_50 = local_48;
    if (local_48 == (int64_t *)0x0) {
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
      if ((char)local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    plVar5 = (int64_t *)FUN_00e8fc40();
    FUN_00152930();
    (**(code **)(*plVar5 + 0x18))();
    FUN_01cfbc00();
    local_68 = local_48;
    local_60 = 0;
    if ((char)local_40 == '\0') {
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = local_40 & 0xffffff00;
    }
    local_60 = '\x01';
    auVar12._4_12_ = in_register_00001244;
    auVar12._0_4_ = (float)iVar4;
    auVar12 = insertps(ZEXT416((uint)(float)iVar3),auVar12,0x10);
    FUN_01d4eaa0(auVar12._0_8_);
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d52700();
    uVar11 = FUN_01d52740();
    local_98 = local_50;
    local_90 = '\0';
    (**(code **)(*local_48 + 0x420))(uVar11,&local_98);
    if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar11 = FUN_01d52770();
    local_80 = '\0';
    local_48 = local_78;
    local_40 = local_40 & 0xffffff00;
    local_88 = plVar5;
    FUN_00ca0840(uVar11,&local_48);
    if (((char)local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)local_6c == '\0') {
      if ((1 < iVar4) && (0 < iVar3)) {
        do {
          iVar8 = 0;
          do {
            FUN_01d53270(0,0,0,iVar8);
            iVar8 = iVar8 + 1;
          } while (iVar3 != iVar8);
          bVar1 = 3 < iVar4;
          iVar4 = iVar4 + -2;
        } while (bVar1);
      }
    }
    else if ((1 < iVar3) && (0 < iVar4)) {
      iVar8 = 1;
      do {
        iVar6 = 0;
        do {
          FUN_01d53270(0,0,0,iVar8);
          iVar6 = iVar6 + 1;
        } while (iVar4 != iVar6);
        iVar8 = iVar8 + 2;
      } while (iVar8 < iVar3);
    }
    cVar9 = (char)local_58;
    plVar7 = local_50;
  }
  else {
    cVar9 = '\0';
    plVar7 = (int64_t *)0x0;
  }
  *this_ptr = plVar5;
  *(void*)(this_ptr + 1) = 1;
  if (local_78 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar9 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01a75080
// ============================================================
// Function: FUN_01a75080
// Address: 01a75080
// Size: 1427 bytes
// Class: MUChord
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void* FUN_01a75080(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  undefined7 uVar5;
  uint64_t uVar4;
  int64_t arg1;
  void*this_ptr;
  void*puVar6;
  void*puVar7;
  void*local_e8;
  void*local_e0;
  uint32_t local_d8;
  uint32_t local_d4;
  uint64_t local_d0;
  void*local_c8;
  char local_c0;
  uint32_t local_78;
  void*local_70;
  uint8_t local_68;
  uint32_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  void*local_48;
  void*local_40;
  uint32_t local_34;
  
  uVar5 = (undefined7)((uint64_t)this_ptr >> 8);
  local_34 = param_2;
  if (*(int *)(arg1 + 0x1d0) == 1) {
    FUN_01cfbee0(g_023b294c,g_023b294c,g_023b294c);
    local_48 = local_c8;
    if (local_c8 == (void*)0x0) {
      local_48 = (void*)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(g_02390128,g_02390128,g_02390128);
    local_40 = local_c8;
    if (local_c8 == (void*)0x0) {
      local_40 = (void*)0x0;
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((uint64_t)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(g_02390124,g_02390124,0);
    puVar6 = local_c8;
    if (local_c8 == (void*)0x0) {
      puVar6 = (void*)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = uVar4;
    FUN_01cfbee0(g_02390124,0,0);
    puVar7 = local_c8;
    if (local_c8 != (void*)0x0) {
      bVar1 = true;
      bVar2 = true;
      param_2 = local_34;
      if (((local_c0 == '\0') &&
          (FUN_00d50b00(), param_2 = local_34, bVar1 = bVar2, local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a7549f;
    }
  }
  else {
    if (*(int *)(arg1 + 0x1d0) != 0) {
      puVar7 = (void*)0x0;
      local_d0 = 0;
      puVar6 = (void*)0x0;
      local_50 = 0;
      local_40 = (void*)0x0;
      local_58 = 0;
      local_48 = (void*)0x0;
      bVar1 = false;
      goto LAB_01a7549f;
    }
    FUN_01cfbee0(0,g_02394214,0);
    local_48 = local_c8;
    if (local_c8 == (void*)0x0) {
      local_48 = (void*)0x0;
      local_58 = 0;
    }
    else {
      local_58 = CONCAT71((int7)((uint64_t)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(0,g_02390124,0);
    local_40 = local_c8;
    if (local_c8 == (void*)0x0) {
      local_40 = (void*)0x0;
      local_50 = 0;
    }
    else {
      local_50 = CONCAT71((int7)((uint64_t)local_c8 >> 8),1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfbee0(g_02390124,g_02390124,0);
    puVar6 = local_c8;
    if (local_c8 == (void*)0x0) {
      puVar6 = (void*)0x0;
      uVar4 = 0;
    }
    else {
      uVar4 = CONCAT71(uVar5,1);
      if (((local_c0 == '\0') && (FUN_00d50b00(), local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    local_d0 = uVar4;
    FUN_01cfbee0(g_02390124,0,0);
    puVar7 = local_c8;
    if (local_c8 != (void*)0x0) {
      bVar1 = true;
      bVar2 = true;
      param_2 = local_34;
      if (((local_c0 == '\0') &&
          (FUN_00d50b00(), param_2 = local_34, bVar1 = bVar2, local_c0 != '\0')) &&
         (local_c8 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a7549f;
    }
  }
  bVar1 = false;
  puVar7 = (void*)0x0;
  param_2 = local_34;
LAB_01a7549f:
  local_34 = 0;
  if ((char)param_2 == '\0') {
    local_34 = g_02394290;
  }
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_001b9f00();
  (**(code **)(*plVar3 + 0x18))();
  local_d8 = 0;
  local_d4 = 0x3f19999a;
  local_e8 = local_40;
  local_e0 = puVar6;
  FUN_01a01f50(&local_e8,&local_d8,&local_d4,&local_e0);
  local_78 = 0x3f4ccccd;
  local_c8 = &g_02628b00;
  local_68 = 0;
  if (puVar7 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_68 = 1;
  local_c8 = &g_02645f38;
  local_60 = 0x3f800000;
  local_70 = puVar7;
  FUN_01f7ba60(local_34,&local_c8);
  FUN_019fe220();
  *this_ptr = plVar3;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (puVar7 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (puVar6 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01a6e330
// ============================================================
// Function: FUN_01a6e330
// Address: 01a6e330
// Size: 970 bytes
// Class: MUChord
// === MUChord properties ===
//                   _tonic
//                   _tuning
//                   _scale
//                   _pitchClasses
//                   _audioSource
//                   _parameterSet


void FUN_01a6e330(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  uint64_t arg1;
  int64_t *this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar1 = local_40;
  (**(code **)(*this_ptr + 0x988))();
  if (local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == (int64_t *)0x0) {
    return;
  }
  if (*(int *)((int64_t)local_40 + 0xc) != 0) {
    FUN_01787610();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    (**(code **)(*local_40 + 0x370))();
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6cc80();
    FUN_017873f0();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6cd50();
    FUN_01787450();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_017879e0();
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01a6ce30();
    FUN_01787510();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xa48))();
    if ((arg1 >> 0x20 == 0) && (param_2 >> 0x20 == 0)) {
      FUN_01a66e80();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_38 = '\0';
      local_40 = (int64_t *)0x0;
      FUN_0124f820();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01a66e80();
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_70 = 0;
    local_68 = '\0';
    (**(code **)(*plVar1 + 0x390))(param_2,arg1,&local_70,0);
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    FUN_01a6e170(param_2,arg1);
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0xa50))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01a73920
// ============================================================
// Function: FUN_01a73920
// Address: 01a73920
// Size: 647 bytes
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


void FUN_01a73920(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar6 = FUN_01b7c310();
  if (*(char *)(this_ptr + 0x201) == '\0') {
    return;
  }
  plVar1 = (int64_t *)*arg1;
  if ((g_02794b40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar4 != 0)) {
    g_02794a90 = FUN_00d4fe50();
    g_02794a78 = "MUChord";
    g_02794a80 = 0x20;
    param_1 = 0x1113770;
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
    uVar6 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01a739a6:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01a739a6;
  }
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      return;
    }
  }
  else {
    uVar6 = FUN_00d50b00();
  }
  if (*(int64_t *)(this_ptr + 0x1f8) == 0) {
    local_48 = '\0';
    local_50 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_01510b20(0,param_2,0,0);
    local_38 = 0;
    if (local_48 != '\0') {
      local_40 = local_50;
      local_48 = '\0';
      goto LAB_01a73a79;
    }
    if (local_50 != 0) {
      uVar6 = FUN_00d50b00();
      local_40 = local_50;
      goto LAB_01a73a79;
    }
  }
  local_40 = 0;
LAB_01a73a79:
  local_38 = '\x01';
  FUN_01b82620(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01a735b0
// ============================================================
// Function: FUN_01a735b0
// Address: 01a735b0
// Size: 647 bytes
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


void FUN_01a735b0(void* param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar6 = FUN_01b7c2c0();
  if (*(char *)(this_ptr + 0x201) == '\0') {
    return;
  }
  plVar1 = (int64_t *)*arg1;
  if ((g_02794b40 == '\0') &&
     (iVar4 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar4 != 0)) {
    g_02794a90 = FUN_00d4fe50();
    g_02794a78 = "MUChord";
    g_02794a80 = 0x20;
    param_1 = 0x1113770;
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
    uVar6 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01a73636:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar6 = extraout_XMM0_Da;
    if (cVar3 == '\0') goto LAB_01a73636;
  }
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      return;
    }
  }
  else {
    uVar6 = FUN_00d50b00();
  }
  if (*(int64_t *)(this_ptr + 0x1f8) == 0) {
    local_48 = '\0';
    local_50 = 0;
  }
  else {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_01510b20(0,param_2,0,0);
    local_38 = 0;
    if (local_48 != '\0') {
      local_40 = local_50;
      local_48 = '\0';
      goto LAB_01a73709;
    }
    if (local_50 != 0) {
      uVar6 = FUN_00d50b00();
      local_40 = local_50;
      goto LAB_01a73709;
    }
  }
  local_40 = 0;
LAB_01a73709:
  local_38 = '\x01';
  FUN_01b82620(uVar6,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 011137c0
// ============================================================
// Function: FUN_011137c0
// Address: 011137c0
// Size: 766 bytes
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


void FUN_011137c0(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_00d4ff80();
  *this_ptr = &g_025fbbb0;
  *(void*)((int64_t)this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_02794b33 == '\0') {
    FUN_01113af0();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 2) = 0;
  // [STATIC_INIT: property registration]
  if (g_02794b33 == '\0') {
    FUN_01113c80();
    FUN_00e87980();
  }
  this_ptr[3] = 0;
  // [STATIC_INIT: property registration]
  if (g_02794b33 == '\0') {
    FUN_01113e10();
    FUN_00e87980();
  }
  return;
}

