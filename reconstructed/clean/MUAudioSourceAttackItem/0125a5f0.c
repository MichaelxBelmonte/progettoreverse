// Function: FUN_0125a5f0
// Address: 0125a5f0
// Size: 12017 bytes
// Class: MUAudioSourceAttackItem
// String references:
//   "MUAudioSourceAttackItem"

void FUN_0125a5f0(int64_t **param_1)

{
  int64_t lVar1;
  uint64_t uVar2;
  double dVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  char cVar6;
  byte bVar7;
  uint32_t uVar8;
  int64_t lVar9;
  void *pvVar10;
  int64_t *plVar11;
  int64_t **pplVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  undefined7 extraout_var;
  undefined7 uVar16;
  undefined7 extraout_var_00;
  int64_t **pplVar15;
  void* pVar17;
  int64_t *plVar18;
  char *pcVar19;
  int64_t **pplVar20;
  uint32_t unaff_ESI;
  int iVar21;
  int64_t this_ptr;
  bool bVar22;
  undefined7 uVar24;
  double *pdVar23;
  int64_t **unaff_R13;
  uint32_t extraout_XMM0_Da;
  double dVar25;
  uint32_t uVar26;
  uint32_t extraout_XMM0_Db;
  double dVar27;
  double dVar28;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  uint8_t local_270;
  uint64_t local_268;
  uint8_t local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  uint8_t local_220;
  int64_t local_218;
  uint8_t local_210;
  uint64_t local_208;
  uint8_t local_200;
  double local_1f8;
  double local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t **local_1d8;
  char local_1d0;
  uint32_t local_1c4;
  int64_t **local_1c0;
  char local_1b8;
  int64_t *local_1b0;
  char local_1a8;
  undefined7 uStack_1a7;
  char local_1a0;
  uint64_t local_198;
  double local_190;
  int64_t *local_188;
  char local_180;
  uint32_t local_174;
  uint64_t local_170;
  double local_168;
  int64_t **local_160;
  double local_158;
  double local_150;
  int64_t **local_148;
  double local_140;
  int64_t **local_138;
  char local_130 [8];
  int64_t **local_128;
  uint64_t local_120;
  int local_118;
  double local_110;
  int64_t **local_108;
  double dStack_100;
  uint8_t local_f8 [24];
  int64_t **local_e0;
  double local_d8;
  int64_t **local_d0;
  int64_t **local_c8;
  double local_b8 [16];
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_174 = unaff_ESI;
  uVar8 = FUN_0126b4b0();
  FUN_0125e7c0();
  local_d0 = local_138;
  if ((((local_130[0] == '\0') && (local_138 != (int64_t **)0x0)) &&
      (FUN_00d50b00(), local_130[0] != '\0')) && (local_138 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  local_110 = (double)CONCAT44(local_110._4_4_,uVar8);
  if (*(int64_t ***)(this_ptr + 0xe0) == (int64_t **)0x0) {
    local_198 = 0;
    plVar18 = (int64_t *)0x0;
  }
  else {
    local_130[0] = '\0';
    local_138 = (int64_t **)0x0;
    local_120 = 0xffffffff;
    local_118 = 0;
    unaff_R13 = &local_188;
    local_120._4_4_ = 0;
    local_198 = 0;
    local_128 = *(int64_t ***)(this_ptr + 0xe0);
    while( true ) {
      if (local_120._4_4_ != 0) {
        if (local_120._4_4_ < 1) {
          iVar21 = -local_120._4_4_;
        }
        else {
          iVar21 = (int)local_120 - local_120._4_4_;
          local_120 = CONCAT44(local_120._4_4_,iVar21);
          FUN_00d23690();
          local_118 = local_118 + local_120._4_4_;
          iVar21 = 0;
        }
        local_120 = CONCAT44(iVar21,(int)local_120);
      }
      lVar9 = (int64_t)(int)local_120;
      iVar21 = (int)local_120 + 1;
      local_120 = CONCAT44(local_120._4_4_,iVar21);
      if (*(int *)((int64_t)local_128 + 0xc) <= iVar21) break;
      plVar18 = local_128[2];
      local_138 = (int64_t **)plVar18[lVar9 + 1];
      pvVar10 = _pthread_getspecific((void*)plVar18);
      pVar17 = (void*)plVar18;
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef460();
      plVar18 = local_188;
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar18 != (int64_t *)0x0) {
        pvVar10 = _pthread_getspecific(pVar17);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef460();
        pvVar10 = _pthread_getspecific(pVar17);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dd6a0();
        plVar18 = local_188;
        if ((g_02790f20 == '\0') && (iVar21 = ___cxa_guard_acquire(), iVar21 != 0)) {
          g_0272f7c8 = FUN_007ef2d0();
          g_0272f7b0 = "MUAudioSourceAttackItem";
          g_0272f7b8 = 0xe8;
          g_0272f7c0 = FUN_007ef270;
          g_0272f7d0 = 0;
          ram_000000000272f7d8 = 0;
          g_0272f7e0 = 0;
          ram_000000000272f7e8 = 0;
          g_0272f7f0 = 0;
          ram_000000000272f7f8 = 0;
          g_0272f800 = 0;
          ram_000000000272f808 = 0;
          g_0272f810 = 0;
          ram_000000000272f818 = 0;
          g_0272f820 = 0;
          ram_000000000272f828 = 0;
          g_0272f830 = 0;
          ram_000000000272f838 = 0;
          g_0272f840 = 0;
          ram_000000000272f848 = 0;
          g_0272f850 = 0;
          ram_000000000272f858 = 0;
          g_0272f860 = 0;
          ram_000000000272f868 = 0;
          g_0272f870 = 0;
          ___cxa_guard_release();
        }
        param_1 = (int64_t **)&g_02802688;
        if (plVar18 != (int64_t *)0x0) {
          (**(code **)(*plVar18 + 0x360))();
          cVar6 = FUN_00e85ea0();
          param_1 = unaff_R13;
          if (cVar6 == '\0') {
            param_1 = (int64_t **)&g_02802688;
          }
        }
        plVar18 = *param_1;
        if (plVar18 == (int64_t *)0x0) {
          plVar18 = (int64_t *)0x0;
        }
        else {
          if (*(char *)(param_1 + 1) == '\0') {
            plVar11 = (int64_t *)FUN_00d50b00();
          }
          else {
            *(void*)(param_1 + 1) = 0;
            plVar11 = plVar18;
          }
          local_198 = CONCAT71((int7)((uint64_t)plVar11 >> 8),1);
        }
        if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1a0 != '\0') && (CONCAT71(uStack_1a7,local_1a8) != 0)) {
          FUN_00d50b20();
        }
        if (plVar18 != (int64_t *)0x0) goto LAB_0125a9c6;
      }
    }
    plVar18 = (int64_t *)0x0;
    param_1 = local_128;
LAB_0125a9c6:
    FUN_0015edf0();
  }
  local_160 = *(int64_t ***)(this_ptr + 0xd8);
  uVar8 = (uint32_t)CONCAT71((int7)((uint64_t)unaff_R13 >> 8),1);
  local_1b0 = plVar18;
  if (local_160 == (int64_t **)0x0) {
LAB_0125aac0:
    pplVar12 = (int64_t **)0x0;
    uVar13 = 0;
LAB_0125aac5:
    local_f8._0_8_ = *(void*)(this_ptr + 0xf0);
  }
  else {
    FUN_00d50b00();
    pvVar10 = _pthread_getspecific((void*)param_1);
    if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
      param_1 = local_160;
    }
    FUN_011ef460();
    pplVar12 = local_138;
    if (local_138 == (int64_t **)0x0) goto LAB_0125aac0;
    if (((local_130[0] == '\0') && (FUN_00d50b00(), local_130[0] != '\0')) &&
       (local_138 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    pvVar10 = _pthread_getspecific((void*)param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd710();
    pplVar20 = local_138;
    if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
      FUN_00d50b20();
    }
    if (pplVar20 == (int64_t **)0x0) {
      uVar8 = 0;
      uVar13 = 1;
      goto LAB_0125aac5;
    }
    pvVar10 = _pthread_getspecific((void*)param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar13 = CONCAT71((int7)((uint64_t)pplVar20 >> 8),1);
    uVar2 = FUN_013dd130();
    local_f8._0_8_ = uVar2;
    uVar8 = 0;
  }
  local_1c4 = uVar8;
  local_170 = uVar13;
  local_148 = pplVar12;
  if (plVar18 == (int64_t *)0x0) {
LAB_0125abb5:
    if (local_110._0_4_ != 2) {
      local_1f8 = (double)FUN_0128e0e0();
      local_150 = (double)FUN_0128f040();
      local_d8 = 0.0;
      local_108 = (int64_t **)0x0;
      local_e0 = (int64_t **)0x0;
      local_c8 = (int64_t **)0x0;
      local_158 = (double)FUN_0128e760();
      uVar24 = (undefined7)((uint64_t)pplVar12 >> 8);
      bVar22 = NAN(local_158) || local_d0 == (int64_t **)0x0;
      local_190 = 0.0;
      local_140 = 0.0;
      local_168 = 0.0;
      if (bVar22) {
LAB_0125b711:
        pdVar23 = (double *)(CONCAT71(uVar24,bVar22) ^ 1);
        dVar25 = *(double *)(this_ptr + 0xb8);
        if ((*(double *)(this_ptr + 0x140) != dVar25) ||
           (NAN(*(double *)(this_ptr + 0x140)) || NAN(dVar25))) {
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          local_158 = dVar25;
          FUN_00d64850();
          *(double *)(this_ptr + 0x140) = local_158;
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          FUN_00d64910();
          bVar7 = 0;
LAB_0125b649:
          lVar9 = *(int64_t *)(this_ptr + 0xa0);
        }
        else {
          bVar7 = 0;
          lVar9 = *(int64_t *)(this_ptr + 0xa0);
        }
        if (lVar9 != 0) goto LAB_0125b660;
LAB_0125b7e2:
        local_130[0] = '\0';
        local_138 = (int64_t **)0x0;
        lVar9 = this_ptr;
LAB_0125b7f4:
        cVar6 = '\0';
        iVar21 = local_110._0_4_;
      }
      else {
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            param_1 = local_d0;
          }
        }
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        dVar25 = (double)FUN_013de8d0();
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        local_140 = (double)FUN_0128e2f0(SUB84(local_158 - dVar25,0));
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          lVar9 = FUN_00e8b990();
          if (lVar9 != 0) {
            param_1 = local_d0;
          }
        }
        local_d8 = 0.0;
        local_108 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        local_c8 = (int64_t **)0x0;
        dVar25 = (double)FUN_013def20();
        local_168 = 0.0;
        if ((dVar25 != 0.0) || (NAN(dVar25))) {
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_d0;
          }
          FUN_013def20();
          dVar25 = (double)FUN_0128e2f0();
          local_c8 = (int64_t **)(dVar25 / local_150);
          local_168 = 0.0;
          if (((local_150 != local_1f8) || (NAN(local_150) || NAN(local_1f8))) &&
             ((char)local_174 != '\0')) {
            dVar25 = *(double *)(this_ptr + 0xf0);
            uVar8 = SUB84(dVar25,0);
            uVar26 = (uint32_t)((uint64_t)dVar25 >> 0x20);
            local_d8 = *(double *)(this_ptr + 0xb8) - (double)local_c8;
            local_108 = (int64_t **)(dVar25 - local_d8);
            if (g_0241b6a8 <= (double)local_108) {
              dVar25 = *(double *)(this_ptr + 0xe8);
              dVar27 = local_d8 + dVar25;
              if ((dVar25 != dVar27) || (NAN(dVar25) || NAN(dVar27))) {
                local_e0 = (int64_t **)dVar27;
                FUN_00d64850();
                *(int64_t ***)(this_ptr + 0xe8) = local_e0;
                FUN_00d64910();
                uVar8 = (uint32_t)*(void*)(this_ptr + 0xf0);
                uVar26 = (uint32_t)((uint64_t)*(void*)(this_ptr + 0xf0) >> 0x20);
              }
              if (((double)CONCAT44(uVar26,uVar8) != (double)local_108) ||
                 (NAN((double)CONCAT44(uVar26,uVar8)) || NAN((double)local_108))) {
                FUN_00d64850();
                *(int64_t ***)(this_ptr + 0xf0) = local_108;
                FUN_00d64910();
                local_168 = local_d8;
              }
              else {
                local_168 = local_d8;
              }
            }
          }
          if ((*(double *)(this_ptr + 0xb8) != (double)local_c8) ||
             (NAN(*(double *)(this_ptr + 0xb8)) || NAN((double)local_c8))) {
            FUN_00d64850();
            *(int64_t ***)(this_ptr + 0xb8) = local_c8;
            FUN_00d64910();
          }
        }
        local_190 = local_140 / local_150;
        if ((local_190 == g_02390448) && (!NAN(local_190) && !NAN(g_02390448)))
        goto LAB_0125b711;
        bVar7 = 1;
        if ((*(double *)(this_ptr + 0x140) != local_190) ||
           (NAN(*(double *)(this_ptr + 0x140)) || NAN(local_190))) {
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          FUN_00d64850();
          *(double *)(this_ptr + 0x140) = local_190;
          local_d8 = 0.0;
          local_108 = (int64_t **)0x0;
          local_e0 = (int64_t **)0x0;
          local_c8 = (int64_t **)0x0;
          FUN_00d64910();
          pdVar23 = (double *)CONCAT71(uVar24,1);
          goto LAB_0125b649;
        }
        pdVar23 = (double *)CONCAT71(uVar24,1);
        if (*(int64_t *)(this_ptr + 0xa0) == 0) goto LAB_0125b7e2;
LAB_0125b660:
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar9 = FUN_012dff00();
        if (local_138 == (int64_t **)0x0) goto LAB_0125b7f4;
        lVar1 = *(int64_t *)(this_ptr + 0xa0);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar10 = _pthread_getspecific((void*)param_1);
        iVar21 = local_110._0_4_;
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar9 = FUN_012df8c0();
        cVar6 = (char)lVar9;
        if (lVar1 != 0) {
          lVar9 = FUN_00d50b20();
        }
      }
      if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
        lVar9 = FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        local_d8 = g_0238fee8;
      }
      else {
        if (*(int64_t *)(this_ptr + 0xa0) == 0) {
          local_130[0] = '\0';
          local_138 = (int64_t **)0x0;
        }
        else {
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff00();
        }
        pvVar10 = _pthread_getspecific((void*)param_1);
        if (pvVar10 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar9 = FUN_0128e0e0();
        local_d8 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
        if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
          lVar9 = FUN_00d50b20();
        }
      }
      if (iVar21 == 1) {
        pplVar12 = (int64_t **)FUN_000bea40();
        (*(*pplVar12)[3])();
        pvVar10 = _pthread_getspecific((void*)param_1);
        pplVar20 = pplVar12;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pplVar20 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        (*(*pplVar20)[0x83])(0,0);
        if ((local_250 != '\0') && (local_258 != 0)) {
          FUN_00d50b20();
        }
        dVar25 = (double)local_f8._0_8_;
        if ((local_140 < (double)local_f8._0_8_) &&
           (param_1 = (int64_t **)CONCAT71((int7)((uint64_t)param_1 >> 8),local_140 != 0.0),
           (bool)(bVar7 & local_140 != 0.0))) {
          pvVar10 = _pthread_getspecific((void*)param_1);
          pplVar20 = pplVar12;
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pplVar20 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
          }
          (*(*pplVar20)[0x83])(SUB84(local_190,0),SUB84(local_140,0));
          if ((local_240 != '\0') && (local_248 != 0)) {
            FUN_00d50b20();
          }
          dVar25 = (local_190 - local_140) + (double)local_f8._0_8_;
        }
        dVar27 = *(double *)(this_ptr + 0xf0);
        local_c8 = (int64_t **)dVar27;
        if (dVar27 <= dVar25) {
          local_c8 = (int64_t **)dVar25;
        }
        *(bool *)(this_ptr + 0x180) = dVar27 < (double)local_c8;
        pvVar10 = _pthread_getspecific((void*)param_1);
        pplVar20 = pplVar12;
        if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pplVar20 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
        }
        (*(*pplVar20)[0x83])((int)local_c8,local_f8._0_4_);
        if ((local_230 != '\0') && (local_238 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b00();
        FUN_00d50b20();
        uVar13 = 0;
        local_d8 = 0.0;
        pplVar20 = (int64_t **)0x0;
LAB_0125c94a:
        local_e0 = (int64_t **)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
        local_108 = (int64_t **)0x0;
        local_c8 = pplVar12;
        FUN_00d50b00();
        local_158 = 0.0;
        uVar24 = (undefined7)((uint64_t)pdVar23 >> 8);
        bVar7 = 1;
        local_f8._0_8_ = pplVar12;
        if (*(int64_t *)(this_ptr + 0x160) == 0) goto LAB_0125cc42;
LAB_0125c997:
        FUN_00d50b00();
        uVar8 = FUN_00d50b20();
        if (local_d0 == (int64_t **)0x0) {
LAB_0125cbd5:
          lVar9 = *(int64_t *)(this_ptr + 0x160);
          local_1c0 = local_c8;
          local_1b8 = '\0';
          if (lVar9 == 0) goto LAB_0125cc6d;
          uVar8 = FUN_00d50b00();
          bVar22 = false;
        }
        else {
          FUN_0125e7c0();
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_108 = (int64_t **)FUN_013de9b0();
          if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          lVar9 = *(int64_t *)(this_ptr + 0x160);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013f2b00();
          FUN_00d23340();
          pplVar12 = local_138;
          param_1 = (int64_t **)CONCAT71((int7)((uint64_t)param_1 >> 8),local_130[0]);
          pcVar19 = &local_1a8;
          if (local_130[0] != '\0') {
            pcVar19 = local_130;
          }
          local_1a8 = local_130[0];
          *pcVar19 = '\0';
          if ((local_130[0] != '\0') && (pplVar12 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          pvVar10 = _pthread_getspecific((void*)param_1);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_110 = (double)FUN_013faed0();
          if ((local_1a8 != '\0') && (pplVar12 != (int64_t **)0x0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          uVar8 = SUB84(local_110,0);
          if ((local_110 == (double)local_108) && (!NAN(local_110) && !NAN((double)local_108)))
          goto LAB_0125cbd5;
          lVar9 = *(int64_t *)(this_ptr + 0x160);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          local_220 = 1;
          local_228 = lVar9;
          uVar8 = FUN_012902c0((int)local_108);
          if (lVar9 != 0) {
            uVar8 = FUN_00d50b20();
          }
          if (*(int64_t *)(this_ptr + 0x160) != 0) {
            FUN_00d50b00();
            uVar8 = FUN_00d50b20();
            goto LAB_0125cbd5;
          }
LAB_0125cc6d:
          local_1b8 = '\0';
          bVar22 = true;
          lVar9 = 0;
          local_1c0 = local_c8;
        }
        local_210 = 1;
        local_218 = lVar9;
        uVar13 = FUN_0128f850(uVar8,&local_218);
        pplVar12 = local_138;
        uVar16 = (undefined7)((uint64_t)uVar13 >> 8);
        if (local_138 == (int64_t **)local_f8._0_8_) {
          bVar7 = local_138 != (int64_t **)0x0 & local_158._0_1_;
          param_1 = (int64_t **)CONCAT71((int7)((uint64_t)param_1 >> 8),bVar7);
          if (bVar7 == 1) {
            if (local_130[0] != '\0') {
              local_130[0] = '\0';
              goto joined_r0x0125cd0a;
            }
            uVar14 = CONCAT71(uVar24,1);
            FUN_00d50b00();
          }
          else {
            uVar14 = (uint64_t)local_e0 & 0xffffffff;
            param_1 = local_e0;
            if ((local_130[0] != '\0') &&
               (uVar14 = (uint64_t)local_e0 & 0xffffffff, local_138 != (int64_t **)0x0)) {
              FUN_00d50b20();
              uVar14 = (uint64_t)local_e0 & 0xffffffff;
            }
          }
          local_108 = (int64_t **)(uVar14 & 0xffffffff);
        }
        else {
          if (local_130[0] == '\0') {
            if (local_138 != (int64_t **)0x0) {
              uVar13 = FUN_00d50b00();
            }
            uVar16 = (undefined7)((uint64_t)uVar13 >> 8);
            if ((bool)(bVar7 & local_f8._0_8_ != 0)) {
              local_f8._0_8_ = pplVar12;
              FUN_00d50b20();
              uVar16 = extraout_var_00;
            }
          }
          else {
            if ((bool)(bVar7 & (int64_t **)local_f8._0_8_ != (int64_t **)0x0)) {
              FUN_00d50b20();
              uVar16 = extraout_var;
            }
            local_130[0] = '\0';
          }
          local_f8._0_8_ = pplVar12;
joined_r0x0125cd0a:
          uVar14 = CONCAT71(uVar24,1);
          local_108 = (int64_t **)CONCAT71(uVar16,1);
        }
        if (!bVar22) {
          FUN_00d50b20();
          local_108 = (int64_t **)(uVar14 & 0xffffffff);
        }
        if ((local_1b8 != '\0') && (local_1c0 != (int64_t **)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_158 = (double)CONCAT71((int7)((uint64_t)lVar9 >> 8),1);
        if (iVar21 == 0) {
          pplVar12 = (int64_t **)FUN_011114e0();
          (*(*pplVar12)[3])();
          local_c8 = pplVar12;
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_c8;
          }
          FUN_013ef430((int)g_02391038,(int)g_02391038);
          pvVar10 = _pthread_getspecific((void*)param_1);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            param_1 = local_c8;
          }
          dVar27 = 4.94065645841247e-324;
          FUN_013eb4a0();
          local_108 = *(int64_t ***)(this_ptr + 0xf0);
          local_b8[0] = 0.0;
          local_b8[1] = 0.0;
          local_b8[2] = local_150;
          local_1f0 = 0.0;
          dVar25 = 0.0;
          if ((char)pdVar23 != '\0') {
            local_b8[3] = local_190;
            local_b8[4] = local_140;
            local_b8[5] = local_150;
            dVar27 = 9.88131291682493e-324;
            local_1f0 = local_140;
            dVar25 = local_190;
          }
          local_140 = dVar25;
          if (local_d0 == (int64_t **)0x0) {
LAB_0125bd65:
            uVar8 = local_f8._0_4_;
            uVar26 = local_f8._4_4_;
LAB_0125bd75:
            local_110 = (double)CONCAT44(uVar26,uVar8);
            pplVar12 = local_108;
          }
          else {
            pvVar10 = _pthread_getspecific((void*)param_1);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              param_1 = local_d0;
            }
            cVar6 = FUN_013deec0();
            if (cVar6 == '\0') goto LAB_0125bd65;
            pvVar10 = _pthread_getspecific((void*)param_1);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              param_1 = local_d0;
            }
            local_110 = (double)FUN_013df130();
            local_e0 = *(int64_t ***)(this_ptr + 0xf0);
            pvVar10 = _pthread_getspecific((void*)param_1);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              param_1 = local_d0;
            }
            dVar25 = (double)FUN_013de9b0();
            uVar8 = local_f8._0_4_;
            uVar26 = local_f8._4_4_;
            if ((double)local_f8._0_8_ <= local_110) goto LAB_0125bd75;
            dVar25 = (double)local_e0 - (dVar25 - local_110);
            pplVar12 = (int64_t **)(g_02391030 + local_140);
            if (g_02391030 + local_140 <= dVar25) {
              pplVar12 = (int64_t **)dVar25;
            }
            if (*(double *)(this_ptr + 0xf0) <= (double)pplVar12) goto LAB_0125bd65;
            local_b8[(int64_t)dVar27 * 3] = (double)pplVar12;
            local_b8[(int64_t)dVar27 * 3 + 1] = local_110;
            param_1 = (int64_t **)0x0;
            local_b8[(int64_t)dVar27 * 3 + 2] = 1.0;
            dVar27 = (double)(uint64_t)(SUB84(dVar27,0) + 1);
          }
          dVar25 = *(double *)(this_ptr + 0xf0);
          local_b8[(int64_t)dVar27 * 3] = dVar25;
          local_b8[(int64_t)dVar27 * 3 + 1] = (double)CONCAT44(uVar26,uVar8);
          local_b8[(int64_t)dVar27 * 3 + 2] = local_d8;
          local_e0 = (int64_t **)dVar27;
          if ((g_023e16a0 <= (double)CONCAT44(uVar26,uVar8) &&
               (double)CONCAT44(uVar26,uVar8) != g_023e16a0) && (local_d0 != (int64_t **)0x0)) {
            dVar25 = dVar25 / (double)local_f8._0_8_;
            if (dVar25 < g_0238fee8) {
              local_f8._0_8_ = (double)pplVar12 - local_140;
              if ((double)pplVar12 - local_140 < g_02420c40) {
                local_d8 = 0.0;
                local_140 = (double)pplVar12;
                local_108 = (int64_t **)dVar25;
                pvVar10 = _pthread_getspecific((void*)param_1);
                if (pvVar10 != (void *)0x0) {
                  local_d8 = 0.0;
                  lVar9 = FUN_00e8b990();
                  if (lVar9 != 0) {
                    param_1 = local_d0;
                  }
                }
                local_d8 = 0.0;
                cVar6 = FUN_013dee00();
                if (cVar6 == '\0') {
                  pvVar10 = _pthread_getspecific((void*)param_1);
                  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    param_1 = local_d0;
                  }
                  bVar7 = FUN_013dee60();
                  dVar25 = ((double)local_f8._0_8_ + g_0241d658) / g_0240cfc0;
                  local_d8 = 0.0;
                  if (0.0 <= dVar25) {
                    local_d8 = dVar25;
                  }
                  param_1 = (int64_t **)CONCAT71((int7)((uint64_t)param_1 >> 8),1 < (int)local_e0)
                  ;
                  if ((bVar7 & 1 < (int)local_e0) == 1) {
                    local_b8[3] = (g_0238fee8 - local_d8) * local_1f0 * (double)local_108 +
                                  local_b8[3] * local_d8;
                    local_b8[5] = (local_b8[4] - local_b8[1]) / (local_b8[3] - local_b8[0]);
                    local_f8._0_8_ = local_b8[3];
                    if ((*(double *)(this_ptr + 0xb8) != local_b8[3]) ||
                       (NAN(*(double *)(this_ptr + 0xb8)) || NAN(local_b8[3]))) {
                      FUN_00d64850();
                      *(void*)(this_ptr + 0xb8) = local_f8._0_8_;
                      FUN_00d64910();
                    }
                    if ((*(double *)(this_ptr + 0x140) != (double)local_f8._0_8_) ||
                       (NAN(*(double *)(this_ptr + 0x140)) || NAN((double)local_f8._0_8_))) {
                      FUN_00d64850();
                      *(void*)(this_ptr + 0x140) = local_f8._0_8_;
                      FUN_00d64910();
                    }
                  }
                  pvVar10 = _pthread_getspecific((void*)param_1);
                  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                    param_1 = local_d0;
                  }
                  cVar6 = FUN_013deec0();
                  if (((cVar6 != '\0') && (local_140 < *(double *)(this_ptr + 0xf0))) &&
                     (1 < (int)local_e0)) {
                    uVar14 = (uint64_t)((int)local_e0 - 1);
                    param_1 = (int64_t **)(uVar14 * 3);
                    dVar25 = (g_0238fee8 - local_d8) * local_110 * (double)local_108 +
                             local_d8 * local_b8[uVar14 * 3];
                    local_b8[uVar14 * 3] = dVar25;
                    local_b8[uVar14 * 3 + 2] =
                         (local_b8[(int64_t)dVar27 * 3 + 1] - local_b8[uVar14 * 3 + 1]) /
                         (local_b8[(int64_t)dVar27 * 3] - dVar25);
                  }
                }
              }
            }
          }
          local_110 = (double)(uint64_t)((int)local_e0 + 1);
          pdVar23 = local_b8;
          dVar25 = 0.0;
          local_d8 = 0.0;
          pplVar12 = (int64_t **)0x0;
          do {
            uVar14 = (uint64_t)local_d8 & 0xffffffff;
            pvVar10 = _pthread_getspecific((void*)param_1);
            pplVar20 = local_c8;
            if ((pvVar10 != (void *)0x0) &&
               (lVar9 = FUN_00e8b990(), pplVar20 = local_c8, lVar9 != 0)) {
              param_1 = local_c8;
              pplVar20 = (int64_t **)local_c8[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            uVar13 = (*(*pplVar20)[0x81])();
            pplVar20 = local_138;
            cVar6 = (char)uVar14;
            if (local_138 == pplVar12) {
              pplVar20 = pplVar12;
              local_d8 = (double)uVar14;
              if ((cVar6 == '\0') && (local_138 != (int64_t **)0x0)) {
                if (local_130[0] != '\0') goto LAB_0125c316;
                local_d8 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
                FUN_00d50b00();
              }
            }
            else if (local_130[0] == '\0') {
              if (local_138 != (int64_t **)0x0) {
                uVar13 = FUN_00d50b00();
              }
              local_d8 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
              if ((cVar6 != '\0') && (pplVar12 != (int64_t **)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((cVar6 != '\0') && (pplVar12 != (int64_t **)0x0)) {
                uVar13 = FUN_00d50b20();
              }
LAB_0125c316:
              local_130[0] = '\0';
              local_d8 = (double)CONCAT71((int7)((uint64_t)uVar13 >> 8),1);
            }
            if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013fae90(SUB84(*pdVar23,0));
            pvVar10 = _pthread_getspecific((void*)param_1);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013faee0(SUB84(pdVar23[1],0));
            if (dVar25 == 0.0) {
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c830(SUB84(g_0240d3e0,0));
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c880(SUB84(local_b8[2] * g_0240d3e0,0));
            }
            else {
              uVar14 = (uint64_t)(SUB84(dVar25,0) - 1);
              dVar28 = *pdVar23 - local_b8[uVar14 * 3];
              dStack_100 = pdVar23[1] - local_b8[uVar14 * 3 + 1];
              dVar27 = pdVar23[2];
              dVar3 = (SQRT(dStack_100 * dStack_100 + dVar28 * dVar28) * g_0241ea50) /
                      SQRT(dVar27 * dVar27 + g_0238fee8);
              dVar27 = dVar27 * dVar3;
              local_f8._0_8_ = dVar28 * g_0241ea50;
              if (dVar3 <= (double)local_f8._0_8_) {
                local_f8._8_8_ = 0;
                local_f8._0_8_ = dVar3;
                if (dVar27 <= dStack_100 * g_0241ea50) goto LAB_0125c4bd;
LAB_0125c52a:
                local_108 = (int64_t **)(dStack_100 * g_0241ea50);
                uVar8 = local_f8._12_4_;
                local_f8._8_4_ = local_f8._8_4_;
                local_f8._0_8_ = (local_f8._0_8_ * (double)local_108) / dVar27;
                local_f8._12_4_ = uVar8;
              }
              else {
                local_f8._8_8_ = dStack_100;
                dVar27 = (dVar27 * (double)local_f8._0_8_) / dVar3;
                if (dStack_100 * g_0241ea50 < dVar27) goto LAB_0125c52a;
LAB_0125c4bd:
                dStack_100 = 0.0;
                local_108 = (int64_t **)dVar27;
              }
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c830(local_f8._0_4_ ^ g_023945b0);
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c880((uint)local_108 ^ g_023945b0);
            }
            if ((uint64_t)dVar25 < local_e0) {
              dVar28 = pdVar23[3] - *pdVar23;
              dStack_100 = pdVar23[4] - pdVar23[1];
              dVar27 = pdVar23[2];
              dVar3 = (SQRT(dStack_100 * dStack_100 + dVar28 * dVar28) * g_0241ea50) /
                      SQRT(dVar27 * dVar27 + g_0238fee8);
              dVar27 = dVar27 * dVar3;
              local_f8._0_8_ = dVar28 * g_0241ea50;
              if (dVar3 <= (double)local_f8._0_8_) {
                local_f8._8_8_ = 0;
                local_f8._0_8_ = dVar3;
                if (dVar27 <= dStack_100 * g_0241ea50) goto LAB_0125c6f8;
LAB_0125c7de:
                local_108 = (int64_t **)(dStack_100 * g_0241ea50);
                uVar8 = local_f8._12_4_;
                local_f8._8_4_ = local_f8._8_4_;
                local_f8._0_8_ = (local_f8._0_8_ * (double)local_108) / dVar27;
                local_f8._12_4_ = uVar8;
              }
              else {
                local_f8._8_8_ = dStack_100;
                dVar27 = (dVar27 * (double)local_f8._0_8_) / dVar3;
                if (dStack_100 * g_0241ea50 < dVar27) goto LAB_0125c7de;
LAB_0125c6f8:
                dStack_100 = 0.0;
                local_108 = (int64_t **)dVar27;
              }
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c8d0(local_f8._0_4_);
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c920((uint)local_108);
            }
            else {
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c8d0(SUB84(g_023944e0,0));
              pvVar10 = _pthread_getspecific((void*)param_1);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0142c920(SUB84(pdVar23[2] * g_023944e0,0));
            }
            pvVar10 = _pthread_getspecific((void*)param_1);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              param_1 = local_c8;
            }
            local_1d0 = '\0';
            local_1d8 = pplVar20;
            FUN_013ecb30();
            if ((local_1d0 != '\0') && (local_1d8 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            dVar25 = (double)((int64_t)dVar25 + 1);
            pdVar23 = pdVar23 + 3;
            pplVar12 = pplVar20;
          } while (local_110 != dVar25);
          *(void*)(this_ptr + 0x180) = 0;
          if (local_c8 != (int64_t **)0x0) {
            FUN_00d50b00();
            pplVar12 = local_c8;
            uVar13 = FUN_00d50b20();
            goto LAB_0125c94a;
          }
        }
        else {
          pplVar20 = (int64_t **)0x0;
          local_d8 = 0.0;
        }
        local_c8 = (int64_t **)0x0;
        local_e0 = (int64_t **)0x0;
        bVar7 = 0;
        uVar24 = 0;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_f8._8_8_;
        local_f8._0_16_ = auVar4 << 0x40;
        if (*(int64_t *)(this_ptr + 0x160) != 0) goto LAB_0125c997;
LAB_0125cc42:
        local_108 = local_e0;
      }
      pvVar10 = _pthread_getspecific((void*)param_1);
      pVar17 = (void*)param_1;
      if (pvVar10 == (void *)0x0) {
        pplVar12 = (int64_t **)local_f8._0_8_;
      }
      else {
        lVar9 = FUN_00e8b990();
        pplVar12 = (int64_t **)local_f8._0_8_;
        if (lVar9 != 0) {
          param_1 = (int64_t **)local_f8._0_8_;
          pplVar12 = *(int64_t ***)
                      (local_f8._0_8_ + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
        }
        pVar17 = (void*)param_1;
      }
      cVar6 = (*(*pplVar12)[0x6e])();
      if (cVar6 == '\0') {
        FUN_0128de60();
        lVar9 = *(int64_t *)(this_ptr + 0xd0);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        if (*(int64_t *)(this_ptr + 0x158) != lVar9) {
          FUN_00d64850();
          lVar1 = *(int64_t *)(this_ptr + 0x158);
          if (lVar1 != lVar9) {
            if (lVar9 != 0) {
              FUN_00d50b00();
            }
            *(int64_t *)(this_ptr + 0x158) = lVar9;
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        if (local_d0 != (int64_t **)0x0) {
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pVar17 = (void*)local_d0;
          }
          local_150 = (double)FUN_013de9b0();
          local_150 = local_150 / *(double *)(this_ptr + 0xf0);
          goto LAB_0125d013;
        }
      }
      else {
        local_208 = local_f8._0_8_;
        local_200 = 0;
        FUN_01265f70();
        if (*(int64_t ***)(this_ptr + 0x158) != local_c8) {
          FUN_00d64850();
          pplVar12 = *(int64_t ***)(this_ptr + 0x158);
          if (pplVar12 != local_c8) {
            if (local_158._0_1_ == '\0') {
              FUN_00d50b00();
            }
            *(int64_t ***)(this_ptr + 0x158) = local_c8;
            if (pplVar12 != (int64_t **)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d64910();
        }
        if (local_d0 != (int64_t **)0x0) {
LAB_0125d013:
          pvVar10 = _pthread_getspecific(pVar17);
          if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
            pVar17 = (void*)local_d0;
          }
          FUN_013defa0();
          dVar25 = (double)FUN_01264500();
          if ((*(double *)(this_ptr + 0xc0) != dVar25) ||
             (NAN(*(double *)(this_ptr + 0xc0)) || NAN(dVar25))) {
            local_110 = dVar25;
            FUN_00d64850();
            *(double *)(this_ptr + 0xc0) = local_110;
            FUN_00d64910();
          }
        }
      }
      if (*(double *)(this_ptr + 0xf0) < *(double *)(this_ptr + 0xc0)) {
        *(double *)(this_ptr + 0xc0) = *(double *)(this_ptr + 0xf0);
      }
      if ((local_150 != local_1f8) || (NAN(local_150) || NAN(local_1f8))) {
        if ((*(double *)(this_ptr + 0x148) != local_150) ||
           (NAN(*(double *)(this_ptr + 0x148)) || NAN(local_150))) {
          FUN_00d64850();
          *(double *)(this_ptr + 0x148) = local_150;
          FUN_00d64910();
        }
        cVar6 = (char)local_170;
        if (*(int64_t *)(this_ptr + 0xa8) != 0) {
          pvVar10 = _pthread_getspecific(pVar17);
          if (pvVar10 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dff70();
          pplVar12 = local_138;
          if (local_130[0] == '\0') {
            if (local_138 == (int64_t **)0x0) goto LAB_0125d49c;
            FUN_00d50b00();
            if ((local_130[0] != '\0') && (local_138 != (int64_t **)0x0)) {
              FUN_00d50b20();
            }
            iVar21 = *(int *)(this_ptr + 0x54);
          }
          else {
            if (local_138 == (int64_t **)0x0) goto LAB_0125d49c;
            iVar21 = *(int *)(this_ptr + 0x54);
          }
          if (iVar21 != 0) {
            pvVar10 = _pthread_getspecific(pVar17);
            pplVar15 = pplVar12;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pplVar15 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            *(int *)((int64_t)pplVar15 + 0x54) = *(int *)((int64_t)pplVar15 + 0x54) + 1;
          }
          if ((local_168 != 0.0) || (NAN(local_168))) {
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar10 = _pthread_getspecific(pVar17);
            pplVar15 = pplVar12;
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pplVar15 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            if ((double)pplVar15[0x1e] + local_168 <= g_0241b6a8) {
              lVar9 = *(int64_t *)(this_ptr + 0xa8);
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012dffb0();
              if (lVar9 != 0) {
                FUN_00d50b20();
              }
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0125a5f0();
            }
            else {
              pvVar10 = _pthread_getspecific(pVar17);
              if (pvVar10 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012756a0(SUB84(local_168,0));
            }
          }
          else {
            pvVar10 = _pthread_getspecific(pVar17);
            if (pvVar10 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
          }
          if (*(int *)(this_ptr + 0x54) != 0) {
            pvVar10 = _pthread_getspecific(pVar17);
            if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
              pplVar12 = (int64_t **)pplVar12[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
            }
            *(int *)((int64_t)pplVar12 + 0x54) = *(int *)((int64_t)pplVar12 + 0x54) + -1;
          }
          FUN_00d50b20();
        }
      }
      else {
        cVar6 = (char)local_170;
      }
      goto LAB_0125d49c;
    }
  }
  else {
    pvVar10 = _pthread_getspecific((void*)param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar25 = (double)FUN_014bb310();
    if (dVar25 < (double)local_f8._0_8_) goto LAB_0125abb5;
  }
  plVar11 = (int64_t *)FUN_000bea40();
  (**(code **)(*plVar11 + 0x18))();
  pvVar10 = _pthread_getspecific((void*)param_1);
  plVar18 = plVar11;
  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar18 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar18 + 0x410))(0,0);
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  pvVar10 = _pthread_getspecific((void*)param_1);
  plVar18 = plVar11;
  if ((pvVar10 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    plVar18 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar18 + 0x410))((int)*(void*)(this_ptr + 0xf0),local_f8._0_4_);
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x160) == 0) {
    local_108 = (int64_t **)CONCAT71((int7)((uint64_t)this_ptr >> 8),1);
    FUN_00d50b00();
    local_f8._0_8_ = plVar11;
  }
  else {
    FUN_00d50b00();
    uVar8 = FUN_00d50b20();
    local_1e0 = '\0';
    lVar9 = *(int64_t *)(this_ptr + 0x160);
    local_1e8 = plVar11;
    if (lVar9 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_270 = 1;
    local_278 = lVar9;
    FUN_0128f850(uVar8,&local_278);
    local_f8._0_8_ = local_138;
    param_1 = local_138;
    if (local_138 == (int64_t **)0x0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_f8._8_8_;
      local_f8._0_16_ = auVar5 << 0x40;
      local_108 = (int64_t **)0x0;
    }
    else {
      local_108 = (int64_t **)CONCAT71((int7)((uint64_t)local_138 >> 8),1);
      if (local_130[0] == '\0') {
        FUN_00d50b00();
      }
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  pvVar10 = _pthread_getspecific((void*)param_1);
  pVar17 = (void*)param_1;
  if (pvVar10 == (void *)0x0) {
    pplVar12 = (int64_t **)local_f8._0_8_;
  }
  else {
    lVar9 = FUN_00e8b990();
    pplVar12 = (int64_t **)local_f8._0_8_;
    if (lVar9 != 0) {
      param_1 = (int64_t **)local_f8._0_8_;
      pplVar12 = *(int64_t ***)
                  (local_f8._0_8_ + ((uint64_t)(*(uint *)(lVar9 + 0x154) & 1) + 4) * 8);
    }
    pVar17 = (void*)param_1;
  }
  cVar6 = (*(*pplVar12)[0x6e])();
  if (cVar6 == '\0') {
    FUN_0128de60();
    lVar9 = *(int64_t *)(this_ptr + 0xd0);
    if (lVar9 != 0) {
      FUN_00d50b00();
    }
    if (*(int64_t *)(this_ptr + 0x158) != lVar9) {
      FUN_00d64850();
      lVar1 = *(int64_t *)(this_ptr + 0x158);
      if (lVar1 != lVar9) {
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        *(int64_t *)(this_ptr + 0x158) = lVar9;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    local_268 = local_f8._0_8_;
    local_260 = 0;
    FUN_01265f70();
    if (*(int64_t **)(this_ptr + 0x158) != plVar11) {
      FUN_00d64850();
      plVar18 = *(int64_t **)(this_ptr + 0x158);
      if (plVar18 != plVar11) {
        FUN_00d50b00();
        *(int64_t **)(this_ptr + 0x158) = plVar11;
        if (plVar18 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
  }
  if (local_d0 != (int64_t **)0x0) {
    pvVar10 = _pthread_getspecific(pVar17);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013defa0();
    dVar25 = (double)FUN_01264500();
    if ((*(double *)(this_ptr + 0xc0) != dVar25) ||
       (NAN(*(double *)(this_ptr + 0xc0)) || NAN(dVar25))) {
      local_c8 = (int64_t **)dVar25;
      FUN_00d64850();
      *(int64_t ***)(this_ptr + 0xc0) = local_c8;
      FUN_00d64910();
    }
  }
  if (*(double *)(this_ptr + 0xf0) < *(double *)(this_ptr + 0xc0)) {
    *(double *)(this_ptr + 0xc0) = *(double *)(this_ptr + 0xf0);
  }
  FUN_00d50b20();
  cVar6 = (char)local_170;
  local_d8 = 0.0;
  pplVar20 = (int64_t **)0x0;
  local_e0 = (int64_t **)0x0;
  local_c8 = (int64_t **)0x0;
LAB_0125d49c:
  if (local_160 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
  plVar18 = local_1b0;
  if (cVar6 != '\0' && (char)local_1c4 == '\0') {
    FUN_00d50b20();
  }
  if (local_d0 != (int64_t **)0x0) {
    FUN_00d50b20();
  }
  if ((local_d8._0_1_ != '\0') && (pplVar20 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_108 != '\0') && (local_f8._0_8_ != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_e0 != '\0') && (local_c8 != (int64_t **)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_198 != '\0') && (plVar18 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

