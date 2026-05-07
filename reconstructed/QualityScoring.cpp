// Reconstructed implementation of QualityScoring
// From MikeCore binary — reverse-engineered pseudocode

#include "QualityScoring.h"

// ============================================================
// @01948fc0 — 4884 bytes
// str: ""_decomposedAudioSignalsAreInvalid""
// str: ""_itemDetectionVisualQualityLimit""
// str: ""_attackItemDetectionVisualQualityLimit""
// str: ""_audioSourceAttackItems""
// str: ""_audioSourcePotentialAttackItems""
// ============================================================

void FUN_01948fc0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar8;
  longlong local_2e0;
  char local_2d8;
  longlong local_2d0;
  char local_2c8;
  longlong local_2c0;
  char local_2b8;
  longlong local_2b0;
  char local_2a8;
  longlong *local_2a0;
  char local_298;
  longlong local_290;
  char local_288;
  longlong local_280;
  char local_278;
  longlong local_260;
  char local_258;
  longlong local_240;
  char local_238;
  longlong *local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong *local_210;
  char local_208;
  longlong local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong local_1e0;
  char local_1d8;
  longlong *local_1d0;
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
  longlong *local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong *local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
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
  
  plVar1 = (longlong *)(unaff_RDI + 0x538);
  if (*(longlong *)(unaff_RDI + 0x538) != 0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_2e0 = DAT_027bf410;
    if (DAT_027bf410 != 0) {
      FUN_00d50b00();
    }
    local_2d8 = '\x01';
    local_258 = 0;
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_258 = '\x01';
    local_260 = lVar5;
    FUN_00d41040(&local_260,&local_2e0);
    if ((local_258 != '\0') && (local_260 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2d8 != '\0') && (local_2e0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_2d0 = DAT_027e0908;
    if (DAT_027e0908 != 0) {
      FUN_00d50b00();
    }
    local_2c8 = '\x01';
    local_238 = 0;
    lVar5 = *plVar1;
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_238 = '\x01';
    plVar8 = &local_240;
    local_240 = lVar5;
    FUN_00d41040(plVar8,&local_2d0);
    pVar6 = (pthread_key_t)plVar8;
    if ((local_238 != '\0') && (local_240 != 0)) {
      FUN_00d50b20();
    }
    if ((local_2c8 != '\0') && (local_2d0 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    plVar8 = (longlong *)(unaff_RDI + 0x140);
    local_228 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x140) + 0x10))();
    FUN_00d50b00();
    local_228 = '\x01';
    local_218 = 0;
    local_220 = *plVar1;
    local_230 = plVar8;
    if (local_220 != 0) {
      FUN_00d50b00();
    }
    local_218 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019492e3;
LAB_019492d2:
      local_c8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019492d2;
LAB_019492e3:
      lVar5 = 0;
    }
    local_c8 = '\x01';
    plVar7 = &local_d0;
    local_d0 = lVar5;
    FUN_00cbadd0(plVar7,&local_220);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != (longlong *)0x0)) {
      (**(code **)(*local_230 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_208 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_208 = '\x01';
    local_1f8 = 0;
    local_200 = *plVar1;
    local_210 = plVar8;
    if (local_200 != 0) {
      FUN_00d50b00();
    }
    local_1f8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949459;
LAB_01949448:
      local_b8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_01949448;
LAB_01949459:
      lVar5 = 0;
    }
    local_b8 = '\x01';
    plVar7 = &local_c0;
    local_c0 = lVar5;
    FUN_00cbadd0(plVar7,&local_200);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1f8 != '\0') && (local_200 != 0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != (longlong *)0x0)) {
      (**(code **)(*local_210 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1e8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1e8 = '\x01';
    local_1d8 = 0;
    local_1e0 = *plVar1;
    local_1f0 = plVar8;
    if (local_1e0 != 0) {
      FUN_00d50b00();
    }
    local_1d8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019495cf;
LAB_019495be:
      local_a8 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019495be;
LAB_019495cf:
      lVar5 = 0;
    }
    local_a8 = '\x01';
    plVar7 = &local_b0;
    local_b0 = lVar5;
    FUN_00cbadd0(plVar7,&local_1e0);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1d8 != '\0') && (local_1e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
      (**(code **)(*local_1f0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1c8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1c8 = '\x01';
    local_1b8 = 0;
    local_1c0 = *plVar1;
    local_1d0 = plVar8;
    if (local_1c0 != 0) {
      FUN_00d50b00();
    }
    local_1b8 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949745;
LAB_01949734:
      local_98 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_01949734;
LAB_01949745:
      lVar5 = 0;
    }
    local_98 = '\x01';
    plVar7 = &local_a0;
    local_a0 = lVar5;
    FUN_00cbadd0(plVar7,&local_1c0);
    pVar6 = (pthread_key_t)plVar7;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
      (**(code **)(*local_1d0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e8b990();
    local_1a8 = 0;
    (**(code **)(*plVar8 + 0x10))();
    FUN_00d50b00();
    local_1a8 = '\x01';
    local_198 = 0;
    local_1a0 = *plVar1;
    local_1b0 = plVar8;
    if (local_1a0 != 0) {
      FUN_00d50b00();
    }
    local_198 = '\x01';
    FUN_002771e0();
    lVar5 = FUN_00e85ef0();
    if (lVar5 == 0) {
      lVar5 = FUN_00e858c0();
      if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_019498c0;
LAB_019498b2:
      local_88 = 0;
      FUN_00d50b00();
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x30);
      if (lVar5 != 0) goto LAB_019498b2;
LAB_019498c0:
      lVar5 = 0;
    }
    local_88 = '\x01';
    local_90 = lVar5;
    FUN_00cbadd0(&local_90,&local_1a0);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
      (**(code **)(*local_1b0 + 0x10))();
      FUN_00d50b20();
    }
  }
  lVar5 = *unaff_RSI;
  lVar2 = *plVar1;
  lVar3 = lVar2;
  if (lVar2 != lVar5) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    *plVar1 = lVar5;
    lVar3 = lVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
      lVar3 = *plVar1;
    }
  }
  if (lVar3 == 0) {
    return;
  }
  FUN_00d403d0();
  local_188 = 0;
  FUN_00d50b00();
  local_2c0 = DAT_027bf410;
  local_188 = '\x01';
  local_190 = unaff_RDI;
  if (DAT_027bf410 != 0) {
    FUN_00d50b00();
  }
  local_2b8 = '\x01';
  local_178 = 0;
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_178 = '\x01';
  local_180 = lVar5;
  FUN_00d41430(&local_180,&local_2c0);
  if ((local_178 != '\0') && (local_180 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2b8 != '\0') && (local_2c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_188 != '\0') && (local_190 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  local_168 = 0;
  FUN_00d50b00();
  local_2b0 = DAT_027e0908;
  local_168 = '\x01';
  local_170 = unaff_RDI;
  if (DAT_027e0908 != 0) {
    FUN_00d50b00();
  }
  local_2a8 = '\x01';
  local_158 = 0;
  lVar5 = *plVar1;
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  local_158 = '\x01';
  plVar8 = &local_160;
  local_160 = lVar5;
  FUN_00d41430(plVar8,&local_2b0);
  pVar6 = (pthread_key_t)plVar8;
  if ((local_158 != '\0') && (local_160 != 0)) {
    FUN_00d50b20();
  }
  if ((local_2a8 != '\0') && (local_2b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) {
    return;
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_148 = 0;
  plVar8 = (longlong *)(unaff_RDI + 0x140);
  (**(code **)(*(longlong *)(unaff_RDI + 0x140) + 0x10))();
  FUN_00d50b00();
  local_148 = '\x01';
  local_138 = 0;
  local_140 = *plVar1;
  local_150 = plVar8;
  if (local_140 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949ca2;
LAB_01949c94:
    local_78 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949c94;
LAB_01949ca2:
    lVar5 = 0;
  }
  local_78 = '\x01';
  plVar7 = &local_80;
  local_80 = lVar5;
  FUN_00cbad30(plVar7,&local_140,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_148 != '\0') && (local_150 != (longlong *)0x0)) {
    (**(code **)(*local_150 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_128 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_128 = '\x01';
  local_118 = 0;
  local_120 = *plVar1;
  local_130 = plVar8;
  if (local_120 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949e07;
LAB_01949df9:
    local_68 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949df9;
LAB_01949e07:
    lVar5 = 0;
  }
  local_68 = '\x01';
  plVar7 = &local_70;
  local_70 = lVar5;
  FUN_00cbad30(plVar7,&local_120,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
    (**(code **)(*local_130 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_108 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_108 = '\x01';
  local_f8 = 0;
  local_100 = *plVar1;
  local_110 = plVar8;
  if (local_100 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_01949f6c;
LAB_01949f5e:
    local_58 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_01949f5e;
LAB_01949f6c:
    lVar5 = 0;
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_100,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
    (**(code **)(*local_110 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_e8 = 0;
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_e8 = '\x01';
  local_d8 = 0;
  local_e0 = *plVar1;
  local_f0 = plVar8;
  if (local_e0 != 0) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if ((lVar5 == 0) || (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 == 0)) goto LAB_0194a0d1;
LAB_0194a0c3:
    local_48 = 0;
    FUN_00d50b00();
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 != 0) goto LAB_0194a0c3;
LAB_0194a0d1:
    lVar5 = 0;
  }
  local_48 = '\x01';
  plVar7 = &local_50;
  local_50 = lVar5;
  FUN_00cbad30(plVar7,&local_e0,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
    (**(code **)(*local_f0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  (**(code **)(*plVar8 + 0x10))();
  FUN_00d50b00();
  local_298 = '\x01';
  local_288 = 0;
  local_290 = *plVar1;
  local_2a0 = plVar8;
  if (local_290 != 0) {
    FUN_00d50b00();
  }
  local_288 = '\x01';
  FUN_002771e0();
  lVar5 = FUN_00e85ef0();
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0();
    if (lVar5 != 0) {
      lVar5 = *(longlong *)(lVar5 + 0x28);
      goto joined_r0x0194a225;
    }
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
joined_r0x0194a225:
    if (lVar5 != 0) {
      local_278 = 0;
      FUN_00d50b00();
      goto LAB_0194a23a;
    }
  }
  lVar5 = 0;
LAB_0194a23a:
  local_278 = '\x01';
  local_280 = lVar5;
  FUN_00cbad30(&local_280,&local_290,0x90);
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  if ((local_298 != '\0') && (local_2a0 != (longlong *)0x0)) {
    (**(code **)(*local_2a0 + 0x10))();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d4f920 — 4534 bytes
// str: ""%@@2x.%@""
// str: ""Resource named %@ not found""
// ============================================================

void FUN_01d4f920(void)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  undefined8 *puVar9;
  byte bVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *unaff_RSI;
  int iVar13;
  longlong unaff_RDI;
  undefined1 uVar14;
  ushort uVar15;
  int iVar16;
  ulonglong in_R11;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  longlong *local_1a8;
  longlong local_1a0;
  char local_198;
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
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  int local_a4;
  longlong local_90;
  char local_88;
  longlong *local_80;
  uint local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  longlong local_38;
  
  lVar19 = *unaff_RSI;
  lVar12 = *(longlong *)(unaff_RDI + 0x38);
  if (lVar12 != lVar19) {
    if (lVar19 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x38) = lVar19;
    if (lVar12 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01f27fe0();
  plVar17 = local_50;
  local_1a0 = *unaff_RSI;
  local_198 = '\0';
  FUN_01ea01c0();
  local_108 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_108 = '\x01';
  local_110 = local_90;
  uVar23 = (**(code **)(*plVar17 + 0x5f8))(&local_110,&local_1a0);
  local_b0 = local_80;
  if ((char)local_78 == '\0') {
    if (local_80 != (longlong *)0x0) {
      uVar23 = FUN_00d50b00();
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        uVar23 = FUN_00d50b20();
      }
    }
  }
  else {
    local_78 = local_78 & 0xffffff00;
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    uVar23 = FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar23 = FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    uVar23 = FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    uVar23 = FUN_00d50b20();
  }
  plVar17 = local_b0;
  if (local_b0 == (longlong *)0x0) {
    if ((DAT_028b8198 == (undefined8 *)0x0) || (DAT_028b81a1 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b8198 == (undefined8 *)0x0) {
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar9 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028b8198 == puVar9) {
          bVar21 = false;
        }
        else {
          bVar21 = true;
          bVar20 = DAT_028b8198 != (undefined8 *)0x0;
          DAT_028b8198 = puVar9;
          if (bVar20) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b81a0 == '\0') {
          DAT_028b81a0 = '\x01';
          FUN_00e8cb90();
        }
        if (!bVar21) {
          FUN_00d50b20();
        }
        FUN_01f27fe0();
        plVar17 = local_50;
        FUN_00d30620();
        uVar23 = FUN_00d305f0();
        local_d8 = 0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            uVar23 = FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_d8 = '\x01';
        local_e0 = local_90;
        uVar23 = (**(code **)(*plVar17 + 0x618))(uVar23,&local_e0);
        plVar17 = local_80;
        if (local_80 == (longlong *)0x0) {
          bVar21 = true;
          plVar17 = (longlong *)0x0;
          local_40 = (longlong *)0x0;
        }
        else {
          if ((char)local_78 == '\0') {
            uVar23 = FUN_00d50b00();
            bVar21 = false;
            local_40 = (longlong *)CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
            if (((char)local_78 == '\0') || (local_80 == (longlong *)0x0)) goto LAB_01d5038e;
            uVar23 = FUN_00d50b20();
          }
          else {
            local_78 = local_78 & 0xffffff00;
          }
          local_40 = (longlong *)CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
          bVar21 = false;
        }
LAB_01d5038e:
        if ((local_d8 != '\0') && (local_e0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        puVar9 = DAT_028b8198;
        if (!bVar21) {
          uVar23 = (**(code **)(*plVar17 + 1000))();
          plVar18 = local_50;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_80 = plVar18;
          local_78 = local_78 & 0xffffff00;
          FUN_00d214d0(uVar23,*(undefined4 *)((longlong)puVar9 + 0xc));
          if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar18 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01f27fe0();
        plVar18 = local_50;
        FUN_00d30660();
        uVar23 = FUN_00d305f0();
        local_c8 = 0;
        if (local_88 == '\0') {
          if (local_90 != 0) {
            uVar23 = FUN_00d50b00();
          }
        }
        else {
          local_88 = '\0';
        }
        local_c8 = '\x01';
        local_d0 = local_90;
        (**(code **)(*plVar18 + 0x618))(uVar23,&local_d0);
        plVar18 = local_80;
        bVar7 = (byte)local_40;
        if (local_80 == plVar17) {
          plVar18 = plVar17;
          if ((bool)(bVar21 & local_80 != (longlong *)0x0)) {
            if ((char)local_78 != '\0') goto LAB_01d50542;
            bVar7 = 1;
            FUN_00d50b00();
          }
LAB_01d50598:
          if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar10 = bVar7 & plVar17 != (longlong *)0x0;
            bVar7 = 1;
            if (bVar10 == 1) {
              FUN_00d50b20();
            }
            goto LAB_01d50598;
          }
          bVar21 = plVar17 != (longlong *)0x0;
          plVar17 = plVar18;
          if ((bVar7 & bVar21) == 1) {
            FUN_00d50b20();
          }
LAB_01d50542:
          local_78 = local_78 & 0xffffff00;
          bVar7 = 1;
          plVar18 = plVar17;
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        puVar9 = DAT_028b8198;
        if (plVar18 != (longlong *)0x0) {
          uVar23 = (**(code **)(*plVar18 + 1000))();
          plVar17 = local_50;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_80 = plVar17;
          local_78 = local_78 & 0xffffff00;
          FUN_00d214d0(uVar23,*(undefined4 *)((longlong)puVar9 + 0xc));
          if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_01f27fe0();
        (**(code **)(*local_50 + 0x610))();
        plVar17 = local_80;
        if (local_80 == plVar18) {
          plVar17 = plVar18;
          bVar10 = bVar7;
          if ((bVar7 == 0) && (local_80 != (longlong *)0x0)) {
            if ((char)local_78 != '\0') goto LAB_01d506f0;
            FUN_00d50b00();
            bVar10 = 1;
          }
LAB_01d50738:
          if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar10 = 1;
            if ((bVar7 != 0) && (plVar18 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d50738;
          }
          if ((bVar7 != 0) && (plVar18 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d506f0:
          local_78 = local_78 & 0xffffff00;
          bVar10 = 1;
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        puVar9 = DAT_028b8198;
        if (plVar17 != (longlong *)0x0) {
          uVar23 = (**(code **)(*plVar17 + 1000))();
          plVar17 = local_50;
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              uVar23 = FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          local_80 = plVar17;
          local_78 = local_78 & 0xffffff00;
          FUN_00d214d0(uVar23,*(undefined4 *)((longlong)puVar9 + 0xc));
          if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar17 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar10 != 0) {
            FUN_00d50b20();
          }
        }
        DAT_028b81a1 = '\x01';
        uVar23 = FUN_00e8cb70();
      }
      else {
        DAT_028b81a1 = '\x01';
        uVar23 = FUN_00e8cb70();
      }
    }
    if (DAT_028b8198 != (undefined8 *)0x0) {
      lVar19 = 0;
      do {
        if (*(int *)((longlong)DAT_028b8198 + 0xc) <= lVar19) break;
        plVar17 = *(longlong **)(DAT_028b8198[2] + lVar19 * 8);
        if (plVar17 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar17 + 0x388))();
        local_160 = *unaff_RSI;
        local_158 = '\0';
        cVar6 = (**(code **)(*local_80 + 0x50))();
        cVar8 = '\x01';
        if (cVar6 == '\0') {
          (**(code **)(*plVar17 + 0x390))();
          local_150 = *unaff_RSI;
          local_148 = '\0';
          cVar8 = (**(code **)(*local_50 + 0x50))();
          if ((local_148 != '\0') && (local_150 != 0)) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_158 != '\0') && (local_160 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar8 != '\0') {
          FUN_01d523b0();
          FUN_00d50b20();
          goto LAB_01d50aa3;
        }
        (**(code **)(*plVar17 + 0x390))();
        local_140 = *unaff_RSI;
        local_138 = '\0';
        cVar6 = (**(code **)(*local_80 + 0x50))();
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 != '\0') {
          FUN_01d523b0();
          FUN_00d50b20();
          goto LAB_01d50aa3;
        }
        uVar23 = FUN_00d50b20();
        lVar19 = lVar19 + 1;
      } while (DAT_028b8198 != (undefined8 *)0x0);
    }
    lVar19 = DAT_027fe468;
    if (DAT_027fe468 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_130 = lVar19;
    local_128 = '\x01';
    lVar19 = *unaff_RSI;
    local_78 = 1;
    local_80 = &DAT_024c5048;
    if (lVar19 != 0) {
      uVar23 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_70 = lVar19;
    FUN_00cc7b40(uVar23,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_128 != '\0') && (local_130 != 0)) {
      FUN_00d50b20();
    }
    goto LAB_01d50aa3;
  }
  FUN_01d523b0();
  (**(code **)(*plVar17 + 0x3f0))();
  plVar17 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_b0 + 0x390))();
  plVar18 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*local_b0 + 0x380))();
  plVar3 = local_80;
  if (((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_c0 = plVar18;
  local_1a8 = plVar3;
  uVar11 = 2;
  uVar23 = FUN_00083ea0(2,&local_1a8);
  uVar23 = FUN_00d8cb40(uVar23,&local_80);
  local_e8 = 0;
  if (local_88 == '\0') {
    if (local_90 != 0) {
      uVar23 = FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  local_e8 = '\x01';
  local_f0 = local_90;
  (**(code **)(*plVar17 + 0x400))(uVar23,&local_f0);
  plVar5 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  local_80 = (longlong *)&DAT_0253d630;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  local_80 = &DAT_024c5048;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar5 != (longlong *)0x0) && (cVar6 = (**(code **)(*plVar5 + 0x398))(), cVar6 != '\0')) {
    FUN_01d4f320();
    plVar4 = local_80;
    if ((char)local_78 == '\0') {
      if (local_80 != (longlong *)0x0) {
        FUN_00d50b00();
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01d4fdab;
      }
    }
    else if (local_80 != (longlong *)0x0) {
LAB_01d4fdab:
      *(undefined4 *)(plVar4 + 9) = 0x40000000;
      fVar22 = DAT_0239011c;
      *(float *)((longlong)plVar4 + 0x1c) = *(float *)((longlong)plVar4 + 0x1c) * DAT_0239011c;
      *(float *)(plVar4 + 4) = fVar22 * *(float *)(plVar4 + 4);
      local_78 = local_78 & 0xffffff00;
      local_80 = plVar4;
      FUN_00d21140();
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  lVar19 = DAT_027f0538;
  if (DAT_027f0538 != 0) {
    FUN_00d50b00();
  }
  local_170 = lVar19;
  local_168 = '\x01';
  cVar6 = FUN_00d8f400();
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (cVar6 == '\0') {
    if (*(longlong *)(unaff_RDI + 0x58) == 0) {
      local_40 = plVar17;
      uVar23 = FUN_01d4ed90(*(undefined8 *)(unaff_RDI + 0x1c),DAT_02390124);
      plVar4 = local_80;
      if (((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) {
        uVar23 = FUN_00d50b00();
      }
      local_a4 = (int)CONCAT71((int7)((ulonglong)uVar23 >> 8),1);
      if (plVar4[6] == 0) {
LAB_01d4fefb:
        plVar17 = (longlong *)0x0;
      }
      else {
        FUN_01d480c0();
        FUN_01d48370();
        (**(code **)(*(longlong *)plVar4[6] + 0x530))();
        plVar17 = (longlong *)plVar4[6];
        if (plVar17 == (longlong *)0x0) goto LAB_01d4fefb;
        FUN_00d50b00();
        local_a4 = 0;
      }
      local_118 = 0;
      FUN_00d50b00();
      local_118 = '\x01';
      local_120 = unaff_RDI;
      (**(code **)(*plVar17 + 0x400))(0);
      plVar17 = local_40;
      if ((local_118 != '\0') && (local_120 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if (plVar4[6] != 0) {
        FUN_01d48390();
        FUN_01d481c0();
      }
      fVar22 = *(float *)((longlong)plVar4 + 0x1c) * *(float *)(plVar4 + 9);
      if (fVar22 <= 0.0) {
        *(undefined1 *)(unaff_RDI + 0x19) = 1;
      }
      else {
        fVar24 = *(float *)(plVar4 + 9) * *(float *)(plVar4 + 4);
        if (fVar24 <= 0.0) {
          iVar16 = 1;
          do {
            fVar24 = (float)iVar16;
            iVar16 = iVar16 + 1;
          } while (fVar24 < fVar22);
        }
        else {
          fVar25 = 0.0;
          lVar19 = 0;
          iVar16 = 0;
          do {
            local_a4 = iVar16;
            local_38 = lVar19;
            if (fVar22 <= fVar25) {
              iVar16 = 1;
              do {
                if ((char)in_R11 == -1) {
                  uVar14 = 0;
                  cVar6 = (char)uVar11;
                  uVar11 = 0;
                  if (cVar6 != '\0') goto LAB_01d50232;
                }
                fVar25 = (float)iVar16;
                iVar16 = iVar16 + 1;
              } while (fVar25 < fVar24);
            }
            else {
              fVar25 = 0.0;
              iVar13 = 1;
              iVar16 = local_a4;
              do {
                bVar7 = (byte)uVar11;
                uVar11 = uVar11 & 0xffffffff;
                bVar10 = bVar7;
                if (fVar24 <= fVar25) {
LAB_01d500e2:
                  if ((char)in_R11 == -1) {
                    if ((bVar7 != 0) || (bVar10 != 0)) {
                      *(undefined1 *)(unaff_RDI + 0x19) = 0;
                      goto joined_r0x01d50ad7;
                    }
                    in_R11 = 0xff;
                    bVar10 = 0;
                    bVar7 = 0;
                    uVar14 = 0;
                    cVar6 = (char)uVar11;
                    uVar11 = 0;
                    if (cVar6 != '\0') goto LAB_01d50232;
                  }
                }
                else {
                  lVar19 = *(longlong *)(plVar4[10] + 8);
                  lVar12 = (longlong)iVar16;
                  bVar7 = *(byte *)(lVar19 + lVar12);
                  bVar10 = *(byte *)(lVar19 + 1 + lVar12);
                  bVar1 = *(byte *)(lVar19 + 2 + lVar12);
                  uVar11 = (ulonglong)bVar1;
                  bVar2 = *(byte *)(lVar19 + 3 + lVar12);
                  in_R11 = (ulonglong)bVar2;
                  if (1 < (byte)(bVar2 + 1)) {
                    uVar15 = (ushort)bVar2;
                    uVar11 = (ulonglong)
                             (((uint)bVar1 * 0x100 - (uint)bVar1 & 0xffff) / (uint)uVar15);
                    bVar10 = (byte)(((uint)bVar10 * 0xff) / (uint)uVar15);
                    bVar7 = (byte)(((uint)(ushort)bVar7 * 0x100 - (uint)(ushort)bVar7 & 0xffff) /
                                  (uint)uVar15);
                    lVar19 = plVar4[5];
                    if (lVar19 != 0) goto LAB_01d50087;
                    goto LAB_01d500e2;
                  }
                  lVar19 = plVar4[5];
                  if (lVar19 == 0) goto LAB_01d500e2;
LAB_01d50087:
                  if ((((char)uVar11 !=
                        (char)(int)((double)(*(float *)(lVar19 + 0x18) * DAT_02394220) +
                                   DAT_023942d0)) ||
                      (bVar10 != (byte)(int)((double)(*(float *)(lVar19 + 0x14) * DAT_02394220) +
                                            DAT_023942d0))) ||
                     (bVar7 != (byte)(int)((double)(*(float *)(lVar19 + 0x10) * DAT_02394220) +
                                          DAT_023942d0))) goto LAB_01d500e2;
                  in_R11 = 0;
                }
                uVar14 = 0;
                if (((bVar7 != (byte)uVar11) || ((byte)uVar11 != bVar10)) || (bVar7 != bVar10))
                goto LAB_01d50232;
                fVar25 = (float)iVar13;
                iVar13 = iVar13 + 1;
                iVar16 = iVar16 + (int)fVar22 * 4;
              } while (fVar25 < fVar24);
            }
            fVar25 = (float)(int)(local_38 + 1);
            lVar19 = local_38 + 1;
            iVar16 = local_a4 + 4;
          } while (fVar25 < fVar22);
        }
        uVar14 = 1;
LAB_01d50232:
        *(undefined1 *)(unaff_RDI + 0x19) = uVar14;
joined_r0x01d50ad7:
        if (plVar4 == (longlong *)0x0) goto LAB_01d5024a;
      }
      FUN_00d50b20();
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 0x19) = 1;
  }
LAB_01d5024a:
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar18 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar17 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01d50aa3:
  if (local_b0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01114900 — 3471 bytes
// str: ""bool""
// str: ""GNUni""
// str: ""GNFraction""
// str: ""_detectsChurchModes""
// str: ""_detectsDetailedModeChanges""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01114900(void)

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
  *unaff_RDI = &DAT_02601ab0;
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794e90 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794e58 = FUN_011146e0();
        _DAT_02794e50 = "_detectsBassNote";
        _DAT_02794e60 = 0;
        _DAT_02794e68 = 0x6200;
        _DAT_02794e70 = "bool";
        _DAT_02794e78 = 0;
        uRam0000000002794e80 = 0;
        _DAT_02794e88 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794ed8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794ea0 = FUN_011146e0();
        _DAT_02794e98 = "_detectsChordExtensions";
        _DAT_02794ea8 = 0;
        _DAT_02794eb0 = 0x6200;
        _DAT_02794eb8 = "bool";
        _DAT_02794ec0 = 0;
        uRam0000000002794ec8 = 0;
        _DAT_02794ed0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794f20 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794ee8 = FUN_011146e0();
        _DAT_02794ee0 = "_detectsChurchModes";
        _DAT_02794ef0 = 0;
        _DAT_02794ef8 = 0x6200;
        _DAT_02794f00 = "bool";
        _DAT_02794f08 = 0;
        uRam0000000002794f10 = 0;
        _DAT_02794f18 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3b) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794f68 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794f30 = FUN_011146e0();
        _DAT_02794f28 = "_omitDoubtedThirds";
        _DAT_02794f38 = 0;
        _DAT_02794f40 = 0x6200;
        _DAT_02794f48 = "bool";
        _DAT_02794f50 = 0;
        uRam0000000002794f58 = 0;
        _DAT_02794f60 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794fb0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794f78 = FUN_011146e0();
        _DAT_02794f70 = "_detectsDetailedModeChanges";
        _DAT_02794f80 = 0;
        _DAT_02794f88 = 0x6200;
        _DAT_02794f90 = "bool";
        _DAT_02794f98 = 0;
        uRam0000000002794fa0 = 0;
        _DAT_02794fa8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3d) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02794ff8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02794fc0 = FUN_011146e0();
        _DAT_02794fb8 = "_detectsSingleMode";
        _DAT_02794fc8 = 0;
        _DAT_02794fd0 = 0x6200;
        _DAT_02794fd8 = "bool";
        _DAT_02794fe0 = 0;
        uRam0000000002794fe8 = 0;
        _DAT_02794ff0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_01115860();
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795088 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795050 = FUN_011146e0();
        _DAT_02795048 = "_reflectsPitchSystem";
        _DAT_02795058 = 0;
        _DAT_02795060 = 0x6200;
        _DAT_02795068 = "bool";
        _DAT_02795070 = 0;
        uRam0000000002795078 = 0;
        _DAT_02795080 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027950d0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795098 = FUN_011146e0();
        _DAT_02795090 = "_detectsPitchSystem";
        _DAT_027950a0 = 0;
        _DAT_027950a8 = 0x6200;
        _DAT_027950b0 = "bool";
        _DAT_027950b8 = 0;
        uRam00000000027950c0 = 0;
        _DAT_027950c8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4a) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795118 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027950e0 = FUN_011146e0();
        _DAT_027950d8 = "_assumesLowestPitchAsRoot";
        _DAT_027950e8 = 0;
        _DAT_027950f0 = 0x6200;
        _DAT_027950f8 = "bool";
        _DAT_02795100 = 0;
        uRam0000000002795108 = 0;
        _DAT_02795110 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795160 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795128 = FUN_011146e0();
        _DAT_02795120 = "_assumesClosePosition";
        _DAT_02795130 = 0;
        _DAT_02795138 = 0x6200;
        _DAT_02795140 = "bool";
        _DAT_02795148 = 0;
        uRam0000000002795150 = 0;
        _DAT_02795158 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4c) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027951a8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795170 = FUN_011146e0();
        _DAT_02795168 = "_suggestsMissingThird";
        _DAT_02795178 = 0;
        _DAT_02795180 = 0x6200;
        _DAT_02795188 = "bool";
        _DAT_02795190 = 0;
        uRam0000000002795198 = 0;
        _DAT_027951a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4d) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027951f0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027951b8 = FUN_011146e0();
        _DAT_027951b0 = "_suggestsMissingFifth";
        _DAT_027951c0 = 0;
        _DAT_027951c8 = 0x6200;
        _DAT_027951d0 = "bool";
        _DAT_027951d8 = 0;
        uRam00000000027951e0 = 0;
        _DAT_027951e8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4e) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795238 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795200 = FUN_011146e0();
        _DAT_027951f8 = "_reflectsBeatStrength";
        _DAT_02795208 = 0;
        _DAT_02795210 = 0x6200;
        _DAT_02795218 = "bool";
        _DAT_02795220 = 0;
        uRam0000000002795228 = 0;
        _DAT_02795230 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4f) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795280 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795248 = FUN_011146e0();
        _DAT_02795240 = "_reflectsPitch";
        _DAT_02795250 = 0;
        _DAT_02795258 = 0x6200;
        _DAT_02795260 = "bool";
        _DAT_02795268 = 0;
        uRam0000000002795270 = 0;
        _DAT_02795278 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 10) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027952c8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795290 = FUN_011146e0();
        _DAT_02795288 = "_reflectsDynamic";
        _DAT_02795298 = 0;
        _DAT_027952a0 = 0x6200;
        _DAT_027952a8 = "bool";
        _DAT_027952b0 = 0;
        uRam00000000027952b8 = 0;
        _DAT_027952c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x51) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795310 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027952d8 = FUN_011146e0();
        _DAT_027952d0 = "_reflectsDetectionQuality";
        _DAT_027952e0 = 0;
        _DAT_027952e8 = 0x6200;
        _DAT_027952f0 = "bool";
        _DAT_027952f8 = 0;
        uRam0000000002795300 = 0;
        _DAT_02795308 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x54) = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02795358 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795320 = FUN_011146e0();
        _DAT_02795318 = "_extensionLimit";
        _DAT_02795328 = 0;
        _DAT_02795330 = 0x6900;
        _DAT_02795338 = "GNInt";
        _DAT_02795340 = 0;
        uRam0000000002795348 = 0;
        _DAT_02795350 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xb] = 0x100000000;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027953a0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02795368 = FUN_011146e0();
        _DAT_02795360 = "_granularity";
        _DAT_02795370 = 0;
        _DAT_02795378 = 0x7100;
        _DAT_02795380 = "GNFraction";
        _DAT_02795388 = 0;
        uRam0000000002795390 = 0;
        _DAT_02795398 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xc] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115940();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  unaff_RDI[0xd] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115a30();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  unaff_RDI[0xe] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115b20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  unaff_RDI[0xf] = 0;
  lVar9 = FUN_011146e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_01115c10();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUDataPointFunction");
  }
  return;
}




// ============================================================
// @01bff300 — 2096 bytes
// str: ""MUDetectionEditorView""
// str: ""_attackItemDetectionQualityLimit""
// str: ""_attackItemDefaultDetectionQualityLimit""
// str: ""_attackItemDetectionVisualQualityLimit""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bff300(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  longlong unaff_RDI;
  longlong **pplVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar10 = &local_40;
  FUN_01a13070();
  plVar3 = local_40;
  if ((DAT_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_01bff35c:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01bff35c;
  }
  plVar3 = *pplVar10;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    local_b8 = 0;
    plVar11 = (longlong *)0x0;
    plVar3 = *(longlong **)(unaff_RDI + 0xe0);
    if (plVar3 == (longlong *)0x0) goto LAB_01bff97c;
  }
  else {
    pplVar10 = &local_f8;
    FUN_01a13070();
    plVar3 = local_f8;
    if ((DAT_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02714a48 = FUN_000914a0();
      _DAT_02714a30 = "MUDetectionEditorView";
      _DAT_02714a38 = 0x600;
      param_1 = 0x34de90;
      _DAT_02714a40 = FUN_0034de90;
      _DAT_02714a50 = 0;
      uRam0000000002714a58 = 0;
      _DAT_02714a60 = 0;
      _DAT_02714ad8 = 0;
      uRam0000000002714ae0 = 0;
      _DAT_02714ae8 = 0;
      DAT_02714aea = 1;
      _DAT_02714a68 = 0;
      uRam0000000002714a70 = 0;
      _DAT_02714a78 = 0;
      uRam0000000002714a80 = 0;
      _DAT_02714a88 = 0;
      uRam0000000002714a90 = 0;
      _DAT_02714a98 = 0;
      uRam0000000002714aa0 = 0;
      _DAT_02714aa8 = 0;
      uRam0000000002714ab0 = 0;
      _DAT_02714ab8 = 0;
      uRam0000000002714ac0 = 0;
      _DAT_02714ac8 = 0;
      uRam0000000002714ad0 = 0;
      DAT_02714af3 = 0;
      _DAT_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (plVar3 == (longlong *)0x0) {
LAB_01bff3ca:
      pplVar10 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01bff3ca;
    }
    (**(code **)(&UNK_00001668 + **pplVar10))();
    plVar11 = local_40;
    if (local_40 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((ulonglong)plVar3 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar8 = CONCAT71(uVar9,1);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar8 = CONCAT71(uVar9,1);
      }
    }
    if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(unaff_RDI + 0xe0);
    local_b8 = uVar8;
    if (plVar11 == plVar3) goto LAB_01bff97c;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) goto LAB_01bff4ea;
  }
  else {
    local_a8 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_b0 = (longlong *)(unaff_RDI + 0xb8);
    FUN_00cbb340();
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(unaff_RDI + 0xe0);
    if (plVar3 != plVar11) {
LAB_01bff4ea:
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0xe0) = plVar11;
      bVar12 = plVar3 != (longlong *)0x0;
      plVar3 = plVar11;
      if (bVar12) {
        FUN_00d50b20();
        plVar3 = *(longlong **)(unaff_RDI + 0xe0);
      }
    }
  }
  if (plVar3 == (longlong *)0x0) goto LAB_01bff97c;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) goto LAB_01bff97c;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  plVar3 = (longlong *)(unaff_RDI + 0xb8);
  local_98 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_e8 = 0;
  local_e0 = '\0';
  local_a0 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff650;
LAB_01bff65e:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff65e;
LAB_01bff650:
    local_68 = 0;
    FUN_00d50b00();
  }
  local_68 = '\x01';
  plVar7 = &local_70;
  local_70 = lVar5;
  FUN_00cbad30(plVar7,&local_e8,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_88 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_88 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  local_90 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff7a9;
LAB_01bff7b7:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff7b7;
LAB_01bff7a9:
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_d8,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    (**(code **)(*local_90 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_78 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  local_80 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_01,1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bff8fc;
LAB_01bff90a:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bff90a;
LAB_01bff8fc:
    local_48 = 0;
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar5;
  FUN_00cbad30(&local_50,&local_c8,0x90);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
LAB_01bff97c:
  if (((char)local_b8 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01bf95e0 — 1720 bytes
// str: ""MUDetectionEditorView""
// str: ""_itemDetectionQualityLimit""
// str: ""_itemDetectionVisualQualityLimit""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01bf95e0(pthread_key_t param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong *plVar7;
  undefined7 uVar9;
  undefined8 uVar8;
  longlong unaff_RDI;
  longlong **pplVar10;
  longlong *plVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pplVar10 = &local_40;
  FUN_01a13070();
  plVar3 = local_40;
  if ((DAT_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
    _DAT_02714a48 = FUN_000914a0();
    _DAT_02714a30 = "MUDetectionEditorView";
    _DAT_02714a38 = 0x600;
    param_1 = 0x34de90;
    _DAT_02714a40 = FUN_0034de90;
    _DAT_02714a50 = 0;
    uRam0000000002714a58 = 0;
    _DAT_02714a60 = 0;
    _DAT_02714ad8 = 0;
    uRam0000000002714ae0 = 0;
    _DAT_02714ae8 = 0;
    DAT_02714aea = 1;
    _DAT_02714a68 = 0;
    uRam0000000002714a70 = 0;
    _DAT_02714a78 = 0;
    uRam0000000002714a80 = 0;
    _DAT_02714a88 = 0;
    uRam0000000002714a90 = 0;
    _DAT_02714a98 = 0;
    uRam0000000002714aa0 = 0;
    _DAT_02714aa8 = 0;
    uRam0000000002714ab0 = 0;
    _DAT_02714ab8 = 0;
    uRam0000000002714ac0 = 0;
    _DAT_02714ac8 = 0;
    uRam0000000002714ad0 = 0;
    DAT_02714af3 = 0;
    _DAT_02714aeb = 0;
    ___cxa_guard_release();
  }
  if (plVar3 == (longlong *)0x0) {
LAB_01bf963c:
    pplVar10 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar1 = FUN_00e85ea0();
    if (cVar1 == '\0') goto LAB_01bf963c;
  }
  plVar3 = *pplVar10;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 == (longlong *)0x0) {
    local_98 = 0;
    plVar11 = (longlong *)0x0;
    plVar3 = *(longlong **)(unaff_RDI + 0xe8);
    if (plVar3 == (longlong *)0x0) goto LAB_01bf9ae4;
  }
  else {
    pplVar10 = &local_c8;
    FUN_01a13070();
    plVar3 = local_c8;
    if ((DAT_02732c90 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_02714a48 = FUN_000914a0();
      _DAT_02714a30 = "MUDetectionEditorView";
      _DAT_02714a38 = 0x600;
      param_1 = 0x34de90;
      _DAT_02714a40 = FUN_0034de90;
      _DAT_02714a50 = 0;
      uRam0000000002714a58 = 0;
      _DAT_02714a60 = 0;
      _DAT_02714ad8 = 0;
      uRam0000000002714ae0 = 0;
      _DAT_02714ae8 = 0;
      DAT_02714aea = 1;
      _DAT_02714a68 = 0;
      uRam0000000002714a70 = 0;
      _DAT_02714a78 = 0;
      uRam0000000002714a80 = 0;
      _DAT_02714a88 = 0;
      uRam0000000002714a90 = 0;
      _DAT_02714a98 = 0;
      uRam0000000002714aa0 = 0;
      _DAT_02714aa8 = 0;
      uRam0000000002714ab0 = 0;
      _DAT_02714ab8 = 0;
      uRam0000000002714ac0 = 0;
      _DAT_02714ac8 = 0;
      uRam0000000002714ad0 = 0;
      DAT_02714af3 = 0;
      _DAT_02714aeb = 0;
      ___cxa_guard_release();
    }
    if (plVar3 == (longlong *)0x0) {
LAB_01bf96aa:
      pplVar10 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar3 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_01bf96aa;
    }
    (**(code **)(&UNK_00001668 + **pplVar10))();
    plVar11 = local_40;
    if (local_40 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar9 = (undefined7)((ulonglong)plVar3 >> 8);
      if (local_38 == '\0') {
        FUN_00d50b00();
        uVar8 = CONCAT71(uVar9,1);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
        uVar8 = CONCAT71(uVar9,1);
      }
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(unaff_RDI + 0xe8);
    local_98 = uVar8;
    if (plVar11 == plVar3) goto LAB_01bf9ae4;
  }
  if (plVar3 == (longlong *)0x0) {
    plVar3 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) goto LAB_01bf97c1;
  }
  else {
    local_88 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
    FUN_00d50b00();
    local_88 = '\x01';
    local_90 = (longlong *)(unaff_RDI + 0xb8);
    FUN_00cbb340();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      (**(code **)(*local_90 + 0x10))();
      FUN_00d50b20();
    }
    plVar3 = *(longlong **)(unaff_RDI + 0xe8);
    if (plVar3 != plVar11) {
LAB_01bf97c1:
      if (plVar11 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *(longlong **)(unaff_RDI + 0xe8) = plVar11;
      bVar12 = plVar3 != (longlong *)0x0;
      plVar3 = plVar11;
      if (bVar12) {
        FUN_00d50b20();
        plVar3 = *(longlong **)(unaff_RDI + 0xe8);
      }
    }
  }
  if (plVar3 == (longlong *)0x0) goto LAB_01bf9ae4;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar5 = FUN_00e8b990();
  if (lVar5 == 0) goto LAB_01bf9ae4;
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  plVar3 = (longlong *)(unaff_RDI + 0xb8);
  local_78 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0xb8) + 0x10))();
  FUN_00d50b00();
  local_78 = '\x01';
  local_b8 = 0;
  local_b0 = '\0';
  local_80 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da,1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bf9917;
LAB_01bf9925:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bf9925;
LAB_01bf9917:
    local_58 = 0;
    FUN_00d50b00();
  }
  local_58 = '\x01';
  plVar7 = &local_60;
  local_60 = lVar5;
  FUN_00cbad30(plVar7,&local_b8,0x90);
  pVar6 = (pthread_key_t)plVar7;
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    (**(code **)(*local_80 + 0x10))();
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(pVar6);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_68 = 0;
  (**(code **)(*plVar3 + 0x10))();
  FUN_00d50b00();
  local_68 = '\x01';
  local_a8 = 0;
  local_a0 = '\0';
  local_70 = plVar3;
  uVar13 = FUN_002771e0();
  lVar5 = FUN_00e85ef0(uVar13,1);
  if (lVar5 == 0) {
    lVar5 = FUN_00e858c0(extraout_XMM0_Da_00,1);
    if ((lVar5 != 0) && (lVar5 = *(longlong *)(lVar5 + 0x28), lVar5 != 0)) goto LAB_01bf9a64;
LAB_01bf9a72:
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar5 + 0x30);
    if (lVar5 == 0) goto LAB_01bf9a72;
LAB_01bf9a64:
    local_48 = 0;
    FUN_00d50b00();
  }
  local_48 = '\x01';
  local_50 = lVar5;
  FUN_00cbad30(&local_50,&local_a8,0x90);
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
    (**(code **)(*local_70 + 0x10))();
    FUN_00d50b20();
  }
LAB_01bf9ae4:
  if (((char)local_98 != '\0') && (plVar11 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01947890 — 1667 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01947bb6) */
/* WARNING: Removing unreachable block (ram,0x01947bc2) */

void FUN_01947890(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  char *pcVar5;
  int unaff_ESI;
  longlong *unaff_RDI;
  undefined4 uVar6;
  longlong local_d0;
  undefined1 local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_88;
  char local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (unaff_ESI == 0) {
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6160();
    pvVar1 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    FUN_00d23310();
    lVar3 = local_48;
    pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
    pcVar5 = local_38;
    if (local_40[0] != '\0') {
      pcVar5 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar5 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    local_68 = local_58;
    if (local_50 == '\0') {
      if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_50 = '\0';
    }
    if ((local_38[0] != '\0') && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    FUN_0194d210();
    lVar3 = local_48;
    if ((local_40[0] == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    local_60 = lVar3;
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      pVar4 = (pthread_key_t)local_68;
    }
    FUN_01320d00();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df30();
    lVar2 = local_48;
    if (local_40[0] == '\0') {
      if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40[0] = '\0';
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    local_78 = lVar2;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132b1c0(0);
    lVar2 = local_48;
    if (((local_40[0] == '\0') && (local_48 != 0)) &&
       ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != 0)))) {
      FUN_00d50b20();
    }
    local_70 = lVar2;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_012e6c30();
    local_d0 = lVar3;
    local_c8 = 0;
    FUN_0194e260(uVar6,&local_d0,param_3,param_4,0);
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      pVar4 = (pthread_key_t)local_60;
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6af0();
    FUN_012c6a90();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if ((pvVar1 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      pVar4 = (pthread_key_t)local_60;
    }
    FUN_012e78c0();
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e78c0();
    lVar2 = local_60;
    lVar3 = local_78;
    pvVar1 = _pthread_getspecific(pVar4);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012c6a80();
    uVar6 = FUN_012c6a20();
    if ((local_50 != '\0') && (local_58 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if (local_70 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (lVar2 != 0) {
      uVar6 = FUN_00d50b20();
    }
    if (local_68 != 0) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    uVar6 = FUN_0194dfd0();
  }
  local_88 = *param_2;
  local_80 = '\0';
  (**(code **)(&DAT_000017b0 + *unaff_RDI))(uVar6,&local_88);
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01948420 — 986 bytes
// ============================================================

void FUN_01948420(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar6;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  int local_48;
  int iStack_44;
  int local_40;
  
  local_50 = *unaff_RSI;
  if (*(int *)(local_50 + 0xc) == *(int *)(unaff_RDI[0xbc] + 0xc)) {
    local_58 = 0;
    local_60 = 0;
    local_48 = -1;
    iStack_44 = 0;
    local_40 = 0;
    bVar6 = true;
    while( true ) {
      if (iStack_44 != 0) {
        if (iStack_44 < 1) {
          iStack_44 = -iStack_44;
        }
        else {
          local_48 = local_48 - iStack_44;
          FUN_00d23690();
          local_40 = local_40 + iStack_44;
          iStack_44 = 0;
        }
      }
      lVar2 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)(local_50 + 0xc) <= local_48) break;
      local_70 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar2 * 8);
      local_68 = '\0';
      local_60 = local_70;
      cVar1 = FUN_00d23d70();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 == '\0') {
        bVar6 = false;
      }
    }
    FUN_00115190();
    if (!bVar6) {
      FUN_00d216c0();
      local_60 = *unaff_RSI;
      local_58 = '\0';
      FUN_00d214d0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      pVar5 = 0x2572358;
      *puVar3 = &DAT_02572358;
      (*DAT_02572370)();
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3260();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0xbc] != 0) {
        local_58 = '\0';
        local_60 = 0;
        local_48 = -1;
        iStack_44 = 0;
        local_40 = 0;
        local_50 = unaff_RDI[0xbc];
        while( true ) {
          if (iStack_44 != 0) {
            if (iStack_44 < 1) {
              iStack_44 = -iStack_44;
            }
            else {
              local_48 = local_48 - iStack_44;
              FUN_00d23690();
              local_40 = local_40 + iStack_44;
              iStack_44 = 0;
            }
          }
          lVar2 = (longlong)local_48;
          local_48 = local_48 + 1;
          if (*(int *)(local_50 + 0xc) <= local_48) break;
          local_a0 = *(longlong *)(*(longlong *)(local_50 + 0x10) + 8 + lVar2 * 8);
          local_98 = '\0';
          local_60 = local_a0;
          (**(code **)(&UNK_00001698 + *unaff_RDI))(0,&local_a0);
          lVar2 = local_80;
          if (local_78 == '\0') {
            if (local_80 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          local_70 = lVar2;
          local_68 = '\0';
          FUN_00d21140();
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar2 = local_50;
        FUN_00115190();
        pVar5 = (pthread_key_t)lVar2;
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00e8b990();
      FUN_00cb1f10();
      FUN_00db3270();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_88 = '\0';
      local_90 = puVar3;
      FUN_019a4000();
      if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01948a20 — 807 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01948cce) */
/* WARNING: Removing unreachable block (ram,0x01948cdb) */

longlong * FUN_01948a20(char *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  void *pvVar3;
  char *pcVar4;
  pthread_key_t pVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong local_d0;
  char local_c8;
  longlong local_b0;
  char local_a8;
  longlong local_90;
  char local_88;
  longlong local_70;
  char local_68;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6160();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_70 == 0) {
LAB_01948cfa:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    lVar6 = 0;
    do {
      pVar5 = (pthread_key_t)param_1;
      if (*(int *)(local_70 + 0xc) <= (int)lVar6) {
        FUN_000be170();
        FUN_00d50b20();
        goto LAB_01948cfa;
      }
      lVar1 = *(longlong *)(*(longlong *)(local_70 + 0x10) + lVar6 * 8);
      FUN_01941c70();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      FUN_00d23310();
      local_38[0] = local_40[0];
      param_1 = local_38;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = param_1;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar2 = *param_2;
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != local_d0);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_000be170();
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01d4e050 — 547 bytes
// str: ""GNGraphicsContextState""
// str: ""GNFilterQuality""
// str: ""_filterQuality""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_01d4e050(void)

{
  int iVar1;
  
  if (DAT_027f04d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f04c0 = _DAT_0238fcc0;
      uRam00000000027f04c4 = _UNK_0238fcc4;
      uRam00000000027f04c8 = _UNK_0238fcc8;
      uRam00000000027f04cc = _UNK_0238fccc;
      DAT_027f04d0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027f0510 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027f04e0 = "GNFilterQuality";
      _DAT_027f04e8 = 4;
      DAT_027f04ec = DAT_027f04d0;
      _DAT_027f04f0 = &DAT_027f04c0;
      _DAT_027f04f8 = &DAT_027f0490;
      _DAT_027f0500 = 0;
      uRam00000000027f0508 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027f0488 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027f0040 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027eff90 = FUN_00d4fe50();
          _DAT_027eff78 = "GNGraphicsContextState";
          _DAT_027eff80 = 0x58;
          _DAT_027eff88 = FUN_01d4bf80;
          _DAT_027eff98 = 0;
          uRam00000000027effa0 = 0;
          _DAT_027effa8 = 0;
          _DAT_027f0020 = 0;
          uRam00000000027f0028 = 0;
          _DAT_027f0030 = 0;
          DAT_027f0032 = 1;
          _DAT_027effb0 = 0;
          uRam00000000027effb8 = 0;
          _DAT_027effc0 = 0;
          uRam00000000027effc8 = 0;
          _DAT_027effd0 = 0;
          uRam00000000027effd8 = 0;
          _DAT_027effe0 = 0;
          uRam00000000027effe8 = 0;
          _DAT_027efff0 = 0;
          uRam00000000027efff8 = 0;
          _DAT_027f0000 = 0;
          uRam00000000027f0008 = 0;
          _DAT_027f0010 = 0;
          uRam00000000027f0018 = 0;
          DAT_027f003b = 0;
          _DAT_027f0033 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027f0448 = "_filterQuality";
      _DAT_027f0450 = &DAT_027eff78;
      _DAT_027f0458 = 0;
      _DAT_027f0460 = 0x6500;
      _DAT_027f0468 = "GNFilterQuality";
      _DAT_027f0470 = &DAT_027f04e0;
      _DAT_027f0478 = 0;
      uRam00000000027f0480 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027f0448;
}



