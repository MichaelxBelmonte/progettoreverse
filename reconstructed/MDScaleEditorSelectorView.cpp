// Reconstructed implementation of MDScaleEditorSelectorView
// From MikeCore binary — reverse-engineered pseudocode

#include "MDScaleEditorSelectorView.h"

// ============================================================
// @002ba3c0 — 2654 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002bad80) */
/* WARNING: Removing unreachable block (ram,0x002bad8d) */
/* WARNING: Removing unreachable block (ram,0x002bac93) */
/* WARNING: Removing unreachable block (ram,0x002bac9c) */

void FUN_002ba3c0(void)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  longlong *plVar9;
  int unaff_ESI;
  longlong *unaff_RDI;
  longlong lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  longlong local_1c0;
  longlong local_1b8;
  code *local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  longlong local_188;
  char local_180;
  undefined8 *local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
  longlong local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  int local_124;
  float local_120;
  float local_11c;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  undefined1 local_f8 [16];
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
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
  longlong local_40;
  char local_38;
  
  local_124 = unaff_ESI;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar6 = local_e0;
  if ((((local_d8 == '\0') && (local_e0 != (longlong *)0x0)) && (FUN_00d50b00(), local_d8 != '\0'))
     && (local_e0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0027c9f0();
  plVar7 = local_e0;
  if (((local_d8 == '\0') && (local_e0 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), local_d8 != '\0' && (local_e0 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  local_198 = (**(code **)(*plVar6 + 0x578))();
  (**(code **)(*unaff_RDI + 0x570))();
  (**(code **)(*unaff_RDI + 0x480))();
  lVar10 = DAT_026fc758;
  if (DAT_026fc758 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_026fc760;
  if (DAT_026fc760 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026d80e8;
  if (DAT_026d80e8 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar10;
  local_1c0 = lVar4;
  local_1b8 = lVar3;
  FUN_002bd7b0(&local_1b8,&local_1c0,3);
  FUN_000b6830();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_e0 = (longlong *)&DAT_025df260;
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  local_e0 = (longlong *)&DAT_0253d630;
  if ((local_b8 != '\0') && (CONCAT44(uStack_bc,local_c0) != 0)) {
    FUN_00d50b20();
  }
  local_e0 = &DAT_024c5048;
  if (((char)local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == 0) {
    local_f8 = ZEXT816(0);
  }
  else {
    local_d8 = '\0';
    local_e0 = (undefined8 *)0x0;
    local_c0 = 0;
    local_c8 = 0;
    if (*(int *)(local_40 + 0xc) < 1) {
      local_f8 = ZEXT816(0);
    }
    else {
      fVar5 = (float)local_198;
      local_1b0 = DAT_02677e28;
      local_f8 = ZEXT816(0);
      piVar11 = &DAT_023b1780;
      lVar10 = 0;
      do {
        puVar2 = *(undefined8 **)(*(longlong *)(local_40 + 0x10) + lVar10 * 8);
        local_e0 = puVar2;
        if (*piVar11 <= local_124) {
          (**(code **)(*unaff_RDI + 0x4a0))();
          local_1a8 = ZEXT416((uint)(float)*(int *)(local_40 + 0xc));
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*unaff_RDI + 0x4a0))();
          iVar1 = *(int *)(local_40 + 0xc);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_1a8._0_4_ = local_1a8._0_4_ * (float)local_198;
          local_f8 = blendps(ZEXT816(0),local_1a8,1);
          if (0 < iVar1) {
            local_120 = (float)(**(code **)(*plVar6 + 0x598))();
            (**(code **)(*unaff_RDI + 0x4a0))();
            local_11c = (float)*(int *)(local_40 + 0xc);
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            auVar13._4_12_ = local_1a8._4_12_;
            auVar13._0_4_ = local_1a8._0_4_ - local_120 * local_11c;
            local_f8 = blendps(local_f8,auVar13,1);
          }
          plVar9 = (longlong *)FUN_00e8fc40();
          FUN_0006daf0();
          *(undefined4 *)(plVar9 + 0x27) = 0;
          plVar9[0x2e] = 0;
          *(undefined4 *)(plVar9 + 0x2f) = 0;
          plVar9[0x30] = 0;
          *(undefined1 *)(plVar9 + 0x31) = 0;
          plVar9[0x28] = 0;
          plVar9[0x29] = 0;
          *(undefined4 *)(plVar9 + 0x2a) = 0;
          plVar9[0x2b] = 0;
          plVar9[0x2c] = 0;
          *(undefined8 *)((longlong)plVar9 + 0x165) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x18c) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x194) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x199) = 0;
          plVar9[0x35] = 0;
          plVar9[0x36] = 0;
          plVar9[0x37] = 0;
          plVar9[0x38] = 0;
          *plVar9 = (longlong)&DAT_02677e10;
          plVar9[2] = (longlong)&DAT_026788e8;
          plVar9[0x39] = (longlong)&DAT_02678928;
          *(undefined4 *)((longlong)plVar9 + 500) = 0;
          *(undefined1 *)(plVar9 + 0x3f) = 0;
          plVar9[0x43] = 0;
          plVar9[0x3c] = 0;
          plVar9[0x3d] = 0;
          plVar9[0x3a] = 0;
          plVar9[0x3b] = 0;
          *(undefined1 *)(plVar9 + 0x3e) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x1fc) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x204) = 0;
          *(undefined8 *)((longlong)plVar9 + 0x20c) = 0;
          (*local_1b0)();
          (**(code **)(*plVar9 + 0x4d0))();
          FUN_01d0fe80();
          local_110 = 0;
          FUN_00d50b00();
          local_110 = '\x01';
          local_118 = unaff_RDI;
          (**(code **)(*plVar9 + 0xa20))();
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01cef4c0();
          lVar4 = DAT_026fc768;
          if (DAT_026fc768 != 0) {
            FUN_00d50b00();
          }
          local_188 = lVar4;
          local_180 = '\x01';
          (**(code **)(*plVar9 + 0xa10))();
          if ((local_180 != '\0') && (local_188 != 0)) {
            FUN_00d50b20();
          }
          local_170 = '\0';
          local_178 = puVar2;
          FUN_01d51a40();
          local_98 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_98 = '\x01';
          local_a0 = local_40;
          FUN_01cef3b0();
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar9 + 0xa80))();
          lVar4 = DAT_026f6f70;
          if (DAT_026f6f70 != 0) {
            FUN_00d50b00();
          }
          lVar3 = DAT_026fc750;
          local_168 = lVar4;
          local_160 = '\x01';
          if (DAT_026fc750 != 0) {
            FUN_00d50b00();
          }
          local_158 = lVar3;
          local_150 = '\x01';
          local_148 = 0;
          local_140 = '\0';
          FUN_00d31230(&local_148,&local_158);
          local_88 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_88 = '\x01';
          local_90 = local_40;
          (**(code **)(*plVar9 + 0x6a8))();
          if ((local_88 != '\0') && (local_90 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_140 != '\0') && (local_148 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
          if ((local_160 != '\0') && (local_168 != 0)) {
            FUN_00d50b20();
          }
          (**(code **)(*plVar9 + 0xa18))();
          lVar4 = local_108;
          local_78 = 0;
          if (local_100 == '\0') {
            if (local_108 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_100 = '\0';
          }
          local_78 = '\x01';
          local_80 = lVar4;
          uVar8 = (**(code **)(*plVar9 + 0xa88))();
          FUN_01d5eb20(uVar8,&local_80);
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 != 0) {
            FUN_01d65230();
            local_68 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_68 = '\x01';
            local_70 = local_40;
            (**(code **)(*plVar9 + 0x6a8))();
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          local_130 = '\0';
          local_138 = plVar9;
          (**(code **)(*unaff_RDI + 0x450))();
          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_f8._0_4_ = local_f8._0_4_ + fVar5 + DAT_02390d00;
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
        local_c8 = CONCAT44(local_c8._4_4_,(int)lVar10);
        piVar11 = piVar11 + 1;
      } while ((int)lVar10 < *(int *)(local_40 + 0xc));
    }
    FUN_00018280();
  }
  uVar12 = (**(code **)(*unaff_RDI + 0x4d8))();
  auVar13 = insertps(local_f8,(float)local_198,0x10);
  (**(code **)(*unaff_RDI + 0x4d0))(uVar12,auVar13._0_8_);
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002b9800 — 1823 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002b9a2d) */
/* WARNING: Removing unreachable block (ram,0x002b9a33) */
/* WARNING: Removing unreachable block (ram,0x002b9a43) */
/* WARNING: Removing unreachable block (ram,0x002b9a7f) */
/* WARNING: Removing unreachable block (ram,0x002b9a84) */
/* WARNING: Removing unreachable block (ram,0x002b9a8c) */
/* WARNING: Removing unreachable block (ram,0x002b9a9e) */
/* WARNING: Removing unreachable block (ram,0x002b9c18) */
/* WARNING: Removing unreachable block (ram,0x002b9c1e) */
/* WARNING: Removing unreachable block (ram,0x002b9c24) */
/* WARNING: Removing unreachable block (ram,0x002b9c29) */
/* WARNING: Removing unreachable block (ram,0x002b9c7c) */
/* WARNING: Removing unreachable block (ram,0x002b9c81) */
/* WARNING: Removing unreachable block (ram,0x002b9c89) */
/* WARNING: Removing unreachable block (ram,0x002b9c91) */
/* WARNING: Removing unreachable block (ram,0x002b9c96) */
/* WARNING: Removing unreachable block (ram,0x002b98f1) */
/* WARNING: Removing unreachable block (ram,0x002b98fa) */

void FUN_002b9800(void)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong unaff_RDI;
  byte bVar4;
  longlong local_148;
  char local_140;
  longlong local_138;
  char local_130;
  longlong local_128;
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
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40;
  
  FUN_01e3b710();
  FUN_002ba3c0();
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fc730;
  if (DAT_026fc730 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026fc738;
  local_148 = lVar1;
  local_140 = '\x01';
  if (DAT_026fc738 != 0) {
    FUN_00d50b00();
  }
  local_138 = lVar3;
  local_130 = '\x01';
  local_128 = 0;
  local_120 = '\0';
  FUN_000bf690(&local_138,&local_148,&local_128);
  if (local_48 == 0) {
    bVar4 = 1;
    bVar2 = false;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar4 = 0;
    bVar2 = true;
  }
  else {
    local_40 = '\0';
    bVar2 = true;
    bVar4 = 0;
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
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x138);
  if (lVar1 != local_48) {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x138) = local_48;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_118 = DAT_026fc740;
  if (DAT_026fc740 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026e0f08;
  local_110 = '\x01';
  if (DAT_026e0f08 != 0) {
    FUN_00d50b00();
  }
  local_108 = lVar1;
  local_100 = '\x01';
  local_f8 = 0;
  local_f0 = '\0';
  FUN_000bf690(&local_108,&local_118,&local_f8);
  if ((bool)(bVar4 & local_48 != 0)) {
    if (local_40 == '\0') {
      FUN_00d50b00();
      bVar2 = true;
    }
    else {
      local_40 = '\0';
      bVar2 = true;
    }
  }
  else if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x140);
  if (lVar1 != local_48) {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x140) = local_48;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_e8 = DAT_026fc748;
  if (DAT_026fc748 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_027e3d10;
  local_e0 = '\x01';
  if (DAT_027e3d10 != 0) {
    FUN_00d50b00();
  }
  local_d8 = lVar1;
  local_d0 = '\x01';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_000bf690(&local_d8,&local_e8,&local_c8);
  if ((bVar2) || (local_48 == 0)) {
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    bVar2 = true;
  }
  else {
    local_40 = '\0';
    bVar2 = true;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar1 = *(longlong *)(unaff_RDI + 0x148);
  if (lVar1 != local_48) {
    if (local_48 != 0) {
      FUN_00d50b00();
    }
    *(longlong *)(unaff_RDI + 0x148) = local_48;
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b00();
  local_b8 = DAT_026fc748;
  if (DAT_026fc748 != 0) {
    FUN_00d50b00();
  }
  lVar1 = DAT_026fce70;
  local_b0 = '\x01';
  if (DAT_026fce70 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  local_a0 = '\x01';
  local_98 = 0;
  local_90 = '\0';
  FUN_000bf690(&local_a8,&local_b8,&local_98);
  lVar1 = *(longlong *)(unaff_RDI + 0x150);
  lVar3 = lVar1;
  if (lVar1 == local_48) goto LAB_002b9e81;
  lVar3 = local_48;
  if (local_40 == '\0') {
    if (local_48 == 0) {
      lVar3 = 0;
      goto LAB_002b9e1c;
    }
    FUN_00d50b00();
    lVar1 = *(longlong *)(unaff_RDI + 0x150);
    *(longlong *)(unaff_RDI + 0x150) = local_48;
  }
  else {
    local_40 = '\0';
LAB_002b9e1c:
    *(longlong *)(unaff_RDI + 0x150) = lVar3;
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
    lVar3 = local_48;
  }
LAB_002b9e81:
  if ((local_40 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @002b9220 — 1467 bytes
// str: ""handleSelectDisplayMode""
// str: ""onEditorViewContentDidChange""
// str: ""onAudioSourceDescriptionTypeChangeObserver""
// str: ""onScaleRulerViewChanged""
// str: ""MDScaleEditorSelectorView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002b9220(void)

{
  int iVar1;
  
  if (DAT_02805f50 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02709e90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fc788 = FUN_0006d940();
          _DAT_026fc770 = "MDScaleEditorSelectorView";
          _DAT_026fc778 = 0x158;
          _DAT_026fc780 = FUN_002bd650;
          _DAT_026fc790 = 0;
          uRam00000000026fc798 = 0;
          _DAT_026fc7a0 = 0;
          _DAT_026fc818 = 0;
          uRam00000000026fc820 = 0;
          _DAT_026fc828 = 0;
          DAT_026fc82a = 1;
          _DAT_026fc7a8 = 0;
          uRam00000000026fc7b0 = 0;
          _DAT_026fc7b8 = 0;
          uRam00000000026fc7c0 = 0;
          _DAT_026fc7c8 = 0;
          uRam00000000026fc7d0 = 0;
          _DAT_026fc7d8 = 0;
          uRam00000000026fc7e0 = 0;
          _DAT_026fc7e8 = 0;
          uRam00000000026fc7f0 = 0;
          _DAT_026fc7f8 = 0;
          uRam00000000026fc800 = 0;
          _DAT_026fc808 = 0;
          uRam00000000026fc810 = 0;
          DAT_026fc833 = 0;
          _DAT_026fc82b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02805f10 = "handleSelectDisplayMode";
      _DAT_02805f18 = &DAT_026fc770;
      _DAT_02805f20 = 0;
      _DAT_02805f28 = &DAT_026fc838;
      _DAT_02805f30 = FUN_002bd6a0;
      _DAT_02805f38 = 0x921;
      _DAT_02805f40 = 0;
      uRam0000000002805f48 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02805f98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02709e90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fc788 = FUN_0006d940();
          _DAT_026fc770 = "MDScaleEditorSelectorView";
          _DAT_026fc778 = 0x158;
          _DAT_026fc780 = FUN_002bd650;
          _DAT_026fc790 = 0;
          uRam00000000026fc798 = 0;
          _DAT_026fc7a0 = 0;
          _DAT_026fc818 = 0;
          uRam00000000026fc820 = 0;
          _DAT_026fc828 = 0;
          DAT_026fc82a = 1;
          _DAT_026fc7a8 = 0;
          uRam00000000026fc7b0 = 0;
          _DAT_026fc7b8 = 0;
          uRam00000000026fc7c0 = 0;
          _DAT_026fc7c8 = 0;
          uRam00000000026fc7d0 = 0;
          _DAT_026fc7d8 = 0;
          uRam00000000026fc7e0 = 0;
          _DAT_026fc7e8 = 0;
          uRam00000000026fc7f0 = 0;
          _DAT_026fc7f8 = 0;
          uRam00000000026fc800 = 0;
          _DAT_026fc808 = 0;
          uRam00000000026fc810 = 0;
          DAT_026fc833 = 0;
          _DAT_026fc82b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02805f58 = "onEditorViewContentDidChange";
      _DAT_02805f60 = &DAT_026fc770;
      _DAT_02805f68 = 0;
      _DAT_02805f70 = &DAT_026fc83c;
      _DAT_02805f78 = FUN_002bd730;
      _DAT_02805f80 = 0x929;
      _DAT_02805f88 = 0;
      uRam0000000002805f90 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02805fe0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02709e90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fc788 = FUN_0006d940();
          _DAT_026fc770 = "MDScaleEditorSelectorView";
          _DAT_026fc778 = 0x158;
          _DAT_026fc780 = FUN_002bd650;
          _DAT_026fc790 = 0;
          uRam00000000026fc798 = 0;
          _DAT_026fc7a0 = 0;
          _DAT_026fc818 = 0;
          uRam00000000026fc820 = 0;
          _DAT_026fc828 = 0;
          DAT_026fc82a = 1;
          _DAT_026fc7a8 = 0;
          uRam00000000026fc7b0 = 0;
          _DAT_026fc7b8 = 0;
          uRam00000000026fc7c0 = 0;
          _DAT_026fc7c8 = 0;
          uRam00000000026fc7d0 = 0;
          _DAT_026fc7d8 = 0;
          uRam00000000026fc7e0 = 0;
          _DAT_026fc7e8 = 0;
          uRam00000000026fc7f0 = 0;
          _DAT_026fc7f8 = 0;
          uRam00000000026fc800 = 0;
          _DAT_026fc808 = 0;
          uRam00000000026fc810 = 0;
          DAT_026fc833 = 0;
          _DAT_026fc82b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02805fa0 = "onAudioSourceDescriptionTypeChangeObserver";
      _DAT_02805fa8 = &DAT_026fc770;
      _DAT_02805fb0 = 0;
      _DAT_02805fb8 = &DAT_026fc83c;
      _DAT_02805fc0 = FUN_002bd730;
      _DAT_02805fc8 = 0x931;
      _DAT_02805fd0 = 0;
      uRam0000000002805fd8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_02806028 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_02709e90 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fc788 = FUN_0006d940();
          _DAT_026fc770 = "MDScaleEditorSelectorView";
          _DAT_026fc778 = 0x158;
          _DAT_026fc780 = FUN_002bd650;
          _DAT_026fc790 = 0;
          uRam00000000026fc798 = 0;
          _DAT_026fc7a0 = 0;
          _DAT_026fc818 = 0;
          uRam00000000026fc820 = 0;
          _DAT_026fc828 = 0;
          DAT_026fc82a = 1;
          _DAT_026fc7a8 = 0;
          uRam00000000026fc7b0 = 0;
          _DAT_026fc7b8 = 0;
          uRam00000000026fc7c0 = 0;
          _DAT_026fc7c8 = 0;
          uRam00000000026fc7d0 = 0;
          _DAT_026fc7d8 = 0;
          uRam00000000026fc7e0 = 0;
          _DAT_026fc7e8 = 0;
          uRam00000000026fc7f0 = 0;
          _DAT_026fc7f8 = 0;
          uRam00000000026fc800 = 0;
          _DAT_026fc808 = 0;
          uRam00000000026fc810 = 0;
          DAT_026fc833 = 0;
          _DAT_026fc82b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_02805fe8 = "onScaleRulerViewChanged";
      _DAT_02805ff0 = &DAT_026fc770;
      _DAT_02805ff8 = 0;
      _DAT_02806000 = &DAT_026fc83c;
      _DAT_02806008 = FUN_002bd730;
      _DAT_02806010 = 0x939;
      _DAT_02806018 = 0;
      uRam0000000002806020 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}



