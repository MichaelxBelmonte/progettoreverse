// Reconstructed implementation of GNUIDesignerDoc
// From MikeCore binary — reverse-engineered pseudocode

#include "GNUIDesignerDoc.h"

// ============================================================
// @01e2b0c0 — 4000 bytes
// str: ""GNUIDesignerDoc""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_01e2b0c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  uint uVar10;
  longlong lVar11;
  longlong **pplVar12;
  bool bVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  longlong local_1f0;
  undefined1 local_1e8;
  longlong *local_1e0;
  undefined1 local_1d8;
  longlong local_1d0;
  undefined1 local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong *local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong *local_70;
  char local_68;
  undefined7 uStack_67;
  char local_60;
  char local_58 [8];
  undefined8 local_50;
  longlong *local_40;
  char local_38 [8];
  
  local_80 = param_2;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  local_88 = puVar4;
  (*DAT_02572370)();
  lVar11 = *unaff_RSI;
  lVar1 = *(longlong *)(unaff_RDI + 0x40);
  if (lVar1 != lVar11) {
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x40) = lVar11;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3f0))();
  local_a8 = local_40;
  plVar5 = local_40;
  if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
      (FUN_00d50b00(), plVar5 = local_a8, local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_38[0] = '\0';
  local_40 = plVar5;
  FUN_00d21140();
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_a8 + 0x368))();
  local_198 = DAT_027f3820;
  if (DAT_027f3820 != 0) {
    FUN_00d50b00();
  }
  local_190 = '\x01';
  cVar2 = FUN_00d8f400();
  uVar14 = extraout_XMM0_Da;
  if ((local_190 != '\0') && (local_198 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    (**(code **)(*local_a8 + 0x3f0))();
    plVar5 = (longlong *)CONCAT71(uStack_67,local_68);
    if (local_60 == '\0') {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_60 = '\0';
    }
    local_38[0] = '\0';
    local_40 = plVar5;
    uVar14 = FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      uVar14 = FUN_00d50b20();
    }
    if (plVar5 != (longlong *)0x0) {
      uVar14 = FUN_00d50b20();
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      uVar14 = FUN_00d50b20();
    }
  }
  uVar10 = *(uint *)((longlong)local_88 + 0xc);
  if (0 < (int)uVar10) {
    lVar11 = (ulonglong)uVar10 + 1;
    do {
      uVar10 = uVar10 - 1;
      FUN_01f27fe0();
      lVar1 = *(longlong *)(local_88[2] + (ulonglong)uVar10 * 8);
      local_110 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_110 = '\x01';
      local_118 = lVar1;
      uVar14 = FUN_01f42b10();
      if ((local_110 != '\0') && (local_118 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
      lVar11 = lVar11 + -1;
    } while (1 < lVar11);
  }
  plVar5 = (longlong *)*local_80;
  plVar6 = *(longlong **)(unaff_RDI + 0x28);
  if (plVar6 != plVar5) {
    if (plVar5 != (longlong *)0x0) {
      uVar14 = FUN_00d50b00();
    }
    *(longlong **)(unaff_RDI + 0x28) = plVar5;
    if (plVar6 != (longlong *)0x0) {
      uVar14 = FUN_00d50b20();
    }
  }
  if (DAT_028b95b0 == 0) {
LAB_01e2b3fe:
    local_188 = *unaff_RSI;
    local_180 = '\0';
    uVar14 = FUN_00d17c40();
    local_70 = local_40;
    if (local_40 == (longlong *)0x0) {
      local_70 = (longlong *)0x0;
      local_a0 = 0;
    }
    else if (local_38[0] == '\0') {
      uVar8 = FUN_00d50b00();
      local_a0 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      uVar14 = extraout_XMM0_Da_00;
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        uVar14 = FUN_00d50b20();
      }
    }
    else {
      local_38[0] = '\0';
      local_a0 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    }
    if ((local_180 != '\0') && (local_188 != 0)) {
      uVar14 = FUN_00d50b20();
    }
    if (DAT_028b95b0 != 0) {
      local_1e0 = local_70;
      local_1d8 = 0;
      local_1d0 = *unaff_RSI;
      local_1c8 = 0;
      FUN_01e29660(uVar14,&local_1d0);
    }
    if (local_70 == (longlong *)0x0) {
      plVar6 = (longlong *)FUN_00e8fc40();
      FUN_000649c0();
      uVar14 = (**(code **)(*plVar6 + 0x18))();
      local_178 = *unaff_RSI;
      local_170 = '\0';
      uVar14 = (**(code **)(*plVar6 + 0x610))(uVar14,&local_178);
      local_70 = local_40;
      if (local_40 == (longlong *)0x0) {
        local_70 = (longlong *)0x0;
joined_r0x01e2b561:
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
      }
      else {
        if (local_38[0] == '\0') {
          uVar8 = FUN_00d50b00();
          local_a0 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
          uVar14 = extraout_XMM0_Da_01;
          goto joined_r0x01e2b561;
        }
        local_38[0] = '\0';
        local_a0 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
      }
      if ((local_170 != '\0') && (local_178 != 0)) {
        uVar14 = FUN_00d50b20();
      }
      if (DAT_028b95b0 != 0) {
        local_1c0 = local_70;
        local_1b8 = 0;
        local_1b0 = *unaff_RSI;
        local_1a8 = 0;
        FUN_01e29660(uVar14,&local_1b0);
      }
      FUN_00d50b20();
    }
  }
  else {
    local_1f0 = *unaff_RSI;
    local_1e8 = 0;
    FUN_01e29580(uVar14,&local_1f0);
    local_70 = local_40;
    if (local_40 == (longlong *)0x0) goto LAB_01e2b3fe;
    plVar5 = local_40;
    if (local_38[0] == '\0') {
      plVar5 = (longlong *)FUN_00d50b00();
    }
    local_a0 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
  }
  uVar10 = (uint)plVar6;
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_0004b090();
  (**(code **)(*plVar5 + 0x18))();
  local_80 = plVar5;
  FUN_00d1fc80();
  local_100 = 0;
  (**(code **)(*(longlong *)(unaff_RDI + 0x10) + 0x10))();
  FUN_00d50b00();
  local_100 = '\x01';
  local_108 = (longlong *)(unaff_RDI + 0x10);
  FUN_00d1fc70();
  if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
    (**(code **)(*local_108 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x5e0))();
  uVar14 = FUN_00d46300();
  local_d0 = local_98;
  local_c8 = 0;
  plVar5 = DAT_027f3828;
  if (local_90 == '\0') {
    if (local_98 != 0) {
      uVar14 = FUN_00d50b00();
      plVar5 = DAT_027f3828;
    }
  }
  else {
    local_90 = '\0';
  }
  local_c8 = '\x01';
  DAT_027f3828 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    local_c8 = '\x01';
    uVar14 = FUN_00d50b00();
  }
  local_38[0] = '\0';
  local_40 = plVar5;
  FUN_00ca0840(uVar14,&local_40);
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_80 + 0x5e0))();
  local_f0 = 0;
  uVar14 = FUN_00d50b00();
  plVar5 = DAT_027f3830;
  local_f0 = '\x01';
  local_f8 = unaff_RDI;
  if (DAT_027f3830 != (longlong *)0x0) {
    uVar14 = FUN_00d50b00();
  }
  local_40 = plVar5;
  local_38[0] = '\0';
  uVar14 = FUN_00ca0840(uVar14,&local_40);
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    uVar14 = FUN_00d50b20();
  }
  if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
    uVar14 = FUN_00d50b20();
  }
  local_168 = local_70;
  local_160 = '\0';
  pplVar12 = &local_40;
  FUN_00d18390(uVar14,&local_168);
  plVar5 = local_40;
  if ((DAT_026f4460 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026f43b0 = FUN_00d4fe50();
    _DAT_026f4398 = "GNUIDesignerDoc";
    _DAT_026f43a0 = 0x60;
    _DAT_026f43a8 = FUN_00205ef0;
    _DAT_026f43b8 = 0;
    uRam00000000026f43c0 = 0;
    _DAT_026f43c8 = 0;
    uRam00000000026f43d0 = 0;
    _DAT_026f43d8 = 0;
    uRam00000000026f43e0 = 0;
    _DAT_026f43e8 = 0;
    uRam00000000026f43f0 = 0;
    _DAT_026f43f8 = 0;
    uRam00000000026f4400 = 0;
    _DAT_026f4408 = 0;
    uRam00000000026f4410 = 0;
    _DAT_026f4418 = 0;
    uRam00000000026f4420 = 0;
    _DAT_026f4428 = 0;
    uRam00000000026f4430 = 0;
    _DAT_026f4438 = 0;
    uRam00000000026f4440 = 0;
    _DAT_026f4448 = 0;
    uRam00000000026f4450 = 0;
    _DAT_026f4458 = 0;
    ___cxa_guard_release();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_01e2b8a7:
    pplVar12 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar5 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01e2b8a7;
  }
  plVar6 = *(longlong **)(unaff_RDI + 0x18);
  plVar5 = *pplVar12;
  if (plVar6 != plVar5) {
    if (*(char *)(pplVar12 + 1) == '\0') {
      if (plVar5 == (longlong *)0x0) {
        *(undefined8 *)(unaff_RDI + 0x18) = 0;
      }
      else {
        FUN_00d50b00();
        plVar6 = *(longlong **)(unaff_RDI + 0x18);
        *(longlong **)(unaff_RDI + 0x18) = *pplVar12;
      }
    }
    else {
      *(undefined1 *)(pplVar12 + 1) = 0;
      *(longlong **)(unaff_RDI + 0x18) = plVar5;
    }
    if (plVar6 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    FUN_01e2ce50();
    FUN_00d1fc90();
    plVar5 = local_40;
    if ((((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) &&
        (FUN_00d50b00(), local_38[0] != '\0')) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar10 = *(uint *)((longlong)plVar5 + 0xc);
    if (0 < (int)uVar10) {
      uVar9 = 0;
      do {
        local_158 = local_80;
        local_150 = '\0';
        (**(code **)(**(longlong **)(plVar5[2] + uVar9 * 8) + 0x138))();
        if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
    }
    FUN_00d50b20();
  }
  if (((DAT_028b95c0 != '\0') || (*(longlong *)(unaff_RDI + 0x18) == 0)) ||
     (lVar11 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x18), lVar11 == 0)) {
    local_50 = 0;
    plVar5 = (longlong *)0x0;
    goto LAB_01e2baac;
  }
  FUN_00d50b00();
  local_d8 = lVar11;
  FUN_00d30620();
  plVar5 = local_40;
  if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (longlong *)0x0) {
LAB_01e2bfb0:
    plVar5 = (longlong *)0x0;
    local_50 = 0;
  }
  else {
    FUN_00d30620();
    local_c0 = local_40;
    local_b8 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_b8 = '\x01';
    FUN_00e41520();
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d2fd00();
    if (CONCAT71(uStack_67,local_68) == 0) {
      bVar13 = false;
    }
    else {
      FUN_00d2fd00();
      if (*(int *)(local_98 + 0xc) < 2) {
        bVar13 = false;
      }
      else if (*(longlong *)(unaff_RDI + 0x28) == 0) {
        bVar13 = false;
      }
      else {
        FUN_00ca1380();
        plVar5 = local_40;
        pcVar7 = local_58;
        if (local_38[0] != '\0') {
          pcVar7 = local_38;
        }
        local_58[0] = local_38[0];
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar10 = *(uint *)((longlong)plVar5 + 0xc);
        bVar13 = 0 < (int)uVar10;
        if ((local_58[0] != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
      FUN_00d50b20();
    }
    lVar11 = DAT_027f3838;
    if (!bVar13) goto LAB_01e2bfb0;
    if (DAT_027f3838 != 0) {
      FUN_00d50b00();
    }
    local_b0 = lVar11;
    if ((int)uVar10 < 1) {
      local_50 = 0;
      plVar5 = (longlong *)0x0;
    }
    else {
      local_1a0 = (ulonglong)uVar10;
      uVar9 = 0;
      plVar5 = (longlong *)0x0;
      local_50 = 0;
      do {
        FUN_00ca1380();
        plVar6 = local_40;
        local_68 = local_38[0];
        pcVar7 = local_38;
        if (local_38[0] == '\0') {
          pcVar7 = &local_68;
        }
        *pcVar7 = '\0';
        if ((local_38[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        lVar11 = plVar6[2];
        plVar6 = *(longlong **)(lVar11 + uVar9 * 8);
        if (plVar5 == plVar6) {
          if (((char)local_50 == '\0') && (plVar5 != (longlong *)0x0)) {
            local_50 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (plVar6 != (longlong *)0x0) {
            lVar11 = FUN_00d50b00();
          }
          if (((char)local_50 == '\0') || (plVar5 == (longlong *)0x0)) {
            local_50 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
            plVar5 = plVar6;
          }
          else {
            uVar8 = FUN_00d50b20();
            local_50 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
            plVar5 = plVar6;
          }
        }
        if (local_68 != '\0') {
          FUN_00d50b20();
        }
        uVar14 = FUN_00d4efa0();
        if (local_40 == (longlong *)0x0) {
          bVar13 = false;
        }
        else {
          uVar14 = FUN_00d4efa0();
          local_148 = local_b0;
          local_140 = '\0';
          uVar14 = FUN_00c841b0(uVar14,&local_148);
          bVar13 = CONCAT71(uStack_67,local_68) != 0;
          if ((local_60 != '\0') && (CONCAT71(uStack_67,local_68) != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            uVar14 = FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            uVar14 = FUN_00d50b20();
          }
        }
        if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
          uVar14 = FUN_00d50b20();
        }
        if (bVar13) {
          local_138 = local_d8;
          local_130 = '\0';
          local_128 = local_b0;
          local_120 = '\0';
          (**(code **)(*plVar5 + 0x80))(uVar14,&local_128);
          if ((local_120 != '\0') && (local_128 != 0)) {
            FUN_00d50b20();
          }
          if ((local_130 != '\0') && (local_138 != 0)) {
            FUN_00d50b20();
          }
          FUN_00e41d40();
        }
        uVar9 = uVar9 + 1;
      } while (local_1a0 != uVar9);
    }
    if (local_b0 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01e2baac:
  uVar10 = *(uint *)((longlong)local_88 + 0xc);
  if (0 < (int)uVar10) {
    lVar11 = (ulonglong)uVar10 + 1;
    do {
      uVar10 = uVar10 - 1;
      FUN_01f27fe0();
      lVar1 = *(longlong *)(local_88[2] + (ulonglong)uVar10 * 8);
      local_e0 = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_e0 = '\x01';
      local_e8 = lVar1;
      FUN_01f42b80();
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar11 = lVar11 + -1;
    } while (1 < lVar11);
  }
  lVar11 = *(longlong *)(unaff_RDI + 0x18);
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_a0 != '\0') && (local_70 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (plVar5 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return lVar11 != 0;
}




// ============================================================
// @01e2a220 — 1275 bytes
// str: ""%@.gnui""
// ============================================================

void FUN_01e2a220(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  undefined7 extraout_var;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  undefined7 uVar11;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar12;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined4 local_94;
  longlong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  uint local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  ulonglong local_38;
  
  lVar1 = DAT_027f3810;
  local_e8 = *unaff_RSI;
  if ((local_e8 == 0) || (plVar8 = (longlong *)*param_2, plVar8 == (longlong *)0x0))
  goto LAB_01e2a6dd;
  local_e0 = '\0';
  if (DAT_027f3810 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  uVar4 = (**(code **)(*plVar8 + 0x4f0))(&local_d8,&local_e8);
  plVar8 = local_60;
  if (local_60 == (longlong *)0x0) {
    uVar6 = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    plVar8 = (longlong *)0x0;
    local_38 = 0;
  }
  else {
    if ((char)local_58 == '\0') {
      uVar4 = FUN_00d50b00();
      uVar6 = 0;
      local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      if (((char)local_58 == '\0') || (local_60 == (longlong *)0x0)) goto LAB_01e2a2f9;
      uVar4 = FUN_00d50b20();
    }
    else {
      local_58 = local_58 & 0xffffff00;
    }
    local_38 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    uVar6 = 0;
  }
LAB_01e2a2f9:
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if ((plVar8 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar8 + 0x398))(), cVar2 == '\0')) {
    plVar9 = (longlong *)*param_2;
    lVar1 = *unaff_RSI;
    local_58 = 1;
    local_60 = &DAT_024c5048;
    local_48 = 0;
    local_94 = uVar6;
    local_40 = plVar8;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    local_48 = '\x01';
    local_50 = lVar1;
    FUN_00d8cb40();
    local_70 = local_90;
    local_68 = 0;
    if (local_88 == '\0') {
      if (local_90 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_88 = '\0';
    }
    plVar7 = local_40;
    local_68 = '\x01';
    local_c0 = '\0';
    local_c8 = 0;
    uVar4 = (**(code **)(*plVar9 + 0x4f0))(&local_c8,&local_70);
    plVar8 = local_80;
    uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
    uVar11 = (undefined7)((ulonglong)plVar9 >> 8);
    if (local_80 == plVar7) {
      plVar8 = plVar7;
      if (((byte)local_94 & local_80 != (longlong *)0x0) == 1) {
        if (local_78 != '\0') goto LAB_01e2a469;
        plVar9 = (longlong *)CONCAT71(uVar11,1);
        FUN_00d50b00();
      }
      else {
        plVar9 = (longlong *)(local_38 & 0xffffffff);
      }
LAB_01e2a4cb:
      plVar7 = plVar8;
      if ((local_78 == '\0') || (local_80 == (longlong *)0x0)) {
        local_38 = (ulonglong)plVar9 & 0xffffffff;
      }
      else {
        FUN_00d50b20();
        local_38 = (ulonglong)plVar9 & 0xffffffff;
      }
    }
    else {
      if (local_78 == '\0') {
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar9 = (longlong *)CONCAT71(uVar11,1);
        if (((byte)local_38 & plVar7 != (longlong *)0x0) == 1) {
          FUN_00d50b20();
        }
        goto LAB_01e2a4cb;
      }
      bVar12 = plVar7 != (longlong *)0x0;
      plVar7 = local_80;
      if (((byte)local_38 & bVar12) == 1) {
        FUN_00d50b20();
        uVar5 = extraout_var;
      }
LAB_01e2a469:
      local_78 = '\0';
      local_38 = CONCAT71(uVar5,1);
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_60 = &DAT_024c5048;
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((plVar7 == (longlong *)0x0) || (cVar2 = (**(code **)(*plVar7 + 0x398))(), cVar2 == '\0')) {
      local_b8 = *unaff_RSI;
      local_b0 = '\0';
      local_a8 = 0;
      local_a0 = '\0';
      (**(code **)(*(longlong *)*param_2 + 0x4f0))(&local_a8,&local_b8);
      plVar8 = local_60;
      uVar5 = (undefined7)((ulonglong)plVar9 >> 8);
      if (local_60 == plVar7) {
        if (((char)local_38 == '\0') && (local_60 != (longlong *)0x0)) {
          plVar8 = plVar7;
          if ((char)local_58 != '\0') goto LAB_01e2a5ff;
          uVar10 = CONCAT71(uVar5,1);
          FUN_00d50b00();
        }
        else {
          uVar10 = local_38 & 0xffffffff;
          plVar8 = plVar7;
        }
LAB_01e2a665:
        if (((char)local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((char)local_58 == '\0') {
          if (local_60 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          uVar10 = CONCAT71(uVar5,1);
          if (((char)local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01e2a665;
        }
        if (((char)local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_01e2a5ff:
        local_58 = local_58 & 0xffffff00;
        uVar10 = CONCAT71(uVar5,1);
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if (plVar8 == (longlong *)0x0) {
LAB_01e2a6dd:
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        return;
      }
      local_38 = uVar10 & 0xffffffff;
      cVar3 = (**(code **)(*plVar8 + 0x398))();
      cVar2 = (char)uVar10;
      if (cVar3 == '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        if (cVar2 == '\0') {
          return;
        }
        FUN_00d50b20();
        return;
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      plVar8 = plVar7;
      cVar2 = (char)local_38;
    }
    if (cVar2 != '\0') goto LAB_01e2a354;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)uVar6 == '\0') goto LAB_01e2a354;
  }
  FUN_00d50b00();
LAB_01e2a354:
  *unaff_RDI = plVar8;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @01e29c40 — 942 bytes
// ============================================================

void FUN_01e29c40(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_027f37d8;
  if (DAT_027f37d8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_028b9520;
  if (DAT_028b9520 == lVar3) {
    bVar2 = false;
    bVar1 = false;
  }
  else {
    DAT_028b9520 = lVar3;
    bVar2 = true;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (bVar1 = bVar2, DAT_028b9528 == '\0')) {
    DAT_028b9528 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027f37e0;
  if (DAT_027f37e0 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_028b9530;
  if (DAT_028b9530 == lVar3) {
    bVar1 = false;
  }
  else {
    DAT_028b9530 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (DAT_028b9538 == '\0')) {
    DAT_028b9538 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027f37e8;
  if (DAT_027f37e8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_028b9540;
  if (DAT_028b9540 == lVar3) {
    bVar1 = false;
  }
  else {
    DAT_028b9540 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (DAT_028b9548 == '\0')) {
    DAT_028b9548 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027f37f0;
  if (DAT_027f37f0 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_028b9550;
  if (DAT_028b9550 == lVar3) {
    bVar1 = false;
  }
  else {
    DAT_028b9550 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (DAT_028b9558 == '\0')) {
    DAT_028b9558 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027f37f8;
  if (DAT_027f37f8 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_028b9560;
  if (DAT_028b9560 == lVar3) {
    bVar1 = false;
  }
  else {
    DAT_028b9560 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (DAT_028b9568 == '\0')) {
    DAT_028b9568 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027fec90;
  if (DAT_027fec90 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_028b9570;
  if (DAT_028b9570 == lVar3) {
    bVar1 = false;
  }
  else {
    DAT_028b9570 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (DAT_028b9578 == '\0')) {
    DAT_028b9578 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027f3800;
  if (DAT_027f3800 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_028b9580;
  if (DAT_028b9580 == lVar3) {
    bVar1 = false;
  }
  else {
    DAT_028b9580 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (DAT_028b9588 == '\0')) {
    DAT_028b9588 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  lVar3 = DAT_027f3808;
  if (DAT_027f3808 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_028b9590;
  if (DAT_028b9590 == lVar3) {
    bVar1 = false;
  }
  else {
    DAT_028b9590 = lVar3;
    bVar1 = true;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  if ((lVar3 != 0) && (DAT_028b9598 == '\0')) {
    DAT_028b9598 = '\x01';
    FUN_00e8cb90();
  }
  if (!bVar1 && lVar3 != 0) {
    FUN_00d50b20();
  }
  FUN_01e2a120();
  return;
}




// ============================================================
// @01e2a9a0 — 504 bytes
// ============================================================

longlong * FUN_01e2a9a0(undefined8 param_1)

{
  longlong lVar1;
  bool bVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar3;
  longlong lVar4;
  longlong local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 local_78 [8];
  undefined1 local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong local_40;
  char local_38;
  
  if (DAT_028b95a0 == 0) {
    bVar2 = false;
LAB_01e2aa92:
    local_88 = *unaff_RSI;
    local_80 = 0;
    FUN_01f27fe0();
    (**(code **)(*local_58 + 0x610))();
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_70 = 1;
    FUN_01e2a220(param_1,local_78);
    if (local_68 == 0) {
      lVar1 = 0;
    }
    else {
      bVar2 = true;
      lVar1 = local_68;
      if (local_60 == '\0') {
        FUN_00d50b00();
      }
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar2) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  else {
    uVar3 = (ulonglong)*(uint *)(DAT_028b95a0 + 0xc);
    bVar2 = false;
    do {
      if ((int)uVar3 < 1) goto LAB_01e2aa92;
      lVar1 = *(longlong *)(*(longlong *)(DAT_028b95a0 + 0x10) + -8 + uVar3 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_90 = 1;
      local_98 = lVar1;
      FUN_01e2a220(param_1,&local_98);
      lVar4 = local_68;
      if (local_68 == 0) {
        lVar4 = 0;
      }
      else {
        bVar2 = true;
        if (local_60 == '\0') {
          FUN_00d50b00();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar3 = uVar3 - 1;
    } while (lVar4 == 0);
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar2) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}




// ============================================================
// @01e29660 — 503 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e297fb) */
/* WARNING: Removing unreachable block (ram,0x01e29804) */
/* WARNING: Removing unreachable block (ram,0x01e296a3) */
/* WARNING: Removing unreachable block (ram,0x01e296ac) */
/* WARNING: Removing unreachable block (ram,0x01e296d3) */
/* WARNING: Removing unreachable block (ram,0x01e296e0) */
/* WARNING: Removing unreachable block (ram,0x01e29829) */
/* WARNING: Removing unreachable block (ram,0x01e29832) */

void FUN_01e29660(ulonglong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  double *pdVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong unaff_RDI;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  
  if (0 < *(int *)(unaff_RDI + 0xc)) {
    iVar7 = *(int *)(*(longlong *)(unaff_RDI + 0x10) + 0xc);
    if (iVar7 < *(int *)(unaff_RDI + 0xc)) {
      FUN_00d21140();
      FUN_00d21140();
    }
    else {
      lVar9 = *(longlong *)(unaff_RDI + 0x20);
      iVar7 = 0;
      if (((lVar9 != 0) && (uVar2 = *(uint *)(lVar9 + 0x18), 7 < (int)uVar2)) &&
         (param_1 = (ulonglong)(uVar2 & 0xfffffff8), (uVar2 & 0xfffffff8) != 8)) {
        pdVar3 = *(double **)(lVar9 + 0x10);
        dVar11 = *pdVar3;
        uVar1 = (ulonglong)(uVar2 >> 3) - 1;
        uVar6 = (ulonglong)((uint)uVar1 & 3);
        if ((ulonglong)(uVar2 >> 3) - 2 < 3) {
          iVar7 = 0;
          lVar9 = 1;
        }
        else {
          iVar7 = 0;
          uVar5 = 0;
          do {
            uVar10 = uVar5;
            dVar13 = pdVar3[uVar10 + 1];
            iVar8 = (int)uVar10;
            iVar4 = iVar8 + 1;
            if (dVar11 <= dVar13) {
              iVar4 = iVar7;
            }
            if (dVar11 <= dVar13) {
              dVar13 = dVar11;
            }
            dVar11 = pdVar3[uVar10 + 2];
            iVar7 = iVar8 + 2;
            if (dVar13 <= pdVar3[uVar10 + 2]) {
              dVar11 = dVar13;
              iVar7 = iVar4;
            }
            dVar13 = pdVar3[uVar10 + 3];
            iVar4 = iVar8 + 3;
            if (dVar11 <= pdVar3[uVar10 + 3]) {
              dVar13 = dVar11;
              iVar4 = iVar7;
            }
            dVar11 = pdVar3[uVar10 + 4];
            iVar7 = iVar8 + 4;
            if (dVar13 <= pdVar3[uVar10 + 4]) {
              dVar11 = dVar13;
              iVar7 = iVar4;
            }
            uVar5 = uVar10 + 4;
          } while ((uVar1 & 0xfffffffffffffffc) != uVar10 + 4);
          lVar9 = uVar10 + 5;
        }
        for (; param_1 = 0, uVar6 != 0; uVar6 = uVar6 - 1) {
          dVar13 = pdVar3[lVar9];
          iVar8 = (int)lVar9;
          if (dVar11 <= dVar13) {
            dVar13 = dVar11;
            iVar8 = iVar7;
          }
          lVar9 = lVar9 + 1;
          dVar11 = dVar13;
          iVar7 = iVar8;
        }
      }
      uVar12 = FUN_00d233f0(param_1,iVar7);
      FUN_00d233f0(uVar12,iVar7);
    }
    uVar12 = FUN_00e7d6f0();
    *(undefined8 *)(*(longlong *)(*(longlong *)(unaff_RDI + 0x20) + 0x10) + (longlong)iVar7 * 8) =
         uVar12;
  }
  return;
}



