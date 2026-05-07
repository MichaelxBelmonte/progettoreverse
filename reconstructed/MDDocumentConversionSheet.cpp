// Reconstructed implementation of MDDocumentConversionSheet
// From MikeCore binary — reverse-engineered pseudocode

#include "MDDocumentConversionSheet.h"

// ============================================================
// @00629000 — 2624 bytes
// ============================================================

void FUN_00629000(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong unaff_RDI;
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
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_30;
  char local_28;
  
  FUN_00d50100();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_02709de0;
  if (DAT_02709de0 != 0) {
    FUN_00d50b00();
  }
  lVar2 = DAT_026f6cf0;
  local_1d0 = lVar3;
  local_1c8 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_1c0 = lVar2;
  local_1b8 = '\x01';
  local_1b0 = 0;
  local_1a8 = '\0';
  FUN_000bf690(&local_1c0,&local_1d0,&local_1b0);
  plVar1 = *(longlong **)(unaff_RDI + 0x110);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_006290c9;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x110);
      *(longlong **)(unaff_RDI + 0x110) = local_30;
    }
    else {
      local_28 = '\0';
LAB_006290c9:
      *(longlong **)(unaff_RDI + 0x110) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 == '\0') {
    FUN_00d50b00();
    local_1a0 = DAT_02725770;
    if (DAT_02725770 != 0) {
      FUN_00d50b00();
    }
    lVar3 = DAT_02726c30;
    local_198 = '\x01';
    if (DAT_02726c30 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar3;
    local_188 = '\x01';
    local_180 = 0;
    local_178 = '\0';
    FUN_000bf690(&local_190,&local_1a0,&local_180);
    plVar1 = *(longlong **)(unaff_RDI + 0x118);
    plVar5 = plVar1;
    if (plVar1 != local_30) {
      plVar5 = local_30;
      if (local_28 == '\0') {
        if (local_30 == (longlong *)0x0) {
          plVar5 = (longlong *)0x0;
          goto LAB_00629263;
        }
        FUN_00d50b00();
        plVar1 = *(longlong **)(unaff_RDI + 0x118);
        *(longlong **)(unaff_RDI + 0x118) = local_30;
      }
      else {
        local_28 = '\0';
LAB_00629263:
        *(longlong **)(unaff_RDI + 0x118) = plVar5;
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
        plVar5 = local_30;
      }
    }
    if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
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
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_170 = DAT_02725780;
  if (DAT_02725780 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026fbd00;
  local_168 = '\x01';
  if (DAT_026fbd00 != 0) {
    FUN_00d50b00();
  }
  local_160 = lVar3;
  local_158 = '\x01';
  local_150 = 0;
  local_148 = '\0';
  FUN_000bf690(&local_160,&local_170,&local_150);
  plVar1 = *(longlong **)(unaff_RDI + 0x120);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_006293c6;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x120);
      *(longlong **)(unaff_RDI + 0x120) = local_30;
    }
    else {
      local_28 = '\0';
LAB_006293c6:
      *(longlong **)(unaff_RDI + 0x120) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_140 = DAT_02725790;
  if (DAT_02725790 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6d60;
  local_138 = '\x01';
  if (DAT_026f6d60 != 0) {
    FUN_00d50b00();
  }
  local_130 = lVar3;
  local_128 = '\x01';
  local_120 = 0;
  local_118 = '\0';
  FUN_000bf690(&local_130,&local_140,&local_120);
  plVar1 = *(longlong **)(unaff_RDI + 0x128);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_00629529;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x128);
      *(longlong **)(unaff_RDI + 0x128) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00629529:
      *(longlong **)(unaff_RDI + 0x128) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_110 = DAT_027257a0;
  if (DAT_027257a0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6e70;
  local_108 = '\x01';
  if (DAT_026f6e70 != 0) {
    FUN_00d50b00();
  }
  local_100 = lVar3;
  local_f8 = '\x01';
  local_f0 = 0;
  local_e8 = '\0';
  FUN_000bf690(&local_100,&local_110,&local_f0);
  plVar1 = *(longlong **)(unaff_RDI + 0x138);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_0062968c;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x138);
      *(longlong **)(unaff_RDI + 0x138) = local_30;
    }
    else {
      local_28 = '\0';
LAB_0062968c:
      *(longlong **)(unaff_RDI + 0x138) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_026fe410;
  if (DAT_026fe410 != 0) {
    FUN_00d50b00();
  }
  local_e0 = lVar3;
  local_d8 = '\x01';
  local_d0 = 0;
  local_c8 = '\0';
  FUN_000bf780();
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b00();
  local_c0 = DAT_027257a8;
  if (DAT_027257a8 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027257b0;
  local_b8 = '\x01';
  if (DAT_027257b0 != 0) {
    FUN_00d50b00();
  }
  local_b0 = lVar3;
  local_a8 = '\x01';
  local_a0 = 0;
  local_98 = '\0';
  FUN_000bf690(&local_b0,&local_c0,&local_a0);
  plVar1 = *(longlong **)(unaff_RDI + 0x130);
  plVar5 = plVar1;
  if (plVar1 != local_30) {
    plVar5 = local_30;
    if (local_28 == '\0') {
      if (local_30 == (longlong *)0x0) {
        plVar5 = (longlong *)0x0;
        goto LAB_00629874;
      }
      FUN_00d50b00();
      plVar1 = *(longlong **)(unaff_RDI + 0x130);
      *(longlong **)(unaff_RDI + 0x130) = local_30;
    }
    else {
      local_28 = '\0';
LAB_00629874:
      *(longlong **)(unaff_RDI + 0x130) = plVar5;
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar5 = local_30;
    }
  }
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  *(undefined1 *)(unaff_RDI + 0xa8) = 0;
  FUN_01f27fe0();
  cVar4 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar4 != '\0') {
    *(byte *)(unaff_RDI + 0x150) = DAT_0280b8c8 ^ 1;
    DAT_0280b8c8 = 1;
  }
  *(undefined1 *)(unaff_RDI + 0x179) = 1;
  FUN_00093470();
  plVar1 = *(longlong **)(unaff_RDI + 0x180);
  plVar5 = plVar1;
  if (plVar1 == local_30) goto LAB_006299f1;
  plVar5 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (longlong *)0x0) {
      plVar5 = (longlong *)0x0;
      goto LAB_006299aa;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x180);
    *(longlong **)(unaff_RDI + 0x180) = local_30;
  }
  else {
    local_28 = '\0';
LAB_006299aa:
    *(longlong **)(unaff_RDI + 0x180) = plVar5;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar5 = local_30;
  }
LAB_006299f1:
  if ((local_28 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0062a580 — 941 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x0062a6ee) */
/* WARNING: Removing unreachable block (ram,0x0062a6f7) */

void FUN_0062a580(void)

{
  char cVar1;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong *local_38;
  char local_30;
  
  if (*unaff_RSI != 0) {
    FUN_006e4100();
  }
  FUN_01f27fe0();
  cVar1 = (**(code **)(*local_38 + 0x450))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') goto LAB_0062a718;
  FUN_00631670();
  if (local_30 == '\0') {
    if (local_38 == (longlong *)0x0) goto LAB_0062a718;
    FUN_00d50b00();
    if (*unaff_RSI == 0) goto LAB_0062a68e;
LAB_0062a5fb:
    if (local_38 == (longlong *)0x0) goto LAB_0062a718;
    (**(code **)(*local_38 + 0x5d8))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x5d8))();
      (**(code **)(*local_38 + 0x688))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (*unaff_RSI != 0) goto LAB_0062a5fb;
LAB_0062a68e:
    if (local_38 == (longlong *)0x0) goto LAB_0062a718;
    FUN_006f4810();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (longlong *)0x0) {
      FUN_006f4810();
      (**(code **)(*local_38 + 0x928))();
      if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d50b20();
LAB_0062a718:
  if ((*(longlong *)(unaff_RDI + 0xc0) != 0) && (*unaff_RSI != 0)) {
    FUN_006e22c0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_0009b0b0();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006e2ae0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_0009f2a0();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((*(longlong *)(unaff_RDI + 200) != 0) && (*unaff_RSI != 0)) {
    FUN_006e24f0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_0009b0b0();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_006e2de0();
    if (local_30 == '\0') {
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_30 = '\0';
    }
    FUN_0009f2a0();
    if (local_38 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @0062aee0 — 885 bytes
// ============================================================

void FUN_0062aee0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong unaff_RDI;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  char local_28;
  
  if (*(longlong *)(unaff_RDI + 0x140) != 0) {
    return;
  }
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x778))();
  plVar1 = *(longlong **)(unaff_RDI + 0x140);
  plVar4 = plVar1;
  if (plVar1 == local_30) goto LAB_0062af80;
  plVar4 = local_30;
  if (local_28 == '\0') {
    if (local_30 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_0062af35;
    }
    FUN_00d50b00();
    plVar1 = *(longlong **)(unaff_RDI + 0x140);
    *(longlong **)(unaff_RDI + 0x140) = local_30;
  }
  else {
    local_28 = '\0';
LAB_0062af35:
    *(longlong **)(unaff_RDI + 0x140) = plVar4;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar4 = local_30;
  }
LAB_0062af80:
  if ((local_28 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x140);
  lVar2 = *(longlong *)(unaff_RDI + 0x88);
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x4c8))(DAT_023dccec,DAT_023dccf4);
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_30 + 0x450))();
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar3 == '\0') {
    FUN_00465c80();
  }
  else {
    FUN_004b4d40();
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_40 + 0x450))();
    uVar5 = DAT_02394298;
    if (cVar3 == '\0') {
      uVar5 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_90 + 0x450))();
    uVar6 = DAT_02394298;
    if (cVar3 == '\0') {
      uVar6 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_80 + 0x450))();
    uVar7 = DAT_02394298;
    if (cVar3 == '\0') {
      uVar7 = DAT_02390124;
    }
    FUN_01f27fe0();
    cVar3 = (**(code **)(*local_70 + 0x450))();
    uVar8 = DAT_02394298;
    if (cVar3 == '\0') {
      uVar8 = DAT_02390124;
    }
    auVar11 = insertps(ZEXT416(uVar7),ZEXT416(uVar8),0x10);
    auVar10 = insertps(ZEXT416(uVar5),uVar6,0x10);
    (**(code **)(*local_30 + 0x940))(auVar10._0_8_,auVar11._0_8_);
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (*(char *)(unaff_RDI + 0xa8) == '\0') {
    plVar1 = *(longlong **)(unaff_RDI + 0x88);
    uVar9 = FUN_01e53c20();
    if (local_28 == '\0') {
      if (local_30 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    (**(code **)(*plVar1 + 0x9e8))(uVar9,0);
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00628800 — 522 bytes
// str: ""MDDocumentConversionSheet""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00628916) */
/* WARNING: Removing unreachable block (ram,0x00628927) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00628800(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_28;
  longlong local_20;
  
  if ((DAT_02725fb8 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_02725f08 = FUN_00015ff0();
    _DAT_02725ef0 = "MDDocumentConversionSheet";
    _DAT_02725ef8 = 0x80;
    _DAT_02725f00 = FUN_0065bc20;
    _DAT_02725f10 = 0;
    uRam0000000002725f18 = 0;
    _DAT_02725f20 = 0;
    _DAT_02725f98 = 0;
    uRam0000000002725fa0 = 0;
    _DAT_02725fa8 = 0;
    DAT_02725faa = 2;
    _DAT_02725f28 = 0;
    uRam0000000002725f30 = 0;
    _DAT_02725f38 = 0;
    uRam0000000002725f40 = 0;
    _DAT_02725f48 = 0;
    uRam0000000002725f50 = 0;
    _DAT_02725f58 = 0;
    uRam0000000002725f60 = 0;
    _DAT_02725f68 = 0;
    uRam0000000002725f70 = 0;
    _DAT_02725f78 = 0;
    uRam0000000002725f80 = 0;
    _DAT_02725f88 = 0;
    uRam0000000002725f90 = 0;
    DAT_02725fb3 = 0;
    _DAT_02725fab = 0;
    ___cxa_guard_release();
  }
  if (DAT_02725fab == '\0') {
    FUN_0005a900();
    FUN_00e87760();
    FUN_000161a0();
    FUN_00d50c00();
    FUN_0005aa20();
    FUN_0065bc60();
    FUN_0065bf90();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_00872c10();
    FUN_00e87920(uVar2,0);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
    if (local_28 != 0) {
      FUN_00d50b20();
    }
    FUN_00015ea0();
    FUN_00015ea0();
  }
  return;
}



