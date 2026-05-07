// Function: FUN_016feca0
// Address: 016feca0
// Size: 6821 bytes
// Class: Unknown

void FUN_016feca0(void* param_1,char param_2)

{
  void* pVar1;
  double *pdVar2;
  double dVar3;
  uint64_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  double dVar7;
  double dVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  void *pvVar13;
  uint64_t uVar14;
  int64_t lVar15;
  int64_t lVar16;
  int extraout_var;
  uint64_t uVar17;
  int extraout_var_00;
  void*puVar18;
  int extraout_var_01;
  bool bVar19;
  void* pVar20;
  uint uVar21;
  int64_t *arg1;
  int64_t this_ptr;
  byte bVar22;
  int64_t lVar23;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar24;
  double dVar25;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dd;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  int64_t local_1d8;
  uint8_t local_1d0;
  int64_t local_1c8;
  uint8_t local_1c0;
  int64_t local_1b8;
  uint8_t local_1b0;
  int64_t local_1a8;
  char local_1a0;
  void*local_198;
  uint8_t local_190;
  int64_t local_188;
  char local_180;
  void*local_178;
  uint8_t local_170;
  double local_168;
  char local_160;
  double local_158;
  char local_150;
  double local_148;
  char local_140;
  double local_138;
  double dStack_130;
  uint32_t local_11c;
  double local_118;
  uint32_t uStack_110;
  uint32_t uStack_10c;
  uint32_t local_100;
  uint32_t local_fc;
  double local_f8;
  double local_f0;
  char local_e8;
  double local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  double local_c0;
  char local_b8;
  double local_b0;
  int local_a4;
  double local_a0;
  int64_t local_98;
  uint local_78;
  int iStack_6c;
  uint64_t local_58;
  char local_50;
  double local_40;
  char local_38;
  
  dVar8 = local_40;
  if (*(int *)(*(int64_t *)(this_ptr + 0x60) + 0xc) < 2) {
    return;
  }
  if (*arg1 == **(int64_t **)(*(int64_t *)(this_ptr + 0x60) + 0x10)) {
    return;
  }
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b0 = (double)FUN_01909dc0();
  local_1d8 = *arg1;
  local_1d0 = 0;
  uVar24 = FUN_016f56f0(extraout_XMM0_Da,&local_1d8);
  if ((local_38 == '\0') && (local_40 != 0.0)) {
    uVar24 = FUN_00d50b00();
  }
  local_1c8 = *arg1;
  local_1c0 = 0;
  uVar24 = FUN_016ebbb0(uVar24,&local_1c8);
  if ((local_38 == '\0') && (local_40 != 0.0)) {
    uVar24 = FUN_00d50b00();
  }
  local_98 = (int64_t)local_40;
  local_1b8 = *arg1;
  local_1b0 = 0;
  FUN_016d7fb0(uVar24,1);
  lVar15 = local_98;
  dVar3 = local_b0;
  if (param_2 == '\0') goto LAB_01700729;
  local_100 = 5;
  local_fc = 4;
  FUN_00e7c260();
  dVar7 = local_b0;
  local_f8 = dVar3;
  FUN_00e7c280();
  if (lVar15 == 0) {
LAB_016fee8f:
    bVar22 = 1;
  }
  else {
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_01909dc0();
    FUN_00e7b970();
    if (uVar14 >> 0x20 == 0) goto LAB_016fee8f;
    bVar22 = FUN_00e7c6b0();
  }
  pvVar13 = _pthread_getspecific(param_1);
  pVar1 = SUB84(local_40,0);
  if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
    param_1 = pVar1;
  }
  FUN_01909dc0();
  FUN_00e7b970();
  if ((uint64_t)dVar7 >> 0x20 != 0) {
    bVar9 = FUN_00e7c6b0();
    bVar22 = bVar22 & bVar9;
  }
  pvVar13 = _pthread_getspecific(param_1);
  lVar15 = this_ptr + 0x50;
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)FUN_018fd630();
  pvVar13 = _pthread_getspecific((void*)lVar15);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar25 = (double)FUN_018fd630();
  bVar19 = dVar3 / dVar25 <= g_023b1e80 && g_024119f8 <= dVar3 / dVar25;
  uVar17 = CONCAT71((int7)((uint64_t)lVar15 >> 8),bVar19);
  pVar20 = (void*)uVar17;
  if ((bVar19 & bVar22) != 0) {
    local_a0 = dVar25;
    pvVar13 = _pthread_getspecific(pVar20);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_118 = (double)FUN_018fcb10();
    uStack_110 = extraout_XMM0_Dc;
    uStack_10c = extraout_XMM0_Dd;
    pvVar13 = _pthread_getspecific(pVar20);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar25 = (double)FUN_018fcb10();
    FUN_00c8e690();
    if ((local_38 == '\0') && (dVar7 != 0.0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    dVar3 = g_023b4df8 / dVar3;
    dVar34 = g_023b4df8 / local_a0;
    pdVar2 = *(double **)((int64_t)dVar7 + 0x10);
    auVar30._0_8_ = (dVar3 + local_118) * g_02411890;
    auVar30._8_8_ = (dVar3 + local_118) * _UNK_02411898;
    auVar31._8_8_ = (double)CONCAT44(uStack_10c,uStack_110) + 0.0;
    auVar31._0_8_ = dVar3 * 0.0 + local_118;
    auVar31 = blendpd(auVar30,auVar31,1);
    dVar26 = g_024119a8 * (_UNK_024118a8 * dVar34 + dVar25);
    *pdVar2 = (g_024118a0 * dVar34 + dVar25) * 0.0 + auVar31._0_8_;
    pdVar2[1] = dVar26 + auVar31._8_8_;
    dVar26 = (_UNK_024118b8 * dVar3 + local_118) * _UNK_024118c8;
    dVar32 = (_UNK_024118d8 * dVar34 + dVar25) * _UNK_024118e8;
    pdVar2[2] = (g_024118d0 * dVar34 + dVar25) * g_024118e0 +
                (g_024118b0 * dVar3 + local_118) * g_024118c0;
    pdVar2[3] = dVar32 + dVar26;
    dVar26 = (_UNK_024118f8 * dVar3 + local_118) * _UNK_02411908;
    dVar33 = (_UNK_02411918 * dVar34 + dVar25) * _UNK_02411928;
    dVar32 = (dVar3 * g_02411930 + local_118) * g_02411940;
    dVar27 = (dVar3 * _UNK_02411938 + local_118) * _UNK_02411948;
    dVar28 = dVar34 * g_02411950;
    dVar29 = dVar34 * _UNK_02411958;
    pdVar2[4] = (g_02411910 * dVar34 + dVar25) * g_02411920 +
                (g_024118f0 * dVar3 + local_118) * g_02411900;
    pdVar2[5] = dVar33 + dVar26;
    dVar26 = (dVar29 + dVar25) * _UNK_02411968;
    pdVar2[6] = (dVar28 + dVar25) * g_02411960 + dVar32;
    pdVar2[7] = dVar26 + dVar27;
    dVar3 = (dVar3 * g_0241c3f0 + local_118) * g_02411a00;
    pdVar2[8] = (dVar25 - dVar34) * g_02411a08 + dVar3;
    local_138 = dVar7;
    FUN_016da710(SUB84(dVar3,0),dVar7);
    if ((local_38 == '\0') && (dVar7 != 0.0)) {
      FUN_00d50b00();
    }
    local_118 = dVar7;
    uVar24 = FUN_00e7c280();
    uVar24 = FUN_016da710(uVar24,dVar7);
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      uVar24 = FUN_00d50b20();
    }
    FUN_016da710(uVar24,local_f8);
    if ((local_38 == '\0') && (dVar7 != 0.0)) {
      FUN_00d50b00();
    }
    local_a0 = dVar7;
    pvVar13 = _pthread_getspecific(pVar20);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_168 = dVar7;
    local_160 = '\0';
    uVar14 = 0;
    FUN_01900ec0(0,&local_168);
    if (local_38 == '\0') {
      if (dVar7 != 0.0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_160 != '\0') && (local_168 != 0.0)) {
      FUN_00d50b20();
    }
    if (dVar7 != local_a0) {
      pvVar13 = _pthread_getspecific((void*)uVar14);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_158 = dVar7;
      local_150 = '\0';
      local_148 = local_a0;
      local_140 = '\0';
      FUN_01903160();
      if ((local_140 != '\0') && (local_148 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != 0.0)) {
        FUN_00d50b20();
      }
    }
    local_78 = 1;
    do {
      pvVar13 = _pthread_getspecific((void*)uVar14);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e7c260();
      uVar24 = FUN_01907b60((int)*(void*)
                                  (*(int64_t *)((int64_t)local_138 + 0x10) +
                                  (int64_t)(int)local_78 * 8));
      local_e8 = 0;
      if (local_38 == '\0') {
        if (dVar7 != 0.0) {
          uVar24 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_e8 = '\x01';
      local_f0 = dVar7;
      FUN_01902110(uVar24,0);
      if ((local_e8 != '\0') && (local_f0 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (dVar7 != 0.0)) {
        FUN_00d50b20();
      }
      uVar21 = local_78 + 1;
      uVar14 = (uint64_t)uVar21;
      bVar19 = (int)local_78 < 8;
      local_78 = uVar21;
    } while (bVar19);
    FUN_00e7c280();
    lVar15 = local_98;
    FUN_00e7c260();
    if (lVar15 != 0) {
      pvVar13 = _pthread_getspecific(uVar21);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
      FUN_00e7b970();
      if ((extraout_var != 0) && (cVar10 = FUN_00e7c6b0(), cVar10 == '\0')) {
        pvVar13 = _pthread_getspecific(uVar21);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01909dc0();
      }
    }
    pvVar13 = _pthread_getspecific(uVar21);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar20 = 0;
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    FUN_00e7cc50();
    FUN_00e7c280();
    pvVar13 = _pthread_getspecific(pVar20);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar20 = 0;
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    uVar17 = FUN_00e7cc50();
    if (local_40 != 0.0) {
      pvVar13 = _pthread_getspecific(pVar20);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165d690();
      pvVar13 = _pthread_getspecific(pVar20);
      if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        pVar20 = pVar1;
      }
      uVar14 = FUN_01909dc0();
      if (((extraout_var_00 != 0) && (uVar14 >> 0x20 != 0)) &&
         (cVar10 = FUN_00e7c020(), cVar10 != '\0')) {
        pvVar13 = _pthread_getspecific(pVar20);
        if ((pvVar13 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
          pVar20 = pVar1;
        }
        FUN_01909dc0();
        pvVar13 = _pthread_getspecific(pVar20);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165cf20(0,0);
      }
    }
    puVar18 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar18 = &g_025fa538;
    uVar6 = _UNK_0239372c;
    uVar5 = _UNK_02393728;
    uVar24 = _UNK_02393724;
    *(void*)((int64_t)puVar18 + 0xc) = g_02393720;
    *(void*)(puVar18 + 2) = uVar24;
    *(void*)((int64_t)puVar18 + 0x14) = uVar5;
    *(void*)(puVar18 + 3) = uVar6;
    uVar24 = FUN_00d500e0();
    FUN_016bf110(uVar24,uVar17);
    local_190 = 1;
    local_198 = puVar18;
    FUN_016e9c70(0,2);
    FUN_00d50b20();
    if (dVar7 != 0.0) {
      FUN_00d50b20();
    }
    if (local_a0 != 0.0) {
      FUN_00d50b20();
    }
    if (local_118 != 0.0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    lVar15 = local_98;
    goto LAB_01700729;
  }
  FUN_00c8e690();
  if ((local_38 == '\0') && (dVar7 != 0.0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_a4 = 5;
  FUN_00e7c280();
  lVar23 = 0;
  while( true ) {
    pvVar13 = _pthread_getspecific((void*)uVar17);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar4 = FUN_018fcb10();
    *(void*)(*(int64_t *)((int64_t)dVar7 + 0x10) + lVar23 * 8) = uVar4;
    FUN_00e7c260();
    lVar15 = local_98;
    dVar3 = local_b0;
    if (lVar23 == 10) break;
    lVar23 = lVar23 + 1;
  }
  lVar16 = (int64_t)local_a4;
  lVar23 = *(int64_t *)((int64_t)dVar7 + 0x10);
  *(double *)(lVar23 + lVar16 * 8) =
       (*(double *)(lVar23 + -8 + lVar16 * 8) + *(double *)(lVar23 + 8 + lVar16 * 8)) * g_023942d0
  ;
  iStack_6c = (int)((uint64_t)local_b0 >> 0x20);
  if (local_40 == 0.0) {
    FUN_00e7c280();
    pVar20 = (void*)lVar23;
    FUN_00e7c280();
    FUN_00e7c280();
  }
  else {
    FUN_00e7c280();
    pVar20 = (void*)lVar23;
    pvVar13 = _pthread_getspecific(pVar20);
    if ((pvVar13 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
      pVar20 = pVar1;
    }
    uVar14 = FUN_01909dc0();
    if (((uVar14 >> 0x20 == 0) || (iStack_6c == 0)) || (cVar10 = FUN_00e7c020(), cVar10 != '\0')) {
      FUN_00e7c280();
      pvVar13 = _pthread_getspecific(pVar20);
      if ((pvVar13 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
        pVar20 = pVar1;
      }
      uVar14 = FUN_01909dc0();
      if (((uVar14 >> 0x20 == 0) || (iStack_6c == 0)) || (cVar10 = FUN_00e7c020(), cVar10 != '\0'))
      {
        FUN_00e7c280();
        pvVar13 = _pthread_getspecific(pVar20);
        if ((pvVar13 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
          pVar20 = pVar1;
        }
        uVar14 = FUN_01909dc0();
        if (((uVar14 >> 0x20 == 0) || (iStack_6c == 0)) || (cVar10 = FUN_00e7c020(), cVar10 != '\0')
           ) goto LAB_016ffa74;
      }
    }
    FUN_00e7c260();
  }
LAB_016ffa74:
  if (lVar15 == 0) {
    FUN_00e7c260();
    FUN_00e7c260();
    FUN_00e7c260();
  }
  else {
    FUN_00e7c260();
    pvVar13 = _pthread_getspecific(pVar20);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_01909dc0();
    if (((uVar14 >> 0x20 == 0) || (iStack_6c == 0)) || (cVar10 = FUN_00e7c020(), cVar10 != '\0')) {
      FUN_00e7c260();
      pvVar13 = _pthread_getspecific(pVar20);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar14 = FUN_01909dc0();
      if (((uVar14 >> 0x20 == 0) || (iStack_6c == 0)) || (cVar10 = FUN_00e7c020(), cVar10 != '\0'))
      {
        FUN_00e7c260();
        pvVar13 = _pthread_getspecific(pVar20);
        if (pvVar13 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar14 = FUN_01909dc0();
        if (((uVar14 >> 0x20 == 0) || (iStack_6c == 0)) || (cVar10 = FUN_00e7c020(), cVar10 != '\0')
           ) goto LAB_016ffc7b;
      }
    }
    FUN_00e7c280();
  }
LAB_016ffc7b:
  local_58 = CONCAT44((int)((uint64_t)dVar7 >> 0x20),1);
  uVar24 = FUN_00e7c260();
  FUN_016da710(uVar24,dVar3);
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific(pVar20);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar13 = _pthread_getspecific(pVar20);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar20 = 0;
  FUN_018fef60(0,dVar3);
  local_d8 = 0;
  if (local_38 == '\0') {
    if (dVar3 != 0.0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_d8 = '\x01';
  local_e0 = dVar3;
  pvVar13 = _pthread_getspecific(pVar20);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar24 = FUN_018ff980(0,dVar3);
  local_c8 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      uVar24 = FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_c8 = '\x01';
  local_d0 = local_58;
  FUN_01903160(uVar24,&local_d0);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0.0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (dVar3 != 0.0)) {
    FUN_00d50b20();
  }
  FUN_00e7b970();
  iVar11 = FUN_00e7cea0();
  local_40 = dVar3;
  FUN_00e7b970();
  iVar12 = FUN_00e7cea0();
  pVar20 = iVar12 + iVar11;
  if (-1 < (int)pVar20) {
    uVar14 = (uint64_t)(uint)(local_a4 - iVar11);
    lVar23 = (int64_t)(local_a4 - iVar11);
    iVar11 = iVar12 + iVar11 + 1;
    do {
      lVar15 = *(int64_t *)((int64_t)dVar7 + 0x10);
      local_118 = *(double *)(lVar15 + -0x10 + lVar23 * 8);
      local_a0 = *(double *)(lVar15 + -8 + lVar23 * 8);
      dVar3 = *(double *)(lVar15 + lVar23 * 8);
      pdVar2 = (double *)(lVar15 + 8 + lVar23 * 8);
      local_138 = *pdVar2;
      dStack_130 = pdVar2[1];
      pvVar13 = _pthread_getspecific((void*)uVar14);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar24 = FUN_01907b60(SUB84(dStack_130 * _UNK_02411858 +
                                  dVar3 * g_024119b8 +
                                  local_a0 * g_024119b0 + local_118 * g_024119a8 +
                                  local_138 * g_02411850,0));
      local_b8 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0.0) {
          uVar24 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      lVar15 = local_98;
      local_b8 = '\x01';
      local_c0 = local_40;
      FUN_01902110(uVar24,0);
      if ((local_b8 != '\0') && (local_c0 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
      local_40 = (double)CONCAT44(local_40._4_4_,1);
      FUN_00e7c260();
      pVar20 = (void*)uVar14;
      lVar23 = lVar23 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  if (lVar15 != 0) {
    pvVar13 = _pthread_getspecific(pVar20);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar14 = FUN_01909dc0();
    FUN_00e7b970();
    local_11c = 6;
    if ((uVar14 >> 0x20 != 0) && (cVar10 = FUN_00e7c6b0(), cVar10 == '\0')) {
      pvVar13 = _pthread_getspecific(pVar20);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01909dc0();
    }
  }
  pvVar13 = _pthread_getspecific(pVar20);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar20 = 0;
  FUN_0165cf20(0,0);
  FUN_00e7c860();
  FUN_00e7cc50();
  FUN_00e7c280();
  pvVar13 = _pthread_getspecific(pVar20);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar20 = 0;
  FUN_0165cf20(0,0);
  FUN_00e7c860();
  uVar17 = FUN_00e7cc50();
  if (dVar8 != 0.0) {
    pvVar13 = _pthread_getspecific(pVar20);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165d690();
    pvVar13 = _pthread_getspecific(pVar20);
    if ((pvVar13 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
      pVar20 = pVar1;
    }
    uVar14 = FUN_01909dc0();
    if (((extraout_var_01 != 0) && (uVar14 >> 0x20 != 0)) &&
       (cVar10 = FUN_00e7c020(), cVar10 != '\0')) {
      pvVar13 = _pthread_getspecific(pVar20);
      if ((pvVar13 != (void *)0x0) && (lVar23 = FUN_00e8b990(), lVar23 != 0)) {
        pVar20 = pVar1;
      }
      FUN_01909dc0();
      pvVar13 = _pthread_getspecific(pVar20);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165cf20(0,0);
    }
  }
  puVar18 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar18 = &g_025fa538;
  uVar6 = _UNK_0239372c;
  uVar5 = _UNK_02393728;
  uVar24 = _UNK_02393724;
  *(void*)((int64_t)puVar18 + 0xc) = g_02393720;
  *(void*)(puVar18 + 2) = uVar24;
  *(void*)((int64_t)puVar18 + 0x14) = uVar5;
  *(void*)(puVar18 + 3) = uVar6;
  uVar24 = FUN_00d500e0();
  FUN_016bf110(uVar24,uVar17);
  local_170 = 1;
  local_178 = puVar18;
  FUN_016e9c70(0,2);
  FUN_00d50b20();
  if (dVar7 != 0.0) {
    FUN_00d50b20();
  }
LAB_01700729:
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if (dVar8 != 0.0) {
    FUN_00d50b20();
  }
  return;
}

