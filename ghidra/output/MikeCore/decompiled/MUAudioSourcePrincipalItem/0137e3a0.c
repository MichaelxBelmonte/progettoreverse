// Function: FUN_0137e3a0
// Address: 0137e3a0
// Size: 19779 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0137e3a0(undefined4 param_1,undefined8 *param_2)

{
  double dVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  void *pvVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined7 uVar19;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  byte bVar20;
  pthread_key_t in_ECX;
  pthread_key_t pVar21;
  longlong *plVar22;
  undefined1 *puVar23;
  longlong *plVar24;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined1 auVar25 [8];
  undefined1 auVar26 [8];
  longlong *plVar27;
  ulonglong unaff_R12;
  longlong *plVar28;
  undefined1 auVar29 [8];
  uint uVar30;
  float fVar31;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar32;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  longlong local_530;
  char local_528;
  longlong *local_520;
  undefined1 local_518;
  undefined8 local_510;
  undefined1 local_508;
  longlong *local_500;
  undefined1 local_4f8;
  longlong *local_4f0;
  undefined1 local_4e8;
  longlong *local_4e0;
  undefined1 local_4d8;
  longlong *local_4d0;
  undefined1 local_4c8;
  undefined8 local_4c0;
  undefined1 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8;
  undefined8 *local_4a0;
  undefined1 local_498;
  longlong *local_490;
  undefined1 local_488;
  longlong local_480;
  undefined1 local_478;
  longlong *local_470;
  char local_468;
  undefined1 local_458;
  undefined1 local_448;
  longlong local_440;
  undefined1 local_438;
  longlong local_430;
  undefined1 local_428;
  longlong local_420;
  undefined1 local_418;
  undefined1 local_410 [8];
  undefined1 local_408;
  longlong *local_400;
  undefined1 local_3f8;
  undefined1 local_3f0 [8];
  undefined1 local_3e8;
  longlong *local_3e0;
  undefined1 local_3d8;
  longlong local_3d0;
  undefined1 local_3c8;
  longlong *local_3c0;
  undefined1 local_3b8;
  longlong local_3b0;
  undefined1 local_3a8;
  longlong *local_3a0;
  undefined1 local_398;
  longlong *local_390;
  char local_388;
  longlong local_380;
  char local_378;
  ulonglong local_370;
  char local_368;
  undefined8 *local_360;
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
  longlong *local_2c0;
  char local_2b8;
  longlong *local_2b0;
  char local_2a8;
  undefined8 *local_2a0;
  char local_298;
  undefined8 *local_290;
  char local_288;
  undefined8 *local_280;
  char local_278;
  longlong local_270;
  char local_268;
  longlong *local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  undefined8 *local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong local_188;
  undefined8 *local_180;
  longlong *local_178;
  undefined4 local_16c;
  undefined1 *local_168;
  byte local_159;
  ulonglong local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined8 local_140;
  ulonglong local_138;
  undefined1 *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  char local_110;
  undefined1 local_108 [16];
  longlong *local_f8;
  undefined1 local_e9;
  longlong *local_e8;
  longlong *local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined1 local_a8 [8];
  uint uStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong *local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong *local_50;
  longlong *local_48;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) == 0) {
    local_58 = CONCAT44(local_58._4_4_,param_1);
    if (*(longlong *)(unaff_RDI + 0x200) == 0) {
      if (*(longlong *)(unaff_RDI + 0x148) != 0) {
        puVar17 = param_2;
        pvVar11 = _pthread_getspecific(in_ECX);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar10 = FUN_0141bab0();
        if (iVar10 != 3) {
          if (*(longlong *)(unaff_RDI + 0x1f8) != 0) goto LAB_0137e3d1;
          goto LAB_0137e50d;
        }
        if ((char)param_2 == '\0') {
          pvVar11 = _pthread_getspecific(in_ECX);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar31 = (float)FUN_013de3b0();
          if (fVar31 - (float)local_58 <= DAT_02411dec) goto LAB_0137e3d1;
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar12 = &DAT_025683c0;
          (*DAT_025683d8)();
          FUN_00c92170();
          local_180 = puVar12;
          FUN_00c92160();
          puVar12 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          pVar21 = 0x2572358;
          *puVar12 = &DAT_02572358;
          (*DAT_02572370)();
          plVar16 = *(longlong **)(unaff_RDI + 0x38);
          local_220 = puVar12;
          if (plVar16 == (longlong *)0x0) {
            local_90 = (longlong *)0x0;
          }
          else {
            pvVar11 = _pthread_getspecific(pVar21);
            if (pvVar11 != (void *)0x0) {
              plVar16 = *(longlong **)(unaff_RDI + 0x38);
              lVar13 = FUN_00e8b990();
              if (lVar13 != 0) {
                plVar16 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
              }
            }
            local_90 = (longlong *)(**(code **)(*plVar16 + 0x370))();
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          local_f8 = local_d0;
          plVar16 = local_d0;
          if (local_d0 == (longlong *)0x0) {
            local_16c = 1;
            local_f8 = (longlong *)0x0;
            local_168 = (undefined1 *)0x0;
          }
          else if (local_c8 == '\0') {
            uVar14 = FUN_00d50b00();
            local_16c = 0;
            local_168 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              uVar14 = FUN_00d50b20();
              local_168 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
              local_16c = 0;
            }
          }
          else {
            local_16c = 0;
            local_168 = (undefined1 *)CONCAT71((int7)((ulonglong)local_d0 >> 8),1);
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c2a40();
          local_178 = local_d0;
          if ((((local_c8 == '\0') && (local_d0 != (longlong *)0x0)) &&
              (FUN_00d50b00(), local_c8 != '\0')) && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar16 = (longlong *)FUN_00e8fc40();
          FUN_010fe5f0();
          (**(code **)(*plVar16 + 0x18))();
          pcVar7 = DAT_025e74b8;
          uVar30 = *(uint *)((longlong)local_178 + 0xc);
          local_48 = plVar16;
          if ((int)uVar30 < 1) {
            local_150 = 0;
            local_148 = (undefined8 *)0x0;
            local_158 = 0;
            local_138 = 0;
          }
          else {
            local_58 = CONCAT44(local_58._4_4_,uVar30);
            lVar13 = 0;
            local_138 = 0;
            local_158 = 0;
            local_148 = (undefined8 *)0x0;
            local_150 = 0;
            do {
              unaff_R12 = local_158 & 0xffffffff;
              lVar15 = local_178[2];
              uVar18 = *(ulonglong *)(lVar15 + lVar13 * 8);
              puVar12 = puVar17;
              if (local_138 == uVar18) {
                local_158 = unaff_R12;
                uVar8 = local_138;
                if (((char)unaff_R12 == '\0') && (uVar18 != 0)) {
                  local_158 = CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
                  FUN_00d50b00();
                  puVar12 = puVar17;
                  uVar8 = local_138;
                }
              }
              else {
                if (uVar18 != 0) {
                  lVar15 = FUN_00d50b00();
                  puVar12 = puVar17;
                }
                local_158 = CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
                uVar8 = uVar18;
                if (((char)unaff_R12 != '\0') && (local_138 != 0)) {
                  FUN_00d50b20();
                }
              }
              local_138 = uVar8;
              puVar17 = (undefined8 *)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar17 = &DAT_025e74a0;
              *(undefined8 *)((longlong)puVar17 + 0xc) = 0;
              *(undefined8 *)((longlong)puVar17 + 0x14) = 0;
              *(undefined8 *)((longlong)puVar17 + 0x1c) = 0;
              *(undefined8 *)((longlong)puVar17 + 0x24) = 0;
              *(undefined1 *)((longlong)puVar17 + 0x2c) = 0;
              puVar17[6] = 0;
              puVar17[7] = 0;
              puVar17[8] = 0;
              puVar17[9] = 0;
              puVar17[10] = 0;
              puVar17[0xb] = 0;
              *(undefined4 *)(puVar17 + 0xc) = 0;
              (*pcVar7)();
              bVar20 = (byte)local_150 & local_148 != (undefined8 *)0x0;
              pVar21 = (pthread_key_t)CONCAT71((int7)((ulonglong)local_150 >> 8),bVar20);
              if (bVar20 == 1) {
                FUN_00d50b20();
              }
              local_370 = local_138;
              local_368 = '\0';
              FUN_014ee580();
              if ((local_368 != '\0') && (local_370 != 0)) {
                FUN_00d50b20();
              }
              *(float *)((longlong)puVar17 + 0x14) =
                   *(float *)((longlong)puVar17 + 0x14) + DAT_02394218;
              pvVar11 = _pthread_getspecific(pVar21);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_358 = '\0';
              local_360 = puVar17;
              FUN_014c2e20();
              if ((local_358 != '\0') && (local_360 != (undefined8 *)0x0)) {
                FUN_00d50b20();
              }
              lVar13 = lVar13 + 1;
              local_150 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
              local_148 = puVar17;
            } while (lVar13 < *(int *)((longlong)local_178 + 0xc));
            local_150 = CONCAT71((int7)(int3)((uint)*(int *)((longlong)local_178 + 0xc) >> 8),1);
            uVar30 = (uint)(float)local_58;
          }
          plVar16 = (longlong *)(ulonglong)uVar30;
          local_159 = (int)uVar30 < 1;
          pvVar11 = _pthread_getspecific(uVar30);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar16 = local_48;
          }
          FUN_014bc170(DAT_02390124);
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar16 = local_48;
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          plVar24 = local_f8;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar24 = local_f8, lVar13 != 0)
             ) {
            plVar16 = local_f8;
            plVar24 = (longlong *)local_f8[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar24 + 0x380))();
          FUN_014bb250();
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar16 = local_48;
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          plVar24 = local_f8;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar24 = local_f8, lVar13 != 0)
             ) {
            plVar16 = local_f8;
            plVar24 = (longlong *)local_f8[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
          }
          pVar21 = (pthread_key_t)plVar16;
          (**(code **)(*plVar24 + 0x388))();
          FUN_014bb2b0();
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar21 = (pthread_key_t)local_48;
          }
          local_210 = 0;
          if (unaff_RDI != 0) {
            FUN_00d50b00();
          }
          local_210 = '\x01';
          local_218 = unaff_RDI;
          FUN_014ce440();
          if ((local_210 != '\0') && (local_218 != 0)) {
            FUN_00d50b20();
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar21 = (pthread_key_t)local_48;
          }
          local_200 = 0;
          if (unaff_RDI != 0) {
            FUN_00d50b00();
          }
          local_200 = '\x01';
          local_208 = unaff_RDI;
          FUN_014ceed0();
          if ((local_200 != '\0') && (local_208 != 0)) {
            FUN_00d50b20();
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar21 = (pthread_key_t)local_48;
          }
          local_1f0 = 0;
          if (unaff_RDI != 0) {
            FUN_00d50b00();
          }
          local_1f0 = '\x01';
          local_1f8 = unaff_RDI;
          FUN_014cfcc0();
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            FUN_00d50b20();
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar21 = (pthread_key_t)local_48;
          }
          plVar16 = *(longlong **)(unaff_RDI + 0x38);
          if (plVar16 == (longlong *)0x0) {
            uVar32 = 0;
          }
          else {
            pvVar11 = _pthread_getspecific(pVar21);
            if (pvVar11 != (void *)0x0) {
              plVar16 = *(longlong **)(unaff_RDI + 0x38);
              lVar13 = FUN_00e8b990();
              if (lVar13 != 0) {
                plVar16 = (longlong *)plVar16[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
              }
            }
            uVar32 = (**(code **)(*plVar16 + 0x370))();
          }
          FUN_014bd640(uVar32);
          local_520 = local_48;
          local_518 = 0;
          local_510 = 0;
          local_508 = 0;
          local_350 = 0;
          local_348 = '\0';
          local_340 = 0;
          local_338 = '\0';
          pVar21 = 0;
          FUN_01351de0(0,&local_520,&local_510,&local_350);
          if ((local_528 != '\0') && (local_530 != 0)) {
            FUN_00d50b20();
          }
          if ((local_338 != '\0') && (local_340 != 0)) {
            FUN_00d50b20();
          }
          if ((local_348 != '\0') && (local_350 != 0)) {
            FUN_00d50b20();
          }
          local_d0 = local_48;
          local_c8 = '\0';
          cVar9 = FUN_00d24090();
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            local_500 = local_48;
            local_4f8 = 0;
            FUN_0134aad0();
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar21 = (pthread_key_t)local_48;
          }
          FUN_014d1d00();
          lVar13 = local_118;
          if (local_110 == '\0') {
            if (local_118 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_110 = '\0';
          }
          local_d0 = (longlong *)lVar13;
          local_c8 = '\0';
          cVar9 = FUN_00d24090();
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if (cVar9 == '\0') {
            pvVar11 = _pthread_getspecific(pVar21);
            if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              pVar21 = (pthread_key_t)local_48;
            }
            FUN_014d1d00();
            plVar16 = local_d0;
            if (local_c8 == '\0') {
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            local_438 = 1;
            local_440 = (longlong)plVar16;
            FUN_0134aea0();
            if (plVar16 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar21 = (pthread_key_t)local_f8;
          }
          FUN_014d1d00();
          lVar13 = local_118;
          if (local_110 == '\0') {
            if (local_118 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_110 = '\0';
          }
          local_d0 = (longlong *)lVar13;
          local_c8 = '\0';
          cVar9 = FUN_00d24090();
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if (cVar9 != '\0') {
            pvVar11 = _pthread_getspecific(pVar21);
            if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              pVar21 = (pthread_key_t)local_f8;
            }
            FUN_014d1d00();
            plVar16 = local_d0;
            if (local_c8 == '\0') {
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            local_428 = 1;
            local_430 = (longlong)plVar16;
            FUN_0134afd0();
            if (plVar16 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar21 = (pthread_key_t)local_f8;
          }
          uVar32 = FUN_014d1d00();
          plVar16 = local_d0;
          if (local_c8 == '\0') {
            if (local_d0 != (longlong *)0x0) {
              uVar32 = FUN_00d50b00();
            }
          }
          else {
            local_c8 = '\0';
          }
          local_418 = 1;
          local_420 = (longlong)plVar16;
          FUN_01353c30(uVar32,1);
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_d0 = local_f8;
          local_c8 = '\0';
          cVar9 = FUN_00d24090();
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar9 == '\0') {
            local_4f0 = local_f8;
            local_4e8 = 0;
            FUN_0134a9a0();
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar13 = *(longlong *)(unaff_RDI + 0xe8);
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          uVar30 = (int)((double)local_90 * DAT_0241b6a8) * 2;
          plVar24 = (longlong *)(ulonglong)uVar30;
          local_328 = '\x01';
          local_e0 = (longlong *)CONCAT44(local_e0._4_4_,uVar30);
          local_330 = lVar13;
          FUN_014d5e20(DAT_02394240);
          plVar16 = local_d0;
          if (local_c8 == '\0') {
            if (((local_d0 != (longlong *)0x0) && (FUN_00d50b00(), local_c8 != '\0')) &&
               (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_c8 = '\0';
          }
          if ((local_328 != '\0') && (local_330 != 0)) {
            FUN_00d50b20();
          }
          if (plVar16 != (longlong *)0x0) {
            local_c8 = '\0';
            local_d0 = (longlong *)0x0;
            local_c0 = plVar16;
            local_b8 = 0xffffffff;
            local_b0 = 0;
            while( true ) {
              lVar13 = (longlong)(int)local_b8;
              iVar10 = (int)local_b8 + 1;
              local_b8 = CONCAT44(local_b8._4_4_,iVar10);
              if (*(int *)((longlong)local_c0 + 0xc) <= iVar10) break;
              local_4e0 = *(longlong **)(local_c0[2] + 8 + lVar13 * 8);
              local_4d8 = 0;
              local_d0 = local_4e0;
              FUN_013295b0();
              if (local_b8._4_4_ != 0) {
                if (local_b8 < 0) {
                  iVar10 = -local_b8._4_4_;
                }
                else {
                  local_b8 = CONCAT44(local_b8._4_4_,(int)local_b8 - local_b8._4_4_);
                  FUN_00d23690();
                  local_b0 = local_b0 + local_b8._4_4_;
                  iVar10 = 0;
                }
                local_b8 = CONCAT44(iVar10,(int)local_b8);
              }
            }
            plVar24 = local_c0;
            FUN_0131c810();
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
          plVar27 = local_48;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar27 = local_48, lVar13 != 0)
             ) {
            plVar24 = local_48;
            plVar27 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
          }
          local_90 = (longlong *)(**(code **)(*plVar27 + 0x380))();
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar24 = local_48;
          }
          local_130 = (undefined1 *)FUN_014bb590();
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
          plVar27 = local_48;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar27 = local_48, lVar13 != 0)
             ) {
            plVar24 = local_48;
            plVar27 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
          }
          pVar21 = (pthread_key_t)plVar24;
          uVar32 = (**(code **)(*plVar27 + 0x3e0))();
          local_88 = (longlong *)CONCAT44(local_88._4_4_,uVar32);
          pvVar11 = _pthread_getspecific(pVar21);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar13 = *(longlong *)(unaff_RDI + 200);
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          local_318 = '\x01';
          plVar24 = (longlong *)0x0;
          local_320 = lVar13;
          FUN_014d5e20(DAT_02394240);
          plVar27 = plVar16;
          if (plVar16 == local_d0) {
LAB_013805d7:
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar27 = local_d0;
            if (local_c8 == '\0') {
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (plVar16 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              goto LAB_013805d7;
            }
            if (plVar16 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_c8 = '\0';
          }
          if ((local_318 != '\0') && (local_320 != 0)) {
            FUN_00d50b20();
          }
          local_128 = plVar27;
          if (*(int *)((longlong)plVar27 + 0xc) < 1) {
            local_50 = (longlong *)0x0;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_108._8_8_;
            local_108 = auVar3 << 0x40;
            local_140 = 0;
            local_120 = (longlong *)0x0;
            local_e8 = (longlong *)0x0;
            local_e0 = (longlong *)0x0;
            local_70 = 0;
            local_80 = (longlong *)0x0;
            local_78 = (longlong *)0x0;
            auVar29 = (undefined1  [8])0x0;
            local_58 = 0;
            plVar16 = local_e0;
LAB_01380c89:
            local_e0 = plVar16;
            local_88 = (longlong *)0x0;
            local_68 = (longlong *)0x0;
          }
          else {
            _local_a8 = ZEXT416(DAT_02394264);
            lVar13 = 0;
            local_50 = (longlong *)0x0;
            local_60 = 0;
            auVar29 = (undefined1  [8])0x0;
            local_58 = 0;
            do {
              lVar15 = local_128[2];
              plVar16 = *(longlong **)(lVar15 + lVar13 * 8);
              plVar24 = local_128;
              if (auVar29 == (undefined1  [8])plVar16) {
                if (((char)local_58 == '\0') && (auVar29 != (undefined1  [8])0x0)) {
                  local_58 = CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (plVar16 != (longlong *)0x0) {
                  lVar15 = FUN_00d50b00();
                }
                if (((char)local_58 == '\0') || (auVar29 == (undefined1  [8])0x0)) {
                  local_58 = CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
                  auVar29 = (undefined1  [8])plVar16;
                }
                else {
                  uVar14 = FUN_00d50b20();
                  local_58 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                  auVar29 = (undefined1  [8])plVar16;
                }
              }
              pVar21 = (pthread_key_t)plVar24;
              pvVar11 = _pthread_getspecific(pVar21);
              plVar16 = (longlong *)auVar29;
              if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                plVar16 = *(longlong **)
                           ((longlong)auVar29 + ((ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4) * 8
                           );
              }
              lVar15 = (**(code **)(*plVar16 + 0x380))();
              if (lVar15 <= (longlong)local_90) {
                pvVar11 = _pthread_getspecific(pVar21);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                lVar15 = FUN_014bb590();
                if ((longlong)local_90 < lVar15) {
                  pvVar11 = _pthread_getspecific(pVar21);
                  plVar16 = (longlong *)auVar29;
                  if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
                    plVar16 = *(longlong **)
                               ((longlong)auVar29 +
                               ((ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4) * 8);
                  }
                  fVar31 = (float)(**(code **)(*plVar16 + 0x3e0))();
                  plVar16 = local_50;
                  if ((float)((uint)(fVar31 - local_88._0_4_) & _DAT_02390140) < local_a8._0_4_) {
                    if ((undefined1  [8])local_50 == auVar29) {
                      if (((char)local_58 == '\0') || ((char)local_60 != '\0')) {
                        unaff_R12 = local_60 & 0xffffffff;
                      }
                      else if (local_50 == (longlong *)0x0) {
                        unaff_R12 = local_60 & 0xffffffff;
                      }
                      else {
                        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),1);
                        local_60 = 0;
                        FUN_00d50b00();
                      }
                    }
                    else {
                      if (((char)local_58 != '\0') && (auVar29 != (undefined1  [8])0x0)) {
                        FUN_00d50b00();
                      }
                      unaff_R12 = local_58 & 0xffffffff;
                      plVar16 = (longlong *)auVar29;
                      if (((char)local_60 != '\0') &&
                         (unaff_R12 = local_58 & 0xffffffff, local_50 != (longlong *)0x0)) {
                        FUN_00d50b20();
                        unaff_R12 = local_58 & 0xffffffff;
                      }
                    }
                    local_60 = unaff_R12 & 0xffffffff;
                    pvVar11 = _pthread_getspecific(pVar21);
                    plVar24 = (longlong *)auVar29;
                    if (pvVar11 != (void *)0x0) {
                      local_60 = unaff_R12 & 0xffffffff;
                      lVar15 = FUN_00e8b990();
                      if (lVar15 != 0) {
                        plVar24 = *(longlong **)
                                   ((longlong)auVar29 +
                                   ((ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4) * 8);
                      }
                    }
                    local_60 = unaff_R12 & 0xffffffff;
                    uVar14 = (**(code **)(*plVar24 + 0x3e0))();
                    local_a8._4_4_ = (uint)((ulonglong)uVar14 >> 0x20) & _UNK_02390144;
                    local_a8._0_4_ = (uint)((float)uVar14 - local_88._0_4_) & _DAT_02390140;
                    uStack_a0 = extraout_XMM0_Dc & _UNK_02390148;
                    uStack_9c = extraout_XMM0_Dd & _UNK_0239014c;
                    local_60 = unaff_R12 & 0xffffffff;
                    local_50 = plVar16;
                  }
                }
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)((longlong)local_128 + 0xc));
            if (*(int *)((longlong)local_128 + 0xc) < 1) {
              plVar16 = (longlong *)0x0;
              plVar27 = (longlong *)0x0;
            }
            else {
              local_108 = ZEXT416(DAT_02394264);
              plVar24 = (longlong *)0x0;
              plVar27 = (longlong *)0x0;
              local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
              plVar16 = (longlong *)auVar29;
              do {
                lVar13 = local_128[2];
                plVar28 = *(longlong **)(lVar13 + (longlong)plVar24 * 8);
                local_a8 = auVar29;
                plVar22 = local_128;
                if (auVar29 == (undefined1  [8])plVar28) {
                  if (((char)local_58 == '\0') && (auVar29 != (undefined1  [8])0x0)) {
                    local_58 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
                    plVar16 = (longlong *)0x0;
                    FUN_00d50b00();
                  }
                }
                else {
                  if (plVar28 != (longlong *)0x0) {
                    plVar16 = (longlong *)(local_58 & 0xffffffff);
                    lVar13 = FUN_00d50b00();
                  }
                  if (((char)local_58 == '\0') || (local_a8 == (undefined1  [8])0x0)) {
                    local_58 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
                    local_a8 = (undefined1  [8])plVar28;
                  }
                  else {
                    plVar16 = (longlong *)(local_58 & 0xffffffff);
                    local_a8 = (undefined1  [8])plVar28;
                    uVar14 = FUN_00d50b20();
                    local_58 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                  }
                }
                auVar29 = local_a8;
                pVar21 = (pthread_key_t)plVar22;
                local_68 = plVar24;
                pvVar11 = _pthread_getspecific(pVar21);
                auVar25 = auVar29;
                if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  auVar25 = (undefined1  [8])
                            *(longlong **)
                             ((longlong)auVar29 +
                             ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
                }
                lVar13 = (**(code **)(*(longlong *)auVar25 + 0x380))();
                if (lVar13 < (longlong)local_130) {
                  pvVar11 = _pthread_getspecific(pVar21);
                  if (pvVar11 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  lVar13 = FUN_014bb590();
                  if (lVar13 < (longlong)local_130) goto LAB_01380945;
                  pvVar11 = _pthread_getspecific(pVar21);
                  auVar25 = auVar29;
                  if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    auVar25 = (undefined1  [8])
                              *(longlong **)
                               ((longlong)auVar29 +
                               ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
                  }
                  fVar31 = (float)(**(code **)(*(longlong *)auVar25 + 0x3e0))();
                  if (local_108._0_4_ <= (float)((uint)(fVar31 - local_88._0_4_) & _DAT_02390140))
                  goto LAB_01380945;
                  if ((undefined1  [8])plVar27 == auVar29) {
                    auVar25 = (undefined1  [8])plVar27;
                    if ((((char)local_58 == '\0') || ((char)local_78 != '\0')) ||
                       (plVar27 == (longlong *)0x0)) {
                      plVar16 = (longlong *)((ulonglong)local_78 & 0xffffffff);
                    }
                    else {
                      plVar16 = (longlong *)CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
                      local_78 = (longlong *)((ulonglong)local_78 & 0xffffffff00000000);
                      FUN_00d50b00();
                    }
                  }
                  else {
                    if (((char)local_58 != '\0') && (auVar29 != (undefined1  [8])0x0)) {
                      FUN_00d50b00();
                    }
                    plVar16 = (longlong *)(local_58 & 0xffffffff);
                    auVar25 = auVar29;
                    if (((char)local_78 != '\0') &&
                       (plVar16 = (longlong *)(local_58 & 0xffffffff), plVar27 != (longlong *)0x0))
                    {
                      FUN_00d50b20();
                      plVar16 = (longlong *)(local_58 & 0xffffffff);
                    }
                  }
                  uVar32 = SUB84(plVar16,0);
                  local_78._0_4_ = uVar32;
                  pvVar11 = _pthread_getspecific(pVar21);
                  auVar26 = auVar29;
                  if ((pvVar11 != (void *)0x0) &&
                     (local_78._0_4_ = uVar32, lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                    auVar26 = (undefined1  [8])
                              *(longlong **)
                               ((longlong)auVar29 +
                               ((ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4) * 8);
                  }
                  local_78 = (longlong *)CONCAT44(local_78._4_4_,uVar32);
                  uVar14 = (**(code **)(*(longlong *)auVar26 + 0x3e0))();
                  local_108._4_4_ = (uint)((ulonglong)uVar14 >> 0x20) & _UNK_02390144;
                  local_108._0_4_ = (uint)((float)uVar14 - local_88._0_4_) & _DAT_02390140;
                  local_108._8_4_ = extraout_XMM0_Dc_00 & _UNK_02390148;
                  local_108._12_4_ = extraout_XMM0_Dd_00 & _UNK_0239014c;
                  plVar27 = (longlong *)auVar25;
                }
                else {
LAB_01380945:
                  plVar16 = (longlong *)((ulonglong)local_78 & 0xffffffff);
                }
                plVar24 = (longlong *)((longlong)local_68 + 1);
                local_78 = (longlong *)CONCAT44(local_78._4_4_,(int)plVar16);
              } while ((longlong)plVar24 < (longlong)*(int *)((longlong)local_128 + 0xc));
            }
            bVar2 = true;
            plVar24 = local_128;
            local_88 = plVar16;
            local_68 = plVar27;
            if (local_50 == (longlong *)0x0) {
              local_70 = 0;
              local_a8._0_4_ = 1;
              plVar16 = (longlong *)0x0;
            }
            else {
              pvVar11 = _pthread_getspecific((pthread_key_t)local_128);
              if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                plVar24 = local_50;
              }
              uVar14 = FUN_014bc340();
              plVar16 = local_d0;
              if (local_d0 == (longlong *)0x0) {
                local_70 = 0;
                plVar16 = (longlong *)0x0;
LAB_01380d43:
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_c8 == '\0') {
                  uVar14 = FUN_00d50b00();
                  local_70 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                  goto LAB_01380d43;
                }
                local_70 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
              }
              if (plVar16 == (longlong *)0x0) {
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar24 = local_50;
                }
                FUN_014d19a0();
                plVar16 = local_d0;
                if (local_d0 == (longlong *)0x0) {
                  plVar16 = (longlong *)0x0;
                  plVar27 = (longlong *)(local_70 & 0xffffffff);
                }
                else {
                  plVar27 = (longlong *)CONCAT71((int7)((ulonglong)plVar27 >> 8),1);
                  if (((local_c8 == '\0') && (FUN_00d50b00(), local_c8 != '\0')) &&
                     (local_d0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                auVar5._12_4_ = 0;
                auVar5._0_12_ = stack0xffffffffffffff5c;
                _local_a8 = auVar5 << 0x20;
                local_70 = (ulonglong)plVar27 & 0xffffffff;
              }
              else {
                auVar4._12_4_ = 0;
                auVar4._0_12_ = stack0xffffffffffffff5c;
                _local_a8 = auVar4 << 0x20;
              }
            }
            if (local_68 == (longlong *)0x0) {
              local_80 = (longlong *)0x0;
              plVar28 = (longlong *)0x0;
            }
            else {
              pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
              if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                plVar24 = local_68;
              }
              uVar14 = FUN_014bc420();
              plVar28 = local_d0;
              if (local_d0 == (longlong *)0x0) {
                local_80 = (longlong *)0x0;
                plVar28 = (longlong *)0x0;
LAB_01380e9f:
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                if (local_c8 == '\0') {
                  uVar14 = FUN_00d50b00();
                  local_80 = (longlong *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                  goto LAB_01380e9f;
                }
                local_80 = (longlong *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
              }
              if (plVar28 == (longlong *)0x0) {
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar24 = local_68;
                }
                FUN_014d1b50();
                plVar28 = local_d0;
                if (local_d0 == (longlong *)0x0) {
                  plVar28 = (longlong *)0x0;
                  plVar27 = (longlong *)((ulonglong)local_80 & 0xffffffff);
                }
                else {
                  plVar27 = (longlong *)CONCAT71((int7)((ulonglong)plVar27 >> 8),1);
                  if (((local_c8 == '\0') && (FUN_00d50b00(), local_c8 != '\0')) &&
                     (local_d0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                bVar2 = false;
                local_80 = (longlong *)((ulonglong)plVar27 & 0xffffffff);
              }
              else {
                bVar2 = false;
              }
            }
            local_78 = plVar28;
            if ((local_a8[0] == '\0') && (local_50 == local_68)) {
              pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014d1d00();
              lVar13 = local_118;
              if (local_110 == '\0') {
                if (local_118 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_110 = '\0';
              }
              local_408 = 1;
              FUN_0135f200(((longlong)local_130 + (longlong)local_90) / 2,local_410,&local_188,
                           &local_e9);
              local_120 = local_d0;
              plVar24 = local_d0;
              if (local_d0 == (longlong *)0x0) {
                local_120 = (longlong *)0x0;
                local_140 = 0;
              }
              else {
                local_140 = CONCAT71((int7)((ulonglong)local_d0 >> 8),1);
                if (local_c8 == '\0') {
                  FUN_00d50b00();
                }
              }
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              if ((local_110 != '\0') && (local_118 != 0)) {
                FUN_00d50b20();
              }
              pVar21 = (pthread_key_t)plVar24;
              if (local_120 == (longlong *)0x0) {
                local_e8 = (longlong *)0x0;
                local_68 = local_50;
                uVar30 = (uint)local_88;
                local_120 = (longlong *)0x0;
              }
              else {
                local_4d0 = local_120;
                local_4c8 = 0;
                FUN_01326e80();
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar24 = local_120;
                }
                pVar21 = (pthread_key_t)plVar24;
                FUN_013de560();
                plVar24 = local_d0;
                uVar19 = (undefined7)((ulonglong)plVar27 >> 8);
                if (local_d0 == local_68) {
                  plVar24 = local_50;
                  if (((char)local_88 == '\0') && (local_68 != (longlong *)0x0)) {
                    uVar30 = (uint)CONCAT71(uVar19,1);
                    if (local_c8 != '\0') goto LAB_0138146e;
                    uVar30 = (uint)CONCAT71(uVar19,1);
                    FUN_00d50b00();
                  }
                  else {
                    uVar30 = (uint)local_88;
                  }
LAB_01381454:
                  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_c8 == '\0') {
                    if (local_d0 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                    uVar30 = (uint)CONCAT71(uVar19,1);
                    if (((char)local_88 != '\0') && (local_50 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_01381454;
                  }
                  uVar30 = (uint)CONCAT71(uVar19,1);
                  if (((char)local_88 != '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
LAB_0138146e:
                local_c8 = '\0';
                local_d0 = plVar24;
                local_68 = plVar24;
                FUN_00d21140();
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_e8 = (longlong *)0x0;
              }
LAB_013814b6:
              local_98 = &DAT_02802501;
              pvVar11 = _pthread_getspecific(pVar21);
              plVar24 = local_50;
              if ((pvVar11 != (void *)0x0) &&
                 (lVar13 = FUN_00e8b990(), plVar24 = local_50, lVar13 != 0)) {
                plVar24 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
              }
              lVar13 = (**(code **)(*plVar24 + 0x380))();
              plVar24 = (longlong *)(longlong)(int)local_e0;
              if ((longlong)local_90 - (longlong)plVar24 < lVar13 && local_a8[0] == '\0') {
                if ((char)local_60 == '\0') {
                  uVar18 = 0;
                  goto LAB_01381560;
                }
                auVar6._8_8_ = 0;
                auVar6._0_8_ = local_108._8_8_;
                local_108 = auVar6 << 0x40;
                local_50 = (longlong *)0x0;
                FUN_00d50b20();
              }
              else {
                local_108._0_8_ = local_60;
              }
            }
            else {
              if (bVar2) {
LAB_01380fab:
                local_120 = (longlong *)0x0;
                local_e8 = (longlong *)0x0;
                uVar30 = (uint)local_88;
                plVar24 = (longlong *)0x0;
                pVar21 = 0;
                local_140 = 0;
                if (local_a8[0] == '\0') goto LAB_013814b6;
                local_140 = 0;
                uVar18 = local_60;
              }
              else {
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                  plVar24 = local_68;
                }
                FUN_014d1d00();
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013dfdd0();
                if (local_d0 == (longlong *)0x0) {
                  if ((local_110 != '\0') && (local_118 != 0)) {
                    FUN_00d50b20();
                  }
                  goto LAB_01380fab;
                }
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                plVar27 = local_68;
                if ((pvVar11 != (void *)0x0) &&
                   (lVar13 = FUN_00e8b990(), plVar27 = local_68, lVar13 != 0)) {
                  plVar24 = local_68;
                  plVar27 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
                }
                lVar13 = (**(code **)(*plVar27 + 0x380))();
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                plVar27 = local_48;
                if ((pvVar11 != (void *)0x0) &&
                   (lVar15 = FUN_00e8b990(), plVar27 = local_48, lVar15 != 0)) {
                  plVar24 = local_48;
                  plVar27 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
                }
                lVar15 = (**(code **)(*plVar27 + 0x380))();
                local_e8 = (longlong *)
                           CONCAT71((int7)(int3)((ulonglong)local_e0 >> 8),
                                    (longlong)(int)local_e0 < lVar13 - lVar15);
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_110 != '\0') && (local_118 != 0)) {
                  FUN_00d50b20();
                }
                pVar21 = (pthread_key_t)plVar24;
                local_120 = (longlong *)0x0;
                local_140 = 0;
                uVar30 = (uint)local_88;
                uVar18 = local_60;
                if (local_a8[0] == '\0') goto LAB_013814b6;
              }
LAB_01381560:
              local_108._0_8_ = uVar18;
              local_50 = (longlong *)0x0;
            }
            if (local_68 == (longlong *)0x0) {
              local_68 = (longlong *)0x0;
            }
            else {
              local_98 = &DAT_02802501;
              local_60 = local_108._0_8_;
              pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
              if (pvVar11 != (void *)0x0) {
                local_60 = local_108._0_8_;
                FUN_00e8b990();
              }
              local_60 = local_108._0_8_;
              lVar13 = FUN_014bb590();
              plVar24 = (longlong *)((longlong)(int)local_e0 + (longlong)local_130);
              if (lVar13 < (longlong)plVar24) {
                if ((char)uVar30 == '\0') goto LAB_01380c89;
                local_88 = (longlong *)0x0;
                local_68 = (longlong *)0x0;
                local_60 = local_108._0_8_;
                FUN_00d50b20();
                local_e0 = plVar16;
                goto LAB_0138164a;
              }
            }
            local_88 = (longlong *)(ulonglong)uVar30;
            local_e0 = plVar16;
          }
LAB_0138164a:
          if (0 < *(int *)((longlong)local_128 + 0xc)) {
            lVar13 = 0;
            do {
              lVar15 = local_128[2];
              plVar16 = *(longlong **)(lVar15 + lVar13 * 8);
              local_a8 = auVar29;
              plVar24 = local_128;
              if (auVar29 == (undefined1  [8])plVar16) {
                if (((char)local_58 == '\0') && (auVar29 != (undefined1  [8])0x0)) {
                  local_58 = CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
                  FUN_00d50b00();
                }
              }
              else {
                if (plVar16 != (longlong *)0x0) {
                  lVar15 = FUN_00d50b00();
                }
                if (((char)local_58 == '\0') || (local_a8 == (undefined1  [8])0x0)) {
                  local_58 = CONCAT71((int7)((ulonglong)lVar15 >> 8),1);
                  local_a8 = (undefined1  [8])plVar16;
                }
                else {
                  local_a8 = (undefined1  [8])plVar16;
                  uVar14 = FUN_00d50b20();
                  local_58 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                }
              }
              auVar29 = local_a8;
              if ((local_a8 != (undefined1  [8])local_50) && (local_a8 != (undefined1  [8])local_68)
                 ) {
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                uVar32 = FUN_014d1d00();
                plVar16 = local_d0;
                if (local_c8 == '\0') {
                  if (local_d0 != (longlong *)0x0) {
                    uVar32 = FUN_00d50b00();
                  }
                }
                else {
                  local_c8 = '\0';
                }
                local_3f8 = 1;
                local_400 = plVar16;
                FUN_01353c30(uVar32,0);
                if (plVar16 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              lVar13 = lVar13 + 1;
              plVar24 = local_128;
            } while (lVar13 < *(int *)((longlong)local_128 + 0xc));
          }
          plVar27 = local_78;
          plVar16 = local_e0;
          plVar28 = plVar16;
          if (local_50 == (longlong *)0x0) {
            if (local_e0 == (longlong *)0x0) {
              plVar28 = (longlong *)0x0;
            }
            else {
              pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar13 = FUN_014bb590();
              local_90 = (longlong *)((longlong)local_90 - lVar13);
              if (local_90 != (longlong *)0x0) {
                local_2f8 = '\0';
                local_300 = 0;
                pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014d1d00();
                local_1d8 = local_d0;
                local_1d0 = 0;
                if (local_c8 == '\0') {
                  if (local_d0 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_c8 = '\0';
                }
                local_1d0 = '\x01';
                plVar24 = local_90;
                FUN_0133bd20(local_90,&local_1d8,&local_188,&local_e9,1);
                if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_2f8 != '\0') && (local_300 != 0)) {
                  FUN_00d50b20();
                  local_d8 = local_70;
                  goto LAB_01381c14;
                }
              }
            }
            local_d8 = local_70;
          }
          else {
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
            if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar24 = local_50;
            }
            lVar13 = FUN_014bb590();
            local_90 = (longlong *)((longlong)local_90 - lVar13);
            if (local_90 != (longlong *)0x0) {
              pvVar11 = _pthread_getspecific((pthread_key_t)plVar24);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014d1d00();
              local_1e8 = local_d0;
              local_1e0 = 0;
              if (local_c8 == '\0') {
                if (local_d0 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_c8 = '\0';
              }
              local_1e0 = '\x01';
              local_308 = '\0';
              local_310 = 0;
              plVar24 = local_90;
              lVar13 = FUN_0133bd20(local_90,&local_310,&local_188,&local_e9,1);
              if ((local_308 != '\0') && (local_310 != 0)) {
                lVar13 = FUN_00d50b20();
              }
              if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
                lVar13 = FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                lVar13 = FUN_00d50b20();
              }
            }
            if (plVar16 == local_50) {
              if ((local_108[0] == '\0') || ((char)local_70 != '\0')) {
                local_d8 = local_70;
              }
              else {
                local_d8 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if (local_108[0] != '\0') {
                FUN_00d50b00();
              }
              plVar28 = local_50;
              local_d8 = local_108._0_8_;
              if (((char)local_70 != '\0') && (plVar16 != (longlong *)0x0)) {
                FUN_00d50b20();
                local_d8 = local_108._0_8_;
              }
            }
          }
LAB_01381c14:
          pVar21 = (pthread_key_t)plVar24;
          if (local_68 == (longlong *)0x0) {
            if (plVar27 == (longlong *)0x0) {
              local_90 = (longlong *)0x0;
              local_e8 = local_80;
            }
            else {
              pvVar11 = _pthread_getspecific(pVar21);
              plVar16 = plVar27;
              if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                plVar16 = (longlong *)plVar27[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
              }
              lVar13 = (**(code **)(*plVar16 + 0x380))();
              lVar13 = lVar13 - (longlong)local_130;
              if (lVar13 != 0) {
                pvVar11 = _pthread_getspecific(pVar21);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014d1d00();
                local_1a8 = local_d0;
                local_1a0 = 0;
                if (local_c8 == '\0') {
                  if (local_d0 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_c8 = '\0';
                }
                local_1a0 = '\x01';
                local_2c8 = '\0';
                local_2d0 = 0;
                FUN_0133bd20(lVar13,&local_2d0,&local_188,&local_e9,1);
                pVar21 = (pthread_key_t)lVar13;
                if ((local_2c8 != '\0') && (local_2d0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
LAB_0138219d:
              local_e8 = local_80;
              local_90 = plVar27;
            }
          }
          else {
            pvVar11 = _pthread_getspecific(pVar21);
            plVar16 = local_68;
            if ((pvVar11 != (void *)0x0) &&
               (lVar13 = FUN_00e8b990(), plVar16 = local_68, lVar13 != 0)) {
              plVar24 = local_68;
              plVar16 = (longlong *)local_68[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
            }
            pVar21 = (pthread_key_t)plVar24;
            lVar13 = (**(code **)(*plVar16 + 0x380))();
            local_130 = (undefined1 *)((longlong)local_130 - lVar13);
            if (local_130 != (undefined1 *)0x0) {
              if ((char)local_e8 == '\0') {
                local_2d8 = '\0';
                local_2e0 = 0;
                pvVar11 = _pthread_getspecific(pVar21);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014d1d00();
                local_1b8 = local_d0;
                local_1b0 = 0;
                if (local_c8 == '\0') {
                  if (local_d0 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_c8 = '\0';
                }
                local_1b0 = '\x01';
                puVar23 = local_130;
                lVar13 = FUN_0133bd20(local_130,&local_1b8,&local_188,&local_e9,1);
                pVar21 = (pthread_key_t)puVar23;
                if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                  lVar13 = FUN_00d50b20();
                }
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  lVar13 = FUN_00d50b20();
                }
                if ((local_2d8 != '\0') && (local_2e0 != 0)) {
                  lVar13 = FUN_00d50b20();
                }
              }
              else {
                pvVar11 = _pthread_getspecific(pVar21);
                if (pvVar11 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014d1d00();
                local_1c8 = local_d0;
                local_1c0 = 0;
                if (local_c8 == '\0') {
                  if (local_d0 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_c8 = '\0';
                }
                local_1c0 = '\x01';
                local_2e8 = '\0';
                local_2f0 = 0;
                lVar15 = -(longlong)local_130;
                lVar13 = FUN_0133bd20(lVar15,&local_2f0,&local_188,&local_e9,1);
                pVar21 = (pthread_key_t)lVar15;
                if ((local_2e8 != '\0') && (local_2f0 != 0)) {
                  lVar13 = FUN_00d50b20();
                }
                if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                  lVar13 = FUN_00d50b20();
                }
                if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                  lVar13 = FUN_00d50b20();
                }
              }
            }
            if (plVar27 == local_68) {
              if (((char)local_88 == '\0') || ((char)local_80 != '\0')) goto LAB_0138219d;
              local_e8 = (longlong *)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
              FUN_00d50b00();
              local_90 = plVar27;
            }
            else {
              if ((char)local_88 != '\0') {
                FUN_00d50b00();
              }
              plVar16 = local_68;
              local_e8 = local_88;
              local_90 = local_68;
              if ((char)local_80 != '\0') {
                if (plVar27 != (longlong *)0x0) {
                  FUN_00d50b20();
                  local_e8 = local_88;
                  local_90 = plVar16;
                }
              }
            }
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014d1d00();
          lVar13 = local_240;
          if (local_238 == '\0') {
            if (local_240 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_238 = '\0';
          }
          local_3e8 = 1;
          pVar21 = 0;
          FUN_0135d2e0(0,local_3f0);
          if (local_468 == '\0') {
            if (local_470 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_468 = '\0';
          }
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
            pVar21 = (pthread_key_t)local_48;
          }
          uVar32 = FUN_014d1d00();
          lVar15 = local_230;
          if (local_228 == '\0') {
            if (local_230 != 0) {
              uVar32 = FUN_00d50b00();
            }
          }
          else {
            local_228 = '\0';
          }
          local_d0 = local_470;
          local_c8 = '\0';
          local_118 = lVar15;
          local_110 = '\0';
          uVar14 = FUN_01346520(uVar32,1);
          if (lVar15 != 0) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if (local_470 != (longlong *)0x0) {
            uVar14 = FUN_00d50b20();
          }
          if (lVar13 != 0) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_238 != '\0') && (local_240 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if (plVar28 == (longlong *)0x0) {
            local_98 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
LAB_013824ab:
            local_e0 = (longlong *)0x0;
            plVar28 = local_e0;
          }
          else {
            local_98 = &DAT_02802501;
            local_80 = local_e8;
            local_78 = local_90;
            local_70 = local_d8;
            local_60 = local_108._0_8_;
            pvVar11 = _pthread_getspecific(pVar21);
            if (pvVar11 != (void *)0x0) {
              local_80 = local_e8;
              local_78 = local_90;
              local_70 = local_d8;
              local_60 = local_108._0_8_;
              lVar13 = FUN_00e8b990();
              if (lVar13 != 0) {
                pVar21 = (pthread_key_t)local_48;
              }
            }
            local_2b8 = '\0';
            local_2c0 = plVar28;
            uVar14 = FUN_014d36f0();
            cVar9 = (char)uVar14;
            if ((local_2b8 != '\0') && (local_2c0 != (longlong *)0x0)) {
              uVar14 = FUN_00d50b20();
            }
            local_98 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
            if (cVar9 != '\0') {
              pvVar11 = _pthread_getspecific(pVar21);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014d1d00();
              plVar16 = local_d0;
              if (local_c8 == '\0') {
                if (local_d0 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_c8 = '\0';
              }
              local_3d8 = 1;
              local_3e0 = plVar16;
              pvVar11 = _pthread_getspecific(pVar21);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014d1d00();
              lVar13 = local_118;
              if (local_110 == '\0') {
                if (local_118 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_110 = '\0';
              }
              local_3c8 = 1;
              local_3d0 = lVar13;
              uVar14 = FUN_0136bb10(&local_188,&local_3d0,1,1);
              cVar9 = (char)uVar14;
              if (lVar13 != 0) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_110 != '\0') && (local_118 != 0)) {
                uVar14 = FUN_00d50b20();
              }
              if (plVar16 != (longlong *)0x0) {
                uVar14 = FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                uVar14 = FUN_00d50b20();
              }
              if (cVar9 != '\0') {
                uVar19 = (undefined7)((ulonglong)uVar14 >> 8);
                if (local_48 == plVar28) {
                  local_98 = (undefined1 *)CONCAT71(uVar19,1);
                  if ((char)local_d8 == '\0') {
                    local_d8 = 0;
                    goto LAB_013824ab;
                  }
                }
                else {
                  if ((char)local_d8 != '\0') {
                    local_98 = (undefined1 *)CONCAT71(uVar19,1);
                    local_80 = local_e8;
                    local_78 = local_90;
                    local_70 = local_d8;
                    local_60 = local_108._0_8_;
                    uVar14 = FUN_00d50b00();
                  }
                  if (local_48 != (longlong *)0x0) {
                    local_98 = (undefined1 *)CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                    local_80 = local_e8;
                    local_78 = local_90;
                    local_70 = local_d8;
                    local_60 = local_108._0_8_;
                    FUN_00d50b20();
                  }
                  local_98 = (undefined1 *)(local_d8 & 0xffffffff);
                  local_48 = plVar28;
                  if ((char)local_d8 == '\0') {
                    local_d8 = 0;
                    local_e0 = (longlong *)0x0;
                    local_98 = (undefined1 *)0x0;
                    plVar28 = local_e0;
                    goto LAB_01382703;
                  }
                }
                local_e0 = (longlong *)0x0;
                local_80 = local_e8;
                local_78 = local_90;
                local_70 = local_d8 & 0xffffffff;
                local_60 = local_108._0_8_;
                FUN_00d50b20();
                local_d8 = 0;
                plVar28 = local_e0;
              }
            }
          }
LAB_01382703:
          local_e0 = plVar28;
          plVar16 = local_90;
          if (local_90 == (longlong *)0x0) {
LAB_01382a74:
            local_78 = (longlong *)0x0;
          }
          else {
            local_80 = local_e8;
            local_78 = local_90;
            local_70 = local_d8;
            local_60 = local_108._0_8_;
            plVar24 = local_90;
            pvVar11 = _pthread_getspecific((pthread_key_t)local_90);
            if (pvVar11 != (void *)0x0) {
              local_80 = local_e8;
              local_78 = local_90;
              local_70 = local_d8;
              local_60 = local_108._0_8_;
              FUN_00e8b990();
            }
            plVar27 = local_90;
            local_2b0 = local_48;
            local_2a8 = '\0';
            cVar9 = FUN_014d36f0();
            if ((local_2a8 != '\0') && (local_2b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar21 = (pthread_key_t)plVar24;
            if (cVar9 != '\0') {
              pvVar11 = _pthread_getspecific(pVar21);
              if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
                pVar21 = (pthread_key_t)local_48;
              }
              FUN_014d1d00();
              plVar16 = local_d0;
              if (local_c8 == '\0') {
                if (local_d0 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_c8 = '\0';
              }
              local_3b8 = 1;
              local_3c0 = plVar16;
              pvVar11 = _pthread_getspecific(pVar21);
              if (pvVar11 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014d1d00();
              lVar13 = local_118;
              if (local_110 == '\0') {
                if (local_118 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_110 = '\0';
              }
              local_3a8 = 1;
              local_3b0 = lVar13;
              plVar24 = &local_188;
              cVar9 = FUN_0136bb10(plVar24,&local_3b0,1,1);
              if (lVar13 != 0) {
                FUN_00d50b20();
              }
              if ((local_110 != '\0') && (local_118 != 0)) {
                FUN_00d50b20();
              }
              if (plVar16 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar16 = local_e8;
              if (cVar9 != '\0') {
                if ((char)local_e8 == '\0') {
                  local_e8 = (longlong *)0x0;
                  goto LAB_01382a74;
                }
                local_78 = (longlong *)0x0;
                local_80 = (longlong *)((ulonglong)local_e8 & 0xffffffff);
                local_70 = local_d8;
                local_60 = local_108._0_8_;
                FUN_00d50b20();
                local_e8 = (longlong *)0x0;
                goto LAB_01382a7a;
              }
            }
            plVar16 = plVar24;
            local_78 = plVar27;
          }
LAB_01382a7a:
          plVar24 = local_78;
          local_2a0 = local_180;
          local_298 = '\0';
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          plVar27 = local_48;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar27 = local_48, lVar13 != 0)
             ) {
            plVar16 = local_48;
            plVar27 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar27 + 0x380))();
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          plVar27 = local_48;
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), plVar27 = local_48, lVar13 != 0)
             ) {
            plVar16 = local_48;
            plVar27 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
          }
          (**(code **)(*plVar27 + 0x388))();
          FUN_00e7b4e0();
          uVar32 = FUN_015b4ee0();
          if ((local_298 != '\0') && (local_2a0 != (undefined8 *)0x0)) {
            uVar32 = FUN_00d50b20();
          }
          pVar21 = (pthread_key_t)plVar16;
          if (local_e0 != (longlong *)0x0) {
            local_290 = local_180;
            local_288 = '\0';
            pvVar11 = _pthread_getspecific(pVar21);
            plVar27 = local_e0;
            if ((pvVar11 != (void *)0x0) &&
               (lVar13 = FUN_00e8b990(), plVar27 = local_e0, lVar13 != 0)) {
              plVar16 = local_e0;
              plVar27 = (longlong *)local_e0[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar27 + 0x380))();
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            plVar27 = local_e0;
            if ((pvVar11 != (void *)0x0) &&
               (lVar13 = FUN_00e8b990(), plVar27 = local_e0, lVar13 != 0)) {
              plVar16 = local_e0;
              plVar27 = (longlong *)local_e0[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
            }
            pVar21 = (pthread_key_t)plVar16;
            (**(code **)(*plVar27 + 0x388))();
            FUN_00e7b4e0();
            uVar32 = FUN_015b4ee0();
            if ((local_288 != '\0') && (local_290 != (undefined8 *)0x0)) {
              uVar32 = FUN_00d50b20();
            }
          }
          if (plVar24 != (longlong *)0x0) {
            local_280 = local_180;
            local_278 = '\0';
            pvVar11 = _pthread_getspecific(pVar21);
            plVar16 = plVar24;
            if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar16 = (longlong *)plVar24[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar16 + 0x380))();
            pvVar11 = _pthread_getspecific(pVar21);
            if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
              plVar24 = (longlong *)plVar24[(ulonglong)(*(uint *)(lVar13 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar24 + 0x388))();
            FUN_00e7b4e0();
            uVar32 = FUN_015b4ee0();
            if ((local_278 != '\0') && (local_280 != (undefined8 *)0x0)) {
              uVar32 = FUN_00d50b20();
            }
          }
          local_4b8 = 0;
          local_4c0 = 0;
          local_4b0 = 0;
          local_4a8 = 0;
          uVar32 = FUN_013469e0(uVar32,&local_4b0);
          local_4a0 = local_180;
          local_498 = 0;
          FUN_01353f80(uVar32,&local_4a0);
          plVar16 = local_f8;
          if (local_f8 == local_48) {
            if ((char)local_98 == '\0') {
              local_130 = local_168;
              local_90 = local_f8;
            }
            else {
              bVar20 = (byte)local_16c & local_f8 != (longlong *)0x0;
              pVar21 = CONCAT31((int3)((uint)local_16c >> 8),bVar20);
              if (bVar20 == 1) {
                local_130 = (undefined1 *)CONCAT71((int7)((ulonglong)local_f8 >> 8),1);
                local_80 = local_e8;
                local_70 = local_d8;
                local_60 = local_108._0_8_;
                FUN_00d50b00();
                local_90 = plVar16;
              }
              else {
                local_130 = local_168;
                local_90 = local_f8;
              }
            }
          }
          else {
            if (((char)local_98 != '\0') && (local_48 != (longlong *)0x0)) {
              local_80 = local_e8;
              local_70 = local_d8;
              local_60 = local_108._0_8_;
              FUN_00d50b00();
            }
            plVar16 = local_48;
            bVar20 = (byte)local_168 & local_f8 != (longlong *)0x0;
            pVar21 = (pthread_key_t)CONCAT71((int7)((ulonglong)local_168 >> 8),bVar20);
            local_130 = local_98;
            local_90 = local_48;
            if (bVar20 == 1) {
              local_80 = local_e8;
              local_70 = local_d8;
              local_60 = local_108._0_8_;
              local_f8 = local_48;
              FUN_00d50b20();
              local_130 = local_98;
              local_90 = plVar16;
            }
          }
          plVar16 = local_78;
          pvVar11 = _pthread_getspecific(pVar21);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            pVar21 = (pthread_key_t)local_90;
          }
          FUN_014d1d00();
          plVar27 = local_d0;
          plVar24 = (longlong *)*unaff_RSI;
          if (plVar24 == local_d0) {
            if (((char)unaff_RSI[1] == '\0') && (local_d0 != (longlong *)0x0)) {
              if (local_c8 != '\0') goto LAB_01382fae;
              FUN_00d50b00();
              goto LAB_01382fe8;
            }
LAB_01382ff0:
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            lVar13 = unaff_RSI[1];
            if (local_c8 == '\0') {
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              *unaff_RSI = (longlong)plVar27;
              if (((char)lVar13 != '\0') && (plVar24 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01382fe8:
              *(undefined1 *)(unaff_RSI + 1) = 1;
              plVar16 = local_78;
              goto LAB_01382ff0;
            }
            *unaff_RSI = (longlong)local_d0;
            if (((char)lVar13 != '\0') && (plVar24 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_01382fae:
            *(undefined1 *)(unaff_RSI + 1) = 1;
            plVar16 = local_78;
          }
          if (local_128 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_178 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_220 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (local_180 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (((char)local_140 != '\0') && (local_120 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_159 = local_159 | local_148 == (undefined8 *)0x0;
          if (local_159 == 0) {
            FUN_00d50b20();
          }
          if (((char)local_158 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          if (((char)local_58 != '\0') && (auVar29 != (undefined1  [8])0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_e8 != '\0') && (plVar16 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_88 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_108[0] != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (((char)local_98 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          pvVar11 = _pthread_getspecific(in_ECX);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          local_90 = local_d0;
          plVar16 = local_d0;
          if (local_d0 == (longlong *)0x0) {
            local_90 = (longlong *)0x0;
            puVar23 = (undefined1 *)0x0;
          }
          else {
            puVar23 = (undefined1 *)CONCAT71((int7)(unaff_R12 >> 8),1);
            if (((local_c8 == '\0') && (FUN_00d50b00(), local_c8 != '\0')) &&
               (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          local_130 = puVar23;
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
            plVar16 = local_90;
          }
          FUN_014c2a40();
          plVar24 = local_d0;
          if (((local_c8 == '\0') && (local_d0 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_c8 != '\0' && (local_d0 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          pVar21 = (pthread_key_t)plVar16;
          if (0 < *(int *)((longlong)plVar24 + 0xc)) {
            lVar13 = 0;
            do {
              lVar15 = *(longlong *)(plVar24[2] + lVar13 * 8);
              if (lVar15 != 0) {
                FUN_00d50b00();
              }
              *(float *)(lVar15 + 0x14) = (float)local_58;
              *(undefined4 *)(lVar15 + 0x10) = 0x3f000000;
              FUN_00d50b20();
              pVar21 = (pthread_key_t)plVar16;
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)((longlong)plVar24 + 0xc));
          }
          local_390 = local_90;
          local_388 = '\0';
          FUN_0137b3d0();
          plVar16 = local_d0;
          if (local_c8 == '\0') {
            if (local_d0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c8 = '\0';
          }
          local_458 = 1;
          FUN_0135d660();
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_388 != '\0') && (local_390 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_380 = *unaff_RSI;
          local_378 = '\0';
          FUN_013359c0();
          plVar16 = local_d0;
          if (local_c8 == '\0') {
            if (local_d0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c8 = '\0';
          }
          local_448 = 1;
          FUN_013357a0();
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_378 != '\0') && (local_380 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
LAB_0137e9b9:
        pvVar11 = _pthread_getspecific(pVar21);
        if ((pvVar11 != (void *)0x0) && (lVar13 = FUN_00e8b990(), lVar13 != 0)) {
          pVar21 = (pthread_key_t)local_90;
        }
        FUN_014ed740();
        pvVar11 = _pthread_getspecific(pVar21);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_268 = '\0';
        local_270 = 0;
        plVar16 = &local_270;
        FUN_014c0100(plVar16,1);
        if ((local_268 != '\0') && (local_270 != 0)) {
          FUN_00d50b20();
        }
        local_58 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar11 != (void *)0x0) {
          local_58 = *unaff_RSI;
          FUN_00e8b990();
        }
        FUN_013dfef0();
        local_58 = *unaff_RSI;
        pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar11 != (void *)0x0) {
          local_58 = *unaff_RSI;
          FUN_00e8b990();
        }
        FUN_013e0cc0();
        pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfcb0();
        pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar14 = FUN_013dd790();
        plVar24 = local_d0;
        if (local_d0 == (longlong *)0x0) {
          local_138 = CONCAT44(local_138._4_4_,(int)CONCAT71((int7)((ulonglong)uVar14 >> 8),1));
          plVar27 = (longlong *)0x0;
          plVar24 = (longlong *)0x0;
        }
        else {
          if (local_c8 == '\0') {
            FUN_00d50b00();
            local_138 = local_138 & 0xffffffff00000000;
            plVar27 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
            if ((local_c8 == '\0') || (local_d0 == (longlong *)0x0)) goto LAB_0137ec9f;
            FUN_00d50b20();
          }
          else {
            local_c8 = '\0';
          }
          plVar27 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
          local_138 = local_138 & 0xffffffff00000000;
        }
LAB_0137ec9f:
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        pVar21 = (pthread_key_t)plVar16;
        local_48 = plVar24;
        local_128 = plVar27;
        if (*(int *)((longlong)plVar24 + 0xc) < 1) {
          plVar24 = (longlong *)0x0;
          local_58 = 0;
        }
        else {
          lVar13 = 0;
          local_58 = 0;
          plVar27 = (longlong *)0x0;
          do {
            uVar18 = local_58 & 0xffffffff;
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_011ef8d0();
            plVar24 = local_d0;
            uVar19 = (undefined7)((ulonglong)uVar14 >> 8);
            cVar9 = (char)uVar18;
            if (local_d0 == plVar27) {
              plVar24 = plVar27;
              local_58 = uVar18;
              if ((cVar9 == '\0') && (local_d0 != (longlong *)0x0)) {
                local_58 = CONCAT71(uVar19,1);
                if (local_c8 != '\0') goto LAB_0137ee21;
                local_58 = CONCAT71(uVar19,1);
                FUN_00d50b00();
              }
joined_r0x0137ede3:
              if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              if (local_c8 == '\0') {
                if (local_d0 != (longlong *)0x0) {
                  uVar14 = FUN_00d50b00();
                }
                local_58 = CONCAT71((int7)((ulonglong)uVar14 >> 8),1);
                if ((cVar9 != '\0') && (plVar27 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                goto joined_r0x0137ede3;
              }
              local_58 = CONCAT71(uVar19,1);
              if ((cVar9 != '\0') && (plVar27 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
LAB_0137ee21:
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            plVar27 = local_90;
            if ((pvVar11 != (void *)0x0) &&
               (lVar15 = FUN_00e8b990(), plVar27 = local_90, lVar15 != 0)) {
              plVar16 = local_90;
              plVar27 = (longlong *)local_90[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
            }
            (**(code **)(*plVar27 + 0x3e0))();
            FUN_012595a0();
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013def20();
            FUN_01264320();
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_50 = (longlong *)FUN_013defa0();
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            uVar14 = FUN_01264170();
            local_a8 = (undefined1  [8])uVar14;
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar1 = (double)FUN_013de9b0();
            FUN_01264390(SUB84(((double)local_50 + (double)local_a8) - dVar1,0));
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0126f610();
            pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
            if (pvVar11 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125a5f0();
            local_258 = '\0';
            local_260 = plVar24;
            FUN_0039e8b0();
            plVar27 = local_d0;
            local_190 = 0;
            if (local_c8 == '\0') {
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            plVar28 = local_48;
            local_190 = '\x01';
            local_198 = plVar27;
            FUN_012879b0();
            if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            pVar21 = (pthread_key_t)plVar16;
            lVar13 = lVar13 + 1;
            plVar27 = plVar24;
          } while (lVar13 < *(int *)((longlong)plVar28 + 0xc));
        }
        plVar16 = local_128;
        if (((*(longlong *)(unaff_RDI + 0x1f8) == 0) && (*(longlong *)(unaff_RDI + 0x200) == 0)) &&
           (local_50 = *(longlong **)(unaff_RDI + 0x148), local_50 != (longlong *)0x0)) {
          pvVar11 = _pthread_getspecific(pVar21);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          iVar10 = FUN_0141bab0();
          if (iVar10 != 3) goto LAB_0137f1d6;
        }
        else {
LAB_0137f1d6:
          cVar9 = FUN_01334f30();
          if (cVar9 != '\0') {
            local_250 = *unaff_RSI;
            local_248 = '\0';
            FUN_013359c0();
            plVar16 = local_d0;
            if (local_c8 == '\0') {
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_c8 = '\0';
            }
            local_398 = 1;
            local_3a0 = plVar16;
            FUN_013357a0();
            if (plVar16 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_248 != '\0') && (local_250 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        if (((char)local_58 != '\0') && (plVar24 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        puVar23 = local_130;
        uVar18 = CONCAT71((int7)((ulonglong)plVar16 >> 8),1);
        if ((char)local_138 == '\0') {
          FUN_00d50b20();
        }
        cVar9 = (char)puVar23;
joined_r0x0137f2db:
        if ((cVar9 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0137e3d3;
      }
LAB_0137e50d:
      if ((*(longlong *)(unaff_RDI + 0x200) == 0) && (*(longlong *)(unaff_RDI + 0x148) != 0)) {
        pvVar11 = _pthread_getspecific(in_ECX);
        if (pvVar11 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar10 = FUN_0141bab0();
        if (iVar10 == 1) {
          pvVar11 = _pthread_getspecific(in_ECX);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          local_90 = local_d0;
          plVar16 = local_d0;
          if (local_d0 == (longlong *)0x0) {
            local_90 = (longlong *)0x0;
            local_130 = (undefined1 *)0x0;
          }
          else {
            local_130 = (undefined1 *)CONCAT71((int7)((ulonglong)local_d0 >> 8),1);
            if (((local_c8 == '\0') && (FUN_00d50b00(), local_c8 != '\0')) &&
               (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar11 = _pthread_getspecific((pthread_key_t)plVar16);
          if (pvVar11 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar18 = (ulonglong)param_2 & 0xff;
          cVar9 = FUN_014ea7b0((float)local_58,DAT_02390124);
          local_490 = local_90;
          local_488 = 0;
          FUN_013699d0(extraout_XMM0_Da,&local_490);
          plVar16 = local_d0;
          if ((local_c8 == '\0') && (local_d0 != (longlong *)0x0)) {
            FUN_00d50b00();
          }
          pVar21 = (pthread_key_t)uVar18;
          if (0 < *(int *)((longlong)plVar16 + 0xc)) {
            lVar13 = 0;
            do {
              lVar15 = *(longlong *)(plVar16[2] + lVar13 * 8);
              if (lVar15 != 0) {
                FUN_00d50b00();
              }
              local_478 = 1;
              local_480 = lVar15;
              FUN_013295b0();
              if (lVar15 != 0) {
                FUN_00d50b20();
              }
              pVar21 = (pthread_key_t)uVar18;
              lVar13 = lVar13 + 1;
            } while (lVar13 < *(int *)((longlong)plVar16 + 0xc));
          }
          FUN_00d50b20();
          if (cVar9 != '\0') goto LAB_0137e9b9;
          uVar18 = 0;
          cVar9 = (char)local_130;
          goto joined_r0x0137f2db;
        }
      }
    }
  }
LAB_0137e3d1:
  uVar18 = 0;
LAB_0137e3d3:
  return uVar18 & 0xffffffff;
}


