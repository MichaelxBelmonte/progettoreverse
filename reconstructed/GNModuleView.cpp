// Reconstructed implementation of GNModuleView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNModuleView.h"

// ============================================================
// @01eb7cc0 — 3706 bytes
// str: ""%@ not found.""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01eb7d8e) */
/* WARNING: Removing unreachable block (ram,0x01eb7d9a) */
/* WARNING: Removing unreachable block (ram,0x01eb7e75) */
/* WARNING: Removing unreachable block (ram,0x01eb7e81) */

void FUN_01eb7cc0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char cVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  char cVar15;
  ulonglong uVar16;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char cVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auVar20 [8];
  bool bVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 *local_238;
  char local_230;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  undefined8 *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong *local_198;
  char local_190;
  longlong local_178;
  char local_170;
  longlong *local_168;
  char local_160;
  longlong local_158;
  char local_150;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  longlong local_138;
  char local_130;
  longlong local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  undefined8 *local_d8;
  longlong local_d0;
  char local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong local_b0;
  char local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  undefined8 uStack_60;
  longlong *local_58;
  uint local_50;
  longlong local_48;
  char local_40;
  
  fVar25 = (float)((ulonglong)param_2 >> 0x20);
  fVar24 = (float)param_2;
  if (unaff_RDI[0x27] == 0) {
    return;
  }
  if (unaff_RDI[0x2a] != 0) {
    return;
  }
  plVar11 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  uVar22 = (**(code **)(*plVar11 + 0x18))();
  plVar19 = DAT_027fe460;
  local_b8 = plVar11;
  if (*unaff_RSI != 0) {
    if (DAT_027fe460 != (longlong *)0x0) {
      uVar22 = FUN_00d50b00();
    }
    local_58 = plVar19;
    local_50 = local_50 & 0xffffff00;
    FUN_00ca0840(uVar22,&local_58);
    if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar19 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &DAT_02572358;
  (*DAT_02572370)();
  local_d8 = puVar12;
  FUN_01e5b340();
  uVar22 = FUN_01e5b320();
  local_130 = 0;
  local_138 = unaff_RDI[0x27];
  lVar18 = 0;
  if (local_138 != 0) {
    uVar22 = FUN_00d50b00();
  }
  local_130 = '\x01';
  local_238 = local_d8;
  local_230 = '\0';
  cVar10 = FUN_01e2af10(uVar22,&local_238);
  if ((local_230 != '\0') && (local_238 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_130 != '\0') && (local_138 != 0)) {
    FUN_00d50b20();
  }
  uVar22 = FUN_01e5b320();
  lVar14 = DAT_027fe468;
  if (cVar10 == '\0') {
    if (DAT_027fe468 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_218 = lVar14;
    local_210 = '\x01';
    lVar14 = unaff_RDI[0x27];
    local_50 = 1;
    local_58 = &DAT_024c5048;
    local_40 = 0;
    if (lVar14 != 0) {
      uVar22 = FUN_00d50b00();
    }
    local_40 = '\x01';
    local_48 = lVar14;
    uVar22 = FUN_00cc7b40(uVar22,&local_58);
    local_58 = &DAT_024c5048;
    if ((local_40 != '\0') && (local_48 != 0)) {
      uVar22 = FUN_00d50b20();
    }
    if ((local_210 != '\0') && (local_218 != 0)) {
      uVar22 = FUN_00d50b20();
    }
  }
  plVar19 = (longlong *)unaff_RDI[0x2b];
  if (plVar19 != local_b8) {
    uVar22 = FUN_00d50b00();
    unaff_RDI[0x2b] = (longlong)local_b8;
    if (plVar19 != (longlong *)0x0) {
      uVar22 = FUN_00d50b20();
    }
  }
  if (*unaff_RSI != 0) {
    local_200 = '\0';
    local_208 = *unaff_RSI;
    uVar22 = (**(code **)(*unaff_RDI + 0x960))();
    if ((local_200 != '\0') && (local_208 != 0)) {
      uVar22 = FUN_00d50b20();
    }
  }
  lVar14 = DAT_027f3818;
  if (DAT_027f3818 != 0) {
    uVar22 = FUN_00d50b00();
  }
  local_1f8 = lVar14;
  local_1f0 = '\x01';
  FUN_000175c0(uVar22,&local_1f8);
  plVar19 = unaff_RDI + 0x2a;
  plVar11 = (longlong *)*plVar19;
  plVar13 = plVar11;
  if (plVar11 != local_58) {
    if ((char)local_50 == '\0') {
      if (local_58 == (longlong *)0x0) {
        plVar13 = (longlong *)0x0;
        goto LAB_01eb8022;
      }
      FUN_00d50b00();
      plVar11 = (longlong *)*plVar19;
      *plVar19 = (longlong)local_58;
      plVar13 = local_58;
    }
    else {
      local_50 = local_50 & 0xffffff00;
      plVar13 = local_58;
LAB_01eb8022:
      *plVar19 = (longlong)plVar13;
    }
    if (plVar11 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar13 = local_58;
    }
  }
  if (((char)local_50 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_1f0 != '\0') && (local_1f8 != 0)) {
    FUN_00d50b20();
  }
  if (*plVar19 == 0) {
    local_80 = (longlong *)0x0;
    cVar17 = '\0';
    auVar20 = (undefined1  [8])0x0;
    cVar10 = '\0';
    plVar19 = (longlong *)0x0;
    cVar15 = '\0';
  }
  else {
    local_c0 = plVar19;
    FUN_01eb9990();
    plVar19 = local_58;
    if (local_58 == (longlong *)0x0) {
      uVar22 = 0;
      local_80 = (longlong *)0x0;
LAB_01eb815b:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_78._8_8_;
      local_78 = auVar4 << 0x40;
      plVar19 = (longlong *)0x0;
      local_98 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uStack_60;
      _local_68 = auVar5 << 0x40;
    }
    else {
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
      }
      local_80 = plVar19;
      if (*(char *)((longlong)unaff_RDI + 0xab) == '\0') {
        _local_68 = ZEXT416(*(uint *)(unaff_RDI + 0x2d));
        local_78 = ZEXT416(*(uint *)((longlong)unaff_RDI + 0x16c));
        FUN_01e3f820();
        auVar27 = ZEXT816(0);
        if (fVar24 < (float)local_68._0_4_) {
          auVar3._4_4_ = local_68._4_4_;
          auVar3._0_4_ = (float)local_68._0_4_ - fVar24;
          auVar3._8_4_ = (float)uStack_60;
          auVar3._12_4_ = uStack_60._4_4_;
          auVar27 = blendps(auVar27,auVar3,1);
          if ((float)local_78._0_4_ <= fVar25) goto LAB_01eb8113;
LAB_01eb8192:
          auVar2._4_4_ = local_78._4_4_;
          auVar2._0_4_ = (float)local_78._0_4_ - fVar25;
          auVar2._8_4_ = local_78._8_4_;
          auVar2._12_4_ = local_78._12_4_;
          auVar27 = insertps(auVar27,auVar2,0x10);
          cVar10 = *(char *)((longlong)unaff_RDI + 0x14d);
        }
        else {
          if (fVar25 < (float)local_78._0_4_) goto LAB_01eb8192;
LAB_01eb8113:
          cVar10 = *(char *)((longlong)unaff_RDI + 0x14d);
        }
        local_78._4_4_ = fVar25;
        local_78._0_4_ = fVar25;
        local_78._8_4_ = in_XMM1_Dd;
        local_78._12_4_ = in_XMM1_Dd;
        local_148 = (longlong *)CONCAT44(fVar25,fVar24);
        if (cVar10 != '\0') {
          local_148 = (longlong *)CONCAT44(fVar25,fVar24);
          fStack_140 = in_XMM1_Dc;
          fStack_13c = in_XMM1_Dd;
          (**(code **)(*plVar19 + 0x4d8))();
          local_68._4_4_ = fVar25;
          local_68._0_4_ = fVar24;
          uStack_60._0_4_ = in_XMM1_Dc;
          uStack_60._4_4_ = in_XMM1_Dd;
          (**(code **)(*plVar19 + 0x4d8))();
          auVar27._0_4_ = (float)local_68._0_4_ - (float)local_148;
          auVar27._4_4_ = (float)local_68._4_4_ - local_148._4_4_;
          auVar27._8_4_ = (float)uStack_60 - fStack_140;
          auVar27._12_4_ = uStack_60._4_4_ - fStack_13c;
          auVar26._0_4_ = fVar24 - (float)local_148;
          auVar26._4_4_ = fVar25 - local_148._4_4_;
          auVar26._8_4_ = in_XMM1_Dc - fStack_140;
          auVar26._12_4_ = in_XMM1_Dd - fStack_13c;
          auVar27 = blendps(auVar26,auVar27,0xd);
        }
        fVar24 = auVar27._4_4_;
        if (((auVar27._0_4_ != 0.0) || (fVar24 != 0.0)) || (NAN(fVar24))) {
          local_98 = CONCAT44(fVar24,fVar24);
          uStack_90 = auVar27._12_4_;
          uStack_8c = auVar27._12_4_;
          _local_68 = auVar27;
          cVar10 = (**(code **)(*unaff_RDI + 0x598))();
          if (cVar10 == '\0') {
            uVar22 = 1;
            goto LAB_01eb815b;
          }
          (**(code **)(*unaff_RDI + 0x580))();
          auVar23._4_12_ = local_68._4_12_;
          auVar23._0_4_ = local_68._0_4_ + (float)local_148;
          auVar1._4_4_ = local_78._4_4_;
          auVar1._0_4_ = (float)local_78._0_4_ + (float)local_98;
          auVar1._8_4_ = local_78._8_4_;
          auVar1._12_4_ = local_78._12_4_;
          _local_68 = insertps(auVar23,auVar1,0x10);
          (**(code **)(*unaff_RDI + 0x4e8))();
          (**(code **)(*unaff_RDI + 0x580))();
          (**(code **)(*plVar19 + 0x4e8))();
        }
        else {
          (**(code **)(*plVar19 + 0x4e8))();
        }
      }
      local_1e8 = plVar19;
      local_1e0 = '\0';
      (**(code **)(*unaff_RDI + 0x450))();
      if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01eb7b40();
      plVar19 = local_58;
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar19 == (longlong *)0x0) {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = local_78._8_8_;
        local_78 = auVar6 << 0x40;
        plVar19 = (longlong *)0x0;
        local_98 = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uStack_60;
        _local_68 = auVar7 << 0x40;
      }
      else {
        FUN_01eb7b40();
        uVar22 = FUN_01eb9dd0();
        local_118 = local_d0;
        local_110 = 0;
        if (local_c8 == '\0') {
          if (local_d0 != 0) {
            uVar22 = FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        local_110 = '\x01';
        FUN_01d26420(uVar22,&local_118);
        local_68 = (undefined1  [8])local_58;
        if (local_58 == (longlong *)0x0) {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uStack_60;
          _local_68 = auVar9 << 0x40;
          local_98 = 0;
        }
        else if ((char)local_50 == '\0') {
          uVar22 = FUN_00d50b00();
          local_98 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_50 = local_50 & 0xffffff00;
          local_98 = CONCAT71((int7)((ulonglong)local_58 >> 8),1);
        }
        if ((local_110 != '\0') && (local_118 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if (*(int *)((longlong)local_68 + 0xc) < 1) {
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_78._8_8_;
          local_78 = auVar8 << 0x40;
          plVar19 = (longlong *)0x0;
        }
        else {
          lVar18 = 0;
          uVar16 = 0;
          plVar11 = (longlong *)0x0;
          do {
            lVar14 = *(longlong *)((longlong)local_68 + 0x10);
            plVar19 = *(longlong **)(lVar14 + lVar18 * 8);
            if (plVar11 == plVar19) {
              plVar19 = plVar11;
              if (((char)uVar16 == '\0') && (plVar11 != (longlong *)0x0)) {
                local_78._1_7_ = (int7)((ulonglong)lVar14 >> 8);
                local_78[0] = 1;
                FUN_00d50b00();
              }
              else {
                local_78._0_8_ = uVar16;
              }
            }
            else {
              if (plVar19 != (longlong *)0x0) {
                lVar14 = FUN_00d50b00();
              }
              auVar27 = local_78;
              local_78._1_7_ = (int7)((ulonglong)lVar14 >> 8);
              local_78[0] = 1;
              local_78._8_8_ = auVar27._8_8_;
              if (((char)uVar16 != '\0') && (plVar11 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            (**(code **)(*plVar19 + 0x480))();
            FUN_01e42030();
            FUN_01d8c6e0();
            plVar11 = local_58;
            local_100 = 0;
            if ((char)local_50 == '\0') {
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_50 = local_50 & 0xffffff00;
            }
            local_100 = '\x01';
            local_108 = plVar11;
            FUN_01ccad10();
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
            (**(code **)(*plVar19 + 0x478))();
            lVar18 = lVar18 + 1;
            uVar16 = local_78._0_8_ & 0xffffffff;
            plVar11 = plVar19;
          } while (lVar18 < *(int *)((longlong)local_68 + 0xc));
        }
      }
      plVar11 = (longlong *)*local_c0;
      FUN_00015ff0();
      if (plVar11 == (longlong *)0x0) {
        plVar11 = &DAT_02802688;
      }
      else {
        (**(code **)(*plVar11 + 0x360))();
        cVar10 = FUN_00e85ea0();
        plVar11 = local_c0;
        if (cVar10 == '\0') {
          plVar11 = &DAT_02802688;
        }
      }
      plVar13 = local_c0;
      uVar22 = CONCAT71((int7)((ulonglong)lVar18 >> 8),1);
      if (*plVar11 != 0) {
        local_1d8 = local_d8;
        local_1d0 = '\0';
        FUN_01e511c0();
        if ((local_1d0 != '\0') && (local_1d8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_1c8 = local_b8;
        local_1c0 = '\0';
        FUN_01e51330();
        if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_1b8 = local_80;
        local_1b0 = '\0';
        FUN_01e55ee0();
        if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*(longlong *)*plVar13 + 0x518))();
        (**(code **)(*(longlong *)*local_c0 + 0x4e8))();
      }
    }
    plVar11 = local_c0;
    FUN_00d6f370();
    local_148 = local_58;
    if (local_58 != (longlong *)0x0) {
      local_a0 = uVar22;
      if ((char)local_50 == '\0') {
        FUN_00d50b00();
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01e42030();
      if (local_58 == (longlong *)0x0) {
        bVar21 = false;
      }
      else {
        FUN_01e42030();
        FUN_01e4c160();
        bVar21 = local_b0 != 0;
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
      }
      if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar21) {
        FUN_01e42030();
        FUN_01e4c160();
        local_f8 = local_b0;
        local_f0 = 0;
        if (local_a8 == '\0') {
          if (local_b0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_a8 = '\0';
        }
        local_f0 = '\x01';
        local_1a0 = '\0';
        local_1a8 = 0;
        FUN_00d704d0(&local_1a8,&local_f8);
        plVar13 = local_58;
        if (local_58 == (longlong *)0x0) {
          plVar13 = (longlong *)0x0;
LAB_01eb89da:
          bVar21 = plVar13 == (longlong *)0x0;
          if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if ((char)local_50 == '\0') {
            FUN_00d50b00();
            goto LAB_01eb89da;
          }
          local_50 = local_50 & 0xffffff00;
          bVar21 = false;
        }
        if ((local_1a0 != '\0') && (local_1a8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        if (!bVar21) {
          local_190 = '\0';
          local_198 = plVar13;
          (**(code **)(*unaff_RDI + 0x868))();
          if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01eb8813;
        }
      }
      else {
        plVar13 = (longlong *)0x0;
LAB_01eb8813:
        plVar11 = (longlong *)*plVar11;
        FUN_00015ff0();
        if (plVar11 == (longlong *)0x0) {
LAB_01eb8845:
          plVar11 = &DAT_02802688;
        }
        else {
          (**(code **)(*plVar11 + 0x360))();
          cVar10 = FUN_00e85ea0();
          plVar11 = local_c0;
          if (cVar10 == '\0') goto LAB_01eb8845;
        }
        plVar11 = (longlong *)*plVar11;
        if (plVar11 == (longlong *)0x0) {
          FUN_00d50b00();
        }
        else {
          FUN_00d50b00();
          unaff_RDI = plVar11;
        }
        FUN_00d403d0();
        local_178 = DAT_027fe470;
        if (DAT_027fe470 != 0) {
          FUN_00d50b00();
        }
        local_170 = '\x01';
        local_160 = '\0';
        local_158 = 0;
        local_150 = '\0';
        local_168 = unaff_RDI;
        FUN_00d40470(&local_158,&local_168,1,1);
        if ((local_150 != '\0') && (local_158 != 0)) {
          FUN_00d50b20();
        }
        if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_170 != '\0') && (local_178 != 0)) {
          FUN_00d50b20();
        }
        if (((char)local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (plVar13 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
      uVar22 = local_a0;
    }
    cVar17 = (char)uVar22;
    cVar10 = (char)local_98;
    cVar15 = local_78[0];
    auVar20 = local_68;
    if (local_d8 == (undefined8 *)0x0) goto LAB_01eb8a9a;
  }
  FUN_00d50b20();
LAB_01eb8a9a:
  if ((cVar15 != '\0') && (plVar19 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((cVar10 != '\0') && (auVar20 != (undefined1  [8])0x0)) {
    FUN_00d50b20();
  }
  if ((cVar17 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01eba210 — 2210 bytes
// ============================================================

void FUN_01eba210(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  bool bVar5;
  undefined4 uVar6;
  longlong local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong local_140;
  char local_138;
  longlong local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 *local_b8;
  char local_b0;
  undefined8 *local_a8;
  char local_a0;
  undefined8 *local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01f27fe0();
  cVar3 = (**(code **)(*local_60 + 0x6c0))();
  if (cVar3 == '\0') {
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar4 = FUN_00cafdf0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) {
      FUN_01cb4790();
      local_68 = local_60;
      if ((((local_58 == '\0') && (local_60 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_58 != '\0')) && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d48370();
      plVar1 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x390))();
      FUN_00d403d0();
      local_170 = DAT_027fe478;
      if (DAT_027fe478 != 0) {
        FUN_00d50b00();
      }
      local_168 = '\x01';
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      local_160 = 0;
      local_158 = '\0';
      FUN_00d40470(&local_160,&stack0xfffffffffffffed0,3,3);
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_68 + 0x3a0))();
      lVar4 = local_88;
      if (local_80 == '\0') {
        if (local_88 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_80 = '\0';
      }
      (**(code **)(*local_68 + 0x3a8))();
      local_e8 = local_78;
      local_e0 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_e0 = '\x01';
      FUN_01cfd290(DAT_0239011c,&local_e8);
      plVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      FUN_01d488d0();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      plVar1 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x3b0))();
      (**(code **)(*local_68 + 0x3a0))();
      local_d8 = local_60;
      local_d0 = 0;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_d0 = '\x01';
      FUN_01d488d0();
      if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      local_150 = DAT_027fe480;
      if (DAT_027fe480 != 0) {
        FUN_00d50b00();
      }
      local_148 = '\x01';
      if (unaff_RDI != 0) {
        FUN_00d50b00();
      }
      lVar4 = DAT_027fe488;
      if (DAT_027fe488 != 0) {
        FUN_00d50b00();
      }
      local_178 = lVar4;
      FUN_00083ea0(2,&local_178);
      FUN_000b4da0();
      local_c8 = local_78;
      local_c0 = 0;
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      local_c0 = '\x01';
      FUN_00d40470(&local_c8,&stack0xfffffffffffffee0,3,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      local_60 = (longlong *)&DAT_0253d630;
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      local_60 = &DAT_024c5048;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if (unaff_RDI != 0) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != 0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      FUN_01d48b40(DAT_02390124);
      plVar1 = (longlong *)*unaff_RSI;
      FUN_01e3f820();
      (**(code **)(*plVar1 + 0x3b8))();
      (**(code **)(*local_68 + 0x370))();
      local_b8 = local_60;
      local_b0 = 0;
      if (local_58 == '\0') {
        if (local_60 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58 = '\0';
      }
      local_b0 = '\x01';
      FUN_01d48a10();
      if ((local_b0 != '\0') && (local_b8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027fe490;
      lVar4 = *(longlong *)(unaff_RDI + 0x138);
      if (lVar4 == 0) {
        if (DAT_027fe490 != 0) {
          FUN_00d50b00();
        }
        bVar5 = lVar2 != 0;
        lVar4 = lVar2;
      }
      else {
        FUN_00d50b00();
        bVar5 = true;
      }
      if (lVar4 != 0) {
        (**(code **)(*local_68 + 0x370))();
        local_a8 = local_60;
        local_a0 = 0;
        if (local_58 == '\0') {
          if (local_60 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_a0 = '\x01';
        FUN_01d48a10();
        if ((local_a0 != '\0') && (local_a8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*local_68 + 0x390))();
        local_98 = local_60;
        local_90 = 0;
        if (local_58 == '\0') {
          if (local_60 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_58 = '\0';
        }
        local_90 = '\x01';
        FUN_01d488d0();
        if ((local_90 != '\0') && (local_98 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        plVar1 = (longlong *)*unaff_RSI;
        local_138 = '\0';
        local_140 = lVar4;
        FUN_01e3f820();
        uVar6 = FUN_00d05530();
        (**(code **)(*plVar1 + 0x3f8))(uVar6,2);
        if ((local_138 != '\0') && (local_140 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d48390();
      if ((bVar5) && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01eb6770 — 1938 bytes
// str: ""GNModuleView""
// str: ""GNString""
// str: ""getUIName""
// str: ""setUIName""
// str: ""_editUiName""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01eb6770(void)

{
  int iVar1;
  
  if (DAT_028ba470 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e5340 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7718 = FUN_0006d940();
          _DAT_027e7700 = "GNModuleView";
          _DAT_027e7708 = 0x178;
          _DAT_027e7710 = FUN_00191170;
          _DAT_027e7720 = 0;
          uRam00000000027e7728 = 0;
          _DAT_027e7730 = 0;
          uRam00000000027e7738 = 0;
          _DAT_027e7740 = 0;
          uRam00000000027e7748 = 0;
          _DAT_027e7750 = 0;
          uRam00000000027e7758 = 0;
          _DAT_027e7760 = 0;
          uRam00000000027e7768 = 0;
          _DAT_027e7770 = 0;
          uRam00000000027e7778 = 0;
          _DAT_027e7780 = 0;
          uRam00000000027e7788 = 0;
          _DAT_027e7790 = 0;
          uRam00000000027e7798 = 0;
          _DAT_027e77a0 = 0;
          uRam00000000027e77a8 = 0;
          _DAT_027e77b0 = 0;
          uRam00000000027e77b8 = 0;
          _DAT_027e77c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba430 = "getUIName";
      _DAT_028ba438 = &DAT_027e7700;
      _DAT_028ba440 = 0;
      _DAT_028ba448 = &DAT_027fe4a0;
      _DAT_028ba450 = FUN_01ebc0d0;
      _DAT_028ba458 = FUN_01eb6f30;
      _DAT_028ba460 = 0;
      if (DAT_026fd0c0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026d5e58 = FUN_00d4fe50();
          DAT_026d5e40 = "GNString";
          _DAT_026d5e48 = 0x40;
          _DAT_026d5e50 = FUN_0005d920;
          _DAT_026d5e60 = 0;
          uRam00000000026d5e68 = 0;
          _DAT_026d5e70 = 0;
          uRam00000000026d5e78 = 0;
          _DAT_026d5e80 = 0;
          uRam00000000026d5e88 = 0;
          _DAT_026d5e90 = 0;
          uRam00000000026d5e98 = 0;
          _DAT_026d5ea0 = 0;
          uRam00000000026d5ea8 = 0;
          _DAT_026d5eb0 = 0;
          uRam00000000026d5eb8 = 0;
          _DAT_026d5ec0 = 0;
          uRam00000000026d5ec8 = 0;
          _DAT_026d5ed0 = 0;
          uRam00000000026d5ed8 = 0;
          _DAT_026d5ee0 = 0;
          uRam00000000026d5ee8 = 0;
          _DAT_026d5ef0 = 0;
          uRam00000000026d5ef8 = 0;
          _DAT_026d5f00 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba468 = DAT_026d5e40;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ba4b8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e5340 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7718 = FUN_0006d940();
          _DAT_027e7700 = "GNModuleView";
          _DAT_027e7708 = 0x178;
          _DAT_027e7710 = FUN_00191170;
          _DAT_027e7720 = 0;
          uRam00000000027e7728 = 0;
          _DAT_027e7730 = 0;
          uRam00000000027e7738 = 0;
          _DAT_027e7740 = 0;
          uRam00000000027e7748 = 0;
          _DAT_027e7750 = 0;
          uRam00000000027e7758 = 0;
          _DAT_027e7760 = 0;
          uRam00000000027e7768 = 0;
          _DAT_027e7770 = 0;
          uRam00000000027e7778 = 0;
          _DAT_027e7780 = 0;
          uRam00000000027e7788 = 0;
          _DAT_027e7790 = 0;
          uRam00000000027e7798 = 0;
          _DAT_027e77a0 = 0;
          uRam00000000027e77a8 = 0;
          _DAT_027e77b0 = 0;
          uRam00000000027e77b8 = 0;
          _DAT_027e77c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba478 = "setUIName";
      _DAT_028ba480 = &DAT_027e7700;
      _DAT_028ba488 = 0;
      _DAT_028ba490 = &DAT_027fe4a8;
      _DAT_028ba498 = FUN_01ebc170;
      _DAT_028ba4a0 = FUN_01eb6f70;
      _DAT_028ba4a8 = 0;
      uRam00000000028ba4b0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ba500 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e5340 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7718 = FUN_0006d940();
          _DAT_027e7700 = "GNModuleView";
          _DAT_027e7708 = 0x178;
          _DAT_027e7710 = FUN_00191170;
          _DAT_027e7720 = 0;
          uRam00000000027e7728 = 0;
          _DAT_027e7730 = 0;
          uRam00000000027e7738 = 0;
          _DAT_027e7740 = 0;
          uRam00000000027e7748 = 0;
          _DAT_027e7750 = 0;
          uRam00000000027e7758 = 0;
          _DAT_027e7760 = 0;
          uRam00000000027e7768 = 0;
          _DAT_027e7770 = 0;
          uRam00000000027e7778 = 0;
          _DAT_027e7780 = 0;
          uRam00000000027e7788 = 0;
          _DAT_027e7790 = 0;
          uRam00000000027e7798 = 0;
          _DAT_027e77a0 = 0;
          uRam00000000027e77a8 = 0;
          _DAT_027e77b0 = 0;
          uRam00000000027e77b8 = 0;
          _DAT_027e77c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba4c0 = "_editUiName";
      _DAT_028ba4c8 = &DAT_027e7700;
      _DAT_028ba4d0 = 0;
      _DAT_028ba4d8 = &DAT_027fe4a8;
      _DAT_028ba4e0 = FUN_01ebc170;
      _DAT_028ba4e8 = FUN_01eb7050;
      _DAT_028ba4f0 = 0;
      uRam00000000028ba4f8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ba548 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e5340 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7718 = FUN_0006d940();
          _DAT_027e7700 = "GNModuleView";
          _DAT_027e7708 = 0x178;
          _DAT_027e7710 = FUN_00191170;
          _DAT_027e7720 = 0;
          uRam00000000027e7728 = 0;
          _DAT_027e7730 = 0;
          uRam00000000027e7738 = 0;
          _DAT_027e7740 = 0;
          uRam00000000027e7748 = 0;
          _DAT_027e7750 = 0;
          uRam00000000027e7758 = 0;
          _DAT_027e7760 = 0;
          uRam00000000027e7768 = 0;
          _DAT_027e7770 = 0;
          uRam00000000027e7778 = 0;
          _DAT_027e7780 = 0;
          uRam00000000027e7788 = 0;
          _DAT_027e7790 = 0;
          uRam00000000027e7798 = 0;
          _DAT_027e77a0 = 0;
          uRam00000000027e77a8 = 0;
          _DAT_027e77b0 = 0;
          uRam00000000027e77b8 = 0;
          _DAT_027e77c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba508 = "_editTrimsLoadedView";
      _DAT_028ba510 = &DAT_027e7700;
      _DAT_028ba518 = 0;
      _DAT_028ba520 = &DAT_027fe4ab;
      _DAT_028ba528 = FUN_01ebc1f0;
      _DAT_028ba530 = FUN_01eb70a0;
      _DAT_028ba538 = 0;
      uRam00000000028ba540 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028ba590 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e5340 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_027e7718 = FUN_0006d940();
          _DAT_027e7700 = "GNModuleView";
          _DAT_027e7708 = 0x178;
          _DAT_027e7710 = FUN_00191170;
          _DAT_027e7720 = 0;
          uRam00000000027e7728 = 0;
          _DAT_027e7730 = 0;
          uRam00000000027e7738 = 0;
          _DAT_027e7740 = 0;
          uRam00000000027e7748 = 0;
          _DAT_027e7750 = 0;
          uRam00000000027e7758 = 0;
          _DAT_027e7760 = 0;
          uRam00000000027e7768 = 0;
          _DAT_027e7770 = 0;
          uRam00000000027e7778 = 0;
          _DAT_027e7780 = 0;
          uRam00000000027e7788 = 0;
          _DAT_027e7790 = 0;
          uRam00000000027e7798 = 0;
          _DAT_027e77a0 = 0;
          uRam00000000027e77a8 = 0;
          _DAT_027e77b0 = 0;
          uRam00000000027e77b8 = 0;
          _DAT_027e77c0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028ba550 = "_editTrimMargins";
      _DAT_028ba558 = &DAT_027e7700;
      _DAT_028ba560 = 0;
      _DAT_028ba568 = &DAT_027fe4ae;
      _DAT_028ba570 = FUN_01ebc210;
      _DAT_028ba578 = FUN_01eb70e0;
      _DAT_028ba580 = 0;
      uRam00000000028ba588 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @007ebe20 — 1648 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x007ec088) */
/* WARNING: Removing unreachable block (ram,0x007ec094) */
/* WARNING: Removing unreachable block (ram,0x007ec3f2) */
/* WARNING: Removing unreachable block (ram,0x007ec3fe) */
/* WARNING: Removing unreachable block (ram,0x007ec43d) */
/* WARNING: Removing unreachable block (ram,0x007ec42f) */
/* WARNING: Removing unreachable block (ram,0x007ec446) */
/* WARNING: Removing unreachable block (ram,0x007ebeb9) */
/* WARNING: Removing unreachable block (ram,0x007ebeb7) */
/* WARNING: Removing unreachable block (ram,0x007ebee0) */
/* WARNING: Removing unreachable block (ram,0x007ebee2) */
/* WARNING: Removing unreachable block (ram,0x007ebf5f) */
/* WARNING: Removing unreachable block (ram,0x007ebf68) */
/* WARNING: Removing unreachable block (ram,0x007ebfc7) */
/* WARNING: Removing unreachable block (ram,0x007ebfd0) */

void FUN_007ebe20(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  longlong unaff_RDI;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong local_a0;
  char local_98;
  longlong local_78;
  char local_70;
  int local_60;
  longlong local_48;
  char local_40;
  
  FUN_007ec8d0();
  if (local_70 == '\0') {
    if (local_78 == 0) goto LAB_007ec180;
    FUN_00d50b00();
  }
  else if (local_78 == 0) {
LAB_007ec180:
    bVar2 = true;
    plVar1 = *(longlong **)(unaff_RDI + 0xe8);
    goto joined_r0x007ec17c;
  }
  local_60 = -1;
  while (local_60 = local_60 + 1, local_60 < *(int *)(local_78 + 0xc)) {
    pVar4 = (pthread_key_t)*(undefined8 *)(local_78 + 0x10);
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if ((local_40 == '\0') && (local_48 != 0)) {
      FUN_00d50b00();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 == 0) {
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01367820();
    }
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01264240();
    pvVar3 = _pthread_getspecific(pVar4);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01326de0();
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  param_1 = local_78;
  FUN_001159b0();
  bVar2 = false;
  plVar1 = *(longlong **)(unaff_RDI + 0xe8);
joined_r0x007ec17c:
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x998))();
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xe0) + 0x918))();
  if (!bVar2) {
    if (*(int *)(local_78 + 0xc) < 1) {
      iVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar5 = 0;
      iVar7 = 0;
      iVar6 = 0;
      do {
        while( true ) {
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01268710();
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (local_48 != 0) break;
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb7a0();
          if (local_40 != '\0') {
            local_40 = '\0';
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          iVar7 = (iVar7 + 1) - (uint)(MACH_HEADER.filetype == 0);
          FUN_00d50b20();
          iVar5 = iVar5 + 1;
          if (*(int *)(local_78 + 0xc) <= iVar5) goto LAB_007ec453;
        }
        (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(local_78 + 0xc));
    }
LAB_007ec453:
    FUN_001159b0();
    if ((0 < iVar6) && (0 < iVar7)) {
      bVar2 = false;
    }
  }
  (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x998))();
  (**(code **)(**(longlong **)(unaff_RDI + 0xd8) + 0x918))();
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00331550 — 1389 bytes
// str: ""GNModuleView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00331550(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *unaff_RDI;
  longlong *local_d8;
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
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  int local_38;
  
  FUN_01e534b0();
  FUN_01e53c20();
  (**(code **)(*local_68 + 0x4a0))();
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (longlong *)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_50 = '\0';
    local_58 = (longlong *)0x0;
    local_48 = plVar1;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar6 = -local_40._4_4_;
        }
        else {
          iVar6 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar6 = 0;
        }
        local_40 = CONCAT44(iVar6,(int)local_40);
      }
      lVar3 = (longlong)(int)local_40;
      iVar6 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar6);
      if (*(int *)((longlong)local_48 + 0xc) <= iVar6) break;
      plVar1 = *(longlong **)(local_48[2] + 8 + lVar3 * 8);
      local_58 = plVar1;
      if ((DAT_026e5340 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
        _DAT_027e7718 = FUN_0006d940();
        _DAT_027e7700 = "GNModuleView";
        _DAT_027e7708 = 0x178;
        _DAT_027e7710 = FUN_00191170;
        _DAT_027e7720 = 0;
        uRam00000000027e7728 = 0;
        _DAT_027e7730 = 0;
        uRam00000000027e7738 = 0;
        _DAT_027e7740 = 0;
        uRam00000000027e7748 = 0;
        _DAT_027e7750 = 0;
        uRam00000000027e7758 = 0;
        _DAT_027e7760 = 0;
        uRam00000000027e7768 = 0;
        _DAT_027e7770 = 0;
        uRam00000000027e7778 = 0;
        _DAT_027e7780 = 0;
        uRam00000000027e7788 = 0;
        _DAT_027e7790 = 0;
        uRam00000000027e7798 = 0;
        _DAT_027e77a0 = 0;
        uRam00000000027e77a8 = 0;
        _DAT_027e77b0 = 0;
        uRam00000000027e77b8 = 0;
        _DAT_027e77c0 = 0;
        ___cxa_guard_release();
      }
      pplVar5 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
      }
      if (*(char *)(pplVar5 + 1) == '\0') {
        if (*pplVar5 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_003316c1;
        }
      }
      else {
        *(undefined1 *)(pplVar5 + 1) = 0;
        if (*pplVar5 != (longlong *)0x0) {
LAB_003316c1:
          FUN_01ebbf20();
          plVar1 = local_d8;
          FUN_00335590();
          pplVar5 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar5 = &local_d8;
            if (cVar2 == '\0') {
              pplVar5 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar5;
          if (*(char *)(pplVar5 + 1) == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar5 + 1) = 0;
          }
          local_60 = '\0';
          local_68 = plVar1;
          FUN_00d21140();
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  if ((longlong *)unaff_RDI[0x1d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x1d] + 0x998))();
  }
  (**(code **)(*unaff_RDI + 0x5d8))();
  plVar1 = local_58;
  local_c8 = DAT_026e3e50;
  if (DAT_026e3e50 != 0) {
    FUN_00d50b00();
  }
  local_c0 = '\x01';
  cVar2 = (**(code **)(*plVar1 + 0x50))();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    local_b0 = '\0';
    local_b8 = 0;
    (**(code **)(*unaff_RDI + 0x5e0))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
  }
  local_70 = 0;
  FUN_00d50b00();
  local_a8 = DAT_026d88e0;
  local_70 = '\x01';
  local_78 = unaff_RDI;
  if (DAT_026d88e0 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_026f6cf0;
  local_a0 = '\x01';
  if (DAT_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  local_98 = lVar3;
  local_90 = '\x01';
  local_88 = 0;
  local_80 = '\0';
  FUN_000bf690(&local_98,&local_a8,&local_88);
  plVar1 = (longlong *)unaff_RDI[0x29];
  plVar4 = plVar1;
  if (plVar1 == local_58) goto LAB_00331a4d;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) {
      plVar4 = (longlong *)0x0;
      goto LAB_003319d0;
    }
    FUN_00d50b00();
    plVar1 = (longlong *)unaff_RDI[0x29];
    unaff_RDI[0x29] = (longlong)local_58;
    plVar4 = local_58;
  }
  else {
    local_50 = '\0';
    plVar4 = local_58;
LAB_003319d0:
    unaff_RDI[0x29] = (longlong)plVar4;
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
    plVar4 = local_58;
  }
LAB_00331a4d:
  if ((local_50 != '\0') && (plVar4 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00331e40();
  return;
}




// ============================================================
// @001912f0 — 1306 bytes
// str: ""GNModuleView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001912f0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_026abbb8;
  unaff_RDI[2] = &DAT_026ac560;
  FUN_001918c0();
  *(undefined1 *)(unaff_RDI + 0x28) = 0;
  if (DAT_026e5340 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      _uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e77bb == '\0') {
    FUN_00191b40();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x144) = 0;
  if (DAT_026e5340 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      _uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e77bb == '\0') {
    FUN_00191cb0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x14c) = 0;
  if (DAT_026e5340 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      _uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e77bb == '\0') {
    FUN_00191e20();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x14d) = 0;
  if (DAT_026e5340 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      _uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e77bb == '\0') {
    FUN_00191f90();
    FUN_00e87980();
  }
  FUN_00192100();
  FUN_001923f0();
  FUN_001926e0();
  unaff_RDI[0x2d] = 0;
  if (DAT_026e5340 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      _uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_027e77bb == '\0') {
    FUN_001929d0();
    FUN_00e87980();
  }
  FUN_00192b40();
  return;
}




// ============================================================
// @01e02540 — 833 bytes
// str: ""GNModuleView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01e025da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e02540(void)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar6;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x140);
  if (plVar1 == (longlong *)0x0) {
    local_48 = (longlong *)0x0;
LAB_01e025a4:
    FUN_01e4b940();
LAB_01e02681:
    if (local_48 != (longlong *)0x0) goto LAB_01e02686;
  }
  else {
    FUN_00d50b00();
    local_48 = (longlong *)0x0;
    (**(code **)(*plVar1 + 0x370))();
    if (local_40 == (longlong *)0x0) {
      if (local_38 != '\0') {
        local_48 = (longlong *)0x0;
      }
LAB_01e025df:
      if (local_48 != (longlong *)0x0) goto LAB_01e025e8;
      goto LAB_01e02725;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_48 = local_40;
      goto LAB_01e025df;
    }
    local_48 = local_40;
LAB_01e025e8:
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 == local_48) {
      FUN_01e4b940();
      goto LAB_01e02681;
    }
    if ((DAT_026e5340 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027e7718 = FUN_0006d940();
      _DAT_027e7700 = "GNModuleView";
      _DAT_027e7708 = 0x178;
      _DAT_027e7710 = FUN_00191170;
      _DAT_027e7720 = 0;
      uRam00000000027e7728 = 0;
      _DAT_027e7730 = 0;
      uRam00000000027e7738 = 0;
      _DAT_027e7740 = 0;
      uRam00000000027e7748 = 0;
      _DAT_027e7750 = 0;
      uRam00000000027e7758 = 0;
      _DAT_027e7760 = 0;
      uRam00000000027e7768 = 0;
      _DAT_027e7770 = 0;
      uRam00000000027e7778 = 0;
      _DAT_027e7780 = 0;
      uRam00000000027e7788 = 0;
      _DAT_027e7790 = 0;
      uRam00000000027e7798 = 0;
      _DAT_027e77a0 = 0;
      uRam00000000027e77a8 = 0;
      _DAT_027e77b0 = 0;
      uRam00000000027e77b8 = 0;
      _DAT_027e77c0 = 0;
      ___cxa_guard_release();
    }
    plVar2 = DAT_02802688;
    if (local_48 != (longlong *)0x0) {
      (**(code **)(*local_48 + 0x360))();
      cVar4 = FUN_00e85ea0();
      plVar2 = DAT_02802688;
      if (cVar4 != '\0') {
        plVar2 = local_48;
      }
    }
    if (plVar2 == (longlong *)0x0) {
LAB_01e02725:
      (**(code **)(*plVar1 + 0x398))();
      if (local_40 == local_48) {
LAB_01e02788:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar3 = (longlong *)0x0;
        plVar2 = local_48;
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar6 = local_48 != (longlong *)0x0;
          local_48 = local_40;
          if (bVar6) {
            FUN_00d50b20();
          }
          goto LAB_01e02788;
        }
        plVar3 = local_40;
        plVar2 = local_40;
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar3 = local_40;
        }
      }
      local_48 = plVar3;
      if (plVar2 != (longlong *)0x0) {
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        goto LAB_01e027ad;
      }
      goto LAB_01e025a4;
    }
    (**(code **)(*local_48 + 0x978))();
    FUN_01e42030();
    FUN_01d8b200();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != local_58) goto LAB_01e02725;
    FUN_01e4b940();
LAB_01e02686:
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
LAB_01e027ad:
  FUN_00d50b20();
  return;
}




// ============================================================
// @007eb9c0 — 790 bytes
// str: ""GNModuleView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007eb9c0(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong **pplVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01e534b0();
  FUN_01e53c20();
  uVar6 = (**(code **)(*local_40 + 0x4a0))();
  plVar1 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (longlong *)0x0) && (uVar6 = FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (longlong *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    local_60 = '\0';
    local_68 = (longlong *)0x0;
    local_58 = plVar1;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar5 = 0;
    while( true ) {
      if (iVar5 != 0) {
        if (iVar5 < 1) {
          iVar5 = -iVar5;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar5);
          uVar6 = FUN_00d23690(uVar6,iVar5);
          local_48 = local_48 + iVar5;
          iVar5 = 0;
        }
        local_50 = CONCAT44(iVar5,(int)local_50);
      }
      lVar3 = (longlong)(int)local_50;
      iVar5 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar5);
      if (*(int *)((longlong)local_58 + 0xc) <= iVar5) break;
      plVar1 = *(longlong **)(local_58[2] + 8 + lVar3 * 8);
      local_68 = plVar1;
      if ((DAT_026e5340 == '\0') &&
         (iVar5 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar5 != 0)) {
        _DAT_027e7718 = FUN_0006d940();
        _DAT_027e7700 = "GNModuleView";
        _DAT_027e7708 = 0x178;
        _DAT_027e7710 = FUN_00191170;
        _DAT_027e7720 = 0;
        uRam00000000027e7728 = 0;
        _DAT_027e7730 = 0;
        uRam00000000027e7738 = 0;
        _DAT_027e7740 = 0;
        uRam00000000027e7748 = 0;
        _DAT_027e7750 = 0;
        uRam00000000027e7758 = 0;
        _DAT_027e7760 = 0;
        uRam00000000027e7768 = 0;
        _DAT_027e7770 = 0;
        uRam00000000027e7778 = 0;
        _DAT_027e7780 = 0;
        uRam00000000027e7788 = 0;
        _DAT_027e7790 = 0;
        uRam00000000027e7798 = 0;
        _DAT_027e77a0 = 0;
        uRam00000000027e77a8 = 0;
        _DAT_027e77b0 = 0;
        uRam00000000027e77b8 = 0;
        _DAT_027e77c0 = 0;
        uVar6 = ___cxa_guard_release();
      }
      pplVar4 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_68;
        uVar6 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar4 = (longlong **)&DAT_02802688;
        }
      }
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (*pplVar4 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_007ebb21;
        }
      }
      else {
        *(undefined1 *)(pplVar4 + 1) = 0;
        if (*pplVar4 != (longlong *)0x0) {
LAB_007ebb21:
          FUN_01ebbf20();
          plVar1 = local_78;
          FUN_00335590();
          pplVar4 = (longlong **)&DAT_02802688;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x360))();
            cVar2 = FUN_00e85ea0();
            pplVar4 = &local_78;
            if (cVar2 == '\0') {
              pplVar4 = (longlong **)&DAT_02802688;
            }
          }
          plVar1 = *pplVar4;
          if (*(char *)(pplVar4 + 1) == '\0') {
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            *(undefined1 *)(pplVar4 + 1) = 0;
          }
          local_38 = '\0';
          local_40 = plVar1;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar6 = FUN_00d50b20();
        }
      }
      iVar5 = local_50._4_4_;
    }
    FUN_000a9680();
    FUN_00d50b20();
  }
  FUN_007ebe20();
  return;
}




// ============================================================
// @01eb9990 — 711 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01eb9bea) */
/* WARNING: Removing unreachable block (ram,0x01eb9bf7) */
/* WARNING: Removing unreachable block (ram,0x01eb99fe) */
/* WARNING: Removing unreachable block (ram,0x01eb9a07) */

undefined8 * FUN_01eb9990(void)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar6;
  int iVar7;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  FUN_01eb9dd0();
  if (local_48 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
    }
    FUN_01e5ca90();
    local_38 = local_48;
    if (local_48 == (longlong *)0x0) {
      bVar3 = true;
      local_38 = (longlong *)0x0;
    }
    else if (local_40 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      bVar3 = false;
    }
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_0006daf0();
    (**(code **)(*plVar5 + 0x18))();
    (**(code **)(*plVar5 + 0x558))();
    (**(code **)(*plVar5 + 0x570))();
    cVar4 = FUN_01e3f2b0();
    if (cVar4 != '\0') {
      FUN_01e3f240();
    }
    (**(code **)(*local_38 + 0x4d8))();
    (**(code **)(*plVar5 + 0x4d0))();
    (**(code **)(*local_38 + 0x4a0))();
    iVar7 = *(int *)((longlong)local_48 + 0xc);
    if (local_40 != '\0') {
      FUN_00d50b20();
    }
    if (iVar7 < 1) {
      plVar6 = (longlong *)0x0;
      bVar2 = false;
    }
    else {
      bVar2 = false;
      plVar6 = (longlong *)0x0;
      do {
        (**(code **)(*local_38 + 0x4a0))();
        plVar1 = *(longlong **)local_48[2];
        if (plVar6 == plVar1) {
          if ((!bVar2) && (plVar6 != (longlong *)0x0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (plVar6 != (longlong *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
            plVar6 = plVar1;
          }
          else {
            bVar2 = true;
            plVar6 = plVar1;
          }
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar6 + 0x478))();
        (**(code **)(*plVar5 + 0x450))();
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (*(char *)(unaff_RSI + 0x140) != '\0') {
      FUN_01e41810(*(undefined8 *)(unaff_RSI + 0x144));
    }
    *unaff_RDI = plVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (plVar6 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (!bVar3) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00331e40 — 672 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00331e40(void)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  longlong unaff_RDI;
  double dVar6;
  undefined8 uVar7;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_026e1810;
  if (*(longlong *)(unaff_RDI + 0x140) != 0) {
    if (DAT_026e1810 != 0) {
      FUN_00d50b00();
    }
    dVar6 = (double)FUN_00e7d6f0();
    uVar5 = (ulonglong)(dVar6 * DAT_023907c0);
    dVar6 = dVar6 * DAT_023907c0 - _DAT_023907c8;
    uVar7 = FUN_0071a120();
    if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
        (uVar7 = FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
      uVar7 = FUN_00d50b20();
    }
    bVar3 = (byte)(((longlong)dVar6 & (longlong)uVar5 >> 0x3f | uVar5) / 3);
    local_60 = lVar1;
    local_58 = '\0';
    FUN_000175c0(uVar7,&local_60);
    plVar2 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      local_38 = '\0';
      local_40 = plVar2;
      bVar3 = FUN_00c70bc0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if ((plVar2 != (longlong *)0x0 & bVar3) == 1) {
      FUN_01f27fe0();
      cVar4 = (**(code **)(*local_40 + 0x450))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      cVar4 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (cVar4 == '\0') {
      FUN_01e40eb0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 != (longlong *)0x0) {
        (**(code **)(**(longlong **)(unaff_RDI + 0x140) + 0x478))();
        FUN_0032d440();
      }
    }
    else {
      FUN_01e40eb0();
      plVar2 = local_40;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        FUN_01e53c20();
        plVar2 = local_40;
        local_48 = 0;
        local_50 = *(longlong *)(unaff_RDI + 0x140);
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        local_48 = '\x01';
        (**(code **)(*plVar2 + 0x450))();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}




// ============================================================
// @001932c0 — 578 bytes
// ============================================================

void FUN_001932c0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *unaff_RDI;
  
  FUN_0006daf0();
  *unaff_RDI = &DAT_02698620;
  unaff_RDI[2] = &DAT_02699060;
  unaff_RDI[0x2a] = 0;
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  unaff_RDI[0x2c] = 0;
  unaff_RDI[0x27] = 0;
  unaff_RDI[0x28] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x145) = 0;
  if (1 < DAT_02802630) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x2c] = puVar2;
  }
  iVar1 = DAT_02802630;
  *(undefined4 *)(unaff_RDI + 0x2d) = 0;
  *(undefined2 *)((longlong)unaff_RDI + 0x16c) = 0;
  unaff_RDI[0x32] = 0;
  *(undefined1 *)(unaff_RDI + 0x33) = 0;
  unaff_RDI[0x3c] = 0;
  *(undefined1 *)(unaff_RDI + 0x3d) = 0;
  unaff_RDI[0x47] = 0;
  unaff_RDI[0x2e] = 0;
  unaff_RDI[0x2f] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x17d) = 0;
  unaff_RDI[0x34] = 0;
  unaff_RDI[0x35] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1af) = 0;
  unaff_RDI[0x37] = 0;
  unaff_RDI[0x38] = 0;
  unaff_RDI[0x39] = 0;
  unaff_RDI[0x3a] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1d5) = 0;
  unaff_RDI[0x3e] = 0;
  unaff_RDI[0x3f] = 0;
  unaff_RDI[0x40] = 0;
  unaff_RDI[0x41] = 0;
  unaff_RDI[0x42] = 0;
  unaff_RDI[0x43] = 0;
  *(undefined2 *)(unaff_RDI + 0x44) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x22a) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x224) = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x47] = puVar2;
    iVar1 = DAT_02802630;
  }
  *(undefined4 *)(unaff_RDI + 0x48) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x25c) = 0;
  *(undefined1 *)(unaff_RDI + 0x4c) = 0;
  unaff_RDI[0x4d] = 0;
  unaff_RDI[0x49] = 0;
  unaff_RDI[0x4a] = 0;
  *(undefined1 *)(unaff_RDI + 0x4b) = 0;
  if (1 < iVar1) {
    puVar2 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0x4d] = puVar2;
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x27c) = 0;
  unaff_RDI[0x4e] = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x277) = 0;
  unaff_RDI[0x51] = 0;
  unaff_RDI[0x52] = 0;
  unaff_RDI[0x53] = 0;
  return;
}




// ============================================================
// @00332340 — 560 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x003324f7) */
/* WARNING: Removing unreachable block (ram,0x00332500) */

longlong * FUN_00332340(void)

{
  bool bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  longlong *unaff_RDI;
  int iVar5;
  longlong local_80;
  char local_78;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar4 = &DAT_02572358;
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  FUN_003322a0();
  if (local_78 == '\0') {
    if (local_80 == 0) goto LAB_00332562;
    FUN_00d50b00();
  }
  else if (local_80 == 0) {
LAB_00332562:
    bVar1 = true;
    iVar5 = *(int *)((longlong)puVar2 + 0xc);
    goto joined_r0x00332568;
  }
  if (0 < *(int *)(local_80 + 0xc)) {
    iVar5 = 0;
    do {
      pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01274b60();
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_48 = local_58;
        local_40 = '\0';
        FUN_00d235a0();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(local_80 + 0xc));
  }
  FUN_001159b0();
  bVar1 = false;
  iVar5 = *(int *)((longlong)puVar2 + 0xc);
joined_r0x00332568:
  if (iVar5 == 0) {
    *unaff_RDI = local_80;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = (longlong)puVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}



