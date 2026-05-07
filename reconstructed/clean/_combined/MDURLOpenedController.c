// ===================================================================
// MDURLOpenedController — Complete reconstructed pseudocode
// 37 functions
// ===================================================================


// ============================================================
// 00631c50
// ============================================================
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



// ============================================================
// 0063ffb0
// ============================================================
// Function: FUN_0063ffb0
// Address: 0063ffb0
// Size: 7102 bytes
// Class: MDURLOpenedController

void FUN_0063ffb0(uint64_t param_1,int64_t *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint32_t uVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint7 uVar12;
  int64_t *plVar11;
  int iVar13;
  int iVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar15;
  int64_t *plVar16;
  bool bVar17;
  uint64_t uVar18;
  double dVar19;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  int64_t *local_1a0;
  char local_198;
  int64_t *local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t *local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  uint64_t local_d0;
  int64_t local_c8;
  int64_t *local_c0;
  int64_t *local_b8;
  int64_t *local_b0;
  char local_a8;
  uint32_t local_9c;
  int64_t *local_98;
  byte local_89;
  int64_t *local_88;
  int64_t *local_80;
  int64_t *local_78;
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  
  lVar5 = this_ptr[0x10];
  local_38 = param_2;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar5;
  if (*local_38 != 0) {
    FUN_004405c0();
    if (local_80 == (int64_t *)0x0) {
      bVar17 = false;
    }
    else {
      (**(code **)(*this_ptr + 0x5e0))();
      bVar17 = local_48 != (int64_t *)0x0;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar17) {
      FUN_004405c0();
      plVar11 = local_80;
      if (((((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_004b5af0();
      plVar16 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_004b8550();
      plVar10 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if (plVar16 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*this_ptr + 0x5e0))();
      FUN_0078b9c0();
      plVar16 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar16 != (int64_t *)0x0) {
        local_50 = plVar10;
        local_78._0_1_ = '\0';
        local_80 = (int64_t *)0x0;
        local_88 = plVar16;
        local_70 = plVar16;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar13 = -local_68._4_4_;
            }
            else {
              iVar13 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar13);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar13 = 0;
            }
            local_68 = CONCAT44(iVar13,(int)local_68);
          }
          lVar5 = (int64_t)(int)local_68;
          iVar13 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar13);
          if (*(int *)((int64_t)local_70 + 0xc) <= iVar13) break;
          local_80 = *(int64_t **)(local_70[2] + 8 + lVar5 * 8);
          uVar18 = FUN_004f9670();
          plVar16 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (int64_t *)0x0) && (uVar18 = FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if (plVar16 != (int64_t *)0x0) {
            local_1a0 = local_80;
            local_198 = '\0';
            FUN_004b8020(uVar18,&local_1a0);
            plVar16 = local_48;
            if (local_40 == '\0') {
              if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
                 (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40 = '\0';
            }
            if ((local_198 != '\0') && (local_1a0 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar16 != (int64_t *)0x0) {
              local_40 = '\0';
              local_48 = plVar16;
              FUN_00d23f50();
              if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_000be170();
        FUN_00d50b20();
        plVar10 = local_50;
      }
      if (*(int *)((int64_t)plVar10 + 0xc) == 0) {
LAB_00640497:
        FUN_00d50b20();
      }
      else {
        FUN_004b8a30();
        local_78._0_1_ = '\0';
        local_80 = (int64_t *)0x0;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        local_70 = plVar10;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar13 = -local_68._4_4_;
            }
            else {
              iVar13 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar13);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar13 = 0;
            }
            local_68 = CONCAT44(iVar13,(int)local_68);
          }
          lVar5 = (int64_t)(int)local_68;
          iVar13 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar13);
          if (*(int *)((int64_t)local_70 + 0xc) <= iVar13) break;
          local_190 = *(int64_t **)(local_70[2] + 8 + lVar5 * 8);
          local_188 = '\0';
          local_80 = local_190;
          FUN_004b8440();
          if ((local_188 != '\0') && (local_190 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00274d30();
        FUN_004b8a40();
        if (plVar10 != (int64_t *)0x0) goto LAB_00640497;
      }
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_c8 == 0) || (*local_38 == 0)) {
LAB_006409be:
    bVar17 = false;
    goto LAB_006409c1;
  }
  if (*(int64_t *)(local_c8 + 0x308) == 0) {
    FUN_004405c0();
    plVar11 = local_80;
    if (((((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = plVar11;
    FUN_0051be00();
    plVar11 = local_80;
    if ((((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
       ((FUN_00d50b00(), (char)local_78 != '\0' && (local_80 != (int64_t *)0x0)))) {
      FUN_00d50b20();
    }
    local_88 = plVar11;
    FUN_00521db0();
    (**(code **)(*local_48 + 0x628))();
    local_50 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004b5af0();
    plVar11 = local_80;
    if ((char)local_78 == '\0') {
      if (local_80 == (int64_t *)0x0) goto LAB_00640975;
      FUN_00d50b00();
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_0064073b:
      local_78._0_1_ = '\0';
      local_80 = (int64_t *)0x0;
      local_98 = plVar11;
      local_70 = plVar11;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      plVar16 = (int64_t *)0x0;
      bVar15 = false;
      while( true ) {
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar13 = -local_68._4_4_;
          }
          else {
            iVar13 = (int)local_68 - local_68._4_4_;
            local_68 = CONCAT44(local_68._4_4_,iVar13);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar13 = 0;
          }
          local_68 = CONCAT44(iVar13,(int)local_68);
        }
        lVar5 = (int64_t)(int)local_68;
        iVar14 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar14);
        iVar13 = *(int *)((int64_t)local_70 + 0xc);
        if (iVar13 <= iVar14) break;
        lVar9 = local_70[2];
        local_80 = *(int64_t **)(lVar9 + 8 + lVar5 * 8);
        iVar3 = FUN_003b7980();
        if (iVar3 != 0) break;
        pvVar6 = _pthread_getspecific((void*)lVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_150 = local_80;
        local_148 = '\0';
        FUN_004a5340();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_148 != '\0') && (local_150 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        plVar10 = local_80;
        if ((plVar11 == (int64_t *)0x0) || (local_88 != plVar11)) {
          if (plVar11 != (int64_t *)0x0) goto LAB_00640778;
        }
        else {
          if (local_80 == plVar16) {
            if ((!bVar15) && (local_80 != (int64_t *)0x0)) {
              plVar10 = plVar16;
              if ((char)local_78 != '\0') goto LAB_006408e6;
              bVar15 = true;
              FUN_00d50b00();
            }
          }
          else {
            if ((char)local_78 == '\0') {
              if (local_80 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar15) && (plVar16 != (int64_t *)0x0)) {
                FUN_00d50b20();
                plVar16 = plVar10;
                bVar15 = true;
                goto LAB_00640778;
              }
            }
            else {
              if ((bVar15) && (plVar16 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
LAB_006408e6:
              local_78._0_1_ = '\0';
            }
            plVar16 = plVar10;
            bVar15 = true;
          }
LAB_00640778:
          FUN_00d50b20();
        }
      }
      FUN_00274d30();
      FUN_00d50b20();
      plVar11 = local_50;
      bVar17 = plVar16 == (int64_t *)0x0;
      if ((!bVar17) && (iVar13 <= iVar14)) {
        FUN_003b7290();
        bVar17 = false;
      }
    }
    else {
      if (local_80 != (int64_t *)0x0) goto LAB_0064073b;
LAB_00640975:
      bVar17 = true;
      bVar15 = false;
      plVar11 = local_50;
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (local_88 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if (!(bool)(!bVar15 | bVar17)) {
      FUN_00d50b20();
    }
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_006409be;
  }
  uVar18 = FUN_0053a050();
  plVar11 = local_80;
  local_c0 = local_80;
  if ((char)local_78 == '\0') {
    if (local_80 == (int64_t *)0x0) goto LAB_006406d6;
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_00640679:
    if (*(int *)((int64_t)plVar11 + 0xc) != 0) {
      FUN_00440fc0();
      if (local_48 == (int64_t *)0x0) {
        bVar1 = 1;
      }
      else {
        FUN_00440fc0();
        plVar11 = local_b0;
        if (local_a8 == '\0') {
          if (local_b0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        local_80 = plVar11;
        local_78._0_1_ = '\0';
        bVar1 = FUN_00d24090();
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar1 = bVar1 ^ 1;
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar1 != 0) {
        FUN_00d23310();
        plVar11 = local_80;
        pplVar7 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar7 = &local_48;
        }
        local_48 = (int64_t *)CONCAT71(local_48._1_7_,(char)local_78);
        *(void*)pplVar7 = 0;
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (plVar11 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00441090();
        if (plVar11 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    local_9c = 0;
  }
  else {
    if (local_80 != (int64_t *)0x0) goto LAB_00640679;
LAB_006406d6:
    local_9c = (uint32_t)CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
  }
  FUN_00440fc0();
  plVar11 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_0064e9c0();
  plVar16 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar11 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar16;
  if (*arg1 != 0) {
    FUN_00227020();
    plVar10 = local_80;
    plVar11 = (int64_t *)*local_38;
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == plVar11) goto LAB_00640c53;
    bVar1 = FUN_016ae5f0();
    local_98 = g_0280a6b8;
    local_89 = g_0280a6b8 == (int64_t *)0x0 | bVar1 ^ 1;
    if (local_89 == 0) {
      FUN_00d50b00();
    }
    else {
      local_98 = (int64_t *)0x0;
    }
    FUN_00d6f370();
    local_180 = g_026de538;
    if (g_026de538 != 0) {
      FUN_00d50b00();
    }
    local_178 = '\x01';
    FUN_00d70f90();
    FUN_00440fa0();
    plVar11 = local_98;
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004405c0();
    uVar18 = FUN_004b5af0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (int64_t *)0x0) && (uVar18 = FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    iVar13 = 0;
    if (plVar16 != (int64_t *)0x0) {
      local_78._0_1_ = '\0';
      local_80 = (int64_t *)0x0;
      local_b8 = plVar16;
      local_70 = plVar16;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_50 = (int64_t *)0x0;
      local_58 = (int64_t *)0x0;
      do {
        if (iVar13 != 0) {
          if (iVar13 < 1) {
            iVar13 = -iVar13;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 - iVar13);
            FUN_00d23690(uVar18,iVar13);
            local_60 = local_60 + local_68._4_4_;
            iVar13 = 0;
          }
          local_68 = CONCAT44(iVar13,(int)local_68);
        }
        lVar5 = (int64_t)(int)local_68;
        iVar13 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar13);
        if (*(int *)((int64_t)local_70 + 0xc) <= iVar13) {
          iVar13 = 0;
          goto LAB_00641086;
        }
        local_80 = *(int64_t **)(local_70[2] + 8 + lVar5 * 8);
        cVar2 = FUN_003b7710();
        plVar11 = g_026f6fd0;
        if (cVar2 != '\0') {
          if (g_026f6fd0 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          dVar19 = (double)FUN_00e7d6f0();
          uVar8 = (uint64_t)(dVar19 * g_023907c0);
          dVar19 = dVar19 * g_023907c0 - g_023907c8;
          FUN_0071a120();
          if (((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
             ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *)0x0)))) {
            FUN_00d50b20();
          }
          bVar1 = (byte)(((int64_t)dVar19 & (int64_t)uVar8 >> 0x3f | uVar8) / 3);
          local_b0 = plVar11;
          local_a8 = '\0';
          FUN_000175c0();
          plVar16 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar16 != (int64_t *)0x0) {
            local_40 = '\0';
            local_48 = plVar16;
            bVar1 = FUN_00c70bc0();
            if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar11 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((plVar16 != (int64_t *)0x0 & bVar1) != 0) goto LAB_00641153;
        }
        FUN_003b7950();
        local_170 = local_88;
        local_168 = '\0';
        uVar4 = (**(code **)(*local_48 + 0x50))();
        uVar18 = extraout_XMM0_Qa;
        if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        plVar11 = local_80;
        if ((char)uVar4 == '\0') {
LAB_00640da0:
          plVar16 = (int64_t *)((uint64_t)local_50 & 0xffffffff);
        }
        else {
          uVar12 = (uint7)(uint3)((uint)uVar4 >> 8);
          if (local_80 == local_58) {
            if (((char)local_50 != '\0') || (local_80 == (int64_t *)0x0)) goto LAB_00640da0;
            plVar11 = local_58;
            if ((char)local_78 == '\0') {
              plVar16 = (int64_t *)CONCAT71(uVar12,1);
              uVar18 = FUN_00d50b00();
              goto LAB_00640da6;
            }
LAB_00641034:
            local_78._0_1_ = '\0';
          }
          else {
            if ((char)local_78 != '\0') {
              if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              goto LAB_00641034;
            }
            if (local_80 != (int64_t *)0x0) {
              uVar18 = FUN_00d50b00();
            }
            plVar16 = (int64_t *)CONCAT71(uVar12,1);
            if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
              local_58 = plVar11;
              goto LAB_00640da6;
            }
          }
          plVar16 = (int64_t *)CONCAT71(uVar12,1);
          local_58 = plVar11;
        }
LAB_00640da6:
        plVar11 = local_98;
        iVar13 = local_68._4_4_;
        local_50 = plVar16;
      } while( true );
    }
    local_50 = (int64_t *)0x0;
    local_58 = (int64_t *)0x0;
    plVar16 = local_88;
    goto LAB_006414b1;
  }
LAB_00640c53:
  bVar17 = false;
  local_50 = (int64_t *)0x0;
  local_58 = (int64_t *)0x0;
LAB_0064170a:
  if (plVar16 != (int64_t *)0x0) {
    plVar11 = local_50;
    if (local_58 != (int64_t *)0x0) {
      if ((char)local_50 == '\0') {
        plVar11 = (int64_t *)0x0;
      }
      else {
        local_58 = (int64_t *)0x0;
        FUN_00d50b20();
        plVar11 = (int64_t *)0x0;
      }
    }
    FUN_004405c0();
    FUN_004b5af0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (int64_t *)0x0) {
      local_58 = (int64_t *)0x0;
      local_50 = plVar11;
    }
    else {
      local_78._0_1_ = '\0';
      local_80 = (int64_t *)0x0;
      local_98 = plVar16;
      local_70 = plVar16;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_58 = (int64_t *)0x0;
      while( true ) {
        lVar5 = (int64_t)(int)local_68;
        iVar13 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar13);
        if (*(int *)((int64_t)local_70 + 0xc) <= iVar13) break;
        local_80 = *(int64_t **)(local_70[2] + 8 + lVar5 * 8);
        FUN_003b7950();
        plVar16 = local_48;
        local_d8 = 0;
        if (local_40 == '\0') {
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_d8 = '\x01';
        local_e0 = plVar16;
        uVar18 = (**(code **)(*local_88 + 0x50))();
        cVar2 = (char)uVar18;
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        plVar16 = local_80;
        plVar10 = local_58;
        if (cVar2 != '\0') {
          cVar2 = (char)plVar11;
          if (local_80 == local_58) {
            if ((cVar2 == '\0') && (local_80 != (int64_t *)0x0)) {
              plVar16 = local_58;
              if ((char)local_78 != '\0') goto LAB_006418e5;
              local_50 = (int64_t *)CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
              FUN_00d50b00();
              plVar10 = local_58;
              plVar11 = local_50;
            }
          }
          else if ((char)local_78 == '\0') {
            if (local_80 != (int64_t *)0x0) {
              uVar18 = FUN_00d50b00();
            }
            local_50 = (int64_t *)CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
            plVar10 = plVar16;
            plVar11 = local_50;
            if ((cVar2 != '\0') && (local_58 != (int64_t *)0x0)) {
              FUN_00d50b20();
              local_58 = plVar16;
              plVar10 = local_58;
              plVar11 = local_50;
            }
          }
          else {
            if ((cVar2 != '\0') && (local_58 != (int64_t *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
LAB_006418e5:
            local_78._0_1_ = '\0';
            plVar10 = plVar16;
            plVar11 = (int64_t *)CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
          }
        }
        local_50 = plVar11;
        local_58 = plVar10;
        cVar2 = FUN_003b7710();
        if ((cVar2 != '\0') || (cVar2 = FUN_003b7780(), plVar11 = local_50, cVar2 != '\0')) {
          if (local_58 == (int64_t *)0x0) {
            local_58 = (int64_t *)0x0;
            plVar11 = local_50;
          }
          else {
            if ((char)local_50 != '\0') {
              FUN_00d50b20();
            }
            local_50 = (int64_t *)0x0;
            local_58 = (int64_t *)0x0;
            plVar11 = local_50;
          }
          break;
        }
        if (local_68._4_4_ != 0) {
          if (local_68._4_4_ < 1) {
            iVar13 = -local_68._4_4_;
          }
          else {
            local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
            FUN_00d23690();
            local_60 = local_60 + local_68._4_4_;
            iVar13 = 0;
          }
          local_68 = CONCAT44(iVar13,(int)local_68);
        }
      }
      local_50 = plVar11;
      FUN_00274d30();
      FUN_00d50b20();
      if (local_58 == (int64_t *)0x0) {
        local_58 = (int64_t *)0x0;
      }
      else {
        FUN_003b72f0();
      }
    }
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_9c == '\0') {
    FUN_00d50b20();
  }
LAB_006409c1:
  if (*arg1 != 0) {
    local_140 = *local_38;
    local_138 = '\0';
    FUN_00227060();
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
  }
  if (bVar17) {
    FUN_0064f6f0();
  }
  if (local_c8 != 0) {
    FUN_00d50b20();
  }
  return;
LAB_00641153:
  bVar1 = 1;
  if (local_98 == (int64_t *)0x0) {
    bVar17 = false;
LAB_00641b8e:
    iVar13 = 0;
  }
  else {
    FUN_003b7950();
    plVar11 = local_b0;
    if (local_a8 == '\0') {
      if (local_b0 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    FUN_004b5c00();
    plVar16 = local_48;
    if (local_48 == (int64_t *)0x0) {
      bVar17 = false;
      plVar16 = (int64_t *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar17 = true;
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      bVar17 = true;
    }
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (int64_t *)0x0) goto LAB_00641b8e;
    iVar13 = FUN_003b7780();
    bVar1 = 0;
  }
  plVar16 = local_50;
  if (local_58 != (int64_t *)0x0) {
    if ((char)local_50 == '\0') {
      plVar16 = (int64_t *)0x0;
    }
    else {
      local_58 = (int64_t *)0x0;
      FUN_00d50b20();
      plVar16 = (int64_t *)0x0;
    }
  }
  if ((bool)(!bVar17 | bVar1)) {
    local_58 = (int64_t *)0x0;
    plVar11 = local_98;
    local_50 = plVar16;
  }
  else {
    FUN_00d50b20();
    local_58 = (int64_t *)0x0;
    plVar11 = local_98;
    local_50 = plVar16;
  }
LAB_00641086:
  plVar16 = local_88;
  FUN_00274d30();
  uVar18 = FUN_00d50b20();
  if (local_58 == (int64_t *)0x0) {
    local_58 = (int64_t *)0x0;
  }
  else {
    local_b8 = (int64_t *)CONCAT44(local_b8._4_4_,(int)CONCAT71((int7)((uint64_t)uVar18 >> 8),1));
    if (plVar11 == (int64_t *)0x0) {
      local_d0 = 0;
    }
    else {
      local_158 = '\0';
      local_160 = plVar16;
      uVar18 = FUN_004b5c00(extraout_XMM0_Qa_00,&local_160);
      plVar11 = local_80;
      if (local_80 == (int64_t *)0x0) {
        local_d0 = 0;
        plVar11 = (int64_t *)0x0;
      }
      else if ((char)local_78 == '\0') {
        uVar18 = FUN_00d50b00();
        local_d0 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
        if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
        local_d0 = CONCAT71((int7)((uint64_t)uVar18 >> 8),1);
      }
      if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        local_b8 = (int64_t *)((uint64_t)local_b8 & 0xffffffff00000000);
        iVar13 = FUN_003b7780();
        local_b8 = (int64_t *)((uint64_t)local_b8 & 0xffffffff00000000);
      }
    }
    plVar11 = g_026f6fd0;
    if (g_026f6fd0 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    dVar19 = (double)FUN_00e7d6f0();
    uVar8 = (uint64_t)(dVar19 * g_023907c0);
    dVar19 = dVar19 * g_023907c0 - g_023907c8;
    FUN_0071a120();
    if (((((char)local_78 == '\0') && (local_80 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = (byte)(((int64_t)dVar19 & (int64_t)uVar8 >> 0x3f | uVar8) / 3);
    local_48 = plVar11;
    local_40 = '\0';
    FUN_000175c0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 != (int64_t *)0x0) {
      local_78._0_1_ = '\0';
      local_80 = plVar16;
      bVar1 = FUN_00c70bc0();
      if (((char)local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((plVar16 != (int64_t *)0x0 & bVar1) == 0) {
      FUN_004405c0();
      FUN_004b5af0();
      plVar11 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        local_78._0_1_ = '\0';
        local_80 = (int64_t *)0x0;
        local_70 = plVar11;
        local_68 = 0xffffffff;
        local_60 = 0;
        while( true ) {
          lVar5 = (int64_t)(int)local_68;
          iVar14 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar14);
          if (*(int *)((int64_t)local_70 + 0xc) <= iVar14) break;
          local_80 = *(int64_t **)(local_70[2] + 8 + lVar5 * 8);
          FUN_003b7290();
          if (local_68._4_4_ != 0) {
            if (local_68 < 0) {
              iVar14 = -local_68._4_4_;
            }
            else {
              local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar14 = 0;
            }
            local_68 = CONCAT44(iVar14,(int)local_68);
          }
        }
        FUN_00274d30();
        FUN_00d50b20();
      }
    }
    else {
      FUN_003b7290();
    }
    plVar11 = local_98;
    plVar16 = local_88;
    if ((char)local_d0 != '\0' && (char)local_b8 == '\0') {
      FUN_00d50b20();
      plVar11 = local_98;
      plVar16 = local_88;
    }
  }
LAB_006414b1:
  FUN_004405c0();
  FUN_004b5af0();
  plVar10 = local_80;
  if ((char)local_78 == '\0') {
    if (((local_80 != (int64_t *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
       (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    local_78._0_1_ = '\0';
    local_80 = (int64_t *)0x0;
    local_b8 = plVar10;
    local_70 = plVar10;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar14 = -local_68._4_4_;
        }
        else {
          iVar14 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar14);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar14 = 0;
        }
        local_68 = CONCAT44(iVar14,(int)local_68);
      }
      lVar5 = (int64_t)(int)local_68;
      iVar14 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar14);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar14) break;
      local_80 = *(int64_t **)(local_70[2] + 8 + lVar5 * 8);
      cVar2 = FUN_003b7710();
      if (cVar2 == '\0' && plVar11 != (int64_t *)0x0) {
        uVar18 = FUN_003b7950();
        plVar16 = local_b0;
        local_e8 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != (int64_t *)0x0) {
            uVar18 = FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        plVar11 = local_98;
        local_e8 = '\x01';
        local_f0 = plVar16;
        FUN_004b5c00(uVar18,&local_f0);
        plVar16 = local_48;
        if (local_48 == (int64_t *)0x0) {
          bVar17 = true;
          plVar16 = (int64_t *)0x0;
        }
        else {
          if (local_40 == '\0') {
            FUN_00d50b00();
            bVar17 = false;
            if ((local_40 == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_00641646;
            FUN_00d50b20();
          }
          else {
            local_40 = '\0';
          }
          bVar17 = false;
        }
LAB_00641646:
        if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 != (int64_t *)0x0) {
          cVar2 = FUN_003b7780();
          if (cVar2 == '\0') {
            FUN_003b7710();
            FUN_003b7740((char)iVar13 != '\0');
          }
          plVar11 = local_98;
          if (!bVar17) {
            FUN_00d50b20();
          }
        }
      }
      plVar16 = local_88;
    }
    FUN_00274d30();
    FUN_00d50b20();
  }
  local_89 = local_89 | plVar11 == (int64_t *)0x0;
  bVar17 = true;
  if (local_89 == 0) {
    FUN_00d50b20();
  }
  goto LAB_0064170a;
}



// ============================================================
// 0027f1f0
// ============================================================
// Function: FUN_0027f1f0
// Address: 0027f1f0
// Size: 4760 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

void FUN_0027f1f0(uint64_t param_1,uint32_t param_2)

{
  bool bVar1;
  int64_t lVar2;
  code *pcVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t **pplVar9;
  int64_t *plVar10;
  uint32_t uVar11;
  uint32_t uVar12;
  uint32_t uVar13;
  uint32_t uVar14;
  uint32_t in_XMM1_Dc;
  uint32_t uVar15;
  uint32_t uVar16;
  int64_t local_2c0;
  char local_2b8;
  int64_t local_2b0;
  char local_2a8;
  int64_t local_2a0;
  char local_298;
  int64_t *local_290;
  char local_288;
  int64_t *local_280;
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
  int64_t local_220;
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
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int local_13c;
  int64_t *local_138;
  char local_130;
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t *local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t *local_b8;
  char local_b0;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  uint64_t local_80;
  int64_t *local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01f27fe0();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_a0 != 0) {
    local_98 = '\0';
    local_a0 = 0;
    FUN_00da5ad0();
    local_88 = local_68 != '\0';
    local_90 = local_70;
    if ((bool)local_88) {
      local_68 = '\0';
    }
    local_80 = FUN_00da7170();
    FUN_00da7180();
    pcVar3 = g_02682d10;
    while (local_90 != 0) {
      FUN_01f27fe0();
      local_a8 = *(int64_t *)(local_70 + 0x128);
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_68 = '\0';
      local_70 = 0;
      FUN_00e65ef0(&local_13c,&local_70);
      lVar2 = g_027258a0;
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) goto LAB_0027f510;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_0027f390:
        uVar11 = FUN_01e697d0();
        FUN_01e69930(uVar11,0);
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        cVar5 = FUN_00e6d780();
        if ((cVar5 != '\0') || (cVar5 = FUN_00e6d4e0(), cVar5 == '\0')) {
          lVar2 = g_02725930;
          if (g_02725930 != 0) {
            FUN_00d50b00();
          }
          local_2c0 = 0;
          local_2b8 = '\0';
          local_2b0 = 0;
          local_2a8 = '\0';
          FUN_01e4fcf0(&local_2b0,&local_2c0);
          plVar10 = local_40;
          if ((g_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
          pplVar9 = (int64_t **)&g_02802688;
          if (plVar10 != (int64_t *)0x0) {
            (**(code **)(*plVar10 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar9 = &local_40;
            if (cVar5 == '\0') {
              pplVar9 = (int64_t **)&g_02802688;
            }
          }
          local_78 = *pplVar9;
          if (*(char *)(pplVar9 + 1) == '\0') {
            if (local_78 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar9 + 1) = 0;
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_2a8 != '\0') && (local_2b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_2b8 != '\0') && (local_2c0 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (local_78 != (int64_t *)0x0) {
            FUN_00dbbbc0();
            local_138 = local_40;
            local_130 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_130 = '\x01';
            FUN_0054d030();
            if ((local_130 != '\0') && (local_138 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e56750();
            plVar10 = local_40;
            if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            plVar8 = local_40;
            lVar2 = g_026e1090;
            if (g_026e1090 != 0) {
              FUN_00d50b00();
            }
            local_2a0 = lVar2;
            local_298 = '\x01';
            FUN_01cb6670();
            local_128 = local_50;
            local_120 = 0;
            if (local_48 == '\0') {
              if (local_50 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_120 = '\x01';
            (**(code **)(*plVar8 + 0x638))();
            if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_298 != '\0') && (local_2a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            uVar12 = (**(code **)(*local_40 + 0x4d8))();
            uVar11 = param_2;
            uVar15 = in_XMM1_Dc;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = (int64_t *)FUN_00e8fc40();
            FUN_00152930();
            (**(code **)(*plVar7 + 0x18))();
            FUN_01d4ed60(param_2);
            FUN_01d52700();
            FUN_01e5ca90();
            (**(code **)(*local_50 + 0x640))();
            plVar8 = local_40;
            FUN_01d52740();
            local_118 = local_60;
            local_110 = 0;
            if (local_58 == '\0') {
              if (local_60 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_58 = '\0';
            }
            local_110 = '\x01';
            uVar13 = FUN_01d530c0();
            uVar16 = uVar11;
            uVar14 = FUN_01d530c0();
            (**(code **)(*plVar8 + 0x410))(uVar13,uVar16,uVar14,uVar11,uVar16,uVar15);
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52770();
            plVar8 = (int64_t *)FUN_00e8fc40();
            FUN_0006daf0();
            *(void*)(plVar8 + 0x27) = 0;
            plVar8[0x2e] = 0;
            *(void*)(plVar8 + 0x2f) = 0;
            plVar8[0x30] = 0;
            *(void*)(plVar8 + 0x31) = 0;
            plVar8[0x28] = 0;
            plVar8[0x29] = 0;
            *(void*)(plVar8 + 0x2a) = 0;
            plVar8[0x2b] = 0;
            plVar8[0x2c] = 0;
            *(void*)((int64_t)plVar8 + 0x165) = 0;
            *(void*)((int64_t)plVar8 + 0x18c) = 0;
            *(void*)((int64_t)plVar8 + 0x194) = 0;
            *(void*)((int64_t)plVar8 + 0x199) = 0;
            plVar8[0x35] = 0;
            plVar8[0x36] = 0;
            plVar8[0x37] = 0;
            plVar8[0x38] = 0;
            *plVar8 = (int64_t)&g_02682cf8;
            plVar8[2] = (int64_t)&g_026837c0;
            plVar8[0x39] = 0;
            plVar8[0x3a] = 0;
            *(void*)(plVar8 + 0x3b) = 0;
            plVar8[0x3c] = 0;
            plVar8[0x3d] = 0;
            *(void*)(plVar8 + 0x3e) = 0;
            (*pcVar3)();
            local_288 = '\0';
            local_290 = plVar7;
            FUN_01d56f30();
            if ((local_288 != '\0') && (local_290 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d57ee0();
            (**(code **)(*plVar8 + 0x4d0))(uVar12);
            (**(code **)(*plVar8 + 0x558))();
            FUN_01d57ec0();
            FUN_01e5ca90();
            local_278 = '\0';
            local_270 = 0;
            local_268 = '\0';
            local_280 = plVar8;
            (**(code **)(*local_40 + 0x468))(&local_270,3);
            if ((local_268 != '\0') && (local_270 != 0)) {
              FUN_00d50b20();
            }
            if ((local_278 != '\0') && (local_280 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            FUN_01e43460();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            local_260 = 0;
            local_258 = '\0';
            FUN_01f27fe0();
            local_108 = local_40;
            local_100 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_100 = '\x01';
            local_248 = '\0';
            local_250 = 0;
            FUN_01e57a30(&local_250,&local_108);
            if ((local_248 != '\0') && (local_250 != 0)) {
              FUN_00d50b20();
            }
            if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_258 != '\0') && (local_260 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50130();
            FUN_00d50b20();
            FUN_00d50b20();
            if (plVar10 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      else {
        if (local_40 != (int64_t *)0x0) goto LAB_0027f390;
LAB_0027f510:
        if (local_13c == 1) {
          local_240 = local_a0;
          local_238 = '\0';
          if (g_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = g_026e10b0;
          local_230 = lVar2;
          local_228 = '\x01';
          if (g_026e10b0 != 0) {
            FUN_00d50b00();
          }
          local_220 = lVar4;
          local_218 = '\x01';
          local_210 = 0;
          local_208 = '\0';
          FUN_00d31230(&local_210,&local_220);
          local_f8 = local_50;
          local_f0 = 0;
          lVar2 = g_027258a0;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
              lVar2 = g_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_f0 = '\x01';
          g_027258a0 = lVar2;
          if (lVar2 != 0) {
            local_f0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = g_026e10b8;
          local_1f8 = '\x01';
          local_200 = lVar2;
          if (g_026e10b8 != 0) {
            FUN_00d50b00();
          }
          local_1f0 = lVar4;
          local_1e8 = '\x01';
          local_1e0 = 0;
          local_1d8 = '\0';
          FUN_00d31230(&local_1e0,&local_1f0);
          local_e8 = local_60;
          local_e0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_e0 = '\x01';
          FUN_004ae0b0(&local_e8,&local_f8);
          plVar10 = local_40;
          if (local_40 == (int64_t *)0x0) {
            bVar1 = false;
            plVar10 = (int64_t *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            bVar1 = true;
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
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
          if ((local_f0 != '\0') && (local_f8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_208 != '\0') && (local_210 != 0)) {
            FUN_00d50b20();
          }
          if ((local_218 != '\0') && (local_220 != 0)) {
            FUN_00d50b20();
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            FUN_00d50b20();
          }
          if ((local_238 != '\0') && (local_240 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_1d0 = local_a0;
          local_1c8 = '\0';
          if (g_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = g_026e10c0;
          local_1c0 = lVar2;
          local_1b8 = '\x01';
          if (g_026e10c0 != 0) {
            FUN_00d50b00();
          }
          local_1b0 = lVar4;
          local_1a8 = '\x01';
          local_1a0 = 0;
          local_198 = '\0';
          FUN_00d31230(&local_1a0,&local_1b0);
          local_d8 = local_50;
          local_d0 = 0;
          lVar2 = g_027258a0;
          if (local_48 == '\0') {
            if (local_50 != (int64_t *)0x0) {
              FUN_00d50b00();
              lVar2 = g_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_d0 = '\x01';
          g_027258a0 = lVar2;
          if (lVar2 != 0) {
            local_d0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = g_026e10c8;
          local_188 = '\x01';
          local_190 = lVar2;
          if (g_026e10c8 != 0) {
            FUN_00d50b00();
          }
          local_180 = lVar4;
          local_178 = '\x01';
          local_170 = 0;
          local_168 = '\0';
          FUN_00d31230(&local_170,&local_180);
          local_c8 = local_60;
          local_c0 = 0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_c0 = '\x01';
          FUN_004ae0b0(&local_c8,&local_d8);
          plVar10 = local_40;
          if (local_40 == (int64_t *)0x0) {
            bVar1 = false;
            plVar10 = (int64_t *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
            bVar1 = true;
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_168 != '\0') && (local_170 != 0)) {
            FUN_00d50b20();
          }
          if ((local_178 != '\0') && (local_180 != 0)) {
            FUN_00d50b20();
          }
          if ((local_188 != '\0') && (local_190 != 0)) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
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
        if (plVar10 != (int64_t *)0x0) {
          local_158 = '\0';
          local_160 = 0;
          FUN_01f27fe0();
          local_b8 = local_40;
          local_b0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_b0 = '\x01';
          local_148 = '\0';
          local_150 = 0;
          FUN_01e57a30(&local_150,&local_b8);
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50130();
          if (bVar1) {
            FUN_00d50b20();
          }
        }
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      FUN_00da7180();
      if (local_90 == 0) break;
      local_90 = 0;
      if (local_88 == '\0') {
        local_88 = '\0';
        break;
      }
      FUN_00d50b20();
      local_88 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 00103050
// ============================================================
// Function: FUN_00103050
// Address: 00103050
// Size: 3569 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

uint64_t FUN_00103050(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t **pplVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t *local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
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
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int local_12c;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t *local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  uint64_t local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x68);
    FUN_00097120();
    local_60 = g_02802688;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      local_60 = g_02802688;
      if (cVar5 != '\0') {
        local_60 = *(int64_t *)(this_ptr + 0x68);
      }
    }
    if (local_60 != 0) {
      FUN_00d50b00();
      local_a0 = '\0';
      local_a8 = 0;
      FUN_00da5ad0();
      local_90 = local_48 != '\0';
      local_98 = local_50;
      if ((bool)local_90) {
        local_48 = '\0';
      }
      local_88 = FUN_00da7170();
      FUN_00da7180();
      if (local_98 != 0) {
        do {
          FUN_01f27fe0();
          FUN_00281390();
          lVar4 = local_50;
          if (local_48 == '\0') {
            if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_48 = '\0';
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          local_48 = '\0';
          local_50 = 0;
          FUN_00e65ef0(&local_12c,&local_50);
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) goto LAB_001033c0;
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
LAB_00103250:
            uVar8 = FUN_01e697d0();
            FUN_01e69930(uVar8,0);
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            cVar5 = FUN_00e6d780();
            if ((cVar5 != '\0') || (cVar5 = FUN_00e6d4e0(), cVar5 == '\0')) {
              lVar2 = g_02725930;
              if (g_02725930 != 0) {
                FUN_00d50b00();
              }
              local_280 = 0;
              local_278 = '\0';
              local_270 = 0;
              local_268 = '\0';
              FUN_01e4fcf0(&local_270,&local_280);
              plVar1 = local_40;
              if ((g_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
              pplVar7 = (int64_t **)&g_02802688;
              if (plVar1 != (int64_t *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar7 = &local_40;
                if (cVar5 == '\0') {
                  pplVar7 = (int64_t **)&g_02802688;
                }
              }
              plVar1 = *pplVar7;
              if (*(char *)(pplVar7 + 1) == '\0') {
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar7 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_268 != '\0') && (local_270 != 0)) {
                FUN_00d50b20();
              }
              if ((local_278 != '\0') && (local_280 != 0)) {
                FUN_00d50b20();
              }
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              if (plVar1 != (int64_t *)0x0) {
                FUN_00dbbbc0();
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
                uVar8 = FUN_0054d030();
                if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                  uVar8 = FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  uVar8 = FUN_00d50b20();
                }
                local_258 = '\0';
                local_250 = 0;
                local_248 = '\0';
                local_260 = plVar1;
                FUN_00093ce0(uVar8,&local_250);
                if ((local_248 != '\0') && (local_250 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_258 != '\0') && (local_260 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          else {
            if (local_40 != (int64_t *)0x0) goto LAB_00103250;
LAB_001033c0:
            local_120 = 0;
            uVar8 = FUN_00d50b00();
            local_120 = '\x01';
            local_240 = 0;
            local_238 = '\0';
            local_128 = this_ptr;
            FUN_00093ce0(uVar8,&local_240);
            if ((local_238 != '\0') && (local_240 != 0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = g_027258a0;
            if (local_12c == 1) {
              local_230 = local_a8;
              local_228 = '\0';
              if (g_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = g_026e10b0;
              local_220 = lVar2;
              local_218 = '\x01';
              if (g_026e10b0 != 0) {
                FUN_00d50b00();
              }
              local_210 = lVar3;
              local_208 = '\x01';
              local_200 = 0;
              local_1f8 = '\0';
              FUN_00d31230(&local_200,&local_210);
              local_f8 = local_80;
              local_f0 = 0;
              lVar2 = g_027258a0;
              if (local_78 == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                  lVar2 = g_027258a0;
                }
              }
              else {
                local_78 = '\0';
              }
              local_f0 = '\x01';
              g_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_f0 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = g_026e10b8;
              local_1e8 = '\x01';
              local_1f0 = lVar2;
              if (g_026e10b8 != 0) {
                FUN_00d50b00();
              }
              local_1e0 = lVar3;
              local_1d8 = '\x01';
              local_1d0 = 0;
              local_1c8 = '\0';
              FUN_00d31230(&local_1d0,&local_1e0);
              local_e8 = local_70;
              local_e0 = 0;
              if (local_68 == '\0') {
                if (local_70 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_e0 = '\x01';
              uVar8 = FUN_004ae0b0(&local_e8,&local_f8);
              local_108 = local_40;
              local_100 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  uVar8 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_100 = '\x01';
              local_1b8 = '\0';
              local_1c0 = 0;
              FUN_00093ce0(uVar8,&local_1c0);
              if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
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
              if ((local_f0 != '\0') && (local_f8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1f8 != '\0') && (local_200 != 0)) {
                FUN_00d50b20();
              }
              if ((local_208 != '\0') && (local_210 != 0)) {
                FUN_00d50b20();
              }
              if ((local_218 != '\0') && (local_220 != 0)) {
                FUN_00d50b20();
              }
              if ((local_228 != '\0') && (local_230 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_1b0 = local_a8;
              local_1a8 = '\0';
              if (g_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = g_026e10c0;
              local_1a0 = lVar2;
              local_198 = '\x01';
              if (g_026e10c0 != 0) {
                FUN_00d50b00();
              }
              local_190 = lVar3;
              local_188 = '\x01';
              local_180 = 0;
              local_178 = '\0';
              FUN_00d31230(&local_180,&local_190);
              local_c8 = local_80;
              local_c0 = 0;
              lVar2 = g_027258a0;
              if (local_78 == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                  lVar2 = g_027258a0;
                }
              }
              else {
                local_78 = '\0';
              }
              local_c0 = '\x01';
              g_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_c0 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = g_026e10c8;
              local_168 = '\x01';
              local_170 = lVar2;
              if (g_026e10c8 != 0) {
                FUN_00d50b00();
              }
              local_160 = lVar3;
              local_158 = '\x01';
              local_150 = 0;
              local_148 = '\0';
              FUN_00d31230(&local_150,&local_160);
              local_b8 = local_70;
              local_b0 = 0;
              if (local_68 == '\0') {
                if (local_70 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              local_b0 = '\x01';
              uVar8 = FUN_004ae0b0(&local_b8,&local_c8);
              local_d8 = local_40;
              local_d0 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  uVar8 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_d0 = '\x01';
              local_138 = '\0';
              local_140 = 0;
              FUN_00093ce0(uVar8,&local_140);
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_b0 != '\0') && (local_b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                FUN_00d50b20();
              }
              if ((local_158 != '\0') && (local_160 != 0)) {
                FUN_00d50b20();
              }
              if ((local_168 != '\0') && (local_170 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_178 != '\0') && (local_180 != 0)) {
                FUN_00d50b20();
              }
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                FUN_00d50b20();
              }
            }
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          FUN_00da7180();
          if (local_98 == 0) break;
          local_98 = 0;
          if (local_90 == '\0') {
            local_90 = '\0';
            break;
          }
          FUN_00d50b20();
          local_90 = '\0';
        } while (local_98 != 0);
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e54790();
    if (local_60 != 0) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 0071c4a0
// ============================================================
// Function: FUN_0071c4a0
// Address: 0071c4a0
// Size: 2933 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

uint64_t FUN_0071c4a0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int64_t **pplVar7;
  uint64_t unaff_RBX;
  uint64_t uVar8;
  int64_t *plVar9;
  int64_t this_ptr;
  double dVar10;
  uint64_t uVar11;
  int64_t *local_220;
  char local_218;
  int64_t *local_210;
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
  int64_t *local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  int64_t *local_40;
  char local_38;
  
  uVar8 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  if (param_2 != 0) {
    dVar10 = (double)FUN_00e7d6f0();
    if ((dVar10 - *(double *)(this_ptr + 0x98)) * g_023907c0 < g_023b74a0) {
      uVar8 = 0;
    }
    else {
      uVar11 = FUN_00e7d6f0();
      *(void*)(this_ptr + 0x98) = uVar11;
      plVar1 = *(int64_t **)(this_ptr + 0x68);
      FUN_00097120();
      plVar9 = g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar9 = g_02802688;
        if (cVar4 != '\0') {
          plVar9 = *(int64_t **)(this_ptr + 0x68);
        }
      }
      if (plVar9 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_78 = '\0';
      local_80 = 0;
      local_48 = plVar9;
      FUN_00da5ad0();
      local_68 = local_98 != '\0';
      local_70 = local_a0;
      if ((bool)local_68) {
        local_98 = '\0';
      }
      local_60 = FUN_00da7170();
      FUN_00da7180();
      if (local_70 != 0) {
        do {
          local_98 = '\0';
          local_a0 = 0;
          FUN_01f27fe0();
          FUN_00281390();
          plVar9 = g_027282b8;
          if (g_027282b8 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          local_220 = plVar9;
          local_218 = '\x01';
          FUN_00e6b740(&local_a0,&local_220,1);
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
          if ((local_218 != '\0') && (local_220 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 == (int64_t *)0x0) {
            if (local_48 != (int64_t *)0x0) {
              uVar11 = FUN_00d50b00();
              local_190 = 0;
              local_188 = '\0';
              FUN_00093ce0(uVar11,&local_190);
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if (this_ptr != 0) {
                FUN_00d50b20();
              }
              lVar2 = g_027258a0;
              local_180 = local_80;
              local_178 = '\0';
              if (g_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = g_02725918;
              local_170 = lVar2;
              local_168 = '\x01';
              if (g_02725918 != 0) {
                FUN_00d50b00();
              }
              local_160 = lVar3;
              local_158 = '\x01';
              local_150 = 0;
              local_148 = '\0';
              FUN_00d31230(&local_150,&local_160);
              local_c0 = local_58;
              local_b8 = 0;
              lVar2 = g_027258a0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                  lVar2 = g_027258a0;
                }
              }
              else {
                local_50 = '\0';
              }
              local_b8 = '\x01';
              g_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_b8 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = g_02725920;
              local_138 = '\x01';
              local_140 = lVar2;
              if (g_02725920 != 0) {
                FUN_00d50b00();
              }
              local_130 = lVar3;
              local_128 = '\x01';
              local_120 = 0;
              local_118 = '\0';
              FUN_00d31230(&local_120,&local_130);
              local_b0 = local_90;
              local_a8 = 0;
              if (local_88 == '\0') {
                if (local_90 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_88 = '\0';
              }
              local_a8 = '\x01';
              uVar11 = FUN_004ae0b0(&local_b0,&local_c0);
              plVar9 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  uVar11 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_108 = '\0';
              local_110 = 0;
              FUN_00093ce0(uVar11,&local_110);
              if ((local_108 != '\0') && (local_110 != 0)) {
                FUN_00d50b20();
              }
              if (plVar9 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                FUN_00d50b20();
              }
              if ((local_158 != '\0') && (local_160 != 0)) {
                FUN_00d50b20();
              }
              if ((local_168 != '\0') && (local_170 != 0)) {
                FUN_00d50b20();
              }
              if ((local_178 != '\0') && (local_180 != 0)) {
                FUN_00d50b20();
              }
              FUN_01e54790();
            }
          }
          else {
            uVar11 = FUN_01e697d0();
            local_210 = plVar1;
            local_208 = '\0';
            FUN_01e69930(uVar11,0);
            if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (int64_t *)0x0) {
              if (local_a0 != 0) {
                FUN_01f27fe0();
                FUN_00281390();
                local_200 = local_a0;
                local_1f8 = '\0';
                uVar5 = FUN_00e6d4e0();
                plVar9 = (int64_t *)(uint64_t)uVar5;
                if ((local_1f8 != '\0') && (local_200 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
                if ((char)uVar5 != '\0') goto LAB_0071cebc;
              }
              lVar2 = g_026d8ab8;
              if (g_026d8ab8 != 0) {
                FUN_00d50b00();
              }
              local_1f0 = lVar2;
              local_1e8 = '\x01';
              local_1e0 = 0;
              local_1d8 = '\0';
              local_1d0 = 0;
              local_1c8 = '\0';
              FUN_01e4fcf0(&local_1d0,&local_1e0);
              plVar9 = local_40;
              if ((g_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
              pplVar7 = &g_02802688;
              if (plVar9 != (int64_t *)0x0) {
                (**(code **)(*plVar9 + 0x360))();
                cVar4 = FUN_00e85ea0();
                pplVar7 = &local_40;
                if (cVar4 == '\0') {
                  pplVar7 = &g_02802688;
                }
              }
              plVar1 = *pplVar7;
              if (*(char *)(pplVar7 + 1) == '\0') {
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar7 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
              if (plVar1 != (int64_t *)0x0) {
                FUN_00dbbbc0();
                plVar9 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_0054d030();
                if (plVar9 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar11 = FUN_00d50b00();
                local_1c0 = 0;
                local_1b8 = '\0';
                uVar11 = FUN_00093ce0(uVar11,&local_1c0);
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  uVar11 = FUN_00d50b20();
                }
                if (this_ptr != 0) {
                  uVar11 = FUN_00d50b20();
                }
                local_1a8 = '\0';
                local_1a0 = 0;
                local_198 = '\0';
                local_1b0 = plVar1;
                FUN_00093ce0(uVar11,&local_1a0);
                if ((local_198 != '\0') && (local_1a0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1a8 != '\0') && (local_1b0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01e54790();
                FUN_00d50b20();
              }
            }
LAB_0071cebc:
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00da7180();
          if (local_70 == 0) break;
          local_70 = 0;
          if (local_68 == '\0') {
            local_68 = '\0';
            break;
          }
          FUN_00d50b20();
          local_68 = '\0';
        } while (local_70 != 0);
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      uVar8 = CONCAT71((int7)((uint64_t)plVar9 >> 8),1);
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar8 & 0xffffffff;
}



// ============================================================
// 0071d920
// ============================================================
// Function: FUN_0071d920
// Address: 0071d920
// Size: 2925 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

uint64_t FUN_0071d920(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  int64_t **pplVar6;
  uint64_t unaff_RBX;
  uint64_t uVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  double dVar9;
  uint64_t uVar10;
  uint64_t local_218;
  int64_t *local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t *local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  uint64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t *local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  uVar7 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
  if (param_2 != 0) {
    dVar9 = (double)FUN_00e7d6f0();
    if ((dVar9 - *(double *)(this_ptr + 0xa0)) * g_023907c0 < g_023b74a0) {
      uVar7 = 0;
    }
    else {
      uVar10 = FUN_00e7d6f0();
      *(void*)(this_ptr + 0xa0) = uVar10;
      plVar1 = *(int64_t **)(this_ptr + 0x68);
      FUN_00097120();
      plVar8 = g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar8 = g_02802688;
        if (cVar4 != '\0') {
          plVar8 = *(int64_t **)(this_ptr + 0x68);
        }
      }
      if (plVar8 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_88 = '\0';
      local_90 = 0;
      local_58 = plVar8;
      FUN_00da5ad0();
      local_78 = local_98 != '\0';
      local_80 = local_a0;
      if ((bool)local_78) {
        local_98 = '\0';
      }
      local_70 = FUN_00da7170();
      FUN_00da7180();
      if (local_80 != 0) {
        do {
          local_98 = '\0';
          local_a0 = 0;
          FUN_01f27fe0();
          FUN_00281390();
          FUN_00e6dc80(&local_218,&local_a0);
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
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 == (int64_t *)0x0) {
            if (local_58 != (int64_t *)0x0) {
              uVar10 = FUN_00d50b00();
              local_1a0 = 0;
              local_198 = '\0';
              FUN_00093ce0(uVar10,&local_1a0);
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
              if (this_ptr != 0) {
                FUN_00d50b20();
              }
              lVar2 = g_027258a0;
              local_190 = local_90;
              local_188 = '\0';
              if (g_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = g_02725918;
              local_180 = lVar2;
              local_178 = '\x01';
              if (g_02725918 != 0) {
                FUN_00d50b00();
              }
              local_170 = lVar3;
              local_168 = '\x01';
              local_160 = 0;
              local_158 = '\0';
              FUN_00d31230(&local_160,&local_170);
              local_c0 = local_68;
              local_b8 = 0;
              lVar2 = g_027258a0;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                  lVar2 = g_027258a0;
                }
              }
              else {
                local_60 = '\0';
              }
              local_b8 = '\x01';
              g_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_b8 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = g_02725920;
              local_148 = '\x01';
              local_150 = lVar2;
              if (g_02725920 != 0) {
                FUN_00d50b00();
              }
              local_140 = lVar3;
              local_138 = '\x01';
              local_130 = 0;
              local_128 = '\0';
              FUN_00d31230(&local_130,&local_140);
              local_b0 = local_50;
              local_a8 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_a8 = '\x01';
              uVar10 = FUN_004ae0b0(&local_b0,&local_c0);
              plVar8 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  uVar10 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_118 = '\0';
              local_120 = 0;
              FUN_00093ce0(uVar10,&local_120);
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
              if (plVar8 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              if ((local_148 != '\0') && (local_150 != 0)) {
                FUN_00d50b20();
              }
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_158 != '\0') && (local_160 != 0)) {
                FUN_00d50b20();
              }
              if ((local_168 != '\0') && (local_170 != 0)) {
                FUN_00d50b20();
              }
              if ((local_178 != '\0') && (local_180 != 0)) {
                FUN_00d50b20();
              }
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              FUN_01e54790();
            }
          }
          else {
            uVar10 = FUN_01e697d0();
            local_210 = plVar1;
            local_208 = '\0';
            FUN_01e69930(uVar10,0);
            if ((local_208 != '\0') && (local_210 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (local_a0 != 0) {
              FUN_01f27fe0();
              FUN_00281390();
              plVar8 = local_40;
              FUN_00dbbbc0();
              lVar2 = local_50;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00e658e0(local_218);
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            lVar2 = g_02725930;
            if (local_58 != (int64_t *)0x0) {
              if (g_02725930 != 0) {
                FUN_00d50b00();
              }
              local_200 = lVar2;
              local_1f8 = '\x01';
              local_1f0 = 0;
              local_1e8 = '\0';
              local_1e0 = 0;
              local_1d8 = '\0';
              FUN_01e4fcf0(&local_1e0,&local_1f0);
              plVar8 = local_40;
              if ((g_0270e710 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
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
              pplVar6 = &g_02802688;
              if (plVar8 != (int64_t *)0x0) {
                (**(code **)(*plVar8 + 0x360))();
                cVar4 = FUN_00e85ea0();
                pplVar6 = &local_40;
                if (cVar4 == '\0') {
                  pplVar6 = &g_02802688;
                }
              }
              plVar1 = *pplVar6;
              if (*(char *)(pplVar6 + 1) == '\0') {
                if (plVar1 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(void*)(pplVar6 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
              if (plVar1 != (int64_t *)0x0) {
                FUN_00dbbbc0();
                plVar8 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (int64_t *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_0054d030();
                if (plVar8 != (int64_t *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                uVar10 = FUN_00d50b00();
                local_1d0 = 0;
                local_1c8 = '\0';
                uVar10 = FUN_00093ce0(uVar10,&local_1d0);
                if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                  uVar10 = FUN_00d50b20();
                }
                if (this_ptr != 0) {
                  uVar10 = FUN_00d50b20();
                }
                local_1b8 = '\0';
                local_1b0 = 0;
                local_1a8 = '\0';
                local_1c0 = plVar1;
                FUN_00093ce0(uVar10,&local_1b0);
                if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_1b8 != '\0') && (local_1c0 != (int64_t *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_01e54790();
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00da7180();
          if (local_80 == 0) break;
          local_80 = 0;
          if (local_78 == '\0') {
            local_78 = '\0';
            break;
          }
          FUN_00d50b20();
          local_78 = '\0';
        } while (local_80 != 0);
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((uint64_t)plVar8 >> 8),1);
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar7 & 0xffffffff;
}



// ============================================================
// 00106380
// ============================================================
// Function: FUN_00106380
// Address: 00106380
// Size: 2995 bytes
// Class: MDURLOpenedController

void FUN_00106380(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  void*arg1;
  int64_t this_ptr;
  uint64_t local_1f0;
  int64_t *local_1e8;
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
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  (**(code **)(*(int64_t *)*arg1 + 0x978))();
  plVar3 = local_60;
  if ((((local_58 == '\0') && (local_60 != (int64_t *)0x0)) && (FUN_00d50b00(), local_58 != '\0'))
     && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*arg1 + 0x7b8))();
  plVar2 = local_60;
  if (((local_58 == '\0') && (local_60 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_58 != '\0' && (local_60 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  local_1e8 = plVar2;
  if (*(char *)(this_ptr + 0xc) == '\0') {
    if (plVar3 != (int64_t *)0x0) {
      FUN_01a8c310();
      plVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        local_1c8 = 0;
        lVar1 = *(int64_t *)(this_ptr + 0x40);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_1c8 = '\x01';
        local_1d0 = lVar1;
        FUN_0010acd0();
        local_c0 = local_60;
        local_b8 = 0;
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_b8 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_1d8 = 0;
        lVar1 = *(int64_t *)(this_ptr + 0x38);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_1d8 = '\x01';
        local_1e0 = lVar1;
        FUN_0010acd0();
        local_d0 = local_60;
        local_c8 = 0;
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_c8 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1d8 != '\0') && (local_1e0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_1b8 = 0;
      lVar1 = *(int64_t *)(this_ptr + 0x48);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = '\x01';
      local_1c0 = lVar1;
      (**(code **)(*plVar3 + 0x998))();
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      local_1a8 = 0;
      lVar1 = *(int64_t *)(this_ptr + 0x58);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_1a8 = '\x01';
      local_1b0 = lVar1;
      (**(code **)(*plVar3 + 0x988))();
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar2 = (int64_t *)*arg1;
    local_198 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    local_1a0 = lVar1;
    (**(code **)(*plVar2 + 0xd70))();
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    local_188 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x48);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_188 = '\x01';
    local_190 = lVar1;
    (**(code **)(*plVar2 + 0xd68))();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    local_178 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_178 = '\x01';
    local_180 = lVar1;
    (**(code **)(*plVar2 + 0xd58))();
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (plVar3 != (int64_t *)0x0) {
      FUN_01a8c310();
      plVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (int64_t *)0x0) {
        if (*(char *)(this_ptr + 0xd) == '\0') {
          local_158 = 0;
          lVar1 = *(int64_t *)(this_ptr + 0x18);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_158 = '\x01';
          local_160 = lVar1;
          FUN_0010acd0();
          local_80 = local_60;
          local_78 = 0;
          if (local_58 == '\0') {
            if (local_60 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_78 = '\x01';
          (**(code **)(*plVar3 + 0x9e8))();
          if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_1f0 = *(void*)(this_ptr + 0x40);
          FUN_00083ea0(2,&local_1f0);
          FUN_0010adc0();
          local_90 = local_70;
          local_88 = 0;
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          local_88 = '\x01';
          (**(code **)(*plVar3 + 0x9e8))();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          local_60 = (int64_t *)&g_0253d630;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_60 = &g_024c5048;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (*(char *)(this_ptr + 0xd) == '\0') {
        local_168 = 0;
        lVar1 = *(int64_t *)(this_ptr + 0x30);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_168 = '\x01';
        local_170 = lVar1;
        FUN_0010acd0();
        local_a0 = local_60;
        local_98 = 0;
        if (local_58 == '\0') {
          if (local_60 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_98 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_1f0 = *(void*)(this_ptr + 0x38);
        FUN_00083ea0(2,&local_1f0);
        FUN_0010adc0();
        local_b0 = local_70;
        local_a8 = 0;
        if (local_68 == '\0') {
          if (local_70 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_68 = '\0';
        }
        local_a8 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        local_60 = (int64_t *)&g_0253d630;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_60 = &g_024c5048;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      local_148 = 0;
      lVar1 = *(int64_t *)(this_ptr + 0x20);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_148 = '\x01';
      local_150 = lVar1;
      (**(code **)(*plVar3 + 0x998))();
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      local_138 = 0;
      lVar1 = *(int64_t *)(this_ptr + 0x28);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_138 = '\x01';
      local_140 = lVar1;
      (**(code **)(*plVar3 + 0x988))();
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar2 = (int64_t *)*arg1;
    local_128 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_128 = '\x01';
    local_130 = lVar1;
    (**(code **)(*plVar2 + 0xd70))();
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    local_118 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x20);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_118 = '\x01';
    local_120 = lVar1;
    (**(code **)(*plVar2 + 0xd68))();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    local_108 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x28);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    local_110 = lVar1;
    (**(code **)(*plVar2 + 0xd58))();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (int64_t *)*arg1;
    local_f8 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_f8 = '\x01';
    local_100 = lVar1;
    (**(code **)(*plVar2 + 0xd78))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)*arg1;
  local_e8 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_f0 = lVar1;
  (**(code **)(*plVar2 + 0xd60))();
  plVar2 = local_1e8;
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    local_d8 = 0;
    lVar1 = *(int64_t *)(this_ptr + 0x50);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_d8 = '\x01';
    local_e0 = lVar1;
    (**(code **)(*plVar3 + 0x990))();
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x7b8))();
  plVar4 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0010ae60();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00108e20
// ============================================================
// Function: FUN_00108e20
// Address: 00108e20
// Size: 2425 bytes
// Class: MDURLOpenedController

void FUN_00108e20(uint64_t param_1,char param_2)

{
  byte bVar1;
  int64_t lVar2;
  byte bVar3;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint64_t uVar9;
  int64_t *plVar10;
  int64_t *plVar11;
  uint7 uVar12;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R12;
  int64_t *plVar13;
  int64_t **pplVar14;
  bool bVar15;
  uint64_t local_80;
  int local_5c;
  int local_58;
  char local_54;
  int64_t *local_50;
  char local_48;
  uint8_t local_3a;
  char local_39;
  uint64_t local_38;
  byte bVar4;
  
  if (*arg1 == 0) {
    return;
  }
  cVar6 = *(char *)(this_ptr + 0xc);
  local_3a = cVar6 != '\0';
  local_39 = FUN_01a90590();
  local_58 = FUN_01a90480();
  local_5c = FUN_01a904a0();
  local_38 = 0;
  local_80 = FUN_01a93720();
  lVar2 = g_026e11a8;
  if (g_026e11a8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar10 == (int64_t *)0x0) {
LAB_00108efc:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00108efc;
  }
  plVar10 = *pplVar14;
  if (plVar10 == (int64_t *)0x0) {
    uVar12 = (uint7)((uint64_t)unaff_R12 >> 8);
    bVar1 = 1;
    bVar3 = 0;
    bVar4 = 0;
    local_38._0_1_ = '\0';
    local_38._1_7_ = 0;
    plVar10 = (int64_t *)0x0;
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      uVar9 = FUN_00d50b00();
    }
    else {
      *(void*)(pplVar14 + 1) = 0;
    }
    local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
    bVar3 = 1;
    bVar4 = 1;
    uVar12 = 0;
    bVar1 = 0;
    local_38._0_1_ = '\x01';
  }
  if ((local_48 != '\0') && (bVar4 = bVar3, local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_54 = param_2;
  if ((plVar10 != (int64_t *)0x0) && (cVar5 = FUN_00d45ad0(), (cVar6 != '\0') != (bool)cVar5)) {
    local_3a = FUN_00d45ad0();
    local_54 = '\x01';
  }
  lVar2 = g_026e11b0;
  if (g_026e11b0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_0010900a:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_0010900a;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if ((bool)(bVar1 & plVar11 != (int64_t *)0x0)) {
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_00109058;
      FUN_00d50b00();
      cVar6 = '\x01';
    }
    else {
      uVar12 = local_38._1_7_ & 0xffffff;
      cVar6 = (char)local_38;
    }
  }
  else if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if ((bool)(bVar4 & plVar10 != (int64_t *)0x0)) {
      FUN_00d50b20();
      plVar10 = plVar11;
      cVar6 = '\x01';
    }
    else {
      plVar10 = plVar11;
      cVar6 = '\x01';
    }
  }
  else {
    bVar15 = plVar10 != (int64_t *)0x0;
    plVar10 = plVar11;
    if ((bool)(bVar4 & bVar15)) {
      FUN_00d50b20();
    }
LAB_00109058:
    *(void*)(pplVar14 + 1) = 0;
    cVar6 = '\x01';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar10 != (int64_t *)0x0) {
    local_38._1_7_ = uVar12 & 0xffffff;
    local_38._0_1_ = cVar6;
    cVar5 = FUN_00d45ad0();
    if (local_39 != cVar5) {
      local_38._1_7_ = uVar12 & 0xffffff;
      local_38._0_1_ = cVar6;
      local_39 = FUN_00d45ad0();
      local_54 = '\x01';
    }
  }
  lVar2 = g_026e11b8;
  if (g_026e11b8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_00109178:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00109178;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if ((cVar6 == '\0') && (plVar11 != (int64_t *)0x0)) {
      plVar11 = plVar10;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_001091c6;
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      FUN_00d50b00();
    }
    else {
      local_38._1_7_ = uVar12 & 0xffffff;
      local_38._0_1_ = cVar6;
    }
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar11 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      if ((cVar6 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar11;
        goto joined_r0x00109708;
      }
    }
    else {
      if ((cVar6 != '\0') && (plVar10 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_001091c6:
      *(void*)(pplVar14 + 1) = 0;
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
    }
    local_38._0_1_ = '\x01';
    plVar10 = plVar11;
  }
joined_r0x00109708:
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar10 != (int64_t *)0x0) && (iVar8 = FUN_00d45870(), iVar8 != local_58)) {
    local_58 = FUN_00d45870();
    local_54 = '\x01';
  }
  lVar2 = g_026e11c0;
  if (g_026e11c0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  FUN_00053ac0();
  if (plVar11 == (int64_t *)0x0) {
LAB_001092bf:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_001092bf;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if (((char)local_38 == '\0') && (plVar11 != (int64_t *)0x0)) {
      plVar11 = plVar10;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_0010930e;
      FUN_00d50b00();
      goto joined_r0x0010934b;
    }
    uVar12 = local_38._1_7_ & 0xffffff;
    plVar11 = plVar10;
    cVar6 = (char)local_38;
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar11 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_38 != '\0') && (plVar10 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_0010930e:
      *(void*)(pplVar14 + 1) = 0;
    }
joined_r0x0010934b:
    cVar6 = '\x01';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar11 != (int64_t *)0x0) {
    local_38._1_7_ = uVar12 & 0xffffff;
    local_38._0_1_ = cVar6;
    iVar8 = FUN_00d45870();
    if (iVar8 != local_5c) {
      local_38._1_7_ = uVar12 & 0xffffff;
      local_38._0_1_ = cVar6;
      local_5c = FUN_00d45870();
      local_54 = '\x01';
    }
  }
  lVar2 = g_026e11c8;
  if (g_026e11c8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar10 == (int64_t *)0x0) {
LAB_00109410:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00109410;
  }
  plVar10 = *pplVar14;
  if (plVar10 == plVar11) {
    if ((cVar6 == '\0') && (plVar10 != (int64_t *)0x0)) {
      plVar10 = plVar11;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_0010945d;
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      FUN_00d50b00();
    }
    else {
      local_38._1_7_ = uVar12 & 0xffffff;
      local_38._0_1_ = cVar6;
    }
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar10 != (int64_t *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      if ((cVar6 != '\0') && (plVar11 != (int64_t *)0x0)) {
        FUN_00d50b20();
        plVar11 = plVar10;
        goto joined_r0x00109734;
      }
    }
    else {
      if ((cVar6 != '\0') && (plVar11 != (int64_t *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_0010945d:
      *(void*)(pplVar14 + 1) = 0;
      local_38._1_7_ = (uint7)((uint64_t)uVar9 >> 8);
    }
    local_38._0_1_ = '\x01';
    plVar11 = plVar10;
  }
joined_r0x00109734:
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_80 = local_80 >> 0x20;
  if ((plVar11 != (int64_t *)0x0) && (iVar8 = FUN_00d45870(), iVar8 != local_58)) {
    local_80 = FUN_00d45870();
    local_54 = '\x01';
  }
  lVar2 = g_026e11d0;
  if (g_026e11d0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  FUN_00053ac0();
  if (plVar10 == (int64_t *)0x0) {
LAB_00109559:
    pplVar14 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00109559;
  }
  plVar13 = *pplVar14;
  uVar12 = (uint7)((uint64_t)plVar10 >> 8);
  if (plVar13 == plVar11) {
    if (((char)local_38 != '\0') || (plVar13 == (int64_t *)0x0)) {
      uVar12 = local_38._1_7_ & 0xffffff;
      plVar13 = plVar11;
      cVar6 = (char)local_38;
      goto joined_r0x00109749;
    }
    plVar13 = plVar11;
    if (*(char *)(pplVar14 + 1) != '\0') goto LAB_001095a8;
    FUN_00d50b00();
  }
  else if (*(char *)(pplVar14 + 1) == '\0') {
    if (plVar13 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (((char)local_38 != '\0') && (plVar11 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_001095a8:
    *(void*)(pplVar14 + 1) = 0;
  }
  cVar6 = '\x01';
joined_r0x00109749:
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar13 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x60) != 0)) {
    FUN_00d50b00();
    plVar10 = *(int64_t **)(this_ptr + 0x60);
    local_38._0_1_ = cVar6;
    if (plVar10 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar10 + 0x3c8))();
    cVar7 = FUN_00d45ad0();
    FUN_00d50b20();
    FUN_00d50b20();
    cVar6 = (char)local_38;
    uVar12 = (uint7)((uint64_t)plVar10 >> 8);
    if (cVar5 != cVar7) {
      plVar10 = *(int64_t **)(this_ptr + 0x60);
      if (plVar10 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d45ad0();
      (**(code **)(*plVar10 + 0x3d0))();
      FUN_00d50b20();
    }
  }
  if (local_54 != '\0') {
    local_38._1_7_ = uVar12 & 0xffffff;
    local_38._0_1_ = cVar6;
    FUN_00109ad0(local_5c,local_39,local_58,local_80);
  }
  if ((cVar6 != '\0') && (plVar13 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0063d970
// ============================================================
// Function: FUN_0063d970
// Address: 0063d970
// Size: 2610 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

uint64_t FUN_0063d970(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t **pplVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  uint64_t local_1f0;
  int64_t *local_1e8;
  char local_1e0;
  int64_t local_1d8;
  char local_1d0;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t *local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint64_t local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 != 0) {
    local_80 = '\0';
    local_88 = 0;
    FUN_00da5ad0();
    local_70 = local_90 != '\0';
    local_78 = local_98;
    if ((bool)local_70) {
      local_90 = '\0';
    }
    local_68 = FUN_00da7170();
    FUN_00da7180();
    if (local_78 != 0) {
      do {
        local_90 = '\0';
        local_98 = 0;
        local_1f0 = 0x4014000000000000;
        FUN_01f27fe0();
        FUN_00281390();
        FUN_00e6dc80(&local_1f0,&local_98);
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
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = g_027258a0;
        if (plVar1 == (int64_t *)0x0) {
          plVar1 = *(int64_t **)(this_ptr + 0x180);
          local_188 = local_88;
          local_180 = '\0';
          if (g_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = g_02725918;
          local_178 = lVar3;
          local_170 = '\x01';
          if (g_02725918 != 0) {
            FUN_00d50b00();
          }
          local_168 = lVar4;
          local_160 = '\x01';
          local_158 = 0;
          local_150 = '\0';
          FUN_00d31230(&local_158,&local_168);
          local_b8 = local_60;
          local_b0 = 0;
          lVar3 = g_027258a0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              lVar3 = g_027258a0;
            }
          }
          else {
            local_58 = '\0';
          }
          local_b0 = '\x01';
          g_027258a0 = lVar3;
          if (lVar3 != 0) {
            local_b0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = g_02725920;
          local_140 = '\x01';
          local_148 = lVar3;
          if (g_02725920 != 0) {
            FUN_00d50b00();
          }
          local_138 = lVar4;
          local_130 = '\x01';
          local_128 = 0;
          local_120 = '\0';
          FUN_00d31230(&local_128,&local_138);
          local_a8 = local_50;
          local_a0 = 0;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_a0 = '\x01';
          FUN_004ae0b0(&local_a8,&local_b8);
          plVar2 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d50b00();
          local_118 = 0;
          local_110 = '\0';
          (**(code **)(*plVar1 + 0x448))(&local_118,&stack0xffffffffffffff08);
          if ((local_110 != '\0') && (local_118 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          uVar8 = FUN_01e697d0();
          local_1e8 = plVar1;
          local_1e0 = '\0';
          FUN_01e69930(uVar8,0);
          if ((local_1e0 != '\0') && (local_1e8 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_98 != 0) {
            FUN_01f27fe0();
            FUN_00281390();
            FUN_00dbbbc0();
            lVar3 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            FUN_00e658e0((int)local_1f0);
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar3 = g_02725930;
          if (g_02725930 != 0) {
            FUN_00d50b00();
          }
          local_1d8 = lVar3;
          local_1d0 = '\x01';
          local_1c8 = 0;
          local_1c0 = '\0';
          local_1b8 = 0;
          local_1b0 = '\0';
          FUN_01e4fcf0(&local_1b8,&local_1c8);
          plVar1 = local_40;
          if ((g_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
          pplVar7 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar7 = &local_40;
            if (cVar5 == '\0') {
              pplVar7 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar7;
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar7 + 1) = 0;
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1d0 != '\0') && (local_1d8 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00dbbbc0();
            plVar2 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            FUN_0054d030();
            if (plVar2 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar2 = *(int64_t **)(this_ptr + 0x180);
            local_1a0 = '\0';
            local_1a8 = plVar1;
            FUN_00d50b00();
            local_198 = 0;
            local_190 = '\0';
            (**(code **)(*plVar2 + 0x448))(&local_198,&stack0xfffffffffffffef8);
            if ((local_190 != '\0') && (local_198 != 0)) {
              FUN_00d50b20();
            }
            if (this_ptr != 0) {
              FUN_00d50b20();
            }
            if ((local_1a0 != '\0') && (local_1a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_00da7180();
        if (local_78 == 0) break;
        local_78 = 0;
        if (local_70 == '\0') {
          local_70 = '\0';
          break;
        }
        FUN_00d50b20();
        local_70 = '\0';
      } while (local_78 != 0);
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 0063c780
// ============================================================
// Function: FUN_0063c780
// Address: 0063c780
// Size: 2519 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

uint64_t FUN_0063c780(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  char cVar6;
  int iVar7;
  int64_t **pplVar8;
  int64_t this_ptr;
  uint32_t uVar9;
  int64_t local_1c8;
  char local_1c0;
  int64_t local_1b8;
  char local_1b0;
  int64_t local_1a8;
  char local_1a0;
  int64_t local_198;
  char local_190;
  int64_t local_188;
  char local_180;
  int64_t local_178;
  char local_170;
  int64_t *local_168;
  char local_160;
  int64_t local_158;
  char local_150;
  int64_t local_148;
  char local_140;
  int64_t local_138;
  char local_130;
  int64_t local_128;
  char local_120;
  int64_t *local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  if (param_2 != 0) {
    local_70 = '\0';
    local_78 = 0;
    FUN_00da5ad0();
    local_60 = local_90 != '\0';
    local_68 = local_98;
    if ((bool)local_60) {
      local_90 = '\0';
    }
    local_58 = FUN_00da7170();
    FUN_00da7180();
    if (local_68 != 0) {
      do {
        local_90 = '\0';
        local_98 = 0;
        FUN_01f27fe0();
        FUN_00281390();
        FUN_00e70a20(1,&local_98);
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
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        lVar4 = g_027258a0;
        if (plVar1 == (int64_t *)0x0) {
          plVar1 = *(int64_t **)(this_ptr + 0x180);
          if (g_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar3 = g_02725918;
          if (g_02725918 != 0) {
            FUN_00d50b00();
          }
          local_1c8 = lVar3;
          local_1c0 = '\x01';
          local_1b8 = 0;
          local_1b0 = '\0';
          FUN_00d31230(&local_1b8,&local_1c8);
          local_c8 = local_50;
          local_c0 = 0;
          lVar3 = g_027258a0;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
              lVar3 = g_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_c0 = '\x01';
          g_027258a0 = lVar3;
          if (lVar3 != 0) {
            local_c0 = '\x01';
            FUN_00d50b00();
          }
          lVar5 = g_02725920;
          local_1a0 = '\x01';
          local_1a8 = lVar3;
          if (g_02725920 != 0) {
            FUN_00d50b00();
          }
          local_198 = lVar5;
          local_190 = '\x01';
          local_188 = 0;
          local_180 = '\0';
          FUN_00d31230(&local_188,&local_198);
          local_b8 = local_88;
          local_b0 = 0;
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          local_b0 = '\x01';
          FUN_004ae0b0(&local_b8,&local_c8);
          plVar2 = local_40;
          if (local_38 == '\0') {
            if (local_40 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_00d50b00();
          local_178 = 0;
          local_170 = '\0';
          (**(code **)(*plVar1 + 0x448))(&local_178,&stack0xffffffffffffff08);
          if ((local_170 != '\0') && (local_178 != 0)) {
            FUN_00d50b20();
          }
          if (this_ptr != 0) {
            FUN_00d50b20();
          }
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_b0 != '\0') && (local_b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          if ((local_190 != '\0') && (local_198 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1b0 != '\0') && (local_1b8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1c0 != '\0') && (local_1c8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          uVar9 = FUN_01e697d0();
          local_168 = plVar1;
          local_160 = '\0';
          FUN_01e69930(uVar9,0);
          if ((local_160 != '\0') && (local_168 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_98 == 0) {
LAB_0063c99d:
            lVar4 = g_026d8ab8;
            if (g_026d8ab8 != 0) {
              FUN_00d50b00();
            }
            local_148 = lVar4;
            local_140 = '\x01';
            local_138 = 0;
            local_130 = '\0';
            local_128 = 0;
            local_120 = '\0';
            FUN_01e4fcf0(&local_128,&local_138);
            plVar1 = local_40;
            if ((g_0270e710 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
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
            pplVar8 = (int64_t **)&g_02802688;
            if (plVar1 != (int64_t *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar8 = &local_40;
              if (cVar6 == '\0') {
                pplVar8 = (int64_t **)&g_02802688;
              }
            }
            plVar1 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar1 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(void*)(pplVar8 + 1) = 0;
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            if ((local_130 != '\0') && (local_138 != 0)) {
              FUN_00d50b20();
            }
            if ((local_140 != '\0') && (local_148 != 0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (int64_t *)0x0) {
              FUN_00dbbbc0();
              local_a8 = local_40;
              local_a0 = 0;
              if (local_38 == '\0') {
                if (local_40 != (int64_t *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_a0 = '\x01';
              FUN_0054d030();
              if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              plVar2 = *(int64_t **)(this_ptr + 0x180);
              local_110 = '\0';
              local_118 = plVar1;
              FUN_00d50b00();
              local_108 = 0;
              local_100 = '\0';
              (**(code **)(*plVar2 + 0x448))(&local_108,&stack0xffffffffffffff18);
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
              if (this_ptr != 0) {
                FUN_00d50b20();
              }
              if ((local_110 != '\0') && (local_118 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
          }
          else {
            FUN_01f27fe0();
            FUN_00281390();
            local_158 = local_98;
            local_150 = '\0';
            cVar6 = FUN_00e6d4e0();
            if ((local_150 != '\0') && (local_158 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (cVar6 == '\0') goto LAB_0063c99d;
          }
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        FUN_00da7180();
        if (local_68 == 0) break;
        local_68 = 0;
        if (local_60 == '\0') {
          local_60 = '\0';
          break;
        }
        FUN_00d50b20();
        local_60 = '\0';
      } while (local_68 != 0);
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}



// ============================================================
// 0063b490
// ============================================================
// Function: FUN_0063b490
// Address: 0063b490
// Size: 2590 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

void FUN_0063b490(uint64_t param_1,uint param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  int64_t **pplVar7;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar8;
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
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t *local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  uint local_fc;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint64_t local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  local_70 = '\0';
  local_78 = 0;
  FUN_00da5ad0();
  local_60 = local_90 != '\0';
  local_68 = local_98;
  if ((bool)local_60) {
    local_90 = '\0';
  }
  local_58 = FUN_00da7170();
  FUN_00da7180();
  if (local_68 != 0) {
    local_fc = param_2 & 0xff;
    do {
      local_90 = '\0';
      local_98 = 0;
      FUN_01f27fe0();
      FUN_00281390();
      local_200 = *arg1;
      local_1f8 = '\0';
      FUN_00e6b740(&local_98,&local_200,local_fc);
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
      if ((local_1f8 != '\0') && (local_200 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = g_027258a0;
      if (plVar1 == (int64_t *)0x0) {
        plVar1 = *(int64_t **)(this_ptr + 0x180);
        local_1f0 = local_78;
        local_1e8 = '\0';
        if (g_027258a0 != 0) {
          FUN_00d50b00();
        }
        lVar4 = g_02725918;
        local_1e0 = lVar3;
        local_1d8 = '\x01';
        if (g_02725918 != 0) {
          FUN_00d50b00();
        }
        local_1d0 = lVar4;
        local_1c8 = '\x01';
        local_1c0 = 0;
        local_1b8 = '\0';
        FUN_00d31230(&local_1c0,&local_1d0);
        local_c8 = local_50;
        local_c0 = 0;
        lVar3 = g_027258a0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar3 = g_027258a0;
          }
        }
        else {
          local_48 = '\0';
        }
        local_c0 = '\x01';
        g_027258a0 = lVar3;
        if (lVar3 != 0) {
          local_c0 = '\x01';
          FUN_00d50b00();
        }
        lVar4 = g_02725920;
        local_1a8 = '\x01';
        local_1b0 = lVar3;
        if (g_02725920 != 0) {
          FUN_00d50b00();
        }
        local_1a0 = lVar4;
        local_198 = '\x01';
        local_190 = 0;
        local_188 = '\0';
        FUN_00d31230(&local_190,&local_1a0);
        local_b8 = local_88;
        local_b0 = 0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_b0 = '\x01';
        FUN_004ae0b0(&local_b8,&local_c8);
        plVar2 = local_40;
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d50b00();
        local_180 = 0;
        local_178 = '\0';
        (**(code **)(*plVar1 + 0x448))(&local_180,&stack0xffffffffffffff08);
        if ((local_178 != '\0') && (local_180 != 0)) {
          FUN_00d50b20();
        }
        if (this_ptr != 0) {
          FUN_00d50b20();
        }
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_188 != '\0') && (local_190 != 0)) {
          FUN_00d50b20();
        }
        if ((local_198 != '\0') && (local_1a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1a8 != '\0') && (local_1b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_1b8 != '\0') && (local_1c0 != 0)) {
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
      }
      else {
        uVar8 = FUN_01e697d0();
        local_170 = plVar1;
        local_168 = '\0';
        FUN_01e69930(uVar8,0);
        if ((local_168 != '\0') && (local_170 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_98 == 0) {
LAB_0063b6f8:
          lVar3 = g_026d8ab8;
          if (g_026d8ab8 != 0) {
            FUN_00d50b00();
          }
          local_150 = lVar3;
          local_148 = '\x01';
          local_140 = 0;
          local_138 = '\0';
          local_130 = 0;
          local_128 = '\0';
          FUN_01e4fcf0(&local_130,&local_140);
          plVar1 = local_40;
          if ((g_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
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
          pplVar7 = (int64_t **)&g_02802688;
          if (plVar1 != (int64_t *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar7 = &local_40;
            if (cVar5 == '\0') {
              pplVar7 = (int64_t **)&g_02802688;
            }
          }
          plVar1 = *pplVar7;
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar1 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(void*)(pplVar7 + 1) = 0;
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_128 != '\0') && (local_130 != 0)) {
            FUN_00d50b20();
          }
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (int64_t *)0x0) {
            FUN_00dbbbc0();
            local_a8 = local_40;
            local_a0 = 0;
            if (local_38 == '\0') {
              if (local_40 != (int64_t *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_a0 = '\x01';
            FUN_0054d030();
            if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            plVar2 = *(int64_t **)(this_ptr + 0x180);
            local_118 = '\0';
            local_120 = plVar1;
            FUN_00d50b00();
            local_110 = 0;
            local_108 = '\0';
            (**(code **)(*plVar2 + 0x448))(&local_110,&stack0xffffffffffffff18);
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if (this_ptr != 0) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        else {
          FUN_01f27fe0();
          FUN_00281390();
          local_160 = local_98;
          local_158 = '\0';
          cVar5 = FUN_00e6d4e0();
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar5 == '\0') goto LAB_0063b6f8;
        }
        FUN_00d50b20();
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      FUN_00da7180();
      if (local_68 == 0) break;
      local_68 = 0;
      if (local_60 == '\0') {
        local_60 = '\0';
        break;
      }
      FUN_00d50b20();
      local_60 = '\0';
    } while (local_68 != 0);
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00104fb0
// ============================================================
// Function: FUN_00104fb0
// Address: 00104fb0
// Size: 2272 bytes
// Class: MDURLOpenedController

void FUN_00104fb0(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t this_ptr;
  int64_t *plVar3;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t *local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  FUN_00d50100();
  FUN_01cb4790();
  (**(code **)(*local_38 + 0x370))();
  plVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = (int64_t)plVar2;
  local_80 = '\0';
  FUN_01a8be80(1,4,&local_88);
  plVar1 = *(int64_t **)(this_ptr + 0x18);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_00105044;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x18);
      *(int64_t **)(this_ptr + 0x18) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105044:
      *(int64_t **)(this_ptr + 0x18) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x18);
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a8bec0(0,4);
  plVar1 = *(int64_t **)(this_ptr + 0x20);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_00105152;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x20);
      *(int64_t **)(this_ptr + 0x20) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105152:
      *(int64_t **)(this_ptr + 0x20) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x20);
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01a8bec0(0,4);
  plVar1 = *(int64_t **)(this_ptr + 0x28);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_00105222;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x28);
      *(int64_t **)(this_ptr + 0x28) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105222:
      *(int64_t **)(this_ptr + 0x28) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x28);
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  local_78 = (int64_t)plVar2;
  local_70 = '\0';
  FUN_01a928d0(&local_78,1);
  plVar1 = *(int64_t **)(this_ptr + 0x40);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_00105309;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x40);
      *(int64_t **)(this_ptr + 0x40) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105309:
      *(int64_t **)(this_ptr + 0x40) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x40);
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  FUN_01a92900();
  plVar1 = *(int64_t **)(this_ptr + 0x48);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_001053f5;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x48);
      *(int64_t **)(this_ptr + 0x48) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_001053f5:
      *(int64_t **)(this_ptr + 0x48) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x48);
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  FUN_01a92900();
  plVar1 = *(int64_t **)(this_ptr + 0x58);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_001054cd;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x58);
      *(int64_t **)(this_ptr + 0x58) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_001054cd:
      *(int64_t **)(this_ptr + 0x58) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x58);
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  FUN_01a92900();
  plVar1 = *(int64_t **)(this_ptr + 0x50);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_001055a5;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x50);
      *(int64_t **)(this_ptr + 0x50) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_001055a5:
      *(int64_t **)(this_ptr + 0x50) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x50);
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = (int64_t)plVar2;
  local_60 = '\0';
  FUN_01a8be80(1,4,&local_68);
  plVar1 = *(int64_t **)(this_ptr + 0x30);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_00105684;
      }
      FUN_00d50b00();
      plVar1 = *(int64_t **)(this_ptr + 0x30);
      *(int64_t **)(this_ptr + 0x30) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105684:
      *(int64_t **)(this_ptr + 0x30) = plVar3;
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
      plVar3 = *(int64_t **)(this_ptr + 0x30);
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  local_58 = (int64_t)plVar2;
  local_50 = '\0';
  FUN_01a928d0(&local_58,1);
  plVar1 = *(int64_t **)(this_ptr + 0x38);
  plVar3 = plVar1;
  if (plVar1 == local_38) goto joined_r0x00105792;
  if (local_30 == '\0') {
    if (local_38 == (int64_t *)0x0) {
      plVar3 = (int64_t *)0x0;
      goto LAB_0010577f;
    }
    FUN_00d50b00();
    plVar1 = *(int64_t **)(this_ptr + 0x38);
    *(int64_t **)(this_ptr + 0x38) = local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_0010577f:
    *(int64_t **)(this_ptr + 0x38) = plVar3;
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
    plVar3 = *(int64_t **)(this_ptr + 0x38);
  }
joined_r0x00105792:
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 0xc) = 1;
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00637c40
// ============================================================
// Function: FUN_00637c40
// Address: 00637c40
// Size: 3194 bytes
// Class: MDURLOpenedController

void FUN_00637c40(void)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  int iVar6;
  int64_t lVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_178;
  char local_170;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  int64_t local_70;
  char local_68;
  char local_60 [8];
  int64_t *local_58;
  char local_50 [8];
  int64_t *local_48;
  uint64_t local_40;
  int local_38;
  
  if (this_ptr[0x2b] == *arg1) {
    return;
  }
  FUN_00643590();
  plVar3 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_00637c9b;
    }
  }
  else if (local_58 != (int64_t *)0x0) {
LAB_00637c9b:
    local_50[0] = '\0';
    local_58 = (int64_t *)0x0;
    local_48 = plVar3;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar7 = (int64_t)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)((int64_t)local_48 + 0xc) <= iVar6) break;
      local_58 = *(int64_t **)(local_48[2] + 8 + lVar7 * 8);
      FUN_0023af30(local_48[2],0);
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          local_40 = CONCAT44(local_40._4_4_,(int)local_40 - local_40._4_4_);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
    }
    FUN_0065ca40();
    FUN_00d50b20();
  }
  this_ptr[0x2b] = *arg1;
  FUN_006f3f00();
  plVar3 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x16] != 0) {
    iVar6 = FUN_00177f00();
    if (-1 < iVar6) {
      FUN_00178ae0();
      plVar2 = local_58;
      plVar1 = (int64_t *)*arg1;
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == plVar1) goto LAB_00637e9a;
    }
    FUN_00178f80();
    FUN_01f27fe0();
    cVar5 = (**(code **)(*local_58 + 0x450))();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_01e561b0();
      (**(code **)(*local_58 + 0x7f8))();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00637e9a:
  FUN_0063f230();
  plVar1 = local_58;
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_006f47d0();
    plVar1 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_0063f660();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_006f47d0();
  plVar1 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  FUN_00751820();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00637870();
  plVar1 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_58 + 0x450))();
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_0062a580();
    FUN_006e2720();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_006c5ee0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x2e] != 0) {
      FUN_006e2720();
      plVar2 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      FUN_006c5ee0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((*(int64_t *)(this_ptr[0x10] + 0x308) == 0) && (cVar5 = FUN_005348b0(), cVar5 == '\0')) {
      FUN_00643690();
    }
    FUN_00643150();
    if (*(int64_t *)(this_ptr[0x10] + 0x308) != 0) {
      FUN_00710820();
      FUN_00444010();
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_0062a580();
    FUN_006e2720();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_006c5ee0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr[0x2e] != 0) {
      FUN_006e2720();
      plVar2 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      FUN_006c5ee0();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (this_ptr[0x1a] != 0) {
      FUN_006c4ec0();
    }
    FUN_00643150();
  }
  (**(code **)(*this_ptr + 0x5e8))();
  plVar2 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_108 = plVar2;
  if (this_ptr[0x2c] != 0) {
    FUN_006e3b60();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_01bd0ba0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    *(void*)(this_ptr + 0x2f) = 1;
  }
  cVar5 = FUN_0063f180();
  if (cVar5 != '\0') {
    FUN_0063f660();
  }
  FUN_01e56750();
  if (local_58 == (int64_t *)0x0) {
    cVar5 = '\0';
  }
  else {
    FUN_01e56750();
    cVar5 = FUN_01e5d880();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_006fda30();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_00db26c0();
    if (plVar2 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar7 = g_026f6d00;
  if (g_026f6d00 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_118 = 0;
  local_110 = '\0';
  FUN_00d40470(&local_118,&stack0xffffffffffffff00,3,3);
  plVar2 = local_108;
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  plVar4 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  FUN_00631870();
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_006c4ec0();
  iVar6 = FUN_006e3cc0();
  if ((iVar6 == 2) || (cVar5 = FUN_006e2170(), cVar5 == '\0')) {
    (**(code **)(*this_ptr + 0x5d8))();
    FUN_006f4810();
    FUN_01e42250();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x5e0))();
    FUN_00756eb0();
    FUN_00324fe0();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_00643590();
    FUN_00d23310();
    plVar4 = local_58;
    pcVar8 = local_60;
    if (local_50[0] != '\0') {
      pcVar8 = local_50;
    }
    local_60[0] = local_50[0];
    *pcVar8 = '\0';
    if ((local_50[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0021a630();
    FUN_01e42250();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*this_ptr + 0x5e0))();
    FUN_00756eb0();
    FUN_00324fe0();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0054e050
// ============================================================
// Function: FUN_0054e050
// Address: 0054e050
// Size: 1966 bytes
// Class: MDURLOpenedController

void FUN_0054e050(uint64_t param_1)

{
  double dVar1;
  bool bVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  int64_t this_ptr;
  int64_t lVar12;
  double dVar13;
  double dVar14;
  double local_98;
  int64_t local_90;
  int64_t local_88;
  char local_80 [8];
  double local_78;
  uint64_t uStack_70;
  uint64_t local_68;
  uint64_t local_58;
  uint64_t local_48;
  uint64_t local_40;
  char local_38 [8];
  
  iVar5 = *(int *)(*(int64_t *)(this_ptr + 0x38) + 0xc);
  if (iVar5 == 1) {
    FUN_00d23310();
    local_38[0] = local_80[0];
    pcVar6 = local_80;
    if (local_80[0] == '\0') {
      pcVar6 = local_38;
    }
    *pcVar6 = '\0';
    if ((local_80[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_003629a0();
    if ((local_38[0] != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (cVar4 != '\0') {
      FUN_00d23310();
      pcVar6 = local_80;
      if (local_80[0] == '\0') {
        pcVar6 = local_38;
      }
      local_38[0] = local_80[0];
      *pcVar6 = '\0';
      if ((local_80[0] != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] == '\0') && (local_88 != 0)) {
        FUN_00d50b00();
      }
      FUN_0054df20();
      if (local_88 == 0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
  }
  if (1 < iVar5) {
    local_40 = 0;
    local_48 = 0;
    lVar12 = 0;
    bVar2 = false;
    do {
      local_90 = 1;
      local_68 = 0;
      local_58 = 0;
      do {
        local_48 = local_48 & 0xffffffff;
        uVar11 = *(uint64_t *)
                  (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + local_68 * 8);
        cVar4 = (char)local_48;
        if (local_40 == uVar11) {
          uVar3 = local_40;
          if ((cVar4 == '\0') && (local_40 != 0)) {
            local_48 = CONCAT71((int7)(uVar11 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          uVar8 = 0;
          param_1 = uVar11;
          if (uVar11 != 0) {
            uVar8 = FUN_00d50b00();
          }
          local_48 = CONCAT71((int7)((uint64_t)uVar8 >> 8),1);
          uVar3 = uVar11;
          if ((cVar4 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        local_40 = uVar3;
        pvVar7 = _pthread_getspecific((void*)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          param_1 = local_40;
        }
        cVar4 = FUN_003629a0();
        if (cVar4 != '\0') {
          FUN_0054df20();
          local_68 = local_68 + 1;
          local_58 = CONCAT71((int7)(param_1 >> 8),1);
          param_1 = local_58;
          iVar5 = iVar5 + -1;
          break;
        }
        pvVar7 = _pthread_getspecific((void*)param_1);
        uVar11 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          uVar11 = *(uint64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          param_1 = local_40;
        }
        local_78 = *(double *)(uVar11 + 0x38);
        dVar13 = *(double *)(uVar11 + 0x48);
        if ((*(double *)(uVar11 + 0x40) <= local_78) ||
           ((dVar13 < *(double *)(uVar11 + 0x50) && (dVar13 < local_78)))) {
          local_78 = dVar13;
        }
        uStack_70 = 0;
        pvVar7 = _pthread_getspecific((void*)param_1);
        if ((pvVar7 == (void *)0x0) || (lVar9 = FUN_00e8b990(), lVar9 == 0)) {
          dVar13 = *(double *)(local_40 + 0x40);
          uVar11 = local_40;
          if (dVar13 <= *(double *)(local_40 + 0x38)) goto LAB_0054e3b9;
LAB_0054e3d4:
          dVar14 = *(double *)(uVar11 + 0x50);
          if ((*(double *)(uVar11 + 0x48) <= dVar14 && dVar14 != *(double *)(uVar11 + 0x48)) &&
             (dVar13 < dVar14)) goto LAB_0054e3e6;
        }
        else {
          uVar11 = *(uint64_t *)(local_40 + 0x20 + (uint64_t)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          dVar13 = *(double *)(uVar11 + 0x40);
          if (*(double *)(uVar11 + 0x38) < dVar13) goto LAB_0054e3d4;
LAB_0054e3b9:
          dVar14 = *(double *)(uVar11 + 0x50);
LAB_0054e3e6:
          dVar13 = dVar14;
        }
        local_98 = dVar13 + g_02391030;
        if (dVar13 <= local_78) {
          local_98 = dVar13;
        }
        uVar11 = local_68 + 1;
        local_68 = uVar11;
        if ((int64_t)uVar11 < (int64_t)iVar5) {
          dVar13 = (double)(~-(uint64_t)(local_78 < dVar13) & (uint64_t)local_78 |
                           (uint64_t)(local_78 + g_023944d8) & -(uint64_t)(local_78 < dVar13));
          lVar9 = local_90;
          if (local_98 <= dVar13) {
            do {
              lVar10 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + lVar9 * 8);
              if (lVar12 == lVar10) {
                if ((!bVar2) && (lVar12 != 0)) {
                  bVar2 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar10 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar2) && (lVar12 != 0)) {
                  FUN_00d50b20();
                  bVar2 = true;
                  lVar12 = lVar10;
                }
                else {
                  bVar2 = true;
                  lVar12 = lVar10;
                }
              }
              pvVar7 = _pthread_getspecific((void*)uVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar7 = _pthread_getspecific((void*)uVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < iVar5);
          }
          else {
            do {
              lVar10 = *(int64_t *)
                        (*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + lVar9 * 8);
              if (lVar12 == lVar10) {
                if ((!bVar2) && (lVar12 != 0)) {
                  bVar2 = true;
                  FUN_00d50b00();
                }
              }
              else {
                if (lVar10 != 0) {
                  FUN_00d50b00();
                }
                if ((bVar2) && (lVar12 != 0)) {
                  FUN_00d50b20();
                  bVar2 = true;
                  lVar12 = lVar10;
                }
                else {
                  bVar2 = true;
                  lVar12 = lVar10;
                }
              }
              pvVar7 = _pthread_getspecific((void*)uVar11);
              if ((pvVar7 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
                local_78 = *(double *)(lVar12 + 0x38);
                dVar14 = *(double *)(lVar12 + 0x48);
                lVar10 = lVar12;
                if (local_78 < *(double *)(lVar12 + 0x40)) goto LAB_0054e554;
LAB_0054e56d:
                local_78 = dVar14;
              }
              else {
                lVar10 = *(int64_t *)
                          (lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                local_78 = *(double *)(lVar10 + 0x38);
                dVar14 = *(double *)(lVar10 + 0x48);
                if (*(double *)(lVar10 + 0x40) <= local_78) goto LAB_0054e56d;
LAB_0054e554:
                if ((dVar14 < *(double *)(lVar10 + 0x50)) && (dVar14 < local_78)) goto LAB_0054e56d;
              }
              pvVar7 = _pthread_getspecific((void*)uVar11);
              if ((pvVar7 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
                dVar14 = *(double *)(lVar12 + 0x40);
                lVar10 = lVar12;
                if (dVar14 <= *(double *)(lVar12 + 0x38)) goto LAB_0054e5b5;
LAB_0054e5d3:
                dVar1 = *(double *)(lVar10 + 0x50);
                if ((*(double *)(lVar10 + 0x48) <= dVar1 && dVar1 != *(double *)(lVar10 + 0x48)) &&
                   (dVar14 < dVar1)) goto LAB_0054e5e5;
              }
              else {
                lVar10 = *(int64_t *)
                          (lVar12 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                dVar14 = *(double *)(lVar10 + 0x40);
                if (*(double *)(lVar10 + 0x38) < dVar14) goto LAB_0054e5d3;
LAB_0054e5b5:
                dVar1 = *(double *)(lVar10 + 0x50);
LAB_0054e5e5:
                dVar14 = dVar1;
              }
              if ((local_78 < dVar14) &&
                 (((local_78 <= dVar13 && (dVar13 < dVar14)) ||
                  ((local_78 < local_98 && (dVar13 <= dVar14)))))) {
                pvVar7 = _pthread_getspecific((void*)uVar11);
                if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
                  uVar11 = local_40;
                }
                FUN_00362540();
                FUN_0054df20();
                iVar5 = iVar5 + -1;
                local_58 = CONCAT71((int7)(uVar11 >> 8),1);
                param_1 = local_58;
                goto LAB_0054e810;
              }
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < iVar5);
          }
        }
        local_90 = local_90 + 1;
        param_1 = local_48;
      } while ((int64_t)local_68 < (int64_t)(iVar5 + -1));
LAB_0054e810:
    } while (((local_58 & 1) != 0) && (1 < iVar5));
    if ((bVar2) && (lVar12 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 0054f740
// ============================================================
// Function: FUN_0054f740
// Address: 0054f740
// Size: 1417 bytes
// Class: MDURLOpenedController

void FUN_0054f740(void)

{
  int64_t lVar1;
  void* pVar2;
  int iVar3;
  int64_t *plVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar10;
  double dVar11;
  double dVar12;
  int64_t local_c0;
  char local_b8;
  int64_t local_88;
  int64_t local_80;
  int64_t local_78;
  void* local_70;
  uint32_t uStack_6c;
  uint32_t local_68;
  double local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_0054fec0();
  if ((char)local_80 == '\0') {
    if (((local_88 != 0) && (FUN_00d50b00(), (char)local_80 != '\0')) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_80._0_1_ = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  while (*(int *)(local_88 + 0xc) != 0) {
    FUN_00d23340();
    local_58 = CONCAT71(local_58._1_7_,(char)local_80);
    plVar4 = &local_80;
    if ((char)local_80 == '\0') {
      plVar4 = &local_58;
    }
    *(void*)plVar4 = 0;
    if (((char)local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_58 == '\0') && (local_88 != 0)) {
      FUN_00d50b00();
    }
    FUN_0054df20();
    if (local_88 != 0) {
      FUN_00d50b20();
    }
    FUN_00d23740();
  }
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_80._0_1_ = 0;
    local_68 = 0;
    local_70 = 0;
    uStack_6c = 0;
    local_78 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      do {
        pVar2 = local_70;
        pVar9 = local_70;
        pvVar5 = _pthread_getspecific(local_70);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = (double)FUN_0125a280();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_01259520();
        local_50 = '\0';
        local_58 = 0;
        local_48 = local_88;
        local_40 = 0xffffffff;
        local_38 = 0;
        if (dVar10 <= local_60) {
          local_40._4_4_ = 0;
          while( true ) {
            if (local_40._4_4_ != 0) {
              if (local_40._4_4_ < 1) {
                iVar3 = -local_40._4_4_;
              }
              else {
                iVar3 = (int)local_40 - local_40._4_4_;
                local_40 = CONCAT44(local_40._4_4_,iVar3);
                FUN_00d23690();
                local_38 = local_38 + local_40._4_4_;
                iVar3 = 0;
              }
              local_40 = CONCAT44(iVar3,(int)local_40);
            }
            lVar6 = (int64_t)(int)local_40;
            iVar3 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar3);
            if (*(int *)(local_48 + 0xc) <= iVar3) break;
            lVar7 = *(int64_t *)(local_48 + 0x10);
            local_58 = *(int64_t *)(lVar7 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((void*)lVar7);
            pVar9 = (void*)lVar7;
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar5 = _pthread_getspecific(pVar9);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
          }
LAB_0054fba0:
          FUN_0032bfd0();
          FUN_00361f80(local_60,dVar10);
          if (local_b8 == '\0') {
            if (local_c0 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_b8 = '\0';
          }
          local_58 = local_c0;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if (local_c0 != 0) {
            FUN_00d50b20();
          }
          if ((local_b8 != '\0') && (local_c0 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          dVar11 = dVar10;
          iVar3 = 0;
          while( true ) {
            if (iVar3 != 0) {
              if (iVar3 < 1) {
                iVar3 = -iVar3;
              }
              else {
                local_40 = CONCAT44(local_40._4_4_,(int)local_40 - iVar3);
                FUN_00d23690(dVar11,iVar3);
                local_38 = local_38 + local_40._4_4_;
                iVar3 = 0;
              }
              local_40 = CONCAT44(iVar3,(int)local_40);
            }
            lVar6 = (int64_t)(int)local_40;
            iVar3 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar3);
            if (*(int *)(local_48 + 0xc) <= iVar3) goto LAB_0054fba0;
            lVar7 = *(int64_t *)(local_48 + 0x10);
            lVar6 = *(int64_t *)(lVar7 + 8 + lVar6 * 8);
            local_58 = lVar6;
            pvVar5 = _pthread_getspecific((void*)lVar7);
            lVar8 = local_58;
            pVar9 = (void*)lVar7;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar6 = lVar8, lVar7 != 0)) {
              lVar6 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            lVar7 = local_58;
            dVar12 = *(double *)(lVar6 + 0x38);
            pvVar5 = _pthread_getspecific(pVar9);
            lVar6 = local_58;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar6, lVar8 != 0)) {
              lVar7 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar12 = dVar12 + g_023944d8;
            dVar11 = *(double *)(lVar7 + 0x40) + g_02391030;
            if ((dVar12 < dVar11) &&
               (((dVar12 <= local_60 && (local_60 < dVar11)) ||
                ((dVar12 < dVar10 && (local_60 <= dVar11)))))) break;
            iVar3 = local_40._4_4_;
          }
          pvVar5 = _pthread_getspecific(pVar9);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_003623b0(local_60,dVar10);
          FUN_0032bfd0();
        }
        local_70 = pVar2 + 1;
      } while ((int)local_70 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  local_80._0_1_ = 0;
  uStack_6c = 0;
  local_68 = 0;
  for (iVar3 = 0; local_70 = iVar3, iVar3 < *(int *)(local_88 + 0xc); iVar3 = iVar3 + 1) {
    FUN_0054ddf0();
  }
  FUN_0032bfd0();
  FUN_0054e050();
  FUN_00d50b20();
  return;
}



// ============================================================
// 0054ffb0
// ============================================================
// Function: FUN_0054ffb0
// Address: 0054ffb0
// Size: 1631 bytes
// Class: MDURLOpenedController

void FUN_0054ffb0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  bool bVar7;
  int64_t lVar8;
  void *pvVar9;
  int64_t lVar10;
  void* pVar11;
  int64_t this_ptr;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int64_t local_a0;
  char local_98;
  int64_t local_70;
  char local_68;
  int local_58;
  int64_t local_40;
  char local_38;
  
  dVar12 = (double)FUN_01266200(param_1,param_2,param_3,param_4,param_2);
  dVar13 = (double)FUN_012664b0();
  do {
    lVar6 = local_70;
    lVar8 = *(int64_t *)(this_ptr + 0x38);
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    FUN_0054fec0();
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
    if (local_70 == 0) {
      return;
    }
    iVar3 = *(int *)(local_70 + 0xc);
    if (iVar3 == 0) {
      bVar7 = false;
    }
    else {
      local_68 = '\0';
      local_70 = 0;
      local_58 = -1;
      bVar7 = false;
      do {
        do {
          lVar8 = (int64_t)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_58) goto LAB_005505c0;
          lVar10 = *(int64_t *)(lVar6 + 0x10);
          local_70 = *(int64_t *)(lVar10 + 8 + lVar8 * 8);
          pvVar9 = _pthread_getspecific((void*)lVar10);
          pVar11 = (void*)lVar10;
          lVar8 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            lVar8 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
          dVar15 = *(double *)(lVar8 + 0x38);
          dVar1 = *(double *)(lVar8 + 0x48);
          if ((*(double *)(lVar8 + 0x40) <= dVar15) ||
             ((dVar1 < *(double *)(lVar8 + 0x50) && (dVar1 < dVar15)))) {
            dVar15 = dVar1;
          }
          pvVar9 = _pthread_getspecific(pVar11);
          lVar8 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            lVar8 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
          }
          dVar1 = *(double *)(lVar8 + 0x40);
          if (dVar1 <= *(double *)(lVar8 + 0x38)) {
            dVar14 = *(double *)(lVar8 + 0x50);
          }
          else {
            dVar2 = *(double *)(lVar8 + 0x50);
            dVar14 = dVar1;
            if ((*(double *)(lVar8 + 0x48) <= dVar2 && dVar2 != *(double *)(lVar8 + 0x48)) &&
               (dVar14 = dVar2, dVar2 <= dVar1)) {
              dVar14 = dVar1;
            }
          }
        } while (((dVar13 <= dVar12) || (dVar14 <= dVar15)) ||
                (((dVar12 < dVar15 || (dVar14 <= dVar12)) &&
                 ((dVar13 <= dVar15 || (dVar14 < dVar12))))));
        pvVar9 = _pthread_getspecific(pVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar9 = _pthread_getspecific(pVar11);
        lVar8 = local_70;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar8 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
        dVar15 = *(double *)(lVar8 + 0x38);
        dVar1 = *(double *)(lVar8 + 0x48);
        if ((*(double *)(lVar8 + 0x40) <= dVar15) ||
           ((dVar1 < *(double *)(lVar8 + 0x50) && (dVar1 < dVar15)))) {
          dVar15 = dVar1;
        }
        pvVar9 = _pthread_getspecific(pVar11);
        lVar8 = local_70;
        if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
          lVar8 = *(int64_t *)(local_70 + 0x20 + (uint64_t)(*(uint *)(lVar10 + 0x154) & 1) * 8);
        }
        dVar1 = *(double *)(lVar8 + 0x40);
        if (dVar1 <= *(double *)(lVar8 + 0x38)) {
          dVar14 = *(double *)(lVar8 + 0x50);
        }
        else {
          dVar2 = *(double *)(lVar8 + 0x50);
          dVar14 = dVar1;
          if ((*(double *)(lVar8 + 0x48) <= dVar2 && dVar2 != *(double *)(lVar8 + 0x48)) &&
             (dVar14 = dVar2, dVar2 <= dVar1)) {
            dVar14 = dVar1;
          }
        }
        FUN_012e9900(dVar15,dVar14);
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        FUN_00243390();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if (local_a0 != 0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 == 0) {
LAB_00550553:
          if (local_40 != 0) goto LAB_00550558;
          bVar5 = true;
LAB_00550575:
          FUN_0054df20();
          bVar7 = true;
          bVar4 = false;
          if (!bVar5) goto LAB_005505aa;
        }
        else {
          if (*(int *)(local_40 + 0xc) != 0) {
            FUN_00550890();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00550553;
          }
LAB_00550558:
          bVar4 = true;
          bVar5 = false;
          if (*(int *)(local_40 + 0xc) == 0) goto LAB_00550575;
LAB_005505aa:
          FUN_00d50b20();
        }
      } while (bVar4);
LAB_005505c0:
      FUN_0032bfd0();
    }
    FUN_00d50b20();
    if (iVar3 == 0) {
      return;
    }
    if (!bVar7) {
      return;
    }
  } while( true );
}



// ============================================================
// 00639aa0
// ============================================================
// Function: FUN_00639aa0
// Address: 00639aa0
// Size: 1473 bytes
// Class: MDURLOpenedController
// String references:
//   "MDURLOpenedController"

void FUN_00639aa0(void)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int64_t **pplVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int64_t local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  cVar6 = FUN_00e34240();
  if (cVar6 != '\0') {
    return;
  }
  cVar6 = FUN_00e34250();
  if (cVar6 != '\0') {
    return;
  }
  FUN_00d6f370();
  uVar10 = FUN_00dd2890();
  local_f0 = g_02725a90;
  if (g_02725a90 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_e8 = '\x01';
  FUN_00d70ea0(uVar10,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d13b30();
  FUN_00dd2830();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) {
    return;
  }
  FUN_01f27fe0();
  FUN_00281390();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  FUN_00dd2830();
  plVar4 = local_40;
  if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01e697d0();
  local_e0 = plVar4;
  local_d8 = '\0';
  FUN_01e69930(uVar10,0);
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00dd2860();
  if (local_40 == (int64_t *)0x0) {
    bVar7 = 1;
  }
  else {
    FUN_00dd2860();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    bVar7 = FUN_00e6d4e0();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    bVar7 = bVar7 ^ 1;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = g_026d8ab8;
  if (bVar7 == 0) goto LAB_00639f8b;
  if (g_026d8ab8 != 0) {
    FUN_00d50b00();
  }
  local_d0 = lVar2;
  local_c8 = '\x01';
  local_c0 = 0;
  local_b8 = '\0';
  local_b0 = 0;
  local_a8 = '\0';
  pplVar9 = &local_40;
  FUN_01e4fcf0(&local_b0,&local_c0);
  plVar1 = local_40;
  if ((g_0270e710 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
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
  if (plVar1 == (int64_t *)0x0) {
LAB_00639ddd:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00639ddd;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00dbbbc0();
    plVar5 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar10 = FUN_0054d030();
    if (plVar5 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      uVar10 = FUN_00d50b20();
    }
    local_98 = '\0';
    local_90 = 0;
    local_88 = '\0';
    local_a0 = plVar1;
    FUN_00093bd0(uVar10,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b00();
    }
    FUN_00094580();
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_00639f8b:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0054ee90
// ============================================================
// Function: FUN_0054ee90
// Address: 0054ee90
// Size: 1349 bytes
// Class: MDURLOpenedController

void FUN_0054ee90(double param_1,double param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int unaff_ESI;
  int64_t this_ptr;
  int64_t lVar6;
  bool bVar7;
  int64_t lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  int64_t local_48;
  char local_40;
  
  if (param_2 <= param_1) {
    return;
  }
  lVar6 = *(int64_t *)(this_ptr + 0x38);
  uVar4 = (uint64_t)*(uint *)(lVar6 + 0xc);
  if ((int)*(uint *)(lVar6 + 0xc) < 1) {
    bVar7 = false;
    lVar5 = 0;
joined_r0x0054f275:
    if (unaff_ESI == 0) {
      FUN_00361e20(param_1,param_2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0054ddf0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (unaff_ESI == 1) {
      FUN_00361f80(param_1,param_2);
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_0054ddf0();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_0054f40e:
    if ((bVar7) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    return;
  }
  dVar10 = g_023944d8 + param_1;
  dVar11 = g_02391030 + param_2;
  if (unaff_ESI == 1) {
    lVar1 = uVar4 - 1;
    lVar8 = 0;
    lVar5 = 0;
    bVar9 = false;
    bVar7 = false;
    lVar6 = **(int64_t **)(lVar6 + 0x10);
    if (lVar6 == 0) goto LAB_0054f0b0;
    do {
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar7 = true;
      if ((bVar9) && (lVar5 != 0)) {
        FUN_00d50b20();
      }
      while( true ) {
        lVar5 = lVar6;
        pvVar3 = _pthread_getspecific((void*)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_00362260(dVar10,dVar11);
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific((void*)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_003623b0(param_1,param_2);
          FUN_0054e050();
          goto LAB_0054f40e;
        }
        if (lVar1 == lVar8) goto joined_r0x0054f275;
        lVar8 = lVar8 + 1;
        lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + lVar8 * 8);
        bVar9 = bVar7;
        if (lVar5 != lVar6) break;
LAB_0054f0b0:
        lVar6 = lVar5;
        if ((!bVar7) && (lVar5 != 0)) {
          bVar7 = true;
          FUN_00d50b00();
        }
      }
    } while( true );
  }
  if (unaff_ESI != 0) {
    lVar1 = uVar4 - 1;
    lVar8 = 0;
    lVar5 = 0;
    bVar7 = false;
    lVar6 = **(int64_t **)(lVar6 + 0x10);
    bVar9 = false;
    if (lVar6 != 0) goto LAB_0054f1af;
    do {
      lVar6 = lVar5;
      if ((!bVar7) && (lVar5 != 0)) {
        bVar7 = true;
        FUN_00d50b00();
      }
      while( true ) {
        lVar5 = lVar6;
        pvVar3 = _pthread_getspecific((void*)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00362260(dVar10,dVar11);
        if (lVar1 == lVar8) goto joined_r0x0054f275;
        lVar8 = lVar8 + 1;
        lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + lVar8 * 8);
        bVar9 = bVar7;
        if (lVar5 == lVar6) break;
LAB_0054f1af:
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        bVar7 = true;
        if ((bVar9) && (lVar5 != 0)) {
          FUN_00d50b20();
        }
      }
    } while( true );
  }
  lVar1 = uVar4 - 1;
  lVar8 = 0;
  lVar5 = 0;
  bVar9 = false;
  bVar7 = false;
  lVar6 = **(int64_t **)(lVar6 + 0x10);
  if (lVar6 == 0) goto LAB_0054ef60;
  do {
    if (lVar6 != 0) {
      FUN_00d50b00();
    }
    bVar7 = true;
    if ((bVar9) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
    while( true ) {
      lVar5 = lVar6;
      pvVar3 = _pthread_getspecific((void*)uVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_00362260(dVar10,dVar11);
      if (cVar2 != '\0') {
        pvVar3 = _pthread_getspecific((void*)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_003622e0(param_1,param_2);
        FUN_0054e050();
        goto LAB_0054f40e;
      }
      if (lVar1 == lVar8) goto joined_r0x0054f275;
      lVar8 = lVar8 + 1;
      lVar6 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + 0x10) + lVar8 * 8);
      bVar9 = bVar7;
      if (lVar5 != lVar6) break;
LAB_0054ef60:
      lVar6 = lVar5;
      if ((!bVar7) && (lVar5 != 0)) {
        bVar7 = true;
        FUN_00d50b00();
      }
    }
  } while( true );
}



// ============================================================
// 0063f660
// ============================================================
// Function: FUN_0063f660
// Address: 0063f660
// Size: 1319 bytes
// Class: MDURLOpenedController

void FUN_0063f660(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t *plVar7;
  bool bVar8;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  char local_a0;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [15];
  char local_31;
  
  (**(code **)(*this_ptr + 0x5d8))();
  FUN_006f3f00();
  plVar2 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5e8))();
  plVar3 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  plVar7 = (int64_t *)*arg1;
  local_31 = (char)arg1[1];
  if ((local_31 == '\0') || (plVar7 == (int64_t *)0x0)) {
    if (plVar7 == (int64_t *)0x0) {
      FUN_00756eb0();
      plVar4 = local_48;
      if (local_48 != (int64_t *)0x0) {
        if (local_40[0] != '\0') {
          local_31 = '\x01';
          plVar7 = local_48;
          goto LAB_0063f731;
        }
        FUN_00d50b00();
        local_31 = '\x01';
        plVar7 = plVar4;
      }
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_00d50b00();
    local_31 = '\x01';
  }
LAB_0063f731:
  FUN_00d23310();
  plVar4 = local_48;
  pcVar6 = local_40;
  if (local_40[0] == '\0') {
    pcVar6 = &local_58;
  }
  local_58 = local_40[0];
  *pcVar6 = '\0';
  if ((local_40[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 == '\0') && (plVar4 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00221970();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00226060();
  FUN_00642e80();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_0063ffb0();
  if (plVar5 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x5d8))();
  if (local_48 == (int64_t *)0x0) {
    bVar8 = false;
  }
  else if (this_ptr[0x16] == 0) {
    bVar8 = false;
  }
  else {
    FUN_01e54250();
    bVar8 = CONCAT71(uStack_57,local_58) != 0;
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    FUN_0021a630();
    plVar5 = local_48;
    (**(code **)(*this_ptr + 0x5d8))();
    FUN_006fc300();
    if (local_a0 == '\0') {
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a0 = '\0';
    }
    FUN_0078c610();
    lVar1 = CONCAT71(uStack_57,local_58);
    if (local_50 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    (**(code **)(*plVar5 + 0xde8))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0063f230
// ============================================================
// Function: FUN_0063f230
// Address: 0063f230
// Size: 816 bytes
// Class: MDURLOpenedController

int64_t * FUN_0063f230(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  char *pcVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *this_ptr;
  int64_t lVar7;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  int64_t local_60;
  char local_58 [8];
  int64_t local_50;
  uint64_t local_48;
  int local_40;
  int64_t local_38;
  
  FUN_01e561b0();
  lVar6 = local_60;
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
  }
  else {
    FUN_00643590();
    lVar6 = local_60;
    if ((local_58[0] == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    FUN_01e561b0();
    FUN_01d8b220();
    lVar1 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != 0) && (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_68 != '\0') && (CONCAT71(uStack_6f,local_70) != 0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      local_58[0] = '\0';
      local_60 = 0;
      local_38 = lVar6;
      local_50 = lVar6;
      local_48 = 0xffffffff;
      local_40 = 0;
      while( true ) {
        lVar6 = local_38;
        lVar3 = (int64_t)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        local_60 = *(int64_t *)(*(int64_t *)(local_50 + 0x10) + 8 + lVar3 * 8);
        if (local_60 == lVar1) {
          *(void*)(this_ptr + 1) = 0;
          if (local_58[0] != '\0') {
            *this_ptr = lVar1;
            goto LAB_0063f4f0;
          }
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *this_ptr = lVar1;
LAB_0063f529:
          *(void*)(this_ptr + 1) = 1;
LAB_0063f52e:
          FUN_0065ca40();
          if (lVar1 == 0) goto LAB_0063f544;
          goto LAB_0063f53c;
        }
        FUN_0021a630();
        lVar3 = CONCAT71(uStack_6f,local_70);
        if ((local_68 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = local_38;
        lVar7 = local_60;
        if (lVar3 == lVar1) {
          *(void*)(this_ptr + 1) = 0;
          if (local_58[0] == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
LAB_0063f526:
            *this_ptr = lVar7;
            goto LAB_0063f529;
          }
LAB_0063f4ed:
          *this_ptr = local_60;
LAB_0063f4f0:
          *(void*)(this_ptr + 1) = 1;
          local_58[0] = '\0';
          lVar6 = local_38;
          goto LAB_0063f52e;
        }
        FUN_0021cc50();
        lVar3 = CONCAT71(uStack_6f,local_70);
        if ((local_68 != '\0') && (lVar3 != 0)) {
          FUN_00d50b20();
        }
        lVar6 = local_38;
        lVar7 = local_60;
        if (lVar3 == lVar1) {
          *(void*)(this_ptr + 1) = 0;
          if (local_58[0] == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            goto LAB_0063f526;
          }
          goto LAB_0063f4ed;
        }
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar5 = -local_48._4_4_;
          }
          else {
            local_48 = CONCAT44(local_48._4_4_,(int)local_48 - local_48._4_4_);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar5 = 0;
          }
          local_48 = CONCAT44(iVar5,(int)local_48);
        }
      }
      FUN_0065ca40();
      lVar6 = local_38;
    }
    cVar2 = FUN_0063f180();
    if (cVar2 == '\0') {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
    }
    else {
      FUN_00d23310();
      lVar3 = local_60;
      pcVar4 = local_58;
      if (local_58[0] == '\0') {
        pcVar4 = &local_70;
      }
      local_70 = local_58[0];
      *pcVar4 = '\0';
      if ((local_58[0] != '\0') && (lVar3 != 0)) {
        FUN_00d50b20();
      }
      *(void*)(this_ptr + 1) = 0;
      if ((local_70 == '\0') && (lVar3 != 0)) {
        FUN_00d50b00();
      }
      *this_ptr = lVar3;
      *(void*)(this_ptr + 1) = 1;
    }
    if (lVar1 != 0) {
LAB_0063f53c:
      FUN_00d50b20();
    }
LAB_0063f544:
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  return this_ptr;
}



// ============================================================
// 00108380
// ============================================================
// Function: FUN_00108380
// Address: 00108380
// Size: 1382 bytes
// Class: MDURLOpenedController

void FUN_00108380(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t arg1;
  void*this_ptr;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d46300();
  lVar3 = local_38;
  lVar2 = g_026e11a8;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = g_026e11a8;
    }
  }
  else {
    local_30 = '\0';
  }
  g_026e11a8 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(param_1,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a90590();
  FUN_00d46300();
  lVar3 = local_38;
  lVar2 = g_026e11b0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = g_026e11b0;
    }
  }
  else {
    local_30 = '\0';
  }
  g_026e11b0 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(param_1,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a90480();
  FUN_00d46530();
  lVar3 = local_38;
  lVar2 = g_026e11b8;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = g_026e11b8;
    }
  }
  else {
    local_30 = '\0';
  }
  g_026e11b8 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(param_1,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a904a0();
  FUN_00d46530();
  lVar3 = local_38;
  lVar2 = g_026e11c0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = g_026e11c0;
    }
  }
  else {
    local_30 = '\0';
  }
  g_026e11c0 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(param_1,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a93720();
  FUN_00d46530();
  lVar3 = local_38;
  lVar2 = g_026e11c8;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = g_026e11c8;
    }
  }
  else {
    local_30 = '\0';
  }
  g_026e11c8 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar2;
  FUN_00ca0840(param_1,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(arg1 + 0x60) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = *(int64_t **)(arg1 + 0x60);
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3c8))();
    FUN_00d46300();
    lVar3 = local_38;
    lVar2 = g_026e11d0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        lVar2 = g_026e11d0;
      }
    }
    else {
      local_30 = '\0';
    }
    g_026e11d0 = lVar2;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    local_40 = '\0';
    local_48 = lVar2;
    FUN_00ca0840(param_1,&local_48);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *this_ptr = plVar4;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 00550980
// ============================================================
// Function: FUN_00550980
// Address: 00550980
// Size: 1173 bytes
// Class: MDURLOpenedController

void* FUN_00550980(void)

{
  int64_t lVar1;
  void*puVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t local_40;
  char local_38;
  
  puVar2 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &g_02572358;
  *puVar2 = &g_02572358;
  (*g_02572370)();
  lVar1 = *(int64_t *)(arg1 + 0x38);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        lVar7 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((void*)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(void*)(lVar5 + 0x40),0);
        FUN_00d470c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((void*)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(void*)(lVar5 + 0x38),0);
        FUN_00d470c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((void*)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(void*)(lVar5 + 0x48),0);
        FUN_00d470c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((void*)puVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(void*)(lVar7 + 0x50),0);
        FUN_00d470c0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00d21140();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        lVar8 = lVar8 + 1;
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_0032bfd0();
  }
  *this_ptr = puVar2;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}



// ============================================================
// 0063a4a0
// ============================================================
// Function: FUN_0063a4a0
// Address: 0063a4a0
// Size: 1113 bytes
// Class: MDURLOpenedController

void FUN_0063a4a0(void* param_1)

{
  int64_t *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  bool bVar6;
  int64_t local_b0;
  char local_a8;
  int64_t *local_78;
  int64_t *local_68;
  char local_60;
  int64_t *local_40;
  char local_38;
  
  if (this_ptr[0x2c] != 0) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_68 + 0x450))();
    if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_0063f230();
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 != (int64_t *)0x0) {
        (**(code **)(*this_ptr + 0x5e0))();
        cVar2 = FUN_0078cda0();
        if (cVar2 == '\0') {
          FUN_0063f230();
          iVar3 = FUN_00228b30();
          bVar6 = iVar3 != 2;
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar6 = false;
        }
        if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar6) {
          FUN_0063f230();
          FUN_0021a630();
          (**(code **)(*local_40 + 0xe28))();
          if (local_60 == '\0') {
            if (local_68 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00323290();
          if (local_68 == (int64_t *)0x0) {
            local_78 = (int64_t *)0x0;
            bVar6 = false;
          }
          else {
            local_78 = local_68;
            if (local_60 == '\0') {
              FUN_00d50b00();
            }
            bVar6 = true;
          }
          if (0 < *(int *)((int64_t)local_68 + 0xc)) {
            lVar5 = 0;
            do {
              plVar1 = *(int64_t **)(local_68[2] + lVar5 * 8);
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012eb770();
              if (local_38 == '\0') {
                if (local_40 == (int64_t *)0x0) goto LAB_0063a860;
                FUN_00d50b00();
LAB_0063a820:
                FUN_00d235a0();
                FUN_00d50b20();
              }
              else {
                if (local_40 != (int64_t *)0x0) goto LAB_0063a820;
LAB_0063a860:
                FUN_00d235a0();
                local_40 = plVar1;
              }
              local_38 = '\0';
              lVar5 = lVar5 + 1;
            } while ((int)lVar5 < *(int *)((int64_t)local_68 + 0xc));
          }
          FUN_000be170();
          FUN_00d50b20();
        }
        else {
          bVar6 = false;
          local_78 = (int64_t *)0x0;
        }
        FUN_01bd5340();
        if ((bVar6) && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*this_ptr + 0x5d8))();
      FUN_006fc300();
      if (local_60 == '\0') {
        if (local_68 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01bd5340();
      if (local_68 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}



// ============================================================
// 00109ad0
// ============================================================
// Function: FUN_00109ad0
// Address: 00109ad0
// Size: 1079 bytes
// Class: MDURLOpenedController

uint64_t FUN_00109ad0(int param_1,char param_2,int param_3,int param_4)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int extraout_var;
  int64_t lVar4;
  uint64_t uVar5;
  char unaff_SIL;
  int64_t this_ptr;
  char local_res8;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  char local_a0;
  int local_94;
  int64_t local_90;
  char local_88;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if (((((local_res8 == '\0') && (*(char *)(this_ptr + 0xc) == unaff_SIL)) &&
       (cVar2 = FUN_01a90590(), cVar2 == param_2)) &&
      ((iVar3 = FUN_01a90480(), iVar3 == param_3 && (iVar3 = FUN_01a904a0(), iVar3 == param_1)))) &&
     ((FUN_01a93720(), extraout_var == param_4 && (*(char *)(this_ptr + 0xd) == '\0')))) {
    uVar5 = 0;
  }
  else {
    *(void*)(this_ptr + 0xd) = 0;
    *(char *)(this_ptr + 0xc) = unaff_SIL;
    lVar1 = *(int64_t *)(this_ptr + 0x70);
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_00106380();
      }
      FUN_0010c010();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x78);
    local_94 = param_4;
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_00107b60();
      }
      FUN_0010c0b0();
    }
    FUN_01a90510();
    FUN_01a90510();
    FUN_01a90510();
    FUN_01a90510();
    FUN_01a90560();
    FUN_01a90560();
    FUN_01a90560();
    FUN_00e7bcc0();
    FUN_01a93730();
    if (*(int64_t *)(this_ptr + 0x10) != 0) {
      FUN_00d6f370();
      FUN_00108380();
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        lVar1 = *(int64_t *)(this_ptr + 0x10);
      }
      else {
        lVar1 = *(int64_t *)(this_ptr + 0x10);
      }
      if (lVar1 != 0) {
        local_88 = 0;
        FUN_00d50b00();
      }
      local_88 = '\x01';
      local_90 = lVar1;
      FUN_00d6f570();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if (local_c8 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d403d0();
    lVar1 = g_026d7d88;
    if (g_026d7d88 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_a8 = 0;
    local_a0 = '\0';
    FUN_00d40470(&local_a8,&stack0xffffffffffffff80,1,3);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = 1;
  }
  return uVar5;
}



// ============================================================
// 0054f510
// ============================================================
// Function: FUN_0054f510
// Address: 0054f510
// Size: 534 bytes
// Class: MDURLOpenedController

uint64_t FUN_0054f510(double param_1,int64_t *param_2,int64_t param_3)

{
  double dVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t in_RCX;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  double dVar11;
  double dVar12;
  int64_t local_38;
  
  if ((in_RCX < param_3) && (lVar2 = *(int64_t *)(this_ptr + 0x38), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0xc) < 1) {
      local_38 = 0;
      lVar8 = 0;
    }
    else {
      lVar9 = 0;
      local_38 = 0;
      lVar7 = in_RCX;
      lVar10 = 0;
      do {
        lVar8 = *(int64_t *)(*(int64_t *)(lVar2 + 0x10) + lVar9 * 8);
        pvVar3 = _pthread_getspecific((void*)lVar7);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          dVar11 = *(double *)(lVar8 + 0x38);
          dVar12 = *(double *)(lVar8 + 0x48);
          lVar4 = lVar8;
          if (dVar11 < *(double *)(lVar8 + 0x40)) goto LAB_0054f614;
LAB_0054f625:
          dVar11 = dVar12;
        }
        else {
          lVar4 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          dVar11 = *(double *)(lVar4 + 0x38);
          dVar12 = *(double *)(lVar4 + 0x48);
          if (*(double *)(lVar4 + 0x40) <= dVar11) goto LAB_0054f625;
LAB_0054f614:
          if ((dVar12 < *(double *)(lVar4 + 0x50)) && (dVar12 < dVar11)) goto LAB_0054f625;
        }
        lVar4 = FUN_00e7dae0(dVar11 * param_1);
        pvVar3 = _pthread_getspecific((void*)lVar7);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        dVar11 = *(double *)(lVar8 + 0x40);
        if (dVar11 <= *(double *)(lVar8 + 0x38)) {
          dVar12 = *(double *)(lVar8 + 0x50);
        }
        else {
          dVar1 = *(double *)(lVar8 + 0x50);
          dVar12 = dVar11;
          if ((*(double *)(lVar8 + 0x48) <= dVar1 && dVar1 != *(double *)(lVar8 + 0x48)) &&
             (dVar12 = dVar1, dVar1 <= dVar11)) {
            dVar12 = dVar11;
          }
        }
        lVar6 = FUN_00e7dae0(dVar12 * param_1);
        lVar8 = lVar10;
        lVar5 = local_38;
        if (((lVar4 < lVar6) &&
            (((in_RCX <= lVar4 && (lVar4 < param_3)) || ((in_RCX < lVar6 && (lVar4 <= param_3))))))
           && (lVar7 = local_38, lVar8 = lVar4, lVar5 = lVar6, lVar10 < local_38)) {
          if (lVar4 < lVar10) {
            lVar10 = lVar4;
          }
          lVar8 = lVar10;
          lVar5 = local_38;
          if (local_38 < lVar6) {
            lVar7 = lVar6;
            lVar5 = lVar6;
          }
        }
        local_38 = lVar5;
        lVar9 = lVar9 + 1;
        lVar10 = lVar8;
      } while ((int)lVar9 < *(int *)(lVar2 + 0xc));
    }
    FUN_0032bfd0();
    if (lVar8 < local_38) {
      *arg1 = lVar8;
      *param_2 = local_38;
      return 1;
    }
  }
  return 0;
}



// ============================================================
// 0054d030
// ============================================================
// Function: FUN_0054d030
// Address: 0054d030
// Size: 707 bytes
// Class: MDURLOpenedController

void FUN_0054d030(void)

{
  int64_t lVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t *arg1;
  int64_t this_ptr;
  void*puVar4;
  int64_t local_a8;
  int64_t local_a0;
  char local_98;
  void*local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  void*local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  lVar1 = *(int64_t *)(this_ptr + 0x70);
  lVar2 = *arg1;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *(int64_t *)(this_ptr + 0x70) = lVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x80) == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    return;
  }
  puVar4 = *(void**)(this_ptr + 0x70);
  if (puVar4 == (void*)0x0) {
    FUN_00d8ede0();
    puVar4 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (void*)0x0) {
        puVar4 = (void*)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      goto LAB_0054d0c0;
    }
  }
  else {
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\0';
LAB_0054d0c0:
  lVar1 = g_0270d080;
  if (g_0270d080 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  FUN_00083ea0(2,&local_a8);
  FUN_000b4da0();
  lVar2 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != 0) && (FUN_00d50b00(), local_78 != '\0')) && (local_80 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  local_60 = (void*)&g_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &g_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_68 = 0;
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_a0 = lVar2;
  local_98 = '\0';
  local_70 = lVar1;
  FUN_00e0e2a0();
  puVar3 = local_60;
  if (local_58 == '\0') {
    if (((local_60 != (void*)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = '\0';
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  local_90 = puVar3;
  local_88 = '\0';
  FUN_01e125e0();
  if ((local_88 != '\0') && (local_90 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0054ca70
// ============================================================
// Function: FUN_0054ca70
// Address: 0054ca70
// Size: 773 bytes
// Class: MDURLOpenedController

void FUN_0054ca70(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_30;
  char local_28;
  
  FUN_01e534b0();
  if (*(int64_t *)(this_ptr + 0x80) == 0) goto LAB_0054cb06;
  FUN_01e10550();
  lVar1 = *(int64_t *)(this_ptr + 0x78);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_0054cab4;
      }
      FUN_00d50b00();
      lVar1 = *(int64_t *)(this_ptr + 0x78);
      *(int64_t *)(this_ptr + 0x78) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0054cab4:
      *(int64_t *)(this_ptr + 0x78) = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_30;
    }
  }
  if ((local_28 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
LAB_0054cb06:
  if (*(int64_t **)(this_ptr + 0x88) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x640))();
    (**(code **)(*local_b0 + 0x370))();
    FUN_01d44a40();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_01e12b60();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = g_0270d078;
  if (g_0270d078 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d41430(&local_90,&local_a0);
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_80 = g_02787860;
  if (g_02787860 != 0) {
    FUN_00d50b00();
  }
  local_78 = '\x01';
  local_70 = 0;
  local_68 = '\0';
  FUN_00d41430(&local_70,&local_80);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00639540
// ============================================================
// Function: FUN_00639540
// Address: 00639540
// Size: 747 bytes
// Class: MDURLOpenedController

void FUN_00639540(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *this_ptr;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  int64_t local_28;
  char local_20;
  
  lVar1 = g_026f6f70;
  if (g_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = g_027258e8;
  if (g_027258e8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d31230(&local_a8,&local_b8);
  local_38 = local_58;
  local_30 = 0;
  local_98 = g_027258a0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      local_98 = g_027258a0;
    }
  }
  else {
    local_50 = '\0';
  }
  local_30 = '\x01';
  g_027258a0 = local_98;
  if (local_98 != 0) {
    local_30 = '\x01';
    FUN_00d50b00();
  }
  lVar2 = g_027258f0;
  local_90 = '\x01';
  if (g_027258f0 != 0) {
    FUN_00d50b00();
  }
  local_88 = lVar2;
  local_80 = '\x01';
  local_78 = 0;
  local_70 = '\0';
  FUN_00d31230(&local_78,&local_88);
  local_28 = local_48;
  local_20 = 0;
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_20 = '\x01';
  FUN_004ae0b0(&local_28,&local_38);
  lVar2 = local_68;
  *(void*)(this_ptr + 1) = 0;
  if (local_60 == '\0') {
    if (local_68 == 0) {
      *this_ptr = 0;
      *(void*)(this_ptr + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *this_ptr = lVar2;
      *(void*)(this_ptr + 1) = 1;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *this_ptr = local_68;
    *(void*)(this_ptr + 1) = 1;
    local_60 = '\0';
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0027e3a0
// ============================================================
// Function: FUN_0027e3a0
// Address: 0027e3a0
// Size: 843 bytes
// Class: MDURLOpenedController

uint64_t FUN_0027e3a0(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  int iVar2;
  uint64_t uVar3;
  void*arg1;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  FUN_01f51ef0();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*local_40 + 0x388))();
  FUN_01edd760();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_001220c0();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x368))();
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  iVar2 = (**(code **)(*local_40 + 0x390))();
  uVar3 = CONCAT71((int7)((uint64_t)local_40 >> 8),1);
  if ((iVar2 == 0) && ((**(code **)(*local_40 + 0x380))(), local_40 != (int64_t *)0x0)) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_01f15680(param_2);
    if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01f15be0(g_02390d2c);
    FUN_01f15740();
    FUN_01f15bb0();
    (**(code **)(*local_40 + 0x370))
              ((uint)param_1 ^ g_023945e0,(uint)((uint64_t)param_1 >> 0x20) ^ g_023945e0);
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (int64_t *)*arg1;
    FUN_01f15bb0();
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x610))((uint)param_1,param_2);
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01f15a80();
    FUN_01f15b80();
    FUN_00c91c80();
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    uVar3 = 0;
  }
  FUN_00d50b20();
  if ((char)uVar3 == '\0') {
    FUN_00d50b20();
  }
  return (uVar3 ^ 1) & 0xffffffff;
}



// ============================================================
// 0063af70
// ============================================================
// Function: FUN_0063af70
// Address: 0063af70
// Size: 685 bytes
// Class: MDURLOpenedController

void FUN_0063af70(void)

{
  int64_t *plVar1;
  char cVar2;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar3;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  char local_30;
  
  plVar1 = (int64_t *)*arg1;
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5e0))();
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_0062aee0();
  if (this_ptr[0x16] == 0) {
    FUN_0062bd30();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x740))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_0062b480();
  }
  local_38 = (int64_t *)*arg1;
  local_30 = '\0';
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (this_ptr[0x16] != 0) {
    uVar3 = (**(code **)(*(int64_t *)*arg1 + 0x5d0))();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != (int64_t *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    FUN_00177000(uVar3,&local_58);
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_01e561b0();
    plVar1 = local_38;
    FUN_006f3f00();
    local_40 = 0;
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_40 = '\x01';
    local_48 = local_78;
    (**(code **)(*plVar1 + 0x7f8))();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((int64_t *)this_ptr[0x28] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)this_ptr[0x28] + 0x588))();
  }
  (**(code **)(*this_ptr + 0x5c8))(0);
  return;
}



// ============================================================
// 0027db70
// ============================================================
// Function: FUN_0027db70
// Address: 0027db70
// Size: 751 bytes
// Class: MDURLOpenedController

void FUN_0027db70(void)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_40;
  char local_38;
  
  lVar1 = local_68;
  (**(code **)(*this_ptr + 0x728))();
  FUN_01da4890();
  FUN_01da6400();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01da4890();
  FUN_01caf660();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_01da4e80();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_01caf660();
  FUN_01cafe30();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_68 != 0) {
    local_60 = '\0';
    local_68 = 0;
    if (0 < *(int *)(lVar1 + 0xc)) {
      uVar3 = 0;
      do {
        local_68 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + (uint64_t)uVar3 * 8);
        do {
          FUN_01caf470();
          if (local_80 == '\0') {
            if (local_88 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_80 = '\0';
          }
          cVar2 = FUN_00d23f50();
          if (local_88 != 0) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
        } while (cVar2 != '\0');
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(lVar1 + 0xc));
    }
    FUN_002a0990();
    FUN_00d50b20();
  }
  FUN_01da4890();
  FUN_01da64d0();
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0054e980
// ============================================================
// Function: FUN_0054e980
// Address: 0054e980
// Size: 529 bytes
// Class: MDURLOpenedController

void FUN_0054e980(char *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  char *pcVar3;
  void *pvVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar5;
  int64_t local_68;
  char local_60 [8];
  int64_t local_58;
  uint64_t local_50;
  uint32_t local_48;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  while( true ) {
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar5 = *(int *)(lVar1 + 0xc);
    FUN_00d50b20();
    if (iVar5 == 0) break;
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_00d23340();
    local_40 = local_60[0];
    param_1 = &local_40;
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = param_1;
    }
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 == '\0') && (local_68 != 0)) {
      FUN_00d50b00();
    }
    FUN_0054df20();
    if (local_68 != 0) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  if (lVar1 != 0) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    local_58 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific((void*)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00d51d20();
        lVar2 = CONCAT71(uStack_3f,local_40);
        if (local_38 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_0054ddf0();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (CONCAT71(uStack_3f,local_40) != 0)) {
          FUN_00d50b20();
        }
        iVar5 = iVar5 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar5);
      } while (iVar5 < *(int *)(lVar1 + 0xc));
    }
    FUN_0032bfd0();
  }
  FUN_0054e050();
  return;
}



// ============================================================
// 00551070
// ============================================================
// Function: FUN_00551070
// Address: 00551070
// Size: 794 bytes
// Class: MDURLOpenedController

void FUN_00551070(void)

{
  int64_t lVar1;
  void *pvVar2;
  uint uVar3;
  void* pVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar6;
  void* pVar7;
  
  if (*arg1 != 0) {
    lVar1 = *(int64_t *)(this_ptr + 0x38);
    uVar3 = *(int *)(lVar1 + 0xc) << 2;
    uVar5 = (uint64_t)uVar3;
    if (uVar3 == *(uint *)(*arg1 + 0xc)) {
      pVar7 = 0;
      for (iVar6 = 0; pVar4 = (void*)uVar5, iVar6 < *(int *)(lVar1 + 0xc); iVar6 = iVar6 + 1
          ) {
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar4 = pVar7;
        FUN_00d45bc0();
        FUN_016cb790();
        FUN_00362140();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar4 = pVar7 + 1;
        FUN_00d45bc0();
        FUN_016cb790();
        FUN_003620e0();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar4 = pVar7 + 2;
        FUN_00d45bc0();
        FUN_016cb790();
        FUN_003621a0();
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = (uint64_t)(int)(pVar7 + 3);
        FUN_00d45bc0();
        FUN_016cb790();
        pVar7 = pVar7 + 4;
        FUN_00362200();
      }
      FUN_0032bfd0();
    }
  }
  return;
}



// ============================================================
// 0063ec20
// ============================================================
// Function: FUN_0063ec20
// Address: 0063ec20
// Size: 765 bytes
// Class: MDURLOpenedController

void FUN_0063ec20(void)

{
  int64_t lVar1;
  char cVar2;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_b0;
  char local_a8;
  int64_t local_98;
  char local_90;
  int64_t local_40;
  char local_38;
  
  cVar2 = FUN_0063f180();
  if ((cVar2 != '\0') && (FUN_0063f230(), local_40 != 0)) {
    FUN_0063f230();
    cVar2 = FUN_00212c70();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_0063f230();
      FUN_002218f0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00631670();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  FUN_0063f230();
  if (local_40 != 0) {
    FUN_0063f230();
    FUN_00221930();
    lVar1 = *arg1;
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (local_38 != '\0') {
      FUN_00d50b20();
    }
    if (local_98 == lVar1) {
      FUN_0063f230();
      FUN_00221970();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_0063f230();
      FUN_00226060();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  if (*(int64_t *)(this_ptr + 0xb0) != 0) {
    FUN_00177aa0();
  }
  FUN_00d23f50();
  (**(code **)(*(int64_t *)*arg1 + 0x5e0))();
  if (local_40 == *arg1) {
    FUN_0062a580();
    *(void*)(this_ptr + 0x158) = 0;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 00107b60
// ============================================================
// Function: FUN_00107b60
// Address: 00107b60
// Size: 648 bytes
// Class: MDURLOpenedController

void FUN_00107b60(void)

{
  int64_t lVar1;
  int64_t this_ptr;
  int64_t local_88;
  char local_80;
  
  lVar1 = *(int64_t *)(this_ptr + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bebdd0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(char *)(this_ptr + 0xc) == '\0') {
    lVar1 = *(int64_t *)(this_ptr + 0x48);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec070();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bebb30();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec310();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = *(int64_t *)(this_ptr + 0x20);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec070();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x28);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bebb30();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(int64_t *)(this_ptr + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec310();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01beab60();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  FUN_0010ae60();
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 0027ee00
// ============================================================
// Function: FUN_0027ee00
// Address: 0027ee00
// Size: 516 bytes
// Class: MDURLOpenedController

void FUN_0027ee00(void)

{
  char cVar1;
  int64_t this_ptr;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_30;
  char local_28;
  
  (**(code **)(**(int64_t **)(this_ptr + 0x130) + 0x398))();
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = g_026fb7d8;
    if (g_026fb7d8 != 0) {
      FUN_00d50b00();
    }
    local_88 = '\x01';
    local_80 = 0;
    local_78 = '\0';
    FUN_00d41430(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_70 = g_026fb7e0;
    if (g_026fb7e0 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_60 = 0;
    local_58 = '\0';
    FUN_00d41430(&local_60,&local_70);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_0027ea40();
  }
  return;
}



// ============================================================
// 0054c3c0
// ============================================================
// Function: FUN_0054c3c0
// Address: 0054c3c0
// Size: 679 bytes
// Class: MDURLOpenedController
// String references:
//   "handleClose"
//   "MDURLOpenedController"
//   "handleCopyURL"

void FUN_0054c3c0(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_0280a370 = "handleCopyURL";
      g_0280a378 = &g_02726280;
      g_0280a380 = 0;
      g_0280a388 = &g_0270d088;
      g_0280a390 = FUN_0054db50;
      g_0280a398 = 0x5c1;
      g_0280a3a0 = 0;
      ram_000000000280a3a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_0280a3b8 = "handleClose";
      g_0280a3c0 = &g_02726280;
      g_0280a3c8 = 0;
      g_0280a3d0 = &g_0270d088;
      g_0280a3d8 = FUN_0054db50;
      g_0280a3e0 = 0x5c9;
      g_0280a3e8 = 0;
      ram_000000000280a3f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

