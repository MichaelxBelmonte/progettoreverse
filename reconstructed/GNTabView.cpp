// Reconstructed implementation of GNTabView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNTabView.h"

// ============================================================
// @01dff500 — 2879 bytes
// str: "" (%@)""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dff7ff) */
/* WARNING: Removing unreachable block (ram,0x01dff80b) */
/* WARNING: Removing unreachable block (ram,0x01dff723) */
/* WARNING: Removing unreachable block (ram,0x01dff72f) */
/* WARNING: Removing unreachable block (ram,0x01dffc4f) */
/* WARNING: Removing unreachable block (ram,0x01dffc5b) */

void FUN_01dff500(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  longlong *plVar12;
  char cVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar19;
  float fVar26;
  undefined1 auVar20 [16];
  undefined4 uVar27;
  undefined1 auVar21 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar22 [16];
  ulonglong extraout_XMM0_Qb_01;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar30;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  float local_158;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  longlong *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  
  auVar21 = in_XMM1;
  FUN_01cb4790();
  plVar12 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar13 = FUN_01e420b0();
  if (cVar13 == '\0') {
    uVar14 = 0;
  }
  else {
    uVar14 = (**(code **)(*unaff_RDI + 0x878))();
  }
  plVar16 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar16 = (longlong)&DAT_0267ba68;
  plVar16[2] = (longlong)&DAT_0267c530;
  *(undefined4 *)(plVar16 + 0x27) = 0;
  plVar16[0x2e] = 0;
  *(undefined4 *)(plVar16 + 0x2f) = 0;
  plVar16[0x30] = 0;
  *(undefined1 *)(plVar16 + 0x31) = 0;
  plVar16[0x28] = 0;
  plVar16[0x29] = 0;
  *(undefined4 *)(plVar16 + 0x2a) = 0;
  plVar16[0x2b] = 0;
  plVar16[0x2c] = 0;
  *(undefined8 *)((longlong)plVar16 + 0x165) = 0;
  *(undefined8 *)((longlong)plVar16 + 0x18c) = 0;
  *(undefined8 *)((longlong)plVar16 + 0x194) = 0;
  *(undefined8 *)((longlong)plVar16 + 0x199) = 0;
  plVar16[0x35] = 0;
  plVar16[0x36] = 0;
  plVar16[0x37] = 0;
  plVar16[0x38] = 0;
  (*DAT_0267ba80)();
  local_98 = plVar16;
  (**(code **)(*plVar16 + 0x9f0))();
  if ((int)unaff_RDI[0x2a] == 1) {
    if ((char)unaff_RDI[0x2b] != '\0') {
      auVar22._0_8_ = FUN_01e3f820();
      auVar22._8_8_ = extraout_XMM0_Qb_00;
      if ((int)unaff_RDI[0x2a] != 0) {
        auVar4._4_4_ = auVar21._4_4_;
        auVar4._0_4_ = auVar21._4_4_ - *(float *)((longlong)unaff_RDI + 0x154);
        auVar4._8_4_ = auVar21._12_4_;
        auVar4._12_4_ = auVar21._12_4_;
        auVar21 = insertps(auVar21,auVar4,0x10);
        fVar26 = (float)((ulonglong)auVar22._0_8_ >> 0x20);
        uVar27 = (undefined4)((ulonglong)extraout_XMM0_Qb_00 >> 0x20);
        auVar5._4_4_ = fVar26;
        auVar5._0_4_ = fVar26 + *(float *)((longlong)unaff_RDI + 0x154);
        auVar5._8_4_ = uVar27;
        auVar5._12_4_ = uVar27;
        auVar22 = insertps(auVar22,auVar5,0x10);
      }
      (**(code **)(*plVar12 + 0x3c0))(auVar22._0_8_,0xb);
    }
    FUN_01e3f820();
    auVar21._0_4_ = auVar21._0_4_ + DAT_02394248;
    local_68 = insertps(auVar21,*(undefined4 *)((longlong)unaff_RDI + 0x154),0x10);
    local_1a8 = in_XMM1._0_8_;
    uStack_1a0 = in_XMM1._8_8_;
    cVar13 = FUN_00d054a0();
    if (cVar13 != '\0') {
      local_50 = (longlong *)unaff_RDI[0x28];
      uVar27 = *(undefined4 *)(unaff_RDI[0x27] + 0xc);
      local_48 = local_48 & 0xffffff00;
      uVar15 = FUN_00d237a0();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      local_1a8 = local_68._0_8_;
      uStack_1a0 = local_68._8_8_;
      (**(code **)(*plVar12 + 0x618))(uVar15,uVar27,uVar14);
    }
    pcVar11 = DAT_025795c0;
    lVar17 = unaff_RDI[0x27];
    if (*(int *)(lVar17 + 0xc) < 1) goto LAB_01e00020;
    uVar19 = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = extraout_XMM0_Qb_01;
    local_78 = auVar7 << 0x40;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_68._8_8_;
    local_68 = auVar8 << 0x40;
    plVar16 = (longlong *)0x0;
    do {
      lVar17 = *(longlong *)(lVar17 + 0x10);
      lVar1 = *(longlong *)(lVar17 + uVar19 * 8);
      if (local_78._0_8_ == lVar1) {
        if ((local_68[0] == '\0') && (local_78._0_8_ != 0)) {
          local_68._1_7_ = (int7)((ulonglong)lVar17 >> 8);
          local_68[0] = 1;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          lVar17 = FUN_00d50b00();
        }
        if ((local_68[0] == '\0') || (local_78._0_8_ == 0)) {
          local_68._1_7_ = (int7)((ulonglong)lVar17 >> 8);
          local_68[0] = 1;
          local_78._0_8_ = lVar1;
        }
        else {
          local_78._0_8_ = lVar1;
          auVar22._0_8_ = FUN_00d50b20();
          local_68._1_7_ = (int7)((ulonglong)auVar22._0_8_ >> 8);
          local_68[0] = 1;
        }
      }
      plVar18 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      *plVar18 = (longlong)&DAT_025795a8;
      (*pcVar11)();
      if (plVar18 == plVar16) {
        FUN_00d50b20();
LAB_01dff948:
        lVar17 = *(longlong *)(local_78._0_8_ + 0x28);
        plVar18 = plVar16;
        auVar22._0_8_ = local_1a8;
        uVar30 = uStack_1a0;
      }
      else {
        if (plVar16 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar16 = plVar18;
          goto LAB_01dff948;
        }
        lVar17 = *(longlong *)(local_78._0_8_ + 0x28);
        auVar22._0_8_ = local_1a8;
        uVar30 = uStack_1a0;
      }
      if (lVar17 != 0) {
        FUN_00d50b00();
        FUN_00d50b20();
        lVar17 = *(longlong *)(local_78._0_8_ + 0x28);
        if (lVar17 != 0) {
          FUN_00d50b00();
        }
        FUN_00d8dbf0();
        if (lVar17 != 0) {
          FUN_00d50b20();
        }
      }
      if (*(longlong *)(local_78._0_8_ + 0x30) != 0) {
        FUN_00d50b00();
        auVar20._0_8_ = FUN_00d50b20();
        lVar17 = *(longlong *)(local_78._0_8_ + 0x30);
        if (lVar17 == 0) {
          local_48 = 1;
          local_50 = &DAT_024c5048;
        }
        else {
          FUN_00d50b00();
          local_48 = 1;
          local_50 = &DAT_024c5048;
          local_38 = 0;
          auVar20._0_8_ = FUN_00d50b00();
        }
        local_38 = '\x01';
        local_40 = lVar17;
        FUN_00d94d80(auVar20._0_8_,&local_50);
        local_50 = &DAT_024c5048;
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar17 != 0) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x918))();
      local_158 = (float)auVar22._0_8_;
      local_1a8 = auVar22._0_8_;
      uStack_1a0 = uVar30;
      (**(code **)(*plVar12 + 0x550))();
      cVar13 = FUN_00d054a0();
      plVar16 = plVar18;
      if (cVar13 != '\0') {
        FUN_01d3a630();
        FUN_01e466c0();
        cVar13 = FUN_00d05410();
        if ((*(char *)((longlong)unaff_RDI + 0x15a) != '\0') &&
           (1 < *(int *)(unaff_RDI[0x27] + 0xc))) {
          (**(code **)(*unaff_RDI + 0x920))();
          lVar17 = DAT_02703f90;
          if (DAT_02703f90 != 0) {
            FUN_00d50b00();
          }
          FUN_01d51a40();
          plVar16 = local_50;
          if ((char)local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
              if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_48 = local_48 & 0xffffff00;
          }
          if (lVar17 != 0) {
            FUN_00d50b20();
          }
          if ((plVar16 != (longlong *)0x0) && (cVar13 == '\x01')) {
            FUN_00d05410();
            FUN_01d526f0();
            FUN_00d05510();
            auVar23._0_8_ = FUN_00d05150();
            auVar23._8_8_ = extraout_XMM0_Qb_02;
            fVar26 = (float)((ulonglong)auVar23._0_8_ >> 0x20);
            uVar27 = (undefined4)((ulonglong)extraout_XMM0_Qb_02 >> 0x20);
            auVar2._4_4_ = fVar26;
            auVar2._0_4_ = fVar26 + DAT_02390d34;
            auVar2._8_4_ = uVar27;
            auVar2._12_4_ = uVar27;
            auVar21 = insertps(auVar23,auVar2,0x10);
            FUN_01d49110(auVar21._0_8_,3);
          }
          if (plVar16 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_50 + 0x438))();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (uVar19 != *(uint *)(unaff_RDI + 0x2d)) {
          (**(code **)(*unaff_RDI + 0x640))();
          (**(code **)(*local_50 + 0x430))();
          if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        local_f0 = '\0';
        local_e8 = *unaff_RSI;
        local_e0 = '\0';
        auVar6._8_8_ = uVar30;
        auVar6._0_8_ = auVar22._0_8_;
        auVar24._4_12_ = auVar6._4_12_;
        auVar24._0_4_ = local_158 + DAT_02394248;
        local_f8 = plVar18;
        (**(code **)(*local_98 + 0xa00))(auVar24._0_8_,&local_f8);
        plVar16 = local_50;
        if (local_50 == plVar18) {
LAB_01dffd85:
          plVar16 = plVar18;
          if ((char)local_48 != '\0') {
LAB_01dffd8b:
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if ((char)local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (plVar18 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar18 = plVar16;
              goto LAB_01dffd85;
            }
            if ((char)local_48 == '\0') goto LAB_01dffd99;
            goto LAB_01dffd8b;
          }
          if (plVar18 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          local_48 = local_48 & 0xffffff00;
        }
LAB_01dffd99:
        if ((local_e0 != '\0') && (local_e8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_d8 = *unaff_RSI;
        local_d0 = '\0';
        local_c0 = '\0';
        local_c8 = plVar16;
        FUN_01e00670();
        plVar18 = local_50;
        local_a0 = 0;
        if ((char)local_48 == '\0') {
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = local_48 & 0xffffff00;
        }
        local_a0 = '\x01';
        local_a8 = plVar18;
        local_1a8 = auVar22._0_8_;
        uStack_1a0 = uVar30;
        (**(code **)(*plVar12 + 0x400))(&local_c8,0x29,&local_a8,2);
        if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x640))();
        (**(code **)(*local_50 + 0x430))();
        if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      uVar19 = uVar19 + 1;
      lVar17 = unaff_RDI[0x27];
    } while ((longlong)uVar19 < (longlong)*(int *)(lVar17 + 0xc));
    if (local_98 == (longlong *)0x0) goto LAB_01e00037;
  }
  else {
    if ((int)unaff_RDI[0x2a] == 2) {
      auVar20._0_8_ = FUN_01e3f820();
      auVar20._8_8_ = extraout_XMM0_Qb;
      local_68 = auVar21;
      if ((int)unaff_RDI[0x2a] != 0) {
        auVar3._4_4_ = auVar21._4_4_;
        auVar3._0_4_ = auVar21._4_4_ - *(float *)((longlong)unaff_RDI + 0x154);
        auVar3._8_4_ = auVar21._12_4_;
        auVar3._12_4_ = auVar21._12_4_;
        local_68 = insertps(auVar21,auVar3,0x10);
        fVar26 = (float)((ulonglong)auVar20._0_8_ >> 0x20);
        auVar28._4_4_ = fVar26;
        auVar28._0_4_ = fVar26;
        uVar27 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar28._8_4_ = uVar27;
        auVar28._12_4_ = uVar27;
        auVar29._4_12_ = auVar28._4_12_;
        auVar29._0_4_ = fVar26 + *(float *)((longlong)unaff_RDI + 0x154);
        auVar21 = insertps(auVar20,auVar29,0x10);
        auVar20._0_8_ = auVar21._0_8_;
      }
      auVar25._0_8_ = (**(code **)(*plVar12 + 0x3c8))(auVar20._0_8_,1);
      auVar25._8_8_ = extraout_XMM0_Qb_03;
      local_b8 = *unaff_RSI;
      local_b0 = '\0';
      insertps(local_68,auVar25,0x10);
      (**(code **)(*plVar12 + 0x3c0))();
      local_78._0_8_ = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_68._8_8_;
      local_68 = auVar9 << 0x40;
      if (local_b0 != '\0') {
        plVar16 = (longlong *)0x0;
        if (local_b8 == 0) goto LAB_01e0002b;
        FUN_00d50b20();
        goto LAB_01e00020;
      }
    }
    else {
LAB_01e00020:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = local_68._8_8_;
      local_68 = auVar10 << 0x40;
    }
    local_78._0_8_ = 0;
    plVar16 = (longlong *)0x0;
  }
LAB_01e0002b:
  FUN_00d50b20();
LAB_01e00037:
  if (plVar16 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_68[0] != '\0') && (local_78._0_8_ != 0)) {
    FUN_00d50b20();
  }
  if (plVar12 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dfd890 — 2398 bytes
// str: ""GNTabView""
// str: ""_editItemIndex""
// str: ""_editByInsertingItemAtIndex""
// str: ""_editByRemoveItem""
// str: ""_editShowsTabs""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dfd890(void)

{
  int iVar1;
  
  if (DAT_028b8ed0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa280 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f24c8 = FUN_0006d940();
          _DAT_026f24b0 = "GNTabView";
          _DAT_026f24b8 = 0x170;
          _DAT_026f24c0 = FUN_001f41f0;
          _DAT_026f24d0 = 0;
          uRam00000000026f24d8 = 0;
          _DAT_026f24e0 = 0;
          uRam00000000026f24e8 = 0;
          _DAT_026f24f0 = 0;
          uRam00000000026f24f8 = 0;
          _DAT_026f2500 = 0;
          uRam00000000026f2508 = 0;
          _DAT_026f2510 = 0;
          uRam00000000026f2518 = 0;
          _DAT_026f2520 = 0;
          uRam00000000026f2528 = 0;
          _DAT_026f2530 = 0;
          uRam00000000026f2538 = 0;
          _DAT_026f2540 = 0;
          uRam00000000026f2548 = 0;
          _DAT_026f2550 = 0;
          uRam00000000026f2558 = 0;
          _DAT_026f2560 = 0;
          uRam00000000026f2568 = 0;
          _DAT_026f2570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8e90 = "_editItemIndex";
      _DAT_028b8e98 = &DAT_026f24b0;
      _DAT_028b8ea0 = 0;
      _DAT_028b8ea8 = &DAT_027f3020;
      _DAT_028b8eb0 = FUN_01e04270;
      _DAT_028b8eb8 = FUN_01dfe220;
      _DAT_028b8ec0 = 0;
      uRam00000000028b8ec8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8f18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa280 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f24c8 = FUN_0006d940();
          _DAT_026f24b0 = "GNTabView";
          _DAT_026f24b8 = 0x170;
          _DAT_026f24c0 = FUN_001f41f0;
          _DAT_026f24d0 = 0;
          uRam00000000026f24d8 = 0;
          _DAT_026f24e0 = 0;
          uRam00000000026f24e8 = 0;
          _DAT_026f24f0 = 0;
          uRam00000000026f24f8 = 0;
          _DAT_026f2500 = 0;
          uRam00000000026f2508 = 0;
          _DAT_026f2510 = 0;
          uRam00000000026f2518 = 0;
          _DAT_026f2520 = 0;
          uRam00000000026f2528 = 0;
          _DAT_026f2530 = 0;
          uRam00000000026f2538 = 0;
          _DAT_026f2540 = 0;
          uRam00000000026f2548 = 0;
          _DAT_026f2550 = 0;
          uRam00000000026f2558 = 0;
          _DAT_026f2560 = 0;
          uRam00000000026f2568 = 0;
          _DAT_026f2570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8ed8 = "_editByInsertingItemAtIndex";
      _DAT_028b8ee0 = &DAT_026f24b0;
      _DAT_028b8ee8 = 0;
      _DAT_028b8ef0 = &DAT_027f3020;
      _DAT_028b8ef8 = FUN_01e04270;
      _DAT_028b8f00 = FUN_01dfe2d0;
      _DAT_028b8f08 = 0;
      uRam00000000028b8f10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8f60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa280 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f24c8 = FUN_0006d940();
          _DAT_026f24b0 = "GNTabView";
          _DAT_026f24b8 = 0x170;
          _DAT_026f24c0 = FUN_001f41f0;
          _DAT_026f24d0 = 0;
          uRam00000000026f24d8 = 0;
          _DAT_026f24e0 = 0;
          uRam00000000026f24e8 = 0;
          _DAT_026f24f0 = 0;
          uRam00000000026f24f8 = 0;
          _DAT_026f2500 = 0;
          uRam00000000026f2508 = 0;
          _DAT_026f2510 = 0;
          uRam00000000026f2518 = 0;
          _DAT_026f2520 = 0;
          uRam00000000026f2528 = 0;
          _DAT_026f2530 = 0;
          uRam00000000026f2538 = 0;
          _DAT_026f2540 = 0;
          uRam00000000026f2548 = 0;
          _DAT_026f2550 = 0;
          uRam00000000026f2558 = 0;
          _DAT_026f2560 = 0;
          uRam00000000026f2568 = 0;
          _DAT_026f2570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8f20 = "_editByRemoveItem";
      _DAT_028b8f28 = &DAT_026f24b0;
      _DAT_028b8f30 = 0;
      _DAT_028b8f38 = &DAT_027f3024;
      _DAT_028b8f40 = FUN_01e042f0;
      _DAT_028b8f48 = FUN_01dfe3d0;
      _DAT_028b8f50 = 0;
      uRam00000000028b8f58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8fa8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa280 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f24c8 = FUN_0006d940();
          _DAT_026f24b0 = "GNTabView";
          _DAT_026f24b8 = 0x170;
          _DAT_026f24c0 = FUN_001f41f0;
          _DAT_026f24d0 = 0;
          uRam00000000026f24d8 = 0;
          _DAT_026f24e0 = 0;
          uRam00000000026f24e8 = 0;
          _DAT_026f24f0 = 0;
          uRam00000000026f24f8 = 0;
          _DAT_026f2500 = 0;
          uRam00000000026f2508 = 0;
          _DAT_026f2510 = 0;
          uRam00000000026f2518 = 0;
          _DAT_026f2520 = 0;
          uRam00000000026f2528 = 0;
          _DAT_026f2530 = 0;
          uRam00000000026f2538 = 0;
          _DAT_026f2540 = 0;
          uRam00000000026f2548 = 0;
          _DAT_026f2550 = 0;
          uRam00000000026f2558 = 0;
          _DAT_026f2560 = 0;
          uRam00000000026f2568 = 0;
          _DAT_026f2570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8f68 = "_editShowsTabs";
      _DAT_028b8f70 = &DAT_026f24b0;
      _DAT_028b8f78 = 0;
      _DAT_028b8f80 = &DAT_027f3027;
      _DAT_028b8f88 = FUN_01e04370;
      _DAT_028b8f90 = FUN_01dfe4c0;
      _DAT_028b8f98 = 0;
      uRam00000000028b8fa0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8ff0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa280 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f24c8 = FUN_0006d940();
          _DAT_026f24b0 = "GNTabView";
          _DAT_026f24b8 = 0x170;
          _DAT_026f24c0 = FUN_001f41f0;
          _DAT_026f24d0 = 0;
          uRam00000000026f24d8 = 0;
          _DAT_026f24e0 = 0;
          uRam00000000026f24e8 = 0;
          _DAT_026f24f0 = 0;
          uRam00000000026f24f8 = 0;
          _DAT_026f2500 = 0;
          uRam00000000026f2508 = 0;
          _DAT_026f2510 = 0;
          uRam00000000026f2518 = 0;
          _DAT_026f2520 = 0;
          uRam00000000026f2528 = 0;
          _DAT_026f2530 = 0;
          uRam00000000026f2538 = 0;
          _DAT_026f2540 = 0;
          uRam00000000026f2548 = 0;
          _DAT_026f2550 = 0;
          uRam00000000026f2558 = 0;
          _DAT_026f2560 = 0;
          uRam00000000026f2568 = 0;
          _DAT_026f2570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8fb0 = "_editControlMode";
      _DAT_028b8fb8 = &DAT_026f24b0;
      _DAT_028b8fc0 = 0;
      _DAT_028b8fc8 = &DAT_027f302a;
      _DAT_028b8fd0 = FUN_01e04390;
      _DAT_028b8fd8 = FUN_01dfe560;
      _DAT_028b8fe0 = 0;
      uRam00000000028b8fe8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b9038 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa280 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f24c8 = FUN_0006d940();
          _DAT_026f24b0 = "GNTabView";
          _DAT_026f24b8 = 0x170;
          _DAT_026f24c0 = FUN_001f41f0;
          _DAT_026f24d0 = 0;
          uRam00000000026f24d8 = 0;
          _DAT_026f24e0 = 0;
          uRam00000000026f24e8 = 0;
          _DAT_026f24f0 = 0;
          uRam00000000026f24f8 = 0;
          _DAT_026f2500 = 0;
          uRam00000000026f2508 = 0;
          _DAT_026f2510 = 0;
          uRam00000000026f2518 = 0;
          _DAT_026f2520 = 0;
          uRam00000000026f2528 = 0;
          _DAT_026f2530 = 0;
          uRam00000000026f2538 = 0;
          _DAT_026f2540 = 0;
          uRam00000000026f2548 = 0;
          _DAT_026f2550 = 0;
          uRam00000000026f2558 = 0;
          _DAT_026f2560 = 0;
          uRam00000000026f2568 = 0;
          _DAT_026f2570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8ff8 = "setSelectedItemIndex";
      _DAT_028b9000 = &DAT_026f24b0;
      _DAT_028b9008 = 0;
      _DAT_028b9010 = &DAT_027f302a;
      _DAT_028b9018 = FUN_01e04390;
      _DAT_028b9020 = FUN_01dfe5c0;
      _DAT_028b9028 = 0;
      uRam00000000028b9030 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b9080 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa280 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f24c8 = FUN_0006d940();
          _DAT_026f24b0 = "GNTabView";
          _DAT_026f24b8 = 0x170;
          _DAT_026f24c0 = FUN_001f41f0;
          _DAT_026f24d0 = 0;
          uRam00000000026f24d8 = 0;
          _DAT_026f24e0 = 0;
          uRam00000000026f24e8 = 0;
          _DAT_026f24f0 = 0;
          uRam00000000026f24f8 = 0;
          _DAT_026f2500 = 0;
          uRam00000000026f2508 = 0;
          _DAT_026f2510 = 0;
          uRam00000000026f2518 = 0;
          _DAT_026f2520 = 0;
          uRam00000000026f2528 = 0;
          _DAT_026f2530 = 0;
          uRam00000000026f2538 = 0;
          _DAT_026f2540 = 0;
          uRam00000000026f2548 = 0;
          _DAT_026f2550 = 0;
          uRam00000000026f2558 = 0;
          _DAT_026f2560 = 0;
          uRam00000000026f2568 = 0;
          _DAT_026f2570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b9040 = "getSelectedItemIndex";
      _DAT_028b9048 = &DAT_026f24b0;
      _DAT_028b9050 = 0;
      _DAT_028b9058 = &DAT_027f302d;
      _DAT_028b9060 = FUN_01e043b0;
      _DAT_028b9068 = FUN_01dfe5d0;
      _DAT_028b9070 = 0;
      uRam00000000028b9078 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @001f42d0 — 1469 bytes
// str: ""GNTabView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001f42d0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_0269b358;
  unaff_RDI[2] = &DAT_0269bca0;
  FUN_001f4910();
  FUN_001f4c20();
  FUN_001f4f00();
  *(undefined4 *)(unaff_RDI + 0x2a) = 0;
  if (DAT_027fa280 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f24c8 = FUN_0006d940();
      _DAT_026f24b0 = "GNTabView";
      _DAT_026f24b8 = 0x170;
      _DAT_026f24c0 = FUN_001f41f0;
      _DAT_026f24d0 = 0;
      uRam00000000026f24d8 = 0;
      _DAT_026f24e0 = 0;
      uRam00000000026f24e8 = 0;
      _DAT_026f24f0 = 0;
      uRam00000000026f24f8 = 0;
      _DAT_026f2500 = 0;
      uRam00000000026f2508 = 0;
      _DAT_026f2510 = 0;
      uRam00000000026f2518 = 0;
      _DAT_026f2520 = 0;
      uRam00000000026f2528 = 0;
      _DAT_026f2530 = 0;
      uRam00000000026f2538 = 0;
      _DAT_026f2540 = 0;
      uRam00000000026f2548 = 0;
      _DAT_026f2550 = 0;
      uRam00000000026f2558 = 0;
      _DAT_026f2560 = 0;
      _uRam00000000026f2568 = 0;
      _DAT_026f2570 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f256b == '\0') {
    FUN_001f5240();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x154) = 0;
  if (DAT_027fa280 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f24c8 = FUN_0006d940();
      _DAT_026f24b0 = "GNTabView";
      _DAT_026f24b8 = 0x170;
      _DAT_026f24c0 = FUN_001f41f0;
      _DAT_026f24d0 = 0;
      uRam00000000026f24d8 = 0;
      _DAT_026f24e0 = 0;
      uRam00000000026f24e8 = 0;
      _DAT_026f24f0 = 0;
      uRam00000000026f24f8 = 0;
      _DAT_026f2500 = 0;
      uRam00000000026f2508 = 0;
      _DAT_026f2510 = 0;
      uRam00000000026f2518 = 0;
      _DAT_026f2520 = 0;
      uRam00000000026f2528 = 0;
      _DAT_026f2530 = 0;
      uRam00000000026f2538 = 0;
      _DAT_026f2540 = 0;
      uRam00000000026f2548 = 0;
      _DAT_026f2550 = 0;
      uRam00000000026f2558 = 0;
      _DAT_026f2560 = 0;
      _uRam00000000026f2568 = 0;
      _DAT_026f2570 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f256b == '\0') {
    FUN_001f5470();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x2b) = 0;
  if (DAT_027fa280 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f24c8 = FUN_0006d940();
      _DAT_026f24b0 = "GNTabView";
      _DAT_026f24b8 = 0x170;
      _DAT_026f24c0 = FUN_001f41f0;
      _DAT_026f24d0 = 0;
      uRam00000000026f24d8 = 0;
      _DAT_026f24e0 = 0;
      uRam00000000026f24e8 = 0;
      _DAT_026f24f0 = 0;
      uRam00000000026f24f8 = 0;
      _DAT_026f2500 = 0;
      uRam00000000026f2508 = 0;
      _DAT_026f2510 = 0;
      uRam00000000026f2518 = 0;
      _DAT_026f2520 = 0;
      uRam00000000026f2528 = 0;
      _DAT_026f2530 = 0;
      uRam00000000026f2538 = 0;
      _DAT_026f2540 = 0;
      uRam00000000026f2548 = 0;
      _DAT_026f2550 = 0;
      uRam00000000026f2558 = 0;
      _DAT_026f2560 = 0;
      _uRam00000000026f2568 = 0;
      _DAT_026f2570 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f256b == '\0') {
    FUN_001f55e0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x159) = 0;
  if (DAT_027fa280 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f24c8 = FUN_0006d940();
      _DAT_026f24b0 = "GNTabView";
      _DAT_026f24b8 = 0x170;
      _DAT_026f24c0 = FUN_001f41f0;
      _DAT_026f24d0 = 0;
      uRam00000000026f24d8 = 0;
      _DAT_026f24e0 = 0;
      uRam00000000026f24e8 = 0;
      _DAT_026f24f0 = 0;
      uRam00000000026f24f8 = 0;
      _DAT_026f2500 = 0;
      uRam00000000026f2508 = 0;
      _DAT_026f2510 = 0;
      uRam00000000026f2518 = 0;
      _DAT_026f2520 = 0;
      uRam00000000026f2528 = 0;
      _DAT_026f2530 = 0;
      uRam00000000026f2538 = 0;
      _DAT_026f2540 = 0;
      uRam00000000026f2548 = 0;
      _DAT_026f2550 = 0;
      uRam00000000026f2558 = 0;
      _DAT_026f2560 = 0;
      _uRam00000000026f2568 = 0;
      _DAT_026f2570 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f256b == '\0') {
    FUN_001f5750();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x15a) = 0;
  if (DAT_027fa280 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f24c8 = FUN_0006d940();
      _DAT_026f24b0 = "GNTabView";
      _DAT_026f24b8 = 0x170;
      _DAT_026f24c0 = FUN_001f41f0;
      _DAT_026f24d0 = 0;
      uRam00000000026f24d8 = 0;
      _DAT_026f24e0 = 0;
      uRam00000000026f24e8 = 0;
      _DAT_026f24f0 = 0;
      uRam00000000026f24f8 = 0;
      _DAT_026f2500 = 0;
      uRam00000000026f2508 = 0;
      _DAT_026f2510 = 0;
      uRam00000000026f2518 = 0;
      _DAT_026f2520 = 0;
      uRam00000000026f2528 = 0;
      _DAT_026f2530 = 0;
      uRam00000000026f2538 = 0;
      _DAT_026f2540 = 0;
      uRam00000000026f2548 = 0;
      _DAT_026f2550 = 0;
      uRam00000000026f2558 = 0;
      _DAT_026f2560 = 0;
      _uRam00000000026f2568 = 0;
      _DAT_026f2570 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f256b == '\0') {
    FUN_001f58c0();
    FUN_00e87980();
  }
  FUN_001f5a30();
  *(undefined4 *)(unaff_RDI + 0x2d) = 0;
  if (DAT_027fa280 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f24c8 = FUN_0006d940();
      _DAT_026f24b0 = "GNTabView";
      _DAT_026f24b8 = 0x170;
      _DAT_026f24c0 = FUN_001f41f0;
      _DAT_026f24d0 = 0;
      uRam00000000026f24d8 = 0;
      _DAT_026f24e0 = 0;
      uRam00000000026f24e8 = 0;
      _DAT_026f24f0 = 0;
      uRam00000000026f24f8 = 0;
      _DAT_026f2500 = 0;
      uRam00000000026f2508 = 0;
      _DAT_026f2510 = 0;
      uRam00000000026f2518 = 0;
      _DAT_026f2520 = 0;
      uRam00000000026f2528 = 0;
      _DAT_026f2530 = 0;
      uRam00000000026f2538 = 0;
      _DAT_026f2540 = 0;
      uRam00000000026f2548 = 0;
      _DAT_026f2550 = 0;
      uRam00000000026f2558 = 0;
      _DAT_026f2560 = 0;
      _uRam00000000026f2568 = 0;
      _DAT_026f2570 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f256b == '\0') {
    FUN_001f5d20();
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @01e00730 — 1254 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e00b86) */
/* WARNING: Removing unreachable block (ram,0x01e00b8f) */

void FUN_01e00730(undefined8 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *unaff_RDI;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong local_38;
  char local_30;
  
  if ((int)unaff_RDI[0x2a] != 1) goto LAB_01e00aa1;
  FUN_01d3abf0();
  uVar8 = FUN_01e466c0();
  iVar5 = -1;
  if (0 < *(int *)(unaff_RDI[0x27] + 0xc)) {
    iVar7 = 0;
    uVar9 = param_2;
    do {
      param_2 = (**(code **)(*unaff_RDI + 0x918))();
      cVar3 = FUN_00d05410(uVar8,param_2,uVar9);
      if (cVar3 != '\0') {
        iVar4 = FUN_01d3a5a0();
        iVar5 = iVar7;
        goto joined_r0x01e007d8;
      }
      iVar7 = iVar7 + 1;
      uVar9 = param_2;
    } while (iVar7 < *(int *)(unaff_RDI[0x27] + 0xc));
  }
  iVar4 = FUN_01d3a5a0();
joined_r0x01e007d8:
  if ((iVar4 == 1) && (iVar7 = FUN_01d3b630(), iVar7 == 1)) {
    if (iVar5 != -1) {
      if ((*(char *)((longlong)unaff_RDI + 0x15a) != '\0') && (1 < *(int *)(unaff_RDI[0x27] + 0xc)))
      {
        uVar9 = (**(code **)(*unaff_RDI + 0x920))();
        cVar3 = FUN_00d05410(uVar8,uVar9,param_2);
        if (cVar3 != '\0') {
          plVar1 = (longlong *)unaff_RDI[0x29];
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          uVar8 = FUN_00d50b00();
          (**(code **)(*plVar1 + 0x30))(uVar8,iVar5);
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
            return;
          }
          return;
        }
      }
      FUN_01e00d40();
      return;
    }
  }
  else {
    iVar7 = FUN_01d3a5a0();
    if (iVar7 == 5) {
      if (iVar5 != -1) {
        *(int *)(unaff_RDI + 0x2d) = iVar5;
        cVar3 = FUN_01e45650();
        if (cVar3 == '\0') {
          (**(code **)(*unaff_RDI + 0x740))();
        }
      }
      if (*(char *)((longlong)unaff_RDI + 0x15a) == '\0') {
        if (((*(char *)((longlong)unaff_RDI + 0x159) != '\0') &&
            (1 < *(int *)(unaff_RDI[0x27] + 0xc))) && (iVar5 != -1)) {
          *(undefined1 *)((longlong)unaff_RDI + 0x15a) = 1;
          (**(code **)(*unaff_RDI + 0x740))();
          if (*(char *)((longlong)unaff_RDI + 0x15a) != '\0') goto LAB_01e008e0;
        }
        cVar3 = (**(code **)(*unaff_RDI + 0x750))();
        if (cVar3 != '\0') goto LAB_01e008e0;
      }
      else {
LAB_01e008e0:
        (**(code **)(*unaff_RDI + 0x620))();
      }
      if ((iVar5 == -1) && (cVar3 = FUN_01e45650(), cVar3 != '\0')) {
        FUN_01e42030();
        if ((local_30 != '\0') && (local_38 != 0)) {
          FUN_00d50b20();
        }
        if (local_38 != 0) {
          FUN_01e42030();
          FUN_00d50b00();
          FUN_01d8fc00();
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_30 != '\0') && (local_38 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
  }
  if ((int)unaff_RDI[0x2a] == 1) {
    iVar5 = FUN_01d3a5a0();
    if ((((iVar5 == 9) && (uVar6 = FUN_01d3b590(), (uVar6 & 0x100) != 0)) &&
        (cVar3 = (**(code **)(*unaff_RDI + 0x878))(), cVar3 != '\0')) &&
       (cVar3 = FUN_01e420b0(), cVar3 != '\0')) {
      iVar5 = FUN_01dfe5d0();
      if (iVar5 < 1) {
        if (unaff_RDI[0x27] != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      FUN_01e00d40();
      return;
    }
    if ((((int)unaff_RDI[0x2a] == 1) && (iVar5 = FUN_01d3a5a0(), iVar5 == 9)) &&
       ((uVar6 = FUN_01d3b590(), (uVar6 & 0x200) != 0 &&
        ((cVar3 = (**(code **)(*unaff_RDI + 0x878))(), cVar3 != '\0' &&
         (cVar3 = FUN_01e420b0(), cVar3 != '\0')))))) {
      FUN_01dfe5d0();
      if (unaff_RDI[0x27] != 0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      FUN_01e00d40();
      return;
    }
  }
LAB_01e00aa1:
  iVar5 = FUN_01d3a5a0();
  if (((iVar5 == 2) && (cVar3 = (**(code **)(*unaff_RDI + 0x878))(), cVar3 != '\0')) &&
     (cVar3 = FUN_01e420b0(), cVar3 != '\0')) {
    FUN_01d3b5d0();
    iVar5 = FUN_00d8d560();
    if ((local_30 != '\0') && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (iVar5 != 0) {
      if (iVar5 < 0) {
        iVar5 = 1;
      }
      lVar2 = unaff_RDI[0x27];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      iVar7 = *(int *)(lVar2 + 0xc);
      FUN_00d50b20();
      if (iVar7 <= iVar5) {
        if (unaff_RDI[0x27] != 0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      FUN_01e00d40();
      return;
    }
  }
  FUN_01e459c0();
  return;
}




// ============================================================
// @01e01250 — 923 bytes
// ============================================================

void FUN_01e01250(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  float fVar9;
  undefined8 extraout_XMM0_Qb;
  undefined4 uVar10;
  undefined1 auVar8 [16];
  undefined1 in_XMM1 [16];
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_40;
  char local_38;
  
  lVar1 = *unaff_RSI;
  if (((lVar1 == 0) || (*(char *)(lVar1 + 0x60) != '\0')) && (unaff_RDI[0x28] != lVar1)) {
    plVar5 = (longlong *)unaff_RDI[0x29];
    if (plVar5 != (longlong *)0x0) {
      auVar8._0_8_ = FUN_00d50b00();
      local_a8 = *unaff_RSI;
      local_a0 = '\0';
      (**(code **)(*plVar5 + 0x18))(auVar8._0_8_,&local_a8);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    if (unaff_RDI[0x28] != 0) {
      plVar5 = *(longlong **)(unaff_RDI[0x28] + 0x20);
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar5 + 0x478))();
      FUN_00d50b20();
    }
    lVar1 = *unaff_RSI;
    unaff_RDI[0x28] = lVar1;
    if (lVar1 == 0) {
      bVar6 = false;
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar1 + 0x20);
      bVar6 = plVar5 == (longlong *)0x0;
      if (bVar6) {
        plVar5 = (longlong *)0x0;
      }
      else {
        FUN_00d50b00();
      }
      bVar6 = !bVar6;
      auVar8._0_8_ = FUN_01e3f820();
      auVar8._8_8_ = extraout_XMM0_Qb;
      if ((int)unaff_RDI[0x2a] != 0) {
        auVar3._4_4_ = in_XMM1._4_4_;
        auVar3._0_4_ = in_XMM1._4_4_ - *(float *)((longlong)unaff_RDI + 0x154);
        auVar3._8_4_ = in_XMM1._12_4_;
        auVar3._12_4_ = in_XMM1._12_4_;
        insertps(in_XMM1,auVar3,0x10);
        fVar9 = (float)((ulonglong)auVar8._0_8_ >> 0x20);
        uVar10 = (undefined4)((ulonglong)extraout_XMM0_Qb >> 0x20);
        auVar4._4_4_ = fVar9;
        auVar4._0_4_ = fVar9 + *(float *)((longlong)unaff_RDI + 0x154);
        auVar4._8_4_ = uVar10;
        auVar4._12_4_ = uVar10;
        auVar8 = insertps(auVar8,auVar4,0x10);
      }
      (**(code **)(*plVar5 + 0x4d0))(auVar8._0_8_);
      local_90 = '\0';
      local_98 = plVar5;
      (**(code **)(*unaff_RDI + 0x450))();
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (*(longlong *)(unaff_RDI[0x28] + 0x48) != 0) {
        FUN_00d50b00();
        FUN_01e42030();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (local_40 != 0) {
          FUN_01e42030();
          local_88 = *(longlong *)(unaff_RDI[0x28] + 0x48);
          if (local_88 != 0) {
            FUN_00d50b00();
          }
          local_80 = '\x01';
          FUN_01d8c820();
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    if (((*(uint *)(unaff_RDI + 0x2a) & 0xfffffffe) == 2) &&
       (plVar2 = (longlong *)unaff_RDI[0x2c], plVar2 != (longlong *)0x0)) {
      FUN_01dfe5d0();
      (**(code **)(*plVar2 + 0x918))();
    }
    plVar2 = (longlong *)unaff_RDI[0x29];
    if (plVar2 != (longlong *)0x0) {
      auVar8._0_8_ = FUN_00d50b00();
      local_78 = *unaff_RSI;
      local_70 = '\0';
      (**(code **)(*plVar2 + 0x20))(auVar8._0_8_,&local_78);
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_01e42030();
    if (local_40 == 0) {
      bVar7 = false;
    }
    else {
      FUN_01e4c160();
      bVar7 = local_b8 != 0;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      FUN_01e42030();
      FUN_01d86b20();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*unaff_RDI + 0x620))();
    if ((bVar6) && (plVar5 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01dfebd0 — 820 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dfee90) */
/* WARNING: Removing unreachable block (ram,0x01dfee99) */

void FUN_01dfebd0(void)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int unaff_ESI;
  longlong *unaff_RDI;
  
  if ((int)unaff_RDI[0x2a] == unaff_ESI) {
    return;
  }
  if (((longlong *)unaff_RDI[0x2c] != (longlong *)0x0) &&
     ((**(code **)(*(longlong *)unaff_RDI[0x2c] + 0x478))(), unaff_RDI[0x2c] != 0)) {
    unaff_RDI[0x2c] = 0;
    FUN_00d50b20();
  }
  *(int *)(unaff_RDI + 0x2a) = unaff_ESI;
  if (unaff_ESI == 3) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar3 + 0x27) = 0;
    puVar3[0x2e] = 0;
    *(undefined4 *)(puVar3 + 0x2f) = 0;
    puVar3[0x30] = 0;
    *(undefined1 *)(puVar3 + 0x31) = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    *(undefined4 *)(puVar3 + 0x2a) = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x199) = 0;
    puVar3[0x35] = 0;
    puVar3[0x36] = 0;
    puVar3[0x37] = 0;
    puVar3[0x38] = 0;
    *puVar3 = &DAT_026ab048;
    puVar3[2] = &DAT_026abb78;
    puVar3[0x3d] = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1d4) = 0;
    *(undefined8 *)((longlong)puVar3 + 0x1dc) = 0;
    puVar3[0x39] = 0;
    puVar3[0x3a] = 0;
    (*DAT_026ab060)();
    puVar4 = (undefined8 *)unaff_RDI[0x2c];
    if (puVar4 == puVar3) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x2c] = (longlong)puVar3;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_0006daf0();
    *(undefined4 *)(puVar4 + 0x27) = 0;
    puVar4[0x2e] = 0;
    *(undefined4 *)(puVar4 + 0x2f) = 0;
    puVar4[0x30] = 0;
    *(undefined1 *)(puVar4 + 0x31) = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    *(undefined4 *)(puVar4 + 0x2a) = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    *(undefined8 *)((longlong)puVar4 + 0x165) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x18c) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x194) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x199) = 0;
    puVar4[0x35] = 0;
    puVar4[0x36] = 0;
    puVar4[0x37] = 0;
    puVar4[0x38] = 0;
    *puVar4 = &DAT_02677e10;
    puVar4[2] = &DAT_026788e8;
    puVar4[0x39] = &DAT_02678928;
    *(undefined4 *)((longlong)puVar4 + 500) = 0;
    *(undefined1 *)(puVar4 + 0x3f) = 0;
    puVar4[0x43] = 0;
    puVar4[0x3c] = 0;
    puVar4[0x3d] = 0;
    puVar4[0x3a] = 0;
    puVar4[0x3b] = 0;
    *(undefined1 *)(puVar4 + 0x3e) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x1fc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x204) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x20c) = 0;
    (*DAT_02677e28)();
    (**(code **)(*(longlong *)unaff_RDI[0x2c] + 0xab8))();
    FUN_00d50b20();
  }
  else if (unaff_ESI == 2) {
    plVar2 = (longlong *)FUN_00e8fc40();
    FUN_001e3c20();
    (**(code **)(*plVar2 + 0x18))();
    plVar1 = (longlong *)unaff_RDI[0x2c];
    if (plVar1 == plVar2) {
      FUN_00d50b20();
    }
    else {
      unaff_RDI[0x2c] = (longlong)plVar2;
      if (plVar1 == (longlong *)0x0) goto LAB_01dfeead;
      FUN_00d50b20();
    }
  }
  plVar2 = (longlong *)unaff_RDI[0x2c];
LAB_01dfeead:
  if (plVar2 != (longlong *)0x0) {
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RDI + 0x450))();
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_01dfef90();
    FUN_01dff100();
  }
  return;
}




// ============================================================
// @01dff100 — 730 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dff100(void)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  longlong local_78;
  char local_70;
  longlong *local_48;
  undefined1 auVar10 [12];
  undefined8 extraout_XMM0_Qb_00;
  
  auVar10 = in_XMM0._4_12_;
  lVar1 = unaff_RDI[0x2c];
  if (lVar1 == 0) {
    iVar4 = (int)unaff_RDI[0x2a];
joined_r0x01dff16b:
    bVar3 = true;
    local_48 = (longlong *)0x0;
    if (iVar4 != 2) goto LAB_01dff171;
LAB_01dff2a9:
    if (lVar1 != 0) {
      FUN_01d6f8d0();
      lVar6 = unaff_RDI[0x27];
      if (0 < *(int *)(lVar6 + 0xc)) {
        lVar5 = 0;
        do {
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar5 * 8);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          lVar6 = *(longlong *)(lVar6 + 0x28);
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          FUN_01d6f990();
          if (lVar6 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          lVar5 = lVar5 + 1;
          lVar6 = unaff_RDI[0x27];
        } while (lVar5 < *(int *)(lVar6 + 0xc));
      }
      if (((*(uint *)(unaff_RDI + 0x2a) & 0xfffffffe) == 2) &&
         (plVar2 = (longlong *)unaff_RDI[0x2c], plVar2 != (longlong *)0x0)) {
        FUN_01dfe5d0();
        (**(code **)(*plVar2 + 0x918))();
      }
    }
  }
  else {
    auVar9._0_8_ = FUN_00d50b00();
    auVar9._8_8_ = extraout_XMM0_Qb;
    auVar10 = auVar9._4_12_;
    local_48 = (longlong *)unaff_RDI[0x2c];
    if (local_48 == (longlong *)0x0) {
      iVar4 = (int)unaff_RDI[0x2a];
      goto joined_r0x01dff16b;
    }
    auVar7._0_8_ = FUN_00d50b00();
    auVar7._8_8_ = extraout_XMM0_Qb_00;
    auVar10 = auVar7._4_12_;
    bVar3 = false;
    iVar4 = (int)unaff_RDI[0x2a];
    if (iVar4 == 2) goto LAB_01dff2a9;
LAB_01dff171:
    if (iVar4 == 3) {
      if (bVar3) goto LAB_01dff3c0;
      auVar8._0_4_ = (float)*(int *)(unaff_RDI[0x27] + 0xc);
      auVar8._4_12_ = auVar10;
      auVar9 = blendps(auVar8,_DAT_023b1620,0xe);
      (**(code **)(*local_48 + 0xad8))(auVar9._0_8_);
      if (0 < *(int *)(unaff_RDI[0x27] + 0xc)) {
        lVar6 = 0;
        do {
          (**(code **)(*local_48 + 0x4a0))();
          plVar2 = *(longlong **)(*(longlong *)(local_78 + 0x10) + lVar6 * 8);
          lVar5 = *(longlong *)(*(longlong *)(unaff_RDI[0x27] + 0x10) + lVar6 * 8);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          lVar5 = *(longlong *)(lVar5 + 0x28);
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar2 + 0x958))();
          if (lVar5 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(unaff_RDI[0x27] + 0xc));
      }
      if (((*(uint *)(unaff_RDI + 0x2a) & 0xfffffffe) == 2) &&
         (plVar2 = (longlong *)unaff_RDI[0x2c], plVar2 != (longlong *)0x0)) {
        FUN_01dfe5d0();
        (**(code **)(*plVar2 + 0x918))();
      }
    }
    else {
      (**(code **)(*unaff_RDI + 0x620))();
    }
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
LAB_01dff3c0:
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @001899f0 — 574 bytes
// str: ""GNTabView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00189b57) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001899f0(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_1c8;
  longlong local_1a0;
  undefined8 *local_58;
  
  if ((DAT_027fa280 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_026f24c8 = FUN_0006d940();
    _DAT_026f24b0 = "GNTabView";
    _DAT_026f24b8 = 0x170;
    _DAT_026f24c0 = FUN_001f41f0;
    _DAT_026f24d0 = 0;
    uRam00000000026f24d8 = 0;
    _DAT_026f24e0 = 0;
    uRam00000000026f24e8 = 0;
    _DAT_026f24f0 = 0;
    uRam00000000026f24f8 = 0;
    _DAT_026f2500 = 0;
    uRam00000000026f2508 = 0;
    _DAT_026f2510 = 0;
    uRam00000000026f2518 = 0;
    _DAT_026f2520 = 0;
    uRam00000000026f2528 = 0;
    _DAT_026f2530 = 0;
    uRam00000000026f2538 = 0;
    _DAT_026f2540 = 0;
    uRam00000000026f2548 = 0;
    _DAT_026f2550 = 0;
    uRam00000000026f2558 = 0;
    _DAT_026f2560 = 0;
    _uRam00000000026f2568 = 0;
    _DAT_026f2570 = 0;
    ___cxa_guard_release();
  }
  if (DAT_026f256b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    local_58 = (undefined8 *)0x0;
    if (1 < DAT_02802630) {
      local_58 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *local_58 = &DAT_02572358;
      (*DAT_02572370)();
    }
    FUN_00d50c00();
    FUN_001f42d0();
    FUN_00d50c00();
    FUN_00e87770();
    uVar2 = FUN_01dfd890();
    FUN_00e87920(uVar2,0);
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    if (local_1c8 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    if (local_58 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
  }
  return;
}




// ============================================================
// @001f5240 — 519 bytes
// str: ""GNTabView""
// str: ""GNTabViewControlMode""
// str: ""_controlMode""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_001f5240(void)

{
  int iVar1;
  
  if (DAT_026f2688 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f2670 = _DAT_0238fcc0;
      uRam00000000026f2674 = _UNK_0238fcc4;
      uRam00000000026f2678 = _UNK_0238fcc8;
      uRam00000000026f267c = _UNK_0238fccc;
      DAT_026f2680 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026f26c0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026f2690 = "GNTabViewControlMode";
      _DAT_026f2698 = 4;
      DAT_026f269c = DAT_026f2680;
      _DAT_026f26a0 = &DAT_026f2670;
      _DAT_026f26a8 = &DAT_026f2640;
      DAT_026f26b0 = 0;
      uRam00000000026f26b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_027fa360 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027fa280 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f24c8 = FUN_0006d940();
          _DAT_026f24b0 = "GNTabView";
          _DAT_026f24b8 = 0x170;
          _DAT_026f24c0 = FUN_001f41f0;
          _DAT_026f24d0 = 0;
          uRam00000000026f24d8 = 0;
          _DAT_026f24e0 = 0;
          uRam00000000026f24e8 = 0;
          _DAT_026f24f0 = 0;
          uRam00000000026f24f8 = 0;
          _DAT_026f2500 = 0;
          uRam00000000026f2508 = 0;
          _DAT_026f2510 = 0;
          uRam00000000026f2518 = 0;
          _DAT_026f2520 = 0;
          uRam00000000026f2528 = 0;
          _DAT_026f2530 = 0;
          uRam00000000026f2538 = 0;
          _DAT_026f2540 = 0;
          uRam00000000026f2548 = 0;
          _DAT_026f2550 = 0;
          uRam00000000026f2558 = 0;
          _DAT_026f2560 = 0;
          uRam00000000026f2568 = 0;
          _DAT_026f2570 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027fa320 = "_controlMode";
      _DAT_027fa328 = &DAT_026f24b0;
      _DAT_027fa330 = 0;
      _DAT_027fa338 = 0x6500;
      _DAT_027fa340 = "GNTabViewControlMode";
      _DAT_027fa348 = &DAT_026f2690;
      _DAT_027fa350 = 0;
      uRam00000000027fa358 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027fa320;
}



