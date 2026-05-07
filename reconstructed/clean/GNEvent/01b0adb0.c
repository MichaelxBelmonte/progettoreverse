// Function: FUN_01b0adb0
// Address: 01b0adb0
// Size: 8838 bytes
// Class: GNEvent
// String references:
//   "%@ = %.1f %@"
//   "%@: %.1f"
// === GNEvent properties ===
//   GNEventType     _type
//   GNMouseWheelAxis _mouseWheelAxis
//   GNMouseButton   _mouseButton


void* FUN_01b0adb0(int64_t *param_1,int param_2)

{
  uint8_t auVar1 [16];
  bool bVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t arg1;
  void*this_ptr;
  int iVar12;
  int iVar13;
  int64_t *plVar14;
  bool bVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float fVar17;
  uint extraout_XMM0_Db;
  uint64_t uVar18;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar20 [16];
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  uint64_t uVar19;
  uint8_t auVar27 [16];
  uint8_t auVar28 [16];
  float fVar29;
  uint8_t auVar30 [16];
  uint8_t auVar31 [16];
  uint8_t auVar32 [16];
  uint8_t auVar33 [16];
  float local_408;
  uint uStack_404;
  uint uStack_400;
  uint uStack_3fc;
  int64_t local_3f0;
  int64_t local_3d0;
  char local_3c8;
  int64_t local_3c0;
  char local_3b8;
  int64_t local_3b0;
  char local_3a8;
  int64_t local_3a0;
  char local_398;
  int64_t local_390;
  char local_388;
  int64_t local_380;
  char local_378;
  int64_t local_370;
  char local_368;
  int64_t local_360;
  char local_358;
  int64_t local_350;
  char local_348;
  int64_t local_340;
  char local_338;
  int64_t local_330;
  char local_328;
  int64_t local_320;
  char local_318;
  int64_t local_310;
  char local_308;
  int64_t local_300;
  char local_2f8;
  int64_t local_2f0;
  char local_2e8;
  int64_t local_2e0;
  char local_2d8;
  int64_t local_2d0;
  char local_2c8;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  float local_220;
  uint32_t local_21c;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t local_1f8;
  char local_1f0;
  int64_t local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t *local_198;
  char local_190;
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
  float local_108;
  uint32_t local_f4;
  float local_e8;
  float local_d8;
  uint uStack_d0;
  uint uStack_cc;
  float local_c0;
  float local_bc;
  int64_t *local_b8;
  char local_a8;
  float local_94;
  int64_t *local_90;
  uint local_88;
  int64_t local_80;
  char local_78;
  float local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  
  FUN_0173ba80();
  plVar4 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (int64_t *)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ad3cb0();
  if ((char)local_88 == '\0') {
    if (local_90 != (int64_t *)0x0) {
      local_48 = local_90;
      FUN_00d50b00();
      goto LAB_01b0ae52;
    }
  }
  else {
    local_48 = local_90;
    if (local_90 != (int64_t *)0x0) {
LAB_01b0ae52:
      if (param_2 == -1000000) {
        pvVar7 = _pthread_getspecific((void*)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = local_48;
        }
        auVar32._0_8_ = FUN_0173e440();
        auVar32._8_8_ = extraout_XMM0_Qb;
        auVar20._4_12_ = auVar32._4_12_;
        auVar20._0_4_ = (float)auVar32._0_8_ * g_02394204;
        local_bc = (float)_logf(auVar20._0_8_);
        local_bc = local_bc * g_02394208;
        local_c0 = g_0241b650;
        local_f4 = 0x45;
      }
      else {
        pvVar7 = _pthread_getspecific((void*)param_1);
        plVar14 = local_48;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar14 = local_48, lVar8 != 0)) {
          param_1 = local_48;
          plVar14 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        local_bc = (float)(**(code **)(*plVar14 + 0x3a0))();
        pvVar7 = _pthread_getspecific((void*)param_1);
        plVar14 = local_48;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar14 = local_48, lVar8 != 0)) {
          param_1 = local_48;
          plVar14 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        local_f4 = (**(code **)(*plVar14 + 0x370))();
        pvVar7 = _pthread_getspecific((void*)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = plVar4;
        }
        local_c0 = (float)FUN_01742280();
      }
      FUN_01a1d6e0();
      if (local_90 == (int64_t *)0x0) {
        bVar15 = false;
        local_b8 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        FUN_01a1d6e0();
        FUN_019dd050();
        local_b8 = local_40;
        param_1 = local_40;
        if (local_40 == (int64_t *)0x0) {
          bVar2 = false;
          local_b8 = (int64_t *)0x0;
LAB_01b0b06a:
          bVar15 = local_b8 != (int64_t *)0x0;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_38 == '\0') {
            FUN_00d50b00();
            bVar2 = true;
            goto LAB_01b0b06a;
          }
          local_38 = '\0';
          bVar15 = true;
          bVar2 = true;
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_108 = 0.0;
      if ((bVar15) && (0 < *(int *)((int64_t)local_b8 + 0xc))) {
        local_108 = 0.0;
        lVar8 = 0;
        do {
          pVar11 = (void*)local_b8;
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0132d820();
          if ((char)local_88 == '\0') {
            if (local_90 != (int64_t *)0x0) {
              FUN_00d50b00();
              if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01b0b1b0;
            }
          }
          else if (local_90 != (int64_t *)0x0) {
LAB_01b0b1b0:
            pvVar7 = _pthread_getspecific(pVar11);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_108 = (float)FUN_0173e3a0();
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
          param_1 = local_b8;
        } while (lVar8 < *(int *)((int64_t)local_b8 + 0xc));
      }
      fVar16 = (float)FUN_01773e50();
      pvVar7 = _pthread_getspecific((void*)param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = local_48;
      }
      FUN_0173e3a0();
      uVar18 = _exp2f(((local_bc - local_c0) + g_0241b650) * g_023941f4);
      pvVar7 = _pthread_getspecific((void*)param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = local_48;
      }
      FUN_0173b790();
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_01770770();
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pVar11 = (void*)param_1;
      fVar16 = fVar16 + local_c0;
      uStack_d0 = (uint)extraout_XMM0_Qb_00;
      uStack_cc = (uint)((uint64_t)extraout_XMM0_Qb_00 >> 0x20);
      auVar30._0_4_ = (uint)(extraout_XMM0_Da / g_023908e0) & g_023945e0;
      auVar30._4_4_ = extraout_XMM0_Db & _UNK_023945e4;
      auVar30._8_4_ = uStack_d0 & _UNK_023945e8;
      auVar30._12_4_ = uStack_cc & _UNK_023945ec;
      auVar31._4_12_ = SUB1612(auVar30 | ZEXT416(g_02394dc8),4);
      auVar31._0_4_ = SUB164(auVar30 | ZEXT416(g_02394dc8),0) + extraout_XMM0_Da / g_023908e0;
      auVar32 = roundss(auVar31,auVar31,0xb);
      local_1bc = auVar32._0_4_ * g_023908e0 + local_108 + local_c0;
      if (cVar5 != '\0') {
        local_1c4 = fVar16 - local_bc;
        local_1c0 = local_c0 - local_bc;
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = local_48;
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_21c = FUN_01770220();
        if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0173b120();
        plVar14 = local_90;
        if ((char)local_88 == '\0') {
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b00();
            if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_88 = local_88 & 0xffffff00;
        }
        iVar12 = 0;
        local_d8 = extraout_XMM0_Da;
        do {
          fVar17 = local_c0;
          if (((iVar12 != 0) && (fVar17 = local_d8, fVar29 = fVar16, iVar12 == 1)) ||
             (local_d8 = local_1bc, fVar29 = fVar17, iVar12 != 2)) {
            local_d8 = fVar29;
          }
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770230();
          if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          auVar21._0_8_ = _logf();
          auVar21._8_8_ = extraout_XMM0_Qb_02;
          auVar22._4_12_ = auVar21._4_12_;
          auVar22._0_4_ = (float)auVar21._0_8_ / g_0241c6f0;
          iVar6 = FUN_00e7d780(auVar22._0_8_);
          iVar13 = 0;
          while( true ) {
            if (param_2 == -1000000) {
              pvVar7 = _pthread_getspecific((void*)param_1);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = local_48;
              }
              auVar23._0_8_ = FUN_0173e440();
              auVar23._8_8_ = extraout_XMM0_Qb_03;
              auVar24._4_12_ = auVar23._4_12_;
              auVar24._0_4_ = (float)auVar23._0_8_ * g_02394204;
              fVar17 = (float)_logf(auVar24._0_8_);
              fVar17 = fVar17 * g_02394208;
            }
            else {
              pvVar7 = _pthread_getspecific((void*)param_1);
              plVar9 = plVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar9 = (int64_t *)plVar14[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              fVar17 = (float)(**(code **)(*plVar9 + 0x3a0))();
            }
            if (((float)((uint)(fVar17 - local_d8) & g_02390140) < g_0239425c) ||
               (iVar6 < iVar13)) break;
            pvVar7 = _pthread_getspecific((void*)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0173b790();
            pvVar7 = _pthread_getspecific((void*)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar7 = _pthread_getspecific((void*)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0173b790();
            pvVar7 = _pthread_getspecific((void*)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            auVar25._0_8_ = FUN_01770220();
            auVar25._8_8_ = extraout_XMM0_Qb_04;
            auVar26._4_12_ = auVar25._4_12_;
            auVar26._0_4_ = (float)auVar25._0_8_ + (fVar17 - local_d8) * g_02390118;
            FUN_01770230(auVar26._0_8_);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            iVar13 = iVar13 + 1;
          }
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e8 = (float)FUN_01770220();
          pvVar7 = _pthread_getspecific((void*)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = local_48;
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((void*)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_01770220();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          pVar11 = (void*)param_1;
          local_e8 = local_e8 - fVar17;
          local_94 = local_e8;
          if ((iVar12 == 0) || (local_94 = local_1c0, iVar12 != 1)) {
            local_e8 = local_1c4;
            if (iVar12 != 2) goto LAB_01b0ba80;
          }
          else {
LAB_01b0ba80:
          }
          iVar12 = iVar12 + 1;
          local_1c4 = local_e8;
          local_1c0 = local_94;
        } while (iVar12 != 3);
        if (plVar14 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      plVar9 = (int64_t *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar9 + 0x18))();
      FUN_01d5e5a0();
      pvVar7 = _pthread_getspecific(pVar11);
      lVar8 = g_027e45c8;
      plVar14 = local_48;
      if ((pvVar7 != (void *)0x0) &&
         (lVar10 = FUN_00e8b990(), lVar8 = g_027e45c8, plVar14 = local_48, lVar10 != 0)) {
        plVar14 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      g_027e45c8 = lVar8;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      local_3c8 = '\x01';
      local_3c0 = 0;
      local_3b8 = '\0';
      local_3d0 = lVar8;
      (**(code **)(*plVar14 + 0x3c0))(&local_3d0,local_f4,&local_3c0);
      plVar14 = local_90;
      if (local_90 == (int64_t *)0x0) {
        bVar15 = true;
        plVar14 = (int64_t *)0x0;
      }
      else {
        if ((char)local_88 == '\0') {
          FUN_00d50b00();
          bVar15 = false;
          if (((char)local_88 == '\0') || (local_90 == (int64_t *)0x0)) goto LAB_01b0bbd1;
          FUN_00d50b20();
        }
        else {
          local_88 = local_88 & 0xffffff00;
        }
        bVar15 = false;
      }
LAB_01b0bbd1:
      if ((local_3b8 != '\0') && (local_3c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3c8 != '\0') && (local_3d0 != 0)) {
        FUN_00d50b20();
      }
      local_220 = (float)_exp2f(local_bc * g_023941f4);
      local_3b0 = g_027e4590;
      local_220 = local_220 * g_023941f8;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_0276bc90;
      local_3a8 = '\x01';
      if (g_0276bc90 != 0) {
        FUN_00d50b00();
      }
      local_3a0 = lVar8;
      local_398 = '\x01';
      local_390 = 0;
      local_388 = '\0';
      FUN_00d31230(&local_390,&local_3a0);
      local_3f0 = local_58;
      uVar19 = FUN_0049c630(&local_3f0,&local_220,3);
      FUN_00d8cb40(uVar19,&local_90);
      local_1b8 = local_40;
      local_1b0 = 0;
      local_380 = g_027e3d90;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_380 = g_027e3d90;
        }
      }
      else {
        local_38 = '\0';
      }
      local_1b0 = '\x01';
      g_027e3d90 = local_380;
      if (local_380 != 0) {
        local_1b0 = '\x01';
        FUN_00d50b00();
      }
      local_378 = '\x01';
      local_370 = 0;
      local_368 = '\0';
      local_210 = 0;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      local_210 = '\x01';
      local_218 = arg1;
      FUN_01d5da60(&local_370,&local_380,&local_218);
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_368 != '\0') && (local_370 != 0)) {
        FUN_00d50b20();
      }
      if ((local_378 != '\0') && (local_380 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = (int64_t *)&g_024f9300;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_90 = &g_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_388 != '\0') && (local_390 != 0)) {
        FUN_00d50b20();
      }
      if ((local_398 != '\0') && (local_3a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3a8 != '\0') && (local_3b0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      uVar19 = FUN_00d46dc0();
      local_1a0 = 0;
      plVar3 = g_027e1430;
      if ((local_a8 == '\0') && (plVar14 != (int64_t *)0x0)) {
        uVar19 = FUN_00d50b00();
        plVar3 = g_027e1430;
      }
      local_1a0 = '\x01';
      g_027e1430 = plVar3;
      local_1a8 = plVar14;
      if (plVar3 != (int64_t *)0x0) {
        local_1a0 = '\x01';
        uVar19 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar19,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d65260();
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5dc80();
      local_360 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_027e3c08;
      local_358 = '\x01';
      if (g_027e3c08 != 0) {
        FUN_00d50b00();
      }
      local_350 = lVar8;
      local_348 = '\x01';
      local_340 = 0;
      local_338 = '\0';
      FUN_00d31230(&local_340,&local_350);
      local_70 = (float)_exp2f(local_c0 * g_023941f4);
      local_80 = local_58;
      local_88 = 2;
      local_90 = &g_024c5048;
      local_78 = 0;
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_70 = local_70 * g_023941f8;
      local_78 = '\x01';
      local_90 = (int64_t *)&g_024c79a0;
      FUN_00d8cb40(local_70,&local_90);
      local_198 = local_40;
      local_190 = 0;
      local_330 = g_027e3d90;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_330 = g_027e3d90;
        }
      }
      else {
        local_38 = '\0';
      }
      local_190 = '\x01';
      g_027e3d90 = local_330;
      if (local_330 != 0) {
        local_190 = '\x01';
        FUN_00d50b00();
      }
      local_328 = '\x01';
      local_320 = 0;
      local_318 = '\0';
      local_200 = 0;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      local_200 = '\x01';
      local_208 = arg1;
      FUN_01d5da60(&local_320,&local_330,&local_208);
      if ((local_200 != '\0') && (local_208 != 0)) {
        FUN_00d50b20();
      }
      if ((local_318 != '\0') && (local_320 != 0)) {
        FUN_00d50b20();
      }
      if ((local_328 != '\0') && (local_330 != 0)) {
        FUN_00d50b20();
      }
      if ((local_190 != '\0') && (local_198 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = &g_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_338 != '\0') && (local_340 != 0)) {
        FUN_00d50b20();
      }
      if ((local_348 != '\0') && (local_350 != 0)) {
        FUN_00d50b20();
      }
      if ((local_358 != '\0') && (local_360 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      uVar19 = FUN_00d46dc0();
      local_180 = 0;
      if (plVar14 != (int64_t *)0x0) {
        uVar19 = FUN_00d50b00();
      }
      plVar3 = g_027e1430;
      local_180 = '\x01';
      local_188 = plVar14;
      if (g_027e1430 != (int64_t *)0x0) {
        local_180 = '\x01';
        uVar19 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar19,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar10 = g_027e3c00;
      local_310 = lVar8;
      local_308 = '\x01';
      if (g_027e3c00 != 0) {
        FUN_00d50b00();
      }
      local_300 = lVar10;
      local_2f8 = '\x01';
      local_2f0 = 0;
      local_2e8 = '\0';
      FUN_00d31230(&local_2f0,&local_300);
      fVar16 = (float)_exp2f(fVar16 * g_023941f4);
      lVar8 = local_58;
      local_88 = 2;
      local_90 = &g_024c5048;
      local_78 = 0;
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_70 = fVar16 * g_023941f8;
      local_80 = lVar8;
      local_78 = '\x01';
      local_90 = (int64_t *)&g_024c79a0;
      FUN_00d8cb40(local_70,&local_90);
      local_178 = local_40;
      local_170 = 0;
      local_2e0 = g_027e3d90;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_2e0 = g_027e3d90;
        }
      }
      else {
        local_38 = '\0';
      }
      local_170 = '\x01';
      g_027e3d90 = local_2e0;
      if (local_2e0 != 0) {
        local_170 = '\x01';
        FUN_00d50b00();
      }
      local_2d8 = '\x01';
      local_2d0 = 0;
      local_2c8 = '\0';
      local_1f0 = 0;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      local_1f0 = '\x01';
      local_1f8 = arg1;
      FUN_01d5da60(&local_2d0,&local_2e0,&local_1f8);
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2c8 != '\0') && (local_2d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2d8 != '\0') && (local_2e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = &g_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2e8 != '\0') && (local_2f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2f8 != '\0') && (local_300 != 0)) {
        FUN_00d50b20();
      }
      if ((local_308 != '\0') && (local_310 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      uVar19 = FUN_00d46dc0();
      local_160 = 0;
      if (plVar14 != (int64_t *)0x0) {
        uVar19 = FUN_00d50b00();
      }
      plVar3 = g_027e1430;
      local_160 = '\x01';
      local_168 = plVar14;
      if (g_027e1430 != (int64_t *)0x0) {
        local_160 = '\x01';
        uVar19 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar19,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar10 = g_027e3d98;
      local_2c0 = lVar8;
      local_2b8 = '\x01';
      if (g_027e3d98 != 0) {
        FUN_00d50b00();
      }
      local_2b0 = lVar10;
      local_2a8 = '\x01';
      local_2a0 = 0;
      local_298 = '\0';
      FUN_00d31230(&local_2a0,&local_2b0);
      fVar16 = (float)_exp2f(local_1bc * g_023941f4);
      lVar8 = local_58;
      local_88 = 2;
      local_90 = &g_024c5048;
      local_78 = 0;
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_70 = fVar16 * g_023941f8;
      local_80 = lVar8;
      local_78 = '\x01';
      local_90 = (int64_t *)&g_024c79a0;
      FUN_00d8cb40(local_70,&local_90);
      local_158 = local_40;
      local_150 = 0;
      local_290 = g_027e3d90;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_290 = g_027e3d90;
        }
      }
      else {
        local_38 = '\0';
      }
      local_150 = '\x01';
      g_027e3d90 = local_290;
      if (local_290 != 0) {
        local_150 = '\x01';
        FUN_00d50b00();
      }
      local_288 = '\x01';
      local_280 = 0;
      local_278 = '\0';
      local_1e0 = 0;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      local_1e0 = '\x01';
      local_1e8 = arg1;
      FUN_01d5da60(&local_280,&local_290,&local_1e8);
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_278 != '\0') && (local_280 != 0)) {
        FUN_00d50b20();
      }
      if ((local_288 != '\0') && (local_290 != 0)) {
        FUN_00d50b20();
      }
      if ((local_150 != '\0') && (local_158 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = &g_024c5048;
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_298 != '\0') && (local_2a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2a8 != '\0') && (local_2b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_2b8 != '\0') && (local_2c0 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      uVar19 = FUN_00d46dc0();
      local_140 = 0;
      if (plVar14 != (int64_t *)0x0) {
        uVar19 = FUN_00d50b00();
      }
      plVar3 = g_027e1430;
      local_140 = '\x01';
      local_148 = plVar14;
      if (g_027e1430 != (int64_t *)0x0) {
        local_140 = '\x01';
        uVar19 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar19,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d65260();
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5dc80();
      local_270 = g_027e4590;
      if (g_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = g_027e3da0;
      local_268 = '\x01';
      if (g_027e3da0 != 0) {
        FUN_00d50b00();
      }
      local_260 = lVar8;
      local_258 = '\x01';
      local_250 = 0;
      local_248 = '\0';
      FUN_00d31230(&local_250,&local_260);
      local_138 = local_90;
      local_130 = 0;
      local_240 = g_027e3d90;
      if ((char)local_88 == '\0') {
        if (local_90 != (int64_t *)0x0) {
          FUN_00d50b00();
          local_240 = g_027e3d90;
        }
      }
      else {
        local_88 = local_88 & 0xffffff00;
      }
      local_130 = '\x01';
      g_027e3d90 = local_240;
      if (local_240 != 0) {
        local_130 = '\x01';
        FUN_00d50b00();
      }
      local_238 = '\x01';
      local_230 = 0;
      local_228 = '\0';
      local_1d0 = 0;
      if (arg1 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = '\x01';
      local_1d8 = arg1;
      FUN_01d5da60(&local_230,&local_240,&local_1d8);
      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_228 != '\0') && (local_230 != 0)) {
        FUN_00d50b20();
      }
      if ((local_238 != '\0') && (local_240 != 0)) {
        FUN_00d50b20();
      }
      if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      if ((local_258 != '\0') && (local_260 != 0)) {
        FUN_00d50b20();
      }
      if ((local_268 != '\0') && (local_270 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d66da0();
      local_408 = (float)uVar18;
      uStack_404 = (uint)((uint64_t)uVar18 >> 0x20);
      uStack_400 = (uint)extraout_XMM0_Qb_01;
      uStack_3fc = (uint)((uint64_t)extraout_XMM0_Qb_01 >> 0x20);
      fVar16 = local_408 * g_023941f8 * g_023908ec;
      auVar1._4_4_ = _UNK_023945e4 & uStack_404;
      auVar1._0_4_ = g_023945e0 & (uint)fVar16;
      auVar1._8_4_ = _UNK_023945e8 & uStack_400;
      auVar1._12_4_ = _UNK_023945ec & uStack_3fc;
      auVar33._4_12_ = SUB1612(ZEXT416(g_02394dc8) | auVar1,4);
      auVar33._0_4_ = SUB164(ZEXT416(g_02394dc8) | auVar1,0) + fVar16;
      auVar27._0_12_ = ZEXT812(0);
      auVar27._12_4_ = 0;
      auVar32 = roundss(auVar27,auVar33,0xb);
      auVar28._4_12_ = auVar32._4_12_;
      auVar28._0_4_ = auVar32._0_4_ / g_023908ec;
      uVar18 = FUN_00d46dc0(auVar28._0_8_);
      local_120 = 0;
      if (plVar14 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      plVar3 = g_027e3bd0;
      local_120 = '\x01';
      local_128 = plVar14;
      if (g_027e3bd0 != (int64_t *)0x0) {
        local_120 = '\x01';
        uVar18 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar18,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      *this_ptr = plVar9;
      *(void*)(this_ptr + 1) = 1;
      if ((bVar2) && (local_b8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar15 && plVar14 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01b0d057;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
LAB_01b0d057:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}

