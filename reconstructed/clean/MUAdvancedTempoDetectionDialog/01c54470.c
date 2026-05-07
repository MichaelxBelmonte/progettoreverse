// Function: FUN_01c54470
// Address: 01c54470
// Size: 10423 bytes
// Class: MUAdvancedTempoDetectionDialog
// === MUAdvancedTempoDetectionDialog properties ===
//                   _highlightedBeatValuePoint
//                   _setCursorTimeDisabled
//                   _zoomToFitAverageTempoDisabled
//                   _skipZoomToFitAverageTempo


void FUN_01c54470(void* param_1,uint64_t param_2)

{
  bool bVar1;
  code *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  void*puVar6;
  void*puVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  int extraout_var;
  int extraout_var_00;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int extraout_var_01;
  int extraout_var_02;
  int extraout_var_03;
  undefined7 uVar14;
  void* pVar15;
  void*puVar16;
  int64_t *plVar17;
  int64_t *plVar18;
  uint64_t uVar19;
  uint64_t uVar20;
  int64_t *arg1;
  int64_t *this_ptr;
  uint8_t auVar21 [8];
  void* pVar22;
  uint uVar23;
  int64_t *plVar24;
  bool bVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  uint64_t uVar29;
  double dVar30;
  uint64_t uVar31;
  double dVar32;
  uint64_t extraout_XMM0_Qb;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  uint64_t extraout_XMM0_Qb_00;
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar35 [16];
  uint8_t auVar36 [16];
  uint64_t in_XMM1_Qb;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  uint32_t uVar41;
  uint32_t uVar42;
  uint64_t local_350;
  int iStack_34c;
  uint64_t local_348;
  int iStack_344;
  int64_t local_318;
  char local_310;
  int64_t *local_308;
  char local_300;
  int64_t local_2f8;
  char local_2f0;
  int64_t *local_2e8;
  char local_2e0;
  int64_t local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  void*local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  uint local_254;
  uint64_t local_250;
  uint64_t local_248;
  uint64_t local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  void*local_1f8;
  char local_1f0;
  uint64_t local_1e8;
  uint64_t uStack_1e0;
  uint64_t local_1d8;
  uint64_t uStack_1d0;
  uint8_t local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  uint local_1ac;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  int64_t local_160;
  int64_t *local_158;
  int64_t local_150;
  uint8_t local_148 [8];
  uint64_t uStack_140;
  uint local_12c;
  uint64_t local_128;
  uint64_t local_120;
  int64_t local_110;
  int64_t local_108;
  uint64_t local_100;
  uint8_t local_e8;
  int iStack_dc;
  uint64_t local_c8;
  char local_c0;
  uint32_t local_9c;
  double local_98;
  uint64_t uStack_90;
  int64_t *local_88;
  uint local_7c;
  uint64_t local_78;
  uint64_t local_70;
  int64_t *local_68;
  char local_60;
  uint local_58;
  byte local_51;
  uint64_t local_50;
  char local_48;
  byte local_39;
  int64_t *local_38;
  
  local_98 = (double)param_2;
  uStack_90 = in_XMM1_Qb;
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  puVar7 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &g_02572358;
  (*pcVar2)();
  bVar25 = g_028b6ff8 == (void*)0x0;
  g_028b6ff8 = puVar7;
  if (((bVar25) || (FUN_00d50b20(), g_028b6ff8 != (void*)0x0)) && (g_028b7000 == '\0')) {
    g_028b7000 = '\x01';
    FUN_00e8cb90();
  }
  plVar24 = (int64_t *)this_ptr[0x31];
  if (plVar24 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_38 = plVar24;
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  dVar30 = local_98;
  local_148 = (uint8_t  [8])FUN_00d05530();
  uStack_140 = extraout_XMM0_Qb;
  lVar9 = this_ptr[0x3d];
  local_1e8 = dVar30;
  uStack_1e0 = uStack_90;
  if (lVar9 == 0) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_68 + 0x3a0))();
    local_108 = (int64_t)local_50;
    if (local_50 != (int64_t *)0x0) {
      lVar9 = local_108;
      if (local_48 == '\0') {
        FUN_00d50b00();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
    }
    local_108 = lVar9;
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    local_108 = lVar9;
  }
  lVar9 = this_ptr[0x3e];
  if (lVar9 == 0) {
    (**(code **)(*this_ptr + 0x640))();
    (**(code **)(*local_68 + 0x3a8))();
    local_110 = (int64_t)local_50;
    if (local_50 != (int64_t *)0x0) {
      lVar9 = local_110;
      if (local_48 == '\0') {
        FUN_00d50b00();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
    }
    local_110 = lVar9;
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00d50b00();
    local_110 = lVar9;
  }
  FUN_01cfbee0();
  local_160 = (int64_t)local_50;
  if ((((local_48 == '\0') && (local_50 != (int64_t *)0x0)) && (FUN_00d50b00(), local_48 != '\0'))
     && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01cfbee0();
  local_150 = (int64_t)local_50;
  if (((local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  fVar26 = 0.0;
  fVar37 = 0.0;
  FUN_01cfbee0();
  local_168 = (int64_t)local_50;
  if (((local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_48 != '\0' && (local_50 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_9c = 0xffffffff;
  pvVar8 = _pthread_getspecific(param_1);
  if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
    param_1 = (void*)local_38;
  }
  FUN_016d8300();
  lVar9 = (int64_t)local_50;
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar9 == 0) {
    bVar25 = false;
    _local_1c8 = ZEXT816(0);
    local_7c = 0;
  }
  else {
    pvVar8 = _pthread_getspecific(param_1);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      param_1 = (void*)local_38;
    }
    FUN_016d8ab0();
    lVar10 = (int64_t)local_50;
    if ((((local_48 == '\0') && (local_50 != (int64_t *)0x0)) && (FUN_00d50b00(), local_48 != '\0')
        ) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_016bf2e0();
    FUN_016bf310();
    pvVar8 = _pthread_getspecific(param_1);
    if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
      param_1 = (void*)local_38;
    }
    FUN_017049c0();
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(param_1);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016d8300();
    local_1a0 = 0;
    if (local_c0 == '\0') {
      if (local_c8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_c0 = '\0';
    }
    local_1a0 = '\x01';
    local_1a8 = local_c8;
    puVar16 = &local_9c;
    FUN_01900ad0(puVar16,&local_1a8);
    lVar11 = (int64_t)local_50;
    param_1 = (void*)puVar16;
    if (local_48 == '\0') {
      if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
         (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = '\0';
    }
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar11 == 0) {
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        param_1 = (void*)local_38;
      }
      FUN_016d8300();
      lVar11 = (int64_t)local_50;
      if ((((local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
        param_1 = (void*)local_38;
      }
      local_98 = (double)FUN_016d2000();
      FUN_01e3f820();
      local_1c8._0_4_ = extraout_XMM0_Db_00 + fVar26 + g_02390d00;
      if ((int)this_ptr[0x39] == 1) {
        local_1c8._0_4_ = (float)local_1c8._0_4_ + g_0241c6e8;
      }
      local_1c8._4_4_ = extraout_XMM0_Db_00 + fVar26;
      fStack_1c0 = extraout_XMM0_Dd_00 + fVar37;
      fStack_1bc = extraout_XMM0_Dd_00 + fVar37;
      fVar26 = (float)_logf(CONCAT44((int)((uint64_t)(local_98 / (double)this_ptr[0x38]) >> 0x20),
                                     (float)(local_98 / (double)this_ptr[0x38])));
      local_98 = (double)CONCAT44(local_98._4_4_,fVar26 / *(float *)(this_ptr + 0x55));
      cVar3 = FUN_016bf360();
      if (cVar3 == '\0') {
        local_7c = 0;
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar12 = FUN_019079b0();
        pvVar8 = _pthread_getspecific(param_1);
        if ((pvVar8 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
          lVar13 = this_ptr[0x42];
        }
        else {
          param_1 = (void*)local_38;
          lVar13 = this_ptr[0x42];
        }
        if (lVar13 != 0) {
          local_210 = 0;
          FUN_00d50b00();
        }
        local_210 = '\x01';
        local_218 = lVar13;
        uVar20 = FUN_016cab10();
        local_c8._4_4_ = (int)((uint64_t)lVar12 >> 0x20);
        if (((local_c8._4_4_ == 0) || (uVar20 >> 0x20 == 0)) ||
           (uVar29 = FUN_00e7c000(), (char)uVar29 == '\0')) {
          pvVar8 = _pthread_getspecific(param_1);
          if ((pvVar8 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            param_1 = (void*)local_38;
          }
          FUN_017049c0();
          pvVar8 = _pthread_getspecific(param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_318 = lVar11;
          local_310 = '\0';
          param_1 = 0;
          FUN_01900ec0(0,&local_318);
          pvVar8 = _pthread_getspecific(param_1);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_019079b0();
          pvVar8 = _pthread_getspecific(param_1);
          if ((pvVar8 == (void *)0x0) || (lVar13 = FUN_00e8b990(), lVar13 == 0)) {
            lVar13 = this_ptr[0x42];
          }
          else {
            param_1 = (void*)local_38;
            lVar13 = this_ptr[0x42];
          }
          if (lVar13 != 0) {
            local_200 = 0;
            FUN_00d50b00();
          }
          local_200 = '\x01';
          local_208 = lVar13;
          local_128 = FUN_016cab10();
          local_7c = 0;
          if ((extraout_var_01 != 0) && (local_128 >> 0x20 != 0)) {
            local_7c = FUN_00e7c000();
          }
          if ((local_200 != '\0') && (local_208 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_310 != '\0') && (local_318 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_7c = (uint)CONCAT71((int7)((uint64_t)uVar29 >> 8),1);
        }
        local_c8 = lVar12;
        if ((local_210 != '\0') && (local_218 != 0)) {
          FUN_00d50b20();
        }
      }
      local_1c8._0_4_ = local_1c8._0_4_ - local_98._0_4_ * local_1c8._0_4_;
      if (lVar11 != 0) {
        FUN_00d50b20();
      }
      bVar25 = false;
    }
    else {
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        param_1 = (void*)local_38;
      }
      local_98 = (double)FUN_016d2000();
      FUN_01e3f820();
      local_1c8._0_4_ = extraout_XMM0_Db + fVar26 + g_02390d00;
      if ((int)this_ptr[0x39] == 1) {
        local_1c8._0_4_ = (float)local_1c8._0_4_ + g_0241c6e8;
      }
      local_1c8._4_4_ = extraout_XMM0_Db + fVar26;
      fStack_1c0 = extraout_XMM0_Dd + fVar37;
      fStack_1bc = extraout_XMM0_Dd + fVar37;
      fVar26 = (float)_logf(CONCAT44((int)((uint64_t)(local_98 / (double)this_ptr[0x38]) >> 0x20),
                                     (float)(local_98 / (double)this_ptr[0x38])));
      local_98 = (double)CONCAT44(local_98._4_4_,fVar26 / *(float *)(this_ptr + 0x55));
      pvVar8 = _pthread_getspecific(param_1);
      if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
        param_1 = (void*)local_38;
      }
      cVar3 = FUN_016c2730();
      if (cVar3 == '\0') {
        bVar25 = false;
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
          param_1 = (void*)local_38;
        }
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar29 = FUN_019079b0();
        local_250 = (int64_t *)FUN_016caaa0(uVar29,0);
        bVar25 = true;
      }
      cVar3 = FUN_016bf360();
      if (cVar3 == '\0') {
        local_7c = 0;
      }
      else {
        pvVar8 = _pthread_getspecific(param_1);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_50 = (int64_t *)FUN_019079b0();
        pvVar8 = _pthread_getspecific(param_1);
        if ((pvVar8 == (void *)0x0) || (lVar11 = FUN_00e8b990(), lVar11 == 0)) {
          lVar11 = this_ptr[0x42];
        }
        else {
          param_1 = (void*)local_38;
          lVar11 = this_ptr[0x42];
        }
        if (lVar11 != 0) {
          local_230 = 0;
          FUN_00d50b00();
        }
        local_230 = '\x01';
        local_238 = lVar11;
        local_c8 = FUN_016cab10();
        dVar30 = (double)FUN_00e7c860();
        local_68 = (int64_t *)(dVar30 + g_023944d8);
        local_7c = 0;
        if ((local_50._4_4_ != 0) && (!NAN((double)local_68))) {
          cVar3 = FUN_00e7c790();
          if (cVar3 == '\0') {
            local_7c = 0;
          }
          else {
            pvVar8 = _pthread_getspecific(param_1);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_019079b0();
            pvVar8 = _pthread_getspecific(param_1);
            if ((pvVar8 != (void *)0x0) && (lVar11 = FUN_00e8b990(), lVar11 != 0)) {
              param_1 = (void*)local_38;
            }
            local_220 = 0;
            lVar11 = this_ptr[0x42];
            if (lVar11 != 0) {
              FUN_00d50b00();
            }
            local_220 = '\x01';
            local_228 = lVar11;
            local_128 = FUN_016cabc0();
            dVar30 = (double)FUN_00e7c860();
            local_7c = 0;
            if ((extraout_var_02 != 0) && (!NAN(dVar30 + g_02391030))) {
              local_7c = FUN_00e7c720();
              local_7c = local_7c ^ 1;
            }
            if ((local_220 != '\0') && (local_228 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((local_230 != '\0') && (local_238 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      local_1c8._0_4_ = local_1c8._0_4_ - local_98._0_4_ * local_1c8._0_4_;
    }
    iStack_34c = extraout_var;
    iStack_344 = extraout_var_00;
    if (lVar10 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar8 = _pthread_getspecific(param_1);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    param_1 = (void*)local_38;
  }
  FUN_016caaa0();
  fVar26 = *(float *)(**(int64_t **)(this_ptr[0x41] + 0x10) + 0x10);
  pvVar8 = _pthread_getspecific(param_1);
  if ((pvVar8 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
    plVar24 = (int64_t *)this_ptr[0x2e];
  }
  else {
    plVar24 = (int64_t *)this_ptr[0x2e];
  }
  if (plVar24 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar24 + 0x388))(g_02390d00 + (float)local_148._0_4_);
  pVar22 = 0;
  uVar29 = FUN_016c45d0(0,0);
  FUN_00d50b20();
  pvVar8 = _pthread_getspecific(pVar22);
  if ((pvVar8 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
    plVar18 = (int64_t *)this_ptr[0x2e];
    plVar24 = local_38;
  }
  else {
    plVar24 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
    plVar18 = (int64_t *)this_ptr[0x2e];
  }
  if (plVar18 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_1e8._0_4_ = (float)local_1e8 + (float)local_148._0_4_;
  local_1e8 = CONCAT44(local_1e8._4_4_ + (float)local_148._4_4_,(float)local_1e8);
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_ + uStack_140._4_4_,(float)uStack_1e0 + (float)uStack_140);
  (**(code **)(*plVar18 + 0x388))(g_02390d00 + (float)local_1e8 + g_02390124);
  pVar22 = 0;
  local_128 = FUN_016c45d0(0,0);
  FUN_00d50b20();
  local_50._0_4_ = 1;
  FUN_00e7c280();
  local_50 = (int64_t *)CONCAT44(local_50._4_4_,1);
  FUN_00e7c260();
  pvVar8 = _pthread_getspecific(pVar22);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_100 = 0;
  dVar30 = (double)FUN_016c46a0(0,&local_9c);
  uVar23 = *(uint *)(this_ptr[0x41] + 0xc);
  local_1ac = uVar23 - 1;
  lVar10 = *(int64_t *)(this_ptr[0x41] + 0x10);
  plVar18 = (int64_t *)(uint64_t)uVar23;
  if (0 < (int)uVar23) {
    plVar17 = (int64_t *)(uint64_t)local_1ac;
    do {
      if (*(double *)(*(int64_t *)(lVar10 + (int64_t)plVar17 * 8) + 0x38) <= dVar30) {
        local_100 = (uint64_t)plVar17 & 0xffffffff;
        plVar18 = plVar17;
        break;
      }
      plVar18 = (int64_t *)((int64_t)plVar17 + -1);
      bVar1 = 0 < (int64_t)plVar17;
      plVar17 = plVar18;
    } while (bVar1);
  }
  lVar11 = *(int64_t *)(lVar10 + local_100 * 8);
  if (lVar11 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = (uint)CONCAT71((int7)((uint64_t)lVar10 >> 8),1);
    FUN_00d50b00();
  }
  if ((int)local_100 < (int)local_1ac) {
    local_98 = *(double *)(*(int64_t *)(this_ptr[0x41] + 0x10) + 8 + local_100 * 8);
    if (local_98 != 0.0) {
      local_70 = CONCAT71((int7)((uint64_t)*(int64_t *)(this_ptr[0x41] + 0x10) >> 8),1);
      FUN_00d50b00();
      goto LAB_01c55759;
    }
  }
  local_98 = 0.0;
  local_70 = 0;
LAB_01c55759:
  pvVar8 = _pthread_getspecific((void*)plVar18);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar18 = local_38;
  }
  FUN_016f57b0(dVar30,0);
  local_158 = local_50;
  if ((((local_48 == '\0') && (local_50 != (int64_t *)0x0)) && (FUN_00d50b00(), local_48 != '\0'))
     && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific((void*)plVar18);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar18 = local_38;
  }
  local_308 = local_158;
  local_300 = '\0';
  FUN_016ebbb0();
  local_88 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_300 != '\0') && (local_308 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    pvVar8 = _pthread_getspecific((void*)plVar18);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar18 = local_38;
    }
    pvVar8 = _pthread_getspecific((void*)plVar18);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      plVar18 = local_88;
    }
    uVar31 = FUN_01909dc0();
    local_248 = FUN_016caaa0(uVar31,&local_9c);
  }
  plVar17 = (int64_t *)this_ptr[0x2e];
  if (plVar17 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  dVar32 = (double)(**(code **)(*plVar17 + 0x398))();
  FUN_00d50b20();
  plVar17 = (int64_t *)this_ptr[0x2e];
  if (plVar17 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_1d8 = (**(code **)(*plVar17 + 0x390))(dVar30);
  uStack_1d0 = extraout_XMM0_Qb_00;
  FUN_00d50b20();
  iStack_dc = (int)((uint64_t)uVar29 >> 0x20);
  if ((((iStack_dc == 0) || (extraout_var_03 == 0)) || (cVar3 = FUN_00e7c020(), cVar3 == '\0')) &&
     (local_98 != 0.0)) {
    insertps(ZEXT416(*(uint *)(lVar11 + 0xc)),ZEXT416(*(uint *)(lVar11 + 0x10)),0x10);
  }
  local_78 = uVar29;
  pvVar8 = _pthread_getspecific((void*)plVar18);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar18 = local_38;
  }
  local_120 = FUN_016c4760();
  if (local_78._4_4_ != 0) {
    fVar37 = local_1e8._4_4_;
    fVar27 = local_1e8._4_4_ + g_02390d00;
    auVar34._0_4_ = g_023945e0 & (uint)(float)local_1d8;
    auVar34._4_4_ = _UNK_023945e4 & local_1d8._4_4_;
    auVar34._8_4_ = _UNK_023945e8 & (uint)uStack_1d0;
    auVar34._12_4_ = _UNK_023945ec & uStack_1d0._4_4_;
    auVar33._4_12_ = SUB1612(auVar34 | g_023945f0,4);
    auVar33._0_4_ = SUB164(auVar34 | g_023945f0,0) + (float)local_1d8;
    auVar34 = roundss(auVar33,auVar33,0xb);
    local_1e8 = CONCAT44(local_1e8._4_4_,auVar34._0_4_);
    local_7c = local_7c ^ 1;
    do {
      if ((local_128._4_4_ == 0) || (cVar3 = FUN_00e7c020(), cVar3 == '\0')) break;
      local_39 = 1;
      if ((lVar9 != 0) && ((local_78._4_4_ != 0 && (iStack_34c != 0)))) {
        cVar3 = FUN_00e7c020();
        plVar18 = (int64_t *)CONCAT71((int7)((uint64_t)plVar18 >> 8),local_78._4_4_ == 0);
        if ((cVar3 == '\0' && local_78._4_4_ != 0) && (iStack_344 != 0)) {
          local_39 = FUN_00e7c020();
          local_39 = local_39 ^ 1;
        }
      }
      pvVar8 = _pthread_getspecific((void*)plVar18);
      if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        plVar18 = local_38;
      }
      bVar4 = FUN_016cade0();
      if ((byte)((byte)local_7c | local_39) == 1) {
        local_50 = (int64_t *)FUN_016bf2e0();
        if (((local_78._4_4_ != 0) && ((uint64_t)local_50 >> 0x20 != 0)) &&
           (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
          local_68 = (int64_t *)FUN_016bf310();
          if (((local_78._4_4_ != 0) && ((uint64_t)local_68 >> 0x20 != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 == '\0')) goto LAB_01c55c20;
        }
        local_e8 = 0;
        if (!bVar25) goto LAB_01c55cb0;
LAB_01c55c31:
        if (((local_78._4_4_ == 0) || (local_250._4_4_ == 0)) ||
           (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
          local_c8 = CONCAT44(local_c8._4_4_,1);
          local_50 = local_250;
          FUN_00e7c280();
          local_68 = local_50;
          if ((local_78._4_4_ == 0) || ((uint64_t)local_50 >> 0x20 == 0)) goto LAB_01c55cb0;
          cVar3 = FUN_00e7c000();
          plVar18 = (int64_t *)CONCAT71((int7)((uint64_t)plVar18 >> 8),local_39);
          local_51 = local_39;
          if (cVar3 != '\0') goto LAB_01c55ca4;
        }
        else {
LAB_01c55ca4:
          local_51 = 1;
        }
      }
      else {
LAB_01c55c20:
        local_e8 = 1;
        if (bVar25) goto LAB_01c55c31;
LAB_01c55cb0:
        local_51 = local_39;
      }
      FUN_01d48b40();
      if ((((local_88 == (int64_t *)0x0) || (local_78._4_4_ == 0)) || (local_248._4_4_ == 0)) ||
         (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
        if (bVar4 == 0) {
          local_2c8 = local_110;
          local_2c0 = '\0';
          FUN_01d488d0();
          if ((local_2c0 != '\0') && (local_2c8 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_2d8 = local_108;
          local_2d0 = '\0';
          FUN_01d488d0();
          if ((local_2d0 != '\0') && (local_2d8 != 0)) {
            FUN_00d50b20();
          }
        }
joined_r0x01c55e24:
        if (local_39 != 0) goto LAB_01c55e2a;
LAB_01c56160:
        if ((bVar4 | g_0241ea60 < dVar32) == 1) {
          FUN_01d48990();
          local_170 = 0;
          if (local_c0 == '\0') {
            if (local_c8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_170 = '\x01';
          local_178 = local_c8;
          local_290 = '\0';
          local_298 = 0;
          FUN_01c57df0();
          plVar17 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_50 = plVar17;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_290 != '\0') && (local_298 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_2f8 = local_168;
        local_2f0 = '\0';
        FUN_01d488d0();
        if ((local_2f0 != '\0') && (local_2f8 != 0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific((void*)plVar18);
        if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          plVar18 = local_38;
        }
        plVar17 = local_88;
        local_2e8 = local_88;
        local_2e0 = '\0';
        FUN_016ebbb0();
        plVar24 = local_50;
        if (local_50 == plVar17) {
LAB_01c56085:
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
            FUN_00d50b20();
            local_88 = plVar24;
            goto LAB_01c56085;
          }
          FUN_00d50b20();
          local_48 = '\0';
          local_88 = plVar24;
        }
        if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_88 != (int64_t *)0x0) {
          pvVar8 = _pthread_getspecific((void*)plVar18);
          plVar24 = local_38;
          if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar24 = local_38, lVar10 != 0))
          {
            plVar18 = local_38;
            plVar24 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
          }
          pvVar8 = _pthread_getspecific((void*)plVar18);
          if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            plVar18 = local_88;
          }
          uVar29 = FUN_01909dc0();
          local_248 = FUN_016caaa0(uVar29,0);
          goto joined_r0x01c55e24;
        }
        local_88 = (int64_t *)0x0;
        if (local_39 == 0) goto LAB_01c56160;
LAB_01c55e2a:
        if (bVar4 == 0) {
          if (g_0241ea60 < dVar32) {
            FUN_01d48990();
            local_180 = 0;
            if (local_c0 == '\0') {
              if (local_c8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c0 = '\0';
            }
            local_180 = '\x01';
            local_188 = local_c8;
            local_2a8 = local_150;
            local_2a0 = '\0';
            FUN_01c57df0();
            plVar17 = local_68;
            if (local_60 == '\0') {
              if (local_68 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_50 = plVar17;
            local_48 = '\0';
            FUN_00d21140();
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar17 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2a0 != '\0') && (local_2a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_180 != '\0') && (local_188 != 0)) {
              FUN_00d50b20();
            }
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          FUN_01d48990();
          local_190 = 0;
          if (local_c0 == '\0') {
            if (local_c8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_190 = '\x01';
          local_198 = local_c8;
          local_2b8 = local_160;
          local_2b0 = '\0';
          FUN_01c57df0();
          plVar17 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_50 = plVar17;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2b0 != '\0') && (local_2b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      local_240 = local_120;
      pvVar8 = _pthread_getspecific((void*)plVar18);
      plVar17 = local_38;
      if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), plVar17 = local_38, lVar10 != 0)) {
        plVar18 = local_38;
        plVar17 = (int64_t *)local_38[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      local_68 = (int64_t *)CONCAT44(local_68._4_4_,1);
      local_50 = (int64_t *)local_78;
      uVar29 = FUN_00e7c260();
      lVar10 = FUN_016c4760(uVar29,&local_9c);
      uVar20 = CONCAT71((int7)((uint64_t)plVar17 >> 8),1);
      local_12c = 0;
      local_120 = lVar10;
      while (pVar22 = (void*)plVar18, (uVar20 & 1) != 0) {
        local_254 = (uint)uVar20;
        local_1d8 = CONCAT44(local_1d8._4_4_,(int)CONCAT71((int7)((uint64_t)lVar10 >> 8),1));
        fVar39 = fVar26;
        if (local_98 == 0.0) {
          local_98 = 0.0;
LAB_01c568a0:
          plVar18 = (int64_t *)this_ptr[0x2e];
          if (plVar18 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          pvVar8 = _pthread_getspecific(pVar22);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016c98e0();
          local_148 = (uint8_t  [8])(**(code **)(*plVar18 + 0x390))();
          uStack_140 = extraout_XMM0_Qb_01;
          FUN_00d50b20();
          if (((local_78._4_4_ == 0) || (extraout_var_03 == 0)) ||
             (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
            if ((char)local_1d8 == '\0') {
              if (((*(int *)((int64_t)local_98 + 0x44) == 0) || (local_120._4_4_ == 0)) ||
                 (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
                fVar39 = (float)*(void*)(lVar11 + 0xc);
                fVar40 = (float)((uint64_t)*(void*)(lVar11 + 0xc) >> 0x20);
                fVar39 = fVar40 + ((float)((uint64_t)*(void*)((int64_t)local_98 + 0xc) >>
                                          0x20) - fVar40) *
                                  (((float)local_148._0_4_ - fVar39) /
                                  ((float)*(void*)((int64_t)local_98 + 0xc) - fVar39));
              }
              else {
                fVar39 = *(float *)((int64_t)local_98 + 0x10);
                fVar40 = 0.0;
              }
              goto LAB_01c56a30;
            }
            fVar39 = *(float *)(lVar11 + 0x10);
            fVar40 = 0.0;
            uVar41 = 0;
            uVar42 = 0;
            uVar20 = 0;
          }
          else {
            fVar40 = 0.0;
            if ((char)local_1d8 == '\0') {
LAB_01c56a30:
              uVar42 = 0;
              uVar41 = 0;
              local_12c = local_12c & 0xff;
              if (*(char *)((int64_t)local_98 + 0x48) != '\0') {
                local_12c = 1;
              }
              uVar20 = 0;
            }
            else {
              uVar20 = 0;
              fVar40 = 0.0;
              uVar41 = 0;
              uVar42 = 0;
            }
          }
        }
        else {
          if ((*(int *)((int64_t)local_98 + 0x44) == 0) || (local_240._4_4_ == 0)) {
            uVar19 = local_70 & 0xffffffff;
            dVar30 = local_98;
          }
          else {
            uVar20 = local_70 & 0xffffffff;
            cVar3 = FUN_00e7c020();
            if (cVar3 == '\0') {
              iVar5 = (int)local_100;
              if ((double)lVar11 != local_98) {
                if ((char)local_70 != '\0') {
                  uVar20 = local_70 & 0xffffffff;
                  FUN_00d50b00();
                }
                auVar21 = (uint8_t  [8])local_98;
                plVar24 = (int64_t *)(local_70 & 0xffffffff);
                if (((char)local_58 != '\0') &&
                   (plVar24 = (int64_t *)(local_70 & 0xffffffff), lVar11 != 0)) {
                  uVar20 = local_70 & 0xffffffff;
                  FUN_00d50b20();
                  plVar24 = (int64_t *)(local_70 & 0xffffffff);
                }
LAB_01c566d5:
                lVar11 = (int64_t)auVar21;
                if (iVar5 + 1 < (int)local_1ac) goto LAB_01c566ed;
LAB_01c5682b:
                uVar19 = local_70;
                local_58 = (uint)plVar24;
                if ((char)local_70 != '\0') {
                  FUN_00d50b20();
                  pVar22 = (void*)local_70;
                  local_100 = (uint64_t)(iVar5 + 1);
                  local_70 = 0;
                  local_98 = 0.0;
                  goto LAB_01c568a0;
                }
                local_70 = 0;
LAB_01c56855:
                local_100 = (uint64_t)(iVar5 + 1);
                pVar22 = (void*)uVar19;
                local_98 = 0.0;
                goto LAB_01c568a0;
              }
              if (((char)local_70 != '\0') && ((char)local_58 == '\0')) {
                plVar24 = (int64_t *)CONCAT71((int7)((uint64_t)plVar24 >> 8),1);
                local_58 = 0;
                uVar20 = local_70 & 0xffffffff;
                local_148 = (uint8_t  [8])lVar11;
                FUN_00d50b00();
                auVar21 = local_148;
                goto LAB_01c566d5;
              }
              plVar24 = (int64_t *)(uint64_t)local_58;
              if ((int)local_1ac <= iVar5 + 1) goto LAB_01c5682b;
LAB_01c566ed:
              pVar22 = iVar5 + 1;
              lVar10 = (int64_t)iVar5;
              uVar19 = *(uint64_t *)(this_ptr[0x41] + 0x10);
              dVar30 = *(double *)(uVar19 + 0x10 + lVar10 * 8);
              uVar23 = (uint)plVar24;
              if (local_98 == dVar30) {
                if ((char)local_70 != '\0') {
                  local_100 = (uint64_t)pVar22;
                  uVar19 = local_70 & 0xffffffff;
                  dVar30 = local_98;
                  local_58 = uVar23;
                  goto LAB_01c56595;
                }
                local_70 = 0;
                FUN_00d50b00();
                pVar15 = (void*)uVar19;
                dVar30 = local_98;
              }
              else {
                if (dVar30 != 0.0) {
                  lVar10 = FUN_00d50b00();
                }
                if ((char)local_70 != '\0') {
                  local_98 = dVar30;
                  lVar10 = FUN_00d50b20();
                }
                pVar15 = (void*)uVar19;
                if (dVar30 == 0.0) {
                  uVar14 = (undefined7)((uint64_t)lVar10 >> 8);
                  local_70 = CONCAT71(uVar14,1);
                  local_1d8 = CONCAT44(local_1d8._4_4_,(int)CONCAT71(uVar14,1));
                  local_58 = uVar23;
                  goto LAB_01c56855;
                }
              }
              local_100 = (uint64_t)pVar22;
              uVar19 = CONCAT71((int7)(uVar20 >> 8),1);
              local_58 = uVar23;
              pVar22 = pVar15;
            }
            else {
              uVar19 = local_70 & 0xffffffff;
              dVar30 = local_98;
            }
          }
LAB_01c56595:
          plVar24 = (int64_t *)((int64_t)dVar30 + 0x40);
          if (((*(int *)((int64_t)dVar30 + 0x44) != 0) && (local_120._4_4_ != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
            local_1d8 = local_1d8 & 0xffffffff00000000;
            local_98 = dVar30;
            local_70 = uVar19;
            goto LAB_01c568a0;
          }
          fVar28 = *(float *)((int64_t)dVar30 + 0xc);
          _local_148 = ZEXT416((uint)fVar28);
          fVar38 = fVar28;
          fVar40 = 0.0;
          uVar41 = 0;
          uVar42 = 0;
          if ((local_78._4_4_ == 0) || (extraout_var_03 == 0)) {
LAB_01c56608:
            fVar39 = ((fVar38 - *(float *)(lVar11 + 0xc)) / (fVar28 - *(float *)(lVar11 + 0xc))) *
                     (*(float *)((int64_t)dVar30 + 0x10) - *(float *)(lVar11 + 0x10)) +
                     *(float *)(lVar11 + 0x10);
          }
          else {
            cVar3 = FUN_00e7c020();
            fVar40 = 0.0;
            uVar41 = 0;
            uVar42 = 0;
            if (cVar3 == '\0') {
              fVar28 = *(float *)((int64_t)dVar30 + 0xc);
              fVar38 = (float)local_148._0_4_;
              fVar40 = (float)local_148._4_4_;
              uVar41 = (float)uStack_140;
              uVar42 = uStack_140._4_4_;
              goto LAB_01c56608;
            }
          }
          local_240 = *plVar24;
          uVar20 = (uint64_t)local_254;
          local_98 = dVar30;
          local_70 = uVar19;
        }
        auVar35._0_4_ = local_148._0_4_ & g_023945e0;
        auVar35._4_4_ = local_148._4_4_ & _UNK_023945e4;
        auVar35._8_4_ = (uint)(float)uStack_140 & _UNK_023945e8;
        auVar35._12_4_ = (uint)uStack_140._4_4_ & _UNK_023945ec;
        auVar36._4_12_ = SUB1612(auVar35 | g_023945f0,4);
        auVar36._0_4_ = SUB164(auVar35 | g_023945f0,0) + (float)local_148._0_4_;
        local_148._4_4_ = fVar40;
        local_148._0_4_ = fVar39;
        uStack_140._0_4_ = (float)uVar41;
        uStack_140._4_4_ = (float)uVar42;
        auVar34 = roundss(ZEXT816(0),auVar36,0xb);
        plVar18 = (int64_t *)(uint64_t)local_51;
        local_1d8 = CONCAT44(local_1d8._4_4_,auVar34._0_4_);
        lVar10 = FUN_01c57f20(plVar18,local_e8,CONCAT44(fVar37,fVar27));
        local_1e8 = CONCAT44(local_1e8._4_4_,(float)local_1d8);
      }
      local_50 = (int64_t *)CONCAT44(local_50._4_4_,1);
      FUN_00e7c260();
    } while (local_78._4_4_ != 0);
  }
  local_288 = *arg1;
  local_280 = '\0';
  local_270 = '\0';
  local_278 = puVar6;
  FUN_01c58bf0();
  if ((local_270 != '\0') && (local_278 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  puVar7 = g_028b6ff8;
  local_268 = *arg1;
  local_260 = '\0';
  local_1f0 = 0;
  if (g_028b6ff8 != (void*)0x0) {
    FUN_00d50b00();
  }
  local_1f8 = puVar7;
  local_1f0 = '\x01';
  FUN_01c58e90();
  if ((local_1f0 != '\0') && (local_1f8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (g_028b6ff8 != (void*)0x0) {
    g_028b6ff8 = (void*)0x0;
    FUN_00d50b20();
  }
  if (local_88 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_158 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_70 != '\0') && (local_98 != 0.0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (lVar11 != 0)) {
    FUN_00d50b20();
  }
  if (local_168 != 0) {
    FUN_00d50b20();
  }
  if (local_150 != 0) {
    FUN_00d50b20();
  }
  if (local_160 != 0) {
    FUN_00d50b20();
  }
  if (local_110 != 0) {
    FUN_00d50b20();
  }
  if (local_108 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

