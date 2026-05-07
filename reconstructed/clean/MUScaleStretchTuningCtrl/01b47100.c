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

