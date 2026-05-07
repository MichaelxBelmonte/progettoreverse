// Function: FUN_01369cd0
// Address: 01369cd0
// Size: 5928 bytes
// Class: MUAudioSourcePrincipalItem

void FUN_01369cd0(void* param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  double dVar6;
  double dVar7;
  uint8_t auVar8 [16];
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  bool bVar27;
  bool bVar28;
  void*puVar29;
  code *pcVar30;
  int64_t *plVar31;
  char cVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  void *pvVar38;
  int64_t lVar39;
  void*puVar40;
  void*puVar41;
  void*puVar42;
  int64_t lVar43;
  int64_t lVar44;
  void*puVar45;
  void*puVar46;
  void*puVar47;
  void* pVar48;
  uint uVar49;
  int64_t *plVar50;
  bool bVar51;
  int iVar52;
  uint64_t uVar53;
  int iVar54;
  int64_t *arg1;
  uint64_t uVar55;
  int64_t this_ptr;
  int64_t *plVar56;
  uint64_t uVar57;
  int iVar58;
  int iVar59;
  uint64_t uVar60;
  uint64_t uVar61;
  uint32_t uVar62;
  uint32_t uVar63;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  uint8_t auVar68 [16];
  uint8_t auVar69 [16];
  float fVar71;
  uint8_t auVar70 [16];
  int64_t *local_178;
  uint8_t local_170;
  int64_t *local_168;
  uint8_t local_160;
  void*local_158;
  uint8_t local_150;
  int64_t local_148;
  int64_t local_140;
  uint8_t local_138 [8];
  int64_t local_130;
  uint8_t local_98 [16];
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
    return;
  }
  pvVar38 = _pthread_getspecific(param_1);
  if (pvVar38 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar33 = FUN_0141bab0();
  if (iVar33 != 1) {
    return;
  }
  plVar50 = *(int64_t **)(this_ptr + 0x38);
  pvVar38 = _pthread_getspecific(param_1);
  if (pvVar38 != (void *)0x0) {
    plVar50 = *(int64_t **)(this_ptr + 0x38);
    lVar39 = FUN_00e8b990();
    if (lVar39 != 0) {
      plVar50 = (int64_t *)plVar50[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
    }
  }
  dVar6 = (double)(**(code **)(*plVar50 + 0x370))();
  iVar33 = FUN_00e7d850((int)g_0240d3e8);
  puVar40 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar40 = &g_025f0d98;
  puVar40[2] = 0;
  puVar40[3] = 0;
  puVar40[4] = 0;
  puVar40[5] = 0;
  puVar40[6] = 0;
  puVar40[7] = 0;
  (*g_025f0db0)();
  puVar41 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar41 = &g_025683c0;
  pcVar30 = g_025683d8;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  puVar42 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  plVar50 = (int64_t *)&g_02572358;
  *puVar42 = &g_02572358;
  (*g_02572370)();
  pVar48 = (void*)plVar50;
  lVar39 = *arg1;
  if (0 < *(int *)(lVar39 + 0xc)) {
    lVar44 = 0;
    do {
      plVar31 = local_40;
      plVar4 = *(int64_t **)(*(int64_t *)(lVar39 + 0x10) + lVar44 * 8);
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar38 = _pthread_getspecific((void*)plVar50);
      if (pvVar38 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      pvVar38 = _pthread_getspecific((void*)plVar50);
      if (pvVar38 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc240();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      pvVar38 = _pthread_getspecific((void*)plVar50);
      if (pvVar38 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014bc0d0();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      pvVar38 = _pthread_getspecific((void*)plVar50);
      plVar56 = local_40;
      if ((pvVar38 != (void *)0x0) && (lVar39 = FUN_00e8b990(), lVar39 != 0)) {
        plVar56 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar39 + 0x154) & 1) + 4];
      }
      lVar39 = (**(code **)(*plVar56 + 0x380))();
      pvVar38 = _pthread_getspecific((void*)plVar50);
      if ((pvVar38 != (void *)0x0) && (lVar43 = FUN_00e8b990(), lVar43 != 0)) {
        plVar50 = plVar4;
      }
      dVar7 = (double)FUN_013de9b0();
      pvVar38 = _pthread_getspecific((void*)plVar50);
      if ((pvVar38 != (void *)0x0) && (lVar43 = FUN_00e8b990(), lVar43 != 0)) {
        plVar50 = plVar4;
      }
      uVar62 = FUN_013de3b0();
      local_130 = lVar44;
      uVar34 = FUN_00e7d850(SUB84(dVar7 / g_0240d3f0,0));
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      uVar60 = (uint64_t)uVar34;
      if (0 < (int)uVar34) {
        uVar61 = 0;
        do {
          dVar7 = (double)(int)uVar61 * g_0240d3f0;
          FUN_00e7dae0(SUB84(dVar6 * dVar7,0));
          pvVar38 = _pthread_getspecific((void*)plVar50);
          if ((pvVar38 != (void *)0x0) && (lVar44 = FUN_00e8b990(), lVar44 != 0)) {
            plVar50 = local_40;
          }
          uVar63 = FUN_014c3a00();
          *(void*)(local_40[2] + uVar61 * 4) = uVar63;
          *(void*)(local_40[2] + uVar61 * 4) = uVar63;
          pvVar38 = _pthread_getspecific((void*)plVar50);
          plVar56 = local_40;
          if ((pvVar38 != (void *)0x0) && (lVar44 = FUN_00e8b990(), lVar44 != 0)) {
            plVar50 = local_40;
            plVar56 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
          }
          uVar63 = SUB84(dVar7,0);
          dVar7 = (double)(**(code **)(*plVar56 + 0x380))(uVar63);
          *(float *)(local_40[2] + uVar61 * 4) = (float)dVar7;
          pvVar38 = _pthread_getspecific((void*)plVar50);
          plVar56 = local_40;
          if ((pvVar38 != (void *)0x0) && (lVar44 = FUN_00e8b990(), lVar44 != 0)) {
            plVar50 = local_40;
            plVar56 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar44 + 0x154) & 1) + 4];
          }
          dVar7 = (double)(**(code **)(*plVar56 + 0x380))(uVar63);
          fVar65 = 0.0;
          if (0.0 <= (float)dVar7) {
            fVar65 = (float)dVar7;
          }
          *(float *)(local_40[2] + uVar61 * 4) = fVar65;
          uVar61 = uVar61 + 1;
        } while (uVar60 != uVar61);
      }
      local_148 = local_40[2];
      FUN_015c13f0(g_023908d8,uVar62,uVar62);
      local_140 = local_40[2];
      FUN_015c13f0(g_023b8c38);
      if (0 < (int)uVar34) {
        uVar61 = local_40[2];
        uVar5 = local_40[2];
        if ((uVar34 < 8) || ((uVar5 < uVar61 + uVar60 * 4 && (uVar61 < uVar5 + uVar60 * 4)))) {
          uVar53 = 0;
        }
        else {
          uVar53 = (uint64_t)(uVar34 & 0xfffffff8);
          uVar55 = (uVar53 - 8 >> 3) + 1;
          if (uVar53 - 8 == 0) {
            lVar44 = 0;
LAB_0136a614:
            pfVar1 = (float *)(uVar61 + lVar44 * 4);
            fVar65 = pfVar1[1];
            fVar64 = pfVar1[2];
            fVar71 = pfVar1[3];
            pfVar2 = (float *)(uVar61 + 0x10 + lVar44 * 4);
            fVar66 = *pfVar2;
            fVar67 = pfVar2[1];
            fVar10 = pfVar2[2];
            fVar11 = pfVar2[3];
            pfVar2 = (float *)(uVar5 + lVar44 * 4);
            fVar12 = pfVar2[1];
            fVar13 = pfVar2[2];
            fVar14 = pfVar2[3];
            pfVar3 = (float *)(uVar5 + 0x10 + lVar44 * 4);
            fVar15 = *pfVar3;
            fVar16 = pfVar3[1];
            fVar17 = pfVar3[2];
            fVar18 = pfVar3[3];
            pfVar3 = (float *)(uVar5 + lVar44 * 4);
            *pfVar3 = *pfVar2 - *pfVar1;
            pfVar3[1] = fVar12 - fVar65;
            pfVar3[2] = fVar13 - fVar64;
            pfVar3[3] = fVar14 - fVar71;
            pfVar1 = (float *)(uVar5 + 0x10 + lVar44 * 4);
            *pfVar1 = fVar15 - fVar66;
            pfVar1[1] = fVar16 - fVar67;
            pfVar1[2] = fVar17 - fVar10;
            pfVar1[3] = fVar18 - fVar11;
          }
          else {
            lVar43 = -(uVar55 & 0xfffffffffffffffe);
            lVar44 = 0;
            do {
              pfVar1 = (float *)(uVar61 + lVar44 * 4);
              fVar65 = pfVar1[1];
              fVar64 = pfVar1[2];
              fVar71 = pfVar1[3];
              pfVar2 = (float *)(uVar61 + 0x10 + lVar44 * 4);
              fVar66 = *pfVar2;
              fVar67 = pfVar2[1];
              fVar10 = pfVar2[2];
              fVar11 = pfVar2[3];
              pfVar2 = (float *)(uVar5 + lVar44 * 4);
              fVar12 = pfVar2[1];
              fVar13 = pfVar2[2];
              fVar14 = pfVar2[3];
              pfVar3 = (float *)(uVar5 + 0x10 + lVar44 * 4);
              fVar15 = *pfVar3;
              fVar16 = pfVar3[1];
              fVar17 = pfVar3[2];
              fVar18 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + 0x20 + lVar44 * 4);
              fVar19 = *pfVar3;
              fVar20 = pfVar3[1];
              fVar21 = pfVar3[2];
              fVar22 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + 0x30 + lVar44 * 4);
              fVar23 = *pfVar3;
              fVar24 = pfVar3[1];
              fVar25 = pfVar3[2];
              fVar26 = pfVar3[3];
              pfVar3 = (float *)(uVar5 + lVar44 * 4);
              *pfVar3 = *pfVar2 - *pfVar1;
              pfVar3[1] = fVar12 - fVar65;
              pfVar3[2] = fVar13 - fVar64;
              pfVar3[3] = fVar14 - fVar71;
              pfVar1 = (float *)(uVar5 + 0x10 + lVar44 * 4);
              *pfVar1 = fVar15 - fVar66;
              pfVar1[1] = fVar16 - fVar67;
              pfVar1[2] = fVar17 - fVar10;
              pfVar1[3] = fVar18 - fVar11;
              pfVar1 = (float *)(uVar61 + 0x20 + lVar44 * 4);
              fVar65 = pfVar1[1];
              fVar64 = pfVar1[2];
              fVar71 = pfVar1[3];
              pfVar2 = (float *)(uVar61 + 0x30 + lVar44 * 4);
              fVar66 = *pfVar2;
              fVar67 = pfVar2[1];
              fVar10 = pfVar2[2];
              fVar11 = pfVar2[3];
              pfVar2 = (float *)(uVar5 + 0x20 + lVar44 * 4);
              *pfVar2 = fVar19 - *pfVar1;
              pfVar2[1] = fVar20 - fVar65;
              pfVar2[2] = fVar21 - fVar64;
              pfVar2[3] = fVar22 - fVar71;
              pfVar1 = (float *)(uVar5 + 0x30 + lVar44 * 4);
              *pfVar1 = fVar23 - fVar66;
              pfVar1[1] = fVar24 - fVar67;
              pfVar1[2] = fVar25 - fVar10;
              pfVar1[3] = fVar26 - fVar11;
              lVar44 = lVar44 + 0x10;
              lVar43 = lVar43 + 2;
            } while (lVar43 != 0);
            if ((uVar55 & 1) != 0) goto LAB_0136a614;
          }
          if (uVar53 == uVar60) goto LAB_0136a640;
        }
        uVar55 = ~uVar53;
        uVar57 = uVar60 & 3;
        if ((uVar34 & 3) != 0) {
          do {
            *(float *)(uVar5 + uVar53 * 4) =
                 *(float *)(uVar5 + uVar53 * 4) - *(float *)(uVar61 + uVar53 * 4);
            uVar53 = uVar53 + 1;
            uVar57 = uVar57 - 1;
          } while (uVar57 != 0);
        }
        if (2 < uVar55 + uVar60) {
          do {
            *(float *)(uVar5 + uVar53 * 4) =
                 *(float *)(uVar5 + uVar53 * 4) - *(float *)(uVar61 + uVar53 * 4);
            *(float *)(uVar5 + 4 + uVar53 * 4) =
                 *(float *)(uVar5 + 4 + uVar53 * 4) - *(float *)(uVar61 + 4 + uVar53 * 4);
            *(float *)(uVar5 + 8 + uVar53 * 4) =
                 *(float *)(uVar5 + 8 + uVar53 * 4) - *(float *)(uVar61 + 8 + uVar53 * 4);
            *(float *)(uVar5 + 0xc + uVar53 * 4) =
                 *(float *)(uVar5 + 0xc + uVar53 * 4) - *(float *)(uVar61 + 0xc + uVar53 * 4);
            uVar53 = uVar53 + 4;
          } while (uVar60 != uVar53);
        }
      }
LAB_0136a640:
      puVar45 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar45 = &g_025683c0;
      (*pcVar30)();
      FUN_00c92170();
      FUN_00c92160();
      for (iVar59 = iVar33; iVar59 < (int)(uVar34 - iVar33); iVar59 = iVar59 + 1) {
        lVar43 = (int64_t)iVar59;
        lVar44 = local_40[2];
        fVar65 = *(float *)(lVar44 + lVar43 * 4);
        if (((0.0 <= fVar65) && (fVar64 = *(float *)(lVar44 + -4 + lVar43 * 4), fVar64 < 0.0)) ||
           ((fVar65 <= 0.0 && (fVar64 = *(float *)(lVar44 + -4 + lVar43 * 4), 0.0 < fVar64)))) {
          iVar52 = iVar59 + -1;
          iVar54 = *(int *)(puVar45 + 3);
          if ((float)((uint)fVar64 & g_02390140) <= (float)((uint)fVar65 & g_02390140)) {
            FUN_00c8e340();
          }
          else {
            FUN_00c8e340();
            iVar52 = iVar59;
          }
          *(int *)(puVar45[2] + (int64_t)iVar54) = iVar52;
          iVar59 = iVar59 + iVar33;
        }
      }
      uVar37 = *(uint *)(puVar45 + 3);
      if (3 < (int)uVar37) {
        uVar49 = uVar37 >> 2;
        iVar59 = 0;
        do {
          lVar43 = (int64_t)iVar59;
          lVar44 = puVar45[2];
          iVar52 = 0;
          if (iVar59 != 0) {
            iVar52 = *(int *)(lVar44 + -4 + lVar43 * 4);
          }
          uVar35 = uVar34;
          if (iVar59 != uVar49 - 1) {
            uVar35 = *(uint *)(lVar44 + 4 + lVar43 * 4);
          }
          iVar54 = *(int *)(lVar44 + lVar43 * 4);
          iVar36 = uVar35 - iVar54;
          iVar54 = iVar54 - iVar52;
          iVar9 = iVar36;
          if (0 < iVar59) {
            iVar58 = 0;
            if (iVar59 != 1) {
              iVar58 = *(int *)(lVar44 + (uint64_t)(iVar59 - 2) * 4);
            }
            iVar9 = iVar52 - iVar58;
            if (iVar36 <= iVar52 - iVar58) {
              iVar9 = iVar36;
            }
          }
          if ((iVar54 < iVar9 / 2) || ((iVar59 == uVar49 - 1 && (iVar36 < iVar54 / 2)))) {
            FUN_00e7b4e0();
            FUN_00c921e0();
            iVar59 = iVar59 + -1;
            uVar37 = *(uint *)(puVar45 + 3);
          }
          iVar59 = iVar59 + 1;
          uVar49 = uVar37 + 3;
          if (-1 < (int)uVar37) {
            uVar49 = uVar37;
          }
          uVar49 = (int)uVar49 >> 2;
        } while (iVar59 < (int)uVar49);
      }
      puVar46 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar46 = &g_025683c0;
      (*pcVar30)();
      FUN_00c92170();
      FUN_00c92160();
      iVar59 = *(int *)(puVar45 + 3);
      if (-4 < iVar59) {
        iVar52 = iVar59 + 3;
        if (-1 < iVar59) {
          iVar52 = iVar59;
        }
        uVar37 = iVar52 >> 2;
        auVar70 = ZEXT816(0);
        uVar60 = 0;
        fVar65 = 0.0;
        do {
          fVar64 = auVar70._0_4_;
          fVar71 = auVar70._4_4_;
          uVar49 = uVar34;
          if (uVar60 == 0) {
            iVar52 = 0;
            if (uVar37 != 0) goto LAB_0136ab03;
          }
          else {
            iVar52 = *(int *)(puVar45[2] + -4 + uVar60 * 4);
            if (uVar60 != uVar37) {
LAB_0136ab03:
              uVar49 = *(uint *)(puVar45[2] + uVar60 * 4);
            }
          }
          iVar54 = (int)(uVar49 - iVar52) / 3;
          iVar52 = iVar52 + iVar54;
          iVar54 = uVar49 - iVar54;
          if (iVar54 - iVar52 == 0 || iVar54 < iVar52) {
            auVar70 = ZEXT816(0);
            bVar51 = true;
            fVar66 = 0.0;
          }
          else {
            lVar44 = (int64_t)iVar52;
            fVar66 = 0.0;
            bVar51 = true;
            auVar69 = ZEXT816(0);
            do {
              fVar67 = *(float *)(local_40[2] + lVar44 * 4);
              fVar66 = fVar66 + *(float *)(local_40[2] + lVar44 * 4) * fVar67;
              if (fVar67 < g_023b4df0) {
                bVar51 = false;
              }
              auVar68 = insertps(ZEXT416(*(uint *)(local_40[2] + lVar44 * 4)),ZEXT416((uint)fVar67),
                                 0x10);
              auVar70._0_4_ = auVar69._0_4_ + auVar68._0_4_;
              auVar70._4_4_ = auVar69._4_4_ + auVar68._4_4_;
              auVar70._8_4_ = auVar69._8_4_ + auVar68._8_4_;
              auVar70._12_4_ = auVar69._12_4_ + auVar68._12_4_;
              lVar44 = lVar44 + 1;
              auVar69 = auVar70;
            } while (lVar44 < iVar54);
          }
          uVar37 = -(uint)(auVar70._4_4_ < g_02394274);
          fVar67 = g_023b26e8;
          if (bVar51) {
            fVar67 = fVar66 / auVar70._4_4_;
          }
          fVar66 = (float)(iVar54 - iVar52);
          fVar67 = (float)(uVar37 & (uint)g_023b26e8 | ~uVar37 & (uint)fVar67);
          auVar69._4_4_ = fVar66;
          auVar69._0_4_ = fVar66;
          auVar69._8_8_ = 0;
          auVar70 = divps(auVar70,auVar69);
          if (((((uVar60 != 0) && (!NAN(fVar65))) && (!NAN(fVar67))) &&
              ((g_023b16a0 < (float)((uint)(fVar67 - fVar65) & g_02390140) &&
               (g_023d59b4 < auVar70._0_4_)))) &&
             ((g_023d59b4 < fVar64 &&
              ((g_023b4df0 <= auVar70._4_4_ && (g_023b4df0 <= fVar71)))))) {
            lVar44 = puVar45[2];
            iVar59 = *(int *)(puVar46 + 3);
            FUN_00c8e340();
            *(void*)(puVar46[2] + (int64_t)iVar59) =
                 *(void*)(lVar44 + (uint64_t)((int)uVar60 - 1) * 4);
            iVar59 = *(int *)(puVar45 + 3);
            local_98 = auVar70;
          }
          iVar52 = iVar59 + 3;
          if (-1 < iVar59) {
            iVar52 = iVar59;
          }
          uVar37 = iVar52 >> 2;
          bVar51 = (int64_t)uVar60 < (int64_t)(int)uVar37;
          uVar60 = uVar60 + 1;
          fVar65 = fVar67;
        } while (bVar51);
      }
      if (puVar45 != puVar46) {
        if (puVar46 != (void*)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        puVar45 = puVar46;
      }
      uVar37 = *(uint *)(puVar45 + 3);
      if (3 < (int)uVar37) {
        uVar49 = uVar37 >> 2;
        iVar59 = 0;
        do {
          lVar43 = (int64_t)iVar59;
          lVar44 = puVar45[2];
          iVar52 = 0;
          if (iVar59 != 0) {
            iVar52 = *(int *)(lVar44 + -4 + lVar43 * 4);
          }
          uVar35 = uVar34;
          if (iVar59 != uVar49 - 1) {
            uVar35 = *(uint *)(lVar44 + 4 + lVar43 * 4);
          }
          iVar54 = *(int *)(lVar44 + lVar43 * 4);
          iVar36 = uVar35 - iVar54;
          iVar54 = iVar54 - iVar52;
          iVar9 = iVar36;
          if (0 < iVar59) {
            iVar58 = 0;
            if (iVar59 != 1) {
              iVar58 = *(int *)(lVar44 + (uint64_t)(iVar59 - 2) * 4);
            }
            iVar9 = iVar52 - iVar58;
            if (iVar36 <= iVar52 - iVar58) {
              iVar9 = iVar36;
            }
          }
          if ((iVar54 < iVar9 / 2) || ((iVar59 == uVar49 - 1 && (iVar36 < iVar54 / 2)))) {
            FUN_00e7b4e0();
            FUN_00c921e0();
            iVar59 = iVar59 + -1;
            uVar37 = *(uint *)(puVar45 + 3);
          }
          iVar59 = iVar59 + 1;
          uVar49 = uVar37 + 3;
          if (-1 < (int)uVar37) {
            uVar49 = uVar37;
          }
          uVar49 = (int)uVar49 >> 2;
        } while (iVar59 < (int)uVar49);
      }
      puVar47 = puVar46;
      puVar29 = puVar45;
      if ((uVar37 & 0xfffffffc) == 4) {
        puVar47 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar47 = &g_025683c0;
        (*pcVar30)();
        FUN_00c92170();
        FUN_00c92160();
        if (puVar46 != (void*)0x0) {
          FUN_00d50b20();
        }
        iVar59 = *(int *)(puVar45 + 3);
        if (-4 < iVar59) {
          iVar52 = iVar59 + 3;
          if (-1 < iVar59) {
            iVar52 = iVar59;
          }
          uVar37 = iVar52 >> 2;
          auVar70 = ZEXT816(0);
          uVar60 = 0;
          fVar65 = 0.0;
          do {
            fVar64 = auVar70._0_4_;
            fVar71 = auVar70._4_4_;
            uVar49 = uVar34;
            if (uVar60 == 0) {
              iVar52 = 0;
              if (uVar37 != 0) goto LAB_0136ad53;
            }
            else {
              iVar52 = *(int *)(puVar45[2] + -4 + uVar60 * 4);
              if (uVar60 != uVar37) {
LAB_0136ad53:
                uVar49 = *(uint *)(puVar45[2] + uVar60 * 4);
              }
            }
            iVar54 = (int)(uVar49 - iVar52) / 3;
            iVar52 = iVar52 + iVar54;
            iVar54 = uVar49 - iVar54;
            if (iVar54 - iVar52 == 0 || iVar54 < iVar52) {
              auVar68 = ZEXT816(0);
              bVar51 = true;
              fVar66 = 0.0;
            }
            else {
              lVar44 = (int64_t)iVar52;
              fVar66 = 0.0;
              bVar51 = true;
              auVar70 = ZEXT816(0);
              do {
                fVar67 = *(float *)(local_40[2] + lVar44 * 4);
                fVar66 = fVar66 + *(float *)(local_40[2] + lVar44 * 4) * fVar67;
                if (fVar67 < g_023b4df0) {
                  bVar51 = false;
                }
                auVar69 = insertps(ZEXT416(*(uint *)(local_40[2] + lVar44 * 4)),
                                   ZEXT416((uint)fVar67),0x10);
                auVar68._0_4_ = auVar70._0_4_ + auVar69._0_4_;
                auVar68._4_4_ = auVar70._4_4_ + auVar69._4_4_;
                auVar68._8_4_ = auVar70._8_4_ + auVar69._8_4_;
                auVar68._12_4_ = auVar70._12_4_ + auVar69._12_4_;
                lVar44 = lVar44 + 1;
                auVar70 = auVar68;
              } while (lVar44 < iVar54);
            }
            uVar37 = -(uint)(auVar68._4_4_ < g_02394274);
            fVar67 = g_023b26e8;
            if (bVar51) {
              fVar67 = fVar66 / auVar68._4_4_;
            }
            fVar66 = (float)(iVar54 - iVar52);
            fVar67 = (float)(uVar37 & (uint)g_023b26e8 | ~uVar37 & (uint)fVar67);
            auVar8._4_4_ = fVar66;
            auVar8._0_4_ = fVar66;
            auVar8._8_8_ = 0;
            auVar70 = divps(auVar68,auVar8);
            if ((((uVar60 != 0) && (!NAN(fVar65))) && (!NAN(fVar67))) &&
               (((g_023b16a0 < (float)((uint)(fVar67 - fVar65) & g_02390140) &&
                 (g_023d59b4 < auVar70._0_4_)) &&
                ((g_023d59b4 < fVar64 &&
                 ((g_023b4df0 <= auVar70._4_4_ && (g_023b4df0 <= fVar71)))))))) {
              lVar44 = puVar45[2];
              iVar59 = *(int *)(puVar47 + 3);
              FUN_00c8e340(fVar71,1);
              *(void*)(puVar47[2] + (int64_t)iVar59) =
                   *(void*)(lVar44 + (uint64_t)((int)uVar60 - 1) * 4);
              iVar59 = *(int *)(puVar45 + 3);
              local_98 = auVar70;
            }
            iVar52 = iVar59 + 3;
            if (-1 < iVar59) {
              iVar52 = iVar59;
            }
            uVar37 = iVar52 >> 2;
            bVar51 = (int64_t)uVar60 < (int64_t)(int)uVar37;
            uVar60 = uVar60 + 1;
            fVar65 = fVar67;
          } while (bVar51);
        }
        if (puVar47 != puVar45) {
          if (puVar47 != (void*)0x0) {
            FUN_00d50b00();
          }
          puVar29 = puVar47;
          if (puVar45 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (*(int *)(puVar29 + 3) < 4) {
        bVar28 = true;
        plVar50 = (int64_t *)0x0;
        bVar51 = false;
        plVar56 = plVar4;
      }
      else {
        bVar28 = true;
        lVar44 = 0;
        local_98._0_8_ = plVar4;
        bVar51 = false;
        plVar50 = (int64_t *)0x0;
        do {
          lVar43 = FUN_00e7dae0(SUB84((double)*(int *)(puVar29[2] + lVar44 * 4) * g_0240d3f0 *
                                      dVar6,0));
          local_178 = (int64_t *)local_98._0_8_;
          local_170 = 0;
          FUN_0135f200(lVar43 + lVar39,&local_178,local_138);
          if (local_40 == plVar50) {
            if ((bVar51) || (local_40 == (int64_t *)0x0)) {
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar51 = true;
              if (local_38 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            if ((!bVar51) || (plVar50 == (int64_t *)0x0)) goto joined_r0x0136b29e;
            FUN_00d50b20();
            plVar50 = local_40;
            bVar51 = true;
          }
          else if ((bVar51) && (plVar50 != (int64_t *)0x0)) {
            FUN_00d50b20();
            plVar50 = local_40;
            bVar51 = true;
          }
          else {
joined_r0x0136b29e:
            plVar50 = local_40;
            bVar51 = true;
          }
          plVar56 = (int64_t *)local_98._0_8_;
          if (plVar50 != (int64_t *)0x0) {
            local_160 = 0;
            local_168 = plVar50;
            FUN_01326e80();
            if ((int64_t *)local_98._0_8_ == plVar50) {
              bVar27 = bVar28;
              if ((bVar51) && (!bVar28)) {
                FUN_00d50b00();
                bVar27 = true;
              }
            }
            else {
              if (bVar51) {
                FUN_00d50b00();
              }
              plVar56 = plVar50;
              bVar27 = bVar51;
              if ((bVar28) && ((int64_t *)local_98._0_8_ != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            FUN_015b4ee0();
            FUN_00d21140();
            local_38 = '\0';
            FUN_00d21140();
            local_98._0_8_ = plVar56;
            local_40 = plVar50;
            bVar28 = bVar27;
          }
          lVar44 = lVar44 + 1;
          iVar59 = *(int *)(puVar29 + 3);
          iVar52 = iVar59 + 3;
          if (-1 < iVar59) {
            iVar52 = iVar59;
          }
        } while (lVar44 < iVar52 >> 2);
      }
      if ((bVar28) && (plVar56 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((bVar51) && (plVar50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar47 != (void*)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar31 != (int64_t *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if (plVar4 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      lVar44 = local_130 + 1;
      lVar39 = *arg1;
      pVar48 = *(void* *)(lVar39 + 0xc);
      plVar50 = (int64_t *)(int64_t)(int)pVar48;
    } while (lVar44 < (int64_t)plVar50);
  }
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar38 = _pthread_getspecific(pVar48);
    if (pvVar38 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar33 = FUN_0141bab0();
    uVar62 = extraout_XMM0_Da_00;
    if (iVar33 != 3) goto LAB_0136b3d2;
  }
  else {
LAB_0136b3d2:
    cVar32 = FUN_01334f30();
    uVar62 = extraout_XMM0_Da;
    if (cVar32 == '\0') goto LAB_0136b41c;
  }
  if (0xe < *(int *)(puVar41 + 3) + 7U) {
    local_150 = 0;
    local_158 = puVar41;
    FUN_01353f80(uVar62,&local_158);
  }
LAB_0136b41c:
  if (puVar42 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar41 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar40 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

