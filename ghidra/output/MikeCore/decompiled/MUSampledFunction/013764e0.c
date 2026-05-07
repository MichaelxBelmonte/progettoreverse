// Function: FUN_013764e0
// Address: 013764e0
// Size: 12143 bytes
// Class: MUSampledFunction
// String references:
//   "MUSampledFunction"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013764e0(longlong *param_1,longlong *param_2)

{
  float *pfVar1;
  double dVar2;
  longlong *plVar3;
  bool bVar4;
  undefined1 auVar5 [12];
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong **pplVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  pthread_key_t pVar23;
  int iVar24;
  longlong **pplVar25;
  longlong *plVar26;
  int iVar27;
  int iVar28;
  double dVar29;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar30;
  ulonglong uVar31;
  int iVar32;
  double dVar33;
  char cVar34;
  int iVar35;
  uint uVar36;
  bool bVar37;
  ulonglong uVar38;
  float fVar39;
  undefined8 uVar41;
  ulonglong extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar42 [16];
  float fVar40;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double extraout_XMM0_Qa_01;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  double dVar59;
  longlong *local_390;
  undefined1 local_388;
  undefined8 local_380;
  undefined1 local_378;
  longlong *local_370;
  undefined1 local_368;
  longlong *local_360;
  undefined1 local_358;
  longlong *local_350;
  undefined1 local_348;
  undefined8 *local_340;
  undefined1 local_338;
  longlong local_330;
  longlong local_328;
  double local_320;
  undefined *local_318;
  code *local_310;
  longlong *local_308;
  double local_300;
  undefined *local_2f8;
  code *local_2f0;
  undefined1 local_2e8 [16];
  longlong local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  double local_2b0;
  ulonglong local_2a8;
  double local_2a0;
  double local_298;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong *local_270;
  char local_268;
  longlong *local_260;
  char local_258;
  longlong *local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong *local_220;
  char local_218;
  longlong *local_210;
  char local_208;
  longlong *local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  undefined4 local_1b0;
  float local_1ac;
  longlong *local_1a8;
  longlong *local_1a0;
  ulonglong local_198;
  undefined8 local_190;
  double local_188;
  longlong *local_180;
  undefined8 local_178;
  undefined8 *local_170;
  longlong *local_138;
  ulonglong uStack_110;
  int local_f0;
  int local_ec;
  double local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  double local_c0;
  longlong **local_b8;
  longlong **local_b0;
  undefined8 local_a8;
  float fStack_a0;
  float fStack_9c;
  double local_98;
  ulonglong uStack_90;
  longlong *local_88;
  longlong *local_80;
  double local_78;
  double local_70;
  longlong *local_68;
  double local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  
  lVar16 = *unaff_RSI;
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    lVar16 = *unaff_RSI;
    lVar15 = FUN_00e8b990();
    if (lVar15 != 0) {
      lVar16 = *(longlong *)(lVar16 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
    }
  }
  lVar16 = *(longlong *)(lVar16 + 0x40);
  if (lVar16 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  local_290 = lVar16;
  uVar41 = FUN_0147ce20();
  plVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (uVar41 = FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      uVar41 = FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    uVar41 = FUN_00d50b20();
  }
  local_180 = plVar3;
  FUN_00d242c0(uVar41,0);
  lVar16 = *unaff_RSI;
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    lVar16 = *unaff_RSI;
    lVar15 = FUN_00e8b990();
    if (lVar15 != 0) {
      lVar16 = *(longlong *)(lVar16 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
    }
  }
  plVar3 = *(longlong **)(lVar16 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  plVar22 = *(longlong **)(unaff_RDI + 0x38);
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar14 != (void *)0x0) {
    plVar22 = *(longlong **)(unaff_RDI + 0x38);
    lVar16 = FUN_00e8b990();
    if (lVar16 != 0) {
      plVar22 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
  }
  local_298 = (double)(**(code **)(*plVar22 + 0x370))();
  pvVar14 = _pthread_getspecific((pthread_key_t)param_1);
  plVar22 = plVar3;
  if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
    param_1 = plVar3;
    plVar22 = (longlong *)plVar3[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
  }
  pVar23 = (pthread_key_t)param_1;
  local_188 = (double)(**(code **)(*plVar22 + 0x370))();
  lVar16 = *unaff_RSI;
  pvVar14 = _pthread_getspecific(pVar23);
  if (pvVar14 != (void *)0x0) {
    lVar16 = *unaff_RSI;
    lVar15 = FUN_00e8b990();
    if (lVar15 != 0) {
      lVar16 = *(longlong *)(lVar16 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
    }
  }
  lVar15 = *(longlong *)(lVar16 + 0x1a0);
  if (lVar15 == 0) {
    FUN_0132d640();
    lVar15 = *(longlong *)(lVar16 + 0x1a0);
  }
  if (lVar15 != 0) {
    FUN_00d50b00();
  }
  local_320 = *(double *)(lVar15 + 0x38);
  FUN_00d50b20();
  lVar16 = *(longlong *)(unaff_RDI + 0x1a0);
  if (lVar16 == 0) {
    FUN_0132d640();
    lVar16 = *(longlong *)(unaff_RDI + 0x1a0);
  }
  if (lVar16 != 0) {
    FUN_00d50b00();
  }
  dVar2 = *(double *)(lVar16 + 0x38);
  FUN_00d50b20();
  lVar16 = *unaff_RSI;
  pvVar14 = _pthread_getspecific(pVar23);
  if (pvVar14 != (void *)0x0) {
    lVar16 = *unaff_RSI;
    lVar15 = FUN_00e8b990();
    if (lVar15 != 0) {
      lVar16 = *(longlong *)(lVar16 + 0x20 + (ulonglong)(*(uint *)(lVar15 + 0x154) & 1) * 8);
    }
  }
  local_ec = 5;
  if ((*(longlong *)(lVar16 + 0x1f8) == 0) && (local_ec = 6, *(longlong *)(lVar16 + 0x200) == 0)) {
    if (*(longlong *)(lVar16 + 0x148) == 0) {
      local_ec = 0;
    }
    else {
      pvVar14 = _pthread_getspecific(pVar23);
      if (pvVar14 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_ec = FUN_0141bab0();
    }
  }
  plVar22 = *(longlong **)(unaff_RDI + 0x38);
  pvVar14 = _pthread_getspecific(pVar23);
  if (pvVar14 != (void *)0x0) {
    plVar22 = *(longlong **)(unaff_RDI + 0x38);
    lVar16 = FUN_00e8b990();
    if (lVar16 != 0) {
      plVar22 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
    }
  }
  local_300 = (double)(**(code **)(*plVar22 + 0x398))();
  local_1b0 = *(undefined4 *)(*param_2 + 0x18);
  local_2b0 = (double)FUN_015c70e0(local_188);
  plVar22 = local_180;
  FUN_00e83120();
  plVar6 = local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  plVar20 = local_48;
  if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_1a0 = plVar20;
  FUN_00c8e690();
  plVar20 = local_48;
  if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  local_1a8 = plVar20;
  puVar17 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar17 = &DAT_025f0d98;
  puVar17[2] = 0;
  puVar17[3] = 0;
  puVar17[4] = 0;
  puVar17[5] = 0;
  puVar17[6] = 0;
  puVar17[7] = 0;
  (*DAT_025f0db0)();
  puVar18 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  local_2f8 = &DAT_02572358;
  *puVar18 = &DAT_02572358;
  local_2f0 = DAT_02572370;
  (*DAT_02572370)();
  local_198 = (ulonglong)*(uint *)((longlong)plVar22 + 0xc);
  local_170 = puVar18;
  if (0 < (int)*(uint *)((longlong)plVar22 + 0xc)) {
    local_2a0 = DAT_0238fee8 / dVar2;
    local_1ac = (float)((local_188 / local_2b0) * DAT_023942d0);
    fVar39 = (float)local_188;
    local_2e8 = ZEXT416((uint)fVar39);
    local_310 = DAT_025e74b8;
    bVar37 = false;
    local_318 = &DAT_025e74a0;
    local_2a8 = local_198;
    do {
      pVar23 = (int)local_198 - 1;
      local_198 = (ulonglong)pVar23;
      lVar16 = *(longlong *)(plVar22[2] + local_198 * 8);
      if (lVar16 != 0) {
        FUN_00d50b00();
      }
      local_e0 = lVar16;
      pvVar14 = _pthread_getspecific(pVar23);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        pVar23 = (pthread_key_t)local_e0;
      }
      FUN_013de560();
      local_50 = local_48;
      if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar14 = _pthread_getspecific(pVar23);
      if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
        pVar23 = (pthread_key_t)local_50;
      }
      cVar10 = FUN_014bc070();
      bVar4 = true;
      if (cVar10 == '\0') {
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = (pthread_key_t)local_e0;
        }
        FUN_013dfdd0();
        plVar22 = local_48;
        if (local_48 == (longlong *)0x0) {
          local_190 = 0;
          local_138 = (longlong *)0x0;
          local_178 = 0;
          local_c8 = (longlong *)0x0;
        }
        else {
          if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013dd6a0();
          local_c8 = local_48;
          plVar20 = local_48;
          if (local_48 == (longlong *)0x0) {
            local_c8 = (longlong *)0x0;
            uVar41 = 0;
            local_178 = 0;
          }
          else if (local_40 == '\0') {
            uVar41 = FUN_00d50b00();
            uVar41 = CONCAT71((int7)((ulonglong)uVar41 >> 8),1);
            local_178 = uVar41;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              uVar41 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
            uVar41 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
            local_178 = uVar41;
          }
          pVar23 = (pthread_key_t)plVar20;
          local_190 = CONCAT71((int7)((ulonglong)uVar41 >> 8),1);
          local_138 = plVar22;
        }
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = (pthread_key_t)local_50;
        }
        local_98 = (double)FUN_014bb3e0();
        uStack_90 = extraout_XMM0_Qb;
        pvVar14 = _pthread_getspecific(pVar23);
        if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          pVar23 = (pthread_key_t)local_50;
        }
        local_d8._0_8_ = FUN_014bb310();
        local_d8._8_8_ = extraout_XMM0_Qb_00;
        uVar11 = FUN_00e7d850(local_2a0 * local_98);
        local_38 = (longlong *)CONCAT44(local_38._4_4_,uVar11);
        uVar38 = -(ulonglong)(local_300 < (double)local_d8._0_8_ + local_98);
        auVar52._0_8_ = (ulonglong)(local_300 - local_98) & uVar38;
        auVar52._8_8_ = 0;
        auVar58._0_8_ = ~uVar38 & local_d8._0_8_;
        auVar58._8_8_ = local_d8._8_8_;
        dVar59 = SUB168(auVar58 | auVar52,0);
        uVar11 = FUN_00e7d850((local_98 + dVar59) * local_2a0);
        local_58 = CONCAT44(local_58._4_4_,uVar11);
        pvVar14 = _pthread_getspecific(pVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc090();
        plVar20 = local_48;
        local_308 = plVar22;
        if ((DAT_027c01a0 == '\0') && (iVar32 = ___cxa_guard_acquire(), iVar32 != 0)) {
          _DAT_027af248 = FUN_001016a0();
          _DAT_027af230 = "MUSampledFunction";
          _DAT_027af238 = 0x58;
          _DAT_027af240 = FUN_00101650;
          _DAT_027af250 = 0;
          uRam00000000027af258 = 0;
          _DAT_027af260 = 0;
          uRam00000000027af268 = 0;
          _DAT_027af270 = 0;
          uRam00000000027af278 = 0;
          _DAT_027af280 = 0;
          uRam00000000027af288 = 0;
          _DAT_027af290 = 0;
          uRam00000000027af298 = 0;
          _DAT_027af2a0 = 0;
          uRam00000000027af2a8 = 0;
          _DAT_027af2b0 = 0;
          uRam00000000027af2b8 = 0;
          _DAT_027af2c0 = 0;
          uRam00000000027af2c8 = 0;
          _DAT_027af2d0 = 0;
          uRam00000000027af2d8 = 0;
          _DAT_027af2e0 = 0;
          uRam00000000027af2e8 = 0;
          _DAT_027af2f0 = 0;
          ___cxa_guard_release();
        }
        pplVar25 = (longlong **)&DAT_02802688;
        if (plVar20 != (longlong *)0x0) {
          (**(code **)(*plVar20 + 0x360))();
          cVar10 = FUN_00e85ea0();
          pplVar25 = &local_48;
          if (cVar10 == '\0') {
            pplVar25 = (longlong **)&DAT_02802688;
          }
        }
        local_b8 = (longlong **)*pplVar25;
        if (*(char *)(pplVar25 + 1) == '\0') {
          if (local_b8 != (longlong **)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar25 + 1) = 0;
        }
        pVar23 = (pthread_key_t)pplVar25;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar14 = _pthread_getspecific(pVar23);
        if (pvVar14 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc0d0();
        plVar22 = local_48;
        if ((DAT_027c01a0 == '\0') && (iVar32 = ___cxa_guard_acquire(), iVar32 != 0)) {
          _DAT_027af248 = FUN_001016a0();
          _DAT_027af230 = "MUSampledFunction";
          _DAT_027af238 = 0x58;
          _DAT_027af240 = FUN_00101650;
          _DAT_027af250 = 0;
          uRam00000000027af258 = 0;
          _DAT_027af260 = 0;
          uRam00000000027af268 = 0;
          _DAT_027af270 = 0;
          uRam00000000027af278 = 0;
          _DAT_027af280 = 0;
          uRam00000000027af288 = 0;
          _DAT_027af290 = 0;
          uRam00000000027af298 = 0;
          _DAT_027af2a0 = 0;
          uRam00000000027af2a8 = 0;
          _DAT_027af2b0 = 0;
          uRam00000000027af2b8 = 0;
          _DAT_027af2c0 = 0;
          uRam00000000027af2c8 = 0;
          _DAT_027af2d0 = 0;
          uRam00000000027af2d8 = 0;
          _DAT_027af2e0 = 0;
          uRam00000000027af2e8 = 0;
          _DAT_027af2f0 = 0;
          ___cxa_guard_release();
        }
        pplVar25 = (longlong **)&DAT_02802688;
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x360))();
          cVar10 = FUN_00e85ea0();
          pplVar25 = &local_48;
          if (cVar10 == '\0') {
            pplVar25 = (longlong **)&DAT_02802688;
          }
        }
        local_b0 = (longlong **)*pplVar25;
        if (*(char *)(pplVar25 + 1) == '\0') {
          if (local_b0 != (longlong **)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar25 + 1) = 0;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != (longlong **)0x0) && (local_b0 != (longlong **)0x0)) {
          pvVar14 = _pthread_getspecific((pthread_key_t)pplVar25);
          iVar32 = (int)local_38;
          pplVar19 = local_b8;
          if ((pvVar14 != (void *)0x0) &&
             (lVar16 = FUN_00e8b990(), pplVar19 = local_b8, lVar16 != 0)) {
            pplVar19 = (longlong **)local_b8[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            pplVar25 = local_b8;
          }
          local_68 = pplVar19[10];
          pvVar14 = _pthread_getspecific((pthread_key_t)pplVar25);
          pplVar19 = local_b0;
          if ((pvVar14 != (void *)0x0) &&
             (lVar16 = FUN_00e8b990(), pplVar19 = local_b0, lVar16 != 0)) {
            pplVar19 = (longlong **)local_b0[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            pplVar25 = local_b0;
          }
          plVar22 = pplVar19[10];
          pvVar14 = _pthread_getspecific((pthread_key_t)pplVar25);
          if ((pvVar14 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            plVar20 = local_b8[9];
            if (plVar20 == (longlong *)0x0) goto LAB_0137713c;
LAB_01377151:
            iVar27 = (int)plVar20[3];
            iVar24 = iVar27 + 3;
            if (-1 < iVar27) {
              iVar24 = iVar27;
            }
            dVar29 = (double)(ulonglong)(uint)(iVar24 >> 2);
          }
          else {
            plVar20 = (longlong *)local_b8[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4][9];
            pplVar25 = local_b8;
            if (plVar20 != (longlong *)0x0) goto LAB_01377151;
LAB_0137713c:
            dVar29 = 0.0;
          }
          pvVar14 = _pthread_getspecific((pthread_key_t)pplVar25);
          if ((pvVar14 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
            plVar20 = local_b0[9];
            if (plVar20 == (longlong *)0x0) goto LAB_013771a5;
LAB_013771bd:
            iVar27 = (int)plVar20[3];
            iVar24 = iVar27 + 3;
            if (-1 < iVar27) {
              iVar24 = iVar27;
            }
            pVar23 = iVar24 >> 2;
            local_78 = (double)(ulonglong)pVar23;
          }
          else {
            plVar20 = (longlong *)local_b0[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4][9];
            pplVar25 = local_b0;
            if (plVar20 != (longlong *)0x0) goto LAB_013771bd;
LAB_013771a5:
            pVar23 = (pthread_key_t)pplVar25;
            local_78 = 0.0;
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            pVar23 = (pthread_key_t)local_b8;
          }
          FUN_013eb920();
          plVar20 = local_48;
          if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013eb920();
          plVar7 = local_48;
          if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          FUN_00c8e690();
          plVar8 = local_48;
          if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          FUN_00c92170();
          FUN_00c92160();
          local_f0 = -1;
          iVar27 = SUB84(local_78,0);
          iVar35 = iVar27 + -1;
          iVar13 = (int)local_58;
          iVar24 = local_f0;
          if (iVar32 < (int)local_58) {
            iVar28 = iVar32;
            do {
              iVar24 = (int)(((double)iVar28 * dVar2 - local_98) * (double)plVar22);
              if (iVar24 < 0) {
                iVar24 = 0;
                if (0 < iVar27) goto LAB_0137739e;
LAB_013773c5:
                fVar40 = *(float *)(plVar7[2] + (longlong)iVar35 * 4);
                iVar24 = iVar35;
              }
              else {
                if (iVar27 <= iVar24) goto LAB_013773c5;
LAB_0137739e:
                fVar40 = *(float *)(plVar7[2] + (longlong)iVar24 * 4);
              }
            } while ((fVar40 < DAT_023b4df0) &&
                    (iVar28 = iVar28 + 1, iVar24 = local_f0, (int)local_58 != iVar28));
          }
          do {
            local_f0 = iVar24;
            iVar24 = local_f0;
            if (iVar13 <= iVar32) goto LAB_01377461;
            iVar28 = (int)(((double)(iVar13 + -1) * dVar2 - local_98) * (double)plVar22);
            if (iVar28 < 0) {
              iVar28 = 0;
            }
            if (iVar27 <= iVar28) {
              iVar28 = iVar35;
            }
            iVar13 = iVar13 + -1;
          } while (*(float *)(plVar7[2] + (longlong)iVar28 * 4) < DAT_023b4df0);
          if ((local_f0 == -1) || (iVar28 == -1)) {
LAB_01377461:
            local_f0 = 0;
            local_330 = plVar7[2];
            FUN_015b32a0(iVar24,&local_f0);
            iVar28 = local_f0;
          }
          local_e8 = (double)CONCAT44(local_e8._4_4_,iVar35);
          local_d8._0_4_ = (float)(double)plVar22;
          local_a8 = (double)CONCAT44(local_a8._4_4_,(float)(double)local_68);
          uVar11 = FUN_00e7d780(((float)local_f0 / (float)(double)plVar22) * (float)(double)local_68
                               );
          local_80 = (longlong *)CONCAT44(local_80._4_4_,uVar11);
          uVar12 = FUN_00e7d780(((float)iVar28 / (float)local_d8._0_4_) * (float)local_a8);
          uVar36 = SUB84(dVar29,0);
          local_c0 = dVar29;
          if (0 < (int)uVar36) {
            uVar38 = plVar20[2];
            uVar30 = plVar8[2];
            local_70 = dVar29;
            if ((uVar36 < 4) ||
               ((uVar30 < (longlong)dVar29 * 4 + uVar38 && (uVar38 < uVar30 + (longlong)dVar29 * 4))
               )) {
              local_60 = 0.0;
            }
            else {
              local_60 = (double)(ulonglong)(uVar36 & 0xfffffffc);
              dVar29 = 0.0;
              do {
                auVar45._4_4_ = fVar39;
                auVar45._0_4_ = fVar39;
                auVar45._8_4_ = fVar39;
                auVar45._12_4_ = fVar39;
                auVar45 = divps(auVar45,*(undefined1 (*) [16])(uVar38 + (longlong)dVar29 * 4));
                fStack_a0 = auVar45._8_4_ * _UNK_02394168;
                fStack_9c = auVar45._12_4_ * _UNK_0239416c;
                local_a8 = (double)CONCAT44(auVar45._4_4_ * _UNK_02394164,
                                            auVar45._0_4_ * _DAT_02394160);
                local_d8._0_8_ = _logf();
                local_d8._8_8_ = extraout_XMM0_Qb_01;
                auVar46._0_8_ = _logf();
                auVar46._8_8_ = extraout_XMM0_Qb_02;
                local_d8 = insertps(local_d8,auVar46,0x10);
                auVar5._4_8_ = extraout_XMM0_Qb_02;
                auVar5._0_4_ = local_a8._4_4_;
                auVar47._0_8_ = auVar5._0_8_ << 0x20;
                auVar47._8_4_ = fStack_a0;
                auVar47._12_4_ = fStack_9c;
                auVar48._0_8_ = _logf(auVar47._8_8_);
                auVar48._8_8_ = extraout_XMM0_Qb_03;
                local_d8 = insertps(local_d8,auVar48,0x20);
                auVar49._0_8_ = _logf();
                auVar49._8_8_ = extraout_XMM0_Qb_04;
                auVar45 = insertps(local_d8,auVar49,0x30);
                fVar40 = auVar45._4_4_ * _UNK_02394174;
                fVar56 = auVar45._8_4_ * _UNK_02394178;
                fVar57 = auVar45._12_4_ * _UNK_0239417c;
                pfVar1 = (float *)(uVar30 + (longlong)dVar29 * 4);
                *pfVar1 = auVar45._0_4_ * _DAT_02394170;
                pfVar1[1] = fVar40;
                pfVar1[2] = fVar56;
                pfVar1[3] = fVar57;
                dVar29 = (double)((longlong)dVar29 + 4);
              } while (local_60 != dVar29);
              if (local_60 == local_70) goto LAB_01377700;
            }
            dVar29 = local_60;
            if (((ulonglong)local_70 & 1) != 0) {
              auVar42._4_12_ = local_2e8._4_12_;
              auVar42._0_4_ =
                   (local_2e8._0_4_ / *(float *)(uVar38 + (longlong)local_60 * 4)) * DAT_02394204;
              fVar40 = (float)_logf(auVar42._0_8_);
              *(float *)(uVar30 + (longlong)dVar29 * 4) = fVar40 * DAT_02394208;
              dVar29 = (double)((ulonglong)dVar29 | 1);
            }
            if (~(ulonglong)local_60 + (longlong)local_70 != 0) {
              do {
                auVar43._4_12_ = local_2e8._4_12_;
                auVar43._0_4_ =
                     (local_2e8._0_4_ / *(float *)(uVar38 + (longlong)dVar29 * 4)) * DAT_02394204;
                fVar40 = (float)_logf(auVar43._0_8_);
                *(float *)(uVar30 + (longlong)dVar29 * 4) = fVar40 * DAT_02394208;
                auVar44._4_12_ = local_2e8._4_12_;
                auVar44._0_4_ =
                     (local_2e8._0_4_ / *(float *)(uVar38 + 4 + (longlong)dVar29 * 4)) *
                     DAT_02394204;
                fVar40 = (float)_logf(auVar44._0_8_);
                *(float *)(uVar30 + 4 + (longlong)dVar29 * 4) = fVar40 * DAT_02394208;
                dVar29 = (double)((longlong)dVar29 + 2);
              } while (local_70 != dVar29);
            }
          }
LAB_01377700:
          if (0 < (int)(uint)local_80) {
            uVar38 = (ulonglong)local_80 & 0xffffffff;
            lVar16 = plVar8[2];
            if (uVar38 - 1 < 3) {
              uVar30 = 0;
            }
            else {
              uVar30 = 0;
              do {
                *(undefined4 *)(lVar16 + uVar30 * 4) = *(undefined4 *)(lVar16 + uVar38 * 4);
                *(undefined4 *)(lVar16 + 4 + uVar30 * 4) = *(undefined4 *)(lVar16 + uVar38 * 4);
                *(undefined4 *)(lVar16 + 8 + uVar30 * 4) = *(undefined4 *)(lVar16 + uVar38 * 4);
                *(undefined4 *)(lVar16 + 0xc + uVar30 * 4) = *(undefined4 *)(lVar16 + uVar38 * 4);
                uVar30 = uVar30 + 4;
              } while (((uint)local_80 & 0xfffffffc) != uVar30);
            }
            if ((ulonglong)((uint)local_80 & 3) != 0) {
              uVar31 = 0;
              do {
                *(undefined4 *)(lVar16 + uVar30 * 4 + uVar31 * 4) =
                     *(undefined4 *)(lVar16 + uVar38 * 4);
                uVar31 = uVar31 + 1;
              } while (((uint)local_80 & 3) != uVar31);
            }
          }
          iVar27 = SUB84(local_c0,0);
          iVar32 = (int)local_38;
          if ((int)(uVar12 + 1) < iVar27) {
            lVar15 = (longlong)(int)uVar12;
            local_328 = plVar8[2];
            lVar16 = (longlong)(int)(uVar12 + 1);
            for (uVar36 = ~uVar12 + iVar27 & 3; uVar36 != 0; uVar36 = uVar36 - 1) {
              *(undefined4 *)(local_328 + lVar16 * 4) = *(undefined4 *)(local_328 + lVar15 * 4);
              lVar16 = lVar16 + 1;
            }
            if (2 < (iVar27 - uVar12) - 2) {
              do {
                *(undefined4 *)(local_328 + lVar16 * 4) = *(undefined4 *)(local_328 + lVar15 * 4);
                *(undefined4 *)(local_328 + 4 + lVar16 * 4) =
                     *(undefined4 *)(local_328 + lVar15 * 4);
                *(undefined4 *)(local_328 + 8 + lVar16 * 4) =
                     *(undefined4 *)(local_328 + lVar15 * 4);
                *(undefined4 *)(local_328 + 0xc + lVar16 * 4) =
                     *(undefined4 *)(local_328 + lVar15 * 4);
                lVar16 = lVar16 + 4;
              } while (iVar27 != (int)lVar16);
            }
          }
          else {
            local_328 = plVar8[2];
          }
          plVar26 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
          FUN_015c15b0((float)(dVar2 / (DAT_0238fee8 / (double)local_68)));
          puVar18 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar18 = local_2f8;
          (*local_2f0)();
          local_d8._0_8_ = puVar18;
          if (iVar32 < (int)local_58) {
            iVar27 = SUB84(local_c0,0);
            do {
              local_a8 = (double)iVar32 * dVar2;
              iVar24 = (int)((local_a8 - local_98) * (double)local_68);
              if (iVar24 < 0) {
                iVar24 = 0;
              }
              if (local_c0._0_4_ <= iVar24) {
                iVar24 = iVar27 + -1;
              }
              iVar13 = FUN_00e7d850(((double)iVar24 / (double)local_68) * (double)plVar22);
              if (local_78._0_4_ <= iVar13) {
                iVar13 = local_e8._0_4_;
              }
              local_70 = (double)CONCAT44(local_70._4_4_,
                                          *(undefined4 *)(plVar8[2] + (longlong)iVar24 * 4));
              plVar26 = (longlong *)plVar7[2];
              local_60 = (double)CONCAT44(local_60._4_4_,
                                          *(undefined4 *)((longlong)plVar26 + (longlong)iVar13 * 4))
              ;
              plVar21 = (longlong *)FUN_00e8fc40();
              FUN_00d4ff40();
              *plVar21 = (longlong)local_318;
              *(undefined8 *)((longlong)plVar21 + 0xc) = 0;
              *(undefined8 *)((longlong)plVar21 + 0x14) = 0;
              *(undefined8 *)((longlong)plVar21 + 0x1c) = 0;
              *(undefined8 *)((longlong)plVar21 + 0x24) = 0;
              *(undefined1 *)((longlong)plVar21 + 0x2c) = 0;
              plVar21[6] = 0;
              plVar21[7] = 0;
              plVar21[8] = 0;
              plVar21[9] = 0;
              plVar21[10] = 0;
              plVar21[0xb] = 0;
              *(undefined4 *)(plVar21 + 0xc) = 0;
              (*local_310)();
              *(int *)((longlong)plVar21 + 0xc) = iVar32;
              *(undefined4 *)((longlong)plVar21 + 0x14) = local_70._0_4_;
              *(undefined4 *)(plVar21 + 2) = local_60._0_4_;
              FUN_00e7d850(local_a8 / local_320);
              pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                plVar26 = local_50;
              }
              FUN_014c36d0();
              plVar9 = local_48;
              if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
                  (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              *(undefined4 *)(plVar21 + 3) = *(undefined4 *)((longlong)plVar21 + 0x14);
              *(undefined4 *)((longlong)plVar21 + 0x1c) = *(undefined4 *)((longlong)plVar9 + 0x1c);
              *(undefined4 *)((longlong)plVar21 + 0x24) = *(undefined4 *)((longlong)plVar9 + 0x24);
              *(int *)(plVar21 + 5) = (int)plVar9[5];
              *(int *)(plVar21 + 4) = (int)plVar9[4];
              local_40 = '\0';
              local_48 = plVar21;
              FUN_00d21140();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              FUN_00d50b20();
              iVar32 = iVar32 + 1;
            } while ((int)local_58 != iVar32);
          }
          plVar22 = (longlong *)FUN_00e8fc40();
          FUN_010fe5f0();
          (**(code **)(*plVar22 + 0x18))();
          local_38 = plVar22;
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          local_280 = local_d8._0_8_;
          local_278 = '\0';
          FUN_014c2990();
          if ((local_278 != '\0') && (local_280 != 0)) {
            FUN_00d50b20();
          }
          bVar4 = true;
          if ((*(int *)((longlong)local_170 + 0xc) == 0) ||
             (local_88 = *(longlong **)local_170[2], local_88 == (longlong *)0x0)) {
            local_88 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            bVar4 = false;
          }
          auVar50._8_8_ = uStack_90 & _UNK_023945b8;
          auVar50._0_8_ =
               (double)((ulonglong)(local_98 * local_298) & _DAT_023945b0 | DAT_0240d3d8) +
               local_98 * local_298;
          roundsd(auVar50,auVar50,0xb);
          uStack_110 = SUB168(auVar58 | auVar52,8);
          dVar59 = dVar59 * local_298;
          auVar51._8_8_ = uStack_110 & _UNK_023945b8;
          auVar51._0_8_ = (double)((ulonglong)dVar59 & _DAT_023945b0 | DAT_0240d3d8) + dVar59;
          roundsd(auVar51,auVar51,0xb);
          if (((local_ec != 3) && (!bVar37)) && (local_88 != (longlong *)0x0)) {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
            plVar22 = local_88;
            if ((pvVar14 != (void *)0x0) &&
               (lVar16 = FUN_00e8b990(), plVar22 = local_88, lVar16 != 0)) {
              plVar26 = local_88;
              plVar22 = (longlong *)local_88[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar22 + 0x380))();
          }
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bb250();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bb2b0();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          plVar22 = local_50;
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), plVar22 = local_50, lVar16 != 0)
             ) {
            plVar26 = local_50;
            plVar22 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
          }
          lVar16 = (**(code **)(*plVar22 + 0x398))();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          plVar22 = local_38;
          if ((pvVar14 != (void *)0x0) && (lVar15 = FUN_00e8b990(), plVar22 = local_38, lVar15 != 0)
             ) {
            plVar26 = local_38;
            plVar22 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
          }
          lVar15 = (**(code **)(*plVar22 + 0x388))();
          dVar59 = ((double)lVar16 / local_188) * local_298;
          auVar55._0_8_ = (double)((ulonglong)dVar59 & _DAT_023945b0 | _DAT_023945c0) + dVar59;
          auVar55._8_8_ = _UNK_023945c8;
          auVar52 = roundsd(ZEXT816(0),auVar55,0xb);
          if (lVar15 < (longlong)auVar52._0_8_) {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
            plVar22 = local_38;
            if ((pvVar14 != (void *)0x0) &&
               (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
              plVar26 = local_38;
              plVar22 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar22 + 0x388))();
          }
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bcf80();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bfad0();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          FUN_014bc170();
          pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
          if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar26 = local_38;
          }
          local_270 = local_50;
          local_268 = '\0';
          dVar59 = (double)FUN_014d6170();
          if ((local_268 != '\0') && (local_270 != (longlong *)0x0)) {
            dVar59 = (double)FUN_00d50b20();
          }
          if (local_c8 == (longlong *)0x0) {
LAB_0137814e:
            local_80 = (longlong *)0x0;
            local_58 = 0;
          }
          else {
            pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
            if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar26 = local_c8;
            }
            dVar59 = (double)FUN_014bacf0();
            lVar16 = *(longlong *)(unaff_RDI + 0xd0);
            local_78 = dVar59;
            if (*(int *)(lVar16 + 0xc) < 1) goto LAB_0137814e;
            lVar15 = 0;
            local_98 = DAT_0241b670;
            uVar38 = 0;
            plVar26 = (longlong *)0x0;
            local_80 = (longlong *)0x0;
            do {
              pVar23 = (pthread_key_t)plVar26;
              plVar22 = *(longlong **)(*(longlong *)(lVar16 + 0x10) + lVar15 * 8);
              if (plVar22 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              pvVar14 = _pthread_getspecific(pVar23);
              if (pvVar14 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar59 = (double)FUN_014bacf0();
              dVar29 = (double)((ulonglong)(dVar59 - local_78) & _DAT_023908f0);
              dVar59 = local_98;
              plVar26 = local_80;
              uVar30 = uVar38;
              if (dVar29 < local_98) {
                pvVar14 = _pthread_getspecific(pVar23);
                plVar26 = plVar22;
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = (longlong *)plVar22[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                lVar16 = (**(code **)(*plVar26 + 0x380))();
                dVar59 = dVar29;
                plVar26 = local_80;
                if (-1 < lVar16) {
                  local_98 = dVar29;
                  if (local_80 == plVar22) {
                    if (((char)uVar38 == '\0') && (local_80 != (longlong *)0x0)) {
                      local_58 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
                      dVar59 = (double)FUN_00d50b00();
                      plVar26 = local_80;
                      uVar30 = local_58;
                    }
                  }
                  else {
                    if (plVar22 != (longlong *)0x0) {
                      lVar16 = FUN_00d50b00();
                      dVar29 = extraout_XMM0_Qa;
                    }
                    local_58 = CONCAT71((int7)((ulonglong)lVar16 >> 8),1);
                    dVar59 = dVar29;
                    plVar26 = plVar22;
                    uVar30 = local_58;
                    if (((char)uVar38 != '\0') && (local_80 != (longlong *)0x0)) {
                      local_80 = plVar22;
                      dVar59 = (double)FUN_00d50b20();
                      plVar26 = local_80;
                      uVar30 = local_58;
                    }
                  }
                }
              }
              local_58 = uVar30;
              local_80 = plVar26;
              if (plVar22 != (longlong *)0x0) {
                dVar59 = (double)FUN_00d50b20();
              }
              lVar15 = lVar15 + 1;
              lVar16 = *(longlong *)(unaff_RDI + 0xd0);
              plVar26 = (longlong *)(longlong)(int)*(pthread_key_t *)(lVar16 + 0xc);
              uVar38 = local_58 & 0xffffffff;
            } while (lVar15 < (longlong)plVar26);
            if (local_80 == (longlong *)0x0) {
              local_80 = (longlong *)0x0;
            }
            else {
              pvVar14 = _pthread_getspecific(*(pthread_key_t *)(lVar16 + 0xc));
              plVar22 = local_80;
              if ((pvVar14 != (void *)0x0) &&
                 (lVar16 = FUN_00e8b990(), plVar22 = local_80, lVar16 != 0)) {
                plVar26 = local_80;
                plVar22 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
              }
              lVar16 = (**(code **)(*plVar22 + 0x380))();
              pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
              plVar22 = local_38;
              if ((pvVar14 != (void *)0x0) &&
                 (lVar15 = FUN_00e8b990(), plVar22 = local_38, lVar15 != 0)) {
                plVar26 = local_38;
                plVar22 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
              }
              lVar15 = (**(code **)(*plVar22 + 0x380))();
              dVar59 = extraout_XMM0_Qa_00;
              if (lVar16 < lVar15) {
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                plVar22 = local_38;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
                  plVar26 = local_38;
                  plVar22 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x380))();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                plVar22 = local_80;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_80, lVar16 != 0)) {
                  plVar26 = local_80;
                  plVar22 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x380))();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                plVar22 = local_38;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
                  plVar26 = local_38;
                  plVar22 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x380))();
                FUN_014bb250();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                plVar22 = local_38;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
                  plVar26 = local_38;
                  plVar22 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x388))();
                FUN_014bb2b0();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                plVar22 = local_38;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar16 = FUN_00e8b990(), plVar22 = local_38, lVar16 != 0)) {
                  plVar26 = local_38;
                  plVar22 = (longlong *)local_38[(ulonglong)(*(uint *)(lVar16 + 0x154) & 1) + 4];
                }
                (**(code **)(*plVar22 + 0x398))();
                FUN_014bcf80();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                dVar59 = (double)FUN_014bfad0();
              }
            }
          }
          pVar23 = (pthread_key_t)plVar26;
          if (local_88 != (longlong *)0x0) {
            pvVar14 = _pthread_getspecific(pVar23);
            if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar26 = local_50;
            }
            dVar59 = (double)FUN_014bc420();
            pVar23 = (pthread_key_t)plVar26;
            if (local_48 == (longlong *)0x0) {
              bVar37 = false;
            }
            else {
              pvVar14 = _pthread_getspecific(pVar23);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                plVar26 = local_50;
              }
              FUN_014bc420();
              pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                plVar26 = local_88;
              }
              dVar59 = (double)FUN_014d6130();
              pVar23 = (pthread_key_t)plVar26;
              if (local_2d0 == local_2c0) {
                pvVar14 = _pthread_getspecific(pVar23);
                if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                  plVar26 = local_38;
                }
                lVar16 = FUN_014bb590();
                pvVar14 = _pthread_getspecific((pthread_key_t)plVar26);
                plVar22 = local_88;
                if ((pvVar14 != (void *)0x0) &&
                   (lVar15 = FUN_00e8b990(), plVar22 = local_88, lVar15 != 0)) {
                  plVar26 = local_88;
                  plVar22 = (longlong *)local_88[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                pVar23 = (pthread_key_t)plVar26;
                lVar15 = (**(code **)(*plVar22 + 0x380))();
                bVar37 = lVar16 == lVar15;
                dVar59 = extraout_XMM0_Qa_01;
              }
              else {
                bVar37 = false;
              }
              if ((local_2b8 != '\0') && (local_2c0 != 0)) {
                dVar59 = (double)FUN_00d50b20();
              }
              if ((local_2c8 != '\0') && (local_2d0 != 0)) {
                dVar59 = (double)FUN_00d50b20();
              }
            }
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              dVar59 = (double)FUN_00d50b20();
            }
            if (bVar37) {
              pvVar14 = _pthread_getspecific(pVar23);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pVar23 = (pthread_key_t)local_38;
              }
              local_260 = local_88;
              local_258 = '\0';
              FUN_014bc360();
              if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              pvVar14 = _pthread_getspecific(pVar23);
              if ((pvVar14 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
                pVar23 = (pthread_key_t)local_88;
              }
              local_250 = local_38;
              local_248 = '\0';
              dVar59 = (double)FUN_014bc2e0();
              if ((local_248 != '\0') && (local_250 != (longlong *)0x0)) {
                dVar59 = (double)FUN_00d50b20();
              }
            }
          }
          local_48 = local_38;
          local_40 = '\0';
          FUN_00d23370(dVar59,0);
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar14 = _pthread_getspecific(pVar23);
          if (pvVar14 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014bc3d0();
          local_390 = local_38;
          local_388 = 0;
          local_380 = 0;
          local_378 = 0;
          local_240 = 0;
          local_238 = '\0';
          local_230 = 0;
          local_228 = '\0';
          pVar23 = 0;
          uVar41 = FUN_01351de0(0,&local_390,&local_380,&local_240);
          plVar22 = local_48;
          if ((local_40 == '\0') && (local_48 != (longlong *)0x0)) {
            uVar41 = FUN_00d50b00();
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            uVar41 = FUN_00d50b20();
          }
          if ((local_238 != '\0') && (local_240 != 0)) {
            uVar41 = FUN_00d50b20();
          }
          if (plVar22 != (longlong *)0x0) {
            if (local_80 != (longlong *)0x0) {
              local_370 = local_80;
              local_368 = 0;
              local_360 = plVar22;
              local_358 = 0;
              FUN_01346520(uVar41,0);
            }
            local_350 = plVar22;
            local_348 = 0;
            FUN_0134aea0();
          }
          if (*(int *)(local_d8._0_8_ + 0xc) != 0) {
            local_98 = (double)*(int *)(**(longlong **)(local_d8._0_8_ + 0x10) + 0xc);
            plVar26 = (longlong *)FUN_00e8fc40();
            FUN_0110cb20();
            (**(code **)(*plVar26 + 0x18))();
            pvVar14 = _pthread_getspecific(pVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_018c2f50(local_98 * dVar2);
            pvVar14 = _pthread_getspecific(pVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_018c2fc0(dVar2);
            pvVar14 = _pthread_getspecific(pVar23);
            if (pvVar14 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_218 = '\0';
            local_220 = plVar26;
            FUN_014cc810();
            if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (0 < *(int *)(local_d8._0_8_ + 0xc)) {
              lVar16 = 0;
              local_c0 = 0.0;
              local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
              dVar59 = 0.0;
              dVar29 = 0.0;
              cVar10 = '\0';
              cVar34 = '\0';
              do {
                dVar33 = *(double *)(*(longlong *)(local_d8._0_8_ + 0x10) + lVar16 * 8);
                if (dVar29 == dVar33) {
                  if ((cVar10 == '\0') && (dVar29 != 0.0)) {
                    local_78 = (double)CONCAT71(local_78._1_7_,1);
                    FUN_00d50b00();
                    local_98 = dVar29;
                    goto LAB_013788e0;
                  }
                  local_78 = (double)CONCAT71(local_78._1_7_,cVar10);
                  local_98 = dVar29;
                  if (lVar16 == 0) goto LAB_013789c0;
LAB_013788f0:
                  dVar29 = local_c0;
                  dVar33 = *(double *)(*(longlong *)(local_d8._0_8_ + 0x10) + -8 + lVar16 * 8);
                  if (dVar59 == dVar33) {
                    if (((char)local_68 == '\0') && (dVar59 != 0.0)) {
                      local_70 = (double)CONCAT71(local_70._1_7_,1);
                      local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
                      FUN_00d50b00();
                      local_a8 = dVar59;
                    }
                    else {
LAB_01378a90:
                      local_70 = (double)CONCAT71(local_70._1_7_,(char)local_68);
                      dVar29 = local_c0;
                      local_a8 = dVar59;
                    }
                  }
                  else {
                    local_a8 = dVar33;
                    if (dVar33 != 0.0) {
                      FUN_00d50b00();
                    }
                    local_70 = (double)CONCAT71(local_70._1_7_,1);
                    if (((char)local_68 != '\0') && (dVar59 != 0.0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_98 = dVar33;
                  if (dVar33 != 0.0) {
                    FUN_00d50b00();
                  }
                  local_78 = (double)CONCAT71(local_78._1_7_,1);
                  if ((cVar10 != '\0') && (dVar29 != 0.0)) {
                    FUN_00d50b20();
                  }
LAB_013788e0:
                  if (lVar16 != 0) goto LAB_013788f0;
LAB_013789c0:
                  dVar29 = local_c0;
                  if (dVar59 == local_98) {
                    if (((local_78._0_1_ != '\0') && ((char)local_68 == '\0')) && (dVar59 != 0.0)) {
                      local_70 = (double)CONCAT71(local_70._1_7_,1);
                      local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
                      FUN_00d50b00();
                      local_a8 = dVar59;
                      goto LAB_01378a9d;
                    }
                    goto LAB_01378a90;
                  }
                  if ((local_78._0_1_ != '\0') && (local_98 != 0.0)) {
                    FUN_00d50b00();
                  }
                  dVar33 = local_98;
                  local_a8 = local_98;
                  local_70 = (double)CONCAT71(local_70._1_7_,local_78._0_1_);
                  if ((char)local_68 != '\0') {
                    local_a8 = local_98;
                    local_70 = (double)CONCAT71(local_70._1_7_,local_78._0_1_);
                    if (dVar59 != 0.0) {
                      FUN_00d50b20();
                      local_a8 = dVar33;
                      local_70 = (double)CONCAT71(local_70._1_7_,local_78._0_1_);
                    }
                  }
                }
LAB_01378a9d:
                if (lVar16 < (longlong)*(int *)(local_d8._0_8_ + 0xc) + -1) {
                  dVar33 = *(double *)(*(longlong *)(local_d8._0_8_ + 0x10) + 8 + lVar16 * 8);
                  if (dVar29 == dVar33) {
                    if ((cVar34 == '\0') && (dVar29 != 0.0)) {
                      local_60 = (double)CONCAT71(local_60._1_7_,1);
                      FUN_00d50b00();
                      dVar33 = dVar29;
                    }
                    else {
LAB_01378bf0:
                      local_60 = (double)CONCAT71(local_60._1_7_,cVar34);
                      dVar33 = dVar29;
                    }
                  }
                  else {
                    if (dVar33 != 0.0) {
                      FUN_00d50b00();
                    }
                    if ((cVar34 == '\0') ||
                       (local_60 = (double)CONCAT71(local_60._1_7_,1), dVar29 == 0.0)) {
                      local_60 = (double)CONCAT71(local_60._1_7_,1);
                    }
                    else {
                      FUN_00d50b20();
                    }
                  }
                }
                else if (dVar29 == local_98) {
                  if (((local_78._0_1_ == '\0') || (cVar34 != '\0')) || (dVar29 == 0.0))
                  goto LAB_01378bf0;
                  local_60 = (double)CONCAT71(local_60._1_7_,1);
                  local_68 = (longlong *)CONCAT44(local_68._4_4_,(uint)local_70._0_1_);
                  FUN_00d50b00();
                  dVar33 = dVar29;
                }
                else {
                  if ((local_78._0_1_ != '\0') && (local_98 != 0.0)) {
                    local_68 = (longlong *)CONCAT44(local_68._4_4_,(uint)local_70._0_1_);
                    FUN_00d50b00();
                  }
                  dVar33 = local_98;
                  local_60 = (double)CONCAT71(local_60._1_7_,local_78._0_1_);
                  if ((cVar34 != '\0') &&
                     (local_60 = (double)CONCAT71(local_60._1_7_,local_78._0_1_), dVar29 != 0.0)) {
                    local_68 = (longlong *)CONCAT44(local_68._4_4_,(uint)local_70._0_1_);
                    FUN_00d50b20();
                    local_60 = (double)CONCAT71(local_60._1_7_,local_78._0_1_);
                  }
                }
                dVar59 = local_a8;
                local_68 = (longlong *)(double)*(int *)((longlong)local_98 + 0xc);
                local_e8 = dVar33;
                auVar53._0_8_ =
                     _exp2f((*(float *)((longlong)dVar33 + 0x14) * DAT_0239426c +
                            *(float *)((longlong)local_a8 + 0x14) * DAT_0239426c +
                            *(float *)((longlong)local_98 + 0x14) * DAT_0239011c) * DAT_023941f4);
                auVar53._8_8_ = extraout_XMM0_Qb_05;
                auVar54._4_12_ = auVar53._4_12_;
                auVar54._0_4_ = (float)auVar53._0_8_ * DAT_023941f8;
                local_c0 = (double)CONCAT44(local_c0._4_4_,auVar54._0_4_);
                FUN_00c8e690(auVar54._0_8_,local_1ac / auVar54._0_4_);
                plVar21 = local_48;
                if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
                    (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00c92170();
                FUN_00c92160();
                local_68 = (longlong *)((double)local_68 * dVar2);
                ___bzero();
                local_210 = plVar21;
                local_208 = '\0';
                local_1f8 = '\0';
                local_1f0 = plVar6;
                local_1e8 = '\0';
                local_1e0 = local_1a0;
                local_1d8 = '\0';
                local_1d0 = local_1a8;
                local_1c8 = '\0';
                pVar23 = 0x1000;
                local_200 = plVar3;
                FUN_016450a0(local_68,&local_1f0,local_2b0,&local_1d0);
                if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                (**(code **)(DAT_02786500 + 0x20))();
                pvVar14 = _pthread_getspecific(pVar23);
                if (pvVar14 != (void *)0x0) {
                  FUN_00e8b990();
                }
                local_1c0 = plVar21;
                local_1b8 = '\0';
                FUN_018c3020();
                if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
                lVar16 = lVar16 + 1;
                local_c0 = local_e8;
                local_68 = (longlong *)CONCAT44(local_68._4_4_,(uint)local_70._0_1_);
                dVar29 = local_98;
                cVar10 = local_78._0_1_;
                cVar34 = local_60._0_1_;
              } while (lVar16 < *(int *)(local_d8._0_8_ + 0xc));
              if (local_60._0_1_ != '\0') {
                FUN_00d50b20();
              }
              if (local_70._0_1_ != '\0') {
                FUN_00d50b20();
              }
              if (local_78._0_1_ != '\0') {
                FUN_00d50b20();
              }
              if (plVar26 == (longlong *)0x0) goto LAB_01378f6e;
            }
            FUN_00d50b20();
          }
LAB_01378f6e:
          if (plVar22 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_58 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar4 && local_88 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_38 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar8 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar7 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (plVar20 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          bVar37 = false;
        }
        if (local_b0 != (longlong **)0x0) {
          FUN_00d50b20();
        }
        if (local_b8 != (longlong **)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_178 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = bVar37;
        if ((local_308 != (longlong *)0x0) && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar37 = bVar4;
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (local_e0 != 0) {
        FUN_00d50b20();
      }
      uVar38 = local_2a8 - 1;
      bVar4 = 1 < (longlong)local_2a8;
      plVar22 = local_180;
      local_2a8 = uVar38;
    } while (bVar4);
  }
  puVar18 = local_170;
  local_340 = local_170;
  local_338 = 0;
  FUN_0135d660();
  if (puVar18 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar17 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (local_1a8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_1a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar22 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}


