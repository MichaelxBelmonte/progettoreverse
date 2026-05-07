// Function: FUN_00631c50
// Address: 00631c50
// Size: 12971 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"
//   "MDNoLicenseController"
//   "MDLicenseChangedController"

void FUN_00631c50(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  bool bVar5;
  int64_t lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  void*puVar10;
  int64_t **pplVar11;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar12;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar13;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  uint32_t extraout_XMM0_Da_02;
  uint32_t extraout_XMM0_Da_03;
  uint32_t extraout_XMM0_Da_04;
  uint32_t extraout_XMM0_Da_05;
  int64_t local_718;
  char local_710;
  int64_t local_6f8;
  uint8_t local_6f0;
  int64_t local_6e8;
  char local_6e0;
  int64_t local_6d8;
  char local_6d0;
  int64_t local_6c8;
  char local_6c0;
  int64_t local_6b8;
  char local_6b0;
  int64_t local_6a8;
  char local_6a0;
  int64_t local_698;
  char local_690;
  int64_t local_688;
  char local_680;
  int64_t local_678;
  char local_670;
  int64_t local_668;
  char local_660;
  int64_t *local_658;
  char local_650;
  int64_t local_648;
  char local_640;
  int64_t *local_638;
  char local_630;
  int64_t local_628;
  char local_620;
  int64_t local_618;
  char local_610;
  int64_t local_608;
  char local_600;
  int64_t local_5f8;
  char local_5f0;
  int64_t *local_5e8;
  char local_5e0;
  int64_t local_5d8;
  char local_5d0;
  int64_t *local_5c8;
  char local_5c0;
  int64_t local_5b8;
  char local_5b0;
  int64_t local_5a8;
  char local_5a0;
  int64_t local_598;
  char local_590;
  int64_t local_588;
  char local_580;
  int64_t local_578;
  char local_570;
  int64_t *local_568;
  char local_560;
  int64_t *local_558;
  char local_550;
  int64_t local_548;
  char local_540;
  int64_t local_538;
  char local_530;
  int64_t local_528;
  char local_520;
  int64_t *local_518;
  char local_510;
  int64_t local_508;
  char local_500;
  int64_t local_4f8;
  char local_4f0;
  int64_t local_4e8;
  char local_4e0;
  int64_t local_4d8;
  char local_4d0;
  int64_t local_4c8;
  char local_4c0;
  int64_t local_4b8;
  char local_4b0;
  int64_t local_4a8;
  char local_4a0;
  int64_t *local_498;
  char local_490;
  int64_t local_488;
  char local_480;
  int64_t local_478;
  char local_470;
  int64_t local_468;
  char local_460;
  int64_t local_458;
  char local_450;
  int64_t local_448;
  char local_440;
  int64_t local_438;
  char local_430;
  int64_t local_428;
  char local_420;
  int64_t *local_418;
  char local_410;
  int64_t local_408;
  char local_400;
  int64_t local_3f8;
  char local_3f0;
  int64_t local_3e8;
  char local_3e0;
  int64_t local_3d8;
  char local_3d0;
  int64_t *local_3c8;
  char local_3c0;
  int64_t local_3b8;
  char local_3b0;
  int64_t *local_3a8;
  char local_3a0;
  int64_t local_398;
  char local_390;
  int64_t *local_388;
  char local_380;
  int64_t local_378;
  char local_370;
  int64_t *local_368;
  char local_360;
  int64_t local_358;
  char local_350;
  int64_t local_348;
  char local_340;
  int64_t *local_338;
  char local_330;
  int64_t local_328;
  char local_320;
  int64_t *local_318;
  char local_310;
  int64_t *local_308;
  char local_300;
  int64_t *local_2f8;
  char local_2f0;
  int64_t *local_2e8;
  char local_2e0;
  int64_t *local_2d8;
  char local_2d0;
  int64_t local_2c8;
  char local_2c0;
  int64_t local_2b8;
  char local_2b0;
  int64_t *local_2a8;
  char local_2a0;
  int64_t local_298;
  char local_290;
  int64_t local_288;
  char local_280;
  int64_t local_278;
  char local_270;
  int64_t local_268;
  char local_260;
  int64_t local_258;
  char local_250;
  int64_t local_248;
  char local_240;
  int64_t local_238;
  char local_230;
  int64_t local_228;
  char local_220;
  int64_t local_218;
  char local_210;
  int64_t local_208;
  char local_200;
  int64_t *local_1f8;
  char local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t *local_1d8;
  char local_1d0;
  int64_t *local_1c8;
  char local_1c0;
  int64_t *local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t *local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t *local_148;
  char local_140;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t *local_58;
  char local_50;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar12 = local_40;
  local_6e8 = g_027257e0;
  if (g_027257e0 != 0) {
    FUN_00d50b00();
  }
  local_6e0 = '\x01';
  cVar8 = (**(code **)(*plVar12 + 0x50))();
  if ((local_6e0 != '\0') && (local_6e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = g_02725878;
  if (cVar8 == '\0') {
    FUN_00d3ecc0();
    plVar12 = local_40;
    local_628 = g_02787850;
    if (g_02787850 != 0) {
      FUN_00d50b00();
    }
    local_620 = '\x01';
    cVar8 = (**(code **)(*plVar12 + 0x50))();
    if ((local_620 != '\0') && (local_628 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = g_02725890;
    if (cVar8 == '\0') {
      FUN_00d3ecc0();
      plVar12 = local_40;
      local_5b8 = g_027257f0;
      if (g_027257f0 != 0) {
        FUN_00d50b00();
      }
      local_5b0 = '\x01';
      cVar8 = (**(code **)(*plVar12 + 0x50))();
      if ((local_5b0 != '\0') && (local_5b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar8 == '\0') {
        FUN_00d3ecc0();
        plVar12 = local_40;
        local_5a8 = g_026e4838;
        if (g_026e4838 != 0) {
          FUN_00d50b00();
        }
        local_5a0 = '\x01';
        cVar8 = (**(code **)(*plVar12 + 0x50))();
        if ((local_5a0 != '\0') && (local_5a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar8 == '\0') {
          FUN_00d3ecc0();
          plVar12 = local_40;
          local_598 = g_027294f0;
          if (g_027294f0 != 0) {
            FUN_00d50b00();
          }
          local_590 = '\x01';
          cVar8 = (**(code **)(*plVar12 + 0x50))();
          if ((local_590 != '\0') && (local_598 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            FUN_00637650();
            if (local_38 == '\0') {
              if (local_40 == (int64_t *)0x0) goto LAB_00632c24;
              FUN_00d50b00();
            }
            else if (local_40 == (int64_t *)0x0) goto LAB_00632c24;
            FUN_006f3f00();
            FUN_00d3ecf0();
            plVar12 = local_40;
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar12 == local_58) {
              FUN_00631870();
            }
            FUN_00d50b20();
            goto LAB_00632c24;
          }
          FUN_00d3ecc0();
          plVar12 = local_40;
          local_588 = g_02725810;
          if (g_02725810 != 0) {
            FUN_00d50b00();
          }
          local_580 = '\x01';
          cVar8 = (**(code **)(*plVar12 + 0x50))();
          if ((local_580 != '\0') && (local_588 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar8 == '\0') {
            FUN_00d3ecc0();
            plVar12 = local_40;
            local_2c8 = g_02725808;
            if (g_02725808 != 0) {
              FUN_00d50b00();
            }
            local_2c0 = '\x01';
            cVar8 = (**(code **)(*plVar12 + 0x50))();
            if ((local_2c0 != '\0') && (local_2c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar8 == '\0') {
              FUN_00d3ecc0();
              plVar12 = local_40;
              local_2b8 = g_02725800;
              if (g_02725800 != 0) {
                FUN_00d50b00();
              }
              local_2b0 = '\x01';
              cVar8 = (**(code **)(*plVar12 + 0x50))();
              if ((local_2b0 != '\0') && (local_2b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar8 == '\0') {
                FUN_00d3ecc0();
                plVar12 = local_40;
                local_218 = g_0270b7f0;
                if (g_0270b7f0 != 0) {
                  FUN_00d50b00();
                }
                local_210 = '\x01';
                cVar8 = (**(code **)(*plVar12 + 0x50))();
                if ((local_210 != '\0') && (local_218 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if (cVar8 != '\0') {
                  FUN_0063a4a0();
                }
              }
              else {
                FUN_01f27fe0();
                FUN_00281390();
                plVar12 = local_40;
                if (local_38 == '\0') {
                  if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                     (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                }
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                lVar4 = g_027258f8;
                local_2a8 = plVar12;
                local_2a0 = '\0';
                if (g_027258f8 != 0) {
                  FUN_00d50b00();
                }
                local_298 = lVar4;
                local_290 = '\x01';
                FUN_00dd2700((int)g_02394dd8,&local_298);
                plVar1 = local_40;
                if (local_38 == '\0') {
                  if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                     (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                }
                if ((local_290 != '\0') && (local_298 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_2a0 != '\0') && (local_2a8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00e34260();
                uVar13 = FUN_00e34d60();
                plVar2 = local_40;
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  uVar13 = FUN_00d50b20();
                }
                if (plVar2 == (int64_t *)0x0) {
                  lVar4 = this_ptr[0x30];
                  if (lVar4 != 0) {
                    uVar13 = FUN_00d50b00();
                  }
                  local_6f0 = 1;
                  local_6f8 = lVar4;
                  FUN_00639aa0(uVar13,&local_6f8);
                  if (lVar4 != 0) {
                    FUN_00d50b20();
                  }
                }
                else {
                  plVar2 = (int64_t *)this_ptr[0x30];
                  FUN_00e34d60();
                  local_c0 = 0;
                  if (local_50 == '\0') {
                    if (local_58 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_50 = '\0';
                  }
                  lVar4 = g_027258a0;
                  local_c0 = '\x01';
                  local_c8 = local_58;
                  if (g_027258a0 != 0) {
                    FUN_00d50b00();
                  }
                  lVar6 = g_02725900;
                  local_288 = lVar4;
                  local_280 = '\x01';
                  if (g_02725900 != 0) {
                    FUN_00d50b00();
                  }
                  local_278 = lVar6;
                  local_270 = '\x01';
                  local_268 = 0;
                  local_260 = '\0';
                  FUN_00d31230(&local_268,&local_278);
                  local_b0 = 0;
                  if (local_68 == '\0') {
                    if (local_70 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_68 = '\0';
                  }
                  lVar4 = g_027258a0;
                  local_b0 = '\x01';
                  local_b8 = local_70;
                  if (g_027258a0 != 0) {
                    FUN_00d50b00();
                  }
                  lVar6 = g_02725908;
                  local_258 = lVar4;
                  local_250 = '\x01';
                  if (g_02725908 != 0) {
                    FUN_00d50b00();
                  }
                  local_248 = lVar6;
                  local_240 = '\x01';
                  local_238 = 0;
                  local_230 = '\0';
                  FUN_00d31230(&local_238,&local_248);
                  local_a8 = local_90;
                  local_a0 = 0;
                  if (local_88 == '\0') {
                    if (local_90 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_88 = '\0';
                  }
                  local_a0 = '\x01';
                  FUN_004ae0b0(&local_a8,&local_b8);
                  local_d8 = local_40;
                  local_d0 = 0;
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  local_d0 = '\x01';
                  local_1c0 = 0;
                  FUN_00d50b00();
                  local_1c0 = '\x01';
                  local_228 = 0;
                  local_220 = '\0';
                  local_1c8 = this_ptr;
                  (**(code **)(*plVar2 + 0x448))(&local_228,&local_1c8);
                  if ((local_220 != '\0') && (local_228 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_1c0 != '\0') && (local_1c8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_a0 != '\0') && (local_a8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_230 != '\0') && (local_238 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_240 != '\0') && (local_248 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_250 != '\0') && (local_258 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_b0 != '\0') && (local_b8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_68 != '\0') && (local_70 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_260 != '\0') && (local_268 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_270 != '\0') && (local_278 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_280 != '\0') && (local_288 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if (plVar12 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              (**(code **)(*this_ptr + 0x5e0))();
              if (local_38 == '\0') {
                if (local_40 == (int64_t *)0x0) goto LAB_00632c24;
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_40 == (int64_t *)0x0) goto LAB_00632c24;
              cVar8 = FUN_00793050();
              if (cVar8 != '\0') {
                FUN_00639540();
                local_f0 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_f0 = '\x01';
                local_f8 = local_40;
                uVar13 = (**(code **)(*this_ptr + 0x5e8))();
                local_e0 = 0;
                if (local_50 == '\0') {
                  if (local_58 != (int64_t *)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                }
                else {
                  local_50 = '\0';
                }
                local_e0 = '\x01';
                local_e8 = local_58;
                FUN_00093bd0(uVar13,&local_e8);
                if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                local_1f0 = 0;
                FUN_00d50b00();
                local_1f0 = '\x01';
                local_1f8 = this_ptr;
                FUN_00094580();
                if ((local_1f0 != '\0') && (local_1f8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            goto LAB_00632c24;
          }
          FUN_00d403d0();
          local_1e0 = 0;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          lVar4 = g_02725810;
          local_1e0 = '\x01';
          local_1e8 = this_ptr;
          if (g_02725810 != 0) {
            FUN_00d50b00();
          }
          local_578 = lVar4;
          local_570 = '\x01';
          local_1d0 = 0;
          if (this_ptr != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_1d0 = '\x01';
          local_1d8 = this_ptr;
          FUN_00d41040(&local_1d8,&local_578);
          if ((local_1d0 != '\0') && (local_1d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_570 != '\0') && (local_578 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (g_0280b8c9 == '\0') {
            g_0280b8c9 = '\x01';
            FUN_01f27fe0();
            FUN_00281390();
            plVar12 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01f27fe0();
            FUN_0027edc0();
            FUN_00e00960();
            plVar1 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (plVar1[5] != 0) {
              FUN_01f27fe0();
              FUN_0027edc0();
              cVar8 = (**(code **)(*local_40 + 0x380))();
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar8 == '\0') {
                FUN_00e198c0();
                plVar2 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_0063326e;
                  }
                }
                else if (local_40 != (int64_t *)0x0) {
LAB_0063326e:
                  uVar13 = FUN_01e697d0();
                  local_568 = plVar2;
                  local_560 = '\0';
                  FUN_01e69930(uVar13,0);
                  if ((local_560 != '\0') && (local_568 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00e19900();
                  plVar3 = local_40;
                  if (local_38 == '\0') {
                    if (local_40 != (int64_t *)0x0) {
                      FUN_00d50b00();
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_00633692;
                    }
LAB_006336dd:
                    bVar5 = true;
LAB_006336e2:
                    lVar4 = g_026d8ab8;
                    local_98 = plVar2;
                    if (g_026d8ab8 != 0) {
                      FUN_00d50b00();
                    }
                    local_548 = lVar4;
                    local_540 = '\x01';
                    local_538 = 0;
                    local_530 = '\0';
                    local_528 = 0;
                    local_520 = '\0';
                    pplVar11 = &local_40;
                    FUN_01e4fcf0(&local_528,&local_538);
                    plVar2 = local_40;
                    if ((g_0270e710 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                      g_02726298 = FUN_00015ff0();
                      g_02726280 = "MDURLOpenedController";
                      g_02726288 = 0x90;
                      g_02726290 = FUN_00098280;
                      g_027262a0 = 0;
                      ram_00000000027262a8 = 0;
                      g_027262b0 = 0;
                      ram_00000000027262b8 = 0;
                      g_027262c0 = 0;
                      ram_00000000027262c8 = 0;
                      g_027262d0 = 0;
                      ram_00000000027262d8 = 0;
                      g_027262e0 = 0;
                      ram_00000000027262e8 = 0;
                      g_027262f0 = 0;
                      ram_00000000027262f8 = 0;
                      g_02726300 = 0;
                      ram_0000000002726308 = 0;
                      g_02726310 = 0;
                      ram_0000000002726318 = 0;
                      g_02726320 = 0;
                      ram_0000000002726328 = 0;
                      g_02726330 = 0;
                      ram_0000000002726338 = 0;
                      g_02726340 = 0;
                      ___cxa_guard_release();
                    }
                    if (plVar2 == (int64_t *)0x0) {
LAB_00633786:
                      pplVar11 = (int64_t **)&g_02802688;
                    }
                    else {
                      (**(code **)(*plVar2 + 0x360))();
                      cVar8 = FUN_00e85ea0();
                      if (cVar8 == '\0') goto LAB_00633786;
                    }
                    plVar2 = *pplVar11;
                    if (*(char *)(pplVar11 + 1) == '\0') {
                      if (plVar2 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      *(void*)(pplVar11 + 1) = 0;
                    }
                    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_520 != '\0') && (local_528 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_530 != '\0') && (local_538 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_540 != '\0') && (local_548 != 0)) {
                      FUN_00d50b20();
                    }
                    if (plVar2 != (int64_t *)0x0) {
                      FUN_00dbbbc0();
                      local_1b8 = local_40;
                      local_1b0 = 0;
                      if (local_38 == '\0') {
                        if (local_40 != (int64_t *)0x0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        local_38 = '\0';
                      }
                      local_1b0 = '\x01';
                      uVar13 = FUN_0054d030();
                      if ((local_1b0 != '\0') && (local_1b8 != (int64_t *)0x0)) {
                        uVar13 = FUN_00d50b20();
                      }
                      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                        uVar13 = FUN_00d50b20();
                      }
                      local_510 = '\0';
                      local_508 = 0;
                      local_500 = '\0';
                      local_518 = plVar2;
                      FUN_00093bd0(uVar13,&local_508);
                      if ((local_500 != '\0') && (local_508 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_510 != '\0') && (local_518 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_00d50b20();
                    }
                    if (!bVar5) goto LAB_00633984;
                  }
                  else {
                    if (local_40 == (int64_t *)0x0) goto LAB_006336dd;
LAB_00633692:
                    local_558 = plVar3;
                    local_550 = '\0';
                    cVar8 = FUN_00e6d4e0();
                    if ((local_550 != '\0') && (local_558 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (cVar8 == '\0') {
                      bVar5 = false;
                      goto LAB_006336e2;
                    }
LAB_00633984:
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  goto LAB_00633994;
                }
                iVar9 = FUN_00e19940();
                if (iVar9 == 1) {
                  FUN_00e34d60();
                  local_1a0 = 0;
                  if (local_50 == '\0') {
                    if (local_58 != (int64_t *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_50 = '\0';
                  }
                  lVar4 = g_027258a0;
                  local_1a0 = '\x01';
                  local_1a8 = local_58;
                  if (g_027258a0 != 0) {
                    FUN_00d50b00();
                  }
                  lVar6 = g_026e10b0;
                  local_4f8 = lVar4;
                  local_4f0 = '\x01';
                  if (g_026e10b0 != 0) {
                    FUN_00d50b00();
                  }
                  local_4e8 = lVar6;
                  local_4e0 = '\x01';
                  local_4d8 = 0;
                  local_4d0 = '\0';
                  FUN_00d31230(&local_4d8,&local_4e8);
                  local_190 = 0;
                  if (local_68 == '\0') {
                    if (local_70 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_68 = '\0';
                  }
                  lVar4 = g_027258a0;
                  local_190 = '\x01';
                  local_198 = local_70;
                  if (g_027258a0 != 0) {
                    FUN_00d50b00();
                  }
                  lVar6 = g_027258b0;
                  local_4c8 = lVar4;
                  local_4c0 = '\x01';
                  if (g_027258b0 != 0) {
                    FUN_00d50b00();
                  }
                  local_4b8 = lVar6;
                  local_4b0 = '\x01';
                  local_4a8 = 0;
                  local_4a0 = '\0';
                  FUN_00d31230(&local_4a8,&local_4b8);
                  local_188 = local_90;
                  local_180 = 0;
                  if (local_88 == '\0') {
                    if (local_90 != 0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_88 = '\0';
                  }
                  local_180 = '\x01';
                  uVar13 = FUN_004ae0b0(&local_188,&local_198);
                  plVar2 = local_40;
                  if (local_38 == '\0') {
                    if (((local_40 != (int64_t *)0x0) &&
                        (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
                       (local_40 != (int64_t *)0x0)) {
                      uVar13 = FUN_00d50b20();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  if ((local_180 != '\0') && (local_188 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_4a0 != '\0') && (local_4a8 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_4b0 != '\0') && (local_4b8 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_4c0 != '\0') && (local_4c8 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_190 != '\0') && (local_198 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_68 != '\0') && (local_70 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_4d0 != '\0') && (local_4d8 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_4e0 != '\0') && (local_4e8 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_4f0 != '\0') && (local_4f8 != 0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if (plVar2 != (int64_t *)0x0) {
                    local_498 = plVar2;
                    local_490 = '\0';
                    local_488 = 0;
                    local_480 = '\0';
                    FUN_00093bd0(uVar13,&local_488);
                    if ((local_480 != '\0') && (local_488 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_490 != '\0') && (local_498 != (int64_t *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                }
                else {
                  iVar9 = FUN_00e19940();
                  if ((iVar9 == 2) || (iVar9 = FUN_00e19940(), iVar9 == 3)) {
                    FUN_00e34d60();
                    local_170 = 0;
                    if (local_50 == '\0') {
                      if (local_58 != (int64_t *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_50 = '\0';
                    }
                    lVar4 = g_027258a0;
                    local_170 = '\x01';
                    local_178 = local_58;
                    if (g_027258a0 != 0) {
                      FUN_00d50b00();
                    }
                    lVar6 = g_027258b8;
                    local_478 = lVar4;
                    local_470 = '\x01';
                    if (g_027258b8 != 0) {
                      FUN_00d50b00();
                    }
                    local_468 = lVar6;
                    local_460 = '\x01';
                    local_458 = 0;
                    local_450 = '\0';
                    FUN_00d31230(&local_458,&local_468);
                    local_160 = 0;
                    if (local_68 == '\0') {
                      if (local_70 != 0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_68 = '\0';
                    }
                    lVar4 = g_027258a0;
                    local_160 = '\x01';
                    local_168 = local_70;
                    if (g_027258a0 != 0) {
                      FUN_00d50b00();
                    }
                    lVar6 = g_027258c0;
                    local_448 = lVar4;
                    local_440 = '\x01';
                    if (g_027258c0 != 0) {
                      FUN_00d50b00();
                    }
                    local_438 = lVar6;
                    local_430 = '\x01';
                    local_428 = 0;
                    local_420 = '\0';
                    FUN_00d31230(&local_428,&local_438);
                    local_158 = local_90;
                    local_150 = 0;
                    if (local_88 == '\0') {
                      if (local_90 != 0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_88 = '\0';
                    }
                    local_150 = '\x01';
                    uVar13 = FUN_004ae0b0(&local_158,&local_168);
                    plVar2 = local_40;
                    if (local_38 == '\0') {
                      if (((local_40 != (int64_t *)0x0) &&
                          (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
                         (local_40 != (int64_t *)0x0)) {
                        uVar13 = FUN_00d50b20();
                      }
                    }
                    else {
                      local_38 = '\0';
                    }
                    if ((local_150 != '\0') && (local_158 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_88 != '\0') && (local_90 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_420 != '\0') && (local_428 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_430 != '\0') && (local_438 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_440 != '\0') && (local_448 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_160 != '\0') && (local_168 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_68 != '\0') && (local_70 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_450 != '\0') && (local_458 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_460 != '\0') && (local_468 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_470 != '\0') && (local_478 != 0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_170 != '\0') && (local_178 != (int64_t *)0x0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if (plVar2 != (int64_t *)0x0) {
                      local_418 = plVar2;
                      local_410 = '\0';
                      local_408 = 0;
                      local_400 = '\0';
                      FUN_00093bd0(uVar13,&local_408);
                      if ((local_400 != '\0') && (local_408 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_410 != '\0') && (local_418 != (int64_t *)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_00d50b20();
                    }
                  }
                }
              }
            }
LAB_00633994:
            lVar4 = g_026e1088;
            if (*(int *)((int64_t)plVar1 + 0xc) == 0) {
              if (g_026e1088 != 0) {
                FUN_00d50b00();
              }
              local_3f8 = lVar4;
              local_3f0 = '\x01';
              local_3e8 = 0;
              local_3e0 = '\0';
              local_3d8 = 0;
              local_3d0 = '\0';
              pplVar11 = &local_40;
              uVar13 = FUN_01e4fcf0(&local_3d8,&local_3e8);
              plVar1 = local_40;
              if ((g_026e10d0 == '\0') &&
                 (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_05, iVar9 != 0)) {
                g_0270e4a8 = FUN_00015ff0();
                g_0270e490 = "MDNoLicenseController";
                g_0270e498 = 0x80;
                g_0270e4a0 = FUN_00104b10;
                g_0270e4b0 = 0;
                ram_000000000270e4b8 = 0;
                g_0270e4c0 = 0;
                ram_000000000270e4c8 = 0;
                g_0270e4d0 = 0;
                ram_000000000270e4d8 = 0;
                g_0270e4e0 = 0;
                ram_000000000270e4e8 = 0;
                g_0270e4f0 = 0;
                ram_000000000270e4f8 = 0;
                g_0270e500 = 0;
                ram_000000000270e508 = 0;
                g_0270e510 = 0;
                ram_000000000270e518 = 0;
                g_0270e520 = 0;
                ram_000000000270e528 = 0;
                g_0270e530 = 0;
                ram_000000000270e538 = 0;
                g_0270e540 = 0;
                ram_000000000270e548 = 0;
                g_0270e550 = 0;
                uVar13 = ___cxa_guard_release();
              }
              if (plVar1 == (int64_t *)0x0) {
LAB_00633a3d:
                pplVar11 = (int64_t **)&g_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar8 = FUN_00e85ea0();
                uVar13 = extraout_XMM0_Da_02;
                if (cVar8 == '\0') goto LAB_00633a3d;
              }
              plVar1 = *pplVar11;
              if (*(char *)(pplVar11 + 1) == '\0') {
                if (plVar1 != (int64_t *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar11 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                uVar13 = FUN_00d50b20();
              }
              if ((local_3d0 != '\0') && (local_3d8 != 0)) {
                uVar13 = FUN_00d50b20();
              }
              if ((local_3e0 != '\0') && (local_3e8 != 0)) {
                uVar13 = FUN_00d50b20();
              }
              if ((local_3f0 != '\0') && (local_3f8 != 0)) {
                uVar13 = FUN_00d50b20();
              }
              if (plVar1 != (int64_t *)0x0) {
                local_3c0 = '\0';
                local_3b8 = 0;
                local_3b0 = '\0';
                local_3c8 = plVar1;
                FUN_00093bd0(uVar13,&local_3b8);
                if ((local_3b0 != '\0') && (local_3b8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_3c0 != '\0') && (local_3c8 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            uVar13 = FUN_01d932f0();
            plVar1 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                uVar13 = FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  uVar13 = FUN_00d50b20();
                }
                goto LAB_00633b83;
              }
            }
            else if (local_40 != (int64_t *)0x0) {
LAB_00633b83:
              local_3a8 = plVar1;
              local_3a0 = '\0';
              local_398 = 0;
              local_390 = '\0';
              FUN_00093bd0(uVar13,&local_398);
              if ((local_390 != '\0') && (local_398 != 0)) {
                FUN_00d50b20();
              }
              if ((local_3a0 != '\0') && (local_3a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            cVar8 = FUN_0071c140();
            if (cVar8 == '\0') {
              uVar13 = FUN_0071bad0();
              plVar1 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  uVar13 = FUN_00d50b00();
                  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  goto LAB_00633c4c;
                }
              }
              else if (local_40 != (int64_t *)0x0) {
LAB_00633c4c:
                local_388 = plVar1;
                local_380 = '\0';
                local_378 = 0;
                local_370 = '\0';
                FUN_00093bd0(uVar13,&local_378);
                if ((local_370 != '\0') && (local_378 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_380 != '\0') && (local_388 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            uVar13 = FUN_01d67820();
            plVar1 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                uVar13 = FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  uVar13 = FUN_00d50b20();
                }
                goto LAB_00633d08;
              }
            }
            else if (local_40 != (int64_t *)0x0) {
LAB_00633d08:
              local_368 = plVar1;
              local_360 = '\0';
              local_358 = 0;
              local_350 = '\0';
              FUN_00093bd0(uVar13,&local_358);
              if ((local_350 != '\0') && (local_358 != 0)) {
                FUN_00d50b20();
              }
              if ((local_360 != '\0') && (local_368 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            uVar13 = FUN_00d6f370();
            local_348 = g_027258d0;
            if (g_027258d0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_340 = '\x01';
            cVar8 = FUN_00d70f90(uVar13,1);
            if ((local_340 != '\0') && (local_348 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            lVar4 = g_027258d8;
            if (cVar8 != '\0') {
              local_338 = plVar12;
              local_330 = '\0';
              if (g_027258d8 != 0) {
                FUN_00d50b00();
              }
              local_328 = lVar4;
              local_320 = '\x01';
              FUN_00dd2700((int)g_02395718,&local_328);
              plVar1 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_320 != '\0') && (local_328 != 0)) {
                FUN_00d50b20();
              }
              if ((local_330 != '\0') && (local_338 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_318 = plVar1;
              local_310 = '\0';
              (**(code **)(*(int64_t *)this_ptr[0x30] + 0x458))();
              if ((local_310 != '\0') && (local_318 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
            if (plVar12 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_01f27fe0();
          cVar8 = (**(code **)(*local_40 + 0x450))();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar8 == '\0') {
            (**(code **)(*this_ptr + 0x5e0))();
            plVar12 = local_40;
            if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            cVar8 = FUN_00793160();
            if (cVar8 != '\0') {
              FUN_00793170();
              local_308 = plVar12;
              local_300 = '\0';
              FUN_000158e0();
              local_148 = local_40;
              local_140 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_140 = '\x01';
              uVar13 = (**(code **)(*this_ptr + 0x5e8))();
              local_130 = 0;
              if (local_50 == '\0') {
                if (local_58 != (int64_t *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_130 = '\x01';
              local_138 = local_58;
              FUN_00093bd0(uVar13,&local_138);
              if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_140 != '\0') && (local_148 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_300 != '\0') && (local_308 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            cVar8 = FUN_00793180();
            if (cVar8 != '\0') {
              FUN_00793190();
              local_2f8 = plVar12;
              local_2f0 = '\0';
              FUN_00872da0();
              plVar1 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_2f0 != '\0') && (local_2f8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              local_2e8 = plVar1;
              local_2e0 = '\0';
              uVar13 = (**(code **)(*this_ptr + 0x5e8))();
              local_128 = local_40;
              local_120 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_120 = '\x01';
              FUN_00093bd0(uVar13,&local_128);
              if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_2e0 != '\0') && (local_2e8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
            }
            cVar8 = FUN_00793050();
            if (cVar8 != '\0') {
              FUN_00793130();
              FUN_00639540();
              local_118 = local_40;
              local_110 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_110 = '\x01';
              uVar13 = (**(code **)(*this_ptr + 0x5e8))();
              local_100 = 0;
              if (local_50 == '\0') {
                if (local_58 != (int64_t *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_100 = '\x01';
              local_108 = local_58;
              FUN_00093bd0(uVar13,&local_108);
              if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (plVar12 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
          }
          cVar8 = FUN_00093df0();
          if (cVar8 == '\0') {
            FUN_01f27fe0();
            puVar10 = (void*)FUN_00e83010();
            *puVar10 = FUN_00097ce0;
            puVar10[1] = FUN_00291410;
            puVar10[2] = 0;
            FUN_01e1ec30(0,puVar10);
            if ((local_710 != '\0') && (local_718 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d50b00();
            local_2d0 = '\x01';
            local_2d8 = this_ptr;
            FUN_00094580();
            if ((local_2d0 != '\0') && (local_2d8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          goto LAB_00632c24;
        }
        FUN_00637650();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
            goto LAB_00632a96;
          }
LAB_00632acf:
          bVar7 = true;
LAB_00632ad5:
          bVar5 = bVar7;
          *(void*)((int64_t)this_ptr + 0x109) = 1;
        }
        else {
          if (local_40 == (int64_t *)0x0) goto LAB_00632acf;
LAB_00632a96:
          FUN_006f4810();
          cVar8 = FUN_01e42170();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          bVar5 = false;
          bVar7 = false;
          if (cVar8 != '\0') goto LAB_00632ad5;
        }
        FUN_00639330();
        if (!bVar5) {
          FUN_00d50b20();
        }
        goto LAB_00632c24;
      }
      FUN_00637650();
      plVar12 = local_40;
      if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b00();
      }
      if (*(char *)((int64_t)this_ptr + 0x109) == '\0') {
LAB_00632a4a:
        *(void*)((int64_t)this_ptr + 0x109) = 0;
        if (plVar12 == (int64_t *)0x0) goto LAB_00632c24;
      }
      else {
        FUN_00637870();
        if (local_40 == (int64_t *)0x0) {
          cVar8 = '\0';
        }
        else {
          cVar8 = FUN_00637950();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar8 == '\0') || (plVar12 == (int64_t *)0x0)) goto LAB_00632a4a;
        FUN_00637870();
        iVar9 = FUN_006e3cc0();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar9 == 2) {
          FUN_006f4810();
          FUN_01e42250();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        *(void*)((int64_t)this_ptr + 0x109) = 0;
      }
      FUN_00637c40();
      FUN_00d50b20();
      goto LAB_00632c24;
    }
    if (g_02725890 != 0) {
      FUN_00d50b00();
    }
    local_618 = lVar4;
    local_610 = '\x01';
    local_608 = 0;
    local_600 = '\0';
    local_5f8 = 0;
    local_5f0 = '\0';
    pplVar11 = &local_40;
    uVar13 = FUN_01e4fcf0(&local_5f8,&local_608);
    plVar12 = local_40;
    if ((g_02705908 == '\0') &&
       (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_03, iVar9 != 0)) {
      g_0270e608 = FUN_00015ff0();
      g_0270e5f0 = "MDLicenseChangedController";
      g_0270e5f8 = 0x78;
      g_0270e600 = FUN_004400d0;
      g_0270e610 = 0;
      ram_000000000270e618 = 0;
      g_0270e620 = 0;
      ram_000000000270e628 = 0;
      g_0270e630 = 0;
      ram_000000000270e638 = 0;
      g_0270e640 = 0;
      ram_000000000270e648 = 0;
      g_0270e650 = 0;
      ram_000000000270e658 = 0;
      g_0270e660 = 0;
      ram_000000000270e668 = 0;
      g_0270e670 = 0;
      ram_000000000270e678 = 0;
      g_0270e680 = 0;
      ram_000000000270e688 = 0;
      g_0270e690 = 0;
      ram_000000000270e698 = 0;
      g_0270e6a0 = 0;
      ram_000000000270e6a8 = 0;
      g_0270e6b0 = 0;
      uVar13 = ___cxa_guard_release();
    }
    if (plVar12 == (int64_t *)0x0) {
LAB_00631ebb:
      pplVar11 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar8 = FUN_00e85ea0();
      uVar13 = extraout_XMM0_Da;
      if (cVar8 == '\0') goto LAB_00631ebb;
    }
    plVar12 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar12 != (int64_t *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar11 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_5f0 != '\0') && (local_5f8 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_600 != '\0') && (local_608 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if ((local_610 != '\0') && (local_618 != 0)) {
      uVar13 = FUN_00d50b20();
    }
    if (plVar12 != (int64_t *)0x0) {
      local_5e0 = '\0';
      local_5d8 = 0;
      local_5d0 = '\0';
      local_5e8 = plVar12;
      FUN_00093bd0(uVar13,&local_5d8);
      if ((local_5d0 != '\0') && (local_5d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_5e0 != '\0') && (local_5e8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_5c0 = '\x01';
    local_5c8 = this_ptr;
    FUN_00094580();
    if ((local_5c0 != '\0') && (local_5c8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_00632c24;
  }
  if (g_02725878 != 0) {
    FUN_00d50b00();
  }
  local_6d8 = lVar4;
  local_6d0 = '\x01';
  local_6c8 = 0;
  local_6c0 = '\0';
  local_6b8 = 0;
  local_6b0 = '\0';
  pplVar11 = &local_40;
  FUN_01e4fcf0(&local_6b8,&local_6c8);
  plVar12 = local_40;
  if ((g_02705908 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    g_0270e608 = FUN_00015ff0();
    g_0270e5f0 = "MDLicenseChangedController";
    g_0270e5f8 = 0x78;
    g_0270e600 = FUN_004400d0;
    g_0270e610 = 0;
    ram_000000000270e618 = 0;
    g_0270e620 = 0;
    ram_000000000270e628 = 0;
    g_0270e630 = 0;
    ram_000000000270e638 = 0;
    g_0270e640 = 0;
    ram_000000000270e648 = 0;
    g_0270e650 = 0;
    ram_000000000270e658 = 0;
    g_0270e660 = 0;
    ram_000000000270e668 = 0;
    g_0270e670 = 0;
    ram_000000000270e678 = 0;
    g_0270e680 = 0;
    ram_000000000270e688 = 0;
    g_0270e690 = 0;
    ram_000000000270e698 = 0;
    g_0270e6a0 = 0;
    ram_000000000270e6a8 = 0;
    g_0270e6b0 = 0;
    ___cxa_guard_release();
  }
  if (plVar12 == (int64_t *)0x0) {
LAB_00631d83:
    pplVar11 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_00631d83;
  }
  plVar12 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar12 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_6b0 != '\0') && (local_6b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_6c0 != '\0') && (local_6c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_6d0 != '\0') && (local_6d8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (int64_t *)0x0) {
    uVar13 = FUN_00d3ed20();
    local_6a8 = g_02725880;
    if (g_02725880 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_6a0 = '\x01';
    pplVar11 = &local_40;
    FUN_000175c0(uVar13,&local_6a8);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (int64_t *)0x0) {
LAB_006320ad:
      pplVar11 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar8 = FUN_00e85ea0();
      if (cVar8 == '\0') goto LAB_006320ad;
    }
    plVar1 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar11 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_6a0 != '\0') && (local_6a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = FUN_00d3ed20();
    local_698 = g_02725888;
    if (g_02725888 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_690 = '\x01';
    pplVar11 = &local_40;
    FUN_000175c0(uVar13,&local_698);
    plVar2 = local_40;
    FUN_00053ac0();
    if (plVar2 == (int64_t *)0x0) {
LAB_00632241:
      pplVar11 = (int64_t **)&g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar8 = FUN_00e85ea0();
      if (cVar8 == '\0') goto LAB_00632241;
    }
    plVar2 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(void*)(pplVar11 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_690 != '\0') && (local_698 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = g_02725890;
    if ((plVar1 == (int64_t *)0x0) || (plVar2 == (int64_t *)0x0)) {
      if (g_02725890 != 0) {
        FUN_00d50b00();
      }
      local_688 = lVar4;
      local_680 = '\x01';
      local_678 = 0;
      local_670 = '\0';
      local_668 = 0;
      local_660 = '\0';
      pplVar11 = &local_40;
      uVar13 = FUN_01e4fcf0(&local_668,&local_678);
      plVar3 = local_40;
      if ((g_02705908 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_04, iVar9 != 0)) {
        g_0270e608 = FUN_00015ff0();
        g_0270e5f0 = "MDLicenseChangedController";
        g_0270e5f8 = 0x78;
        g_0270e600 = FUN_004400d0;
        g_0270e610 = 0;
        ram_000000000270e618 = 0;
        g_0270e620 = 0;
        ram_000000000270e628 = 0;
        g_0270e630 = 0;
        ram_000000000270e638 = 0;
        g_0270e640 = 0;
        ram_000000000270e648 = 0;
        g_0270e650 = 0;
        ram_000000000270e658 = 0;
        g_0270e660 = 0;
        ram_000000000270e668 = 0;
        g_0270e670 = 0;
        ram_000000000270e678 = 0;
        g_0270e680 = 0;
        ram_000000000270e688 = 0;
        g_0270e690 = 0;
        ram_000000000270e698 = 0;
        g_0270e6a0 = 0;
        ram_000000000270e6a8 = 0;
        g_0270e6b0 = 0;
        uVar13 = ___cxa_guard_release();
      }
      if (plVar3 == (int64_t *)0x0) {
LAB_0063237a:
        pplVar11 = (int64_t **)&g_02802688;
      }
      else {
        (**(code **)(*plVar3 + 0x360))();
        cVar8 = FUN_00e85ea0();
        uVar13 = extraout_XMM0_Da_01;
        if (cVar8 == '\0') goto LAB_0063237a;
      }
      plVar3 = *pplVar11;
      if (plVar12 != plVar3) {
        plVar12 = plVar3;
        if (*(char *)(pplVar11 + 1) == '\0') {
          if (plVar3 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          uVar13 = FUN_00d50b20();
        }
        else {
          uVar13 = FUN_00d50b20();
          *(void*)(pplVar11 + 1) = 0;
        }
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((local_660 != '\0') && (local_668 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((local_670 != '\0') && (local_678 != 0)) {
        uVar13 = FUN_00d50b20();
      }
      if ((local_680 != '\0') && (local_688 != 0)) {
        uVar13 = FUN_00d50b20();
      }
    }
    else {
      FUN_00d45870();
      uVar13 = FUN_00d45870();
      uVar13 = FUN_0043f880(extraout_XMM0_Da_00,uVar13);
    }
    if (plVar12 != (int64_t *)0x0) {
      local_650 = '\0';
      local_648 = 0;
      local_640 = '\0';
      local_658 = plVar12;
      FUN_00093bd0(uVar13,&local_648);
      if ((local_640 != '\0') && (local_648 != 0)) {
        FUN_00d50b20();
      }
      if ((local_650 != '\0') && (local_658 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar12 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_630 = '\x01';
  local_638 = this_ptr;
  FUN_00094580();
  if ((local_630 != '\0') && (local_638 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_00632c24:
  local_208 = *arg1;
  local_200 = '\0';
  FUN_00d530a0();
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  return;
}

