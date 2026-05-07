// Function: FUN_01c9dc20
// Address: 01c9dc20
// Size: 11620 bytes
// Class: GNValue
// String references:
//   "GNValue"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_01c9dc20(double param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  pthread_key_t pVar2;
  ulonglong uVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  void *pvVar13;
  longlong **pplVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 uVar18;
  longlong lVar19;
  int extraout_var;
  undefined4 in_ECX;
  pthread_key_t pVar20;
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  int iVar24;
  ulonglong uVar25;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar26;
  longlong lVar27;
  byte bVar28;
  bool bVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Da;
  double dVar32;
  char local_res8;
  longlong local_418;
  undefined1 local_410;
  longlong local_408;
  undefined1 local_400;
  longlong local_3f8;
  undefined1 local_3f0;
  longlong *local_3e8;
  undefined1 local_3e0;
  longlong *local_3d8;
  undefined1 local_3d0;
  longlong local_3c8;
  undefined1 local_3c0;
  longlong *local_3b8;
  undefined1 local_3b0;
  longlong *local_3a8;
  undefined1 local_3a0;
  longlong *local_398;
  undefined1 local_390;
  longlong local_388;
  undefined1 local_380;
  longlong local_378;
  undefined1 local_370;
  double local_368;
  longlong *local_360;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  undefined1 local_340;
  longlong *local_338;
  longlong local_330;
  longlong *local_328;
  undefined8 local_320;
  longlong *local_318;
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
  longlong *local_2a0;
  char local_298;
  longlong *local_290;
  char local_288;
  longlong *local_280;
  char local_278;
  longlong *local_270;
  char local_268;
  longlong *local_260;
  char local_258;
  longlong *local_250;
  char local_248;
  longlong *local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong *local_220;
  char local_218;
  longlong *local_210;
  char local_208;
  longlong *local_200;
  undefined8 local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  double local_1b8;
  longlong *local_1b0;
  undefined4 local_1a4;
  longlong *local_1a0;
  longlong *local_198;
  undefined8 *local_190;
  undefined8 local_188;
  longlong *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  longlong *local_168;
  byte local_14c;
  longlong *local_138;
  longlong *local_130;
  longlong *local_120;
  longlong *local_110;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_d8;
  double local_c0;
  double local_b8;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_88;
  char local_80;
  byte local_71;
  longlong *local_70;
  longlong *local_68;
  char local_60 [8];
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  if ((*unaff_RSI == 0) || (*(int *)(*unaff_RSI + 0xc) == 0)) {
    uVar25 = 0;
    goto LAB_01ca0943;
  }
  local_358 = param_3;
  local_318 = param_4;
  local_200 = param_2;
  local_1a4 = in_ECX;
  FUN_00d23310();
  plVar8 = local_68;
  pplVar26 = (longlong **)local_60;
  local_88 = (longlong *)CONCAT71(local_88._1_7_,local_60[0]);
  pplVar14 = pplVar26;
  if (local_60[0] == '\0') {
    pplVar14 = &local_88;
  }
  *(char *)pplVar14 = '\0';
  if ((local_60[0] != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar13 = _pthread_getspecific((pthread_key_t)pplVar26);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012eb770();
  plVar21 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_88 != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_310 = *unaff_RSI;
  local_308 = '\0';
  uVar31 = FUN_012fc0c0();
  plVar8 = local_68;
  if (local_60[0] == '\0') {
    if (((local_68 != (longlong *)0x0) && (uVar31 = FUN_00d50b00(), local_60[0] != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      uVar31 = FUN_00d50b20();
    }
  }
  else {
    local_60[0] = '\0';
  }
  if ((local_308 != '\0') && (local_310 != 0)) {
    uVar31 = FUN_00d50b20();
  }
  lVar19 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar19 != 0) {
    uVar31 = FUN_00d50b00();
  }
  uVar12 = FUN_01c99400(uVar31,0);
  if (lVar19 != 0) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar17 = local_68;
  pplVar26 = &local_40;
  if (local_60[0] != '\0') {
    pplVar26 = (longlong **)local_60;
  }
  local_40 = (longlong *)CONCAT71(local_40._1_7_,local_60[0]);
  *(undefined1 *)pplVar26 = 0;
  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar1 = *(uint *)((longlong)plVar17 + 0xc);
  if ((char)local_40 != '\0') {
    FUN_00d50b20();
  }
  if ((uVar12 == 1) && (1 < (int)uVar1)) {
    bVar5 = false;
    local_14c = 1;
    uVar12 = uVar1;
LAB_01c9dea9:
    if (plVar21 == (longlong *)0x0) {
      local_300 = *unaff_RSI;
      local_2f8 = '\0';
      FUN_012e8850();
      plVar17 = local_68;
      plVar21 = (longlong *)*unaff_RSI;
      if (plVar21 == local_68) {
        if (((char)unaff_RSI[1] != '\0') || (local_68 == (longlong *)0x0)) goto LAB_01c9df8c;
        if (local_60[0] == '\0') {
          FUN_00d50b00();
          goto LAB_01c9df87;
        }
LAB_01c9dfac:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_60[0] = '\0';
      }
      else {
        lVar19 = unaff_RSI[1];
        if (local_60[0] != '\0') {
          *unaff_RSI = (longlong)local_68;
          if (((char)lVar19 != '\0') && (plVar21 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c9dfac;
        }
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar17;
        if (((char)lVar19 != '\0') && (plVar21 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01c9df87:
        *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_01c9df8c:
        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_2f8 != '\0') && (local_300 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d23310();
    plVar21 = local_68;
    local_88 = (longlong *)CONCAT71(local_88._1_7_,local_60[0]);
    pplVar26 = &local_88;
    pplVar14 = (longlong **)local_60;
    if (local_60[0] == '\0') {
      pplVar14 = pplVar26;
    }
    *(char *)pplVar14 = '\0';
    if ((local_60[0] != '\0') && (plVar21 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific((pthread_key_t)pplVar26);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e8920();
    local_198 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (((char)local_88 != '\0') && (plVar21 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar19 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar19 != 0) {
      FUN_00d50b00();
    }
    local_410 = 1;
    local_408 = *unaff_RSI;
    local_400 = 0;
    plVar21 = &local_408;
    local_418 = lVar19;
    FUN_01c99560(plVar21,&local_418,local_res8);
    local_a8 = local_68;
    pVar20 = (pthread_key_t)plVar21;
    if ((local_60[0] == '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if (lVar19 != 0) {
      FUN_00d50b20();
    }
    if (local_a8 == (longlong *)0x0) {
      uVar25 = 0;
    }
    else {
      uVar3 = (ulonglong)param_2 >> 0x20;
      if (uVar3 == 0) {
        if (local_res8 != '\0') {
          local_188 = 0;
          local_120 = (longlong *)0x0;
          goto LAB_01c9e250;
        }
        uVar25 = CONCAT71((int7)((ulonglong)local_a8 >> 8),1);
      }
      else {
        lVar19 = *(longlong *)(unaff_RDI + 0x38);
        if (lVar19 != 0) {
          FUN_00d50b00();
        }
        local_3f0 = 1;
        local_3f8 = lVar19;
        FUN_01ca1c50(local_res8,&local_3f8);
        local_120 = local_68;
        plVar21 = local_68;
        if (local_68 == (longlong *)0x0) {
          local_120 = (longlong *)0x0;
          local_188 = 0;
        }
        else if (local_60[0] == '\0') {
          uVar18 = FUN_00d50b00();
          local_188 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_60[0] = '\0';
          local_188 = CONCAT71((int7)((ulonglong)local_68 >> 8),1);
        }
        pVar20 = (pthread_key_t)plVar21;
        if (lVar19 != 0) {
          FUN_00d50b20();
        }
        uVar25 = CONCAT71((int7)((ulonglong)lVar19 >> 8),local_120 != (longlong *)0x0);
        if ((local_120 != (longlong *)0x0) && (local_res8 != '\0')) {
LAB_01c9e250:
          puVar15 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar15 = &DAT_02572358;
          pcVar7 = DAT_02572370;
          (*DAT_02572370)();
          puVar16 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar16 = &DAT_02572358;
          (*pcVar7)();
          local_190 = puVar16;
          puVar16 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar16 = &DAT_02572358;
          uVar31 = (*pcVar7)();
          local_3e8 = local_a8;
          local_3e0 = 0;
          local_3d8 = local_198;
          local_3d0 = 0;
          local_178 = puVar16;
          FUN_01c9b940(uVar31,&local_3d8);
          local_1f8 = FUN_00e7bdb0();
          if (uVar3 == 0) {
            if (!NAN(param_1)) {
              lVar19 = local_a8[2];
              if (lVar19 != 0) {
                FUN_00d50b00();
              }
              local_2c8 = '\x01';
              local_2d0 = lVar19;
              FUN_01266770();
              pvVar13 = _pthread_getspecific(pVar20);
              if (pvVar13 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_1b8 = (double)FUN_0125a280();
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_2c8 != '\0') && (local_2d0 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01c9e653;
            }
            plVar21 = (longlong *)local_a8[5];
            local_1b8 = DAT_023908c8;
          }
          else {
            lVar19 = local_a8[2];
            if (lVar19 != 0) {
              FUN_00d50b00();
            }
            local_2e8 = '\x01';
            local_2f0 = lVar19;
            FUN_01266770();
            pvVar13 = _pthread_getspecific(pVar20);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar13 = _pthread_getspecific(pVar20);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar13 = _pthread_getspecific(pVar20);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_1f8 = FUN_01507970();
            uVar31 = extraout_XMM0_Da;
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              uVar31 = FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              uVar31 = FUN_00d50b20();
            }
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              uVar31 = FUN_00d50b20();
            }
            if ((local_2e8 != '\0') && (local_2f0 != 0)) {
              uVar31 = FUN_00d50b20();
            }
            lVar19 = DAT_027ed440;
            if (DAT_027ed440 != 0) {
              uVar31 = FUN_00d50b00();
            }
            local_2e0 = lVar19;
            local_2d8 = '\x01';
            pplVar26 = &local_68;
            FUN_01cacbe0(uVar31,&local_2e0);
            plVar21 = local_68;
            if ((DAT_0270c850 == '\0') && (iVar24 = ___cxa_guard_acquire(), iVar24 != 0)) {
              _DAT_026d4348 = FUN_00d4fe50();
              _DAT_026d4330 = "GNValue";
              _DAT_026d4338 = 0x18;
              _DAT_026d4340 = FUN_00053cb0;
              _DAT_026d4350 = 0;
              uRam00000000026d4358 = 0;
              _DAT_026d4360 = 0;
              uRam00000000026d4368 = 0;
              _DAT_026d4370 = 0;
              uRam00000000026d4378 = 0;
              _DAT_026d4380 = 0;
              uRam00000000026d4388 = 0;
              _DAT_026d4390 = 0;
              uRam00000000026d4398 = 0;
              _DAT_026d43a0 = 0;
              uRam00000000026d43a8 = 0;
              _DAT_026d43b0 = 0;
              uRam00000000026d43b8 = 0;
              _DAT_026d43c0 = 0;
              uRam00000000026d43c8 = 0;
              _DAT_026d43d0 = 0;
              uRam00000000026d43d8 = 0;
              _DAT_026d43e0 = 0;
              uRam00000000026d43e8 = 0;
              _DAT_026d43f0 = 0;
              ___cxa_guard_release();
            }
            if (plVar21 == (longlong *)0x0) {
LAB_01c9e4fa:
              pplVar26 = (longlong **)&DAT_02802688;
            }
            else {
              (**(code **)(*plVar21 + 0x360))();
              cVar10 = FUN_00e85ea0();
              if (cVar10 == '\0') goto LAB_01c9e4fa;
            }
            plVar21 = *pplVar26;
            if (*(char *)(pplVar26 + 1) == '\0') {
              if (plVar21 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar26 + 1) = 0;
            }
            if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_2d8 != '\0') && (local_2e0 != 0)) {
              FUN_00d50b20();
            }
            local_1b8 = DAT_023908c8;
            if (plVar21 != (longlong *)0x0) {
              local_68 = (longlong *)FUN_00dd6320();
              FUN_00e7b820();
              FUN_00d50b20();
            }
LAB_01c9e653:
            plVar21 = (longlong *)local_a8[5];
          }
          if (plVar21 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_100 = plVar21;
          if (0 < (int)uVar12) {
            local_350 = (longlong *)(ulonglong)uVar12;
            local_1b0 = (longlong *)0x0;
            do {
              uVar31 = FUN_00c9fe20();
              plVar21 = local_68;
              local_88 = (longlong *)CONCAT71(local_88._1_7_,local_60[0]);
              pplVar26 = (longlong **)local_60;
              if (local_60[0] == '\0') {
                pplVar26 = &local_88;
              }
              *(char *)pplVar26 = '\0';
              if ((local_60[0] != '\0') && (plVar21 != (longlong *)0x0)) {
                uVar31 = FUN_00d50b20();
              }
              plVar17 = local_1b0;
              if (bVar5) {
                plVar17 = (longlong *)0x0;
              }
              plVar21 = *(longlong **)(plVar21[2] + (longlong)plVar17 * 8);
              local_1c8 = 0;
              if (plVar21 != (longlong *)0x0) {
                uVar31 = FUN_00d50b00();
              }
              local_1c8 = '\x01';
              local_1d0 = plVar21;
              FUN_00802d30(uVar31,&local_1d0);
              local_130 = local_40;
              if (local_40 == (longlong *)0x0) {
                bVar6 = true;
                local_130 = (longlong *)0x0;
              }
              else {
                if (local_38 == '\0') {
                  FUN_00d50b00();
                  bVar6 = false;
                  if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01c9e7d4;
                  FUN_00d50b20();
                }
                else {
                  local_38 = '\0';
                }
                bVar6 = false;
              }
LAB_01c9e7d4:
              if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((char)local_88 != '\0') {
                FUN_00d50b20();
              }
              local_360 = (longlong *)0x0;
              if (local_14c == 0) {
                local_360 = local_1b0;
              }
              if (0 < *(int *)((longlong)local_130 + 0xc)) {
                local_71 = local_1b0 != (longlong *)0x0 & local_14c;
                lVar19 = 0;
                bVar28 = local_71;
                do {
                  local_330 = lVar19;
                  if ((lVar19 != 0 | bVar28) == 1) {
                    lVar19 = *(longlong *)(unaff_RDI + 0x38);
                    if (lVar19 != 0) {
                      FUN_00d50b00();
                    }
                    local_370 = 1;
                    local_3c8 = *unaff_RSI;
                    local_3c0 = 0;
                    local_378 = lVar19;
                    FUN_01c99560(&local_3c8,&local_378,1);
                    plVar21 = local_68;
                    if (local_68 == local_a8) {
                      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else if (local_60[0] == '\0') {
                      if (local_68 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                      bVar29 = local_a8 != (longlong *)0x0;
                      local_a8 = plVar21;
                      if (bVar29) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      bVar29 = local_a8 != (longlong *)0x0;
                      local_a8 = plVar21;
                      if (bVar29) {
                        FUN_00d50b20();
                      }
                    }
                    if (lVar19 != 0) {
                      FUN_00d50b20();
                    }
                    local_3b0 = 0;
                    local_3a8 = local_198;
                    local_3a0 = 0;
                    local_3b8 = local_a8;
                    FUN_01c9b940();
                    plVar21 = (longlong *)local_a8[5];
                    if (plVar21 == (longlong *)0x0) {
                      if (local_100 != (longlong *)0x0) goto LAB_01c9e9cd;
                    }
                    else {
                      FUN_00d50b00();
                      if (plVar21 == local_100) {
                        FUN_00d50b20();
                      }
                      else {
LAB_01c9e9cd:
                        bVar29 = local_100 != (longlong *)0x0;
                        local_100 = plVar21;
                        if (bVar29) {
                          FUN_00d50b20();
                        }
                      }
                    }
                  }
                  plVar17 = *(longlong **)(local_130[2] + local_330 * 8);
                  if (plVar17 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  local_1f0 = plVar17;
                  FUN_00ca1380();
                  plVar21 = local_68;
                  local_40 = (longlong *)CONCAT71(local_40._1_7_,local_60[0]);
                  pplVar26 = (longlong **)local_60;
                  if (local_60[0] == '\0') {
                    pplVar26 = &local_40;
                  }
                  *(char *)pplVar26 = '\0';
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  local_70 = *(longlong **)(plVar21[2] + (longlong)local_360 * 8);
                  bVar29 = local_70 == (longlong *)0x0;
                  plVar22 = local_360;
                  if (bVar29) {
                  }
                  else {
                    FUN_00d50b00();
                  }
                  bVar29 = !bVar29;
                  if ((char)local_40 != '\0') {
                    FUN_00d50b20();
                  }
                  local_f8 = (longlong *)FUN_00e7bdb0();
                  if (uVar3 == 0) {
                    local_b8 = DAT_023908c8;
                    if (!NAN(param_1)) {
                      local_2b0 = local_70;
                      local_2a8 = '\0';
                      FUN_01266770();
                      pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      dVar32 = (double)FUN_0125a280();
                      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_2a8 != '\0') && (local_2b0 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      local_b8 = (dVar32 + param_1) - local_1b8;
                    }
                  }
                  else {
                    local_2c0 = local_70;
                    local_2b8 = '\0';
                    FUN_01266770();
                    pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0125e930();
                    pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0152ebe0();
                    pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    local_1c0 = (longlong *)FUN_01507970();
                    local_f8 = local_200;
                    FUN_00e7b820();
                    FUN_00e7b970();
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_b8 = DAT_023908c8;
                    if ((local_2b8 != '\0') && (local_2c0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                      local_b8 = DAT_023908c8;
                    }
                  }
                  local_1c0 = (longlong *)0x0;
                  local_320 = FUN_012f92d0();
                  local_170 = 0;
                  local_1e8 = FUN_00e7bcc0();
                  pvVar13 = _pthread_getspecific((pthread_key_t)plVar22);
                  if (pvVar13 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_012eb770();
                  plVar21 = local_68;
                  if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  pVar20 = (pthread_key_t)plVar22;
                  local_a0 = plVar17;
                  if (plVar21 == (longlong *)0x0) {
                    local_d8 = (longlong *)0x0;
                    local_170 = 0;
                    plVar17 = (longlong *)0x0;
                  }
                  else {
                    if (plVar17 == (longlong *)0x0) {
                      local_d8 = (longlong *)0x0;
                      local_170 = 0;
                      if (uVar3 == 0) goto LAB_01c9ef21;
LAB_01c9ee06:
                      pvVar13 = _pthread_getspecific(pVar20);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      pVar20 = 4;
                      local_f8 = (longlong *)FUN_012f9380(4,local_320);
                      pvVar13 = _pthread_getspecific(pVar20);
                      plVar23 = local_d8;
                      if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                        plVar23 = (longlong *)
                                  local_d8[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                      }
                      FUN_00e7bcc0();
                      local_1e8 = FUN_012f9410();
                    }
                    else {
                      local_170 = 0;
                      uVar18 = FUN_00d50b00();
                      pVar20 = (pthread_key_t)plVar22;
                      local_170 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
                      local_1c0 = plVar17;
                      local_d8 = plVar17;
                      if (uVar3 != 0) goto LAB_01c9ee06;
LAB_01c9ef21:
                      pVar20 = (pthread_key_t)plVar22;
                      plVar23 = plVar21;
                      if (!NAN(param_1)) {
                        pvVar13 = _pthread_getspecific(pVar20);
                        if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                          plVar22 = local_d8;
                        }
                        pVar20 = (pthread_key_t)plVar22;
                        local_b8 = (double)FUN_012f8e60(SUB84(local_b8,0));
                      }
                    }
                    pvVar13 = _pthread_getspecific(pVar20);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012eb770();
                    plVar21 = local_68;
                    if (local_68 == plVar17) {
joined_r0x01c9f032:
                      plVar21 = plVar23;
                      if (local_60[0] != '\0') {
LAB_01c9f0a0:
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      if (local_60[0] == '\0') {
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        local_1f0 = plVar21;
                        if (plVar17 != (longlong *)0x0) {
                          FUN_00d50b20();
                          local_a0 = plVar21;
                          plVar23 = plVar21;
                          goto joined_r0x01c9f032;
                        }
                        local_a0 = plVar21;
                        if (local_60[0] == '\0') goto LAB_01c9f0b0;
                        goto LAB_01c9f0a0;
                      }
                      local_1f0 = local_68;
                      if (plVar17 == (longlong *)0x0) {
                        local_a0 = local_68;
                        plVar21 = plVar23;
                      }
                      else {
                        FUN_00d50b20();
                        local_a0 = plVar21;
                        plVar21 = plVar23;
                      }
                    }
                  }
LAB_01c9f0b0:
                  if ((*(char *)(unaff_RDI + 0x2c) == '\0') &&
                     (*(int *)((longlong)local_70 + 0xc) != 0)) {
                    pvVar13 = _pthread_getspecific(pVar20);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_012f8840();
                    plVar21 = local_70;
                    local_2a0 = local_70;
                    local_298 = '\0';
                    FUN_00243390();
                    plVar22 = local_68;
                    if (local_68 == plVar21) {
joined_r0x01c9f5cc:
                      if (local_60[0] != '\0') {
LAB_01c9f613:
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      if (local_60[0] == '\0') {
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        bVar29 = true;
                        if (local_70 != (longlong *)0x0) {
                          FUN_00d50b20();
                          local_70 = plVar22;
                          goto joined_r0x01c9f5cc;
                        }
                        local_70 = plVar22;
                        if (local_60[0] == '\0') goto LAB_01c9f621;
                        goto LAB_01c9f613;
                      }
                      if (local_70 != (longlong *)0x0) {
                        FUN_00d50b20();
                      }
                      local_60[0] = '\0';
                      bVar29 = true;
                      local_70 = plVar22;
                    }
LAB_01c9f621:
                    if ((local_298 != '\0') && (local_2a0 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pVar20 = 0;
                    if (local_70 == (longlong *)0x0) {
                      bVar11 = false;
                    }
                    else {
                      local_60[0] = '\0';
                      local_68 = (longlong *)0x0;
                      local_58 = local_70;
                      local_50 = 0xffffffff;
                      local_48 = 0;
                      bVar11 = false;
                      uVar12 = 0;
                      while( true ) {
                        if (uVar12 != 0) {
                          if ((int)uVar12 < 1) {
                            iVar24 = -uVar12;
                          }
                          else {
                            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar12);
                            FUN_00d23690(uVar12,uVar12);
                            local_48 = local_48 + local_50._4_4_;
                            iVar24 = 0;
                          }
                          local_50 = CONCAT44(iVar24,(int)local_50);
                        }
                        lVar19 = (longlong)(int)local_50;
                        iVar24 = (int)local_50 + 1;
                        local_50 = CONCAT44(local_50._4_4_,iVar24);
                        if (*(int *)((longlong)local_58 + 0xc) <= iVar24) break;
                        lVar27 = local_58[2];
                        local_68 = *(longlong **)(lVar27 + 8 + lVar19 * 8);
                        pvVar13 = _pthread_getspecific((pthread_key_t)lVar27);
                        pVar20 = (pthread_key_t)lVar27;
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        FUN_0126ef70();
                        plVar22 = local_40;
                        plVar21 = local_88;
                        if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar21 == plVar22) {
                          uVar12 = local_50._4_4_;
                        }
                        else {
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_01275420();
                          plVar21 = local_68;
                          pvVar13 = _pthread_getspecific(pVar20);
                          plVar22 = local_68;
                          if ((pvVar13 != (void *)0x0) &&
                             (lVar19 = FUN_00e8b990(), plVar21 = plVar22, lVar19 != 0)) {
                            plVar21 = (longlong *)
                                      plVar22[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                          }
                          FUN_0128dda0();
                          uVar12 = ~local_50._4_4_;
                          local_50 = CONCAT44(uVar12,(int)local_50);
                          bVar11 = true;
                        }
                      }
                      plVar22 = local_58;
                      FUN_001159b0();
                      pVar20 = (pthread_key_t)plVar22;
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  else {
                    bVar11 = false;
                  }
                  plVar22 = local_70;
                  bVar28 = local_71;
                  if ((*(char *)(unaff_RDI + 0x2b) == '\0') &&
                     (plVar21 = local_70, *(int *)((longlong)local_70 + 0xc) != 0)) {
                    local_290 = local_70;
                    local_288 = '\0';
                    FUN_00243390();
                    plVar21 = local_68;
                    if (local_68 == plVar22) {
                      if (!bVar29) {
                        if (local_60[0] != '\0') goto LAB_01c9f866;
                        bVar29 = true;
                        FUN_00d50b00();
                      }
LAB_01c9fbeb:
                      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (local_60[0] == '\0') {
                        if (local_68 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                        if (bVar29) {
                          FUN_00d50b20();
                          local_70 = plVar21;
                          bVar29 = true;
                        }
                        else {
                          local_70 = plVar21;
                          bVar29 = true;
                        }
                        goto LAB_01c9fbeb;
                      }
                      if (bVar29) {
                        FUN_00d50b20();
                        local_70 = plVar21;
                      }
                      else {
                        local_70 = local_68;
                      }
LAB_01c9f866:
                      local_60[0] = '\0';
                      bVar29 = true;
                    }
                    if ((local_288 != '\0') && (local_290 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_280 = local_70;
                    local_278 = '\0';
                    FUN_01266770();
                    plVar22 = local_68;
                    if (local_60[0] == '\0') {
                      if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60[0] != '\0'))
                         && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      local_60[0] = '\0';
                    }
                    if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    pvVar13 = _pthread_getspecific(pVar20);
                    pVar2 = (pthread_key_t)plVar22;
                    if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                      pVar20 = pVar2;
                    }
                    FUN_0125e930();
                    pvVar13 = _pthread_getspecific(pVar20);
                    if (pvVar13 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_0152ebe0();
                    plVar21 = local_68;
                    pvVar13 = _pthread_getspecific(pVar20);
                    plVar23 = local_68;
                    if ((pvVar13 != (void *)0x0) &&
                       (lVar19 = FUN_00e8b990(), plVar21 = plVar23, lVar19 != 0)) {
                      plVar21 = (longlong *)plVar23[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                    }
                    local_1e0 = FUN_01507970();
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_68 = local_f8;
                    FUN_00e7b970();
                    local_338 = local_68;
                    pvVar13 = _pthread_getspecific(pVar20);
                    if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                      pVar20 = pVar2;
                    }
                    dVar32 = (double)FUN_0125a280();
                    if (local_70 != (longlong *)0x0) {
                      local_368 = local_b8 - dVar32;
                      local_60[0] = '\0';
                      local_68 = (longlong *)0x0;
                      local_58 = local_70;
                      local_50 = 0xffffffff;
                      local_48 = 0;
                      local_1a0 = local_d8;
                      local_168 = local_d8;
                      local_138 = local_d8;
                      local_180 = local_d8;
                      plVar23 = local_d8;
                      local_328 = local_d8;
                      local_110 = local_d8;
                      while( true ) {
                        lVar19 = (longlong)(int)local_50;
                        iVar24 = (int)local_50 + 1;
                        local_50 = CONCAT44(local_50._4_4_,iVar24);
                        if (*(int *)((longlong)local_58 + 0xc) <= iVar24) break;
                        lVar27 = local_58[2];
                        local_68 = *(longlong **)(lVar27 + 8 + lVar19 * 8);
                        FUN_00e7bcc0();
                        pVar20 = (pthread_key_t)lVar27;
                        if (uVar3 == 0) {
                          if (!NAN(param_1)) {
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            local_c0 = (double)FUN_01259650();
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            dVar32 = (double)FUN_012f75b0();
                            local_c0 = local_c0 + local_368;
                            if (dVar32 <= local_c0) {
                              pvVar13 = _pthread_getspecific(pVar20);
                              if ((pvVar13 != (void *)0x0) &&
                                 (lVar19 = FUN_00e8b990(), local_180 = plVar23, lVar19 != 0)) {
                                local_180 = (longlong *)
                                            plVar23[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                              }
                              local_1d8 = (double)FUN_012f75b0();
                              pvVar13 = _pthread_getspecific(pVar20);
                              if (pvVar13 != (void *)0x0) {
                                lVar19 = FUN_00e8b990();
                                if (lVar19 == 0) {
                                  local_138 = local_110;
                                }
                                else {
                                  local_138 = local_110;
                                }
                              }
                              dVar32 = (double)FUN_012f7690();
                              local_180 = local_138;
                              plVar23 = local_138;
                              if (local_c0 < local_1d8 + dVar32) goto LAB_01ca0490;
                            }
                            goto LAB_01ca0645;
                          }
LAB_01ca0215:
                          local_c0 = 0.0;
LAB_01ca0490:
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          uVar31 = FUN_0125a2c0();
                          local_1d8 = (double)CONCAT44(local_1d8._4_4_,uVar31);
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_0125e7c0();
                          plVar21 = local_88;
                          if (local_80 == '\0') {
                            if (local_88 != (longlong *)0x0) {
                              FUN_00d50b00();
                            }
                          }
                          else {
                            local_80 = '\0';
                          }
                          local_340 = 1;
                          local_348 = plVar21;
                          local_398 = local_a0;
                          local_390 = 0;
                          pVar20 = (pthread_key_t)&local_398;
                          FUN_01c925b0(SUB84(local_c0,0),(ulonglong)local_1d8 & 0xffffffff);
                          plVar9 = local_40;
                          if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
                            FUN_00d50b00();
                          }
                          if (plVar21 != (longlong *)0x0) {
                            FUN_00d50b20();
                          }
                          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          local_38 = '\0';
                          local_40 = plVar9;
                          uVar12 = FUN_00d23d70();
                          plVar21 = (longlong *)(ulonglong)uVar12;
                          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((char)uVar12 == '\0') {
                            local_38 = '\0';
                            local_40 = plVar9;
                            FUN_00d21140();
                            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                          }
                          if (plVar9 != (longlong *)0x0) {
                            FUN_00d50b20();
                          }
                          if ((char)uVar12 != '\0') goto LAB_01ca0645;
                          bVar30 = local_50 < 0;
                          uVar12 = local_50._4_4_;
                        }
                        else {
                          if ((char)local_1a4 == '\0') {
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            FUN_0125e930();
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            FUN_0152ebe0();
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                            }
                            FUN_01507970();
                            FUN_00e7b820();
                            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                              FUN_00d50b20();
                            }
                            goto LAB_01ca0215;
                          }
                          pvVar13 = _pthread_getspecific(pVar20);
                          local_110 = local_328;
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_0125e930();
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_0152ebe0();
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_01507970();
                          FUN_00e7b820();
                          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 == (void *)0x0) {
                            local_110 = local_168;
                          }
                          else {
                            lVar19 = FUN_00e8b990();
                            if (lVar19 == 0) {
                            }
                            else {
                            }
                          }
                          local_168 = local_110;
                          local_40 = (longlong *)FUN_012f9540();
                          if (((extraout_var == 0) || ((ulonglong)local_40 >> 0x20 == 0)) ||
                             (cVar10 = FUN_00e7c020(), cVar10 == '\0')) {
                            pvVar13 = _pthread_getspecific(pVar20);
                            if (pvVar13 != (void *)0x0) {
                              FUN_00e8b990();
                              local_1a0 = local_d8;
                            }
                            plVar23 = local_1a0;
                            local_88 = (longlong *)FUN_012f96f0();
                            local_110 = plVar23;
                            local_328 = plVar23;
                            if ((extraout_var == 0) || ((ulonglong)local_88 >> 0x20 == 0)) {
                              local_c0 = 0.0;
                              local_168 = local_1a0;
                              local_138 = local_1a0;
                              local_180 = local_1a0;
                            }
                            else {
                              cVar10 = FUN_00e7c020();
                              local_c0 = 0.0;
                              local_168 = local_1a0;
                              local_138 = local_1a0;
                              local_180 = local_1a0;
                              if (cVar10 == '\0') goto LAB_01ca0645;
                            }
                            goto LAB_01ca0490;
                          }
                          local_138 = local_168;
                          local_180 = local_168;
                          plVar23 = local_110;
LAB_01ca0645:
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          FUN_01275420();
                          plVar21 = local_68;
                          pvVar13 = _pthread_getspecific(pVar20);
                          plVar9 = local_68;
                          if ((pvVar13 != (void *)0x0) &&
                             (lVar19 = FUN_00e8b990(), plVar21 = plVar9, lVar19 != 0)) {
                            plVar21 = (longlong *)
                                      plVar9[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                          }
                          FUN_0128dda0();
                          lVar19 = local_50;
                          uVar12 = ~local_50._4_4_;
                          local_50 = CONCAT44(uVar12,(int)local_50);
                          bVar11 = true;
                          bVar30 = -1 < lVar19;
                        }
                        if (uVar12 != 0) {
                          if (uVar12 == 0 || bVar30) {
                            iVar24 = -uVar12;
                          }
                          else {
                            local_50._4_4_ = (uint)((ulonglong)local_50 >> 0x20);
                            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar12);
                            FUN_00d23690();
                            local_48 = local_48 + local_50._4_4_;
                            iVar24 = 0;
                          }
                          local_50 = CONCAT44(iVar24,(int)local_50);
                        }
                      }
                      plVar23 = local_58;
                      FUN_001159b0();
                      pVar20 = (pthread_key_t)plVar23;
                    }
                    bVar28 = local_71;
                    if (plVar22 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                  }
                  if (((bVar11) && (local_70 != (longlong *)0x0)) &&
                     (*(int *)((longlong)local_70 + 0xc) != 0)) {
                    if (uVar3 == 0) {
                      if (!NAN(param_1)) {
                        local_260 = local_70;
                        local_258 = '\0';
                        FUN_01266770();
                        plVar21 = local_68;
                        pvVar13 = _pthread_getspecific(pVar20);
                        plVar22 = local_68;
                        if ((pvVar13 != (void *)0x0) &&
                           (lVar19 = FUN_00e8b990(), plVar21 = plVar22, lVar19 != 0)) {
                          plVar21 = (longlong *)
                                    plVar22[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                        }
                        dVar32 = (double)FUN_0125a280();
                        if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        local_b8 = (dVar32 + param_1) - local_1b8;
                        if (local_d8 != (longlong *)0x0) {
                          pvVar13 = _pthread_getspecific(pVar20);
                          if (pvVar13 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          uVar12 = FUN_012f8e60(SUB84(local_b8,0));
                          local_b8 = (double)(ulonglong)uVar12;
                        }
                      }
                    }
                    else {
                      local_270 = local_70;
                      local_268 = '\0';
                      FUN_01266770();
                      pvVar13 = _pthread_getspecific(pVar20);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0125e930();
                      pvVar13 = _pthread_getspecific(pVar20);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      FUN_0152ebe0();
                      plVar21 = local_68;
                      pvVar13 = _pthread_getspecific(pVar20);
                      plVar22 = local_68;
                      if ((pvVar13 != (void *)0x0) &&
                         (lVar19 = FUN_00e8b990(), plVar21 = plVar22, lVar19 != 0)) {
                        plVar21 = (longlong *)
                                  plVar22[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                      }
                      local_1e0 = FUN_01507970();
                      local_f8 = local_200;
                      FUN_00e7b820();
                      FUN_00e7b970();
                      if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_268 != '\0') && (local_270 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (local_d8 != (longlong *)0x0) {
                        pvVar13 = _pthread_getspecific(pVar20);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        pVar20 = 4;
                        local_f8 = (longlong *)FUN_012f9380(4,local_320);
                        pvVar13 = _pthread_getspecific(pVar20);
                        plVar21 = local_d8;
                        if ((pvVar13 != (void *)0x0) && (lVar19 = FUN_00e8b990(), lVar19 != 0)) {
                          plVar21 = (longlong *)
                                    local_d8[(ulonglong)(*(uint *)(lVar19 + 0x154) & 1) + 4];
                        }
                        FUN_00e7bcc0();
                        local_1e8 = FUN_012f9410();
                      }
                    }
                  }
                  if ((local_70 != (longlong *)0x0) && (*(int *)((longlong)local_70 + 0xc) != 0)) {
                    if (uVar3 == 0) {
                      if (!NAN(param_1)) {
                        pvVar13 = _pthread_getspecific(pVar20);
                        if (pvVar13 != (void *)0x0) {
                          FUN_00e8b990();
                        }
                        local_220 = local_70;
                        local_218 = '\0';
                        FUN_012ee5e0(SUB84(local_b8,0),DAT_023908c8);
                        if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    else {
                      pvVar13 = _pthread_getspecific(pVar20);
                      if (pvVar13 != (void *)0x0) {
                        FUN_00e8b990();
                      }
                      local_250 = local_70;
                      local_248 = '\0';
                      local_240 = local_120;
                      local_238 = '\0';
                      local_68 = local_358;
                      FUN_00e7bac0();
                      local_230 = 0;
                      local_228 = '\0';
                      FUN_012ef510(local_f8,&local_240,(char)local_1a4,local_68);
                      if ((local_228 != '\0') && (local_230 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_238 != '\0') && (local_240 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if ((local_248 != '\0') && (local_250 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    pplVar26 = &local_1c0;
                    if (local_d8 == (longlong *)0x0) {
                      pplVar26 = &local_1f0;
                    }
                    local_68 = *pplVar26;
                    local_60[0] = '\0';
                    FUN_00d21140();
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    local_68 = local_70;
                    local_60[0] = '\0';
                    FUN_00d21140();
                    if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                  }
                  if (((char)local_170 != '\0') && (plVar17 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((bVar29) && (local_70 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (local_a0 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  lVar19 = local_330 + 1;
                } while (lVar19 < *(int *)((longlong)local_130 + 0xc));
              }
              if (!bVar6) {
                FUN_00d50b20();
              }
              local_1b0 = (longlong *)((longlong)local_1b0 + 1);
            } while (local_1b0 != local_350);
          }
          lVar19 = *local_318;
          if ((lVar19 != 0) && (0 < *(int *)((longlong)puVar15 + 0xc))) {
            lVar27 = 1;
            while( true ) {
              lVar4 = *(longlong *)(puVar15[2] + -8 + lVar27 * 8);
              if (lVar4 != 0) {
                FUN_00d50b00();
              }
              local_380 = 1;
              plVar21 = *(longlong **)(local_190[2] + -8 + lVar27 * 8);
              local_388 = lVar4;
              if (plVar21 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              local_208 = '\x01';
              local_210 = plVar21;
              uVar31 = FUN_01c9d710(&local_210,&local_388);
              plVar17 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  uVar31 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_68 = plVar17;
              local_60[0] = '\0';
              FUN_00d214d0(uVar31,*(undefined4 *)(lVar19 + 0xc));
              if ((local_60[0] != '\0') && (local_68 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar17 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (lVar4 != 0) {
                FUN_00d50b20();
              }
              if (*(int *)((longlong)puVar15 + 0xc) <= lVar27) break;
              lVar19 = *local_318;
              lVar27 = lVar27 + 1;
            }
          }
          if (local_100 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if (local_178 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (local_190 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          uVar25 = CONCAT71((int7)((ulonglong)plVar21 >> 8),1);
          if (puVar15 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if (((char)local_188 != '\0') && (local_120 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if (local_a8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_198 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if ((1 < (int)uVar12) && (uVar1 == 1)) {
      local_14c = 0;
      bVar5 = true;
      goto LAB_01c9dea9;
    }
    bVar5 = false;
    local_14c = 0;
    uVar25 = 0;
    if (uVar12 == uVar1) goto LAB_01c9dea9;
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01ca0943:
  return uVar25 & 0xffffffff;
}


