// Function: FUN_0007cb70
// Address: 0007cb70
// Size: 10297 bytes
// Class: GNFilePath
// String references:
//   "GNFilePath"
//   "GNSoundFile"
//   "%@ %@"
//   "GNString"
//   "GNDictionary"

uint64_t FUN_0007cb70(dword *param_1,int64_t *param_2,uint32_t param_3,int param_4)

{
  int64_t lVar1;
  dword *pdVar2;
  char cVar3;
  dword *pdVar4;
  dword *pdVar5;
  uint64_t uVar6;
  int64_t lVar7;
  void*puVar8;
  int iVar9;
  int64_t *arg1;
  dword **ppdVar10;
  dword *pdVar11;
  uint7 uVar12;
  dword *unaff_R14;
  uint uVar13;
  bool bVar14;
  uint64_t uVar15;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  dword *local_490;
  char local_488;
  int64_t local_480;
  char local_478;
  dword *local_470;
  char local_468;
  dword *local_460;
  char local_458;
  dword *local_450;
  char local_448;
  int64_t local_440;
  char local_438;
  int64_t local_430;
  char local_428;
  int64_t local_420;
  char local_418;
  int64_t local_410;
  char local_408;
  int64_t local_400;
  char local_3f8;
  int64_t local_3f0;
  char local_3e8;
  int64_t local_3e0;
  char local_3d8;
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
  dword *local_380;
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
  dword *local_230;
  char local_228;
  dword *local_220;
  char local_218;
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
  int64_t local_1a0;
  char local_198;
  uint local_18c;
  dword *local_188;
  dword *local_168;
  dword *local_160;
  char local_158;
  dword *local_150;
  char local_148;
  dword *local_140;
  char local_138;
  dword *local_130;
  char local_128;
  dword *local_120;
  char local_118;
  dword *local_110;
  char local_108;
  dword *local_100;
  uint32_t local_f4;
  double local_f0;
  uint64_t local_e8;
  dword *local_e0;
  dword *local_d8;
  char local_d0;
  dword *local_c8;
  char local_c0;
  dword *local_b8;
  uint64_t local_b0;
  int local_a8;
  dword *local_a0;
  uint64_t local_98;
  dword *local_90;
  uint64_t local_88;
  dword *local_80;
  dword *local_78;
  void*local_70;
  dword *local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  local_100 = param_1;
  local_f4 = param_3;
  FUN_01d384d0();
  local_160 = local_c8;
  local_158 = 0;
  if (local_c0 == '\0') {
    if (local_c8 != (dword *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_c0 = '\0';
  }
  local_158 = '\x01';
  FUN_0010f340();
  local_e0 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (dword *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (dword *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_158 != '\0') && (local_160 != (dword *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != (dword *)0x0)) {
    FUN_00d50b20();
  }
  local_f0 = 0.0;
  if (*arg1 == 0) {
    local_e8 = 0;
    local_90 = (dword *)0x0;
  }
  else {
    uVar15 = FUN_01c03ab0();
    unaff_R14 = local_c8;
    local_490 = g_026d8410;
    if (g_026d8410 != (dword *)0x0) {
      uVar15 = FUN_00d50b00();
    }
    local_488 = '\x01';
    ppdVar10 = &local_68;
    FUN_000175c0(uVar15,&local_490);
    pdVar5 = local_68;
    pdVar4 = (dword *)FUN_00053ac0();
    if (pdVar5 == (dword *)0x0) {
LAB_0007ccea:
      ppdVar10 = (dword **)&g_02802688;
    }
    else {
      (**(code **)(*(int64_t *)pdVar5 + 0x360))();
      cVar3 = FUN_00e85ea0();
      unaff_R14 = pdVar4;
      if (cVar3 == '\0') goto LAB_0007ccea;
    }
    pdVar5 = *ppdVar10;
    local_90 = pdVar5;
    if (pdVar5 == (dword *)0x0) {
      local_e8 = 0;
      local_90 = (dword *)0x0;
    }
    else {
      if (*(char *)(ppdVar10 + 1) == '\0') {
        pdVar5 = (dword *)FUN_00d50b00();
      }
      else {
        *(void*)(ppdVar10 + 1) = 0;
      }
      local_e8 = CONCAT71((int7)((uint64_t)pdVar5 >> 8),1);
    }
    if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_488 != '\0') && (local_490 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    if (local_90 == (dword *)0x0) {
      local_480 = *(int64_t *)local_100;
      local_478 = '\0';
      FUN_0076e4d0();
      FUN_00d46300();
      local_90 = local_68;
      if (local_68 == (dword *)0x0) {
        local_90 = (dword *)0x0;
      }
      else if (local_60 == '\0') {
        uVar15 = FUN_00d50b00();
        local_e8 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
        if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
        local_e8 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
      }
      if ((local_478 != '\0') && (local_480 != 0)) {
        FUN_00d50b20();
      }
      uVar15 = FUN_01c03ab0();
      unaff_R14 = local_c8;
      pdVar5 = g_026d8410;
      local_470 = local_90;
      local_468 = '\0';
      if (g_026d8410 != (dword *)0x0) {
        uVar15 = FUN_00d50b00();
      }
      local_68 = pdVar5;
      local_60 = '\0';
      FUN_00ca0840(uVar15,&local_68);
      if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if (pdVar5 != (dword *)0x0) {
        FUN_00d50b20();
      }
      if ((local_468 != '\0') && (local_470 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != (dword *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_0010f410();
  pdVar5 = local_68;
  if (local_60 == '\0') {
    if (local_68 != (dword *)0x0) {
      FUN_00d50b00();
      if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_0007ce2f;
    }
  }
  else if (local_68 != (dword *)0x0) {
LAB_0007ce2f:
    if (g_028032a0 == (dword *)0x0) {
LAB_0007cee3:
      local_450 = pdVar5;
      local_448 = '\0';
      FUN_0035c210();
      pdVar4 = g_028032a0;
      if (g_028032a0 != local_68) {
        if (local_60 == '\0') {
          if (local_68 == (dword *)0x0) {
            pdVar4 = (dword *)0x0;
          }
          else {
            FUN_00d50b00();
            pdVar4 = local_68;
          }
        }
        else {
          local_60 = '\0';
          pdVar4 = local_68;
        }
        bVar14 = g_028032a0 != (dword *)0x0;
        g_028032a0 = pdVar4;
        if (bVar14) {
          FUN_00d50b20();
          pdVar4 = local_68;
        }
      }
      if ((pdVar4 != (dword *)0x0) && (g_028032a8 == '\0')) {
        g_028032a8 = '\x01';
        FUN_00e8cb90();
        pdVar4 = local_68;
      }
      if ((local_60 != '\0') && (pdVar4 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_448 != '\0') && (local_450 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if (g_028032a0 != (dword *)0x0) goto LAB_0007d1d0;
      unaff_R14 = (dword *)0x0;
    }
    else {
      FUN_0038fff0();
      local_460 = pdVar5;
      local_458 = '\0';
      cVar3 = (**(code **)(*(int64_t *)local_68 + 0x50))();
      if ((local_458 != '\0') && (local_460 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar3 == '\0') {
        (**(code **)(*(int64_t *)g_028032a0 + 0x378))();
        FUN_00d50130();
        if (g_028032a0 != (dword *)0x0) {
          g_028032a0 = (dword *)0x0;
          FUN_00d50b20();
        }
      }
      if (g_028032a0 == (dword *)0x0) goto LAB_0007cee3;
LAB_0007d1d0:
      cVar3 = (**(code **)(*(int64_t *)g_028032a0 + 0x368))();
      unaff_R14 = (dword *)0x0;
      if ((cVar3 == '\0') &&
         (unaff_R14 = (dword *)((int64_t)&MACH_HEADER.magic + 1), *arg1 != 0)) {
        uVar12 = (uint7)(uint3)((uint)param_4 >> 8);
        if ((local_90 == (dword *)0x0) ||
           (cVar3 = FUN_00d45ad0(), lVar7 = g_026f6f70, cVar3 == '\0')) {
          FUN_002e4b80();
          if (local_68 == (dword *)0x0) {
            cVar3 = '\0';
          }
          else {
            FUN_002e4b80();
            cVar3 = FUN_0076f070();
            if ((local_c0 != '\0') && (local_c8 != (dword *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          lVar7 = g_026f6f70;
          if (cVar3 == '\0') {
            if (g_026f6f70 != 0) {
              FUN_00d50b00();
            }
            lVar1 = g_026d8430;
            local_3b0 = lVar7;
            local_3a8 = '\x01';
            if (g_026d8430 != 0) {
              FUN_00d50b00();
            }
            local_3a0 = lVar1;
            local_398 = '\x01';
            local_390 = 0;
            local_388 = '\0';
            FUN_00d31230(&local_390,&local_3a0);
            pdVar4 = local_68;
            if (local_68 == (dword *)0x0) {
              pdVar4 = (dword *)0x0;
              pdVar11 = (dword *)0x0;
            }
            else if (local_60 == '\0') {
              FUN_00d50b00();
              pdVar11 = (dword *)CONCAT71(uVar12,1);
              if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
              pdVar11 = (dword *)CONCAT71(uVar12,1);
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
          }
          else {
            if (g_026f6f70 != 0) {
              FUN_00d50b00();
            }
            lVar1 = g_026d8428;
            local_3e0 = lVar7;
            local_3d8 = '\x01';
            if (g_026d8428 != 0) {
              FUN_00d50b00();
            }
            local_3d0 = lVar1;
            local_3c8 = '\x01';
            local_3c0 = 0;
            local_3b8 = '\0';
            FUN_00d31230(&local_3c0,&local_3d0);
            pdVar4 = local_68;
            if (local_68 == (dword *)0x0) {
              pdVar4 = (dword *)0x0;
              pdVar11 = (dword *)0x0;
            }
            else if (local_60 == '\0') {
              FUN_00d50b00();
              pdVar11 = (dword *)CONCAT71(uVar12,1);
              if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
              pdVar11 = (dword *)CONCAT71(uVar12,1);
            }
            if ((local_3b8 != '\0') && (local_3c0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_3c8 != '\0') && (local_3d0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_3d8 != '\0') && (local_3e0 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else if ((param_4 == 3) || (param_4 == 0)) {
          if (g_026f6f70 != 0) {
            FUN_00d50b00();
          }
          lVar1 = g_026d8418;
          local_440 = lVar7;
          local_438 = '\x01';
          if (g_026d8418 != 0) {
            FUN_00d50b00();
          }
          local_430 = lVar1;
          local_428 = '\x01';
          local_420 = 0;
          local_418 = '\0';
          FUN_00d31230(&local_420,&local_430);
          pdVar4 = local_68;
          if (local_68 == (dword *)0x0) {
            pdVar4 = (dword *)0x0;
            pdVar11 = (dword *)0x0;
          }
          else if (local_60 == '\0') {
            FUN_00d50b00();
            pdVar11 = (dword *)CONCAT71(uVar12,1);
            if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
            pdVar11 = (dword *)CONCAT71(uVar12,1);
          }
          if ((local_418 != '\0') && (local_420 != 0)) {
            FUN_00d50b20();
          }
          if ((local_428 != '\0') && (local_430 != 0)) {
            FUN_00d50b20();
          }
          if ((local_438 != '\0') && (local_440 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (g_026f6f70 != 0) {
            FUN_00d50b00();
          }
          lVar1 = g_026d8420;
          local_410 = lVar7;
          local_408 = '\x01';
          if (g_026d8420 != 0) {
            FUN_00d50b00();
          }
          local_400 = lVar1;
          local_3f8 = '\x01';
          local_3f0 = 0;
          local_3e8 = '\0';
          FUN_00d31230(&local_3f0,&local_400);
          pdVar4 = local_68;
          if (local_68 == (dword *)0x0) {
            pdVar4 = (dword *)0x0;
            pdVar11 = (dword *)0x0;
          }
          else if (local_60 == '\0') {
            FUN_00d50b00();
            pdVar11 = (dword *)CONCAT71(uVar12,1);
            if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_60 = '\0';
            pdVar11 = (dword *)CONCAT71(uVar12,1);
          }
          if ((local_3e8 != '\0') && (local_3f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_3f8 != '\0') && (local_400 != 0)) {
            FUN_00d50b20();
          }
          if ((local_408 != '\0') && (local_410 != 0)) {
            FUN_00d50b20();
          }
        }
        local_100 = pdVar4;
        local_a0 = pdVar11;
        (**(code **)(*(int64_t *)pdVar5 + 0x468))();
        pdVar11 = local_68;
        if ((((local_60 == '\0') && (local_68 != (dword *)0x0)) &&
            (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if (pdVar4 != (dword *)0x0) {
          local_d8 = pdVar11;
          local_168 = pdVar4;
          uVar15 = FUN_00083ea0(2,&local_168);
          FUN_00d8cb40(uVar15,&local_68);
          pdVar4 = local_c8;
          if (pdVar11 == local_c8) {
LAB_0007dd5f:
            if ((local_c0 != '\0') && (local_c8 != (dword *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_c0 == '\0') {
              if (local_c8 != (dword *)0x0) {
                FUN_00d50b00();
              }
              bVar14 = pdVar11 != (dword *)0x0;
              pdVar11 = pdVar4;
              if (bVar14) {
                FUN_00d50b20();
              }
              goto LAB_0007dd5f;
            }
            if (pdVar11 != (dword *)0x0) {
              FUN_00d50b20();
            }
            local_c0 = '\0';
            pdVar11 = pdVar4;
          }
          local_68 = (dword *)&g_0253d630;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          local_68 = (dword *)&g_024c5048;
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*(int64_t *)pdVar5 + 0x368))();
        local_150 = local_68;
        local_148 = 0;
        if (local_60 == '\0') {
          if (local_68 != (dword *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        pdVar5 = local_100;
        local_148 = '\x01';
        local_378 = '\0';
        local_380 = pdVar11;
        uVar15 = FUN_00390020();
        FUN_01c01f90(0,uVar15);
        if ((local_378 != '\0') && (local_380 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_148 != '\0') && (local_150 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if (pdVar11 != (dword *)0x0) {
          FUN_00d50b20();
        }
        if (((char)local_a0 != '\0') && (pdVar5 != (dword *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
    goto LAB_0007dec8;
  }
  if (g_028032a0 != (dword *)0x0) {
    FUN_00d50130();
  }
  if (g_028032a0 != (dword *)0x0) {
    g_028032a0 = (dword *)0x0;
    FUN_00d50b20();
  }
  cVar3 = FUN_0010f8e0();
  if (cVar3 != '\0') {
    FUN_0010db00();
    pdVar5 = local_68;
    if ((((local_60 == '\0') && (local_68 != (dword *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
       && (local_68 != (dword *)0x0)) {
      FUN_00d50b20();
    }
    local_a0 = pdVar5;
    if ((pdVar5[3] == 0) || (*param_2 == 0)) {
      unaff_R14 = (dword *)0x0;
LAB_0007ef75:
      bVar14 = false;
    }
    else {
      uVar6 = FUN_01d384b0();
      if ((uVar6 & 5) != 0) {
        if ((local_90 == (dword *)0x0) ||
           (cVar3 = FUN_00d45ad0(), lVar7 = g_026f6f70, cVar3 == '\0')) {
          FUN_002e4b80();
          if (local_68 == (dword *)0x0) {
            cVar3 = '\0';
          }
          else {
            FUN_002e4b80();
            cVar3 = FUN_0076f070();
            if ((local_c0 != '\0') && (local_c8 != (dword *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          lVar7 = g_026f6f70;
          if (cVar3 == '\0') {
            if (g_026f6f70 != 0) {
              FUN_00d50b00();
            }
            lVar1 = g_026d8430;
            local_280 = lVar7;
            local_278 = '\x01';
            if (g_026d8430 != 0) {
              FUN_00d50b00();
            }
            local_270 = lVar1;
            local_268 = '\x01';
            local_260 = 0;
            local_258 = '\0';
            FUN_00d31230(&local_260);
            pdVar5 = local_a0;
            local_78 = local_68;
            if (local_68 == (dword *)0x0) {
              local_78 = (dword *)0x0;
              local_98 = 0;
            }
            else if (local_60 == '\0') {
              uVar15 = FUN_00d50b00();
              local_98 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
              if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
              local_98 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
            }
            if ((local_258 != '\0') && (local_260 != 0)) {
              FUN_00d50b20();
            }
            if ((local_268 != '\0') && (local_270 != 0)) {
              FUN_00d50b20();
            }
            if ((local_278 != '\0') && (local_280 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (g_026f6f70 != 0) {
              FUN_00d50b00();
            }
            lVar1 = g_026d8428;
            local_2b0 = lVar7;
            local_2a8 = '\x01';
            if (g_026d8428 != 0) {
              FUN_00d50b00();
            }
            local_2a0 = lVar1;
            local_298 = '\x01';
            local_290 = 0;
            local_288 = '\0';
            FUN_00d31230(&local_290);
            pdVar5 = local_a0;
            local_78 = local_68;
            if (local_68 == (dword *)0x0) {
              local_78 = (dword *)0x0;
              local_98 = 0;
            }
            else if (local_60 == '\0') {
              uVar15 = FUN_00d50b00();
              local_98 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
              if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
              local_98 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
            }
            if ((local_288 != '\0') && (local_290 != 0)) {
              FUN_00d50b20();
            }
            if ((local_298 != '\0') && (local_2a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_2a8 != '\0') && (local_2b0 != 0)) {
              FUN_00d50b20();
            }
          }
LAB_0007e1f4:
          local_88 = 0;
          local_80 = (dword *)0x0;
        }
        else {
          if ((param_4 == 3) || (param_4 == 0)) {
            if ((int)pdVar5[3] < 2) {
              if (g_026f6f70 != 0) {
                FUN_00d50b00();
              }
              lVar1 = g_026d8418;
              local_340 = lVar7;
              local_338 = '\x01';
              if (g_026d8418 != 0) {
                FUN_00d50b00();
              }
              local_330 = lVar1;
              local_328 = '\x01';
              local_320 = 0;
              local_318 = '\0';
              FUN_00d31230(&local_320);
              pdVar5 = local_a0;
              local_78 = local_68;
              if (local_68 == (dword *)0x0) {
                local_78 = (dword *)0x0;
                local_98 = 0;
              }
              else if (local_60 == '\0') {
                uVar15 = FUN_00d50b00();
                local_98 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
                if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_60 = '\0';
                local_98 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
              }
              if ((local_318 != '\0') && (local_320 != 0)) {
                FUN_00d50b20();
              }
              if ((local_328 != '\0') && (local_330 != 0)) {
                FUN_00d50b20();
              }
              if ((local_338 != '\0') && (local_340 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0007e1f4;
            }
            if (g_026f6f70 != 0) {
              FUN_00d50b00();
            }
            lVar1 = g_026d8438;
            local_370 = lVar7;
            local_368 = '\x01';
            if (g_026d8438 != 0) {
              FUN_00d50b00();
            }
            local_360 = lVar1;
            local_358 = '\x01';
            local_350 = 0;
            local_348 = '\0';
            FUN_00d31230(&local_350);
            pdVar5 = local_a0;
            local_80 = local_68;
            if (local_68 == (dword *)0x0) {
              local_80 = (dword *)0x0;
              local_88 = 0;
            }
            else if (local_60 == '\0') {
              uVar15 = FUN_00d50b00();
              local_88 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
              if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
              local_88 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
            }
            if ((local_348 != '\0') && (local_350 != 0)) {
              FUN_00d50b20();
            }
            if ((local_358 != '\0') && (local_360 != 0)) {
              FUN_00d50b20();
            }
            if ((local_368 != '\0') && (local_370 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((int)pdVar5[3] < 2) {
              if (g_026f6f70 != 0) {
                FUN_00d50b00();
              }
              lVar1 = g_026d8420;
              local_2e0 = lVar7;
              local_2d8 = '\x01';
              if (g_026d8420 != 0) {
                FUN_00d50b00();
              }
              local_2d0 = lVar1;
              local_2c8 = '\x01';
              local_2c0 = 0;
              local_2b8 = '\0';
              FUN_00d31230(&local_2c0);
              pdVar5 = local_a0;
              local_78 = local_68;
              if (local_68 == (dword *)0x0) {
                local_78 = (dword *)0x0;
                local_98 = 0;
              }
              else if (local_60 == '\0') {
                uVar15 = FUN_00d50b00();
                local_98 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
                if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_60 = '\0';
                local_98 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
              }
              if ((local_2b8 != '\0') && (local_2c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_2c8 != '\0') && (local_2d0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_2d8 != '\0') && (local_2e0 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0007e1f4;
            }
            if (g_026f6f70 != 0) {
              FUN_00d50b00();
            }
            lVar1 = g_026d8440;
            local_310 = lVar7;
            local_308 = '\x01';
            if (g_026d8440 != 0) {
              FUN_00d50b00();
            }
            local_300 = lVar1;
            local_2f8 = '\x01';
            local_2f0 = 0;
            local_2e8 = '\0';
            FUN_00d31230(&local_2f0);
            pdVar5 = local_a0;
            local_80 = local_68;
            if (local_68 == (dword *)0x0) {
              local_80 = (dword *)0x0;
              local_88 = 0;
            }
            else if (local_60 == '\0') {
              uVar15 = FUN_00d50b00();
              local_88 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
              if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_60 = '\0';
              local_88 = CONCAT71((int7)((uint64_t)local_68 >> 8),1);
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
          }
          local_98 = 0;
          local_78 = (dword *)0x0;
        }
        local_c0 = '\0';
        local_c8 = (dword *)0x0;
        local_b8 = pdVar5;
        local_b0 = 0xffffffff;
        local_a8 = 0;
        local_b0._4_4_ = 0;
        while( true ) {
          if (local_b0._4_4_ != 0) {
            if (local_b0._4_4_ < 1) {
              iVar9 = -local_b0._4_4_;
            }
            else {
              iVar9 = (int)local_b0 - local_b0._4_4_;
              local_b0 = CONCAT44(local_b0._4_4_,iVar9);
              FUN_00d23690();
              local_a8 = local_a8 + local_b0._4_4_;
              iVar9 = 0;
            }
            local_b0 = CONCAT44(iVar9,(int)local_b0);
          }
          lVar7 = (int64_t)(int)local_b0;
          iVar9 = (int)local_b0 + 1;
          local_b0 = CONCAT44(local_b0._4_4_,iVar9);
          if ((int)local_b8[3] <= iVar9) break;
          pdVar5 = *(dword **)(*(int64_t *)(local_b8 + 4) + 8 + lVar7 * 8);
          local_c8 = pdVar5;
          if ((g_026fdd40 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
            g_026cd0e8 = FUN_00d4fe50();
            g_026cd0d0 = "GNDictionary";
            g_026cd0d8 = 0x28;
            g_026cd0e0 = FUN_00022d20;
            g_026cd0f0 = 0;
            ram_00000000026cd0f8 = 0;
            g_026cd100 = 0;
            g_026cd178 = 0;
            ram_00000000026cd180 = 0;
            g_026cd188 = 0;
            g_026cd18a = 6;
            g_026cd108 = 0;
            ram_00000000026cd110 = 0;
            g_026cd118 = 0;
            ram_00000000026cd120 = 0;
            g_026cd128 = 0;
            ram_00000000026cd130 = 0;
            g_026cd138 = 0;
            ram_00000000026cd140 = 0;
            g_026cd148 = 0;
            ram_00000000026cd150 = 0;
            g_026cd158 = 0;
            ram_00000000026cd160 = 0;
            g_026cd168 = 0;
            ram_00000000026cd170 = 0;
            g_026cd193 = 0;
            g_026cd18b = 0;
            ___cxa_guard_release();
          }
          ppdVar10 = (dword **)&g_02802688;
          if (pdVar5 != (dword *)0x0) {
            (**(code **)(*(int64_t *)pdVar5 + 0x360))();
            cVar3 = FUN_00e85ea0();
            ppdVar10 = (dword **)&g_02802688;
            if (cVar3 != '\0') {
              if ((g_026fd0c0 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                g_026d5e58 = FUN_00d4fe50();
                g_026d5e40 = "GNString";
                g_026d5e48 = 0x40;
                g_026d5e50 = FUN_0005d920;
                g_026d5e60 = 0;
                ram_00000000026d5e68 = 0;
                g_026d5e70 = 0;
                ram_00000000026d5e78 = 0;
                g_026d5e80 = 0;
                ram_00000000026d5e88 = 0;
                g_026d5e90 = 0;
                ram_00000000026d5e98 = 0;
                g_026d5ea0 = 0;
                ram_00000000026d5ea8 = 0;
                g_026d5eb0 = 0;
                ram_00000000026d5eb8 = 0;
                g_026d5ec0 = 0;
                ram_00000000026d5ec8 = 0;
                g_026d5ed0 = 0;
                ram_00000000026d5ed8 = 0;
                g_026d5ee0 = 0;
                ram_00000000026d5ee8 = 0;
                g_026d5ef0 = 0;
                ram_00000000026d5ef8 = 0;
                g_026d5f00 = 0;
                ___cxa_guard_release();
              }
              cVar3 = FUN_00e8db60();
              ppdVar10 = &local_c8;
              if (cVar3 == '\0') {
                ppdVar10 = (dword **)&g_02802688;
              }
            }
          }
          pdVar5 = local_c8;
          if (*(char *)(ppdVar10 + 1) == '\0') {
            if (*ppdVar10 == (dword *)0x0) goto LAB_0007e430;
            FUN_00d50b00();
LAB_0007e371:
            puVar8 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar8 = &g_024c5080;
            uVar15 = FUN_00d500e0();
            lVar7 = g_026d8408;
            if (g_026d8408 != 0) {
              uVar15 = FUN_00d50b00();
            }
            local_250 = lVar7;
            local_248 = '\x01';
            uVar15 = FUN_000175c0(uVar15,&local_250);
            pdVar5 = local_68;
            if ((g_026fde10 == '\0') &&
               (iVar9 = ___cxa_guard_acquire(), uVar15 = extraout_XMM0_Qa_00, iVar9 != 0)) {
              local_70 = puVar8;
              g_026d1818 = FUN_00d4fe50();
              g_026d1800 = "GNFilePath";
              g_026d1808 = 0x40;
              g_026d1810 = FUN_00041050;
              g_026d1820 = 0;
              ram_00000000026d1828 = 0;
              g_026d1830 = 0;
              ram_00000000026d1838 = 0;
              g_026d1840 = 0;
              ram_00000000026d1848 = 0;
              g_026d1850 = 0;
              ram_00000000026d1858 = 0;
              g_026d1860 = 0;
              ram_00000000026d1868 = 0;
              g_026d1870 = 0;
              ram_00000000026d1878 = 0;
              g_026d1880 = 0;
              ram_00000000026d1888 = 0;
              g_026d1890 = 0;
              ram_00000000026d1898 = 0;
              g_026d18a0 = 0;
              ram_00000000026d18a8 = 0;
              g_026d18b0 = 0;
              ram_00000000026d18b8 = 0;
              g_026d18c0 = 0;
              uVar15 = ___cxa_guard_release();
              puVar8 = local_70;
            }
            ppdVar10 = (dword **)&g_02802688;
            if (pdVar5 != (dword *)0x0) {
              (**(code **)(*(int64_t *)pdVar5 + 0x360))();
              cVar3 = FUN_00e85ea0();
              ppdVar10 = &local_68;
              uVar15 = extraout_XMM0_Qa;
              if (cVar3 == '\0') {
                ppdVar10 = (dword **)&g_02802688;
              }
            }
            pdVar5 = *ppdVar10;
            if (*(char *)(ppdVar10 + 1) == '\0') {
              if (pdVar5 != (dword *)0x0) {
                uVar15 = FUN_00d50b00();
              }
            }
            else {
              *(void*)(ppdVar10 + 1) = 0;
            }
            if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
              uVar15 = FUN_00d50b20();
            }
            if ((local_248 != '\0') && (local_250 != 0)) {
              uVar15 = FUN_00d50b20();
            }
            lVar7 = g_026f6ee0;
            if (g_026f6ee0 != 0) {
              uVar15 = FUN_00d50b00();
            }
            local_240 = lVar7;
            local_238 = '\x01';
            FUN_000175c0(uVar15,&local_240);
            pdVar4 = local_68;
            FUN_00053ac0();
            ppdVar10 = (dword **)&g_02802688;
            if (pdVar4 != (dword *)0x0) {
              (**(code **)(*(int64_t *)pdVar4 + 0x360))();
              cVar3 = FUN_00e85ea0();
              ppdVar10 = &local_68;
              if (cVar3 == '\0') {
                ppdVar10 = (dword **)&g_02802688;
              }
            }
            pdVar4 = *ppdVar10;
            if (*(char *)(ppdVar10 + 1) == '\0') {
              if (pdVar4 != (dword *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(ppdVar10 + 1) = 0;
            }
            if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_238 != '\0') && (local_240 != 0)) {
              FUN_00d50b20();
            }
            local_f0 = (double)FUN_00d45bc0();
            if (*arg1 != 0) {
              local_70 = puVar8;
              (**(code **)(*(int64_t *)pdVar5 + 0x468))();
              pdVar11 = local_68;
              if ((((local_60 == '\0') && (local_68 != (dword *)0x0)) &&
                  (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (dword *)0x0)) {
                FUN_00d50b20();
              }
              pdVar2 = local_80;
              if (local_80 == (dword *)0x0) {
                cVar3 = '\x01';
                if (local_78 == (dword *)0x0) goto LAB_0007e7e0;
                local_168 = pdVar11;
                local_188 = local_78;
                uVar15 = FUN_00083ea0(2,&local_188);
                FUN_00d8cb40(uVar15,&local_68);
                pdVar2 = local_d8;
                if (pdVar11 == local_d8) {
LAB_0007e8d8:
                  if ((local_d0 != '\0') && (local_d8 != (dword *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  if (local_d0 == '\0') {
                    if (local_d8 != (dword *)0x0) {
                      FUN_00d50b00();
                    }
                    bVar14 = pdVar11 != (dword *)0x0;
                    pdVar11 = pdVar2;
                    if (bVar14) {
                      FUN_00d50b20();
                    }
                    goto LAB_0007e8d8;
                  }
                  if (pdVar11 != (dword *)0x0) {
                    FUN_00d50b20();
                  }
                  local_d0 = '\0';
                  pdVar11 = pdVar2;
                }
                local_68 = (dword *)&g_0253d630;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
                local_68 = (dword *)&g_024c5048;
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
              }
              else if (pdVar11 == local_80) {
LAB_0007e7e0:
                cVar3 = '\x01';
              }
              else {
                if ((char)local_88 != '\0') {
                  FUN_00d50b00();
                }
                cVar3 = (char)local_88;
                bVar14 = pdVar11 != (dword *)0x0;
                pdVar11 = pdVar2;
                if (bVar14) {
                  FUN_00d50b20();
                  cVar3 = (char)local_88;
                  pdVar11 = local_80;
                }
              }
              (**(code **)(*(int64_t *)pdVar5 + 0x368))();
              pdVar2 = local_68;
              local_138 = 0;
              if (local_60 == '\0') {
                if (local_68 != (dword *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_60 = '\0';
              }
              local_138 = '\x01';
              local_140 = pdVar2;
              local_228 = '\0';
              local_230 = pdVar11;
              FUN_01c01f90(0,&local_230);
              if ((local_228 != '\0') && (local_230 != (dword *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != (dword *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                FUN_00d50b20();
              }
              if ((cVar3 != '\0') && (pdVar11 != (dword *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (pdVar4 != (dword *)0x0) {
              FUN_00d50b20();
            }
            if (pdVar5 != (dword *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
            uVar13 = 3;
            bVar14 = false;
LAB_0007ebe7:
            if (!bVar14) {
              FUN_00d50b20();
            }
            pdVar5 = local_a0;
            if (uVar13 != 3) goto LAB_0007ef1f;
          }
          else {
            *(void*)(ppdVar10 + 1) = 0;
            if (*ppdVar10 != (dword *)0x0) goto LAB_0007e371;
LAB_0007e430:
            if ((g_026d8478 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
              g_026f9358 = FUN_00d4fe50();
              g_026f9340 = "GNSoundFile";
              g_026f9348 = 0x98;
              g_026f9350 = FUN_00083bc0;
              g_026f9360 = 0;
              ram_00000000026f9368 = 0;
              g_026f9370 = 0;
              g_026f93e8 = 0;
              ram_00000000026f93f0 = 0;
              g_026f93f8 = 0;
              g_026f93fa = 3;
              g_026f9378 = 0;
              ram_00000000026f9380 = 0;
              g_026f9388 = 0;
              ram_00000000026f9390 = 0;
              g_026f9398 = 0;
              ram_00000000026f93a0 = 0;
              g_026f93a8 = 0;
              ram_00000000026f93b0 = 0;
              g_026f93b8 = 0;
              ram_00000000026f93c0 = 0;
              g_026f93c8 = 0;
              ram_00000000026f93d0 = 0;
              g_026f93d8 = 0;
              ram_00000000026f93e0 = 0;
              g_026f9403 = 0;
              g_026f93fb = 0;
              ___cxa_guard_release();
            }
            ppdVar10 = (dword **)&g_02802688;
            if (pdVar5 != (dword *)0x0) {
              (**(code **)(*(int64_t *)pdVar5 + 0x360))();
              cVar3 = FUN_00e85ea0();
              ppdVar10 = &local_c8;
              if (cVar3 == '\0') {
                ppdVar10 = (dword **)&g_02802688;
              }
            }
            if (*(char *)(ppdVar10 + 1) == '\0') {
              if (*ppdVar10 == (dword *)0x0) goto LAB_0007e261;
              FUN_00d50b00();
LAB_0007e6ef:
              local_f0 = (double)FUN_00b7a6e0();
              pdVar5 = local_78;
              if (local_f0 <= 0.0) {
                uVar13 = 1;
                local_18c = 0;
              }
              else {
                FUN_00b88600();
                pdVar4 = local_68;
                if (local_60 == '\0') {
                  if (local_68 != (dword *)0x0) {
                    FUN_00d50b00();
                    if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_0007e732;
                  }
                  if (*arg1 == 0) goto LAB_0007ea64;
LAB_0007e740:
                  FUN_00b8c730();
                  pdVar11 = local_68;
                  if ((((local_60 == '\0') && (local_68 != (dword *)0x0)) &&
                      (FUN_00d50b00(), local_60 != '\0')) && (local_68 != (dword *)0x0)) {
                    FUN_00d50b20();
                  }
                  pdVar2 = local_80;
                  if (local_80 == (dword *)0x0) {
                    if (pdVar5 == (dword *)0x0) goto LAB_0007e8b2;
                    local_168 = pdVar11;
                    local_188 = pdVar5;
                    uVar15 = FUN_00083ea0(2,&local_188);
                    local_70 = (void*)CONCAT71(local_70._1_7_,1);
                    FUN_00d8cb40(uVar15,&local_68);
                    pdVar5 = local_d8;
                    if (pdVar11 == local_d8) {
LAB_0007ea8e:
                      if ((local_d0 != '\0') && (local_d8 != (dword *)0x0)) {
                        FUN_00d50b20();
                      }
                    }
                    else {
                      if (local_d0 == '\0') {
                        if (local_d8 != (dword *)0x0) {
                          FUN_00d50b00();
                        }
                        bVar14 = pdVar11 != (dword *)0x0;
                        pdVar11 = pdVar5;
                        if (bVar14) {
                          FUN_00d50b20();
                        }
                        goto LAB_0007ea8e;
                      }
                      if (pdVar11 != (dword *)0x0) {
                        FUN_00d50b20();
                      }
                      local_d0 = '\0';
                      pdVar11 = pdVar5;
                    }
                    local_68 = (dword *)&g_0253d630;
                    if ((local_40 != '\0') && (local_48 != 0)) {
                      FUN_00d50b20();
                    }
                    local_68 = (dword *)&g_024c5048;
                    if ((local_50 != '\0') && (local_58 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  else if (pdVar11 == local_80) {
LAB_0007e8b2:
                    local_70 = (void*)CONCAT71(local_70._1_7_,1);
                  }
                  else {
                    if ((char)local_88 != '\0') {
                      FUN_00d50b00();
                    }
                    local_70 = (void*)CONCAT71(local_70._1_7_,(char)local_88);
                    bVar14 = pdVar11 != (dword *)0x0;
                    pdVar11 = pdVar2;
                    if (bVar14) {
                      FUN_00d50b20();
                      local_70 = (void*)CONCAT71(local_70._1_7_,(char)local_88);
                    }
                  }
                  (**(code **)(*(int64_t *)pdVar4 + 0x368))();
                  pdVar5 = local_68;
                  local_128 = 0;
                  if (local_60 == '\0') {
                    if (local_68 != (dword *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_60 = '\0';
                  }
                  local_128 = '\x01';
                  local_130 = pdVar5;
                  local_218 = '\0';
                  local_220 = pdVar11;
                  FUN_01c01f90(0,&local_220);
                  if ((local_218 != '\0') && (local_220 != (dword *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_128 != '\0') && (local_130 != (dword *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (((char)local_70 != '\0') && (pdVar11 != (dword *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
LAB_0007e732:
                  if (*arg1 != 0) goto LAB_0007e740;
                  if (pdVar4 == (dword *)0x0) {
LAB_0007ea64:
                    uVar13 = 3;
                    goto LAB_0007ebdd;
                  }
                }
                uVar13 = 3;
                FUN_00d50b20();
              }
LAB_0007ebdd:
              bVar14 = true;
              FUN_00d50b20();
              goto LAB_0007ebe7;
            }
            *(void*)(ppdVar10 + 1) = 0;
            if (*ppdVar10 != (dword *)0x0) goto LAB_0007e6ef;
          }
LAB_0007e261:
          pdVar5 = local_a0;
        }
        uVar13 = 0;
LAB_0007ef1f:
        FUN_00083b20();
        unaff_R14 = (dword *)((int64_t)&MACH_HEADER.magic + 1);
        if ((uVar13 & 1) != 0) {
          unaff_R14 = (dword *)(uint64_t)local_18c;
        }
        if (((char)local_88 != '\0') && (local_80 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_98 != '\0') && (local_78 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if (pdVar5 == (dword *)0x0) goto LAB_0007dec8;
        goto LAB_0007ef75;
      }
      bVar14 = true;
    }
    FUN_00d50b20();
    if (!bVar14) goto LAB_0007dec8;
  }
  local_60 = '\0';
  local_68 = (dword *)0x0;
  unaff_R14 = (dword *)0x0;
  cVar3 = FUN_00110420(0,&local_d8,&local_68);
  if (cVar3 != '\0') {
    lVar7 = FUN_00dd6dc0();
    if (lVar7 == *(int64_t *)local_100) {
      uVar6 = FUN_01d384b0();
      lVar7 = g_026d8448;
      if ((uVar6 & 0x14) == 0) {
        uVar6 = FUN_01d384b0();
        if ((uVar6 & 1) != 0) goto LAB_0007efdb;
      }
      else {
        unaff_R14 = &MACH_HEADER.ncmds;
        if (*arg1 != 0) {
          if (g_026d8448 != 0) {
            FUN_00d50b00();
          }
          lVar1 = g_026f6f70;
          local_210 = lVar7;
          local_208 = '\x01';
          if (g_026f6f70 != 0) {
            FUN_00d50b00();
          }
          lVar7 = g_026d8450;
          local_200 = lVar1;
          local_1f8 = '\x01';
          if (g_026d8450 != 0) {
            FUN_00d50b00();
          }
          local_1f0 = lVar7;
          local_1e8 = '\x01';
          local_1e0 = 0;
          local_1d8 = '\0';
          FUN_00d31230(&local_1e0,&local_1f0);
          local_120 = local_c8;
          local_118 = 0;
          if (local_c0 == '\0') {
            if (local_c8 != (dword *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_c0 = '\0';
          }
          local_118 = '\x01';
          FUN_01c01f90(local_d8,local_f0);
          if ((local_118 != '\0') && (local_120 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != (dword *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1e8 != '\0') && (local_1f0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1f8 != '\0') && (local_200 != 0)) {
            FUN_00d50b20();
          }
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
LAB_0007efdb:
      lVar7 = g_026d8448;
      unaff_R14 = (dword *)((int64_t)&MACH_HEADER.magic + 1);
      if (*arg1 != 0) {
        if (g_026d8448 != 0) {
          FUN_00d50b00();
        }
        lVar1 = g_026f6f70;
        local_1d0 = lVar7;
        local_1c8 = '\x01';
        if (g_026f6f70 != 0) {
          FUN_00d50b00();
        }
        lVar7 = g_026d8458;
        local_1c0 = lVar1;
        local_1b8 = '\x01';
        if (g_026d8458 != 0) {
          FUN_00d50b00();
        }
        local_1b0 = lVar7;
        local_1a8 = '\x01';
        local_1a0 = 0;
        local_198 = '\0';
        FUN_00d31230(&local_1a0,&local_1b0);
        local_110 = local_c8;
        local_108 = 0;
        if (local_c0 == '\0') {
          if (local_c8 != (dword *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c0 = '\0';
        }
        local_108 = '\x01';
        FUN_01c01f90(local_d8,local_f0);
        if ((local_108 != '\0') && (local_110 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (dword *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b8 != '\0') && (local_1c0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((local_60 != '\0') && (local_68 != (dword *)0x0)) {
    FUN_00d50b20();
  }
LAB_0007dec8:
  if (((char)local_e8 != '\0') && (local_90 != (dword *)0x0)) {
    FUN_00d50b20();
  }
  if (local_e0 != (dword *)0x0) {
    FUN_00d50b20();
  }
  return (uint64_t)unaff_R14 & 0xffffffff;
}

