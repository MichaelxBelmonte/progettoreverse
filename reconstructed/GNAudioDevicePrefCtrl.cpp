// Reconstructed implementation of GNAudioDevicePrefCtrl
// From MikeCore binary — reverse-engineered pseudocode

#include "GNAudioDevicePrefCtrl.h"

// ============================================================
// @00becd50 — 4742 bytes
// str: ""%I Samples""
// str: ""%I-%I""
// str: ""%@/%@""
// ============================================================

void FUN_00becd50(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined7 uVar10;
  longlong unaff_RDI;
  int iVar11;
  bool bVar12;
  undefined8 unaff_R14;
  char cVar13;
  bool bVar14;
  ulonglong uVar15;
  float fVar16;
  double dVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 *local_1b0;
  longlong *local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  char local_190;
  longlong *local_188;
  char local_180;
  longlong *local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  undefined4 local_124;
  undefined8 *local_120;
  undefined4 local_118;
  int local_114;
  longlong *local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  undefined4 local_94;
  undefined8 local_90;
  longlong *local_88;
  uint local_80;
  int local_7c;
  longlong *local_78;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  char local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  
  FUN_00d6f370();
  plVar6 = local_88;
  if (((char)local_80 == '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_110 = plVar6;
  uVar5 = FUN_00b15f30();
  plVar6 = local_88;
  if (local_88 == (longlong *)0x0) {
    local_e4 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
    plVar6 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if ((char)local_80 == '\0') {
      FUN_00d50b00();
      local_e4 = 0;
      if (((char)local_80 == '\0') || (local_88 == (longlong *)0x0)) goto LAB_00becdfd;
      FUN_00d50b20();
    }
    local_e4 = 0;
  }
LAB_00becdfd:
  local_1a0 = uVar5;
  local_f8 = plVar6;
  FUN_00b160d0();
  local_b8 = local_88;
  if (local_88 == (longlong *)0x0) {
    local_d0 = 1;
    local_b8 = (longlong *)0x0;
    local_f0 = 0;
  }
  else {
    plVar6 = local_88;
    if ((char)local_80 == '\0') {
      uVar5 = FUN_00d50b00();
      if (((char)local_80 == '\0') || (local_88 == (longlong *)0x0)) {
        local_d0 = 0;
        local_f0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        goto LAB_00bece8a;
      }
      plVar6 = (longlong *)FUN_00d50b20();
    }
    local_f0 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    local_d0 = 0;
  }
LAB_00bece8a:
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_90 = 0;
  local_a8 = 0;
  local_58 = 0;
  local_e0 = 0;
  local_c8 = (longlong *)0x0;
  local_b0 = 0;
  local_c0 = (longlong *)0x0;
  FUN_01d6f8d0();
  uVar1 = *(uint *)((longlong)local_f8 + 0xc);
  if ((int)uVar1 < 1) {
    local_b0 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar15 = 0;
    local_c0 = (longlong *)0x0;
    local_b0 = 0;
    plVar9 = local_f8;
    do {
      lVar7 = plVar9[2];
      plVar6 = *(longlong **)(lVar7 + uVar15 * 8);
      if (local_c0 == plVar6) {
        if (((char)local_b0 == '\0') && (local_c0 != (longlong *)0x0)) {
          local_b0 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (plVar6 != (longlong *)0x0) {
          lVar7 = FUN_00d50b00();
        }
        if (((char)local_b0 == '\0') || (local_c0 == (longlong *)0x0)) {
          local_b0 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          local_c0 = plVar6;
        }
        else {
          local_c0 = plVar6;
          uVar5 = FUN_00d50b20();
          local_b0 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        }
      }
      (**(code **)(*local_c0 + 0x5e0))();
      local_108 = local_88;
      local_100 = 0;
      if ((char)local_80 == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = local_80 & 0xffffff00;
      }
      plVar9 = local_f8;
      local_100 = '\x01';
      FUN_01d6f990();
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar15 = uVar15 + 1;
      plVar6 = local_c0;
    } while (uVar1 != uVar15);
  }
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_90 = 0;
  local_a8 = 0;
  local_58 = 0;
  local_e0 = 0;
  local_c8 = (longlong *)0x0;
  local_c0 = plVar6;
  FUN_01d6ed40();
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_90 = 0;
  local_a8 = 0;
  local_58 = 0;
  local_e0 = 0;
  local_c8 = (longlong *)0x0;
  FUN_01d6f8d0();
  (**(code **)(*local_b8 + 0x600))();
  plVar9 = local_88;
  if (local_88 == (longlong *)0x0) {
    local_124 = (undefined4)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    plVar9 = (longlong *)0x0;
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    if ((char)local_80 == '\0') {
      FUN_00d50b00();
      local_124 = 0;
      if (((char)local_80 == '\0') || (local_88 == (longlong *)0x0)) goto LAB_00bed198;
      FUN_00d50b20();
    }
    local_124 = 0;
  }
LAB_00bed198:
  local_e0 = uVar5;
  local_c8 = plVar9;
  if (*(int *)((longlong)plVar9 + 0xc) < 1) {
    bVar12 = false;
    local_40 = (longlong *)0x0;
    local_a8 = 0;
    local_58 = 0;
  }
  else {
    lVar7 = 0;
    local_58 = 0;
    local_a8 = 0;
    local_40 = (longlong *)0x0;
    bVar12 = false;
    do {
      lVar2 = *(longlong *)(plVar9[2] + lVar7 * 8);
      cVar13 = (char)local_a8;
      uVar10 = (undefined7)((ulonglong)local_a8 >> 8);
      if (local_58 == lVar2) {
        uVar5 = local_a8;
        if ((cVar13 == '\0') && (local_58 != 0)) {
          uVar5 = CONCAT71(uVar10,1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        if ((cVar13 == '\0') || (local_58 == 0)) {
          uVar5 = CONCAT71(uVar10,1);
          local_58 = lVar2;
        }
        else {
          local_58 = lVar2;
          FUN_00d50b20();
          uVar5 = CONCAT71(uVar10,1);
        }
      }
      plVar6 = *(longlong **)(unaff_RDI + 0xa8);
      local_a8 = uVar5;
      fVar16 = (float)FUN_00d459e0();
      (**(code **)(*plVar6 + 0x378))(fVar16 / DAT_02393944);
      plVar6 = local_88;
      plVar9 = local_c8;
      if (local_88 == local_40) {
        plVar6 = local_40;
        bVar14 = bVar12;
        if ((bVar12) || (local_88 == (longlong *)0x0)) goto joined_r0x00bed34b;
        bVar14 = true;
        if ((char)local_80 == '\0') {
          FUN_00d50b00();
          goto LAB_00bed337;
        }
      }
      else if ((char)local_80 == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar14 = true;
        if ((bVar12) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_40 = plVar6;
LAB_00bed337:
          plVar6 = local_40;
          bVar14 = true;
        }
joined_r0x00bed34b:
        local_40 = plVar6;
        plVar6 = local_40;
        if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      else {
        bVar14 = true;
        if ((bVar12) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar12 = bVar14;
      local_190 = '\0';
      local_198 = plVar6;
      local_40 = plVar6;
      FUN_01d6f990();
      if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_48 = (longlong *)FUN_00b335d0();
      dVar17 = (double)FUN_00d45bc0();
      param_2 = local_48;
      if (((double)local_48 == dVar17) && (!NAN((double)local_48) && !NAN(dVar17))) {
        FUN_01d6ed40();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)plVar9 + 0xc));
  }
  plVar9 = local_40;
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_90 = 0;
  FUN_01d6f8d0();
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_90 = 0;
  FUN_01d6ed40();
  (**(code **)(*local_b8 + 0x618))();
  plVar6 = local_88;
  if ((char)local_80 == '\0') {
    if (local_88 != (longlong *)0x0) {
      FUN_00d50b00();
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00bed4d6;
    }
  }
  else if (local_88 != (longlong *)0x0) {
LAB_00bed4d6:
    local_80 = local_80 & 0xffffff00;
    local_88 = (longlong *)0x0;
    local_48 = plVar6;
    local_78 = plVar6;
    local_70 = 0xffffffff;
    local_68 = 0;
    local_70._4_4_ = 0;
    while( true ) {
      if (local_70._4_4_ != 0) {
        if (local_70._4_4_ < 1) {
          iVar4 = -local_70._4_4_;
        }
        else {
          iVar4 = (int)local_70 - local_70._4_4_;
          local_70 = CONCAT44(local_70._4_4_,iVar4);
          FUN_00d23690();
          local_68 = local_68 + local_70._4_4_;
          iVar4 = 0;
        }
        local_70 = CONCAT44(iVar4,(int)local_70);
      }
      lVar7 = (longlong)(int)local_70;
      iVar4 = (int)local_70 + 1;
      local_70 = CONCAT44(local_70._4_4_,iVar4);
      if (*(int *)((longlong)local_78 + 0xc) <= iVar4) break;
      local_88 = *(longlong **)(local_78[2] + 8 + lVar7 * 8);
      iVar4 = FUN_00d45870();
      iVar3 = FUN_00d45870();
      if (DAT_02802538 <= iVar3) {
        local_118 = 1;
        local_120 = &DAT_024cc6f0;
        local_114 = iVar4;
        FUN_00d8cb40(extraout_XMM0_Qa,&local_120);
        plVar6 = local_a0;
        if (local_a0 == local_40) {
          plVar6 = local_40;
          bVar14 = bVar12;
          if ((bVar12) || (local_a0 == (longlong *)0x0)) goto joined_r0x00bed655;
          bVar14 = true;
          if ((char)local_98 == '\0') {
            FUN_00d50b00();
            goto LAB_00bed63b;
          }
        }
        else if ((char)local_98 == '\0') {
          if (local_a0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar14 = true;
          if ((bVar12) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
            local_40 = plVar6;
LAB_00bed63b:
            plVar6 = local_40;
            bVar14 = true;
          }
joined_r0x00bed655:
          local_40 = plVar6;
          plVar6 = local_40;
          if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar6 = local_40;
          }
        }
        else {
          bVar14 = true;
          if ((bVar12) && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_180 = '\0';
        local_188 = plVar6;
        local_40 = plVar6;
        FUN_01d6f990();
        if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d70010();
        FUN_01d65490();
        if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        iVar3 = (**(code **)(*local_b8 + 0x6c8))();
        bVar12 = bVar14;
        if (iVar3 == iVar4) {
          FUN_01d6fde0();
          FUN_01d6ed40();
        }
      }
    }
    FUN_00136b80();
    FUN_00d50b20();
    plVar9 = local_40;
  }
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_90 = 0;
  iVar4 = FUN_01d70da0();
  plVar6 = plVar9;
  lVar7 = DAT_027674a0;
  bVar14 = bVar12;
  if (iVar4 == -1) {
    local_94 = (**(code **)(*local_b8 + 0x6c8))();
    local_98 = 1;
    local_a0 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_a0);
    plVar6 = local_88;
    if (local_88 == plVar9) {
      if ((!bVar12) && (local_88 != (longlong *)0x0)) {
        bVar14 = true;
        plVar6 = plVar9;
        if ((char)local_80 != '\0') goto LAB_00bed872;
        bVar12 = true;
        FUN_00d50b00();
      }
LAB_00bed85e:
      plVar6 = plVar9;
      bVar14 = bVar12;
joined_r0x00bed862:
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_80 == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar14 = true;
        if ((bVar12) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar6;
          bVar12 = true;
          goto LAB_00bed85e;
        }
        goto joined_r0x00bed862;
      }
      bVar14 = true;
      if ((bVar12) && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_00bed872:
    local_170 = '\0';
    local_178 = plVar6;
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x968))();
    lVar7 = DAT_027674a0;
    if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
      FUN_00d50b20();
      lVar7 = DAT_027674a0;
    }
  }
  DAT_027674a0 = lVar7;
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_b8 + 0x5e0))();
  local_1b0 = local_120;
  uVar5 = FUN_00083ea0(2,&local_1b0);
  uVar8 = FUN_00d8cb40(uVar5,&local_88);
  local_50 = local_a0;
  uVar5 = extraout_XMM0_Qa_00;
  if (local_a0 == (longlong *)0x0) {
    local_cc = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    uVar8 = 0;
  }
  else {
    if ((char)local_98 == '\0') {
      uVar5 = FUN_00d50b00();
      if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
    }
    else {
      local_98 = local_98 & 0xffffff00;
    }
    uVar8 = 1;
    local_cc = 0;
  }
  if ((local_60 != '\0') &&
     (local_88 = (longlong *)&DAT_0253d630, CONCAT44(uStack_64,local_68) != 0)) {
    uVar5 = FUN_00d50b20();
  }
  local_88 = &DAT_024c5048;
  if (((char)local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if (((char)local_118 != '\0') && (local_120 != (undefined8 *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  if (lVar7 != 0) {
    uVar5 = FUN_00d50b20();
  }
  local_168 = local_50;
  local_160 = '\0';
  (**(code **)(*local_110 + 0x88))(uVar5,&local_168);
  plVar9 = local_88;
  local_1a8 = local_88;
  if (local_88 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
    uVar5 = 0;
joined_r0x00beda65:
    if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    uVar10 = (undefined7)((ulonglong)local_88 >> 8);
    if ((char)local_80 == '\0') {
      FUN_00d50b00();
      uVar5 = CONCAT71(uVar10,1);
      local_48 = plVar9;
      goto joined_r0x00beda65;
    }
    local_80 = local_80 & 0xffffff00;
    uVar5 = CONCAT71(uVar10,1);
    local_48 = local_88;
  }
  if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_90 = uVar5;
  if (*(longlong *)(unaff_RDI + 0x88) == 0) goto LAB_00bede8f;
  FUN_01d6ed40();
  FUN_01d6f8d0();
  iVar4 = (**(code **)(*local_b8 + 0x668))();
  uVar5 = extraout_XMM0_Qa_01;
  local_d8 = uVar8;
  local_40 = plVar6;
  if (1 < iVar4) {
    iVar3 = 1;
    do {
      local_80 = 2;
      local_88 = (longlong *)&DAT_024c3df0;
      local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar3 + 1);
      local_7c = iVar3;
      FUN_00d8cb40(&DAT_024c3df0,&local_88);
      plVar6 = local_a0;
      if (local_a0 == local_40) {
        plVar6 = local_40;
        bVar12 = bVar14;
        if ((bVar14) || (local_a0 == (longlong *)0x0)) goto joined_r0x00bedca1;
        bVar12 = true;
        if ((char)local_98 == '\0') {
          FUN_00d50b00();
          goto LAB_00bedc87;
        }
      }
      else if ((char)local_98 == '\0') {
        if (local_a0 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = true;
        if ((bVar14) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          local_40 = plVar6;
LAB_00bedc87:
          plVar6 = local_40;
          bVar12 = true;
        }
joined_r0x00bedca1:
        local_40 = plVar6;
        plVar6 = local_40;
        if (((char)local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar6 = local_40;
        }
      }
      else {
        bVar12 = true;
        if ((bVar14) && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar14 = bVar12;
      local_150 = '\0';
      local_158 = plVar6;
      local_40 = plVar6;
      uVar5 = FUN_01d6f990();
      if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
        uVar5 = FUN_00d50b20();
      }
      iVar11 = iVar3 + 3;
      iVar3 = iVar3 + 2;
    } while (iVar11 <= iVar4);
  }
  plVar9 = local_40;
  lVar7 = DAT_027674a8;
  plVar6 = local_40;
  if (local_48 != (longlong *)0x0) {
    if (DAT_027674a8 != 0) {
      uVar5 = FUN_00d50b00();
    }
    local_148 = lVar7;
    local_140 = '\x01';
    FUN_000175c0(uVar5,&local_148);
    plVar6 = local_88;
    if (local_88 == plVar9) {
      plVar6 = plVar9;
      bVar12 = bVar14;
      if ((!bVar14) && (local_88 != (longlong *)0x0)) {
        if ((char)local_80 != '\0') goto LAB_00bedd6a;
        FUN_00d50b00();
        bVar12 = true;
      }
LAB_00beddf7:
      bVar14 = bVar12;
      if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((char)local_80 == '\0') {
        if (local_88 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar12 = true;
        if ((bVar14) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00beddf7;
      }
      if ((bVar14) && (plVar9 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_00bedd6a:
      local_80 = local_80 & 0xffffff00;
      bVar14 = true;
    }
    if ((local_140 != '\0') && (local_148 != 0)) {
      FUN_00d50b20();
    }
    if (plVar6 != (longlong *)0x0) {
      local_130 = '\0';
      local_138 = plVar6;
      (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x968))();
      if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00bede8f;
    }
    plVar6 = (longlong *)0x0;
  }
  FUN_01d6ed40();
LAB_00bede8f:
  plVar9 = *(longlong **)(unaff_RDI + 0x90);
  FUN_00b1be20();
  (**(code **)(*plVar9 + 0x918))();
  if (*(longlong *)(unaff_RDI + 0x98) != 0) {
    FUN_01e40eb0();
    plVar9 = local_88;
    if (((char)local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RDI + 0x98) + 0x478))();
      plVar9 = *(longlong **)(unaff_RDI + 0x70);
      (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x4d8))();
      (**(code **)(*plVar9 + 0x4e8))(param_2);
    }
  }
  if (*(longlong **)(unaff_RDI + 0x78) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x78) + 0x998))();
  }
  if (*(longlong **)(unaff_RDI + 0x80) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x80) + 0x998))();
  }
  if (*(longlong **)(unaff_RDI + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(unaff_RDI + 0x88) + 0x998))();
  }
  if (local_110 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = local_50;
  if ((local_1a8 != (longlong *)0x0) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_cc == '\0' && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar9 = local_f8;
  if ((bVar14) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar6 = local_c0;
  if (((char)local_a8 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_124 == '\0' && local_c8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_e4 == '\0' && plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((char)local_d0 == '\0' && local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_b0 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00bebd90 — 2594 bytes
// str: ""GNAudioDevicePrefCtrl""
// str: ""handleSelectDevice""
// str: ""handleSampleRateChanged""
// str: ""handleBufferSizeChanged""
// str: ""handleOutputChanged""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bebd90(void)

{
  int iVar1;
  
  if (DAT_028a57f0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02754fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a6d8 = FUN_00015ff0();
          _DAT_0272a6c0 = "GNAudioDevicePrefCtrl";
          _DAT_0272a6c8 = 0xb0;
          _DAT_0272a6d0 = FUN_007a8400;
          _DAT_0272a6e0 = 0;
          uRam000000000272a6e8 = 0;
          _DAT_0272a6f0 = 0;
          _DAT_0272a768 = 0;
          uRam000000000272a770 = 0;
          _DAT_0272a778 = 0;
          DAT_0272a77a = 1;
          _DAT_0272a6f8 = 0;
          uRam000000000272a700 = 0;
          _DAT_0272a708 = 0;
          uRam000000000272a710 = 0;
          _DAT_0272a718 = 0;
          uRam000000000272a720 = 0;
          _DAT_0272a728 = 0;
          uRam000000000272a730 = 0;
          _DAT_0272a738 = 0;
          uRam000000000272a740 = 0;
          _DAT_0272a748 = 0;
          uRam000000000272a750 = 0;
          _DAT_0272a758 = 0;
          uRam000000000272a760 = 0;
          DAT_0272a783 = 0;
          _DAT_0272a77b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a57b0 = "handleSelectDevice";
      _DAT_028a57b8 = &DAT_0272a6c0;
      _DAT_028a57c0 = 0;
      _DAT_028a57c8 = &DAT_027674b8;
      _DAT_028a57d0 = FUN_00befc90;
      _DAT_028a57d8 = FUN_00beead0;
      _DAT_028a57e0 = 0;
      uRam00000000028a57e8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a5838 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02754fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a6d8 = FUN_00015ff0();
          _DAT_0272a6c0 = "GNAudioDevicePrefCtrl";
          _DAT_0272a6c8 = 0xb0;
          _DAT_0272a6d0 = FUN_007a8400;
          _DAT_0272a6e0 = 0;
          uRam000000000272a6e8 = 0;
          _DAT_0272a6f0 = 0;
          _DAT_0272a768 = 0;
          uRam000000000272a770 = 0;
          _DAT_0272a778 = 0;
          DAT_0272a77a = 1;
          _DAT_0272a6f8 = 0;
          uRam000000000272a700 = 0;
          _DAT_0272a708 = 0;
          uRam000000000272a710 = 0;
          _DAT_0272a718 = 0;
          uRam000000000272a720 = 0;
          _DAT_0272a728 = 0;
          uRam000000000272a730 = 0;
          _DAT_0272a738 = 0;
          uRam000000000272a740 = 0;
          _DAT_0272a748 = 0;
          uRam000000000272a750 = 0;
          _DAT_0272a758 = 0;
          uRam000000000272a760 = 0;
          DAT_0272a783 = 0;
          _DAT_0272a77b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a57f8 = "handleSampleRateChanged";
      _DAT_028a5800 = &DAT_0272a6c0;
      _DAT_028a5808 = 0;
      _DAT_028a5810 = &DAT_027674b8;
      _DAT_028a5818 = FUN_00befc90;
      _DAT_028a5820 = FUN_00beebc0;
      _DAT_028a5828 = 0;
      uRam00000000028a5830 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a5880 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02754fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a6d8 = FUN_00015ff0();
          _DAT_0272a6c0 = "GNAudioDevicePrefCtrl";
          _DAT_0272a6c8 = 0xb0;
          _DAT_0272a6d0 = FUN_007a8400;
          _DAT_0272a6e0 = 0;
          uRam000000000272a6e8 = 0;
          _DAT_0272a6f0 = 0;
          _DAT_0272a768 = 0;
          uRam000000000272a770 = 0;
          _DAT_0272a778 = 0;
          DAT_0272a77a = 1;
          _DAT_0272a6f8 = 0;
          uRam000000000272a700 = 0;
          _DAT_0272a708 = 0;
          uRam000000000272a710 = 0;
          _DAT_0272a718 = 0;
          uRam000000000272a720 = 0;
          _DAT_0272a728 = 0;
          uRam000000000272a730 = 0;
          _DAT_0272a738 = 0;
          uRam000000000272a740 = 0;
          _DAT_0272a748 = 0;
          uRam000000000272a750 = 0;
          _DAT_0272a758 = 0;
          uRam000000000272a760 = 0;
          DAT_0272a783 = 0;
          _DAT_0272a77b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5840 = "handleBufferSizeChanged";
      _DAT_028a5848 = &DAT_0272a6c0;
      _DAT_028a5850 = 0;
      _DAT_028a5858 = &DAT_027674b8;
      _DAT_028a5860 = FUN_00befc90;
      _DAT_028a5868 = FUN_00beedb0;
      _DAT_028a5870 = 0;
      uRam00000000028a5878 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a58c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02754fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a6d8 = FUN_00015ff0();
          _DAT_0272a6c0 = "GNAudioDevicePrefCtrl";
          _DAT_0272a6c8 = 0xb0;
          _DAT_0272a6d0 = FUN_007a8400;
          _DAT_0272a6e0 = 0;
          uRam000000000272a6e8 = 0;
          _DAT_0272a6f0 = 0;
          _DAT_0272a768 = 0;
          uRam000000000272a770 = 0;
          _DAT_0272a778 = 0;
          DAT_0272a77a = 1;
          _DAT_0272a6f8 = 0;
          uRam000000000272a700 = 0;
          _DAT_0272a708 = 0;
          uRam000000000272a710 = 0;
          _DAT_0272a718 = 0;
          uRam000000000272a720 = 0;
          _DAT_0272a728 = 0;
          uRam000000000272a730 = 0;
          _DAT_0272a738 = 0;
          uRam000000000272a740 = 0;
          _DAT_0272a748 = 0;
          uRam000000000272a750 = 0;
          _DAT_0272a758 = 0;
          uRam000000000272a760 = 0;
          DAT_0272a783 = 0;
          _DAT_0272a77b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5888 = "handleOutputChanged";
      _DAT_028a5890 = &DAT_0272a6c0;
      _DAT_028a5898 = 0;
      _DAT_028a58a0 = &DAT_027674b8;
      _DAT_028a58a8 = FUN_00befc90;
      _DAT_028a58b0 = FUN_00bef0a0;
      _DAT_028a58b8 = 0;
      uRam00000000028a58c0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a5910 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02754fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a6d8 = FUN_00015ff0();
          _DAT_0272a6c0 = "GNAudioDevicePrefCtrl";
          _DAT_0272a6c8 = 0xb0;
          _DAT_0272a6d0 = FUN_007a8400;
          _DAT_0272a6e0 = 0;
          uRam000000000272a6e8 = 0;
          _DAT_0272a6f0 = 0;
          _DAT_0272a768 = 0;
          uRam000000000272a770 = 0;
          _DAT_0272a778 = 0;
          DAT_0272a77a = 1;
          _DAT_0272a6f8 = 0;
          uRam000000000272a700 = 0;
          _DAT_0272a708 = 0;
          uRam000000000272a710 = 0;
          _DAT_0272a718 = 0;
          uRam000000000272a720 = 0;
          _DAT_0272a728 = 0;
          uRam000000000272a730 = 0;
          _DAT_0272a738 = 0;
          uRam000000000272a740 = 0;
          _DAT_0272a748 = 0;
          uRam000000000272a750 = 0;
          _DAT_0272a758 = 0;
          uRam000000000272a760 = 0;
          DAT_0272a783 = 0;
          _DAT_0272a77b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a58d0 = "handleBufferUnderrunsChanged";
      _DAT_028a58d8 = &DAT_0272a6c0;
      _DAT_028a58e0 = 0;
      _DAT_028a58e8 = &DAT_027674b8;
      _DAT_028a58f0 = FUN_00befc90;
      _DAT_028a58f8 = FUN_00bef8d0;
      _DAT_028a5900 = 0;
      uRam00000000028a5908 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a5958 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02754fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a6d8 = FUN_00015ff0();
          _DAT_0272a6c0 = "GNAudioDevicePrefCtrl";
          _DAT_0272a6c8 = 0xb0;
          _DAT_0272a6d0 = FUN_007a8400;
          _DAT_0272a6e0 = 0;
          uRam000000000272a6e8 = 0;
          _DAT_0272a6f0 = 0;
          _DAT_0272a768 = 0;
          uRam000000000272a770 = 0;
          _DAT_0272a778 = 0;
          DAT_0272a77a = 1;
          _DAT_0272a6f8 = 0;
          uRam000000000272a700 = 0;
          _DAT_0272a708 = 0;
          uRam000000000272a710 = 0;
          _DAT_0272a718 = 0;
          uRam000000000272a720 = 0;
          _DAT_0272a728 = 0;
          uRam000000000272a730 = 0;
          _DAT_0272a738 = 0;
          uRam000000000272a740 = 0;
          _DAT_0272a748 = 0;
          uRam000000000272a750 = 0;
          _DAT_0272a758 = 0;
          uRam000000000272a760 = 0;
          DAT_0272a783 = 0;
          _DAT_0272a77b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5918 = "handleShowASIOControlPanel";
      _DAT_028a5920 = &DAT_0272a6c0;
      _DAT_028a5928 = 0;
      _DAT_028a5930 = &DAT_027674b8;
      _DAT_028a5938 = FUN_00befc90;
      _DAT_028a5940 = FUN_00beeac0;
      _DAT_028a5948 = 0;
      uRam00000000028a5950 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028a59a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02754fc0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_0272a6d8 = FUN_00015ff0();
          _DAT_0272a6c0 = "GNAudioDevicePrefCtrl";
          _DAT_0272a6c8 = 0xb0;
          _DAT_0272a6d0 = FUN_007a8400;
          _DAT_0272a6e0 = 0;
          uRam000000000272a6e8 = 0;
          _DAT_0272a6f0 = 0;
          _DAT_0272a768 = 0;
          uRam000000000272a770 = 0;
          _DAT_0272a778 = 0;
          DAT_0272a77a = 1;
          _DAT_0272a6f8 = 0;
          uRam000000000272a700 = 0;
          _DAT_0272a708 = 0;
          uRam000000000272a710 = 0;
          _DAT_0272a718 = 0;
          uRam000000000272a720 = 0;
          _DAT_0272a728 = 0;
          uRam000000000272a730 = 0;
          _DAT_0272a738 = 0;
          uRam000000000272a740 = 0;
          _DAT_0272a748 = 0;
          uRam000000000272a750 = 0;
          _DAT_0272a758 = 0;
          uRam000000000272a760 = 0;
          DAT_0272a783 = 0;
          _DAT_0272a77b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028a5960 = "handleOpenSystemPreferences";
      _DAT_028a5968 = &DAT_0272a6c0;
      _DAT_028a5970 = 0;
      _DAT_028a5978 = &DAT_027674b8;
      _DAT_028a5980 = FUN_00befc90;
      _DAT_028a5988 = FUN_00befb00;
      _DAT_028a5990 = 0;
      uRam00000000028a5998 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



