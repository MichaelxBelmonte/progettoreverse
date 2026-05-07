// Function: FUN_01838020
// Address: 01838020
// Size: 9934 bytes
// Class: Unknown

void FUN_01838020(float param_1,float param_2,int64_t *param_3,int64_t *param_4)

{
  uint uVar1;
  void *pvVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  void* pVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  float *pfVar15;
  int64_t *plVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  code *pcVar40;
  code *pcVar41;
  int iVar42;
  int iVar43;
  void *pvVar44;
  int64_t lVar45;
  void*puVar46;
  void*puVar47;
  void*puVar48;
  int64_t lVar49;
  int *piVar50;
  int64_t lVar51;
  void* pVar52;
  void* pVar53;
  int64_t *in_RCX;
  uint64_t uVar54;
  int64_t lVar55;
  void *pvVar56;
  int64_t lVar57;
  int64_t lVar58;
  int64_t in_RDX;
  int64_t lVar59;
  uint64_t uVar60;
  int64_t *plVar61;
  int64_t *plVar62;
  int64_t *arg1;
  uint64_t uVar63;
  uint64_t uVar64;
  uint uVar65;
  int64_t *this_ptr;
  uint64_t uVar66;
  int64_t lVar67;
  void *pvVar68;
  size_t sVar69;
  int64_t lVar70;
  uint64_t uVar71;
  uint64_t uVar72;
  uint uVar73;
  int64_t lVar74;
  uint64_t uVar75;
  int64_t lVar76;
  bool bVar77;
  int iVar78;
  float fVar79;
  double dVar80;
  float in_XMM0_Dc;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar83 [16];
  int iVar86;
  int iVar87;
  double dVar81;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  uint64_t extraout_XMM0_Qa_04;
  int iVar88;
  int iVar89;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar84 [16];
  uint64_t uVar82;
  uint8_t auVar85 [16];
  float fVar91;
  uint8_t auVar92 [16];
  float fVar90;
  uint8_t auVar93 [16];
  uint8_t auVar94 [16];
  uint8_t auVar95 [16];
  uint8_t auVar96 [16];
  uint8_t auVar97 [16];
  float fVar98;
  double dVar99;
  uint8_t auVar100 [16];
  float fVar102;
  double dVar103;
  float fVar105;
  uint8_t auVar104 [16];
  double dVar106;
  uint8_t auVar107 [16];
  uint8_t auVar108 [16];
  uint8_t auVar109 [16];
  int64_t *local_res8;
  int64_t *local_res10;
  int64_t *local_res18;
  double local_2e8;
  int local_2c8;
  int64_t local_2c0;
  int64_t local_2b8;
  int64_t local_2b0;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  uint64_t uStack_210;
  double local_208;
  uint64_t uStack_200;
  int local_1f0;
  int local_1ec;
  double local_1e0;
  double local_198;
  int64_t local_190;
  int64_t local_188;
  double local_148;
  double dStack_140;
  int64_t local_130;
  uint8_t local_f8 [16];
  double local_b8;
  void* local_a4;
  int64_t local_80;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_50;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar101 [16];
  
  if ((((*this_ptr != 0) && (*(int *)(*this_ptr + 0xc) != 0)) && (lVar45 = *in_RCX, lVar45 != 0))
     && ((*(int *)(lVar45 + 0xc) != 0 && (lVar59 = *arg1, lVar59 != 0)))) {
    uVar10 = *(uint *)(lVar59 + 0xc);
    if ((uint64_t)uVar10 != 0) {
      iVar42 = *(int *)(**(int64_t **)(lVar59 + 0x10) + 0x18);
      iVar43 = iVar42 + 3;
      if (-1 < iVar42) {
        iVar43 = iVar42;
      }
      pVar11 = *(void* *)(**(int64_t **)(**(int64_t **)(lVar45 + 0x10) + 0x10) + 0x18);
      pVar53 = pVar11 + 3;
      if (-1 < (int)pVar11) {
        pVar53 = pVar11;
      }
      pVar52 = pVar11;
      pvVar44 = _pthread_getspecific(pVar11);
      if (pvVar44 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df6b0();
      pvVar44 = _pthread_getspecific(pVar52);
      plVar61 = local_40;
      if ((pvVar44 != (void *)0x0) && (lVar45 = FUN_00e8b990(), lVar45 != 0)) {
        plVar61 = (int64_t *)local_40[(uint64_t)(*(uint *)(lVar45 + 0x154) & 1) + 4];
      }
      dVar80 = (double)(**(code **)(*plVar61 + 0x370))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((g_028afc08 == (int64_t *)0x0) || (g_028afc11 == '\0')) {
        FUN_00e8cb50();
        if (g_028afc08 == (int64_t *)0x0) {
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          plVar61 = g_028afc08;
          if ((g_028afc08 != local_40) && (g_028afc08 = local_40, plVar61 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            if (g_028afc10 == '\0') {
              g_028afc10 = '\x01';
              FUN_00e8cb90();
            }
            if (local_40 != (int64_t *)0x0 && plVar61 == local_40) {
              FUN_00d50b20();
            }
          }
          lVar45 = g_028afc08[2];
          lVar59 = 0;
          iVar42 = g_02392fe0;
          iVar86 = _UNK_02392fe4;
          do {
            local_f8._0_8_ = _sinf();
            local_f8._8_8_ = extraout_XMM0_Qb;
            auVar92._0_8_ = _sinf();
            auVar92._8_8_ = extraout_XMM0_Qb_00;
            auVar92 = insertps(local_f8,auVar92,0x10);
            local_218 = CONCAT44((float)((double)(iVar86 + _UNK_023d92d4) * _UNK_024170d8 *
                                        _UNK_024170e8),
                                 (float)((double)(iVar42 + g_023d92d0) * g_024170d0 *
                                        g_024170e0));
            uStack_210 = 0;
            uVar82 = _sinf();
            auVar83._0_8_ = _sinf();
            auVar83._8_8_ = extraout_XMM0_Qb_02;
            auVar96._8_8_ = extraout_XMM0_Qb_01;
            auVar96._0_8_ = uVar82;
            auVar96 = insertps(auVar96,auVar83,0x10);
            local_f8._0_8_ = auVar92._0_8_;
            puVar46 = (void*)(lVar45 + lVar59 * 4);
            *puVar46 = local_f8._0_8_;
            puVar46[1] = auVar96._0_8_;
            lVar59 = lVar59 + 4;
            iVar42 = iVar42 + g_023d92e0;
            iVar86 = iVar86 + _UNK_023d92e4;
          } while (lVar59 != 0x10000);
          g_028afc11 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028afc11 = '\x01';
          FUN_00e8cb70();
        }
      }
      pcVar41 = g_02572370;
      pcVar40 = g_025683d8;
      if (0 < (int)uVar10) {
        local_1f0 = iVar43 >> 2;
        uVar73 = (int)pVar53 >> 2;
        fVar90 = param_1 + param_2;
        param_2 = g_02390124 / param_2;
        uVar72 = 2;
        if (2 < (int)uVar73) {
          uVar72 = (uint64_t)uVar73;
        }
        dVar103 = g_02417050 / dVar80;
        uVar7 = uVar72 - 1;
        uVar63 = (uint64_t)(uVar73 & 0xfffffff8);
        uVar60 = uVar7 & 0xfffffffffffffffc;
        uVar64 = (uVar63 - 8 >> 3) + 1;
        lVar45 = (int64_t)local_1f0;
        local_1ec = uVar73 * 8;
        uVar75 = 0;
        do {
          lVar59 = *(int64_t *)(*(int64_t *)(*in_RCX + 0x10) + uVar75 * 8);
          if (lVar59 != 0) {
            FUN_00d50b00();
          }
          lVar12 = *(int64_t *)(*(int64_t *)(*param_3 + 0x10) + uVar75 * 8);
          local_218 = lVar59;
          if (lVar12 != 0) {
            FUN_00d50b00();
          }
          lVar59 = *(int64_t *)(*(int64_t *)(*param_4 + 0x10) + uVar75 * 8);
          if (lVar59 != 0) {
            FUN_00d50b00();
          }
          lVar13 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar75 * 8);
          uVar54 = uVar75;
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          FUN_00c8e4f0();
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00c92170();
          FUN_00c92160();
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          FUN_00c8e690();
          if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          puVar46 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar46 = &g_02572358;
          (*pcVar41)();
          puVar47 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar47 = &g_02572358;
          (*pcVar41)();
          puVar48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar48 = &g_025683c0;
          (*pcVar40)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          puVar48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar48 = &g_025683c0;
          (*pcVar40)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          puVar48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar48 = &g_025683c0;
          (*pcVar40)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          puVar48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar48 = &g_025683c0;
          (*pcVar40)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          puVar48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar48 = &g_025683c0;
          (*pcVar40)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          puVar48 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar48 = &g_025683c0;
          (*pcVar40)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          FUN_00c8e690();
          if (puVar48 != (void*)0x0) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          auVar92 = g_023de2d0;
          iVar39 = _UNK_023de2cc;
          iVar38 = _UNK_023de2c8;
          iVar37 = _UNK_023de2c4;
          iVar36 = g_023de2c0;
          auVar96 = g_023de2b0;
          iVar35 = _UNK_0239418c;
          iVar86 = _UNK_02394188;
          iVar43 = _UNK_02394184;
          iVar42 = g_02394180;
          if (3 < (int)pVar11) {
            lVar49 = puVar48[2];
            if (uVar73 < 8) {
              uVar54 = 0;
            }
            else {
              iVar78 = g_0238fcc0;
              iVar87 = _UNK_0238fcc4;
              iVar88 = _UNK_0238fcc8;
              iVar89 = _UNK_0238fccc;
              if (uVar63 - 8 == 0) {
                lVar55 = 0;
LAB_01838d9e:
                auVar94._0_4_ = (float)iVar78;
                auVar94._4_4_ = (float)iVar87;
                auVar94._8_4_ = (float)iVar88;
                auVar94._12_4_ = (float)iVar89;
                iVar78 = iVar78 + g_02394180;
                iVar87 = iVar87 + _UNK_02394184;
                iVar88 = iVar88 + _UNK_02394188;
                iVar89 = iVar89 + _UNK_0239418c;
                *(uint8_t (*) [16])(lVar49 + lVar55 * 4) = auVar94;
                pfVar15 = (float *)(lVar49 + 0x10 + lVar55 * 4);
                *pfVar15 = (float)iVar78;
                pfVar15[1] = (float)iVar87;
                pfVar15[2] = (float)iVar88;
                pfVar15[3] = (float)iVar89;
              }
              else {
                lVar55 = 0;
                lVar74 = -(uVar64 & 0xfffffffffffffffe);
                do {
                  pfVar15 = (float *)(lVar49 + lVar55 * 4);
                  *pfVar15 = (float)iVar78;
                  pfVar15[1] = (float)iVar87;
                  pfVar15[2] = (float)iVar88;
                  pfVar15[3] = (float)iVar89;
                  pfVar15 = (float *)(lVar49 + 0x10 + lVar55 * 4);
                  *pfVar15 = (float)(iVar78 + iVar42);
                  pfVar15[1] = (float)(iVar87 + iVar43);
                  pfVar15[2] = (float)(iVar88 + iVar86);
                  pfVar15[3] = (float)(iVar89 + iVar35);
                  auVar93._0_4_ = (float)(iVar78 + auVar96._0_4_);
                  auVar93._4_4_ = (float)(iVar87 + auVar96._4_4_);
                  auVar93._8_4_ = (float)(iVar88 + auVar96._8_4_);
                  auVar93._12_4_ = (float)(iVar89 + auVar96._12_4_);
                  auVar100._0_4_ = (float)(iVar78 + iVar36);
                  auVar100._4_4_ = (float)(iVar87 + iVar37);
                  auVar100._8_4_ = (float)(iVar88 + iVar38);
                  auVar100._12_4_ = (float)(iVar89 + iVar39);
                  *(uint8_t (*) [16])(lVar49 + 0x20 + lVar55 * 4) = auVar93;
                  *(uint8_t (*) [16])(lVar49 + 0x30 + lVar55 * 4) = auVar100;
                  lVar55 = lVar55 + 0x10;
                  iVar78 = iVar78 + auVar92._0_4_;
                  iVar87 = iVar87 + auVar92._4_4_;
                  iVar88 = iVar88 + auVar92._8_4_;
                  iVar89 = iVar89 + auVar92._12_4_;
                  lVar74 = lVar74 + 2;
                } while (lVar74 != 0);
                if ((uVar64 & 1) != 0) goto LAB_01838d9e;
              }
              uVar54 = uVar63;
              if (uVar63 == uVar73) goto LAB_01838de5;
            }
            do {
              *(float *)(lVar49 + uVar54 * 4) = (float)(int)uVar54;
              uVar54 = uVar54 + 1;
            } while (uVar73 != uVar54);
          }
LAB_01838de5:
          pvVar44 = _pthread_getspecific((void*)uVar54);
          if (pvVar44 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar49 = FUN_013de650();
          lVar55 = in_RDX - lVar49;
          auVar101._0_8_ = (double)lVar55 / dVar80;
          auVar101._8_8_ = 0;
          local_a4 = 0xffffffff;
          lVar74 = -1;
          local_208 = 0.0;
          uStack_200 = 0;
          local_80 = 0;
          bVar30 = false;
          bVar29 = false;
          local_68 = (int64_t *)0x0;
          bVar33 = false;
          local_60 = (int64_t *)0x0;
          bVar32 = false;
          bVar31 = false;
          local_50 = (int64_t *)0x0;
          local_1e0 = g_0238fee8;
          local_190 = 0x7fffffffffffffff;
          local_2b0 = 0;
          local_2e8 = 0.0;
          local_2b8 = 0;
          local_188 = 0;
          local_130 = 0;
          local_2c0 = -1;
          local_198 = auVar101._0_8_;
          bVar77 = false;
          do {
            plVar61 = (int64_t *)*local_res18;
            pVar53 = (void*)lVar55;
            pvVar44 = _pthread_getspecific(pVar53);
            if (pvVar44 != (void *)0x0) {
              plVar61 = (int64_t *)*local_res18;
              lVar55 = FUN_00e8b990();
              if (lVar55 != 0) {
                plVar61 = (int64_t *)plVar61[(uint64_t)(*(uint *)(lVar55 + 0x154) & 1) + 4];
              }
            }
            dVar81 = (double)(**(code **)(*plVar61 + 0x380))((double)lVar49 / dVar80 + local_198);
            lVar55 = FUN_00e7dae0(dVar80 * local_198);
            pvVar44 = (void *)FUN_00e7dae0(dVar81 * dVar80);
            if (local_2c0 <= (int64_t)pvVar44) {
              local_a4 = local_a4 + 1;
              uVar82 = extraout_XMM0_Qa;
              if ((int)local_a4 < *(int *)(*this_ptr + 0xc)) {
                lVar76 = (int64_t)(int)local_a4;
                lVar74 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + lVar76 * 8);
                pVar53 = local_a4;
                if (local_80 == lVar74) {
                  if ((!bVar30) && (local_80 != 0)) {
                    bVar30 = true;
                    uVar82 = FUN_00d50b00();
                    pVar53 = (void*)lVar76;
                  }
                }
                else {
                  if (lVar74 != 0) {
                    uVar82 = FUN_00d50b00();
                    pVar53 = (void*)lVar76;
                  }
                  if ((bVar30) && (local_80 != 0)) {
                    uVar82 = FUN_00d50b20();
                    bVar30 = true;
                    local_80 = lVar74;
                  }
                  else {
                    bVar30 = true;
                    local_80 = lVar74;
                  }
                }
              }
              local_2c0 = 0x7fffffffffffffff;
              if ((int)local_a4 < *(int *)(*this_ptr + 0xc) + -1) {
                pvVar56 = _pthread_getspecific(pVar53);
                if ((pvVar56 != (void *)0x0) && (lVar74 = FUN_00e8b990(), lVar74 != 0)) {
                  pVar53 = (void*)local_80;
                }
                lVar74 = FUN_013de650();
                pvVar56 = _pthread_getspecific(pVar53);
                if (pvVar56 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_2c0 = FUN_013de790();
                local_2c0 = local_2c0 + lVar74;
                uVar82 = extraout_XMM0_Qa_00;
              }
              local_268 = local_80;
              local_260 = '\0';
              FUN_0133ae40(uVar82,&local_268);
              lVar74 = FUN_00d45790();
              uVar82 = extraout_XMM0_Qa_01;
              if ((local_260 != '\0') && (local_268 != 0)) {
                uVar82 = FUN_00d50b20();
              }
              if (lVar74 == -1) {
                lVar74 = -1;
                local_208 = 0.0;
                uStack_200 = 0;
                local_1e0 = g_0238fee8;
                local_190 = 0x7fffffffffffffff;
              }
              else {
                local_258 = local_80;
                local_250 = '\0';
                FUN_0133ae40(uVar82,&local_258);
                local_190 = FUN_00d45790();
                uVar82 = extraout_XMM0_Qa_02;
                if ((local_250 != '\0') && (local_258 != 0)) {
                  uVar82 = FUN_00d50b20();
                }
                local_248 = local_80;
                local_240 = '\0';
                FUN_0133ae40(uVar82,&local_248);
                lVar76 = FUN_00d45790();
                uVar82 = extraout_XMM0_Qa_03;
                if ((local_240 != '\0') && (local_248 != 0)) {
                  uVar82 = FUN_00d50b20();
                }
                local_238 = local_80;
                local_230 = '\0';
                FUN_0133ae40(uVar82,&local_238);
                lVar74 = FUN_00d45790();
                uVar82 = extraout_XMM0_Qb_03;
                if ((local_230 != '\0') && (local_238 != 0)) {
                  FUN_00d50b20();
                  uVar82 = extraout_XMM0_Qb_04;
                }
                local_208 = (double)lVar76;
                uStack_200 = uVar82;
                iVar42 = FUN_00e7d850(local_208 * g_023b3498);
                local_228 = local_80;
                local_220 = '\0';
                FUN_0133ae40(extraout_XMM0_Qa_04,&local_228);
                local_1e0 = (double)FUN_00d45bc0();
                if ((local_220 != '\0') && (local_228 != 0)) {
                  FUN_00d50b20();
                }
                lVar74 = lVar74 + local_190;
                local_188 = (int64_t)iVar42;
                local_2b8 = local_190 + local_188;
                local_2b0 = lVar74 - local_188;
              }
            }
            uVar54 = (int64_t)pvVar44 - local_190;
            bVar18 = local_190 <= (int64_t)pvVar44;
            bVar17 = (int64_t)pvVar44 < lVar74;
            dVar81 = local_2e8;
            if (!bVar77) {
              dVar81 = 0.0;
            }
            if (!bVar17 || !bVar18) {
              dVar81 = local_2e8;
            }
            local_2c8 = (int)lVar55 - (int)local_130;
            piVar50 = (int *)local_40[2];
            iVar42 = *(int *)(*local_res10 + 0x18);
            iVar43 = iVar42 + 7;
            if (-1 < iVar42) {
              iVar43 = iVar42;
            }
            iVar42 = *piVar50;
            if (*piVar50 < 0) {
              iVar42 = 0;
            }
            iVar86 = (iVar43 >> 3) + -1;
            if (iVar43 >> 3 <= iVar42) {
              iVar42 = iVar86;
            }
            uVar66 = (uint64_t)iVar42;
            lVar76 = *(int64_t *)(*local_res10 + 0x10);
            if ((int64_t)pvVar44 < *(int64_t *)(lVar76 + uVar66 * 8)) {
              do {
                bVar77 = uVar66 == 0;
                uVar66 = uVar66 - 1;
                pvVar56 = pvVar44;
                if (bVar77) {
                  iVar43 = 0;
                  iVar42 = 0;
                  if (iVar86 < 1) goto LAB_0183951e;
                  goto LAB_018394f7;
                }
              } while ((int64_t)pvVar44 < *(int64_t *)(lVar76 + uVar66 * 8));
              uVar65 = (uint)uVar66;
            }
            else {
              pvVar56 = (void *)((int64_t)iVar86 - uVar66);
              pvVar68 = (void *)0x0;
              do {
                iVar43 = iVar86;
                if (pvVar56 == pvVar68) goto LAB_0183951e;
                pvVar2 = (void *)((int64_t)pvVar68 + 1);
                lVar67 = (int64_t)pvVar68 * 8;
                pvVar68 = pvVar2;
              } while (*(int64_t *)(lVar76 + uVar66 * 8 + 8 + lVar67) <= (int64_t)pvVar44);
              uVar65 = (iVar42 + (int)pvVar2) - 1;
              uVar66 = (uint64_t)uVar65;
            }
            iVar43 = (int)uVar66;
            iVar42 = iVar43;
            if ((int)uVar65 < iVar86) {
LAB_018394f7:
              iVar43 = iVar42;
              pvVar56 = *(void **)(lVar76 + (int64_t)iVar43 * 8);
              if (*(int64_t *)(lVar76 + 8 + (int64_t)iVar43 * 8) - (int64_t)pvVar44 <
                  (int64_t)pvVar44 - (int64_t)pvVar56) {
                iVar43 = iVar43 + 1;
              }
            }
LAB_0183951e:
            auVar101._0_8_ = (double)local_2c8;
            *piVar50 = iVar43;
            lVar76 = 1;
            local_148 = g_0238fee8;
            dStack_140 = 0.0;
            if (bVar17 && bVar18) {
              dVar99 = (double)(int64_t)uVar54;
              auVar95._0_8_ = dVar99 / local_208;
              auVar95._8_8_ = 0;
              auVar96 = roundsd(auVar95,auVar95,9);
              for (dVar106 = dVar81 - (dVar99 - auVar96._0_8_ * local_208) / local_208;
                  dVar106 < 0.0; dVar106 = dVar106 + g_0238fee8) {
              }
              dVar106 = dVar106 * local_208 + dVar99;
              for (local_2e8 = (auVar101._0_8_ / local_208) * local_1e0 + dVar81;
                  g_0238fee8 <= local_2e8; local_2e8 = local_2e8 + g_023b19a0) {
              }
              iVar42 = FUN_00e7d850(dVar106);
              dVar81 = dVar106 - local_208;
              iVar43 = FUN_00e7d850();
              lVar67 = iVar42 + local_190;
              lVar70 = iVar43 + local_190;
              lVar76 = *local_res10;
              piVar50 = (int *)local_40[2];
              iVar42 = *(int *)(lVar76 + 0x18);
              iVar43 = iVar42 + 7;
              if (-1 < iVar42) {
                iVar43 = iVar42;
              }
              iVar42 = piVar50[1];
              if (piVar50[1] < 0) {
                iVar42 = 0;
              }
              iVar86 = (iVar43 >> 3) + -1;
              if (iVar43 >> 3 <= iVar42) {
                iVar42 = iVar86;
              }
              uVar54 = (uint64_t)iVar42;
              lVar14 = *(int64_t *)(lVar76 + 0x10);
              auVar101._8_8_ = 0;
              if (lVar67 < *(int64_t *)(lVar14 + uVar54 * 8)) {
                do {
                  bVar77 = uVar54 == 0;
                  uVar54 = uVar54 - 1;
                  if (bVar77) {
                    iVar43 = 0;
                    iVar42 = 0;
                    if (iVar86 < 1) goto LAB_01839741;
                    goto LAB_01839727;
                  }
                } while (lVar67 < *(int64_t *)(lVar14 + uVar54 * 8));
                uVar65 = (uint)uVar54;
              }
              else {
                lVar51 = 0;
                do {
                  iVar43 = iVar86;
                  if ((int64_t)iVar86 - uVar54 == lVar51) goto LAB_01839741;
                  lVar58 = lVar51 + 1;
                  lVar57 = lVar51 * 8;
                  lVar51 = lVar58;
                } while (*(int64_t *)(lVar14 + uVar54 * 8 + 8 + lVar57) <= lVar67);
                uVar65 = (iVar42 + (int)lVar58) - 1;
                uVar54 = (uint64_t)uVar65;
              }
              iVar43 = (int)uVar54;
              iVar42 = iVar43;
              if ((int)uVar65 < iVar86) {
LAB_01839727:
                iVar43 = iVar42;
                if (*(int64_t *)(lVar14 + 8 + (int64_t)iVar43 * 8) - lVar67 <
                    lVar67 - *(int64_t *)(lVar14 + (int64_t)iVar43 * 8)) {
                  iVar43 = iVar43 + 1;
                }
              }
LAB_01839741:
              auVar97._0_8_ = (uint64_t)(dVar106 - dVar99) & g_023908f0;
              auVar97._8_8_ = (uint64_t)(dVar81 - dVar99) & _UNK_023908f8;
              auVar84._8_8_ = local_208;
              auVar84._0_8_ = local_208;
              piVar50[1] = iVar43;
              iVar42 = *(int *)(lVar76 + 0x18);
              iVar43 = iVar42 + 7;
              if (-1 < iVar42) {
                iVar43 = iVar42;
              }
              pvVar56 = (void *)0x0;
              uVar65 = piVar50[2];
              if (piVar50[2] < 0) {
                uVar65 = 0;
              }
              uVar1 = (iVar43 >> 3) - 1;
              uVar54 = (uint64_t)uVar1;
              if (iVar43 >> 3 <= (int)uVar65) {
                uVar65 = uVar1;
              }
              auVar96 = divpd(auVar97,auVar84);
              uVar66 = (uint64_t)(int)uVar65;
              if (lVar70 < *(int64_t *)(lVar14 + uVar66 * 8)) {
                do {
                  bVar77 = uVar66 == 0;
                  uVar66 = uVar66 - 1;
                  if (bVar77) {
                    uVar66 = 0;
                    if ((int)uVar1 < 1) goto LAB_018397fd;
                    goto LAB_018397e6;
                  }
                } while (lVar70 < *(int64_t *)(lVar14 + uVar66 * 8));
                uVar65 = (uint)uVar66;
              }
              else {
                pvVar56 = (void *)((int64_t)(int)uVar1 - uVar66);
                pvVar68 = (void *)0x0;
                do {
                  if (pvVar56 == pvVar68) goto LAB_01839800;
                  pvVar2 = (void *)((int64_t)pvVar68 + 1);
                  lVar76 = (int64_t)pvVar68 * 8;
                  pvVar68 = pvVar2;
                } while (*(int64_t *)(lVar14 + uVar66 * 8 + 8 + lVar76) <= lVar70);
                uVar65 = (uVar65 + (int)pvVar2) - 1;
                uVar66 = (uint64_t)uVar65;
              }
              if ((int)uVar65 < (int)uVar1) {
LAB_018397e6:
                pvVar56 = (void *)(int64_t)(int)uVar66;
                if (*(int64_t *)(lVar14 + 8 + (int64_t)pvVar56 * 8) - lVar70 <
                    lVar70 - *(int64_t *)(lVar14 + (int64_t)pvVar56 * 8)) {
                  uVar66 = (uint64_t)((int)uVar66 + 1);
                }
              }
LAB_018397fd:
              uVar54 = uVar66 & 0xffffffff;
LAB_01839800:
              local_148 = g_0240d420 - auVar96._0_8_;
              dStack_140 = _UNK_0240d428 - auVar96._8_8_;
              piVar50[2] = (int)uVar54;
              lVar76 = 3;
            }
            dVar81 = g_0238fee8 / auVar101._0_8_;
            uVar66 = 0;
            while( true ) {
              lVar70 = (int64_t)piVar50[uVar66];
              *(void*)(local_40[2] + uVar66 * 4) =
                   *(void*)(*(int64_t *)(*local_res8 + 0x10) + lVar70 * 4);
              lVar67 = *(int64_t *)(*(int64_t *)(local_218 + 0x10) + lVar70 * 8);
              if (lVar67 != 0) {
                FUN_00d50b00();
              }
              uVar82 = FUN_00d233f0();
              if (lVar67 != 0) {
                uVar82 = FUN_00d50b20();
              }
              plVar61 = *(int64_t **)(*(int64_t *)(lVar12 + 0x10) + lVar70 * 8);
              if (plVar61 != (int64_t *)0x0) {
                uVar82 = FUN_00d50b00();
              }
              FUN_00d233f0(uVar82,uVar66 & 0xffffffff);
              if (plVar61 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              sVar69 = (size_t)uVar54;
              if (lVar76 - 1U == uVar66) break;
              piVar50 = (int *)local_40[2];
              uVar66 = uVar66 + 1;
            }
            if (bVar17 && bVar18) {
              if (local_40 == local_50) {
                if ((!bVar31) && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b00();
                  plVar62 = local_50;
                  goto joined_r0x01839aae;
                }
                if (local_40 != local_60) goto LAB_01839a3d;
LAB_01839ab0:
                plVar62 = local_60;
                bVar34 = bVar33;
                if ((!bVar33) && (plVar62 = local_60, local_40 != (int64_t *)0x0)) {
                  FUN_00d50b00();
                  plVar62 = local_60;
                  bVar34 = true;
                }
              }
              else {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                plVar62 = local_40;
                if ((bVar31) && (plVar62 = local_40, local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                  plVar62 = local_40;
                }
joined_r0x01839aae:
                local_50 = plVar62;
                bVar31 = true;
                bVar32 = true;
                if (local_40 == local_60) goto LAB_01839ab0;
LAB_01839a3d:
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                bVar34 = true;
                plVar62 = local_40;
                if ((bVar33) && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              ___bzero();
              _memcpy(pvVar56,(void *)(int64_t)(int)(uVar73 * 4),sVar69);
              pfVar15 = (float *)local_40[2];
              fVar79 = pfVar15[1];
              fVar91 = pfVar15[2];
              if (7 < (int)pVar11) {
                lVar76 = *(int64_t *)(*(int64_t *)(puVar46[2] + 8) + 0x10);
                lVar67 = *(int64_t *)(*(int64_t *)(puVar46[2] + 0x10) + 0x10);
                lVar70 = local_50[2];
                lVar14 = *(int64_t *)(*(int64_t *)(puVar47[2] + 8) + 0x10);
                lVar51 = *(int64_t *)(*(int64_t *)(puVar47[2] + 0x10) + 0x10);
                lVar58 = plVar62[2];
                lVar57 = 0;
                do {
                  *(float *)(lVar70 + 4 + lVar57) =
                       (float)((double)*(float *)(lVar67 + 4 + lVar57) * dStack_140 +
                              (double)*(float *)(lVar76 + 4 + lVar57) * local_148);
                  fVar98 = (float)((double)*(float *)(lVar51 + 4 + lVar57) * dStack_140 +
                                  (double)*(float *)(lVar14 + 4 + lVar57) * local_148);
                  auVar101 = ZEXT416((uint)fVar98);
                  *(float *)(lVar58 + 4 + lVar57) = fVar98;
                  lVar57 = lVar57 + 4;
                } while (uVar72 * 4 + -4 != lVar57);
              }
              local_b8 = (double)fVar79 * local_148 + (double)fVar91 * dStack_140;
              bVar77 = bVar31;
              if (0 < local_188) {
                if (((int64_t)pvVar44 - local_190 == 0 || (int64_t)pvVar44 < local_190) ||
                   (local_2b8 <= (int64_t)pvVar44)) {
                  if ((int64_t)pvVar44 - local_2b0 == 0 || (int64_t)pvVar44 < local_2b0)
                  goto LAB_01839d7f;
                  fVar79 = g_02390124 - (float)((int64_t)pvVar44 - local_2b0) / (float)local_188;
                }
                else {
                  fVar79 = (float)((int64_t)pvVar44 - local_190) / (float)local_188;
                }
                fVar91 = g_02390124 - fVar79;
                auVar101._0_8_ = (double)(*pfVar15 * fVar91);
                auVar101._8_8_ = 0;
                local_b8 = local_b8 * (double)fVar79 + auVar101._0_8_;
                if (7 < (int)pVar11) {
                  lVar76 = *(int64_t *)(*(int64_t *)puVar46[2] + 0x10);
                  lVar67 = local_50[2];
                  lVar70 = *(int64_t *)(*(int64_t *)puVar47[2] + 0x10);
                  lVar14 = plVar62[2];
                  uVar54 = 1;
                  if (3 < uVar7) {
                    uVar66 = lVar67 + 4;
                    uVar3 = lVar67 + uVar72 * 4;
                    uVar71 = lVar14 + 4;
                    uVar4 = lVar14 + uVar72 * 4;
                    uVar5 = lVar76 + uVar72 * 4;
                    uVar6 = lVar70 + uVar72 * 4;
                    bVar31 = bVar32;
                    if ((((uVar4 <= uVar66 || uVar3 <= uVar71) &&
                         (uVar5 <= uVar66 || uVar3 <= lVar76 + 4U)) &&
                        (uVar6 <= uVar66 || uVar3 <= lVar70 + 4U)) &&
                       ((uVar5 <= uVar71 || uVar4 <= lVar76 + 4U &&
                        (uVar6 <= uVar71 || uVar4 <= lVar70 + 4U)))) {
                      auVar101._4_4_ = fVar91;
                      auVar101._0_4_ = fVar91;
                      auVar101._8_4_ = fVar91;
                      auVar101._12_4_ = fVar91;
                      uVar54 = 0;
                      do {
                        pfVar15 = (float *)(lVar76 + 4 + uVar54 * 4);
                        fVar98 = pfVar15[1];
                        fVar19 = pfVar15[2];
                        fVar102 = pfVar15[3];
                        pfVar8 = (float *)(lVar67 + 4 + uVar54 * 4);
                        fVar105 = pfVar8[1];
                        fVar20 = pfVar8[2];
                        fVar21 = pfVar8[3];
                        pfVar9 = (float *)(lVar67 + 4 + uVar54 * 4);
                        *pfVar9 = *pfVar8 * fVar79 + *pfVar15 * fVar91;
                        pfVar9[1] = fVar105 * fVar79 + fVar98 * fVar91;
                        pfVar9[2] = fVar20 * fVar79 + fVar19 * fVar91;
                        pfVar9[3] = fVar21 * fVar79 + fVar102 * fVar91;
                        pfVar15 = (float *)(lVar70 + 4 + uVar54 * 4);
                        fVar98 = pfVar15[1];
                        fVar19 = pfVar15[2];
                        fVar102 = pfVar15[3];
                        pfVar8 = (float *)(lVar14 + 4 + uVar54 * 4);
                        fVar105 = pfVar8[1];
                        fVar20 = pfVar8[2];
                        fVar21 = pfVar8[3];
                        pfVar9 = (float *)(lVar14 + 4 + uVar54 * 4);
                        *pfVar9 = *pfVar8 * fVar79 + *pfVar15 * fVar91;
                        pfVar9[1] = fVar105 * fVar79 + fVar98 * fVar91;
                        pfVar9[2] = fVar20 * fVar79 + fVar19 * fVar91;
                        pfVar9[3] = fVar21 * fVar79 + fVar102 * fVar91;
                        uVar54 = uVar54 + 4;
                      } while (uVar60 != uVar54);
                      uVar54 = uVar60 + 1;
                      bVar77 = bVar32;
                      if (uVar7 == uVar60) goto LAB_01839d7f;
                    }
                  }
                  do {
                    *(float *)(lVar67 + uVar54 * 4) =
                         *(float *)(lVar67 + uVar54 * 4) * fVar79 +
                         *(float *)(lVar76 + uVar54 * 4) * fVar91;
                    fVar98 = *(float *)(lVar70 + uVar54 * 4) * fVar91;
                    auVar101 = ZEXT416((uint)fVar98);
                    *(float *)(lVar14 + uVar54 * 4) =
                         *(float *)(lVar14 + uVar54 * 4) * fVar79 + fVar98;
                    uVar54 = uVar54 + 1;
                    bVar77 = bVar31;
                  } while (uVar72 != uVar54);
                }
              }
LAB_01839d7f:
              local_60 = plVar62;
              bVar33 = bVar34;
              if (local_68 == (int64_t *)0x0) goto LAB_0183a45d;
LAB_01839d98:
              ___bzero();
              ___bzero();
              fVar19 = _UNK_023b557c;
              fVar98 = _UNK_023b5578;
              fVar91 = _UNK_023b5574;
              fVar79 = g_023b5570;
              if (7 < (int)pVar11) {
                lVar76 = local_60[2];
                lVar67 = local_50[2];
                lVar70 = local_68[2];
                lVar14 = local_40[2];
                lVar51 = local_40[2];
                uVar54 = 1;
                if (1 < uVar7) {
                  uVar66 = lVar14 + 4;
                  uVar71 = lVar14 + uVar72 * 4;
                  if (((lVar76 + uVar72 * 4 <= uVar66 || uVar71 <= lVar76 + 4U) &&
                      (lVar67 + uVar72 * 4 <= uVar66 || uVar71 <= lVar67 + 4U)) &&
                     (lVar70 + uVar72 * 4 <= uVar66 || uVar71 <= lVar70 + 4U)) {
                    uVar54 = 0;
                    auVar101._4_4_ = param_1;
                    auVar101._0_4_ = param_1;
                    auVar101._8_4_ = in_XMM0_Dc;
                    auVar101._12_4_ = in_XMM0_Dc;
                    do {
                      uVar82 = *(void*)(lVar76 + 4 + uVar54 * 4);
                      fVar102 = (float)((double)(float)uVar82 * local_b8);
                      fVar105 = (float)((double)(float)((uint64_t)uVar82 >> 0x20) * local_b8);
                      uVar66 = *(uint64_t *)(lVar67 + 4 + uVar54 * 4);
                      auVar107._8_8_ = 0;
                      auVar107._0_8_ = uVar66;
                      auVar109._0_4_ = (fVar79 - (fVar102 - param_1) * param_2) * (float)uVar66;
                      auVar109._4_4_ =
                           (fVar91 - (fVar105 - param_1) * param_2) * (float)(uVar66 >> 0x20);
                      auVar109._8_4_ = (fVar98 - (0.0 - in_XMM0_Dc) * 0.0) * 0.0;
                      auVar109._12_4_ = (fVar19 - (0.0 - in_XMM0_Dc) * 0.0) * 0.0;
                      auVar85._0_4_ = -(uint)(fVar102 <= param_1 && fVar102 <= fVar90);
                      auVar85._4_4_ = -(uint)(fVar105 <= param_1 && fVar105 <= fVar90);
                      auVar85._8_4_ = -(uint)(0.0 <= in_XMM0_Dc);
                      auVar85._12_4_ = -(uint)(0.0 <= in_XMM0_Dc);
                      auVar96 = blendvps(auVar109,auVar107,auVar85);
                      uVar82 = *(void*)(lVar70 + 4 + uVar54 * 4);
                      *(uint64_t *)(lVar14 + 4 + uVar54 * 4) =
                           CONCAT44((float)((double)((float)(auVar96._4_4_ &
                                                            -(uint)(fVar105 <= fVar90)) -
                                                    (float)((uint64_t)uVar82 >> 0x20)) * dVar81),
                                    (float)((double)((float)(auVar96._0_4_ &
                                                            -(uint)(fVar102 <= fVar90)) -
                                                    (float)uVar82) * dVar81));
                      auVar108._0_8_ = (double)fVar102 * dVar103;
                      auVar108._8_8_ = (double)fVar105 * dVar103;
                      *(uint8_t (*) [16])(lVar51 + 8 + uVar54 * 8) = auVar108;
                      uVar54 = uVar54 + 2;
                    } while ((uVar7 & 0xfffffffffffffffe) != uVar54);
                    uVar54 = uVar7 | 1;
                    if (uVar7 == (uVar7 & 0xfffffffffffffffe)) goto LAB_0183a030;
                  }
                }
                lVar58 = 0;
                do {
                  dVar106 = (double)*(float *)(lVar76 + uVar54 * 4 + lVar58 * 4) * local_b8;
                  fVar91 = (float)dVar106;
                  fVar79 = 0.0;
                  if ((fVar91 <= fVar90) &&
                     (fVar79 = *(float *)(lVar67 + uVar54 * 4 + lVar58 * 4), param_1 < fVar91)) {
                    auVar101._0_4_ = (fVar91 - param_1) * param_2;
                    auVar101._4_8_ = (uint64_t)dVar106 >> 0x20;
                    auVar101._12_4_ = 0.0;
                    fVar79 = fVar79 * (g_02390124 - auVar101._0_4_);
                  }
                  *(float *)(lVar14 + uVar54 * 4 + lVar58 * 4) =
                       (float)((double)(fVar79 - *(float *)(lVar70 + uVar54 * 4 + lVar58 * 4)) *
                              dVar81);
                  *(double *)(uVar54 * 8 + lVar51 + lVar58 * 8) = (double)fVar91 * dVar103;
                  lVar58 = lVar58 + 1;
                } while (uVar72 - uVar54 != lVar58);
              }
LAB_0183a030:
              lVar76 = local_2c8 + local_130;
              if (lVar45 < local_2c8 + local_130) {
                lVar76 = lVar45;
              }
              uVar54 = lVar76 - local_130;
              bVar31 = bVar77;
              if (uVar54 != 0 && local_130 <= lVar76) {
                lVar67 = *(int64_t *)(lVar13 + 0x10);
                if ((int)pVar11 < 8) {
                  if (7 < uVar54) {
                    uVar71 = uVar54 & 0xfffffffffffffff8;
                    uVar66 = (uVar71 - 8 >> 3) + 1;
                    if (uVar71 - 8 == 0) {
                      lVar70 = 0;
LAB_0183a201:
                      lVar70 = lVar70 + local_130;
                      pfVar15 = (float *)(lVar67 + lVar70 * 4);
                      fVar79 = pfVar15[1];
                      fVar91 = pfVar15[2];
                      fVar98 = pfVar15[3];
                      pfVar8 = (float *)(lVar67 + 0x10 + lVar70 * 4);
                      fVar19 = *pfVar8;
                      fVar102 = pfVar8[1];
                      fVar105 = pfVar8[2];
                      fVar20 = pfVar8[3];
                      auVar101._0_12_ = ZEXT812(0);
                      auVar101._12_4_ = 0.0;
                      pfVar8 = (float *)(lVar67 + lVar70 * 4);
                      *pfVar8 = *pfVar15 + 0.0;
                      pfVar8[1] = fVar79 + 0.0;
                      pfVar8[2] = fVar91 + 0.0;
                      pfVar8[3] = fVar98 + 0.0;
                      pfVar15 = (float *)(lVar67 + 0x10 + lVar70 * 4);
                      *pfVar15 = fVar19 + 0.0;
                      pfVar15[1] = fVar102 + 0.0;
                      pfVar15[2] = fVar105 + 0.0;
                      pfVar15[3] = fVar20 + 0.0;
                    }
                    else {
                      lVar14 = lVar67 + local_130 * 4;
                      lVar51 = -(uVar66 & 0xfffffffffffffffe);
                      lVar70 = 0;
                      do {
                        pfVar8 = (float *)(lVar14 + lVar70 * 4);
                        fVar79 = pfVar8[1];
                        fVar91 = pfVar8[2];
                        fVar98 = pfVar8[3];
                        pfVar15 = (float *)(lVar14 + 0x10 + lVar70 * 4);
                        fVar19 = *pfVar15;
                        fVar102 = pfVar15[1];
                        fVar105 = pfVar15[2];
                        fVar20 = pfVar15[3];
                        pfVar15 = (float *)(lVar14 + 0x20 + lVar70 * 4);
                        fVar21 = *pfVar15;
                        fVar22 = pfVar15[1];
                        fVar23 = pfVar15[2];
                        fVar24 = pfVar15[3];
                        pfVar15 = (float *)(lVar14 + 0x30 + lVar70 * 4);
                        fVar25 = *pfVar15;
                        fVar26 = pfVar15[1];
                        fVar27 = pfVar15[2];
                        fVar28 = pfVar15[3];
                        pfVar15 = (float *)(lVar14 + lVar70 * 4);
                        *pfVar15 = *pfVar8 + 0.0;
                        pfVar15[1] = fVar79 + 0.0;
                        pfVar15[2] = fVar91 + 0.0;
                        pfVar15[3] = fVar98 + 0.0;
                        pfVar15 = (float *)(lVar14 + 0x10 + lVar70 * 4);
                        *pfVar15 = fVar19 + 0.0;
                        pfVar15[1] = fVar102 + 0.0;
                        pfVar15[2] = fVar105 + 0.0;
                        pfVar15[3] = fVar20 + 0.0;
                        auVar101._0_4_ = fVar21 + 0.0;
                        auVar101._4_4_ = fVar22 + 0.0;
                        auVar101._8_4_ = fVar23 + 0.0;
                        auVar101._12_4_ = fVar24 + 0.0;
                        auVar104._0_4_ = fVar25 + 0.0;
                        auVar104._4_4_ = fVar26 + 0.0;
                        auVar104._8_4_ = fVar27 + 0.0;
                        auVar104._12_4_ = fVar28 + 0.0;
                        *(uint8_t (*) [16])(lVar14 + 0x20 + lVar70 * 4) = auVar101;
                        *(uint8_t (*) [16])(lVar14 + 0x30 + lVar70 * 4) = auVar104;
                        lVar70 = lVar70 + 0x10;
                        lVar51 = lVar51 + 2;
                      } while (lVar51 != 0);
                      if ((uVar66 & 1) != 0) goto LAB_0183a201;
                    }
                    if (uVar54 == uVar71) goto LAB_0183a4f4;
                    local_130 = local_130 + uVar71;
                  }
                  do {
                    *(float *)(lVar67 + local_130 * 4) = *(float *)(lVar67 + local_130 * 4) + 0.0;
                    local_130 = local_130 + 1;
                  } while (lVar76 != local_130);
                }
                else {
                  lVar70 = local_68[2];
                  lVar14 = local_40[2];
                  lVar51 = local_40[2];
                  lVar58 = local_40[2];
                  do {
                    plVar62 = g_028afc08;
                    fVar79 = 0.0;
                    uVar54 = 1;
                    do {
                      fVar91 = *(float *)(lVar70 + uVar54 * 4);
                      if (g_02394274 < fVar91) {
                        fVar79 = fVar79 + *(float *)(plVar62[2] +
                                                    (int64_t)(int)*(double *)(lVar51 + uVar54 * 8)
                                                    * 4) * fVar91;
                      }
                      for (dVar81 = *(double *)(lVar14 + uVar54 * 8) +
                                    *(double *)(lVar51 + uVar54 * 8); g_02417050 <= dVar81;
                          dVar81 = dVar81 + g_02417058) {
                      }
                      *(double *)(lVar51 + uVar54 * 8) = dVar81;
                      fVar91 = fVar91 + *(float *)(lVar58 + uVar54 * 4);
                      auVar101 = ZEXT816(0);
                      if (0.0 <= fVar91) {
                        auVar101._0_4_ = fVar91;
                      }
                      *(int *)(lVar70 + uVar54 * 4) = auVar101._0_4_;
                      uVar54 = uVar54 + 1;
                    } while (uVar54 != uVar72);
                    *(float *)(lVar67 + local_130 * 4) = fVar79 + *(float *)(lVar67 + local_130 * 4)
                    ;
                    local_130 = local_130 + 1;
                  } while (local_130 != lVar76);
                }
              }
            }
            else {
              fVar79 = *(float *)local_40[2];
              plVar62 = *(int64_t **)puVar46[2];
              if (local_50 == plVar62) {
                plVar62 = local_50;
                if (bVar31) {
                  bVar77 = true;
                }
                else if (local_50 == (int64_t *)0x0) {
                  bVar77 = false;
                }
                else {
                  bVar32 = true;
                  bVar77 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (plVar62 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                bVar32 = true;
                bVar77 = true;
                if ((bVar31) && (local_50 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_b8 = (double)fVar79;
              plVar16 = *(int64_t **)puVar47[2];
              if (local_60 == plVar16) {
                if ((!bVar33) && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b00();
                  bVar33 = true;
                }
              }
              else {
                if (plVar16 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
                if ((bVar33) && (local_60 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                bVar33 = true;
                local_60 = plVar16;
              }
              local_50 = plVar62;
              if (local_68 != (int64_t *)0x0) goto LAB_01839d98;
LAB_0183a45d:
              FUN_00c8e4f0();
              if (plVar61 != (int64_t *)0x0) {
                FUN_00d50b00(plVar61);
              }
              FUN_00c92170();
              FUN_00c92160();
              local_68 = plVar61;
              bVar31 = bVar77;
              if (plVar61 != (int64_t *)0x0) {
                bVar29 = true;
              }
            }
LAB_0183a4f4:
            local_38 = '\0';
            local_198 = local_198 + g_0238fee8 / local_b8;
            iVar42 = FUN_00e7d850(dVar80 * local_198);
            local_130 = lVar55;
            bVar77 = bVar17 && bVar18;
          } while (iVar42 < local_1f0);
          if ((bVar30) && (local_80 != 0)) {
            FUN_00d50b20();
          }
          lVar49 = local_218;
          if (puVar48 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (puVar47 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (puVar46 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
            FUN_00d50b20();
            FUN_00d50b20();
            FUN_00d50b20();
          }
          if ((bVar29) && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
          if ((bVar33) && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((bVar31) && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if (lVar59 != 0) {
            FUN_00d50b20();
          }
          if (lVar12 != 0) {
            FUN_00d50b20();
          }
          if (lVar49 != 0) {
            FUN_00d50b20();
          }
          uVar75 = uVar75 + 1;
          local_40 = plVar61;
        } while (uVar75 != uVar10);
      }
    }
  }
  return;
}

