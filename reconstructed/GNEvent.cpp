// Reconstructed implementation of GNEvent
// From MikeCore binary — reverse-engineered pseudocode

#include "GNEvent.h"

// ============================================================
// @01b0adb0 — 8838 bytes
// str: ""%@ = %.1f %@""
// str: ""%@: %.1f""
// ============================================================

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




// ============================================================
// @01931100 — 6302 bytes
// str: ""GNEvent""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01931100(pthread_key_t param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  void *pvVar7;
  ulonglong uVar8;
  longlong **pplVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_288;
  char local_280;
  longlong local_278;
  char local_270;
  longlong local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
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
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_108;
  char local_100;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar10 = local_40;
  lVar1 = DAT_027e1fc8;
  if (DAT_027e1fc8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar10 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_278 = DAT_02729590;
    if (DAT_02729590 != 0) {
      FUN_00d50b00();
    }
    local_270 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_270 != '\0') && (local_278 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      uVar11 = FUN_00d3ed20();
      local_268 = DAT_027295d8;
      if (DAT_027295d8 != 0) {
        uVar11 = FUN_00d50b00();
      }
      local_260 = '\x01';
      FUN_000175c0(uVar11,&local_268);
      uVar11 = FUN_00d459e0();
      local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar11);
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_260 != '\0') && (local_268 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68._0_4_ != 0.0) || (NAN(local_68._0_4_))) {
        (**(code **)(*unaff_RDI + 0x970))();
        FUN_0197ca10(local_68._0_4_);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01e42030();
        (**(code **)(*local_40 + 0x778))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_258 = DAT_027bf410;
    if (DAT_027bf410 != 0) {
      FUN_00d50b00();
    }
    local_250 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_250 != '\0') && (local_258 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d403d0();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_02729590;
      if (DAT_02729590 != 0) {
        FUN_00d50b00();
      }
      local_248 = lVar1;
      local_240 = '\x01';
      local_100 = 0;
      lVar1 = unaff_RDI[0xa7];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_100 = '\x01';
      local_108 = lVar1;
      FUN_00d41430(&local_108,&local_248);
      if ((local_100 != '\0') && (local_108 != 0)) {
        FUN_00d50b20();
      }
      if ((local_240 != '\0') && (local_248 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x970))();
      local_238 = DAT_026f6f70;
      if (DAT_026f6f70 != 0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_02729588;
      local_230 = '\x01';
      if (DAT_02729588 != 0) {
        FUN_00d50b00();
      }
      local_228 = lVar1;
      local_220 = '\x01';
      local_218 = 0;
      local_210 = '\0';
      FUN_00d31230(&local_218,&local_228);
      local_d8 = local_50;
      local_d0 = 0;
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_d0 = '\x01';
      FUN_0197ce50();
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        FUN_00d50b20();
      }
      if ((local_230 != '\0') && (local_238 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_208 = DAT_027e0908;
    if (DAT_027e0908 != 0) {
      FUN_00d50b00();
    }
    local_200 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d403d0();
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b00();
      }
      lVar1 = DAT_02729590;
      if (DAT_02729590 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar1;
      local_1f0 = '\x01';
      local_e0 = 0;
      lVar1 = unaff_RDI[0xa7];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      FUN_00d41040(&local_e8,&local_1f8);
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1f0 != '\0') && (local_1f8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x970))();
      local_1e8 = 0;
      local_1e0 = '\0';
      FUN_0197ce50();
      if ((local_1e0 != '\0') && (local_1e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_1d8 = DAT_027ebe30;
    if (DAT_027ebe30 != 0) {
      FUN_00d50b00();
    }
    local_1d0 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_1d0 != '\0') && (local_1d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(&UNK_00001668 + *unaff_RDI))();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d610();
      FUN_00d3ecf0();
      plVar3 = local_40;
      plVar10 = local_60;
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        (**(code **)(&UNK_000017e8 + *unaff_RDI))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(&UNK_00001668 + *unaff_RDI))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d610();
        local_c8 = local_50;
        local_c0 = 0;
        if (local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_c0 = '\x01';
        FUN_012caf90();
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_1c8 = DAT_027c8278;
    if (DAT_027c8278 != 0) {
      FUN_00d50b00();
    }
    local_1c0 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(&UNK_00001668 + *unaff_RDI))();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      FUN_00d3ecf0();
      plVar3 = local_40;
      plVar10 = local_60;
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        (**(code **)(&UNK_000017e8 + *unaff_RDI))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(&UNK_00001668 + *unaff_RDI))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d900();
        local_b8 = local_78;
        local_b0 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_b0 = '\x01';
        cVar4 = FUN_01512830();
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          (**(code **)(&UNK_000017e8 + *unaff_RDI))();
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012cb110();
          pvVar7 = _pthread_getspecific(param_1);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e7210();
          local_a8 = local_40;
          local_a0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_a0 = '\x01';
          FUN_012879b0();
          if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_1b8 = DAT_027c8280;
    if (DAT_027c8280 != 0) {
      FUN_00d50b00();
    }
    local_1b0 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      (**(code **)(&UNK_00001668 + *unaff_RDI))();
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0132d900();
      FUN_00d3ecf0();
      plVar3 = local_40;
      plVar10 = local_60;
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        (**(code **)(&UNK_000017e8 + *unaff_RDI))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015058d0();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(&UNK_00001668 + *unaff_RDI))();
        pvVar7 = _pthread_getspecific(param_1);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0132d900();
        local_98 = local_78;
        local_90 = 0;
        if (local_70 == '\0') {
          if (local_78 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_70 = '\0';
        }
        local_90 = '\x01';
        FUN_01512890();
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_019320a8;
    }
    FUN_00d3ecc0();
    plVar10 = local_40;
    local_1a8 = DAT_027086a8;
    if (DAT_027086a8 != 0) {
      FUN_00d50b00();
    }
    local_1a0 = '\x01';
    cVar4 = (**(code **)(*plVar10 + 0x50))();
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_00d3ecc0();
      plVar10 = local_40;
      local_158 = DAT_027e3b30;
      if (DAT_027e3b30 != 0) {
        FUN_00d50b00();
      }
      local_150 = '\x01';
      cVar4 = (**(code **)(*plVar10 + 0x50))();
      uVar11 = extraout_XMM0_Da;
      if ((local_150 != '\0') && (local_158 != 0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if (cVar4 == '\0') goto LAB_019320a8;
      (**(code **)(*unaff_RDI + 0x9a8))(uVar11,0);
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_019320a8;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_40 == (longlong *)0x0) goto LAB_019320a8;
      pvVar7 = _pthread_getspecific(param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar10 = local_40;
      if (local_40 == (longlong *)0x0) {
        bVar2 = true;
        plVar10 = (longlong *)0x0;
      }
      else {
        if (local_38 == '\0') {
          FUN_00d50b00();
          bVar2 = false;
          if ((local_38 == '\0') || (bVar2 = false, local_40 == (longlong *)0x0)) goto LAB_01932848;
          FUN_00d50b20();
        }
        bVar2 = false;
      }
LAB_01932848:
      uVar11 = FUN_00d50b20();
      if (plVar10 != (longlong *)0x0) {
        local_120 = 0;
        lVar1 = unaff_RDI[0xa7];
        if (lVar1 != 0) {
          uVar11 = FUN_00d50b00();
        }
        local_120 = '\x01';
        local_140 = '\0';
        local_148 = plVar10;
        local_128 = lVar1;
        (**(code **)(&DAT_00001830 + *unaff_RDI))(uVar11,&local_148);
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_120 != '\0') && (local_128 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
      }
      goto LAB_019320a8;
    }
    uVar11 = FUN_00d3ed20();
    local_198 = DAT_027c8288;
    if (DAT_027c8288 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_190 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar11,&local_198);
    plVar10 = local_40;
    FUN_002771e0();
    if (plVar10 == (longlong *)0x0) {
LAB_019321e5:
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      if (cVar4 == '\0') goto LAB_019321e5;
    }
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = plVar10;
    uVar11 = FUN_00d3ed20();
    local_188 = DAT_027087c0;
    if (DAT_027087c0 != 0) {
      uVar11 = FUN_00d50b00();
    }
    local_180 = '\x01';
    pplVar9 = &local_40;
    FUN_000175c0(uVar11,&local_188);
    plVar10 = local_40;
    uVar11 = FUN_002771e0();
    if (plVar10 == (longlong *)0x0) {
      pplVar9 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      uVar11 = extraout_XMM0_Da_00;
      if (cVar4 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar3 = local_68;
    plVar10 = *pplVar9;
    if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar10 != (longlong *)0x0) {
        uVar11 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar9 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      uVar11 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    local_170 = '\0';
    local_160 = '\0';
    local_178 = plVar3;
    local_168 = plVar10;
    (**(code **)(&UNK_000016a0 + *unaff_RDI))(uVar11,&local_168);
    if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_019320a8;
  }
  FUN_00d3ecf0();
  (**(code **)(*unaff_RDI + 0x978))();
  plVar3 = local_40;
  plVar10 = local_50;
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != plVar10) goto LAB_019320a8;
  uVar11 = FUN_00d3ed20();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_019320a8;
    uVar11 = FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_019320a8;
  lVar1 = DAT_027e1fc0;
  if (DAT_027e1fc0 != 0) {
    uVar11 = FUN_00d50b00();
  }
  local_288 = lVar1;
  local_280 = '\x01';
  pplVar9 = &local_40;
  FUN_000175c0(uVar11,&local_288);
  plVar10 = local_40;
  if ((DAT_026ec420 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027e3fc8 = FUN_00d4fe50();
    _DAT_027e3fb0 = "GNEvent";
    _DAT_027e3fb8 = 0x50;
    _DAT_027e3fc0 = FUN_001c75c0;
    _DAT_027e3fd0 = 0;
    uRam00000000027e3fd8 = 0;
    _DAT_027e3fe0 = 0;
    uRam00000000027e3fe8 = 0;
    _DAT_027e3ff0 = 0;
    uRam00000000027e3ff8 = 0;
    _DAT_027e4000 = 0;
    uRam00000000027e4008 = 0;
    _DAT_027e4010 = 0;
    uRam00000000027e4018 = 0;
    _DAT_027e4020 = 0;
    uRam00000000027e4028 = 0;
    _DAT_027e4030 = 0;
    uRam00000000027e4038 = 0;
    _DAT_027e4040 = 0;
    uRam00000000027e4048 = 0;
    _DAT_027e4050 = 0;
    uRam00000000027e4058 = 0;
    _DAT_027e4060 = 0;
    uRam00000000027e4068 = 0;
    _DAT_027e4070 = 0;
    ___cxa_guard_release();
  }
  if (plVar10 == (longlong *)0x0) {
LAB_0193183b:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_0193183b;
  }
  plVar10 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    uVar8 = FUN_01d3b590();
    if ((uVar8 & 4) != 0) {
      (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                  *unaff_RDI + 0x20))();
      if (local_40 == (longlong *)0x0) {
        bVar5 = 0;
      }
      else {
        (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                    *unaff_RDI + 0x20))();
        bVar5 = (**(code **)(*local_50 + 0x50))();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          (**(code **)(*local_50 + 0x10))();
          FUN_00d50b20();
        }
        bVar5 = bVar5 ^ 1;
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      if (bVar5 != 0) {
        (**(code **)(&UNK_000017c0 + *unaff_RDI))();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_019320a8:
  local_138 = *unaff_RSI;
  local_130 = '\0';
  FUN_019d6f50();
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b08e50 — 2521 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b094bf) */
/* WARNING: Removing unreachable block (ram,0x01b091da) */
/* WARNING: Removing unreachable block (ram,0x01b091e6) */
/* WARNING: Removing unreachable block (ram,0x01b094cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b08e50(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  float fVar14;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar15 [8];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  longlong *local_38;
  char local_30;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar7 = *(float *)(unaff_RDI + 0x3f);
  auVar18 = ZEXT816(0);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    *(float *)((longlong)unaff_RDI + 0x1fc) = fVar7;
    *(undefined4 *)(unaff_RDI + 0x3f) = 0;
    local_48 = (undefined1  [8])FUN_01adabe0();
    _local_58 = auVar18;
    FUN_01adad50();
    auVar18 = _local_58;
    uVar8 = FUN_00d052e0();
    if (*(int *)((longlong)unaff_RDI + 0x284) != 0) {
      _local_58 = auVar18;
      local_48 = (undefined1  [8])uVar8;
      uVar8 = FUN_01e3f820();
      fVar7 = (float)uVar8;
      fVar12 = (float)((ulonglong)uVar8 >> 0x20);
      fVar13 = (float)extraout_XMM0_Qb;
      fVar14 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar3 == 3) {
        uStack_90._0_4_ = fVar13;
        local_98 = (undefined1  [8])uVar8;
        uStack_90._4_4_ = fVar14;
        _local_68 = auVar18;
        FUN_01e3f820();
        auVar17 = blendps(auVar18,_DAT_0241c700,0xd);
        iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
        auVar18 = _local_68;
        fVar7 = (float)local_98._0_4_;
        fVar12 = (float)local_98._4_4_;
        fVar13 = (float)uStack_90;
        fVar14 = uStack_90._4_4_;
      }
      else {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = DAT_023dccf4;
      }
      if ((iVar3 == 1) || (iVar3 == 0)) {
        auVar27._8_8_ = 0;
        auVar27._0_8_ = DAT_023dccf4;
        fVar23 = fVar7;
        fVar24 = fVar12;
        fVar25 = fVar13;
        fVar26 = fVar14;
      }
      else {
        local_98._4_4_ = fVar12;
        local_98._0_4_ = fVar7;
        uStack_90._0_4_ = fVar13;
        uStack_90._4_4_ = fVar14;
        auVar27 = _local_58;
        _local_68 = auVar18;
        FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar27 = blendps(auVar27,_DAT_0241c710,0xd);
        auVar18 = _local_68;
        fVar23 = (float)local_98._0_4_;
        fVar24 = (float)local_98._4_4_;
        fVar25 = (float)uStack_90;
        fVar26 = uStack_90._4_4_;
      }
      auVar19._0_4_ = auVar17._0_4_ + fVar7 + auVar27._0_4_;
      auVar19._4_4_ = auVar17._4_4_ + fVar12 + auVar27._4_4_;
      auVar19._8_4_ = auVar17._8_4_ + fVar13 + auVar27._8_4_;
      auVar19._12_4_ = auVar17._12_4_ + fVar14 + auVar27._12_4_;
      auVar1._4_4_ = fVar24;
      auVar1._0_4_ = fVar23;
      auVar1._8_4_ = fVar25;
      auVar1._12_4_ = fVar26;
      blendps(auVar19,auVar1,2);
      blendps(auVar18,_DAT_0241c720,0xd);
    }
    FUN_00d052e0();
                    /* WARNING: Could not recover jumptable at 0x01b090da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x618))();
    return;
  }
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 0;
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar4 + 0x18))();
  plVar6 = (longlong *)unaff_RDI[0x3d];
  if (plVar6 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3d] = (longlong)plVar4;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_50 = 0;
    local_58 = (undefined1  [8])DAT_023dccec;
    uStack_40 = 0;
    local_48 = (undefined1  [8])DAT_023dccf4;
  }
  else {
    auVar10._0_8_ = FUN_01e3f820();
    auVar10._8_8_ = extraout_XMM0_Qb_00;
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    _local_48 = auVar18;
    if (iVar3 == 3) {
      _local_68 = auVar10;
      FUN_01e3f820();
      auVar18 = blendps(auVar18,_DAT_0241c700,0xd);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      local_58._0_4_ = auVar18._0_4_ + local_68._0_4_;
      local_58._4_4_ = auVar18._4_4_ + local_68._4_4_;
      uStack_50._0_4_ = auVar18._8_4_ + local_68._8_4_;
      uStack_50._4_4_ = auVar18._12_4_ + local_68._12_4_;
      auVar10 = _local_68;
      auVar18 = _local_48;
      if (iVar3 == 1) goto LAB_01b090f4;
LAB_01b090f0:
      _local_48 = auVar18;
      if (iVar3 == 0) goto LAB_01b090f4;
      _local_68 = auVar10;
      FUN_01e3f820();
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        _local_98 = auVar18;
        FUN_01e3f820();
        auVar18 = _local_98;
      }
      auVar18 = blendps(auVar18,_DAT_0241c710,0xd);
      auVar10 = _local_68;
    }
    else {
      local_58._0_4_ = (float)DAT_023dccf4 + (float)auVar10._0_8_;
      local_58._4_4_ = (float)(DAT_023dccf4 >> 0x20) + (float)((ulonglong)auVar10._0_8_ >> 0x20);
      uStack_50._0_4_ = (float)extraout_XMM0_Qb_00 + 0.0;
      uStack_50._4_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) + 0.0;
      if (iVar3 != 1) goto LAB_01b090f0;
LAB_01b090f4:
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_023dccf4;
    }
    auVar20._0_4_ = (float)local_58._0_4_ + auVar18._0_4_;
    auVar20._4_4_ = (float)local_58._4_4_ + auVar18._4_4_;
    auVar20._8_4_ = (float)uStack_50 + auVar18._8_4_;
    auVar20._12_4_ = uStack_50._4_4_ + auVar18._12_4_;
    _local_58 = blendps(auVar20,auVar10,2);
    _local_48 = blendps(_local_48,_DAT_0241c720,0xd);
  }
  FUN_01adad50();
  auVar18 = _local_48;
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_01;
  if (DAT_0241c6ec < auVar18._4_4_) {
    auVar18 = insertps(auVar18,ZEXT416((uint)DAT_0241c6ec),0x10);
  }
  _local_58 = auVar18;
  FUN_01d4eaa0();
  FUN_01d52700();
  FUN_01e42030();
  plVar6 = local_38;
  if ((((local_30 == '\0') && (local_38 != (longlong *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01e49120();
  uStack_40 = extraout_XMM0_Qb_02;
  FUN_01d52740();
  (**(code **)(*local_38 + 0x368))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_88 = local_38;
  local_80 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_80 = '\x01';
  auVar15 = local_58;
  uVar8 = uStack_50;
  (**(code **)(*plVar6 + 0x610))();
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 1;
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  plVar4 = (longlong *)unaff_RDI[0x3e];
  if (plVar4 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3e] = (longlong)plVar5;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_40 = 0;
    local_48 = (undefined1  [8])DAT_023dccec;
    uStack_50 = 0;
    local_58 = (undefined1  [8])DAT_023dccf4;
  }
  else {
    local_68 = (undefined1  [8])FUN_01e3f820();
    uStack_60 = extraout_XMM0_Qb_03;
    uStack_50 = uVar8;
    local_58 = auVar15;
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar3 == 3) {
      FUN_01e3f820();
      uStack_40 = uVar8;
      local_48 = auVar15;
      _local_48 = blendps(_local_48,_DAT_0241c700,0xd);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar3 == 1) goto LAB_01b093e2;
LAB_01b093de:
      if (iVar3 == 0) goto LAB_01b093e2;
      FUN_01e3f820();
      uStack_90 = uVar8;
      local_98 = auVar15;
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar21 = blendps(_local_98,_DAT_0241c710,0xd);
    }
    else {
      uStack_40 = 0;
      local_48 = (undefined1  [8])DAT_023dccf4;
      if (iVar3 != 1) goto LAB_01b093de;
LAB_01b093e2:
      auVar21._8_8_ = 0;
      auVar21._0_8_ = DAT_023dccf4;
    }
    auVar11._0_4_ = (float)local_48._0_4_ + local_68._0_4_ + auVar21._0_4_;
    auVar11._4_4_ = (float)local_48._4_4_ + local_68._4_4_ + auVar21._4_4_;
    auVar11._8_4_ = (float)uStack_40 + local_68._8_4_ + auVar21._8_4_;
    auVar11._12_4_ = uStack_40._4_4_ + local_68._12_4_ + auVar21._12_4_;
    _local_48 = blendps(auVar11,_local_68,2);
    _local_58 = blendps(_local_58,_DAT_0241c720,0xd);
  }
  FUN_01adad50();
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_04;
  if (DAT_0241c6ec < local_58._4_4_) {
    _local_58 = insertps(_local_58,ZEXT416((uint)DAT_0241c6ec),0x10);
  }
  FUN_01d4eaa0();
  FUN_01d52700();
  FUN_01e42030();
  if (plVar6 == local_38) {
LAB_01b0951d:
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01b0951d;
    }
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01e49120();
  uStack_40 = extraout_XMM0_Qb_05;
  FUN_01d52740();
  (**(code **)(*local_38 + 0x368))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_78 = local_38;
  local_70 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_70 = '\x01';
  auVar15 = local_58;
  uVar8 = uStack_50;
  (**(code **)(*plVar6 + 0x610))();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  *(undefined4 *)((longlong)unaff_RDI + 0x1fc) = 0x3f800000;
  FUN_01f27fe0();
  local_a0 = 0;
  (**(code **)(unaff_RDI[0x2d] + 0x10))();
  uVar9 = FUN_00d50b00();
  local_a0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_a8 = unaff_RDI + 0x2d;
  FUN_01f47190(uVar9,&local_b8);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    (**(code **)(*local_a8 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01adabe0();
  local_58 = auVar15;
  uStack_50 = uVar8;
  FUN_01adad50();
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_06;
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) goto LAB_01b097f7;
  local_e8._0_8_ = local_58;
  local_e8._8_8_ = uStack_50;
  uVar8 = FUN_01e3f820();
  fStack_f0 = (float)extraout_XMM0_Qb_07;
  fStack_ec = (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
  uStack_90 = local_e8._8_8_;
  local_98 = (undefined1  [8])local_e8._0_8_;
  iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
  if (iVar3 == 3) {
    FUN_01e3f820();
    uStack_60 = local_e8._8_8_;
    local_68 = (undefined1  [8])local_e8._0_8_;
    _local_68 = blendps(_local_68,_DAT_0241c700,0xd);
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar3 == 1) goto LAB_01b0978e;
LAB_01b0978a:
    if (iVar3 == 0) goto LAB_01b0978e;
    FUN_01e3f820();
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      FUN_01e3f820();
    }
    auVar16 = blendps(local_e8,_DAT_0241c710,0xd);
  }
  else {
    uStack_60 = 0;
    local_68 = (undefined1  [8])DAT_023dccf4;
    if (iVar3 != 1) goto LAB_01b0978a;
LAB_01b0978e:
    auVar16._8_8_ = 0;
    auVar16._0_8_ = DAT_023dccf4;
  }
  auVar2._8_4_ = fStack_f0;
  auVar2._0_8_ = uVar8;
  auVar2._12_4_ = fStack_ec;
  auVar22._0_4_ = (float)local_68._0_4_ + (float)uVar8 + auVar16._0_4_;
  auVar22._4_4_ = (float)local_68._4_4_ + (float)((ulonglong)uVar8 >> 0x20) + auVar16._4_4_;
  auVar22._8_4_ = (float)uStack_60 + fStack_f0 + auVar16._8_4_;
  auVar22._12_4_ = uStack_60._4_4_ + fStack_ec + auVar16._12_4_;
  blendps(auVar22,auVar2,2);
  blendps(_local_98,_DAT_0241c720,0xd);
LAB_01b097f7:
  FUN_00d052e0();
  (**(code **)(*unaff_RDI + 0x618))();
  FUN_00d50b20();
  return;
}




// ============================================================
// @01af7060 — 2466 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01af768f) */
/* WARNING: Removing unreachable block (ram,0x01af73c7) */
/* WARNING: Removing unreachable block (ram,0x01af73d3) */
/* WARNING: Removing unreachable block (ram,0x01af769b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01af7060(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar12;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  float fVar14;
  undefined1 auVar10 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined1 auVar11 [16];
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined1 auVar15 [8];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [16];
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined1 local_48 [8];
  undefined8 uStack_40;
  longlong *local_38;
  char local_30;
  undefined8 extraout_XMM0_Qb_00;
  
  fVar7 = *(float *)((longlong)unaff_RDI + 0x1fc);
  auVar18 = ZEXT816(0);
  if ((fVar7 != 0.0) || (NAN(fVar7))) {
    *(float *)(unaff_RDI + 0x3f) = fVar7;
    *(undefined4 *)((longlong)unaff_RDI + 0x1fc) = 0;
    local_48 = (undefined1  [8])FUN_01adabe0();
    _local_58 = auVar18;
    FUN_01adad50();
    auVar18 = _local_58;
    uVar8 = FUN_00d052e0();
    if (*(int *)((longlong)unaff_RDI + 0x284) != 0) {
      _local_58 = auVar18;
      local_48 = (undefined1  [8])uVar8;
      uVar8 = FUN_01e3f820();
      fVar7 = (float)uVar8;
      fVar12 = (float)((ulonglong)uVar8 >> 0x20);
      fVar13 = (float)extraout_XMM0_Qb;
      fVar14 = (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar3 == 3) {
        uStack_90._0_4_ = fVar13;
        local_98 = (undefined1  [8])uVar8;
        uStack_90._4_4_ = fVar14;
        _local_68 = auVar18;
        FUN_01e3f820();
        auVar17 = blendps(auVar18,_DAT_0241c700,0xd);
        iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
        auVar18 = _local_68;
        fVar7 = (float)local_98._0_4_;
        fVar12 = (float)local_98._4_4_;
        fVar13 = (float)uStack_90;
        fVar14 = uStack_90._4_4_;
      }
      else {
        auVar17._8_8_ = 0;
        auVar17._0_8_ = DAT_023dccf4;
      }
      if ((iVar3 == 1) || (iVar3 == 0)) {
        auVar27._8_8_ = 0;
        auVar27._0_8_ = DAT_023dccf4;
        fVar23 = fVar7;
        fVar24 = fVar12;
        fVar25 = fVar13;
        fVar26 = fVar14;
      }
      else {
        local_98._4_4_ = fVar12;
        local_98._0_4_ = fVar7;
        uStack_90._0_4_ = fVar13;
        uStack_90._4_4_ = fVar14;
        auVar27 = _local_58;
        _local_68 = auVar18;
        FUN_01e3f820();
        if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
          FUN_01e3f820();
        }
        auVar27 = blendps(auVar27,_DAT_0241c710,0xd);
        auVar18 = _local_68;
        fVar23 = (float)local_98._0_4_;
        fVar24 = (float)local_98._4_4_;
        fVar25 = (float)uStack_90;
        fVar26 = uStack_90._4_4_;
      }
      auVar19._0_4_ = auVar17._0_4_ + fVar7 + auVar27._0_4_;
      auVar19._4_4_ = auVar17._4_4_ + fVar12 + auVar27._4_4_;
      auVar19._8_4_ = auVar17._8_4_ + fVar13 + auVar27._8_4_;
      auVar19._12_4_ = auVar17._12_4_ + fVar14 + auVar27._12_4_;
      auVar1._4_4_ = fVar24;
      auVar1._0_4_ = fVar23;
      auVar1._8_4_ = fVar25;
      auVar1._12_4_ = fVar26;
      blendps(auVar19,auVar1,2);
      blendps(auVar18,_DAT_0241c720,0xd);
    }
    FUN_00d052e0();
                    /* WARNING: Could not recover jumptable at 0x01af72e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_RDI + 0x618))();
    return;
  }
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar4 + 0x18))();
  plVar6 = (longlong *)unaff_RDI[0x3d];
  if (plVar6 == plVar4) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3d] = (longlong)plVar4;
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_50 = 0;
    local_58 = (undefined1  [8])DAT_023dccec;
    uStack_40 = 0;
    local_48 = (undefined1  [8])DAT_023dccf4;
  }
  else {
    auVar10._0_8_ = FUN_01e3f820();
    auVar10._8_8_ = extraout_XMM0_Qb_00;
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    _local_48 = auVar18;
    if (iVar3 == 3) {
      _local_68 = auVar10;
      FUN_01e3f820();
      auVar18 = blendps(auVar18,_DAT_0241c700,0xd);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      local_58._0_4_ = auVar18._0_4_ + local_68._0_4_;
      local_58._4_4_ = auVar18._4_4_ + local_68._4_4_;
      uStack_50._0_4_ = auVar18._8_4_ + local_68._8_4_;
      uStack_50._4_4_ = auVar18._12_4_ + local_68._12_4_;
      auVar10 = _local_68;
      auVar18 = _local_48;
      if (iVar3 == 1) goto LAB_01af72fb;
LAB_01af72f7:
      _local_48 = auVar18;
      if (iVar3 == 0) goto LAB_01af72fb;
      _local_68 = auVar10;
      FUN_01e3f820();
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        _local_98 = auVar18;
        FUN_01e3f820();
        auVar18 = _local_98;
      }
      auVar18 = blendps(auVar18,_DAT_0241c710,0xd);
      auVar10 = _local_68;
    }
    else {
      local_58._0_4_ = (float)DAT_023dccf4 + (float)auVar10._0_8_;
      local_58._4_4_ = (float)(DAT_023dccf4 >> 0x20) + (float)((ulonglong)auVar10._0_8_ >> 0x20);
      uStack_50._0_4_ = (float)extraout_XMM0_Qb_00 + 0.0;
      uStack_50._4_4_ = (float)((ulonglong)extraout_XMM0_Qb_00 >> 0x20) + 0.0;
      if (iVar3 != 1) goto LAB_01af72f7;
LAB_01af72fb:
      auVar18._8_8_ = 0;
      auVar18._0_8_ = DAT_023dccf4;
    }
    auVar20._0_4_ = (float)local_58._0_4_ + auVar18._0_4_;
    auVar20._4_4_ = (float)local_58._4_4_ + auVar18._4_4_;
    auVar20._8_4_ = (float)uStack_50 + auVar18._8_4_;
    auVar20._12_4_ = uStack_50._4_4_ + auVar18._12_4_;
    _local_58 = blendps(auVar20,auVar10,2);
    _local_48 = blendps(_local_48,_DAT_0241c720,0xd);
  }
  FUN_01adad50();
  auVar15 = local_48;
  uVar8 = uStack_40;
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_01;
  uStack_50 = uVar8;
  local_58 = auVar15;
  FUN_01d4eaa0();
  FUN_01d52700();
  FUN_01e42030();
  plVar6 = local_38;
  if ((((local_30 == '\0') && (local_38 != (longlong *)0x0)) && (FUN_00d50b00(), local_30 != '\0'))
     && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01e49120();
  uStack_40 = extraout_XMM0_Qb_02;
  FUN_01d52740();
  (**(code **)(*local_38 + 0x368))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_88 = local_38;
  local_80 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_80 = '\x01';
  auVar15 = local_58;
  uVar8 = uStack_50;
  (**(code **)(*plVar6 + 0x610))();
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 1;
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00152930();
  (**(code **)(*plVar5 + 0x18))();
  plVar4 = (longlong *)unaff_RDI[0x3e];
  if (plVar4 == plVar5) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x3e] = (longlong)plVar5;
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) {
    uStack_40 = 0;
    local_48 = (undefined1  [8])DAT_023dccec;
    uStack_50 = 0;
    local_58 = (undefined1  [8])DAT_023dccf4;
  }
  else {
    local_68 = (undefined1  [8])FUN_01e3f820();
    uStack_60 = extraout_XMM0_Qb_03;
    uStack_50 = uVar8;
    local_58 = auVar15;
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar3 == 3) {
      FUN_01e3f820();
      uStack_40 = uVar8;
      local_48 = auVar15;
      _local_48 = blendps(_local_48,_DAT_0241c700,0xd);
      iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
      if (iVar3 == 1) goto LAB_01af75cf;
LAB_01af75cb:
      if (iVar3 == 0) goto LAB_01af75cf;
      FUN_01e3f820();
      uStack_90 = uVar8;
      local_98 = auVar15;
      if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
        FUN_01e3f820();
      }
      auVar21 = blendps(_local_98,_DAT_0241c710,0xd);
    }
    else {
      uStack_40 = 0;
      local_48 = (undefined1  [8])DAT_023dccf4;
      if (iVar3 != 1) goto LAB_01af75cb;
LAB_01af75cf:
      auVar21._8_8_ = 0;
      auVar21._0_8_ = DAT_023dccf4;
    }
    auVar11._0_4_ = (float)local_48._0_4_ + local_68._0_4_ + auVar21._0_4_;
    auVar11._4_4_ = (float)local_48._4_4_ + local_68._4_4_ + auVar21._4_4_;
    auVar11._8_4_ = (float)uStack_40 + local_68._8_4_ + auVar21._8_4_;
    auVar11._12_4_ = uStack_40._4_4_ + local_68._12_4_ + auVar21._12_4_;
    _local_48 = blendps(auVar11,_local_68,2);
    _local_58 = blendps(_local_58,_DAT_0241c720,0xd);
  }
  FUN_01adad50();
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_04;
  FUN_01d4eaa0();
  FUN_01d52700();
  FUN_01e42030();
  if (plVar6 == local_38) {
LAB_01af76ed:
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    plVar6 = local_38;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      goto LAB_01af76ed;
    }
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01e49120();
  uStack_40 = extraout_XMM0_Qb_05;
  FUN_01d52740();
  (**(code **)(*local_38 + 0x368))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52740();
  local_78 = local_38;
  local_70 = 0;
  if (local_30 == '\0') {
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  local_70 = '\x01';
  auVar15 = local_58;
  uVar8 = uStack_50;
  (**(code **)(*plVar6 + 0x610))();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d52770();
  if (unaff_RSI != (undefined1 *)0x0) {
    *unaff_RSI = 0;
  }
  *(undefined4 *)(unaff_RDI + 0x3f) = 0x3f800000;
  FUN_01f27fe0();
  local_a0 = 0;
  (**(code **)(unaff_RDI[0x2d] + 0x10))();
  uVar9 = FUN_00d50b00();
  local_a0 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_a8 = unaff_RDI + 0x2d;
  FUN_01f47190(uVar9,&local_b8);
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    (**(code **)(*local_a8 + 0x10))();
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (undefined1  [8])FUN_01adabe0();
  local_58 = auVar15;
  uStack_50 = uVar8;
  FUN_01adad50();
  local_48 = (undefined1  [8])FUN_00d052e0();
  uStack_40 = extraout_XMM0_Qb_06;
  if (*(int *)((longlong)unaff_RDI + 0x284) == 0) goto LAB_01af79d0;
  local_e8._0_8_ = local_58;
  local_e8._8_8_ = uStack_50;
  uVar8 = FUN_01e3f820();
  fStack_f0 = (float)extraout_XMM0_Qb_07;
  fStack_ec = (float)((ulonglong)extraout_XMM0_Qb_07 >> 0x20);
  uStack_90 = local_e8._8_8_;
  local_98 = (undefined1  [8])local_e8._0_8_;
  iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
  if (iVar3 == 3) {
    FUN_01e3f820();
    uStack_60 = local_e8._8_8_;
    local_68 = (undefined1  [8])local_e8._0_8_;
    _local_68 = blendps(_local_68,_DAT_0241c700,0xd);
    iVar3 = *(int *)((longlong)unaff_RDI + 0x284);
    if (iVar3 == 1) goto LAB_01af7967;
LAB_01af7963:
    if (iVar3 == 0) goto LAB_01af7967;
    FUN_01e3f820();
    if (*(int *)((longlong)unaff_RDI + 0x284) == 3) {
      FUN_01e3f820();
    }
    auVar16 = blendps(local_e8,_DAT_0241c710,0xd);
  }
  else {
    uStack_60 = 0;
    local_68 = (undefined1  [8])DAT_023dccf4;
    if (iVar3 != 1) goto LAB_01af7963;
LAB_01af7967:
    auVar16._8_8_ = 0;
    auVar16._0_8_ = DAT_023dccf4;
  }
  auVar2._8_4_ = fStack_f0;
  auVar2._0_8_ = uVar8;
  auVar2._12_4_ = fStack_ec;
  auVar22._0_4_ = (float)local_68._0_4_ + (float)uVar8 + auVar16._0_4_;
  auVar22._4_4_ = (float)local_68._4_4_ + (float)((ulonglong)uVar8 >> 0x20) + auVar16._4_4_;
  auVar22._8_4_ = (float)uStack_60 + fStack_f0 + auVar16._8_4_;
  auVar22._12_4_ = uStack_60._4_4_ + fStack_ec + auVar16._12_4_;
  blendps(auVar22,auVar2,2);
  blendps(_local_98,_DAT_0241c720,0xd);
LAB_01af79d0:
  FUN_00d052e0();
  (**(code **)(*unaff_RDI + 0x618))();
  FUN_00d50b20();
  return;
}




// ============================================================
// @001c7610 — 2039 bytes
// str: ""GNEvent""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c7610(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02680778;
  *(undefined4 *)((longlong)unaff_RDI + 0xc) = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c7e80();
    FUN_00e87980();
  }
  FUN_001c8140();
  FUN_001c83c0();
  *(undefined4 *)(unaff_RDI + 4) = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c8640();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c87b0();
    FUN_00e87980();
  }
  unaff_RDI[5] = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c89e0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 6) = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c8b50();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x34) = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c8cc0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 7) = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c8ef0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x3c) = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c9060();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 8) = 0;
  if (DAT_026ec420 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e3fc8 = FUN_00d4fe50();
      _DAT_027e3fb0 = "GNEvent";
      _DAT_027e3fb8 = 0x50;
      _DAT_027e3fc0 = FUN_001c75c0;
      _DAT_027e3fd0 = 0;
      uRam00000000027e3fd8 = 0;
      _DAT_027e3fe0 = 0;
      uRam00000000027e3fe8 = 0;
      _DAT_027e3ff0 = 0;
      uRam00000000027e3ff8 = 0;
      _DAT_027e4000 = 0;
      uRam00000000027e4008 = 0;
      _DAT_027e4010 = 0;
      uRam00000000027e4018 = 0;
      _DAT_027e4020 = 0;
      uRam00000000027e4028 = 0;
      _DAT_027e4030 = 0;
      uRam00000000027e4038 = 0;
      _DAT_027e4040 = 0;
      uRam00000000027e4048 = 0;
      _DAT_027e4050 = 0;
      uRam00000000027e4058 = 0;
      _DAT_027e4060 = 0;
      _uRam00000000027e4068 = 0;
      _DAT_027e4070 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e406b == '\0') {
    FUN_001c91d0();
    FUN_00e87980();
  }
  unaff_RDI[9] = *(undefined8 *)(unaff_RSI + 0x48);
  return;
}




// ============================================================
// @01b09b80 — 985 bytes
// str: ""GNEvent""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b09cb0) */
/* WARNING: Removing unreachable block (ram,0x01b09cb9) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b09b80(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *unaff_RDI;
  longlong **pplVar5;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e3b40;
  if (DAT_027e3b40 != 0) {
    FUN_00d50b00();
  }
  cVar3 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026fce70;
  if (cVar3 == '\0') {
    if (DAT_026fce70 != 0) {
      FUN_00d50b00();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027f1430;
    if (cVar3 == '\0') {
      if (DAT_027f1430 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e3bc0;
      if (cVar3 != '\0') {
        pplVar5 = &local_40;
        FUN_00d3ecf0();
        plVar1 = local_40;
        if ((DAT_026ec420 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          _DAT_027e3fc8 = FUN_00d4fe50();
          _DAT_027e3fb0 = "GNEvent";
          _DAT_027e3fb8 = 0x50;
          _DAT_027e3fc0 = FUN_001c75c0;
          _DAT_027e3fd0 = 0;
          uRam00000000027e3fd8 = 0;
          _DAT_027e3fe0 = 0;
          uRam00000000027e3fe8 = 0;
          _DAT_027e3ff0 = 0;
          uRam00000000027e3ff8 = 0;
          _DAT_027e4000 = 0;
          uRam00000000027e4008 = 0;
          _DAT_027e4010 = 0;
          uRam00000000027e4018 = 0;
          _DAT_027e4020 = 0;
          uRam00000000027e4028 = 0;
          _DAT_027e4030 = 0;
          uRam00000000027e4038 = 0;
          _DAT_027e4040 = 0;
          uRam00000000027e4048 = 0;
          _DAT_027e4050 = 0;
          uRam00000000027e4058 = 0;
          _DAT_027e4060 = 0;
          uRam00000000027e4068 = 0;
          _DAT_027e4070 = 0;
          ___cxa_guard_release();
        }
        if (plVar1 == (longlong *)0x0) {
LAB_01b09d62:
          pplVar5 = (longlong **)&DAT_02802688;
        }
        else {
          (**(code **)(*plVar1 + 0x360))();
          cVar3 = FUN_00e85ea0();
          if (cVar3 == '\0') goto LAB_01b09d62;
        }
        plVar1 = *pplVar5;
        if (*(char *)(pplVar5 + 1) == '\0') {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar5 + 1) = 0;
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_01aefa80();
          FUN_00d50b20();
        }
        goto LAB_01b09cbe;
      }
      if (DAT_027e3bc0 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027e3b30;
      if (cVar3 != '\0') {
        FUN_01adabe0();
        (**(code **)(*unaff_RDI + 0x618))();
        goto LAB_01b09cbe;
      }
      if (DAT_027e3b30 != 0) {
        FUN_00d50b00();
      }
      cVar3 = (**(code **)(*plVar1 + 0x50))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (cVar3 != '\0') {
        if (unaff_RDI[0x57] != 0) {
          unaff_RDI[0x57] = 0;
          FUN_00d50b20();
        }
        FUN_01adad50();
        (**(code **)(*unaff_RDI + 0x618))();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x620))();
      FUN_01ad48c0();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x620))();
  }
  FUN_01a21920();
LAB_01b09cbe:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01b0a160 — 793 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b0a2e3) */
/* WARNING: Removing unreachable block (ram,0x01b0a2ec) */
/* WARNING: Removing unreachable block (ram,0x01b0a1a4) */
/* WARNING: Removing unreachable block (ram,0x01b0a1ad) */
/* WARNING: Removing unreachable block (ram,0x01b0a1fe) */
/* WARNING: Removing unreachable block (ram,0x01b0a207) */
/* WARNING: Removing unreachable block (ram,0x01b0a3eb) */
/* WARNING: Removing unreachable block (ram,0x01b0a3f7) */
/* WARNING: Removing unreachable block (ram,0x01b0a330) */
/* WARNING: Removing unreachable block (ram,0x01b0a350) */
/* WARNING: Removing unreachable block (ram,0x01b0a332) */
/* WARNING: Removing unreachable block (ram,0x01b0a352) */

longlong * FUN_01b0a160(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  pthread_key_t pVar7;
  longlong local_a8;
  char local_a0;
  longlong *local_88;
  char local_80;
  longlong local_58;
  char local_50;
  int local_40;
  
  FUN_01a1d6e0();
  if (local_80 == '\0') {
    if (local_88 == (longlong *)0x0) goto LAB_01b0a1d6;
    FUN_00d50b00();
  }
  else if (local_88 == (longlong *)0x0) {
LAB_01b0a1d6:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  (**(code **)(*local_88 + 0x988))();
  if (local_80 == '\0') {
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b0a20c;
    }
  }
  else if (local_88 != (longlong *)0x0) {
LAB_01b0a20c:
    if (0 < *(int *)((longlong)local_88 + 0xc)) {
      pVar7 = 0;
      do {
        lVar4 = local_58;
        pvVar5 = _pthread_getspecific(pVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e5ae0();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
            goto LAB_01b0a2f4;
          }
        }
        else if (local_58 != 0) {
LAB_01b0a2f4:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          do {
            while( true ) {
              lVar6 = (longlong)local_40;
              local_40 = local_40 + 1;
              iVar1 = *(int *)(lVar4 + 0xc);
              if (iVar1 <= local_40) goto LAB_01b0a40e;
              lVar2 = *(longlong *)(lVar4 + 0x10);
              local_58 = *(longlong *)(lVar2 + 8 + lVar6 * 8);
              pvVar5 = _pthread_getspecific((pthread_key_t)lVar2);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01264240();
              if (local_a0 == '\0') break;
              if (local_a8 != 0) goto LAB_01b0a400;
            }
          } while (local_a8 == 0);
          FUN_00d50b00();
LAB_01b0a400:
          *unaff_RDI = local_a8;
          *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01b0a40e:
          FUN_001159b0();
          FUN_00d50b20();
          if (local_40 < iVar1) {
            FUN_000be170();
            bVar3 = true;
            goto LAB_01b0a446;
          }
        }
        pVar7 = pVar7 + 1;
      } while ((int)pVar7 < *(int *)((longlong)local_88 + 0xc));
    }
    FUN_000be170();
    bVar3 = false;
LAB_01b0a446:
    FUN_00d50b20();
    if (bVar3) goto LAB_01b0a46e;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01b0a46e:
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @001c7e80 — 660 bytes
// str: ""_type""
// str: ""GNEvent""
// str: ""GNEventType""
// str: ""=GNTextInputEvent""
// str: ""=GNMagnifyEvent""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001c7e80(void)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_026ec518 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ec4e0 = _DAT_0238fcc0;
      uRam00000000026ec4e8 = _UNK_0238fcc8;
      _DAT_026ec4f0 = _DAT_0238ff10;
      uRam00000000026ec4f4 = _UNK_0238ff14;
      uRam00000000026ec4f8 = _UNK_0238ff18;
      uRam00000000026ec4fc = _UNK_0238ff1c;
      _DAT_026ec500 = 0x900000008;
      bVar2 = *DAT_026ec4c0 == '=';
      _DAT_026ec508 = (uint)bVar2 * 4 + 10;
      iVar1 = (uint)bVar2 * 4 + 0xb;
      _DAT_026ec50c = 0xf;
      if (*DAT_026ec4c8 != '=') {
        _DAT_026ec50c = iVar1;
      }
      _DAT_026ec510 = 0x10;
      if (*DAT_026ec4d0 != '=') {
        _DAT_026ec510 = _DAT_026ec50c + 1;
      }
      DAT_026ec514 = (_DAT_026ec50c == iVar1 && _DAT_026ec510 == _DAT_026ec50c + 1) && !bVar2;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ec550 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ec520 = "GNEventType";
      _DAT_026ec528 = 0xd;
      DAT_026ec52c = DAT_026ec514;
      _DAT_026ec530 = &DAT_026ec4e0;
      _DAT_026ec538 = &DAT_026ec470;
      DAT_026ec540 = 0;
      uRam00000000026ec548 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026ec468 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ec420 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e3fc8 = FUN_00d4fe50();
          _DAT_027e3fb0 = "GNEvent";
          _DAT_027e3fb8 = 0x50;
          _DAT_027e3fc0 = FUN_001c75c0;
          _DAT_027e3fd0 = 0;
          uRam00000000027e3fd8 = 0;
          _DAT_027e3fe0 = 0;
          uRam00000000027e3fe8 = 0;
          _DAT_027e3ff0 = 0;
          uRam00000000027e3ff8 = 0;
          _DAT_027e4000 = 0;
          uRam00000000027e4008 = 0;
          _DAT_027e4010 = 0;
          uRam00000000027e4018 = 0;
          _DAT_027e4020 = 0;
          uRam00000000027e4028 = 0;
          _DAT_027e4030 = 0;
          uRam00000000027e4038 = 0;
          _DAT_027e4040 = 0;
          uRam00000000027e4048 = 0;
          _DAT_027e4050 = 0;
          uRam00000000027e4058 = 0;
          _DAT_027e4060 = 0;
          uRam00000000027e4068 = 0;
          _DAT_027e4070 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026ec428 = "_type";
      _DAT_026ec430 = &DAT_027e3fb0;
      _DAT_026ec438 = 0;
      _DAT_026ec440 = 0x6500;
      _DAT_026ec448 = "GNEventType";
      _DAT_026ec450 = &DAT_026ec520;
      _DAT_026ec458 = 0;
      uRam00000000026ec460 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026ec428;
}




// ============================================================
// @01b0a620 — 544 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b0a69c) */
/* WARNING: Removing unreachable block (ram,0x01b0a6a5) */
/* WARNING: Removing unreachable block (ram,0x01b0a748) */
/* WARNING: Removing unreachable block (ram,0x01b0a751) */

void FUN_01b0a620(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  longlong local_40;
  char local_38;
  
  lVar3 = DAT_028b3fb0;
  if ((DAT_028b3fb0 == 0) || (DAT_028b3fb9 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b3fb0 == 0) {
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar3 = DAT_028b3fb0;
      if ((DAT_028b3fb0 != local_40) && (DAT_028b3fb0 = local_40, lVar3 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        if (DAT_028b3fb8 == '\0') {
          DAT_028b3fb8 = '\x01';
          FUN_00e8cb90();
        }
        if (local_40 != 0 && lVar3 == local_40) {
          FUN_00d50b20();
        }
      }
      FUN_00c8e690();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      ___bzero();
      lVar3 = 2;
      do {
        lVar2 = DAT_028b3fb0;
        iVar1 = *(int *)(DAT_028b3fb0 + 0x18);
        FUN_00c8e340();
        *(int *)(*(longlong *)(lVar2 + 0x10) + (longlong)iVar1) = (int)lVar3;
        lVar2 = *(longlong *)(local_40 + 0x10);
        lVar3 = (longlong)(int)lVar3;
        lVar4 = lVar3;
        do {
          *(undefined1 *)(lVar2 + lVar4) = 1;
          lVar4 = lVar4 + lVar3;
        } while (lVar4 < 1000);
        while (*(char *)(*(longlong *)(local_40 + 0x10) + lVar3) != '\0') {
          lVar3 = lVar3 + 1;
          if (lVar3 == 1000) goto LAB_01b0a7ed;
        }
      } while ((int)lVar3 < 1000);
LAB_01b0a7ed:
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      DAT_028b3fb9 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b3fb9 = '\x01';
      FUN_00e8cb70();
    }
    lVar3 = DAT_028b3fb0;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar3 == 0) {
      lVar3 = 0;
      goto LAB_01b0a820;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_01b0a820:
  *unaff_RDI = lVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @001c87b0 — 522 bytes
// str: ""GNEvent""
// str: ""GNMouseWheelAxis""
// str: ""_mouseWheelAxis""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001c87b0(void)

{
  int iVar1;
  
  if (DAT_026ec6a8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ec698 = 0x100000000;
      DAT_026ec6a0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ec6e0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ec6b0 = "GNMouseWheelAxis";
      _DAT_026ec6b8 = 2;
      DAT_026ec6bc = DAT_026ec6a0;
      _DAT_026ec6c0 = &DAT_026ec698;
      _DAT_026ec6c8 = &DAT_026ec680;
      _DAT_026ec6d0 = 0;
      uRam00000000026ec6d8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026ec670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ec420 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e3fc8 = FUN_00d4fe50();
          _DAT_027e3fb0 = "GNEvent";
          _DAT_027e3fb8 = 0x50;
          _DAT_027e3fc0 = FUN_001c75c0;
          _DAT_027e3fd0 = 0;
          uRam00000000027e3fd8 = 0;
          _DAT_027e3fe0 = 0;
          uRam00000000027e3fe8 = 0;
          _DAT_027e3ff0 = 0;
          uRam00000000027e3ff8 = 0;
          _DAT_027e4000 = 0;
          uRam00000000027e4008 = 0;
          _DAT_027e4010 = 0;
          uRam00000000027e4018 = 0;
          _DAT_027e4020 = 0;
          uRam00000000027e4028 = 0;
          _DAT_027e4030 = 0;
          uRam00000000027e4038 = 0;
          _DAT_027e4040 = 0;
          uRam00000000027e4048 = 0;
          _DAT_027e4050 = 0;
          uRam00000000027e4058 = 0;
          _DAT_027e4060 = 0;
          uRam00000000027e4068 = 0;
          _DAT_027e4070 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026ec630 = "_mouseWheelAxis";
      _DAT_026ec638 = &DAT_027e3fb0;
      _DAT_026ec640 = 0;
      _DAT_026ec648 = 0x6501;
      _DAT_026ec650 = "GNMouseWheelAxis";
      _DAT_026ec658 = &DAT_026ec6b0;
      _DAT_026ec660 = 0;
      uRam00000000026ec668 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026ec630;
}




// ============================================================
// @001c8cc0 — 519 bytes
// str: ""GNEvent""
// str: ""GNMouseButton""
// str: ""_mouseButton""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001c8cc0(void)

{
  int iVar1;
  
  if (DAT_026ec808 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ec7f0 = _DAT_0238fcc0;
      uRam00000000026ec7f4 = _UNK_0238fcc4;
      uRam00000000026ec7f8 = _UNK_0238fcc8;
      uRam00000000026ec7fc = _UNK_0238fccc;
      DAT_026ec800 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026ec840 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026ec810 = "GNMouseButton";
      _DAT_026ec818 = 4;
      DAT_026ec81c = DAT_026ec800;
      _DAT_026ec820 = &DAT_026ec7f0;
      _DAT_026ec828 = &DAT_026ec7c0;
      _DAT_026ec830 = 0;
      uRam00000000026ec838 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026ec7b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026ec420 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e3fc8 = FUN_00d4fe50();
          _DAT_027e3fb0 = "GNEvent";
          _DAT_027e3fb8 = 0x50;
          _DAT_027e3fc0 = FUN_001c75c0;
          _DAT_027e3fd0 = 0;
          uRam00000000027e3fd8 = 0;
          _DAT_027e3fe0 = 0;
          uRam00000000027e3fe8 = 0;
          _DAT_027e3ff0 = 0;
          uRam00000000027e3ff8 = 0;
          _DAT_027e4000 = 0;
          uRam00000000027e4008 = 0;
          _DAT_027e4010 = 0;
          uRam00000000027e4018 = 0;
          _DAT_027e4020 = 0;
          uRam00000000027e4028 = 0;
          _DAT_027e4030 = 0;
          uRam00000000027e4038 = 0;
          _DAT_027e4040 = 0;
          uRam00000000027e4048 = 0;
          _DAT_027e4050 = 0;
          uRam00000000027e4058 = 0;
          _DAT_027e4060 = 0;
          uRam00000000027e4068 = 0;
          _DAT_027e4070 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026ec778 = "_mouseButton";
      _DAT_026ec780 = &DAT_027e3fb0;
      _DAT_026ec788 = 0;
      _DAT_026ec790 = 0x6501;
      _DAT_026ec798 = "GNMouseButton";
      _DAT_026ec7a0 = &DAT_026ec810;
      _DAT_026ec7a8 = 0;
      uRam00000000026ec7b0 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026ec778;
}



