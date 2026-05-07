// ===================================================================
// MDPluginDocument — Complete reconstructed pseudocode
// 24 functions
// ===================================================================


// ============================================================
// 0148ced0
// ============================================================
// Function: FUN_0148ced0
// Address: 0148ced0
// Size: 9979 bytes
// Class: MDPluginDocument

void FUN_0148ced0(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint32_t param_5,uint32_t param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  uint64_t uVar5;
  uint8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
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
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint8_t auVar27 [16];
  int iVar28;
  uint uVar29;
  void *pvVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  uint64_t uVar34;
  int64_t *plVar35;
  void*puVar36;
  void*puVar37;
  char in_CL;
  void* pVar38;
  uint64_t uVar39;
  void *pvVar40;
  void *pvVar41;
  void *in_RDX;
  int64_t lVar42;
  int64_t lVar43;
  uint64_t uVar44;
  int64_t lVar45;
  int64_t *arg1;
  int64_t lVar46;
  uint64_t uVar47;
  int64_t this_ptr;
  uint64_t uVar48;
  uint64_t uVar49;
  int64_t lVar50;
  int in_R8D;
  size_t sVar51;
  char in_R9B;
  uint64_t uVar52;
  float fVar53;
  int64_t lVar54;
  int iVar55;
  bool bVar56;
  uint32_t uVar57;
  double dVar58;
  int iVar69;
  uint8_t auVar59 [16];
  uint8_t auVar60 [16];
  uint8_t auVar61 [16];
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar62 [16];
  int iVar68;
  int iVar70;
  uint8_t auVar63 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar64 [16];
  uint8_t auVar65 [16];
  uint8_t auVar66 [16];
  uint8_t auVar67 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  uint8_t auVar73 [16];
  float fVar74;
  float fVar75;
  uint8_t auVar76 [16];
  uint8_t auVar77 [16];
  uint8_t auVar78 [16];
  float fVar79;
  int iVar80;
  int iVar81;
  int iVar82;
  int iVar83;
  uint8_t auVar84 [16];
  uint8_t auVar85 [16];
  char local_res8;
  char local_res10;
  char local_res18;
  uint32_t local_res20;
  int64_t local_350;
  uint8_t local_348;
  int64_t local_340;
  uint8_t local_338;
  int64_t local_330;
  uint8_t local_328;
  int64_t local_320;
  uint8_t local_318;
  int64_t local_310;
  uint8_t local_308;
  int64_t local_300;
  uint8_t local_2f8;
  int64_t local_2f0;
  uint8_t local_2e8;
  int64_t local_2e0;
  uint8_t local_2d8;
  int64_t local_2d0;
  uint8_t local_2c8;
  int64_t local_2c0;
  uint64_t local_2b8;
  uint64_t local_2b0;
  uint64_t local_2a8;
  uint64_t local_2a0;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  uint8_t local_288 [16];
  uint64_t local_278;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  uint8_t local_248 [16];
  int64_t local_230;
  char local_228;
  void *local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  uint32_t local_1d0;
  uint32_t local_1cc;
  uint32_t local_1c8;
  uint32_t local_1c4;
  uint64_t local_1c0;
  uint64_t local_1b8;
  int iStack_1b0;
  int iStack_1ac;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  uint64_t local_d8;
  uint64_t local_d0;
  int64_t local_a8;
  uint local_80;
  void *local_70;
  uint8_t local_68 [16];
  char local_49;
  int64_t local_48;
  char local_40;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint64_t extraout_XMM0_Qb_05;
  
  pVar38 = *(void* *)(*arg1 + 0x24);
  uVar39 = (uint64_t)(int)pVar38;
  local_2a8 = *(void*)(*arg1 + 0x38);
  local_d8 = uVar39;
  local_1d0 = param_4;
  local_1c4 = param_1;
  local_1cc = param_3;
  local_1c8 = param_2;
  if (in_R8D != 0) {
    FUN_00d216c0();
    pVar38 = (void*)uVar39;
  }
  uVar39 = local_d8;
  if (local_res18 != '\0') {
    FUN_00d216c0();
    uVar39 = local_d8;
  }
  uVar5 = uVar39 & 0xffffffff;
  local_d8 = uVar39;
  if (local_res10 != '\0') {
    FUN_00d216c0();
  }
  pvVar41 = *(void **)(this_ptr + 0x160);
  iVar55 = (int)uVar39;
  local_70 = pvVar41;
  if (pvVar41 == (void *)0x0) {
    if (MACH_HEADER.filetype == 0) goto LAB_0148d012;
LAB_0148cf99:
    local_49 = local_res8;
    local_248 = ZEXT416((uint)g_02390124);
    local_a8 = 0;
    local_d0 = 0;
    if (in_R9B != '\0') goto LAB_0148e896;
  }
  else {
    FUN_00d50b00();
    if (*(int *)(*(int64_t *)(this_ptr + 0x160) + 0xc) != 0) goto LAB_0148cf99;
LAB_0148d012:
    plVar35 = *(int64_t **)(this_ptr + 0x68);
    pvVar30 = _pthread_getspecific(pVar38);
    if (pvVar30 != (void *)0x0) {
      plVar35 = *(int64_t **)(this_ptr + 0x68);
      lVar31 = FUN_00e8b990();
      if (lVar31 != 0) {
        plVar35 = (int64_t *)plVar35[(uint64_t)(*(uint *)(lVar31 + 0x154) & 1) + 4];
      }
    }
    iVar28 = (**(code **)(*plVar35 + 0x3a0))();
    if ((iVar28 == 2) && (in_CL != '\0')) {
      dVar58 = (double)*(int *)(*arg1 + 0x20) * *(double *)(*arg1 + 0x18) + g_023942d0;
      local_48 = FUN_00e83010();
      ___bzero();
      plVar35 = *(int64_t **)(this_ptr + 0x68);
      pvVar30 = _pthread_getspecific(pVar38);
      if (pvVar30 != (void *)0x0) {
        plVar35 = *(int64_t **)(this_ptr + 0x68);
        lVar31 = FUN_00e8b990();
        if (lVar31 != 0) {
          plVar35 = (int64_t *)plVar35[(uint64_t)(*(uint *)(lVar31 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar35 + 0x388))(0,g_0238fee8,1);
      lVar31 = *(int64_t *)(this_ptr + 0x68);
      if (lVar31 != 0) {
        FUN_00d50b00();
      }
      lVar45 = *(int64_t *)(this_ptr + 0x160);
      if (lVar45 != 0) {
        FUN_00d50b00();
      }
      local_348 = 1;
      local_340 = *arg1;
      local_338 = 0;
      pvVar30 = in_RDX;
      local_350 = lVar45;
      FUN_014b0a60(in_RDX,&local_350,&local_340,0);
      pVar38 = (void*)pvVar30;
      if (lVar45 != 0) {
        FUN_00d50b20();
      }
      if (lVar31 != 0) {
        FUN_00d50b20();
      }
      ___bzero();
      plVar35 = *(int64_t **)(this_ptr + 0x68);
      pvVar30 = _pthread_getspecific(pVar38);
      if (pvVar30 != (void *)0x0) {
        plVar35 = *(int64_t **)(this_ptr + 0x68);
        lVar31 = FUN_00e8b990();
        if (lVar31 != 0) {
          plVar35 = (int64_t *)plVar35[(uint64_t)(*(uint *)(lVar31 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar35 + 0x388))(1,g_0238fee8,1,(int64_t)-((int)dVar58 / 2));
      lVar31 = *(int64_t *)(this_ptr + 0x68);
      if (lVar31 != 0) {
        FUN_00d50b00();
      }
      local_328 = 1;
      lVar45 = *(int64_t *)(this_ptr + 0x168);
      local_330 = lVar31;
      if (lVar45 != 0) {
        FUN_00d50b00();
      }
      local_318 = 1;
      local_310 = *arg1;
      local_308 = 0;
      plVar35 = &local_310;
      local_320 = lVar45;
      FUN_014b0a60(in_RDX,&local_320,plVar35,0);
      sVar51 = (size_t)plVar35;
      if (lVar45 != 0) {
        FUN_00d50b20();
      }
      if (lVar31 != 0) {
        FUN_00d50b20();
      }
      FUN_00e83070();
      local_48 = 0;
      pvVar30 = *(void **)(this_ptr + 0x160);
      if (pvVar41 != pvVar30) {
        pvVar40 = pvVar41;
        if (pvVar30 != (void *)0x0) {
          FUN_00d50b00();
        }
        bVar56 = pvVar41 != (void *)0x0;
        pvVar41 = pvVar40;
        local_70 = pvVar30;
        if (bVar56) {
          FUN_00d50b20();
          pvVar41 = pvVar40;
        }
      }
      local_a8 = *(int64_t *)(this_ptr + 0x168);
      if (local_a8 == 0) {
        local_d0 = 0;
      }
      else {
        local_d0 = CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
        FUN_00d50b00();
      }
      local_248 = ZEXT416((uint)g_0239011c);
    }
    else {
      lVar31 = *(int64_t *)(this_ptr + 0x68);
      if (lVar31 != 0) {
        FUN_00d50b00();
      }
      local_2f8 = 1;
      lVar45 = *(int64_t *)(this_ptr + 0x160);
      local_300 = lVar31;
      if (lVar45 != 0) {
        FUN_00d50b00();
      }
      local_2e8 = 1;
      local_2e0 = *arg1;
      local_2d8 = 0;
      plVar35 = &local_2e0;
      pvVar41 = in_RDX;
      local_2f0 = lVar45;
      FUN_014b0a60(in_RDX,&local_2f0,plVar35,0);
      sVar51 = (size_t)plVar35;
      if (lVar45 != 0) {
        FUN_00d50b20();
      }
      local_248 = ZEXT416((uint)g_02390124);
      if (lVar31 != 0) {
        FUN_00d50b20();
      }
      local_d0 = 0;
      local_a8 = 0;
    }
    FUN_018acae0();
    local_230 = g_027db9e8;
    if (g_027db9e8 != 0) {
      FUN_00d50b00();
    }
    local_228 = '\x01';
    dVar58 = (double)FUN_018ade30();
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    local_49 = '\x01';
    if (g_023942d0 < dVar58) {
      FUN_00c8e690();
      lVar31 = local_48;
      if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      FUN_00c8e690();
      lVar45 = local_48;
      if (((local_40 == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      ___bzero();
      FUN_00c8e690();
      lVar50 = local_48;
      if (((local_40 == '\0') && (local_48 != 0)) &&
         ((FUN_00d50b00(), local_40 != '\0' && (local_48 != 0)))) {
        FUN_00d50b20();
      }
      FUN_00c92170();
      FUN_00c92160();
      if (3 < (int)*(uint *)(lVar50 + 0x18)) {
        _memset_pattern16(pvVar41,(void *)((uint64_t)((*(uint *)(lVar50 + 0x18) >> 2) - 1) * 4 + 4)
                          ,sVar51);
      }
      lVar33 = *(int64_t *)(this_ptr + 0x160);
      if (0 < *(int *)(lVar33 + 0xc)) {
        if (iVar55 < 2) {
          lVar54 = 0;
          do {
            lVar33 = *(int64_t *)(*(int64_t *)(lVar33 + 0x10) + lVar54 * 8);
            if (lVar33 != 0) {
              FUN_00d50b00();
            }
            FUN_015c6b60();
            if (lVar33 != 0) {
              FUN_00d50b20();
            }
            lVar54 = lVar54 + 1;
            lVar33 = *(int64_t *)(this_ptr + 0x160);
          } while (lVar54 < *(int *)(lVar33 + 0xc));
        }
        else {
          uVar39 = uVar5 - 1;
          if (uVar39 < 8) {
            uVar52 = (uint64_t)((uint)uVar39 & 3);
            lVar54 = 0;
            do {
              lVar33 = *(int64_t *)(*(int64_t *)(lVar33 + 0x10) + lVar54 * 8);
              if (lVar33 != 0) {
                FUN_00d50b00();
              }
              lVar32 = FUN_015c6b60();
              lVar43 = *(int64_t *)(lVar31 + 0x10);
              lVar42 = 1;
              if (2 < uVar5 - 2) {
                uVar47 = 0;
                do {
                  uVar49 = uVar47;
                  *(float *)(lVar43 + 4 + uVar49 * 4) =
                       *(float *)(lVar32 + 4 + uVar49 * 4) + *(float *)(lVar43 + 4 + uVar49 * 4);
                  *(float *)(lVar43 + 8 + uVar49 * 4) =
                       *(float *)(lVar32 + 8 + uVar49 * 4) + *(float *)(lVar43 + 8 + uVar49 * 4);
                  *(float *)(lVar43 + 0xc + uVar49 * 4) =
                       *(float *)(lVar32 + 0xc + uVar49 * 4) + *(float *)(lVar43 + 0xc + uVar49 * 4)
                  ;
                  *(float *)(lVar43 + 0x10 + uVar49 * 4) =
                       *(float *)(lVar32 + 0x10 + uVar49 * 4) +
                       *(float *)(lVar43 + 0x10 + uVar49 * 4);
                  uVar47 = uVar49 + 4;
                } while ((uVar39 & 0xfffffffffffffffc) != uVar49 + 4);
                lVar42 = uVar49 + 5;
              }
              if (uVar52 != 0) {
                lVar43 = lVar43 + lVar42 * 4;
                uVar47 = 0;
                do {
                  *(float *)(lVar43 + uVar47 * 4) =
                       *(float *)(lVar32 + lVar42 * 4 + uVar47 * 4) +
                       *(float *)(lVar43 + uVar47 * 4);
                  uVar47 = uVar47 + 1;
                } while (uVar52 != uVar47);
              }
              if (lVar33 != 0) {
                FUN_00d50b20();
              }
              lVar54 = lVar54 + 1;
              lVar33 = *(int64_t *)(this_ptr + 0x160);
            } while (lVar54 < *(int *)(lVar33 + 0xc));
          }
          else {
            uVar52 = uVar39 & 0xfffffffffffffff8;
            if (uVar39 == uVar52) {
              uVar49 = (uVar52 - 8 >> 3) + 1;
              uVar48 = (uint64_t)((uint)uVar39 & 3);
              local_1b8 = -(uVar49 & 0xfffffffffffffffe);
              lVar54 = 0;
              uVar47 = uVar49;
              do {
                lVar33 = *(int64_t *)(*(int64_t *)(lVar33 + 0x10) + lVar54 * 8);
                if (lVar33 != 0) {
                  FUN_00d50b00(uVar47);
                }
                lVar32 = FUN_015c6b60();
                lVar43 = *(int64_t *)(lVar31 + 0x10);
                if ((lVar43 + 4U < lVar32 + uVar5 * 4) && (lVar32 + 4U < lVar43 + uVar5 * 4)) {
                  lVar42 = 1;
                  if (2 < uVar5 - 2) {
                    uVar47 = 0;
                    do {
                      uVar44 = uVar47;
                      *(float *)(lVar43 + 4 + uVar44 * 4) =
                           *(float *)(lVar32 + 4 + uVar44 * 4) + *(float *)(lVar43 + 4 + uVar44 * 4)
                      ;
                      *(float *)(lVar43 + 8 + uVar44 * 4) =
                           *(float *)(lVar32 + 8 + uVar44 * 4) + *(float *)(lVar43 + 8 + uVar44 * 4)
                      ;
                      *(float *)(lVar43 + 0xc + uVar44 * 4) =
                           *(float *)(lVar32 + 0xc + uVar44 * 4) +
                           *(float *)(lVar43 + 0xc + uVar44 * 4);
                      *(float *)(lVar43 + 0x10 + uVar44 * 4) =
                           *(float *)(lVar32 + 0x10 + uVar44 * 4) +
                           *(float *)(lVar43 + 0x10 + uVar44 * 4);
                      uVar47 = uVar44 + 4;
                    } while ((uVar39 & 0xfffffffffffffffc) != uVar44 + 4);
                    lVar42 = uVar44 + 5;
                  }
                  if (uVar48 != 0) {
                    lVar43 = lVar43 + lVar42 * 4;
                    uVar47 = 0;
                    do {
                      *(float *)(lVar43 + uVar47 * 4) =
                           *(float *)(lVar32 + lVar42 * 4 + uVar47 * 4) +
                           *(float *)(lVar43 + uVar47 * 4);
                      uVar47 = uVar47 + 1;
                    } while (uVar48 != uVar47);
                  }
                }
                else {
                  if (uVar52 - 8 == 0) {
                    lVar42 = 0;
                  }
                  else {
                    lVar42 = 0;
                    lVar46 = local_1b8;
                    do {
                      pfVar1 = (float *)(lVar32 + 4 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      fVar7 = *pfVar2;
                      fVar4 = pfVar2[1];
                      fVar8 = pfVar2[2];
                      fVar9 = pfVar2[3];
                      pfVar2 = (float *)(lVar43 + 4 + lVar42 * 4);
                      fVar10 = pfVar2[1];
                      fVar75 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar3 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      fVar12 = *pfVar3;
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      fVar16 = *pfVar3;
                      fVar17 = pfVar3[1];
                      fVar18 = pfVar3[2];
                      fVar19 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x34 + lVar42 * 4);
                      fVar20 = *pfVar3;
                      fVar21 = pfVar3[1];
                      fVar22 = pfVar3[2];
                      fVar23 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 4 + lVar42 * 4);
                      *pfVar3 = *pfVar2 + *pfVar1;
                      pfVar3[1] = fVar10 + fVar53;
                      pfVar3[2] = fVar75 + fVar74;
                      pfVar3[3] = fVar11 + fVar79;
                      pfVar1 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      *pfVar1 = fVar12 + fVar7;
                      pfVar1[1] = fVar13 + fVar4;
                      pfVar1[2] = fVar14 + fVar8;
                      pfVar1[3] = fVar15 + fVar9;
                      pfVar1 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x34 + lVar42 * 4);
                      auVar60._0_4_ = *pfVar2 + fVar20;
                      auVar60._4_4_ = pfVar2[1] + fVar21;
                      auVar60._8_4_ = pfVar2[2] + fVar22;
                      auVar60._12_4_ = pfVar2[3] + fVar23;
                      pfVar2 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      *pfVar2 = *pfVar1 + fVar16;
                      pfVar2[1] = fVar53 + fVar17;
                      pfVar2[2] = fVar74 + fVar18;
                      pfVar2[3] = fVar79 + fVar19;
                      *(uint8_t (*) [16])(lVar43 + 0x34 + lVar42 * 4) = auVar60;
                      lVar42 = lVar42 + 0x10;
                      lVar46 = lVar46 + 2;
                    } while (lVar46 != 0);
                    if ((uVar49 & 1) == 0) goto LAB_0148da64;
                  }
                  uVar47 = lVar42 << 2 | 4;
                  pfVar1 = (float *)(lVar32 + uVar47);
                  fVar53 = pfVar1[1];
                  fVar74 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  auVar77 = *(uint8_t (*) [16])(lVar32 + 0x10 + uVar47);
                  pfVar2 = (float *)(lVar43 + uVar47);
                  fVar7 = pfVar2[1];
                  fVar4 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar3 = (float *)(lVar43 + 0x10 + uVar47);
                  fVar9 = *pfVar3;
                  fVar10 = pfVar3[1];
                  fVar75 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  pfVar3 = (float *)(lVar43 + uVar47);
                  *pfVar3 = *pfVar2 + *pfVar1;
                  pfVar3[1] = fVar7 + fVar53;
                  pfVar3[2] = fVar4 + fVar74;
                  pfVar3[3] = fVar8 + fVar79;
                  pfVar1 = (float *)(lVar43 + 0x10 + uVar47);
                  *pfVar1 = fVar9 + auVar77._0_4_;
                  pfVar1[1] = fVar10 + auVar77._4_4_;
                  pfVar1[2] = fVar75 + auVar77._8_4_;
                  pfVar1[3] = fVar11 + auVar77._12_4_;
                }
LAB_0148da64:
                if (lVar33 != 0) {
                  FUN_00d50b20();
                }
                lVar54 = lVar54 + 1;
                lVar33 = *(int64_t *)(this_ptr + 0x160);
                uVar47 = (uint64_t)*(int *)(lVar33 + 0xc);
              } while (lVar54 < (int64_t)uVar47);
            }
            else {
              uVar47 = (uVar52 - 8 >> 3) + 1;
              lVar54 = 0;
              uVar39 = uVar47;
              do {
                lVar33 = *(int64_t *)(*(int64_t *)(lVar33 + 0x10) + lVar54 * 8);
                if (lVar33 != 0) {
                  FUN_00d50b00(uVar39);
                }
                lVar32 = FUN_015c6b60();
                lVar43 = *(int64_t *)(lVar31 + 0x10);
                if ((lVar32 + uVar5 * 4 <= lVar43 + 4U) ||
                   (uVar39 = 1, lVar43 + uVar5 * 4 <= lVar32 + 4U)) {
                  uVar39 = uVar52 + 1;
                  if (uVar52 - 8 == 0) {
                    lVar42 = 0;
                  }
                  else {
                    lVar42 = 0;
                    lVar46 = -(uVar47 & 0xfffffffffffffffe);
                    do {
                      pfVar1 = (float *)(lVar32 + 4 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      fVar7 = *pfVar2;
                      fVar4 = pfVar2[1];
                      fVar8 = pfVar2[2];
                      fVar9 = pfVar2[3];
                      pfVar2 = (float *)(lVar43 + 4 + lVar42 * 4);
                      fVar10 = pfVar2[1];
                      fVar75 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar3 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      fVar12 = *pfVar3;
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      fVar16 = *pfVar3;
                      fVar17 = pfVar3[1];
                      fVar18 = pfVar3[2];
                      fVar19 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x34 + lVar42 * 4);
                      fVar20 = *pfVar3;
                      fVar21 = pfVar3[1];
                      fVar22 = pfVar3[2];
                      fVar23 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 4 + lVar42 * 4);
                      *pfVar3 = *pfVar2 + *pfVar1;
                      pfVar3[1] = fVar10 + fVar53;
                      pfVar3[2] = fVar75 + fVar74;
                      pfVar3[3] = fVar11 + fVar79;
                      pfVar1 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      *pfVar1 = fVar12 + fVar7;
                      pfVar1[1] = fVar13 + fVar4;
                      pfVar1[2] = fVar14 + fVar8;
                      pfVar1[3] = fVar15 + fVar9;
                      pfVar1 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x34 + lVar42 * 4);
                      auVar77._0_4_ = *pfVar2 + fVar20;
                      auVar77._4_4_ = pfVar2[1] + fVar21;
                      auVar77._8_4_ = pfVar2[2] + fVar22;
                      auVar77._12_4_ = pfVar2[3] + fVar23;
                      pfVar2 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      *pfVar2 = *pfVar1 + fVar16;
                      pfVar2[1] = fVar53 + fVar17;
                      pfVar2[2] = fVar74 + fVar18;
                      pfVar2[3] = fVar79 + fVar19;
                      *(uint8_t (*) [16])(lVar43 + 0x34 + lVar42 * 4) = auVar77;
                      lVar42 = lVar42 + 0x10;
                      lVar46 = lVar46 + 2;
                    } while (lVar46 != 0);
                    if ((uVar47 & 1) == 0) goto LAB_0148dbcc;
                  }
                  uVar49 = lVar42 << 2 | 4;
                  pfVar1 = (float *)(lVar32 + uVar49);
                  fVar53 = pfVar1[1];
                  fVar74 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  auVar77 = *(uint8_t (*) [16])(lVar32 + 0x10 + uVar49);
                  pfVar2 = (float *)(lVar43 + uVar49);
                  fVar7 = pfVar2[1];
                  fVar4 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar3 = (float *)(lVar43 + 0x10 + uVar49);
                  fVar9 = *pfVar3;
                  fVar10 = pfVar3[1];
                  fVar75 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  pfVar3 = (float *)(lVar43 + uVar49);
                  *pfVar3 = *pfVar2 + *pfVar1;
                  pfVar3[1] = fVar7 + fVar53;
                  pfVar3[2] = fVar4 + fVar74;
                  pfVar3[3] = fVar8 + fVar79;
                  pfVar1 = (float *)(lVar43 + 0x10 + uVar49);
                  *pfVar1 = fVar9 + auVar77._0_4_;
                  pfVar1[1] = fVar10 + auVar77._4_4_;
                  pfVar1[2] = fVar75 + auVar77._8_4_;
                  pfVar1[3] = fVar11 + auVar77._12_4_;
                }
LAB_0148dbcc:
                uVar29 = iVar55 - (int)uVar39;
                uVar49 = ~uVar39;
                uVar48 = (uint64_t)uVar29 & 3;
                if ((uVar29 & 3) != 0) {
                  do {
                    *(float *)(lVar43 + uVar39 * 4) =
                         *(float *)(lVar32 + uVar39 * 4) + *(float *)(lVar43 + uVar39 * 4);
                    uVar39 = uVar39 + 1;
                    uVar48 = uVar48 - 1;
                  } while (uVar48 != 0);
                }
                if (2 < uVar49 + uVar5) {
                  do {
                    *(float *)(lVar43 + uVar39 * 4) =
                         *(float *)(lVar32 + uVar39 * 4) + *(float *)(lVar43 + uVar39 * 4);
                    *(float *)(lVar43 + 4 + uVar39 * 4) =
                         *(float *)(lVar32 + 4 + uVar39 * 4) + *(float *)(lVar43 + 4 + uVar39 * 4);
                    *(float *)(lVar43 + 8 + uVar39 * 4) =
                         *(float *)(lVar32 + 8 + uVar39 * 4) + *(float *)(lVar43 + 8 + uVar39 * 4);
                    *(float *)(lVar43 + 0xc + uVar39 * 4) =
                         *(float *)(lVar32 + 0xc + uVar39 * 4) +
                         *(float *)(lVar43 + 0xc + uVar39 * 4);
                    uVar39 = uVar39 + 4;
                  } while (uVar5 != uVar39);
                }
                if (lVar33 != 0) {
                  FUN_00d50b20();
                }
                lVar54 = lVar54 + 1;
                lVar33 = *(int64_t *)(this_ptr + 0x160);
                uVar39 = (uint64_t)*(int *)(lVar33 + 0xc);
              } while (lVar54 < (int64_t)uVar39);
            }
          }
        }
      }
      fVar53 = g_02390124;
      if (iVar55 < 2) {
        local_2c0 = *(int64_t *)(lVar45 + 0x10);
      }
      else {
        lVar33 = *(int64_t *)(lVar31 + 0x10);
        local_2c0 = *(int64_t *)(lVar45 + 0x10);
        uVar52 = 1;
        lVar54 = 2;
        uVar39 = 0;
        do {
          fVar74 = *(float *)(lVar33 + uVar52 * 4) / (float)(int)uVar52;
          fVar74 = fVar74 + fVar74;
          *(float *)(local_2c0 + uVar52 * 4) = *(float *)(local_2c0 + uVar52 * 4) + fVar74;
          if (1 < uVar52) {
            iVar28 = 1;
            lVar43 = lVar54;
            uVar47 = uVar39;
            do {
              fVar79 = (fVar53 - (float)iVar28 / (float)(int)uVar52) * fVar74;
              if (0 < (int64_t)uVar47) {
                *(float *)(local_2c0 + (uVar47 & 0xffffffff) * 4) =
                     *(float *)(local_2c0 + (uVar47 & 0xffffffff) * 4) + fVar79;
              }
              if ((int)lVar43 < iVar55) {
                *(float *)(local_2c0 + lVar43 * 4) = fVar79 + *(float *)(local_2c0 + lVar43 * 4);
              }
              lVar43 = lVar43 + 1;
              iVar28 = iVar28 + 1;
              uVar47 = uVar47 - 1;
            } while (uVar47 != 0);
          }
          uVar52 = uVar52 + 1;
          lVar54 = lVar54 + 1;
          uVar39 = uVar39 + 1;
        } while (uVar52 != uVar5);
      }
      FUN_015b32a0(local_2c0,&local_48);
      fVar7 = _UNK_0241109c;
      fVar79 = _UNK_02411098;
      fVar74 = _UNK_02411094;
      fVar53 = g_02411090;
      auVar77 = g_0240e220;
      iVar70 = _UNK_0239418c;
      iVar69 = _UNK_02394188;
      iVar68 = _UNK_02394184;
      iVar28 = g_02394180;
      if (1 < iVar55) {
        lVar33 = *(int64_t *)(lVar45 + 0x10);
        fVar4 = *(float *)(lVar33 + (int64_t)(int)local_48 * 4);
        fVar75 = (float)(int)local_48;
        lVar54 = *(int64_t *)(lVar50 + 0x10);
        uVar39 = uVar5 - 1;
        uVar52 = 1;
        fVar8 = g_02394298;
        fVar9 = g_02394274;
        fVar10 = g_02390124;
        if ((3 < uVar39) &&
           ((lVar33 + uVar5 * 4 <= lVar54 + 4U || (lVar54 + uVar5 * 4 <= lVar33 + 4U)))) {
          uVar49 = uVar39 & 0xfffffffffffffffc;
          uVar52 = uVar49 + 1;
          uVar47 = 0;
          auVar24._4_4_ = _UNK_023b2d54;
          auVar24._0_4_ = g_023b2d50;
          auVar24._8_4_ = _UNK_023b2d58;
          auVar24._12_4_ = _UNK_023b2d5c;
          iVar80 = g_02394150;
          iVar81 = _UNK_02394154;
          iVar82 = _UNK_02394158;
          iVar83 = _UNK_0239415c;
          do {
            auVar59._0_4_ = (float)iVar80;
            auVar59._4_4_ = (float)iVar81;
            auVar59._8_4_ = (float)iVar82;
            auVar59._12_4_ = (float)iVar83;
            auVar85._4_4_ = fVar75;
            auVar85._0_4_ = fVar75;
            auVar85._8_4_ = fVar75;
            auVar85._12_4_ = fVar75;
            auVar60 = divps(auVar59,auVar85);
            pfVar1 = (float *)(lVar33 + 4 + uVar47 * 4);
            auVar84._0_4_ = *pfVar1 * auVar60._0_4_;
            auVar84._4_4_ = pfVar1[1] * auVar60._4_4_;
            auVar84._8_4_ = pfVar1[2] * auVar60._8_4_;
            auVar84._12_4_ = pfVar1[3] * auVar60._12_4_;
            auVar6._4_4_ = fVar4;
            auVar6._0_4_ = fVar4;
            auVar6._8_4_ = fVar4;
            auVar6._12_4_ = fVar4;
            auVar60 = divps(auVar84,auVar6);
            auVar61._4_4_ = -(uint)(auVar60._4_4_ < fVar74);
            auVar61._0_4_ = -(uint)(auVar60._0_4_ < fVar53);
            auVar61._8_4_ = -(uint)(auVar60._8_4_ < fVar79);
            auVar61._12_4_ = -(uint)(auVar60._12_4_ < fVar7);
            auVar85 = divps(auVar24,auVar60);
            auVar60 = blendvps(auVar85,auVar60,auVar61);
            auVar60 = minps(auVar77,auVar60);
            *(uint8_t (*) [16])(lVar54 + 4 + uVar47 * 4) = auVar60;
            uVar47 = uVar47 + 4;
            iVar80 = iVar80 + iVar28;
            iVar81 = iVar81 + iVar68;
            iVar82 = iVar82 + iVar69;
            iVar83 = iVar83 + iVar70;
          } while (uVar49 != uVar47);
          fVar8 = g_02394298;
          fVar9 = g_02394274;
          fVar10 = g_02390124;
          if (uVar39 == uVar49) goto LAB_0148de98;
        }
        do {
          fVar53 = (((float)(int)uVar52 / fVar75) * *(float *)(lVar33 + uVar52 * 4)) / fVar4;
          if (fVar9 <= fVar53) {
            fVar53 = fVar10 / fVar53;
          }
          fVar74 = fVar8;
          if (fVar53 <= fVar8) {
            fVar74 = fVar53;
          }
          *(float *)(lVar54 + uVar52 * 4) = fVar74;
          uVar52 = uVar52 + 1;
        } while (uVar5 != uVar52);
      }
LAB_0148de98:
      uVar29 = FUN_00e7d850(g_023b4df8 / *(double *)(*arg1 + 0x50));
      uVar39 = (uint64_t)(int)uVar29;
      lVar33 = *(int64_t *)(lVar50 + 0x10);
      if (1 < (int)uVar29) {
        local_268 = (float)(int)uVar29;
        uVar52 = (uint64_t)uVar29 - 1;
        uVar47 = 1;
        fStack_264 = 0.0;
        fStack_260 = 0.0;
        fStack_25c = 0.0;
        if (3 < uVar52) {
          uVar47 = uVar52 & 0xfffffffffffffffc;
          local_258 = (float)uVar47;
          fStack_254 = (float)(uVar47 >> 0x20);
          uVar47 = uVar47 + 1;
          lVar54 = 0;
          iVar28 = g_02394150;
          iVar68 = _UNK_02394154;
          iVar69 = _UNK_02394158;
          iVar70 = _UNK_0239415c;
          local_2a0 = uVar52;
          local_298 = local_268;
          fStack_294 = local_268;
          fStack_290 = local_268;
          fStack_28c = local_268;
          local_1c0 = uVar39;
          do {
            auVar71._0_4_ = (float)iVar28;
            auVar71._4_4_ = (float)iVar68;
            auVar71._8_4_ = (float)iVar69;
            auVar71._12_4_ = (float)iVar70;
            auVar25._4_4_ = fStack_294;
            auVar25._0_4_ = local_298;
            auVar25._8_4_ = fStack_290;
            auVar25._12_4_ = fStack_28c;
            divps(auVar71,auVar25);
            uVar34 = _powf();
            local_1b8._0_4_ = (int)uVar34;
            local_1b8._4_4_ = (int)((uint64_t)uVar34 >> 0x20);
            iStack_1b0 = (int)extraout_XMM0_Qb;
            iStack_1ac = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
            local_288._0_8_ = _powf();
            local_288._8_8_ = extraout_XMM0_Qb_00;
            local_278 = _powf();
            auVar62._0_8_ = _powf();
            auVar62._8_8_ = extraout_XMM0_Qb_01;
            auVar27._8_4_ = iStack_1b0;
            auVar27._0_8_ = local_1b8;
            auVar27._12_4_ = iStack_1ac;
            auVar77 = insertps(auVar27,local_288._0_4_,0x10);
            auVar77 = insertps(auVar77,(uint32_t)local_278,0x20);
            auVar77 = insertps(auVar77,auVar62,0x30);
            *(uint8_t (*) [16])(lVar33 + 4 + lVar54 * 4) = auVar77;
            lVar54 = lVar54 + 4;
            iVar28 = iVar28 + g_02394180;
            iVar68 = iVar68 + _UNK_02394184;
            iVar69 = iVar69 + _UNK_02394188;
            iVar70 = iVar70 + _UNK_0239418c;
          } while (CONCAT44(fStack_254,local_258) != lVar54);
          uVar39 = local_1c0;
          if (local_2a0 == CONCAT44(fStack_254,local_258)) goto LAB_0148e03b;
        }
        do {
          uVar57 = _powf();
          *(void*)(lVar33 + uVar47 * 4) = uVar57;
          uVar47 = uVar47 + 1;
        } while (uVar29 != uVar47);
      }
LAB_0148e03b:
      *(float *)(lVar33 + uVar39 * 4) =
           (*(float *)(lVar33 + -4 + uVar39 * 4) + *(float *)(lVar33 + 4 + uVar39 * 4)) *
           g_0239011c;
      iVar28 = iVar55 + 3;
      if (-1 < iVar55) {
        iVar28 = iVar55;
      }
      fVar53 = (float)(iVar28 >> 2);
      uVar39 = local_d8;
      lVar54 = local_1b8;
      if ((int)fVar53 < (int)local_d8) {
        fVar74 = (float)(iVar55 - (int)fVar53);
        local_288 = ZEXT416((uint)fVar74);
        uVar52 = (uint64_t)(int)fVar53;
        uVar39 = local_d8 - uVar52;
        if (3 < uVar39) {
          local_278 = uVar39 & 0xfffffffffffffffc;
          uVar47 = local_278 + uVar52;
          fStack_294 = 0.0;
          local_1b8._0_4_ = g_0238fcc0 + (int)fVar53;
          local_1b8._4_4_ = _UNK_0238fcc4 + (int)fVar53;
          iVar28 = _UNK_0238fcc8 + (int)fVar53;
          iVar68 = _UNK_0238fccc + (int)fVar53;
          uVar49 = 0;
          local_298 = fVar53;
          local_268 = fVar53;
          fStack_264 = fVar53;
          fStack_260 = fVar53;
          fStack_25c = fVar53;
          local_258 = fVar74;
          fStack_254 = fVar74;
          fStack_250 = fVar74;
          fStack_24c = fVar74;
          local_1c0 = uVar39;
          do {
            auVar63._0_4_ = (float)((int)local_1b8 - (int)local_268);
            auVar63._4_4_ = (float)(local_1b8._4_4_ - (int)fStack_264);
            auVar63._8_4_ = (float)(iVar28 - (int)fStack_260);
            auVar63._12_4_ = (float)(iVar68 - (int)fStack_25c);
            auVar26._4_4_ = fStack_254;
            auVar26._0_4_ = local_258;
            auVar26._8_4_ = fStack_250;
            auVar26._12_4_ = fStack_24c;
            divps(auVar63,auVar26);
            iStack_1b0 = iVar28;
            iStack_1ac = iVar68;
            local_68._0_8_ = _powf();
            local_68._8_8_ = extraout_XMM0_Qb_02;
            auVar64._0_8_ = _powf();
            auVar64._8_8_ = extraout_XMM0_Qb_03;
            auVar77 = insertps(local_68,auVar64,0x10);
            auVar65._0_8_ = _powf();
            auVar65._8_8_ = extraout_XMM0_Qb_04;
            auVar77 = insertps(auVar77,auVar65,0x20);
            auVar66._0_8_ = _powf();
            lVar54 = CONCAT44(local_1b8._4_4_,(int)local_1b8);
            auVar66._8_8_ = extraout_XMM0_Qb_05;
            auVar77 = insertps(auVar77,auVar66,0x30);
            *(uint8_t (*) [16])(lVar33 + uVar52 * 4 + uVar49 * 4) = auVar77;
            uVar49 = uVar49 + 4;
            local_1b8._0_4_ = (int)local_1b8 + g_02394180;
            local_1b8._4_4_ = local_1b8._4_4_ + _UNK_02394184;
            iVar28 = iStack_1b0 + _UNK_02394188;
            iVar68 = iStack_1ac + _UNK_0239418c;
          } while (local_278 != uVar49);
          uVar52 = uVar47;
          uVar39 = local_d8;
          fVar53 = local_298;
          local_1b8 = lVar54;
          if (local_1c0 == local_278) goto LAB_0148e2a0;
        }
        uVar39 = local_d8;
        do {
          fVar74 = g_02390124 - (float)((int)uVar52 - (int)fVar53) / local_288._0_4_;
          uVar57 = _powf(*(void*)(lVar33 + uVar52 * 4),fVar74 * fVar74);
          *(void*)(lVar33 + uVar52 * 4) = uVar57;
          uVar52 = uVar52 + 1;
          lVar54 = local_1b8;
        } while (uVar39 != uVar52);
      }
LAB_0148e2a0:
      lVar33 = *(int64_t *)(this_ptr + 0x160);
      local_1b8 = lVar54;
      if (0 < *(int *)(lVar33 + 0xc)) {
        if ((int)uVar39 < 2) {
          lVar54 = 0;
          do {
            lVar33 = *(int64_t *)(*(int64_t *)(lVar33 + 0x10) + lVar54 * 8);
            if (lVar33 != 0) {
              FUN_00d50b00();
            }
            FUN_015c6b60();
            if (lVar33 != 0) {
              FUN_00d50b20();
            }
            lVar54 = lVar54 + 1;
            lVar33 = *(int64_t *)(this_ptr + 0x160);
          } while (lVar54 < *(int *)(lVar33 + 0xc));
        }
        else {
          uVar39 = uVar5 - 1;
          if (uVar39 < 8) {
            uVar52 = (uint64_t)((uint)uVar39 & 3);
            lVar54 = 0;
            do {
              lVar33 = *(int64_t *)(*(int64_t *)(lVar33 + 0x10) + lVar54 * 8);
              if (lVar33 != 0) {
                FUN_00d50b00();
              }
              lVar43 = FUN_015c6b60();
              lVar32 = *(int64_t *)(lVar50 + 0x10);
              lVar42 = 1;
              if (2 < uVar5 - 2) {
                uVar47 = 0;
                do {
                  uVar49 = uVar47;
                  *(float *)(lVar43 + 4 + uVar49 * 4) =
                       *(float *)(lVar32 + 4 + uVar49 * 4) * *(float *)(lVar43 + 4 + uVar49 * 4);
                  *(float *)(lVar43 + 8 + uVar49 * 4) =
                       *(float *)(lVar32 + 8 + uVar49 * 4) * *(float *)(lVar43 + 8 + uVar49 * 4);
                  *(float *)(lVar43 + 0xc + uVar49 * 4) =
                       *(float *)(lVar32 + 0xc + uVar49 * 4) * *(float *)(lVar43 + 0xc + uVar49 * 4)
                  ;
                  *(float *)(lVar43 + 0x10 + uVar49 * 4) =
                       *(float *)(lVar32 + 0x10 + uVar49 * 4) *
                       *(float *)(lVar43 + 0x10 + uVar49 * 4);
                  uVar47 = uVar49 + 4;
                } while ((uVar39 & 0xfffffffffffffffc) != uVar49 + 4);
                lVar42 = uVar49 + 5;
              }
              if (uVar52 != 0) {
                lVar43 = lVar43 + lVar42 * 4;
                uVar47 = 0;
                do {
                  *(float *)(lVar43 + uVar47 * 4) =
                       *(float *)(lVar32 + lVar42 * 4 + uVar47 * 4) *
                       *(float *)(lVar43 + uVar47 * 4);
                  uVar47 = uVar47 + 1;
                } while (uVar52 != uVar47);
              }
              if (lVar33 != 0) {
                FUN_00d50b20();
              }
              lVar54 = lVar54 + 1;
              lVar33 = *(int64_t *)(this_ptr + 0x160);
            } while (lVar54 < *(int *)(lVar33 + 0xc));
          }
          else {
            uVar52 = uVar39 & 0xfffffffffffffff8;
            if (uVar39 == uVar52) {
              uVar49 = (uVar52 - 8 >> 3) + 1;
              uVar48 = (uint64_t)((uint)uVar39 & 3);
              local_1b8 = -(uVar49 & 0xfffffffffffffffe);
              lVar54 = 0;
              uVar47 = uVar49;
              do {
                lVar33 = *(int64_t *)(*(int64_t *)(lVar33 + 0x10) + lVar54 * 8);
                if (lVar33 != 0) {
                  FUN_00d50b00(uVar47);
                }
                lVar43 = FUN_015c6b60();
                lVar32 = *(int64_t *)(lVar50 + 0x10);
                if ((lVar43 + 4U < lVar32 + uVar5 * 4) && (lVar32 + 4U < lVar43 + uVar5 * 4)) {
                  lVar42 = 1;
                  if (2 < uVar5 - 2) {
                    uVar47 = 0;
                    do {
                      uVar44 = uVar47;
                      *(float *)(lVar43 + 4 + uVar44 * 4) =
                           *(float *)(lVar32 + 4 + uVar44 * 4) * *(float *)(lVar43 + 4 + uVar44 * 4)
                      ;
                      *(float *)(lVar43 + 8 + uVar44 * 4) =
                           *(float *)(lVar32 + 8 + uVar44 * 4) * *(float *)(lVar43 + 8 + uVar44 * 4)
                      ;
                      *(float *)(lVar43 + 0xc + uVar44 * 4) =
                           *(float *)(lVar32 + 0xc + uVar44 * 4) *
                           *(float *)(lVar43 + 0xc + uVar44 * 4);
                      *(float *)(lVar43 + 0x10 + uVar44 * 4) =
                           *(float *)(lVar32 + 0x10 + uVar44 * 4) *
                           *(float *)(lVar43 + 0x10 + uVar44 * 4);
                      uVar47 = uVar44 + 4;
                    } while ((uVar39 & 0xfffffffffffffffc) != uVar44 + 4);
                    lVar42 = uVar44 + 5;
                  }
                  if (uVar48 != 0) {
                    lVar43 = lVar43 + lVar42 * 4;
                    uVar47 = 0;
                    do {
                      *(float *)(lVar43 + uVar47 * 4) =
                           *(float *)(lVar32 + lVar42 * 4 + uVar47 * 4) *
                           *(float *)(lVar43 + uVar47 * 4);
                      uVar47 = uVar47 + 1;
                    } while (uVar48 != uVar47);
                  }
                }
                else {
                  if (uVar52 - 8 == 0) {
                    lVar42 = 0;
                  }
                  else {
                    lVar42 = 0;
                    lVar46 = local_1b8;
                    do {
                      pfVar1 = (float *)(lVar32 + 4 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      fVar7 = *pfVar2;
                      fVar4 = pfVar2[1];
                      fVar8 = pfVar2[2];
                      fVar9 = pfVar2[3];
                      pfVar2 = (float *)(lVar43 + 4 + lVar42 * 4);
                      fVar10 = pfVar2[1];
                      fVar75 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar3 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      fVar12 = *pfVar3;
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      fVar16 = *pfVar3;
                      fVar17 = pfVar3[1];
                      fVar18 = pfVar3[2];
                      fVar19 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 0x34 + lVar42 * 4);
                      fVar20 = *pfVar3;
                      fVar21 = pfVar3[1];
                      fVar22 = pfVar3[2];
                      fVar23 = pfVar3[3];
                      pfVar3 = (float *)(lVar43 + 4 + lVar42 * 4);
                      *pfVar3 = *pfVar2 * *pfVar1;
                      pfVar3[1] = fVar10 * fVar53;
                      pfVar3[2] = fVar75 * fVar74;
                      pfVar3[3] = fVar11 * fVar79;
                      pfVar1 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      *pfVar1 = fVar12 * fVar7;
                      pfVar1[1] = fVar13 * fVar4;
                      pfVar1[2] = fVar14 * fVar8;
                      pfVar1[3] = fVar15 * fVar9;
                      pfVar1 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar32 + 0x34 + lVar42 * 4);
                      auVar72._0_4_ = *pfVar2 * fVar20;
                      auVar72._4_4_ = pfVar2[1] * fVar21;
                      auVar72._8_4_ = pfVar2[2] * fVar22;
                      auVar72._12_4_ = pfVar2[3] * fVar23;
                      pfVar2 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      *pfVar2 = *pfVar1 * fVar16;
                      pfVar2[1] = fVar53 * fVar17;
                      pfVar2[2] = fVar74 * fVar18;
                      pfVar2[3] = fVar79 * fVar19;
                      *(uint8_t (*) [16])(lVar43 + 0x34 + lVar42 * 4) = auVar72;
                      lVar42 = lVar42 + 0x10;
                      lVar46 = lVar46 + 2;
                    } while (lVar46 != 0);
                    if ((uVar49 & 1) == 0) goto LAB_0148e644;
                  }
                  uVar47 = lVar42 << 2 | 4;
                  pfVar1 = (float *)(lVar32 + uVar47);
                  fVar53 = pfVar1[1];
                  fVar74 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  auVar77 = *(uint8_t (*) [16])(lVar32 + 0x10 + uVar47);
                  pfVar2 = (float *)(lVar43 + uVar47);
                  fVar7 = pfVar2[1];
                  fVar4 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar3 = (float *)(lVar43 + 0x10 + uVar47);
                  fVar9 = *pfVar3;
                  fVar10 = pfVar3[1];
                  fVar75 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  pfVar3 = (float *)(lVar43 + uVar47);
                  *pfVar3 = *pfVar2 * *pfVar1;
                  pfVar3[1] = fVar7 * fVar53;
                  pfVar3[2] = fVar4 * fVar74;
                  pfVar3[3] = fVar8 * fVar79;
                  pfVar1 = (float *)(lVar43 + 0x10 + uVar47);
                  *pfVar1 = fVar9 * auVar77._0_4_;
                  pfVar1[1] = fVar10 * auVar77._4_4_;
                  pfVar1[2] = fVar75 * auVar77._8_4_;
                  pfVar1[3] = fVar11 * auVar77._12_4_;
                }
LAB_0148e644:
                if (lVar33 != 0) {
                  FUN_00d50b20();
                }
                lVar54 = lVar54 + 1;
                lVar33 = *(int64_t *)(this_ptr + 0x160);
                uVar47 = (uint64_t)*(int *)(lVar33 + 0xc);
              } while (lVar54 < (int64_t)uVar47);
            }
            else {
              uVar47 = (uVar52 - 8 >> 3) + 1;
              lVar54 = 0;
              uVar39 = uVar47;
              do {
                lVar33 = *(int64_t *)(*(int64_t *)(lVar33 + 0x10) + lVar54 * 8);
                if (lVar33 != 0) {
                  FUN_00d50b00(uVar39);
                }
                lVar32 = FUN_015c6b60();
                lVar43 = *(int64_t *)(lVar50 + 0x10);
                if ((lVar43 + uVar5 * 4 <= lVar32 + 4U) ||
                   (uVar39 = 1, lVar32 + uVar5 * 4 <= lVar43 + 4U)) {
                  uVar39 = uVar52 + 1;
                  if (uVar52 - 8 == 0) {
                    lVar42 = 0;
                  }
                  else {
                    lVar42 = 0;
                    lVar46 = -(uVar47 & 0xfffffffffffffffe);
                    do {
                      pfVar1 = (float *)(lVar43 + 4 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar43 + 0x14 + lVar42 * 4);
                      fVar7 = *pfVar2;
                      fVar4 = pfVar2[1];
                      fVar8 = pfVar2[2];
                      fVar9 = pfVar2[3];
                      pfVar2 = (float *)(lVar32 + 4 + lVar42 * 4);
                      fVar10 = pfVar2[1];
                      fVar75 = pfVar2[2];
                      fVar11 = pfVar2[3];
                      pfVar3 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      fVar12 = *pfVar3;
                      fVar13 = pfVar3[1];
                      fVar14 = pfVar3[2];
                      fVar15 = pfVar3[3];
                      pfVar3 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      fVar16 = *pfVar3;
                      fVar17 = pfVar3[1];
                      fVar18 = pfVar3[2];
                      fVar19 = pfVar3[3];
                      pfVar3 = (float *)(lVar32 + 0x34 + lVar42 * 4);
                      fVar20 = *pfVar3;
                      fVar21 = pfVar3[1];
                      fVar22 = pfVar3[2];
                      fVar23 = pfVar3[3];
                      pfVar3 = (float *)(lVar32 + 4 + lVar42 * 4);
                      *pfVar3 = *pfVar2 * *pfVar1;
                      pfVar3[1] = fVar10 * fVar53;
                      pfVar3[2] = fVar75 * fVar74;
                      pfVar3[3] = fVar11 * fVar79;
                      pfVar1 = (float *)(lVar32 + 0x14 + lVar42 * 4);
                      *pfVar1 = fVar12 * fVar7;
                      pfVar1[1] = fVar13 * fVar4;
                      pfVar1[2] = fVar14 * fVar8;
                      pfVar1[3] = fVar15 * fVar9;
                      pfVar1 = (float *)(lVar43 + 0x24 + lVar42 * 4);
                      fVar53 = pfVar1[1];
                      fVar74 = pfVar1[2];
                      fVar79 = pfVar1[3];
                      pfVar2 = (float *)(lVar43 + 0x34 + lVar42 * 4);
                      auVar73._0_4_ = *pfVar2 * fVar20;
                      auVar73._4_4_ = pfVar2[1] * fVar21;
                      auVar73._8_4_ = pfVar2[2] * fVar22;
                      auVar73._12_4_ = pfVar2[3] * fVar23;
                      pfVar2 = (float *)(lVar32 + 0x24 + lVar42 * 4);
                      *pfVar2 = *pfVar1 * fVar16;
                      pfVar2[1] = fVar53 * fVar17;
                      pfVar2[2] = fVar74 * fVar18;
                      pfVar2[3] = fVar79 * fVar19;
                      *(uint8_t (*) [16])(lVar32 + 0x34 + lVar42 * 4) = auVar73;
                      lVar42 = lVar42 + 0x10;
                      lVar46 = lVar46 + 2;
                    } while (lVar46 != 0);
                    if ((uVar47 & 1) == 0) goto LAB_0148e7ac;
                  }
                  uVar49 = lVar42 << 2 | 4;
                  pfVar1 = (float *)(lVar43 + uVar49);
                  fVar53 = pfVar1[1];
                  fVar74 = pfVar1[2];
                  fVar79 = pfVar1[3];
                  auVar77 = *(uint8_t (*) [16])(lVar43 + 0x10 + uVar49);
                  pfVar2 = (float *)(lVar32 + uVar49);
                  fVar7 = pfVar2[1];
                  fVar4 = pfVar2[2];
                  fVar8 = pfVar2[3];
                  pfVar3 = (float *)(lVar32 + 0x10 + uVar49);
                  fVar9 = *pfVar3;
                  fVar10 = pfVar3[1];
                  fVar75 = pfVar3[2];
                  fVar11 = pfVar3[3];
                  pfVar3 = (float *)(lVar32 + uVar49);
                  *pfVar3 = *pfVar2 * *pfVar1;
                  pfVar3[1] = fVar7 * fVar53;
                  pfVar3[2] = fVar4 * fVar74;
                  pfVar3[3] = fVar8 * fVar79;
                  pfVar1 = (float *)(lVar32 + 0x10 + uVar49);
                  *pfVar1 = fVar9 * auVar77._0_4_;
                  pfVar1[1] = fVar10 * auVar77._4_4_;
                  pfVar1[2] = fVar75 * auVar77._8_4_;
                  pfVar1[3] = fVar11 * auVar77._12_4_;
                }
LAB_0148e7ac:
                uVar29 = iVar55 - (int)uVar39;
                uVar49 = ~uVar39;
                uVar48 = (uint64_t)uVar29 & 3;
                if ((uVar29 & 3) != 0) {
                  do {
                    *(float *)(lVar32 + uVar39 * 4) =
                         *(float *)(lVar43 + uVar39 * 4) * *(float *)(lVar32 + uVar39 * 4);
                    uVar39 = uVar39 + 1;
                    uVar48 = uVar48 - 1;
                  } while (uVar48 != 0);
                }
                if (2 < uVar49 + uVar5) {
                  do {
                    *(float *)(lVar32 + uVar39 * 4) =
                         *(float *)(lVar43 + uVar39 * 4) * *(float *)(lVar32 + uVar39 * 4);
                    *(float *)(lVar32 + 4 + uVar39 * 4) =
                         *(float *)(lVar43 + 4 + uVar39 * 4) * *(float *)(lVar32 + 4 + uVar39 * 4);
                    *(float *)(lVar32 + 8 + uVar39 * 4) =
                         *(float *)(lVar43 + 8 + uVar39 * 4) * *(float *)(lVar32 + 8 + uVar39 * 4);
                    *(float *)(lVar32 + 0xc + uVar39 * 4) =
                         *(float *)(lVar43 + 0xc + uVar39 * 4) *
                         *(float *)(lVar32 + 0xc + uVar39 * 4);
                    uVar39 = uVar39 + 4;
                  } while (uVar5 != uVar39);
                }
                if (lVar33 != 0) {
                  FUN_00d50b20();
                }
                lVar54 = lVar54 + 1;
                lVar33 = *(int64_t *)(this_ptr + 0x160);
                uVar39 = (uint64_t)*(int *)(lVar33 + 0xc);
              } while (lVar54 < (int64_t)uVar39);
            }
          }
        }
      }
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
      if (lVar45 != 0) {
        FUN_00d50b20();
      }
      if (lVar31 != 0) {
        FUN_00d50b20();
      }
    }
LAB_0148e896:
    if (*(int64_t *)(this_ptr + 0x248) != 0) {
      FUN_00e83070();
      *(void*)(this_ptr + 0x248) = 0;
    }
    if (*(int64_t *)(this_ptr + 0x250) != 0) {
      FUN_00e83070();
      *(void*)(this_ptr + 0x250) = 0;
    }
  }
  if (*(int64_t *)(this_ptr + 0x248) == 0) {
    uVar34 = FUN_00e83010();
    *(void*)(this_ptr + 0x248) = uVar34;
    local_2b0 = FUN_00e83010();
    *(void*)(this_ptr + 0x250) = local_2b0;
    lVar31 = *(int64_t *)(this_ptr + 0x160);
    if (lVar31 != 0) {
      FUN_00d50b00();
      local_2b0 = *(void*)(this_ptr + 0x250);
    }
    local_2c8 = 1;
    local_2b8 = *(void*)(this_ptr + 0x248);
    local_2d0 = lVar31;
    FUN_014b25b0(local_2a8,&local_2b0,uVar5);
    if (lVar31 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c8e690();
  lVar31 = local_48;
  if ((local_40 == '\0') && (local_48 != 0)) {
    FUN_00d50b00();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00c92170();
  FUN_00c92160();
  ___bzero();
  local_80 = (uint)in_RDX;
  if ((int)local_80 < 1) goto LAB_0148eb12;
  uVar39 = *(uint64_t *)(this_ptr + 0x250);
  uVar5 = *(uint64_t *)(lVar31 + 0x10);
  uVar52 = (uint64_t)in_RDX & 0xffffffff;
  if ((local_80 < 4) || ((uVar5 < uVar39 + uVar52 * 4 && (uVar39 < uVar5 + uVar52 * 4)))) {
    uVar47 = 0;
  }
  else {
    uVar47 = (uint64_t)(local_80 & 0xfffffffc);
    auVar67._0_8_ = CONCAT44(local_248._0_4_,local_248._0_4_);
    auVar67._8_4_ = local_248._0_4_;
    auVar67._12_4_ = local_248._0_4_;
    uVar49 = (uVar47 - 4 >> 2) + 1;
    if (uVar47 - 4 == 0) {
      lVar45 = 0;
LAB_0148eafe:
      auVar77 = divps(auVar67,*(uint8_t (*) [16])(uVar39 + lVar45 * 4));
      *(uint8_t (*) [16])(uVar5 + lVar45 * 4) = auVar77;
    }
    else {
      lVar50 = -(uVar49 & 0xfffffffffffffffe);
      lVar45 = 0;
      do {
        auVar76._8_4_ = local_248._0_4_;
        auVar76._0_8_ = auVar67._0_8_;
        auVar76._12_4_ = local_248._0_4_;
        auVar77 = divps(auVar76,*(uint8_t (*) [16])(uVar39 + lVar45 * 4));
        *(uint8_t (*) [16])(uVar5 + lVar45 * 4) = auVar77;
        auVar78._8_4_ = local_248._0_4_;
        auVar78._0_8_ = auVar67._0_8_;
        auVar78._12_4_ = local_248._0_4_;
        auVar77 = divps(auVar78,*(uint8_t (*) [16])(uVar39 + 0x10 + lVar45 * 4));
        *(uint8_t (*) [16])(uVar5 + 0x10 + lVar45 * 4) = auVar77;
        lVar45 = lVar45 + 8;
        lVar50 = lVar50 + 2;
      } while (lVar50 != 0);
      if ((uVar49 & 1) != 0) goto LAB_0148eafe;
    }
    if (uVar47 == uVar52) goto LAB_0148eb12;
  }
  uVar49 = ~uVar47;
  if (((uint64_t)in_RDX & 1) != 0) {
    *(float *)(uVar5 + uVar47 * 4) = (float)local_248._0_4_ / *(float *)(uVar39 + uVar47 * 4);
    uVar47 = uVar47 | 1;
  }
  if (uVar49 + uVar52 != 0) {
    do {
      *(float *)(uVar5 + uVar47 * 4) = (float)local_248._0_4_ / *(float *)(uVar39 + uVar47 * 4);
      *(float *)(uVar5 + 4 + uVar47 * 4) =
           (float)local_248._0_4_ / *(float *)(uVar39 + 4 + uVar47 * 4);
      uVar47 = uVar47 + 2;
    } while (uVar52 != uVar47);
  }
LAB_0148eb12:
  if ((((*(int64_t *)(this_ptr + 0x1e0) == 0) || (*(int64_t *)(this_ptr + 0x1e8) == 0)) ||
      (*(int64_t *)(this_ptr + 0x1f0) == 0)) ||
     ((*(int64_t *)(this_ptr + 0x1f8) == 0 ||
      (*(int64_t *)(this_ptr + 0x200) == 0 || local_49 != '\0')))) {
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(int64_t *)(this_ptr + 0x1e0);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(int64_t *)(this_ptr + 0x1e0) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(int64_t *)(this_ptr + 0x1e8);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(int64_t *)(this_ptr + 0x1e8) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(int64_t *)(this_ptr + 0x1f0);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(int64_t *)(this_ptr + 0x1f0) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(int64_t *)(this_ptr + 0x1f8);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(int64_t *)(this_ptr + 0x1f8) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00c8e690();
    lVar45 = local_48;
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00c92170();
    FUN_00c92160();
    ___bzero();
    lVar50 = *(int64_t *)(this_ptr + 0x200);
    if (lVar50 == lVar45) {
      FUN_00d50b20();
    }
    else {
      *(int64_t *)(this_ptr + 0x200) = lVar45;
      if (lVar50 != 0) {
        FUN_00d50b20();
      }
    }
    uVar57 = 1;
    lVar45 = *(int64_t *)(this_ptr + 0x268);
  }
  else {
    uVar57 = 0;
    lVar45 = *(int64_t *)(this_ptr + 0x268);
  }
  if (lVar45 == 0) {
    puVar37 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar37 = &g_02572358;
    (*g_02572370)();
    puVar36 = *(void**)(this_ptr + 0x268);
    if (puVar36 == puVar37) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x268) = puVar37;
      if (puVar36 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x270) == 0) {
    puVar37 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar37 = &g_02572358;
    (*g_02572370)();
    puVar36 = *(void**)(this_ptr + 0x270);
    if (puVar36 == puVar37) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x270) = puVar37;
      if (puVar36 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0x278) == 0) {
    puVar37 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar37 = &g_02572358;
    (*g_02572370)();
    puVar36 = *(void**)(this_ptr + 0x278);
    if (puVar36 == puVar37) {
      FUN_00d50b20();
    }
    else {
      *(void**)(this_ptr + 0x278) = puVar37;
      if (puVar36 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d216c0();
  FUN_00d216c0();
  FUN_00d216c0();
  plVar35 = (int64_t *)FUN_011e67a0();
  (**(code **)(*plVar35 + 0x18))();
  lVar45 = *(int64_t *)(this_ptr + 0x208);
  *(int64_t **)(this_ptr + 0x208) = plVar35;
  if (lVar45 != 0) {
    FUN_00d50b20();
  }
  puVar36 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar36 = &g_02572358;
  (*g_02572370)();
  lVar45 = *(int64_t *)(this_ptr + 0x210);
  *(void**)(this_ptr + 0x210) = puVar36;
  if (lVar45 != 0) {
    FUN_00d50b20();
  }
  local_220 = local_70;
  local_218 = '\0';
  local_210 = local_a8;
  local_208 = '\0';
  local_200 = *arg1;
  local_1f8 = '\0';
  local_1f0 = lVar31;
  local_1e8 = '\0';
  local_1a0 = 0;
  lVar45 = *(int64_t *)(this_ptr + 0x1e0);
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_1a0 = '\x01';
  local_190 = 0;
  lVar50 = *(int64_t *)(this_ptr + 0x1e8);
  local_1a8 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_190 = '\x01';
  local_180 = 0;
  lVar45 = *(int64_t *)(this_ptr + 0x1f0);
  local_198 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_180 = '\x01';
  local_170 = 0;
  lVar50 = *(int64_t *)(this_ptr + 0x1f8);
  local_188 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_170 = '\x01';
  local_160 = 0;
  lVar45 = *(int64_t *)(this_ptr + 0x200);
  local_178 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_160 = '\x01';
  local_150 = 0;
  lVar50 = *(int64_t *)(this_ptr + 0x208);
  local_168 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_150 = '\x01';
  local_140 = 0;
  lVar45 = *(int64_t *)(this_ptr + 0x68);
  local_158 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_140 = '\x01';
  uVar34 = *(void*)(this_ptr + 0x250);
  local_1d8 = '\0';
  local_1e0 = 0;
  local_130 = 0;
  lVar50 = *(int64_t *)(this_ptr + 0x188);
  local_148 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_130 = '\x01';
  local_120 = 0;
  lVar45 = *(int64_t *)(this_ptr + 0x170);
  local_138 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_120 = '\x01';
  local_110 = 0;
  lVar50 = *(int64_t *)(this_ptr + 0x210);
  local_128 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_110 = '\x01';
  local_100 = 0;
  lVar45 = *(int64_t *)(this_ptr + 0x268);
  local_118 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_100 = '\x01';
  local_f0 = 0;
  lVar50 = *(int64_t *)(this_ptr + 0x270);
  local_108 = lVar45;
  if (lVar50 != 0) {
    FUN_00d50b00();
  }
  local_f0 = '\x01';
  local_e0 = 0;
  lVar45 = *(int64_t *)(this_ptr + 0x278);
  local_f8 = lVar50;
  if (lVar45 != 0) {
    FUN_00d50b00();
  }
  local_e0 = '\x01';
  local_e8 = lVar45;
  FUN_01606530(&local_200,in_RDX,&local_1f0,local_1d0,&local_158,&local_148,uVar34,0,local_res20,
               param_5,uVar57,local_res10,local_res18,&local_1e0,&local_138,&local_128,&local_118,
               &local_108,&local_f8,&local_e8,param_6);
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != 0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != 0)) {
    FUN_00d50b20();
  }
  if ((local_150 != '\0') && (local_158 != 0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != 0)) {
    FUN_00d50b20();
  }
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_180 != '\0') && (local_188 != 0)) {
    FUN_00d50b20();
  }
  if ((local_190 != '\0') && (local_198 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a0 != '\0') && (local_1a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_218 != '\0') && (local_220 != (void *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar31 != 0) {
    FUN_00d50b20();
  }
  if (((char)local_d0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 != (void *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00518a80
// ============================================================
// Function: FUN_00518a80
// Address: 00518a80
// Size: 3543 bytes
// Class: MDPluginDocument

void FUN_00518a80(void)

{
  void*puVar1;
  char cVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void *pvVar5;
  void*puVar6;
  char *pcVar7;
  int64_t lVar8;
  void* pVar9;
  byte bVar11;
  int iVar12;
  int64_t this_ptr;
  void*puVar13;
  double dVar14;
  uint64_t uVar15;
  void*local_148;
  char local_140;
  void*local_138;
  char local_130;
  void*local_128;
  char local_120;
  void*local_118;
  char local_110;
  void*local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  char local_e8;
  undefined7 uStack_e7;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void*local_98;
  uint64_t local_90;
  int64_t *local_88;
  void*local_80;
  void*local_78;
  void*local_70;
  char local_68 [8];
  void*local_60;
  uint64_t local_58;
  int local_50;
  int64_t local_48;
  char local_40 [16];
  int64_t lVar10;
  
  if (*(char *)(this_ptr + 0x35a) == '\0') {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x108) == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x110) == 0) {
    return;
  }
  FUN_0078b9c0();
  puVar13 = local_70;
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar13 == (void*)0x0) {
    return;
  }
  FUN_0078b9c0();
  iVar12 = *(int *)((int64_t)local_70 + 0xc);
  if (local_68[0] != '\0') {
    FUN_00d50b20();
  }
  lVar8 = g_026f6fd0;
  if (iVar12 == 0) {
    return;
  }
  if (g_026f6fd0 != 0) {
    FUN_00d50b00();
  }
  dVar14 = (double)FUN_00e7d6f0();
  uVar3 = (uint64_t)(dVar14 * g_023907c0);
  uVar3 = (int64_t)(dVar14 * g_023907c0 - g_023907c8) & (int64_t)uVar3 >> 0x3f | uVar3;
  FUN_0071a120();
  if ((((local_68[0] == '\0') && (local_70 != (void*)0x0)) &&
      (FUN_00d50b00(), local_68[0] != '\0')) && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  bVar11 = (char)uVar3 + (char)(uVar3 / 3) * -3;
  local_48 = lVar8;
  local_40[0] = '\0';
  FUN_000175c0();
  puVar13 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (puVar13 != (void*)0x0) {
    local_68[0] = '\0';
    local_70 = puVar13;
    bVar11 = FUN_00c70bc0();
    if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if ((puVar13 != (void*)0x0 & bVar11) == 0) {
    lVar10 = *(int64_t *)(this_ptr + 0x308);
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (lVar10 != 0) goto LAB_00518c7c;
    FUN_0051be00();
    local_78 = local_70;
    if (local_70 == (void*)0x0) {
      local_78 = (void*)0x0;
      local_90 = 0;
    }
    else {
      local_90 = CONCAT71((int7)((uint64_t)local_70 >> 8),1);
      if (((local_68[0] == '\0') && (FUN_00d50b00(), local_68[0] != '\0')) &&
         (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
LAB_00518c7c:
    local_90 = 0;
    local_78 = (void*)0x0;
  }
  FUN_0051ba20();
  lVar8 = local_48;
  FUN_004405c0();
  puVar13 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_40[0] != '\0') && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  local_80 = puVar13;
  FUN_004b8a30();
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  local_88 = plVar4;
  FUN_0078b9c0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00518d69;
    }
  }
  else if (local_70 != (void*)0x0) {
LAB_00518d69:
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_98 = puVar1;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      lVar10 = local_60[2];
      local_70 = *(void**)(lVar10 + 8 + lVar8 * 8);
      FUN_004f9670();
      lVar8 = local_48;
      pVar9 = (void*)lVar10;
      if (local_40[0] == '\0') {
        if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar15 = FUN_004fae50();
      lVar10 = local_48;
      local_d0 = 0;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          uVar15 = FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      local_d0 = '\x01';
      local_d8 = lVar10;
      FUN_0053ac50(uVar15,&local_d8);
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_000be170();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  FUN_004b5af0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0051901f;
    }
  }
  else if (local_70 != (void*)0x0) {
LAB_0051901f:
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_70 = *(void**)(local_60[2] + 8 + lVar8 * 8);
      FUN_003b7950();
      lVar8 = local_48;
      if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40[0] != '\0')) &&
         (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_40[0] = '\0';
      local_48 = lVar8;
      cVar2 = FUN_00ca18c0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        local_40[0] = '\0';
        local_48 = lVar8;
        FUN_00d21140();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40[0] = '\0';
        local_48 = lVar8;
        FUN_00ca13a0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar8 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  FUN_00c9fe20();
  puVar1 = local_70;
  plVar4 = (int64_t *)local_68;
  if (local_68[0] == '\0') {
    plVar4 = &local_48;
  }
  local_48 = CONCAT71(local_48._1_7_,local_68[0]);
  *(char *)plVar4 = '\0';
  if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_48 == '\0') {
    if (puVar1 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_005191ee;
    }
  }
  else if (puVar1 != (void*)0x0) {
LAB_005191ee:
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_98 = puVar1;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_70 = *(void**)(local_60[2] + 8 + lVar8 * 8);
      if (*(int *)((int64_t)puVar6 + 0xc) < 1) {
        local_130 = '\0';
        local_138 = local_70;
        FUN_0053ad00(local_60[2],&local_138);
        local_b0 = 0;
        lVar8 = CONCAT71(uStack_e7,local_e8);
        if (local_e0 == '\0') {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e0 = '\0';
        }
        local_b0 = '\x01';
        local_b8 = lVar8;
        FUN_003b6860();
        lVar8 = local_48;
        local_c0 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_c0 = '\x01';
        local_c8 = lVar8;
        FUN_004b7a60();
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_e0 != '\0') && (CONCAT71(uStack_e7,local_e8) != 0)) {
          FUN_00d50b20();
        }
        if ((local_130 != '\0') && (local_138 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        uVar15 = FUN_00d23310();
        lVar8 = local_48;
        local_e8 = local_40[0];
        pcVar7 = local_40;
        if (local_40[0] == '\0') {
          pcVar7 = &local_e8;
        }
        *pcVar7 = '\0';
        if ((local_40[0] != '\0') && (lVar8 != 0)) {
          uVar15 = FUN_00d50b20();
        }
        local_f0 = 0;
        if ((local_e8 == '\0') && (lVar8 != 0)) {
          uVar15 = FUN_00d50b00();
        }
        local_f8 = lVar8;
        local_f0 = '\x01';
        local_148 = local_70;
        local_140 = '\0';
        FUN_004b8670(uVar15,&local_148);
        if ((local_140 != '\0') && (local_148 != (void*)0x0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
      }
    }
    FUN_00018280();
    FUN_00d50b20();
    puVar13 = local_80;
  }
  if (puVar6 != (void*)0x0) {
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    local_60 = puVar6;
    while( true ) {
      if (local_58._4_4_ != 0) {
        if (local_58._4_4_ < 1) {
          iVar12 = -local_58._4_4_;
        }
        else {
          iVar12 = (int)local_58 - local_58._4_4_;
          local_58 = CONCAT44(local_58._4_4_,iVar12);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_128 = *(void**)(local_60[2] + 8 + lVar8 * 8);
      local_120 = '\0';
      local_70 = local_128;
      uVar15 = FUN_004b5c00(local_60[2],&local_128);
      lVar8 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        uVar15 = FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != (void*)0x0)) {
        uVar15 = FUN_00d50b20();
      }
      puVar13 = local_80;
      if (lVar8 != 0) {
        local_118 = local_70;
        local_110 = '\0';
        FUN_004b5c00(uVar15,&local_118);
        lVar8 = local_48;
        local_a0 = 0;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        local_a0 = '\x01';
        local_a8 = lVar8;
        FUN_004b8440();
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_110 != '\0') && (local_118 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00018280();
  }
  if (local_78 == (void*)0x0) goto LAB_00519870;
  local_108 = local_78;
  local_100 = '\0';
  FUN_004b8020();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (((local_70 != (void*)0x0) && (FUN_00d50b00(), local_68[0] != '\0')) &&
       (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_68[0] = '\0';
  }
  if ((local_100 != '\0') && (local_108 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar1 == (void*)0x0) goto LAB_00519870;
  FUN_004b5af0();
  puVar1 = local_70;
  if (local_68[0] == '\0') {
    if (local_70 != (void*)0x0) {
      FUN_00d50b00();
      if ((local_68[0] != '\0') && (local_70 != (void*)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_005197d6;
    }
  }
  else if (local_70 != (void*)0x0) {
LAB_005197d6:
    local_68[0] = '\0';
    local_70 = (void*)0x0;
    local_60 = puVar1;
    local_58 = 0xffffffff;
    local_50 = 0;
    while( true ) {
      lVar8 = (int64_t)(int)local_58;
      iVar12 = (int)local_58 + 1;
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      if (*(int *)((int64_t)local_60 + 0xc) <= iVar12) break;
      local_70 = *(void**)(local_60[2] + 8 + lVar8 * 8);
      FUN_003b72f0();
      if (local_58._4_4_ != 0) {
        if (local_58 < 0) {
          iVar12 = -local_58._4_4_;
        }
        else {
          local_58 = CONCAT44(local_58._4_4_,(int)local_58 - local_58._4_4_);
          FUN_00d23690();
          local_50 = local_50 + local_58._4_4_;
          iVar12 = 0;
        }
        local_58 = CONCAT44(iVar12,(int)local_58);
      }
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_00519870:
  FUN_004b8a40();
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (puVar13 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_90 != '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00520990
// ============================================================
// Function: FUN_00520990
// Address: 00520990
// Size: 3560 bytes
// Class: MDPluginDocument

void FUN_00520990(uint64_t param_1,void* param_2)

{
  int64_t *plVar1;
  double dVar2;
  float fVar3;
  void* pVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  void *pvVar11;
  int64_t lVar12;
  uint64_t uVar13;
  void* pVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  char *pcVar17;
  int64_t lVar18;
  uint64_t uVar19;
  char unaff_SIL;
  uint64_t uVar20;
  int64_t *this_ptr;
  uint64_t uVar21;
  int64_t lVar22;
  uint32_t uVar23;
  uint32_t extraout_XMM0_Da;
  float fVar24;
  double dVar25;
  int64_t local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  double local_80;
  double local_78;
  void* local_5c;
  int64_t local_58;
  int64_t local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  FUN_00757c60();
  pvVar11 = _pthread_getspecific((void*)param_1);
  if (pvVar11 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  local_40 = local_50;
  if (local_48[0] == '\0') {
    if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_78 = (double)FUN_00b335d0();
  local_5c = param_2;
  FUN_00b31a00();
  lVar22 = local_50;
  uVar15 = CONCAT71((int7)((uint64_t)param_1 >> 8),local_48[0]);
  pcVar17 = local_38;
  if (local_48[0] != '\0') {
    pcVar17 = local_48;
  }
  local_38[0] = local_48[0];
  *pcVar17 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  pVar14 = (void*)uVar15;
  if (this_ptr[0x61] == 0) {
    uVar23 = FUN_0051b4f0();
    local_d0 = local_90;
    local_c8 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        uVar23 = FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    local_c8 = '\x01';
    FUN_012d2830(uVar23,&local_d0);
    lVar12 = local_50;
    if (local_48[0] == '\0') {
      if (((local_50 != 0) && (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48[0] = '\0';
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    pVar14 = (void*)uVar15;
    if (lVar12 != 0) {
      cVar5 = FUN_01311c10();
      cVar6 = *(char *)((int64_t)this_ptr + 0x24b);
      pVar14 = (void*)CONCAT71((int7)((uint64_t)uVar15 >> 8),cVar6);
      if (cVar5 == '\0') {
        if (cVar6 != '\0') {
          FUN_01311bf0();
          *(void*)((int64_t)this_ptr + 0x371) = 1;
          FUN_00521c10();
        }
      }
      else if (cVar6 == '\0') {
        FUN_01311bf0();
        *(void*)((int64_t)this_ptr + 0x371) = 0;
        FUN_00521cd0();
      }
      FUN_00d50b20();
    }
  }
  if (((int64_t *)this_ptr[0x4f] != (int64_t *)0x0) &&
     (cVar6 = (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x5e8))(), cVar6 != '\0')) {
    plVar1 = (int64_t *)this_ptr[0x4f];
    FUN_0141cb10();
    local_c0 = local_50;
    local_b8 = 0;
    if (local_48[0] == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48[0] = '\0';
    }
    local_b8 = '\x01';
    (**(code **)(*plVar1 + 0x690))();
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)this_ptr[0x1d] != (int64_t *)0x0) {
    cVar6 = (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x5e8))();
    if ((cVar6 == '\0') ||
       (cVar6 = (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x638))(), cVar6 != '\0')) {
      if (this_ptr[0x61] == 0) {
        if ((local_40 == 0) || (*(char *)((int64_t)this_ptr + 0x2e5) == '\0')) {
          lVar12 = FUN_00bc4780();
          local_78 = (double)lVar12 / local_78;
        }
        else {
          pvVar11 = _pthread_getspecific(pVar14);
          if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
            pVar14 = (void*)local_40;
          }
          FUN_00bc47a0();
          local_78 = (double)FUN_016c26c0();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141ccb0((int)g_0238fee8);
      }
      else {
        lVar12 = FUN_00bc4780();
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dd9d0();
        dVar25 = (double)lVar12 / local_78;
        dVar2 = (double)(int)local_5c / local_78;
        lVar18 = (int64_t)(int)local_5c;
        pVar14 = local_5c;
        local_78 = dVar25;
        FUN_00018a90(SUB84(dVar2 + dVar25,0));
        lVar12 = FUN_00bc4780();
        this_ptr[0x1f] = lVar12 + lVar18;
      }
      if ((char)this_ptr[0x6b] != '\0') {
        plVar1 = (int64_t *)this_ptr[0x1d];
        FUN_0141c350(SUB84(local_78,0));
        local_b0 = local_50;
        local_a8 = 0;
        if (local_48[0] == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48[0] = '\0';
        }
        local_a8 = '\x01';
        (**(code **)(*plVar1 + 0x690))();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      *(void*)(this_ptr + 0x14) = 1;
      this_ptr[0x16] = (int64_t)local_78;
    }
    else if (this_ptr[0x61] == 0) {
      if ((*(char *)((int64_t)this_ptr + 0x2e5) == '\0') || (local_40 == 0)) {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0141ccb0((int)g_0238fee8);
      }
      else {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_80 = (double)FUN_00bc48b0();
        pvVar11 = _pthread_getspecific(pVar14);
        if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
          pVar14 = (void*)local_40;
        }
        lVar12 = FUN_00bc4780();
        dVar2 = (double)FUN_016c9480(SUB84((double)lVar12 / local_78,0));
        FUN_0141ccb0(SUB84(local_80 / dVar2,0));
      }
    }
    else {
      local_80 = (double)FUN_00bc4780();
      lVar12 = this_ptr[0x1f];
      if (((int64_t)local_80 < lVar12 + -2) ||
         (iVar9 = (**(code **)(*this_ptr + 0x3a8))(), lVar12 + iVar9 < (int64_t)local_80)) {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar12 = this_ptr[0x1f];
        FUN_012dd9d0();
        local_d8 = (int64_t)(int)local_5c;
        FUN_00018a90(SUB84((double)(lVar12 + local_d8) / local_78,0));
        local_58 = lVar22;
        if ((char)this_ptr[0x6b] != '\0') {
          plVar1 = (int64_t *)this_ptr[0x1d];
          FUN_0141cb10();
          local_a0 = local_50;
          local_98 = 0;
          if (local_48[0] == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48[0] = '\0';
          }
          local_98 = '\x01';
          (**(code **)(*plVar1 + 0x690))();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48[0] != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        uVar7 = FUN_00b33130();
        uVar8 = FUN_00b33120();
        pVar4 = local_5c;
        if ((int)uVar7 < (int)uVar8) {
          uVar7 = uVar8;
        }
        uVar20 = 0x24;
        if ((int)uVar7 < 0x24) {
          uVar20 = (uint64_t)uVar7;
        }
        FUN_00516d30(extraout_XMM0_Da,uVar20);
        pVar14 = pVar4;
        (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x400))(pVar4,this_ptr + 0x23);
        lVar22 = local_58;
        fVar3 = g_02390124;
        if ((0 < (int)pVar4) && (0 < (int)uVar7)) {
          uVar16 = (uint64_t)local_5c;
          uVar13 = 1;
          if (1 < (int)uVar20) {
            uVar13 = uVar20;
          }
          uVar20 = (uint64_t)((uint)uVar13 & 3);
          uVar21 = 0;
          do {
            fVar24 = fVar3 - (float)(int)uVar21 / (float)(int)local_5c;
            uVar19 = 0;
            if (2 < uVar13 - 1) {
              do {
                *(float *)(this_ptr[uVar19 + 0x23] + uVar21 * 4) =
                     *(float *)(this_ptr[uVar19 + 0x23] + uVar21 * 4) * fVar24;
                *(float *)(this_ptr[uVar19 + 0x24] + uVar21 * 4) =
                     *(float *)(this_ptr[uVar19 + 0x24] + uVar21 * 4) * fVar24;
                *(float *)(this_ptr[uVar19 + 0x25] + uVar21 * 4) =
                     *(float *)(this_ptr[uVar19 + 0x25] + uVar21 * 4) * fVar24;
                uVar16 = this_ptr[uVar19 + 0x26];
                *(float *)(uVar16 + uVar21 * 4) = *(float *)(uVar16 + uVar21 * 4) * fVar24;
                uVar19 = uVar19 + 4;
              } while (((uint)uVar13 & 0x7ffffffc) != uVar19);
            }
            if (uVar20 != 0) {
              uVar16 = 0;
              do {
                lVar12 = (this_ptr + 0x23)[uVar19 + uVar16];
                *(float *)(lVar12 + uVar21 * 4) = *(float *)(lVar12 + uVar21 * 4) * fVar24;
                uVar16 = uVar16 + 1;
              } while (uVar20 != uVar16);
            }
            pVar14 = (void*)uVar16;
            uVar21 = uVar21 + 1;
          } while (uVar21 != local_5c);
        }
        dVar2 = (double)(int64_t)local_80 / local_78;
        FUN_0141c350();
        lVar12 = local_50;
        if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
           (local_50 != 0)) {
          FUN_00d50b20();
        }
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dd9d0();
        FUN_00018a90(SUB84((double)(int)local_5c / local_78 + dVar2,0));
        if ((char)this_ptr[0x6b] != '\0') {
          (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x690))();
        }
        if (lVar12 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar11 = _pthread_getspecific(pVar14);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012dd9d0();
        local_d8 = (int64_t)(int)local_5c;
        lVar12 = (int64_t)local_80 + local_d8;
        FUN_00018a90(SUB84((double)lVar12 / local_78,0));
        pVar14 = (void*)lVar12;
      }
      this_ptr[0x1f] = (int64_t)local_80 + local_d8;
    }
  }
  if (this_ptr[0x61] != 0) goto LAB_005210ea;
  if (unaff_SIL == '\0') {
    FUN_00521c10();
  }
  cVar6 = FUN_00bc47e0();
  if (cVar6 != '\0') {
    lVar12 = FUN_00bc48b0();
    this_ptr[0x59] = lVar12;
  }
  if (this_ptr[0x55] != 0) {
    FUN_00b335e0();
    FUN_01522590();
  }
  if ((local_40 == 0) || ((int)this_ptr[0x58] < 0)) goto LAB_005210ea;
  cVar6 = FUN_00bc47c0();
  if ((cVar6 != '\0') &&
     ((lVar12 = FUN_00bc4780(), 0 < lVar12 && (cVar6 = FUN_00bc47d0(), cVar6 != '\0')))) {
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    lVar12 = FUN_00bc4780();
    local_78 = (double)FUN_016c25f0(SUB84((double)lVar12 / (double)this_ptr[3],0));
    dVar2 = (double)FUN_00bc47a0();
    dVar25 = (double)FUN_01522510();
    pVar4 = 0;
    if (dVar25 < (double)((uint64_t)(local_78 - dVar2) & g_023908f0)) {
      iVar9 = local_5c + (int)this_ptr[0x58];
      *(int *)(this_ptr + 0x58) = iVar9;
      dVar2 = (double)FUN_00b335d0();
      iVar10 = FUN_00e7d850(SUB84(dVar2 * g_023b3498,0));
      pVar14 = 0xffffffff;
      pVar4 = 0xffffffff;
      if (iVar9 <= iVar10) goto LAB_005216af;
    }
    pVar14 = pVar4;
    *(void* *)(this_ptr + 0x58) = pVar14;
  }
LAB_005216af:
  pvVar11 = _pthread_getspecific(pVar14);
  if ((pvVar11 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
    pVar14 = (void*)local_40;
  }
  cVar6 = FUN_016c2730();
  if (cVar6 != '\0') {
    local_78 = (double)FUN_00bc48b0();
    pvVar11 = _pthread_getspecific(pVar14);
    if (pvVar11 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar23 = FUN_00e7bdb0();
    dVar2 = (double)FUN_016c9410(uVar23,0);
    if (g_02391030 <= (double)((uint64_t)(local_78 - dVar2) & g_023908f0)) {
      *(void*)(this_ptr + 0x58) = 0xffffffff;
    }
  }
LAB_005210ea:
  if ((local_38[0] != '\0') && (lVar22 != 0)) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0051a2b0
// ============================================================
// Function: FUN_0051a2b0
// Address: 0051a2b0
// Size: 2662 bytes
// Class: MDPluginDocument

void FUN_0051a2b0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  uint32_t uVar3;
  uint64_t uVar4;
  void *pvVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  uint64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint32_t local_44;
  int64_t *local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x110) == *arg1) {
    return;
  }
  local_44 = (uint32_t)CONCAT71((int7)((uint64_t)*(int64_t *)(this_ptr + 0x110) >> 8),1);
  if (*(int64_t **)(this_ptr + 0x108) == (int64_t *)0x0) {
LAB_0051a39e:
    local_50 = (int64_t *)0x0;
    local_60 = 0;
    if (*(int64_t *)(this_ptr + 0x110) == 0) goto LAB_0051a386;
LAB_0051a3b6:
    local_58 = (int64_t *)CONCAT44(local_58._4_4_,0xffffffff);
    if ((*(int64_t *)(this_ptr + 0x308) == 0) && (*(int64_t *)(this_ptr + 0x108) != 0)) {
      FUN_00757c60();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      FUN_0051b4f0();
      if (local_a8 == '\0') {
        if (local_b0 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_a8 = '\0';
      }
      local_40 = local_b0;
      local_38 = '\0';
      uVar3 = FUN_00d23d20();
      local_58 = (int64_t *)CONCAT44(local_58._4_4_,uVar3);
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_b0 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_128 != '\0') && (local_130 != 0)) {
        FUN_00d50b20();
      }
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      if ((local_108 != '\0') && (local_110 != 0)) {
        FUN_00d50b20();
      }
      lVar7 = *(int64_t *)(this_ptr + 0x110);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0015a600();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x300) != 0) {
      FUN_00d50b00();
      lVar7 = *(int64_t *)(this_ptr + 0x300);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_0063f230();
      plVar6 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar6 != (int64_t *)0x0) {
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0062a580();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0064e920();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if ((char)local_44 == '\0') {
      lVar7 = *(int64_t *)(this_ptr + 0x110);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*local_50 + 0x3a8))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00d50130();
    lVar8 = *(int64_t *)(this_ptr + 0x110);
    lVar7 = *arg1;
    if (lVar8 == lVar7) goto LAB_0051a5c2;
  }
  else {
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    local_50 = local_40;
    param_1 = 0;
    if (local_40 == (int64_t *)0x0) goto LAB_0051a39e;
    plVar6 = local_40;
    if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0))
    {
      FUN_00d50b20();
    }
    param_1 = (void*)plVar6;
    FUN_00cafd20();
    FUN_00cb1f10();
    uVar4 = FUN_00db3260();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar4 = FUN_00d50b20();
    }
    local_60 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
    local_44 = 0;
    if (*(int64_t *)(this_ptr + 0x110) != 0) goto LAB_0051a3b6;
LAB_0051a386:
    lVar8 = 0;
    local_58 = (int64_t *)CONCAT44(local_58._4_4_,0xffffffff);
    lVar7 = *arg1;
    if (lVar7 == 0) goto LAB_0051a5c2;
  }
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  *(int64_t *)(this_ptr + 0x110) = lVar7;
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
LAB_0051a5c2:
  if (*arg1 != 0) {
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = *(int64_t *)(this_ptr + 0x108);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_00788660();
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      cVar2 = FUN_00157780(&local_80,(uint64_t)local_58 & 0xffffffff);
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_00793130();
      }
      if (*(int64_t *)(this_ptr + 0x308) == 0) {
        *(void*)(this_ptr + 0x2c0) = 0;
      }
      else {
        *(void*)(this_ptr + 0x370) = 1;
      }
    }
    FUN_00518a80();
    if ((char)local_44 == '\0') {
      (**(code **)(*local_50 + 0x3a0))();
    }
    FUN_0051b640();
    plVar6 = local_40;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_0051ba20();
    plVar9 = local_40;
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    local_58 = plVar9;
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      FUN_006e32b0();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 == (int64_t *)0x0) {
        FUN_00752180();
        plVar1 = local_40;
        if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar2 = FUN_00108e10();
        if (cVar2 == '\0') {
          FUN_0010bc60();
          FUN_0010a4f0();
          FUN_0010bc70();
        }
        FUN_00108380();
        local_70 = local_40;
        local_68 = 0;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        local_68 = '\x01';
        FUN_006e32e0();
        if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (*(int64_t *)(this_ptr + 0x300) != 0) {
      FUN_00d50b00();
      lVar7 = *(int64_t *)(this_ptr + 0x300);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      FUN_0063f230();
      plVar1 = local_40;
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      plVar9 = local_58;
      if (plVar1 != (int64_t *)0x0) {
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0062a580();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_0064e920();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = *(int64_t *)(this_ptr + 0x300);
        if (lVar7 != 0) {
          FUN_00d50b00();
        }
        FUN_00631670();
        plVar1 = local_40;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        plVar9 = local_58;
        if (plVar1 != (int64_t *)0x0) {
          lVar7 = *(int64_t *)(this_ptr + 0x300);
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          FUN_00631670();
          FUN_006f63e0();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (plVar9 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar6 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((char)local_44 == '\0') {
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      FUN_00cb1f10();
      FUN_00db3760();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_50 + 0x3c8))();
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0051f6c0
// ============================================================
// Function: FUN_0051f6c0
// Address: 0051f6c0
// Size: 1861 bytes
// Class: MDPluginDocument

void FUN_0051f6c0(int64_t *param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *plVar3;
  uint8_t unaff_SIL;
  int64_t this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50;
  int64_t *local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  if (*(int64_t *)(this_ptr + 0xe8) == 0) {
    return;
  }
  FUN_012d2610();
  plVar3 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (int64_t *)0x0) {
    return;
  }
  if (*(int *)((int64_t)plVar3 + 0xc) == 0) goto LAB_0051fe1f;
  local_60 = plVar3;
  if (*(char *)(this_ptr + 0xa0) == '\0') {
    if ((*(double *)(this_ptr + 0xc0) != *(double *)(this_ptr + 0x260)) ||
       (NAN(*(double *)(this_ptr + 0xc0)) || NAN(*(double *)(this_ptr + 0x260))))
    goto LAB_0051f762;
LAB_0051f991:
    if ((*(double *)(this_ptr + 0xa8) != *(double *)(this_ptr + 0xb0)) ||
       (NAN(*(double *)(this_ptr + 0xa8)) || NAN(*(double *)(this_ptr + 0xb0))))
    goto LAB_0051f9ab;
  }
  else {
LAB_0051f762:
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    local_48 = plVar3;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    while( true ) {
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      lVar1 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar1 * 8);
      pvVar2 = _pthread_getspecific((void*)local_48[2]);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f0960(*(void*)(this_ptr + 0x260),unaff_SIL);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
    }
    param_1 = local_48;
    FUN_000be170();
    plVar3 = local_60;
    if (*(int64_t **)(this_ptr + 200) != (int64_t *)0x0) {
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = *(int64_t **)(this_ptr + 200);
      while( true ) {
        lVar1 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar1 * 8);
        FUN_0190a220();
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
      }
      param_1 = local_48;
      FUN_00540ac0();
    }
    local_58 = (int64_t *)0x0;
    local_50 = '\0';
    FUN_00d243f0();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0xc0) = *(void*)(this_ptr + 0x260);
    if (*(char *)(this_ptr + 0xa0) == '\0') goto LAB_0051f991;
LAB_0051f9ab:
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    local_48 = plVar3;
    while( true ) {
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          FUN_00d23690();
          local_38 = local_38 + iStack_3c;
          iStack_3c = 0;
        }
      }
      lVar1 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar1 * 8);
      pvVar2 = _pthread_getspecific((void*)local_48[2]);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f0960(*(void*)(this_ptr + 0xb0),unaff_SIL);
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
    }
    param_1 = local_48;
    FUN_000be170();
    plVar3 = local_60;
    if (*(int64_t **)(this_ptr + 0xb8) != (int64_t *)0x0) {
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = *(int64_t **)(this_ptr + 0xb8);
      while( true ) {
        lVar1 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)local_48 + 0xc) <= local_40) break;
        local_58 = *(int64_t **)(local_48[2] + 8 + lVar1 * 8);
        FUN_0190a220();
        if (iStack_3c != 0) {
          if (iStack_3c < 1) {
            iStack_3c = -iStack_3c;
          }
          else {
            local_40 = local_40 - iStack_3c;
            FUN_00d23690();
            local_38 = local_38 + iStack_3c;
            iStack_3c = 0;
          }
        }
      }
      param_1 = local_48;
      FUN_00540ac0();
    }
    local_58 = (int64_t *)0x0;
    local_50 = '\0';
    FUN_00d243f0();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0xa8) = *(void*)(this_ptr + 0xb0);
  }
  if ((*(char *)(this_ptr + 0x24f) == '\0') || (*(char *)(this_ptr + 0x24d) == '\0')) {
    plVar3 = *(int64_t **)(this_ptr + 0xd8);
    if (plVar3 != (int64_t *)0x0) {
      local_50 = '\0';
      local_58 = (int64_t *)0x0;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = plVar3;
      for (lVar1 = 0; local_40 = (int)lVar1, local_40 < *(int *)((int64_t)plVar3 + 0xc);
          lVar1 = lVar1 + 1) {
        local_58 = *(int64_t **)(plVar3[2] + lVar1 * 8);
        FUN_0190a220();
      }
      FUN_00540ac0();
    }
    FUN_00d216c0();
  }
  else {
    if (*(char *)(this_ptr + 0xa0) == '\0') {
      if ((*(double *)(this_ptr + 0xd0) == *(double *)(this_ptr + 0x250)) &&
         (!NAN(*(double *)(this_ptr + 0xd0)) && !NAN(*(double *)(this_ptr + 0x250))))
      goto LAB_0051fe17;
    }
    local_50 = 0;
    local_58 = (int64_t *)0x0;
    local_38 = 0;
    local_40 = 0;
    iStack_3c = 0;
    local_48 = plVar3;
    if (0 < *(int *)((int64_t)plVar3 + 0xc)) {
      lVar1 = 0;
      do {
        local_58 = *(int64_t **)(plVar3[2] + lVar1 * 8);
        pvVar2 = _pthread_getspecific((void*)param_1);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00521df0(*(void*)(this_ptr + 0x250));
        local_70 = 0;
        local_68 = '\0';
        param_1 = &local_70;
        FUN_012f0960(&local_70,unaff_SIL);
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        lVar1 = lVar1 + 1;
        local_40 = (int)lVar1;
        plVar3 = local_60;
      } while (local_40 < *(int *)((int64_t)local_60 + 0xc));
    }
    FUN_000be170();
    plVar3 = *(int64_t **)(this_ptr + 0xd8);
    if (plVar3 != (int64_t *)0x0) {
      local_50 = 0;
      local_58 = (int64_t *)0x0;
      iStack_3c = 0;
      local_38 = 0;
      local_48 = plVar3;
      for (lVar1 = 0; local_40 = (int)lVar1, local_40 < *(int *)((int64_t)plVar3 + 0xc);
          lVar1 = lVar1 + 1) {
        local_58 = *(int64_t **)(plVar3[2] + lVar1 * 8);
        FUN_0190a220();
      }
      FUN_00540ac0();
    }
    local_58 = (int64_t *)0x0;
    local_50 = '\0';
    FUN_00d243f0();
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0xd0) = *(void*)(this_ptr + 0x250);
  }
LAB_0051fe17:
  *(void*)(this_ptr + 0xa0) = 0;
LAB_0051fe1f:
  FUN_00d50b20();
  return;
}



// ============================================================
// 0051e7f0
// ============================================================
// Function: FUN_0051e7f0
// Address: 0051e7f0
// Size: 2478 bytes
// Class: MDPluginDocument

void FUN_0051e7f0(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  void*puVar8;
  void*puVar9;
  int64_t lVar10;
  int64_t *this_ptr;
  bool bVar11;
  double dVar12;
  uint64_t uVar13;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  plVar2 = local_58;
  FUN_00757c60();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (this_ptr[0x61] == 0) {
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cb110();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar3 = FUN_012e57e0();
    iVar4 = FUN_00b33590();
    bVar11 = true;
    if (iVar3 == iVar4) {
      FUN_0051b4f0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar3 = FUN_012e57e0();
      iVar4 = FUN_00b33590();
      bVar11 = iVar3 != iVar4;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar11) {
      (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
      FUN_00cbb780();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      FUN_0051b4f0();
      pvVar5 = _pthread_getspecific(param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00b33590();
      FUN_012e57a0();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*(int64_t *)this_ptr[0x21] + 0x498))();
      (**(code **)(*local_58 + 0x3c8))();
      if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  lVar10 = this_ptr[0x5d];
  if (lVar10 != 0) {
    local_50 = '\0';
    local_58 = (int64_t *)0x0;
    local_40 = -1;
    while( true ) {
      lVar6 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar10 + 0xc) <= local_40) break;
      local_58 = *(int64_t **)(*(int64_t *)(lVar10 + 0x10) + 8 + lVar6 * 8);
      FUN_00d50b00();
      (**(code **)(*local_58 + 0x3b8))();
      if (this_ptr != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      (**(code **)(*local_58 + 0x368))();
    }
    FUN_00540a20();
    param_1 = (void*)lVar10;
  }
  if (*(char *)((int64_t)this_ptr + 0x359) != '\0') {
    plVar7 = (int64_t *)FUN_00e8fc40();
    FUN_0038cc50();
    (**(code **)(*plVar7 + 0x18))();
    plVar1 = (int64_t *)this_ptr[0x4f];
    if (plVar1 == plVar7) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x4f] = (int64_t)plVar7;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    plVar1 = (int64_t *)this_ptr[0x4f];
    FUN_00d50b00();
    (**(code **)(*plVar1 + 0x3b8))();
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x418))();
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_002dca80();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_012dddb0();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    puVar8 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &g_025e1318;
    puVar8[7] = 0;
    puVar8[8] = 0;
    puVar8[9] = 0;
    puVar8[10] = 0;
    (*g_025e1330)();
    FUN_012d8bb0();
    if (puVar8 != (void*)0x0) {
      FUN_00d50b20();
    }
    FUN_012dc370();
    if (this_ptr[0x61] != 0) {
      FUN_012dbeb0();
      FUN_012dbec0();
    }
    (**(code **)(*(int64_t *)this_ptr[0x4f] + 0x368))();
  }
  if ((char)this_ptr[0x6b] == '\0') goto LAB_0051f0c6;
  plVar7 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar7 + 0x18))();
  plVar1 = (int64_t *)this_ptr[0x1d];
  if (plVar1 == plVar7) {
    FUN_00d50b20();
  }
  else {
    this_ptr[0x1d] = (int64_t)plVar7;
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar1 = (int64_t *)this_ptr[0x1d];
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0x3b8))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_012dc370();
  if (this_ptr[0x61] == 0) {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_025e1318;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    (*g_025e1330)();
    puVar8 = (void*)this_ptr[0x1e];
    if (puVar8 == puVar9) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x1e] = (int64_t)puVar9;
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_024c0af0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    (*g_024c0b08)();
    puVar8 = (void*)this_ptr[0x1e];
    if (puVar8 == puVar9) {
      FUN_00d50b20();
    }
    else {
      this_ptr[0x1e] = (int64_t)puVar9;
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
  }
  lVar10 = this_ptr[0x1e];
  if (lVar10 != 0) {
    FUN_00d50b00();
  }
  FUN_012d8bb0();
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  FUN_012dbeb0();
  FUN_012dbec0();
  FUN_0051da80();
  if (this_ptr[0x61] == 0) {
    if (this_ptr[0x20] == 0) {
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025c8348;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      *(void*)(puVar9 + 6) = 0;
      (*g_025c8360)();
      puVar8 = (void*)this_ptr[0x20];
      if (puVar8 == puVar9) {
        FUN_00d50b20();
      }
      else {
        this_ptr[0x20] = (int64_t)puVar9;
        if (puVar8 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00b33520();
    FUN_011edd90();
    dVar12 = (double)FUN_00b335d0();
    FUN_011edd50(dVar12 + dVar12);
    FUN_011edcc0();
    FUN_011edca0();
    lVar10 = this_ptr[0x20];
    if (lVar10 != 0) {
      FUN_00d50b00();
    }
    FUN_012ddb40();
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
    if (this_ptr[0x61] != 0) goto LAB_0051f0a1;
  }
  else {
LAB_0051f0a1:
    *(void*)(this_ptr + 0x14) = 1;
    FUN_0051f6c0();
  }
  (**(code **)(*(int64_t *)this_ptr[0x1d] + 0x368))();
LAB_0051f0c6:
  uVar13 = (**(code **)(*this_ptr + 0x3a8))();
  FUN_00516d30(uVar13,0x24);
  this_ptr[0x48] = 0;
  *(void*)(this_ptr + 0x49) = 0;
  if (this_ptr[0x61] == 0) {
    *(void*)((int64_t)this_ptr + 0x371) = 0;
  }
  *(void*)((int64_t)this_ptr + 0x24f) = 0;
  *(void*)(this_ptr + 0x54) = 1;
  FUN_00b341c0();
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00516170
// ============================================================
// Function: FUN_00516170
// Address: 00516170
// Size: 1891 bytes
// Class: MDPluginDocument

void FUN_00516170(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  bool bVar3;
  bool bVar4;
  void*puVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t this_ptr;
  bool bVar8;
  uint32_t uVar9;
  uint32_t uVar10;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_30;
  char local_28;
  
  FUN_00b31790();
  ___bzero();
  *(void*)(this_ptr + 0x2d1) = 0x101;
  *(void*)(this_ptr + 0x2e0) = 0;
  *(void*)(this_ptr + 0x2e4) = 0;
  if ((g_02809fb0 == (void*)0x0) || (g_02809fb9 == '\0')) {
    FUN_00e8cb50();
    if (g_02809fb0 == (void*)0x0) {
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &g_02576110;
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      *(void*)((int64_t)puVar5 + 0x14) = 0;
      *(void*)((int64_t)puVar5 + 0x1a) = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      (*g_02576128)();
      if (g_02809fc0 == puVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar8 = g_02809fc0 != (void*)0x0;
        g_02809fc0 = puVar5;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (g_02809fc8 == '\0') {
        g_02809fc8 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      FUN_00d48b20();
      lVar1 = g_0270b790;
      if (g_0270b790 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48c60();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48d00();
      FUN_00d48ac0();
      puVar5 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)((int64_t)puVar5 + 0xc) = 0;
      *(void*)((int64_t)puVar5 + 0x14) = 0;
      *(void*)((int64_t)puVar5 + 0x1a) = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      *puVar5 = &g_02568b20;
      *(void*)(puVar5 + 10) = 0;
      (*g_02568b38)();
      if (g_02809fb0 == puVar5) {
        bVar4 = false;
        bVar3 = false;
      }
      else {
        bVar4 = true;
        bVar3 = true;
        bVar8 = g_02809fb0 != (void*)0x0;
        g_02809fb0 = puVar5;
        if (bVar8) {
          FUN_00d50b20();
        }
      }
      if (g_02809fb8 == '\0') {
        g_02809fb8 = '\x01';
        FUN_00e8cb90();
        bVar3 = bVar4;
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      FUN_00d48ac0();
      lVar1 = g_0270b790;
      if (g_0270b790 != 0) {
        FUN_00d50b00();
      }
      FUN_00d48c60();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d48d00();
      g_02809fb9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_02809fb9 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_025d84d8;
  puVar6[7] = 0;
  puVar6[8] = 0;
  (*g_025d84f0)();
  puVar5 = *(void**)(this_ptr + 0x298);
  if (puVar5 == puVar6) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x298) = puVar6;
    if (puVar5 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  local_58 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x90) + 0x10))();
  uVar9 = FUN_00d50b00();
  local_58 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  local_60 = (int64_t *)(this_ptr + 0x90);
  FUN_01f47190(uVar9,&local_90);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    (**(code **)(*local_60 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00516c90();
  lVar1 = *(int64_t *)(this_ptr + 0x2b8);
  lVar7 = lVar1;
  if (lVar1 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_00516584;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x2b8);
      *(int64_t *)(this_ptr + 0x2b8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00516584:
      *(int64_t *)(this_ptr + 0x2b8) = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  uVar9 = FUN_012d6040();
  FUN_00516d30(uVar9,0x24);
  FUN_00d21370();
  FUN_00d21370();
  FUN_00d21370();
  FUN_005170f0();
  lVar1 = *(int64_t *)(this_ptr + 0x2f0);
  lVar7 = lVar1;
  if (lVar1 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_0051664e;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x2f0);
      *(int64_t *)(this_ptr + 0x2f0) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0051664e:
      *(int64_t *)(this_ptr + 0x2f0) = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_005170f0();
  lVar1 = *(int64_t *)(this_ptr + 0x2f8);
  lVar7 = lVar1;
  if (lVar1 != local_30) {
    lVar7 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar7 = 0;
        goto LAB_005166d1;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x2f8);
      *(int64_t *)(this_ptr + 0x2f8) = local_30;
    }
    else {
      local_28 = '\0';
LAB_005166d1:
      *(int64_t *)(this_ptr + 0x2f8) = lVar7;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar7 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x290) = 0x3f800000;
  FUN_00d50b00();
  local_80 = g_0270b798;
  if (g_0270b798 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_0270b7a0;
  local_78 = '\x01';
  if (g_0270b7a0 != 0) {
    FUN_00d50b00();
  }
  local_70 = lVar1;
  local_68 = '\x01';
  FUN_00d50b00();
  FUN_000bf690(&local_70,&local_80,&stack0xffffffffffffffc0);
  lVar1 = *(int64_t *)(this_ptr + 0x380);
  lVar7 = lVar1;
  if (lVar1 == local_30) goto LAB_00516815;
  lVar7 = local_30;
  if (local_28 == '\0') {
    if (local_30 == 0) {
      lVar7 = 0;
      goto LAB_005167ca;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x380);
    *(int64_t *)(this_ptr + 0x380) = local_30;
  }
  else {
    local_28 = '\0';
LAB_005167ca:
    *(int64_t *)(this_ptr + 0x380) = lVar7;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar7 = local_30;
  }
LAB_00516815:
  if ((local_28 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0x358) = 0x101;
  *(void*)(this_ptr + 0x35a) = 1;
  uVar9 = 0;
  uVar10 = 0;
  uVar2 = FUN_00e7b500((int)g_023908c8);
  *(void*)(this_ptr + 0x348) = uVar2;
  *(uint64_t *)(this_ptr + 0x350) = CONCAT44(uVar10,uVar9);
  return;
}



// ============================================================
// 0051c9f0
// ============================================================
// Function: FUN_0051c9f0
// Address: 0051c9f0
// Size: 1109 bytes
// Class: MDPluginDocument

void FUN_0051c9f0(void)

{
  char cVar1;
  void*******pppppppuVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  void*******pppppppuVar7;
  int iVar8;
  int64_t this_ptr;
  double dVar9;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  void******local_90;
  char local_88;
  void******local_80;
  char local_78;
  double local_70;
  void******local_68;
  void******local_60;
  void******local_58;
  char local_50;
  void******local_48;
  uint64_t local_40;
  int local_38;
  void******ppppppuVar6;
  
  FUN_012d2610();
  ppppppuVar6 = local_58;
  if (local_50 == '\0') {
    if ((void*******)local_58 == (void*******)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_50 != '\0') && ((void*******)local_58 != (void*******)0x0)) {
      FUN_00d50b20();
    }
  }
  else if ((void*******)local_58 == (void*******)0x0) {
    return;
  }
  if (*(int *)((int64_t)ppppppuVar6 + 0xc) == 0) goto LAB_0051ce4e;
  local_68 = ppppppuVar6;
  pppppppuVar2 = (void*******)FUN_00e8fc40();
  FUN_00d4ff40();
  *pppppppuVar2 = (void******)&g_02572358;
  (*g_02572370)();
  local_50 = '\0';
  local_58 = (void******)0x0;
  local_48 = ppppppuVar6;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_40._4_4_ = 0;
  local_60 = pppppppuVar2;
  while( true ) {
    if (local_40._4_4_ != 0) {
      if (local_40._4_4_ < 1) {
        iVar8 = -local_40._4_4_;
      }
      else {
        iVar8 = (int)local_40 - local_40._4_4_;
        local_40 = CONCAT44(local_40._4_4_,iVar8);
        FUN_00d23690();
        local_38 = local_38 + local_40._4_4_;
        iVar8 = 0;
      }
      local_40 = CONCAT44(iVar8,(int)local_40);
    }
    lVar3 = (int64_t)(int)local_40;
    iVar8 = (int)local_40 + 1;
    local_40 = CONCAT44(local_40._4_4_,iVar8);
    if (*(int *)((int64_t)local_48 + 0xc) <= iVar8) break;
    ppppppuVar6 = (void******)local_48[2];
    local_58 = (void******)ppppppuVar6[lVar3 + 1];
    pvVar4 = _pthread_getspecific((void*)ppppppuVar6);
    pVar5 = (void*)ppppppuVar6;
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f7cb0();
    local_90 = local_60;
    local_88 = '\0';
    FUN_012f0960(&local_90,0);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && ((void*******)local_90 != (void*******)0x0)) {
      FUN_00d50b20();
    }
  }
  pppppppuVar2 = (void*******)local_48;
  FUN_000be170();
  pppppppuVar7 = (void*******)local_68;
  if (*(int64_t *)(this_ptr + 0x108) != 0) {
    FUN_00d50b00();
    FUN_00756eb0();
    ppppppuVar6 = local_58;
    if (local_50 == '\0') {
      if (local_58 != (void******)0x0) {
        FUN_00d50b00();
        if ((local_50 != '\0') && (local_58 != (void******)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0051cc5d;
      }
    }
    else if (local_58 != (void******)0x0) {
LAB_0051cc5d:
      cVar1 = (*(*ppppppuVar6)[0x73])();
      if (cVar1 == '\0') {
        local_70 = (double)(*(*ppppppuVar6)[0x76])();
        local_50 = '\0';
        local_58 = (void******)0x0;
        local_48 = pppppppuVar7;
        local_38 = 0;
        local_40 = 0;
        if (0 < *(int *)((int64_t)pppppppuVar7 + 0xc)) {
          lVar3 = 0;
          do {
            local_58 = (void******)pppppppuVar7[2][lVar3];
            pvVar4 = _pthread_getspecific((void*)pppppppuVar2);
            if (pvVar4 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar9 = (double)FUN_012f7cb0();
            if (dVar9 <= local_70) {
              pvVar4 = _pthread_getspecific((void*)pppppppuVar2);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar9 = (double)FUN_012f9490();
              if (local_70 < dVar9) {
                pvVar4 = _pthread_getspecific((void*)pppppppuVar2);
                if (pvVar4 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_80 = local_60;
                local_78 = '\0';
                pppppppuVar2 = &local_80;
                FUN_012f0960(local_70,0);
                if ((local_a0 != '\0') && (local_a8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_78 != '\0') && ((void*******)local_80 != (void*******)0x0))
                {
                  FUN_00d50b20();
                }
              }
            }
            lVar3 = lVar3 + 1;
            local_40 = CONCAT44(local_40._4_4_,(int)lVar3);
            pppppppuVar7 = (void*******)local_68;
          } while ((int)lVar3 < *(int *)((int64_t)local_68 + 0xc));
        }
        FUN_000be170();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_58 = local_60;
  local_50 = '\0';
  FUN_00d243f0();
  if ((local_50 != '\0') && ((void*******)local_58 != (void*******)0x0)) {
    FUN_00d50b20();
  }
  if ((void*******)local_60 != (void*******)0x0) {
    FUN_00d50b20();
  }
LAB_0051ce4e:
  FUN_00d50b20();
  return;
}



// ============================================================
// 00517510
// ============================================================
// Function: FUN_00517510
// Address: 00517510
// Size: 1364 bytes
// Class: MDPluginDocument

void FUN_00517510(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  int64_t local_28;
  char local_20;
  
  if (*(int64_t *)(this_ptr + 0x308) != 0) {
    return;
  }
  FUN_00d50b00();
  local_108 = g_0270b7a8;
  if (g_0270b7a8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_0270b7b0;
  local_100 = '\x01';
  if (g_0270b7b0 != 0) {
    FUN_00d50b00();
  }
  local_f8 = lVar1;
  local_f0 = '\x01';
  FUN_00d50b00();
  FUN_000bf690(&local_f8,&local_108,&stack0xffffffffffffff68);
  lVar1 = *(int64_t *)(this_ptr + 0x378);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_005175f1;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x378);
      *(int64_t *)(this_ptr + 0x378) = local_28;
      lVar2 = local_28;
    }
    else {
      local_20 = '\0';
      lVar2 = local_28;
LAB_005175f1:
      *(int64_t *)(this_ptr + 0x378) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_e8 = g_0270b7b8;
  if (g_0270b7b8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_0270b7c0;
  local_e0 = '\x01';
  if (g_0270b7c0 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  FUN_00b34cb0();
  (**(code **)(*local_58 + 0x90))();
  local_68 = local_38;
  local_60 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_60 = '\x01';
  FUN_000bf690(&local_d8,&local_e8,&local_68);
  lVar1 = *(int64_t *)(this_ptr + 0x388);
  lVar2 = lVar1;
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        lVar2 = 0;
        goto LAB_00517793;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x388);
      *(int64_t *)(this_ptr + 0x388) = local_28;
      lVar2 = local_28;
    }
    else {
      local_20 = '\0';
      lVar2 = local_28;
LAB_00517793:
      *(int64_t *)(this_ptr + 0x388) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_28;
    }
  }
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_c8 = g_0270b7c8;
  if (g_0270b7c8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_0270b7d0;
  local_c0 = '\x01';
  if (g_0270b7d0 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar1;
  local_b0 = '\x01';
  FUN_00b34cb0();
  (**(code **)(*local_58 + 0x90))();
  local_48 = local_38;
  local_40 = 0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_40 = '\x01';
  FUN_000bf690(&local_b8,&local_c8,&local_48);
  lVar1 = *(int64_t *)(this_ptr + 0x390);
  lVar2 = lVar1;
  if (lVar1 == local_28) goto LAB_005179a5;
  if (local_20 == '\0') {
    if (local_28 == 0) {
      lVar2 = 0;
      goto LAB_0051795a;
    }
    FUN_00d50b00();
    lVar1 = *(int64_t *)(this_ptr + 0x390);
    *(int64_t *)(this_ptr + 0x390) = local_28;
    lVar2 = local_28;
  }
  else {
    local_20 = '\0';
    lVar2 = local_28;
LAB_0051795a:
    *(int64_t *)(this_ptr + 0x390) = lVar2;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar2 = local_28;
  }
LAB_005179a5:
  if ((local_20 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00518030
// ============================================================
// Function: FUN_00518030
// Address: 00518030
// Size: 1343 bytes
// Class: MDPluginDocument

void FUN_00518030(uint64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  bool bVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t *local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x108);
  if (lVar1 == *arg1) {
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
    (**(code **)(**(int64_t **)(this_ptr + 0x108) + 0x498))();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
        goto LAB_005180b8;
      }
LAB_00518180:
      bVar4 = true;
    }
    else {
      if (local_40 == (int64_t *)0x0) goto LAB_00518180;
LAB_005180b8:
      FUN_00517ef0();
      FUN_00cafd20();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = *(int64_t *)(this_ptr + 0x110);
      if (lVar2 != 0) {
        local_80 = 0;
        FUN_00d50b00();
        local_80 = '\x01';
        local_88 = lVar2;
        (**(code **)(*local_40 + 0x3a8))();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00cbcef0();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x3c8))();
      bVar4 = false;
    }
    FUN_01f27fe0();
    FUN_00d50b00();
    FUN_000c3c10();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((!bVar4) && (*(int64_t *)(this_ptr + 0x308) == 0)) {
      FUN_00cb1f10();
      FUN_00db3760();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00cb1f10();
      FUN_00db65f0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (*(char *)(this_ptr + 0x359) != '\0') {
      FUN_00756eb0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (int64_t *)0x0) {
        FUN_00756eb0();
        (**(code **)(*local_40 + 0x4a8))();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (!bVar4) {
      FUN_00d50b20();
    }
  }
  lVar2 = *arg1;
  lVar3 = *(int64_t *)(this_ptr + 0x108);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x108) = lVar2;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_01f27fe0();
    (**(code **)(*local_40 + 0x7b0))();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*arg1 == 0) goto LAB_005184a0;
  FUN_01f27fe0();
  FUN_00d50b00();
  local_a8 = *arg1;
  local_a0 = '\0';
  FUN_000c3900(param_1,&local_a8);
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x498))();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_005183c7;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_005183c7:
    FUN_00cafd20();
    FUN_00cb1f10();
    FUN_00db3260();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = *(int64_t *)(this_ptr + 0x110);
    if (lVar2 != 0) {
      FUN_00d50b00();
      (**(code **)(*local_40 + 0x3a0))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      local_90 = '\0';
      local_98 = (int64_t *)0x0;
      FUN_00cb1fa0();
      if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
        (**(code **)(*local_98 + 0x10))();
        FUN_00d50b20();
      }
    }
    FUN_00cbceb0();
    FUN_00cb1f10();
    FUN_00db3270();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_40 + 0x3c8))();
    FUN_00517510();
    FUN_00d50b20();
  }
  FUN_00518a80();
LAB_005184a0:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0051d3f0
// ============================================================
// Function: FUN_0051d3f0
// Address: 0051d3f0
// Size: 1121 bytes
// Class: MDPluginDocument

void FUN_0051d3f0(uint32_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t in_RCX;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  int64_t *local_58;
  int64_t local_40;
  char local_38;
  
  pVar5 = (void*)in_RCX;
  *(void*)(this_ptr + 0x290) = param_1;
  if (*(int64_t *)(this_ptr + 0x278) == 0) {
    return;
  }
  local_60 = param_2;
  if ((*arg1 != 0) || ((*param_2 != 0 && (*(int *)(*param_2 + 0xc) != 0)))) goto LAB_0051d42e;
  if ((g_0280a1d8 == 0) || (g_0280a1e1 == '\0')) {
    uVar6 = FUN_00e8cb50();
    pVar5 = (void*)in_RCX;
    if (g_0280a1d8 == 0) {
      FUN_013133d0(uVar6,0);
      lVar4 = g_0280a1d8;
      if (g_0280a1d8 != local_40) {
        in_RCX = g_0280a1d8;
        if (local_38 == '\0') {
          if (local_40 == 0) {
            lVar4 = 0;
          }
          else {
            FUN_00d50b00();
            lVar4 = local_40;
            in_RCX = g_0280a1d8;
          }
        }
        else {
          local_38 = '\0';
          lVar4 = local_40;
        }
        g_0280a1d8 = lVar4;
        if (in_RCX != 0) {
          FUN_00d50b20();
          lVar4 = local_40;
        }
      }
      pVar5 = (void*)in_RCX;
      if ((lVar4 != 0) && (g_0280a1e0 == '\0')) {
        g_0280a1e0 = '\x01';
        FUN_00e8cb90();
        lVar4 = local_40;
      }
      if ((local_38 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      g_0280a1e1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_0280a1e1 = '\x01';
      FUN_00e8cb70();
    }
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  lVar4 = *arg1;
  if (lVar4 == local_40) {
    if (((char)arg1[1] != '\0') || (local_40 == 0)) goto LAB_0051d829;
    local_58 = arg1 + 1;
    if (local_38 == '\0') {
      FUN_00d50b00();
      goto LAB_0051d822;
    }
  }
  else {
    local_58 = arg1 + 1;
    lVar1 = arg1[1];
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_40;
      if (((char)lVar1 != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
LAB_0051d822:
      *(void*)local_58 = 1;
LAB_0051d829:
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0051d42e;
    }
    *arg1 = local_40;
    if (((char)lVar1 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)local_58 = 1;
LAB_0051d42e:
  if (*(char *)(this_ptr + 0x2e4) == '\0') {
    if (*arg1 == 0) {
      FUN_012d1fd0();
    }
    else {
      FUN_012d1940();
    }
  }
  else {
    cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x390))();
    if (cVar2 != '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x370))();
    }
    if (*arg1 == 0) {
      FUN_012d1fd0();
    }
    else {
      FUN_012d1940();
    }
    if (cVar2 != '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x368))();
    }
  }
  FUN_00d403d0();
  lVar4 = g_0270b7f0;
  if (g_0270b7f0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = 0;
  local_68 = '\0';
  FUN_00d40470(&local_70,&stack0xffffffffffffffb0,1,3);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00516d30
// ============================================================
// Function: FUN_00516d30
// Address: 00516d30
// Size: 940 bytes
// Class: MDPluginDocument

void FUN_00516d30(uint64_t param_1,uint param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int unaff_ESI;
  int64_t this_ptr;
  
  if (*(int *)(this_ptr + 0x238) < unaff_ESI) {
    lVar2 = 0;
    do {
      if (*(int64_t *)(this_ptr + 0x118 + lVar2 * 8) != 0) {
        FUN_00e83070();
        *(void*)(this_ptr + 0x118 + lVar2 * 8) = 0;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x24);
    *(void*)(this_ptr + 0x238) = 0;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x118) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x120) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x128) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x130) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x138) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x140) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x148) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x150) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x158) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x160) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x168) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x170) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x178) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x180) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x188) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 400) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x198) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1a0) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1a8) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1b0) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1b8) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1c0) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1c8) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1d0) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1d8) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1e0) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1e8) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1f0) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x1f8) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x200) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x208) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x210) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x218) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x220) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x228) = uVar1;
    uVar1 = FUN_00e83020();
    *(void*)(this_ptr + 0x230) = uVar1;
    *(int *)(this_ptr + 0x238) = unaff_ESI;
  }
  else if (0 < (int)param_2) {
    if (6 < (uint64_t)param_2 - 1) {
      uVar3 = 0;
      do {
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        ___bzero();
        uVar3 = uVar3 + 8;
      } while ((param_2 & 0xfffffff8) != uVar3);
    }
    if ((uint64_t)(param_2 & 7) != 0) {
      uVar3 = 0;
      do {
        ___bzero();
        uVar3 = uVar3 + 1;
      } while ((param_2 & 7) != uVar3);
    }
  }
  return;
}



// ============================================================
// 0051da80
// ============================================================
// Function: FUN_0051da80
// Address: 0051da80
// Size: 1108 bytes
// Class: MDPluginDocument

void FUN_0051da80(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  void *pvVar5;
  void* pVar6;
  int64_t this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_38;
  
  if (*(int64_t *)(this_ptr + 0xe8) != 0) {
    if (*(int64_t *)(this_ptr + 0x308) == 0) {
      FUN_0051b4f0();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      FUN_000ba510();
      local_38 = local_68;
      if (local_68 == 0) {
        local_38 = 0;
        bVar2 = false;
      }
      else if (local_60 == '\0') {
        FUN_00d50b00();
        bVar2 = true;
      }
      else {
        local_60 = '\0';
        bVar2 = true;
      }
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (*(int *)(*(int64_t *)(this_ptr + 0x310) + 0xc) == 0) {
      bVar2 = false;
      local_38 = 0;
    }
    else {
      FUN_00323290();
      local_38 = local_68;
      if (local_68 == 0) {
        local_38 = 0;
        bVar2 = false;
      }
      else {
        bVar2 = true;
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
      }
      cVar3 = FUN_0078cda0();
      lVar1 = *(int64_t *)(this_ptr + 0x310);
      if (lVar1 != 0) {
        local_60 = '\0';
        local_68 = 0;
        local_50 = -1;
        while( true ) {
          lVar4 = (int64_t)local_50;
          local_50 = local_50 + 1;
          if (*(int *)(lVar1 + 0xc) <= local_50) break;
          local_68 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
          pVar6 = (void*)*(int64_t *)(lVar1 + 0x10);
          if (cVar3 == '\0') {
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0165a070();
          }
          else {
            pvVar5 = _pthread_getspecific(pVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0165a0b0();
          }
          lVar4 = local_a8;
          if (local_a0 == '\0') {
            if (local_a8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_a0 = '\0';
          }
          FUN_00d21140();
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
        }
        FUN_00277f20();
      }
    }
    FUN_012d1fd0();
    FUN_00d403d0();
    lVar1 = g_0270b7f0;
    if (g_0270b7f0 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_b8 = 0;
    local_b0 = '\0';
    FUN_00d40470(&local_b8,&stack0xffffffffffffff68,1,3);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0051be00
// ============================================================
// Function: FUN_0051be00
// Address: 0051be00
// Size: 793 bytes
// Class: MDPluginDocument

void FUN_0051be00(void* param_1)

{
  void *pvVar1;
  void* pVar2;
  char *pcVar3;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48 [9];
  undefined7 uStack_3f;
  char local_38;
  char local_30 [8];
  
  if (*(int64_t *)(arg1 + 0x308) == 0) {
    if (*(int64_t *)(arg1 + 0x110) != 0) {
      FUN_00d50b00();
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00154c00();
      FUN_00d50b20();
      return;
    }
  }
  else {
    if ((*(char *)(arg1 + 0x358) != '\0') &&
       (*(int *)(*(int64_t *)(arg1 + 0x310) + 0xc) != 0)) {
      FUN_00d23310();
      pVar2 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
      pcVar3 = local_30;
      if (local_48[0] != '\0') {
        pcVar3 = local_48;
      }
      local_30[0] = local_48[0];
      *pcVar3 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0165a070();
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f4d60();
      if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_48[8]) != 0)) {
        FUN_00d50b20();
      }
      if (local_30[0] == '\0') {
        return;
      }
      if (local_50 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    if (*(char *)(arg1 + 0x359) != '\0') {
      if (*(int *)(*(int64_t *)(arg1 + 800) + 0xc) != 0) {
        FUN_00d23310();
        pcVar3 = local_48 + 8;
        if (local_48[0] != '\0') {
          pcVar3 = local_48;
        }
        local_48[8] = local_48[0];
        *pcVar3 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 1) = 0;
        if ((local_48[8] == '\0') && (local_50 != 0)) {
          FUN_00d50b00();
        }
        *this_ptr = local_50;
        *(void*)(this_ptr + 1) = 1;
        return;
      }
      if (*(int *)(*(int64_t *)(arg1 + 0x318) + 0xc) != 0) {
        FUN_00d23310();
        pVar2 = CONCAT31((int3)(param_1 >> 8),local_48[0]);
        pcVar3 = local_30;
        if (local_48[0] != '\0') {
          pcVar3 = local_48;
        }
        local_30[0] = local_48[0];
        *pcVar3 = '\0';
        if ((local_48[0] != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012f4d60();
        if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_48[8]) != 0)) {
          FUN_00d50b20();
        }
        if (local_30[0] == '\0') {
          return;
        }
        if (local_50 == 0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return;
}



// ============================================================
// 00521f90
// ============================================================
// Function: FUN_00521f90
// Address: 00521f90
// Size: 880 bytes
// Class: MDPluginDocument

void FUN_00521f90(void* param_1,int param_2)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  byte unaff_SIL;
  int64_t this_ptr;
  double dVar5;
  uint64_t uVar6;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0xe8) != 0) {
    lVar4 = *(int64_t *)(this_ptr + 0x308);
    if ((lVar4 != 0) && ((unaff_SIL ^ 1) == 0)) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00b31a00();
      lVar4 = FUN_00bc4780();
      dVar5 = (double)FUN_00b335d0();
      FUN_012dd9d0();
      FUN_00018a90((double)(lVar4 + param_2) / dVar5);
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar4 = *(int64_t *)(this_ptr + 0x308);
    }
    if (lVar4 == 0) {
      uVar6 = FUN_0051b4f0();
      local_58 = 0;
      if (local_68 == '\0') {
        if (local_70 != 0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      local_58 = '\x01';
      local_60 = local_70;
      FUN_012d2830(uVar6,&local_60);
      lVar4 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        cVar2 = FUN_01311c10();
        if (cVar2 != '\0') {
          FUN_01311bf0();
          *(void*)(this_ptr + 0x371) = 0;
        }
        FUN_00d50b20();
      }
    }
    cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x5e8))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x638))(), cVar2 == '\0')) {
      plVar1 = *(int64_t **)(this_ptr + 0xe8);
      FUN_0141cb10();
      local_50 = local_40;
      local_48 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      (**(code **)(*plVar1 + 0x690))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 0xa0) = 1;
      *(void*)(this_ptr + 0x24a) = 1;
    }
    if (*(int64_t *)(this_ptr + 0x308) == 0 && (unaff_SIL ^ 1) == 0) {
      FUN_00521cd0();
    }
    FUN_0051f6c0();
  }
  if ((*(int64_t *)(this_ptr + 0x278) != 0) && (0 < param_2)) {
    local_40 = FUN_00e313b0();
    do {
      cVar2 = FUN_00e31450(1,0);
      lVar4 = local_40;
    } while (cVar2 == '\0');
    if ((local_40 != 0) && (unaff_SIL == 0)) {
      (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x690))();
    }
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 005201d0
// ============================================================
// Function: FUN_005201d0
// Address: 005201d0
// Size: 924 bytes
// Class: MDPluginDocument

void FUN_005201d0(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  bool bVar6;
  int64_t *local_b0;
  char local_a8;
  int64_t local_70;
  char local_68;
  int64_t *local_50;
  char local_48;
  int local_38;
  
  FUN_00b342a0();
  if ((*(int64_t *)(this_ptr + 0x308) == 0) && (*(int64_t *)(this_ptr + 0xe8) != 0)) {
    FUN_00b34cb0();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00b34cb0();
      (**(code **)(*local_b0 + 0x70))();
      if (local_50 == (int64_t *)0x0) {
        bVar2 = true;
        plVar5 = (int64_t *)0x0;
      }
      else {
        plVar5 = local_50;
        if (local_48 == '\0') {
          FUN_00d50b00();
          bVar2 = false;
        }
        else {
          local_48 = '\0';
          bVar2 = false;
        }
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        (**(code **)(*local_b0 + 0x10))();
        FUN_00d50b20();
      }
      lVar1 = g_0270b800;
      if (plVar5 != (int64_t *)0x0) {
        if (g_0270b800 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d90eb0();
        if (cVar3 == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = *(char *)(this_ptr + 0x248) != '\0';
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (bVar6) {
          FUN_0051c820();
          *(void*)(this_ptr + 0x24a) = 0;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (*(int64_t **)(this_ptr + 0x278) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x370))();
    FUN_012dddb0();
    if (*(int64_t *)(this_ptr + 0x278) != 0) {
      *(void*)(this_ptr + 0x278) = 0;
      FUN_00d50b20();
    }
  }
  if ((*(int64_t **)(this_ptr + 0xe8) != (int64_t *)0x0) &&
     ((**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x370))(),
     *(int64_t *)(this_ptr + 0xe8) != 0)) {
    *(void*)(this_ptr + 0xe8) = 0;
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x2e8);
  if (lVar1 != 0) {
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    local_38 = -1;
    while( true ) {
      lVar4 = (int64_t)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_38) break;
      local_50 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      (**(code **)(*local_50 + 0x370))();
    }
    FUN_00540a20();
  }
  *(void*)(this_ptr + 0x240) = 0;
  *(void*)(this_ptr + 0x248) = 0;
  FUN_00d403d0();
  lVar1 = g_026fb7e0;
  if (g_026fb7e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = 0;
  local_68 = '\0';
  FUN_00d40470(&local_70,&stack0xffffffffffffffa0,1,3);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0051c210
// ============================================================
// Function: FUN_0051c210
// Address: 0051c210
// Size: 899 bytes
// Class: MDPluginDocument

void FUN_0051c210(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t this_ptr;
  double dVar3;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_30;
  char local_28;
  
  if (*(char *)(this_ptr + 0x2d1) != '\0') {
    *(void*)(this_ptr + 0x2d1) = 0;
    FUN_00d403d0();
    FUN_00d50b00();
    local_c0 = g_026de568;
    if (g_026de568 != 0) {
      FUN_00d50b00();
    }
    local_b8 = '\x01';
    local_b0 = 0;
    local_a8 = '\0';
    FUN_00d41430(&local_b0,&local_c0);
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_a0 = g_0270b7e0;
    if (g_0270b7e0 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    local_90 = 0;
    local_88 = '\0';
    FUN_00d41430(&local_90,&local_a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(char *)(this_ptr + 0x24c) != *(char *)(this_ptr + 0x24b)) {
    *(char *)(this_ptr + 0x24c) = *(char *)(this_ptr + 0x24b);
    FUN_00d403d0();
    local_80 = g_026fdeb8;
    if (g_026fdeb8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d50b00();
    local_70 = 0;
    local_68 = '\0';
    FUN_00d40470(&local_70,&stack0xffffffffffffffc0,1,3);
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)(this_ptr + 0x2b0) == 0) {
    plVar2 = (int64_t *)FUN_0053fcd0();
    (**(code **)(*plVar2 + 0x18))();
    plVar1 = *(int64_t **)(this_ptr + 0x2b0);
    if (plVar1 == plVar2) {
      FUN_00d50b20();
    }
    else {
      *(int64_t **)(this_ptr + 0x2b0) = plVar2;
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (((*(int64_t *)(this_ptr + 0x308) != 0) ||
      (FUN_0051c820(), *(int64_t *)(this_ptr + 0x308) != 0)) &&
     (*(int64_t *)(this_ptr + 0xe8) != 0)) {
    FUN_0051c9f0();
  }
  if ((g_02809fd0 != 0) && (dVar3 = (double)FUN_00e7d6f0(), g_023b3bc0 < dVar3 - g_02801610))
  {
    do {
      FUN_0051d020();
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
    } while (local_30 != 0);
    g_02801610 = (double)FUN_00e7d6f0();
  }
  return;
}



// ============================================================
// 005224d0
// ============================================================
// Function: FUN_005224d0
// Address: 005224d0
// Size: 654 bytes
// Class: MDPluginDocument

void FUN_005224d0(void)

{
  bool bVar1;
  int64_t lVar2;
  bool bVar3;
  int64_t this_ptr;
  int64_t lVar4;
  int64_t local_40;
  char local_38;
  
  if (*(char *)(this_ptr + 0x2e6) == '\0') {
    return;
  }
  bVar1 = false;
  lVar4 = 0;
  do {
    FUN_00524510();
    if (local_40 == lVar4) {
      if ((bVar1) || (local_40 == 0)) {
joined_r0x005225b6:
        lVar2 = lVar4;
        bVar3 = bVar1;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_005225d0;
        }
        lVar2 = lVar4;
        bVar3 = true;
      }
    }
    else {
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar1) && (lVar4 != 0)) {
          FUN_00d50b20();
          lVar4 = local_40;
LAB_005225d0:
          bVar1 = true;
          goto joined_r0x005225b6;
        }
      }
      else {
        if ((bVar1) && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = true;
      }
    }
    bVar1 = bVar3;
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    local_38 = '\0';
    FUN_00d21140();
    local_40 = lVar4;
  } while( true );
  lVar4 = 0;
  do {
    FUN_00524510();
    if (local_40 == lVar4) {
      if ((bVar1) || (local_40 == 0)) {
joined_r0x005226f6:
        lVar2 = lVar4;
        bVar3 = bVar1;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          goto LAB_00522710;
        }
        lVar2 = lVar4;
        bVar3 = true;
      }
    }
    else {
      lVar2 = local_40;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        if ((bVar1) && (lVar4 != 0)) {
          FUN_00d50b20();
          lVar4 = local_40;
LAB_00522710:
          bVar1 = true;
          goto joined_r0x005226f6;
        }
      }
      else {
        if ((bVar1) && (lVar4 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = true;
      }
    }
    bVar1 = bVar3;
    lVar4 = lVar2;
    if (lVar4 == 0) {
      *(void*)(this_ptr + 0x2e6) = 0;
      return;
    }
    local_38 = '\0';
    FUN_00d23f50();
    local_40 = lVar4;
  } while( true );
}



// ============================================================
// 0051b640
// ============================================================
// Function: FUN_0051b640
// Address: 0051b640
// Size: 680 bytes
// Class: MDPluginDocument

void FUN_0051b640(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x110) == 0) {
    bVar5 = false;
    lVar7 = 0;
LAB_0051b6df:
    lVar1 = *(int64_t *)(arg1 + 0x308);
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_002dca20();
    lVar7 = local_40;
    if (local_40 != 0) {
      bVar5 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_0051b6df;
    }
    bVar5 = false;
    lVar1 = *(int64_t *)(arg1 + 0x308);
  }
  if ((lVar1 == 0) ||
     (((cVar2 = FUN_016ae5f0(), cVar2 == '\0' &&
       ((*(char *)(arg1 + 0x358) == '\0' || (*(char *)(arg1 + 0x35a) == '\0')))) ||
      (*(int64_t *)(arg1 + 0x108) == 0)))) goto LAB_0051b7d3;
  FUN_00d50b00();
  FUN_007934b0();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_40 == 0) {
    lVar1 = *(int64_t *)(arg1 + 0x108);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_007934f0();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0051b7d3;
  }
  lVar1 = *(int64_t *)(arg1 + 0x108);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_007934b0();
  if (lVar7 == local_40) {
    lVar4 = lVar7;
    bVar6 = bVar5;
    if ((!bVar5) && (lVar7 != 0)) {
      if (local_38 != '\0') goto LAB_0051b872;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_0051b8be:
    lVar7 = lVar4;
    bVar5 = bVar6;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      lVar4 = local_40;
      if ((bVar5) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0051b8be;
    }
    lVar4 = local_40;
    if ((bVar5) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
LAB_0051b872:
    lVar7 = lVar4;
    bVar5 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0051b7d3:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar5) && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0051ba20
// ============================================================
// Function: FUN_0051ba20
// Address: 0051ba20
// Size: 680 bytes
// Class: MDPluginDocument

void FUN_0051ba20(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  bool bVar5;
  bool bVar6;
  int64_t lVar7;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(arg1 + 0x110) == 0) {
    bVar5 = false;
    lVar7 = 0;
LAB_0051babf:
    lVar1 = *(int64_t *)(arg1 + 0x308);
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_002dca50();
    lVar7 = local_40;
    if (local_40 != 0) {
      bVar5 = true;
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_0051babf;
    }
    bVar5 = false;
    lVar1 = *(int64_t *)(arg1 + 0x308);
  }
  if ((lVar1 == 0) ||
     (((cVar2 = FUN_016ae5f0(), cVar2 == '\0' &&
       ((*(char *)(arg1 + 0x358) == '\0' || (*(char *)(arg1 + 0x35a) == '\0')))) ||
      (*(int64_t *)(arg1 + 0x108) == 0)))) goto LAB_0051bbb3;
  FUN_00d50b00();
  FUN_00793550();
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (local_40 == 0) {
    lVar1 = *(int64_t *)(arg1 + 0x108);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00793590();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    goto LAB_0051bbb3;
  }
  lVar1 = *(int64_t *)(arg1 + 0x108);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_00793550();
  if (lVar7 == local_40) {
    lVar4 = lVar7;
    bVar6 = bVar5;
    if ((!bVar5) && (lVar7 != 0)) {
      if (local_38 != '\0') goto LAB_0051bc52;
      FUN_00d50b00();
      bVar6 = true;
    }
LAB_0051bc9e:
    lVar7 = lVar4;
    bVar5 = bVar6;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      bVar6 = true;
      lVar4 = local_40;
      if ((bVar5) && (lVar7 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0051bc9e;
    }
    lVar4 = local_40;
    if ((bVar5) && (lVar7 != 0)) {
      FUN_00d50b20();
    }
LAB_0051bc52:
    lVar7 = lVar4;
    bVar5 = true;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
LAB_0051bbb3:
  *(void*)(this_ptr + 1) = 0;
  if ((!bVar5) && (lVar7 != 0)) {
    FUN_00d50b00();
  }
  *this_ptr = lVar7;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 0051e1e0
// ============================================================
// Function: FUN_0051e1e0
// Address: 0051e1e0
// Size: 697 bytes
// Class: MDPluginDocument

void FUN_0051e1e0(char *param_1)

{
  void *pvVar1;
  char *pcVar2;
  int64_t *plVar3;
  int64_t *arg1;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t local_90;
  char local_88;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_012d2610();
  if (local_88 == '\0') {
    if (local_90 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_90 == 0) {
    return;
  }
  if (0 < *(int *)(local_90 + 0xc)) {
    lVar4 = 0;
    do {
      plVar3 = *(int64_t **)(*(int64_t *)(local_90 + 0x10) + lVar4 * 8);
      pvVar1 = _pthread_getspecific((void*)param_1);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012eb770();
      local_38[0] = local_40[0];
      param_1 = local_38;
      pcVar2 = local_40;
      if (local_40[0] == '\0') {
        pcVar2 = param_1;
      }
      *pcVar2 = '\0';
      plVar5 = local_48;
      if ((local_40[0] == '\0') || (local_48 == (int64_t *)0x0)) {
        if ((local_48 == (int64_t *)0x0) && (plVar3 != (int64_t *)0x0)) {
          local_38[0] = '\0';
          plVar5 = plVar3;
        }
      }
      else {
        FUN_00d50b20();
      }
      if ((int64_t *)*arg1 == plVar5) {
        plVar3 = (int64_t *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar3 + 0x18))();
        pvVar1 = _pthread_getspecific((void*)param_1);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e78c0();
        if (local_40[0] == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40[0] = '\0';
        }
        FUN_0051e640();
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_40[0] = '\0';
        FUN_00d21140();
        if ((local_40[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        local_48 = plVar3;
      }
      if ((local_38[0] != '\0') && (plVar5 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < *(int *)(local_90 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  return;
}



// ============================================================
// 0053c980
// ============================================================
// Function: FUN_0053c980
// Address: 0053c980
// Size: 1588 bytes
// Class: MDPluginDocument
// String references:
//   "MDPluginDocument"

void FUN_0053c980(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_0053c7b0();
  *this_ptr = &g_024df9f0;
  FUN_0053d060();
  FUN_0053d320();
  *(void*)(this_ptr + 10) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270bb8b == '\0') {
    FUN_0053d5e0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x54) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270bb8b == '\0') {
    FUN_0053d770();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xb) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270bb8b == '\0') {
    FUN_0053d900();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270bb8b == '\0') {
    FUN_0053da90();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xc) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270bb8b == '\0') {
    FUN_0053dc20();
    FUN_00e87980();
  }
  FUN_0053ddb0();
  *(void*)(this_ptr + 0xe) = 0;
  // [STATIC_INIT: property registration]
  if (g_0270bb8b == '\0') {
    FUN_0053e0e0();
    FUN_00e87980();
  }
  FUN_0053e270();
  return;
}



// ============================================================
// 00515d00
// ============================================================
// Function: FUN_00515d00
// Address: 00515d00
// Size: 1096 bytes
// Class: MDPluginDocument
// String references:
//   "handleAudioSourcesChanged"
//   "handleHostTrackChanged"
//   "handleHostDocumentChanged"
//   "handleHostTrackNameChanged"
//   "handleHostTrackPositionChanged"
//   "handleProjectDirectoryChanged"
//   "handleUndoManagerStackFrameDidChange"

void FUN_00515d00(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
  FUN_00e87c70();
  return;
}



// ============================================================
// 005153b0
// ============================================================
// Function: FUN_005153b0
// Address: 005153b0
// Size: 512 bytes
// Class: MDPluginDocument
// String references:
//   "MDPluginDocument"

void FUN_005153b0(void)

{
  int iVar1;
  void*puVar2;
  uint32_t uVar3;
  
  // [STATIC_INIT: property registration]
  if (g_0270bb8b != '\0') {
    return;
  }
  FUN_0053c370();
  FUN_00e87760();
  FUN_00d4ff40();
  if (1 < g_02802630) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
  }
  FUN_00d50c00();
  FUN_0053c980();
  FUN_00d50c00();
  uVar3 = FUN_00e87770();
  FUN_00e87920(uVar3,0);
  FUN_0015e250();
  FUN_0015e250();
  return;
}

