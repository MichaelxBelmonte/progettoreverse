// Reconstructed implementation of GNOverloudTapedesk
// From MikeCore binary — reverse-engineered pseudocode

#include "GNOverloudTapedesk.h"

// ============================================================
// @00c34960 — 3130 bytes
// ============================================================

void FUN_00c34960(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_2e8;
  undefined1 local_2e0;
  longlong local_2d8;
  undefined1 local_2d0;
  longlong local_2c8;
  undefined1 local_2c0;
  longlong local_2b8;
  undefined1 local_2b0;
  longlong local_2a8;
  undefined1 local_2a0;
  longlong local_298;
  undefined1 local_290;
  longlong local_288;
  undefined1 local_280;
  longlong local_278;
  undefined1 local_270;
  longlong local_268;
  undefined1 local_260;
  longlong local_258;
  undefined1 local_250;
  longlong local_248;
  undefined1 local_240;
  longlong local_238;
  undefined1 local_230;
  longlong local_228;
  undefined1 local_220;
  longlong local_218;
  undefined1 local_210;
  longlong local_208;
  undefined1 local_200;
  longlong local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0x13;
  lVar1 = DAT_0276cc88;
  if (DAT_0276cc88 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c349c9;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c349c9;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c349c9:
  *(undefined4 *)(unaff_RDI + 0xa8) = 2;
  if ((DAT_028a5f68 == (undefined8 *)0x0) || (DAT_028a5f71 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5f68 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5f68 == (undefined8 *)0x0;
      DAT_028a5f68 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276cc90, DAT_028a5f68 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276cc90, DAT_028a5f70 == '\0')) {
        DAT_028a5f70 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276cc90;
      }
      DAT_0276cc90 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027c70a8;
      local_2e0 = 1;
      local_2e8 = lVar1;
      if (DAT_027c70a8 != 0) {
        FUN_00d50b00();
      }
      local_2d8 = lVar4;
      local_2d0 = 1;
      FUN_00bf1030(&local_2d8,&local_2e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cca0;
      if (DAT_0276cca0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cca8;
      local_2c8 = lVar1;
      local_2c0 = 1;
      if (DAT_0276cca8 != 0) {
        FUN_00d50b00();
      }
      local_2b8 = lVar4;
      local_2b0 = 1;
      FUN_00bf1030(&local_2b8,&local_2c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be18;
      if (DAT_0276be18 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be20;
      local_2a8 = lVar1;
      local_2a0 = 1;
      if (DAT_0276be20 != 0) {
        FUN_00d50b00();
      }
      local_298 = lVar4;
      local_290 = 1;
      FUN_00bf1030(&local_298,&local_2a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ccb0;
      if (DAT_0276ccb0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ccb8;
      local_288 = lVar1;
      local_280 = 1;
      if (DAT_0276ccb8 != 0) {
        FUN_00d50b00();
      }
      local_278 = lVar4;
      local_270 = 1;
      FUN_00bf1030(&local_278,&local_288);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ccc0;
      if (DAT_0276ccc0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ccc8;
      local_268 = lVar1;
      local_260 = 1;
      if (DAT_0276ccc8 != 0) {
        FUN_00d50b00();
      }
      local_258 = lVar4;
      local_250 = 1;
      FUN_00bf1030(&local_258,&local_268);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd78;
      if (DAT_0276bd78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd80;
      local_248 = lVar1;
      local_240 = 1;
      if (DAT_0276bd80 != 0) {
        FUN_00d50b00();
      }
      local_238 = lVar4;
      local_230 = 1;
      FUN_00bf1030(&local_238,&local_248);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd98;
      if (DAT_0276bd98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bda0;
      local_228 = lVar1;
      local_220 = 1;
      if (DAT_0276bda0 != 0) {
        FUN_00d50b00();
      }
      local_218 = lVar4;
      local_210 = 1;
      FUN_00bf1030(&local_218,&local_228);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ccd0;
      if (DAT_0276ccd0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ccd8;
      local_208 = lVar1;
      local_200 = 1;
      if (DAT_0276ccd8 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar4;
      local_1f0 = 1;
      FUN_00bf1030(&local_1f8,&local_208);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cce0;
      if (DAT_0276cce0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cce8;
      local_1e8 = lVar1;
      local_1e0 = 1;
      if (DAT_0276cce8 != 0) {
        FUN_00d50b00();
      }
      local_1d8 = lVar4;
      local_1d0 = 1;
      FUN_00bf1030(&local_1d8,&local_1e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bda8;
      if (DAT_0276bda8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bdb0;
      local_1c8 = lVar1;
      local_1c0 = 1;
      if (DAT_0276bdb0 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = lVar4;
      local_1b0 = 1;
      FUN_00bf1030(&local_1b8,&local_1c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bdc8;
      if (DAT_0276bdc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bdd0;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (DAT_0276bdd0 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar4;
      local_190 = 1;
      FUN_00bf1030(&local_198,&local_1a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276ccf0;
      if (DAT_0276ccf0 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276ccf8;
      local_188 = lVar1;
      local_180 = 1;
      if (DAT_0276ccf8 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd00;
      if (DAT_0276cd00 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd08;
      local_168 = lVar1;
      local_160 = 1;
      if (DAT_0276cd08 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276bd48;
      if (DAT_0276bd48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276bd50;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276bd50 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd10;
      if (DAT_0276cd10 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd18;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276cd18 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd20;
      if (DAT_0276cd20 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd28;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276cd28 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd30;
      if (DAT_0276cd30 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd38;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276cd38 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd40;
      if (DAT_0276cd40 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd48;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276cd48 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd50;
      if (DAT_0276cd50 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd58;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276cd58 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd60;
      if (DAT_0276cd60 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd68;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276cd68 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cd70;
      if (DAT_0276cd70 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cd78;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276cd78 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276be48;
      if (DAT_0276be48 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276be50;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276be50 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5f71 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5f71 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f68) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f68) {
      return;
    }
  }
  puVar2 = DAT_028a5f68;
  if (DAT_028a5f68 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00cb45c0 — 2313 bytes
// ============================================================

void FUN_00cb45c0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  bool *pbVar4;
  longlong lVar5;
  void *pvVar6;
  longlong **pplVar7;
  int iVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar9;
  longlong local_180;
  char local_178;
  longlong *local_170;
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
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_68;
  bool local_60 [8];
  longlong local_58;
  undefined8 local_50;
  int local_48;
  bool local_38 [8];
  
  cVar2 = (**(code **)(*(longlong *)*param_2 + 0x370))();
  if (cVar2 != '\0') {
    local_168 = *unaff_RSI;
    local_160 = '\0';
    local_158 = *param_2;
    local_150 = '\0';
    cVar2 = (**(code **)(*unaff_RDI + 0x408))();
    if ((local_150 != '\0') && (local_158 != 0)) {
      FUN_00d50b20();
    }
    if ((local_160 != '\0') && (local_168 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      cVar2 = FUN_00d77de0();
      if (cVar2 == '\0') {
        (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
        plVar3 = local_68;
        if (local_60[0] == false) {
          if (local_68 == (longlong *)0x0) goto LAB_00cb4886;
          FUN_00d50b00();
          if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else if (local_68 == (longlong *)0x0) goto LAB_00cb4886;
        local_138 = plVar3;
        local_130 = '\0';
        cVar2 = (**(code **)(*unaff_RDI + 0x3b0))();
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((cVar2 != '\0') &&
           ((cVar2 = (**(code **)(*plVar3 + 0x2c0))(), cVar2 == '\0' ||
            (iVar8 = (**(code **)(*plVar3 + 0x2c8))(), iVar8 == 0)))) {
          local_128 = plVar3;
          local_120 = '\0';
          (**(code **)(*unaff_RDI + 0x3e0))();
          if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
      else {
        (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
        plVar3 = local_68;
        if ((((local_60[0] == false) && (local_68 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_60[0] != false)) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_148 = plVar3;
        local_140 = '\0';
        FUN_00cb53b0(0,1);
        plVar1 = local_90;
        if (local_88 == '\0') {
          if (local_90 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_68 = plVar1;
        local_60[0] = false;
        FUN_00d21140();
        if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar3 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
LAB_00cb4886:
  cVar2 = FUN_00d74560();
  if (cVar2 == '\0') {
    local_118 = *unaff_RSI;
    local_110 = '\0';
    (**(code **)(*unaff_RDI + 0x458))();
    if ((local_110 != '\0') && (local_118 != 0)) {
      FUN_00d50b20();
    }
  }
  if ((((unaff_RDI[0x12] != 0) && ((char)unaff_RDI[0x1c] != '\0')) && ((int)unaff_RDI[0x1a] == 0))
     && (((plVar3 = (longlong *)(**(code **)(*(longlong *)*unaff_RSI + 0x188))(),
          plVar3 != (longlong *)0x0 && (*plVar3 != 0)) &&
         (cVar2 = (**(code **)(*(longlong *)*param_2 + 0x370))(), cVar2 != '\0')))) {
    local_108 = *param_2;
    local_100 = '\0';
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x2b8))();
    if ((local_100 != '\0') && (local_108 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)*unaff_RSI + 0x210))();
      plVar1 = local_68;
      local_170 = local_68;
      if (local_60[0] == false) {
        pbVar4 = local_38;
      }
      else {
        pbVar4 = local_60;
      }
      local_38[0] = local_60[0] != false;
      *pbVar4 = false;
      if ((local_60[0] != false) && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        if (*plVar3 != 0) {
          local_a8 = plVar1;
          local_60[0] = false;
          local_68 = (longlong *)0x0;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_50._4_4_ = 0;
          local_58 = *plVar3;
          while( true ) {
            if (local_50._4_4_ != 0) {
              if (local_50._4_4_ < 1) {
                iVar8 = -local_50._4_4_;
              }
              else {
                iVar8 = (int)local_50 - local_50._4_4_;
                local_50 = CONCAT44(local_50._4_4_,iVar8);
                FUN_00d23690();
                local_48 = local_48 + local_50._4_4_;
                iVar8 = 0;
              }
              local_50 = CONCAT44(iVar8,(int)local_50);
            }
            lVar5 = (longlong)(int)local_50;
            iVar8 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,iVar8);
            if (*(int *)(local_58 + 0xc) <= iVar8) break;
            local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
            FUN_00e17bc0();
            if (local_90 == (longlong *)0x0) {
              bVar9 = true;
            }
            else {
              FUN_00e17bc0();
              if (local_a0 == (longlong *)0x0) {
                bVar9 = false;
              }
              else {
                FUN_00e17bc0();
                bVar9 = local_180 == *param_2;
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (bVar9) {
              cVar2 = FUN_00d77de0();
              if (cVar2 == '\0') {
                FUN_00e8b690();
                (**(code **)(*local_a8 + 0x360))();
                cVar2 = FUN_00e85ea0();
                pplVar7 = &local_170;
                if (cVar2 == '\0') {
                  pplVar7 = (longlong **)&DAT_02802688;
                }
                if (*pplVar7 != (longlong *)0x0) {
                  pvVar6 = _pthread_getspecific((pthread_key_t)pplVar7);
                  if (pvVar6 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_00e17ba0();
                  local_e8 = 0;
                  local_e0 = '\0';
                  FUN_00e8c420();
                  if ((local_e0 != '\0') && (local_e8 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                    (**(code **)(*local_90 + 0x10))();
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_88 = '\0';
                local_90 = (longlong *)0x0;
                local_80 = local_a8;
                local_78 = 0xffffffff;
                local_70 = 0;
                local_78._4_4_ = 0;
                while( true ) {
                  if (local_78._4_4_ != 0) {
                    if (local_78._4_4_ < 1) {
                      iVar8 = -local_78._4_4_;
                    }
                    else {
                      iVar8 = (int)local_78 - local_78._4_4_;
                      local_78 = CONCAT44(local_78._4_4_,iVar8);
                      FUN_00d23690();
                      local_70 = local_70 + local_78._4_4_;
                      iVar8 = 0;
                    }
                    local_78 = CONCAT44(iVar8,(int)local_78);
                  }
                  lVar5 = (longlong)(int)local_78;
                  iVar8 = (int)local_78 + 1;
                  local_78 = CONCAT44(local_78._4_4_,iVar8);
                  if (*(int *)((longlong)local_80 + 0xc) <= iVar8) break;
                  plVar3 = *(longlong **)(local_80[2] + 8 + lVar5 * 8);
                  local_a0 = plVar3;
                  local_90 = plVar3;
                  FUN_00e8b690();
                  pplVar7 = (longlong **)&DAT_02802688;
                  if (plVar3 != (longlong *)0x0) {
                    (**(code **)(*plVar3 + 0x360))();
                    cVar2 = FUN_00e85ea0();
                    pplVar7 = &local_a0;
                    if (cVar2 == '\0') {
                      pplVar7 = (longlong **)&DAT_02802688;
                    }
                  }
                  if (*pplVar7 != (longlong *)0x0) {
                    pvVar6 = _pthread_getspecific((pthread_key_t)pplVar7);
                    if (pvVar6 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_00e17ba0();
                    local_f8 = 0;
                    local_f0 = '\0';
                    FUN_00e8c420();
                    if ((local_f0 != '\0') && (local_f8 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                      (**(code **)(*local_a0 + 0x10))();
                      FUN_00d50b20();
                    }
                  }
                }
                FUN_00e8cae0();
              }
            }
          }
          FUN_00cc12b0();
        }
        if (local_38[0] != false) {
          FUN_00d50b20();
        }
      }
    }
  }
  if ((((*(char *)((longlong)unaff_RDI + 0xe1) != '\0') && (unaff_RDI[8] != 0)) &&
      (cVar2 = FUN_00db3680(), cVar2 == '\0')) && (cVar2 = FUN_00d74560(), cVar2 == '\0')) {
    local_d8 = *param_2;
    local_d0 = '\0';
    cVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x350))();
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      local_c8 = *unaff_RSI;
      local_c0 = '\0';
      local_b8 = *param_2;
      local_b0 = '\0';
      FUN_00db2960();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @00c308f0 — 2243 bytes
// ============================================================

void FUN_00c308f0(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong unaff_RDI;
  longlong lVar4;
  bool bVar5;
  longlong local_208;
  undefined1 local_200;
  longlong local_1f8;
  undefined1 local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  longlong local_1d8;
  undefined1 local_1d0;
  longlong local_1c8;
  undefined1 local_1c0;
  longlong local_1b8;
  undefined1 local_1b0;
  longlong local_1a8;
  undefined1 local_1a0;
  longlong local_198;
  undefined1 local_190;
  longlong local_188;
  undefined1 local_180;
  longlong local_178;
  undefined1 local_170;
  longlong local_168;
  undefined1 local_160;
  longlong local_158;
  undefined1 local_150;
  longlong local_148;
  undefined1 local_140;
  longlong local_138;
  undefined1 local_130;
  longlong local_128;
  undefined1 local_120;
  longlong local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  undefined1 local_70;
  longlong local_68;
  undefined1 local_60;
  longlong local_58;
  undefined1 local_50;
  longlong local_48;
  undefined1 local_40;
  longlong local_38;
  undefined1 local_30;
  
  *(undefined4 *)(unaff_RDI + 0xb8) = 0x12;
  lVar1 = DAT_0276cb40;
  if (DAT_0276cb40 == 0) {
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == 0) goto LAB_00c30959;
  }
  else {
    FUN_00d50b00();
    lVar4 = *(longlong *)(unaff_RDI + 0x90);
    if (lVar4 == lVar1) {
      FUN_00d50b20();
      goto LAB_00c30959;
    }
  }
  *(longlong *)(unaff_RDI + 0x90) = lVar1;
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
LAB_00c30959:
  *(undefined4 *)(unaff_RDI + 0xa8) = 1;
  if ((DAT_028a5f28 == (undefined8 *)0x0) || (DAT_028a5f31 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5f28 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_0254ed40;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      FUN_00d500e0();
      bVar5 = DAT_028a5f28 == (undefined8 *)0x0;
      DAT_028a5f28 = puVar3;
      if (((bVar5) || (FUN_00d50b20(), lVar1 = DAT_0276cb48, DAT_028a5f28 != (undefined8 *)0x0)) &&
         (lVar1 = DAT_0276cb48, DAT_028a5f30 == '\0')) {
        DAT_028a5f30 = '\x01';
        FUN_00e8cb90();
        lVar1 = DAT_0276cb48;
      }
      DAT_0276cb48 = lVar1;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cb50;
      local_200 = 1;
      local_208 = lVar1;
      if (DAT_0276cb50 != 0) {
        FUN_00d50b00();
      }
      local_1f8 = lVar4;
      local_1f0 = 1;
      FUN_00bf1030(&local_1f8,&local_208);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cb58;
      if (DAT_0276cb58 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cb60;
      local_1e8 = lVar1;
      local_1e0 = 1;
      if (DAT_0276cb60 != 0) {
        FUN_00d50b00();
      }
      local_1d8 = lVar4;
      local_1d0 = 1;
      FUN_00bf1030(&local_1d8,&local_1e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cb68;
      if (DAT_0276cb68 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cb70;
      local_1c8 = lVar1;
      local_1c0 = 1;
      if (DAT_0276cb70 != 0) {
        FUN_00d50b00();
      }
      local_1b8 = lVar4;
      local_1b0 = 1;
      FUN_00bf1030(&local_1b8,&local_1c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cb78;
      if (DAT_0276cb78 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cb80;
      local_1a8 = lVar1;
      local_1a0 = 1;
      if (DAT_0276cb80 != 0) {
        FUN_00d50b00();
      }
      local_198 = lVar4;
      local_190 = 1;
      FUN_00bf1030(&local_198,&local_1a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cb88;
      if (DAT_0276cb88 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cb90;
      local_188 = lVar1;
      local_180 = 1;
      if (DAT_0276cb90 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      local_170 = 1;
      FUN_00bf1030(&local_178,&local_188);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cb98;
      if (DAT_0276cb98 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cba0;
      local_168 = lVar1;
      local_160 = 1;
      if (DAT_0276cba0 != 0) {
        FUN_00d50b00();
      }
      local_158 = lVar4;
      local_150 = 1;
      FUN_00bf1030(&local_158,&local_168);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cba8;
      if (DAT_0276cba8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cbb0;
      local_148 = lVar1;
      local_140 = 1;
      if (DAT_0276cbb0 != 0) {
        FUN_00d50b00();
      }
      local_138 = lVar4;
      local_130 = 1;
      FUN_00bf1030(&local_138,&local_148);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cbb8;
      if (DAT_0276cbb8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cbc0;
      local_128 = lVar1;
      local_120 = 1;
      if (DAT_0276cbc0 != 0) {
        FUN_00d50b00();
      }
      local_118 = lVar4;
      local_110 = 1;
      FUN_00bf1030(&local_118,&local_128);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cbc8;
      if (DAT_0276cbc8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cbd0;
      local_108 = lVar1;
      local_100 = 1;
      if (DAT_0276cbd0 != 0) {
        FUN_00d50b00();
      }
      local_f8 = lVar4;
      local_f0 = 1;
      FUN_00bf1030(&local_f8,&local_108);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cbd8;
      if (DAT_0276cbd8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cbe0;
      local_e8 = lVar1;
      local_e0 = 1;
      if (DAT_0276cbe0 != 0) {
        FUN_00d50b00();
      }
      local_d8 = lVar4;
      local_d0 = 1;
      FUN_00bf1030(&local_d8,&local_e8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cbe8;
      if (DAT_0276cbe8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cbf0;
      local_c8 = lVar1;
      local_c0 = 1;
      if (DAT_0276cbf0 != 0) {
        FUN_00d50b00();
      }
      local_b8 = lVar4;
      local_b0 = 1;
      FUN_00bf1030(&local_b8,&local_c8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cbf8;
      if (DAT_0276cbf8 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cc00;
      local_a8 = lVar1;
      local_a0 = 1;
      if (DAT_0276cc00 != 0) {
        FUN_00d50b00();
      }
      local_98 = lVar4;
      local_90 = 1;
      FUN_00bf1030(&local_98,&local_a8);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cc08;
      if (DAT_0276cc08 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cc10;
      local_88 = lVar1;
      local_80 = 1;
      if (DAT_0276cc10 != 0) {
        FUN_00d50b00();
      }
      local_78 = lVar4;
      local_70 = 1;
      FUN_00bf1030(&local_78,&local_88);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cc18;
      if (DAT_0276cc18 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cc20;
      local_68 = lVar1;
      local_60 = 1;
      if (DAT_0276cc20 != 0) {
        FUN_00d50b00();
      }
      local_58 = lVar4;
      local_50 = 1;
      FUN_00bf1030(&local_58,&local_68);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar1 = DAT_0276cc28;
      if (DAT_0276cc28 != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_0276cc30;
      local_48 = lVar1;
      local_40 = 1;
      if (DAT_0276cc30 != 0) {
        FUN_00d50b00();
      }
      local_38 = lVar4;
      local_30 = 1;
      FUN_00bf1030(&local_38,&local_48);
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5f31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5f31 = '\x01';
      FUN_00e8cb70();
    }
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f28) {
      return;
    }
  }
  else {
    puVar3 = *(undefined8 **)(unaff_RDI + 0xb0);
    if (puVar3 == DAT_028a5f28) {
      return;
    }
  }
  puVar2 = DAT_028a5f28;
  if (DAT_028a5f28 != (undefined8 *)0x0) {
    FUN_00d50b00();
  }
  *(undefined8 **)(unaff_RDI + 0xb0) = puVar2;
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c32cc0 — 2027 bytes
// str: ""Circle_%f_%f_%f""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c32f3c) */
/* WARNING: Removing unreachable block (ram,0x00c32f48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c32cc0(undefined8 param_1,float param_2,float param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 in_EDX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar5;
  undefined8 uVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [16];
  float fVar9;
  undefined4 in_XMM1_Dd;
  undefined1 auVar8 [16];
  float fVar10;
  undefined4 local_148;
  float fStack_144;
  undefined4 uStack_13c;
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  undefined8 *local_110;
  char local_108;
  undefined8 *local_100;
  char local_f8;
  undefined8 *local_f0;
  char local_e8;
  undefined8 *local_e0;
  char local_d8;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  float local_74;
  undefined8 *local_70;
  char local_68;
  undefined8 *local_58;
  uint local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  undefined8 local_40;
  undefined4 local_38;
  float local_34;
  
  fVar9 = (float)((ulonglong)param_1 >> 0x20);
  auVar7._0_4_ = DAT_0239011c * fVar9 + in_XMM0._0_4_;
  auVar7._4_4_ = DAT_0239011c * fVar9 + in_XMM0._4_4_;
  auVar7._8_4_ = in_XMM0._8_4_ + 0.0;
  auVar7._12_4_ = in_XMM0._12_4_ + 0.0;
  auVar7 = roundps(in_XMM0,auVar7,9);
  local_40 = CONCAT44(local_40._4_4_,DAT_02390118 + param_2);
  local_b8 = ZEXT416((uint)(DAT_024204d0 * (DAT_02390118 + param_2) * _DAT_023d9594));
  local_74 = param_3;
  local_34 = param_2;
  ___sincosf_stret();
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02680400;
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
  *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
  pcVar2 = DAT_02680418;
  (*DAT_02680418)();
  FUN_01d39180();
  fVar10 = (float)((int)fVar9 / 2) + DAT_023b1608;
  local_148 = auVar7._0_4_;
  fStack_144 = auVar7._4_4_;
  uStack_13c = auVar7._12_4_;
  local_cc = DAT_02394244 + fVar10;
  local_c8 = fStack_144;
  fStack_c4 = fStack_144;
  uStack_c0 = uStack_13c;
  uStack_bc = uStack_13c;
  local_38 = local_148;
  if ((local_74 != DAT_02390124) || (NAN(local_74) || NAN(DAT_02390124))) {
    if (0.0 <= (float)local_40) {
      FUN_01d39310();
      local_34 = (float)local_40;
    }
    else {
      FUN_01d39310();
      local_34 = (float)local_40;
    }
  }
  else {
    FUN_01d39310();
  }
  FUN_01d38830();
  FUN_01d48370();
  local_50 = 3;
  local_4c = local_38;
  local_48 = local_c8;
  local_58 = (undefined8 *)&DAT_026b2438;
  local_44 = fVar10;
  uVar6 = FUN_00d8cb40();
  if ((local_128 == '\0') && (local_130 != 0)) {
    uVar6 = FUN_00d50b00();
  }
  local_b8._0_8_ = local_130;
  local_120 = local_130;
  local_118 = '\0';
  FUN_000175c0(uVar6,&local_120);
  puVar4 = local_58;
  local_d0 = in_EDX;
  if (local_58 == (undefined8 *)0x0) {
    local_40 = 0;
    puVar4 = (undefined8 *)0x0;
  }
  else {
    if ((char)local_50 != '\0') {
      local_50 = local_50 & 0xffffff00;
      local_40 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
      bVar5 = false;
      goto LAB_00c32fe1;
    }
    uVar6 = FUN_00d50b00();
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
  }
  bVar5 = puVar4 == (undefined8 *)0x0;
  if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
LAB_00c32fe1:
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (bVar5) {
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_02680400;
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x39) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x41) = 0;
    uVar6 = (*pcVar2)();
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    uVar6 = FUN_01d39310();
    local_108 = '\0';
    local_58 = (undefined8 *)local_b8._0_8_;
    local_50 = local_50 & 0xffffff00;
    local_110 = puVar4;
    uVar6 = FUN_00ca0840(uVar6,&local_58);
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    if ((local_108 != '\0') && (local_110 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_f8 = '\0';
  local_100 = puVar4;
  (**(code **)(*(longlong *)*unaff_RDI + 0x398))();
  if ((local_f8 != '\0') && (local_100 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RDI + 0x368))();
  local_a0 = 0;
  local_a8 = *(longlong *)(*unaff_RSI + 0x70);
  if (local_a8 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  FUN_01d488d0();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  local_e8 = '\0';
  local_f0 = puVar3;
  (**(code **)(*(longlong *)*unaff_RDI + 0x3a0))();
  if ((local_e8 != '\0') && (local_f0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d48390();
  FUN_01d48370();
  local_d8 = '\0';
  local_e0 = puVar3;
  (**(code **)(*(longlong *)*unaff_RDI + 0x398))();
  if ((local_d8 != '\0') && (local_e0 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_d0 == '\0') {
    local_80 = 0;
    lVar1 = *(longlong *)(*unaff_RSI + 0x150);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar1;
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_90 = 0;
    lVar1 = *(longlong *)(*unaff_RSI + 0x148);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_98 = lVar1;
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  auVar7 = insertps(in_XMM0,ZEXT416((uint)(DAT_024229f0 * (fVar10 + fVar10) + (local_c8 - fVar10))),
                    0x10);
  auVar8._4_4_ = fVar9;
  auVar8._0_4_ = fVar9;
  auVar8._8_4_ = in_XMM1_Dd;
  auVar8._12_4_ = in_XMM1_Dd;
  auVar8 = insertps(auVar8,ZEXT416((uint)((fVar10 + fVar10) * DAT_02394298)),0x10);
  (**(code **)(*(longlong *)*unaff_RDI + 0x3b0))(auVar7._0_8_,auVar8._0_8_);
  FUN_01d48390();
  FUN_01d48b40();
  (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
  local_70 = local_58;
  local_68 = 0;
  if ((char)local_50 == '\0') {
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = local_50 & 0xffffff00;
  }
  local_68 = '\x01';
  FUN_01d488d0();
  if ((local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_74 != DAT_02390124) || (NAN(local_74) || NAN(DAT_02390124))) {
    (**(code **)(*(longlong *)*unaff_RDI + 0x3e0))();
  }
  else if (local_34 < _DAT_023b294c) {
    if (DAT_0239011c < local_34) {
      FUN_01d48b40((local_34 + DAT_02390118) * DAT_02394248 + DAT_02390124);
    }
    (**(code **)(*(longlong *)*unaff_RDI + 0x3e0))();
  }
  if (local_b8._0_8_ != 0) {
    FUN_00d50b20();
  }
  if (((char)local_40 != '\0') && (puVar4 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @00c2f0a0 — 1601 bytes
// str: ""GNOverloudTapedesk""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_00c2f0a0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  longlong **pplVar7;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  longlong *local_48;
  char local_40;
  char local_31;
  
  plVar6 = (longlong *)*param_1;
  if ((DAT_0276e460 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0276e3b0 = FUN_00b10020();
    _DAT_0276e398 = "GNOverloudTapedesk";
    _DAT_0276e3a0 = 0xe8;
    _DAT_0276e3a8 = FUN_00c41400;
    _DAT_0276e3b8 = 0;
    uRam000000000276e3c0 = 0;
    _DAT_0276e3c8 = 0;
    uRam000000000276e3d0 = 0;
    _DAT_0276e3d8 = 0;
    uRam000000000276e3e0 = 0;
    _DAT_0276e3e8 = 0;
    uRam000000000276e3f0 = 0;
    _DAT_0276e3f8 = 0;
    uRam000000000276e400 = 0;
    _DAT_0276e408 = 0;
    uRam000000000276e410 = 0;
    _DAT_0276e418 = 0;
    uRam000000000276e420 = 0;
    _DAT_0276e428 = 0;
    uRam000000000276e430 = 0;
    _DAT_0276e438 = 0;
    uRam000000000276e440 = 0;
    _DAT_0276e448 = 0;
    uRam000000000276e450 = 0;
    _DAT_0276e458 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00c2f0f9:
    plVar6 = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar6 = param_1;
    if (cVar4 == '\0') goto LAB_00c2f0f9;
  }
  lVar1 = *plVar6;
  local_31 = (char)plVar6[1];
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b00();
  }
  pplVar7 = &local_48;
  FUN_00c16ff0();
  plVar6 = local_48;
  if ((DAT_0276e460 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_0276e3b0 = FUN_00b10020();
    _DAT_0276e398 = "GNOverloudTapedesk";
    _DAT_0276e3a0 = 0xe8;
    _DAT_0276e3a8 = FUN_00c41400;
    _DAT_0276e3b8 = 0;
    uRam000000000276e3c0 = 0;
    _DAT_0276e3c8 = 0;
    uRam000000000276e3d0 = 0;
    _DAT_0276e3d8 = 0;
    uRam000000000276e3e0 = 0;
    _DAT_0276e3e8 = 0;
    uRam000000000276e3f0 = 0;
    _DAT_0276e3f8 = 0;
    uRam000000000276e400 = 0;
    _DAT_0276e408 = 0;
    uRam000000000276e410 = 0;
    _DAT_0276e418 = 0;
    uRam000000000276e420 = 0;
    _DAT_0276e428 = 0;
    uRam000000000276e430 = 0;
    _DAT_0276e438 = 0;
    uRam000000000276e440 = 0;
    _DAT_0276e448 = 0;
    uRam000000000276e450 = 0;
    _DAT_0276e458 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00c2f16b:
    pplVar7 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 == '\0') goto LAB_00c2f16b;
  }
  plVar6 = *pplVar7;
  if (*(char *)(pplVar7 + 1) == '\0') {
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar7 + 1) = 0;
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0276caf8;
  plVar2 = (longlong *)*param_3;
  if (DAT_0276caf8 != 0) {
    FUN_00d50b00();
  }
  cVar4 = (**(code **)(*plVar2 + 0x50))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0276cb00;
  if (cVar4 == '\0') {
    if (plVar6 == (longlong *)0x0) {
LAB_00c2f49f:
      local_c0 = *param_1;
      local_b8 = 0;
      local_b0 = *param_3;
      local_a8 = 0;
      FUN_00c17210(&local_c0,param_2,&local_b0);
      goto LAB_00c2f4e7;
    }
    plVar2 = (longlong *)*param_3;
    if (DAT_0276cb00 != 0) {
      FUN_00d50b00();
    }
    cVar4 = (**(code **)(*plVar2 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
    lVar3 = DAT_0276cb08;
    if (cVar4 == '\0') {
      plVar2 = (longlong *)*param_3;
      if (DAT_0276cb08 != 0) {
        FUN_00d50b00();
      }
      cVar4 = (**(code **)(*plVar2 + 0x50))();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cb10;
      if (cVar4 == '\0') {
        plVar2 = (longlong *)*param_3;
        if (DAT_0276cb10 != 0) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*plVar2 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (cVar4 == '\0') goto LAB_00c2f49f;
        FUN_00aea610(*(undefined4 *)((longlong)plVar6 + 0xcc));
        FUN_00d46dc0();
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 != '\0') goto LAB_00c2f551;
        if (local_48 == (longlong *)0x0) goto LAB_00c2f54f;
        FUN_00d50b00();
        *unaff_RDI = plVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        FUN_00aea610((int)plVar6[0x19]);
        FUN_00d46dc0();
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 != '\0') goto LAB_00c2f551;
        if (local_48 == (longlong *)0x0) goto LAB_00c2f54f;
        FUN_00d50b00();
        *unaff_RDI = plVar6;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      if (*(int *)(lVar1 + 0xd8) == 0) {
        FUN_00aea610((int)plVar6[0x1a]);
        FUN_00d46dc0();
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 == (longlong *)0x0) goto LAB_00c2f54f;
          FUN_00d50b00();
          *unaff_RDI = plVar6;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00c2f55d;
        }
      }
      else {
        FUN_00aea610(*(undefined4 *)((longlong)plVar6 + 0xd4));
        FUN_00d46dc0();
        plVar6 = local_48;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            *unaff_RDI = plVar6;
            *(undefined1 *)(unaff_RDI + 1) = 1;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_00c2f55d;
          }
LAB_00c2f54f:
          local_48 = (longlong *)0x0;
        }
      }
LAB_00c2f551:
      *unaff_RDI = local_48;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  else {
    FUN_00d46530();
    plVar2 = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
        *unaff_RDI = plVar2;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00c2f4e7;
      }
      local_48 = (longlong *)0x0;
    }
    *unaff_RDI = local_48;
    *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_00c2f4e7:
    if (plVar6 == (longlong *)0x0) goto LAB_00c2f565;
  }
LAB_00c2f55d:
  FUN_00d50b20();
LAB_00c2f565:
  if ((local_31 != '\0') && (lVar1 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00c47240 — 1588 bytes
// str: ""GNOverloudTapedesk""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c47240(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00b10260();
  *unaff_RDI = &DAT_02559198;
  *(undefined4 *)(unaff_RDI + 0x19) = 0;
  if (DAT_0276e460 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      _uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276e453 == '\0') {
    FUN_00c478b0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xcc) = 0;
  if (DAT_0276e460 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      _uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276e453 == '\0') {
    FUN_00c47a20();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1a) = 0;
  if (DAT_0276e460 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      _uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276e453 == '\0') {
    FUN_00c47b90();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xd4) = 0;
  if (DAT_0276e460 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      _uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276e453 == '\0') {
    FUN_00c47d00();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1b) = 0;
  if (DAT_0276e460 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      _uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276e453 == '\0') {
    FUN_00c47e70();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0xdc) = 0;
  if (DAT_0276e460 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      _uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276e453 == '\0') {
    FUN_00c47fe0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x1c) = 0;
  if (DAT_0276e460 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      _uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0276e453 == '\0') {
    FUN_00c48150();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00c319e0 — 1459 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c31d91) */
/* WARNING: Removing unreachable block (ram,0x00c31d9a) */
/* WARNING: Removing unreachable block (ram,0x00c31c93) */
/* WARNING: Removing unreachable block (ram,0x00c31c9c) */
/* WARNING: Removing unreachable block (ram,0x00c31c43) */
/* WARNING: Removing unreachable block (ram,0x00c31c4c) */
/* WARNING: Removing unreachable block (ram,0x00c31ce3) */
/* WARNING: Removing unreachable block (ram,0x00c31cec) */
/* WARNING: Removing unreachable block (ram,0x00c31edf) */
/* WARNING: Removing unreachable block (ram,0x00c31ee8) */
/* WARNING: Removing unreachable block (ram,0x00c31e8f) */
/* WARNING: Removing unreachable block (ram,0x00c31e98) */
/* WARNING: Removing unreachable block (ram,0x00c31f2f) */
/* WARNING: Removing unreachable block (ram,0x00c31f38) */
/* WARNING: Removing unreachable block (ram,0x00c31de1) */
/* WARNING: Removing unreachable block (ram,0x00c31dea) */

void FUN_00c319e0(undefined8 param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  bool bVar6;
  
  puVar4 = DAT_028a5f58;
  puVar3 = DAT_028a5f48;
  puVar5 = DAT_028a5f38;
  if (param_2 == 10) {
    if ((DAT_028a5f58 == (undefined8 *)0x0) || (DAT_028a5f61 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5f58 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5f58 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5f58 != (undefined8 *)0x0;
          DAT_028a5f58 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5f60 == '\0') {
          DAT_028a5f60 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc70;
        if (DAT_0276cc70 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc78;
        if (DAT_0276cc78 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5f61 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5f61 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5f58;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c31f77;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar4;
    }
    FUN_00d50b00();
    goto LAB_00c31f79;
  }
  if (param_2 == 9) {
    if ((DAT_028a5f48 == (undefined8 *)0x0) || (DAT_028a5f51 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5f48 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5f48 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5f48 != (undefined8 *)0x0;
          DAT_028a5f48 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5f50 == '\0') {
          DAT_028a5f50 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc58;
        if (DAT_0276cc58 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc60;
        if (DAT_0276cc60 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc68;
        if (DAT_0276cc68 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5f51 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5f51 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5f48;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) goto LAB_00c31f77;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      puVar5 = puVar3;
    }
    FUN_00d50b00();
  }
  else {
    if (param_2 != 1) {
      FUN_00b34370();
      return;
    }
    if ((DAT_028a5f38 == (undefined8 *)0x0) || (DAT_028a5f41 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028a5f38 == (undefined8 *)0x0) {
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028a5f38 == puVar5) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
          bVar6 = DAT_028a5f38 != (undefined8 *)0x0;
          DAT_028a5f38 = puVar5;
          if (bVar6) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a5f40 == '\0') {
          DAT_028a5f40 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar1) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc40;
        if (DAT_0276cc40 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc48;
        if (DAT_0276cc48 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar2 = DAT_0276cc50;
        if (DAT_0276cc50 != 0) {
          FUN_00d50b00();
        }
        FUN_00d21140();
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        DAT_028a5f41 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028a5f41 = '\x01';
        FUN_00e8cb70();
      }
      puVar5 = DAT_028a5f38;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (puVar5 == (undefined8 *)0x0) {
LAB_00c31f77:
        puVar5 = (undefined8 *)0x0;
        goto LAB_00c31f79;
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    FUN_00d50b00();
  }
LAB_00c31f79:
  *unaff_RDI = puVar5;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c2fa50 — 1187 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c2fb64) */
/* WARNING: Removing unreachable block (ram,0x00c2fb70) */

ulonglong FUN_00c2fa50(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong unaff_RDI;
  longlong local_118;
  undefined1 local_110;
  longlong *local_d0;
  char local_c8;
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
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  *(undefined1 *)(unaff_RDI + 0xb0) = 0;
  lVar1 = DAT_0276cb18;
  plVar6 = (longlong *)*param_1;
  if (DAT_0276cb18 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar6 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0276caf8;
  if (cVar2 == '\0') {
    plVar6 = (longlong *)*param_1;
    if (DAT_0276caf8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar1;
    local_a8 = '\x01';
    uVar3 = (**(code **)(*plVar6 + 0x50))();
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 == '\0') {
      local_118 = *param_2;
      local_110 = 0;
      local_a0 = *param_1;
      local_98 = '\0';
      local_90 = *param_3;
      local_88 = '\0';
      uVar5 = FUN_00c17aa0(&local_a0,&local_118,&local_90);
      uVar7 = (ulonglong)uVar5;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      uVar4 = FUN_00d45870();
      *(undefined4 *)(*param_2 + 0xd8) = uVar4;
      uVar7 = CONCAT71((uint7)(uint3)((uint)uVar3 >> 8),1);
    }
  }
  else {
    plVar6 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar6 + 0x18))();
    lVar1 = DAT_0276cb20;
    if (DAT_0276cb20 != 0) {
      FUN_00d50b00();
    }
    local_40 = lVar1;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    FUN_00d46300();
    local_60 = local_80;
    local_58 = 0;
    lVar1 = DAT_0276cb28;
    if (local_78 == '\0') {
      if (local_80 != 0) {
        FUN_00d50b00();
        lVar1 = DAT_0276cb28;
      }
    }
    else {
      local_78 = '\0';
    }
    local_58 = '\x01';
    DAT_0276cb28 = lVar1;
    if (lVar1 != 0) {
      local_58 = '\x01';
      FUN_00d50b00();
    }
    local_38 = '\0';
    local_40 = lVar1;
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    lVar1 = DAT_0276cb30;
    if (DAT_0276cb30 != 0) {
      FUN_00d50b00();
    }
    local_68 = 0;
    FUN_00d50b00();
    local_68 = '\x01';
    local_c8 = '\0';
    local_d0 = plVar6;
    local_70 = unaff_RDI;
    FUN_00d40470(&local_d0,&local_70,3,3);
    if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    lVar1 = DAT_0276cb28;
    if (DAT_0276cb28 != 0) {
      FUN_00d50b00();
    }
    local_c0 = lVar1;
    local_b8 = '\x01';
    FUN_000175c0();
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
    uVar5 = FUN_00c70bc0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((char)uVar5 != '\0') {
      *(undefined1 *)(unaff_RDI + 0xb0) = 1;
    }
    FUN_00d50b20();
    uVar7 = (ulonglong)uVar5 ^ 1;
  }
  return uVar7;
}




// ============================================================
// @01f316e0 — 1142 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01f319e6) */
/* WARNING: Removing unreachable block (ram,0x01f319ef) */
/* WARNING: Removing unreachable block (ram,0x01f318bd) */
/* WARNING: Removing unreachable block (ram,0x01f318c6) */
/* WARNING: Removing unreachable block (ram,0x01f31871) */
/* WARNING: Removing unreachable block (ram,0x01f3187d) */
/* WARNING: Removing unreachable block (ram,0x01f3194f) */
/* WARNING: Removing unreachable block (ram,0x01f31958) */
/* WARNING: Removing unreachable block (ram,0x01f31a81) */
/* WARNING: Removing unreachable block (ram,0x01f31a8a) */

undefined4 FUN_01f316e0(longlong *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_48;
  char local_40;
  longlong *local_38;
  
  if (*unaff_RSI == 0) {
    (**(code **)(*unaff_RDI + 0x458))();
    lVar5 = *unaff_RSI;
    if (lVar5 == local_48) {
      if (((char)unaff_RSI[1] != '\0') || (local_48 == 0)) goto LAB_01f317bc;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_01f317b5;
      }
    }
    else {
      lVar1 = unaff_RSI[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *unaff_RSI = local_48;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_01f317b5:
        local_38 = unaff_RSI + 1;
        *(undefined1 *)local_38 = 1;
LAB_01f317bc:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01f317d0;
      }
      *unaff_RSI = local_48;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_38 = unaff_RSI + 1;
    *(undefined1 *)local_38 = 1;
  }
LAB_01f317d0:
  *(int *)((longlong)unaff_RDI + 0xdc) = *(int *)((longlong)unaff_RDI + 0xdc) + 1;
  *(int *)(unaff_RDI + 0x1c) = (int)unaff_RDI[0x1c] + 1;
  _objc_alloc();
  puVar2 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  _objc_alloc();
  (*(code *)puVar2)();
  _objc_autorelease();
  (*(code *)puVar2)();
  FUN_00e1cfc0();
  (*(code *)PTR__objc_msgSend_024a9998)();
  FUN_00e1cfc0();
  (*(code *)PTR__objc_msgSend_024a9998)();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if ((*param_1 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar4[2] + (longlong)iVar3) = 0;
  }
  if ((*param_3 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar4[2] + (longlong)iVar3) = 1;
  }
  if ((*param_4 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    (*(code *)PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(undefined4 *)(puVar4[2] + (longlong)iVar3) = 2;
  }
  lVar5 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (lVar5 == 0x3ea) {
    puVar6 = (undefined4 *)(puVar4[2] + 8);
  }
  else if (lVar5 == 0x3e9) {
    puVar6 = (undefined4 *)(puVar4[2] + 4);
  }
  else {
    uVar7 = 0;
    if (lVar5 != 1000) goto LAB_01f31b1e;
    puVar6 = (undefined4 *)puVar4[2];
  }
  uVar7 = *puVar6;
LAB_01f31b1e:
  (*(code *)PTR__objc_release_024a99a0)();
  *(int *)((longlong)unaff_RDI + 0xdc) = *(int *)((longlong)unaff_RDI + 0xdc) + -1;
  *(int *)(unaff_RDI + 0x1c) = (int)unaff_RDI[0x1c] + -1;
  FUN_00d50b20();
  return uVar7;
}




// ============================================================
// @00c33bc0 — 965 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c33bfd) */
/* WARNING: Removing unreachable block (ram,0x00c33c09) */

void FUN_00c33bc0(void)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong unaff_RDI;
  longlong lVar6;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  undefined4 local_34;
  
  FUN_01d0f230();
  local_b0 = DAT_0276cc80;
  if ((*(longlong *)(unaff_RDI + 0x1d8) != 0) && (*(longlong *)(unaff_RDI + 0x1d0) != 0)) {
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a8 = '\x01';
    FUN_00d91000(1,&local_b0);
    lVar5 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    lVar6 = DAT_0276cc80;
    local_80 = lVar5;
    if (DAT_0276cc80 != 0) {
      FUN_00d50b00();
    }
    local_a0 = lVar6;
    local_98 = '\x01';
    FUN_00d91000(1,&local_a0);
    local_40 = local_78;
    if (local_70 == '\0') {
      if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_70 = '\0';
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025683c0;
    pcVar3 = DAT_025683d8;
    (*DAT_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    lVar6 = *(longlong *)(unaff_RDI + 0x1e0);
    *(undefined8 **)(unaff_RDI + 0x1e0) = puVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025683c0;
    (*pcVar3)();
    FUN_00c92170();
    FUN_00c92160();
    lVar6 = *(longlong *)(unaff_RDI + 0x1e8);
    *(undefined8 **)(unaff_RDI + 0x1e8) = puVar4;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      local_70 = '\0';
      local_78 = 0;
      local_68 = lVar5;
      local_58 = 0;
      local_60 = 0;
      if (0 < *(int *)(lVar5 + 0xc)) {
        lVar6 = 0;
        do {
          local_90 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar6 * 8);
          lVar5 = *(longlong *)(unaff_RDI + 0x1e0);
          local_88 = '\0';
          local_78 = local_90;
          local_34 = FUN_00c71d60();
          iVar1 = *(int *)(lVar5 + 0x18);
          FUN_00c8e340(local_34,1);
          *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar1) = local_34;
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          lVar5 = *(longlong *)(unaff_RDI + 0x1e8);
          lVar2 = *(longlong *)(*(longlong *)(local_40 + 0x10) + lVar6 * 8);
          local_48 = 0;
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          local_48 = '\x01';
          local_50 = lVar2;
          local_34 = FUN_00c71d60();
          iVar1 = *(int *)(lVar5 + 0x18);
          FUN_00c8e340(local_34,1);
          *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + (longlong)iVar1) = local_34;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          local_60 = CONCAT44(local_60._4_4_,(int)lVar6);
          lVar5 = local_80;
        } while ((int)lVar6 < *(int *)(local_80 + 0xc));
      }
      FUN_00018280();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00c364b0 — 869 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c366d8) */
/* WARNING: Removing unreachable block (ram,0x00c366e1) */
/* WARNING: Removing unreachable block (ram,0x00c36631) */
/* WARNING: Removing unreachable block (ram,0x00c3663a) */
/* WARNING: Removing unreachable block (ram,0x00c364ea) */
/* WARNING: Removing unreachable block (ram,0x00c364f6) */
/* WARNING: Removing unreachable block (ram,0x00c365bc) */
/* WARNING: Removing unreachable block (ram,0x00c365cc) */
/* WARNING: Removing unreachable block (ram,0x00c36691) */
/* WARNING: Removing unreachable block (ram,0x00c3669a) */
/* WARNING: Removing unreachable block (ram,0x00c3671f) */
/* WARNING: Removing unreachable block (ram,0x00c36728) */
/* WARNING: Removing unreachable block (ram,0x00c36547) */
/* WARNING: Removing unreachable block (ram,0x00c36570) */
/* WARNING: Removing unreachable block (ram,0x00c36549) */
/* WARNING: Removing unreachable block (ram,0x00c36572) */

void FUN_00c364b0(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_40;
  
  FUN_01cc9350();
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar1 != 0) {
    local_40 = -1;
    while( true ) {
      lVar4 = (longlong)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_40) break;
      (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + 8 + lVar4 * 8) + 0xa20))();
    }
    FUN_007f7b50();
  }
  FUN_00d216c0();
  FUN_01ccad60();
  if (local_70 == '\0') {
    if (local_78 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  FUN_00d21140();
  if (local_78 != 0) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x60) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x68) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    FUN_00d50b00();
    FUN_00d21140();
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x78);
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar4 * 8);
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0xa20))();
        if (unaff_RDI != 0) {
          FUN_00d50b20();
        }
        lVar3 = DAT_027ef7e8;
        if (DAT_027ef7e8 != 0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar2 + 0xa10))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_007f7b50();
  }
  return;
}




// ============================================================
// @00c34160 — 803 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c34458) */
/* WARNING: Removing unreachable block (ram,0x00c34461) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c34160(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *unaff_RSI;
  longlong lVar8;
  longlong *unaff_RDI;
  float fVar9;
  float extraout_XMM0_Db;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong local_58;
  char local_50;
  uint local_48;
  
  fVar11 = (float)((ulonglong)param_2 >> 0x20);
  if (unaff_RDI[0x3c] != 0) {
    iVar2 = *(int *)(unaff_RDI[0x3c] + 0x18);
    iVar7 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar7 = iVar2;
    }
    if (3 < iVar2) {
      fVar9 = (float)(**(code **)(*unaff_RDI + 0x930))();
      FUN_01e3f820();
      pfVar3 = *(float **)(unaff_RDI[0x3c] + 0x10);
      fVar1 = *pfVar3;
      if (fVar9 <= fVar1) {
        fVar13 = **(float **)(unaff_RDI[0x3d] + 0x10);
      }
      else {
        uVar6 = (ulonglong)((iVar7 >> 2) - 1);
        if (pfVar3[uVar6] <= fVar9) {
          fVar13 = *(float *)(*(longlong *)(unaff_RDI[0x3d] + 0x10) + uVar6 * 4);
        }
        else {
          uVar6 = 0;
          while (fVar1 < fVar9) {
            lVar8 = uVar6 + 1;
            uVar6 = uVar6 + 1;
            fVar1 = pfVar3[lVar8];
          }
          lVar8 = (longlong)((uVar6 << 0x20) + -0x100000000) >> 0x1e;
          fVar10 = *(float *)((longlong)pfVar3 + lVar8);
          fVar13 = *(float *)(*(longlong *)(unaff_RDI[0x3d] + 0x10) + lVar8);
          fVar13 = ((*(float *)(*(longlong *)(unaff_RDI[0x3d] + 0x10) + (uVar6 & 0xffffffff) * 4) -
                    fVar13) * (fVar9 - fVar10)) / (fVar1 - fVar10) + fVar13;
        }
      }
      fVar1 = *(float *)(unaff_RDI + 0x39);
      FUN_01d48370();
      plVar4 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar4 + 0x390))();
      FUN_01cfbee0(DAT_0239011c,0,0);
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      FUN_01d488d0();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      fVar10 = (float)((uint)(DAT_023b5d7c - fVar13) & -(uint)(fVar13 < DAT_023b5d7c));
      fVar12 = 0.0;
      local_48 = ~-(uint)(fVar13 < DAT_023b5d7c) & ((uint)(DAT_023b5d80 + fVar13) ^ _DAT_023945e0) |
                 (uint)fVar10;
      plVar4 = (longlong *)*unaff_RSI;
      fVar9 = (float)FUN_01e3f820();
      fVar10 = fVar10 * DAT_0239011c;
      FUN_01e3f820();
      (**(code **)(*plVar4 + 0x370))
                (fVar9 + fVar10,
                 fVar12 + extraout_XMM0_Db + DAT_02390d00 + *(float *)(unaff_RDI + 0x39));
      (**(code **)(*(longlong *)*unaff_RSI + 0x378))(local_48);
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x41) = 0;
      (*DAT_02680418)();
      FUN_01d38ba0(DAT_02394244,0);
      FUN_01d38ba0(0,(uint)(fVar11 + fVar1) ^ _DAT_023945e0);
      FUN_01d38ba0(DAT_0239458c,0);
      FUN_01d38b10();
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
      FUN_01d48390();
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00c36d90 — 772 bytes
// ============================================================

ulonglong FUN_00c36d90(undefined8 param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = DAT_027ef7e8;
  if (DAT_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*plVar2 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 & param_2) == 0) {
    local_70 = *unaff_RSI;
    local_68 = '\0';
    uVar5 = FUN_01d16950(param_1,param_2);
    uVar6 = (ulonglong)uVar5;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    iVar4 = FUN_01caea00();
    if (iVar4 == 0) {
      FUN_00d46530();
      local_50 = local_40;
      local_48 = 0;
      local_90 = DAT_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          local_90 = DAT_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_48 = '\x01';
      DAT_027e7c20 = local_90;
      if (local_90 != 0) {
        local_48 = '\x01';
        FUN_00d50b00();
      }
      local_88 = '\x01';
      (**(code **)(*unaff_RDI + 0x4d0))(param_1,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01caea40();
      FUN_00d46530();
      local_60 = local_40;
      local_58 = 0;
      local_a0 = DAT_027e7c20;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          local_a0 = DAT_027e7c20;
        }
      }
      else {
        local_38 = '\0';
      }
      local_58 = '\x01';
      DAT_027e7c20 = local_a0;
      if (local_a0 != 0) {
        local_58 = '\x01';
        FUN_00d50b00();
      }
      local_98 = '\x01';
      (**(code **)(*unaff_RDI + 0x4d0))(param_1,&local_a0);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    lVar1 = DAT_027e7c20;
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    local_80 = lVar1;
    local_78 = '\x01';
    FUN_01ccaae0(param_1,&local_80);
    FUN_01d243a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar6 & 0xffffffff;
}




// ============================================================
// @00c2e750 — 731 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c2e815) */
/* WARNING: Removing unreachable block (ram,0x00c2e821) */

void FUN_00c2e750(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  float local_44;
  longlong *local_40;
  char local_38;
  
  plVar1 = (longlong *)unaff_RSI[3];
  if ((plVar1 == (longlong *)0x0) || (lVar2 = unaff_RSI[2], lVar2 == 0)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_90 = 0;
    local_44 = (float)param_1;
    uVar4 = FUN_00d50b00();
    local_90 = '\x01';
    local_98 = lVar2;
    (**(code **)(*plVar1 + 0x618))(uVar4,&local_98);
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
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    cVar3 = (**(code **)(*plVar1 + 0x50))();
    if (cVar3 != '\0') {
      plVar1 = (longlong *)unaff_RSI[3];
      local_80 = 0;
      lVar2 = unaff_RSI[2];
      uVar4 = extraout_XMM0_Da;
      if (lVar2 != 0) {
        uVar4 = FUN_00d50b00();
      }
      local_80 = '\x01';
      local_88 = lVar2;
      (**(code **)(*plVar1 + 0x88))(uVar4,&local_88);
      local_68 = local_40;
      local_60 = 0;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_60 = '\x01';
      uVar4 = FUN_00c71d60();
      *(undefined4 *)(unaff_RSI + 4) = uVar4;
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    local_44 = (float)(int)local_44 * DAT_023d4ff8 + *(float *)(unaff_RSI + 4);
    plVar1 = (longlong *)unaff_RSI[3];
    uVar4 = FUN_00d46dc0();
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar4 = FUN_00d50b00();
      }
      lVar2 = unaff_RSI[2];
    }
    else {
      local_38 = '\0';
      lVar2 = unaff_RSI[2];
    }
    local_50 = '\x01';
    if (lVar2 != 0) {
      local_50 = '\x01';
      local_70 = 0;
      uVar4 = FUN_00d50b00();
    }
    local_70 = '\x01';
    local_78 = lVar2;
    (**(code **)(*plVar1 + 0x80))(uVar4,&local_78);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RSI + 0x378))(local_44);
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c302d0 — 717 bytes
// str: ""GNOverloudTapedesk""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c302d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong **pplVar4;
  undefined4 uVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  longlong *local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  if (*(char *)(unaff_RDI + 0xb0) == '\0') goto LAB_00c304a9;
  pplVar4 = &local_40;
  local_98 = param_1;
  uVar5 = FUN_00b37610();
  plVar1 = local_40;
  if (DAT_0276e460 == '\0') {
    iVar3 = ___cxa_guard_acquire();
    uVar5 = extraout_XMM0_Da_00;
    if (iVar3 != 0) {
      _DAT_0276e3b0 = FUN_00b10020();
      _DAT_0276e398 = "GNOverloudTapedesk";
      _DAT_0276e3a0 = 0xe8;
      _DAT_0276e3a8 = FUN_00c41400;
      _DAT_0276e3b8 = 0;
      uRam000000000276e3c0 = 0;
      _DAT_0276e3c8 = 0;
      uRam000000000276e3d0 = 0;
      _DAT_0276e3d8 = 0;
      uRam000000000276e3e0 = 0;
      _DAT_0276e3e8 = 0;
      uRam000000000276e3f0 = 0;
      _DAT_0276e3f8 = 0;
      uRam000000000276e400 = 0;
      _DAT_0276e408 = 0;
      uRam000000000276e410 = 0;
      _DAT_0276e418 = 0;
      uRam000000000276e420 = 0;
      _DAT_0276e428 = 0;
      uRam000000000276e430 = 0;
      _DAT_0276e438 = 0;
      uRam000000000276e440 = 0;
      _DAT_0276e448 = 0;
      uRam000000000276e450 = 0;
      _DAT_0276e458 = 0;
      uVar5 = ___cxa_guard_release();
    }
  }
  if (plVar1 == (longlong *)0x0) {
LAB_00c30349:
    pplVar4 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    uVar5 = extraout_XMM0_Da;
    if (cVar2 == '\0') goto LAB_00c30349;
  }
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar5 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_90 = *param_3;
    local_88 = '\0';
    local_80 = *local_98;
    local_78 = '\0';
    (**(code **)(*plVar1 + 0x80))(uVar5,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_70 = DAT_0276cb38;
  if (DAT_0276cb38 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_60 = *param_2;
  local_58 = '\0';
  local_50 = 0;
  local_48 = '\0';
  FUN_00d40470(&local_50,&local_60,3,3);
  param_1 = local_98;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00c304a9:
  local_b8 = *param_2;
  local_b0 = 0;
  local_a8 = *param_1;
  local_a0 = 0;
  FUN_00c2bb50(&local_a8,&local_b8);
  return;
}




// ============================================================
// @00c35fe0 — 703 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c361eb) */
/* WARNING: Removing unreachable block (ram,0x00c361f4) */
/* WARNING: Removing unreachable block (ram,0x00c3614b) */
/* WARNING: Removing unreachable block (ram,0x00c36154) */
/* WARNING: Removing unreachable block (ram,0x00c360fb) */
/* WARNING: Removing unreachable block (ram,0x00c36104) */
/* WARNING: Removing unreachable block (ram,0x00c3619b) */
/* WARNING: Removing unreachable block (ram,0x00c361a4) */
/* WARNING: Removing unreachable block (ram,0x00c3623b) */
/* WARNING: Removing unreachable block (ram,0x00c36244) */

void FUN_00c35fe0(undefined8 param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *unaff_RDI;
  bool bVar5;
  
  puVar4 = DAT_028a5f78;
  if (param_2 != 0x13) {
    FUN_00b34370();
    return;
  }
  if ((DAT_028a5f78 == (undefined8 *)0x0) || (DAT_028a5f81 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a5f78 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (DAT_028a5f78 == puVar4) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = DAT_028a5f78 != (undefined8 *)0x0;
        DAT_028a5f78 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (DAT_028a5f80 == '\0') {
        DAT_028a5f80 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cd80;
      if (DAT_0276cd80 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cd88;
      if (DAT_0276cd88 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cd90;
      if (DAT_0276cd90 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cd98;
      if (DAT_0276cd98 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      lVar3 = DAT_0276cda0;
      if (DAT_0276cda0 != 0) {
        FUN_00d50b00();
      }
      FUN_00d21140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      DAT_028a5f81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a5f81 = '\x01';
      FUN_00e8cb70();
    }
    puVar4 = DAT_028a5f78;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_00c36281;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00c36281:
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00c324e0 — 590 bytes
// ============================================================

void FUN_00c324e0(float param_1)

{
  int unaff_ESI;
  longlong *unaff_RDI;
  byte bVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = -1;
  fVar4 = 0.0;
  bVar1 = 0;
  if ((*(char *)((longlong)unaff_RDI + 0xdc) != '\0') && (bVar1 = 0, unaff_ESI - 7U < 2)) {
    fVar4 = (float)(**(code **)(*unaff_RDI + 0x458))();
    fVar4 = param_1 - fVar4;
    bVar1 = 1;
    if (unaff_ESI == 7) {
      iVar2 = 8;
    }
    else if (unaff_ESI == 8) {
      iVar2 = 7;
    }
    else {
      bVar1 = 0;
    }
  }
  fVar3 = *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)unaff_ESI * 4);
  if ((fVar3 != param_1) || (NAN(fVar3) || NAN(param_1))) {
    *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)unaff_ESI * 4) = param_1;
    (**(code **)(*unaff_RDI + 0x638))(param_1);
    FUN_00b32040();
  }
  if (!(bool)(bVar1 & (fVar4 != 0.0 && *(char *)((longlong)unaff_RDI + 0xdc) != '\0'))) {
    return;
  }
  fVar3 = *(float *)(unaff_RDI + 0x1c);
  if ((fVar3 == 0.0) && (!NAN(fVar3))) {
    fVar3 = (float)(**(code **)(*unaff_RDI + 0x458))();
  }
  fVar3 = fVar3 - fVar4;
  if ((0.0 <= fVar3) && (fVar3 <= DAT_02390124)) {
    *(undefined4 *)(unaff_RDI + 0x1c) = 0;
    fVar4 = *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4);
    if ((fVar4 == fVar3) && (!NAN(fVar4) && !NAN(fVar3))) {
      return;
    }
    *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4) = fVar3;
    (**(code **)(*unaff_RDI + 0x638))();
    FUN_00b32040();
    return;
  }
  if (((0.0 <= fVar3) || (*(float *)(unaff_RDI + 0x1c) != 0.0)) ||
     (NAN(*(float *)(unaff_RDI + 0x1c)))) {
    if (((fVar3 <= DAT_02390124) || (*(float *)(unaff_RDI + 0x1c) != 0.0)) ||
       (NAN(*(float *)(unaff_RDI + 0x1c)))) goto LAB_00c32718;
    fVar4 = *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4);
    if ((fVar4 == DAT_02390124) && (!NAN(fVar4) && !NAN(DAT_02390124))) goto LAB_00c32718;
    *(undefined4 *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4) = 0x3f800000;
    fVar4 = DAT_02390124;
  }
  else {
    fVar4 = *(float *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4);
    if ((fVar4 == 0.0) && (!NAN(fVar4))) goto LAB_00c32718;
    *(undefined4 *)(*(longlong *)(unaff_RDI[0x13] + 0x10) + (longlong)iVar2 * 4) = 0;
    fVar4 = 0.0;
  }
  (**(code **)(*unaff_RDI + 0x638))(fVar4);
  FUN_00b32040();
LAB_00c32718:
  *(float *)(unaff_RDI + 0x1c) = fVar3;
  return;
}




// ============================================================
// @00c338a0 — 589 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00c33a08) */
/* WARNING: Removing unreachable block (ram,0x00c33a11) */

void FUN_00c338a0(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *unaff_RDI;
  longlong **pplVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM1_Dc;
  longlong *plVar8;
  undefined4 local_4c;
  longlong *local_40;
  char local_38;
  
  pplVar4 = &local_40;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  FUN_00209700();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_00c33900;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_00c33900:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_4c = (undefined4)plVar1[0x3d];
    *(undefined4 *)(plVar1 + 0x3d) = 0x3f8eb852;
  }
  (**(code **)(*unaff_RDI + 0x640))();
  plVar8 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = FUN_01e3f820();
  uVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  (**(code **)(*plVar8 + 0x3f0))(uVar5,0xf,0,uVar3);
  unaff_RDI[0x3a] = 0x3f8000003f19999a;
  uVar3 = 0;
  plVar8 = plVar1;
  uVar6 = FUN_01e3f820();
  uVar5 = extraout_XMM0_Dc;
  uVar7 = (**(code **)(*unaff_RDI + 0x930))();
  (**(code **)(*unaff_RDI + 0x9a0))();
  (**(code **)(*unaff_RDI + 0xa70))();
  FUN_00c32cc0(uVar6,param_2,uVar7,DAT_02390128,plVar8,uVar3,uVar6,uVar5,param_2,in_XMM1_Dc);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 0x3d) = local_4c;
  }
  FUN_00d50b20();
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00c376f0 — 521 bytes
// ============================================================

ulonglong FUN_00c376f0(undefined8 param_1,byte param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  plVar2 = local_40;
  lVar1 = DAT_027ef7e8;
  if (DAT_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*plVar2 + 0x50))();
  uVar6 = extraout_XMM0_Da;
  if (lVar1 != 0) {
    uVar6 = FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if ((bVar3 & param_2) == 0) {
    local_60 = *unaff_RSI;
    local_58 = '\0';
    uVar4 = FUN_01d16950(uVar6,param_2);
    uVar5 = (ulonglong)uVar4;
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar6 = FUN_00d46dc0((*(float *)((longlong)unaff_RDI + 100) - *(float *)(unaff_RDI + 0xc)) *
                         DAT_0239011c + *(float *)(unaff_RDI + 0xc));
    local_50 = local_40;
    local_48 = 0;
    local_80 = DAT_027e7c20;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        uVar6 = FUN_00d50b00();
        local_80 = DAT_027e7c20;
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    DAT_027e7c20 = local_80;
    if (local_80 != 0) {
      local_48 = '\x01';
      uVar6 = FUN_00d50b00();
    }
    local_78 = '\x01';
    uVar6 = (**(code **)(*unaff_RDI + 0x4d0))(uVar6,&local_80);
    if ((local_78 != '\0') && (local_80 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
    lVar1 = DAT_027e7c20;
    if (DAT_027e7c20 != 0) {
      uVar6 = FUN_00d50b00();
    }
    local_70 = lVar1;
    local_68 = '\x01';
    FUN_01ccaae0(uVar6,&local_70);
    FUN_01d243a0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar5 & 0xffffffff;
}



