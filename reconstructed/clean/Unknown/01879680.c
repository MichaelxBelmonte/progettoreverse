// Function: FUN_01879680
// Address: 01879680
// Size: 7188 bytes
// Class: Unknown

void* FUN_01879680(int64_t *param_1,int64_t *param_2,int64_t *param_3,char param_4)

{
  uint8_t auVar1 [16];
  uint8_t auVar2 [16];
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int64_t lVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  uint8_t (*pauVar12) [16];
  uint8_t auVar13 [16];
  uint uVar14;
  uint uVar15;
  code *pcVar16;
  int iVar17;
  int64_t lVar18;
  int64_t lVar19;
  void*puVar20;
  int64_t *plVar21;
  void*puVar22;
  void*puVar23;
  void*puVar24;
  bool bVar25;
  void *pvVar26;
  bool bVar27;
  int64_t *arg1;
  int64_t lVar28;
  void*this_ptr;
  uint64_t uVar29;
  size_t sVar30;
  uint64_t uVar31;
  int64_t lVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint uVar35;
  float fVar36;
  uint32_t uVar37;
  float fVar38;
  float fVar39;
  uint64_t uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  uint8_t auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  byte local_res8;
  uint64_t local_160;
  uint8_t local_158;
  uint8_t local_148;
  uint8_t local_138;
  void*local_130;
  uint8_t local_128;
  uint64_t local_120;
  uint8_t local_118;
  float *local_110;
  uint64_t local_108;
  uint64_t local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  void*local_d8;
  char local_d0;
  uint32_t local_c8;
  uint32_t uStack_c4;
  char local_c0;
  int64_t local_50;
  char local_48;
  
  if (*(int *)(*arg1 + 0xc) == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  uVar3 = *(uint *)(*param_3 + 0x18);
  uVar14 = uVar3 + 7;
  if (-1 < (int)uVar3) {
    uVar14 = uVar3;
  }
  pvVar26 = (void *)(uint64_t)uVar14;
  plVar21 = param_3;
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  sVar30 = (size_t)plVar21;
  lVar18 = *arg1;
  if (0 < *(int *)(lVar18 + 0xc)) {
    lVar32 = 0;
    do {
      lVar18 = *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + lVar32 * 8);
      if (lVar18 != 0) {
        FUN_00d50b00();
      }
      lVar19 = *(int64_t *)(*param_3 + 0x10);
      if (*(int *)(lVar18 + 0x10) < (int)uVar14 >> 3) {
        iVar17 = *(int *)(lVar19 + (int64_t)*(int *)(lVar18 + 0x10) * 8);
      }
      else {
        uVar40 = *(void*)((int64_t)*(int *)(*param_3 + 0x18) + -8 + lVar19);
        iVar17 = (int)((uint64_t)uVar40 >> 0x20) + (int)uVar40;
      }
      iVar4 = *(int *)(lVar19 + (int64_t)*(int *)(lVar18 + 0xc) * 8);
      lVar19 = (int64_t)iVar4;
      iVar5 = *(int *)(*param_2 + 0xc);
      if (iVar5 < iVar17) {
        iVar17 = iVar5;
      }
      if (iVar4 < iVar17) {
        plVar21 = *(int64_t **)(*param_2 + 0x10);
        pfVar6 = *(float **)(local_50 + 0x10);
        lVar28 = *param_1;
        if (lVar28 == 0) {
          fVar38 = *pfVar6;
          fVar47 = pfVar6[1];
          fVar39 = pfVar6[2];
          fVar42 = pfVar6[3];
          fVar46 = pfVar6[4];
          fVar48 = pfVar6[5];
          fVar49 = pfVar6[6];
          fVar50 = pfVar6[7];
          fVar36 = pfVar6[8];
          fVar41 = pfVar6[9];
          fVar43 = pfVar6[10];
          fVar45 = pfVar6[0xb];
          do {
            pfVar7 = *(float **)(plVar21[lVar19] + 0x10);
            fVar38 = fVar38 + *pfVar7;
            *pfVar6 = fVar38;
            fVar47 = fVar47 + pfVar7[1];
            pfVar6[1] = fVar47;
            fVar39 = fVar39 + pfVar7[2];
            pfVar6[2] = fVar39;
            fVar42 = fVar42 + pfVar7[3];
            pfVar6[3] = fVar42;
            fVar46 = fVar46 + pfVar7[4];
            pfVar6[4] = fVar46;
            fVar48 = fVar48 + pfVar7[5];
            pfVar6[5] = fVar48;
            fVar49 = fVar49 + pfVar7[6];
            pfVar6[6] = fVar49;
            fVar50 = fVar50 + pfVar7[7];
            pfVar6[7] = fVar50;
            fVar36 = fVar36 + pfVar7[8];
            pfVar6[8] = fVar36;
            fVar41 = fVar41 + pfVar7[9];
            pfVar6[9] = fVar41;
            fVar43 = fVar43 + pfVar7[10];
            pfVar6[10] = fVar43;
            fVar45 = fVar45 + pfVar7[0xb];
            pfVar6[0xb] = fVar45;
            lVar19 = lVar19 + 1;
          } while (iVar17 != lVar19);
        }
        else {
          pfVar7 = *(float **)(local_50 + 0x10);
          lVar8 = *(int64_t *)(lVar28 + 0x10);
          while( true ) {
            pfVar9 = *(float **)(plVar21[lVar19] + 0x10);
            *pfVar6 = *pfVar9 + *pfVar6;
            pfVar10 = *(float **)(*(int64_t *)(*(int64_t *)(lVar28 + 0x10) + lVar19 * 8) + 0x10);
            *pfVar7 = *pfVar10 + *pfVar7;
            pfVar6[1] = pfVar9[1] + pfVar6[1];
            pfVar7[1] = pfVar10[1] + pfVar7[1];
            pfVar6[2] = pfVar9[2] + pfVar6[2];
            pfVar7[2] = pfVar10[2] + pfVar7[2];
            pfVar6[3] = pfVar9[3] + pfVar6[3];
            pfVar7[3] = pfVar10[3] + pfVar7[3];
            pfVar6[4] = pfVar9[4] + pfVar6[4];
            pfVar7[4] = pfVar10[4] + pfVar7[4];
            pfVar6[5] = pfVar9[5] + pfVar6[5];
            pfVar7[5] = pfVar10[5] + pfVar7[5];
            pfVar6[6] = pfVar9[6] + pfVar6[6];
            pfVar7[6] = pfVar10[6] + pfVar7[6];
            pfVar6[7] = pfVar9[7] + pfVar6[7];
            lVar28 = *(int64_t *)(*(int64_t *)(lVar8 + lVar19 * 8) + 0x10);
            pfVar7[7] = *(float *)(lVar28 + 0x1c) + pfVar7[7];
            pfVar6[8] = pfVar9[8] + pfVar6[8];
            pfVar7[8] = *(float *)(lVar28 + 0x20) + pfVar7[8];
            pfVar6[9] = pfVar9[9] + pfVar6[9];
            pfVar7[9] = *(float *)(lVar28 + 0x24) + pfVar7[9];
            pfVar6[10] = pfVar9[10] + pfVar6[10];
            pfVar7[10] = *(float *)(lVar28 + 0x28) + pfVar7[10];
            pfVar6[0xb] = pfVar9[0xb] + pfVar6[0xb];
            pfVar7[0xb] = *(float *)(lVar28 + 0x2c) + pfVar7[0xb];
            if ((int64_t)iVar17 + -1 == lVar19) break;
            lVar28 = *param_1;
            lVar19 = lVar19 + 1;
          }
        }
      }
      if (lVar18 != 0) {
        FUN_00d50b20();
      }
      sVar30 = (size_t)plVar21;
      lVar32 = lVar32 + 1;
      lVar18 = *arg1;
      pvVar26 = (void *)(int64_t)*(int *)(lVar18 + 0xc);
    } while (lVar32 < (int64_t)pvVar26);
  }
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_50 + 0x18)) {
    _memset_pattern16(pvVar26,(void *)((uint64_t)((*(uint *)(local_50 + 0x18) >> 2) - 1) * 4 + 4),
                      sVar30);
  }
  lVar18 = g_027df658;
  if (*param_1 != 0) {
    if (g_027df658 != 0) {
      FUN_00d50b00();
    }
    local_f8 = lVar18;
    local_f0 = '\x01';
    FUN_018d9a10();
    FUN_018d9740();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_c0 != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    puVar20 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar20 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    uVar40 = FUN_00c92160();
    local_160 = 0;
    local_158 = 0;
    FUN_0187b830(uVar40,&local_160);
    piVar11 = (int *)puVar20[2];
    iVar17 = *piVar11;
    lVar18 = *(int64_t *)(local_50 + 0x10);
    uVar37 = _powf();
    *(void*)(lVar18 + (int64_t)iVar17 * 4) = uVar37;
    iVar17 = piVar11[1];
    uVar37 = _powf();
    *(void*)(lVar18 + (int64_t)iVar17 * 4) = uVar37;
    iVar17 = piVar11[2];
    uVar37 = _powf();
    *(void*)(lVar18 + (int64_t)iVar17 * 4) = uVar37;
    iVar17 = piVar11[3];
    uVar37 = _powf();
    *(void*)(lVar18 + (int64_t)iVar17 * 4) = uVar37;
    iVar17 = piVar11[4];
    uVar37 = _powf();
    *(void*)(lVar18 + (int64_t)iVar17 * 4) = uVar37;
    iVar17 = piVar11[5];
    uVar37 = _powf();
    *(void*)(lVar18 + (int64_t)iVar17 * 4) = uVar37;
    iVar17 = piVar11[6];
    uVar37 = _powf();
    *(void*)(lVar18 + (int64_t)iVar17 * 4) = uVar37;
    *(void*)(lVar18 + (int64_t)piVar11[7] * 4) = 0;
    *(void*)(lVar18 + (int64_t)piVar11[8] * 4) = 0;
    *(void*)(lVar18 + (int64_t)piVar11[9] * 4) = 0;
    *(void*)(lVar18 + (int64_t)piVar11[10] * 4) = 0;
    *(void*)(lVar18 + (int64_t)piVar11[0xb] * 4) = 0;
    ___bzero();
    if ((int)*(uint *)(local_50 + 0x18) < 4) {
      local_110 = *(float **)(local_50 + 0x10);
    }
    else {
      uVar3 = *(uint *)(local_50 + 0x18) >> 2;
      uVar31 = (uint64_t)uVar3;
      lVar18 = *(int64_t *)(local_50 + 0x10);
      lVar32 = *(int64_t *)(local_50 + 0x10);
      local_110 = *(float **)(local_50 + 0x10);
      fVar38 = *local_110;
      if (uVar3 == 1) {
        uVar29 = 0;
      }
      else {
        sVar30 = uVar3 & 0xfffffffe;
        uVar29 = 0;
        do {
          iVar17 = *(int *)(lVar18 + uVar29 * 4);
          iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc
          ;
          fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) *
                                                4);
          *local_110 = fVar38;
          iVar17 = *(int *)(lVar18 + 4 + uVar29 * 4);
          iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc
          ;
          fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) *
                                                4);
          *local_110 = fVar38;
          uVar29 = uVar29 + 2;
        } while (sVar30 != uVar29);
      }
      if ((uVar3 & 1) != 0) {
        iVar17 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc;
        *local_110 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17)
                                                  * 4);
      }
      fVar38 = local_110[1];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 1;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 1;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[1] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[2];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 2;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 2;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[2] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[3];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 3;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 3;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[3] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[4];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 4;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 4;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[4] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[5];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 5;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 5;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[5] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[6];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 6;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 6;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[6] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[7];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 7;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 7;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[7] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[8];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 8;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 8;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[8] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[9];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 9;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 9;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[9] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[10];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 10;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 10;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[10] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
      fVar38 = local_110[0xb];
      uVar29 = 0;
      do {
        iVar4 = *(int *)(lVar18 + uVar29 * 4);
        iVar17 = iVar4 + 0xb;
        iVar5 = iVar17 >> 0x1f;
        iVar17 = iVar4 + (((uint)(iVar17 / 6 + iVar5) >> 1) - iVar5) * -0xc + 0xb;
        fVar38 = fVar38 + *(float *)(lVar32 + (int64_t)(int)((iVar17 >> 0x1f & 0xcU) + iVar17) * 4)
        ;
        local_110[0xb] = fVar38;
        uVar29 = uVar29 + 1;
      } while (uVar31 != uVar29);
    }
    FUN_015b3230();
    uVar15 = g_023b3e04;
    fVar38 = g_02394270;
    uVar3 = g_02390140;
    lVar18 = *(int64_t *)(local_50 + 0x10);
    lVar32 = 0;
    bVar25 = false;
    do {
      fVar47 = *(float *)(lVar18 + lVar32 * 4);
      uVar35 = -(uint)(fVar47 <= fVar38);
      fVar47 = (float)(uVar35 & uVar15 | ~uVar35 & (uint)SQRT(fVar47) & uVar3);
      *(float *)(lVar18 + lVar32 * 4) = fVar47;
      bVar27 = true;
      if (fVar47 <= 0.0) {
        bVar27 = bVar25;
      }
      lVar32 = lVar32 + 1;
      bVar25 = bVar27;
    } while (lVar32 != 0xc);
    if ((!bVar27) && (3 < (int)*(uint *)(local_50 + 0x18))) {
      _memset_pattern16((void *)0x0,
                        (void *)((uint64_t)((*(uint *)(local_50 + 0x18) >> 2) - 1) * 4 + 4),sVar30)
      ;
    }
    if (puVar20 != (void*)0x0) {
      FUN_00d50b20();
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
  }
  local_108 = *(void*)(local_50 + 0x10);
  FUN_015b3230();
  pfVar6 = *(float **)(local_50 + 0x10);
  fVar38 = *pfVar6;
  if (g_02394254 <= fVar38) {
    fVar38 = pfVar6[1];
    if (fVar38 < g_02394254) goto LAB_0187a662;
LAB_0187a48a:
    fVar38 = pfVar6[2];
    if (fVar38 < g_02394254) goto LAB_0187a4a0;
LAB_0187a6a5:
    fVar38 = pfVar6[3];
    if (fVar38 < g_02394254) goto LAB_0187a6bb;
LAB_0187a4e3:
    fVar38 = pfVar6[4];
    if (fVar38 < g_02394254) goto LAB_0187a4f9;
LAB_0187a6fe:
    fVar38 = pfVar6[5];
    if (fVar38 < g_02394254) goto LAB_0187a714;
LAB_0187a53c:
    fVar38 = pfVar6[6];
    if (fVar38 < g_02394254) goto LAB_0187a552;
LAB_0187a757:
    fVar38 = pfVar6[7];
    if (fVar38 < g_02394254) goto LAB_0187a76d;
LAB_0187a595:
    fVar38 = pfVar6[8];
    if (fVar38 < g_02394254) goto LAB_0187a5ab;
LAB_0187a7b0:
    fVar38 = pfVar6[9];
    if (fVar38 < g_02394254) goto LAB_0187a7c6;
LAB_0187a5ee:
    fVar38 = pfVar6[10];
    if (fVar38 < g_02394254) goto LAB_0187a604;
LAB_0187a809:
    fVar38 = pfVar6[0xb];
    if (fVar38 < g_02394254) goto LAB_0187a81b;
  }
  else {
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    *pfVar6 = fVar47;
    fVar38 = pfVar6[1];
    if (g_02394254 <= fVar38) goto LAB_0187a48a;
LAB_0187a662:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[1] = fVar47;
    fVar38 = pfVar6[2];
    if (g_02394254 <= fVar38) goto LAB_0187a6a5;
LAB_0187a4a0:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[2] = fVar47;
    fVar38 = pfVar6[3];
    if (g_02394254 <= fVar38) goto LAB_0187a4e3;
LAB_0187a6bb:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[3] = fVar47;
    fVar38 = pfVar6[4];
    if (g_02394254 <= fVar38) goto LAB_0187a6fe;
LAB_0187a4f9:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[4] = fVar47;
    fVar38 = pfVar6[5];
    if (g_02394254 <= fVar38) goto LAB_0187a53c;
LAB_0187a714:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[5] = fVar47;
    fVar38 = pfVar6[6];
    if (g_02394254 <= fVar38) goto LAB_0187a757;
LAB_0187a552:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[6] = fVar47;
    fVar38 = pfVar6[7];
    if (g_02394254 <= fVar38) goto LAB_0187a595;
LAB_0187a76d:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[7] = fVar47;
    fVar38 = pfVar6[8];
    if (g_02394254 <= fVar38) goto LAB_0187a7b0;
LAB_0187a5ab:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[8] = fVar47;
    fVar38 = pfVar6[9];
    if (g_02394254 <= fVar38) goto LAB_0187a5ee;
LAB_0187a7c6:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[9] = fVar47;
    fVar38 = pfVar6[10];
    if (g_02394254 <= fVar38) goto LAB_0187a809;
LAB_0187a604:
    fVar47 = 0.0;
    if (g_02394588 <= fVar38) {
      fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
    }
    pfVar6[10] = fVar47;
    fVar38 = pfVar6[0xb];
    if (fVar38 < g_02394254) {
LAB_0187a81b:
      fVar47 = 0.0;
      if (g_02394588 <= fVar38) {
        fVar47 = ((g_02417228 + fVar38) / g_02394588) * fVar38;
      }
      pfVar6[0xb] = fVar47;
    }
  }
  pauVar12 = *(uint8_t (**) [16])(local_50 + 0x10);
  auVar44 = *pauVar12;
  auVar1 = pauVar12[1];
  auVar2 = pauVar12[2];
  fVar38 = auVar2._12_4_ +
           auVar2._4_4_ +
           auVar1._12_4_ +
           auVar1._4_4_ +
           auVar44._12_4_ + auVar44._4_4_ + g_02394274 + auVar44._0_4_ + *(float *)(*pauVar12 + 8)
           + auVar1._0_4_ + *(float *)(pauVar12[1] + 8) + auVar2._0_4_ + *(float *)(pauVar12[2] + 8)
  ;
  auVar13._4_4_ = fVar38;
  auVar13._0_4_ = fVar38;
  auVar13._8_4_ = fVar38;
  auVar13._12_4_ = fVar38;
  auVar44 = divps(auVar44,auVar13);
  *pauVar12 = auVar44;
  auVar44._4_4_ = fVar38;
  auVar44._0_4_ = fVar38;
  auVar44._8_4_ = fVar38;
  auVar44._12_4_ = fVar38;
  auVar44 = divps(auVar1,auVar44);
  pauVar12[1] = auVar44;
  auVar1._4_4_ = fVar38;
  auVar1._0_4_ = fVar38;
  auVar1._8_4_ = fVar38;
  auVar1._12_4_ = fVar38;
  auVar44 = divps(auVar2,auVar1);
  pauVar12[2] = auVar44;
  if (param_4 == '\0') {
    plVar21 = (int64_t *)**(void**)(*arg1 + 0x10);
    if (plVar21 == (int64_t *)0x0) {
      bVar25 = true;
      plVar21 = (int64_t *)0x0;
      goto LAB_0187a91a;
    }
    FUN_00d50b00();
  }
  else {
    plVar21 = (int64_t *)FUN_0187cb40();
    (**(code **)(*plVar21 + 0x18))();
    *(void*)((int64_t)plVar21 + 0xc) = 0;
    *(int *)(plVar21 + 2) = (int)uVar14 >> 3;
  }
  bVar25 = false;
LAB_0187a91a:
  puVar20 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar20 = &g_025f0d98;
  puVar20[2] = 0;
  puVar20[3] = 0;
  puVar20[4] = 0;
  puVar20[5] = 0;
  puVar20[6] = 0;
  puVar20[7] = 0;
  (*g_025f0db0)();
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  puVar22 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar22 = &g_02572358;
  pcVar16 = g_02572370;
  (*g_02572370)();
  local_148 = 0;
  local_138 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_130 = puVar22;
  FUN_0185cc90(&local_120,&local_130,0);
  local_e8 = local_50;
  local_e0 = '\0';
  FUN_018793e0();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  local_100 = *(void*)(local_50 + 0x10);
  local_d0 = '\0';
  local_d8 = puVar20;
  fVar38 = (float)FUN_015b3700(3,&local_c8,&local_d8,0);
  if ((local_d0 != '\0') && (local_d8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  fVar47 = g_02394254;
  if (g_02394254 <= fVar38 + g_0239458c) {
    fVar47 = fVar38 + g_0239458c;
  }
  *(void*)(plVar21 + 6) = local_c8;
  *(float *)((int64_t)plVar21 + 0x34) = fVar47;
  lVar18 = plVar21[5];
  if (lVar18 != local_50) {
    FUN_00d50b00();
    plVar21[5] = local_50;
    if (lVar18 != 0) {
      FUN_00d50b20();
    }
  }
  lVar18 = plVar21[4];
  if (lVar18 != local_50) {
    FUN_00d50b00();
    plVar21[4] = local_50;
    if (lVar18 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d216c0();
  if (local_res8 == 0) {
    puVar23 = (void*)0x0;
  }
  else {
    puVar23 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar23 = &g_02572358;
    (*pcVar16)();
  }
  fVar38 = 0.0;
  uVar33 = 0;
  uVar31 = 0;
  uVar29 = 0;
  do {
    fVar47 = *(float *)(*(int64_t *)(local_50 + 0x10) + uVar33 * 4) *
             *(float *)(*(int64_t *)(local_50 + 0x10) + uVar33 * 4) * g_0239426c;
    if (g_02394254 <= fVar47) {
      lVar18 = *(int64_t *)(puVar22[2] + uVar33 * 8);
      if (lVar18 != 0) {
        FUN_00d50b00();
      }
      if (puVar23 == (void*)0x0) {
        pfVar6 = *(float **)(lVar18 + 0x10);
        if (g_02394254 <= *pfVar6) {
          fVar39 = *pfVar6 * fVar47;
          if (fVar38 < fVar39) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 0;
            fVar38 = fVar39;
          }
          fVar39 = pfVar6[1];
          if (g_02394254 <= fVar39) goto LAB_0187ae93;
LAB_0187ad79:
          fVar39 = pfVar6[2];
          if (fVar39 < g_02394254) goto LAB_0187ad8f;
LAB_0187aecc:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 2;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[3];
          if (g_02394254 <= fVar39) goto LAB_0187af05;
LAB_0187ada5:
          fVar39 = pfVar6[4];
          if (fVar39 < g_02394254) goto LAB_0187adbb;
LAB_0187af3e:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 4;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[5];
          if (g_02394254 <= fVar39) goto LAB_0187af77;
LAB_0187add1:
          fVar39 = pfVar6[6];
          if (fVar39 < g_02394254) goto LAB_0187ade7;
LAB_0187afb0:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 6;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[7];
          if (g_02394254 <= fVar39) goto LAB_0187afe9;
LAB_0187adfd:
          fVar39 = pfVar6[8];
          if (fVar39 < g_02394254) goto LAB_0187ae13;
LAB_0187b022:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 8;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[9];
          if (g_02394254 <= fVar39) goto LAB_0187b05b;
LAB_0187ae29:
          fVar39 = pfVar6[10];
          if (fVar39 < g_02394254) goto LAB_0187ae3f;
LAB_0187b094:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 10;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[0xb];
        }
        else {
          fVar39 = pfVar6[1];
          if (fVar39 < g_02394254) goto LAB_0187ad79;
LAB_0187ae93:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 1;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[2];
          if (g_02394254 <= fVar39) goto LAB_0187aecc;
LAB_0187ad8f:
          fVar39 = pfVar6[3];
          if (fVar39 < g_02394254) goto LAB_0187ada5;
LAB_0187af05:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 3;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[4];
          if (g_02394254 <= fVar39) goto LAB_0187af3e;
LAB_0187adbb:
          fVar39 = pfVar6[5];
          if (fVar39 < g_02394254) goto LAB_0187add1;
LAB_0187af77:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 5;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[6];
          if (g_02394254 <= fVar39) goto LAB_0187afb0;
LAB_0187ade7:
          fVar39 = pfVar6[7];
          if (fVar39 < g_02394254) goto LAB_0187adfd;
LAB_0187afe9:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 7;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[8];
          if (g_02394254 <= fVar39) goto LAB_0187b022;
LAB_0187ae13:
          fVar39 = pfVar6[9];
          if (fVar39 < g_02394254) goto LAB_0187ae29;
LAB_0187b05b:
          if (fVar38 < fVar39 * fVar47) {
            uVar29 = uVar33 & 0xffffffff;
            uVar31 = 9;
            fVar38 = fVar39 * fVar47;
          }
          fVar39 = pfVar6[10];
          if (g_02394254 <= fVar39) goto LAB_0187b094;
LAB_0187ae3f:
          fVar39 = pfVar6[0xb];
        }
        if ((g_02394254 <= fVar39) && (fVar38 < fVar47 * fVar39)) {
          uVar29 = uVar33 & 0xffffffff;
          uVar31 = 0xb;
          fVar38 = fVar47 * fVar39;
        }
      }
      else {
        uVar34 = 0;
        do {
          fVar39 = *(float *)(*(int64_t *)(lVar18 + 0x10) + uVar34 * 4);
          fVar42 = fVar38;
          if (g_02394254 <= fVar39) {
            fVar42 = fVar39 * fVar47;
            if (fVar38 < fVar42) {
              uVar29 = uVar33 & 0xffffffff;
              uVar31 = uVar34 & 0xffffffff;
            }
            puVar24 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar24 = &g_0260d210;
            *(void*)((int64_t)puVar24 + 0xc) = 0;
            *(void*)((int64_t)puVar24 + 0x14) = 0;
            FUN_00d500e0();
            *(int *)((int64_t)puVar24 + 0xc) = (int)uVar33;
            *(int *)(puVar24 + 2) = (int)uVar34;
            *(float *)((int64_t)puVar24 + 0x14) = fVar42;
            FUN_00d21140();
            FUN_00d50b20();
            if (fVar42 <= fVar38) {
              fVar42 = fVar38;
            }
          }
          fVar38 = fVar42;
          uVar34 = uVar34 + 1;
        } while (uVar34 != 0xc);
      }
      FUN_00d50b20();
    }
    uVar33 = uVar33 + 1;
    if (uVar33 == 0xc) {
      if ((puVar23 == (void*)0x0 || (local_res8 ^ 1) != 0) ||
         (*(int *)((int64_t)puVar23 + 0xc) == 0)) {
        puVar24 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar24 = &g_0260d210;
        *(void*)((int64_t)puVar24 + 0xc) = 0;
        *(void*)((int64_t)puVar24 + 0x14) = 0;
        FUN_00d500e0();
        *(int *)((int64_t)puVar24 + 0xc) = (int)uVar29;
        *(int *)(puVar24 + 2) = (int)uVar31;
        *(float *)((int64_t)puVar24 + 0x14) = fVar38;
        FUN_00d21140();
        FUN_00d50b20();
      }
      else {
        uVar40 = FUN_00d242c0();
        FUN_00d214d0(uVar40,*(void*)(plVar21[3] + 0xc));
      }
      *(void*)(this_ptr + 1) = 0;
      if (bVar25) {
        FUN_00d50b00();
      }
      *this_ptr = plVar21;
      *(void*)(this_ptr + 1) = 1;
      if (puVar23 != (void*)0x0 && (local_res8 ^ 1) == 0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if (puVar22 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
      }
      if (puVar20 != (void*)0x0) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
        FUN_00d50b20();
      }
      return this_ptr;
    }
  } while( true );
}

