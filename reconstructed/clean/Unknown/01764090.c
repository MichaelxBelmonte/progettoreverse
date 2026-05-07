// Function: FUN_01764090
// Address: 01764090
// Size: 2901 bytes
// Class: Unknown

void* FUN_01764090(float param_1,int64_t *param_2)

{
  void* pVar1;
  int64_t *plVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  void*puVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *in_RCX;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  void*this_ptr;
  void*puVar13;
  int iVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  uint64_t uVar20;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  float fVar27;
  int64_t local_88;
  char local_80;
  int64_t *local_68;
  char local_60;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  
  plVar10 = in_RCX;
  FUN_0173b120();
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    plVar2 = (int64_t *)local_68[0xc];
  }
  else {
    plVar2 = *(int64_t **)(local_68[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4] + 0x60);
    plVar10 = local_68;
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar10 = plVar2;
  }
  FUN_01770f00();
  if ((local_60 == '\0') && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar10 = plVar2;
  }
  FUN_017708f0();
  iVar4 = FUN_00e7d780();
  FUN_00d23740();
  uVar17 = *(uint *)((int64_t)local_68 + 0xc);
  if ((int)uVar17 < 1) {
    plVar16 = (int64_t *)0x0;
  }
  else {
    lVar6 = *(int64_t *)(*param_2 + 0x10);
    uVar11 = (uint64_t)(uVar17 & 3);
    if ((uint64_t)uVar17 - 1 < 3) {
      fVar27 = 0.0;
      uVar12 = 0;
      plVar16 = (int64_t *)0x0;
    }
    else {
      fVar27 = 0.0;
      uVar12 = 0;
      plVar16 = (int64_t *)0x0;
      do {
        fVar19 = *(float *)(lVar6 + uVar12 * 4);
        if (fVar27 < fVar19) {
          plVar16 = (int64_t *)(uVar12 & 0xffffffff);
        }
        fVar18 = *(float *)(lVar6 + 4 + uVar12 * 4);
        if (fVar19 <= fVar27) {
          fVar19 = fVar27;
        }
        iVar14 = (int)uVar12;
        plVar15 = (int64_t *)(uint64_t)(iVar14 + 1);
        if (fVar18 <= fVar19) {
          fVar18 = fVar19;
          plVar15 = plVar16;
        }
        fVar19 = *(float *)(lVar6 + 8 + uVar12 * 4);
        plVar10 = (int64_t *)(uint64_t)(iVar14 + 2);
        if (fVar19 <= fVar18) {
          fVar19 = fVar18;
          plVar10 = plVar15;
        }
        fVar27 = *(float *)(lVar6 + 0xc + uVar12 * 4);
        plVar16 = (int64_t *)(uint64_t)(iVar14 + 3);
        if (fVar27 <= fVar19) {
          fVar27 = fVar19;
          plVar16 = plVar10;
        }
        uVar12 = uVar12 + 4;
      } while ((uVar17 & 0xfffffffc) != uVar12);
    }
    for (; uVar11 != 0; uVar11 = uVar11 - 1) {
      fVar19 = *(float *)(lVar6 + uVar12 * 4);
      if (fVar27 < fVar19) {
        plVar16 = (int64_t *)(uVar12 & 0xffffffff);
        fVar27 = fVar19;
      }
      uVar12 = uVar12 + 1;
    }
  }
  pVar1 = (void*)local_68;
  if (!NAN(param_1)) {
    fVar27 = (float)iVar4;
    for (; param_1 < 0.0; param_1 = param_1 + fVar27) {
    }
    for (; fVar27 < param_1; param_1 = param_1 - fVar27) {
    }
    if (0 < (int)uVar17) {
      plVar15 = (int64_t *)0xffffffff;
      uVar11 = 0;
      fVar19 = g_02394240;
      do {
        pvVar5 = _pthread_getspecific(pVar1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        for (fVar18 = (float)FUN_01779ec0(); fVar18 < 0.0; fVar18 = fVar18 + fVar27) {
        }
        for (; fVar27 < fVar18; fVar18 = fVar18 - fVar27) {
        }
        fVar18 = (float)((uint)(param_1 - fVar18) & g_02390140);
        uVar17 = -(uint)((float)(iVar4 / 2) < fVar18);
        fVar18 = (float)(~uVar17 & (uint)fVar18 | (uint)(fVar27 - fVar18) & uVar17);
        if (fVar18 < fVar19) {
          plVar15 = (int64_t *)(uVar11 & 0xffffffff);
          fVar19 = fVar18;
        }
        uVar11 = uVar11 + 1;
      } while ((int64_t)uVar11 < (int64_t)*(int *)((int64_t)local_68 + 0xc));
      iVar14 = (int)plVar15;
      plVar10 = local_68;
      if (iVar14 != -1) goto joined_r0x0176452f;
    }
  }
  iVar14 = (int)plVar16;
  plVar15 = plVar16;
joined_r0x0176452f:
  if (iVar14 < 1) {
    pVar9 = (void*)plVar10;
    bVar3 = false;
    puVar13 = (void*)0x0;
  }
  else {
    puVar13 = (void*)0x0;
    bVar3 = false;
    do {
      puVar7 = *(void**)local_68[2];
      if (puVar13 == puVar7) {
        if ((!bVar3) && (puVar13 != (void*)0x0)) {
          bVar3 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (puVar7 != (void*)0x0) {
          FUN_00d50b00();
        }
        if ((bVar3) && (puVar13 != (void*)0x0)) {
          FUN_00d50b20();
          bVar3 = true;
          puVar13 = puVar7;
        }
        else {
          bVar3 = true;
          puVar13 = puVar7;
        }
      }
      FUN_00d23620();
      FUN_00d21140();
      pVar9 = (void*)plVar10;
      uVar17 = (int)plVar15 - 1;
      plVar15 = (int64_t *)(uint64_t)uVar17;
    } while (uVar17 != 0);
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  uVar20 = FUN_01779ec0();
  fVar27 = (float)uVar20 / g_023908e0;
  auVar21._0_4_ = g_023945e0 & (uint)fVar27;
  auVar21._4_4_ = _UNK_023945e4 & (uint)((uint64_t)uVar20 >> 0x20);
  auVar21._8_4_ = _UNK_023945e8 & (uint)extraout_XMM0_Qb;
  auVar21._12_4_ = _UNK_023945ec & (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
  auVar26._4_12_ = SUB1612(auVar21 | g_023945f0,4);
  auVar26._0_4_ = SUB164(auVar21 | g_023945f0,0) + fVar27;
  auVar21 = roundss(ZEXT816(0),auVar26,0xb);
  fVar27 = auVar21._0_4_ * g_023908e0;
  if (0 < *(int *)((int64_t)local_68 + 0xc)) {
    fVar19 = 0.0;
    lVar6 = 0;
    do {
      pVar9 = pVar1;
      pvVar5 = _pthread_getspecific(pVar1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      auVar22._0_8_ = FUN_01779ec0();
      auVar22._8_8_ = extraout_XMM0_Qb_00;
      auVar23._4_12_ = auVar22._4_12_;
      auVar23._0_4_ = (float)auVar22._0_8_ - fVar27;
      if (lVar6 != 0) {
        uVar20 = CONCAT44((int)((uint64_t)auVar22._0_8_ >> 0x20),auVar23._0_4_);
        auVar23._8_4_ = (uint32_t)extraout_XMM0_Qb_00;
        auVar23._12_4_ = (uint32_t)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
        if (fVar19 <= auVar23._0_4_) {
          auVar23._0_8_ = uVar20;
        }
        else {
          auVar23._0_8_ = uVar20;
          do {
            auVar23._0_4_ = auVar23._0_4_ + (float)iVar4;
          } while (auVar23._0_4_ < fVar19);
        }
      }
      fVar19 = auVar23._0_4_;
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0();
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)((int64_t)local_68 + 0xc));
  }
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar10 = (int64_t *)&g_025ffd60;
  *puVar7 = &g_025ffd60;
  puVar7[7] = 0;
  puVar7[8] = 0;
  (*g_025ffd78)();
  if (puVar7 == puVar13) {
    puVar7 = puVar13;
    if (bVar3) {
      FUN_00d50b20();
    }
  }
  else if ((bVar3) && (puVar13 != (void*)0x0)) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  auVar24._0_8_ = FUN_01779ec0();
  auVar24._8_8_ = extraout_XMM0_Qb_01;
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = (float)auVar24._0_8_ + (float)iVar4;
  FUN_01779ed0(auVar25._0_8_);
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    plVar10 = plVar2;
  }
  FUN_0176fde0();
  lVar6 = *in_RCX;
  if (lVar6 != 0) {
    pvVar5 = _pthread_getspecific((void*)plVar10);
    if ((pvVar5 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
      lVar8 = local_68[0xb];
    }
    else {
      lVar8 = *(int64_t *)(local_68[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4] + 0x58);
      plVar10 = local_68;
    }
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    pvVar5 = _pthread_getspecific((void*)plVar10);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar20 = FUN_01736e70();
    if (local_80 == '\0') {
      if (local_88 != 0) {
        uVar20 = FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    FUN_00d214d0(uVar20,*(void*)(lVar6 + 0xc));
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00e7d780(fVar27 / g_023908e0);
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = local_68[0xc];
  }
  else {
    lVar6 = *(int64_t *)(local_68[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4] + 0x60);
    plVar10 = local_68;
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770230();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = local_68[0xc];
  }
  else {
    lVar6 = *(int64_t *)(local_68[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4] + 0x60);
    plVar10 = local_68;
  }
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770300();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific((void*)plVar10);
  if ((pvVar5 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
    lVar6 = local_68[0xc];
  }
  else {
    lVar6 = *(int64_t *)(local_68[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4] + 0x60);
    plVar10 = local_68;
  }
  pVar9 = (void*)plVar10;
  if (lVar6 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01775c40();
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
    pVar9 = pVar1;
  }
  FUN_0174bd90();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173bbf0();
  *this_ptr = local_68;
  *(void*)(this_ptr + 1) = 1;
  if (puVar7 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

