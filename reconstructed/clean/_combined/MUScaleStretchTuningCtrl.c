// ===================================================================
// MUScaleStretchTuningCtrl — Complete reconstructed pseudocode
// 10 functions
// ===================================================================


// ============================================================
// 01b47100
// ============================================================
// Function: FUN_01b47100
// Address: 01b47100
// Size: 9173 bytes
// Class: MUScaleStretchTuningCtrl
// String references:
//   " %@"
//   "%.1f"
//   "  "

void FUN_01b47100(uint8_t param_1 [8])

{
  uint uVar1;
  void*puVar2;
  double dVar3;
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  char cVar6;
  int iVar7;
  uint32_t uVar8;
  void *pvVar9;
  void*puVar10;
  uint *puVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint *puVar14;
  uint *puVar15;
  void* pVar16;
  uint uVar17;
  uint *puVar18;
  int64_t *plVar19;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t unaff_R12;
  undefined7 uVar20;
  int64_t lVar21;
  uint64_t uVar22;
  uint *puVar23;
  bool bVar24;
  uint64_t uVar25;
  uint32_t extraout_XMM0_Da;
  uint8_t auVar26 [8];
  double dVar27;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint32_t extraout_XMM0_Dc_01;
  uint32_t extraout_XMM0_Dc_02;
  uint32_t extraout_XMM0_Dc_03;
  uint32_t extraout_XMM0_Dc_04;
  uint32_t extraout_XMM0_Dc_05;
  uint32_t extraout_XMM0_Dc_06;
  uint32_t extraout_XMM0_Dd;
  uint32_t extraout_XMM0_Dd_00;
  uint32_t extraout_XMM0_Dd_01;
  uint32_t uVar28;
  uint32_t extraout_XMM0_Dd_02;
  uint32_t extraout_XMM0_Dd_03;
  uint32_t extraout_XMM0_Dd_04;
  uint32_t extraout_XMM0_Dd_05;
  uint32_t extraout_XMM0_Dd_06;
  float fVar29;
  uint8_t in_XMM1 [16];
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  uint8_t auVar34 [16];
  float fVar35;
  double dVar36;
  uint8_t auVar37 [16];
  uint8_t auVar38 [16];
  uint8_t auVar39 [16];
  uint64_t uVar41;
  uint8_t auVar40 [16];
  float fVar42;
  uint32_t in_XMM4_Db;
  uint32_t in_XMM4_Dc;
  uint32_t in_XMM4_Dd;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  double local_1a0;
  uint8_t local_198 [8];
  uint64_t uStack_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  uint *local_138;
  float local_130;
  float local_12c;
  uint *local_128;
  char local_120;
  uint8_t local_118 [16];
  uint64_t local_108;
  char local_100;
  uint8_t local_f8 [16];
  uint8_t local_e8 [16];
  double local_c8;
  float local_a8;
  uint local_90 [2];
  uint8_t local_88 [8];
  uint32_t uStack_80;
  uint32_t uStack_7c;
  uint *local_70;
  uint local_68;
  float local_64;
  int64_t local_60;
  char local_58;
  uint *local_50;
  uint8_t local_48 [16];
  
  *(void*)((int64_t)this_ptr + 0x16c) = 0xffffffff;
  if (this_ptr[0x28] == 0) {
    return;
  }
  iVar7 = FUN_01d3a5a0();
  if ((iVar7 != 1) || (iVar7 = FUN_01d3b630(), iVar7 != 1)) {
    iVar7 = FUN_01d3a5a0();
    if (iVar7 != 5) goto LAB_01b47a92;
    FUN_01b46180();
    (**(code **)(*this_ptr + 0x618))();
    FUN_01d3abf0();
    uVar12 = FUN_01e466c0();
    *(void*)((int64_t)this_ptr + 0x154) = uVar12;
    FUN_01e3f820();
    local_48 = in_XMM1;
    FUN_0173ba80();
    puVar18 = local_70;
    if (((char)local_68 == '\0') && (local_70 != (uint *)0x0)) {
      FUN_00d50b00();
      if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b20();
      }
    }
    local_88 = (uint8_t  [8])puVar18;
    pvVar9 = _pthread_getspecific(SUB84(param_1,0));
    if (pvVar9 == (void *)0x0) {
LAB_01b47560:
      auVar26 = local_88;
    }
    else {
      lVar21 = FUN_00e8b990();
      if (lVar21 == 0) goto LAB_01b47560;
      param_1 = local_88;
      auVar26 = (uint8_t  [8])
                *(int64_t **)
                 ((int64_t)local_88 + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 2 * 4);
    }
    pVar16 = SUB84(param_1,0);
    uVar8 = (**(code **)(*(int64_t *)auVar26 + 0x3a8))
                      ((float)uVar12 / ((float)local_48._0_4_ / g_0241d550) + g_0239394c);
    plVar19 = (int64_t *)this_ptr[0x29];
    if (plVar19 == (int64_t *)0x0) {
      fVar35 = 0.0;
    }
    else {
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        plVar19 = (int64_t *)this_ptr[0x29];
        lVar21 = FUN_00e8b990();
        if (lVar21 != 0) {
          plVar19 = (int64_t *)plVar19[(uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
      }
      pvVar9 = _pthread_getspecific(pVar16);
      if ((pvVar9 == (void *)0x0) || (lVar21 = FUN_00e8b990(), lVar21 == 0)) {
        auVar26 = local_88;
      }
      else {
        auVar26 = (uint8_t  [8])
                  *(int64_t **)
                   ((int64_t)local_88 + 0x20 + (uint64_t)(*(uint *)(lVar21 + 0x154) & 1) * 8);
      }
      fVar35 = (float)(**(code **)(*(int64_t *)auVar26 + 0x3a0))();
      dVar3 = (double)(**(code **)(*plVar19 + 0x380))(SUB84((double)fVar35,0));
      fVar35 = (float)dVar3;
    }
    puVar10 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar16 = 0x25795a8;
    *puVar10 = &g_025795a8;
    (*g_025795c0)();
    auVar26 = local_88;
    pvVar9 = _pthread_getspecific(pVar16);
    if ((pvVar9 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
      auVar26 = *(uint8_t (*) [8])
                 ((int64_t)auVar26 + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
    }
    lVar21 = g_027e45c8;
    if (g_027e45c8 != 0) {
      FUN_00d50b00();
    }
    local_210 = lVar21;
    local_208 = '\x01';
    local_200 = 0;
    local_1f8 = '\0';
    (**(code **)(*(int64_t *)auVar26 + 0x3c8))(&local_210,uVar8,&local_200);
    local_128 = local_70;
    local_120 = 0;
    auVar26 = local_88;
    if ((char)local_68 == '\0') {
      if (local_70 != (uint *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = local_68 & 0xffffff00;
    }
    local_120 = '\x01';
    FUN_00d8dbf0();
    if ((local_120 != '\0') && (local_128 != (uint *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    iVar7 = FUN_00d8c7a0();
    uVar12 = g_025908a0;
    uVar8 = extraout_XMM0_Da;
    if (iVar7 < 3) {
      uVar8 = FUN_00d94d80(&g_025908a0,g_025908a0);
    }
    FUN_00d94d80(uVar8,uVar12);
    if (0.0 < fVar35) {
      FUN_00d94d80(0,uVar12);
    }
    local_68 = 1;
    local_70 = (uint *)&g_024d0b28;
    local_64 = fVar35;
    FUN_00d94d80(fVar35,&local_70);
    local_1f0 = g_027e4700;
    if (g_027e4700 != 0) {
      FUN_00d50b00();
    }
    lVar21 = g_027e13b0;
    local_1e8 = '\x01';
    if (g_027e13b0 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar21;
    local_1d8 = '\x01';
    local_1d0 = 0;
    local_1c8 = '\0';
    uVar8 = FUN_00d31230(&local_1d0,&local_1e0);
    local_60 = CONCAT71(local_108._1_7_,(char)local_108);
    local_68 = 1;
    local_70 = (uint *)&g_024c5048;
    local_58 = 0;
    if (local_60 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_00d94d80(uVar8,&local_70);
    local_70 = (uint *)&g_024c5048;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_100 != '\0') && (CONCAT71(local_108._1_7_,(char)local_108) != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != 0)) {
      FUN_00d50b20();
    }
    puVar2 = (void*)this_ptr[0x2c];
    if (puVar2 != puVar10) {
      FUN_00d50b00();
      this_ptr[0x2c] = (int64_t)puVar10;
      if (puVar2 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    if ((*(float *)(this_ptr + 0x2d) == g_02391074) &&
       (!NAN(*(float *)(this_ptr + 0x2d)) && !NAN(g_02391074))) {
      FUN_01f27fe0();
      local_140 = 0;
      (**(code **)(this_ptr[0x27] + 0x10))();
      uVar8 = FUN_00d50b00();
      local_140 = '\x01';
      local_1c0 = 0;
      local_1b8 = '\0';
      local_148 = this_ptr + 0x27;
      FUN_01f47190(uVar8,&local_1c0);
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
        (**(code **)(*local_148 + 0x10))();
        FUN_00d50b20();
      }
      if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 0x2d) = 0x40000000;
    FUN_01b46180();
    (**(code **)(*this_ptr + 0x618))();
    FUN_00d50b20();
    if (auVar26 != (uint8_t  [8])0x0) {
      FUN_00d50b20();
    }
LAB_01b47a92:
    local_1b0 = *arg1;
    local_1a8 = '\0';
    FUN_01e459c0();
    if (local_1a8 == '\0') {
      return;
    }
    if (local_1b0 == 0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  FUN_01d3abf0();
  local_e8._0_8_ = FUN_01e466c0();
  local_e8._8_4_ = extraout_XMM0_Dc;
  local_e8._12_4_ = extraout_XMM0_Dd;
  pvVar9 = _pthread_getspecific(SUB84(param_1,0));
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  puVar18 = local_70;
  if (((char)local_68 == '\0') && (local_70 != (uint *)0x0)) {
    FUN_00d50b00();
    if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_f8._4_4_ = local_e8._4_4_;
  local_f8._0_4_ = local_e8._4_4_;
  local_f8._8_4_ = local_e8._12_4_;
  local_f8._12_4_ = local_e8._12_4_;
  if ((int)puVar18[3] < 1) {
    local_50 = (uint *)0x0;
    puVar23 = (uint *)0x0;
  }
  else {
    lVar21 = 0;
    puVar23 = (uint *)0x0;
    local_50 = (uint *)0x0;
    do {
      puVar14 = *(uint **)(*(int64_t *)(puVar18 + 4) + lVar21 * 8);
      puVar11 = puVar18;
      if (puVar14 != (uint *)0x0) {
        FUN_00d50b00();
      }
      pVar16 = (void*)puVar11;
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_013faed0();
      local_88 = (uint8_t  [8])uVar12;
      FUN_01e3f820();
      auVar32 = in_XMM1;
      FUN_01e3f820();
      auVar32._0_4_ = (auVar32._0_4_ / g_0241d550) * g_02394218;
      local_48 = auVar32;
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_013faf20();
      local_118._0_8_ = uVar12;
      FUN_01e3f820();
      fVar35 = *(float *)(this_ptr + 0x2a);
      _local_198 = auVar32;
      FUN_01e3f820();
      local_a8 = in_XMM1._0_4_;
      fVar42 = (float)(double)local_88 * (local_a8 / g_0241d550) + (float)local_48._0_4_;
      fVar29 = auVar32._4_4_;
      auVar37._4_4_ = fVar29;
      auVar37._0_4_ = fVar29;
      uVar8 = auVar32._12_4_;
      auVar37._8_4_ = uVar8;
      auVar37._12_4_ = uVar8;
      fVar35 = (fVar29 / (*(float *)(this_ptr + 0x2a) + *(float *)(this_ptr + 0x2a))) * fVar35 -
               ((float)local_198._4_4_ / (fVar35 + fVar35)) * (float)(double)local_118._0_8_;
      local_88._0_4_ = fVar42;
      auVar30._4_4_ = in_XMM4_Db;
      auVar30._0_4_ = fVar42;
      auVar30._8_4_ = in_XMM4_Dc;
      auVar30._12_4_ = in_XMM4_Dd;
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = fVar42 + g_02394210;
      auVar4._4_4_ = fVar29;
      auVar4._0_4_ = fVar35 + g_02394210;
      auVar4._8_4_ = uVar8;
      auVar4._12_4_ = uVar8;
      in_XMM1 = insertps(auVar31,auVar4,0x10);
      cVar6 = FUN_00d05410(local_e8._0_4_,in_XMM1._0_8_,g_02420ca0);
      if (cVar6 != '\0') {
        uVar20 = (undefined7)(unaff_R12 >> 8);
        if (puVar23 == puVar14) {
          if (((char)local_50 == '\0') && (puVar23 != (uint *)0x0)) {
            unaff_R12 = CONCAT71(uVar20,1);
            local_50 = (uint *)0x0;
            local_48._0_8_ = puVar23;
            FUN_00d50b00();
            puVar23 = (uint *)local_48._0_8_;
          }
          else {
            unaff_R12 = (uint64_t)local_50 & 0xffffffff;
          }
        }
        else {
          local_48._0_8_ = puVar23;
          if (puVar14 != (uint *)0x0) {
            FUN_00d50b00();
          }
          unaff_R12 = CONCAT71(uVar20,1);
          puVar23 = puVar14;
          if (((char)local_50 != '\0') && (local_48._0_8_ != 0)) {
            FUN_00d50b20();
          }
        }
        *(int *)((int64_t)this_ptr + 0x16c) = (int)lVar21;
        local_130 = (float)local_88._0_4_ - (float)local_e8._0_4_;
        in_XMM1._0_4_ = fVar35 - (float)local_f8._0_4_;
        in_XMM1._4_12_ = auVar37._4_12_;
        local_50 = (uint *)(unaff_R12 & 0xffffffff);
        local_12c = in_XMM1._0_4_;
      }
      if (puVar14 != (uint *)0x0) {
        FUN_00d50b20();
      }
      lVar21 = lVar21 + 1;
      param_1 = (uint8_t  [8])puVar18;
    } while (lVar21 < (int)puVar18[3]);
  }
  iVar7 = FUN_01d3b620();
  if (iVar7 == 2) {
    if (puVar23 == (uint *)0x0) {
LAB_01b47c79:
      lVar21 = this_ptr[0x28];
      if (lVar21 != 0) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      fVar35 = *(float *)(this_ptr + 0x2a);
      _local_88 = in_XMM1;
      FUN_01e3f820();
      fVar35 = fVar35 - (float)local_f8._0_4_ /
                        (in_XMM1._4_4_ /
                        (*(float *)(this_ptr + 0x2a) + *(float *)(this_ptr + 0x2a)));
      auVar32 = ZEXT416(g_023945e0 & (uint)fVar35) | g_023945f0;
      auVar33._4_12_ = auVar32._4_12_;
      auVar33._0_4_ = auVar32._0_4_ + fVar35;
      in_XMM1 = roundss(auVar33,auVar33,0xb);
      FUN_01b468c0((float)local_e8._0_4_ / ((float)local_88._0_4_ / g_0241d550) + g_0239394c,
                   in_XMM1._0_8_,g_02390124);
      puVar14 = local_70;
      if (((char)local_68 == '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      if (puVar14 != (uint *)0x0) {
        local_170 = 0;
        lVar21 = this_ptr[0x28];
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        local_170 = '\x01';
        local_178 = lVar21;
        FUN_01778a40();
        puVar11 = (uint *)this_ptr[0x29];
        puVar15 = puVar11;
        if (puVar11 != local_70) {
          if ((char)local_68 == '\0') {
            if (local_70 == (uint *)0x0) {
              puVar15 = (uint *)0x0;
            }
            else {
              FUN_00d50b00();
              puVar11 = (uint *)this_ptr[0x29];
              puVar15 = local_70;
            }
          }
          else {
            local_68 = local_68 & 0xffffff00;
            puVar15 = local_70;
          }
          this_ptr[0x29] = (int64_t)puVar15;
          if (puVar11 != (uint *)0x0) {
            FUN_00d50b20();
            puVar15 = local_70;
          }
        }
        if (((char)local_68 != '\0') && (puVar15 != (uint *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if (this_ptr[0x2c] != 0) {
          this_ptr[0x2c] = 0;
          FUN_00d50b20();
        }
        puVar11 = local_50;
        uVar12 = (**(code **)(*this_ptr + 0x620))();
        pVar16 = (void*)puVar11;
        if (puVar14 == puVar23) {
          if ((char)local_50 == '\0') {
            local_50 = (uint *)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          uVar12 = FUN_00d50b00();
          if (((char)local_50 == '\0') || (puVar23 == (uint *)0x0)) {
            local_50 = (uint *)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
            puVar23 = puVar14;
          }
          else {
            uVar12 = FUN_00d50b20();
            local_50 = (uint *)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
            puVar23 = puVar14;
          }
        }
        pvVar9 = _pthread_getspecific(pVar16);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013f2b00();
        local_68 = local_68 & 0xffffff00;
        local_70 = puVar23;
        uVar8 = FUN_00d237a0();
        if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
          FUN_00d50b20();
        }
        *(void*)((int64_t)this_ptr + 0x16c) = uVar8;
        if ((local_100 != '\0') && (CONCAT71(local_108._1_7_,(char)local_108) != 0)) {
          FUN_00d50b20();
        }
        param_1 = (uint8_t  [8])local_50;
        (**(code **)(*this_ptr + 0x620))();
        local_130 = 0.0;
        FUN_00d50b20();
        local_12c = 0.0;
      }
      goto LAB_01b47f7b;
    }
    FUN_00d23310();
    puVar14 = local_70;
    local_108._0_1_ = (char)local_68;
    puVar11 = (uint *)&local_108;
    if ((char)local_68 != '\0') {
      puVar11 = &local_68;
    }
    *(void*)puVar11 = 0;
    if (((char)local_68 != '\0') && (puVar14 != (uint *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar14 == puVar23) {
      bVar24 = false;
    }
    else {
      FUN_00d23340();
      puVar11 = local_70;
      param_1 = (uint8_t  [8])local_90;
      puVar15 = &local_68;
      if ((char)local_68 == '\0') {
        puVar15 = (uint *)param_1;
      }
      local_90[0]._0_1_ = (char)local_68;
      *(void*)puVar15 = 0;
      if (((char)local_68 != '\0') && (puVar11 != (uint *)0x0)) {
        FUN_00d50b20();
      }
      bVar24 = puVar11 != puVar23;
      if (((char)local_90[0] != '\0') && (puVar11 != (uint *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_108 != '\0') && (puVar14 != (uint *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar24) goto LAB_01b47c79;
    pvVar9 = _pthread_getspecific(SUB84(param_1,0));
    if (pvVar9 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f3080();
    local_180 = 0;
    local_188 = this_ptr[0x28];
    if (local_188 != 0) {
      FUN_00d50b00();
    }
    local_180 = '\x01';
    FUN_01778a40();
    puVar18 = (uint *)this_ptr[0x29];
    puVar14 = puVar18;
    if (puVar18 != local_70) {
      if ((char)local_68 == '\0') {
        if (local_70 == (uint *)0x0) {
          puVar14 = (uint *)0x0;
        }
        else {
          FUN_00d50b00();
          puVar18 = (uint *)this_ptr[0x29];
          puVar14 = local_70;
        }
      }
      else {
        local_68 = local_68 & 0xffffff00;
        puVar14 = local_70;
      }
      this_ptr[0x29] = (int64_t)puVar14;
      if (puVar18 != (uint *)0x0) {
        FUN_00d50b20();
        puVar14 = local_70;
      }
    }
    if (((char)local_68 != '\0') && (puVar14 != (uint *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x2c] != 0) {
      this_ptr[0x2c] = 0;
      FUN_00d50b20();
    }
    *(void*)((int64_t)this_ptr + 0x16c) = 0xffffffff;
    (**(code **)(*this_ptr + 0x620))();
  }
  else {
LAB_01b47f7b:
    if (puVar23 != (uint *)0x0) {
LAB_01b47f90:
      do {
        (**(code **)(*this_ptr + 0x658))();
        puVar11 = local_70;
        puVar14 = (uint *)*arg1;
        if (puVar14 == local_70) {
          if (((char)arg1[1] == '\0') && (local_70 != (uint *)0x0)) {
            if ((char)local_68 == '\0') {
              FUN_00d50b00();
              goto LAB_01b48043;
            }
LAB_01b47ff1:
            *(void*)(arg1 + 1) = 1;
            local_68 = local_68 & 0xffffff00;
          }
          lVar21 = *arg1;
        }
        else {
          lVar21 = arg1[1];
          if ((char)local_68 != '\0') {
            *arg1 = (int64_t)local_70;
            if (((char)lVar21 != '\0') && (puVar14 != (uint *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01b47ff1;
          }
          if (local_70 != (uint *)0x0) {
            FUN_00d50b00();
          }
          *arg1 = (int64_t)puVar11;
          if (((char)lVar21 != '\0') && (puVar14 != (uint *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b48043:
          *(void*)(arg1 + 1) = 1;
          lVar21 = *arg1;
        }
        if (lVar21 == 0) {
          if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01b493fb;
        }
        iVar7 = FUN_01d3a5a0();
        if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar7 == 6) goto LAB_01b493fb;
        iVar7 = FUN_01d3a5a0();
        pVar16 = SUB84(param_1,0);
      } while (iVar7 != 5);
      FUN_01d3abf0();
      local_88 = (uint8_t  [8])FUN_01e466c0();
      uStack_80 = extraout_XMM0_Dc_00;
      uStack_7c = extraout_XMM0_Dd_00;
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      param_1 = (uint8_t  [8])(int64_t)*(int *)((int64_t)this_ptr + 0x16c);
      lVar21 = *(int64_t *)(local_70 + 4);
      puVar14 = *(uint **)(lVar21 + (int64_t)param_1 * 8);
      if (puVar23 == puVar14) {
        if (((char)local_50 == '\0') && (puVar23 != (uint *)0x0)) {
          local_50 = (uint *)CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (puVar14 != (uint *)0x0) {
          lVar21 = FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (puVar23 == (uint *)0x0)) {
          local_50 = (uint *)CONCAT71((int7)((uint64_t)lVar21 >> 8),1);
          puVar23 = puVar14;
        }
        else {
          uVar12 = FUN_00d50b20();
          local_50 = (uint *)CONCAT71((int7)((uint64_t)uVar12 >> 8),1);
          puVar23 = puVar14;
        }
      }
      if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e3f820();
      auVar34._4_12_ = in_XMM1._4_12_;
      auVar34._0_4_ = in_XMM1._0_4_ / g_0241d550;
      local_48._0_4_ = (local_130 + (float)local_88._0_4_) / auVar34._0_4_ + g_0239394c;
      fVar35 = *(float *)(this_ptr + 0x2a);
      FUN_01e3f820();
      fVar29 = *(float *)(this_ptr + 0x2a);
      local_118 = auVar34;
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      auVar26 = (uint8_t  [8])FUN_013faed0();
      dVar3 = (double)auVar26;
      if ((0 < *(int *)((int64_t)this_ptr + 0x16c)) &&
         (param_1 = (uint8_t  [8])(uint64_t)(puVar18[3] - 1),
         *(int *)((int64_t)this_ptr + 0x16c) < (int)(puVar18[3] - 1))) {
        pvVar9 = _pthread_getspecific((void*)*(int64_t *)(puVar18 + 4));
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013faed0();
        local_198 = (uint8_t  [8])(dVar3 + g_0238fee8);
        param_1 = *(uint8_t (*) [8])(puVar18 + 4);
        pvVar9 = _pthread_getspecific(SUB84(param_1,0));
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013faed0();
        auVar26 = local_198;
        dVar3 = dVar3 + g_023b19a0;
      }
      fVar42 = (float)local_48._0_4_;
      if ((double)(float)local_48._0_4_ < (double)auVar26) {
        fVar42 = (float)(double)auVar26;
      }
      if (dVar3 < (double)fVar42) {
        fVar42 = (float)dVar3;
      }
      local_48._0_4_ = fVar42;
      _local_198 = ZEXT416(*(uint *)(this_ptr + 0x2a));
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_013faed0();
      local_e8._0_8_ = uVar12;
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_013faf20();
      fVar35 = fVar35 - ((float)local_88._4_4_ + local_12c) /
                        ((float)local_118._4_4_ / (fVar29 + fVar29));
      fVar29 = (float)((uint)local_198._0_4_ ^ g_023945e0);
      if (fVar29 <= fVar35) {
        fVar29 = fVar35;
      }
      auVar38 = _local_198;
      if (fVar29 <= local_198._0_4_) {
        auVar38._4_12_ = local_198._4_12_;
        auVar38._0_4_ = fVar29;
      }
      in_XMM1._0_4_ = (float)(double)local_e8._0_8_;
      in_XMM1._4_4_ = local_e8._4_4_;
      in_XMM1._8_8_ = 0;
      auVar39._4_12_ = auVar38._4_12_;
      auVar39._0_4_ = auVar38._0_4_ - (float)dVar3;
      if ((float)local_48._0_4_ - in_XMM1._0_4_ == g_0239424c) {
        if ((auVar39._0_4_ == g_0239424c) && (!NAN(auVar39._0_4_) && !NAN(g_0239424c)))
        goto LAB_01b47f90;
      }
      local_48._0_4_ = (float)local_48._0_4_ - in_XMM1._0_4_;
      _local_198 = auVar39;
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      puVar14 = local_70;
      if (((char)local_68 == '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar1 = puVar14[3];
      local_138 = puVar14;
      FUN_00c8e690();
      puVar11 = local_70;
      if (((char)local_68 == '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
          FUN_00d50b20();
        }
      }
      local_118._0_8_ = puVar11;
      FUN_00c92170();
      FUN_00c92160();
      local_88 = (uint8_t  [8])(puVar14 + 4);
      if (0 < (int)uVar1) {
        uVar22 = 0;
        uVar12 = local_118._0_8_;
        do {
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_013faed0();
          *(float *)(*(int64_t *)(uVar12 + 0x10) + uVar22 * 8) = (float)dVar3;
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_013faf20();
          *(float *)(*(int64_t *)(uVar12 + 0x10) + 4 + uVar22 * 8) = (float)dVar3;
          uVar22 = uVar22 + 1;
        } while (uVar1 != uVar22);
        if (3 < (int)uVar1) {
          if (*(uint *)((int64_t)this_ptr + 0x16c) == 0) {
            pvVar9 = _pthread_getspecific(SUB84(param_1,0));
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_e8._0_8_ = FUN_013faf20();
            local_e8._8_4_ = extraout_XMM0_Dc_03;
            local_e8._12_4_ = extraout_XMM0_Dd_03;
            pvVar9 = _pthread_getspecific(SUB84(param_1,0));
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar3 = (double)FUN_013faf20();
            pvVar9 = _pthread_getspecific(SUB84(param_1,0));
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_013faed0();
            local_f8._0_8_ = uVar12;
            pvVar9 = _pthread_getspecific(SUB84(param_1,0));
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar27 = (double)FUN_013faed0();
            uVar8 = local_e8._8_4_;
            uVar28 = local_e8._12_4_;
            dVar3 = (local_e8._0_8_ - dVar3) / ((double)local_f8._0_8_ - dVar27);
            lVar21 = 0;
            do {
              local_e8._8_4_ = uVar8;
              local_e8._0_8_ = dVar3;
              local_e8._12_4_ = uVar28;
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = (double)FUN_013faf20();
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar12 = FUN_013faf20();
              local_f8._0_8_ = uVar12;
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1a0 = (double)FUN_013faed0();
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar3 = (double)FUN_013faed0();
              dVar3 = (local_c8 - (double)local_f8._0_8_) / (local_1a0 - dVar3);
              if (((double)(local_e8._0_8_ & g_023908f0) <
                   (double)((uint64_t)dVar3 & g_023908f0)) ||
                 ((double)local_e8._0_8_ * dVar3 < 0.0)) {
LAB_01b48cfa:
                uVar17 = (int)lVar21 + 1;
                goto LAB_01b48cfe;
              }
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar27 = (double)FUN_013faf20();
              if ((dVar27 == g_02390448) && (!NAN(dVar27) && !NAN(g_02390448)))
              goto LAB_01b48cfa;
              lVar21 = lVar21 + 1;
              uVar8 = extraout_XMM0_Dc_04;
              uVar28 = extraout_XMM0_Dd_04;
            } while ((uint64_t)(uVar1 - 1) - 1 != lVar21);
            uVar17 = 0;
LAB_01b48cfe:
            if ((int)(uVar1 - 3) < (int)uVar17) {
              uVar17 = uVar1 - 3;
            }
          }
          else {
            uVar17 = local_138[3] - 1;
            param_1 = (uint8_t  [8])(uint64_t)uVar17;
            if (*(uint *)((int64_t)this_ptr + 0x16c) != uVar17) goto LAB_01b4901b;
            pvVar9 = _pthread_getspecific(uVar17);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_e8._0_8_ = FUN_013faf20();
            local_e8._8_4_ = extraout_XMM0_Dc_01;
            local_e8._12_4_ = extraout_XMM0_Dd_01;
            pvVar9 = _pthread_getspecific(SUB84(param_1,0));
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar3 = (double)FUN_013faf20();
            pvVar9 = _pthread_getspecific(SUB84(param_1,0));
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar12 = FUN_013faed0();
            local_f8._0_8_ = uVar12;
            pvVar9 = _pthread_getspecific(SUB84(param_1,0));
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar27 = (double)FUN_013faed0();
            uVar8 = local_e8._8_4_;
            uVar28 = local_e8._12_4_;
            dVar3 = (local_e8._0_8_ - dVar3) / ((double)local_f8._0_8_ - dVar27);
            iVar7 = uVar1 - 3;
            lVar21 = (uint64_t)(uVar1 - 2) + 1;
            do {
              local_e8._8_4_ = uVar8;
              local_e8._0_8_ = dVar3;
              local_e8._12_4_ = uVar28;
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_c8 = (double)FUN_013faf20();
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              uVar12 = FUN_013faf20();
              local_f8._0_8_ = uVar12;
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1a0 = (double)FUN_013faed0();
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar3 = (double)FUN_013faed0();
              dVar3 = (local_c8 - (double)local_f8._0_8_) / (local_1a0 - dVar3);
              if (((double)(local_e8._0_8_ & g_023908f0) <
                   (double)((uint64_t)dVar3 & g_023908f0)) ||
                 ((double)local_e8._0_8_ * dVar3 < 0.0)) {
LAB_01b48d11:
                uVar17 = iVar7 + 1U;
                if ((int)(iVar7 + 1U) < 3) {
                  uVar17 = 2;
                }
                goto LAB_01b48d22;
              }
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar27 = (double)FUN_013faf20();
              if ((dVar27 == g_02390448) && (!NAN(dVar27) && !NAN(g_02390448)))
              goto LAB_01b48d11;
              iVar7 = iVar7 + -1;
              lVar21 = lVar21 + -1;
              uVar8 = extraout_XMM0_Dc_02;
              uVar28 = extraout_XMM0_Dd_02;
            } while (2 < lVar21);
            uVar17 = 2;
          }
LAB_01b48d22:
          param_1 = (uint8_t  [8])(int64_t)(int)uVar17;
          pvVar9 = _pthread_getspecific(uVar17);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar12 = FUN_013faf20();
          local_e8._0_8_ = uVar12;
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_f8._0_8_ = FUN_013faf20();
          local_f8._8_4_ = extraout_XMM0_Dc_05;
          local_f8._12_4_ = extraout_XMM0_Dd_05;
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_013faf20();
          dVar36 = (dVar3 + (double)(float)local_198._0_4_) - (double)local_e8._0_8_;
          dVar3 = (double)((uint64_t)((double)local_f8._0_8_ - (double)local_e8._0_8_) &
                          g_023908f0);
          dVar27 = g_02411158;
          if (g_02411158 <= dVar3) {
            dVar27 = dVar3;
          }
          uVar41 = CONCAT44(extraout_XMM0_Dd_06,extraout_XMM0_Dc_06) & _UNK_023908f8;
          dVar27 = (double)((uint64_t)dVar36 & g_023908f0) / dVar27;
          uVar25 = -(uint64_t)
                    (((double)local_f8._0_8_ - (double)local_e8._0_8_) * dVar36 < g_02390448);
          uVar22 = ~local_f8._8_8_ & uVar41;
          auVar40._0_8_ = ((uint64_t)dVar27 ^ g_023945b0) & uVar25;
          auVar40._8_8_ = (uVar41 ^ _UNK_023945b8) & local_f8._8_8_;
          auVar5._8_4_ = (int)uVar22;
          auVar5._0_8_ = ~uVar25 & (uint64_t)dVar27;
          auVar5._12_4_ = (int)(uVar22 >> 0x20);
          local_f8 = auVar40 | auVar5;
          if (*(int *)((int64_t)this_ptr + 0x16c) == 0) {
            if (1 < (int)uVar17) {
              uVar22 = 1;
              do {
                lVar21 = *(int64_t *)(*(int64_t *)local_88 + uVar22 * 8);
                pvVar9 = _pthread_getspecific(SUB84(param_1,0));
                if ((pvVar9 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  param_1 = *(uint8_t (*) [8])
                             (lVar21 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
                }
                pvVar9 = _pthread_getspecific(SUB84(param_1,0));
                if (pvVar9 != (void *)0x0) {
                  FUN_00e8b990();
                }
                dVar3 = (double)FUN_013faf20();
                FUN_013faee0(SUB84((dVar3 - (double)local_e8._0_8_) * (double)local_f8._0_8_ +
                                   (double)local_e8._0_8_,0));
                uVar22 = uVar22 + 1;
              } while (uVar17 != uVar22);
            }
          }
          else if ((int)uVar17 < (int)(uVar1 - 2)) {
            lVar21 = (int64_t)(int)(uVar1 - 2);
            do {
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar9 = _pthread_getspecific(SUB84(param_1,0));
              if (pvVar9 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar3 = (double)FUN_013faf20();
              FUN_013faee0(SUB84((dVar3 - (double)local_e8._0_8_) * (double)local_f8._0_8_ +
                                 (double)local_e8._0_8_,0));
              lVar21 = lVar21 + -1;
            } while ((int64_t)(int64_t)(int)uVar17 < lVar21);
          }
        }
      }
LAB_01b4901b:
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_013faed0();
      FUN_013fae90(SUB84(dVar3 + (double)(float)local_48._0_4_,0));
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar3 = (double)FUN_013faf20();
      in_XMM1._0_8_ = (double)local_198._0_4_;
      in_XMM1._8_8_ = uStack_190;
      FUN_013faee0(SUB84(dVar3 + in_XMM1._0_8_,0));
      local_160 = 0;
      lVar21 = this_ptr[0x28];
      if (lVar21 != 0) {
        FUN_00d50b00();
      }
      local_160 = '\x01';
      local_168 = lVar21;
      FUN_01778a40();
      puVar14 = (uint *)this_ptr[0x29];
      if (puVar14 != local_70) {
        param_1 = (uint8_t  [8])puVar14;
        if ((char)local_68 == '\0') {
          if (local_70 == (uint *)0x0) {
            puVar14 = (uint *)0x0;
          }
          else {
            FUN_00d50b00();
            puVar14 = local_70;
            param_1 = (uint8_t  [8])this_ptr[0x29];
          }
        }
        else {
          local_68 = local_68 & 0xffffff00;
          puVar14 = local_70;
        }
        this_ptr[0x29] = (int64_t)puVar14;
        if (param_1 != (uint8_t  [8])0x0) {
          FUN_00d50b20();
          puVar14 = local_70;
        }
      }
      if (((char)local_68 != '\0') && (puVar14 != (uint *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != 0)) {
        FUN_00d50b20();
      }
      local_150 = 0;
      lVar21 = this_ptr[0x29];
      if (lVar21 != 0) {
        FUN_00d50b00();
      }
      local_150 = '\x01';
      local_158 = lVar21;
      FUN_01778fe0();
      puVar14 = local_70;
      if ((char)local_68 == '\0') {
        if (local_70 != (uint *)0x0) {
          FUN_00d50b00();
          if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_68 = local_68 & 0xffffff00;
      }
      if ((local_150 != '\0') && (local_158 != 0)) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      puVar11 = puVar14;
      if ((pvVar9 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
        puVar11 = *(uint **)(puVar14 + ((uint64_t)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 2);
      }
      cVar6 = (**(code **)(*(int64_t *)puVar11 + 0x370))();
      param_1 = (uint8_t  [8])CONCAT71((int7)((uint64_t)param_1 >> 8),(int)uVar1 < 1);
      if (cVar6 == '\0' && (int)uVar1 >= 1) {
        uVar22 = 0;
        do {
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013fae90(SUB84((double)*(float *)(*(int64_t *)(local_118._0_8_ + 0x10) + uVar22 * 8),
                             0));
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faee0(SUB84((double)*(float *)(*(int64_t *)(local_118._0_8_ + 0x10) + 4 +
                                               uVar22 * 8),0));
          uVar22 = uVar22 + 1;
        } while (uVar1 != uVar22);
      }
      if (this_ptr[0x2c] != 0) {
        this_ptr[0x2c] = 0;
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x620))();
      if (puVar14 != (uint *)0x0) {
        FUN_00d50b20();
      }
      if (local_118._0_8_ != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01b47f90;
    }
    puVar23 = (uint *)0x0;
LAB_01b493fb:
    *(void*)((int64_t)this_ptr + 0x16c) = 0xffffffff;
    (**(code **)(*this_ptr + 0x620))();
    if (puVar18 == (uint *)0x0) goto LAB_01b494c7;
  }
  FUN_00d50b20();
LAB_01b494c7:
  if (((char)local_50 != '\0') && (puVar23 != (uint *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b44f00
// ============================================================
// Function: FUN_01b44f00
// Address: 01b44f00
// Size: 2010 bytes
// Class: MUScaleStretchTuningCtrl
// String references:
//   "%I"
//   "+%@"

void FUN_01b44f00(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  uint8_t auVar2 [16];
  void*puVar3;
  int iVar4;
  int iVar5;
  void*puVar6;
  int iVar7;
  void*arg1;
  int64_t *this_ptr;
  int iVar8;
  float fVar9;
  float extraout_XMM0_Db;
  uint32_t extraout_XMM0_Dd;
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint64_t uVar10;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint64_t uVar16;
  uint64_t in_XMM1_Qb;
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  float fVar20;
  float fVar21;
  uint8_t auVar22 [16];
  float fStack_154;
  uint32_t uStack_150;
  uint uStack_14c;
  int64_t *local_130;
  char local_128;
  float local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_a4;
  uint32_t uStack_9c;
  uint64_t local_78;
  void*local_68;
  uint local_60;
  void*local_58;
  char local_50;
  void*local_48;
  uint local_40;
  int local_3c;
  int local_38;
  float local_34;
  
  uVar16 = param_2;
  uVar10 = in_XMM1_Qb;
  FUN_01e3f820();
  fStack_154 = (float)((uint64_t)uVar16 >> 0x20);
  uStack_150 = (uint32_t)uVar10;
  uStack_14c = (uint)((uint64_t)uVar10 >> 0x20);
  local_34 = *(float *)(this_ptr + 0x2a);
  FUN_01d48370();
  fStack_a4 = (float)((uint64_t)param_2 >> 0x20);
  uStack_9c = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  FUN_01d48b40();
  FUN_01cfc3c0();
  puVar3 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  FUN_01d488d0();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_130 + 0x370))();
  FUN_01d44d80();
  puVar3 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48a10();
  fVar20 = fStack_154 / (local_34 + local_34);
  local_34 = 1.4013e-44;
  local_38 = 10;
  if (g_023908ec * fVar20 <= g_023908d8) {
    fStack_a4 = 0.0;
    uStack_9c = 0;
    local_38 = 0x32;
    if (g_02394240 * fVar20 <= g_023908d8) {
      fStack_a4 = 0.0;
      uStack_9c = 0;
      local_38 = 100;
      if (g_023908e0 * fVar20 <= g_023908d8) {
        fStack_a4 = 0.0;
        uStack_9c = 0;
        local_38 = 200;
        if (g_02390d38 * fVar20 <= g_023908d8) {
          fStack_a4 = 0.0;
          uStack_9c = 0;
          local_38 = 400;
          if (g_02411264 * fVar20 <= g_023908d8) {
            fStack_a4 = 0.0;
            uStack_9c = 0;
            local_38 = 800;
            if (g_0241b65c * fVar20 <= g_023908d8) {
              local_38 = 0x640;
            }
          }
        }
      }
    }
  }
  if (((((g_023908ec * fVar20 <= g_023942a8) &&
        (local_34 = 7.00649e-44, g_02394240 * fVar20 <= g_023942a8)) &&
       (local_34 = 1.4013e-43, g_023908e0 * fVar20 <= g_023942a8)) &&
      ((local_34 = 2.8026e-43, g_02390d38 * fVar20 <= g_023942a8 &&
       (local_34 = 5.60519e-43, g_02411264 * fVar20 <= g_023942a8)))) &&
     (local_34 = 1.12104e-42, g_0241b65c * fVar20 <= g_023942a8)) {
    local_34 = 2.24208e-42;
  }
  FUN_01e3f820();
  auVar19._4_4_ = extraout_XMM0_Db;
  auVar19._0_4_ = extraout_XMM0_Db;
  auVar19._8_4_ = extraout_XMM0_Dd;
  auVar19._12_4_ = extraout_XMM0_Dd;
  auVar11._4_12_ = auVar19._4_12_;
  auVar11._0_4_ = extraout_XMM0_Db / fVar20;
  iVar4 = FUN_00e7d780(auVar11._0_8_);
  auVar12._4_4_ = fStack_a4;
  auVar12._0_4_ = fStack_a4;
  auVar12._8_4_ = uStack_9c;
  auVar12._12_4_ = uStack_9c;
  auVar13._4_12_ = auVar12._4_12_;
  auVar13._0_4_ = fStack_a4 / fVar20 + extraout_XMM0_Db;
  iVar5 = FUN_00e7d780(auVar13._0_8_);
  if (iVar4 <= iVar5) {
    iVar8 = -iVar4;
    do {
      iVar7 = iVar4 % (int)local_34;
      if (0 < iVar4) {
        fVar1 = *(float *)(&g_0241d558 + (uint64_t)(iVar7 == 0) * 4);
        fVar9 = fVar20 * (float)iVar4;
        auVar17._0_4_ = (uint)fVar9 & g_023945e0;
        auVar17._4_4_ = (uint)fStack_154 & _UNK_023945e4;
        auVar17._8_4_ = uStack_14c & _UNK_023945e8;
        auVar17._12_4_ = uStack_14c & _UNK_023945ec;
        auVar18._4_12_ = SUB1612(auVar17 | g_023945f0,4);
        auVar18._0_4_ = SUB164(auVar17 | g_023945f0,0) + fVar9;
        auVar19 = roundss(auVar18,auVar18,0xb);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        auVar2._8_4_ = uStack_150;
        auVar2._0_8_ = uVar16;
        auVar2._12_4_ = uStack_14c;
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
        if ((iVar7 == 0) && (fVar9 = *(float *)(this_ptr + 0x2a), (float)iVar4 < fVar9 + fVar9)) {
          iVar7 = (int)fVar9 + iVar8;
          local_40 = 1;
          local_48 = &g_024cc6f0;
          local_3c = iVar7;
          uVar10 = FUN_00d8cb40();
          puVar6 = local_68;
          if (((char)local_60 == '\0') && (local_68 != (void*)0x0)) {
            uVar10 = FUN_00d50b00();
            if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          if (0 < iVar7) {
            local_60 = 1;
            local_68 = &g_024c5048;
            local_50 = 0;
            if (puVar6 != (void*)0x0) {
              uVar10 = FUN_00d50b00();
            }
            local_58 = puVar6;
            local_50 = '\x01';
            FUN_00d8cb40(uVar10,&local_68);
            local_78 = local_48;
            if (puVar6 == local_48) {
              local_78 = puVar6;
LAB_01b454c1:
              if (((char)local_40 != '\0') && (local_48 != (void*)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((char)local_40 == '\0') {
                if (local_48 != (void*)0x0) {
                  FUN_00d50b00();
                }
                if (puVar6 != (void*)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_01b454c1;
              }
              if (puVar6 != (void*)0x0) {
                FUN_00d50b20();
              }
              local_40 = local_40 & 0xffffff00;
            }
            local_68 = &g_024c5048;
            puVar6 = local_78;
            if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar10 = FUN_01d43d10();
          fVar21 = fVar1 + g_02390d34;
          local_78._0_4_ = (float)uVar10;
          local_78._4_4_ = (float)((uint64_t)uVar10 >> 0x20);
          local_78._4_4_ = local_78._4_4_ * g_02390118;
          if ((int)fVar9 == iVar4) {
            (**(code **)(*(int64_t *)*arg1 + 0x3e0))(fVar21 + (float)local_78 + g_02390d34);
          }
          local_d8 = auVar19._0_4_;
          uStack_d4 = auVar19._4_4_;
          uStack_d0 = auVar19._8_4_;
          uStack_cc = auVar19._12_4_;
          local_d8 = local_d8 + local_78._4_4_;
          auVar14._0_4_ = (uint)local_d8 & g_023945e0;
          auVar14._4_4_ = uStack_d4 & _UNK_023945e4;
          auVar14._8_4_ = uStack_d0 & _UNK_023945e8;
          auVar14._12_4_ = uStack_cc & _UNK_023945ec;
          auVar15._4_12_ = SUB1612(auVar14 | g_023945f0,4);
          auVar15._0_4_ = SUB164(auVar14 | g_023945f0,0) + local_d8;
          auVar19 = roundss(auVar15,auVar15,0xb);
          auVar19 = insertps(ZEXT416((uint)fVar21),auVar19,0x10);
          (**(code **)(*(int64_t *)*arg1 + 0x3f8))();
          auVar22._0_4_ = (((float)uVar16 - fVar1) - (float)local_78) + g_023b1608;
          auVar22._4_12_ = auVar2._4_12_;
          auVar19 = blendps(auVar19,auVar22,1);
          (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar19._0_8_,2);
          if (puVar6 != (void*)0x0) {
            FUN_00d50b20();
          }
        }
      }
      iVar4 = iVar4 + local_38;
      iVar8 = iVar8 - local_38;
    } while (iVar4 <= iVar5);
  }
  FUN_01d48390();
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b43fc0
// ============================================================
// Function: FUN_01b43fc0
// Address: 01b43fc0
// Size: 2580 bytes
// Class: MUScaleStretchTuningCtrl

void FUN_01b43fc0(uint64_t param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int64_t **pplVar3;
  uint8_t auVar4 [16];
  int64_t ***ppplVar5;
  void*puVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t ****pppplVar10;
  void*arg1;
  int64_t this_ptr;
  int64_t ****pppplVar11;
  uint64_t uVar12;
  float fVar13;
  uint64_t uVar14;
  uint64_t in_XMM0_Qb;
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  double dVar15;
  uint8_t auVar19 [16];
  float fVar20;
  uint32_t uVar21;
  uint32_t uVar22;
  float fVar23;
  float fVar24;
  uint8_t auVar25 [16];
  int64_t ***local_c0;
  int64_t ***local_b8;
  int64_t ***local_b0;
  uint8_t local_a8 [8];
  uint32_t uStack_a0;
  uint32_t uStack_9c;
  int64_t local_98;
  char local_90;
  int64_t ***local_88;
  int64_t ***local_80;
  uint8_t local_78 [16];
  int64_t ***local_68;
  void*local_60;
  int64_t ***local_48;
  char local_40;
  
  if (*(int64_t *)(this_ptr + 0x140) != 0) {
    local_78._8_8_ = in_XMM0_Qb;
    local_78._0_8_ = param_1;
    FUN_01d48370();
    (**(code **)(*(int64_t *)*arg1 + 0x390))();
    FUN_01cfbee0();
    if ((local_40 == '\0') && ((int64_t ****)local_48 != (int64_t ****)0x0)) {
      FUN_00d50b00();
    }
    local_88 = local_48;
    FUN_01cfbee0();
    if ((local_40 == '\0') && ((int64_t ****)local_48 != (int64_t ****)0x0)) {
      FUN_00d50b00();
    }
    local_b0 = local_48;
    FUN_01cfbee0();
    local_b8 = local_48;
    if (local_40 == '\0') {
      if ((int64_t ****)local_48 == (int64_t ****)0x0) {
        local_b8 = (int64_t ***)(int64_t ****)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    FUN_01cfbee0();
    local_80 = local_48;
    if (local_40 == '\0') {
      if ((int64_t ****)local_48 == (int64_t ****)0x0) {
        local_80 = (int64_t ***)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    else {
    }
    local_c0 = local_80;
    FUN_01cfbee0();
    local_68 = local_48;
    if ((local_40 == '\0') && ((int64_t ****)local_48 != (int64_t ****)0x0)) {
      FUN_00d50b00();
    }
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    pppplVar10 = (int64_t ****)&g_02680400;
    *puVar6 = &g_02680400;
    *(void*)((int64_t)puVar6 + 0xc) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(void*)((int64_t)puVar6 + 0x39) = 0;
    *(void*)((int64_t)puVar6 + 0x41) = 0;
    (*g_02680418)();
    local_90 = 0;
    local_98 = *(int64_t *)(this_ptr + 0x140);
    local_60 = puVar6;
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_01778a40();
    if (local_40 == '\0') {
      if ((int64_t ****)local_48 != (int64_t ****)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    auVar25 = local_78;
    fVar23 = g_023b1608 + local_78._0_4_;
    fVar13 = param_2 + local_78._0_4_ + g_02390d00 + g_02390d34;
    local_78._0_4_ = fVar23;
    while (fVar23 < fVar13) {
      FUN_01e3f820();
      auVar25._0_4_ = auVar25._0_4_ / g_0241d550;
      local_a8._0_4_ = (float)local_78._0_4_ / auVar25._0_4_ + g_0239394c;
      pvVar7 = _pthread_getspecific((void*)pppplVar10);
      pppplVar11 = (int64_t ****)local_48;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pppplVar10 = (int64_t ****)local_48;
        pppplVar11 = (int64_t ****)local_48[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      uVar14 = (*(*pppplVar11)[0x70])((double)(float)local_a8._0_4_);
      local_a8 = (uint8_t  [8])uVar14;
      FUN_01e3f820();
      uVar1 = *(uint *)(this_ptr + 0x150);
      auVar18 = auVar25;
      FUN_01e3f820();
      auVar16 = insertps(ZEXT416(*(uint *)(this_ptr + 0x150)),ZEXT416(uVar1),0x10);
      auVar17._0_4_ = auVar16._0_4_ + auVar16._0_4_;
      auVar17._4_4_ = auVar16._4_4_ + auVar16._4_4_;
      auVar17._8_4_ = auVar16._8_4_ + auVar16._8_4_;
      auVar17._12_4_ = auVar16._12_4_ + auVar16._12_4_;
      auVar25 = insertps(auVar25,auVar18,0x4c);
      auVar16 = divps(auVar25,auVar17);
      auVar25 = insertps(ZEXT416(uVar1),ZEXT416((uint)(float)(double)local_a8),0x10);
      fVar24 = auVar25._4_4_ * auVar16._4_4_;
      fVar23 = auVar25._0_4_ * auVar16._0_4_ - fVar24;
      auVar18._0_4_ = (uint)fVar23 & g_023945e0;
      auVar18._4_4_ = (uint)fVar24 & _UNK_023945e4;
      auVar18._8_4_ = (uint)(auVar25._8_4_ * auVar16._8_4_) & _UNK_023945e8;
      auVar18._12_4_ = (uint)(auVar25._12_4_ * auVar16._12_4_) & _UNK_023945ec;
      auVar16._4_12_ = SUB1612(auVar18 | g_023945f0,4);
      auVar16._0_4_ = SUB164(auVar18 | g_023945f0,0) + fVar23;
      roundss(auVar16,auVar16,0xb);
      _local_a8 = ZEXT416((uint)(float)(double)local_a8);
      FUN_01d38ba0();
      fVar23 = (float)local_78._0_4_ + g_02390124;
      auVar25 = ZEXT416((uint)fVar23);
      local_78._0_4_ = fVar23;
    }
    FUN_01d488d0();
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    FUN_01d488d0();
    fVar13 = 0.0;
    uVar21 = 0;
    uVar22 = 0;
    fVar23 = g_02390124;
    (**(code **)(*(int64_t *)*arg1 + 0x370))();
    (**(code **)(*(int64_t *)*arg1 + 0x3a8))();
    pvVar7 = _pthread_getspecific((void*)pppplVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if ((local_40 == '\0') && ((int64_t ****)local_48 != (int64_t ****)0x0)) {
      FUN_00d50b00();
    }
    if (0 < *(int *)((int64_t)local_48 + 0xc)) {
      uVar12 = 0;
      do {
        pVar9 = (void*)pppplVar10;
        uVar1 = *(uint *)(this_ptr + 0x16c);
        pplVar3 = (int64_t **)local_48[2][uVar12];
        if (pplVar3 != (int64_t **)0x0) {
          FUN_00d50b00();
        }
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar14 = FUN_013faed0();
        local_78._0_8_ = uVar14;
        FUN_01e3f820();
        fVar24 = fVar23;
        FUN_01e3f820();
        local_a8._4_4_ = fVar13;
        local_a8._0_4_ = (fVar24 / g_0241d550) * g_02394218;
        uStack_a0 = uVar21;
        uStack_9c = uVar22;
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_013faf20();
        FUN_01e3f820();
        fVar24 = *(float *)(this_ptr + 0x150);
        fVar20 = fVar13;
        FUN_01e3f820();
        fVar2 = *(float *)(this_ptr + 0x150);
        pppplVar10 = &local_c0;
        FUN_01d488d0();
        auVar19._0_4_ =
             (float)(double)local_78._0_8_ * (fVar23 / g_0241d550) + (float)local_a8._0_4_;
        auVar19._4_4_ = local_78._4_4_;
        auVar19._8_8_ = 0;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = (fVar20 / (fVar2 + fVar2)) * fVar24 -
                       (fVar13 / (fVar24 + fVar24)) * (float)dVar15;
        auVar4._8_4_ = uVar22;
        auVar4._12_4_ = uVar22;
        local_78 = insertps(auVar19,auVar4,0x10);
        (**(code **)(*(int64_t *)*arg1 + 0x3c0))();
        if (uVar12 == uVar1) {
          FUN_01d48b40();
        }
        FUN_01d488d0();
        fVar13 = 0.0;
        uVar21 = 0;
        uVar22 = 0;
        fVar23 = g_02390d2c;
        (**(code **)(*(int64_t *)*arg1 + 0x3c8))();
        if (uVar12 == uVar1) {
          FUN_01d48b40();
        }
        if (pplVar3 != (int64_t **)0x0) {
          FUN_00d50b20();
        }
        uVar12 = uVar12 + 1;
      } while ((int64_t)uVar12 < (int64_t)*(int *)((int64_t)local_48 + 0xc));
    }
    FUN_01d48390();
    FUN_00d50b20();
    puVar6 = local_60;
    ppplVar5 = local_80;
    if ((int64_t ****)local_48 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if (puVar6 != (void*)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)local_68 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)ppplVar5 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)local_b8 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)local_b0 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
    if ((int64_t ****)local_88 != (int64_t ****)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01b42750
// ============================================================
// Function: FUN_01b42750
// Address: 01b42750
// Size: 1668 bytes
// Class: MUScaleStretchTuningCtrl

void FUN_01b42750(void*param_1)

{
  int iVar1;
  void *pvVar2;
  int64_t *plVar3;
  int iVar4;
  double dVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  float fVar9;
  uint32_t uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int64_t local_b0;
  char local_a8;
  double local_a0;
  char local_98;
  double local_90;
  char local_88;
  double local_80;
  char local_78;
  double local_70;
  uint64_t local_68;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  char local_38;
  
  FUN_01ab3520();
  FUN_01ad3cb0();
  dVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 == 0.0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != 0.0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == 0.0) {
    return;
  }
  local_70 = dVar5;
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01770670();
  dVar5 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0.0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0.0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (dVar5 == 0.0) {
    FUN_01777f70();
    if (((local_40 != 0.0) && (dVar5 = local_40, local_38 == '\0')) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0.0)))) {
      FUN_00d50b20();
    }
  }
  else {
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    param_1 = &g_0258cea8;
    *plVar3 = (int64_t)&g_0258cea8;
    *(void*)(plVar3 + 5) = 0;
    *(void*)((int64_t)plVar3 + 0x2c) = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[8] = 0;
    plVar3[9] = 0;
    plVar3[10] = 0;
    plVar3[0xb] = 0;
    plVar3[0xc] = 0;
    plVar3[0xd] = 0;
    plVar3[0xe] = 0;
    plVar3[0xf] = 0;
    plVar3[0x10] = 0;
    plVar3[0x11] = 0;
    plVar3[0x12] = 0;
    plVar3[0x13] = 0;
    plVar3[0x14] = 0;
    plVar3[0x15] = 0;
    plVar3[0x16] = 0;
    plVar3[0x17] = 0;
    plVar3[0x18] = 0;
    plVar3[0x19] = 0;
    plVar3[0x1a] = 0;
    uVar8 = (*g_0258cec0)();
    local_a0 = dVar5;
    local_98 = '\0';
    (**(code **)(*plVar3 + 0x5f0))(uVar8,&local_a0);
    local_50 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0.0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0.0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    plVar3 = (int64_t *)FUN_00e8fc40();
    FUN_0002cb50();
    uVar8 = (**(code **)(*plVar3 + 0x18))();
    local_90 = local_50;
    local_88 = '\0';
    FUN_00e549d0(uVar8,&local_90);
    dVar11 = local_40;
    if (dVar5 == local_40) {
      local_48 = dVar5;
LAB_01b42aa2:
      dVar11 = local_48;
      if ((local_38 != '\0') && (local_40 != 0.0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (local_38 == '\0') {
        if (local_40 != 0.0) {
          local_48 = dVar5;
          FUN_00d50b00();
        }
        local_48 = dVar11;
        FUN_00d50b20();
        goto LAB_01b42aa2;
      }
      local_48 = local_40;
      FUN_00d50b20();
      local_38 = '\0';
    }
    if ((local_88 != '\0') && (local_90 != 0.0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    dVar5 = dVar11;
    if (local_50 != 0.0) {
      FUN_00d50b20();
    }
  }
  local_78 = '\0';
  local_80 = dVar5;
  local_48 = dVar5;
  FUN_01b43dc0();
  if ((local_78 != '\0') && (local_80 != 0.0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  dVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0.0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0.0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)dVar5 + 0xc) < 1) {
    uVar8 = 0;
    uVar10 = 0;
    dVar11 = 0.0;
  }
  else {
    local_68 = 0.0;
    lVar6 = 0;
    local_58 = 0.0;
    do {
      lVar7 = *(int64_t *)(*(int64_t *)((int64_t)dVar5 + 0x10) + lVar6 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific((void*)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (double)FUN_013faf20();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      uVar8 = SUB84(local_50,0);
      uVar10 = (uint32_t)((uint64_t)local_50 >> 0x20);
      dVar11 = local_50;
      if (local_68 <= local_50) {
        dVar11 = local_68;
      }
      if (local_50 <= local_58) {
        uVar8 = SUB84(local_58,0);
        uVar10 = (uint32_t)((uint64_t)local_58 >> 0x20);
      }
      lVar6 = lVar6 + 1;
      local_58 = (double)CONCAT44(uVar10,uVar8);
      local_68 = dVar11;
    } while (lVar6 < *(int *)((int64_t)dVar5 + 0xc));
  }
  local_50 = (double)CONCAT44(uVar10,uVar8);
  dVar12 = dVar11;
  local_68 = (double)FUN_01e3f820();
  fVar9 = (float)((uint64_t)dVar12 >> 0x20) + (float)((uint64_t)local_68 >> 0x20) + g_02390d00;
  uVar10 = FUN_01b43f70();
  uVar8 = local_68._4_4_;
  local_58 = (double)CONCAT44(local_58._4_4_,uVar10);
  uVar10 = FUN_01b43f70();
  local_68 = (double)CONCAT44(local_68._4_4_,uVar10);
  (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x918))();
  lVar6 = *(int64_t *)(this_ptr + 0xb0);
  if (3 < *(int *)(lVar6 + 0x18)) {
    dVar12 = (double)local_58._0_4_;
    dVar13 = (double)(float)local_68;
    lVar7 = 0;
    do {
      if ((dVar11 < dVar12) || (dVar13 < local_50)) {
        FUN_01b43f40(*(void*)(*(int64_t *)(lVar6 + 0x10) + lVar7 * 4));
        uVar10 = FUN_01b43f70(fVar9);
        local_68 = (double)CONCAT44(local_68._4_4_,uVar10);
        uVar10 = FUN_01b43f70(uVar8);
        local_58 = (double)CONCAT44(local_58._4_4_,uVar10);
        (**(code **)(**(int64_t **)(this_ptr + 0xa8) + 0x918))();
        dVar13 = (double)local_58._0_4_;
        dVar12 = (double)(float)local_68;
        lVar6 = *(int64_t *)(this_ptr + 0xb0);
      }
      lVar7 = lVar7 + 1;
      iVar1 = *(int *)(lVar6 + 0x18);
      iVar4 = iVar1 + 3;
      if (-1 < iVar1) {
        iVar4 = iVar1;
      }
    } while (lVar7 < iVar4 >> 2);
    if (dVar5 == 0.0) goto LAB_01b42dbc;
  }
  FUN_00d50b20();
LAB_01b42dbc:
  if (local_48 != 0.0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}



// ============================================================
// 01b459e0
// ============================================================
// Function: FUN_01b459e0
// Address: 01b459e0
// Size: 1164 bytes
// Class: MUScaleStretchTuningCtrl
// String references:
//   "C%I"

void FUN_01b459e0(uint64_t param_1,uint64_t param_2)

{
  uint8_t auVar1 [16];
  int iVar2;
  int64_t lVar3;
  uint uVar4;
  int iVar5;
  uint64_t uVar6;
  void*arg1;
  int64_t *this_ptr;
  uint uVar7;
  uint64_t uVar8;
  uint64_t in_XMM0_Qb;
  uint8_t auVar9 [16];
  uint64_t extraout_XMM0_Qb;
  float fVar10;
  uint64_t uVar11;
  uint64_t in_XMM1_Qb;
  uint32_t uVar15;
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  float local_f8;
  float fStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fStack_e4;
  int64_t *local_c8;
  char local_c0;
  float local_b8;
  uint64_t local_78;
  uint64_t uStack_70;
  void*local_68;
  uint32_t local_60;
  uint local_5c;
  int64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  uVar15 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
  uStack_70 = in_XMM0_Qb;
  local_78 = param_1;
  uVar8 = param_2;
  FUN_01e3f820();
  uVar11 = uVar8;
  FUN_01e3f820();
  FUN_01d48370();
  (**(code **)(*(int64_t *)*arg1 + 0x390))();
  FUN_01d48b40();
  FUN_01cfc3c0();
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
  FUN_01d488d0();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x640))();
  (**(code **)(*local_c8 + 0x370))();
  FUN_01d44d80();
  lVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (((char)local_60 != '\0') && (local_68 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = lVar3;
  FUN_01d48a10();
  fVar10 = (float)uVar11 / g_0241d550;
  auVar12._4_12_ = local_78._4_12_;
  auVar12._0_4_ = (float)param_1 / fVar10;
  uVar4 = FUN_00e7d780(auVar12._0_8_);
  local_b8 = (float)param_2;
  auVar18._0_4_ = ((float)param_1 + local_b8) / fVar10;
  auVar18._4_12_ = auVar12._4_12_;
  iVar5 = FUN_00e7d780(auVar18._0_8_);
  do {
    uVar7 = uVar4;
    uVar4 = uVar7 - 1;
  } while (0x28f5c28 < (uVar7 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar7 * 0x40000000));
  do {
    iVar2 = iVar5;
    iVar5 = iVar2 + 1;
  } while (0x28f5c28 < (iVar2 * -0x3d70a3d7 + 0x51eb850U >> 2 | iVar2 * 0x40000000));
  if ((int)uVar7 <= iVar2) {
    fStack_e4 = (float)((uint64_t)uVar8 >> 0x20);
    auVar9._4_4_ = fStack_e4;
    auVar9._0_4_ = fStack_e4;
    auVar9._8_4_ = uVar15;
    auVar9._12_4_ = uVar15;
    do {
      if (0 < (int)uVar7) {
        auVar12 = ZEXT416((uint)((float)(int)uVar7 * fVar10) & g_023945e0) | g_023945f0;
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = auVar12._0_4_ + (float)(int)uVar7 * fVar10;
        auVar12 = roundss(ZEXT816(0),auVar13,0xb);
        uVar6 = (uint64_t)((int)uVar7 % 0x4b0 == 0);
        auVar14._4_12_ = auVar9._4_12_;
        auVar14._0_4_ = fStack_e4 - *(float *)(&g_0241d558 + uVar6 * 4);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))(uVar6,auVar14._0_8_,auVar12._0_4_);
        if ((uVar7 - 1 < 0x257f) && ((int)uVar7 % 0x4b0 == 0)) {
          local_5c = (uVar7 & 0xffff) / 0x4b0;
          local_60 = 1;
          local_68 = &g_024cc6f0;
          FUN_00d8cb40(&g_024cc6f0,&local_68);
          lVar3 = local_40;
          if ((local_38 == '\0') &&
             (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
            FUN_00d50b20();
          }
          uVar8 = FUN_01d43d10();
          local_f8 = (float)uVar8;
          fStack_f4 = (float)((uint64_t)uVar8 >> 0x20);
          uStack_f0 = (uint)extraout_XMM0_Qb;
          uStack_ec = (uint)((uint64_t)extraout_XMM0_Qb >> 0x20);
          auVar16._0_4_ = (uint)(local_f8 * g_0239011c) & g_023945e0;
          auVar16._4_4_ = (uint)fStack_f4 & _UNK_023945e4;
          auVar16._8_4_ = uStack_f0 & _UNK_023945e8;
          auVar16._12_4_ = uStack_ec & _UNK_023945ec;
          auVar17._4_12_ = SUB1612(auVar16 | g_023945f0,4);
          auVar17._0_4_ = SUB164(auVar16 | g_023945f0,0) + local_f8 * g_0239011c;
          auVar18 = roundss(auVar17,auVar17,0xb);
          auVar1._4_4_ = fStack_e4;
          auVar1._0_4_ = auVar14._0_4_ - fStack_f4;
          auVar1._8_4_ = uVar15;
          auVar1._12_4_ = uVar15;
          auVar12 = insertps(ZEXT416((uint)(auVar12._0_4_ - auVar18._0_4_)),auVar1,0x10);
          (**(code **)(*(int64_t *)*arg1 + 0x3f8))(auVar12._0_8_,2);
          (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
        }
      }
      uVar7 = uVar7 + 100;
    } while ((int)uVar7 <= iVar2);
  }
  FUN_01d48390();
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01b468c0
// ============================================================
// Function: FUN_01b468c0
// Address: 01b468c0
// Size: 1465 bytes
// Class: MUScaleStretchTuningCtrl

void* FUN_01b468c0(float param_1,float param_2,float param_3)

{
  int64_t lVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  int64_t lVar9;
  int64_t lVar10;
  void*puVar11;
  void* in_ECX;
  void*this_ptr;
  int64_t *plVar12;
  int64_t *local_48;
  char local_40;
  
  pvVar8 = _pthread_getspecific(in_ECX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)param_1;
  iVar7 = FUN_013f3690();
  lVar9 = local_48[2];
  lVar1 = *(int64_t *)(lVar9 + (int64_t)iVar7 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    lVar9 = local_48[2];
  }
  lVar9 = *(int64_t *)(lVar9 + 8 + (int64_t)iVar7 * 8);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_ECX = (void*)lVar1;
  }
  dVar2 = (double)FUN_013faed0();
  bVar4 = true;
  if ((double)param_3 < dVar3 - dVar2) {
    pvVar8 = _pthread_getspecific(in_ECX);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      in_ECX = (void*)lVar9;
    }
    dVar2 = (double)FUN_013faed0();
    if ((double)param_3 < dVar2 - dVar3) {
      puVar11 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      in_ECX = 0x25ddb28;
      *puVar11 = &g_025ddb28;
      puVar11[0xb] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      *(void*)((int64_t)puVar11 + 0x43) = 0;
      *(void*)((int64_t)puVar11 + 0x4b) = 0;
      (*g_025ddb40)();
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013fae90(SUB84(dVar3,0));
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faee0(SUB84((double)param_2,0));
      pvVar8 = _pthread_getspecific(in_ECX);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2cf0();
      bVar4 = false;
      bVar5 = true;
      goto LAB_01b46b7d;
    }
  }
  bVar5 = false;
  puVar11 = (void*)0x0;
LAB_01b46b7d:
  FUN_01778a40();
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01778fe0();
  if ((local_40 == '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  plVar12 = local_48;
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar12 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  cVar6 = (**(code **)(*plVar12 + 0x370))();
  if (cVar6 == '\0') {
    pvVar8 = _pthread_getspecific(in_ECX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f3080();
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    *(void*)(this_ptr + 1) = 0;
    if ((bVar4) && (puVar11 != (void*)0x0)) {
      FUN_00d50b00();
    }
    *this_ptr = puVar11;
    *(void*)(this_ptr + 1) = 1;
    bVar5 = false;
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((bVar5) && (puVar11 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01b430f0
// ============================================================
// Function: FUN_01b430f0
// Address: 01b430f0
// Size: 965 bytes
// Class: MUScaleStretchTuningCtrl

uint32_t FUN_01b430f0(uint64_t param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  uint32_t uVar3;
  void *pvVar4;
  int64_t lVar5;
  void* in_ECX;
  int64_t lVar6;
  int64_t lVar7;
  double dVar8;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar7 = local_60;
  if (param_2 == 0) goto LAB_01b43469;
  param_1 = FUN_01ad3cb0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_01b43469;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_01b43469;
  FUN_01b43d80();
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_01b432e7;
    FUN_00d50b00();
LAB_01b43222:
    local_58 = '\0';
    local_60 = 0;
    local_48 = -1;
    do {
      lVar5 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_48) {
        lVar5 = lVar7;
        FUN_01a81420();
        in_ECX = (void*)lVar5;
        bVar1 = false;
        goto joined_r0x01b43327;
      }
      lVar6 = *(int64_t *)(lVar7 + 0x10);
      local_60 = *(int64_t *)(lVar6 + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar6);
      in_ECX = (void*)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_013faf20();
    } while ((dVar8 == g_02390448) && (!NAN(dVar8) && !NAN(g_02390448)));
    FUN_01a81420();
    bVar1 = false;
LAB_01b43359:
    bVar2 = false;
  }
  else {
    if (local_60 != 0) goto LAB_01b43222;
LAB_01b432e7:
    bVar1 = true;
joined_r0x01b43327:
    if (lVar7 == 0) goto LAB_01b43359;
    lVar7 = 0;
    FUN_00d50b20();
    bVar2 = true;
  }
  FUN_01af1380();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_017703a0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  FUN_01b07460();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2 && lVar7 != 0) {
    FUN_00d50b20();
  }
  param_1 = FUN_00d50b20();
LAB_01b43469:
  uVar3 = FUN_01ad0160(param_1,param_2 & 0xff);
  return uVar3;
}



// ============================================================
// 01b46340
// ============================================================
// Function: FUN_01b46340
// Address: 01b46340
// Size: 525 bytes
// Class: MUScaleStretchTuningCtrl

void FUN_01b46340(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  void*arg1;
  int64_t this_ptr;
  uint32_t uVar3;
  int64_t local_38;
  char local_30;
  
  if ((*(int64_t *)(this_ptr + 0x160) != 0) && (0.0 < *(float *)(this_ptr + 0x168))) {
    FUN_01b460b0();
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_01d48a10();
    if (local_38 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (g_0239011c <= *(float *)(this_ptr + 0x168)) {
      FUN_01cfc9f0(g_0239011c,g_02390124);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d488d0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01cfc9f0(g_0239011c);
      if (local_30 == '\0') {
        if (local_38 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_30 = '\0';
      }
      FUN_01d488d0();
      if (local_38 != 0) {
        FUN_00d50b20();
      }
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar1 = (int64_t *)*arg1;
    lVar2 = *(int64_t *)(this_ptr + 0x160);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    uVar3 = FUN_01b46180();
    (**(code **)(*plVar1 + 0x3f8))(uVar3,2);
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 008139b0
// ============================================================
// Function: FUN_008139b0
// Address: 008139b0
// Size: 533 bytes
// Class: MUScaleStretchTuningCtrl
// String references:
//   "MUScaleStretchTuningCtrl"

void FUN_008139b0(void)

{
  int iVar1;
  uint32_t uVar2;
  int64_t local_f0;
  int64_t local_e8;
  int64_t local_e0;
  
  if ((g_0273bff8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    g_0273bf48 = FUN_00842350();
    g_0273bf30 = "MUScaleStretchTuningCtrl";
    g_0273bf38 = 0xb8;
    g_0273bf40 = FUN_00858370;
    g_0273bf50 = 0;
    ram_000000000273bf58 = 0;
    g_0273bf60 = 0;
    ram_000000000273bf68 = 0;
    g_0273bf70 = 0;
    ram_000000000273bf78 = 0;
    g_0273bf80 = 0;
    ram_000000000273bf88 = 0;
    g_0273bf90 = 0;
    ram_000000000273bf98 = 0;
    g_0273bfa0 = 0;
    ram_000000000273bfa8 = 0;
    g_0273bfb0 = 0;
    ram_000000000273bfb8 = 0;
    g_0273bfc0 = 0;
    ram_000000000273bfc8 = 0;
    g_0273bfd0 = 0;
    ram_000000000273bfd8 = 0;
    g_0273bfe0 = 0;
    _ram_000000000273bfe8 = 0;
    g_0273bff0 = 0;
    ___cxa_guard_release();
  }
  if (g_0273bfeb == '\0') {
    FUN_00811d70();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_008583e0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01b42190();
    FUN_00e87920(uVar2,0);
    if (local_e0 != 0) {
      FUN_00d50b20();
    }
    if (local_e8 != 0) {
      FUN_00d50b20();
    }
    if (local_f0 != 0) {
      FUN_00d50b20();
    }
    FUN_008425a0();
    FUN_008425a0();
  }
  return;
}



// ============================================================
// 01b42190
// ============================================================
// Function: FUN_01b42190
// Address: 01b42190
// Size: 1017 bytes
// Class: MUScaleStretchTuningCtrl
// String references:
//   "handleReset"
//   "MUScaleStretchTuningCtrl"
//   "handleSetStandardFunction"
//   "handleSetVerticalRange"

void FUN_01b42190(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028b4430 = "handleReset";
      g_028b4438 = &g_0273bf30;
      g_028b4440 = 0;
      g_028b4448 = &g_027e46d8;
      g_028b4450 = FUN_01b43b90;
      g_028b4458 = 0x5d9;
      g_028b4460 = 0;
      ram_00000000028b4468 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b4478 = "handleSetStandardFunction";
      g_028b4480 = &g_0273bf30;
      g_028b4488 = 0;
      g_028b4490 = &g_027e46d8;
      g_028b4498 = FUN_01b43b90;
      g_028b44a0 = 0x5e1;
      g_028b44a8 = 0;
      ram_00000000028b44b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028b44c0 = "handleSetVerticalRange";
      g_028b44c8 = &g_0273bf30;
      g_028b44d0 = 0;
      g_028b44d8 = &g_027e46d8;
      g_028b44e0 = FUN_01b43b90;
      g_028b44e8 = 0x5e9;
      g_028b44f0 = 0;
      ram_00000000028b44f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

