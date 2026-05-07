// Function: FUN_0191ec80
// Address: 0191ec80
// Size: 7368 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t * FUN_0191ec80(float param_1,int64_t *param_2,int64_t *param_3)

{
  uint uVar1;
  int iVar2;
  void* pVar3;
  void**ppuVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  code *pcVar8;
  code *pcVar9;
  void***pppuVar10;
  void***pppuVar11;
  void***pppuVar12;
  void***pppuVar13;
  void***pppuVar14;
  void***pppuVar15;
  int64_t lVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  void *pvVar20;
  int64_t lVar21;
  char *pcVar22;
  void*puVar23;
  void*puVar24;
  void*puVar25;
  void*puVar26;
  void*puVar27;
  void*puVar28;
  void***pppuVar29;
  int64_t lVar30;
  void*puVar31;
  int64_t *plVar32;
  uint64_t uVar33;
  void* pVar34;
  int64_t *in_RCX;
  void****ppppuVar35;
  void****ppppuVar36;
  int iVar37;
  int64_t lVar38;
  void****ppppuVar39;
  uint64_t *this_ptr;
  int iVar40;
  void****ppppuVar41;
  uint32_t uVar42;
  float fVar43;
  double dVar44;
  void*local_170;
  char local_168;
  uint64_t local_160;
  int64_t local_158;
  void***local_150;
  int64_t local_148;
  char local_140;
  double local_110;
  float local_108;
  double local_100;
  void**local_f0;
  uint32_t local_b0;
  uint32_t uStack_ac;
  char local_a8;
  int64_t local_70;
  void**local_68;
  char local_60;
  char local_48 [8];
  void***local_40;
  char local_38 [8];
  
  plVar32 = in_RCX;
  FUN_013133d0(in_RCX,0);
  pppuVar10 = local_40;
  pVar34 = (void*)plVar32;
  if ((((local_38[0] == '\0') && ((void****)local_40 != (void****)0x0)) &&
      (FUN_00d50b00(), local_38[0] != '\0')) && ((void****)local_40 != (void****)0x0))
  {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar34);
  if ((pvVar20 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
    pVar34 = (void*)pppuVar10;
  }
  FUN_01313ad0();
  pppuVar11 = local_40;
  if (((local_38[0] == '\0') && ((void****)local_40 != (void****)0x0)) &&
     ((FUN_00d50b00(), local_38[0] != '\0' && ((void****)local_40 != (void****)0x0))))
  {
    FUN_00d50b20();
  }
  local_150 = pppuVar11;
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  FUN_00d23310();
  pppuVar11 = local_40;
  local_48[0] = local_38[0];
  pcVar22 = local_38;
  if (local_38[0] == '\0') {
    pcVar22 = local_48;
  }
  *pcVar22 = '\0';
  if ((local_38[0] != '\0') && ((void****)pppuVar11 != (void****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] == '\0') && ((void****)pppuVar11 != (void****)0x0)) {
    FUN_00d50b00();
  }
  if ((local_60 != '\0') && ((void***)local_68 != (void***)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (CONCAT44(uStack_ac,local_b0) != 0)) {
    FUN_00d50b20();
  }
  puVar23 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar34 = 0x2572358;
  *puVar23 = &g_02572358;
  pcVar9 = g_02572370;
  (*g_02572370)();
  puVar24 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar24 = &g_025683c0;
  pcVar8 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar25 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar25 = &g_025683c0;
  (*pcVar8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar26 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar26 = &g_025683c0;
  (*pcVar8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar27 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar27 = &g_025683c0;
  (*pcVar8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar21 = *param_3;
  if (lVar21 == 0) {
    puVar28 = (void*)0x0;
  }
  else {
    puVar28 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar28 = &g_025683c0;
    (*pcVar8)();
    FUN_00c92170();
    FUN_00c92160();
  }
  pppuVar29 = (void***)FUN_00e7bcc0();
  pvVar20 = _pthread_getspecific(pVar34);
  pVar3 = (void*)pppuVar11;
  if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
    pVar34 = pVar3;
  }
  FUN_012e7d10();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012a4680(g_02390124);
  if ((local_38[0] != '\0') && ((void****)local_40 != (void****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && ((void***)local_68 != (void***)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar34);
  if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
    pVar34 = pVar3;
  }
  FUN_012e7d10();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012a4680(g_02390124);
  if ((local_38[0] != '\0') && ((void****)local_40 != (void****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && ((void***)local_68 != (void***)0x0)) {
    FUN_00d50b20();
  }
  puVar31 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)((int64_t)puVar31 + 0x7c) = 0;
  *(void*)((int64_t)puVar31 + 0x84) = 0;
  *(void*)((int64_t)puVar31 + 0x6c) = 0;
  *(void*)((int64_t)puVar31 + 0x74) = 0;
  *(void*)((int64_t)puVar31 + 0x5c) = 0;
  *(void*)((int64_t)puVar31 + 100) = 0;
  *(void*)((int64_t)puVar31 + 0x4c) = 0;
  *(void*)((int64_t)puVar31 + 0x54) = 0;
  *(void*)((int64_t)puVar31 + 0x3c) = 0;
  *(void*)((int64_t)puVar31 + 0x44) = 0;
  *(void*)((int64_t)puVar31 + 0x2c) = 0;
  *(void*)((int64_t)puVar31 + 0x34) = 0;
  *(void*)((int64_t)puVar31 + 0x1c) = 0;
  *(void*)((int64_t)puVar31 + 0x24) = 0;
  *(void*)((int64_t)puVar31 + 0xc) = 0;
  *(void*)((int64_t)puVar31 + 0x14) = 0;
  *(void*)((int64_t)puVar31 + 0x8c) = 0;
  pVar34 = 0x2545fe8;
  *puVar31 = &g_02545fe8;
  puVar31[0x12] = 0;
  (*g_02546000)();
  plVar32 = (int64_t *)FUN_00e8fc40();
  FUN_010f46f0();
  (**(code **)(*plVar32 + 0x18))();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012371d0();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar20 = _pthread_getspecific(pVar34);
  if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
    pVar34 = pVar3;
  }
  FUN_012e7d10();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0ad0();
  FUN_011f0a90();
  if ((local_38[0] != '\0') && ((void****)local_40 != (void****)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar20 = _pthread_getspecific(pVar34);
  if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
    pVar34 = pVar3;
  }
  FUN_012e7d10();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f0b20();
  FUN_011f0ae0();
  if ((local_38[0] != '\0') && ((void****)local_40 != (void****)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar34);
  if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
    pVar34 = pVar3;
  }
  FUN_012e7d10();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2610();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012a4680(g_02390120);
  if ((local_38[0] != '\0') && ((void****)local_40 != (void****)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && ((void***)local_68 != (void***)0x0)) {
    FUN_00d50b20();
  }
  pvVar20 = _pthread_getspecific(pVar34);
  if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
    pVar34 = pVar3;
  }
  FUN_012e7d10();
  pvVar20 = _pthread_getspecific(pVar34);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011f2270();
  if ((local_38[0] != '\0') && ((void****)local_40 != (void****)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  uVar42 = FUN_00d50b20();
  FUN_01921620(uVar42,0);
  pppuVar12 = local_40;
  if (local_38[0] == '\0') {
    if ((void****)local_40 != (void****)0x0) {
      FUN_00d50b00();
      goto LAB_0191f6d3;
    }
  }
  else if ((void****)local_40 != (void****)0x0) {
LAB_0191f6d3:
    pvVar20 = _pthread_getspecific(pVar34);
    if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
      pVar34 = (void*)pppuVar12;
    }
    FUN_01313ad0();
    pppuVar12 = local_40;
    if ((((local_38[0] == '\0') && ((void****)local_40 != (void****)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) &&
       ((void****)local_40 != (void****)0x0)) {
      FUN_00d50b20();
    }
    pvVar20 = _pthread_getspecific(pVar34);
    if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
      pVar34 = (void*)pppuVar12;
    }
    FUN_012cb110();
    pvVar20 = _pthread_getspecific(pVar34);
    if (pvVar20 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    FUN_00d23310();
    pppuVar13 = local_40;
    pcVar22 = local_38;
    if (local_38[0] == '\0') {
      pcVar22 = local_48;
    }
    local_48[0] = local_38[0];
    *pcVar22 = '\0';
    if ((local_38[0] != '\0') && ((void****)pppuVar13 != (void****)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] == '\0') && ((void****)pppuVar13 != (void****)0x0)) {
      FUN_00d50b00();
    }
    if ((local_60 != '\0') && ((void***)local_68 != (void***)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (CONCAT44(uStack_ac,local_b0) != 0)) {
      FUN_00d50b20();
    }
    iVar18 = _rand();
    dVar44 = (double)iVar18 * g_02390108 * g_023d5990 + g_02391030;
    lVar30 = *param_2;
    uVar1 = *(uint *)(lVar30 + 0x18);
    ppppuVar35 = (void****)(uint64_t)uVar1;
    if (7 < (int)uVar1) {
      dVar44 = dVar44 / (double)(int)((uVar1 >> 2) - 1);
    }
    if (3 < (int)uVar1) {
      dVar6 = g_0240de78 * dVar44;
      dVar44 = dVar44 * g_024119e0;
      local_100 = 0.0;
      lVar38 = 0;
      do {
        iVar18 = *(int *)(*(int64_t *)(lVar30 + 0x10) + lVar38 * 4);
        iVar37 = 0x7fffffff;
        ppppuVar41 = (void****)0x0;
        bVar7 = false;
        local_158 = lVar38;
        do {
          ppppuVar36 = &local_40;
          local_40 = pppuVar29;
          FUN_00e7c2a0();
          pppuVar14 = local_40;
          local_68 = local_40;
          dVar5 = (double)FUN_00e7c860();
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
            ppppuVar35 = (void****)pppuVar13;
          }
          FUN_012ea6f0(SUB84(dVar5 * g_023942d0 + g_0241b680,0),g_0238fee8);
          pppuVar15 = local_40;
          if (local_38[0] == '\0') {
            if (local_40 == (void***)0x0) break;
            FUN_00d50b00();
            if ((local_38[0] != '\0') && (local_40 != (void***)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == (void***)0x0) break;
          iVar2 = *(int *)((int64_t)pppuVar15 + 0xc);
          if (iVar2 != 0) {
            pvVar20 = _pthread_getspecific((void*)ppppuVar35);
            if (pvVar20 != (void *)0x0) {
              FUN_00e8b990();
            }
            fVar43 = (float)FUN_0125a2c0();
            iVar19 = FUN_00e7d780(fVar43 * g_02394254);
            iVar19 = iVar18 - iVar19;
            iVar40 = -iVar19;
            if (0 < iVar19) {
              iVar40 = iVar19;
            }
            ppppuVar35 = ppppuVar36;
            if (iVar40 < iVar37) {
              ppppuVar39 = (void****)*pppuVar15[2];
              if (ppppuVar41 == ppppuVar39) {
                ppppuVar39 = ppppuVar41;
                bVar17 = bVar7;
                if ((!bVar7) && (ppppuVar41 != (void****)0x0)) {
                  FUN_00d50b00();
                  bVar17 = true;
                }
              }
              else {
                if (ppppuVar39 != (void****)0x0) {
                  FUN_00d50b00();
                }
                bVar17 = true;
                if ((bVar7) && (ppppuVar41 != (void****)0x0)) {
                  FUN_00d50b20();
                }
              }
              bVar7 = bVar17;
              local_f0 = pppuVar14;
              pvVar20 = _pthread_getspecific((void*)ppppuVar36);
              if (pvVar20 != (void *)0x0) {
                FUN_00e8b990();
              }
              fVar43 = (float)FUN_0125a2c0();
              local_108 = fVar43 + (float)iVar19 * g_023908e0;
              uVar42 = _exp2f((float)iVar19 * g_023908e0 * g_023941f4);
              local_160 = CONCAT44(local_160._4_4_,uVar42);
              ppppuVar35 = ppppuVar36;
              ppppuVar41 = ppppuVar39;
              iVar37 = iVar40;
            }
          }
          FUN_00d50b20();
        } while (iVar2 != 0);
        local_38[0] = '\0';
        local_40 = ppppuVar41;
        uVar42 = FUN_00d21140();
        if ((local_38[0] != '\0') && ((void****)local_40 != (void****)0x0)) {
          uVar42 = FUN_00d50b20();
        }
        iVar18 = *(int *)(puVar24 + 3);
        FUN_00c8e340(uVar42,1);
        *(void***)(puVar24[2] + (int64_t)iVar18) = local_f0;
        iVar18 = *(int *)(puVar25 + 3);
        FUN_00c8e340(local_f0,1);
        *(float *)(puVar25[2] + (int64_t)iVar18) = local_108;
        iVar18 = *(int *)(puVar26 + 3);
        FUN_00c8e340(local_108,1);
        *(void*)(puVar26[2] + (int64_t)iVar18) = (uint32_t)local_160;
        iVar18 = *(int *)(puVar27 + 3);
        FUN_00c8e340((uint32_t)local_160,1);
        *(double *)(puVar27[2] + (int64_t)iVar18) = local_100;
        if (puVar28 != (void*)0x0) {
          lVar30 = *(int64_t *)(*param_3 + 0x10);
          iVar18 = *(int *)(puVar28 + 3);
          FUN_00c8e340(SUB84(local_100,0),1);
          *(void*)(puVar28[2] + (int64_t)iVar18) = *(void*)(lVar30 + local_158 * 4);
        }
        iVar18 = _rand();
        local_100 = local_100 + (double)iVar18 * dVar6 * g_023d5990 + dVar44;
        if (local_158 == 0) {
          iVar18 = _rand();
          local_100 = local_100 + (double)iVar18 * g_023944e0 * g_023d5990 + g_023944e0;
        }
        lVar38 = local_158;
        if ((bVar7) && (ppppuVar41 != (void****)0x0)) {
          FUN_00d50b20();
        }
        lVar38 = lVar38 + 1;
        lVar30 = *param_2;
        iVar18 = *(int *)(lVar30 + 0x18);
        iVar37 = iVar18 + 3;
        if (-1 < iVar18) {
          iVar37 = iVar18;
        }
        ppppuVar35 = (void****)(int64_t)(iVar37 >> 2);
      } while (lVar38 < (int64_t)ppppuVar35);
    }
    FUN_01ca6a90();
    if (local_60 == '\0') {
      if ((void***)local_68 != (void***)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    FUN_01c92fe0();
    pppuVar29 = local_40;
    if (local_38[0] == '\0') {
      if ((((void****)local_40 != (void****)0x0) &&
          (FUN_00d50b00(), local_38[0] != '\0')) &&
         ((void****)local_40 != (void****)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    if ((void***)local_68 != (void***)0x0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && ((void***)local_68 != (void***)0x0)) {
      FUN_00d50b20();
    }
    FUN_01c93060();
    FUN_01c93080();
    FUN_01c93090();
    FUN_01c930a0();
    *(void*)(pppuVar29 + 5) = 1;
    FUN_000ba510();
    pppuVar14 = local_40;
    if (local_38[0] == '\0') {
      if ((((void****)local_40 != (void****)0x0) &&
          (FUN_00d50b00(), local_38[0] != '\0')) &&
         ((void****)local_40 != (void****)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
    }
    puVar31 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar31 = &g_02572358;
    (*pcVar9)();
    uVar33 = FUN_00e7bcc0();
    local_160 = FUN_00e7bcc0();
    if (*(int *)((int64_t)puVar23 + 0xc) < 1) {
LAB_019205a8:
      *this_ptr = (uint64_t)pppuVar10;
      *(void*)(this_ptr + 1) = 1;
LAB_019208bc:
      FUN_00d50b20();
    }
    else {
      param_1 = param_1 * g_02394298;
      local_110 = g_023b2568;
      lVar30 = 0;
      bVar7 = false;
      local_70 = 0;
      do {
        FUN_00d216c0();
        lVar38 = *(int64_t *)(puVar23[2] + lVar30 * 8);
        local_140 = 0;
        if (lVar38 != 0) {
          FUN_00d50b00();
        }
        local_140 = '\x01';
        local_148 = lVar38;
        FUN_0039e8b0();
        pppuVar15 = local_40;
        if (local_38[0] == '\0') {
          if ((void****)local_40 != (void****)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38[0] = '\0';
        }
        FUN_01c936e0(1,*(void*)(puVar24[2] + lVar30 * 8));
        if ((void****)pppuVar15 != (void****)0x0) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && ((void****)local_40 != (void****)0x0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != 0)) {
          FUN_00d50b20();
        }
        local_168 = '\0';
        ppppuVar35 = (void****)0x0;
        local_170 = puVar31;
        FUN_01ca1bc0(0,uVar33,local_160,&local_170);
        if ((local_168 != '\0') && (local_170 != (void*)0x0)) {
          FUN_00d50b20();
        }
        lVar38 = *(int64_t *)puVar31[2];
        if (lVar38 != 0) {
          FUN_00d50b00();
        }
        fVar43 = *(float *)(puVar25[2] + lVar30 * 4);
        if (*in_RCX != 0) {
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar42 = FUN_00e7d780(fVar43 * g_02394254);
          fVar43 = (float)FUN_0173fbe0(uVar42,0);
        }
        pvVar20 = _pthread_getspecific((void*)ppppuVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125a580(fVar43);
        pvVar20 = _pthread_getspecific((void*)ppppuVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific((void*)ppppuVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar44 = (double)FUN_0125a280();
        FUN_012642b0(SUB84(dVar44 + *(double *)(puVar27[2] + lVar30 * 8),0));
        if (puVar28 != (void*)0x0) {
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01265b00(*(void*)(puVar28[2] + lVar30 * 4));
        }
        pvVar20 = _pthread_getspecific((void*)ppppuVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar44 = (double)FUN_0125a280();
        lVar16 = local_70;
        bVar17 = bVar7;
        if (dVar44 < local_110) {
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_110 = (double)FUN_0125a280();
          if (local_70 == lVar38) {
            if ((!bVar7) && (local_70 != 0)) {
              FUN_00d50b00();
              bVar17 = true;
            }
          }
          else {
            if (lVar38 != 0) {
              FUN_00d50b00();
            }
            bVar17 = true;
            lVar16 = lVar38;
            if ((bVar7) && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        bVar7 = bVar17;
        local_70 = lVar16;
        pvVar20 = _pthread_getspecific((void*)ppppuVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar20 = _pthread_getspecific((void*)ppppuVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar44 = (double)FUN_01264170();
        fVar43 = *(float *)(puVar26[2] + lVar30 * 4);
        pvVar20 = _pthread_getspecific((void*)ppppuVar35);
        if (pvVar20 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar6 = (double)FUN_01264170();
        FUN_012756a0(SUB84(dVar44 / (double)fVar43 - dVar6,0));
        if (lVar38 != 0) {
          FUN_00d50b20();
        }
        lVar30 = lVar30 + 1;
      } while (lVar30 < *(int *)((int64_t)puVar23 + 0xc));
      if (local_70 == 0) goto LAB_019205a8;
      pvVar20 = _pthread_getspecific((void*)ppppuVar35);
      if ((pvVar20 != (void *)0x0) && (lVar30 = FUN_00e8b990(), lVar30 != 0)) {
        ppppuVar35 = (void****)pppuVar11;
      }
      FUN_012e5ae0();
      pppuVar15 = local_40;
      if ((((local_38[0] == '\0') && ((void****)local_40 != (void****)0x0)) &&
          (FUN_00d50b00(), local_38[0] != '\0')) &&
         ((void****)local_40 != (void****)0x0)) {
        FUN_00d50b20();
      }
      pvVar20 = _pthread_getspecific((void*)ppppuVar35);
      if (pvVar20 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar44 = (double)FUN_01259650();
      if (0 < *(int *)((int64_t)pppuVar15 + 0xc)) {
        lVar30 = 0;
        do {
          ppuVar4 = (void**)pppuVar15[2][lVar30];
          if (ppuVar4 != (void**)0x0) {
            FUN_00d50b00();
          }
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_0125a280();
          FUN_012642b0(SUB84(dVar6 - local_110,0));
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar6 = (double)FUN_01259650();
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar20 = _pthread_getspecific((void*)ppppuVar35);
          if (pvVar20 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar5 = (double)FUN_01264310();
          FUN_012642b0(SUB84(((dVar6 - dVar44) * (double)param_1 + dVar44) - dVar5,0));
          if (ppuVar4 != (void**)0x0) {
            FUN_00d50b20();
          }
          lVar30 = lVar30 + 1;
        } while (lVar30 < *(int *)((int64_t)pppuVar15 + 0xc));
      }
      FUN_00d50b20();
      *this_ptr = (uint64_t)pppuVar10;
      *(void*)(this_ptr + 1) = 1;
      if (bVar7) {
        FUN_00d50b20();
      }
      if (puVar31 != (void*)0x0) goto LAB_019208bc;
    }
    if ((void****)pppuVar14 != (void****)0x0) {
      FUN_00d50b20();
    }
    if ((void****)pppuVar29 != (void****)0x0) {
      FUN_00d50b20();
    }
    if ((void****)pppuVar13 != (void****)0x0) {
      FUN_00d50b20();
    }
    if ((void****)pppuVar12 != (void****)0x0) {
      FUN_00d50b20();
    }
    bVar7 = true;
    FUN_00d50b20();
    goto LAB_01920910;
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  bVar7 = false;
LAB_01920910:
  if ((lVar21 != 0) && (puVar28 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar27 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar26 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar25 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar24 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar23 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((void****)pppuVar11 != (void****)0x0) {
    FUN_00d50b20();
  }
  if ((void****)local_150 != (void****)0x0) {
    FUN_00d50b20();
  }
  if (!bVar7 && (void****)pppuVar10 != (void****)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

