// Function: FUN_01b47100
// Address: 01b47100
// Size: 9173 bytes
// Class: MUScaleStretchTuningCtrl
// String references:
//   " %@"
//   "%.1f"
//   "  "


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


