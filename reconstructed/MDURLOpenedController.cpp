// Reconstructed implementation of MDURLOpenedController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDURLOpenedController.h"

// ============================================================
// @00631c50 — 12971 bytes
// str: ""MDURLOpenedController""
// str: ""MDNoLicenseController""
// str: ""MDLicenseChangedController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00631c50(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong **pplVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  longlong local_718;
  char local_710;
  longlong local_6f8;
  undefined1 local_6f0;
  longlong local_6e8;
  char local_6e0;
  longlong local_6d8;
  char local_6d0;
  longlong local_6c8;
  char local_6c0;
  longlong local_6b8;
  char local_6b0;
  longlong local_6a8;
  char local_6a0;
  longlong local_698;
  char local_690;
  longlong local_688;
  char local_680;
  longlong local_678;
  char local_670;
  longlong local_668;
  char local_660;
  longlong *local_658;
  char local_650;
  longlong local_648;
  char local_640;
  longlong *local_638;
  char local_630;
  longlong local_628;
  char local_620;
  longlong local_618;
  char local_610;
  longlong local_608;
  char local_600;
  longlong local_5f8;
  char local_5f0;
  longlong *local_5e8;
  char local_5e0;
  longlong local_5d8;
  char local_5d0;
  longlong *local_5c8;
  char local_5c0;
  longlong local_5b8;
  char local_5b0;
  longlong local_5a8;
  char local_5a0;
  longlong local_598;
  char local_590;
  longlong local_588;
  char local_580;
  longlong local_578;
  char local_570;
  longlong *local_568;
  char local_560;
  longlong *local_558;
  char local_550;
  longlong local_548;
  char local_540;
  longlong local_538;
  char local_530;
  longlong local_528;
  char local_520;
  longlong *local_518;
  char local_510;
  longlong local_508;
  char local_500;
  longlong local_4f8;
  char local_4f0;
  longlong local_4e8;
  char local_4e0;
  longlong local_4d8;
  char local_4d0;
  longlong local_4c8;
  char local_4c0;
  longlong local_4b8;
  char local_4b0;
  longlong local_4a8;
  char local_4a0;
  longlong *local_498;
  char local_490;
  longlong local_488;
  char local_480;
  longlong local_478;
  char local_470;
  longlong local_468;
  char local_460;
  longlong local_458;
  char local_450;
  longlong local_448;
  char local_440;
  longlong local_438;
  char local_430;
  longlong local_428;
  char local_420;
  longlong *local_418;
  char local_410;
  longlong local_408;
  char local_400;
  longlong local_3f8;
  char local_3f0;
  longlong local_3e8;
  char local_3e0;
  longlong local_3d8;
  char local_3d0;
  longlong *local_3c8;
  char local_3c0;
  longlong local_3b8;
  char local_3b0;
  longlong *local_3a8;
  char local_3a0;
  longlong local_398;
  char local_390;
  longlong *local_388;
  char local_380;
  longlong local_378;
  char local_370;
  longlong *local_368;
  char local_360;
  longlong local_358;
  char local_350;
  longlong local_348;
  char local_340;
  longlong *local_338;
  char local_330;
  longlong local_328;
  char local_320;
  longlong *local_318;
  char local_310;
  longlong *local_308;
  char local_300;
  longlong *local_2f8;
  char local_2f0;
  longlong *local_2e8;
  char local_2e0;
  longlong *local_2d8;
  char local_2d0;
  longlong local_2c8;
  char local_2c0;
  longlong local_2b8;
  char local_2b0;
  longlong *local_2a8;
  char local_2a0;
  longlong local_298;
  char local_290;
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
  longlong *local_1f8;
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
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong *local_58;
  char local_50;
  longlong *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar12 = local_40;
  local_6e8 = DAT_027257e0;
  if (DAT_027257e0 != 0) {
    FUN_00d50b00();
  }
  local_6e0 = '\x01';
  cVar8 = (**(code **)(*plVar12 + 0x50))();
  if ((local_6e0 != '\0') && (local_6e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02725878;
  if (cVar8 == '\0') {
    FUN_00d3ecc0();
    plVar12 = local_40;
    local_628 = DAT_02787850;
    if (DAT_02787850 != 0) {
      FUN_00d50b00();
    }
    local_620 = '\x01';
    cVar8 = (**(code **)(*plVar12 + 0x50))();
    if ((local_620 != '\0') && (local_628 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_02725890;
    if (cVar8 == '\0') {
      FUN_00d3ecc0();
      plVar12 = local_40;
      local_5b8 = DAT_027257f0;
      if (DAT_027257f0 != 0) {
        FUN_00d50b00();
      }
      local_5b0 = '\x01';
      cVar8 = (**(code **)(*plVar12 + 0x50))();
      if ((local_5b0 != '\0') && (local_5b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar8 == '\0') {
        FUN_00d3ecc0();
        plVar12 = local_40;
        local_5a8 = DAT_026e4838;
        if (DAT_026e4838 != 0) {
          FUN_00d50b00();
        }
        local_5a0 = '\x01';
        cVar8 = (**(code **)(*plVar12 + 0x50))();
        if ((local_5a0 != '\0') && (local_5a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar8 == '\0') {
          FUN_00d3ecc0();
          plVar12 = local_40;
          local_598 = DAT_027294f0;
          if (DAT_027294f0 != 0) {
            FUN_00d50b00();
          }
          local_590 = '\x01';
          cVar8 = (**(code **)(*plVar12 + 0x50))();
          if ((local_590 != '\0') && (local_598 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar8 != '\0') {
            FUN_00637650();
            if (local_38 == '\0') {
              if (local_40 == (longlong *)0x0) goto LAB_00632c24;
              FUN_00d50b00();
            }
            else if (local_40 == (longlong *)0x0) goto LAB_00632c24;
            FUN_006f3f00();
            FUN_00d3ecf0();
            plVar12 = local_40;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
          local_588 = DAT_02725810;
          if (DAT_02725810 != 0) {
            FUN_00d50b00();
          }
          local_580 = '\x01';
          cVar8 = (**(code **)(*plVar12 + 0x50))();
          if ((local_580 != '\0') && (local_588 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar8 == '\0') {
            FUN_00d3ecc0();
            plVar12 = local_40;
            local_2c8 = DAT_02725808;
            if (DAT_02725808 != 0) {
              FUN_00d50b00();
            }
            local_2c0 = '\x01';
            cVar8 = (**(code **)(*plVar12 + 0x50))();
            if ((local_2c0 != '\0') && (local_2c8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar8 == '\0') {
              FUN_00d3ecc0();
              plVar12 = local_40;
              local_2b8 = DAT_02725800;
              if (DAT_02725800 != 0) {
                FUN_00d50b00();
              }
              local_2b0 = '\x01';
              cVar8 = (**(code **)(*plVar12 + 0x50))();
              if ((local_2b0 != '\0') && (local_2b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar8 == '\0') {
                FUN_00d3ecc0();
                plVar12 = local_40;
                local_218 = DAT_0270b7f0;
                if (DAT_0270b7f0 != 0) {
                  FUN_00d50b00();
                }
                local_210 = '\x01';
                cVar8 = (**(code **)(*plVar12 + 0x50))();
                if ((local_210 != '\0') && (local_218 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
                  if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                     (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                }
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                lVar4 = DAT_027258f8;
                local_2a8 = plVar12;
                local_2a0 = '\0';
                if (DAT_027258f8 != 0) {
                  FUN_00d50b00();
                }
                local_298 = lVar4;
                local_290 = '\x01';
                FUN_00dd2700((int)DAT_02394dd8,&local_298);
                plVar1 = local_40;
                if (local_38 == '\0') {
                  if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                     (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  local_38 = '\0';
                }
                if ((local_290 != '\0') && (local_298 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_2a0 != '\0') && (local_2a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00e34260();
                uVar13 = FUN_00e34d60();
                plVar2 = local_40;
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  uVar13 = FUN_00d50b20();
                }
                if (plVar2 == (longlong *)0x0) {
                  lVar4 = unaff_RDI[0x30];
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
                  plVar2 = (longlong *)unaff_RDI[0x30];
                  FUN_00e34d60();
                  local_c0 = 0;
                  if (local_50 == '\0') {
                    if (local_58 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_50 = '\0';
                  }
                  lVar4 = DAT_027258a0;
                  local_c0 = '\x01';
                  local_c8 = local_58;
                  if (DAT_027258a0 != 0) {
                    FUN_00d50b00();
                  }
                  lVar6 = DAT_02725900;
                  local_288 = lVar4;
                  local_280 = '\x01';
                  if (DAT_02725900 != 0) {
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
                  lVar4 = DAT_027258a0;
                  local_b0 = '\x01';
                  local_b8 = local_70;
                  if (DAT_027258a0 != 0) {
                    FUN_00d50b00();
                  }
                  lVar6 = DAT_02725908;
                  local_258 = lVar4;
                  local_250 = '\x01';
                  if (DAT_02725908 != 0) {
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
                    if (local_40 != (longlong *)0x0) {
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
                  local_1c8 = unaff_RDI;
                  (**(code **)(*plVar2 + 0x448))(&local_228,&local_1c8);
                  if ((local_220 != '\0') && (local_228 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
                  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if (plVar12 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              (**(code **)(*unaff_RDI + 0x5e0))();
              if (local_38 == '\0') {
                if (local_40 == (longlong *)0x0) goto LAB_00632c24;
                FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else if (local_40 == (longlong *)0x0) goto LAB_00632c24;
              cVar8 = FUN_00793050();
              if (cVar8 != '\0') {
                FUN_00639540();
                local_f0 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_f0 = '\x01';
                local_f8 = local_40;
                uVar13 = (**(code **)(*unaff_RDI + 0x5e8))();
                local_e0 = 0;
                if (local_50 == '\0') {
                  if (local_58 != (longlong *)0x0) {
                    uVar13 = FUN_00d50b00();
                  }
                }
                else {
                  local_50 = '\0';
                }
                local_e0 = '\x01';
                local_e8 = local_58;
                FUN_00093bd0(uVar13,&local_e8);
                if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_1f0 = 0;
                FUN_00d50b00();
                local_1f0 = '\x01';
                local_1f8 = unaff_RDI;
                FUN_00094580();
                if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_00d50b20();
            }
            goto LAB_00632c24;
          }
          FUN_00d403d0();
          local_1e0 = 0;
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b00();
          }
          lVar4 = DAT_02725810;
          local_1e0 = '\x01';
          local_1e8 = unaff_RDI;
          if (DAT_02725810 != 0) {
            FUN_00d50b00();
          }
          local_578 = lVar4;
          local_570 = '\x01';
          local_1d0 = 0;
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_1d0 = '\x01';
          local_1d8 = unaff_RDI;
          FUN_00d41040(&local_1d8,&local_578);
          if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_570 != '\0') && (local_578 != 0)) {
            FUN_00d50b20();
          }
          if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (DAT_0280b8c9 == '\0') {
            DAT_0280b8c9 = '\x01';
            FUN_01f27fe0();
            FUN_00281390();
            plVar12 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01f27fe0();
            FUN_0027edc0();
            FUN_00e00960();
            plVar1 = local_40;
            if (local_38 == '\0') {
              if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                 (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if (plVar1[5] != 0) {
              FUN_01f27fe0();
              FUN_0027edc0();
              cVar8 = (**(code **)(*local_40 + 0x380))();
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (cVar8 == '\0') {
                FUN_00e198c0();
                plVar2 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    goto LAB_0063326e;
                  }
                }
                else if (local_40 != (longlong *)0x0) {
LAB_0063326e:
                  uVar13 = FUN_01e697d0();
                  local_568 = plVar2;
                  local_560 = '\0';
                  FUN_01e69930(uVar13,0);
                  if ((local_560 != '\0') && (local_568 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00e19900();
                  plVar3 = local_40;
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      goto LAB_00633692;
                    }
LAB_006336dd:
                    bVar5 = true;
LAB_006336e2:
                    lVar4 = DAT_026d8ab8;
                    local_98 = plVar2;
                    if (DAT_026d8ab8 != 0) {
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
                    if ((DAT_0270e710 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
                      _DAT_02726298 = FUN_00015ff0();
                      _DAT_02726280 = "MDURLOpenedController";
                      _DAT_02726288 = 0x90;
                      _DAT_02726290 = FUN_00098280;
                      _DAT_027262a0 = 0;
                      uRam00000000027262a8 = 0;
                      _DAT_027262b0 = 0;
                      uRam00000000027262b8 = 0;
                      _DAT_027262c0 = 0;
                      uRam00000000027262c8 = 0;
                      _DAT_027262d0 = 0;
                      uRam00000000027262d8 = 0;
                      _DAT_027262e0 = 0;
                      uRam00000000027262e8 = 0;
                      _DAT_027262f0 = 0;
                      uRam00000000027262f8 = 0;
                      _DAT_02726300 = 0;
                      uRam0000000002726308 = 0;
                      _DAT_02726310 = 0;
                      uRam0000000002726318 = 0;
                      _DAT_02726320 = 0;
                      uRam0000000002726328 = 0;
                      _DAT_02726330 = 0;
                      uRam0000000002726338 = 0;
                      _DAT_02726340 = 0;
                      ___cxa_guard_release();
                    }
                    if (plVar2 == (longlong *)0x0) {
LAB_00633786:
                      pplVar11 = (longlong **)&DAT_02802688;
                    }
                    else {
                      (**(code **)(*plVar2 + 0x360))();
                      cVar8 = FUN_00e85ea0();
                      if (cVar8 == '\0') goto LAB_00633786;
                    }
                    plVar2 = *pplVar11;
                    if (*(char *)(pplVar11 + 1) == '\0') {
                      if (plVar2 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      *(undefined1 *)(pplVar11 + 1) = 0;
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
                    if (plVar2 != (longlong *)0x0) {
                      FUN_00dbbbc0();
                      local_1b8 = local_40;
                      local_1b0 = 0;
                      if (local_38 == '\0') {
                        if (local_40 != (longlong *)0x0) {
                          FUN_00d50b00();
                        }
                      }
                      else {
                        local_38 = '\0';
                      }
                      local_1b0 = '\x01';
                      uVar13 = FUN_0054d030();
                      if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                        uVar13 = FUN_00d50b20();
                      }
                      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
                      if ((local_510 != '\0') && (local_518 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_00d50b20();
                    }
                    if (!bVar5) goto LAB_00633984;
                  }
                  else {
                    if (local_40 == (longlong *)0x0) goto LAB_006336dd;
LAB_00633692:
                    local_558 = plVar3;
                    local_550 = '\0';
                    cVar8 = FUN_00e6d4e0();
                    if ((local_550 != '\0') && (local_558 != (longlong *)0x0)) {
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
                    if (local_58 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_50 = '\0';
                  }
                  lVar4 = DAT_027258a0;
                  local_1a0 = '\x01';
                  local_1a8 = local_58;
                  if (DAT_027258a0 != 0) {
                    FUN_00d50b00();
                  }
                  lVar6 = DAT_026e10b0;
                  local_4f8 = lVar4;
                  local_4f0 = '\x01';
                  if (DAT_026e10b0 != 0) {
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
                  lVar4 = DAT_027258a0;
                  local_190 = '\x01';
                  local_198 = local_70;
                  if (DAT_027258a0 != 0) {
                    FUN_00d50b00();
                  }
                  lVar6 = DAT_027258b0;
                  local_4c8 = lVar4;
                  local_4c0 = '\x01';
                  if (DAT_027258b0 != 0) {
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
                    if (((local_40 != (longlong *)0x0) &&
                        (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
                       (local_40 != (longlong *)0x0)) {
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
                  if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  if (plVar2 != (longlong *)0x0) {
                    local_498 = plVar2;
                    local_490 = '\0';
                    local_488 = 0;
                    local_480 = '\0';
                    FUN_00093bd0(uVar13,&local_488);
                    if ((local_480 != '\0') && (local_488 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_490 != '\0') && (local_498 != (longlong *)0x0)) {
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
                      if (local_58 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_50 = '\0';
                    }
                    lVar4 = DAT_027258a0;
                    local_170 = '\x01';
                    local_178 = local_58;
                    if (DAT_027258a0 != 0) {
                      FUN_00d50b00();
                    }
                    lVar6 = DAT_027258b8;
                    local_478 = lVar4;
                    local_470 = '\x01';
                    if (DAT_027258b8 != 0) {
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
                    lVar4 = DAT_027258a0;
                    local_160 = '\x01';
                    local_168 = local_70;
                    if (DAT_027258a0 != 0) {
                      FUN_00d50b00();
                    }
                    lVar6 = DAT_027258c0;
                    local_448 = lVar4;
                    local_440 = '\x01';
                    if (DAT_027258c0 != 0) {
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
                      if (((local_40 != (longlong *)0x0) &&
                          (uVar13 = FUN_00d50b00(), local_38 != '\0')) &&
                         (local_40 != (longlong *)0x0)) {
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
                    if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                      uVar13 = FUN_00d50b20();
                    }
                    if (plVar2 != (longlong *)0x0) {
                      local_418 = plVar2;
                      local_410 = '\0';
                      local_408 = 0;
                      local_400 = '\0';
                      FUN_00093bd0(uVar13,&local_408);
                      if ((local_400 != '\0') && (local_408 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_410 != '\0') && (local_418 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      FUN_00d50b20();
                    }
                  }
                }
              }
            }
LAB_00633994:
            lVar4 = DAT_026e1088;
            if (*(int *)((longlong)plVar1 + 0xc) == 0) {
              if (DAT_026e1088 != 0) {
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
              if ((DAT_026e10d0 == '\0') &&
                 (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_05, iVar9 != 0)) {
                _DAT_0270e4a8 = FUN_00015ff0();
                _DAT_0270e490 = "MDNoLicenseController";
                _DAT_0270e498 = 0x80;
                _DAT_0270e4a0 = FUN_00104b10;
                _DAT_0270e4b0 = 0;
                uRam000000000270e4b8 = 0;
                _DAT_0270e4c0 = 0;
                uRam000000000270e4c8 = 0;
                _DAT_0270e4d0 = 0;
                uRam000000000270e4d8 = 0;
                _DAT_0270e4e0 = 0;
                uRam000000000270e4e8 = 0;
                _DAT_0270e4f0 = 0;
                uRam000000000270e4f8 = 0;
                _DAT_0270e500 = 0;
                uRam000000000270e508 = 0;
                _DAT_0270e510 = 0;
                uRam000000000270e518 = 0;
                _DAT_0270e520 = 0;
                uRam000000000270e528 = 0;
                _DAT_0270e530 = 0;
                uRam000000000270e538 = 0;
                _DAT_0270e540 = 0;
                uRam000000000270e548 = 0;
                _DAT_0270e550 = 0;
                uVar13 = ___cxa_guard_release();
              }
              if (plVar1 == (longlong *)0x0) {
LAB_00633a3d:
                pplVar11 = (longlong **)&DAT_02802688;
              }
              else {
                (**(code **)(*plVar1 + 0x360))();
                cVar8 = FUN_00e85ea0();
                uVar13 = extraout_XMM0_Da_02;
                if (cVar8 == '\0') goto LAB_00633a3d;
              }
              plVar1 = *pplVar11;
              if (*(char *)(pplVar11 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar11 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if (plVar1 != (longlong *)0x0) {
                local_3c0 = '\0';
                local_3b8 = 0;
                local_3b0 = '\0';
                local_3c8 = plVar1;
                FUN_00093bd0(uVar13,&local_3b8);
                if ((local_3b0 != '\0') && (local_3b8 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_3c0 != '\0') && (local_3c8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            uVar13 = FUN_01d932f0();
            plVar1 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                uVar13 = FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  uVar13 = FUN_00d50b20();
                }
                goto LAB_00633b83;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_00633b83:
              local_3a8 = plVar1;
              local_3a0 = '\0';
              local_398 = 0;
              local_390 = '\0';
              FUN_00093bd0(uVar13,&local_398);
              if ((local_390 != '\0') && (local_398 != 0)) {
                FUN_00d50b20();
              }
              if ((local_3a0 != '\0') && (local_3a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            cVar8 = FUN_0071c140();
            if (cVar8 == '\0') {
              uVar13 = FUN_0071bad0();
              plVar1 = local_40;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  uVar13 = FUN_00d50b00();
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    uVar13 = FUN_00d50b20();
                  }
                  goto LAB_00633c4c;
                }
              }
              else if (local_40 != (longlong *)0x0) {
LAB_00633c4c:
                local_388 = plVar1;
                local_380 = '\0';
                local_378 = 0;
                local_370 = '\0';
                FUN_00093bd0(uVar13,&local_378);
                if ((local_370 != '\0') && (local_378 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_380 != '\0') && (local_388 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            uVar13 = FUN_01d67820();
            plVar1 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                uVar13 = FUN_00d50b00();
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  uVar13 = FUN_00d50b20();
                }
                goto LAB_00633d08;
              }
            }
            else if (local_40 != (longlong *)0x0) {
LAB_00633d08:
              local_368 = plVar1;
              local_360 = '\0';
              local_358 = 0;
              local_350 = '\0';
              FUN_00093bd0(uVar13,&local_358);
              if ((local_350 != '\0') && (local_358 != 0)) {
                FUN_00d50b20();
              }
              if ((local_360 != '\0') && (local_368 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
            }
            uVar13 = FUN_00d6f370();
            local_348 = DAT_027258d0;
            if (DAT_027258d0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_340 = '\x01';
            cVar8 = FUN_00d70f90(uVar13,1);
            if ((local_340 != '\0') && (local_348 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            lVar4 = DAT_027258d8;
            if (cVar8 != '\0') {
              local_338 = plVar12;
              local_330 = '\0';
              if (DAT_027258d8 != 0) {
                FUN_00d50b00();
              }
              local_328 = lVar4;
              local_320 = '\x01';
              FUN_00dd2700((int)DAT_02395718,&local_328);
              plVar1 = local_40;
              if (local_38 == '\0') {
                if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_320 != '\0') && (local_328 != 0)) {
                FUN_00d50b20();
              }
              if ((local_330 != '\0') && (local_338 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_318 = plVar1;
              local_310 = '\0';
              (**(code **)(*(longlong *)unaff_RDI[0x30] + 0x458))();
              if ((local_310 != '\0') && (local_318 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_01f27fe0();
          cVar8 = (**(code **)(*local_40 + 0x450))();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar8 == '\0') {
            (**(code **)(*unaff_RDI + 0x5e0))();
            plVar12 = local_40;
            if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
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
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_140 = '\x01';
              uVar13 = (**(code **)(*unaff_RDI + 0x5e8))();
              local_130 = 0;
              if (local_50 == '\0') {
                if (local_58 != (longlong *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_130 = '\x01';
              local_138 = local_58;
              FUN_00093bd0(uVar13,&local_138);
              if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_300 != '\0') && (local_308 != (longlong *)0x0)) {
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
                if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
                   (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_38 = '\0';
              }
              if ((local_2f0 != '\0') && (local_2f8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_2e8 = plVar1;
              local_2e0 = '\0';
              uVar13 = (**(code **)(*unaff_RDI + 0x5e8))();
              local_128 = local_40;
              local_120 = 0;
              if (local_38 == '\0') {
                if (local_40 != (longlong *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_120 = '\x01';
              FUN_00093bd0(uVar13,&local_128);
              if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_2e0 != '\0') && (local_2e8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar1 != (longlong *)0x0) {
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
                if (local_40 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_38 = '\0';
              }
              local_110 = '\x01';
              uVar13 = (**(code **)(*unaff_RDI + 0x5e8))();
              local_100 = 0;
              if (local_50 == '\0') {
                if (local_58 != (longlong *)0x0) {
                  uVar13 = FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_100 = '\x01';
              local_108 = local_58;
              FUN_00093bd0(uVar13,&local_108);
              if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
          cVar8 = FUN_00093df0();
          if (cVar8 == '\0') {
            FUN_01f27fe0();
            puVar10 = (undefined8 *)FUN_00e83010();
            *puVar10 = FUN_00097ce0;
            puVar10[1] = FUN_00291410;
            puVar10[2] = 0;
            FUN_01e1ec30(0,puVar10);
            if ((local_710 != '\0') && (local_718 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            FUN_00d50b00();
            local_2d0 = '\x01';
            local_2d8 = unaff_RDI;
            FUN_00094580();
            if ((local_2d0 != '\0') && (local_2d8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          goto LAB_00632c24;
        }
        FUN_00637650();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
            goto LAB_00632a96;
          }
LAB_00632acf:
          bVar7 = true;
LAB_00632ad5:
          bVar5 = bVar7;
          *(undefined1 *)((longlong)unaff_RDI + 0x109) = 1;
        }
        else {
          if (local_40 == (longlong *)0x0) goto LAB_00632acf;
LAB_00632a96:
          FUN_006f4810();
          cVar8 = FUN_01e42170();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (*(char *)((longlong)unaff_RDI + 0x109) == '\0') {
LAB_00632a4a:
        *(undefined1 *)((longlong)unaff_RDI + 0x109) = 0;
        if (plVar12 == (longlong *)0x0) goto LAB_00632c24;
      }
      else {
        FUN_00637870();
        if (local_40 == (longlong *)0x0) {
          cVar8 = '\0';
        }
        else {
          cVar8 = FUN_00637950();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar8 == '\0') || (plVar12 == (longlong *)0x0)) goto LAB_00632a4a;
        FUN_00637870();
        iVar9 = FUN_006e3cc0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar9 == 2) {
          FUN_006f4810();
          FUN_01e42250();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        *(undefined1 *)((longlong)unaff_RDI + 0x109) = 0;
      }
      FUN_00637c40();
      FUN_00d50b20();
      goto LAB_00632c24;
    }
    if (DAT_02725890 != 0) {
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
    if ((DAT_02705908 == '\0') &&
       (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_03, iVar9 != 0)) {
      _DAT_0270e608 = FUN_00015ff0();
      _DAT_0270e5f0 = "MDLicenseChangedController";
      _DAT_0270e5f8 = 0x78;
      _DAT_0270e600 = FUN_004400d0;
      _DAT_0270e610 = 0;
      uRam000000000270e618 = 0;
      _DAT_0270e620 = 0;
      uRam000000000270e628 = 0;
      _DAT_0270e630 = 0;
      uRam000000000270e638 = 0;
      _DAT_0270e640 = 0;
      uRam000000000270e648 = 0;
      _DAT_0270e650 = 0;
      uRam000000000270e658 = 0;
      _DAT_0270e660 = 0;
      uRam000000000270e668 = 0;
      _DAT_0270e670 = 0;
      uRam000000000270e678 = 0;
      _DAT_0270e680 = 0;
      uRam000000000270e688 = 0;
      _DAT_0270e690 = 0;
      uRam000000000270e698 = 0;
      _DAT_0270e6a0 = 0;
      uRam000000000270e6a8 = 0;
      _DAT_0270e6b0 = 0;
      uVar13 = ___cxa_guard_release();
    }
    if (plVar12 == (longlong *)0x0) {
LAB_00631ebb:
      pplVar11 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar8 = FUN_00e85ea0();
      uVar13 = extraout_XMM0_Da;
      if (cVar8 == '\0') goto LAB_00631ebb;
    }
    plVar12 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar12 != (longlong *)0x0) {
        uVar13 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar11 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
    if (plVar12 != (longlong *)0x0) {
      local_5e0 = '\0';
      local_5d8 = 0;
      local_5d0 = '\0';
      local_5e8 = plVar12;
      FUN_00093bd0(uVar13,&local_5d8);
      if ((local_5d0 != '\0') && (local_5d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_5e0 != '\0') && (local_5e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b00();
    local_5c0 = '\x01';
    local_5c8 = unaff_RDI;
    FUN_00094580();
    if ((local_5c0 != '\0') && (local_5c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    goto LAB_00632c24;
  }
  if (DAT_02725878 != 0) {
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
  if ((DAT_02705908 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
    _DAT_0270e608 = FUN_00015ff0();
    _DAT_0270e5f0 = "MDLicenseChangedController";
    _DAT_0270e5f8 = 0x78;
    _DAT_0270e600 = FUN_004400d0;
    _DAT_0270e610 = 0;
    uRam000000000270e618 = 0;
    _DAT_0270e620 = 0;
    uRam000000000270e628 = 0;
    _DAT_0270e630 = 0;
    uRam000000000270e638 = 0;
    _DAT_0270e640 = 0;
    uRam000000000270e648 = 0;
    _DAT_0270e650 = 0;
    uRam000000000270e658 = 0;
    _DAT_0270e660 = 0;
    uRam000000000270e668 = 0;
    _DAT_0270e670 = 0;
    uRam000000000270e678 = 0;
    _DAT_0270e680 = 0;
    uRam000000000270e688 = 0;
    _DAT_0270e690 = 0;
    uRam000000000270e698 = 0;
    _DAT_0270e6a0 = 0;
    uRam000000000270e6a8 = 0;
    _DAT_0270e6b0 = 0;
    ___cxa_guard_release();
  }
  if (plVar12 == (longlong *)0x0) {
LAB_00631d83:
    pplVar11 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar8 = FUN_00e85ea0();
    if (cVar8 == '\0') goto LAB_00631d83;
  }
  plVar12 = *pplVar11;
  if (*(char *)(pplVar11 + 1) == '\0') {
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar11 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
  if (plVar12 != (longlong *)0x0) {
    uVar13 = FUN_00d3ed20();
    local_6a8 = DAT_02725880;
    if (DAT_02725880 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_6a0 = '\x01';
    pplVar11 = &local_40;
    FUN_000175c0(uVar13,&local_6a8);
    plVar1 = local_40;
    FUN_00053ac0();
    if (plVar1 == (longlong *)0x0) {
LAB_006320ad:
      pplVar11 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar8 = FUN_00e85ea0();
      if (cVar8 == '\0') goto LAB_006320ad;
    }
    plVar1 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar11 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_6a0 != '\0') && (local_6a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = FUN_00d3ed20();
    local_698 = DAT_02725888;
    if (DAT_02725888 != 0) {
      uVar13 = FUN_00d50b00();
    }
    local_690 = '\x01';
    pplVar11 = &local_40;
    FUN_000175c0(uVar13,&local_698);
    plVar2 = local_40;
    FUN_00053ac0();
    if (plVar2 == (longlong *)0x0) {
LAB_00632241:
      pplVar11 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar8 = FUN_00e85ea0();
      if (cVar8 == '\0') goto LAB_00632241;
    }
    plVar2 = *pplVar11;
    if (*(char *)(pplVar11 + 1) == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar11 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_690 != '\0') && (local_698 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_02725890;
    if ((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) {
      if (DAT_02725890 != 0) {
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
      if ((DAT_02705908 == '\0') &&
         (iVar9 = ___cxa_guard_acquire(), uVar13 = extraout_XMM0_Da_04, iVar9 != 0)) {
        _DAT_0270e608 = FUN_00015ff0();
        _DAT_0270e5f0 = "MDLicenseChangedController";
        _DAT_0270e5f8 = 0x78;
        _DAT_0270e600 = FUN_004400d0;
        _DAT_0270e610 = 0;
        uRam000000000270e618 = 0;
        _DAT_0270e620 = 0;
        uRam000000000270e628 = 0;
        _DAT_0270e630 = 0;
        uRam000000000270e638 = 0;
        _DAT_0270e640 = 0;
        uRam000000000270e648 = 0;
        _DAT_0270e650 = 0;
        uRam000000000270e658 = 0;
        _DAT_0270e660 = 0;
        uRam000000000270e668 = 0;
        _DAT_0270e670 = 0;
        uRam000000000270e678 = 0;
        _DAT_0270e680 = 0;
        uRam000000000270e688 = 0;
        _DAT_0270e690 = 0;
        uRam000000000270e698 = 0;
        _DAT_0270e6a0 = 0;
        uRam000000000270e6a8 = 0;
        _DAT_0270e6b0 = 0;
        uVar13 = ___cxa_guard_release();
      }
      if (plVar3 == (longlong *)0x0) {
LAB_0063237a:
        pplVar11 = (longlong **)&DAT_02802688;
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
          if (plVar3 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          uVar13 = FUN_00d50b20();
        }
        else {
          uVar13 = FUN_00d50b20();
          *(undefined1 *)(pplVar11 + 1) = 0;
        }
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
    if (plVar12 != (longlong *)0x0) {
      local_650 = '\0';
      local_648 = 0;
      local_640 = '\0';
      local_658 = plVar12;
      FUN_00093bd0(uVar13,&local_648);
      if ((local_640 != '\0') && (local_648 != 0)) {
        FUN_00d50b20();
      }
      if ((local_650 != '\0') && (local_658 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_630 = '\x01';
  local_638 = unaff_RDI;
  FUN_00094580();
  if ((local_630 != '\0') && (local_638 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00632c24:
  local_208 = *unaff_RSI;
  local_200 = '\0';
  FUN_00d530a0();
  if ((local_200 != '\0') && (local_208 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0063ffb0 — 7102 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006417c7) */
/* WARNING: Removing unreachable block (ram,0x0064026d) */
/* WARNING: Removing unreachable block (ram,0x00640279) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063ffb0(undefined8 param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  void *pvVar6;
  longlong **pplVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint7 uVar12;
  longlong *plVar11;
  int iVar13;
  int iVar14;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar15;
  longlong *plVar16;
  bool bVar17;
  undefined8 uVar18;
  double dVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong *local_160;
  char local_158;
  longlong *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  undefined8 local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  undefined4 local_9c;
  longlong *local_98;
  byte local_89;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  lVar5 = unaff_RDI[0x10];
  local_38 = param_2;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar5;
  if (*local_38 != 0) {
    FUN_004405c0();
    if (local_80 == (longlong *)0x0) {
      bVar17 = false;
    }
    else {
      (**(code **)(*unaff_RDI + 0x5e0))();
      bVar17 = local_48 != (longlong *)0x0;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (bVar17) {
      FUN_004405c0();
      plVar11 = local_80;
      if (((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
          (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_004b5af0();
      plVar16 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_004b8550();
      plVar10 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if (plVar16 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*unaff_RDI + 0x5e0))();
      FUN_0078b9c0();
      plVar16 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar16 != (longlong *)0x0) {
        local_50 = plVar10;
        local_78._0_1_ = '\0';
        local_80 = (longlong *)0x0;
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
          lVar5 = (longlong)(int)local_68;
          iVar13 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar13);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar13) break;
          local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
          uVar18 = FUN_004f9670();
          plVar16 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (uVar18 = FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if (plVar16 != (longlong *)0x0) {
            local_1a0 = local_80;
            local_198 = '\0';
            FUN_004b8020(uVar18,&local_1a0);
            plVar16 = local_48;
            if (local_40 == '\0') {
              if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
                 (local_48 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40 = '\0';
            }
            if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar16 != (longlong *)0x0) {
              local_40 = '\0';
              local_48 = plVar16;
              FUN_00d23f50();
              if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
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
      if (*(int *)((longlong)plVar10 + 0xc) == 0) {
LAB_00640497:
        FUN_00d50b20();
      }
      else {
        FUN_004b8a30();
        local_78._0_1_ = '\0';
        local_80 = (longlong *)0x0;
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
          lVar5 = (longlong)(int)local_68;
          iVar13 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar13);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar13) break;
          local_190 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
          local_188 = '\0';
          local_80 = local_190;
          FUN_004b8440();
          if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00274d30();
        FUN_004b8a40();
        if (plVar10 != (longlong *)0x0) goto LAB_00640497;
      }
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if ((local_c8 == 0) || (*local_38 == 0)) {
LAB_006409be:
    bVar17 = false;
    goto LAB_006409c1;
  }
  if (*(longlong *)(local_c8 + 0x308) == 0) {
    FUN_004405c0();
    plVar11 = local_80;
    if (((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_58 = plVar11;
    FUN_0051be00();
    plVar11 = local_80;
    if ((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
       ((FUN_00d50b00(), (char)local_78 != '\0' && (local_80 != (longlong *)0x0)))) {
      FUN_00d50b20();
    }
    local_88 = plVar11;
    FUN_00521db0();
    (**(code **)(*local_48 + 0x628))();
    local_50 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004b5af0();
    plVar11 = local_80;
    if ((char)local_78 == '\0') {
      if (local_80 == (longlong *)0x0) goto LAB_00640975;
      FUN_00d50b00();
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_0064073b:
      local_78._0_1_ = '\0';
      local_80 = (longlong *)0x0;
      local_98 = plVar11;
      local_70 = plVar11;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_68._4_4_ = 0;
      plVar16 = (longlong *)0x0;
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
        lVar5 = (longlong)(int)local_68;
        iVar14 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar14);
        iVar13 = *(int *)((longlong)local_70 + 0xc);
        if (iVar13 <= iVar14) break;
        lVar9 = local_70[2];
        local_80 = *(longlong **)(lVar9 + 8 + lVar5 * 8);
        iVar3 = FUN_003b7980();
        if (iVar3 != 0) break;
        pvVar6 = _pthread_getspecific((pthread_key_t)lVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_150 = local_80;
        local_148 = '\0';
        FUN_004a5340();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
             (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40 = '\0';
        }
        if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar10 = local_80;
        if ((plVar11 == (longlong *)0x0) || (local_88 != plVar11)) {
          if (plVar11 != (longlong *)0x0) goto LAB_00640778;
        }
        else {
          if (local_80 == plVar16) {
            if ((!bVar15) && (local_80 != (longlong *)0x0)) {
              plVar10 = plVar16;
              if ((char)local_78 != '\0') goto LAB_006408e6;
              bVar15 = true;
              FUN_00d50b00();
            }
          }
          else {
            if ((char)local_78 == '\0') {
              if (local_80 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if ((bVar15) && (plVar16 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar16 = plVar10;
                bVar15 = true;
                goto LAB_00640778;
              }
            }
            else {
              if ((bVar15) && (plVar16 != (longlong *)0x0)) {
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
      bVar17 = plVar16 == (longlong *)0x0;
      if ((!bVar17) && (iVar13 <= iVar14)) {
        FUN_003b7290();
        bVar17 = false;
      }
    }
    else {
      if (local_80 != (longlong *)0x0) goto LAB_0064073b;
LAB_00640975:
      bVar17 = true;
      bVar15 = false;
      plVar11 = local_50;
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (!(bool)(!bVar15 | bVar17)) {
      FUN_00d50b20();
    }
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    goto LAB_006409be;
  }
  uVar18 = FUN_0053a050();
  plVar11 = local_80;
  local_c0 = local_80;
  if ((char)local_78 == '\0') {
    if (local_80 == (longlong *)0x0) goto LAB_006406d6;
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_00640679:
    if (*(int *)((longlong)plVar11 + 0xc) != 0) {
      FUN_00440fc0();
      if (local_48 == (longlong *)0x0) {
        bVar1 = 1;
      }
      else {
        FUN_00440fc0();
        plVar11 = local_b0;
        if (local_a8 == '\0') {
          if (local_b0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        local_80 = plVar11;
        local_78._0_1_ = '\0';
        bVar1 = FUN_00d24090();
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar1 = bVar1 ^ 1;
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar1 != 0) {
        FUN_00d23310();
        plVar11 = local_80;
        pplVar7 = &local_78;
        if ((char)local_78 == '\0') {
          pplVar7 = &local_48;
        }
        local_48 = (longlong *)CONCAT71(local_48._1_7_,(char)local_78);
        *(undefined1 *)pplVar7 = 0;
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 == '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        FUN_00441090();
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    local_9c = 0;
  }
  else {
    if (local_80 != (longlong *)0x0) goto LAB_00640679;
LAB_006406d6:
    local_9c = (undefined4)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
  }
  FUN_00440fc0();
  plVar11 = local_48;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  FUN_0064e9c0();
  plVar16 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (plVar11 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = plVar16;
  if (*unaff_RSI != 0) {
    FUN_00227020();
    plVar10 = local_80;
    plVar11 = (longlong *)*local_38;
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 == plVar11) goto LAB_00640c53;
    bVar1 = FUN_016ae5f0();
    local_98 = DAT_0280a6b8;
    local_89 = DAT_0280a6b8 == (longlong *)0x0 | bVar1 ^ 1;
    if (local_89 == 0) {
      FUN_00d50b00();
    }
    else {
      local_98 = (longlong *)0x0;
    }
    FUN_00d6f370();
    local_180 = DAT_026de538;
    if (DAT_026de538 != 0) {
      FUN_00d50b00();
    }
    local_178 = '\x01';
    FUN_00d70f90();
    FUN_00440fa0();
    plVar11 = local_98;
    if ((local_178 != '\0') && (local_180 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_004405c0();
    uVar18 = FUN_004b5af0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (uVar18 = FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar18 = FUN_00d50b20();
    }
    iVar13 = 0;
    if (plVar16 != (longlong *)0x0) {
      local_78._0_1_ = '\0';
      local_80 = (longlong *)0x0;
      local_b8 = plVar16;
      local_70 = plVar16;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_50 = (longlong *)0x0;
      local_58 = (longlong *)0x0;
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
        lVar5 = (longlong)(int)local_68;
        iVar13 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar13);
        if (*(int *)((longlong)local_70 + 0xc) <= iVar13) {
          iVar13 = 0;
          goto LAB_00641086;
        }
        local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
        cVar2 = FUN_003b7710();
        plVar11 = DAT_026f6fd0;
        if (cVar2 != '\0') {
          if (DAT_026f6fd0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          dVar19 = (double)FUN_00e7d6f0();
          uVar8 = (ulonglong)(dVar19 * DAT_023907c0);
          dVar19 = dVar19 * DAT_023907c0 - _DAT_023907c8;
          FUN_0071a120();
          if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
             ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
            FUN_00d50b20();
          }
          bVar1 = (byte)(((longlong)dVar19 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
          local_b0 = plVar11;
          local_a8 = '\0';
          FUN_000175c0();
          plVar16 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar16 != (longlong *)0x0) {
            local_40 = '\0';
            local_48 = plVar16;
            bVar1 = FUN_00c70bc0();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((plVar16 != (longlong *)0x0 & bVar1) != 0) goto LAB_00641153;
        }
        FUN_003b7950();
        local_170 = local_88;
        local_168 = '\0';
        uVar4 = (**(code **)(*local_48 + 0x50))();
        uVar18 = extraout_XMM0_Qa;
        if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        plVar11 = local_80;
        if ((char)uVar4 == '\0') {
LAB_00640da0:
          plVar16 = (longlong *)((ulonglong)local_50 & 0xffffffff);
        }
        else {
          uVar12 = (uint7)(uint3)((uint)uVar4 >> 8);
          if (local_80 == local_58) {
            if (((char)local_50 != '\0') || (local_80 == (longlong *)0x0)) goto LAB_00640da0;
            plVar11 = local_58;
            if ((char)local_78 == '\0') {
              plVar16 = (longlong *)CONCAT71(uVar12,1);
              uVar18 = FUN_00d50b00();
              goto LAB_00640da6;
            }
LAB_00641034:
            local_78._0_1_ = '\0';
          }
          else {
            if ((char)local_78 != '\0') {
              if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                uVar18 = FUN_00d50b20();
              }
              goto LAB_00641034;
            }
            if (local_80 != (longlong *)0x0) {
              uVar18 = FUN_00d50b00();
            }
            plVar16 = (longlong *)CONCAT71(uVar12,1);
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
              local_58 = plVar11;
              goto LAB_00640da6;
            }
          }
          plVar16 = (longlong *)CONCAT71(uVar12,1);
          local_58 = plVar11;
        }
LAB_00640da6:
        plVar11 = local_98;
        iVar13 = local_68._4_4_;
        local_50 = plVar16;
      } while( true );
    }
    local_50 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    plVar16 = local_88;
    goto LAB_006414b1;
  }
LAB_00640c53:
  bVar17 = false;
  local_50 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
LAB_0064170a:
  if (plVar16 != (longlong *)0x0) {
    plVar11 = local_50;
    if (local_58 != (longlong *)0x0) {
      if ((char)local_50 == '\0') {
        plVar11 = (longlong *)0x0;
      }
      else {
        local_58 = (longlong *)0x0;
        FUN_00d50b20();
        plVar11 = (longlong *)0x0;
      }
    }
    FUN_004405c0();
    FUN_004b5af0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
      local_50 = plVar11;
    }
    else {
      local_78._0_1_ = '\0';
      local_80 = (longlong *)0x0;
      local_98 = plVar16;
      local_70 = plVar16;
      local_68 = 0xffffffff;
      local_60 = 0;
      local_58 = (longlong *)0x0;
      while( true ) {
        lVar5 = (longlong)(int)local_68;
        iVar13 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar13);
        if (*(int *)((longlong)local_70 + 0xc) <= iVar13) break;
        local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
        FUN_003b7950();
        plVar16 = local_48;
        local_d8 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
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
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar18 = FUN_00d50b20();
        }
        plVar16 = local_80;
        plVar10 = local_58;
        if (cVar2 != '\0') {
          cVar2 = (char)plVar11;
          if (local_80 == local_58) {
            if ((cVar2 == '\0') && (local_80 != (longlong *)0x0)) {
              plVar16 = local_58;
              if ((char)local_78 != '\0') goto LAB_006418e5;
              local_50 = (longlong *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
              FUN_00d50b00();
              plVar10 = local_58;
              plVar11 = local_50;
            }
          }
          else if ((char)local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              uVar18 = FUN_00d50b00();
            }
            local_50 = (longlong *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
            plVar10 = plVar16;
            plVar11 = local_50;
            if ((cVar2 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_58 = plVar16;
              plVar10 = local_58;
              plVar11 = local_50;
            }
          }
          else {
            if ((cVar2 != '\0') && (local_58 != (longlong *)0x0)) {
              uVar18 = FUN_00d50b20();
            }
LAB_006418e5:
            local_78._0_1_ = '\0';
            plVar10 = plVar16;
            plVar11 = (longlong *)CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
          }
        }
        local_50 = plVar11;
        local_58 = plVar10;
        cVar2 = FUN_003b7710();
        if ((cVar2 != '\0') || (cVar2 = FUN_003b7780(), plVar11 = local_50, cVar2 != '\0')) {
          if (local_58 == (longlong *)0x0) {
            local_58 = (longlong *)0x0;
            plVar11 = local_50;
          }
          else {
            if ((char)local_50 != '\0') {
              FUN_00d50b20();
            }
            local_50 = (longlong *)0x0;
            local_58 = (longlong *)0x0;
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
      if (local_58 == (longlong *)0x0) {
        local_58 = (longlong *)0x0;
      }
      else {
        FUN_003b72f0();
      }
    }
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_9c == '\0') {
    FUN_00d50b20();
  }
LAB_006409c1:
  if (*unaff_RSI != 0) {
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
  if (local_98 == (longlong *)0x0) {
    bVar17 = false;
LAB_00641b8e:
    iVar13 = 0;
  }
  else {
    FUN_003b7950();
    plVar11 = local_b0;
    if (local_a8 == '\0') {
      if (local_b0 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    FUN_004b5c00();
    plVar16 = local_48;
    if (local_48 == (longlong *)0x0) {
      bVar17 = false;
      plVar16 = (longlong *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar17 = true;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
      bVar17 = true;
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 == (longlong *)0x0) goto LAB_00641b8e;
    iVar13 = FUN_003b7780();
    bVar1 = 0;
  }
  plVar16 = local_50;
  if (local_58 != (longlong *)0x0) {
    if ((char)local_50 == '\0') {
      plVar16 = (longlong *)0x0;
    }
    else {
      local_58 = (longlong *)0x0;
      FUN_00d50b20();
      plVar16 = (longlong *)0x0;
    }
  }
  if ((bool)(!bVar17 | bVar1)) {
    local_58 = (longlong *)0x0;
    plVar11 = local_98;
    local_50 = plVar16;
  }
  else {
    FUN_00d50b20();
    local_58 = (longlong *)0x0;
    plVar11 = local_98;
    local_50 = plVar16;
  }
LAB_00641086:
  plVar16 = local_88;
  FUN_00274d30();
  uVar18 = FUN_00d50b20();
  if (local_58 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
  }
  else {
    local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar18 >> 8),1));
    if (plVar11 == (longlong *)0x0) {
      local_d0 = 0;
    }
    else {
      local_158 = '\0';
      local_160 = plVar16;
      uVar18 = FUN_004b5c00(extraout_XMM0_Qa_00,&local_160);
      plVar11 = local_80;
      if (local_80 == (longlong *)0x0) {
        local_d0 = 0;
        plVar11 = (longlong *)0x0;
      }
      else if ((char)local_78 == '\0') {
        uVar18 = FUN_00d50b00();
        local_d0 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
        local_d0 = CONCAT71((int7)((ulonglong)uVar18 >> 8),1);
      }
      if ((local_158 != '\0') && (local_160 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
        iVar13 = FUN_003b7780();
        local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
      }
    }
    plVar11 = DAT_026f6fd0;
    if (DAT_026f6fd0 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    dVar19 = (double)FUN_00e7d6f0();
    uVar8 = (ulonglong)(dVar19 * DAT_023907c0);
    dVar19 = dVar19 * DAT_023907c0 - _DAT_023907c8;
    FUN_0071a120();
    if (((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
        (FUN_00d50b00(), (char)local_78 != '\0')) && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = (byte)(((longlong)dVar19 & (longlong)uVar8 >> 0x3f | uVar8) / 3);
    local_48 = plVar11;
    local_40 = '\0';
    FUN_000175c0();
    plVar16 = local_80;
    if ((char)local_78 == '\0') {
      if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
         (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_78._0_1_ = '\0';
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar16 != (longlong *)0x0) {
      local_78._0_1_ = '\0';
      local_80 = plVar16;
      bVar1 = FUN_00c70bc0();
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((plVar16 != (longlong *)0x0 & bVar1) == 0) {
      FUN_004405c0();
      FUN_004b5af0();
      plVar11 = local_80;
      if ((char)local_78 == '\0') {
        if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
           (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_78._0_1_ = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_78._0_1_ = '\0';
        local_80 = (longlong *)0x0;
        local_70 = plVar11;
        local_68 = 0xffffffff;
        local_60 = 0;
        while( true ) {
          lVar5 = (longlong)(int)local_68;
          iVar14 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar14);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar14) break;
          local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
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
    if (((local_80 != (longlong *)0x0) && (FUN_00d50b00(), (char)local_78 != '\0')) &&
       (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78._0_1_ = '\0';
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
    local_78._0_1_ = '\0';
    local_80 = (longlong *)0x0;
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
      lVar5 = (longlong)(int)local_68;
      iVar14 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar14);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar14) break;
      local_80 = *(longlong **)(local_70[2] + 8 + lVar5 * 8);
      cVar2 = FUN_003b7710();
      if (cVar2 == '\0' && plVar11 != (longlong *)0x0) {
        uVar18 = FUN_003b7950();
        plVar16 = local_b0;
        local_e8 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != (longlong *)0x0) {
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
        if (local_48 == (longlong *)0x0) {
          bVar17 = true;
          plVar16 = (longlong *)0x0;
        }
        else {
          if (local_40 == '\0') {
            FUN_00d50b00();
            bVar17 = false;
            if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00641646;
            FUN_00d50b20();
          }
          else {
            local_40 = '\0';
          }
          bVar17 = false;
        }
LAB_00641646:
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar16 != (longlong *)0x0) {
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
  local_89 = local_89 | plVar11 == (longlong *)0x0;
  bVar17 = true;
  if (local_89 == 0) {
    FUN_00d50b20();
  }
  goto LAB_0064170a;
}




// ============================================================
// @0027f1f0 — 4760 bytes
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0027f3c2) */
/* WARNING: Removing unreachable block (ram,0x0027f3ce) */
/* WARNING: Removing unreachable block (ram,0x0027f286) */
/* WARNING: Removing unreachable block (ram,0x0027f28b) */
/* WARNING: Removing unreachable block (ram,0x0027f427) */
/* WARNING: Removing unreachable block (ram,0x0027f433) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0027f1f0(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 in_XMM1_Dc;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong local_2a0;
  char local_298;
  longlong *local_290;
  char local_288;
  longlong *local_280;
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
  longlong local_220;
  char local_218;
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
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  int local_13c;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  char local_b0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
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
    pcVar3 = DAT_02682d10;
    while (local_90 != 0) {
      FUN_01f27fe0();
      local_a8 = *(longlong *)(local_70 + 0x128);
      if (local_a8 != 0) {
        FUN_00d50b00();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      local_68 = '\0';
      local_70 = 0;
      FUN_00e65ef0(&local_13c,&local_70);
      lVar2 = DAT_027258a0;
      if (local_38 == '\0') {
        if (local_40 == (longlong *)0x0) goto LAB_0027f510;
        FUN_00d50b00();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0027f390:
        uVar11 = FUN_01e697d0();
        FUN_01e69930(uVar11,0);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        cVar5 = FUN_00e6d780();
        if ((cVar5 != '\0') || (cVar5 = FUN_00e6d4e0(), cVar5 == '\0')) {
          lVar2 = DAT_02725930;
          if (DAT_02725930 != 0) {
            FUN_00d50b00();
          }
          local_2c0 = 0;
          local_2b8 = '\0';
          local_2b0 = 0;
          local_2a8 = '\0';
          FUN_01e4fcf0(&local_2b0,&local_2c0);
          plVar10 = local_40;
          if ((DAT_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            _DAT_02726298 = FUN_00015ff0();
            _DAT_02726280 = "MDURLOpenedController";
            _DAT_02726288 = 0x90;
            _DAT_02726290 = FUN_00098280;
            _DAT_027262a0 = 0;
            uRam00000000027262a8 = 0;
            _DAT_027262b0 = 0;
            uRam00000000027262b8 = 0;
            _DAT_027262c0 = 0;
            uRam00000000027262c8 = 0;
            _DAT_027262d0 = 0;
            uRam00000000027262d8 = 0;
            _DAT_027262e0 = 0;
            uRam00000000027262e8 = 0;
            _DAT_027262f0 = 0;
            uRam00000000027262f8 = 0;
            _DAT_02726300 = 0;
            uRam0000000002726308 = 0;
            _DAT_02726310 = 0;
            uRam0000000002726318 = 0;
            _DAT_02726320 = 0;
            uRam0000000002726328 = 0;
            _DAT_02726330 = 0;
            uRam0000000002726338 = 0;
            _DAT_02726340 = 0;
            ___cxa_guard_release();
          }
          pplVar9 = (longlong **)&DAT_02802688;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar9 = &local_40;
            if (cVar5 == '\0') {
              pplVar9 = (longlong **)&DAT_02802688;
            }
          }
          local_78 = *pplVar9;
          if (*(char *)(pplVar9 + 1) == '\0') {
            if (local_78 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar9 + 1) = 0;
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
          if (local_78 != (longlong *)0x0) {
            FUN_00dbbbc0();
            local_138 = local_40;
            local_130 = 0;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_130 = '\x01';
            FUN_0054d030();
            if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e56750();
            plVar10 = local_40;
            if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
                (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            plVar8 = local_40;
            lVar2 = DAT_026e1090;
            if (DAT_026e1090 != 0) {
              FUN_00d50b00();
            }
            local_2a0 = lVar2;
            local_298 = '\x01';
            FUN_01cb6670();
            local_128 = local_50;
            local_120 = 0;
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_48 = '\0';
            }
            local_120 = '\x01';
            (**(code **)(*plVar8 + 0x638))();
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_298 != '\0') && (local_2a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            uVar12 = (**(code **)(*local_40 + 0x4d8))();
            uVar11 = param_2;
            uVar15 = in_XMM1_Dc;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar7 = (longlong *)FUN_00e8fc40();
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
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52770();
            plVar8 = (longlong *)FUN_00e8fc40();
            FUN_0006daf0();
            *(undefined4 *)(plVar8 + 0x27) = 0;
            plVar8[0x2e] = 0;
            *(undefined4 *)(plVar8 + 0x2f) = 0;
            plVar8[0x30] = 0;
            *(undefined1 *)(plVar8 + 0x31) = 0;
            plVar8[0x28] = 0;
            plVar8[0x29] = 0;
            *(undefined4 *)(plVar8 + 0x2a) = 0;
            plVar8[0x2b] = 0;
            plVar8[0x2c] = 0;
            *(undefined8 *)((longlong)plVar8 + 0x165) = 0;
            *(undefined8 *)((longlong)plVar8 + 0x18c) = 0;
            *(undefined8 *)((longlong)plVar8 + 0x194) = 0;
            *(undefined8 *)((longlong)plVar8 + 0x199) = 0;
            plVar8[0x35] = 0;
            plVar8[0x36] = 0;
            plVar8[0x37] = 0;
            plVar8[0x38] = 0;
            *plVar8 = (longlong)&DAT_02682cf8;
            plVar8[2] = (longlong)&DAT_026837c0;
            plVar8[0x39] = 0;
            plVar8[0x3a] = 0;
            *(undefined4 *)(plVar8 + 0x3b) = 0;
            plVar8[0x3c] = 0;
            plVar8[0x3d] = 0;
            *(undefined2 *)(plVar8 + 0x3e) = 0;
            (*pcVar3)();
            local_288 = '\0';
            local_290 = plVar7;
            FUN_01d56f30();
            if ((local_288 != '\0') && (local_290 != (longlong *)0x0)) {
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
            if ((local_278 != '\0') && (local_280 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01e5ca90();
            FUN_01e43460();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            local_260 = 0;
            local_258 = '\0';
            FUN_01f27fe0();
            local_108 = local_40;
            local_100 = 0;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
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
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_258 != '\0') && (local_260 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50130();
            FUN_00d50b20();
            FUN_00d50b20();
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      else {
        if (local_40 != (longlong *)0x0) goto LAB_0027f390;
LAB_0027f510:
        if (local_13c == 1) {
          local_240 = local_a0;
          local_238 = '\0';
          if (DAT_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = DAT_026e10b0;
          local_230 = lVar2;
          local_228 = '\x01';
          if (DAT_026e10b0 != 0) {
            FUN_00d50b00();
          }
          local_220 = lVar4;
          local_218 = '\x01';
          local_210 = 0;
          local_208 = '\0';
          FUN_00d31230(&local_210,&local_220);
          local_f8 = local_50;
          local_f0 = 0;
          lVar2 = DAT_027258a0;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
              lVar2 = DAT_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_f0 = '\x01';
          DAT_027258a0 = lVar2;
          if (lVar2 != 0) {
            local_f0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = DAT_026e10b8;
          local_1f8 = '\x01';
          local_200 = lVar2;
          if (DAT_026e10b8 != 0) {
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
          if (local_40 == (longlong *)0x0) {
            bVar1 = false;
            plVar10 = (longlong *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
          if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
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
          if (DAT_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = DAT_026e10c0;
          local_1c0 = lVar2;
          local_1b8 = '\x01';
          if (DAT_026e10c0 != 0) {
            FUN_00d50b00();
          }
          local_1b0 = lVar4;
          local_1a8 = '\x01';
          local_1a0 = 0;
          local_198 = '\0';
          FUN_00d31230(&local_1a0,&local_1b0);
          local_d8 = local_50;
          local_d0 = 0;
          lVar2 = DAT_027258a0;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
              lVar2 = DAT_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_d0 = '\x01';
          DAT_027258a0 = lVar2;
          if (lVar2 != 0) {
            local_d0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = DAT_026e10c8;
          local_188 = '\x01';
          local_190 = lVar2;
          if (DAT_026e10c8 != 0) {
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
          if (local_40 == (longlong *)0x0) {
            bVar1 = false;
            plVar10 = (longlong *)0x0;
          }
          else if (local_38 == '\0') {
            FUN_00d50b00();
            bVar1 = true;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
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
        if (plVar10 != (longlong *)0x0) {
          local_158 = '\0';
          local_160 = 0;
          FUN_01f27fe0();
          local_b8 = local_40;
          local_b0 = 0;
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
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
          if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
// @00103050 — 3569 bytes
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00103281) */
/* WARNING: Removing unreachable block (ram,0x0010328d) */
/* WARNING: Removing unreachable block (ram,0x00103132) */
/* WARNING: Removing unreachable block (ram,0x00103137) */
/* WARNING: Removing unreachable block (ram,0x001032de) */
/* WARNING: Removing unreachable block (ram,0x001032ea) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00103050(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  longlong local_280;
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
  longlong local_220;
  char local_218;
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
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  int local_12c;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined8 local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(unaff_RDI + 0x68);
    FUN_00097120();
    local_60 = DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      local_60 = DAT_02802688;
      if (cVar5 != '\0') {
        local_60 = *(longlong *)(unaff_RDI + 0x68);
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
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_48 = '\0';
          local_50 = 0;
          FUN_00e65ef0(&local_12c,&local_50);
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) goto LAB_001033c0;
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00103250:
            uVar8 = FUN_01e697d0();
            FUN_01e69930(uVar8,0);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            cVar5 = FUN_00e6d780();
            if ((cVar5 != '\0') || (cVar5 = FUN_00e6d4e0(), cVar5 == '\0')) {
              lVar2 = DAT_02725930;
              if (DAT_02725930 != 0) {
                FUN_00d50b00();
              }
              local_280 = 0;
              local_278 = '\0';
              local_270 = 0;
              local_268 = '\0';
              FUN_01e4fcf0(&local_270,&local_280);
              plVar1 = local_40;
              if ((DAT_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
                _DAT_02726298 = FUN_00015ff0();
                _DAT_02726280 = "MDURLOpenedController";
                _DAT_02726288 = 0x90;
                _DAT_02726290 = FUN_00098280;
                _DAT_027262a0 = 0;
                uRam00000000027262a8 = 0;
                _DAT_027262b0 = 0;
                uRam00000000027262b8 = 0;
                _DAT_027262c0 = 0;
                uRam00000000027262c8 = 0;
                _DAT_027262d0 = 0;
                uRam00000000027262d8 = 0;
                _DAT_027262e0 = 0;
                uRam00000000027262e8 = 0;
                _DAT_027262f0 = 0;
                uRam00000000027262f8 = 0;
                _DAT_02726300 = 0;
                uRam0000000002726308 = 0;
                _DAT_02726310 = 0;
                uRam0000000002726318 = 0;
                _DAT_02726320 = 0;
                uRam0000000002726328 = 0;
                _DAT_02726330 = 0;
                uRam0000000002726338 = 0;
                _DAT_02726340 = 0;
                ___cxa_guard_release();
              }
              pplVar7 = (longlong **)&DAT_02802688;
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x360))();
                cVar5 = FUN_00e85ea0();
                pplVar7 = &local_40;
                if (cVar5 == '\0') {
                  pplVar7 = (longlong **)&DAT_02802688;
                }
              }
              plVar1 = *pplVar7;
              if (*(char *)(pplVar7 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar7 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if (plVar1 != (longlong *)0x0) {
                FUN_00dbbbc0();
                local_118 = local_40;
                local_110 = 0;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                local_110 = '\x01';
                uVar8 = FUN_0054d030();
                if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
                  uVar8 = FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
                if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                FUN_00d50b20();
              }
            }
            FUN_00d50b20();
          }
          else {
            if (local_40 != (longlong *)0x0) goto LAB_00103250;
LAB_001033c0:
            local_120 = 0;
            uVar8 = FUN_00d50b00();
            local_120 = '\x01';
            local_240 = 0;
            local_238 = '\0';
            local_128 = unaff_RDI;
            FUN_00093ce0(uVar8,&local_240);
            if ((local_238 != '\0') && (local_240 != 0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != 0)) {
              FUN_00d50b20();
            }
            lVar2 = DAT_027258a0;
            if (local_12c == 1) {
              local_230 = local_a8;
              local_228 = '\0';
              if (DAT_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_026e10b0;
              local_220 = lVar2;
              local_218 = '\x01';
              if (DAT_026e10b0 != 0) {
                FUN_00d50b00();
              }
              local_210 = lVar3;
              local_208 = '\x01';
              local_200 = 0;
              local_1f8 = '\0';
              FUN_00d31230(&local_200,&local_210);
              local_f8 = local_80;
              local_f0 = 0;
              lVar2 = DAT_027258a0;
              if (local_78 == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                  lVar2 = DAT_027258a0;
                }
              }
              else {
                local_78 = '\0';
              }
              local_f0 = '\x01';
              DAT_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_f0 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = DAT_026e10b8;
              local_1e8 = '\x01';
              local_1f0 = lVar2;
              if (DAT_026e10b8 != 0) {
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
                if (local_40 != (longlong *)0x0) {
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
              if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if (DAT_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_026e10c0;
              local_1a0 = lVar2;
              local_198 = '\x01';
              if (DAT_026e10c0 != 0) {
                FUN_00d50b00();
              }
              local_190 = lVar3;
              local_188 = '\x01';
              local_180 = 0;
              local_178 = '\0';
              FUN_00d31230(&local_180,&local_190);
              local_c8 = local_80;
              local_c0 = 0;
              lVar2 = DAT_027258a0;
              if (local_78 == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                  lVar2 = DAT_027258a0;
                }
              }
              else {
                local_78 = '\0';
              }
              local_c0 = '\x01';
              DAT_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_c0 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = DAT_026e10c8;
              local_168 = '\x01';
              local_170 = lVar2;
              if (DAT_026e10c8 != 0) {
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
                if (local_40 != (longlong *)0x0) {
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
              if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
// @00637c40 — 3194 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00637cc1) */
/* WARNING: Removing unreachable block (ram,0x00637df9) */
/* WARNING: Removing unreachable block (ram,0x00637e05) */
/* WARNING: Removing unreachable block (ram,0x00637e75) */
/* WARNING: Removing unreachable block (ram,0x00637e81) */

void FUN_00637c40(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_178;
  char local_170;
  longlong local_118;
  char local_110;
  longlong *local_108;
  longlong local_70;
  char local_68;
  char local_60 [8];
  longlong *local_58;
  char local_50 [8];
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  if (unaff_RDI[0x2b] == *unaff_RSI) {
    return;
  }
  FUN_00643590();
  plVar3 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00637c9b;
    }
  }
  else if (local_58 != (longlong *)0x0) {
LAB_00637c9b:
    local_50[0] = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar3;
    local_40 = 0xffffffff;
    local_38 = 0;
    while( true ) {
      lVar7 = (longlong)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar6) break;
      local_58 = *(longlong **)(local_48[2] + 8 + lVar7 * 8);
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
  unaff_RDI[0x2b] = *unaff_RSI;
  FUN_006f3f00();
  plVar3 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x16] != 0) {
    iVar6 = FUN_00177f00();
    if (-1 < iVar6) {
      FUN_00178ae0();
      plVar2 = local_58;
      plVar1 = (longlong *)*unaff_RSI;
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == plVar1) goto LAB_00637e9a;
    }
    FUN_00178f80();
    FUN_01f27fe0();
    cVar5 = (**(code **)(*local_58 + 0x450))();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') {
      FUN_01e561b0();
      (**(code **)(*local_58 + 0x7f8))();
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_00637e9a:
  FUN_0063f230();
  plVar1 = local_58;
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_006f47d0();
    plVar1 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_0063f660();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_006f47d0();
  plVar1 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  FUN_00751820();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00637870();
  plVar1 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_58 + 0x450))();
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    FUN_0062a580();
    FUN_006e2720();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_006c5ee0();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x2e] != 0) {
      FUN_006e2720();
      plVar2 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      FUN_006c5ee0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((*(longlong *)(unaff_RDI[0x10] + 0x308) == 0) && (cVar5 = FUN_005348b0(), cVar5 == '\0')) {
      FUN_00643690();
    }
    FUN_00643150();
    if (*(longlong *)(unaff_RDI[0x10] + 0x308) != 0) {
      FUN_00710820();
      FUN_00444010();
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_0062a580();
    FUN_006e2720();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_006c5ee0();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x2e] != 0) {
      FUN_006e2720();
      plVar2 = local_58;
      if (local_50[0] == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50[0] = '\0';
      }
      FUN_006c5ee0();
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (unaff_RDI[0x1a] != 0) {
      FUN_006c4ec0();
    }
    FUN_00643150();
  }
  (**(code **)(*unaff_RDI + 0x5e8))();
  plVar2 = local_58;
  if ((((local_50[0] == '\0') && (local_58 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_50[0] != '\0')) && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_108 = plVar2;
  if (unaff_RDI[0x2c] != 0) {
    FUN_006e3b60();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_01bd0ba0();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x2f) = 1;
  }
  cVar5 = FUN_0063f180();
  if (cVar5 != '\0') {
    FUN_0063f660();
  }
  FUN_01e56750();
  if (local_58 == (longlong *)0x0) {
    cVar5 = '\0';
  }
  else {
    FUN_01e56750();
    cVar5 = FUN_01e5d880();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_006fda30();
    plVar2 = local_58;
    if (local_50[0] == '\0') {
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50[0] = '\0';
    }
    FUN_00db26c0();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  lVar7 = DAT_026f6d00;
  if (DAT_026f6d00 != 0) {
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
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5d8))();
  plVar4 = local_58;
  if (local_50[0] == '\0') {
    if (local_58 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50[0] = '\0';
  }
  FUN_00631870();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_006c4ec0();
  iVar6 = FUN_006e3cc0();
  if ((iVar6 == 2) || (cVar5 = FUN_006e2170(), cVar5 == '\0')) {
    (**(code **)(*unaff_RDI + 0x5d8))();
    FUN_006f4810();
    FUN_01e42250();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x5e0))();
    FUN_00756eb0();
    FUN_00324fe0();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
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
    if ((local_50[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_0021a630();
    FUN_01e42250();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60[0] != '\0') && (plVar4 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_170 != '\0') && (local_178 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x5e0))();
    FUN_00756eb0();
    FUN_00324fe0();
    if ((local_50[0] != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00106380 — 2995 bytes
// ============================================================

void FUN_00106380(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  undefined8 local_1f0;
  longlong *local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*(longlong *)*unaff_RSI + 0x978))();
  plVar3 = local_60;
  if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) && (FUN_00d50b00(), local_58 != '\0'))
     && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x7b8))();
  plVar2 = local_60;
  if (((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_58 != '\0' && (local_60 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_1e8 = plVar2;
  if (*(char *)(unaff_RDI + 0xc) == '\0') {
    if (plVar3 != (longlong *)0x0) {
      FUN_01a8c310();
      plVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        local_1c8 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0x40);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_1c8 = '\x01';
        local_1d0 = lVar1;
        FUN_0010acd0();
        local_c0 = local_60;
        local_b8 = 0;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_b8 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_1d8 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0x38);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_1d8 = '\x01';
        local_1e0 = lVar1;
        FUN_0010acd0();
        local_d0 = local_60;
        local_c8 = 0;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_c8 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_1d8 != '\0') && (local_1e0 != 0)) {
          FUN_00d50b20();
        }
      }
      local_1b8 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x48);
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
      lVar1 = *(longlong *)(unaff_RDI + 0x58);
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
    plVar2 = (longlong *)*unaff_RSI;
    local_198 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    local_1a0 = lVar1;
    (**(code **)(*plVar2 + 0xd70))();
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_188 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_188 = '\x01';
    local_190 = lVar1;
    (**(code **)(*plVar2 + 0xd68))();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_178 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
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
    if (plVar3 != (longlong *)0x0) {
      FUN_01a8c310();
      plVar2 = local_60;
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        if (*(char *)(unaff_RDI + 0xd) == '\0') {
          local_158 = 0;
          lVar1 = *(longlong *)(unaff_RDI + 0x18);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_158 = '\x01';
          local_160 = lVar1;
          FUN_0010acd0();
          local_80 = local_60;
          local_78 = 0;
          if (local_58 == '\0') {
            if (local_60 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_58 = '\0';
          }
          local_78 = '\x01';
          (**(code **)(*plVar3 + 0x9e8))();
          if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_158 != '\0') && (local_160 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_1f0 = *(undefined8 *)(unaff_RDI + 0x40);
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
          local_60 = (longlong *)&DAT_0253d630;
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_60 = &DAT_024c5048;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else if (*(char *)(unaff_RDI + 0xd) == '\0') {
        local_168 = 0;
        lVar1 = *(longlong *)(unaff_RDI + 0x30);
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        local_168 = '\x01';
        local_170 = lVar1;
        FUN_0010acd0();
        local_a0 = local_60;
        local_98 = 0;
        if (local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_98 = '\x01';
        (**(code **)(*plVar3 + 0x9e8))();
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_168 != '\0') && (local_170 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_1f0 = *(undefined8 *)(unaff_RDI + 0x38);
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
        local_60 = (longlong *)&DAT_0253d630;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        local_60 = &DAT_024c5048;
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      local_148 = 0;
      lVar1 = *(longlong *)(unaff_RDI + 0x20);
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
      lVar1 = *(longlong *)(unaff_RDI + 0x28);
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
    plVar2 = (longlong *)*unaff_RSI;
    local_128 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_128 = '\x01';
    local_130 = lVar1;
    (**(code **)(*plVar2 + 0xd70))();
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_118 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_118 = '\x01';
    local_120 = lVar1;
    (**(code **)(*plVar2 + 0xd68))();
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_108 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_108 = '\x01';
    local_110 = lVar1;
    (**(code **)(*plVar2 + 0xd58))();
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    local_f8 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
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
  plVar2 = (longlong *)*unaff_RSI;
  local_e8 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
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
  if (plVar3 != (longlong *)0x0) {
    local_d8 = 0;
    lVar1 = *(longlong *)(unaff_RDI + 0x50);
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
  (**(code **)(*(longlong *)*unaff_RSI + 0x7b8))();
  plVar4 = local_60;
  if (local_58 == '\0') {
    if (local_60 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  FUN_0010ae60();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0071c4a0 — 2933 bytes
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0071c5a1) */
/* WARNING: Removing unreachable block (ram,0x0071c5a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0071c4a0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong **pplVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  longlong *plVar9;
  longlong unaff_RDI;
  double dVar10;
  undefined8 uVar11;
  longlong *local_220;
  char local_218;
  longlong *local_210;
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
  longlong *local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 != 0) {
    dVar10 = (double)FUN_00e7d6f0();
    if ((dVar10 - *(double *)(unaff_RDI + 0x98)) * DAT_023907c0 < DAT_023b74a0) {
      uVar8 = 0;
    }
    else {
      uVar11 = FUN_00e7d6f0();
      *(undefined8 *)(unaff_RDI + 0x98) = uVar11;
      plVar1 = *(longlong **)(unaff_RDI + 0x68);
      FUN_00097120();
      plVar9 = DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar9 = DAT_02802688;
        if (cVar4 != '\0') {
          plVar9 = *(longlong **)(unaff_RDI + 0x68);
        }
      }
      if (plVar9 != (longlong *)0x0) {
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
          plVar9 = DAT_027282b8;
          if (DAT_027282b8 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_220 = plVar9;
          local_218 = '\x01';
          FUN_00e6b740(&local_a0,&local_220,1);
          plVar1 = local_40;
          if (local_38 == '\0') {
            if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_218 != '\0') && (local_220 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if (plVar1 == (longlong *)0x0) {
            if (local_48 != (longlong *)0x0) {
              uVar11 = FUN_00d50b00();
              local_190 = 0;
              local_188 = '\0';
              FUN_00093ce0(uVar11,&local_190);
              if ((local_188 != '\0') && (local_190 != 0)) {
                FUN_00d50b20();
              }
              if (unaff_RDI != 0) {
                FUN_00d50b20();
              }
              lVar2 = DAT_027258a0;
              local_180 = local_80;
              local_178 = '\0';
              if (DAT_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_02725918;
              local_170 = lVar2;
              local_168 = '\x01';
              if (DAT_02725918 != 0) {
                FUN_00d50b00();
              }
              local_160 = lVar3;
              local_158 = '\x01';
              local_150 = 0;
              local_148 = '\0';
              FUN_00d31230(&local_150,&local_160);
              local_c0 = local_58;
              local_b8 = 0;
              lVar2 = DAT_027258a0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                  lVar2 = DAT_027258a0;
                }
              }
              else {
                local_50 = '\0';
              }
              local_b8 = '\x01';
              DAT_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_b8 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = DAT_02725920;
              local_138 = '\x01';
              local_140 = lVar2;
              if (DAT_02725920 != 0) {
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
                if (local_40 != (longlong *)0x0) {
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
              if (plVar9 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
            if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_48 != (longlong *)0x0) {
              if (local_a0 != 0) {
                FUN_01f27fe0();
                FUN_00281390();
                local_200 = local_a0;
                local_1f8 = '\0';
                uVar5 = FUN_00e6d4e0();
                plVar9 = (longlong *)(ulonglong)uVar5;
                if ((local_1f8 != '\0') && (local_200 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_50 != '\0') && (local_58 != 0)) {
                  FUN_00d50b20();
                }
                if ((char)uVar5 != '\0') goto LAB_0071cebc;
              }
              lVar2 = DAT_026d8ab8;
              if (DAT_026d8ab8 != 0) {
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
              if ((DAT_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
                _DAT_02726298 = FUN_00015ff0();
                _DAT_02726280 = "MDURLOpenedController";
                _DAT_02726288 = 0x90;
                _DAT_02726290 = FUN_00098280;
                _DAT_027262a0 = 0;
                uRam00000000027262a8 = 0;
                _DAT_027262b0 = 0;
                uRam00000000027262b8 = 0;
                _DAT_027262c0 = 0;
                uRam00000000027262c8 = 0;
                _DAT_027262d0 = 0;
                uRam00000000027262d8 = 0;
                _DAT_027262e0 = 0;
                uRam00000000027262e8 = 0;
                _DAT_027262f0 = 0;
                uRam00000000027262f8 = 0;
                _DAT_02726300 = 0;
                uRam0000000002726308 = 0;
                _DAT_02726310 = 0;
                uRam0000000002726318 = 0;
                _DAT_02726320 = 0;
                uRam0000000002726328 = 0;
                _DAT_02726330 = 0;
                uRam0000000002726338 = 0;
                _DAT_02726340 = 0;
                ___cxa_guard_release();
              }
              pplVar7 = &DAT_02802688;
              if (plVar9 != (longlong *)0x0) {
                (**(code **)(*plVar9 + 0x360))();
                cVar4 = FUN_00e85ea0();
                pplVar7 = &local_40;
                if (cVar4 == '\0') {
                  pplVar7 = &DAT_02802688;
                }
              }
              plVar1 = *pplVar7;
              if (*(char *)(pplVar7 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar7 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if (plVar1 != (longlong *)0x0) {
                FUN_00dbbbc0();
                plVar9 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_0054d030();
                if (plVar9 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                uVar11 = FUN_00d50b00();
                local_1c0 = 0;
                local_1b8 = '\0';
                uVar11 = FUN_00093ce0(uVar11,&local_1c0);
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  uVar11 = FUN_00d50b20();
                }
                if (unaff_RDI != 0) {
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
                if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
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
      uVar8 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar8 & 0xffffffff;
}




// ============================================================
// @0071d920 — 2925 bytes
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0071da24) */
/* WARNING: Removing unreachable block (ram,0x0071da29) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0071d920(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong **pplVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  longlong *plVar8;
  longlong unaff_RDI;
  double dVar9;
  undefined8 uVar10;
  undefined8 local_218;
  longlong *local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  undefined8 local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (param_2 != 0) {
    dVar9 = (double)FUN_00e7d6f0();
    if ((dVar9 - *(double *)(unaff_RDI + 0xa0)) * DAT_023907c0 < DAT_023b74a0) {
      uVar7 = 0;
    }
    else {
      uVar10 = FUN_00e7d6f0();
      *(undefined8 *)(unaff_RDI + 0xa0) = uVar10;
      plVar1 = *(longlong **)(unaff_RDI + 0x68);
      FUN_00097120();
      plVar8 = DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        plVar8 = DAT_02802688;
        if (cVar4 != '\0') {
          plVar8 = *(longlong **)(unaff_RDI + 0x68);
        }
      }
      if (plVar8 != (longlong *)0x0) {
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
            if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
               (local_40 != (longlong *)0x0)) {
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
          if (plVar1 == (longlong *)0x0) {
            if (local_58 != (longlong *)0x0) {
              uVar10 = FUN_00d50b00();
              local_1a0 = 0;
              local_198 = '\0';
              FUN_00093ce0(uVar10,&local_1a0);
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
              if (unaff_RDI != 0) {
                FUN_00d50b20();
              }
              lVar2 = DAT_027258a0;
              local_190 = local_90;
              local_188 = '\0';
              if (DAT_027258a0 != 0) {
                FUN_00d50b00();
              }
              lVar3 = DAT_02725918;
              local_180 = lVar2;
              local_178 = '\x01';
              if (DAT_02725918 != 0) {
                FUN_00d50b00();
              }
              local_170 = lVar3;
              local_168 = '\x01';
              local_160 = 0;
              local_158 = '\0';
              FUN_00d31230(&local_160,&local_170);
              local_c0 = local_68;
              local_b8 = 0;
              lVar2 = DAT_027258a0;
              if (local_60 == '\0') {
                if (local_68 != 0) {
                  FUN_00d50b00();
                  lVar2 = DAT_027258a0;
                }
              }
              else {
                local_60 = '\0';
              }
              local_b8 = '\x01';
              DAT_027258a0 = lVar2;
              if (lVar2 != 0) {
                local_b8 = '\x01';
                FUN_00d50b00();
              }
              lVar3 = DAT_02725920;
              local_148 = '\x01';
              local_150 = lVar2;
              if (DAT_02725920 != 0) {
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
                if (local_40 != (longlong *)0x0) {
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
              if (plVar8 != (longlong *)0x0) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
            if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
            }
            lVar2 = DAT_02725930;
            if (local_58 != (longlong *)0x0) {
              if (DAT_02725930 != 0) {
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
              if ((DAT_0270e710 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
                _DAT_02726298 = FUN_00015ff0();
                _DAT_02726280 = "MDURLOpenedController";
                _DAT_02726288 = 0x90;
                _DAT_02726290 = FUN_00098280;
                _DAT_027262a0 = 0;
                uRam00000000027262a8 = 0;
                _DAT_027262b0 = 0;
                uRam00000000027262b8 = 0;
                _DAT_027262c0 = 0;
                uRam00000000027262c8 = 0;
                _DAT_027262d0 = 0;
                uRam00000000027262d8 = 0;
                _DAT_027262e0 = 0;
                uRam00000000027262e8 = 0;
                _DAT_027262f0 = 0;
                uRam00000000027262f8 = 0;
                _DAT_02726300 = 0;
                uRam0000000002726308 = 0;
                _DAT_02726310 = 0;
                uRam0000000002726318 = 0;
                _DAT_02726320 = 0;
                uRam0000000002726328 = 0;
                _DAT_02726330 = 0;
                uRam0000000002726338 = 0;
                _DAT_02726340 = 0;
                ___cxa_guard_release();
              }
              pplVar6 = &DAT_02802688;
              if (plVar8 != (longlong *)0x0) {
                (**(code **)(*plVar8 + 0x360))();
                cVar4 = FUN_00e85ea0();
                pplVar6 = &local_40;
                if (cVar4 == '\0') {
                  pplVar6 = &DAT_02802688;
                }
              }
              plVar1 = *pplVar6;
              if (*(char *)(pplVar6 + 1) == '\0') {
                if (plVar1 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                *(undefined1 *)(pplVar6 + 1) = 0;
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
              if (plVar1 != (longlong *)0x0) {
                FUN_00dbbbc0();
                plVar8 = local_40;
                if (local_38 == '\0') {
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_0054d030();
                if (plVar8 != (longlong *)0x0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                uVar10 = FUN_00d50b00();
                local_1d0 = 0;
                local_1c8 = '\0';
                uVar10 = FUN_00093ce0(uVar10,&local_1d0);
                if ((local_1c8 != '\0') && (local_1d0 != 0)) {
                  uVar10 = FUN_00d50b20();
                }
                if (unaff_RDI != 0) {
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
                if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
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
      uVar7 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      if (local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar7 & 0xffffffff;
}




// ============================================================
// @0063d970 — 2610 bytes
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0063d9e8) */
/* WARNING: Removing unreachable block (ram,0x0063d9ed) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0063d970(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  longlong unaff_RDI;
  undefined4 uVar8;
  undefined8 local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  undefined8 local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
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
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
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
        lVar3 = DAT_027258a0;
        if (plVar1 == (longlong *)0x0) {
          plVar1 = *(longlong **)(unaff_RDI + 0x180);
          local_188 = local_88;
          local_180 = '\0';
          if (DAT_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar4 = DAT_02725918;
          local_178 = lVar3;
          local_170 = '\x01';
          if (DAT_02725918 != 0) {
            FUN_00d50b00();
          }
          local_168 = lVar4;
          local_160 = '\x01';
          local_158 = 0;
          local_150 = '\0';
          FUN_00d31230(&local_158,&local_168);
          local_b8 = local_60;
          local_b0 = 0;
          lVar3 = DAT_027258a0;
          if (local_58 == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
              lVar3 = DAT_027258a0;
            }
          }
          else {
            local_58 = '\0';
          }
          local_b0 = '\x01';
          DAT_027258a0 = lVar3;
          if (lVar3 != 0) {
            local_b0 = '\x01';
            FUN_00d50b00();
          }
          lVar4 = DAT_02725920;
          local_140 = '\x01';
          local_148 = lVar3;
          if (DAT_02725920 != 0) {
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
            if (local_40 != (longlong *)0x0) {
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
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
          if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          lVar3 = DAT_02725930;
          if (DAT_02725930 != 0) {
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
          if ((DAT_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            _DAT_02726298 = FUN_00015ff0();
            _DAT_02726280 = "MDURLOpenedController";
            _DAT_02726288 = 0x90;
            _DAT_02726290 = FUN_00098280;
            _DAT_027262a0 = 0;
            uRam00000000027262a8 = 0;
            _DAT_027262b0 = 0;
            uRam00000000027262b8 = 0;
            _DAT_027262c0 = 0;
            uRam00000000027262c8 = 0;
            _DAT_027262d0 = 0;
            uRam00000000027262d8 = 0;
            _DAT_027262e0 = 0;
            uRam00000000027262e8 = 0;
            _DAT_027262f0 = 0;
            uRam00000000027262f8 = 0;
            _DAT_02726300 = 0;
            uRam0000000002726308 = 0;
            _DAT_02726310 = 0;
            uRam0000000002726318 = 0;
            _DAT_02726320 = 0;
            uRam0000000002726328 = 0;
            _DAT_02726330 = 0;
            uRam0000000002726338 = 0;
            _DAT_02726340 = 0;
            ___cxa_guard_release();
          }
          pplVar7 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar7 = &local_40;
            if (cVar5 == '\0') {
              pplVar7 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar7;
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar7 + 1) = 0;
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
          if (plVar1 != (longlong *)0x0) {
            FUN_00dbbbc0();
            plVar2 = local_40;
            if (local_38 == '\0') {
              if (local_40 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            FUN_0054d030();
            if (plVar2 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar2 = *(longlong **)(unaff_RDI + 0x180);
            local_1a0 = '\0';
            local_1a8 = plVar1;
            FUN_00d50b00();
            local_198 = 0;
            local_190 = '\0';
            (**(code **)(*plVar2 + 0x448))(&local_198,&stack0xfffffffffffffef8);
            if ((local_190 != '\0') && (local_198 != 0)) {
              FUN_00d50b20();
            }
            if (unaff_RDI != 0) {
              FUN_00d50b20();
            }
            if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
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
// @0063b490 — 2590 bytes
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0063b509) */
/* WARNING: Removing unreachable block (ram,0x0063b50e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063b490(undefined8 param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong **pplVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar8;
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
  longlong local_1a0;
  char local_198;
  longlong local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong *local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong *local_120;
  char local_118;
  longlong local_110;
  char local_108;
  uint local_fc;
  longlong local_c8;
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
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
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
      local_200 = *unaff_RSI;
      local_1f8 = '\0';
      FUN_00e6b740(&local_98,&local_200,local_fc);
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
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
      lVar3 = DAT_027258a0;
      if (plVar1 == (longlong *)0x0) {
        plVar1 = *(longlong **)(unaff_RDI + 0x180);
        local_1f0 = local_78;
        local_1e8 = '\0';
        if (DAT_027258a0 != 0) {
          FUN_00d50b00();
        }
        lVar4 = DAT_02725918;
        local_1e0 = lVar3;
        local_1d8 = '\x01';
        if (DAT_02725918 != 0) {
          FUN_00d50b00();
        }
        local_1d0 = lVar4;
        local_1c8 = '\x01';
        local_1c0 = 0;
        local_1b8 = '\0';
        FUN_00d31230(&local_1c0,&local_1d0);
        local_c8 = local_50;
        local_c0 = 0;
        lVar3 = DAT_027258a0;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            lVar3 = DAT_027258a0;
          }
        }
        else {
          local_48 = '\0';
        }
        local_c0 = '\x01';
        DAT_027258a0 = lVar3;
        if (lVar3 != 0) {
          local_c0 = '\x01';
          FUN_00d50b00();
        }
        lVar4 = DAT_02725920;
        local_1a8 = '\x01';
        local_1b0 = lVar3;
        if (DAT_02725920 != 0) {
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
          if (local_40 != (longlong *)0x0) {
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
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        if (plVar2 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
        if ((local_168 != '\0') && (local_170 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_98 == 0) {
LAB_0063b6f8:
          lVar3 = DAT_026d8ab8;
          if (DAT_026d8ab8 != 0) {
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
          if ((DAT_0270e710 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
            _DAT_02726298 = FUN_00015ff0();
            _DAT_02726280 = "MDURLOpenedController";
            _DAT_02726288 = 0x90;
            _DAT_02726290 = FUN_00098280;
            _DAT_027262a0 = 0;
            uRam00000000027262a8 = 0;
            _DAT_027262b0 = 0;
            uRam00000000027262b8 = 0;
            _DAT_027262c0 = 0;
            uRam00000000027262c8 = 0;
            _DAT_027262d0 = 0;
            uRam00000000027262d8 = 0;
            _DAT_027262e0 = 0;
            uRam00000000027262e8 = 0;
            _DAT_027262f0 = 0;
            uRam00000000027262f8 = 0;
            _DAT_02726300 = 0;
            uRam0000000002726308 = 0;
            _DAT_02726310 = 0;
            uRam0000000002726318 = 0;
            _DAT_02726320 = 0;
            uRam0000000002726328 = 0;
            _DAT_02726330 = 0;
            uRam0000000002726338 = 0;
            _DAT_02726340 = 0;
            ___cxa_guard_release();
          }
          pplVar7 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar5 = FUN_00e85ea0();
            pplVar7 = &local_40;
            if (cVar5 == '\0') {
              pplVar7 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar7;
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar7 + 1) = 0;
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
          if (plVar1 != (longlong *)0x0) {
            FUN_00dbbbc0();
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
            FUN_0054d030();
            if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            plVar2 = *(longlong **)(unaff_RDI + 0x180);
            local_118 = '\0';
            local_120 = plVar1;
            FUN_00d50b00();
            local_110 = 0;
            local_108 = '\0';
            (**(code **)(*plVar2 + 0x448))(&local_110,&stack0xffffffffffffff18);
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if (unaff_RDI != 0) {
              FUN_00d50b20();
            }
            if ((local_118 != '\0') && (local_120 != (longlong *)0x0)) {
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
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
// @0063c780 — 2519 bytes
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0063cefc) */
/* WARNING: Removing unreachable block (ram,0x0063cf0c) */
/* WARNING: Removing unreachable block (ram,0x0063c7f8) */
/* WARNING: Removing unreachable block (ram,0x0063c7fd) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0063c780(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong **pplVar8;
  longlong unaff_RDI;
  undefined4 uVar9;
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
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_c8;
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
  longlong local_68;
  char local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
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
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
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
        lVar4 = DAT_027258a0;
        if (plVar1 == (longlong *)0x0) {
          plVar1 = *(longlong **)(unaff_RDI + 0x180);
          if (DAT_027258a0 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_02725918;
          if (DAT_02725918 != 0) {
            FUN_00d50b00();
          }
          local_1c8 = lVar3;
          local_1c0 = '\x01';
          local_1b8 = 0;
          local_1b0 = '\0';
          FUN_00d31230(&local_1b8,&local_1c8);
          local_c8 = local_50;
          local_c0 = 0;
          lVar3 = DAT_027258a0;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
              lVar3 = DAT_027258a0;
            }
          }
          else {
            local_48 = '\0';
          }
          local_c0 = '\x01';
          DAT_027258a0 = lVar3;
          if (lVar3 != 0) {
            local_c0 = '\x01';
            FUN_00d50b00();
          }
          lVar5 = DAT_02725920;
          local_1a0 = '\x01';
          local_1a8 = lVar3;
          if (DAT_02725920 != 0) {
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
            if (local_40 != (longlong *)0x0) {
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
          if (unaff_RDI != 0) {
            FUN_00d50b20();
          }
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
          if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_98 == 0) {
LAB_0063c99d:
            lVar4 = DAT_026d8ab8;
            if (DAT_026d8ab8 != 0) {
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
            if ((DAT_0270e710 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
              _DAT_02726298 = FUN_00015ff0();
              _DAT_02726280 = "MDURLOpenedController";
              _DAT_02726288 = 0x90;
              _DAT_02726290 = FUN_00098280;
              _DAT_027262a0 = 0;
              uRam00000000027262a8 = 0;
              _DAT_027262b0 = 0;
              uRam00000000027262b8 = 0;
              _DAT_027262c0 = 0;
              uRam00000000027262c8 = 0;
              _DAT_027262d0 = 0;
              uRam00000000027262d8 = 0;
              _DAT_027262e0 = 0;
              uRam00000000027262e8 = 0;
              _DAT_027262f0 = 0;
              uRam00000000027262f8 = 0;
              _DAT_02726300 = 0;
              uRam0000000002726308 = 0;
              _DAT_02726310 = 0;
              uRam0000000002726318 = 0;
              _DAT_02726320 = 0;
              uRam0000000002726328 = 0;
              _DAT_02726330 = 0;
              uRam0000000002726338 = 0;
              _DAT_02726340 = 0;
              ___cxa_guard_release();
            }
            pplVar8 = (longlong **)&DAT_02802688;
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x360))();
              cVar6 = FUN_00e85ea0();
              pplVar8 = &local_40;
              if (cVar6 == '\0') {
                pplVar8 = (longlong **)&DAT_02802688;
              }
            }
            plVar1 = *pplVar8;
            if (*(char *)(pplVar8 + 1) == '\0') {
              if (plVar1 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              *(undefined1 *)(pplVar8 + 1) = 0;
            }
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
            if (plVar1 != (longlong *)0x0) {
              FUN_00dbbbc0();
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
              FUN_0054d030();
              if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              plVar2 = *(longlong **)(unaff_RDI + 0x180);
              local_110 = '\0';
              local_118 = plVar1;
              FUN_00d50b00();
              local_108 = 0;
              local_100 = '\0';
              (**(code **)(*plVar2 + 0x448))(&local_108,&stack0xffffffffffffff18);
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
              if (unaff_RDI != 0) {
                FUN_00d50b20();
              }
              if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
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
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
// @00108e20 — 2425 bytes
// ============================================================

void FUN_00108e20(undefined8 param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  uint7 uVar12;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 unaff_R12;
  longlong *plVar13;
  longlong **pplVar14;
  bool bVar15;
  ulonglong local_80;
  int local_5c;
  int local_58;
  char local_54;
  longlong *local_50;
  char local_48;
  undefined1 local_3a;
  char local_39;
  undefined8 local_38;
  byte bVar4;
  
  if (*unaff_RSI == 0) {
    return;
  }
  cVar6 = *(char *)(unaff_RDI + 0xc);
  local_3a = cVar6 != '\0';
  local_39 = FUN_01a90590();
  local_58 = FUN_01a90480();
  local_5c = FUN_01a904a0();
  local_38 = 0;
  local_80 = FUN_01a93720();
  lVar2 = DAT_026e11a8;
  if (DAT_026e11a8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar10 == (longlong *)0x0) {
LAB_00108efc:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00108efc;
  }
  plVar10 = *pplVar14;
  if (plVar10 == (longlong *)0x0) {
    uVar12 = (uint7)((ulonglong)unaff_R12 >> 8);
    bVar1 = 1;
    bVar3 = 0;
    bVar4 = 0;
    local_38._0_1_ = '\0';
    local_38._1_7_ = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar14 + 1) == '\0') {
      uVar9 = FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    local_38._1_7_ = (uint7)((ulonglong)uVar9 >> 8);
    bVar3 = 1;
    bVar4 = 1;
    uVar12 = 0;
    bVar1 = 0;
    local_38._0_1_ = '\x01';
  }
  if ((local_48 != '\0') && (bVar4 = bVar3, local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_54 = param_2;
  if ((plVar10 != (longlong *)0x0) && (cVar5 = FUN_00d45ad0(), (cVar6 != '\0') != (bool)cVar5)) {
    local_3a = FUN_00d45ad0();
    local_54 = '\x01';
  }
  lVar2 = DAT_026e11b0;
  if (DAT_026e11b0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  FUN_00053ac0();
  if (plVar11 == (longlong *)0x0) {
LAB_0010900a:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_0010900a;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if ((bool)(bVar1 & plVar11 != (longlong *)0x0)) {
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
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if ((bool)(bVar4 & plVar10 != (longlong *)0x0)) {
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
    bVar15 = plVar10 != (longlong *)0x0;
    plVar10 = plVar11;
    if ((bool)(bVar4 & bVar15)) {
      FUN_00d50b20();
    }
LAB_00109058:
    *(undefined1 *)(pplVar14 + 1) = 0;
    cVar6 = '\x01';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar10 != (longlong *)0x0) {
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
  lVar2 = DAT_026e11b8;
  if (DAT_026e11b8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar11 == (longlong *)0x0) {
LAB_00109178:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00109178;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if ((cVar6 == '\0') && (plVar11 != (longlong *)0x0)) {
      plVar11 = plVar10;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_001091c6;
      local_38._1_7_ = (uint7)((ulonglong)uVar9 >> 8);
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
      if (plVar11 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_38._1_7_ = (uint7)((ulonglong)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      if ((cVar6 != '\0') && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar11;
        goto joined_r0x00109708;
      }
    }
    else {
      if ((cVar6 != '\0') && (plVar10 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_001091c6:
      *(undefined1 *)(pplVar14 + 1) = 0;
      local_38._1_7_ = (uint7)((ulonglong)uVar9 >> 8);
    }
    local_38._0_1_ = '\x01';
    plVar10 = plVar11;
  }
joined_r0x00109708:
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar10 != (longlong *)0x0) && (iVar8 = FUN_00d45870(), iVar8 != local_58)) {
    local_58 = FUN_00d45870();
    local_54 = '\x01';
  }
  lVar2 = DAT_026e11c0;
  if (DAT_026e11c0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar11 = local_50;
  FUN_00053ac0();
  if (plVar11 == (longlong *)0x0) {
LAB_001092bf:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar11 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_001092bf;
  }
  plVar11 = *pplVar14;
  if (plVar11 == plVar10) {
    if (((char)local_38 == '\0') && (plVar11 != (longlong *)0x0)) {
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
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      if (((char)local_38 != '\0') && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_38 != '\0') && (plVar10 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_0010930e:
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
joined_r0x0010934b:
    cVar6 = '\x01';
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (plVar11 != (longlong *)0x0) {
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
  lVar2 = DAT_026e11c8;
  if (DAT_026e11c8 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  uVar9 = FUN_00053ac0();
  if (plVar10 == (longlong *)0x0) {
LAB_00109410:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    uVar9 = FUN_00e85ea0();
    if ((char)uVar9 == '\0') goto LAB_00109410;
  }
  plVar10 = *pplVar14;
  if (plVar10 == plVar11) {
    if ((cVar6 == '\0') && (plVar10 != (longlong *)0x0)) {
      plVar10 = plVar11;
      if (*(char *)(pplVar14 + 1) != '\0') goto LAB_0010945d;
      local_38._1_7_ = (uint7)((ulonglong)uVar9 >> 8);
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
      if (plVar10 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      local_38._1_7_ = (uint7)((ulonglong)uVar9 >> 8);
      local_38._0_1_ = '\x01';
      if ((cVar6 != '\0') && (plVar11 != (longlong *)0x0)) {
        FUN_00d50b20();
        plVar11 = plVar10;
        goto joined_r0x00109734;
      }
    }
    else {
      if ((cVar6 != '\0') && (plVar11 != (longlong *)0x0)) {
        uVar9 = FUN_00d50b20();
      }
LAB_0010945d:
      *(undefined1 *)(pplVar14 + 1) = 0;
      local_38._1_7_ = (uint7)((ulonglong)uVar9 >> 8);
    }
    local_38._0_1_ = '\x01';
    plVar11 = plVar10;
  }
joined_r0x00109734:
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_80 = local_80 >> 0x20;
  if ((plVar11 != (longlong *)0x0) && (iVar8 = FUN_00d45870(), iVar8 != local_58)) {
    local_80 = FUN_00d45870();
    local_54 = '\x01';
  }
  lVar2 = DAT_026e11d0;
  if (DAT_026e11d0 != 0) {
    FUN_00d50b00();
  }
  pplVar14 = &local_50;
  FUN_000175c0();
  plVar10 = local_50;
  FUN_00053ac0();
  if (plVar10 == (longlong *)0x0) {
LAB_00109559:
    pplVar14 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar10 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00109559;
  }
  plVar13 = *pplVar14;
  uVar12 = (uint7)((ulonglong)plVar10 >> 8);
  if (plVar13 == plVar11) {
    if (((char)local_38 != '\0') || (plVar13 == (longlong *)0x0)) {
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
    if (plVar13 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    if (((char)local_38 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (((char)local_38 != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_001095a8:
    *(undefined1 *)(pplVar14 + 1) = 0;
  }
  cVar6 = '\x01';
joined_r0x00109749:
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar13 != (longlong *)0x0) && (*(longlong *)(unaff_RDI + 0x60) != 0)) {
    FUN_00d50b00();
    plVar10 = *(longlong **)(unaff_RDI + 0x60);
    local_38._0_1_ = cVar6;
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    cVar5 = (**(code **)(*plVar10 + 0x3c8))();
    cVar7 = FUN_00d45ad0();
    FUN_00d50b20();
    FUN_00d50b20();
    cVar6 = (char)local_38;
    uVar12 = (uint7)((ulonglong)plVar10 >> 8);
    if (cVar5 != cVar7) {
      plVar10 = *(longlong **)(unaff_RDI + 0x60);
      if (plVar10 != (longlong *)0x0) {
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
  if ((cVar6 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00104fb0 — 2272 bytes
// ============================================================

void FUN_00104fb0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  longlong *plVar3;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  FUN_00d50100();
  FUN_01cb4790();
  (**(code **)(*local_38 + 0x370))();
  plVar2 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_88 = (longlong)plVar2;
  local_80 = '\0';
  FUN_01a8be80(1,4,&local_88);
  plVar1 = *(longlong **)(unaff_RDI + 0x18);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_00105044;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x18);
      *(longlong **)(unaff_RDI + 0x18) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105044:
      *(longlong **)(unaff_RDI + 0x18) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x18);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  FUN_01a8bec0(0,4);
  plVar1 = *(longlong **)(unaff_RDI + 0x20);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_00105152;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x20);
      *(longlong **)(unaff_RDI + 0x20) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105152:
      *(longlong **)(unaff_RDI + 0x20) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x20);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01a8bec0(0,4);
  plVar1 = *(longlong **)(unaff_RDI + 0x28);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_00105222;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x28);
      *(longlong **)(unaff_RDI + 0x28) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105222:
      *(longlong **)(unaff_RDI + 0x28) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x28);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  local_78 = (longlong)plVar2;
  local_70 = '\0';
  FUN_01a928d0(&local_78,1);
  plVar1 = *(longlong **)(unaff_RDI + 0x40);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_00105309;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x40);
      *(longlong **)(unaff_RDI + 0x40) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105309:
      *(longlong **)(unaff_RDI + 0x40) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x40);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  FUN_01a92900();
  plVar1 = *(longlong **)(unaff_RDI + 0x48);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_001053f5;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x48);
      *(longlong **)(unaff_RDI + 0x48) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_001053f5:
      *(longlong **)(unaff_RDI + 0x48) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x48);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  FUN_01a92900();
  plVar1 = *(longlong **)(unaff_RDI + 0x58);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_001054cd;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x58);
      *(longlong **)(unaff_RDI + 0x58) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_001054cd:
      *(longlong **)(unaff_RDI + 0x58) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x58);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  FUN_01a92900();
  plVar1 = *(longlong **)(unaff_RDI + 0x50);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_001055a5;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x50);
      *(longlong **)(unaff_RDI + 0x50) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_001055a5:
      *(longlong **)(unaff_RDI + 0x50) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x50);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = (longlong)plVar2;
  local_60 = '\0';
  FUN_01a8be80(1,4,&local_68);
  plVar1 = *(longlong **)(unaff_RDI + 0x30);
  plVar3 = plVar1;
  if (plVar1 != local_38) {
    if (local_30 == '\0') {
      if (local_38 == (longlong *)0x0) {
        plVar3 = (longlong *)0x0;
        goto LAB_00105684;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x30);
      *(longlong **)(unaff_RDI + 0x30) = local_38;
      plVar3 = local_38;
    }
    else {
      local_30 = '\0';
      plVar3 = local_38;
LAB_00105684:
      *(longlong **)(unaff_RDI + 0x30) = plVar3;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar3 = *(longlong **)(unaff_RDI + 0x30);
    }
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  local_58 = (longlong)plVar2;
  local_50 = '\0';
  FUN_01a928d0(&local_58,1);
  plVar1 = *(longlong **)(unaff_RDI + 0x38);
  plVar3 = plVar1;
  if (plVar1 == local_38) goto joined_r0x00105792;
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) {
      plVar3 = (longlong *)0x0;
      goto LAB_0010577f;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x38);
    *(longlong **)(unaff_RDI + 0x38) = local_38;
    plVar3 = local_38;
  }
  else {
    local_30 = '\0';
    plVar3 = local_38;
LAB_0010577f:
    *(longlong **)(unaff_RDI + 0x38) = plVar3;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar3 = *(longlong **)(unaff_RDI + 0x38);
  }
joined_r0x00105792:
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = plVar3;
  FUN_00d21140();
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0xc) = 1;
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0054e050 — 1966 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0054e7bd) */
/* WARNING: Removing unreachable block (ram,0x0054e7c9) */

void FUN_0054e050(ulonglong param_1)

{
  double dVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong unaff_RDI;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double local_98;
  longlong local_90;
  longlong local_88;
  char local_80 [8];
  double local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  ulonglong local_58;
  ulonglong local_48;
  ulonglong local_40;
  char local_38 [8];
  
  iVar5 = *(int *)(*(longlong *)(unaff_RDI + 0x38) + 0xc);
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
    pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
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
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + local_68 * 8);
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
          local_48 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          uVar3 = uVar11;
          if ((cVar4 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        local_40 = uVar3;
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
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
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
        uVar11 = local_40;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          uVar11 = *(ulonglong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          param_1 = local_40;
        }
        local_78 = *(double *)(uVar11 + 0x38);
        dVar13 = *(double *)(uVar11 + 0x48);
        if ((*(double *)(uVar11 + 0x40) <= local_78) ||
           ((dVar13 < *(double *)(uVar11 + 0x50) && (dVar13 < local_78)))) {
          local_78 = dVar13;
        }
        uStack_70 = 0;
        pvVar7 = _pthread_getspecific((pthread_key_t)param_1);
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
          uVar11 = *(ulonglong *)(local_40 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
          dVar13 = *(double *)(uVar11 + 0x40);
          if (*(double *)(uVar11 + 0x38) < dVar13) goto LAB_0054e3d4;
LAB_0054e3b9:
          dVar14 = *(double *)(uVar11 + 0x50);
LAB_0054e3e6:
          dVar13 = dVar14;
        }
        local_98 = dVar13 + DAT_02391030;
        if (dVar13 <= local_78) {
          local_98 = dVar13;
        }
        uVar11 = local_68 + 1;
        local_68 = uVar11;
        if ((longlong)uVar11 < (longlong)iVar5) {
          dVar13 = (double)(~-(ulonglong)(local_78 < dVar13) & (ulonglong)local_78 |
                           (ulonglong)(local_78 + DAT_023944d8) & -(ulonglong)(local_78 < dVar13));
          lVar9 = local_90;
          if (local_98 <= dVar13) {
            do {
              lVar10 = *(longlong *)
                        (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar9 * 8);
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
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < iVar5);
          }
          else {
            do {
              lVar10 = *(longlong *)
                        (*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar9 * 8);
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
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
              if ((pvVar7 == (void *)0x0) || (lVar10 = FUN_00e8b990(), lVar10 == 0)) {
                local_78 = *(double *)(lVar12 + 0x38);
                dVar14 = *(double *)(lVar12 + 0x48);
                lVar10 = lVar12;
                if (local_78 < *(double *)(lVar12 + 0x40)) goto LAB_0054e554;
LAB_0054e56d:
                local_78 = dVar14;
              }
              else {
                lVar10 = *(longlong *)
                          (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
                local_78 = *(double *)(lVar10 + 0x38);
                dVar14 = *(double *)(lVar10 + 0x48);
                if (*(double *)(lVar10 + 0x40) <= local_78) goto LAB_0054e56d;
LAB_0054e554:
                if ((dVar14 < *(double *)(lVar10 + 0x50)) && (dVar14 < local_78)) goto LAB_0054e56d;
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
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
                lVar10 = *(longlong *)
                          (lVar12 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
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
                pvVar7 = _pthread_getspecific((pthread_key_t)uVar11);
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
      } while ((longlong)local_68 < (longlong)(iVar5 + -1));
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
// @0054ffb0 — 1631 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00550049) */
/* WARNING: Removing unreachable block (ram,0x00550055) */
/* WARNING: Removing unreachable block (ram,0x00550028) */
/* WARNING: Removing unreachable block (ram,0x00550034) */
/* WARNING: Removing unreachable block (ram,0x00550491) */
/* WARNING: Removing unreachable block (ram,0x0055050d) */
/* WARNING: Removing unreachable block (ram,0x00550512) */
/* WARNING: Removing unreachable block (ram,0x0055051a) */
/* WARNING: Removing unreachable block (ram,0x00550497) */
/* WARNING: Removing unreachable block (ram,0x005505fb) */
/* WARNING: Removing unreachable block (ram,0x00550608) */
/* WARNING: Removing unreachable block (ram,0x005504c3) */
/* WARNING: Removing unreachable block (ram,0x005504d0) */
/* WARNING: Removing unreachable block (ram,0x00550132) */
/* WARNING: Removing unreachable block (ram,0x00550160) */
/* WARNING: Removing unreachable block (ram,0x00550134) */
/* WARNING: Removing unreachable block (ram,0x00550162) */
/* WARNING: Removing unreachable block (ram,0x00550542) */
/* WARNING: Removing unreachable block (ram,0x0055054e) */

void FUN_0054ffb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  void *pvVar9;
  longlong lVar10;
  pthread_key_t pVar11;
  longlong unaff_RDI;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  int local_58;
  longlong local_40;
  char local_38;
  
  dVar12 = (double)FUN_01266200(param_1,param_2,param_3,param_4,param_2);
  dVar13 = (double)FUN_012664b0();
  do {
    lVar6 = local_70;
    lVar8 = *(longlong *)(unaff_RDI + 0x38);
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
          lVar8 = (longlong)local_58;
          local_58 = local_58 + 1;
          if (*(int *)(lVar6 + 0xc) <= local_58) goto LAB_005505c0;
          lVar10 = *(longlong *)(lVar6 + 0x10);
          local_70 = *(longlong *)(lVar10 + 8 + lVar8 * 8);
          pvVar9 = _pthread_getspecific((pthread_key_t)lVar10);
          pVar11 = (pthread_key_t)lVar10;
          lVar8 = local_70;
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            lVar8 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
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
            lVar8 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
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
          lVar8 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
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
          lVar8 = *(longlong *)(local_70 + 0x20 + (ulonglong)(*(uint *)(lVar10 + 0x154) & 1) * 8);
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
// @00639aa0 — 1473 bytes
// str: ""MDURLOpenedController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00639aa0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong **pplVar9;
  longlong unaff_RDI;
  undefined4 uVar10;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_50;
  char local_48;
  longlong *local_40;
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
  local_f0 = DAT_02725a90;
  if (DAT_02725a90 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_e8 = '\x01';
  FUN_00d70ea0(uVar10,&local_f0);
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d13b30();
  FUN_00dd2830();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FUN_01f27fe0();
  FUN_00281390();
  plVar3 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
       (local_40 != (longlong *)0x0)) {
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
  if (((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01e697d0();
  local_e0 = plVar4;
  local_d8 = '\0';
  FUN_01e69930(uVar10,0);
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00dd2860();
  if (local_40 == (longlong *)0x0) {
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
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_026d8ab8;
  if (bVar7 == 0) goto LAB_00639f8b;
  if (DAT_026d8ab8 != 0) {
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
  if ((DAT_0270e710 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
    _DAT_02726298 = FUN_00015ff0();
    _DAT_02726280 = "MDURLOpenedController";
    _DAT_02726288 = 0x90;
    _DAT_02726290 = FUN_00098280;
    _DAT_027262a0 = 0;
    uRam00000000027262a8 = 0;
    _DAT_027262b0 = 0;
    uRam00000000027262b8 = 0;
    _DAT_027262c0 = 0;
    uRam00000000027262c8 = 0;
    _DAT_027262d0 = 0;
    uRam00000000027262d8 = 0;
    _DAT_027262e0 = 0;
    uRam00000000027262e8 = 0;
    _DAT_027262f0 = 0;
    uRam00000000027262f8 = 0;
    _DAT_02726300 = 0;
    uRam0000000002726308 = 0;
    _DAT_02726310 = 0;
    uRam0000000002726318 = 0;
    _DAT_02726320 = 0;
    uRam0000000002726328 = 0;
    _DAT_02726330 = 0;
    uRam0000000002726338 = 0;
    _DAT_02726340 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00639ddd:
    pplVar9 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_00639ddd;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
  if (plVar1 != (longlong *)0x0) {
    FUN_00dbbbc0();
    plVar5 = local_40;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    uVar10 = FUN_0054d030();
    if (plVar5 != (longlong *)0x0) {
      uVar10 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
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
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b00();
    }
    FUN_00094580();
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
LAB_00639f8b:
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0054f740 — 1417 bytes
// ============================================================

void FUN_0054f740(void)

{
  longlong lVar1;
  pthread_key_t pVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong local_c0;
  char local_b8;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  pthread_key_t local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  double local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x38);
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
    *(undefined1 *)plVar4 = 0;
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
  lVar1 = *unaff_RSI;
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
            lVar6 = (longlong)(int)local_40;
            iVar3 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar3);
            if (*(int *)(local_48 + 0xc) <= iVar3) break;
            lVar7 = *(longlong *)(local_48 + 0x10);
            local_58 = *(longlong *)(lVar7 + 8 + lVar6 * 8);
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
            pVar9 = (pthread_key_t)lVar7;
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
            lVar6 = (longlong)(int)local_40;
            iVar3 = (int)local_40 + 1;
            local_40 = CONCAT44(local_40._4_4_,iVar3);
            if (*(int *)(local_48 + 0xc) <= iVar3) goto LAB_0054fba0;
            lVar7 = *(longlong *)(local_48 + 0x10);
            lVar6 = *(longlong *)(lVar7 + 8 + lVar6 * 8);
            local_58 = lVar6;
            pvVar5 = _pthread_getspecific((pthread_key_t)lVar7);
            lVar8 = local_58;
            pVar9 = (pthread_key_t)lVar7;
            if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar6 = lVar8, lVar7 != 0)) {
              lVar6 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
            }
            lVar7 = local_58;
            dVar12 = *(double *)(lVar6 + 0x38);
            pvVar5 = _pthread_getspecific(pVar9);
            lVar6 = local_58;
            if ((pvVar5 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar7 = lVar6, lVar8 != 0)) {
              lVar7 = *(longlong *)(lVar6 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
            }
            dVar12 = dVar12 + DAT_023944d8;
            dVar11 = *(double *)(lVar7 + 0x40) + DAT_02391030;
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
// @00108380 — 1382 bytes
// ============================================================

void FUN_00108380(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  FUN_00d46300();
  lVar3 = local_38;
  lVar2 = DAT_026e11a8;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = DAT_026e11a8;
    }
  }
  else {
    local_30 = '\0';
  }
  DAT_026e11a8 = lVar2;
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
  lVar2 = DAT_026e11b0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = DAT_026e11b0;
    }
  }
  else {
    local_30 = '\0';
  }
  DAT_026e11b0 = lVar2;
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
  lVar2 = DAT_026e11b8;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = DAT_026e11b8;
    }
  }
  else {
    local_30 = '\0';
  }
  DAT_026e11b8 = lVar2;
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
  lVar2 = DAT_026e11c0;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = DAT_026e11c0;
    }
  }
  else {
    local_30 = '\0';
  }
  DAT_026e11c0 = lVar2;
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
  lVar2 = DAT_026e11c8;
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
      lVar2 = DAT_026e11c8;
    }
  }
  else {
    local_30 = '\0';
  }
  DAT_026e11c8 = lVar2;
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
  if (*(longlong *)(unaff_RSI + 0x60) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = *(longlong **)(unaff_RSI + 0x60);
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3c8))();
    FUN_00d46300();
    lVar3 = local_38;
    lVar2 = DAT_026e11d0;
    if (local_30 == '\0') {
      if (local_38 != 0) {
        FUN_00d50b00();
        lVar2 = DAT_026e11d0;
      }
    }
    else {
      local_30 = '\0';
    }
    DAT_026e11d0 = lVar2;
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
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @0054ee90 — 1349 bytes
// ============================================================

void FUN_0054ee90(double param_1,double param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  ulonglong uVar4;
  longlong lVar5;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  longlong local_48;
  char local_40;
  
  if (param_2 <= param_1) {
    return;
  }
  lVar6 = *(longlong *)(unaff_RDI + 0x38);
  uVar4 = (ulonglong)*(uint *)(lVar6 + 0xc);
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
  dVar10 = DAT_023944d8 + param_1;
  dVar11 = DAT_02391030 + param_2;
  if (unaff_ESI == 1) {
    lVar1 = uVar4 - 1;
    lVar8 = 0;
    lVar5 = 0;
    bVar9 = false;
    bVar7 = false;
    lVar6 = **(longlong **)(lVar6 + 0x10);
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
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_00362260(dVar10,dVar11);
        if (cVar2 != '\0') {
          pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_003623b0(param_1,param_2);
          FUN_0054e050();
          goto LAB_0054f40e;
        }
        if (lVar1 == lVar8) goto joined_r0x0054f275;
        lVar8 = lVar8 + 1;
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar8 * 8);
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
    lVar6 = **(longlong **)(lVar6 + 0x10);
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
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_00362260(dVar10,dVar11);
        if (lVar1 == lVar8) goto joined_r0x0054f275;
        lVar8 = lVar8 + 1;
        lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar8 * 8);
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
  lVar6 = **(longlong **)(lVar6 + 0x10);
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
      pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_00362260(dVar10,dVar11);
      if (cVar2 != '\0') {
        pvVar3 = _pthread_getspecific((pthread_key_t)uVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_003622e0(param_1,param_2);
        FUN_0054e050();
        goto LAB_0054f40e;
      }
      if (lVar1 == lVar8) goto joined_r0x0054f275;
      lVar8 = lVar8 + 1;
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x38) + 0x10) + lVar8 * 8);
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
// @0063f660 — 1319 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0063f867) */
/* WARNING: Removing unreachable block (ram,0x0063f873) */

void FUN_0063f660(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar7;
  bool bVar8;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40 [15];
  char local_31;
  
  (**(code **)(*unaff_RDI + 0x5d8))();
  FUN_006f3f00();
  plVar2 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5e8))();
  plVar3 = local_48;
  if (((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  plVar7 = (longlong *)*unaff_RSI;
  local_31 = (char)unaff_RSI[1];
  if ((local_31 == '\0') || (plVar7 == (longlong *)0x0)) {
    if (plVar7 == (longlong *)0x0) {
      FUN_00756eb0();
      plVar4 = local_48;
      if (local_48 != (longlong *)0x0) {
        if (local_40[0] != '\0') {
          local_31 = '\x01';
          plVar7 = local_48;
          goto LAB_0063f731;
        }
        FUN_00d50b00();
        local_31 = '\x01';
        plVar7 = plVar4;
      }
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
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
  if ((local_40[0] != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 == '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x5d8))();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_00221970();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00226060();
  FUN_00642e80();
  plVar5 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_0063ffb0();
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x5d8))();
  if (local_48 == (longlong *)0x0) {
    bVar8 = false;
  }
  else if (unaff_RDI[0x16] == 0) {
    bVar8 = false;
  }
  else {
    FUN_01e54250();
    bVar8 = CONCAT71(uStack_57,local_58) != 0;
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar8) {
    FUN_0021a630();
    plVar5 = local_48;
    (**(code **)(*unaff_RDI + 0x5d8))();
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
    if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_31 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00550980 — 1173 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00550ce7) */
/* WARNING: Removing unreachable block (ram,0x00550cf0) */
/* WARNING: Removing unreachable block (ram,0x00550b07) */
/* WARNING: Removing unreachable block (ram,0x00550b10) */
/* WARNING: Removing unreachable block (ram,0x00550bf7) */
/* WARNING: Removing unreachable block (ram,0x00550c00) */
/* WARNING: Removing unreachable block (ram,0x00550dd7) */
/* WARNING: Removing unreachable block (ram,0x00550de0) */

undefined8 * FUN_00550980(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar6 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  lVar1 = *(longlong *)(unaff_RSI + 0x38);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar8 = 0;
      do {
        lVar7 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar8 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(undefined8 *)(lVar5 + 0x40),0);
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
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(undefined8 *)(lVar5 + 0x38),0);
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
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        lVar5 = lVar7;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          lVar5 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(undefined8 *)(lVar5 + 0x48),0);
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
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar6);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
        }
        FUN_016cb850(*(undefined8 *)(lVar7 + 0x50),0);
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
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @0063a4a0 — 1113 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0063a87e) */
/* WARNING: Removing unreachable block (ram,0x0063a88b) */
/* WARNING: Removing unreachable block (ram,0x0063a83e) */
/* WARNING: Removing unreachable block (ram,0x0063a84b) */
/* WARNING: Removing unreachable block (ram,0x0063a8df) */
/* WARNING: Removing unreachable block (ram,0x0063a8eb) */
/* WARNING: Removing unreachable block (ram,0x0063a723) */
/* WARNING: Removing unreachable block (ram,0x0063a72c) */
/* WARNING: Removing unreachable block (ram,0x0063a6f4) */
/* WARNING: Removing unreachable block (ram,0x0063a6fd) */
/* WARNING: Removing unreachable block (ram,0x0063a803) */
/* WARNING: Removing unreachable block (ram,0x0063a80c) */

void FUN_0063a4a0(pthread_key_t param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong *unaff_RDI;
  longlong lVar5;
  bool bVar6;
  longlong local_b0;
  char local_a8;
  longlong *local_78;
  longlong *local_68;
  char local_60;
  longlong *local_40;
  char local_38;
  
  if (unaff_RDI[0x2c] != 0) {
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_68 + 0x450))();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_0063f230();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*unaff_RDI + 0x5e0))();
        cVar2 = FUN_0078cda0();
        if (cVar2 == '\0') {
          FUN_0063f230();
          iVar3 = FUN_00228b30();
          bVar6 = iVar3 != 2;
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar6 = false;
        }
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (bVar6) {
          FUN_0063f230();
          FUN_0021a630();
          (**(code **)(*local_40 + 0xe28))();
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          FUN_00323290();
          if (local_68 == (longlong *)0x0) {
            local_78 = (longlong *)0x0;
            bVar6 = false;
          }
          else {
            local_78 = local_68;
            if (local_60 == '\0') {
              FUN_00d50b00();
            }
            bVar6 = true;
          }
          if (0 < *(int *)((longlong)local_68 + 0xc)) {
            lVar5 = 0;
            do {
              plVar1 = *(longlong **)(local_68[2] + lVar5 * 8);
              pvVar4 = _pthread_getspecific(param_1);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012eb770();
              if (local_38 == '\0') {
                if (local_40 == (longlong *)0x0) goto LAB_0063a860;
                FUN_00d50b00();
LAB_0063a820:
                FUN_00d235a0();
                FUN_00d50b20();
              }
              else {
                if (local_40 != (longlong *)0x0) goto LAB_0063a820;
LAB_0063a860:
                FUN_00d235a0();
                local_40 = plVar1;
              }
              local_38 = '\0';
              lVar5 = lVar5 + 1;
            } while ((int)lVar5 < *(int *)((longlong)local_68 + 0xc));
          }
          FUN_000be170();
          FUN_00d50b20();
        }
        else {
          bVar6 = false;
          local_78 = (longlong *)0x0;
        }
        FUN_01bd5340();
        if ((bVar6) && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x5d8))();
      FUN_006fc300();
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_01bd5340();
      if (local_68 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @00109ad0 — 1079 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00109b8b) */
/* WARNING: Removing unreachable block (ram,0x00109b90) */
/* WARNING: Removing unreachable block (ram,0x00109bb0) */
/* WARNING: Removing unreachable block (ram,0x00109b92) */
/* WARNING: Removing unreachable block (ram,0x00109bb2) */
/* WARNING: Removing unreachable block (ram,0x00109c40) */
/* WARNING: Removing unreachable block (ram,0x00109c60) */
/* WARNING: Removing unreachable block (ram,0x00109c42) */
/* WARNING: Removing unreachable block (ram,0x00109c62) */

undefined8 FUN_00109ad0(int param_1,char param_2,int param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int extraout_var;
  longlong lVar4;
  undefined8 uVar5;
  char unaff_SIL;
  longlong unaff_RDI;
  char local_res8;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  int local_94;
  longlong local_90;
  char local_88;
  longlong local_58;
  char local_50;
  int local_40;
  
  if (((((local_res8 == '\0') && (*(char *)(unaff_RDI + 0xc) == unaff_SIL)) &&
       (cVar2 = FUN_01a90590(), cVar2 == param_2)) &&
      ((iVar3 = FUN_01a90480(), iVar3 == param_3 && (iVar3 = FUN_01a904a0(), iVar3 == param_1)))) &&
     ((FUN_01a93720(), extraout_var == param_4 && (*(char *)(unaff_RDI + 0xd) == '\0')))) {
    uVar5 = 0;
  }
  else {
    *(undefined1 *)(unaff_RDI + 0xd) = 0;
    *(char *)(unaff_RDI + 0xc) = unaff_SIL;
    lVar1 = *(longlong *)(unaff_RDI + 0x70);
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
        FUN_00106380();
      }
      FUN_0010c010();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x78);
    local_94 = param_4;
    if (lVar1 != 0) {
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (*(int *)(lVar1 + 0xc) <= local_40) break;
        local_58 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8);
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
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      FUN_00d6f370();
      FUN_00108380();
      if (local_c0 == '\0') {
        if (local_c8 != 0) {
          FUN_00d50b00();
        }
        lVar1 = *(longlong *)(unaff_RDI + 0x10);
      }
      else {
        lVar1 = *(longlong *)(unaff_RDI + 0x10);
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
    lVar1 = DAT_026d7d88;
    if (DAT_026d7d88 != 0) {
      FUN_00d50b00();
    }
    FUN_00d50b00();
    local_a8 = 0;
    local_a0 = '\0';
    FUN_00d40470(&local_a8,&stack0xffffffffffffff80,1,3);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
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
// @0027e3a0 — 843 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0027e68c) */
/* WARNING: Removing unreachable block (ram,0x0027e698) */
/* WARNING: Removing unreachable block (ram,0x0027e528) */
/* WARNING: Removing unreachable block (ram,0x0027e531) */
/* WARNING: Removing unreachable block (ram,0x0027e3eb) */
/* WARNING: Removing unreachable block (ram,0x0027e3f4) */
/* WARNING: Removing unreachable block (ram,0x0027e563) */
/* WARNING: Removing unreachable block (ram,0x0027e56c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0027e3a0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *unaff_RSI;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  FUN_01f51ef0();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
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
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*local_40 + 0x368))();
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  iVar2 = (**(code **)(*local_40 + 0x390))();
  uVar3 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
  if ((iVar2 == 0) && ((**(code **)(*local_40 + 0x380))(), local_40 != (longlong *)0x0)) {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    FUN_01f15680(param_2);
    if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_01f15be0(DAT_02390d2c);
    FUN_01f15740();
    FUN_01f15bb0();
    (**(code **)(*local_40 + 0x370))
              ((uint)param_1 ^ _DAT_023945e0,(uint)((ulonglong)param_1 >> 0x20) ^ _DAT_023945e0);
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_01f15bb0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    (**(code **)(*plVar1 + 0x610))((uint)param_1,param_2);
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01f15a80();
    FUN_01f15b80();
    FUN_00c91c80();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
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
// @0063f230 — 816 bytes
// ============================================================

longlong * FUN_0063f230(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong *unaff_RDI;
  longlong lVar7;
  char local_70;
  undefined7 uStack_6f;
  char local_68;
  longlong local_60;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  int local_40;
  longlong local_38;
  
  FUN_01e561b0();
  lVar6 = local_60;
  if ((local_58[0] != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (lVar6 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
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
        lVar3 = (longlong)(int)local_48;
        iVar5 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar5);
        if (*(int *)(local_50 + 0xc) <= iVar5) break;
        local_60 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar3 * 8);
        if (local_60 == lVar1) {
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (local_58[0] != '\0') {
            *unaff_RDI = lVar1;
            goto LAB_0063f4f0;
          }
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          *unaff_RDI = lVar1;
LAB_0063f529:
          *(undefined1 *)(unaff_RDI + 1) = 1;
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
          *(undefined1 *)(unaff_RDI + 1) = 0;
          if (local_58[0] == '\0') {
            if (local_60 != 0) {
              FUN_00d50b00();
            }
LAB_0063f526:
            *unaff_RDI = lVar7;
            goto LAB_0063f529;
          }
LAB_0063f4ed:
          *unaff_RDI = local_60;
LAB_0063f4f0:
          *(undefined1 *)(unaff_RDI + 1) = 1;
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
          *(undefined1 *)(unaff_RDI + 1) = 0;
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
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
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
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((local_70 == '\0') && (lVar3 != 0)) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
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
  return unaff_RDI;
}




// ============================================================
// @00551070 — 794 bytes
// ============================================================

void FUN_00551070(void)

{
  longlong lVar1;
  void *pvVar2;
  uint uVar3;
  pthread_key_t pVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar6;
  pthread_key_t pVar7;
  
  if (*unaff_RSI != 0) {
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    uVar3 = *(int *)(lVar1 + 0xc) << 2;
    uVar5 = (ulonglong)uVar3;
    if (uVar3 == *(uint *)(*unaff_RSI + 0xc)) {
      pVar7 = 0;
      for (iVar6 = 0; pVar4 = (pthread_key_t)uVar5, iVar6 < *(int *)(lVar1 + 0xc); iVar6 = iVar6 + 1
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
        uVar5 = (ulonglong)(int)(pVar7 + 3);
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
// @0054ca70 — 773 bytes
// ============================================================

void FUN_0054ca70(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_30;
  char local_28;
  
  FUN_01e534b0();
  if (*(longlong *)(unaff_RDI + 0x80) == 0) goto LAB_0054cb06;
  FUN_01e10550();
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  lVar2 = lVar1;
  if (lVar1 != local_30) {
    lVar2 = local_30;
    if (local_28 == '\0') {
      if (local_30 == 0) {
        lVar2 = 0;
        goto LAB_0054cab4;
      }
      FUN_00d50b00();
      lVar1 = *(longlong *)(unaff_RDI + 0x78);
      *(longlong *)(unaff_RDI + 0x78) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0054cab4:
      *(longlong *)(unaff_RDI + 0x78) = lVar2;
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
  if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x640))();
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
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_a0 = DAT_0270d078;
  if (DAT_0270d078 != 0) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  FUN_00d50b00();
  local_80 = DAT_02787860;
  if (DAT_02787860 != 0) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0063ec20 — 765 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0063eeb8) */
/* WARNING: Removing unreachable block (ram,0x0063ee59) */
/* WARNING: Removing unreachable block (ram,0x0063ee62) */
/* WARNING: Removing unreachable block (ram,0x0063ee12) */
/* WARNING: Removing unreachable block (ram,0x0063edc3) */
/* WARNING: Removing unreachable block (ram,0x0063edcc) */
/* WARNING: Removing unreachable block (ram,0x0063ee1b) */
/* WARNING: Removing unreachable block (ram,0x0063ee88) */
/* WARNING: Removing unreachable block (ram,0x0063ee91) */
/* WARNING: Removing unreachable block (ram,0x0063eec1) */

void FUN_0063ec20(void)

{
  longlong lVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong local_98;
  char local_90;
  longlong local_40;
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
    lVar1 = *unaff_RSI;
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
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) {
    FUN_00177aa0();
  }
  FUN_00d23f50();
  (**(code **)(*(longlong *)*unaff_RSI + 0x5e0))();
  if (local_40 == *unaff_RSI) {
    FUN_0062a580();
    *(undefined8 *)(unaff_RDI + 0x158) = 0;
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0027db70 — 751 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0027dd9c) */
/* WARNING: Removing unreachable block (ram,0x0027dda5) */
/* WARNING: Removing unreachable block (ram,0x0027de15) */
/* WARNING: Removing unreachable block (ram,0x0027de21) */
/* WARNING: Removing unreachable block (ram,0x0027dc07) */
/* WARNING: Removing unreachable block (ram,0x0027dc10) */
/* WARNING: Removing unreachable block (ram,0x0027de71) */
/* WARNING: Removing unreachable block (ram,0x0027de7e) */

void FUN_0027db70(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  lVar1 = local_68;
  (**(code **)(*unaff_RDI + 0x728))();
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
        local_68 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + (ulonglong)uVar3 * 8);
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
// @00639540 — 747 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x006397c7) */
/* WARNING: Removing unreachable block (ram,0x006397d3) */

void FUN_00639540(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *unaff_RDI;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  longlong local_28;
  char local_20;
  
  lVar1 = DAT_026f6f70;
  if (DAT_026f6f70 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_027258e8;
  if (DAT_027258e8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar2;
  local_b0 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  FUN_00d31230(&local_a8,&local_b8);
  local_38 = local_58;
  local_30 = 0;
  local_98 = DAT_027258a0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
      local_98 = DAT_027258a0;
    }
  }
  else {
    local_50 = '\0';
  }
  local_30 = '\x01';
  DAT_027258a0 = local_98;
  if (local_98 != 0) {
    local_30 = '\x01';
    FUN_00d50b00();
  }
  lVar2 = DAT_027258f0;
  local_90 = '\x01';
  if (DAT_027258f0 != 0) {
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
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_60 == '\0') {
    if (local_68 == 0) {
      *unaff_RDI = 0;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      FUN_00d50b00();
      *unaff_RDI = lVar2;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    *unaff_RDI = local_68;
    *(undefined1 *)(unaff_RDI + 1) = 1;
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
// @0054d030 — 707 bytes
// ============================================================

void FUN_0054d030(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  undefined8 *puVar4;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  undefined8 *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x70);
  lVar2 = *unaff_RSI;
  if (lVar1 == lVar2) {
    return;
  }
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  *(longlong *)(unaff_RDI + 0x70) = lVar2;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x80) == 0) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x78) == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(unaff_RDI + 0x70);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_00d8ede0();
    puVar4 = local_60;
    if (local_58 == '\0') {
      if (local_60 == (undefined8 *)0x0) {
        puVar4 = (undefined8 *)0x0;
      }
      else {
        FUN_00d50b00();
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
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
  lVar1 = DAT_0270d080;
  if (DAT_0270d080 != 0) {
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
  local_60 = (undefined8 *)&DAT_0253d630;
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_68 = 0;
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
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
    if (((local_60 != (undefined8 *)0x0) && (FUN_00d50b00(), local_58 != '\0')) &&
       (local_60 != (undefined8 *)0x0)) {
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
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0063af70 — 685 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0063b202) */
/* WARNING: Removing unreachable block (ram,0x0063b0e9) */
/* WARNING: Removing unreachable block (ram,0x0063b0f5) */
/* WARNING: Removing unreachable block (ram,0x0063b20b) */

void FUN_0063af70(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar3;
  longlong local_78;
  char local_70;
  longlong *local_58;
  char local_50;
  longlong local_48;
  char local_40;
  longlong *local_38;
  char local_30;
  
  plVar1 = (longlong *)*unaff_RSI;
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x5e0))();
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b20();
  }
  FUN_0062aee0();
  if (unaff_RDI[0x16] == 0) {
    FUN_0062bd30();
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x740))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    FUN_0062b480();
  }
  local_38 = (longlong *)*unaff_RSI;
  local_30 = '\0';
  FUN_00d21140();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x16] != 0) {
    uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x5d0))();
    local_58 = local_38;
    local_50 = 0;
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    local_50 = '\x01';
    FUN_00177000(uVar3,&local_58);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  cVar2 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
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
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((longlong *)unaff_RDI[0x28] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x588))();
  }
  (**(code **)(*unaff_RDI + 0x5c8))(0);
  return;
}




// ============================================================
// @0054c3c0 — 679 bytes
// str: ""handleClose""
// str: ""MDURLOpenedController""
// str: ""handleCopyURL""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054c3c0(void)

{
  int iVar1;
  
  if (DAT_0280a3b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270e710 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02726298 = FUN_00015ff0();
          _DAT_02726280 = "MDURLOpenedController";
          _DAT_02726288 = 0x90;
          _DAT_02726290 = FUN_00098280;
          _DAT_027262a0 = 0;
          uRam00000000027262a8 = 0;
          _DAT_027262b0 = 0;
          uRam00000000027262b8 = 0;
          _DAT_027262c0 = 0;
          uRam00000000027262c8 = 0;
          _DAT_027262d0 = 0;
          uRam00000000027262d8 = 0;
          _DAT_027262e0 = 0;
          uRam00000000027262e8 = 0;
          _DAT_027262f0 = 0;
          uRam00000000027262f8 = 0;
          _DAT_02726300 = 0;
          uRam0000000002726308 = 0;
          _DAT_02726310 = 0;
          uRam0000000002726318 = 0;
          _DAT_02726320 = 0;
          uRam0000000002726328 = 0;
          _DAT_02726330 = 0;
          uRam0000000002726338 = 0;
          _DAT_02726340 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a370 = "handleCopyURL";
      _DAT_0280a378 = &DAT_02726280;
      _DAT_0280a380 = 0;
      _DAT_0280a388 = &DAT_0270d088;
      _DAT_0280a390 = FUN_0054db50;
      _DAT_0280a398 = 0x5c1;
      _DAT_0280a3a0 = 0;
      uRam000000000280a3a8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_0280a3f8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270e710 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02726298 = FUN_00015ff0();
          _DAT_02726280 = "MDURLOpenedController";
          _DAT_02726288 = 0x90;
          _DAT_02726290 = FUN_00098280;
          _DAT_027262a0 = 0;
          uRam00000000027262a8 = 0;
          _DAT_027262b0 = 0;
          uRam00000000027262b8 = 0;
          _DAT_027262c0 = 0;
          uRam00000000027262c8 = 0;
          _DAT_027262d0 = 0;
          uRam00000000027262d8 = 0;
          _DAT_027262e0 = 0;
          uRam00000000027262e8 = 0;
          _DAT_027262f0 = 0;
          uRam00000000027262f8 = 0;
          _DAT_02726300 = 0;
          uRam0000000002726308 = 0;
          _DAT_02726310 = 0;
          uRam0000000002726318 = 0;
          _DAT_02726320 = 0;
          uRam0000000002726328 = 0;
          _DAT_02726330 = 0;
          uRam0000000002726338 = 0;
          _DAT_02726340 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0280a3b8 = "handleClose";
      _DAT_0280a3c0 = &DAT_02726280;
      _DAT_0280a3c8 = 0;
      _DAT_0280a3d0 = &DAT_0270d088;
      _DAT_0280a3d8 = FUN_0054db50;
      _DAT_0280a3e0 = 0x5c9;
      _DAT_0280a3e8 = 0;
      uRam000000000280a3f0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @00107b60 — 648 bytes
// ============================================================

void FUN_00107b60(void)

{
  longlong lVar1;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  
  lVar1 = *(longlong *)(unaff_RDI + 0x50);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01bebdd0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(char *)(unaff_RDI + 0xc) == '\0') {
    lVar1 = *(longlong *)(unaff_RDI + 0x48);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec070();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x58);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bebb30();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x40);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec310();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  else {
    lVar1 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bec070();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01bebb30();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RDI + 0x18);
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
// @0054f510 — 534 bytes
// ============================================================

undefined8 FUN_0054f510(double param_1,longlong *param_2,longlong param_3)

{
  double dVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong in_RCX;
  longlong lVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  longlong local_38;
  
  if ((in_RCX < param_3) && (lVar2 = *(longlong *)(unaff_RDI + 0x38), lVar2 != 0)) {
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
        lVar8 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + lVar9 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
        if ((pvVar3 == (void *)0x0) || (lVar4 = FUN_00e8b990(), lVar4 == 0)) {
          dVar11 = *(double *)(lVar8 + 0x38);
          dVar12 = *(double *)(lVar8 + 0x48);
          lVar4 = lVar8;
          if (dVar11 < *(double *)(lVar8 + 0x40)) goto LAB_0054f614;
LAB_0054f625:
          dVar11 = dVar12;
        }
        else {
          lVar4 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
          dVar11 = *(double *)(lVar4 + 0x38);
          dVar12 = *(double *)(lVar4 + 0x48);
          if (*(double *)(lVar4 + 0x40) <= dVar11) goto LAB_0054f625;
LAB_0054f614:
          if ((dVar12 < *(double *)(lVar4 + 0x50)) && (dVar12 < dVar11)) goto LAB_0054f625;
        }
        lVar4 = FUN_00e7dae0(dVar11 * param_1);
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          lVar8 = *(longlong *)(lVar8 + 0x20 + (ulonglong)(*(uint *)(lVar5 + 0x154) & 1) * 8);
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
      *unaff_RSI = lVar8;
      *param_2 = local_38;
      return 1;
    }
  }
  return 0;
}




// ============================================================
// @0054e980 — 529 bytes
// ============================================================

void FUN_0054e980(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  void *pvVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar5;
  longlong local_68;
  char local_60 [8];
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  char local_40;
  undefined7 uStack_3f;
  char local_38;
  
  while( true ) {
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar5 = *(int *)(lVar1 + 0xc);
    FUN_00d50b20();
    if (iVar5 == 0) break;
    lVar1 = *(longlong *)(unaff_RDI + 0x38);
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
  lVar1 = *unaff_RSI;
  if (lVar1 != 0) {
    local_60[0] = '\0';
    local_48 = 0;
    local_50 = 0;
    local_58 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar5 = 0;
      do {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
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
// @0027ee00 — 516 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0027ee45) */
/* WARNING: Removing unreachable block (ram,0x0027ee51) */

void FUN_0027ee00(void)

{
  char cVar1;
  longlong unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_30;
  char local_28;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x130) + 0x398))();
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    FUN_00d403d0();
    FUN_00d50b00();
    local_90 = DAT_026fb7d8;
    if (DAT_026fb7d8 != 0) {
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
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_70 = DAT_026fb7e0;
    if (DAT_026fb7e0 != 0) {
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
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_0027ea40();
  }
  return;
}



