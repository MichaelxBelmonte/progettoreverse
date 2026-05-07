// Reconstructed implementation of MUScaleStretchTuningCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "MUScaleStretchTuningCtrl.h"

// ============================================================
// @01b47100 — 9173 bytes
// str: "" %@""
// str: ""%.1f""
// str: ""  ""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b47100(undefined1 param_1 [8])

{
  uint uVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  undefined8 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint *puVar14;
  uint *puVar15;
  pthread_key_t pVar16;
  uint uVar17;
  uint *puVar18;
  longlong *plVar19;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong unaff_R12;
  undefined7 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint *puVar23;
  bool bVar24;
  ulonglong uVar25;
  undefined4 extraout_XMM0_Da;
  undefined1 auVar26 [8];
  double dVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  float fVar29;
  undefined1 in_XMM1 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  ulonglong uVar41;
  undefined1 auVar40 [16];
  float fVar42;
  undefined4 in_XMM4_Db;
  undefined4 in_XMM4_Dc;
  undefined4 in_XMM4_Dd;
  longlong local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  double local_1a0;
  undefined1 local_198 [8];
  undefined8 uStack_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  uint *local_138;
  float local_130;
  float local_12c;
  uint *local_128;
  char local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  char local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_c8;
  float local_a8;
  uint local_90 [2];
  undefined1 local_88 [8];
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint *local_70;
  uint local_68;
  float local_64;
  longlong local_60;
  char local_58;
  uint *local_50;
  undefined1 local_48 [16];
  
  *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0xffffffff;
  if (unaff_RDI[0x28] == 0) {
    return;
  }
  iVar7 = FUN_01d3a5a0();
  if ((iVar7 != 1) || (iVar7 = FUN_01d3b630(), iVar7 != 1)) {
    iVar7 = FUN_01d3a5a0();
    if (iVar7 != 5) goto LAB_01b47a92;
    FUN_01b46180();
    (**(code **)(*unaff_RDI + 0x618))();
    FUN_01d3abf0();
    uVar12 = FUN_01e466c0();
    *(undefined8 *)((longlong)unaff_RDI + 0x154) = uVar12;
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
    local_88 = (undefined1  [8])puVar18;
    pvVar9 = _pthread_getspecific(SUB84(param_1,0));
    if (pvVar9 == (void *)0x0) {
LAB_01b47560:
      auVar26 = local_88;
    }
    else {
      lVar21 = FUN_00e8b990();
      if (lVar21 == 0) goto LAB_01b47560;
      param_1 = local_88;
      auVar26 = (undefined1  [8])
                *(longlong **)
                 ((longlong)local_88 + ((ulonglong)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 2 * 4);
    }
    pVar16 = SUB84(param_1,0);
    uVar8 = (**(code **)(*(longlong *)auVar26 + 0x3a8))
                      ((float)uVar12 / ((float)local_48._0_4_ / _DAT_0241d550) + DAT_0239394c);
    plVar19 = (longlong *)unaff_RDI[0x29];
    if (plVar19 == (longlong *)0x0) {
      fVar35 = 0.0;
    }
    else {
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        plVar19 = (longlong *)unaff_RDI[0x29];
        lVar21 = FUN_00e8b990();
        if (lVar21 != 0) {
          plVar19 = (longlong *)plVar19[(ulonglong)(*(uint *)(lVar21 + 0x154) & 1) + 4];
        }
      }
      pvVar9 = _pthread_getspecific(pVar16);
      if ((pvVar9 == (void *)0x0) || (lVar21 = FUN_00e8b990(), lVar21 == 0)) {
        auVar26 = local_88;
      }
      else {
        auVar26 = (undefined1  [8])
                  *(longlong **)
                   ((longlong)local_88 + 0x20 + (ulonglong)(*(uint *)(lVar21 + 0x154) & 1) * 8);
      }
      fVar35 = (float)(**(code **)(*(longlong *)auVar26 + 0x3a0))();
      dVar3 = (double)(**(code **)(*plVar19 + 0x380))(SUB84((double)fVar35,0));
      fVar35 = (float)dVar3;
    }
    puVar10 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar16 = 0x25795a8;
    *puVar10 = &DAT_025795a8;
    (*DAT_025795c0)();
    auVar26 = local_88;
    pvVar9 = _pthread_getspecific(pVar16);
    if ((pvVar9 != (void *)0x0) && (lVar21 = FUN_00e8b990(), lVar21 != 0)) {
      auVar26 = *(undefined1 (*) [8])
                 ((longlong)auVar26 + ((ulonglong)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 8);
    }
    lVar21 = DAT_027e45c8;
    if (DAT_027e45c8 != 0) {
      FUN_00d50b00();
    }
    local_210 = lVar21;
    local_208 = '\x01';
    local_200 = 0;
    local_1f8 = '\0';
    (**(code **)(*(longlong *)auVar26 + 0x3c8))(&local_210,uVar8,&local_200);
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
    uVar12 = DAT_025908a0;
    uVar8 = extraout_XMM0_Da;
    if (iVar7 < 3) {
      uVar8 = FUN_00d94d80(&DAT_025908a0,DAT_025908a0);
    }
    FUN_00d94d80(uVar8,uVar12);
    if (0.0 < fVar35) {
      FUN_00d94d80(0,uVar12);
    }
    local_68 = 1;
    local_70 = (uint *)&DAT_024d0b28;
    local_64 = fVar35;
    FUN_00d94d80(fVar35,&local_70);
    local_1f0 = DAT_027e4700;
    if (DAT_027e4700 != 0) {
      FUN_00d50b00();
    }
    lVar21 = DAT_027e13b0;
    local_1e8 = '\x01';
    if (DAT_027e13b0 != 0) {
      FUN_00d50b00();
    }
    local_1e0 = lVar21;
    local_1d8 = '\x01';
    local_1d0 = 0;
    local_1c8 = '\0';
    uVar8 = FUN_00d31230(&local_1d0,&local_1e0);
    local_60 = CONCAT71(local_108._1_7_,(char)local_108);
    local_68 = 1;
    local_70 = (uint *)&DAT_024c5048;
    local_58 = 0;
    if (local_60 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_58 = '\x01';
    FUN_00d94d80(uVar8,&local_70);
    local_70 = (uint *)&DAT_024c5048;
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
    puVar2 = (undefined8 *)unaff_RDI[0x2c];
    if (puVar2 != puVar10) {
      FUN_00d50b00();
      unaff_RDI[0x2c] = (longlong)puVar10;
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    if ((*(float *)(unaff_RDI + 0x2d) == DAT_02391074) &&
       (!NAN(*(float *)(unaff_RDI + 0x2d)) && !NAN(DAT_02391074))) {
      FUN_01f27fe0();
      local_140 = 0;
      (**(code **)(unaff_RDI[0x27] + 0x10))();
      uVar8 = FUN_00d50b00();
      local_140 = '\x01';
      local_1c0 = 0;
      local_1b8 = '\0';
      local_148 = unaff_RDI + 0x27;
      FUN_01f47190(uVar8,&local_1c0);
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
        (**(code **)(*local_148 + 0x10))();
        FUN_00d50b20();
      }
      if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined4 *)(unaff_RDI + 0x2d) = 0x40000000;
    FUN_01b46180();
    (**(code **)(*unaff_RDI + 0x618))();
    FUN_00d50b20();
    if (auVar26 != (undefined1  [8])0x0) {
      FUN_00d50b20();
    }
LAB_01b47a92:
    local_1b0 = *unaff_RSI;
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
      puVar14 = *(uint **)(*(longlong *)(puVar18 + 4) + lVar21 * 8);
      puVar11 = puVar18;
      if (puVar14 != (uint *)0x0) {
        FUN_00d50b00();
      }
      pVar16 = (pthread_key_t)puVar11;
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_013faed0();
      local_88 = (undefined1  [8])uVar12;
      FUN_01e3f820();
      auVar32 = in_XMM1;
      FUN_01e3f820();
      auVar32._0_4_ = (auVar32._0_4_ / _DAT_0241d550) * DAT_02394218;
      local_48 = auVar32;
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar12 = FUN_013faf20();
      local_118._0_8_ = uVar12;
      FUN_01e3f820();
      fVar35 = *(float *)(unaff_RDI + 0x2a);
      _local_198 = auVar32;
      FUN_01e3f820();
      local_a8 = in_XMM1._0_4_;
      fVar42 = (float)(double)local_88 * (local_a8 / _DAT_0241d550) + (float)local_48._0_4_;
      fVar29 = auVar32._4_4_;
      auVar37._4_4_ = fVar29;
      auVar37._0_4_ = fVar29;
      uVar8 = auVar32._12_4_;
      auVar37._8_4_ = uVar8;
      auVar37._12_4_ = uVar8;
      fVar35 = (fVar29 / (*(float *)(unaff_RDI + 0x2a) + *(float *)(unaff_RDI + 0x2a))) * fVar35 -
               ((float)local_198._4_4_ / (fVar35 + fVar35)) * (float)(double)local_118._0_8_;
      local_88._0_4_ = fVar42;
      auVar30._4_4_ = in_XMM4_Db;
      auVar30._0_4_ = fVar42;
      auVar30._8_4_ = in_XMM4_Dc;
      auVar30._12_4_ = in_XMM4_Dd;
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = fVar42 + DAT_02394210;
      auVar4._4_4_ = fVar29;
      auVar4._0_4_ = fVar35 + DAT_02394210;
      auVar4._8_4_ = uVar8;
      auVar4._12_4_ = uVar8;
      in_XMM1 = insertps(auVar31,auVar4,0x10);
      cVar6 = FUN_00d05410(local_e8._0_4_,in_XMM1._0_8_,_DAT_02420ca0);
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
            unaff_R12 = (ulonglong)local_50 & 0xffffffff;
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
        *(int *)((longlong)unaff_RDI + 0x16c) = (int)lVar21;
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
      param_1 = (undefined1  [8])puVar18;
    } while (lVar21 < (int)puVar18[3]);
  }
  iVar7 = FUN_01d3b620();
  if (iVar7 == 2) {
    if (puVar23 == (uint *)0x0) {
LAB_01b47c79:
      lVar21 = unaff_RDI[0x28];
      if (lVar21 != 0) {
        FUN_00d50b00();
      }
      FUN_01e3f820();
      fVar35 = *(float *)(unaff_RDI + 0x2a);
      _local_88 = in_XMM1;
      FUN_01e3f820();
      fVar35 = fVar35 - (float)local_f8._0_4_ /
                        (in_XMM1._4_4_ /
                        (*(float *)(unaff_RDI + 0x2a) + *(float *)(unaff_RDI + 0x2a)));
      auVar32 = ZEXT416(_DAT_023945e0 & (uint)fVar35) | _DAT_023945f0;
      auVar33._4_12_ = auVar32._4_12_;
      auVar33._0_4_ = auVar32._0_4_ + fVar35;
      in_XMM1 = roundss(auVar33,auVar33,0xb);
      FUN_01b468c0((float)local_e8._0_4_ / ((float)local_88._0_4_ / _DAT_0241d550) + DAT_0239394c,
                   in_XMM1._0_8_,DAT_02390124);
      puVar14 = local_70;
      if (((char)local_68 == '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b00();
      }
      if (lVar21 != 0) {
        FUN_00d50b20();
      }
      if (puVar14 != (uint *)0x0) {
        local_170 = 0;
        lVar21 = unaff_RDI[0x28];
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        local_170 = '\x01';
        local_178 = lVar21;
        FUN_01778a40();
        puVar11 = (uint *)unaff_RDI[0x29];
        puVar15 = puVar11;
        if (puVar11 != local_70) {
          if ((char)local_68 == '\0') {
            if (local_70 == (uint *)0x0) {
              puVar15 = (uint *)0x0;
            }
            else {
              FUN_00d50b00();
              puVar11 = (uint *)unaff_RDI[0x29];
              puVar15 = local_70;
            }
          }
          else {
            local_68 = local_68 & 0xffffff00;
            puVar15 = local_70;
          }
          unaff_RDI[0x29] = (longlong)puVar15;
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
        if (unaff_RDI[0x2c] != 0) {
          unaff_RDI[0x2c] = 0;
          FUN_00d50b20();
        }
        puVar11 = local_50;
        uVar12 = (**(code **)(*unaff_RDI + 0x620))();
        pVar16 = (pthread_key_t)puVar11;
        if (puVar14 == puVar23) {
          if ((char)local_50 == '\0') {
            local_50 = (uint *)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          uVar12 = FUN_00d50b00();
          if (((char)local_50 == '\0') || (puVar23 == (uint *)0x0)) {
            local_50 = (uint *)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
            puVar23 = puVar14;
          }
          else {
            uVar12 = FUN_00d50b20();
            local_50 = (uint *)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
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
        *(undefined4 *)((longlong)unaff_RDI + 0x16c) = uVar8;
        if ((local_100 != '\0') && (CONCAT71(local_108._1_7_,(char)local_108) != 0)) {
          FUN_00d50b20();
        }
        param_1 = (undefined1  [8])local_50;
        (**(code **)(*unaff_RDI + 0x620))();
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
    *(undefined1 *)puVar11 = 0;
    if (((char)local_68 != '\0') && (puVar14 != (uint *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar14 == puVar23) {
      bVar24 = false;
    }
    else {
      FUN_00d23340();
      puVar11 = local_70;
      param_1 = (undefined1  [8])local_90;
      puVar15 = &local_68;
      if ((char)local_68 == '\0') {
        puVar15 = (uint *)param_1;
      }
      local_90[0]._0_1_ = (char)local_68;
      *(undefined1 *)puVar15 = 0;
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
    local_188 = unaff_RDI[0x28];
    if (local_188 != 0) {
      FUN_00d50b00();
    }
    local_180 = '\x01';
    FUN_01778a40();
    puVar18 = (uint *)unaff_RDI[0x29];
    puVar14 = puVar18;
    if (puVar18 != local_70) {
      if ((char)local_68 == '\0') {
        if (local_70 == (uint *)0x0) {
          puVar14 = (uint *)0x0;
        }
        else {
          FUN_00d50b00();
          puVar18 = (uint *)unaff_RDI[0x29];
          puVar14 = local_70;
        }
      }
      else {
        local_68 = local_68 & 0xffffff00;
        puVar14 = local_70;
      }
      unaff_RDI[0x29] = (longlong)puVar14;
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
    if (unaff_RDI[0x2c] != 0) {
      unaff_RDI[0x2c] = 0;
      FUN_00d50b20();
    }
    *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0xffffffff;
    (**(code **)(*unaff_RDI + 0x620))();
  }
  else {
LAB_01b47f7b:
    if (puVar23 != (uint *)0x0) {
LAB_01b47f90:
      do {
        (**(code **)(*unaff_RDI + 0x658))();
        puVar11 = local_70;
        puVar14 = (uint *)*unaff_RSI;
        if (puVar14 == local_70) {
          if (((char)unaff_RSI[1] == '\0') && (local_70 != (uint *)0x0)) {
            if ((char)local_68 == '\0') {
              FUN_00d50b00();
              goto LAB_01b48043;
            }
LAB_01b47ff1:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            local_68 = local_68 & 0xffffff00;
          }
          lVar21 = *unaff_RSI;
        }
        else {
          lVar21 = unaff_RSI[1];
          if ((char)local_68 != '\0') {
            *unaff_RSI = (longlong)local_70;
            if (((char)lVar21 != '\0') && (puVar14 != (uint *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01b47ff1;
          }
          if (local_70 != (uint *)0x0) {
            FUN_00d50b00();
          }
          *unaff_RSI = (longlong)puVar11;
          if (((char)lVar21 != '\0') && (puVar14 != (uint *)0x0)) {
            FUN_00d50b20();
          }
LAB_01b48043:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          lVar21 = *unaff_RSI;
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
      local_88 = (undefined1  [8])FUN_01e466c0();
      uStack_80 = extraout_XMM0_Dc_00;
      uStack_7c = extraout_XMM0_Dd_00;
      pvVar9 = _pthread_getspecific(pVar16);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013f2b00();
      param_1 = (undefined1  [8])(longlong)*(int *)((longlong)unaff_RDI + 0x16c);
      lVar21 = *(longlong *)(local_70 + 4);
      puVar14 = *(uint **)(lVar21 + (longlong)param_1 * 8);
      if (puVar23 == puVar14) {
        if (((char)local_50 == '\0') && (puVar23 != (uint *)0x0)) {
          local_50 = (uint *)CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (puVar14 != (uint *)0x0) {
          lVar21 = FUN_00d50b00();
        }
        if (((char)local_50 == '\0') || (puVar23 == (uint *)0x0)) {
          local_50 = (uint *)CONCAT71((int7)((ulonglong)lVar21 >> 8),1);
          puVar23 = puVar14;
        }
        else {
          uVar12 = FUN_00d50b20();
          local_50 = (uint *)CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
          puVar23 = puVar14;
        }
      }
      if (((char)local_68 != '\0') && (local_70 != (uint *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e3f820();
      auVar34._4_12_ = in_XMM1._4_12_;
      auVar34._0_4_ = in_XMM1._0_4_ / _DAT_0241d550;
      local_48._0_4_ = (local_130 + (float)local_88._0_4_) / auVar34._0_4_ + DAT_0239394c;
      fVar35 = *(float *)(unaff_RDI + 0x2a);
      FUN_01e3f820();
      fVar29 = *(float *)(unaff_RDI + 0x2a);
      local_118 = auVar34;
      pvVar9 = _pthread_getspecific(SUB84(param_1,0));
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      auVar26 = (undefined1  [8])FUN_013faed0();
      dVar3 = (double)auVar26;
      if ((0 < *(int *)((longlong)unaff_RDI + 0x16c)) &&
         (param_1 = (undefined1  [8])(ulonglong)(puVar18[3] - 1),
         *(int *)((longlong)unaff_RDI + 0x16c) < (int)(puVar18[3] - 1))) {
        pvVar9 = _pthread_getspecific((pthread_key_t)*(longlong *)(puVar18 + 4));
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013faed0();
        local_198 = (undefined1  [8])(dVar3 + DAT_0238fee8);
        param_1 = *(undefined1 (*) [8])(puVar18 + 4);
        pvVar9 = _pthread_getspecific(SUB84(param_1,0));
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar3 = (double)FUN_013faed0();
        auVar26 = local_198;
        dVar3 = dVar3 + DAT_023b19a0;
      }
      fVar42 = (float)local_48._0_4_;
      if ((double)(float)local_48._0_4_ < (double)auVar26) {
        fVar42 = (float)(double)auVar26;
      }
      if (dVar3 < (double)fVar42) {
        fVar42 = (float)dVar3;
      }
      local_48._0_4_ = fVar42;
      _local_198 = ZEXT416(*(uint *)(unaff_RDI + 0x2a));
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
      fVar29 = (float)((uint)local_198._0_4_ ^ _DAT_023945e0);
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
      if ((float)local_48._0_4_ - in_XMM1._0_4_ == DAT_0239424c) {
        if ((auVar39._0_4_ == DAT_0239424c) && (!NAN(auVar39._0_4_) && !NAN(DAT_0239424c)))
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
      local_88 = (undefined1  [8])(puVar14 + 4);
      if (0 < (int)uVar1) {
        uVar22 = 0;
        uVar12 = local_118._0_8_;
        do {
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_013faed0();
          *(float *)(*(longlong *)(uVar12 + 0x10) + uVar22 * 8) = (float)dVar3;
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar3 = (double)FUN_013faf20();
          *(float *)(*(longlong *)(uVar12 + 0x10) + 4 + uVar22 * 8) = (float)dVar3;
          uVar22 = uVar22 + 1;
        } while (uVar1 != uVar22);
        if (3 < (int)uVar1) {
          if (*(uint *)((longlong)unaff_RDI + 0x16c) == 0) {
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
              if (((double)(local_e8._0_8_ & _DAT_023908f0) <
                   (double)((ulonglong)dVar3 & _DAT_023908f0)) ||
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
              if ((dVar27 == DAT_02390448) && (!NAN(dVar27) && !NAN(DAT_02390448)))
              goto LAB_01b48cfa;
              lVar21 = lVar21 + 1;
              uVar8 = extraout_XMM0_Dc_04;
              uVar28 = extraout_XMM0_Dd_04;
            } while ((ulonglong)(uVar1 - 1) - 1 != lVar21);
            uVar17 = 0;
LAB_01b48cfe:
            if ((int)(uVar1 - 3) < (int)uVar17) {
              uVar17 = uVar1 - 3;
            }
          }
          else {
            uVar17 = local_138[3] - 1;
            param_1 = (undefined1  [8])(ulonglong)uVar17;
            if (*(uint *)((longlong)unaff_RDI + 0x16c) != uVar17) goto LAB_01b4901b;
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
            lVar21 = (ulonglong)(uVar1 - 2) + 1;
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
              if (((double)(local_e8._0_8_ & _DAT_023908f0) <
                   (double)((ulonglong)dVar3 & _DAT_023908f0)) ||
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
              if ((dVar27 == DAT_02390448) && (!NAN(dVar27) && !NAN(DAT_02390448)))
              goto LAB_01b48d11;
              iVar7 = iVar7 + -1;
              lVar21 = lVar21 + -1;
              uVar8 = extraout_XMM0_Dc_02;
              uVar28 = extraout_XMM0_Dd_02;
            } while (2 < lVar21);
            uVar17 = 2;
          }
LAB_01b48d22:
          param_1 = (undefined1  [8])(longlong)(int)uVar17;
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
          dVar3 = (double)((ulonglong)((double)local_f8._0_8_ - (double)local_e8._0_8_) &
                          _DAT_023908f0);
          dVar27 = DAT_02411158;
          if (DAT_02411158 <= dVar3) {
            dVar27 = dVar3;
          }
          uVar41 = CONCAT44(extraout_XMM0_Dd_06,extraout_XMM0_Dc_06) & _UNK_023908f8;
          dVar27 = (double)((ulonglong)dVar36 & _DAT_023908f0) / dVar27;
          uVar25 = -(ulonglong)
                    (((double)local_f8._0_8_ - (double)local_e8._0_8_) * dVar36 < DAT_02390448);
          uVar22 = ~local_f8._8_8_ & uVar41;
          auVar40._0_8_ = ((ulonglong)dVar27 ^ _DAT_023945b0) & uVar25;
          auVar40._8_8_ = (uVar41 ^ _UNK_023945b8) & local_f8._8_8_;
          auVar5._8_4_ = (int)uVar22;
          auVar5._0_8_ = ~uVar25 & (ulonglong)dVar27;
          auVar5._12_4_ = (int)(uVar22 >> 0x20);
          local_f8 = auVar40 | auVar5;
          if (*(int *)((longlong)unaff_RDI + 0x16c) == 0) {
            if (1 < (int)uVar17) {
              uVar22 = 1;
              do {
                lVar21 = *(longlong *)(*(longlong *)local_88 + uVar22 * 8);
                pvVar9 = _pthread_getspecific(SUB84(param_1,0));
                if ((pvVar9 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  param_1 = *(undefined1 (*) [8])
                             (lVar21 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
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
            lVar21 = (longlong)(int)(uVar1 - 2);
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
            } while ((longlong)(longlong)(int)uVar17 < lVar21);
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
      lVar21 = unaff_RDI[0x28];
      if (lVar21 != 0) {
        FUN_00d50b00();
      }
      local_160 = '\x01';
      local_168 = lVar21;
      FUN_01778a40();
      puVar14 = (uint *)unaff_RDI[0x29];
      if (puVar14 != local_70) {
        param_1 = (undefined1  [8])puVar14;
        if ((char)local_68 == '\0') {
          if (local_70 == (uint *)0x0) {
            puVar14 = (uint *)0x0;
          }
          else {
            FUN_00d50b00();
            puVar14 = local_70;
            param_1 = (undefined1  [8])unaff_RDI[0x29];
          }
        }
        else {
          local_68 = local_68 & 0xffffff00;
          puVar14 = local_70;
        }
        unaff_RDI[0x29] = (longlong)puVar14;
        if (param_1 != (undefined1  [8])0x0) {
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
      lVar21 = unaff_RDI[0x29];
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
        puVar11 = *(uint **)(puVar14 + ((ulonglong)(*(uint *)(lVar21 + 0x154) & 1) + 4) * 2);
      }
      cVar6 = (**(code **)(*(longlong *)puVar11 + 0x370))();
      param_1 = (undefined1  [8])CONCAT71((int7)((ulonglong)param_1 >> 8),(int)uVar1 < 1);
      if (cVar6 == '\0' && (int)uVar1 >= 1) {
        uVar22 = 0;
        do {
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013fae90(SUB84((double)*(float *)(*(longlong *)(local_118._0_8_ + 0x10) + uVar22 * 8),
                             0));
          pvVar9 = _pthread_getspecific(SUB84(param_1,0));
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013faee0(SUB84((double)*(float *)(*(longlong *)(local_118._0_8_ + 0x10) + 4 +
                                               uVar22 * 8),0));
          uVar22 = uVar22 + 1;
        } while (uVar1 != uVar22);
      }
      if (unaff_RDI[0x2c] != 0) {
        unaff_RDI[0x2c] = 0;
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x620))();
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
    *(undefined4 *)((longlong)unaff_RDI + 0x16c) = 0xffffffff;
    (**(code **)(*unaff_RDI + 0x620))();
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
// @01b43fc0 — 2580 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b4453d) */
/* WARNING: Removing unreachable block (ram,0x01b44549) */
/* WARNING: Removing unreachable block (ram,0x01b444b0) */
/* WARNING: Removing unreachable block (ram,0x01b444bc) */
/* WARNING: Removing unreachable block (ram,0x01b44404) */
/* WARNING: Removing unreachable block (ram,0x01b44410) */
/* WARNING: Removing unreachable block (ram,0x01b4445a) */
/* WARNING: Removing unreachable block (ram,0x01b44466) */
/* WARNING: Removing unreachable block (ram,0x01b444e7) */
/* WARNING: Removing unreachable block (ram,0x01b444f3) */
/* WARNING: Removing unreachable block (ram,0x01b44762) */
/* WARNING: Removing unreachable block (ram,0x01b4476e) */
/* WARNING: Removing unreachable block (ram,0x01b445c4) */
/* WARNING: Removing unreachable block (ram,0x01b445cd) */
/* WARNING: Removing unreachable block (ram,0x01b4415c) */
/* WARNING: Removing unreachable block (ram,0x01b44165) */
/* WARNING: Removing unreachable block (ram,0x01b4494f) */
/* WARNING: Removing unreachable block (ram,0x01b4495c) */
/* WARNING: Removing unreachable block (ram,0x01b4404c) */
/* WARNING: Removing unreachable block (ram,0x01b44055) */
/* WARNING: Removing unreachable block (ram,0x01b4409c) */
/* WARNING: Removing unreachable block (ram,0x01b440a5) */
/* WARNING: Removing unreachable block (ram,0x01b4498b) */
/* WARNING: Removing unreachable block (ram,0x01b44998) */
/* WARNING: Removing unreachable block (ram,0x01b449be) */
/* WARNING: Removing unreachable block (ram,0x01b449cb) */
/* WARNING: Removing unreachable block (ram,0x01b4483f) */
/* WARNING: Removing unreachable block (ram,0x01b4484b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b43fc0(undefined8 param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  longlong **pplVar3;
  undefined1 auVar4 [16];
  longlong ***ppplVar5;
  undefined8 *puVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong ****pppplVar10;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong ****pppplVar11;
  ulonglong uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 in_XMM0_Qb;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar15;
  undefined1 auVar19 [16];
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  longlong ***local_c0;
  longlong ***local_b8;
  longlong ***local_b0;
  undefined1 local_a8 [8];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  char local_90;
  longlong ***local_88;
  longlong ***local_80;
  undefined1 local_78 [16];
  longlong ***local_68;
  undefined8 *local_60;
  longlong ***local_48;
  char local_40;
  
  if (*(longlong *)(unaff_RDI + 0x140) != 0) {
    local_78._8_8_ = in_XMM0_Qb;
    local_78._0_8_ = param_1;
    FUN_01d48370();
    (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
    FUN_01cfbee0();
    if ((local_40 == '\0') && ((longlong ****)local_48 != (longlong ****)0x0)) {
      FUN_00d50b00();
    }
    local_88 = local_48;
    FUN_01cfbee0();
    if ((local_40 == '\0') && ((longlong ****)local_48 != (longlong ****)0x0)) {
      FUN_00d50b00();
    }
    local_b0 = local_48;
    FUN_01cfbee0();
    local_b8 = local_48;
    if (local_40 == '\0') {
      if ((longlong ****)local_48 == (longlong ****)0x0) {
        local_b8 = (longlong ***)(longlong ****)0x0;
      }
      else {
        FUN_00d50b00();
      }
    }
    FUN_01cfbee0();
    local_80 = local_48;
    if (local_40 == '\0') {
      if ((longlong ****)local_48 == (longlong ****)0x0) {
        local_80 = (longlong ***)0x0;
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
    if ((local_40 == '\0') && ((longlong ****)local_48 != (longlong ****)0x0)) {
      FUN_00d50b00();
    }
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    pppplVar10 = (longlong ****)&DAT_02680400;
    *puVar6 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(undefined8 *)((longlong)puVar6 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar6 + 0x41) = 0;
    (*DAT_02680418)();
    local_90 = 0;
    local_98 = *(longlong *)(unaff_RDI + 0x140);
    local_60 = puVar6;
    if (local_98 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    FUN_01778a40();
    if (local_40 == '\0') {
      if ((longlong ****)local_48 != (longlong ****)0x0) {
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
    fVar23 = DAT_023b1608 + local_78._0_4_;
    fVar13 = param_2 + local_78._0_4_ + DAT_02390d00 + DAT_02390d34;
    local_78._0_4_ = fVar23;
    while (fVar23 < fVar13) {
      FUN_01e3f820();
      auVar25._0_4_ = auVar25._0_4_ / _DAT_0241d550;
      local_a8._0_4_ = (float)local_78._0_4_ / auVar25._0_4_ + DAT_0239394c;
      pvVar7 = _pthread_getspecific((pthread_key_t)pppplVar10);
      pppplVar11 = (longlong ****)local_48;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        pppplVar10 = (longlong ****)local_48;
        pppplVar11 = (longlong ****)local_48[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      uVar14 = (*(code *)(*pppplVar11)[0x70])((double)(float)local_a8._0_4_);
      local_a8 = (undefined1  [8])uVar14;
      FUN_01e3f820();
      uVar1 = *(uint *)(unaff_RDI + 0x150);
      auVar18 = auVar25;
      FUN_01e3f820();
      auVar16 = insertps(ZEXT416(*(uint *)(unaff_RDI + 0x150)),ZEXT416(uVar1),0x10);
      auVar17._0_4_ = auVar16._0_4_ + auVar16._0_4_;
      auVar17._4_4_ = auVar16._4_4_ + auVar16._4_4_;
      auVar17._8_4_ = auVar16._8_4_ + auVar16._8_4_;
      auVar17._12_4_ = auVar16._12_4_ + auVar16._12_4_;
      auVar25 = insertps(auVar25,auVar18,0x4c);
      auVar16 = divps(auVar25,auVar17);
      auVar25 = insertps(ZEXT416(uVar1),ZEXT416((uint)(float)(double)local_a8),0x10);
      fVar24 = auVar25._4_4_ * auVar16._4_4_;
      fVar23 = auVar25._0_4_ * auVar16._0_4_ - fVar24;
      auVar18._0_4_ = (uint)fVar23 & _DAT_023945e0;
      auVar18._4_4_ = (uint)fVar24 & _UNK_023945e4;
      auVar18._8_4_ = (uint)(auVar25._8_4_ * auVar16._8_4_) & _UNK_023945e8;
      auVar18._12_4_ = (uint)(auVar25._12_4_ * auVar16._12_4_) & _UNK_023945ec;
      auVar16._4_12_ = SUB1612(auVar18 | _DAT_023945f0,4);
      auVar16._0_4_ = SUB164(auVar18 | _DAT_023945f0,0) + fVar23;
      roundss(auVar16,auVar16,0xb);
      _local_a8 = ZEXT416((uint)(float)(double)local_a8);
      FUN_01d38ba0();
      fVar23 = (float)local_78._0_4_ + DAT_02390124;
      auVar25 = ZEXT416((uint)fVar23);
      local_78._0_4_ = fVar23;
    }
    FUN_01d488d0();
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    FUN_01d488d0();
    fVar13 = 0.0;
    uVar21 = 0;
    uVar22 = 0;
    fVar23 = DAT_02390124;
    (**(code **)(*(longlong *)*unaff_RSI + 0x370))();
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    pvVar7 = _pthread_getspecific((pthread_key_t)pppplVar10);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f2b00();
    if ((local_40 == '\0') && ((longlong ****)local_48 != (longlong ****)0x0)) {
      FUN_00d50b00();
    }
    if (0 < *(int *)((longlong)local_48 + 0xc)) {
      uVar12 = 0;
      do {
        pVar9 = (pthread_key_t)pppplVar10;
        uVar1 = *(uint *)(unaff_RDI + 0x16c);
        pplVar3 = (longlong **)local_48[2][uVar12];
        if (pplVar3 != (longlong **)0x0) {
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
        local_a8._0_4_ = (fVar24 / _DAT_0241d550) * DAT_02394218;
        uStack_a0 = uVar21;
        uStack_9c = uVar22;
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_013faf20();
        FUN_01e3f820();
        fVar24 = *(float *)(unaff_RDI + 0x150);
        fVar20 = fVar13;
        FUN_01e3f820();
        fVar2 = *(float *)(unaff_RDI + 0x150);
        pppplVar10 = &local_c0;
        FUN_01d488d0();
        auVar19._0_4_ =
             (float)(double)local_78._0_8_ * (fVar23 / _DAT_0241d550) + (float)local_a8._0_4_;
        auVar19._4_4_ = local_78._4_4_;
        auVar19._8_8_ = 0;
        auVar4._4_4_ = fVar20;
        auVar4._0_4_ = (fVar20 / (fVar2 + fVar2)) * fVar24 -
                       (fVar13 / (fVar24 + fVar24)) * (float)dVar15;
        auVar4._8_4_ = uVar22;
        auVar4._12_4_ = uVar22;
        local_78 = insertps(auVar19,auVar4,0x10);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
        if (uVar12 == uVar1) {
          FUN_01d48b40();
        }
        FUN_01d488d0();
        fVar13 = 0.0;
        uVar21 = 0;
        uVar22 = 0;
        fVar23 = DAT_02390d2c;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3c8))();
        if (uVar12 == uVar1) {
          FUN_01d48b40();
        }
        if (pplVar3 != (longlong **)0x0) {
          FUN_00d50b20();
        }
        uVar12 = uVar12 + 1;
      } while ((longlong)uVar12 < (longlong)*(int *)((longlong)local_48 + 0xc));
    }
    FUN_01d48390();
    FUN_00d50b20();
    puVar6 = local_60;
    ppplVar5 = local_80;
    if ((longlong ****)local_48 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if (puVar6 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_68 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)ppplVar5 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_b8 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_b0 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
    if ((longlong ****)local_88 != (longlong ****)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01b44f00 — 2010 bytes
// str: ""%I""
// str: ""+%@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b450ac) */
/* WARNING: Removing unreachable block (ram,0x01b450b8) */
/* WARNING: Removing unreachable block (ram,0x01b45529) */
/* WARNING: Removing unreachable block (ram,0x01b45535) */
/* WARNING: Removing unreachable block (ram,0x01b45622) */
/* WARNING: Removing unreachable block (ram,0x01b4562e) */
/* WARNING: Removing unreachable block (ram,0x01b45689) */
/* WARNING: Removing unreachable block (ram,0x01b45695) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b44f00(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  float fVar9;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar10;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 in_XMM1_Qb;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  longlong *local_130;
  char local_128;
  float local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  float fStack_a4;
  undefined4 uStack_9c;
  undefined8 local_78;
  undefined8 *local_68;
  uint local_60;
  undefined8 *local_58;
  char local_50;
  undefined8 *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  float local_34;
  
  uVar16 = param_2;
  uVar10 = in_XMM1_Qb;
  FUN_01e3f820();
  fStack_154 = (float)((ulonglong)uVar16 >> 0x20);
  uStack_150 = (undefined4)uVar10;
  uStack_14c = (uint)((ulonglong)uVar10 >> 0x20);
  local_34 = *(float *)(unaff_RDI + 0x2a);
  FUN_01d48370();
  fStack_a4 = (float)((ulonglong)param_2 >> 0x20);
  uStack_9c = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
  FUN_01d48b40();
  FUN_01cfc3c0();
  puVar3 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  FUN_01d488d0();
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x640))();
  (**(code **)(*local_130 + 0x370))();
  FUN_01d44d80();
  puVar3 = local_68;
  if ((char)local_60 == '\0') {
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_60 = local_60 & 0xffffff00;
  }
  if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48a10();
  fVar20 = fStack_154 / (local_34 + local_34);
  local_34 = 1.4013e-44;
  local_38 = 10;
  if (DAT_023908ec * fVar20 <= DAT_023908d8) {
    fStack_a4 = 0.0;
    uStack_9c = 0;
    local_38 = 0x32;
    if (DAT_02394240 * fVar20 <= DAT_023908d8) {
      fStack_a4 = 0.0;
      uStack_9c = 0;
      local_38 = 100;
      if (DAT_023908e0 * fVar20 <= DAT_023908d8) {
        fStack_a4 = 0.0;
        uStack_9c = 0;
        local_38 = 200;
        if (DAT_02390d38 * fVar20 <= DAT_023908d8) {
          fStack_a4 = 0.0;
          uStack_9c = 0;
          local_38 = 400;
          if (DAT_02411264 * fVar20 <= DAT_023908d8) {
            fStack_a4 = 0.0;
            uStack_9c = 0;
            local_38 = 800;
            if (DAT_0241b65c * fVar20 <= DAT_023908d8) {
              local_38 = 0x640;
            }
          }
        }
      }
    }
  }
  if (((((DAT_023908ec * fVar20 <= DAT_023942a8) &&
        (local_34 = 7.00649e-44, DAT_02394240 * fVar20 <= DAT_023942a8)) &&
       (local_34 = 1.4013e-43, DAT_023908e0 * fVar20 <= DAT_023942a8)) &&
      ((local_34 = 2.8026e-43, DAT_02390d38 * fVar20 <= DAT_023942a8 &&
       (local_34 = 5.60519e-43, DAT_02411264 * fVar20 <= DAT_023942a8)))) &&
     (local_34 = 1.12104e-42, DAT_0241b65c * fVar20 <= DAT_023942a8)) {
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
        fVar1 = *(float *)(&DAT_0241d558 + (ulonglong)(iVar7 == 0) * 4);
        fVar9 = fVar20 * (float)iVar4;
        auVar17._0_4_ = (uint)fVar9 & _DAT_023945e0;
        auVar17._4_4_ = (uint)fStack_154 & _UNK_023945e4;
        auVar17._8_4_ = uStack_14c & _UNK_023945e8;
        auVar17._12_4_ = uStack_14c & _UNK_023945ec;
        auVar18._4_12_ = SUB1612(auVar17 | _DAT_023945f0,4);
        auVar18._0_4_ = SUB164(auVar17 | _DAT_023945f0,0) + fVar9;
        auVar19 = roundss(auVar18,auVar18,0xb);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        auVar2._8_4_ = uStack_150;
        auVar2._0_8_ = uVar16;
        auVar2._12_4_ = uStack_14c;
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
        if ((iVar7 == 0) && (fVar9 = *(float *)(unaff_RDI + 0x2a), (float)iVar4 < fVar9 + fVar9)) {
          iVar7 = (int)fVar9 + iVar8;
          local_40 = 1;
          local_48 = &DAT_024cc6f0;
          local_3c = iVar7;
          uVar10 = FUN_00d8cb40();
          puVar6 = local_68;
          if (((char)local_60 == '\0') && (local_68 != (undefined8 *)0x0)) {
            uVar10 = FUN_00d50b00();
            if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
              uVar10 = FUN_00d50b20();
            }
          }
          if (0 < iVar7) {
            local_60 = 1;
            local_68 = &DAT_024c5048;
            local_50 = 0;
            if (puVar6 != (undefined8 *)0x0) {
              uVar10 = FUN_00d50b00();
            }
            local_58 = puVar6;
            local_50 = '\x01';
            FUN_00d8cb40(uVar10,&local_68);
            local_78 = local_48;
            if (puVar6 == local_48) {
              local_78 = puVar6;
LAB_01b454c1:
              if (((char)local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if ((char)local_40 == '\0') {
                if (local_48 != (undefined8 *)0x0) {
                  FUN_00d50b00();
                }
                if (puVar6 != (undefined8 *)0x0) {
                  FUN_00d50b20();
                }
                goto LAB_01b454c1;
              }
              if (puVar6 != (undefined8 *)0x0) {
                FUN_00d50b20();
              }
              local_40 = local_40 & 0xffffff00;
            }
            local_68 = &DAT_024c5048;
            puVar6 = local_78;
            if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar10 = FUN_01d43d10();
          fVar21 = fVar1 + DAT_02390d34;
          local_78._0_4_ = (float)uVar10;
          local_78._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
          local_78._4_4_ = local_78._4_4_ * DAT_02390118;
          if ((int)fVar9 == iVar4) {
            (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar21 + (float)local_78 + DAT_02390d34);
          }
          local_d8 = auVar19._0_4_;
          uStack_d4 = auVar19._4_4_;
          uStack_d0 = auVar19._8_4_;
          uStack_cc = auVar19._12_4_;
          local_d8 = local_d8 + local_78._4_4_;
          auVar14._0_4_ = (uint)local_d8 & _DAT_023945e0;
          auVar14._4_4_ = uStack_d4 & _UNK_023945e4;
          auVar14._8_4_ = uStack_d0 & _UNK_023945e8;
          auVar14._12_4_ = uStack_cc & _UNK_023945ec;
          auVar15._4_12_ = SUB1612(auVar14 | _DAT_023945f0,4);
          auVar15._0_4_ = SUB164(auVar14 | _DAT_023945f0,0) + local_d8;
          auVar19 = roundss(auVar15,auVar15,0xb);
          auVar19 = insertps(ZEXT416((uint)fVar21),auVar19,0x10);
          (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))();
          auVar22._0_4_ = (((float)uVar16 - fVar1) - (float)local_78) + DAT_023b1608;
          auVar22._4_12_ = auVar2._4_12_;
          auVar19 = blendps(auVar19,auVar22,1);
          (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(auVar19._0_8_,2);
          if (puVar6 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      iVar4 = iVar4 + local_38;
      iVar8 = iVar8 - local_38;
    } while (iVar4 <= iVar5);
  }
  FUN_01d48390();
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b42750 — 1668 bytes
// ============================================================

void FUN_01b42750(undefined *param_1)

{
  int iVar1;
  void *pvVar2;
  longlong *plVar3;
  int iVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong local_b0;
  char local_a8;
  double local_a0;
  char local_98;
  double local_90;
  char local_88;
  double local_80;
  char local_78;
  double local_70;
  undefined8 local_68;
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
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0173b790();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
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
    plVar3 = (longlong *)FUN_00e8fc40();
    FUN_00d4ff40();
    plVar3[2] = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    param_1 = &DAT_0258cea8;
    *plVar3 = (longlong)&DAT_0258cea8;
    *(undefined4 *)(plVar3 + 5) = 0;
    *(undefined1 *)((longlong)plVar3 + 0x2c) = 0;
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
    uVar8 = (*DAT_0258cec0)();
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
    plVar3 = (longlong *)FUN_00e8fc40();
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
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  dVar5 = local_40;
  if ((((local_38 == '\0') && (local_40 != 0.0)) && (FUN_00d50b00(), local_38 != '\0')) &&
     (local_40 != 0.0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)dVar5 + 0xc) < 1) {
    uVar8 = 0;
    uVar10 = 0;
    dVar11 = 0.0;
  }
  else {
    local_68 = 0.0;
    lVar6 = 0;
    local_58 = 0.0;
    do {
      lVar7 = *(longlong *)(*(longlong *)((longlong)dVar5 + 0x10) + lVar6 * 8);
      if (lVar7 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_50 = (double)FUN_013faf20();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      uVar8 = SUB84(local_50,0);
      uVar10 = (undefined4)((ulonglong)local_50 >> 0x20);
      dVar11 = local_50;
      if (local_68 <= local_50) {
        dVar11 = local_68;
      }
      if (local_50 <= local_58) {
        uVar8 = SUB84(local_58,0);
        uVar10 = (undefined4)((ulonglong)local_58 >> 0x20);
      }
      lVar6 = lVar6 + 1;
      local_58 = (double)CONCAT44(uVar10,uVar8);
      local_68 = dVar11;
    } while (lVar6 < *(int *)((longlong)dVar5 + 0xc));
  }
  local_50 = (double)CONCAT44(uVar10,uVar8);
  dVar12 = dVar11;
  local_68 = (double)FUN_01e3f820();
  fVar9 = (float)((ulonglong)dVar12 >> 0x20) + (float)((ulonglong)local_68 >> 0x20) + DAT_02390d00;
  uVar10 = FUN_01b43f70();
  uVar8 = local_68._4_4_;
  local_58 = (double)CONCAT44(local_58._4_4_,uVar10);
  uVar10 = FUN_01b43f70();
  local_68 = (double)CONCAT44(local_68._4_4_,uVar10);
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
  lVar6 = *(longlong *)(unaff_RDI + 0xb0);
  if (3 < *(int *)(lVar6 + 0x18)) {
    dVar12 = (double)local_58._0_4_;
    dVar13 = (double)(float)local_68;
    lVar7 = 0;
    do {
      if ((dVar11 < dVar12) || (dVar13 < local_50)) {
        FUN_01b43f40(*(undefined4 *)(*(longlong *)(lVar6 + 0x10) + lVar7 * 4));
        uVar10 = FUN_01b43f70(fVar9);
        local_68 = (double)CONCAT44(local_68._4_4_,uVar10);
        uVar10 = FUN_01b43f70(uVar8);
        local_58 = (double)CONCAT44(local_58._4_4_,uVar10);
        (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
        dVar13 = (double)local_58._0_4_;
        dVar12 = (double)(float)local_68;
        lVar6 = *(longlong *)(unaff_RDI + 0xb0);
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
// @01b468c0 — 1465 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b46bb9) */
/* WARNING: Removing unreachable block (ram,0x01b46bc5) */
/* WARNING: Removing unreachable block (ram,0x01b46e5d) */
/* WARNING: Removing unreachable block (ram,0x01b46e6d) */
/* WARNING: Removing unreachable block (ram,0x01b46c03) */
/* WARNING: Removing unreachable block (ram,0x01b46c0f) */
/* WARNING: Removing unreachable block (ram,0x01b46d58) */
/* WARNING: Removing unreachable block (ram,0x01b46d65) */
/* WARNING: Removing unreachable block (ram,0x01b46952) */
/* WARNING: Removing unreachable block (ram,0x01b4695b) */
/* WARNING: Removing unreachable block (ram,0x01b46d8a) */
/* WARNING: Removing unreachable block (ram,0x01b46d97) */

undefined8 * FUN_01b468c0(float param_1,float param_2,float param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  pthread_key_t in_ECX;
  undefined8 *unaff_RDI;
  longlong *plVar12;
  longlong *local_48;
  char local_40;
  
  pvVar8 = _pthread_getspecific(in_ECX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013f2b00();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar3 = (double)param_1;
  iVar7 = FUN_013f3690();
  lVar9 = local_48[2];
  lVar1 = *(longlong *)(lVar9 + (longlong)iVar7 * 8);
  if (lVar1 != 0) {
    FUN_00d50b00();
    lVar9 = local_48[2];
  }
  lVar9 = *(longlong *)(lVar9 + 8 + (longlong)iVar7 * 8);
  if (lVar9 != 0) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    in_ECX = (pthread_key_t)lVar1;
  }
  dVar2 = (double)FUN_013faed0();
  bVar4 = true;
  if ((double)param_3 < dVar3 - dVar2) {
    pvVar8 = _pthread_getspecific(in_ECX);
    if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
      in_ECX = (pthread_key_t)lVar9;
    }
    dVar2 = (double)FUN_013faed0();
    if ((double)param_3 < dVar2 - dVar3) {
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      in_ECX = 0x25ddb28;
      *puVar11 = &DAT_025ddb28;
      puVar11[0xb] = 0;
      puVar11[7] = 0;
      puVar11[8] = 0;
      *(undefined8 *)((longlong)puVar11 + 0x43) = 0;
      *(undefined8 *)((longlong)puVar11 + 0x4b) = 0;
      (*DAT_025ddb40)();
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
  puVar11 = (undefined8 *)0x0;
LAB_01b46b7d:
  FUN_01778a40();
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_01778fe0();
  if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  pvVar8 = _pthread_getspecific(in_ECX);
  plVar12 = local_48;
  if ((pvVar8 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
    plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar10 + 0x154) & 1) + 4];
  }
  cVar6 = (**(code **)(*plVar12 + 0x370))();
  if (cVar6 == '\0') {
    pvVar8 = _pthread_getspecific(in_ECX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013f3080();
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((bVar4) && (puVar11 != (undefined8 *)0x0)) {
      FUN_00d50b00();
    }
    *unaff_RDI = puVar11;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    bVar5 = false;
  }
  if (local_48 != (longlong *)0x0) {
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
  if ((bVar5) && (puVar11 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01b459e0 — 1164 bytes
// str: ""C%I""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b45b67) */
/* WARNING: Removing unreachable block (ram,0x01b45b73) */
/* WARNING: Removing unreachable block (ram,0x01b45d79) */
/* WARNING: Removing unreachable block (ram,0x01b45d85) */
/* WARNING: Removing unreachable block (ram,0x01b45dfc) */
/* WARNING: Removing unreachable block (ram,0x01b45e05) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b459e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  uint uVar7;
  undefined8 uVar8;
  undefined8 in_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar10;
  undefined8 uVar11;
  undefined8 in_XMM1_Qb;
  undefined4 uVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float local_f8;
  float fStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  float fStack_e4;
  longlong *local_c8;
  char local_c0;
  float local_b8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined4 local_60;
  uint local_5c;
  longlong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  uVar15 = (undefined4)((ulonglong)in_XMM1_Qb >> 0x20);
  uStack_70 = in_XMM0_Qb;
  local_78 = param_1;
  uVar8 = param_2;
  FUN_01e3f820();
  uVar11 = uVar8;
  FUN_01e3f820();
  FUN_01d48370();
  (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
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
  (**(code **)(*unaff_RDI + 0x640))();
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
  if (((char)local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = lVar3;
  FUN_01d48a10();
  fVar10 = (float)uVar11 / _DAT_0241d550;
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
    fStack_e4 = (float)((ulonglong)uVar8 >> 0x20);
    auVar9._4_4_ = fStack_e4;
    auVar9._0_4_ = fStack_e4;
    auVar9._8_4_ = uVar15;
    auVar9._12_4_ = uVar15;
    do {
      if (0 < (int)uVar7) {
        auVar12 = ZEXT416((uint)((float)(int)uVar7 * fVar10) & _DAT_023945e0) | _DAT_023945f0;
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = auVar12._0_4_ + (float)(int)uVar7 * fVar10;
        auVar12 = roundss(ZEXT816(0),auVar13,0xb);
        uVar6 = (ulonglong)((int)uVar7 % 0x4b0 == 0);
        auVar14._4_12_ = auVar9._4_12_;
        auVar14._0_4_ = fStack_e4 - *(float *)(&DAT_0241d558 + uVar6 * 4);
        (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(uVar6,auVar14._0_8_,auVar12._0_4_);
        if ((uVar7 - 1 < 0x257f) && ((int)uVar7 % 0x4b0 == 0)) {
          local_5c = (uVar7 & 0xffff) / 0x4b0;
          local_60 = 1;
          local_68 = &DAT_024cc6f0;
          FUN_00d8cb40(&DAT_024cc6f0,&local_68);
          lVar3 = local_40;
          if ((local_38 == '\0') &&
             (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
            FUN_00d50b20();
          }
          uVar8 = FUN_01d43d10();
          local_f8 = (float)uVar8;
          fStack_f4 = (float)((ulonglong)uVar8 >> 0x20);
          uStack_f0 = (uint)extraout_XMM0_Qb;
          uStack_ec = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
          auVar16._0_4_ = (uint)(local_f8 * DAT_0239011c) & _DAT_023945e0;
          auVar16._4_4_ = (uint)fStack_f4 & _UNK_023945e4;
          auVar16._8_4_ = uStack_f0 & _UNK_023945e8;
          auVar16._12_4_ = uStack_ec & _UNK_023945ec;
          auVar17._4_12_ = SUB1612(auVar16 | _DAT_023945f0,4);
          auVar17._0_4_ = SUB164(auVar16 | _DAT_023945f0,0) + local_f8 * DAT_0239011c;
          auVar18 = roundss(auVar17,auVar17,0xb);
          auVar1._4_4_ = fStack_e4;
          auVar1._0_4_ = auVar14._0_4_ - fStack_f4;
          auVar1._8_4_ = uVar15;
          auVar1._12_4_ = uVar15;
          auVar12 = insertps(ZEXT416((uint)(auVar12._0_4_ - auVar18._0_4_)),auVar1,0x10);
          (**(code **)(*(longlong *)*unaff_RSI + 0x3f8))(auVar12._0_8_,2);
          (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))();
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
// @01b42190 — 1017 bytes
// str: ""handleReset""
// str: ""MUScaleStretchTuningCtrl""
// str: ""handleSetStandardFunction""
// str: ""handleSetVerticalRange""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b42190(void)

{
  int iVar1;
  
  if (DAT_028b4470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0273bff8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0273bf48 = FUN_00842350();
          _DAT_0273bf30 = "MUScaleStretchTuningCtrl";
          _DAT_0273bf38 = 0xb8;
          _DAT_0273bf40 = FUN_00858370;
          _DAT_0273bf50 = 0;
          uRam000000000273bf58 = 0;
          _DAT_0273bf60 = 0;
          uRam000000000273bf68 = 0;
          _DAT_0273bf70 = 0;
          uRam000000000273bf78 = 0;
          _DAT_0273bf80 = 0;
          uRam000000000273bf88 = 0;
          _DAT_0273bf90 = 0;
          uRam000000000273bf98 = 0;
          _DAT_0273bfa0 = 0;
          uRam000000000273bfa8 = 0;
          _DAT_0273bfb0 = 0;
          uRam000000000273bfb8 = 0;
          _DAT_0273bfc0 = 0;
          uRam000000000273bfc8 = 0;
          _DAT_0273bfd0 = 0;
          uRam000000000273bfd8 = 0;
          _DAT_0273bfe0 = 0;
          uRam000000000273bfe8 = 0;
          _DAT_0273bff0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4430 = "handleReset";
      _DAT_028b4438 = &DAT_0273bf30;
      _DAT_028b4440 = 0;
      _DAT_028b4448 = &DAT_027e46d8;
      _DAT_028b4450 = FUN_01b43b90;
      _DAT_028b4458 = 0x5d9;
      _DAT_028b4460 = 0;
      uRam00000000028b4468 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b44b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0273bff8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0273bf48 = FUN_00842350();
          _DAT_0273bf30 = "MUScaleStretchTuningCtrl";
          _DAT_0273bf38 = 0xb8;
          _DAT_0273bf40 = FUN_00858370;
          _DAT_0273bf50 = 0;
          uRam000000000273bf58 = 0;
          _DAT_0273bf60 = 0;
          uRam000000000273bf68 = 0;
          _DAT_0273bf70 = 0;
          uRam000000000273bf78 = 0;
          _DAT_0273bf80 = 0;
          uRam000000000273bf88 = 0;
          _DAT_0273bf90 = 0;
          uRam000000000273bf98 = 0;
          _DAT_0273bfa0 = 0;
          uRam000000000273bfa8 = 0;
          _DAT_0273bfb0 = 0;
          uRam000000000273bfb8 = 0;
          _DAT_0273bfc0 = 0;
          uRam000000000273bfc8 = 0;
          _DAT_0273bfd0 = 0;
          uRam000000000273bfd8 = 0;
          _DAT_0273bfe0 = 0;
          uRam000000000273bfe8 = 0;
          _DAT_0273bff0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4478 = "handleSetStandardFunction";
      _DAT_028b4480 = &DAT_0273bf30;
      _DAT_028b4488 = 0;
      _DAT_028b4490 = &DAT_027e46d8;
      _DAT_028b4498 = FUN_01b43b90;
      _DAT_028b44a0 = 0x5e1;
      _DAT_028b44a8 = 0;
      uRam00000000028b44b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4500 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0273bff8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0273bf48 = FUN_00842350();
          _DAT_0273bf30 = "MUScaleStretchTuningCtrl";
          _DAT_0273bf38 = 0xb8;
          _DAT_0273bf40 = FUN_00858370;
          _DAT_0273bf50 = 0;
          uRam000000000273bf58 = 0;
          _DAT_0273bf60 = 0;
          uRam000000000273bf68 = 0;
          _DAT_0273bf70 = 0;
          uRam000000000273bf78 = 0;
          _DAT_0273bf80 = 0;
          uRam000000000273bf88 = 0;
          _DAT_0273bf90 = 0;
          uRam000000000273bf98 = 0;
          _DAT_0273bfa0 = 0;
          uRam000000000273bfa8 = 0;
          _DAT_0273bfb0 = 0;
          uRam000000000273bfb8 = 0;
          _DAT_0273bfc0 = 0;
          uRam000000000273bfc8 = 0;
          _DAT_0273bfd0 = 0;
          uRam000000000273bfd8 = 0;
          _DAT_0273bfe0 = 0;
          uRam000000000273bfe8 = 0;
          _DAT_0273bff0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b44c0 = "handleSetVerticalRange";
      _DAT_028b44c8 = &DAT_0273bf30;
      _DAT_028b44d0 = 0;
      _DAT_028b44d8 = &DAT_027e46d8;
      _DAT_028b44e0 = FUN_01b43b90;
      _DAT_028b44e8 = 0x5e9;
      _DAT_028b44f0 = 0;
      uRam00000000028b44f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01b430f0 — 965 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b43248) */
/* WARNING: Removing unreachable block (ram,0x01b433fc) */
/* WARNING: Removing unreachable block (ram,0x01b43408) */
/* WARNING: Removing unreachable block (ram,0x01b43493) */
/* WARNING: Removing unreachable block (ram,0x01b4349f) */
/* WARNING: Removing unreachable block (ram,0x01b4318c) */
/* WARNING: Removing unreachable block (ram,0x01b43195) */
/* WARNING: Removing unreachable block (ram,0x01b4314d) */
/* WARNING: Removing unreachable block (ram,0x01b43156) */
/* WARNING: Removing unreachable block (ram,0x01b43211) */
/* WARNING: Removing unreachable block (ram,0x01b4321a) */
/* WARNING: Removing unreachable block (ram,0x01b43250) */
/* WARNING: Removing unreachable block (ram,0x01b43270) */
/* WARNING: Removing unreachable block (ram,0x01b43252) */
/* WARNING: Removing unreachable block (ram,0x01b43272) */

undefined4 FUN_01b430f0(undefined8 param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t in_ECX;
  longlong lVar6;
  longlong lVar7;
  double dVar8;
  longlong local_60;
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
      lVar5 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(lVar7 + 0xc) <= local_48) {
        lVar5 = lVar7;
        FUN_01a81420();
        in_ECX = (pthread_key_t)lVar5;
        bVar1 = false;
        goto joined_r0x01b43327;
      }
      lVar6 = *(longlong *)(lVar7 + 0x10);
      local_60 = *(longlong *)(lVar6 + 8 + lVar5 * 8);
      pvVar4 = _pthread_getspecific((pthread_key_t)lVar6);
      in_ECX = (pthread_key_t)lVar6;
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar8 = (double)FUN_013faf20();
    } while ((dVar8 == DAT_02390448) && (!NAN(dVar8) && !NAN(DAT_02390448)));
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
// @008139b0 — 533 bytes
// str: ""MUScaleStretchTuningCtrl""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00813aee) */
/* WARNING: Removing unreachable block (ram,0x00813ae0) */
/* WARNING: Removing unreachable block (ram,0x00813afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008139b0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  
  if ((DAT_0273bff8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_0273bf48 = FUN_00842350();
    _DAT_0273bf30 = "MUScaleStretchTuningCtrl";
    _DAT_0273bf38 = 0xb8;
    _DAT_0273bf40 = FUN_00858370;
    _DAT_0273bf50 = 0;
    uRam000000000273bf58 = 0;
    _DAT_0273bf60 = 0;
    uRam000000000273bf68 = 0;
    _DAT_0273bf70 = 0;
    uRam000000000273bf78 = 0;
    _DAT_0273bf80 = 0;
    uRam000000000273bf88 = 0;
    _DAT_0273bf90 = 0;
    uRam000000000273bf98 = 0;
    _DAT_0273bfa0 = 0;
    uRam000000000273bfa8 = 0;
    _DAT_0273bfb0 = 0;
    uRam000000000273bfb8 = 0;
    _DAT_0273bfc0 = 0;
    uRam000000000273bfc8 = 0;
    _DAT_0273bfd0 = 0;
    uRam000000000273bfd8 = 0;
    _DAT_0273bfe0 = 0;
    _uRam000000000273bfe8 = 0;
    _DAT_0273bff0 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0273bfeb == '\0') {
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
// @01b46340 — 525 bytes
// ============================================================

void FUN_01b46340(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar3;
  longlong local_38;
  char local_30;
  
  if ((*(longlong *)(unaff_RDI + 0x160) != 0) && (0.0 < *(float *)(unaff_RDI + 0x168))) {
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
    if (DAT_0239011c <= *(float *)(unaff_RDI + 0x168)) {
      FUN_01cfc9f0(DAT_0239011c,DAT_02390124);
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
      FUN_01cfc9f0(DAT_0239011c);
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
    plVar1 = (longlong *)*unaff_RSI;
    lVar2 = *(longlong *)(unaff_RDI + 0x160);
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



