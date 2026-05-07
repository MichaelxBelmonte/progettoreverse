// Reconstructed implementation of MUScaleOpenPanel
// From MikeCore binary — reverse-engineered pseudocode

#include "MUScaleOpenPanel.h"

// ============================================================
// @01b31bc0 — 14986 bytes
// str: ""%%@%%I    (%@)""
// str: ""%@ = %.1f  (%@, A -> %.1f)""
// str: ""A = %.1f  (%@)""
// str: ""A = 440.0  (%@)""
// str: ""%@ = %.1f  (%@)""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b31f79) */
/* WARNING: Removing unreachable block (ram,0x01b31ebe) */
/* WARNING: Removing unreachable block (ram,0x01b31c05) */
/* WARNING: Removing unreachable block (ram,0x01b31c11) */
/* WARNING: Removing unreachable block (ram,0x01b31eca) */
/* WARNING: Removing unreachable block (ram,0x01b31f85) */

void FUN_01b31bc0(void)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong unaff_RDI;
  undefined8 *puVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  longlong local_688;
  char local_680;
  longlong local_678;
  char local_670;
  longlong local_668;
  char local_660;
  longlong local_658;
  char local_650;
  longlong *local_648;
  char local_640;
  longlong local_638;
  char local_630;
  longlong local_628;
  char local_620;
  longlong local_618;
  char local_610;
  longlong local_608;
  char local_600;
  longlong local_5f8;
  char local_5f0;
  longlong local_5e8;
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
  longlong local_568;
  char local_560;
  longlong local_558;
  char local_550;
  longlong local_548;
  char local_540;
  longlong local_538;
  char local_530;
  longlong local_528;
  char local_520;
  longlong local_518;
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
  longlong local_498;
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
  longlong local_418;
  char local_410;
  longlong local_408;
  char local_400;
  longlong local_3f8;
  char local_3f0;
  longlong local_3e8;
  char local_3e0;
  longlong local_3d8;
  char local_3d0;
  longlong local_3c8;
  char local_3c0;
  longlong local_3b8;
  char local_3b0;
  longlong local_3a8;
  char local_3a0;
  longlong local_398;
  char local_390;
  longlong local_388;
  char local_380;
  longlong local_378;
  char local_370;
  longlong local_368;
  char local_360;
  longlong local_358;
  char local_350;
  longlong local_348;
  char local_340;
  longlong local_338;
  char local_330;
  longlong local_328;
  char local_320;
  longlong local_318;
  char local_310;
  longlong local_308;
  char local_300;
  longlong local_2f8;
  char local_2f0;
  longlong local_2e8;
  char local_2e0;
  longlong local_2d8;
  char local_2d0;
  longlong local_2c8;
  char local_2c0;
  longlong local_2b8;
  char local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  float local_2a0;
  float local_29c;
  longlong *local_258;
  char local_250;
  longlong *local_248;
  char local_240;
  longlong *local_238;
  char local_230;
  longlong *local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
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
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
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
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong local_c8;
  char local_c0;
  longlong *local_b8;
  longlong *local_b0;
  char local_a8;
  float local_a0 [2];
  longlong *local_98;
  float local_90;
  float local_8c;
  longlong local_88;
  char local_80;
  longlong local_70;
  char local_68;
  undefined4 local_60;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  FUN_01e125e0();
  FUN_01d6f8d0();
  plVar10 = *(longlong **)(unaff_RDI + 0xb0);
  FUN_00d50b00();
  (**(code **)(*plVar10 + 0xa20))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027e45a0;
  plVar10 = *(longlong **)(unaff_RDI + 0xb0);
  if (DAT_027e45a0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar10 + 0xa10))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_01d6f8d0();
  plVar10 = *(longlong **)(unaff_RDI + 0xb8);
  FUN_00d50b00();
  (**(code **)(*plVar10 + 0xa20))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027e45a8;
  plVar10 = *(longlong **)(unaff_RDI + 0xb8);
  if (DAT_027e45a8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar10 + 0xa10))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  FUN_01d6f8d0();
  plVar10 = *(longlong **)(unaff_RDI + 0xc0);
  FUN_00d50b00();
  (**(code **)(*plVar10 + 0xa20))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar5 = DAT_027e45b0;
  plVar10 = *(longlong **)(unaff_RDI + 0xc0);
  if (DAT_027e45b0 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar10 + 0xa10))();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x4a0))();
  FUN_00d23310();
  plVar10 = local_98;
  pfVar6 = &local_90;
  local_58 = local_90._0_1_;
  pfVar7 = pfVar6;
  if (local_90._0_1_ == '\0') {
    pfVar7 = (float *)&local_58;
  }
  *(undefined1 *)pfVar7 = 0;
  if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar9 = (pthread_key_t)pfVar6;
  (**(code **)(*plVar10 + 0x958))();
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4a0))();
  FUN_00d23310();
  plVar10 = local_98;
  local_58 = local_90._0_1_;
  pfVar6 = &local_90;
  if (local_90._0_1_ == '\0') {
    pfVar6 = (float *)&local_58;
  }
  *(undefined1 *)pfVar6 = 0;
  if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar10 + 0x958))();
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01b27070();
  local_48 = local_98;
  if ((local_90._0_1_ == '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b00();
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar3 = FUN_01b270b0();
  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar3);
  if (local_48 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x4a0))();
    FUN_00d23310();
    plVar10 = local_98;
    local_a0[0] = (float)CONCAT31(local_a0[0]._1_3_,local_90._0_1_);
    pfVar6 = &local_90;
    if (local_90._0_1_ == '\0') {
      pfVar6 = local_a0;
    }
    *(undefined1 *)pfVar6 = 0;
    if ((local_90._0_1_ != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_016ab300();
    pvVar4 = _pthread_getspecific(pVar9);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar9 = (pthread_key_t)local_48;
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_01736d70();
    local_258 = local_b0;
    local_250 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (longlong *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_250 = '\x01';
    FUN_016ac280(uVar3,&local_258);
    plVar11 = local_98;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    (**(code **)(*plVar10 + 0x958))();
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_250 != '\0') && (local_258 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a0[0]._0_1_ != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4a0))();
    FUN_00d23310();
    plVar10 = local_98;
    pfVar6 = &local_90;
    pfVar7 = local_a0;
    if (local_90._0_1_ != '\0') {
      pfVar7 = pfVar6;
    }
    local_a0[0] = (float)CONCAT31(local_a0[0]._1_3_,local_90._0_1_);
    *(undefined1 *)pfVar7 = 0;
    if ((local_90._0_1_ != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (pthread_key_t)pfVar6;
    FUN_016ab300();
    pvVar4 = _pthread_getspecific(pVar9);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar9 = (pthread_key_t)local_48;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_01770c90();
    local_238 = local_b0;
    local_230 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (longlong *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_230 = '\x01';
    FUN_016ac280(uVar3,&local_238);
    local_248 = local_98;
    local_240 = 0;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    local_240 = '\x01';
    (**(code **)(*plVar10 + 0x958))();
    if ((local_240 != '\0') && (local_248 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a0[0]._0_1_ != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    plVar10 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar10 = local_48, lVar5 != 0)) {
      plVar10 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    uVar3 = (**(code **)(*plVar10 + 0x370))();
    lVar5 = DAT_027e4590;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = DAT_027e45b8;
    if (DAT_027e45b8 != 0) {
      FUN_00d50b00();
    }
    local_688 = lVar8;
    local_680 = '\x01';
    local_678 = 0;
    local_670 = '\0';
    plVar10 = &local_678;
    uVar14 = FUN_00d31230(plVar10,&local_688);
    pVar9 = (pthread_key_t)plVar10;
    local_88 = CONCAT71(uStack_57,local_58);
    local_90 = 1.4013e-45;
    local_98 = &DAT_024c5048;
    local_80 = 0;
    if (local_88 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_00d8cb40(uVar14,&local_98);
    lVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = &DAT_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_670 != '\0') && (local_678 != 0)) {
      FUN_00d50b20();
    }
    if ((local_680 != '\0') && (local_688 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    plVar10 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar10 = local_48, lVar5 != 0)) {
      plVar10 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    local_668 = lVar8;
    local_660 = '\0';
    local_658 = 0;
    local_650 = '\0';
    (**(code **)(*plVar10 + 0x3c0))(&local_668,uVar3,&local_658);
    plVar10 = local_98;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    if ((local_650 != '\0') && (local_658 != 0)) {
      FUN_00d50b20();
    }
    if ((local_660 != '\0') && (local_668 != 0)) {
      FUN_00d50b20();
    }
    local_648 = plVar10;
    local_640 = '\0';
    FUN_01d6f990();
    if ((local_640 != '\0') && (local_648 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar8 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x4a0))();
  FUN_00d23340();
  plVar10 = local_98;
  local_58 = local_90._0_1_;
  pfVar6 = &local_90;
  if (local_90._0_1_ == '\0') {
    pfVar6 = (float *)&local_58;
  }
  *(char *)pfVar6 = '\0';
  if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_638 = 0;
  local_630 = '\0';
  (**(code **)(*plVar10 + 0x958))();
  if ((local_630 != '\0') && (local_638 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4a0))();
  FUN_00d23340();
  plVar10 = local_98;
  pfVar6 = &local_90;
  pfVar7 = (float *)&local_58;
  if (local_90._0_1_ != '\0') {
    pfVar7 = pfVar6;
  }
  local_58 = local_90._0_1_;
  *(char *)pfVar7 = '\0';
  if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pVar9 = (pthread_key_t)pfVar6;
  local_628 = 0;
  local_620 = '\0';
  (**(code **)(*plVar10 + 0x958))();
  if ((local_620 != '\0') && (local_628 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  plVar10 = (longlong *)(unaff_RDI + 0xe0);
  if (*(longlong *)(unaff_RDI + 0xe0) != 0) {
    FUN_01e42030();
    plVar11 = local_98;
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_01e11330();
      FUN_016ab300();
      pvVar4 = _pthread_getspecific(pVar9);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_017aabc0();
      local_210 = 0;
      local_218 = CONCAT71(uStack_57,local_58);
      if (local_50 == '\0') {
        if (local_218 != 0) {
          uVar3 = FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_210 = '\x01';
      FUN_016ac280(uVar3,&local_218);
      local_228 = local_98;
      local_220 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_220 = '\x01';
      FUN_01e125e0();
      if ((local_220 != '\0') && (local_228 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_210 != '\0') && (local_218 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x4a0))();
    FUN_00d23340();
    plVar11 = local_98;
    local_a0[0] = (float)CONCAT31(local_a0[0]._1_3_,local_90._0_1_);
    pfVar6 = local_a0;
    pfVar7 = &local_90;
    if (local_90._0_1_ == '\0') {
      pfVar7 = pfVar6;
    }
    *(undefined1 *)pfVar7 = 0;
    if ((local_90._0_1_ != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (pthread_key_t)pfVar6;
    FUN_016ab300();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_01736d70();
    local_1f8 = local_b0;
    local_1f0 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (longlong *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_1f0 = '\x01';
    FUN_016ac280(uVar3,&local_1f8);
    local_208 = local_98;
    local_200 = 0;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    local_200 = '\x01';
    (**(code **)(*plVar11 + 0x958))();
    if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a0[0]._0_1_ != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x4a0))();
    FUN_00d23340();
    plVar11 = local_98;
    pfVar6 = &local_90;
    if (local_90._0_1_ == '\0') {
      pfVar6 = local_a0;
    }
    local_a0[0] = (float)CONCAT31(local_a0[0]._1_3_,local_90._0_1_);
    *(undefined1 *)pfVar6 = 0;
    if ((local_90._0_1_ != '\0') && (plVar11 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pVar9 = (pthread_key_t)pfVar6;
    FUN_016ab300();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_01770c90();
    local_1d8 = local_b0;
    local_1d0 = 0;
    if (local_a8 == '\0') {
      if (local_b0 != (longlong *)0x0) {
        uVar3 = FUN_00d50b00();
      }
    }
    else {
      local_a8 = '\0';
    }
    local_1d0 = '\x01';
    FUN_016ac280(uVar3,&local_1d8);
    local_1e8 = local_98;
    local_1e0 = 0;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    local_1e0 = '\x01';
    (**(code **)(*plVar11 + 0x958))();
    if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_a0[0]._0_1_ != '\0') {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    plVar11 = (longlong *)*plVar10;
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      plVar11 = (longlong *)*plVar10;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    uVar3 = (**(code **)(*plVar11 + 0x370))();
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar5 = DAT_027e4590;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = DAT_027e45c0;
    local_618 = lVar5;
    local_610 = '\x01';
    if (DAT_027e45c0 != 0) {
      FUN_00d50b00();
    }
    local_608 = lVar8;
    local_600 = '\x01';
    local_5f8 = 0;
    local_5f0 = '\0';
    plVar11 = &local_5f8;
    uVar14 = FUN_00d31230(plVar11,&local_608);
    pVar9 = (pthread_key_t)plVar11;
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 1.4013e-45;
    local_98 = &DAT_024c5048;
    local_80 = 0;
    if (lVar5 != 0) {
      uVar14 = FUN_00d50b00();
    }
    local_d0 = (longlong *)CONCAT44(local_d0._4_4_,uVar3);
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(uVar14,&local_98);
    lVar5 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    local_98 = &DAT_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_5f0 != '\0') && (local_5f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_600 != '\0') && (local_608 != 0)) {
      FUN_00d50b20();
    }
    if ((local_610 != '\0') && (local_618 != 0)) {
      FUN_00d50b20();
    }
    plVar11 = (longlong *)*plVar10;
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      plVar11 = (longlong *)*plVar10;
      lVar8 = FUN_00e8b990();
      if (lVar8 != 0) {
        plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
    }
    local_5e8 = lVar5;
    local_5e0 = '\0';
    local_5d8 = 0;
    local_5d0 = '\0';
    plVar12 = &local_5e8;
    (**(code **)(*plVar11 + 0x3c0))(plVar12,(ulonglong)local_d0 & 0xffffffff,&local_5d8);
    plVar11 = local_98;
    pVar9 = (pthread_key_t)plVar12;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    if ((local_5d0 != '\0') && (local_5d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_5e0 != '\0') && (local_5e8 != 0)) {
      FUN_00d50b20();
    }
    local_5c8 = plVar11;
    local_5c0 = '\0';
    FUN_01d6f990();
    if ((local_5c0 != '\0') && (local_5c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x918))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xa0) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x918))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xa8) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x918))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xb0) + 0x998))();
  if ((local_48 == (longlong *)0x0) ||
     (puVar13 = (undefined8 *)*plVar10, puVar13 == (undefined8 *)0x0)) {
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar3 = FUN_0173e440();
    local_308 = DAT_027e4590;
    local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar3);
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar5 = DAT_027e4618;
    local_300 = '\x01';
    if (DAT_027e4618 != 0) {
      FUN_00d50b00();
    }
    local_2f8 = lVar5;
    local_2f0 = '\x01';
    local_2e8 = 0;
    local_2e0 = '\0';
    FUN_00d31230(&local_2e8,&local_2f8);
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 2.8026e-45;
    local_8c = local_b8._0_4_;
    local_98 = (longlong *)&DAT_024ff418;
    local_80 = 0;
    fVar15 = local_b8._0_4_;
    if (lVar5 != 0) {
      fVar15 = (float)FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(fVar15,&local_98);
    local_f8 = local_40;
    local_f0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_f0 = '\x01';
    FUN_01d6f990();
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (longlong *)&DAT_024ff418;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_2e0 != '\0') && (local_2e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2f0 != '\0') && (local_2f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_300 != '\0') && (local_308 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x998))();
    local_2d8 = DAT_027e4590;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar5 = DAT_027e45f8;
    local_2d0 = '\x01';
    if (DAT_027e45f8 != 0) {
      FUN_00d50b00();
    }
    local_2c8 = lVar5;
    local_2c0 = '\x01';
    local_2b8 = 0;
    local_2b0 = '\0';
    FUN_00d31230(&local_2b8,&local_2c8);
    local_e8 = local_98;
    local_e0 = 0;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    local_e0 = '\x01';
    FUN_01d6f990();
    if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
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
    (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x998))();
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x998))();
  }
  else {
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      puVar13 = (undefined8 *)*plVar10;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        puVar13 = (undefined8 *)puVar13[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b6f0();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01736c50();
    plVar11 = (longlong *)*puVar13;
    uVar3 = (*(code *)plVar11[0x6e])();
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)plVar11);
    plVar12 = local_48;
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar12 = local_48, lVar5 != 0)) {
      plVar11 = local_48;
      plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    uVar14 = (**(code **)(*plVar12 + 0x370))();
    pVar9 = (pthread_key_t)plVar11;
    if (*(char *)(unaff_RDI + 0xf2) == '\0') {
      pvVar4 = _pthread_getspecific(pVar9);
      plVar12 = local_48;
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), plVar12 = local_48, lVar5 != 0)) {
        plVar11 = local_48;
        plVar12 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
      pVar9 = (pthread_key_t)plVar11;
      uVar16 = (**(code **)(*plVar12 + 0x3a0))();
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar16);
    }
    else {
      pvVar4 = _pthread_getspecific(pVar9);
      if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
        pVar9 = (pthread_key_t)local_48;
      }
      uVar14 = FUN_0173fbe0();
      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar14);
      uVar14 = uVar3;
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar9 = (pthread_key_t)local_48;
    }
    local_2a8 = FUN_0173e440();
    fVar15 = (float)FUN_01773e50();
    local_2a0 = (float)_exp2f((fVar15 + DAT_0241b650) * DAT_023941f4);
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_29c = (float)FUN_0173fbe0();
    FUN_01b3b230(local_29c,uVar14);
    local_d8 = local_98;
    if ((local_90._0_1_ == '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar16 = FUN_0173fbe0();
    local_d0 = (longlong *)CONCAT44(local_d0._4_4_,uVar16);
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173ecc0(local_b8._0_4_ - local_d0._0_4_);
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_2a4 = FUN_0173e440();
    plVar11 = (longlong *)*plVar10;
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      plVar11 = (longlong *)*plVar10;
      lVar5 = FUN_00e8b990();
      if (lVar5 != 0) {
        plVar11 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
      }
    }
    lVar5 = DAT_027e45c8;
    if (DAT_027e45c8 != 0) {
      FUN_00d50b00();
    }
    local_5b8 = lVar5;
    local_5b0 = '\x01';
    local_5a8 = 0;
    local_5a0 = '\0';
    plVar10 = &local_5b8;
    (**(code **)(*plVar11 + 0x3c0))(plVar10,uVar3,&local_5a8);
    plVar11 = local_98;
    pVar9 = (pthread_key_t)plVar10;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    if ((local_5a0 != '\0') && (local_5a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_5b0 != '\0') && (local_5b8 != 0)) {
      FUN_00d50b20();
    }
    local_d0 = plVar11;
    pvVar4 = _pthread_getspecific(pVar9);
    lVar5 = DAT_027e45c8;
    plVar10 = local_48;
    if ((pvVar4 != (void *)0x0) &&
       (lVar8 = FUN_00e8b990(), lVar5 = DAT_027e45c8, plVar10 = local_48, lVar8 != 0)) {
      plVar10 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
    }
    DAT_027e45c8 = lVar5;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_590 = '\x01';
    local_588 = 0;
    local_580 = '\0';
    local_598 = lVar5;
    (**(code **)(*plVar10 + 0x3c0))(&local_598,uVar14,&local_588);
    plVar10 = local_98;
    if (local_90._0_1_ == '\0') {
      if (local_98 != (longlong *)0x0) {
        FUN_00d50b00();
        if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_90 = (float)((uint)local_90 & 0xffffff00);
    }
    if ((local_580 != '\0') && (local_588 != 0)) {
      FUN_00d50b20();
    }
    if ((local_590 != '\0') && (local_598 != 0)) {
      FUN_00d50b20();
    }
    local_a0[0] = (float)_exp2f(local_b8._0_4_ * DAT_023941f4);
    local_578 = DAT_027e4590;
    local_a0[0] = local_a0[0] * DAT_023941f8;
    local_b8 = plVar10;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar5 = DAT_027e45d0;
    local_570 = '\x01';
    if (DAT_027e45d0 != 0) {
      FUN_00d50b00();
    }
    local_568 = lVar5;
    local_560 = '\x01';
    local_558 = 0;
    local_550 = '\0';
    FUN_00d31230(&local_558,&local_568);
    local_b0 = plVar10;
    local_c8 = CONCAT71(uStack_57,local_58);
    FUN_0049c630(&local_c8,local_a0,4);
    local_98 = (longlong *)&DAT_02647118;
    local_60 = local_2a4;
    FUN_00d8cb40(local_2a4,&local_98);
    local_1c8 = local_40;
    local_1c0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1c0 = '\x01';
    FUN_01d6f990();
    if ((local_1c0 != '\0') && (local_1c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (longlong *)&DAT_024f9300;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &DAT_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_550 != '\0') && (local_558 != 0)) {
      FUN_00d50b20();
    }
    if ((local_560 != '\0') && (local_568 != 0)) {
      FUN_00d50b20();
    }
    if ((local_570 != '\0') && (local_578 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = DAT_027e4590;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = DAT_027e45d8;
    local_548 = lVar5;
    local_540 = '\x01';
    if (DAT_027e45d8 != 0) {
      FUN_00d50b00();
    }
    local_538 = lVar8;
    local_530 = '\x01';
    local_528 = 0;
    local_520 = '\0';
    FUN_00d31230(&local_528,&local_538);
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 2.8026e-45;
    local_8c = (float)local_2a8;
    local_98 = (longlong *)&DAT_024ff418;
    local_80 = 0;
    uVar3 = local_2a8;
    if (lVar5 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(uVar3,&local_98);
    local_1b8 = local_40;
    local_1b0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1b0 = '\x01';
    FUN_01d6f990();
    if ((local_1b0 != '\0') && (local_1b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (longlong *)&DAT_024ff418;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
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
    lVar5 = DAT_027e4590;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = DAT_027e45e0;
    local_518 = lVar5;
    local_510 = '\x01';
    if (DAT_027e45e0 != 0) {
      FUN_00d50b00();
    }
    local_508 = lVar8;
    local_500 = '\x01';
    local_4f8 = 0;
    local_4f0 = '\0';
    uVar3 = FUN_00d31230(&local_4f8,&local_508);
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 1.4013e-45;
    local_98 = &DAT_024c5048;
    local_80 = 0;
    if (lVar5 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(uVar3,&local_98);
    local_1a8 = local_40;
    local_1a0 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_1a0 = '\x01';
    FUN_01d6f990();
    if ((local_1a0 != '\0') && (local_1a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &DAT_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_4f0 != '\0') && (local_4f8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_500 != '\0') && (local_508 != 0)) {
      FUN_00d50b20();
    }
    if ((local_510 != '\0') && (local_518 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = DAT_027e4590;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar8 = DAT_027e45e8;
    local_4e8 = lVar5;
    local_4e0 = '\x01';
    if (DAT_027e45e8 != 0) {
      FUN_00d50b00();
    }
    local_4d8 = lVar8;
    local_4d0 = '\x01';
    local_4c8 = 0;
    local_4c0 = '\0';
    FUN_00d31230(&local_4c8,&local_4d8);
    fVar15 = local_2a0 * DAT_023941f8;
    lVar5 = CONCAT71(uStack_57,local_58);
    local_90 = 2.8026e-45;
    local_98 = (longlong *)&DAT_024ff418;
    local_80 = 0;
    local_8c = fVar15;
    if (lVar5 != 0) {
      fVar15 = (float)FUN_00d50b00();
    }
    local_80 = '\x01';
    local_88 = lVar5;
    FUN_00d8cb40(fVar15,&local_98);
    local_198 = local_40;
    local_190 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_190 = '\x01';
    FUN_01d6f990();
    if ((local_190 != '\0') && (local_198 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (longlong *)&DAT_024ff418;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_4c0 != '\0') && (local_4c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4d0 != '\0') && (local_4d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4e0 != '\0') && (local_4e8 != 0)) {
      FUN_00d50b20();
    }
    local_a0[0] = (float)_exp2f(local_29c * DAT_023941f4);
    local_4b8 = DAT_027e4590;
    local_a0[0] = local_a0[0] * DAT_023941f8;
    if (DAT_027e4590 != 0) {
      FUN_00d50b00();
    }
    lVar5 = DAT_027e45f0;
    local_4b0 = '\x01';
    if (DAT_027e45f0 != 0) {
      FUN_00d50b00();
    }
    local_4a8 = lVar5;
    local_4a0 = '\x01';
    local_498 = 0;
    local_490 = '\0';
    FUN_00d31230(&local_498,&local_4a8);
    local_b0 = local_d0;
    local_c8 = CONCAT71(uStack_57,local_58);
    plVar10 = &local_c8;
    uVar3 = FUN_0049c630(plVar10,local_a0,3);
    pVar9 = (pthread_key_t)plVar10;
    FUN_00d8cb40(uVar3,&local_98);
    local_188 = local_40;
    local_180 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_180 = '\x01';
    FUN_01d6f990();
    if ((local_180 != '\0') && (local_188 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    local_98 = (longlong *)&DAT_024f9300;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_98 = &DAT_024c5048;
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    plVar10 = local_d0;
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if ((local_490 != '\0') && (local_498 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4a0 != '\0') && (local_4a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_4b0 != '\0') && (local_4b8 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x918))();
    (**(code **)(**(longlong **)(unaff_RDI + 0xb8) + 0x998))();
    pvVar4 = _pthread_getspecific(pVar9);
    if ((pvVar4 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      pVar9 = (pthread_key_t)local_48;
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_01770770();
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0173b790();
    pvVar4 = _pthread_getspecific(pVar9);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_01770770();
    if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar11 = local_b8;
    lVar5 = DAT_027e4590;
    if (cVar1 == '\0' && cVar2 == '\0') {
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      plVar11 = local_b8;
      lVar8 = DAT_027e45f8;
      local_488 = lVar5;
      local_480 = '\x01';
      if (DAT_027e45f8 != 0) {
        FUN_00d50b00();
      }
      local_478 = lVar8;
      local_470 = '\x01';
      local_468 = 0;
      local_460 = '\0';
      FUN_00d31230(&local_468,&local_478);
      local_178 = local_98;
      local_170 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      plVar12 = local_d8;
      local_170 = '\x01';
      FUN_01d6f990();
      if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_460 != '\0') && (local_468 != 0)) {
        FUN_00d50b20();
      }
      if ((local_470 != '\0') && (local_478 != 0)) {
        FUN_00d50b20();
      }
      if ((local_480 != '\0') && (local_488 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x998))();
    }
    else if (cVar1 == '\x01' && cVar2 == '\0') {
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      plVar11 = local_b8;
      lVar8 = DAT_027e4600;
      local_458 = lVar5;
      local_450 = '\x01';
      if (DAT_027e4600 != 0) {
        FUN_00d50b00();
      }
      local_448 = lVar8;
      local_440 = '\x01';
      local_438 = 0;
      local_430 = '\0';
      FUN_00d31230(&local_438,&local_448);
      local_168 = local_98;
      local_160 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_160 = '\x01';
      FUN_01d6f990();
      if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_430 != '\0') && (local_438 != 0)) {
        FUN_00d50b20();
      }
      if ((local_440 != '\0') && (local_448 != 0)) {
        FUN_00d50b20();
      }
      if ((local_450 != '\0') && (local_458 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027e45f8;
      local_428 = lVar5;
      local_420 = '\x01';
      if (DAT_027e45f8 != 0) {
        FUN_00d50b00();
      }
      local_418 = lVar8;
      local_410 = '\x01';
      local_408 = 0;
      local_400 = '\0';
      FUN_00d31230(&local_408,&local_418);
      local_158 = local_98;
      local_150 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      plVar12 = local_d8;
      local_150 = '\x01';
      FUN_01d6f990();
      if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_400 != '\0') && (local_408 != 0)) {
        FUN_00d50b20();
      }
      if ((local_410 != '\0') && (local_418 != 0)) {
        FUN_00d50b20();
      }
      if ((local_420 != '\0') && (local_428 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x998))();
    }
    else if (cVar1 == '\0' && cVar2 == '\x01') {
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027e4608;
      local_3f8 = lVar5;
      local_3f0 = '\x01';
      if (DAT_027e4608 != 0) {
        FUN_00d50b00();
      }
      local_3e8 = lVar8;
      local_3e0 = '\x01';
      local_3d8 = 0;
      local_3d0 = '\0';
      FUN_00d31230(&local_3d8,&local_3e8);
      local_148 = local_98;
      local_140 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_140 = '\x01';
      FUN_01d6f990();
      if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_3d0 != '\0') && (local_3d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3e0 != '\0') && (local_3e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3f0 != '\0') && (local_3f8 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027e4610;
      local_3c8 = lVar5;
      local_3c0 = '\x01';
      if (DAT_027e4610 != 0) {
        FUN_00d50b00();
      }
      local_3b8 = lVar8;
      local_3b0 = '\x01';
      local_3a8 = 0;
      local_3a0 = '\0';
      FUN_00d31230(&local_3a8,&local_3b8);
      local_138 = local_98;
      local_130 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      plVar12 = local_d8;
      local_130 = '\x01';
      FUN_01d6f990();
      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_3a0 != '\0') && (local_3a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3b0 != '\0') && (local_3b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_3c0 != '\0') && (local_3c8 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x998))();
    }
    else {
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027e4600;
      local_398 = lVar5;
      local_390 = '\x01';
      if (DAT_027e4600 != 0) {
        FUN_00d50b00();
      }
      local_388 = lVar8;
      local_380 = '\x01';
      local_378 = 0;
      local_370 = '\0';
      FUN_00d31230(&local_378,&local_388);
      local_128 = local_98;
      local_120 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_120 = '\x01';
      FUN_01d6f990();
      if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_370 != '\0') && (local_378 != 0)) {
        FUN_00d50b20();
      }
      if ((local_380 != '\0') && (local_388 != 0)) {
        FUN_00d50b20();
      }
      if ((local_390 != '\0') && (local_398 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027e4610;
      local_368 = lVar5;
      local_360 = '\x01';
      if (DAT_027e4610 != 0) {
        FUN_00d50b00();
      }
      local_358 = lVar8;
      local_350 = '\x01';
      local_348 = 0;
      local_340 = '\0';
      FUN_00d31230(&local_348,&local_358);
      local_118 = local_98;
      local_110 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      local_110 = '\x01';
      FUN_01d6f990();
      if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_340 != '\0') && (local_348 != 0)) {
        FUN_00d50b20();
      }
      if ((local_350 != '\0') && (local_358 != 0)) {
        FUN_00d50b20();
      }
      if ((local_360 != '\0') && (local_368 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = DAT_027e4590;
      if (DAT_027e4590 != 0) {
        FUN_00d50b00();
      }
      lVar8 = DAT_027e45f8;
      local_338 = lVar5;
      local_330 = '\x01';
      if (DAT_027e45f8 != 0) {
        FUN_00d50b00();
      }
      local_328 = lVar8;
      local_320 = '\x01';
      local_318 = 0;
      local_310 = '\0';
      FUN_00d31230(&local_318,&local_328);
      local_108 = local_98;
      local_100 = 0;
      if (local_90._0_1_ == '\0') {
        if (local_98 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_90 = (float)((uint)local_90 & 0xffffff00);
      }
      plVar12 = local_d8;
      local_100 = '\x01';
      FUN_01d6f990();
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_90._0_1_ != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_310 != '\0') && (local_318 != 0)) {
        FUN_00d50b20();
      }
      if ((local_320 != '\0') && (local_328 != 0)) {
        FUN_00d50b20();
      }
      if ((local_330 != '\0') && (local_338 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x918))();
      (**(code **)(**(longlong **)(unaff_RDI + 0xc0) + 0x998))();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x998))();
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar10 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (plVar12 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01b302d0 — 3729 bytes
// str: ""handleCancel""
// str: ""handleSheetClose""
// str: ""handleOK""
// str: ""MUScaleOpenPanel""
// str: ""handleStartBrowserPlayback""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b302d0(void)

{
  int iVar1;
  
  if (DAT_028b4080 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4040 = "handleOK";
      _DAT_028b4048 = &DAT_02738800;
      _DAT_028b4050 = 0;
      _DAT_028b4058 = &DAT_027e4620;
      _DAT_028b4060 = FUN_01b3d980;
      _DAT_028b4068 = 0x5c1;
      _DAT_028b4070 = 0;
      uRam00000000028b4078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b40c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4088 = "handleCancel";
      _DAT_028b4090 = &DAT_02738800;
      _DAT_028b4098 = 0;
      _DAT_028b40a0 = &DAT_027e4620;
      _DAT_028b40a8 = FUN_01b3d980;
      _DAT_028b40b0 = 0x5c9;
      _DAT_028b40b8 = 0;
      uRam00000000028b40c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4110 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b40d0 = "handleSheetClose";
      _DAT_028b40d8 = &DAT_02738800;
      _DAT_028b40e0 = 0;
      _DAT_028b40e8 = &DAT_027e4620;
      _DAT_028b40f0 = FUN_01b3d980;
      _DAT_028b40f8 = 0x5d9;
      _DAT_028b4100 = 0;
      uRam00000000028b4108 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4158 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4118 = "handleSelectCell";
      _DAT_028b4120 = &DAT_02738800;
      _DAT_028b4128 = 0;
      _DAT_028b4130 = &DAT_027e4620;
      _DAT_028b4138 = FUN_01b3d980;
      _DAT_028b4140 = 0x5e1;
      _DAT_028b4148 = 0;
      uRam00000000028b4150 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b41a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4160 = "handleStartBrowserPlayback";
      _DAT_028b4168 = &DAT_02738800;
      _DAT_028b4170 = 0;
      _DAT_028b4178 = &DAT_027e4620;
      _DAT_028b4180 = FUN_01b3d980;
      _DAT_028b4188 = 0x5e9;
      _DAT_028b4190 = 0;
      uRam00000000028b4198 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b41e8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b41a8 = "handleModeMatrixChanged";
      _DAT_028b41b0 = &DAT_02738800;
      _DAT_028b41b8 = 0;
      _DAT_028b41c0 = &DAT_027e4620;
      _DAT_028b41c8 = FUN_01b3d980;
      _DAT_028b41d0 = 0x5f1;
      _DAT_028b41d8 = 0;
      uRam00000000028b41e0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4230 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b41f0 = "handleTuningMatrixChanged";
      _DAT_028b41f8 = &DAT_02738800;
      _DAT_028b4200 = 0;
      _DAT_028b4208 = &DAT_027e4620;
      _DAT_028b4210 = FUN_01b3d980;
      _DAT_028b4218 = 0x5f9;
      _DAT_028b4220 = 0;
      uRam00000000028b4228 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4278 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4238 = "handleFundamentalPopUpChanged";
      _DAT_028b4240 = &DAT_02738800;
      _DAT_028b4248 = 0;
      _DAT_028b4250 = &DAT_027e4620;
      _DAT_028b4258 = FUN_01b3d980;
      _DAT_028b4260 = 0x601;
      _DAT_028b4268 = 0;
      uRam00000000028b4270 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b42c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4280 = "handlePitchPopUpChanged";
      _DAT_028b4288 = &DAT_02738800;
      _DAT_028b4290 = 0;
      _DAT_028b4298 = &DAT_027e4620;
      _DAT_028b42a0 = FUN_01b3d980;
      _DAT_028b42a8 = 0x609;
      _DAT_028b42b0 = 0;
      uRam00000000028b42b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4308 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b42c8 = "handleStretchingPopUpChanged";
      _DAT_028b42d0 = &DAT_02738800;
      _DAT_028b42d8 = 0;
      _DAT_028b42e0 = &DAT_027e4620;
      _DAT_028b42e8 = FUN_01b3d980;
      _DAT_028b42f0 = 0x611;
      _DAT_028b42f8 = 0;
      uRam00000000028b4300 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b4350 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027388c8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_02738818 = FUN_008467f0();
          _DAT_02738800 = "MUScaleOpenPanel";
          _DAT_02738808 = 0x128;
          _DAT_02738810 = FUN_00847190;
          _DAT_02738820 = 0;
          uRam0000000002738828 = 0;
          _DAT_02738830 = 0;
          uRam0000000002738838 = 0;
          _DAT_02738840 = 0;
          uRam0000000002738848 = 0;
          _DAT_02738850 = 0;
          uRam0000000002738858 = 0;
          _DAT_02738860 = 0;
          uRam0000000002738868 = 0;
          _DAT_02738870 = 0;
          uRam0000000002738878 = 0;
          _DAT_02738880 = 0;
          uRam0000000002738888 = 0;
          _DAT_02738890 = 0;
          uRam0000000002738898 = 0;
          _DAT_027388a0 = 0;
          uRam00000000027388a8 = 0;
          _DAT_027388b0 = 0;
          uRam00000000027388b8 = 0;
          _DAT_027388c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b4310 = "handleSelectFolderForExternalScales";
      _DAT_028b4318 = &DAT_02738800;
      _DAT_028b4320 = 0;
      _DAT_028b4328 = &DAT_027e4620;
      _DAT_028b4330 = FUN_01b3d980;
      _DAT_028b4338 = 0x619;
      _DAT_028b4340 = 0;
      uRam00000000028b4348 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01b2ed90 — 3131 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b2f7f7) */
/* WARNING: Removing unreachable block (ram,0x01b2f803) */
/* WARNING: Removing unreachable block (ram,0x01b2f73c) */
/* WARNING: Removing unreachable block (ram,0x01b2f748) */
/* WARNING: Removing unreachable block (ram,0x01b2f9bc) */
/* WARNING: Removing unreachable block (ram,0x01b2f9c8) */
/* WARNING: Removing unreachable block (ram,0x01b2ee71) */
/* WARNING: Removing unreachable block (ram,0x01b2ee7d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b2ed90(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar10;
  ulonglong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float local_158;
  float local_138;
  float fStack_134;
  float local_c8;
  longlong local_b0;
  char local_a8;
  float local_8c;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  float local_44;
  longlong *local_40;
  char local_38;
  
  fVar15 = (float)((ulonglong)param_2 >> 0x20);
  cVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar4 != '\0') {
    FUN_01e3f820();
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
      FUN_01d3abf0();
      uVar18 = FUN_01e466c0();
      uVar19 = FUN_01b2e910();
      auVar21._8_4_ = (int)extraout_XMM0_Qb;
      auVar21._0_8_ = uVar19;
      auVar21._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      cVar4 = FUN_00d05410();
      if (cVar4 != '\0') {
        *(byte *)((longlong)unaff_RDI + 0x1d9) = *(byte *)((longlong)unaff_RDI + 0x1d9) ^ 1;
                    /* WARNING: Could not recover jumptable at 0x01b2ee41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*unaff_RDI + 0x620))();
        return;
      }
      iVar5 = FUN_01d3b620();
      fStack_134 = (float)((ulonglong)uVar18 >> 0x20);
      if (((iVar5 == 2) && ((char)unaff_RDI[0x3b] != '\0')) &&
         (lVar7 = unaff_RDI[0x39], 0xf < *(int *)(lVar7 + 0x18))) {
        local_44 = DAT_02411fd8;
        uVar11 = 0xffffffff;
        lVar9 = 8;
        uVar10 = 0;
        do {
          uVar1 = *(ulonglong *)(*(longlong *)(lVar7 + 0x10) + -8 + lVar9);
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar1;
          cVar4 = FUN_00d05410(lVar7,uVar1,(int)*(undefined8 *)(*(longlong *)(lVar7 + 0x10) + lVar9)
                              );
          lVar7 = unaff_RDI[0x39];
          if (cVar4 != '\0') {
            fVar13 = (float)((uint)((*(float *)(*(longlong *)(lVar7 + 0x10) + 4 + lVar9) *
                                     DAT_0239011c +
                                    *(float *)(*(longlong *)(lVar7 + 0x10) + -4 + lVar9)) -
                                   fStack_134) & _DAT_02390140);
            auVar21 = ZEXT416((uint)local_44);
            if (fVar13 < local_44) {
              uVar11 = uVar10 & 0xffffffff;
              local_44 = fVar13;
            }
          }
          uVar10 = uVar10 + 1;
          iVar5 = *(int *)(lVar7 + 0x18);
          iVar8 = iVar5 + 0xf;
          if (-1 < iVar5) {
            iVar8 = iVar5;
          }
          lVar9 = lVar9 + 0x10;
        } while ((longlong)uVar10 < (longlong)(iVar8 >> 4));
        if ((int)uVar11 != -1) {
          lVar7 = *unaff_RDI;
          _exp2f(*(float *)(*(longlong *)(unaff_RDI[0x3a] + 0x10) + (longlong)(int)uVar11 * 4) *
                 DAT_023941f4);
          (**(code **)(lVar7 + 0x928))();
          (**(code **)(*unaff_RDI + 0xa18))();
          if (local_40 == (longlong *)0x0) {
            bVar12 = false;
          }
          else {
            (**(code **)(*unaff_RDI + 0xa28))();
            bVar12 = local_b0 != 0;
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (!bVar12) {
            return;
          }
          puVar6 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar6 = &DAT_026717b8;
          puVar6[2] = 0;
          puVar6[3] = 0;
          puVar6[4] = 0;
          puVar6[5] = 0;
          *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
          *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
          (*DAT_026717d0)();
          (**(code **)(*unaff_RDI + 0xa18))();
          if (local_38 == '\0') {
            if (local_40 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          FUN_01caeb20();
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar18 = (**(code **)(*unaff_RDI + 0xa28))();
          (**(code **)(*local_40 + 0x3b8))(uVar18,1);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          return;
        }
      }
      (**(code **)(*unaff_RDI + 0x930))();
      fVar14 = (float)_log10f();
      FUN_01e436c0();
      FUN_01e436c0();
      fVar13 = *(float *)(unaff_RDI + 0x3d);
      fVar15 = fVar15 * DAT_0239011c;
      if ((fStack_134 <= fVar15) &&
         (plVar2 = (longlong *)unaff_RDI[0x40], plVar2 != (longlong *)0x0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x18))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      pcVar3 = DAT_026717d0;
      local_158 = auVar21._0_4_;
      fVar14 = fVar14 * local_158 * DAT_02390120;
      local_138 = (float)uVar18;
      local_158 = local_138;
      local_c8 = local_138;
      local_8c = fVar14;
LAB_01b2f140:
      (**(code **)(*unaff_RDI + 0x658))();
      plVar2 = (longlong *)*unaff_RSI;
      if (plVar2 == local_40) {
        if (((char)unaff_RSI[1] == '\0') && (local_40 != (longlong *)0x0)) {
          if (local_38 == '\0') {
            FUN_00d50b00();
            goto LAB_01b2f1ed;
          }
          goto LAB_01b2f1a3;
        }
LAB_01b2f1ad:
        if (*unaff_RSI == 0) goto LAB_01b2f829;
LAB_01b2f200:
        iVar5 = FUN_01d3a5a0();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (iVar5 == 6) goto LAB_01b2f83d;
        iVar5 = FUN_01d3a5a0();
        if (iVar5 == 5) {
          FUN_01d3abf0();
          uVar18 = FUN_01e466c0();
          fVar17 = (float)uVar18;
          uStack_54 = (uint)((ulonglong)uVar18 >> 0x20);
          uStack_50 = (uint)extraout_XMM0_Qb_00;
          uStack_4c = (uint)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
          auVar26._0_4_ = (uint)(fVar17 - local_c8) & _DAT_023945e0;
          auVar26._4_4_ = uStack_54 & _UNK_023945e4;
          auVar26._8_4_ = uStack_50 & _UNK_023945e8;
          auVar26._12_4_ = uStack_4c & _UNK_023945ec;
          auVar27._4_12_ = SUB1612(auVar26 | _DAT_023945f0,4);
          auVar27._0_4_ = SUB164(auVar26 | _DAT_023945f0,0) + (fVar17 - local_c8);
          auVar20._0_12_ = ZEXT812(0);
          auVar20._12_4_ = 0;
          auVar21 = roundss(auVar20,auVar27,0xb);
          local_c8 = fVar17;
          if ((auVar21._0_4_ != DAT_0239424c) || (NAN(auVar21._0_4_) || NAN(DAT_0239424c))) {
            local_58 = fVar17 - local_138;
            if (fStack_134 <= fVar15) {
              if (*(int *)((longlong)unaff_RDI + 0x1dc) == 1) {
                FUN_01e436c0();
                FUN_01e436c0();
                auVar22._4_12_ = local_58._4_12_;
                auVar22._0_4_ = local_58 / (auVar27._0_4_ * DAT_02390120);
                fVar25 = (float)___exp10f(auVar22._0_8_);
                fVar17 = *(float *)(unaff_RDI + 0x3e);
                if (*(float *)(unaff_RDI + 0x3e) <= fVar25) {
                  fVar17 = fVar25;
                }
                fVar25 = *(float *)((longlong)unaff_RDI + 500);
                if (fVar17 <= *(float *)((longlong)unaff_RDI + 500)) {
                  fVar25 = fVar17;
                }
                auVar21 = ZEXT416((uint)fVar25);
                fVar17 = (float)_log10f();
                FUN_01e436c0();
                FUN_01e436c0();
                auVar28._4_12_ = auVar21._4_12_;
                auVar28._0_4_ = auVar21._0_4_ * DAT_02390120 * fVar17 + fVar13;
                fVar17 = *(float *)(unaff_RDI + 0x3d);
                if ((fVar17 != auVar28._0_4_) || (NAN(fVar17) || NAN(auVar28._0_4_))) {
                  auVar21 = auVar28;
                  FUN_01e436c0();
                  FUN_01e436c0();
                  uVar16 = ___exp10f((fVar17 - auVar28._0_4_) / (auVar21._0_4_ * DAT_02390120));
                  *(undefined4 *)((longlong)unaff_RDI + 0x1ec) = uVar16;
                  *(float *)(unaff_RDI + 0x3d) = auVar28._0_4_;
                  (**(code **)(*unaff_RDI + 0x620))();
                  (**(code **)(*unaff_RDI + 0xa18))();
                  if (local_40 == (longlong *)0x0) {
                    bVar12 = false;
                  }
                  else {
                    (**(code **)(*unaff_RDI + 0xa28))();
                    bVar12 = local_b0 != 0;
                    if ((local_a8 != '\0') && (local_b0 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  if (bVar12) {
                    puVar6 = (undefined8 *)FUN_00e8fc40();
                    FUN_00d4ff40();
                    *puVar6 = &DAT_026717b8;
                    puVar6[2] = 0;
                    puVar6[3] = 0;
                    puVar6[4] = 0;
                    puVar6[5] = 0;
                    *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
                    *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
                    (*pcVar3)();
                    (**(code **)(*unaff_RDI + 0xa18))();
                    if (local_38 == '\0') {
                      if (local_40 != (longlong *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_38 = '\0';
                    }
                    FUN_01caeb20();
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b20();
                    }
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    uVar18 = (**(code **)(*unaff_RDI + 0xa28))();
                    (**(code **)(*local_40 + 0x3b8))(uVar18,1);
                    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_00d50b20();
                  }
                }
                goto LAB_01b2f140;
              }
              if (*(int *)((longlong)unaff_RDI + 0x1dc) == 0) {
                uVar10 = FUN_01d3b590();
                if ((uVar10 & 8) == 0) {
                  auVar23._0_4_ = (uint)local_58 & _DAT_023945e0;
                  auVar23._4_4_ = uStack_54 & _UNK_023945e4;
                  auVar23._8_4_ = uStack_50 & _UNK_023945e8;
                  auVar23._12_4_ = uStack_4c & _UNK_023945ec;
                  auVar24._4_12_ = SUB1612(auVar23 | _DAT_023945f0,4);
                  auVar24._0_4_ = SUB164(auVar23 | _DAT_023945f0,0) + local_58;
                  auVar21 = roundss(auVar24,auVar24,0xb);
                  fVar25 = fVar14 - auVar21._0_4_;
                  local_8c = fVar25;
                  local_158 = fVar17;
                  fVar17 = fVar25;
                }
                else {
                  fVar25 = fVar17;
                  fVar17 = (fVar17 - local_158) * DAT_0241b638 + local_8c;
                }
                auVar21 = ZEXT416((uint)fVar25);
                FUN_01e436c0();
                FUN_01e436c0();
                ___exp10f(fVar17 / (auVar21._0_4_ * DAT_02390120));
                (**(code **)(*unaff_RDI + 0x928))();
                (**(code **)(*unaff_RDI + 0xa18))();
                if (local_40 == (longlong *)0x0) {
                  bVar12 = false;
                }
                else {
                  (**(code **)(*unaff_RDI + 0xa28))();
                  bVar12 = local_b0 != 0;
                  if ((local_a8 != '\0') && (local_b0 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (bVar12) {
                  puVar6 = (undefined8 *)FUN_00e8fc40();
                  FUN_00d4ff40();
                  *puVar6 = &DAT_026717b8;
                  puVar6[2] = 0;
                  puVar6[3] = 0;
                  puVar6[4] = 0;
                  puVar6[5] = 0;
                  *(undefined8 *)((longlong)puVar6 + 0x2c) = 0;
                  *(undefined8 *)((longlong)puVar6 + 0x34) = 0;
                  (*pcVar3)();
                  (**(code **)(*unaff_RDI + 0xa18))();
                  if (local_38 == '\0') {
                    if (local_40 != (longlong *)0x0) {
                      FUN_00d50b00();
                    }
                  }
                  else {
                    local_38 = '\0';
                  }
                  FUN_01caeb20();
                  if (local_40 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  uVar18 = (**(code **)(*unaff_RDI + 0xa28))();
                  (**(code **)(*local_40 + 0x3b8))(uVar18,1);
                  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                }
                goto LAB_01b2f140;
              }
            }
            if (fVar15 < fStack_134) {
              local_58 = local_58 + fVar13;
              fVar17 = *(float *)(unaff_RDI + 0x3d);
              if ((fVar17 != local_58) || (NAN(fVar17) || NAN(local_58))) {
                FUN_01e436c0();
                FUN_01e436c0();
                uVar16 = ___exp10f((fVar17 - local_58) / (auVar27._0_4_ * DAT_02390120));
                *(undefined4 *)((longlong)unaff_RDI + 0x1ec) = uVar16;
                *(float *)(unaff_RDI + 0x3d) = local_58;
                (**(code **)(*unaff_RDI + 0x620))();
              }
            }
          }
        }
        goto LAB_01b2f140;
      }
      lVar7 = unaff_RSI[1];
      if (local_38 != '\0') {
        *unaff_RSI = (longlong)local_40;
        if (((char)lVar7 != '\0') && (plVar2 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01b2f1a3:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        local_38 = '\0';
        goto LAB_01b2f1ad;
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)local_40;
      if (((char)lVar7 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b2f1ed:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      if (*unaff_RSI != 0) goto LAB_01b2f200;
LAB_01b2f829:
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_01b2f83d:
      if ((fStack_134 <= fVar15) &&
         (plVar2 = (longlong *)unaff_RDI[0x40], plVar2 != (longlong *)0x0)) {
        FUN_00d50b00();
        (**(code **)(*plVar2 + 0x20))();
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01d122b0();
    }
  }
  return;
}




// ============================================================
// @01b31380 — 1214 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01b313c1) */
/* WARNING: Removing unreachable block (ram,0x01b313cd) */
/* WARNING: Removing unreachable block (ram,0x01b31642) */
/* WARNING: Removing unreachable block (ram,0x01b3164f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b31380(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong unaff_RDI;
  undefined8 uVar3;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dd;
  undefined8 in_XMM1_Qb;
  undefined1 auVar4 [16];
  longlong local_d0;
  char local_c8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_30;
  char local_28;
  
  FUN_01e125e0();
  FUN_01cfc0e0();
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_01e11fd0();
  if (local_30 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027e4580;
  if (DAT_027e4580 != 0) {
    FUN_00d50b00();
  }
  FUN_01ceb8d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  FUN_01ceb930();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_01aa61d0();
  FUN_01ab2e00();
  FUN_01b3e230();
  FUN_00d6f370();
  local_a0 = DAT_027e4588;
  if (DAT_027e4588 != 0) {
    FUN_00d50b00();
  }
  local_98 = '\x01';
  local_90 = 0;
  local_88 = '\0';
  FUN_00d710b0(&local_90,&local_a0);
  if (local_28 == '\0') {
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (local_30 != (longlong *)0x0) {
    local_80 = local_30;
    local_78 = '\0';
    FUN_01b3e4c0();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x104) = 0xffffffff;
  *(undefined4 *)(unaff_RDI + 0x108) = 0xffffffff;
  *(undefined4 *)(unaff_RDI + 0x10c) = 0xffffffff;
  *(undefined4 *)(unaff_RDI + 0x110) = 0xffffffff;
  *(undefined4 *)(unaff_RDI + 0x114) = 0xffffffff;
  if ((*(char *)(unaff_RDI + 0x88) == '\0') && (*(char *)(unaff_RDI + 0x89) == '\0')) {
    FUN_01e40eb0();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_30 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0x478))();
      local_68 = '\0';
      local_70 = 0;
      (**(code **)(**(longlong **)(unaff_RDI + 0xd0) + 0xa20))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01e40eb0();
    uVar3 = (**(code **)(*local_30 + 0x4d8))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(**(longlong **)(unaff_RDI + 200) + 0x4d8))();
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x478))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01e40eb0();
    (**(code **)(*local_30 + 0x478))();
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    auVar1._8_8_ = in_XMM1_Qb;
    auVar1._0_8_ = param_2;
    auVar4._4_4_ = extraout_XMM0_Db;
    auVar4._0_4_ = (extraout_XMM0_Db + _DAT_0241d220) - (float)((ulonglong)uVar3 >> 0x20);
    auVar4._8_4_ = extraout_XMM0_Dd;
    auVar4._12_4_ = extraout_XMM0_Dd;
    auVar4 = insertps(auVar1,auVar4,0x10);
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d0))((int)uVar3,auVar4._0_8_);
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x558))();
    FUN_01e40eb0();
    local_58 = 0;
    local_60 = *(longlong *)(unaff_RDI + 0x78);
    if (local_60 != 0) {
      FUN_00d50b00();
    }
    local_58 = '\x01';
    (**(code **)(*local_30 + 0x450))();
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b31bc0();
  return;
}



