// Function: FUN_016dcbf0
// Address: 016dcbf0
// Size: 11235 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_016dcbf0(double param_1,int64_t *param_2)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void*puVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint32_t uVar10;
  void* pVar11;
  void *pvVar12;
  void*puVar13;
  uint64_t *puVar14;
  code *pcVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  void*puVar18;
  void*puVar19;
  void* pVar20;
  code *pcVar21;
  uint64_t **ppuVar22;
  int64_t lVar23;
  code *pcVar24;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar25;
  uint64_t uVar26;
  uint64_t **ppuVar27;
  int iVar28;
  int64_t lVar29;
  int64_t *plVar30;
  int64_t lVar31;
  int64_t lVar32;
  bool bVar33;
  bool bVar34;
  uint64_t uVar35;
  uint64_t extraout_XMM0_Qa;
  double dVar36;
  double dVar37;
  double extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  int64_t local_1d0;
  uint8_t local_1c8;
  void*local_1c0;
  uint8_t local_1b8;
  void*local_1b0;
  uint8_t local_1a8;
  void*local_1a0;
  uint8_t local_198;
  void*local_190;
  uint8_t local_188;
  void*local_180;
  uint8_t local_178;
  uint64_t *local_170;
  uint8_t local_168;
  code *local_160;
  uint8_t local_158;
  uint64_t local_150;
  uint64_t local_148;
  uint32_t local_13c;
  uint64_t local_138;
  uint64_t local_130;
  uint64_t local_128;
  void* local_11c;
  uint64_t *local_118;
  uint64_t local_110;
  int64_t local_108;
  uint local_fc;
  void*local_f8;
  double local_f0;
  uint64_t local_e8;
  double local_e0;
  void*local_d8;
  int64_t *local_d0;
  uint64_t *local_c8;
  code *local_c0;
  uint32_t local_b4;
  uint64_t *local_b0;
  void*local_a8;
  uint64_t local_a0;
  code *local_98;
  char local_89;
  void*local_88;
  int64_t local_80;
  uint64_t *local_78;
  code *local_70;
  uint64_t local_68;
  uint64_t local_60;
  char local_58;
  uint64_t local_40;
  char local_38 [8];
  
  lVar32 = *arg1;
  local_e0 = param_1;
  local_d0 = param_2;
  if (lVar32 == 0) {
LAB_016dcc50:
    pVar11 = SUB84(param_1,0);
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019012b0();
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar11 = 0;
    FUN_0165cf20(0,0);
    if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01901340();
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    pVar11 = 0;
    FUN_0165cf20(0,0);
    if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (*(int *)(lVar32 + 0x10) != 0) {
      if (*(int *)(lVar32 + 0x18) != 0) {
        cVar7 = FUN_00e7c000();
        if (cVar7 != '\0') goto LAB_016dcc50;
        lVar32 = *arg1;
        if (*(int *)(lVar32 + 0x10) == 0) goto LAB_016dcea8;
      }
      if ((((*(int *)(lVar32 + 0x18) != 0) && (cVar7 = FUN_00e7c000(), cVar7 == '\0')) &&
          (uVar26 = *(uint64_t *)(lVar32 + 0xc), uVar26 >> 0x20 != 0)) &&
         (*(int *)(lVar32 + 0x18) != 0)) {
        local_118 = (uint64_t *)CONCAT44(local_118._4_4_,2);
        FUN_00e7c260();
        local_60 = (uint64_t *)uVar26;
        local_40 = (void*)uVar26;
        if (((uVar26 >> 0x20 != 0) && (*(int *)(lVar32 + 0x18) != 0)) &&
           (cVar7 = FUN_00e7c020(), cVar7 == '\0')) {
          return;
        }
      }
    }
LAB_016dcea8:
    local_1d0 = *arg1;
    local_1c8 = 0;
    FUN_016ce9f0(0,&local_1d0);
    if ((local_38[0] == '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b00();
    }
    if (*(uint64_t *)((int64_t)local_40 + 0xc) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    pVar11 = (void*)(*(uint64_t *)((int64_t)local_40 + 0x14) >> 0x20);
    if (*(uint64_t *)((int64_t)local_40 + 0x14) >> 0x20 == 0) {
      FUN_00e7bdb0();
    }
    else {
      local_60 = (uint64_t *)CONCAT44(local_60._4_4_,1);
      FUN_00e7c280();
    }
    FUN_00d50b20();
  }
  FUN_00e7c860();
  FUN_00e7cc50();
  FUN_00e7c860();
  FUN_00e7cc50();
  local_118 = *(uint64_t **)(this_ptr + 0x68);
  pvVar12 = _pthread_getspecific(pVar11);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_110 = FUN_0165d690();
  pvVar12 = _pthread_getspecific(pVar11);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_e8 = FUN_0165d690();
  FUN_00e7b820();
  local_60._0_4_ = 2;
  uVar35 = FUN_00e7c3c0();
  uVar35 = FUN_016cbad0(uVar35,0);
  local_60 = (uint64_t *)CONCAT44(local_60._4_4_,2);
  FUN_00e7c3c0();
  local_138 = uVar35;
  FUN_00e7c4f0();
  local_fc = FUN_00e7cea0();
  uVar35 = local_138;
  FUN_00e7c2a0();
  uVar5 = local_e8;
  local_150 = uVar35;
  FUN_00e7b820();
  local_148 = uVar5;
  FUN_00e7b970();
  FUN_00e7bdc0();
  FUN_00e7cea0();
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  local_a8 = &g_025683c0;
  *puVar13 = &g_025683c0;
  local_c0 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  local_88 = puVar13;
  FUN_00c92160();
  puVar14 = (uint64_t *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar14 = (uint64_t)local_a8;
  (*local_c0)();
  FUN_00c92170();
  FUN_00c92160();
  local_b0 = puVar14;
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = local_a8;
  (*local_c0)();
  FUN_00c92170();
  FUN_00c92160();
  local_f8 = puVar13;
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = local_a8;
  (*local_c0)();
  FUN_00c92170();
  FUN_00c92160();
  local_d8 = puVar13;
  FUN_00c8e7d0();
  FUN_00c8e7d0();
  FUN_00c8e7d0();
  FUN_00c8e7d0();
  lVar32 = local_110;
  local_13c = 0xffffffff;
  uVar35 = FUN_00e7b970();
  local_130 = lVar32;
  do {
    iVar9 = *(int *)(local_88 + 3);
    FUN_00c8e340(uVar35,1);
    *(int64_t *)(local_88[2] + (int64_t)iVar9) = local_130;
    pvVar12 = _pthread_getspecific((void*)local_130);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar35 = FUN_018fcb10();
    uVar26 = local_b0[3];
    FUN_00c8e340(uVar35,1);
    *(void*)(local_b0[2] + (int64_t)(int)uVar26) = uVar35;
    uVar35 = FUN_00e7b820();
  } while (((local_130._4_4_ == 0) || (local_148._4_4_ == 0)) ||
          (cVar7 = FUN_00e7c020(), uVar35 = extraout_XMM0_Qa, cVar7 == '\0'));
  lVar29 = *(int64_t *)(this_ptr + 0x70);
  if (lVar29 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\0';
  local_60 = (uint64_t *)lVar29;
  FUN_00c8e4f0();
  local_80 = lVar32;
  if (local_38[0] == '\0') {
    if (((lVar32 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (lVar32 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  uVar35 = FUN_00c92160();
  if (lVar29 != 0) {
    uVar35 = FUN_00d50b20();
  }
  lVar23 = local_80;
  lVar29 = *local_d0;
  if ((lVar29 != 0) && (7 < *(int *)(lVar29 + 0x18))) {
    lVar31 = 0;
    do {
      lVar29 = *(int64_t *)(lVar29 + 0x10);
      iVar9 = *(int *)(lVar23 + 0x18);
      uVar35 = FUN_00c8e340(uVar35,1);
      *(void*)(*(int64_t *)(lVar23 + 0x10) + (int64_t)iVar9) =
           *(void*)(lVar29 + lVar31 * 8);
      lVar31 = lVar31 + 1;
      lVar29 = *local_d0;
      iVar9 = *(int *)(lVar29 + 0x18);
      iVar25 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar25 = iVar9;
      }
    } while (lVar31 < iVar25 >> 3);
  }
  local_60 = local_b0;
  local_58 = '\0';
  FUN_00c8e4f0();
  local_108 = lVar32;
  if (local_38[0] == '\0') {
    if (((lVar32 != 0) && (FUN_00d50b00(), local_38[0] != '\0')) && (lVar32 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar9 = *(int *)(local_88 + 3);
  if (0x17 < iVar9) {
    lVar32 = 1;
    do {
      iVar9 = *(int *)(local_80 + 0x18);
      iVar25 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar25 = iVar9;
      }
      if (iVar9 < 8) {
LAB_016dd564:
        pcVar15 = (lVar32 + -1);
      }
      else {
        lVar29 = local_88[2];
        iVar25 = iVar25 >> 3;
        lVar23 = *(int64_t *)(local_80 + 0x10);
        do {
          if (((*(int *)(lVar23 + 4) != 0) && (*(int *)(lVar29 + 4 + lVar32 * 8) != 0)) &&
             (cVar7 = FUN_00e7c000(), cVar7 != '\0')) goto LAB_016dd5b5;
          lVar23 = lVar23 + 8;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        iVar9 = *(int *)(local_80 + 0x18);
        iVar25 = iVar9 + 7;
        if (-1 < iVar9) {
          iVar25 = iVar9;
        }
        if (iVar9 < 8) goto LAB_016dd564;
        lVar29 = local_88[2];
        iVar25 = iVar25 >> 3;
        lVar23 = *(int64_t *)(local_80 + 0x10);
        local_70 = (lVar32 + -1);
        do {
          if (((*(int *)(lVar23 + 4) != 0) && (*(int *)(lVar29 + -4 + lVar32 * 8) != 0)) &&
             (cVar7 = FUN_00e7c000(), cVar7 != '\0')) goto LAB_016dd5b5;
          lVar23 = lVar23 + 8;
          iVar25 = iVar25 + -1;
        } while (iVar25 != 0);
        iVar9 = *(int *)(local_80 + 0x18);
        iVar25 = iVar9 + 7;
        if (-1 < iVar9) {
          iVar25 = iVar9;
        }
        pcVar15 = local_70;
        if (7 < iVar9) {
          lVar29 = local_88[2];
          iVar25 = iVar25 >> 3;
          lVar23 = *(int64_t *)(local_80 + 0x10);
          do {
            if (((*(int *)(lVar23 + 4) != 0) && (*(int *)(lVar29 + 0xc + lVar32 * 8) != 0)) &&
               (cVar7 = FUN_00e7c000(), cVar7 != '\0')) goto LAB_016dd5b5;
            lVar23 = lVar23 + 8;
            iVar25 = iVar25 + -1;
            pcVar15 = local_70;
          } while (iVar25 != 0);
        }
      }
      lVar29 = *(int64_t *)(local_108 + 0x10);
      *(double *)(local_b0[2] + lVar32 * 8) =
           *(double *)(lVar29 + (lVar32 + 1) * 8) * g_023b3498 +
           *(double *)(lVar29 + lVar32 * 8) * g_023942d0 +
           *(double *)(lVar29 + (int64_t)pcVar15 * 8) * g_023b3498;
LAB_016dd5b5:
      lVar32 = lVar32 + 1;
      iVar9 = *(int *)(local_88 + 3);
      iVar25 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar25 = iVar9;
      }
    } while (lVar32 < (iVar25 >> 3) + -1);
  }
  if (0xf < iVar9) {
    lVar29 = 0;
    lVar32 = 0;
    do {
      local_70 = (*(double *)(local_b0[2] + 8 + lVar29) - *(double *)(local_b0[2] + lVar29))
      ;
      puVar14 = *(uint64_t **)(local_88[2] + 8 + lVar29);
      FUN_00e7b970();
      puVar13 = local_f8;
      local_60 = puVar14;
      dVar36 = (double)FUN_00e7c860();
      dVar36 = dVar36 * g_023b4df8;
      iVar9 = *(int *)(puVar13 + 3);
      FUN_00c8e340(dVar36,1);
      puVar6 = local_d8;
      dVar36 = dVar36 / (double)local_70;
      *(double *)(puVar13[2] + (int64_t)iVar9) = dVar36;
      iVar9 = *(int *)(local_d8 + 3);
      FUN_00c8e340(dVar36,1);
      lVar32 = lVar32 + 1;
      uVar35 = _log(dVar36);
      *(void*)(puVar6[2] + (int64_t)iVar9) = uVar35;
      iVar9 = *(int *)(local_88 + 3);
      iVar25 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar25 = iVar9;
      }
      lVar29 = lVar29 + 8;
    } while (lVar32 < (iVar25 >> 3) + -1);
  }
  puVar13 = local_f8;
  iVar9 = *(int *)(local_f8 + 3);
  uVar35 = *(void*)((int64_t)iVar9 + -8 + local_f8[2]);
  FUN_00c8e340(uVar35,1);
  puVar6 = local_d8;
  *(void*)(puVar13[2] + (int64_t)iVar9) = uVar35;
  iVar9 = *(int *)(local_d8 + 3);
  uVar35 = *(void*)((int64_t)iVar9 + -8 + local_d8[2]);
  FUN_00c8e340(uVar35,1);
  *(void*)(puVar6[2] + (int64_t)iVar9) = uVar35;
  iVar9 = SUB84(local_e0,0);
  FUN_00e7b970();
  FUN_00e7bdc0();
  FUN_00e7cea0();
  pcVar15 = FUN_00e8fc40();
  FUN_00d4ff40();
  *(void**)pcVar15 = &g_02572358;
  (*g_02572370)();
  local_89 = (iVar9 - 0x12U & 0xfffffffd) == 0;
  FUN_00d21370();
  local_98 = (uint64_t)local_fc;
  local_b4 = CONCAT31(local_b4._1_3_,(SUB84(local_e0,0) == 0x12) != (SUB84(local_e0,0) == 0x14));
LAB_016dd978:
  do {
    pcVar24 = (int64_t)(int)local_98;
    while( true ) {
      lVar32 = local_88[2];
      local_68 = *(uint64_t **)(lVar32 + (int64_t)pcVar24 * 8);
      local_a0 = *(uint64_t **)(lVar32 + 8 + (int64_t)pcVar24 * 8);
      local_128 = *(uint64_t *)(lVar32 + 8 + (int64_t)pcVar24 * 8);
      FUN_00e7b970();
      local_70 = pcVar24;
      FUN_00e7bdc0();
      iVar9 = FUN_00e7cea0();
      pcVar21 = local_70;
      FUN_01907b60(*(void*)(local_b0[2] + (int64_t)local_70 * 8));
      puVar14 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (uint64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38[0] = '\0';
      FUN_00d21140();
      if ((local_38[0] != '\0') && (puVar14 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar14 != (uint64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((local_68._4_4_ != 0) && (local_e8._4_4_ != 0)) &&
         (cVar7 = FUN_00e7c020(), cVar7 == '\0')) {
        if (*(int *)(pcVar15 + 0xc) == 0) goto LAB_016df77d;
        pVar11 = (void*)pcVar15;
        if (*(int *)(pcVar15 + 0xc) < 2) goto LAB_016de3db;
        pvVar12 = _pthread_getspecific((void*)pcVar21);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar35 = FUN_019079b0();
        local_60 = (uint64_t *)FUN_017048a0(uVar35,1);
        pcVar21 = pcVar15;
        if (*(int *)(pcVar15 + 0xc) < 3) goto LAB_016de3db;
        lVar32 = 1;
        goto LAB_016de09c;
      }
      local_98 = local_70 + 1;
      if (iVar9 < 2) goto LAB_016dd978;
      if ((((local_68._4_4_ == 0) || (local_110._4_4_ == 0)) ||
          (cVar7 = FUN_00e7c000(), cVar7 == '\0')) &&
         (((local_a0._4_4_ == 0 || (local_e8._4_4_ == 0)) ||
          ((cVar7 = FUN_00e7c000(), cVar7 == '\0' ||
           ((local_e0._0_4_ == 0x12 || (local_e0._0_4_ == 0x14)))))))) break;
      local_c8 = (uint64_t *)CONCAT44(local_c8._4_4_,1);
      do {
        puVar14 = local_118;
        FUN_00e7c2a0();
        local_60 = puVar14;
        FUN_00e7b820();
        pvVar12 = _pthread_getspecific((void*)pcVar21);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_018fcb10();
        FUN_01907b60();
        puVar14 = local_60;
        if (local_58 == '\0') {
          if (local_60 != (uint64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_38[0] = '\0';
        FUN_00d21140();
        if ((local_38[0] != '\0') && (puVar14 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (puVar14 != (uint64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
          FUN_00d50b20();
        }
        iVar25 = (int)local_c8 + 1;
        local_c8 = (uint64_t *)CONCAT44(local_c8._4_4_,iVar25);
        pcVar24 = local_98;
      } while (iVar25 < iVar9);
    }
    uVar10 = 1;
    if ((byte)local_b4 == '\0') {
      local_1c0 = local_88;
      local_1b8 = 0;
      local_1b0 = local_d8;
      local_1a8 = 0;
      uVar10 = FUN_01704680();
    }
    local_f0 = (double)CONCAT44(local_f0._4_4_,uVar10);
    iVar25 = *(int *)(local_80 + 0x18);
    iVar28 = iVar25 + 7;
    if (-1 < iVar25) {
      iVar28 = iVar25;
    }
    if (7 < iVar25) {
      iVar28 = iVar28 >> 3;
      lVar32 = *(int64_t *)(local_80 + 0x10);
      do {
        if (((*(int *)(lVar32 + 4) != 0) && (local_68._4_4_ != 0)) &&
           (cVar7 = FUN_00e7c000(), dVar36 = g_0238fee8, cVar7 != '\0')) goto LAB_016dde2e;
        lVar32 = lVar32 + 8;
        iVar28 = iVar28 + -1;
      } while (iVar28 != 0);
      iVar25 = *(int *)(local_80 + 0x18);
      iVar28 = iVar25 + 7;
      if (-1 < iVar25) {
        iVar28 = iVar25;
      }
      if (7 < iVar25) {
        iVar28 = iVar28 >> 3;
        lVar32 = *(int64_t *)(local_80 + 0x10);
        do {
          if (((*(int *)(lVar32 + 4) != 0) && (local_a0._4_4_ != 0)) &&
             (cVar7 = FUN_00e7c000(), dVar36 = g_0238fee8, cVar7 != '\0')) goto LAB_016dde2e;
          lVar32 = lVar32 + 8;
          iVar28 = iVar28 + -1;
        } while (iVar28 != 0);
        iVar25 = *(int *)(local_80 + 0x18);
        iVar28 = iVar25 + 7;
        if (-1 < iVar25) {
          iVar28 = iVar25;
        }
        if (7 < iVar25) {
          iVar28 = iVar28 >> 3;
          lVar32 = *(int64_t *)(local_80 + 0x10);
          do {
            if (((*(int *)(lVar32 + 4) != 0) && (local_128._4_4_ != 0)) &&
               (cVar7 = FUN_00e7c000(), dVar36 = g_0238fee8, cVar7 != '\0')) goto LAB_016dde2e;
            lVar32 = lVar32 + 8;
            iVar28 = iVar28 + -1;
          } while (iVar28 != 0);
        }
      }
    }
    dVar36 = g_0238fee8;
    if (local_f0._0_4_ != 0) {
      pcVar21 = local_70;
      pcVar24 = (int64_t)((int)local_70 + -1);
      if (0 < local_f0._0_4_) {
        pcVar21 = local_98;
        pcVar24 = local_70;
      }
      dVar36 = *(double *)(local_f8[2] + (int64_t)pcVar21 * 8) /
               *(double *)(local_f8[2] + (int64_t)pcVar24 * 8);
    }
LAB_016dde2e:
    FUN_01704310(*(void*)(local_b0[2] + (int64_t)local_70 * 8),
                 *(void*)(local_b0[2] + (int64_t)local_98 * 8),dVar36);
    if ((local_38[0] == '\0') && (puVar14 != (uint64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_78._0_4_ = 1;
    do {
      puVar4 = local_118;
      FUN_00e7c2a0();
      local_c8 = puVar4;
      FUN_00e7b820();
      FUN_01907b60(*(void*)(puVar14[2] + (int64_t)(int)local_78 * 8));
      puVar4 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (uint64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_38[0] = '\0';
      FUN_00d21140();
      if ((local_38[0] != '\0') && (puVar4 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar4 != (uint64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (uint64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_78._0_4_ = (int)local_78 + 1;
    } while ((int)local_78 < iVar9);
    FUN_00d50b20();
  } while( true );
LAB_016de09c:
  do {
    pVar20 = pVar11;
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (uint64_t *)FUN_019079b0();
    if (((local_60._4_4_ == 0) || ((uint64_t)local_68 >> 0x20 == 0)) ||
       (cVar7 = FUN_00e7c000(), cVar7 == '\0')) {
      lVar29 = *local_d0;
      if (lVar29 != 0) {
        uVar2 = *(uint *)(lVar29 + 0x18);
        uVar26 = (uint64_t)uVar2;
        uVar3 = uVar2 + 7;
        if (-1 < (int)uVar2) {
          uVar3 = uVar2;
        }
        if (7 < (int)uVar2) {
          iVar9 = (int)uVar3 >> 3;
          lVar29 = *(int64_t *)(lVar29 + 0x10);
          do {
            if ((*(int *)(lVar29 + 4) != 0) && (local_68._4_4_ != 0)) {
              cVar7 = FUN_00e7c000();
              pVar20 = (void*)uVar26;
              if (cVar7 != '\0') goto LAB_016de159;
            }
            lVar29 = lVar29 + 8;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
        }
      }
    }
    else {
LAB_016de159:
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_70 = FUN_01907950();
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = FUN_01907950();
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_f0 = (double)FUN_01907950();
      pvVar12 = _pthread_getspecific(pVar20);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar36 = (double)FUN_01907950();
      dVar37 = ((double)local_70 - (double)local_98) / (local_f0 - dVar36);
      dVar36 = dVar37;
      if ((dVar37 <= g_02411998) || (dVar36 = g_024119a0, g_024119a0 <= dVar37)) {
        lVar29 = *local_d0;
        if (lVar29 != 0) {
          iVar9 = *(int *)(lVar29 + 0x18);
          iVar25 = iVar9 + 7;
          if (-1 < iVar9) {
            iVar25 = iVar9;
          }
          if (7 < iVar9) {
            iVar25 = iVar25 >> 3;
            lVar29 = *(int64_t *)(lVar29 + 0x10);
            do {
              if (((*(int *)(lVar29 + 4) != 0) && (local_68._4_4_ != 0)) &&
                 (cVar7 = FUN_00e7c000(), dVar36 = extraout_XMM0_Qa_00, cVar7 != '\0')) {
                dVar36 = (double)FUN_016cc400();
                break;
              }
              lVar29 = lVar29 + 8;
              iVar25 = iVar25 + -1;
            } while (iVar25 != 0);
          }
        }
      }
      else {
        dVar36 = (double)FUN_016ebc80(g_024119a0,local_68);
        if ((local_38[0] != '\0') && (puVar14 != (uint64_t *)0x0)) {
          dVar36 = (double)FUN_00d50b20();
        }
        if (puVar14 == (uint64_t *)0x0) {
          dVar36 = (double)FUN_016ebd80();
          if (((local_e0._0_4_ == 0xc) && (*(int64_t *)(this_ptr + 0x88) != 0)) &&
             (*(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x88) + 0x10) + 8) != 0)) {
            pvVar12 = _pthread_getspecific(pVar20);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar36 = (double)FUN_016ebd80();
          }
        }
      }
      local_60 = (uint64_t *)FUN_017048a0(dVar36,0);
    }
    lVar32 = lVar32 + 1;
  } while (lVar32 < (int64_t)*(int *)(pcVar15 + 0xc) + -1);
LAB_016de3db:
  puVar13 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar13 = local_a8;
  (*local_c0)();
  FUN_00c92170();
  FUN_00c92160();
  pcVar24 = (uint64_t)*(uint *)(pcVar15 + 0xc);
  local_70 = puVar13;
  if (0 < (int)*(uint *)(pcVar15 + 0xc)) {
    lVar32 = 0;
    do {
      pvVar12 = _pthread_getspecific((void*)pcVar21);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = FUN_01907950();
      iVar9 = *(int *)((int64_t)local_70 + 0x18);
      FUN_00c8e340(local_98,1);
      *(code **)(*(int64_t *)((int64_t)local_70 + 0x10) + (int64_t)iVar9) = local_98;
      lVar32 = lVar32 + 1;
      pcVar21 = (int64_t)*(int *)(pcVar15 + 0xc);
    } while (lVar32 < (int64_t)pcVar21);
    plVar30 = (int64_t *)(this_ptr + 0x70);
    pcVar24 = pcVar21;
    if (2 < *(int *)(pcVar15 + 0xc)) {
      uVar26 = 1;
      local_c0 = pcVar21;
      do {
        pvVar12 = _pthread_getspecific(pVar11);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_019079b0();
        lVar32 = *plVar30;
        if (7 < *(int *)(lVar32 + 0x18)) {
          uVar17 = uVar16 >> 0x20;
          lVar29 = 1;
          iVar25 = 0;
          iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + 4);
          do {
            if ((iVar9 != 0) && ((int)uVar17 != 0)) {
              cVar7 = FUN_00e7c000();
              if (cVar7 != '\0') {
                if (iVar25 != -8) goto LAB_016de529;
                break;
              }
              lVar32 = *plVar30;
            }
            iVar9 = *(int *)(lVar32 + 0x18);
            iVar28 = iVar9 + 7;
            if (-1 < iVar9) {
              iVar28 = iVar9;
            }
            if (iVar28 >> 3 <= lVar29) break;
            uVar17 = uVar16 >> 0x20;
            iVar25 = iVar25 + 8;
            lVar29 = lVar29 + 1;
            iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + -4 + lVar29 * 8);
          } while( true );
        }
        pvVar12 = _pthread_getspecific((void*)lVar32);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_019079b0();
        lVar32 = *plVar30;
        if (7 < *(int *)(lVar32 + 0x18)) {
          uVar17 = uVar16 >> 0x20;
          lVar29 = 1;
          iVar25 = 0;
          iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + 4);
          do {
            if ((iVar9 != 0) && ((int)uVar17 != 0)) {
              cVar7 = FUN_00e7c000();
              if (cVar7 != '\0') {
                if (iVar25 != -8) goto LAB_016de529;
                break;
              }
              lVar32 = *plVar30;
            }
            iVar9 = *(int *)(lVar32 + 0x18);
            iVar28 = iVar9 + 7;
            if (-1 < iVar9) {
              iVar28 = iVar9;
            }
            if (iVar28 >> 3 <= lVar29) break;
            uVar17 = uVar16 >> 0x20;
            iVar25 = iVar25 + 8;
            lVar29 = lVar29 + 1;
            iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + -4 + lVar29 * 8);
          } while( true );
        }
        pvVar12 = _pthread_getspecific((void*)lVar32);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar16 = FUN_019079b0();
        lVar32 = *plVar30;
        if (7 < *(int *)(lVar32 + 0x18)) {
          uVar17 = uVar16 >> 0x20;
          lVar29 = 1;
          iVar25 = 0;
          iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + 4);
          do {
            if ((iVar9 != 0) && ((int)uVar17 != 0)) {
              cVar7 = FUN_00e7c000();
              if (cVar7 != '\0') {
                if (iVar25 != -8) goto LAB_016de529;
                break;
              }
              lVar32 = *plVar30;
            }
            iVar9 = *(int *)(lVar32 + 0x18);
            iVar28 = iVar9 + 7;
            if (-1 < iVar9) {
              iVar28 = iVar9;
            }
            if (iVar28 >> 3 <= lVar29) break;
            uVar17 = uVar16 >> 0x20;
            iVar25 = iVar25 + 8;
            lVar29 = lVar29 + 1;
            iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + -4 + lVar29 * 8);
          } while( true );
        }
        if ((uVar26 == 1) || (uVar26 == *(int *)(pcVar15 + 0xc) - 2)) {
          pvVar12 = _pthread_getspecific((void*)lVar32);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          pdVar1 = (double *)(*(int64_t *)((int64_t)local_70 + 0x10) + uVar26 * 8);
          FUN_01907cc0(pdVar1[1] * _UNK_02411868 +
                       *(double *)(*(int64_t *)((int64_t)local_70 + 0x10) + -8 + uVar26 * 8) *
                       g_023b3498 + *pdVar1 * g_02411860);
        }
        else {
          pvVar12 = _pthread_getspecific((void*)lVar32);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar32 = *(int64_t *)((int64_t)local_70 + 0x10);
          pdVar1 = (double *)(lVar32 + 8 + uVar26 * 8);
          FUN_01907cc0(pdVar1[1] * _UNK_02411858 +
                       *(double *)(lVar32 + uVar26 * 8) * g_024119b8 +
                       *(double *)(lVar32 + -8 + uVar26 * 8) * g_024119b0 +
                       *(double *)(lVar32 + -0x10 + uVar26 * 8) * g_024119a8 +
                       *pdVar1 * g_02411850);
        }
LAB_016de529:
        uVar26 = uVar26 + 1;
        pcVar24 = (int64_t)*(int *)(pcVar15 + 0xc);
      } while ((int64_t)uVar26 < (int64_t)((int64_t)*(int *)(pcVar15 + 0xc) + -1));
    }
  }
  local_c0 = pcVar24;
  plVar30 = (int64_t *)(this_ptr + 0x70);
  pVar11 = (int)(((uint)((uint64_t)local_c0 >> 0x1f) & 1) + (int)local_c0) >> 1;
  local_11c = 8;
  if ((int)pVar11 < 8) {
    local_11c = pVar11;
  }
  pvVar12 = _pthread_getspecific(local_11c);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar26 = FUN_019079b0();
  lVar32 = *plVar30;
  if (7 < *(int *)(lVar32 + 0x18)) {
    uVar16 = uVar26 >> 0x20;
    lVar29 = 1;
    iVar25 = 0;
    iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + 4);
    while( true ) {
      if ((iVar9 != 0) && ((int)uVar16 != 0)) {
        cVar7 = FUN_00e7c000();
        if (cVar7 != '\0') {
          bVar33 = iVar25 == -8;
          goto LAB_016de96c;
        }
        lVar32 = *plVar30;
      }
      iVar9 = *(int *)(lVar32 + 0x18);
      iVar28 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar28 = iVar9;
      }
      if (iVar28 >> 3 <= lVar29) break;
      uVar16 = uVar26 >> 0x20;
      iVar25 = iVar25 + 8;
      lVar29 = lVar29 + 1;
      iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + -4 + lVar29 * 8);
    }
  }
  bVar33 = true;
LAB_016de96c:
  pvVar12 = _pthread_getspecific((void*)*(void*)(pcVar15 + 0x10));
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar18 = (void*)FUN_019079b0();
  lVar32 = *plVar30;
  if (7 < *(int *)(lVar32 + 0x18)) {
    uVar26 = (uint64_t)puVar18 >> 0x20;
    lVar29 = 1;
    iVar25 = 0;
    iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + 4);
    while( true ) {
      if ((iVar9 != 0) && ((int)uVar26 != 0)) {
        cVar7 = FUN_00e7c000();
        if (cVar7 != '\0') {
          bVar34 = iVar25 == -8;
          goto LAB_016dea2b;
        }
        lVar32 = *plVar30;
      }
      iVar9 = *(int *)(lVar32 + 0x18);
      iVar28 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar28 = iVar9;
      }
      if (iVar28 >> 3 <= lVar29) break;
      uVar26 = (uint64_t)puVar18 >> 0x20;
      iVar25 = iVar25 + 8;
      lVar29 = lVar29 + 1;
      iVar9 = *(int *)(*(int64_t *)(lVar32 + 0x10) + -4 + lVar29 * 8);
    }
  }
  bVar34 = true;
LAB_016dea2b:
  uVar26 = 0;
  if (local_89 == '\0') {
    uVar26 = (uint64_t)bVar34;
  }
  local_b4 = (uint32_t)uVar26;
  FUN_016d8ab0();
  if ((local_38[0] == '\0') && (puVar18 != (void*)0x0)) {
    FUN_00d50b00();
  }
  pVar11 = (void*)uVar26;
  local_a8 = puVar18;
  if ((*(int *)(puVar18 + 0x10) == 0) || (*(int *)(puVar18 + 0x18) == 0)) {
LAB_016deaa0:
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar19 = (void*)FUN_019079b0();
    if (*(int *)(puVar18 + 0x10) == 0) {
      local_60 = (uint64_t *)FUN_00e7bdb0();
    }
    else {
      pvVar12 = _pthread_getspecific(pVar11);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (*(uint64_t *)(puVar18 + 0xc) >> 0x20 == 0) {
        FUN_00e7bdb0();
      }
      local_60 = (uint64_t *)FUN_0165d690();
    }
    local_40._4_4_ = (int)((uint64_t)puVar19 >> 0x20);
    if (((local_40._4_4_ != 0) && ((uint64_t)local_60 >> 0x20 != 0)) &&
       (cVar7 = FUN_00e7c020(), cVar7 == '\0')) {
      pvVar12 = _pthread_getspecific(pVar11);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_68 = (uint64_t *)FUN_019079b0();
      local_1a0 = local_a8;
      local_198 = 0;
      local_a0 = (uint64_t *)FUN_016cabc0(extraout_XMM0_Qa_01,0);
      if (local_68._4_4_ == 0) {
        bVar8 = 0;
      }
      else {
        bVar8 = 0;
        if ((uint64_t)local_a0 >> 0x20 != 0) {
          bVar8 = FUN_00e7c020();
          bVar8 = bVar8 ^ 1;
        }
      }
      if (bVar8 != 0) {
        bVar33 = false;
      }
    }
    FUN_00d23340();
    ppuVar22 = &local_c8;
    if (local_38[0] != '\0') {
      ppuVar22 = (uint64_t **)local_38;
    }
    local_c8 = (uint64_t *)CONCAT71(local_c8._1_7_,local_38[0]);
    *(void*)ppuVar22 = 0;
    if ((local_38[0] != '\0') && (puVar19 != (void*)0x0)) {
      FUN_00d50b20();
    }
    pVar11 = (void*)ppuVar22;
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (uint64_t *)FUN_019079b0();
    if (*(int *)(puVar18 + 0x10) == 0) {
      local_68 = (uint64_t *)FUN_00e7bdb0();
    }
    else {
      pvVar12 = _pthread_getspecific(pVar11);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      if (*(uint64_t *)(puVar18 + 0xc) >> 0x20 == 0) {
        FUN_00e7bdb0();
      }
      local_68 = (uint64_t *)FUN_0165d690();
    }
    if (((local_60._4_4_ == 0) || ((uint64_t)local_68 >> 0x20 == 0)) ||
       (cVar7 = FUN_00e7c020(), cVar7 != '\0')) {
      bVar8 = 0;
    }
    else {
      FUN_00d23340();
      ppuVar22 = &local_78;
      ppuVar27 = (uint64_t **)local_38;
      if (local_38[0] == '\0') {
        ppuVar27 = ppuVar22;
      }
      local_78._0_4_ = CONCAT31(local_78._1_3_,local_38[0]);
      *(void*)ppuVar27 = 0;
      if ((local_38[0] != '\0') && (puVar19 != (void*)0x0)) {
        FUN_00d50b20();
      }
      pvVar12 = _pthread_getspecific((void*)ppuVar22);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_a0 = (uint64_t *)FUN_019079b0();
      local_190 = local_a8;
      local_188 = 0;
      local_128 = FUN_016cabc0(extraout_XMM0_Qa_02,0);
      bVar8 = 0;
      if ((local_a0._4_4_ != 0) && (bVar8 = 0, local_128 >> 0x20 != 0)) {
        bVar8 = FUN_00e7c020();
        bVar8 = bVar8 ^ 1;
      }
      if (((char)local_78 != '\0') && (puVar19 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_c8 != '\0') && (puVar19 != (void*)0x0)) {
      FUN_00d50b20();
    }
    uVar26 = 0;
    if (bVar8 == 0) {
      uVar26 = (uint64_t)(byte)local_b4;
    }
    local_b4 = (uint32_t)uVar26;
    local_40 = puVar19;
  }
  else {
    cVar7 = FUN_00e7c000();
    pVar11 = (void*)uVar26;
    local_40 = puVar18;
    if (cVar7 == '\0') goto LAB_016deaa0;
  }
  pVar11 = (void*)uVar26;
  if (bVar33) {
    if (1 < (int)local_c0) {
      local_f0 = (double)(int)local_11c;
      uVar16 = 1;
      if (1 < (int)local_11c) {
        uVar16 = (uint64_t)local_11c;
      }
      uVar17 = 0;
      do {
        lVar32 = *(int64_t *)(*(int64_t *)(pcVar15 + 0x10) + uVar17 * 8);
        if (lVar32 != 0) {
          FUN_00d50b00();
        }
        pvVar12 = _pthread_getspecific((void*)uVar26);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_98 = FUN_01907950();
        pvVar12 = _pthread_getspecific((void*)uVar26);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_019079b0();
        pvVar12 = _pthread_getspecific((void*)uVar26);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d0 = (int64_t *)FUN_018fcb10();
        pvVar12 = _pthread_getspecific((void*)uVar26);
        if (pvVar12 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar36 = (double)(int)uVar17 / local_f0;
        FUN_01907cc0(dVar36 * (double)local_98 + (g_0238fee8 - dVar36) * (double)local_d0);
        if (lVar32 != 0) {
          FUN_00d50b20();
        }
        pVar11 = (void*)uVar26;
        uVar17 = uVar17 + 1;
      } while (uVar16 != uVar17);
    }
  }
  else {
    lVar32 = **(int64_t **)(pcVar15 + 0x10);
    if (lVar32 != 0) {
      FUN_00d50b00();
    }
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fcb10();
    FUN_01907cc0();
    if (lVar32 != 0) {
      FUN_00d50b20();
    }
  }
  if ((byte)local_b4 == '\0') {
    if (local_e0._0_4_ != 0x12) {
      lVar32 = *(int64_t *)(pcVar15 + 0x10);
      lVar29 = *(int64_t *)(lVar32 + -8 + (int64_t)*(int *)(pcVar15 + 0xc) * 8);
      if (lVar29 != 0) {
        FUN_00d50b00();
      }
      pVar11 = (void*)lVar32;
      pvVar12 = _pthread_getspecific(pVar11);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar12 = _pthread_getspecific(pVar11);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar12 = _pthread_getspecific(pVar11);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_018fcb10();
      FUN_01907cc0();
      if (lVar29 != 0) {
        FUN_00d50b20();
      }
    }
  }
  else if (1 < (int)local_c0) {
    local_d0 = (int64_t *)(double)(int)local_11c;
    uVar26 = 1;
    if (1 < (int)local_11c) {
      uVar26 = (uint64_t)local_11c;
    }
    local_f0 = (double)CONCAT44(local_f0._4_4_,(int)uVar26);
    lVar32 = (int64_t)*(int *)(pcVar15 + 0xc);
    iVar9 = 0;
    do {
      lVar32 = lVar32 + -1;
      lVar29 = *(int64_t *)(*(int64_t *)(pcVar15 + 0x10) + lVar32 * 8);
      if (lVar29 != 0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific((void*)uVar26);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_98 = FUN_01907950();
      pvVar12 = _pthread_getspecific((void*)uVar26);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      pvVar12 = _pthread_getspecific((void*)uVar26);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_e0 = (double)FUN_018fcb10();
      pvVar12 = _pthread_getspecific((void*)uVar26);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01907cc0(((double)iVar9 / (double)local_d0) * (double)local_98 +
                   (g_0238fee8 - (double)iVar9 / (double)local_d0) * local_e0);
      if (lVar29 != 0) {
        FUN_00d50b20();
      }
      pVar11 = (void*)uVar26;
      iVar9 = iVar9 + 1;
    } while (local_f0._0_4_ != iVar9);
  }
  if (local_a8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_70 != 0x0) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(pVar11);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar12 = _pthread_getspecific(pVar11);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar35 = FUN_019079b0();
  pVar11 = 0;
  FUN_018fef60(0,uVar35);
  if ((((local_38[0] == '\0') && (local_40 != (void*)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific(pVar11);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d23340();
  ppuVar22 = (uint64_t **)&local_68;
  if (local_38[0] != '\0') {
    ppuVar22 = (uint64_t **)local_38;
  }
  local_68 = (uint64_t *)CONCAT71(local_68._1_7_,local_38[0]);
  *(void*)ppuVar22 = 0;
  if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar12 = _pthread_getspecific((void*)ppuVar22);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar35 = FUN_019079b0();
  pVar11 = 0;
  puVar14 = (uint64_t *)FUN_018ff980(0,uVar35);
  puVar4 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (uint64_t *)0x0) && (puVar14 = (uint64_t *)FUN_00d50b00(), local_58 != '\0')
        ) && (local_60 != (uint64_t *)0x0)) {
      puVar14 = (uint64_t *)FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if (((char)local_68 != '\0') && (local_40 != (void*)0x0)) {
    puVar14 = (uint64_t *)FUN_00d50b20();
  }
  if (local_40 != (void*)0x0) {
    pvVar12 = _pthread_getspecific(pVar11);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (uint64_t *)FUN_019079b0();
    FUN_00d23340();
    ppuVar22 = (uint64_t **)&local_a0;
    ppuVar27 = (uint64_t **)local_38;
    if (local_38[0] == '\0') {
      ppuVar27 = ppuVar22;
    }
    local_a0 = (uint64_t *)CONCAT71(local_a0._1_7_,local_38[0]);
    *(void*)ppuVar27 = 0;
    if ((local_38[0] != '\0') && (local_40 != (void*)0x0)) {
      FUN_00d50b20();
    }
    pvVar12 = _pthread_getspecific((void*)ppuVar22);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_68 = (uint64_t *)FUN_019079b0();
    cVar7 = '\0';
    puVar14 = local_68;
    if ((local_60._4_4_ != 0) && (puVar14 = (uint64_t *)0x0, (uint64_t)local_68 >> 0x20 != 0)) {
      puVar14 = (uint64_t *)FUN_00e7c020();
      cVar7 = (char)puVar14;
    }
    if (((char)local_a0 != '\0') && (local_40 != (void*)0x0)) {
      puVar14 = (uint64_t *)FUN_00d50b20();
    }
    if (cVar7 != '\0') {
      local_70 = CONCAT71((int7)((uint64_t)puVar14 >> 8),1);
      local_40 = (void*)0x0;
      FUN_00d50b20();
      bVar33 = true;
      local_70 = 0x0;
      goto LAB_016df6a9;
    }
  }
  local_70 = CONCAT71((int7)((uint64_t)puVar14 >> 8),1);
  bVar33 = false;
LAB_016df6a9:
  local_178 = 0;
  local_170 = puVar4;
  local_168 = 0;
  local_180 = local_40;
  pVar11 = FUN_00e7bdb0();
  local_158 = 0;
  local_160 = pcVar15;
  uVar35 = FUN_00e7bdb0();
  FUN_016e9760(0,&local_170,&local_160,uVar35);
  pvVar12 = _pthread_getspecific(pVar11);
  if (pvVar12 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9310();
  if (puVar4 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if (!bVar33 && local_40 != (void*)0x0) {
    FUN_00d50b20();
  }
LAB_016df77d:
  FUN_00d50b20();
  if (local_108 != 0) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if (local_d8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_f8 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (uint64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

