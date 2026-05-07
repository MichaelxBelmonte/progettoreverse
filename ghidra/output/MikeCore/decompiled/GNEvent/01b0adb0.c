// Function: FUN_01b0adb0
// Address: 01b0adb0
// Size: 8838 bytes
// Class: GNEvent
// String references:
//   "%@ = %.1f %@"
//   "%@: %.1f"


/* WARNING: Removing unreachable block (ram,0x01b0b4cc) */
/* WARNING: Removing unreachable block (ram,0x01b0b4d8) */
/* WARNING: Removing unreachable block (ram,0x01b0cf15) */
/* WARNING: Removing unreachable block (ram,0x01b0cb48) */
/* WARNING: Removing unreachable block (ram,0x01b0c751) */
/* WARNING: Removing unreachable block (ram,0x01b0c361) */
/* WARNING: Removing unreachable block (ram,0x01b0bfe8) */
/* WARNING: Removing unreachable block (ram,0x01b0bff4) */
/* WARNING: Removing unreachable block (ram,0x01b0c41b) */
/* WARNING: Removing unreachable block (ram,0x01b0c427) */
/* WARNING: Removing unreachable block (ram,0x01b0c80b) */
/* WARNING: Removing unreachable block (ram,0x01b0c817) */
/* WARNING: Removing unreachable block (ram,0x01b0cc02) */
/* WARNING: Removing unreachable block (ram,0x01b0cc0e) */
/* WARNING: Removing unreachable block (ram,0x01b0cfd6) */
/* WARNING: Removing unreachable block (ram,0x01b0cfe2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01b0adb0(longlong *param_1,int param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float extraout_XMM0_Da;
  float fVar17;
  uint extraout_XMM0_Db;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar20 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar19;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float local_408;
  uint uStack_404;
  uint uStack_400;
  uint uStack_3fc;
  longlong local_3f0;
  longlong local_3d0;
  char local_3c8;
  longlong local_3c0;
  char local_3b8;
  longlong local_3b0;
  char local_3a8;
  longlong local_3a0;
  char local_398;
  longlong local_390;
  char local_388;
  longlong local_380;
  char local_378;
  longlong local_370;
  char local_368;
  longlong local_360;
  char local_358;
  longlong local_350;
  char local_348;
  longlong local_340;
  char local_338;
  longlong local_330;
  char local_328;
  longlong local_320;
  char local_318;
  longlong local_310;
  char local_308;
  longlong local_300;
  char local_2f8;
  longlong local_2f0;
  char local_2e8;
  longlong local_2e0;
  char local_2d8;
  longlong local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  float local_220;
  undefined4 local_21c;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  float local_108;
  undefined4 local_f4;
  float local_e8;
  float local_d8;
  uint uStack_d0;
  uint uStack_cc;
  float local_c0;
  float local_bc;
  longlong *local_b8;
  char local_a8;
  float local_94;
  longlong *local_90;
  uint local_88;
  longlong local_80;
  char local_78;
  float local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  
  FUN_0173ba80();
  plVar4 = local_90;
  if (((char)local_88 == '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ad3cb0();
  if ((char)local_88 == '\0') {
    if (local_90 != (longlong *)0x0) {
      local_48 = local_90;
      FUN_00d50b00();
      goto LAB_01b0ae52;
    }
  }
  else {
    local_48 = local_90;
    if (local_90 != (longlong *)0x0) {
LAB_01b0ae52:
      if (param_2 == -1000000) {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = local_48;
        }
        auVar32._0_8_ = FUN_0173e440();
        auVar32._8_8_ = extraout_XMM0_Qb;
        auVar20._4_12_ = auVar32._4_12_;
        auVar20._0_4_ = (float)auVar32._0_8_ * DAT_02394204;
        local_bc = (float)_logf(auVar20._0_8_);
        local_bc = local_bc * DAT_02394208;
        local_c0 = DAT_0241b650;
        local_f4 = 0x45;
      }
      else {
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        plVar14 = local_48;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar14 = local_48, lVar8 != 0)) {
          param_1 = local_48;
          plVar14 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        local_bc = (float)(**(code **)(*plVar14 + 0x3a0))();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        plVar14 = local_48;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar14 = local_48, lVar8 != 0)) {
          param_1 = local_48;
          plVar14 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        local_f4 = (**(code **)(*plVar14 + 0x370))();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = plVar4;
        }
        local_c0 = (float)FUN_01742280();
      }
      FUN_01a1d6e0();
      if (local_90 == (longlong *)0x0) {
        bVar15 = false;
        local_b8 = (longlong *)0x0;
        bVar2 = false;
      }
      else {
        FUN_01a1d6e0();
        FUN_019dd050();
        local_b8 = local_40;
        param_1 = local_40;
        if (local_40 == (longlong *)0x0) {
          bVar2 = false;
          local_b8 = (longlong *)0x0;
LAB_01b0b06a:
          bVar15 = local_b8 != (longlong *)0x0;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_108 = 0.0;
      if ((bVar15) && (0 < *(int *)((longlong)local_b8 + 0xc))) {
        local_108 = 0.0;
        lVar8 = 0;
        do {
          pVar11 = (pthread_key_t)local_b8;
          pvVar7 = _pthread_getspecific(pVar11);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0132d820();
          if ((char)local_88 == '\0') {
            if (local_90 != (longlong *)0x0) {
              FUN_00d50b00();
              if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_01b0b1b0;
            }
          }
          else if (local_90 != (longlong *)0x0) {
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
        } while (lVar8 < *(int *)((longlong)local_b8 + 0xc));
      }
      fVar16 = (float)FUN_01773e50();
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = local_48;
      }
      FUN_0173e3a0();
      uVar18 = _exp2f(((local_bc - local_c0) + DAT_0241b650) * DAT_023941f4);
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        param_1 = local_48;
      }
      FUN_0173b790();
      pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar5 = FUN_01770770();
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar11 = (pthread_key_t)param_1;
      fVar16 = fVar16 + local_c0;
      uStack_d0 = (uint)extraout_XMM0_Qb_00;
      uStack_cc = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
      auVar30._0_4_ = (uint)(extraout_XMM0_Da / DAT_023908e0) & _DAT_023945e0;
      auVar30._4_4_ = extraout_XMM0_Db & _UNK_023945e4;
      auVar30._8_4_ = uStack_d0 & _UNK_023945e8;
      auVar30._12_4_ = uStack_cc & _UNK_023945ec;
      auVar31._4_12_ = SUB1612(auVar30 | ZEXT416(DAT_02394dc8),4);
      auVar31._0_4_ = SUB164(auVar30 | ZEXT416(DAT_02394dc8),0) + extraout_XMM0_Da / DAT_023908e0;
      auVar32 = roundss(auVar31,auVar31,0xb);
      local_1bc = auVar32._0_4_ * DAT_023908e0 + local_108 + local_c0;
      if (cVar5 != '\0') {
        local_1c4 = fVar16 - local_bc;
        local_1c0 = local_c0 - local_bc;
        pvVar7 = _pthread_getspecific(pVar11);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          param_1 = local_48;
        }
        FUN_0173b790();
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_21c = FUN_01770220();
        if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_0173b120();
        plVar14 = local_90;
        if ((char)local_88 == '\0') {
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b00();
            if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
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
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01770230();
          if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          auVar21._0_8_ = _logf();
          auVar21._8_8_ = extraout_XMM0_Qb_02;
          auVar22._4_12_ = auVar21._4_12_;
          auVar22._0_4_ = (float)auVar21._0_8_ / DAT_0241c6f0;
          iVar6 = FUN_00e7d780(auVar22._0_8_);
          iVar13 = 0;
          while( true ) {
            if (param_2 == -1000000) {
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                param_1 = local_48;
              }
              auVar23._0_8_ = FUN_0173e440();
              auVar23._8_8_ = extraout_XMM0_Qb_03;
              auVar24._4_12_ = auVar23._4_12_;
              auVar24._0_4_ = (float)auVar23._0_8_ * DAT_02394204;
              fVar17 = (float)_logf(auVar24._0_8_);
              fVar17 = fVar17 * DAT_02394208;
            }
            else {
              pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
              plVar9 = plVar14;
              if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
                plVar9 = (longlong *)plVar14[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
              }
              fVar17 = (float)(**(code **)(*plVar9 + 0x3a0))();
            }
            if (((float)((uint)(fVar17 - local_d8) & _DAT_02390140) < DAT_0239425c) ||
               (iVar6 < iVar13)) break;
            pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0173b790();
            pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0173b790();
            pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            auVar25._0_8_ = FUN_01770220();
            auVar25._8_8_ = extraout_XMM0_Qb_04;
            auVar26._4_12_ = auVar25._4_12_;
            auVar26._0_4_ = (float)auVar25._0_8_ + (fVar17 - local_d8) * DAT_02390118;
            FUN_01770230(auVar26._0_8_);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            iVar13 = iVar13 + 1;
          }
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_e8 = (float)FUN_01770220();
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
            param_1 = local_48;
          }
          FUN_0173b790();
          pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_01770220();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pVar11 = (pthread_key_t)param_1;
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
        if (plVar14 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      plVar9 = (longlong *)FUN_00e8fc40();
      FUN_001d7da0();
      (**(code **)(*plVar9 + 0x18))();
      FUN_01d5e5a0();
      pvVar7 = _pthread_getspecific(pVar11);
      lVar8 = DAT_027e45c8;
      plVar14 = local_48;
      if ((pvVar7 != (void *)0x0) &&
         (lVar10 = FUN_00e8b990(), lVar8 = DAT_027e45c8, plVar14 = local_48, lVar10 != 0)) {
        plVar14 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
      }
      DAT_027e45c8 = lVar8;
      if (lVar8 != 0) {
        FUN_00d50b00();
      }
      local_3c8 = '\x01';
      local_3c0 = 0;
      local_3b8 = '\0';
      local_3d0 = lVar8;
      (**(code **)(*plVar14 + 0x3c0))(&local_3d0,local_f4,&local_3c0);
      plVar14 = local_90;
      if (local_90 == (longlong *)0x0) {
        bVar15 = true;
        plVar14 = (longlong *)0x0;
      }
      else {
        if ((char)local_88 == '\0') {
          FUN_00d50b00();
          bVar15 = false;
          if (((char)local_88 == '\0') || (local_90 == (longlong *)0x0)) goto LAB_01b0bbd1;
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
      local_220 = (float)_exp2f(local_bc * DAT_023941f4);
      local_3b0 = DAT_027e4590;
      local_220 = local_220 * DAT_023941f8;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_0276bc90;
      local_3a8 = '\x01';
      if (DAT_0276bc90 != 0) {
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
      local_380 = DAT_027e3d90;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          local_380 = DAT_027e3d90;
        }
      }
      else {
        local_38 = '\0';
      }
      local_1b0 = '\x01';
      DAT_027e3d90 = local_380;
      if (local_380 != 0) {
        local_1b0 = '\x01';
        FUN_00d50b00();
      }
      local_378 = '\x01';
      local_370 = 0;
      local_368 = '\0';
      local_210 = 0;
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      local_210 = '\x01';
      local_218 = unaff_RSI;
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
      if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = (longlong *)&DAT_024f9300;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_90 = &DAT_024c5048;
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
      plVar3 = DAT_027e1430;
      if ((local_a8 == '\0') && (plVar14 != (longlong *)0x0)) {
        uVar19 = FUN_00d50b00();
        plVar3 = DAT_027e1430;
      }
      local_1a0 = '\x01';
      DAT_027e1430 = plVar3;
      local_1a8 = plVar14;
      if (plVar3 != (longlong *)0x0) {
        local_1a0 = '\x01';
        uVar19 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar19,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d65260();
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5dc80();
      local_360 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027e3c08;
      local_358 = '\x01';
      if (DAT_027e3c08 != 0) {
        FUN_00d50b00();
      }
      local_350 = lVar8;
      local_348 = '\x01';
      local_340 = 0;
      local_338 = '\0';
      FUN_00d31230(&local_340,&local_350);
      local_70 = (float)_exp2f(local_c0 * DAT_023941f4);
      local_80 = local_58;
      local_88 = 2;
      local_90 = &DAT_024c5048;
      local_78 = 0;
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_70 = local_70 * DAT_023941f8;
      local_78 = '\x01';
      local_90 = (longlong *)&DAT_024c79a0;
      FUN_00d8cb40(local_70,&local_90);
      local_198 = local_40;
      local_190 = 0;
      local_330 = DAT_027e3d90;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          local_330 = DAT_027e3d90;
        }
      }
      else {
        local_38 = '\0';
      }
      local_190 = '\x01';
      DAT_027e3d90 = local_330;
      if (local_330 != 0) {
        local_190 = '\x01';
        FUN_00d50b00();
      }
      local_328 = '\x01';
      local_320 = 0;
      local_318 = '\0';
      local_200 = 0;
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      local_200 = '\x01';
      local_208 = unaff_RSI;
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
      if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = &DAT_024c5048;
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
      if (plVar14 != (longlong *)0x0) {
        uVar19 = FUN_00d50b00();
      }
      plVar3 = DAT_027e1430;
      local_180 = '\x01';
      local_188 = plVar14;
      if (DAT_027e1430 != (longlong *)0x0) {
        local_180 = '\x01';
        uVar19 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar19,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar10 = DAT_027e3c00;
      local_310 = lVar8;
      local_308 = '\x01';
      if (DAT_027e3c00 != 0) {
        FUN_00d50b00();
      }
      local_300 = lVar10;
      local_2f8 = '\x01';
      local_2f0 = 0;
      local_2e8 = '\0';
      FUN_00d31230(&local_2f0,&local_300);
      fVar16 = (float)_exp2f(fVar16 * DAT_023941f4);
      lVar8 = local_58;
      local_88 = 2;
      local_90 = &DAT_024c5048;
      local_78 = 0;
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_70 = fVar16 * DAT_023941f8;
      local_80 = lVar8;
      local_78 = '\x01';
      local_90 = (longlong *)&DAT_024c79a0;
      FUN_00d8cb40(local_70,&local_90);
      local_178 = local_40;
      local_170 = 0;
      local_2e0 = DAT_027e3d90;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          local_2e0 = DAT_027e3d90;
        }
      }
      else {
        local_38 = '\0';
      }
      local_170 = '\x01';
      DAT_027e3d90 = local_2e0;
      if (local_2e0 != 0) {
        local_170 = '\x01';
        FUN_00d50b00();
      }
      local_2d8 = '\x01';
      local_2d0 = 0;
      local_2c8 = '\0';
      local_1f0 = 0;
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      local_1f0 = '\x01';
      local_1f8 = unaff_RSI;
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
      if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = &DAT_024c5048;
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
      if (plVar14 != (longlong *)0x0) {
        uVar19 = FUN_00d50b00();
      }
      plVar3 = DAT_027e1430;
      local_160 = '\x01';
      local_168 = plVar14;
      if (DAT_027e1430 != (longlong *)0x0) {
        local_160 = '\x01';
        uVar19 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar19,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar8 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar10 = DAT_027e3d98;
      local_2c0 = lVar8;
      local_2b8 = '\x01';
      if (DAT_027e3d98 != 0) {
        FUN_00d50b00();
      }
      local_2b0 = lVar10;
      local_2a8 = '\x01';
      local_2a0 = 0;
      local_298 = '\0';
      FUN_00d31230(&local_2a0,&local_2b0);
      fVar16 = (float)_exp2f(local_1bc * DAT_023941f4);
      lVar8 = local_58;
      local_88 = 2;
      local_90 = &DAT_024c5048;
      local_78 = 0;
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      local_70 = fVar16 * DAT_023941f8;
      local_80 = lVar8;
      local_78 = '\x01';
      local_90 = (longlong *)&DAT_024c79a0;
      FUN_00d8cb40(local_70,&local_90);
      local_158 = local_40;
      local_150 = 0;
      local_290 = DAT_027e3d90;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          local_290 = DAT_027e3d90;
        }
      }
      else {
        local_38 = '\0';
      }
      local_150 = '\x01';
      DAT_027e3d90 = local_290;
      if (local_290 != 0) {
        local_150 = '\x01';
        FUN_00d50b00();
      }
      local_288 = '\x01';
      local_280 = 0;
      local_278 = '\0';
      local_1e0 = 0;
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      local_1e0 = '\x01';
      local_1e8 = unaff_RSI;
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
      if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_90 = &DAT_024c5048;
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
      if (plVar14 != (longlong *)0x0) {
        uVar19 = FUN_00d50b00();
      }
      plVar3 = DAT_027e1430;
      local_140 = '\x01';
      local_148 = plVar14;
      if (DAT_027e1430 != (longlong *)0x0) {
        local_140 = '\x01';
        uVar19 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar19,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d5e230();
      FUN_01d65260();
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d5dc80();
      local_270 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027e3da0;
      local_268 = '\x01';
      if (DAT_027e3da0 != 0) {
        FUN_00d50b00();
      }
      local_260 = lVar8;
      local_258 = '\x01';
      local_250 = 0;
      local_248 = '\0';
      FUN_00d31230(&local_250,&local_260);
      local_138 = local_90;
      local_130 = 0;
      local_240 = DAT_027e3d90;
      if ((char)local_88 == '\0') {
        if (local_90 != (longlong *)0x0) {
          FUN_00d50b00();
          local_240 = DAT_027e3d90;
        }
      }
      else {
        local_88 = local_88 & 0xffffff00;
      }
      local_130 = '\x01';
      DAT_027e3d90 = local_240;
      if (local_240 != 0) {
        local_130 = '\x01';
        FUN_00d50b00();
      }
      local_238 = '\x01';
      local_230 = 0;
      local_228 = '\0';
      local_1d0 = 0;
      if (unaff_RSI != 0) {
        FUN_00d50b00();
      }
      local_1d0 = '\x01';
      local_1d8 = unaff_RSI;
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
      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
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
      uStack_404 = (uint)((ulonglong)uVar18 >> 0x20);
      uStack_400 = (uint)extraout_XMM0_Qb_01;
      uStack_3fc = (uint)((ulonglong)extraout_XMM0_Qb_01 >> 0x20);
      fVar16 = local_408 * DAT_023941f8 * DAT_023908ec;
      auVar1._4_4_ = _UNK_023945e4 & uStack_404;
      auVar1._0_4_ = _DAT_023945e0 & (uint)fVar16;
      auVar1._8_4_ = _UNK_023945e8 & uStack_400;
      auVar1._12_4_ = _UNK_023945ec & uStack_3fc;
      auVar33._4_12_ = SUB1612(ZEXT416(DAT_02394dc8) | auVar1,4);
      auVar33._0_4_ = SUB164(ZEXT416(DAT_02394dc8) | auVar1,0) + fVar16;
      auVar27._0_12_ = ZEXT812(0);
      auVar27._12_4_ = 0;
      auVar32 = roundss(auVar27,auVar33,0xb);
      auVar28._4_12_ = auVar32._4_12_;
      auVar28._0_4_ = auVar32._0_4_ / DAT_023908ec;
      uVar18 = FUN_00d46dc0(auVar28._0_8_);
      local_120 = 0;
      if (plVar14 != (longlong *)0x0) {
        uVar18 = FUN_00d50b00();
      }
      plVar3 = DAT_027e3bd0;
      local_120 = '\x01';
      local_128 = plVar14;
      if (DAT_027e3bd0 != (longlong *)0x0) {
        local_120 = '\x01';
        uVar18 = FUN_00d50b00();
      }
      local_88 = local_88 & 0xffffff00;
      local_90 = plVar3;
      FUN_00ca0840(uVar18,&local_90);
      if (((char)local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      *unaff_RDI = plVar9;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((bVar2) && (local_b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar15 && plVar14 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01b0d057;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01b0d057:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


