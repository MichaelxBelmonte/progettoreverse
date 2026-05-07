// Reconstructed implementation of MUScaleModeSequence
// From MikeCore binary — reverse-engineered pseudocode

#include "MUScaleModeSequence.h"

// ============================================================
// @01b92cc0 — 6370 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b93efe) */
/* WARNING: Removing unreachable block (ram,0x01b93f03) */

undefined8 * FUN_01b92cc0(undefined4 param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  void *pvVar8;
  pthread_key_t in_ECX;
  pthread_key_t pVar9;
  char *pcVar10;
  int iVar11;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  longlong *local_348;
  undefined1 local_340;
  undefined4 local_338;
  longlong *local_318;
  char local_310;
  longlong *local_308;
  char local_300;
  longlong local_2f8;
  char local_2f0;
  longlong *local_2e8;
  char local_2e0;
  longlong local_2d8;
  char local_2d0;
  longlong local_2c8;
  char local_2c0;
  longlong local_2b8;
  char local_2b0;
  longlong local_2a8;
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
  longlong local_178;
  char local_170;
  undefined8 local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  char local_40;
  
  local_338 = param_1;
  plVar6 = (longlong *)FUN_00e8fc40();
  FUN_001d7da0();
  local_88 = plVar6;
  (**(code **)(*plVar6 + 0x18))();
  cVar4 = (**(code **)(*unaff_RSI + 0x9d0))();
  if (cVar4 == '\0') {
    FUN_01b6d0d0();
    pvVar8 = _pthread_getspecific(in_ECX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*unaff_RSI + 0xa70))(local_338);
    FUN_012523c0(&local_b0,0,&local_168,0);
    plVar6 = local_80;
    pcVar10 = &local_58;
    if (local_78[0] != '\0') {
      pcVar10 = local_78;
    }
    local_58 = local_78[0];
    *pcVar10 = '\0';
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 == '\0') && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
      goto LAB_01b92e21;
    }
    bVar2 = false;
  }
  else {
    local_b0 = (**(code **)(*unaff_RSI + 0x9d8))();
    local_168 = (**(code **)(*unaff_RSI + 0x9e0))();
LAB_01b92e21:
    cVar4 = (**(code **)(*unaff_RSI + 0xa78))();
    bVar2 = true;
    if (cVar4 != '\0') {
      FUN_01b95ae0(local_168,local_b0,1,0);
      plVar6 = local_80;
      if (local_78[0] == '\0') {
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01b92e89;
        }
      }
      else if (local_80 != (longlong *)0x0) {
LAB_01b92e89:
        local_78[0] = '\0';
        local_80 = (longlong *)0x0;
        local_70 = plVar6;
        local_68 = 0xffffffff;
        local_60 = 0;
        local_68._4_4_ = 0;
        while( true ) {
          if (local_68._4_4_ != 0) {
            if (local_68._4_4_ < 1) {
              iVar11 = -local_68._4_4_;
            }
            else {
              iVar11 = (int)local_68 - local_68._4_4_;
              local_68 = CONCAT44(local_68._4_4_,iVar11);
              FUN_00d23690();
              local_60 = local_60 + local_68._4_4_;
              iVar11 = 0;
            }
            local_68 = CONCAT44(iVar11,(int)local_68);
          }
          lVar7 = (longlong)(int)local_68;
          iVar11 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,iVar11);
          if (*(int *)((longlong)local_70 + 0xc) <= iVar11) break;
          local_318 = *(longlong **)(local_70[2] + 8 + lVar7 * 8);
          local_310 = '\0';
          local_80 = local_318;
          uVar13 = (**(code **)(*unaff_RSI + 0x940))(local_b0,&local_318);
          plVar1 = local_48;
          if (local_40 == '\0') {
            if (((local_48 != (longlong *)0x0) && (uVar13 = FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              uVar13 = FUN_00d50b20();
            }
          }
          else {
            local_40 = '\0';
          }
          if ((local_310 != '\0') && (local_318 != (longlong *)0x0)) {
            uVar13 = FUN_00d50b20();
          }
          lVar7 = DAT_027e51d0;
          if (plVar1 != (longlong *)0x0) {
            local_308 = plVar1;
            local_300 = '\0';
            if (DAT_027e51d0 != 0) {
              uVar13 = FUN_00d50b00();
            }
            local_2f8 = lVar7;
            local_2f0 = '\x01';
            FUN_01d5d9b0(uVar13,&local_2f8);
            if ((local_2f0 != '\0') && (local_2f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_300 != '\0') && (local_308 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            uVar13 = FUN_01d66da0();
            plVar1 = DAT_027ebef0;
            local_2e8 = local_80;
            local_2e0 = '\0';
            if (DAT_027ebef0 != (longlong *)0x0) {
              uVar13 = FUN_00d50b00();
            }
            local_48 = plVar1;
            local_40 = '\0';
            FUN_00ca0840(uVar13,&local_48);
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_2e0 != '\0') && (local_2e8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            uVar13 = FUN_00dd67f0();
            local_160 = local_a8;
            local_158 = 0;
            plVar1 = DAT_027e2690;
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                uVar13 = FUN_00d50b00();
                plVar1 = DAT_027e2690;
              }
            }
            else {
              local_a0 = '\0';
            }
            local_158 = '\x01';
            DAT_027e2690 = plVar1;
            if (plVar1 != (longlong *)0x0) {
              local_158 = '\x01';
              uVar13 = FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = plVar1;
            FUN_00ca0840(uVar13,&local_48);
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            FUN_01d5e230();
            FUN_01d66da0();
            uVar13 = FUN_00dd67f0();
            local_150 = local_a8;
            local_148 = 0;
            plVar1 = DAT_027652e0;
            if (local_a0 == '\0') {
              if (local_a8 != 0) {
                uVar13 = FUN_00d50b00();
                plVar1 = DAT_027652e0;
              }
            }
            else {
              local_a0 = '\0';
            }
            local_148 = '\x01';
            DAT_027652e0 = plVar1;
            if (plVar1 != (longlong *)0x0) {
              local_148 = '\x01';
              uVar13 = FUN_00d50b00();
            }
            local_40 = '\0';
            local_48 = plVar1;
            FUN_00ca0840(uVar13,&local_48);
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            if ((local_148 != '\0') && (local_150 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_0176e420();
        if (*(int *)((longlong)plVar6 + 0xc) != 0) {
          FUN_01d5dc80();
        }
        FUN_00d50b20();
        bVar2 = true;
      }
    }
  }
  lVar7 = DAT_027e26a0;
  if (DAT_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027e51d8;
  local_2d8 = lVar7;
  local_2d0 = '\x01';
  if (DAT_027e51d8 != 0) {
    FUN_00d50b00();
  }
  local_2c8 = lVar3;
  local_2c0 = '\x01';
  local_2b8 = 0;
  local_2b0 = '\0';
  uVar13 = FUN_00d31230(&local_2b8,&local_2c8);
  local_140 = local_80;
  local_138 = 0;
  local_2a8 = DAT_0272a6a8;
  if (local_78[0] == '\0') {
    if (local_80 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
      local_2a8 = DAT_0272a6a8;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_138 = '\x01';
  DAT_0272a6a8 = local_2a8;
  if (local_2a8 != 0) {
    local_138 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_2a0 = '\x01';
  FUN_01d5d9b0(uVar13,&local_2a8);
  if ((local_2a0 != '\0') && (local_2a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_2b0 != '\0') && (local_2b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2c0 != '\0') && (local_2c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2d0 != '\0') && (local_2d8 != 0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar13 = FUN_00dd67f0();
    local_130 = local_98;
    local_128 = 0;
    plVar6 = DAT_027e2690;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar13 = FUN_00d50b00();
        plVar6 = DAT_027e2690;
      }
    }
    else {
      local_90 = '\0';
    }
    local_128 = '\x01';
    DAT_027e2690 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      local_128 = '\x01';
      uVar13 = FUN_00d50b00();
    }
    local_78[0] = '\0';
    local_80 = plVar6;
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar13 = FUN_00dd67f0();
    local_120 = local_98;
    local_118 = 0;
    plVar6 = DAT_027652e0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar13 = FUN_00d50b00();
        plVar6 = DAT_027652e0;
      }
    }
    else {
      local_90 = '\0';
    }
    local_118 = '\x01';
    DAT_027652e0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      local_118 = '\x01';
      uVar13 = FUN_00d50b00();
    }
    local_78[0] = '\0';
    local_80 = plVar6;
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = DAT_027e26a0;
  if (DAT_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027e51e0;
  local_298 = lVar7;
  local_290 = '\x01';
  if (DAT_027e51e0 != 0) {
    FUN_00d50b00();
  }
  local_288 = lVar3;
  local_280 = '\x01';
  local_278 = 0;
  local_270 = '\0';
  uVar13 = FUN_00d31230(&local_278,&local_288);
  local_110 = local_80;
  local_108 = 0;
  local_268 = DAT_027e51e8;
  if (local_78[0] == '\0') {
    if (local_80 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
      local_268 = DAT_027e51e8;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_108 = '\x01';
  DAT_027e51e8 = local_268;
  if (local_268 != 0) {
    local_108 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_260 = '\x01';
  FUN_01d5d9b0(uVar13,&local_268);
  if ((local_260 != '\0') && (local_268 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_270 != '\0') && (local_278 != 0)) {
    FUN_00d50b20();
  }
  if ((local_280 != '\0') && (local_288 != 0)) {
    FUN_00d50b20();
  }
  if ((local_290 != '\0') && (local_298 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar2) {
    FUN_01d5e230();
    FUN_01d66da0();
    uVar13 = FUN_00dd67f0();
    local_100 = local_98;
    local_f8 = 0;
    plVar6 = DAT_027e2690;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar13 = FUN_00d50b00();
        plVar6 = DAT_027e2690;
      }
    }
    else {
      local_90 = '\0';
    }
    local_f8 = '\x01';
    DAT_027e2690 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      local_f8 = '\x01';
      uVar13 = FUN_00d50b00();
    }
    local_78[0] = '\0';
    local_80 = plVar6;
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    FUN_01d66da0();
    uVar13 = FUN_00dd67f0();
    local_f0 = local_98;
    local_e8 = 0;
    plVar6 = DAT_027652e0;
    if (local_90 == '\0') {
      if (local_98 != 0) {
        uVar13 = FUN_00d50b00();
        plVar6 = DAT_027652e0;
      }
    }
    else {
      local_90 = '\0';
    }
    local_e8 = '\x01';
    DAT_027652e0 = plVar6;
    if (plVar6 != (longlong *)0x0) {
      local_e8 = '\x01';
      uVar13 = FUN_00d50b00();
    }
    local_78[0] = '\0';
    local_80 = plVar6;
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01d5dc80();
  local_258 = DAT_027e26a0;
  if (DAT_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = DAT_027e51f0;
  local_250 = '\x01';
  if (DAT_027e51f0 != 0) {
    FUN_00d50b00();
  }
  local_248 = lVar7;
  local_240 = '\x01';
  local_238 = 0;
  local_230 = '\0';
  plVar6 = &local_238;
  uVar13 = FUN_00d31230(plVar6,&local_248);
  local_e0 = local_80;
  pVar9 = (pthread_key_t)plVar6;
  local_d8 = 0;
  local_228 = DAT_027e3c38;
  if (local_78[0] == '\0') {
    if (local_80 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
      local_228 = DAT_027e3c38;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_d8 = '\x01';
  DAT_027e3c38 = local_228;
  if (local_228 != 0) {
    local_d8 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_220 = '\x01';
  FUN_01d5d9b0(uVar13,&local_228);
  if ((local_220 != '\0') && (local_228 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
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
  FUN_01d5e230();
  pplVar12 = &local_48;
  uVar13 = FUN_01d66da0();
  local_218 = DAT_027e3cd0;
  if (DAT_027e3cd0 != 0) {
    uVar13 = FUN_00d50b00();
  }
  plVar6 = DAT_027e3c40;
  local_210 = '\x01';
  if (DAT_027e3c40 != (longlong *)0x0) {
    uVar13 = FUN_00d50b00();
  }
  local_80 = plVar6;
  local_78[0] = '\0';
  FUN_00ca0840(uVar13,&local_80);
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_210 != '\0') && (local_218 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  FUN_01b6d0d0();
  pvVar8 = _pthread_getspecific(pVar9);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*unaff_RSI + 0xa70))(local_338);
  pVar9 = 0;
  FUN_012523c0(0,0,0,0);
  plVar6 = local_80;
  local_40 = local_78[0] != '\0';
  local_48 = local_80;
  if ((bool)local_40) {
    local_78[0] = '\0';
  }
  uVar13 = FUN_0013de80();
  if (plVar6 == (longlong *)0x0) {
LAB_01b93f33:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar13 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b93f33;
  }
  plVar1 = *pplVar12;
  if (*(char *)(pplVar12 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar12 + 1) = 0;
  }
  if ((local_40 != '\0') && (plVar6 != (longlong *)0x0)) {
    uVar13 = FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    uVar13 = FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_01b94215;
  local_340 = 0;
  local_348 = plVar1;
  FUN_01b91500(uVar13,&local_348);
  if (local_78[0] == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01b93fcf;
    }
  }
  else if (local_80 != (longlong *)0x0) {
LAB_01b93fcf:
    FUN_01d5e230();
    uVar13 = FUN_01d66da0();
    local_208 = DAT_027e3c60;
    if (DAT_027e3c60 != 0) {
      uVar13 = FUN_00d50b00();
    }
    plVar6 = DAT_027e3c40;
    local_200 = '\x01';
    if (DAT_027e3c40 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    local_80 = plVar6;
    local_78[0] = '\0';
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_200 != '\0') && (local_208 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar9);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_01743720();
    iVar11 = iVar5 * 7 >> 0x1f;
    FUN_00d46530((((uint)((iVar5 * 7) / 6 + iVar11) >> 1) - iVar11) * 0xc);
    plVar6 = local_80;
    if ((((local_78[0] == '\0') && (local_80 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d5e230();
    uVar13 = FUN_01d66da0();
    plVar1 = DAT_027e3c68;
    local_1f8 = plVar6;
    local_1f0 = '\0';
    if (DAT_027e3c68 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
    }
    local_80 = plVar1;
    local_78[0] = '\0';
    FUN_00ca0840(uVar13,&local_80);
    if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01b94215:
  FUN_01d5dc80();
  local_1e8 = DAT_027e26a0;
  if (DAT_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar7 = DAT_027e51f8;
  local_1e0 = '\x01';
  if (DAT_027e51f8 != 0) {
    FUN_00d50b00();
  }
  local_1d8 = lVar7;
  local_1d0 = '\x01';
  local_1c8 = 0;
  local_1c0 = '\0';
  uVar13 = FUN_00d31230(&local_1c8,&local_1d8);
  local_d0 = local_80;
  local_c8 = 0;
  local_1b8 = DAT_027e26e8;
  if (local_78[0] == '\0') {
    if (local_80 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
      local_1b8 = DAT_027e26e8;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_c8 = '\x01';
  DAT_027e26e8 = local_1b8;
  if (local_1b8 != 0) {
    local_c8 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_1b0 = '\x01';
  FUN_01d5d9b0(uVar13,&local_1b8);
  if ((local_1b0 != '\0') && (local_1b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1c0 != '\0') && (local_1c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1d0 != '\0') && (local_1d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e0 != '\0') && (local_1e8 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar7 = DAT_027e26a0;
  if (DAT_027e26a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027e5200;
  local_1a8 = lVar7;
  local_1a0 = '\x01';
  if (DAT_027e5200 != 0) {
    FUN_00d50b00();
  }
  local_198 = lVar3;
  local_190 = '\x01';
  local_188 = 0;
  local_180 = '\0';
  uVar13 = FUN_00d31230(&local_188,&local_198);
  local_c0 = local_80;
  local_b8 = 0;
  local_178 = DAT_027e5208;
  if (local_78[0] == '\0') {
    if (local_80 != (longlong *)0x0) {
      uVar13 = FUN_00d50b00();
      local_178 = DAT_027e5208;
    }
  }
  else {
    local_78[0] = '\0';
  }
  local_b8 = '\x01';
  DAT_027e5208 = local_178;
  if (local_178 != 0) {
    local_b8 = '\x01';
    uVar13 = FUN_00d50b00();
  }
  local_170 = '\x01';
  FUN_01d5d9b0(uVar13,&local_178);
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
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
  FUN_01d5e230();
  FUN_01d66ab0();
  if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = local_88;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}




// ============================================================
// @01b91920 — 1487 bytes
// ============================================================

ulonglong * FUN_01b91920(pthread_key_t param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char cVar6;
  void *pvVar7;
  pthread_key_t pVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong *unaff_RSI;
  ulonglong *unaff_RDI;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulonglong local_90;
  ulonglong local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  ulonglong local_70;
  undefined8 local_68;
  ulonglong local_58;
  char local_50;
  char local_41;
  ulonglong local_40;
  char local_38 [8];
  
  local_68 = param_2;
  FUN_01b920e0();
  uVar3 = local_58;
  pvVar7 = _pthread_getspecific(param_1);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
    param_2 = local_68;
  }
  FUN_012521f0(param_2,0,&local_88,&local_70);
  uVar4 = local_40;
  pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_2 >> 8),local_38[0]);
  pcVar11 = &local_80;
  if (local_38[0] != '\0') {
    pcVar11 = local_38;
  }
  local_80 = local_38[0];
  *pcVar11 = '\0';
  if ((local_38[0] != '\0') && (uVar4 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 == '\0') && (uVar4 != 0)) {
    FUN_00d50b00();
  }
  if ((local_50 != '\0') && (uVar3 != 0)) {
    FUN_00d50b20();
  }
  if (uVar4 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_01b91500();
  if (local_40 != 0) {
    FUN_01b91500();
    uVar3 = local_58;
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar6 = FUN_0173f250();
    if ((local_50 != '\0') && (uVar3 != 0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar6 != '\0') goto LAB_01b91ad5;
LAB_01b91bd9:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto LAB_01b91be8;
  }
LAB_01b91ad5:
  local_40 = local_68;
  FUN_00e7b970();
  local_a0 = local_40;
  local_40 = local_70;
  FUN_00e7b970();
  local_98 = local_40;
  local_40 = local_40 & 0xffffffff00000000;
  if (local_a0._4_4_ == 0) {
    iVar2 = (int)(local_98 >> 0x20);
  }
  else {
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01b91bd9;
    iVar2 = local_98._4_4_;
  }
  if (iVar2 != 0) {
    local_58 = local_58 & 0xffffffff00000000;
    cVar6 = FUN_00e7c650();
    if (cVar6 == '\0') goto LAB_01b91bd9;
  }
  local_50 = '\0';
  local_58 = 0;
  local_90 = local_88;
  local_a8 = local_70;
  FUN_01b920e0();
  uVar3 = local_40;
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar9 = &local_90;
  local_41 = FUN_01253c10(puVar9,&local_58,&local_a8,0);
  pVar8 = (pthread_key_t)puVar9;
  if ((local_38[0] != '\0') && (uVar3 != 0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(pVar8);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  uVar5 = local_40;
  cVar6 = local_50;
  uVar3 = local_58;
  if (local_58 == local_40) {
    if ((local_50 == '\0') && (local_40 != 0)) {
      if (local_38[0] != '\0') goto LAB_01b91cbb;
      FUN_00d50b00();
      goto LAB_01b91cee;
    }
LAB_01b91cf2:
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_38[0] == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
      local_58 = uVar5;
      if ((cVar6 != '\0') && (uVar3 != 0)) {
        FUN_00d50b20();
      }
LAB_01b91cee:
      local_50 = '\x01';
      goto LAB_01b91cf2;
    }
    local_58 = local_40;
    if ((local_50 != '\0') && (uVar3 != 0)) {
      FUN_00d50b20();
    }
LAB_01b91cbb:
    local_50 = '\x01';
  }
  if (local_41 != '\0') {
    local_70 = local_90;
  }
  if (local_58 == 0) {
LAB_01b91e86:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    (**(code **)(*unaff_RSI + 0xa48))();
    FUN_01b920e0();
    lVar1 = CONCAT71(uStack_7f,local_80);
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_38[0] = '\0';
    uVar10 = local_68;
    local_40 = uVar4;
    FUN_012502a0(local_68,local_88,(char)unaff_RSI[0x36]);
    pVar8 = (pthread_key_t)uVar10;
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    FUN_01b920e0();
    lVar1 = CONCAT71(uStack_7f,local_80);
    pvVar7 = _pthread_getspecific(pVar8);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = local_58;
    local_38[0] = '\0';
    FUN_012502a0(local_70,local_68,(char)unaff_RSI[0x36]);
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0xa50))();
    uVar3 = local_58;
    if ((char)unaff_RSI[0x42] != '\0') {
      FUN_01b92310();
      FUN_01b92310();
      goto LAB_01b91e86;
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = uVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      local_50 = '\0';
    }
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
LAB_01b91be8:
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @01b8fc70 — 1336 bytes
// str: ""MUScaleModeSequence""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b8fe89) */
/* WARNING: Removing unreachable block (ram,0x01b8fe92) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b8fc70(undefined4 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  pthread_key_t pVar10;
  longlong *in_RCX;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((longlong *)unaff_RDI[0x3f] == (longlong *)0x0) goto LAB_01b8fe49;
  plVar1 = (longlong *)*unaff_RSI;
  if (plVar1 == (longlong *)unaff_RDI[0x3f]) {
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
    goto LAB_01b8fe49;
  }
  if ((DAT_027be908 == '\0') &&
     (iVar7 = ___cxa_guard_acquire(), param_1 = extraout_XMM0_Da_00, iVar7 != 0)) {
    _DAT_027be858 = FUN_010ec850();
    _DAT_027be840 = "MUScaleModeSequence";
    _DAT_027be848 = 0x70;
    _DAT_027be850 = FUN_0124b550;
    _DAT_027be860 = 0;
    uRam00000000027be868 = 0;
    _DAT_027be870 = 0;
    uRam00000000027be878 = 0;
    _DAT_027be880 = 0;
    uRam00000000027be888 = 0;
    _DAT_027be890 = 0;
    uRam00000000027be898 = 0;
    _DAT_027be8a0 = 0;
    uRam00000000027be8a8 = 0;
    _DAT_027be8b0 = 0;
    uRam00000000027be8b8 = 0;
    _DAT_027be8c0 = 0;
    uRam00000000027be8c8 = 0;
    _DAT_027be8d0 = 0;
    uRam00000000027be8d8 = 0;
    _DAT_027be8e0 = 0;
    uRam00000000027be8e8 = 0;
    _DAT_027be8f0 = 0;
    uRam00000000027be8f8 = 0;
    _DAT_027be900 = 0;
    param_1 = ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01b8fcdc:
    in_RCX = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    in_RCX = unaff_RSI;
    param_1 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b8fcdc;
  }
  if (*in_RCX != 0) {
    pvVar8 = _pthread_getspecific((pthread_key_t)in_RCX);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    lVar2 = local_58;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_48 = lVar2;
    local_40[0] = '\0';
    param_1 = FUN_01b6d800();
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      param_1 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      param_1 = FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      param_1 = FUN_00d50b20();
    }
  }
LAB_01b8fe49:
  pVar10 = (pthread_key_t)in_RCX;
  local_68 = *param_2;
  local_60 = '\0';
  FUN_01b68d40(param_1,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  cVar4 = (**(code **)(*unaff_RDI + 0xa78))();
  *(undefined1 *)(unaff_RDI + 0x40) = 1;
  if (unaff_RDI[0x3f] != 0) {
    FUN_00d50b00();
    lVar2 = unaff_RDI[0x3f];
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    pvVar8 = _pthread_getspecific(pVar10);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510d50();
    lVar13 = local_48;
    pvVar8 = _pthread_getspecific(pVar10);
    lVar3 = local_48;
    if ((pvVar8 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar13 = lVar3, lVar9 != 0)) {
      lVar13 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar9 + 0x154) & 1) * 8);
    }
    iVar7 = *(int *)(*(longlong *)(lVar13 + 0x48) + 0x18);
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (iVar7 + 7U < 0xf) {
      lVar2 = unaff_RDI[0x3f];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01510d50();
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = 0;
      FUN_01252670(0,0,0,0);
      lVar13 = local_48;
      pVar10 = (pthread_key_t)CONCAT71((int7)((ulonglong)uVar11 >> 8),local_40[0]);
      pcVar12 = local_38;
      if (local_40[0] != '\0') {
        pcVar12 = local_40;
      }
      local_38[0] = local_40[0];
      *pcVar12 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar10);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_0173f250();
      *(undefined1 *)(unaff_RDI + 0x40) = uVar5;
      if ((local_38[0] != '\0') && (lVar13 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  cVar6 = (**(code **)(*unaff_RDI + 0xa78))();
  if (cVar4 != cVar6) {
    (**(code **)(*unaff_RDI + 0x620))();
  }
  return;
}




// ============================================================
// @01b90580 — 1272 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b90a18) */
/* WARNING: Removing unreachable block (ram,0x01b909e5) */
/* WARNING: Removing unreachable block (ram,0x01b909a6) */
/* WARNING: Removing unreachable block (ram,0x01b909b2) */
/* WARNING: Removing unreachable block (ram,0x01b909f1) */
/* WARNING: Removing unreachable block (ram,0x01b90a21) */

void FUN_01b90580(ulonglong param_1)

{
  longlong lVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(longlong *)(unaff_RSI + 0x1f8) != 0) {
    uVar4 = param_1;
    FUN_00d50b00();
    pVar3 = (pthread_key_t)uVar4;
    FUN_00d50b20();
    lVar1 = *(longlong *)(unaff_RSI + 0x1f8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01822e80();
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_01246780();
      if (local_48 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    lVar1 = *(longlong *)(unaff_RSI + 0x1f8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01510030();
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      if (param_1 >> 0x20 == 0) {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01252670(0,0,0,0);
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_012467d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        pvVar2 = _pthread_getspecific(pVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012521f0(param_1,0,0,0);
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_012467d0();
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RSI + 0x208) + 0x390))();
  if (local_40[0] == '\0') {
    if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  FUN_012467d0();
  FUN_01246780();
  *unaff_RDI = local_48;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @0176cbc0 — 1181 bytes
// str: ""bool""
// str: ""_mode""
// str: ""MUScaleModeSequence""
// str: ""_isCyclic""
// str: ""MUScaleModeDegree""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0176cbc0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02590538;
  uVar1 = *(undefined4 *)(unaff_RSI + 0x14);
  uVar2 = *(undefined4 *)(unaff_RSI + 0x18);
  uVar3 = *(undefined4 *)(unaff_RSI + 0x1c);
  uVar4 = *(undefined4 *)(unaff_RSI + 0x20);
  uVar5 = *(undefined4 *)(unaff_RSI + 0x24);
  uVar6 = *(undefined4 *)(unaff_RSI + 0x28);
  uVar7 = *(undefined4 *)(unaff_RSI + 0x2c);
  *(undefined4 *)(unaff_RDI + 2) = *(undefined4 *)(unaff_RSI + 0x10);
  *(undefined4 *)((longlong)unaff_RDI + 0x14) = uVar1;
  *(undefined4 *)(unaff_RDI + 3) = uVar2;
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = uVar3;
  *(undefined4 *)(unaff_RDI + 4) = uVar4;
  *(undefined4 *)((longlong)unaff_RDI + 0x24) = uVar5;
  *(undefined4 *)(unaff_RDI + 5) = uVar6;
  *(undefined4 *)((longlong)unaff_RDI + 0x2c) = uVar7;
  unaff_RDI[6] = *(undefined8 *)(unaff_RSI + 0x30);
  *unaff_RDI = &DAT_025fe2f0;
  FUN_0176d140();
  *(undefined1 *)(unaff_RDI + 8) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd738 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd700 = FUN_0013de80();
        _DAT_027cd6f8 = "_isCyclic";
        _DAT_027cd708 = 0;
        _DAT_027cd710 = 0x6200;
        _DAT_027cd718 = "bool";
        _DAT_027cd720 = 0;
        uRam00000000027cd728 = 0;
        _DAT_027cd730 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0176d220();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd7c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd790 = FUN_0013de80();
        _DAT_027cd788 = "_fundamentalIndex";
        _DAT_027cd798 = 0;
        _DAT_027cd7a0 = 0x6900;
        _DAT_027cd7a8 = "GNInt";
        _DAT_027cd7b0 = 0;
        uRam00000000027cd7b8 = 0;
        _DAT_027cd7c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d300();
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d480();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_mode";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeDegree");
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0176d570();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUScaleModeSequence");
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd990 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd958 = FUN_0013de80();
        _DAT_027cd950 = "_modeOffsetIsLocked";
        _DAT_027cd960 = 0;
        _DAT_027cd968 = 0x6200;
        _DAT_027cd970 = "bool";
        _DAT_027cd978 = 0;
        uRam00000000027cd980 = 0;
        _DAT_027cd988 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x6c) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cd9d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd9a0 = FUN_0013de80();
        _DAT_027cd998 = "_modeFundamentalOffset";
        _DAT_027cd9a8 = 0;
        _DAT_027cd9b0 = 0x6900;
        _DAT_027cd9b8 = "GNInt";
        _DAT_027cd9c0 = 0;
        uRam00000000027cd9c8 = 0;
        _DAT_027cd9d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  lVar9 = FUN_0013de80();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027cda20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027cd9e8 = FUN_0013de80();
        _DAT_027cd9e0 = "_modeFundamentalFifthsDirection";
        _DAT_027cd9f0 = 0;
        _DAT_027cd9f8 = 0x6900;
        _DAT_027cda00 = "GNInt";
        _DAT_027cda08 = 0;
        uRam00000000027cda10 = 0;
        _DAT_027cda18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01b90da0 — 1126 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b9105f) */
/* WARNING: Removing unreachable block (ram,0x01b90fc7) */
/* WARNING: Removing unreachable block (ram,0x01b90fd3) */
/* WARNING: Removing unreachable block (ram,0x01b91106) */
/* WARNING: Removing unreachable block (ram,0x01b9110f) */
/* WARNING: Removing unreachable block (ram,0x01b910bc) */
/* WARNING: Removing unreachable block (ram,0x01b910c5) */
/* WARNING: Removing unreachable block (ram,0x01b91136) */
/* WARNING: Removing unreachable block (ram,0x01b9113f) */
/* WARNING: Removing unreachable block (ram,0x01b91020) */
/* WARNING: Removing unreachable block (ram,0x01b9102c) */
/* WARNING: Removing unreachable block (ram,0x01b9106b) */
/* WARNING: Removing unreachable block (ram,0x01b911ef) */
/* WARNING: Removing unreachable block (ram,0x01b911fc) */
/* WARNING: Removing unreachable block (ram,0x01b90f2b) */
/* WARNING: Removing unreachable block (ram,0x01b90f38) */
/* WARNING: Removing unreachable block (ram,0x01b90f00) */
/* WARNING: Removing unreachable block (ram,0x01b90f09) */
/* WARNING: Removing unreachable block (ram,0x01b911a7) */
/* WARNING: Removing unreachable block (ram,0x01b911b4) */

void FUN_01b90da0(pthread_key_t param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  void *pvVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong local_48;
  char local_40;
  
  plVar1 = (longlong *)*param_2;
  FUN_0013de80();
  if (plVar1 == (longlong *)0x0) {
LAB_01b90de8:
    param_2 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_01b90de8;
  }
  lVar2 = *param_2;
  lVar4 = param_2[1];
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b00();
  }
  if (*(longlong *)(unaff_RSI + 0x1f8) == 0) {
LAB_01b90ece:
    bVar3 = false;
    lVar7 = 0;
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar7 = *(longlong *)(unaff_RSI + 0x1f8);
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0150eb60();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (local_48 == 0) goto LAB_01b90ece;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01822e80();
    if (local_48 == 0) {
      lVar7 = 0;
      bVar3 = false;
    }
    else {
      bVar3 = true;
      lVar7 = local_48;
      if (local_40 == '\0') {
        FUN_00d50b00();
      }
    }
    FUN_00d50b20();
  }
  FUN_01b91500();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01b91091;
    FUN_00d50b00();
LAB_01b90f99:
    FUN_01246780();
    (**(code **)(**(longlong **)(unaff_RSI + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  else {
    if (local_48 != 0) goto LAB_01b90f99;
LAB_01b91091:
    if (lVar7 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      goto joined_r0x01b91165;
    }
    FUN_01246780();
    (**(code **)(**(longlong **)(unaff_RSI + 0x208) + 0x388))();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    FUN_01246780();
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((bVar3) && (lVar7 != 0)) {
    FUN_00d50b20();
  }
joined_r0x01b91165:
  if (((char)lVar4 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b926b0 — 909 bytes
// str: ""_scaleModeSequence""
// ============================================================

void FUN_01b926b0(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  if (*(longlong *)(unaff_RDI + 0x1f8) == *unaff_RSI) {
    return;
  }
  if (*(longlong *)(unaff_RDI + 0x1f8) != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
    FUN_00d50b00();
    FUN_0013db50();
    lVar4 = FUN_00e85ef0();
    if (lVar4 == 0) {
      lVar4 = FUN_00e858c0();
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x28), lVar4 == 0)) goto LAB_01b927a0;
LAB_01b92792:
      FUN_00d50b00();
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x30);
      if (lVar4 != 0) goto LAB_01b92792;
LAB_01b927a0:
      lVar4 = 0;
    }
    FUN_00e8b9a0();
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
    if ((longlong *)(unaff_RDI + 0x138) != (longlong *)0x0) {
      (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar4 = *unaff_RSI;
  lVar1 = *(longlong *)(unaff_RDI + 0x1f8);
  lVar2 = lVar1;
  if (lVar1 != lVar4) {
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x1f8) = lVar4;
    lVar2 = lVar4;
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = *(longlong *)(unaff_RDI + 0x1f8);
    }
  }
  if (lVar2 == 0) {
    local_38 = 0;
    local_30 = '\0';
    FUN_01b6d800();
    if (local_30 == '\0') {
      return;
    }
    if (local_38 != 0) {
      FUN_00d50b20();
      return;
    }
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
  FUN_00d50b00();
  FUN_0013db50();
  lVar4 = FUN_00e85ef0();
  if (lVar4 == 0) {
    lVar4 = FUN_00e858c0();
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      goto joined_r0x01b92927;
    }
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x30);
joined_r0x01b92927:
    if (lVar4 != 0) {
      local_40 = 0;
      FUN_00d50b00();
      goto LAB_01b92939;
    }
  }
  lVar4 = 0;
LAB_01b92939:
  local_40 = '\x01';
  pVar5 = 0x10;
  local_48 = lVar4;
  FUN_00e8b850(0x10,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((longlong *)(unaff_RDI + 0x138) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x138) + 0x10))();
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar5);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510030();
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_38 = local_88;
  local_30 = '\0';
  FUN_01b6d800();
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (local_88 != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b91500 — 641 bytes
// ============================================================

longlong * FUN_01b91500(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  void *pvVar5;
  undefined8 uVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong local_68;
  char local_60;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RSI + 0x1f8) == 0) {
LAB_01b916e8:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_00d50b00();
  FUN_00d50b20();
  lVar1 = *(longlong *)(unaff_RSI + 0x1f8);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510d50();
  lVar2 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_38 = '\0';
  local_40 = 0;
  do {
    do {
      pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar6 = FUN_00e7bdb0();
      param_1 = FUN_00e7bdb0();
      cVar4 = FUN_01252960(param_1,uVar6,&local_40,0);
      if (cVar4 == '\0') {
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        goto LAB_01b916e8;
      }
    } while (local_40 == 0);
    pvVar5 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    lVar1 = *param_2;
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar3 = local_40;
  } while (local_68 != lVar1);
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      *unaff_RDI = lVar3;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01b91721;
    }
    *unaff_RDI = 0;
  }
  else {
    *unaff_RDI = local_40;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_01b91721:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @0151f2d0 — 519 bytes
// str: ""MUScaleModeSequence""
// str: ""MUDescriptionGrade""
// str: ""_descriptionGrade""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0151f2d0(void)

{
  int iVar1;
  
  if (DAT_0278c638 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0278c620 = _DAT_0238fcc0;
      uRam000000000278c624 = _UNK_0238fcc4;
      uRam000000000278c628 = _UNK_0238fcc8;
      uRam000000000278c62c = _UNK_0238fccc;
      DAT_0278c630 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_0278c670 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0278c640 = "MUDescriptionGrade";
      _DAT_0278c648 = 4;
      DAT_0278c64c = DAT_0278c630;
      _DAT_0278c650 = &DAT_0278c620;
      _DAT_0278c658 = &DAT_0278c5f0;
      _DAT_0278c660 = 0;
      uRam000000000278c668 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027c3270 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027be908 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027be858 = FUN_010ec850();
          _DAT_027be840 = "MUScaleModeSequence";
          _DAT_027be848 = 0x70;
          _DAT_027be850 = FUN_0124b550;
          _DAT_027be860 = 0;
          uRam00000000027be868 = 0;
          _DAT_027be870 = 0;
          uRam00000000027be878 = 0;
          _DAT_027be880 = 0;
          uRam00000000027be888 = 0;
          _DAT_027be890 = 0;
          uRam00000000027be898 = 0;
          _DAT_027be8a0 = 0;
          uRam00000000027be8a8 = 0;
          _DAT_027be8b0 = 0;
          uRam00000000027be8b8 = 0;
          _DAT_027be8c0 = 0;
          uRam00000000027be8c8 = 0;
          _DAT_027be8d0 = 0;
          uRam00000000027be8d8 = 0;
          _DAT_027be8e0 = 0;
          uRam00000000027be8e8 = 0;
          _DAT_027be8f0 = 0;
          uRam00000000027be8f8 = 0;
          _DAT_027be900 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027c3230 = "_descriptionGrade";
      _DAT_027c3238 = &DAT_027be840;
      _DAT_027c3240 = 0;
      _DAT_027c3248 = 0x6500;
      _DAT_027c3250 = "MUDescriptionGrade";
      _DAT_027c3258 = &DAT_0278c640;
      _DAT_027c3260 = 0;
      uRam00000000027c3268 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027c3230;
}



