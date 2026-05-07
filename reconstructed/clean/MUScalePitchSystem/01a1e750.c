// Function: FUN_01a1e750
// Address: 01a1e750
// Size: 5981 bytes
// Class: MUScalePitchSystem
// String references:
//   "MUScalePitchSystem"
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


void FUN_01a1e750(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint8_t auVar1 [16];
  bool bVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  void*puVar12;
  int64_t **pplVar13;
  void *pvVar14;
  int64_t lVar15;
  char *pcVar16;
  void* pVar17;
  int64_t *in_RCX;
  int64_t *plVar18;
  uint64_t uVar19;
  char *pcVar20;
  int64_t *plVar21;
  char in_DL;
  int64_t *plVar22;
  void*arg1;
  int64_t *this_ptr;
  int64_t *plVar23;
  int iVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  uint32_t uVar28;
  uint64_t uVar29;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  float fVar35;
  uint64_t in_XMM1_Qb;
  uint8_t auVar36 [16];
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint64_t in_XMM2_Qb;
  uint8_t auVar39 [16];
  uint8_t auVar40 [16];
  uint8_t auVar41 [16];
  uint8_t auVar42 [16];
  uint64_t in_XMM3_Qb;
  uint8_t auVar43 [16];
  uint8_t auVar44 [16];
  uint8_t auVar45 [16];
  float fStack_2b4;
  float fStack_2ac;
  float local_298;
  uint uStack_294;
  uint uStack_290;
  uint uStack_28c;
  float fStack_284;
  float fStack_27c;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t *local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t *local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  uint32_t local_1e8;
  uint32_t uStack_1e4;
  uint32_t uStack_1e0;
  uint32_t uStack_1dc;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  uint8_t local_1a8 [16];
  int local_18c;
  int64_t *local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t *local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  uint64_t local_d8;
  uint64_t uStack_d0;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_80;
  char local_58 [8];
  int64_t *local_50;
  char local_42;
  char local_41;
  int64_t *local_40;
  char local_38 [8];
  
  local_1e8 = (uint32_t)param_3;
  uStack_1e4 = (uint32_t)((uint64_t)param_3 >> 0x20);
  uStack_1e0 = (uint32_t)in_XMM2_Qb;
  uStack_1dc = (uint32_t)((uint64_t)in_XMM2_Qb >> 0x20);
  plVar18 = in_RCX;
  uVar29 = (**(code **)(*this_ptr + 0x640))();
  plVar4 = local_40;
  pVar17 = (void*)plVar18;
  if ((((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) &&
      (uVar29 = FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (int64_t *)0x0)) {
    uVar29 = FUN_00d50b20();
  }
  lVar15 = g_026e41f0;
  if (g_026e41f0 != 0) {
    uVar29 = FUN_00d50b00();
  }
  local_248 = lVar15;
  local_240 = '\x01';
  (**(code **)(*plVar4 + 0x3b0))(uVar29,&local_248);
  plVar18 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  fStack_2ac = (float)((uint64_t)in_XMM1_Qb >> 0x20);
  fStack_27c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
  if ((local_240 != '\0') && (local_248 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  (**(code **)(*this_ptr + 0x928))();
  plVar21 = local_40;
  local_e8 = local_40;
  fStack_284 = (float)((uint64_t)param_1 >> 0x20);
  fStack_2b4 = (float)((uint64_t)param_2 >> 0x20);
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_e0 = '\x01';
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01a1e88f;
    }
    local_e8 = (int64_t *)0x0;
    local_e0 = '\x01';
  }
  else {
    local_e0 = '\x01';
LAB_01a1e88f:
    if (plVar21 != (int64_t *)0x0) {
      if ((g_028b2a40 == (void*)0x0) || (g_028b2a49 == '\0')) {
        FUN_00e8cb50();
        if (g_028b2a40 == (void*)0x0) {
          puVar12 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar17 = 0x26792c0;
          *puVar12 = &g_026792c0;
          puVar12[5] = 0;
          *(void*)((int64_t)puVar12 + 0xc) = 0;
          *(void*)((int64_t)puVar12 + 0x14) = 0;
          *(void*)((int64_t)puVar12 + 0x19) = 0;
          (*g_026792d8)();
          if (g_028b2a40 == puVar12) {
            bVar26 = false;
            bVar25 = false;
          }
          else {
            bVar26 = true;
            bVar25 = true;
            bVar27 = g_028b2a40 != (void*)0x0;
            g_028b2a40 = puVar12;
            if (bVar27) {
              FUN_00d50b20();
            }
          }
          if (g_028b2a48 == '\0') {
            g_028b2a48 = '\x01';
            FUN_00e8cb90();
            bVar25 = bVar26;
          }
          if (!bVar25) {
            FUN_00d50b20();
          }
          puVar12 = g_028b2a40;
          if ((*(float *)(g_028b2a40 + 2) != g_02390128) ||
             (NAN(*(float *)(g_028b2a40 + 2)) || NAN(g_02390128))) {
            *(void*)(g_028b2a40 + 2) = 0x3f333333;
            *(void*)((int64_t)puVar12 + 0xe) = 0xb3;
          }
          if ((*(float *)((int64_t)puVar12 + 0x14) != g_02390128) ||
             (NAN(*(float *)((int64_t)puVar12 + 0x14)) || NAN(g_02390128))) {
            *(void*)((int64_t)puVar12 + 0x14) = 0x3f333333;
            *(void*)((int64_t)puVar12 + 0xd) = 0xb3;
          }
          if ((*(float *)(puVar12 + 3) != g_02390128) ||
             (NAN(*(float *)(puVar12 + 3)) || NAN(g_02390128))) {
            *(void*)(puVar12 + 3) = 0x3f333333;
            *(void*)((int64_t)puVar12 + 0xc) = 0xb3;
          }
          g_028b2a49 = '\x01';
          FUN_00e8cb70();
        }
        else {
          g_028b2a49 = '\x01';
          FUN_00e8cb70();
        }
      }
      FUN_01a1d6e0();
      uVar9 = (**(code **)(*local_40 + 0xd08))();
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
      FUN_01a20c30();
      plVar5 = local_40;
      if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      local_18c = (int)this_ptr[0x29];
      if ((g_027c0160 == '\0') && (iVar10 = ___cxa_guard_acquire(), iVar10 != 0)) {
        g_0270ab28 = FUN_0015ea50();
        g_0270ab10 = "MUScalePitchSystem";
        g_0270ab18 = 0x78;
        pVar17 = 0x15ecf0;
        g_0270ab20 = FUN_0015ecf0;
        g_0270ab30 = 0;
        ram_000000000270ab38 = 0;
        g_0270ab40 = 0;
        ram_000000000270ab48 = 0;
        g_0270ab50 = 0;
        ram_000000000270ab58 = 0;
        g_0270ab60 = 0;
        ram_000000000270ab68 = 0;
        g_0270ab70 = 0;
        ram_000000000270ab78 = 0;
        g_0270ab80 = 0;
        ram_000000000270ab88 = 0;
        g_0270ab90 = 0;
        ram_000000000270ab98 = 0;
        g_0270aba0 = 0;
        ram_000000000270aba8 = 0;
        g_0270abb0 = 0;
        ram_000000000270abb8 = 0;
        g_0270abc0 = 0;
        ram_000000000270abc8 = 0;
        g_0270abd0 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*plVar21 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') {
        pplVar13 = (int64_t **)&g_02802688;
      }
      else {
        pplVar13 = &local_e8;
      }
      plVar21 = *pplVar13;
      cVar6 = *(char *)(pplVar13 + 1);
      if ((cVar6 != '\0') && (plVar21 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      auVar32._4_4_ = fStack_284 + fStack_2b4;
      auVar32._12_4_ = fStack_27c + fStack_2ac;
      auVar32._0_4_ = auVar32._4_4_;
      auVar32._8_4_ = auVar32._12_4_;
      auVar38._4_12_ = auVar32._4_12_;
      auVar38._0_4_ = auVar32._4_4_ + g_02390d00;
      uVar28 = (**(code **)(*this_ptr + 0x920))(auVar38._0_8_);
      plVar22 = local_e8;
      local_1a8._0_4_ = uVar28;
      pvVar14 = _pthread_getspecific(pVar17);
      plVar23 = plVar22;
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        plVar23 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      iVar10 = (**(code **)(*plVar23 + 0x3a8))();
      uVar28 = (**(code **)(*this_ptr + 0x920))();
      local_1a8._0_4_ = uVar28;
      pvVar14 = _pthread_getspecific(pVar17);
      if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
        plVar22 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
      }
      iVar11 = (**(code **)(*plVar22 + 0x3a8))();
      plVar22 = local_e8;
      bVar25 = local_18c == 2;
      bVar26 = local_18c == 4;
      uVar19 = (uint64_t)CONCAT31((int3)((uint)local_18c >> 8),bVar26);
      local_50 = plVar21;
      if (iVar10 + -1 <= iVar11 + 1) {
        do {
          pVar17 = (void*)uVar19;
          pvVar14 = _pthread_getspecific(pVar17);
          plVar21 = plVar22;
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            plVar21 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          iVar24 = iVar10 + -1;
          (**(code **)(*plVar21 + 0x3a0))();
          local_1a8._0_8_ = (**(code **)(*this_ptr + 0x918))();
          local_1a8._8_8_ = extraout_XMM0_Qb;
          pvVar14 = _pthread_getspecific(pVar17);
          plVar21 = plVar22;
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            plVar21 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar21 + 0x3a0))();
          local_d8 = (**(code **)(*this_ptr + 0x918))();
          uStack_d0 = extraout_XMM0_Qb_00;
          pvVar14 = _pthread_getspecific(pVar17);
          plVar21 = plVar22;
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            plVar21 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar21 + 0x3a0))();
          uVar29 = (**(code **)(*this_ptr + 0x918))();
          cVar7 = FUN_00e7b510();
          if (uVar9 == 2) {
            bVar27 = false;
            if ((local_18c != 2) && (local_18c != 4)) {
              if (local_50 == (int64_t *)0x0) {
                bVar27 = false;
              }
              else {
                pvVar14 = _pthread_getspecific(pVar17);
                if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar17 = (void*)local_50;
                }
                FUN_0173b6f0();
                pvVar14 = _pthread_getspecific(pVar17);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_01736e70();
                FUN_00d23310();
                plVar21 = local_40;
                local_58[0] = local_38[0];
                pcVar20 = local_58;
                pcVar16 = local_38;
                if (local_38[0] == '\0') {
                  pcVar16 = pcVar20;
                }
                *pcVar16 = '\0';
                if ((local_38[0] != '\0') && (plVar21 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                pVar17 = (void*)pcVar20;
                pvVar14 = _pthread_getspecific(pVar17);
                if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                  pVar17 = (void*)local_50;
                }
                FUN_01740240();
                bVar27 = plVar21 == local_40;
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_58[0] != '\0') && (plVar21 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_230 != '\0') && (local_238 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (cVar7 == '\0') {
              pvVar14 = _pthread_getspecific(pVar17);
              plVar21 = plVar22;
              if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                plVar21 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
              cVar7 = (**(code **)(*plVar21 + 0x3b8))();
              if (cVar7 != '\0') goto LAB_01a1f255;
              FUN_01a1e380();
              plVar21 = local_40;
              local_1c0 = 0;
              if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              local_1c8 = plVar21;
              local_1c0 = '\x01';
              FUN_01d488d0();
              if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
LAB_01a1f188:
              FUN_01a1dd20();
              plVar21 = local_40;
              local_1d0 = 0;
              if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              local_1d8 = plVar21;
              local_1d0 = '\x01';
              FUN_01d488d0();
              if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            bVar27 = false;
            if (cVar7 != '\0') goto LAB_01a1f188;
LAB_01a1f255:
            FUN_01a1e050();
            plVar21 = local_40;
            local_1b0 = 0;
            if ((local_38[0] == '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            local_1b8 = plVar21;
            local_1b0 = '\x01';
            FUN_01d488d0();
            if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          auVar30._0_4_ = local_1a8._0_4_ & g_023945e0;
          auVar30._4_4_ = local_1a8._4_4_ & _UNK_023945e4;
          auVar30._8_4_ = local_1a8._8_4_ & _UNK_023945e8;
          auVar30._12_4_ = local_1a8._12_4_ & _UNK_023945ec;
          auVar31._4_12_ = SUB1612(auVar30 | g_023945f0,4);
          auVar31._0_4_ = SUB164(auVar30 | g_023945f0,0) + (float)local_1a8._0_4_;
          auVar32 = roundss(auVar31,auVar31,0xb);
          auVar36._0_4_ = (uint)(float)local_d8 & g_023945e0;
          auVar36._4_4_ = local_d8._4_4_ & _UNK_023945e4;
          auVar36._8_4_ = (uint)uStack_d0 & _UNK_023945e8;
          auVar36._12_4_ = uStack_d0._4_4_ & _UNK_023945ec;
          auVar37._4_12_ = SUB1612(auVar36 | g_023945f0,4);
          auVar37._0_4_ = SUB164(auVar36 | g_023945f0,0) + (float)local_d8;
          auVar38 = roundss(auVar37,auVar37,0xb);
          local_298 = (float)uVar29;
          uStack_294 = (uint)((uint64_t)uVar29 >> 0x20);
          uStack_290 = (uint)extraout_XMM0_Qb_01;
          uStack_28c = (uint)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
          auVar39._0_4_ = (uint)local_298 & g_023945e0;
          auVar39._4_4_ = uStack_294 & _UNK_023945e4;
          auVar39._8_4_ = uStack_290 & _UNK_023945e8;
          auVar39._12_4_ = uStack_28c & _UNK_023945ec;
          auVar40._4_12_ = SUB1612(auVar39 | ZEXT416(g_02394dc8),4);
          auVar40._0_4_ = SUB164(auVar39 | ZEXT416(g_02394dc8),0) + local_298;
          auVar41 = roundss(auVar40,auVar40,0xb);
          fVar35 = (auVar38._0_4_ + auVar32._0_4_) * g_0239011c;
          auVar43._0_4_ = (uint)fVar35 & g_023945e0;
          auVar43._4_4_ = auVar38._4_4_ & _UNK_023945e4;
          auVar43._8_4_ = auVar38._8_4_ & _UNK_023945e8;
          auVar43._12_4_ = auVar38._12_4_ & _UNK_023945ec;
          auVar44._4_12_ = SUB1612(auVar43 | ZEXT416(g_02394dc8),4);
          auVar44._0_4_ = SUB164(auVar43 | ZEXT416(g_02394dc8),0) + fVar35;
          auVar38 = roundss(auVar44,auVar44,0xb);
          fVar35 = (auVar41._0_4_ + auVar32._0_4_) * g_0239011c;
          auVar33._0_4_ = (uint)fVar35 & g_023945e0;
          auVar33._4_4_ = auVar41._4_4_ & _UNK_023945e4;
          auVar33._8_4_ = auVar41._8_4_ & _UNK_023945e8;
          auVar33._12_4_ = auVar41._12_4_ & _UNK_023945ec;
          auVar34._4_12_ = SUB1612(auVar33 | ZEXT416(g_02394dc8),4);
          auVar34._0_4_ = SUB164(auVar33 | ZEXT416(g_02394dc8),0) + fVar35;
          auVar42._0_12_ = ZEXT812(0);
          auVar42._12_4_ = 0;
          local_1a8 = roundss(auVar42,auVar34,0xb);
          auVar45._4_12_ = auVar38._4_12_;
          auVar45._0_4_ = auVar38._0_4_ - local_1a8._0_4_;
          auVar1._4_4_ = uStack_1e4;
          auVar1._0_4_ = local_1e8;
          auVar1._8_4_ = uStack_1e0;
          auVar1._12_4_ = uStack_1dc;
          insertps(auVar1,local_1a8,0x10);
          auVar41._8_8_ = in_XMM3_Qb;
          auVar41._0_8_ = param_4;
          insertps(auVar41,auVar45,0x10);
          (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
          if (plVar5 != (int64_t *)0x0) {
            local_228 = plVar5;
            local_220 = '\0';
            FUN_01d48a10();
            if ((local_220 != '\0') && (local_228 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar15 = g_026e3bc8;
            if (g_026e3bc8 != 0) {
              FUN_00d50b00();
            }
            local_d8 = lVar15;
            pvVar14 = _pthread_getspecific(pVar17);
            plVar21 = plVar22;
            if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
              plVar21 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
            cVar8 = (**(code **)(*plVar21 + 1000))();
            lVar3 = g_027e1380;
            local_42 = '\x01';
            lVar15 = local_d8;
            cVar7 = in_DL;
            if (cVar8 != '\0') {
              lVar15 = *in_RCX;
              if (lVar15 == 0) {
                if (g_027e1380 != 0) {
                  FUN_00d50b00();
                }
                if (local_d8 == lVar3) {
                  if (local_d8 == 0) {
                    local_d8 = 0;
                    lVar15 = local_d8;
                    cVar7 = in_DL;
                  }
                  else {
                    FUN_00d50b20();
                    lVar15 = local_d8;
                    cVar7 = in_DL;
                  }
                }
                else {
                  if (local_d8 != 0) {
                    FUN_00d50b20();
                  }
                  local_d8 = lVar3;
                  lVar15 = local_d8;
                  cVar7 = in_DL;
                }
              }
              else {
                local_41 = '\x01';
                if (lVar15 == local_d8) {
                  local_42 = '\x01';
                  lVar15 = local_d8;
                  cVar7 = local_41;
                }
                else {
                  local_42 = (char)in_RCX[1];
                  if (local_42 != '\0') {
                    FUN_00d50b00();
                  }
                  cVar7 = local_41;
                  if (local_d8 != 0) {
                    FUN_00d50b20();
                    cVar7 = local_41;
                  }
                }
              }
            }
            local_41 = cVar7;
            local_d8 = lVar15;
            FUN_01a1d6e0();
            plVar21 = local_40;
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar21 == (int64_t *)0x0) {
              local_80 = (int64_t *)0x0;
              bVar2 = false;
            }
            else {
              FUN_01a1d6e0();
              local_218 = local_d8;
              local_210 = '\0';
              FUN_01998ff0(&local_218,iVar24,0);
              local_80 = local_40;
              plVar21 = local_40;
              if (local_40 == (int64_t *)0x0) {
                bVar2 = false;
              }
              else if (local_38[0] == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38[0] = '\0';
                bVar2 = true;
              }
              pVar17 = (void*)plVar21;
              if ((local_210 != '\0') && (local_218 != 0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (uVar9 == 0 || (bVar25 || bVar26)) {
              FUN_01a34870();
              local_188 = local_40;
              local_180 = 0;
              if (local_38[0] == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38[0] = '\0';
              }
              local_180 = '\x01';
              FUN_01d488d0();
              if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (uVar9 == 1) {
              FUN_01a34870();
              local_178 = local_40;
              local_170 = 0;
              if (local_38[0] == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38[0] = '\0';
              }
              local_170 = '\x01';
              FUN_01d488d0();
              if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (bVar27) {
              (**(code **)(*this_ptr + 0x640))();
              (**(code **)(*local_b0 + 0x390))();
              local_168 = local_40;
              local_160 = 0;
              if (local_38[0] == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38[0] = '\0';
              }
              local_160 = '\x01';
              FUN_01d488d0();
              if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar14 = _pthread_getspecific(pVar17);
              plVar21 = plVar22;
              if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                plVar21 = (int64_t *)plVar22[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
              cVar7 = (**(code **)(*plVar21 + 0x3b8))();
              if (cVar7 == '\0') {
                (**(code **)(*this_ptr + 0x640))();
                (**(code **)(*local_b0 + 0x3a8))();
                local_148 = local_40;
                local_140 = 0;
                if (local_38[0] == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_140 = '\x01';
                FUN_01d488d0();
                if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                FUN_01cfc6a0();
                local_158 = local_40;
                local_150 = 0;
                if (local_38[0] == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38[0] = '\0';
                }
                local_150 = '\x01';
                FUN_01d488d0();
                if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            if (local_41 != '\0') {
              local_208 = local_80;
              local_200 = '\0';
              (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
              if ((local_200 != '\0') && (local_208 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_42 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if ((bVar2) && (local_80 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar19 = (uint64_t)uVar9;
          if (uVar9 == 0) {
            FUN_01cfc6a0();
            local_138 = local_40;
            local_130 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_130 = '\x01';
            FUN_01d488d0();
            if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if ((uVar9 == 2) && (bVar27)) {
            FUN_01cfc6a0();
            local_128 = local_40;
            local_120 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_120 = '\x01';
            FUN_01d488d0();
            if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            bVar27 = true;
          }
          else {
            FUN_01cfc6a0();
            local_118 = local_40;
            local_110 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_110 = '\x01';
            FUN_01d488d0();
            if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_1a8._0_4_ = local_1a8._0_4_ + auVar45._0_4_;
          (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
          if ((uVar9 == 2) && (bVar27)) {
            FUN_01cfc6a0();
            local_108 = local_40;
            local_100 = 0;
            if (local_38[0] == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38[0] = '\0';
            }
            local_100 = '\x01';
            FUN_01d488d0();
            if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
          }
          iVar10 = iVar10 + 1;
        } while (iVar24 <= iVar11);
      }
      if ((cVar6 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      goto LAB_01a1ed23;
    }
  }
  (**(code **)(*plVar4 + 0x398))();
  local_f8 = local_40;
  local_f0 = 0;
  if (local_38[0] == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38[0] = '\0';
  }
  local_f0 = '\x01';
  FUN_01d488d0();
  if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3b0))();
LAB_01a1ed23:
  local_1f8 = plVar18;
  local_1f0 = '\0';
  FUN_01d488d0();
  if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

