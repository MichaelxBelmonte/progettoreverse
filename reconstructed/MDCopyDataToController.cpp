// Reconstructed implementation of MDCopyDataToController
// From MikeCore binary — reverse-engineered pseudocode

#include "MDCopyDataToController.h"

// ============================================================
// @00510180 — 2891 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00510180(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  longlong *unaff_RDI;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined8 uVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  undefined8 extraout_XMM0_Qb;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
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
  longlong local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  undefined4 local_34;
  undefined8 extraout_XMM0_Qb_00;
  
  uVar14 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar13 = (undefined4)param_2;
  uVar10 = FUN_00d6f370();
  local_1e0 = DAT_0270af68;
  if (DAT_0270af68 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1d8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(undefined1 *)((longlong)unaff_RDI + 0x94) = uVar4;
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_118 = 0;
  lVar1 = unaff_RDI[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_118 = '\x01';
  local_120 = lVar1;
  cVar5 = FUN_002664b0();
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x94) = 0;
    (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x998))();
  }
  else {
    (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x998))();
  }
  uVar10 = FUN_00d6f370();
  local_1d0 = DAT_0270af70;
  if (DAT_0270af70 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1c8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(undefined1 *)((longlong)unaff_RDI + 0x95) = uVar4;
  if ((local_1c8 != '\0') && (local_1d0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_108 = 0;
  lVar1 = unaff_RDI[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_108 = '\x01';
  local_110 = lVar1;
  cVar5 = FUN_002639e0();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x95) = 0;
    (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x998))();
  }
  else {
    (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x998))();
  }
  uVar10 = FUN_00d6f370();
  local_1c0 = DAT_0270af78;
  if (DAT_0270af78 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1b8 = '\x01';
  uVar4 = FUN_00d70f90(uVar10,1);
  *(undefined1 *)((longlong)unaff_RDI + 0x96) = uVar4;
  if ((local_1b8 != '\0') && (local_1c0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = 0;
  lVar1 = unaff_RDI[0xe];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_f8 = '\x01';
  local_100 = lVar1;
  cVar5 = FUN_00262e30();
  if ((local_f8 != '\0') && (local_100 != 0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x96) = 0;
    uVar10 = (**(code **)(*(longlong *)unaff_RDI[0x15] + 0x998))();
  }
  else {
    uVar10 = (**(code **)(*(longlong *)unaff_RDI[0x15] + 0x998))();
  }
  if ((char)unaff_RDI[0x10] == '\0') {
    plVar8 = (longlong *)unaff_RDI[0x17];
    bVar9 = plVar8 == (longlong *)0x0;
    if (bVar9) {
      plVar8 = (longlong *)0x0;
      plVar7 = (longlong *)unaff_RDI[0x16];
    }
    else {
      uVar10 = FUN_00d50b00();
      plVar7 = (longlong *)unaff_RDI[0x16];
    }
    uVar6 = (ulonglong)!bVar9;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00510573;
    }
  }
  else {
    plVar8 = (longlong *)unaff_RDI[0x16];
    bVar9 = plVar8 == (longlong *)0x0;
    if (bVar9) {
      plVar8 = (longlong *)0x0;
      plVar7 = (longlong *)unaff_RDI[0x17];
    }
    else {
      uVar10 = FUN_00d50b00();
      plVar7 = (longlong *)unaff_RDI[0x17];
    }
    uVar6 = (ulonglong)!bVar9;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b00();
LAB_00510573:
      local_34 = 0;
      goto LAB_00510584;
    }
  }
  local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
  plVar7 = (longlong *)0x0;
LAB_00510584:
  local_f0 = uVar6;
  uVar10 = (**(code **)(*plVar8 + 0x4d8))();
  local_e8 = CONCAT44(uVar14,uVar13);
  (**(code **)(*(longlong *)unaff_RDI[0x16] + 0x4d8))();
  (**(code **)(*(longlong *)unaff_RDI[0x17] + 0x4d8))();
  fVar15 = extraout_XMM0_Db_00;
  if (extraout_XMM0_Db <= extraout_XMM0_Db_00) {
    fVar15 = extraout_XMM0_Db;
  }
  auVar2._8_8_ = extraout_XMM0_Qb;
  auVar2._0_8_ = uVar10;
  auVar11._4_4_ = extraout_XMM0_Db_00;
  auVar11._0_4_ = fVar15;
  auVar11._8_4_ = extraout_XMM0_Dd;
  auVar11._12_4_ = extraout_XMM0_Dd;
  auVar11 = insertps(auVar2,auVar11,0x10);
  (**(code **)(*plVar8 + 0x4d0))(auVar11._0_8_,(undefined4)local_e8);
  auVar12._0_8_ = (**(code **)(*plVar7 + 0x4d8))();
  auVar12._8_8_ = extraout_XMM0_Qb_00;
  auVar11 = blendps(auVar12,_DAT_023b4c30,0xe);
  (**(code **)(*plVar7 + 0x4d0))(auVar11._0_8_);
  (**(code **)(*(longlong *)unaff_RDI[0x13] + 0x918))();
  (**(code **)(*(longlong *)unaff_RDI[0x14] + 0x918))();
  (**(code **)(*(longlong *)unaff_RDI[0x15] + 0x918))();
  FUN_00511610();
  local_140 = DAT_0270af80;
  local_138 = 0;
  if (DAT_0270af80 != 0) {
    FUN_00d50b00();
  }
  local_138 = '\x01';
  FUN_00d46530();
  local_130 = DAT_0270af88;
  local_128 = 0;
  if (DAT_0270af88 != 0) {
    FUN_00d50b00();
  }
  local_128 = '\x01';
  FUN_00511500(&local_1f0,&local_140,&local_130);
  FUN_000b4da0();
  local_e8 = local_150;
  if (local_148 == '\0') {
    if (((local_150 != 0) && (FUN_00d50b00(), local_148 != '\0')) && (local_150 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_148 = '\0';
  }
  FUN_002d10d0();
  if ((local_128 != '\0') && (local_130 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_138 != '\0') && (local_140 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_0270af90;
  plVar8 = (longlong *)unaff_RDI[0x17];
  if (DAT_0270af90 != 0) {
    FUN_00d50b00();
  }
  local_1b0 = lVar1;
  local_1a8 = '\x01';
  local_1a0 = local_e8;
  local_198 = '\0';
  FUN_01e57360(&local_1a0,&local_1b0);
  local_d8 = local_88;
  local_d0 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_d0 = '\x01';
  (**(code **)(*plVar8 + 0x968))();
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_198 != '\0') && (local_1a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_1a8 != '\0') && (local_1b0 != 0)) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)unaff_RDI[0x17];
  (**(code **)(*plVar8 + 0x970))();
  local_c8 = local_88;
  local_c0 = 0;
  if (local_80 == '\0') {
    if (local_88 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  local_c0 = '\x01';
  cVar5 = (char)local_f0;
  (**(code **)(*plVar8 + 0x6a8))();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = DAT_0270afa0;
  lVar1 = DAT_0270af98;
  if ((char)unaff_RDI[0x10] != '\0') {
    plVar8 = (longlong *)unaff_RDI[0x16];
    if ((int)unaff_RDI[0x12] < 2) {
      if (DAT_0270af98 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar1;
      local_188 = '\x01';
      local_180 = local_e8;
      local_178 = '\0';
      FUN_01e57360(&local_180,&local_190);
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
      (**(code **)(*plVar8 + 0x968))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (DAT_0270afa0 != 0) {
        FUN_00d50b00();
      }
      local_170 = lVar3;
      local_168 = '\x01';
      local_160 = local_e8;
      local_158 = '\0';
      FUN_01e57360(&local_160,&local_170);
      local_a8 = local_88;
      local_a0 = 0;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      local_a0 = '\x01';
      (**(code **)(*plVar8 + 0x968))();
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar8 = (longlong *)unaff_RDI[0x16];
    (**(code **)(*plVar8 + 0x970))();
    local_98 = local_88;
    local_90 = 0;
    if (local_80 == '\0') {
      if (local_88 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_80 = '\0';
    }
    local_90 = '\x01';
    cVar5 = (char)local_f0;
    (**(code **)(*plVar8 + 0x6a8))();
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x5f0))();
  if (local_e8 != 0) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0050f8b0 — 2207 bytes
// str: ""handleCancel""
// str: ""handleSheetClose""
// str: ""handleOK""
// str: ""handleCopyTempoChanged""
// str: ""handleCopyScalesChanged""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050f8b0(void)

{
  int iVar1;
  
  if (DAT_02809e40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270afb0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027125d8 = FUN_00015ff0();
          _DAT_027125c0 = "MDCopyDataToController";
          _DAT_027125c8 = 200;
          _DAT_027125d0 = FUN_005123c0;
          _DAT_027125e0 = 0;
          uRam00000000027125e8 = 0;
          _DAT_027125f0 = 0;
          _DAT_02712668 = 0;
          uRam0000000002712670 = 0;
          _DAT_02712678 = 0;
          DAT_0271267a = 1;
          _DAT_027125f8 = 0;
          uRam0000000002712600 = 0;
          _DAT_02712608 = 0;
          uRam0000000002712610 = 0;
          _DAT_02712618 = 0;
          uRam0000000002712620 = 0;
          _DAT_02712628 = 0;
          uRam0000000002712630 = 0;
          _DAT_02712638 = 0;
          uRam0000000002712640 = 0;
          _DAT_02712648 = 0;
          uRam0000000002712650 = 0;
          _DAT_02712658 = 0;
          uRam0000000002712660 = 0;
          DAT_02712683 = 0;
          _DAT_0271267b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809e00 = "handleSheetClose";
      _DAT_02809e08 = &DAT_027125c0;
      _DAT_02809e10 = 0;
      _DAT_02809e18 = &DAT_0270afb8;
      _DAT_02809e20 = FUN_00512430;
      _DAT_02809e28 = 0x5d1;
      _DAT_02809e30 = 0;
      uRam0000000002809e38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809e88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270afb0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027125d8 = FUN_00015ff0();
          _DAT_027125c0 = "MDCopyDataToController";
          _DAT_027125c8 = 200;
          _DAT_027125d0 = FUN_005123c0;
          _DAT_027125e0 = 0;
          uRam00000000027125e8 = 0;
          _DAT_027125f0 = 0;
          _DAT_02712668 = 0;
          uRam0000000002712670 = 0;
          _DAT_02712678 = 0;
          DAT_0271267a = 1;
          _DAT_027125f8 = 0;
          uRam0000000002712600 = 0;
          _DAT_02712608 = 0;
          uRam0000000002712610 = 0;
          _DAT_02712618 = 0;
          uRam0000000002712620 = 0;
          _DAT_02712628 = 0;
          uRam0000000002712630 = 0;
          _DAT_02712638 = 0;
          uRam0000000002712640 = 0;
          _DAT_02712648 = 0;
          uRam0000000002712650 = 0;
          _DAT_02712658 = 0;
          uRam0000000002712660 = 0;
          DAT_02712683 = 0;
          _DAT_0271267b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809e48 = "handleCancel";
      _DAT_02809e50 = &DAT_027125c0;
      _DAT_02809e58 = 0;
      _DAT_02809e60 = &DAT_0270afb8;
      _DAT_02809e68 = FUN_00512430;
      _DAT_02809e70 = 0x5c1;
      _DAT_02809e78 = 0;
      uRam0000000002809e80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809ed0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270afb0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027125d8 = FUN_00015ff0();
          _DAT_027125c0 = "MDCopyDataToController";
          _DAT_027125c8 = 200;
          _DAT_027125d0 = FUN_005123c0;
          _DAT_027125e0 = 0;
          uRam00000000027125e8 = 0;
          _DAT_027125f0 = 0;
          _DAT_02712668 = 0;
          uRam0000000002712670 = 0;
          _DAT_02712678 = 0;
          DAT_0271267a = 1;
          _DAT_027125f8 = 0;
          uRam0000000002712600 = 0;
          _DAT_02712608 = 0;
          uRam0000000002712610 = 0;
          _DAT_02712618 = 0;
          uRam0000000002712620 = 0;
          _DAT_02712628 = 0;
          uRam0000000002712630 = 0;
          _DAT_02712638 = 0;
          uRam0000000002712640 = 0;
          _DAT_02712648 = 0;
          uRam0000000002712650 = 0;
          _DAT_02712658 = 0;
          uRam0000000002712660 = 0;
          DAT_02712683 = 0;
          _DAT_0271267b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809e90 = "handleOK";
      _DAT_02809e98 = &DAT_027125c0;
      _DAT_02809ea0 = 0;
      _DAT_02809ea8 = &DAT_0270afb8;
      _DAT_02809eb0 = FUN_00512430;
      _DAT_02809eb8 = 0x5c9;
      _DAT_02809ec0 = 0;
      uRam0000000002809ec8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809f18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270afb0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027125d8 = FUN_00015ff0();
          _DAT_027125c0 = "MDCopyDataToController";
          _DAT_027125c8 = 200;
          _DAT_027125d0 = FUN_005123c0;
          _DAT_027125e0 = 0;
          uRam00000000027125e8 = 0;
          _DAT_027125f0 = 0;
          _DAT_02712668 = 0;
          uRam0000000002712670 = 0;
          _DAT_02712678 = 0;
          DAT_0271267a = 1;
          _DAT_027125f8 = 0;
          uRam0000000002712600 = 0;
          _DAT_02712608 = 0;
          uRam0000000002712610 = 0;
          _DAT_02712618 = 0;
          uRam0000000002712620 = 0;
          _DAT_02712628 = 0;
          uRam0000000002712630 = 0;
          _DAT_02712638 = 0;
          uRam0000000002712640 = 0;
          _DAT_02712648 = 0;
          uRam0000000002712650 = 0;
          _DAT_02712658 = 0;
          uRam0000000002712660 = 0;
          DAT_02712683 = 0;
          _DAT_0271267b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809ed8 = "handleCopyTempoChanged";
      _DAT_02809ee0 = &DAT_027125c0;
      _DAT_02809ee8 = 0;
      _DAT_02809ef0 = &DAT_0270afb8;
      _DAT_02809ef8 = FUN_00512430;
      _DAT_02809f00 = 0x5d9;
      _DAT_02809f08 = 0;
      uRam0000000002809f10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809f60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270afb0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027125d8 = FUN_00015ff0();
          _DAT_027125c0 = "MDCopyDataToController";
          _DAT_027125c8 = 200;
          _DAT_027125d0 = FUN_005123c0;
          _DAT_027125e0 = 0;
          uRam00000000027125e8 = 0;
          _DAT_027125f0 = 0;
          _DAT_02712668 = 0;
          uRam0000000002712670 = 0;
          _DAT_02712678 = 0;
          DAT_0271267a = 1;
          _DAT_027125f8 = 0;
          uRam0000000002712600 = 0;
          _DAT_02712608 = 0;
          uRam0000000002712610 = 0;
          _DAT_02712618 = 0;
          uRam0000000002712620 = 0;
          _DAT_02712628 = 0;
          uRam0000000002712630 = 0;
          _DAT_02712638 = 0;
          uRam0000000002712640 = 0;
          _DAT_02712648 = 0;
          uRam0000000002712650 = 0;
          _DAT_02712658 = 0;
          uRam0000000002712660 = 0;
          DAT_02712683 = 0;
          _DAT_0271267b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809f20 = "handleCopyScalesChanged";
      _DAT_02809f28 = &DAT_027125c0;
      _DAT_02809f30 = 0;
      _DAT_02809f38 = &DAT_0270afb8;
      _DAT_02809f40 = FUN_00512430;
      _DAT_02809f48 = 0x5e1;
      _DAT_02809f50 = 0;
      uRam0000000002809f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02809fa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270afb0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027125d8 = FUN_00015ff0();
          _DAT_027125c0 = "MDCopyDataToController";
          _DAT_027125c8 = 200;
          _DAT_027125d0 = FUN_005123c0;
          _DAT_027125e0 = 0;
          uRam00000000027125e8 = 0;
          _DAT_027125f0 = 0;
          _DAT_02712668 = 0;
          uRam0000000002712670 = 0;
          _DAT_02712678 = 0;
          DAT_0271267a = 1;
          _DAT_027125f8 = 0;
          uRam0000000002712600 = 0;
          _DAT_02712608 = 0;
          uRam0000000002712610 = 0;
          _DAT_02712618 = 0;
          uRam0000000002712620 = 0;
          _DAT_02712628 = 0;
          uRam0000000002712630 = 0;
          _DAT_02712638 = 0;
          uRam0000000002712640 = 0;
          _DAT_02712648 = 0;
          uRam0000000002712650 = 0;
          _DAT_02712658 = 0;
          uRam0000000002712660 = 0;
          DAT_02712683 = 0;
          _DAT_0271267b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02809f68 = "handleCopyChordsChanged";
      _DAT_02809f70 = &DAT_027125c0;
      _DAT_02809f78 = 0;
      _DAT_02809f80 = &DAT_0270afb8;
      _DAT_02809f88 = FUN_00512430;
      _DAT_02809f90 = 0x5e9;
      _DAT_02809f98 = 0;
      uRam0000000002809fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @0058a460 — 1760 bytes
// str: ""MDCopyDataToController""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058a460(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_0005aa20();
  *unaff_RDI = &DAT_02500938;
  FUN_0058ac70();
  FUN_0058afa0();
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  if (DAT_0270afb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027125d8 = FUN_00015ff0();
      _DAT_027125c0 = "MDCopyDataToController";
      _DAT_027125c8 = 200;
      _DAT_027125d0 = FUN_005123c0;
      _DAT_027125e0 = 0;
      uRam00000000027125e8 = 0;
      _DAT_027125f0 = 0;
      _DAT_02712668 = 0;
      uRam0000000002712670 = 0;
      _DAT_02712678 = 0;
      DAT_0271267a = 1;
      _DAT_027125f8 = 0;
      uRam0000000002712600 = 0;
      _DAT_02712608 = 0;
      uRam0000000002712610 = 0;
      _DAT_02712618 = 0;
      uRam0000000002712620 = 0;
      _DAT_02712628 = 0;
      uRam0000000002712630 = 0;
      _DAT_02712638 = 0;
      uRam0000000002712640 = 0;
      _DAT_02712648 = 0;
      uRam0000000002712650 = 0;
      _DAT_02712658 = 0;
      uRam0000000002712660 = 0;
      DAT_02712683 = 0;
      _DAT_0271267b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271267b == '\0') {
    FUN_0058b2d0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x81) = 0;
  if (DAT_0270afb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027125d8 = FUN_00015ff0();
      _DAT_027125c0 = "MDCopyDataToController";
      _DAT_027125c8 = 200;
      _DAT_027125d0 = FUN_005123c0;
      _DAT_027125e0 = 0;
      uRam00000000027125e8 = 0;
      _DAT_027125f0 = 0;
      _DAT_02712668 = 0;
      uRam0000000002712670 = 0;
      _DAT_02712678 = 0;
      DAT_0271267a = 1;
      _DAT_027125f8 = 0;
      uRam0000000002712600 = 0;
      _DAT_02712608 = 0;
      uRam0000000002712610 = 0;
      _DAT_02712618 = 0;
      uRam0000000002712620 = 0;
      _DAT_02712628 = 0;
      uRam0000000002712630 = 0;
      _DAT_02712638 = 0;
      uRam0000000002712640 = 0;
      _DAT_02712648 = 0;
      uRam0000000002712650 = 0;
      _DAT_02712658 = 0;
      uRam0000000002712660 = 0;
      DAT_02712683 = 0;
      _DAT_0271267b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271267b == '\0') {
    FUN_0058b460();
    FUN_00e87980();
  }
  FUN_0058b5f0();
  *(undefined4 *)(unaff_RDI + 0x12) = 0;
  if (DAT_0270afb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027125d8 = FUN_00015ff0();
      _DAT_027125c0 = "MDCopyDataToController";
      _DAT_027125c8 = 200;
      _DAT_027125d0 = FUN_005123c0;
      _DAT_027125e0 = 0;
      uRam00000000027125e8 = 0;
      _DAT_027125f0 = 0;
      _DAT_02712668 = 0;
      uRam0000000002712670 = 0;
      _DAT_02712678 = 0;
      DAT_0271267a = 1;
      _DAT_027125f8 = 0;
      uRam0000000002712600 = 0;
      _DAT_02712608 = 0;
      uRam0000000002712610 = 0;
      _DAT_02712618 = 0;
      uRam0000000002712620 = 0;
      _DAT_02712628 = 0;
      uRam0000000002712630 = 0;
      _DAT_02712638 = 0;
      uRam0000000002712640 = 0;
      _DAT_02712648 = 0;
      uRam0000000002712650 = 0;
      _DAT_02712658 = 0;
      uRam0000000002712660 = 0;
      DAT_02712683 = 0;
      _DAT_0271267b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271267b == '\0') {
    FUN_0058b8b0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x94) = 0;
  if (DAT_0270afb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027125d8 = FUN_00015ff0();
      _DAT_027125c0 = "MDCopyDataToController";
      _DAT_027125c8 = 200;
      _DAT_027125d0 = FUN_005123c0;
      _DAT_027125e0 = 0;
      uRam00000000027125e8 = 0;
      _DAT_027125f0 = 0;
      _DAT_02712668 = 0;
      uRam0000000002712670 = 0;
      _DAT_02712678 = 0;
      DAT_0271267a = 1;
      _DAT_027125f8 = 0;
      uRam0000000002712600 = 0;
      _DAT_02712608 = 0;
      uRam0000000002712610 = 0;
      _DAT_02712618 = 0;
      uRam0000000002712620 = 0;
      _DAT_02712628 = 0;
      uRam0000000002712630 = 0;
      _DAT_02712638 = 0;
      uRam0000000002712640 = 0;
      _DAT_02712648 = 0;
      uRam0000000002712650 = 0;
      _DAT_02712658 = 0;
      uRam0000000002712660 = 0;
      DAT_02712683 = 0;
      _DAT_0271267b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271267b == '\0') {
    FUN_0058ba40();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x95) = 0;
  if (DAT_0270afb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027125d8 = FUN_00015ff0();
      _DAT_027125c0 = "MDCopyDataToController";
      _DAT_027125c8 = 200;
      _DAT_027125d0 = FUN_005123c0;
      _DAT_027125e0 = 0;
      uRam00000000027125e8 = 0;
      _DAT_027125f0 = 0;
      _DAT_02712668 = 0;
      uRam0000000002712670 = 0;
      _DAT_02712678 = 0;
      DAT_0271267a = 1;
      _DAT_027125f8 = 0;
      uRam0000000002712600 = 0;
      _DAT_02712608 = 0;
      uRam0000000002712610 = 0;
      _DAT_02712618 = 0;
      uRam0000000002712620 = 0;
      _DAT_02712628 = 0;
      uRam0000000002712630 = 0;
      _DAT_02712638 = 0;
      uRam0000000002712640 = 0;
      _DAT_02712648 = 0;
      uRam0000000002712650 = 0;
      _DAT_02712658 = 0;
      uRam0000000002712660 = 0;
      DAT_02712683 = 0;
      _DAT_0271267b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271267b == '\0') {
    FUN_0058bbd0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x96) = 0;
  if (DAT_0270afb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027125d8 = FUN_00015ff0();
      _DAT_027125c0 = "MDCopyDataToController";
      _DAT_027125c8 = 200;
      _DAT_027125d0 = FUN_005123c0;
      _DAT_027125e0 = 0;
      uRam00000000027125e8 = 0;
      _DAT_027125f0 = 0;
      _DAT_02712668 = 0;
      uRam0000000002712670 = 0;
      _DAT_02712678 = 0;
      DAT_0271267a = 1;
      _DAT_027125f8 = 0;
      uRam0000000002712600 = 0;
      _DAT_02712608 = 0;
      uRam0000000002712610 = 0;
      _DAT_02712618 = 0;
      uRam0000000002712620 = 0;
      _DAT_02712628 = 0;
      uRam0000000002712630 = 0;
      _DAT_02712638 = 0;
      uRam0000000002712640 = 0;
      _DAT_02712648 = 0;
      uRam0000000002712650 = 0;
      _DAT_02712658 = 0;
      uRam0000000002712660 = 0;
      DAT_02712683 = 0;
      _DAT_0271267b = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0271267b == '\0') {
    FUN_0058bd60();
    FUN_00e87980();
  }
  FUN_0058bef0();
  FUN_0058c220();
  FUN_0058c550();
  FUN_0058c880();
  FUN_0058cbb0();
  FUN_0058cee0();
  return;
}




// ============================================================
// @00511de0 — 615 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00511f75) */
/* WARNING: Removing unreachable block (ram,0x00511f82) */
/* WARNING: Removing unreachable block (ram,0x00511e76) */
/* WARNING: Removing unreachable block (ram,0x00511e99) */
/* WARNING: Removing unreachable block (ram,0x00511e9e) */
/* WARNING: Removing unreachable block (ram,0x00511eaa) */
/* WARNING: Removing unreachable block (ram,0x00511eb3) */
/* WARNING: Removing unreachable block (ram,0x00511e7c) */
/* WARNING: Removing unreachable block (ram,0x00511e85) */
/* WARNING: Removing unreachable block (ram,0x00512005) */
/* WARNING: Removing unreachable block (ram,0x0051200e) */
/* WARNING: Removing unreachable block (ram,0x00511e2c) */
/* WARNING: Removing unreachable block (ram,0x00511e35) */

void FUN_00511de0(void)

{
  longlong lVar1;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0xe20))();
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      goto LAB_00511e3a;
    }
  }
  else if (local_48 != 0) {
LAB_00511e3a:
    if (*(int *)(local_48 + 0xc) != 0) goto joined_r0x00511eda;
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0x70) + 0x9b0))();
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
joined_r0x00511eda:
  if (unaff_ESI == 0) {
    if (*(char *)(unaff_RDI + 0x80) == '\0') {
      lVar1 = *(longlong *)(unaff_RDI + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_012fd540(*(undefined1 *)(unaff_RDI + 0x94),1,*(undefined1 *)(unaff_RDI + 0x95),
                   *(undefined1 *)(unaff_RDI + 0x96));
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      lVar1 = *(longlong *)(unaff_RDI + 0x78);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      FUN_01300180(*(undefined1 *)(unaff_RDI + 0x94),1,*(undefined1 *)(unaff_RDI + 0x95),
                   *(undefined1 *)(unaff_RDI + 0x96));
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
  }
  if (*(longlong *)(unaff_RDI + 0x70) != 0) {
    *(undefined8 *)(unaff_RDI + 0x70) = 0;
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}



