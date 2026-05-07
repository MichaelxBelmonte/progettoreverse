// Reconstructed implementation of GNControl
// From MikeCore binary — reverse-engineered pseudocode

#include "GNControl.h"

// ============================================================
// @01dd7350 — 6499 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dd7a2e) */
/* WARNING: Removing unreachable block (ram,0x01dd7a3a) */
/* WARNING: Removing unreachable block (ram,0x01dd74d0) */
/* WARNING: Removing unreachable block (ram,0x01dd74dc) */
/* WARNING: Removing unreachable block (ram,0x01dd7441) */
/* WARNING: Removing unreachable block (ram,0x01dd744a) */
/* WARNING: Removing unreachable block (ram,0x01dd77b0) */
/* WARNING: Removing unreachable block (ram,0x01dd77b9) */
/* WARNING: Removing unreachable block (ram,0x01dd75a7) */
/* WARNING: Removing unreachable block (ram,0x01dd75b0) */
/* WARNING: Removing unreachable block (ram,0x01dd7620) */
/* WARNING: Removing unreachable block (ram,0x01dd762d) */
/* WARNING: Removing unreachable block (ram,0x01dd894f) */
/* WARNING: Removing unreachable block (ram,0x01dd8958) */
/* WARNING: Removing unreachable block (ram,0x01dd7491) */
/* WARNING: Removing unreachable block (ram,0x01dd749a) */

void FUN_01dd7350(void)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  byte bVar20;
  longlong lVar21;
  longlong *unaff_RSI;
  ulonglong uVar22;
  longlong *unaff_RDI;
  bool bVar23;
  undefined8 unaff_R14;
  byte bVar24;
  byte bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  undefined8 uVar29;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar30;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar31;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  longlong *local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
  longlong *local_200;
  char local_1f8;
  longlong *local_1f0;
  char local_1e8;
  longlong *local_1e0;
  char local_1d8;
  longlong *local_1d0;
  char local_1c8;
  longlong *local_1c0;
  char local_1b8;
  longlong local_1b0;
  char local_1a8;
  longlong local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  undefined8 local_150;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  undefined1 local_138 [16];
  undefined8 local_128;
  float fStack_120;
  float fStack_11c;
  undefined8 local_118;
  longlong *local_110;
  char local_108;
  longlong *local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  longlong *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 uStack_c0;
  longlong *local_a8;
  int local_98;
  longlong local_80;
  longlong *local_78;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  char local_31;
  
  plVar1 = (longlong *)unaff_RDI[6];
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_80 = *unaff_RSI;
  local_31 = (char)unaff_RSI[1];
  if ((local_31 != '\0') && (local_80 != 0)) {
    FUN_00d50b00();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_01dd8c7b;
  FUN_01e40eb0();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) goto LAB_01dd8c7b;
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 5) && ((char)plVar1[0x4f] != '\0')) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*plVar1 + 0xa28))();
    if (local_50 != (longlong *)0x0) {
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(*local_50 + 0x490))();
      if (local_50 != (longlong *)0x0) {
        if (local_48 == '\0') {
          FUN_00d50b00();
        }
        (**(code **)(*local_50 + 0x3c0))();
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    goto LAB_01dd8c7b;
  }
  iVar8 = FUN_01d3a5a0();
  if ((iVar8 == 1) && ((char)plVar1[0x4f] != '\0')) {
    if ((plVar1[0x2a] != 0) && (FUN_01e1e360(), plVar1[0x2a] != 0)) {
      plVar1[0x2a] = 0;
      FUN_00d50b20();
    }
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*plVar1 + 0xa28))();
    local_d8 = local_50;
    if (local_50 == (longlong *)0x0) {
      local_150 = 0;
      local_100 = (longlong *)0x0;
      local_118 = 0;
      local_a8 = (longlong *)0x0;
    }
    else {
      if (local_48 == '\0') {
        FUN_00d50b00();
      }
      plVar15 = local_d8;
      FUN_01d3abf0();
      FUN_01e466c0();
      (**(code **)(*plVar15 + 0x490))();
      local_a8 = local_50;
      if (local_50 == (longlong *)0x0) {
        local_a8 = (longlong *)0x0;
        local_118 = 0;
      }
      else {
        local_118 = CONCAT71((int7)((ulonglong)local_50 >> 8),1);
        if (local_48 == '\0') {
          FUN_00d50b00();
        }
      }
      local_150 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
      local_100 = local_d8;
    }
    uVar9 = FUN_01d3b620();
    local_f8._0_4_ = uVar9;
    FUN_01e42030();
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_d0 = local_50;
    FUN_01d3abf0();
    local_148 = FUN_01e466c0();
    fVar30 = (float)((ulonglong)local_148 >> 0x20);
    if (*(char *)((longlong)plVar1 + 0x279) == '\0') {
      auVar32._4_4_ = fVar30;
      auVar32._0_4_ = fVar30;
      auVar32._8_4_ = extraout_XMM0_Dd;
      auVar32._12_4_ = extraout_XMM0_Dd;
      auVar34._4_12_ = auVar32._4_12_;
      auVar34._0_4_ = fVar30 / (*(float *)(plVar1 + 0x2d) + *(float *)((longlong)plVar1 + 0x174));
      local_98 = -1;
      if ((0.0 <= auVar34._0_4_) && (auVar34._0_4_ < (float)(int)plVar1[0x30])) {
        local_98 = (int)auVar34._0_4_;
      }
    }
    else {
      local_98 = -1;
      auVar34 = ZEXT816(0);
      if ((0.0 <= fVar30) && (lVar21 = plVar1[0x52], lVar21 != 0)) {
        iVar8 = *(int *)(lVar21 + 0x18);
        iVar10 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar10 = iVar8;
        }
        uVar22 = 0;
        uVar13 = (ulonglong)(uint)(iVar10 >> 2);
        if (iVar10 >> 2 < 1) {
          uVar13 = uVar22;
        }
        do {
          if (uVar13 == uVar22) goto LAB_01dd78a7;
          fVar31 = *(float *)(*(longlong *)(lVar21 + 0x10) + uVar22 * 4);
          auVar34 = ZEXT416((uint)fVar31);
          uVar22 = uVar22 + 1;
        } while (fVar31 <= fVar30);
        local_98 = (int)uVar22 + -1;
      }
    }
LAB_01dd78a7:
    plVar15 = (longlong *)plVar1[0x3e];
    fStack_140 = extraout_XMM0_Dc;
    fStack_13c = extraout_XMM0_Dd;
    if (plVar15 == (longlong *)0x0) {
      uVar11 = 1;
    }
    else {
      if (*(char *)((longlong)plVar1 + 0x279) == '\0') {
        fVar30 = fVar30 / (*(float *)(plVar1 + 0x2d) + *(float *)((longlong)plVar1 + 0x174));
        iVar8 = -1;
        auVar34 = ZEXT816(0);
        if ((0.0 <= fVar30) &&
           (auVar34 = ZEXT416((uint)(float)(int)plVar1[0x30]), fVar30 < (float)(int)plVar1[0x30])) {
          iVar8 = (int)fVar30;
        }
      }
      else {
        iVar8 = -1;
        auVar34 = ZEXT816(0);
        if ((0.0 <= fVar30) && (lVar21 = plVar1[0x52], lVar21 != 0)) {
          iVar10 = *(int *)(lVar21 + 0x18);
          iVar17 = iVar10 + 3;
          if (-1 < iVar10) {
            iVar17 = iVar10;
          }
          uVar22 = 0;
          uVar13 = (ulonglong)(uint)(iVar17 >> 2);
          if (iVar17 >> 2 < 1) {
            uVar13 = uVar22;
          }
          do {
            if (uVar13 == uVar22) goto LAB_01dd7967;
            fVar31 = *(float *)(*(longlong *)(lVar21 + 0x10) + uVar22 * 4);
            auVar34 = ZEXT416((uint)fVar31);
            uVar22 = uVar22 + 1;
          } while (fVar31 <= fVar30);
          iVar8 = (int)uVar22 + -1;
        }
      }
LAB_01dd7967:
      iVar10 = FUN_01dd3800((int)local_148);
      if (iVar10 == -1) {
        local_160 = 0;
      }
      else {
        local_160 = *(longlong *)(*(longlong *)(plVar1[0x2c] + 0x10) + (longlong)iVar10 * 8);
        if (local_160 != 0) {
          FUN_00d50b00();
        }
      }
      local_158 = '\x01';
      local_260 = local_a8;
      local_258 = '\0';
      uVar11 = (**(code **)(*plVar15 + 0x48))(&local_160,iVar8,&local_260);
      if ((local_258 != '\0') && (local_260 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
    }
    local_138[0] = local_98 != -1;
    bVar25 = uVar11 < 2;
    uVar12 = FUN_01d3b590();
    uVar22 = (ulonglong)uVar12;
    uVar13 = FUN_01d3b590();
    bVar24 = uVar11 - 1 < 2 & local_138[0];
    bVar26 = false;
    if (((bVar24 != 0) && (bVar26 = false, (uVar12 & 2) == 0)) && ((uVar13 & 4) == 0)) {
      iVar8 = FUN_01d3b630();
      bVar26 = iVar8 == 1;
    }
    if ((int)plVar1[0x29] != -1) {
      FUN_01dd96d0();
    }
    if ((local_f8._0_4_ == 1) && (local_d0 != (longlong *)0x0)) {
      local_c8 = CONCAT44(local_c8._4_4_,uVar12);
      FUN_01d8b200();
      local_e8[0] = bVar25;
      if (local_50 == plVar1) {
        bVar20 = 0;
      }
      else {
        iVar8 = FUN_01d3b630();
        bVar20 = iVar8 == 1 & bVar24;
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar25 = local_e8[0];
      uVar22 = local_c8 & 0xffffffff;
      if (bVar20 != 0) {
        FUN_01e42250();
      }
    }
    uVar5 = local_c8 >> 0x20;
    local_c8 = uVar5 << 0x20;
    if (bVar24 == 0) {
LAB_01dd7c5f:
      local_c8 = uVar5 << 0x20;
      bVar28 = false;
    }
    else {
      if ((uVar22 & 2) == 0) {
        if (((uVar13 & 4) == 0) || (local_f8._0_4_ != 1)) {
          if ((local_f8._0_4_ != 1) || (local_c8 = uVar5 << 0x20, (int)plVar1[0x36] == local_98))
          goto LAB_01dd7c5f;
          lVar21 = plVar1[0x34];
          if (lVar21 != 0) {
            iVar8 = *(int *)(lVar21 + 0x18);
            iVar10 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar10 = iVar8;
            }
            if (3 < iVar8) {
              lVar19 = 0;
              do {
                if (*(int *)(*(longlong *)(lVar21 + 0x10) + lVar19 * 4) == local_98) {
                  local_c8 = uVar5 << 0x20;
                  bVar28 = false;
                  goto LAB_01dd7c61;
                }
                lVar19 = lVar19 + 1;
              } while (iVar10 >> 2 != (int)lVar19);
            }
          }
          bVar26 = false;
          uVar29 = FUN_01dd3d20();
          local_c8 = CONCAT44(local_c8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar29 >> 8),1));
          bVar28 = true;
          goto LAB_01dd7c61;
        }
        FUN_01dd4110();
      }
      else if ((int)plVar1[0x36] == local_98) {
LAB_01dd7b99:
        FUN_01dd4720();
      }
      else {
        lVar21 = plVar1[0x34];
        if (lVar21 != 0) {
          iVar8 = *(int *)(lVar21 + 0x18);
          iVar10 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar10 = iVar8;
          }
          if (3 < iVar8) {
            lVar19 = 0;
            do {
              if (*(int *)(*(longlong *)(lVar21 + 0x10) + lVar19 * 4) == local_98)
              goto LAB_01dd7b99;
              lVar19 = lVar19 + 1;
            } while (iVar10 >> 2 != (int)lVar19);
          }
        }
        FUN_01dd3d20();
      }
      bVar28 = true;
      local_c8 = local_c8 & 0xffffffff00000000;
      bVar26 = false;
    }
LAB_01dd7c61:
    bVar23 = true;
    if ((int)local_f8._0_4_ < 2) {
      bVar23 = bVar28;
    }
    bVar26 = (bool)((int)local_f8._0_4_ < 2 & bVar26);
    if ((bVar25 & local_138[0] & local_a8 != (longlong *)0x0) == 0) {
      bVar28 = true;
      if (local_a8 == (longlong *)0x0) {
        bVar27 = false;
        goto LAB_01dd833d;
      }
LAB_01dd7d44:
      bVar27 = false;
      if (*unaff_RSI == 0) goto LAB_01dd833d;
      local_78._0_4_ = -1;
      fStack_120 = fStack_140;
      fStack_11c = fStack_13c;
      iVar8 = -1;
      local_128 = local_148;
      do {
        (**(code **)(*unaff_RDI + 0x658))();
        plVar15 = (longlong *)*unaff_RSI;
        if (plVar15 == local_50) {
          if (((char)unaff_RSI[1] != '\0') || (local_50 == (longlong *)0x0)) goto LAB_01dd7ded;
          if (local_48 != '\0') goto LAB_01dd7de1;
          FUN_00d50b00();
LAB_01dd7e38:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          if (*unaff_RSI != 0) goto LAB_01dd7df5;
LAB_01dd7e48:
          bVar27 = false;
        }
        else {
          lVar21 = unaff_RSI[1];
          if (local_48 == '\0') {
            if (local_50 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            *unaff_RSI = (longlong)local_50;
            if (((char)lVar21 != '\0') && (plVar15 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01dd7e38;
          }
          *unaff_RSI = (longlong)local_50;
          if (((char)lVar21 != '\0') && (plVar15 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01dd7de1:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_48 = '\0';
LAB_01dd7ded:
          if (*unaff_RSI == 0) goto LAB_01dd7e48;
LAB_01dd7df5:
          iVar10 = FUN_01d3a5a0();
          bVar27 = iVar10 != 6;
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (!bVar27) break;
        iVar10 = FUN_01d3a5a0();
        if (iVar10 == 5) {
          FUN_01d3abf0();
          uVar29 = FUN_01e466c0();
          iVar10 = iVar8;
          if ((int)local_78 == -1) {
            local_78._0_4_ = local_98;
            iVar10 = local_98;
          }
          fStack_120 = extraout_XMM0_Dc_00;
          fStack_11c = extraout_XMM0_Dd_00;
          local_128 = uVar29;
          if (((char)plVar1[0x3d] != '\0') || ((char)plVar1[0x46] != '\0')) {
            bVar25 = local_138[0];
            if (*(char *)((longlong)plVar1 + 0x1b5) != '\0') {
              local_240 = local_80;
              local_238 = '\0';
              local_230 = *unaff_RSI;
              local_228 = '\0';
              bVar25 = (**(code **)(*plVar1 + 0x9e0))(local_c8 & 0xff,&local_230);
              if ((local_228 != '\0') && (local_230 != 0)) {
                FUN_00d50b20();
              }
              bVar25 = bVar25 & local_98 != -1;
              if ((local_238 != '\0') && (local_240 != 0)) {
                FUN_00d50b20();
              }
            }
            if (bVar25 != 0) {
              bVar26 = false;
              bVar27 = false;
              bVar6 = false;
              if (!bVar23) goto LAB_01dd83cb;
              goto LAB_01dd83b8;
            }
          }
          iVar8 = iVar10;
          if (*(char *)((longlong)plVar1 + 0x1b5) == '\0') {
LAB_01dd80ee:
            bVar26 = false;
            iVar8 = iVar10;
          }
          else {
            bVar26 = false;
            if ((*(char *)((longlong)plVar1 + 0x1b6) != '\0') && ((int)local_78 != -1)) {
              FUN_01e3f820();
              auVar33._4_4_ = -(uint)(fStack_120 < extraout_XMM0_Dc_01);
              auVar33._0_4_ = -(uint)(local_128._4_4_ < extraout_XMM0_Db);
              auVar33._8_4_ = -(uint)(fStack_11c < extraout_XMM0_Dd_01);
              auVar33._12_4_ = 0;
              auVar33 = auVar33 << 0x20;
              fStack_e0 = fStack_120;
              local_e8 = (undefined1  [8])local_128;
              fStack_dc = fStack_11c;
              if ((-(uint)(local_128._4_4_ < extraout_XMM0_Db) & 1) != 0) {
                uVar29 = FUN_01e3f820();
                auVar4._8_4_ = fStack_120;
                auVar4._0_8_ = local_128;
                auVar4._12_4_ = fStack_11c;
                auVar2._8_4_ = extraout_XMM0_Dc_02;
                auVar2._0_8_ = uVar29;
                auVar2._12_4_ = extraout_XMM0_Dd_02;
                auVar33 = blendps(auVar4,auVar2,2);
                _local_e8 = auVar33;
              }
              FUN_01e3f820();
              auVar34 = _local_e8;
              if (extraout_XMM0_Db_00 + auVar33._4_4_ + DAT_02390d00 < (float)local_e8._4_4_) {
                FUN_01e3f820();
                fVar30 = extraout_XMM0_Db_01 + auVar33._4_4_;
                fVar31 = extraout_XMM0_Dd_03 + auVar33._12_4_;
                auVar3._4_4_ = fVar30;
                auVar3._0_4_ = fVar30 + DAT_02390d00;
                auVar3._8_4_ = fVar31;
                auVar3._12_4_ = fVar31;
                auVar34 = insertps(_local_e8,auVar3,0x10);
              }
              fVar30 = auVar34._4_4_;
              if (*(char *)((longlong)plVar1 + 0x279) == '\0') {
                fVar30 = fVar30 / (*(float *)(plVar1 + 0x2d) + *(float *)((longlong)plVar1 + 0x174))
                ;
                iVar8 = -1;
                auVar34 = ZEXT816(0);
                if ((0.0 <= fVar30) &&
                   (auVar34 = ZEXT416((uint)(float)(int)plVar1[0x30]),
                   fVar30 < (float)(int)plVar1[0x30])) {
                  iVar8 = (int)fVar30;
                }
              }
              else {
                iVar8 = -1;
                if ((DAT_0239424c <= fVar30) && (lVar21 = plVar1[0x52], lVar21 != 0)) {
                  iVar17 = *(int *)(lVar21 + 0x18);
                  iVar18 = iVar17 + 3;
                  if (-1 < iVar17) {
                    iVar18 = iVar17;
                  }
                  uVar13 = (ulonglong)(uint)(iVar18 >> 2);
                  if (iVar18 >> 2 < 1) {
                    uVar13 = 0;
                  }
                  uVar22 = 0;
                  do {
                    if (uVar13 == uVar22) goto LAB_01dd80e9;
                    fVar31 = *(float *)(*(longlong *)(lVar21 + 0x10) + uVar22 * 4);
                    auVar34 = ZEXT416((uint)fVar31);
                    uVar22 = uVar22 + 1;
                  } while (fVar31 <= fVar30);
                  iVar8 = (int)uVar22 + -1;
                }
              }
LAB_01dd80e9:
              if (iVar10 == iVar8) goto LAB_01dd80ee;
              if (((int)local_78 < iVar10) || ((iVar10 == (int)local_78 && ((int)local_78 < iVar8)))
                 ) {
                if (iVar10 < iVar8) {
                  do {
                    fVar30 = (float)FUN_01dd3d20(fVar30,1);
                    iVar10 = iVar10 + 1;
                  } while (iVar8 + 1 != iVar10);
                }
                else {
                  for (; iVar8 < iVar10; iVar10 = iVar10 + -1) {
                    if ((int)local_78 < iVar10) {
                      fVar30 = (float)FUN_01dd4720();
                    }
                    else {
                      fVar30 = (float)FUN_01dd3d20(fVar30,1);
                    }
                  }
                }
              }
              else if ((iVar10 < (int)local_78) ||
                      ((iVar10 == (int)local_78 && (iVar8 < (int)local_78)))) {
                if (iVar8 < iVar10) {
                  do {
                    fVar30 = (float)FUN_01dd3d20(fVar30,1);
                    bVar27 = iVar8 < iVar10;
                    iVar10 = iVar10 + -1;
                  } while (bVar27);
                }
                else {
                  do {
                    if (iVar10 < (int)local_78) {
                      fVar30 = (float)FUN_01dd4720();
                    }
                    else {
                      fVar30 = (float)FUN_01dd3d20(fVar30,1);
                    }
                    iVar10 = iVar10 + 1;
                  } while (iVar8 + 1 != iVar10);
                }
              }
              bVar23 = true;
              bVar26 = false;
            }
          }
        }
        lVar21 = *unaff_RSI;
        cVar7 = (char)unaff_RSI[1];
        if (local_80 == lVar21) {
          lVar21 = local_80;
          if (((cVar7 != '\0') && (local_31 == '\0')) && (local_80 != 0)) {
            local_31 = '\x01';
            FUN_00d50b00();
          }
        }
        else {
          if ((cVar7 != '\0') && (lVar21 != 0)) {
            FUN_00d50b00();
          }
          bVar27 = local_31 != '\0';
          local_31 = cVar7;
          if ((bVar27) && (local_80 != 0)) {
            FUN_00d50b20();
          }
        }
        local_80 = lVar21;
      } while (*unaff_RSI != 0);
      bVar27 = false;
      if (!bVar26) goto LAB_01dd8358;
LAB_01dd8298:
      bVar26 = true;
      uVar9 = FUN_01d428c0();
      if (plVar1[0x2a] != 0) {
        FUN_01e1e360();
      }
      *(int *)(plVar1 + 0x2b) = local_98;
      puVar14 = (undefined8 *)FUN_00e83010();
      *puVar14 = FUN_01de6a10;
      puVar14[1] = FUN_01dd9790;
      puVar14[2] = 0;
      FUN_01e1ec30(uVar9,puVar14);
      plVar15 = (longlong *)plVar1[0x2a];
      plVar16 = plVar15;
      if (plVar15 != local_50) {
        plVar16 = local_50;
        if (local_48 == '\0') {
          if (local_50 == (longlong *)0x0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            FUN_00d50b00();
            plVar15 = (longlong *)plVar1[0x2a];
          }
        }
        else {
          local_48 = '\0';
        }
        plVar1[0x2a] = (longlong)plVar16;
        if (plVar15 != (longlong *)0x0) {
          FUN_00d50b20();
          plVar16 = local_50;
        }
      }
      if ((local_48 != '\0') && (plVar16 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar6 = true;
      if (bVar23) {
LAB_01dd83b8:
        bVar26 = bVar6;
        (**(code **)(*plVar1 + 0x990))();
      }
    }
    else {
      *(undefined1 *)((longlong)plVar1 + 0x14c) = 0;
      local_250 = *unaff_RSI;
      local_248 = '\0';
      (**(code **)(*local_a8 + 0x3c0))();
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      bVar6 = bVar23;
      if (bVar23) {
        bVar6 = false;
      }
      if ((int)local_f8._0_4_ < 2) {
        bVar6 = bVar23;
      }
      if (*(char *)((longlong)plVar1 + 0x14c) == '\0') {
        bVar28 = false;
        bVar27 = false;
        bVar23 = bVar6;
      }
      else {
        iVar8 = FUN_01d3b630();
        bVar27 = true;
        bVar28 = false;
        if (iVar8 == 1) goto LAB_01dd7d44;
      }
LAB_01dd833d:
      fStack_120 = fStack_140;
      fStack_11c = fStack_13c;
      local_128 = local_148;
      if (bVar26) goto LAB_01dd8298;
LAB_01dd8358:
      bVar26 = true;
      bVar6 = true;
      if (bVar23) goto LAB_01dd83b8;
    }
LAB_01dd83cb:
    if (bVar26) {
      bVar26 = true;
    }
    else {
      local_c8 = DAT_023dccec;
      uStack_c0 = 0;
      _fStack_e0 = 0;
      local_e8 = (undefined1  [8])DAT_023dccf4;
      FUN_01dd4960();
      if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01e436c0();
      if ((int)local_50[3] < 4) {
LAB_01dd86fd:
        bVar23 = true;
        bVar6 = false;
        local_58 = (longlong *)0x0;
        local_78 = (longlong *)0x0;
        bVar26 = false;
      }
      else {
        bVar26 = true;
        lVar21 = 0;
        do {
          local_f8._0_8_ = FUN_01dcf710();
          local_f8._8_4_ = extraout_XMM0_Dc_03;
          local_f8._12_4_ = extraout_XMM0_Dd_04;
          local_138 = auVar34;
          cVar7 = FUN_00d054a0();
          if (cVar7 != '\0') {
            auVar34 = local_138;
            if (bVar26) {
              local_c8 = FUN_00d05360(local_f8._0_4_);
              uStack_c0 = CONCAT44(extraout_XMM0_Dd_06,extraout_XMM0_Dc_05);
              bVar26 = false;
              _local_e8 = auVar34;
            }
            else {
              FUN_00d05360(local_f8._0_4_);
              local_c8 = FUN_00d052e0();
              uStack_c0 = CONCAT44(extraout_XMM0_Dd_05,extraout_XMM0_Dc_04);
              _local_e8 = auVar34;
            }
          }
          lVar21 = lVar21 + 1;
          iVar8 = (int)local_50[3];
          iVar10 = iVar8 + 3;
          if (-1 < iVar8) {
            iVar10 = iVar8;
          }
        } while (lVar21 < iVar10 >> 2);
        if (bVar26) goto LAB_01dd86fd;
        plVar15 = (longlong *)FUN_00e8fc40();
        FUN_00152930();
        (**(code **)(*plVar15 + 0x18))();
        local_218 = '\0';
        local_220 = 0;
        FUN_01d4eaa0(local_e8._0_4_);
        if ((local_218 != '\0') && (local_220 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d52700();
        FUN_01d52740();
        (**(code **)(*local_50 + 0x368))(0.0 - (float)local_c8);
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (3 < (int)local_50[3]) {
          lVar21 = 0;
          do {
            local_138._0_8_ = FUN_01dcf710();
            local_138._8_4_ = extraout_XMM0_Dc_06;
            local_138._12_4_ = extraout_XMM0_Dd_07;
            local_f8 = auVar34;
            cVar7 = FUN_00d054a0();
            if (cVar7 != '\0') {
              FUN_01d52740();
              local_108 = 0;
              if (local_48 == '\0') {
                if (local_50 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_108 = '\x01';
              local_110 = local_50;
              auVar34 = local_f8;
              (**(code **)(*plVar1 + 0x610))(local_138._0_4_);
              if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            lVar21 = lVar21 + 1;
            iVar8 = (int)local_50[3];
            iVar10 = iVar8 + 3;
            if (-1 < iVar8) {
              iVar10 = iVar8;
            }
          } while (lVar21 < iVar10 >> 2);
        }
        FUN_01d52740();
        (**(code **)(*local_50 + 0x368))((float)local_c8);
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d52770();
        plVar16 = (longlong *)FUN_00e8fc40();
        FUN_00152930();
        (**(code **)(*plVar16 + 0x18))();
        FUN_01d526f0();
        local_208 = '\0';
        local_210 = 0;
        FUN_01d4eaa0();
        if ((local_208 != '\0') && (local_210 != 0)) {
          FUN_00d50b20();
        }
        FUN_01d52700();
        FUN_01d52740();
        local_1f8 = '\0';
        local_200 = plVar15;
        FUN_01d49110(0,3);
        if ((local_1f8 != '\0') && (local_200 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01d52770();
        local_58 = plVar15;
        if (plVar15 != plVar16) {
          FUN_00d50b00();
          local_58 = plVar16;
          if (plVar15 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        FUN_01ca6a90();
        if (local_50 == (longlong *)0x0) {
          bVar26 = false;
          local_78 = (longlong *)0x0;
        }
        else {
          bVar26 = true;
          local_78 = local_50;
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
        }
        uVar9 = FUN_01ca5d90();
        if ((char)plVar1[0x46] != '\0') {
          local_1e8 = '\0';
          local_1f0 = local_78;
          uVar9 = (**(code **)(*plVar1 + 0x9c0))();
          if ((local_1e8 != '\0') && (local_1f0 != (longlong *)0x0)) {
            uVar9 = FUN_00d50b20();
          }
        }
        if (((char)plVar1[0x3d] == '\0') || ((longlong *)plVar1[0x3e] == (longlong *)0x0)) {
          if ((char)plVar1[0x46] != '\0') goto LAB_01dd8a70;
        }
        else {
          local_1d8 = '\0';
          local_1c8 = '\0';
          local_1e0 = plVar1;
          local_1d0 = local_78;
          cVar7 = (**(code **)(*(longlong *)plVar1[0x3e] + 0x18))(uVar9,&local_1d0);
          bVar28 = true;
          if (cVar7 == '\0') {
            bVar28 = (char)plVar1[0x46] != '\0';
          }
          if ((local_1c8 != '\0') && (local_1d0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_1d8 != '\0') && (local_1e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar28) {
LAB_01dd8a70:
            FUN_01e42030();
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (local_50 != (longlong *)0x0) {
              FUN_01e42030();
              local_1c0 = local_58;
              local_1b8 = '\0';
              local_1b0 = 0;
              local_1a8 = '\0';
              FUN_01e48f80(((float)local_128 - (float)local_148) + (float)local_c8);
              local_198 = '\0';
              local_1a0 = 0;
              local_188 = '\0';
              local_190 = local_78;
              (**(code **)(*local_50 + 0x738))(&local_190,&local_1a0,4);
              if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_198 != '\0') && (local_1a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1b8 != '\0') && (local_1c0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        FUN_00d50b20();
        bVar6 = true;
        bVar23 = false;
        bVar28 = false;
      }
      FUN_00d50b20();
      if ((bVar26) && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (!bVar23 && local_58 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (bVar6) {
        bVar26 = true;
      }
      else {
        bVar26 = false;
      }
    }
    if (local_d0 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_118 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_d8 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if (!bVar26) goto LAB_01dd8c7b;
  }
  else {
    bVar28 = true;
    bVar27 = false;
  }
  FUN_01e42030();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 != (longlong *)0x0) {
    if ((bVar28) && (*unaff_RSI != 0)) {
      local_178 = '\0';
      local_180 = *unaff_RSI;
      (**(code **)(*plVar1 + 0x3c0))();
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
    }
    else if ((bVar27) && (*unaff_RSI != 0)) {
      local_168 = '\0';
      local_170 = *unaff_RSI;
      FUN_01e459c0();
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
    }
  }
LAB_01dd8c7b:
  if ((local_31 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d17670 — 5114 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d18660) */
/* WARNING: Removing unreachable block (ram,0x01d1866c) */
/* WARNING: Removing unreachable block (ram,0x01d1831a) */
/* WARNING: Removing unreachable block (ram,0x01d180c4) */
/* WARNING: Removing unreachable block (ram,0x01d17fa8) */
/* WARNING: Removing unreachable block (ram,0x01d17d5b) */
/* WARNING: Removing unreachable block (ram,0x01d17bf8) */
/* WARNING: Removing unreachable block (ram,0x01d17b0e) */
/* WARNING: Removing unreachable block (ram,0x01d1795e) */
/* WARNING: Removing unreachable block (ram,0x01d18446) */
/* WARNING: Removing unreachable block (ram,0x01d186d3) */
/* WARNING: Removing unreachable block (ram,0x01d186df) */
/* WARNING: Removing unreachable block (ram,0x01d18a43) */
/* WARNING: Removing unreachable block (ram,0x01d18a4f) */
/* WARNING: Removing unreachable block (ram,0x01d18494) */
/* WARNING: Removing unreachable block (ram,0x01d184a0) */

void FUN_01d17670(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined7 uVar10;
  undefined7 extraout_var;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *unaff_RDI;
  longlong *plVar13;
  longlong **pplVar14;
  uint uVar15;
  undefined8 unaff_R14;
  undefined7 uVar16;
  bool bVar17;
  longlong local_98;
  char local_90;
  char local_78;
  char local_74;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_49;
  longlong *local_48;
  char local_40;
  uint local_34;
  
  local_60 = '\0';
  local_68 = (longlong *)0x0;
  FUN_01ccad60();
  plVar12 = local_48;
  cVar5 = local_60;
  plVar13 = local_68;
  if (local_68 == local_48) {
    if ((local_60 != '\0') || (local_48 == (longlong *)0x0)) goto LAB_01d17717;
    if (local_40 == '\0') {
      FUN_00d50b00();
      goto LAB_01d17713;
    }
LAB_01d176e0:
    local_60 = '\x01';
  }
  else {
    unaff_R14 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),local_60);
    if (local_40 != '\0') {
      local_68 = local_48;
      if ((local_60 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d176e0;
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_68 = plVar12;
    if ((cVar5 != '\0') && (plVar13 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01d17713:
    local_60 = '\x01';
LAB_01d17717:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027057d0;
  if (local_68 == (longlong *)0x0) goto LAB_01d18968;
  if (DAT_027057d0 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  if (local_48 == (longlong *)0x0) {
    pplVar11 = (longlong **)CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    plVar13 = (longlong *)0x0;
    local_34 = 0;
  }
  else {
    if (local_40 == '\0') {
      uVar9 = FUN_00d50b00();
      pplVar11 = (longlong **)0x0;
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_01d177bc;
      uVar9 = FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    pplVar11 = (longlong **)0x0;
  }
LAB_01d177bc:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027057d0;
  if (plVar13 == (longlong *)0x0) {
    local_74 = '\x01';
    lVar2 = DAT_027ef7f0;
  }
  else {
    if (DAT_027057d0 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar12 = local_48;
    FUN_00053ac0();
    if (plVar12 == (longlong *)0x0) {
LAB_01d17848:
      pplVar14 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17848;
    }
    plVar12 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar12 == (longlong *)0x0) {
      local_74 = '\0';
      lVar2 = DAT_027ef7f0;
    }
    else {
      local_74 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar2 = DAT_027ef7f0;
    }
  }
  DAT_027ef7f0 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar12 = local_48;
  uVar10 = (undefined7)((ulonglong)uVar9 >> 8);
  uVar16 = (undefined7)((ulonglong)pplVar11 >> 8);
  if (local_48 == plVar13) {
    bVar8 = (byte)pplVar11 & local_48 != (longlong *)0x0;
    pplVar11 = (longlong **)CONCAT71(uVar16,bVar8);
    plVar12 = plVar13;
    if (bVar8 == 1) {
      if (local_40 != '\0') goto LAB_01d17945;
      pplVar11 = (longlong **)CONCAT71(uVar16,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (longlong **)(ulonglong)local_34;
    }
LAB_01d179c4:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (longlong **)CONCAT71(uVar16,1);
      if (((byte)local_34 & plVar13 != (longlong *)0x0) == 1) {
        FUN_00d50b20();
      }
      goto LAB_01d179c4;
    }
    bVar17 = plVar13 != (longlong *)0x0;
    plVar13 = plVar12;
    if (((byte)local_34 & bVar17) == 1) {
      FUN_00d50b20();
      uVar10 = extraout_var;
    }
LAB_01d17945:
    local_40 = '\0';
    plVar12 = plVar13;
    uVar15 = (uint)CONCAT71(uVar10,1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  plVar13 = local_68;
  lVar2 = DAT_027ef7f0;
  if (plVar12 == (longlong *)0x0) {
    FUN_001f8a30();
    if (plVar13 == (longlong *)0x0) {
LAB_01d17acb:
      if (DAT_02802688 != (longlong *)0x0) goto LAB_01d17adc;
LAB_01d17c57:
      pplVar11 = (longlong **)0x0;
      cVar5 = '\x01';
      lVar2 = DAT_027ef7f8;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17acb;
      if (local_68 == (longlong *)0x0) goto LAB_01d17c57;
LAB_01d17adc:
      pplVar11 = (longlong **)0x0;
      lVar2 = DAT_027ef7f8;
      cVar5 = (char)unaff_RDI[0xb];
    }
  }
  else {
    if (DAT_027ef7f0 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar13 = local_48;
    FUN_00053ac0();
    if (plVar13 == (longlong *)0x0) {
LAB_01d17a72:
      pplVar14 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar5 = FUN_00e85ea0();
      if (cVar5 == '\0') goto LAB_01d17a72;
    }
    plVar13 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (plVar13 == (longlong *)0x0) {
      local_78 = '\0';
      lVar2 = DAT_027ef7f8;
      cVar5 = local_78;
    }
    else {
      cVar5 = FUN_00d45ad0();
      FUN_00d50b20();
      lVar2 = DAT_027ef7f8;
    }
  }
  DAT_027ef7f8 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  uVar10 = (undefined7)((ulonglong)pplVar11 >> 8);
  if (local_48 == plVar12) {
    plVar13 = plVar12;
    if (((char)local_34 == '\0') && (local_48 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_01d17bdf;
      pplVar11 = (longlong **)CONCAT71(uVar10,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (longlong **)(ulonglong)local_34;
    }
LAB_01d17c81:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (longlong **)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar12 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d17c81;
    }
    if (((char)local_34 != '\0') && (plVar12 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_01d17bdf:
    local_40 = '\0';
    uVar15 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027ef7f8;
  if (plVar13 != (longlong *)0x0) {
    if (DAT_027ef7f8 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar12 = local_48;
    FUN_00053ac0();
    if (plVar12 == (longlong *)0x0) {
LAB_01d17d2f:
      pplVar14 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar12 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_01d17d2f;
    }
    plVar12 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = local_68;
    if (plVar12 != (longlong *)0x0) {
      FUN_001b37d0();
      if (plVar1 == (longlong *)0x0) {
LAB_01d17dd0:
        if (DAT_02802688 != (longlong *)0x0) goto LAB_01d17ddd;
LAB_01d17e04:
        plVar12 = local_68;
        FUN_001f8a30();
        uVar10 = (undefined7)((ulonglong)pplVar11 >> 8);
        if (plVar12 == (longlong *)0x0) {
LAB_01d17e30:
          pplVar11 = (longlong **)CONCAT71(uVar10,DAT_02802690);
          plVar12 = DAT_02802688;
          if (DAT_02802690 == '\0') goto LAB_01d17e64;
LAB_01d17e55:
          if (plVar12 == (longlong *)0x0) goto LAB_01d17e64;
          FUN_00d50b00();
LAB_01d17e6d:
          local_49 = (char)pplVar11;
          pplVar11 = &local_48;
          local_58 = plVar12;
          FUN_01e05950();
          plVar12 = local_48;
          FUN_00037f20();
          if (plVar12 == (longlong *)0x0) {
LAB_01d17eb1:
            pplVar11 = &DAT_02802688;
          }
          else {
            (**(code **)(*plVar12 + 0x360))();
            cVar6 = FUN_00e85ea0();
            if (cVar6 == '\0') goto LAB_01d17eb1;
          }
          plVar12 = *pplVar11;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar12 != (longlong *)0x0) {
            FUN_01e05950();
            FUN_00d459e0();
            FUN_00d48ae0();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_49 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar12 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') goto LAB_01d17e30;
          pplVar11 = (longlong **)CONCAT71(uVar10,local_60);
          plVar12 = local_68;
          if (local_60 != '\0') goto LAB_01d17e55;
LAB_01d17e64:
          if (plVar12 != (longlong *)0x0) goto LAB_01d17e6d;
        }
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d17dd0;
        if (local_68 == (longlong *)0x0) goto LAB_01d17e04;
LAB_01d17ddd:
        plVar12 = local_68;
        FUN_00d459e0();
        (**(code **)(*plVar12 + 0xab8))();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027ef800;
  if (DAT_027ef800 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar12 = local_48;
  uVar10 = (undefined7)((ulonglong)pplVar11 >> 8);
  if (local_48 == plVar13) {
    plVar12 = plVar13;
    if (((char)local_34 == '\0') && (local_48 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_01d17f93;
      pplVar11 = (longlong **)CONCAT71(uVar10,1);
      FUN_00d50b00();
    }
    else {
      pplVar11 = (longlong **)(ulonglong)local_34;
    }
LAB_01d17fea:
    uVar15 = (uint)pplVar11;
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pplVar11 = (longlong **)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar13 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d17fea;
    }
    if (((char)local_34 != '\0') && (plVar13 != (longlong *)0x0)) {
      uVar9 = FUN_00d50b20();
    }
LAB_01d17f93:
    local_40 = '\0';
    uVar15 = (int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027ef800;
  if (plVar12 != (longlong *)0x0) {
    if (DAT_027ef800 != 0) {
      FUN_00d50b00();
    }
    pplVar14 = &local_48;
    (**(code **)(*unaff_RDI + 0x4c8))();
    plVar13 = local_48;
    FUN_00053ac0();
    if (plVar13 == (longlong *)0x0) {
LAB_01d18098:
      pplVar14 = &DAT_02802688;
    }
    else {
      (**(code **)(*plVar13 + 0x360))();
      cVar6 = FUN_00e85ea0();
      if (cVar6 == '\0') goto LAB_01d18098;
    }
    plVar13 = *pplVar14;
    if (*(char *)(pplVar14 + 1) == '\0') {
      if (plVar13 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar14 + 1) = 0;
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar1 = local_68;
    if (plVar13 != (longlong *)0x0) {
      FUN_001b37d0();
      if (plVar1 == (longlong *)0x0) {
LAB_01d18139:
        if (DAT_02802688 != (longlong *)0x0) goto LAB_01d18146;
LAB_01d1816d:
        plVar13 = local_68;
        FUN_001f8a30();
        uVar10 = (undefined7)((ulonglong)pplVar11 >> 8);
        if (plVar13 == (longlong *)0x0) {
LAB_01d18199:
          pplVar11 = (longlong **)CONCAT71(uVar10,DAT_02802690);
          plVar13 = DAT_02802688;
          if (DAT_02802690 == '\0') goto LAB_01d181cd;
LAB_01d181be:
          if (plVar13 == (longlong *)0x0) goto LAB_01d181cd;
          FUN_00d50b00();
LAB_01d181d6:
          local_49 = (char)pplVar11;
          pplVar11 = &local_48;
          local_58 = plVar13;
          FUN_01e05950();
          plVar13 = local_48;
          FUN_00037f20();
          if (plVar13 == (longlong *)0x0) {
LAB_01d1821a:
            pplVar11 = &DAT_02802688;
          }
          else {
            (**(code **)(*plVar13 + 0x360))();
            cVar6 = FUN_00e85ea0();
            if (cVar6 == '\0') goto LAB_01d1821a;
          }
          plVar13 = *pplVar11;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (plVar13 != (longlong *)0x0) {
            FUN_01e05950();
            FUN_00d459e0();
            FUN_00d48b00();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (local_49 != '\0') {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar13 + 0x360))();
          cVar6 = FUN_00e85ea0();
          if (cVar6 == '\0') goto LAB_01d18199;
          pplVar11 = (longlong **)CONCAT71(uVar10,local_60);
          plVar13 = local_68;
          if (local_60 != '\0') goto LAB_01d181be;
LAB_01d181cd:
          if (plVar13 != (longlong *)0x0) goto LAB_01d181d6;
        }
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d18139;
        if (local_68 == (longlong *)0x0) goto LAB_01d1816d;
LAB_01d18146:
        plVar13 = local_68;
        FUN_00d459e0();
        (**(code **)(*plVar13 + 0xac8))();
      }
      FUN_00d50b20();
    }
  }
  lVar2 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  uVar9 = FUN_01ccaae0();
  plVar13 = local_48;
  uVar10 = (undefined7)((ulonglong)pplVar11 >> 8);
  if (local_48 == plVar12) {
    plVar13 = plVar12;
    uVar15 = local_34;
    if (((char)local_34 == '\0') && (local_48 != (longlong *)0x0)) {
      if (local_40 != '\0') goto LAB_01d18301;
      local_34 = 0;
      FUN_00d50b00();
      uVar15 = (int)CONCAT71(uVar10,1);
    }
LAB_01d1836f:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        uVar9 = FUN_00d50b00();
      }
      uVar15 = (uint)CONCAT71(uVar10,1);
      if (((char)local_34 != '\0') && (plVar12 != (longlong *)0x0)) {
        local_34 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
        FUN_00d50b20();
        uVar15 = (int)CONCAT71(uVar10,1);
      }
      goto LAB_01d1836f;
    }
    if (((char)local_34 != '\0') && (plVar12 != (longlong *)0x0)) {
      local_34 = (uint)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
      uVar9 = FUN_00d50b20();
    }
LAB_01d18301:
    local_40 = '\0';
    uVar15 = (int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
  }
  local_34 = uVar15;
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  local_78 = cVar5;
  if (plVar13 == (longlong *)0x0) {
LAB_01d187ae:
    cVar5 = local_78;
    if (local_74 != '\0') goto LAB_01d187b8;
LAB_01d1889e:
    local_78 = cVar5;
    cVar5 = '\0';
  }
  else {
    cVar7 = FUN_01ccd010();
    cVar6 = local_74;
    if (cVar7 == '\0') {
      cVar7 = FUN_01d26970();
      cVar6 = '\0';
      if (cVar7 == '\0') {
        cVar6 = local_74;
      }
    }
    local_74 = cVar6;
    (**(code **)(*plVar13 + 0x3f8))();
    if (local_48 == (longlong *)0x0) {
      bVar17 = true;
    }
    else {
      (**(code **)(*plVar13 + 0x3f8))();
      bVar17 = *(int *)(local_98 + 0xc) == 0;
      if (local_90 != '\0') {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar2 = DAT_027e7c20;
    if (bVar17) {
      (**(code **)(*local_68 + 0x978))();
      local_74 = '\0';
    }
    else {
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x4c8))();
      plVar12 = local_48;
      if (local_40 == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      plVar1 = local_68;
      FUN_001f8a30();
      if (plVar1 == (longlong *)0x0) {
LAB_01d1853f:
        if (DAT_02802688 == (longlong *)0x0) goto LAB_01d1860b;
LAB_01d18582:
        cVar6 = (**(code **)(*local_68 + 0xac8))();
        if (cVar6 == '\0') goto LAB_01d1860b;
        if ((char)unaff_RDI[6] != '\0') {
          FUN_01e04c20();
        }
        if (plVar12 == (longlong *)0x0) {
LAB_01d18a18:
          (**(code **)(*local_68 + 0x978))();
          *(undefined1 *)(unaff_RDI + 6) = 0;
          goto joined_r0x01d18a5f;
        }
        (**(code **)(*local_68 + 0x980))();
        if (local_48 == (longlong *)0x0) {
          cVar6 = '\0';
        }
        else {
          (**(code **)(*local_68 + 0x980))();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          cVar6 = (**(code **)(*plVar12 + 0x50))();
          if (local_98 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar6 == '\0') goto LAB_01d18a18;
      }
      else {
        (**(code **)(*plVar1 + 0x360))();
        cVar6 = FUN_00e85ea0();
        if (cVar6 == '\0') goto LAB_01d1853f;
        if (local_68 != (longlong *)0x0) goto LAB_01d18582;
LAB_01d1860b:
        (**(code **)(*local_68 + 0x980))();
        plVar1 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01d18626;
          }
          bVar17 = true;
LAB_01d186a4:
          local_58 = plVar12;
          (**(code **)(*local_68 + 0x978))();
          plVar4 = local_68;
          FUN_001f8a30();
          plVar12 = local_58;
          plVar1 = DAT_02802688;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x360))();
            cVar6 = FUN_00e85ea0();
            plVar12 = local_58;
            plVar1 = DAT_02802688;
            if (cVar6 != '\0') {
              plVar1 = local_68;
            }
          }
          if (plVar1 != (longlong *)0x0) {
            *(undefined1 *)(unaff_RDI + 6) = 0;
          }
          local_58 = plVar12;
          if (!bVar17) goto LAB_01d18733;
        }
        else {
LAB_01d18626:
          bVar17 = plVar1 == (longlong *)0x0;
          if ((plVar12 == (longlong *)0x0) || (plVar1 == (longlong *)0x0)) goto LAB_01d186a4;
          cVar6 = (**(code **)(*plVar1 + 0x50))();
          if (cVar6 == '\0') {
            bVar17 = false;
            goto LAB_01d186a4;
          }
LAB_01d18733:
          FUN_00d50b20();
        }
joined_r0x01d18a5f:
        if (plVar12 == (longlong *)0x0) goto LAB_01d18748;
      }
      FUN_00d50b20();
    }
LAB_01d18748:
    lVar2 = DAT_027e7c20;
    if (cVar5 != '\0') {
      if (DAT_027e7c20 != 0) {
        FUN_00d50b00();
      }
      cVar6 = FUN_01ccca20();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      local_78 = '\0';
      if (cVar6 != '\0') {
        local_78 = cVar5;
      }
      goto LAB_01d187ae;
    }
    local_78 = '\0';
    cVar5 = local_78;
    local_78 = '\0';
    if (local_74 == '\0') goto LAB_01d1889e;
LAB_01d187b8:
    lVar2 = DAT_027edfc8;
    if (DAT_027edfc8 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    lVar3 = DAT_027edfc8;
    if (local_48 == (longlong *)0x0) {
      bVar8 = 0;
    }
    else {
      if (DAT_027edfc8 != 0) {
        FUN_00d50b00();
      }
      bVar8 = FUN_01cccb90();
      bVar8 = bVar8 ^ 1;
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    cVar5 = '\0';
    if (bVar8 == 0) {
      cVar5 = local_74;
    }
  }
  plVar12 = local_68;
  FUN_001f8a30();
  if (plVar12 == (longlong *)0x0) {
LAB_01d188d6:
    pplVar11 = &DAT_02802688;
    if (DAT_02802688 != (longlong *)0x0) goto LAB_01d188e3;
LAB_01d18913:
    (**(code **)(*local_68 + 0x998))
              (CONCAT71((int7)((ulonglong)pplVar11 >> 8),local_78 != '\0' && cVar5 != '\0'));
  }
  else {
    (**(code **)(*plVar12 + 0x360))();
    cVar6 = FUN_00e85ea0();
    if (cVar6 == '\0') goto LAB_01d188d6;
    pplVar11 = &local_68;
    if (local_68 == (longlong *)0x0) goto LAB_01d18913;
LAB_01d188e3:
    (**(code **)(*local_68 + 0x998))();
    FUN_01e058a0();
  }
  cVar5 = (**(code **)(*unaff_RDI + 0x4a0))();
  if (cVar5 == '\0') {
    FUN_01d13bc0();
  }
  if (((char)local_34 != '\0') && (plVar13 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01d18968:
  if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01d0d660 — 3738 bytes
// str: ""GNControl""
// str: ""getTag""
// str: ""setTag""
// str: ""_editTag""
// str: ""setIsAutoenabling""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d0d660(void)

{
  int iVar1;
  
  if (DAT_028b7c68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7c28 = "getTag";
      _DAT_028b7c30 = &DAT_026df880;
      _DAT_028b7c38 = 0;
      _DAT_028b7c40 = &DAT_027ef688;
      _DAT_028b7c48 = FUN_01d12ee0;
      _DAT_028b7c50 = 0xa89;
      _DAT_028b7c58 = 0;
      uRam00000000028b7c60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7cb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7c70 = "setTag";
      _DAT_028b7c78 = &DAT_026df880;
      _DAT_028b7c80 = 0;
      _DAT_028b7c88 = &DAT_027ef68a;
      _DAT_028b7c90 = FUN_01d12f10;
      _DAT_028b7c98 = 0xa81;
      _DAT_028b7ca0 = 0;
      uRam00000000028b7ca8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7cf8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7cb8 = "_editTag";
      _DAT_028b7cc0 = &DAT_026df880;
      _DAT_028b7cc8 = 0;
      _DAT_028b7cd0 = &DAT_027ef68a;
      _DAT_028b7cd8 = FUN_01d12f10;
      _DAT_028b7ce0 = FUN_01d0e530;
      _DAT_028b7ce8 = 0;
      uRam00000000028b7cf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7d40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7d00 = "_editObjectValue";
      _DAT_028b7d08 = &DAT_026df880;
      _DAT_028b7d10 = 0;
      _DAT_028b7d18 = &DAT_027ef68d;
      _DAT_028b7d20 = FUN_01d12f30;
      _DAT_028b7d28 = FUN_01d0e580;
      _DAT_028b7d30 = 0;
      uRam00000000028b7d38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7d88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7d48 = "_editTitle";
      _DAT_028b7d50 = &DAT_026df880;
      _DAT_028b7d58 = 0;
      _DAT_028b7d60 = &DAT_027ef690;
      _DAT_028b7d68 = FUN_01d12fb0;
      _DAT_028b7d70 = FUN_01d0e940;
      _DAT_028b7d78 = 0;
      uRam00000000028b7d80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7dd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7d90 = "setObjectValue";
      _DAT_028b7d98 = &DAT_026df880;
      _DAT_028b7da0 = 0;
      _DAT_028b7da8 = &DAT_027ef68d;
      _DAT_028b7db0 = FUN_01d12f30;
      _DAT_028b7db8 = 0x979;
      _DAT_028b7dc0 = 0;
      uRam00000000028b7dc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7e18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7dd8 = "setIsAutoenabling";
      _DAT_028b7de0 = &DAT_026df880;
      _DAT_028b7de8 = 0;
      _DAT_028b7df0 = &DAT_027ef693;
      _DAT_028b7df8 = FUN_01d13030;
      _DAT_028b7e00 = 0x9a9;
      _DAT_028b7e08 = 0;
      uRam00000000028b7e10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7e60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7e20 = "setToolTipFormatter";
      _DAT_028b7e28 = &DAT_026df880;
      _DAT_028b7e30 = 0;
      _DAT_028b7e38 = &DAT_027ef696;
      _DAT_028b7e40 = FUN_01d13050;
      _DAT_028b7e48 = 0x9b9;
      _DAT_028b7e50 = 0;
      uRam00000000028b7e58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7ea8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7e68 = "getFrame";
      _DAT_028b7e70 = &DAT_026df880;
      _DAT_028b7e78 = 0;
      _DAT_028b7e80 = &DAT_027ef699;
      _DAT_028b7e88 = FUN_01d130d0;
      _DAT_028b7e90 = 0x4d9;
      _DAT_028b7e98 = 0;
      uRam00000000028b7ea0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7ef0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7eb0 = "setFrame";
      _DAT_028b7eb8 = &DAT_026df880;
      _DAT_028b7ec0 = 0;
      _DAT_028b7ec8 = &DAT_027f3ce3;
      _DAT_028b7ed0 = FUN_01e4ee70;
      _DAT_028b7ed8 = 0x4d1;
      _DAT_028b7ee0 = 0;
      uRam00000000028b7ee8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b7f38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b7ef8 = "setEnabled";
      _DAT_028b7f00 = &DAT_026df880;
      _DAT_028b7f08 = 0;
      _DAT_028b7f10 = &DAT_027ef693;
      _DAT_028b7f18 = FUN_01d13030;
      _DAT_028b7f20 = 0x999;
      _DAT_028b7f28 = 0;
      uRam00000000028b7f30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @000f62d0 — 3635 bytes
// str: ""GNControl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f62d0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_0267ba68;
  unaff_RDI[2] = &DAT_0267c530;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f72a0();
    FUN_00e87980();
  }
  FUN_000f7410();
  *(undefined4 *)(unaff_RDI + 0x29) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f7690();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x14c) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f7800();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2a) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f7970();
    FUN_00e87980();
  }
  FUN_000f7ae0();
  FUN_000f7d60();
  *(undefined1 *)(unaff_RDI + 0x2d) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f8050();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x169) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f81c0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x16a) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f8330();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x16b) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f84a0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x16c) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f8610();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2e) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f8780();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x174) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f88f0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x2f) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f8a60();
    FUN_00e87980();
  }
  FUN_000f8c90();
  *(undefined1 *)(unaff_RDI + 0x31) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f8f10();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x18c) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f9080();
    FUN_00e87980();
  }
  FUN_000f99a0();
  FUN_000f9c90();
  *(undefined1 *)(unaff_RDI + 0x34) = 0;
  if (DAT_026e43b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      _uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026df93b == '\0') {
    FUN_000f9f80();
    FUN_00e87980();
  }
  FUN_000fa0f0();
  FUN_000fa370();
  FUN_000fa5f0();
  FUN_000fa8e0();
  return;
}




// ============================================================
// @01dd5630 — 2475 bytes
// ============================================================

bool FUN_01dd5630(int param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 in_EDX;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  undefined4 uVar12;
  float extraout_XMM0_Db;
  undefined8 uVar13;
  float fVar14;
  undefined4 uVar15;
  longlong local_120;
  char local_118;
  longlong local_110;
  char local_108;
  longlong local_100;
  char local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  undefined4 local_64;
  longlong local_60;
  char local_51;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  uVar15 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar14 = (float)param_2;
  lVar2 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)param_1 * 8);
  local_64 = in_EDX;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_51 = *(char *)((longlong)unaff_RDI + 0x1dc);
  local_60 = lVar2;
  if (local_51 != '\0') {
    lVar2 = unaff_RDI[0x28];
    if (lVar2 != 0) {
      local_e8 = 0;
      FUN_00d50b00();
      local_e8 = '\x01';
      local_f0 = lVar2;
      (**(code **)(*unaff_RDI + 0x470))();
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI[0x28] != 0) {
        unaff_RDI[0x28] = 0;
        FUN_00d50b20();
      }
    }
    goto LAB_01dd5fb4;
  }
  if ((*unaff_RSI != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 == 1)) {
    FUN_01d3b620();
    FUN_01d3abf0();
    FUN_01e466c0();
    if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
      fVar11 = extraout_XMM0_Db /
               (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
      iVar5 = -1;
      fVar14 = 0.0;
      if ((0.0 <= fVar11) && (fVar14 = (float)(int)unaff_RDI[0x30], fVar11 < fVar14)) {
        iVar5 = (int)fVar11;
      }
    }
    else {
      iVar5 = -1;
      fVar14 = 0.0;
      fVar11 = extraout_XMM0_Db;
      if ((0.0 <= extraout_XMM0_Db) && (lVar2 = unaff_RDI[0x52], lVar2 != 0)) {
        iVar1 = *(int *)(lVar2 + 0x18);
        iVar6 = iVar1 + 3;
        if (-1 < iVar1) {
          iVar6 = iVar1;
        }
        uVar8 = 0;
        uVar7 = (ulonglong)(uint)(iVar6 >> 2);
        if (iVar6 >> 2 < 1) {
          uVar7 = uVar8;
        }
        do {
          if (uVar7 == uVar8) goto LAB_01dd57da;
          fVar14 = *(float *)(*(longlong *)(lVar2 + 0x10) + uVar8 * 4);
          uVar8 = uVar8 + 1;
        } while (fVar14 <= extraout_XMM0_Db);
        iVar5 = (int)uVar8 + -1;
      }
    }
LAB_01dd57da:
    uVar15 = 0;
    if ((int)unaff_RDI[0x36] != iVar5) {
      FUN_01dd3d20(fVar11,0);
    }
  }
  FUN_01db9a00();
  FUN_00d51d20();
  plVar3 = (longlong *)unaff_RDI[0x28];
  if (plVar3 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        unaff_RDI[0x28] = 0;
      }
      else {
        FUN_00d50b00();
        plVar3 = (longlong *)unaff_RDI[0x28];
        unaff_RDI[0x28] = (longlong)local_40;
      }
    }
    else {
      local_38 = '\0';
      unaff_RDI[0x28] = (longlong)local_40;
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI[0x28] == 0) goto LAB_01dd5fb4;
  *(undefined1 *)((longlong)unaff_RDI + 0x1dc) = 1;
  (**(code **)(*unaff_RDI + 0x990))();
  FUN_01db9a00();
  (**(code **)(*local_50 + 0xa18))();
  plVar3 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f2a00;
  plVar9 = (longlong *)unaff_RDI[0x28];
  if (plVar3 == (longlong *)0x0) {
    if (DAT_027f2a00 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar9 + 0xa10))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    plVar3 = (longlong *)unaff_RDI[0x28];
    FUN_00d50b00();
    (**(code **)(*plVar3 + 0xa20))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01db9a00();
    (**(code **)(*local_50 + 0xa18))();
    local_98 = local_40;
    local_90 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_90 = '\x01';
    (**(code **)(*plVar9 + 0xa10))();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar3 = (longlong *)unaff_RDI[0x28];
    FUN_01db9a00();
    (**(code **)(*local_50 + 0xa28))();
    local_88 = local_40;
    local_80 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_80 = '\x01';
    (**(code **)(*plVar3 + 0xa20))();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar3 = (longlong *)unaff_RDI[0x28];
  FUN_01db9a00();
  (**(code **)(*local_50 + 0x9e0))();
  local_78 = local_40;
  local_70 = 0;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_70 = '\x01';
  (**(code **)(*plVar3 + 0x9d8))();
  if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *(undefined4 *)(unaff_RDI + 0x27) = local_64;
  *(int *)((longlong)unaff_RDI + 0x13c) = param_1;
  plVar3 = (longlong *)unaff_RDI[0x28];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0xa08))(param_1,local_64);
  plVar9 = local_50;
  if (local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_40 = plVar9;
  local_38 = '\0';
  (**(code **)(*plVar3 + 0x978))();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar9 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar12 = FUN_00d50b20();
  uVar13 = (**(code **)(*unaff_RDI + 0x950))(uVar12,param_1);
  *(undefined8 *)((longlong)unaff_RDI + 0x1cc) = uVar13;
  *(float *)((longlong)unaff_RDI + 0x1d4) = fVar14;
  *(undefined4 *)(unaff_RDI + 0x3b) = uVar15;
  (**(code **)(*(longlong *)unaff_RDI[0x28] + 0x4d0))();
  plVar3 = (longlong *)unaff_RDI[0x3e];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
    local_120 = local_60;
    local_118 = '\0';
    local_b0 = 0;
    local_b8 = unaff_RDI[0x28];
    if (local_b8 != 0) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    (**(code **)(*plVar3 + 0x30))(&local_120,local_64,&local_b8);
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  local_a0 = 0;
  lVar2 = unaff_RDI[0x28];
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  local_a8 = lVar2;
  (**(code **)(*unaff_RDI + 0x450))();
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)unaff_RDI[0x28];
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar3 + 0x4a0))();
  if (local_40 == (longlong *)0x0) {
    bVar10 = false;
  }
  else {
    (**(code **)(*plVar3 + 0x4a0))();
    bVar10 = *(int *)((longlong)local_50 + 0xc) != 0;
    if (local_48 != '\0') {
      FUN_00d50b20();
    }
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = plVar3;
  if (bVar10) {
    FUN_01d3abf0();
    FUN_01e466c0();
    (**(code **)(*plVar3 + 0x490))();
    plVar9 = local_40;
    plVar4 = plVar3;
    if (plVar3 != local_40) {
      if (local_38 != '\0') {
        FUN_00d50b20();
        goto LAB_01dd5ece;
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      FUN_00d50b20();
      plVar4 = plVar9;
      plVar3 = local_40;
    }
    plVar9 = plVar4;
    if ((local_38 != '\0') && (plVar3 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
LAB_01dd5ece:
  local_110 = *unaff_RSI;
  local_108 = '\0';
  (**(code **)(*plVar9 + 0x3c0))();
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  lVar2 = unaff_RDI[0x28];
  if (lVar2 != 0) {
    local_f8 = 0;
    FUN_00d50b00();
    local_f8 = '\x01';
    local_100 = lVar2;
    (**(code **)(*unaff_RDI + 0x470))();
    if ((local_f8 != '\0') && (local_100 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI[0x28] != 0) {
      unaff_RDI[0x28] = 0;
      FUN_00d50b20();
    }
    (**(code **)(*unaff_RDI + 0x618))((int)uVar13,fVar14);
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1dc) = 0;
  FUN_00d50b20();
LAB_01dd5fb4:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return local_51 == '\0';
}




// ============================================================
// @01d16950 — 1741 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d16dc3) */
/* WARNING: Removing unreachable block (ram,0x01d16dcf) */
/* WARNING: Removing unreachable block (ram,0x01d16d26) */
/* WARNING: Removing unreachable block (ram,0x01d16d32) */
/* WARNING: Removing unreachable block (ram,0x01d16b88) */
/* WARNING: Removing unreachable block (ram,0x01d16b94) */
/* WARNING: Removing unreachable block (ram,0x01d16c1e) */
/* WARNING: Removing unreachable block (ram,0x01d16c2a) */
/* WARNING: Removing unreachable block (ram,0x01d16c7a) */
/* WARNING: Removing unreachable block (ram,0x01d16c87) */
/* WARNING: Removing unreachable block (ram,0x01d16e94) */
/* WARNING: Removing unreachable block (ram,0x01d16e9d) */
/* WARNING: Removing unreachable block (ram,0x01d16cac) */
/* WARNING: Removing unreachable block (ram,0x01d16cb9) */
/* WARNING: Removing unreachable block (ram,0x01d16997) */
/* WARNING: Removing unreachable block (ram,0x01d169a0) */
/* WARNING: Removing unreachable block (ram,0x01d16abe) */
/* WARNING: Removing unreachable block (ram,0x01d16ac7) */
/* WARNING: Removing unreachable block (ram,0x01d16cda) */
/* WARNING: Removing unreachable block (ram,0x01d16ce7) */
/* WARNING: Removing unreachable block (ram,0x01d16e71) */
/* WARNING: Removing unreachable block (ram,0x01d16e7a) */

ulonglong FUN_01d16950(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong *unaff_RDI;
  longlong *plVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  longlong *local_108;
  char local_100;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  uVar4 = (**(code **)(*local_40 + 0x9a0))();
  FUN_001f8a30();
  (**(code **)(*local_40 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_40;
  if (cVar2 == '\0') {
    plVar7 = DAT_02802688;
  }
  if (plVar7 != (longlong *)0x0) {
    uVar4 = FUN_01e05890();
  }
  FUN_01cae990();
  lVar1 = DAT_027ef7e8;
  if (DAT_027ef7e8 != 0) {
    FUN_00d50b00();
  }
  bVar3 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar3 & (byte)uVar4) == 0) {
    uVar5 = FUN_01d827c0();
    uVar8 = (ulonglong)uVar5;
    goto LAB_01d17000;
  }
  uVar8 = CONCAT71((uint7)(uint3)((uint)uVar4 >> 8),1);
  if (param_2 == '\0') goto LAB_01d17000;
  *(undefined1 *)(unaff_RDI + 6) = 0;
  (**(code **)(*local_40 + 0x980))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_001f8a30();
  (**(code **)(*local_40 + 0x360))();
  cVar2 = FUN_00e85ea0();
  plVar7 = local_40;
  if (cVar2 == '\0') {
    plVar7 = DAT_02802688;
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_01e05950();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_01e05950();
      (**(code **)(*local_108 + 0x388))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x970))();
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_01d16bd1;
        }
        bVar10 = true;
        bVar9 = true;
LAB_01d16cfc:
        (**(code **)(*local_40 + 0x968))();
      }
      else {
LAB_01d16bd1:
        bVar9 = local_40 == (longlong *)0x0;
        bVar10 = local_40 == (longlong *)0x0;
        if ((bVar10) || (local_40 == (longlong *)0x0)) goto LAB_01d16cfc;
        cVar2 = (**(code **)(*local_40 + 0x50))();
        bVar9 = false;
        bVar10 = false;
        if (cVar2 == '\0') goto LAB_01d16cfc;
      }
      if (!bVar9) {
        FUN_00d50b20();
      }
      if (!bVar10) {
        FUN_00d50b20();
      }
    }
  }
  lVar1 = DAT_027e7c20;
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x4d0))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027e7c20;
  if (*(char *)((longlong)unaff_RDI + 0x5c) != '\0') {
    if (DAT_027e7c20 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (local_40 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
      bVar10 = false;
    }
    else {
      FUN_01d28610();
      if (local_40 == (longlong *)0x0) {
        bVar10 = false;
        plVar7 = (longlong *)0x0;
      }
      else {
        bVar10 = true;
        plVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
    }
    iVar6 = FUN_01caecd0();
    if (iVar6 == 3) {
      if (plVar7 != (longlong *)0x0) {
        FUN_00cb1f10();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00cb1f10();
          FUN_00db3270();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        goto LAB_01d16f92;
      }
    }
    else {
      if (iVar6 == 1) {
        if (plVar7 == (longlong *)0x0) goto LAB_01d16fa4;
        FUN_00cb1f10();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          FUN_00cb1f10();
          FUN_00db3260();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_01d16f92:
      if ((bVar10) && (plVar7 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_01d16fa4:
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_027edfc8;
  if (DAT_027edfc8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x500))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01d17000:
  FUN_00d50b20();
  return uVar8;
}




// ============================================================
// @01d15bc0 — 771 bytes
// str: ""GNControl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01d15bc0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong **pplVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
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
  longlong *local_30;
  char local_28;
  
  FUN_01d15ab0();
  FUN_01cc9cf0();
  pplVar6 = &local_30;
  uVar8 = FUN_01ccad60();
  plVar1 = local_30;
  if (DAT_026e43b0 == '\0') {
    iVar4 = ___cxa_guard_acquire();
    uVar8 = extraout_XMM0_Da_00;
    if (iVar4 != 0) {
      _DAT_026df898 = FUN_0006d940();
      _DAT_026df880 = "GNControl";
      _DAT_026df888 = 0x1c8;
      _DAT_026df890 = FUN_000858d0;
      _DAT_026df8a0 = 0;
      uRam00000000026df8a8 = 0;
      _DAT_026df8b0 = 0;
      uRam00000000026df8b8 = 0;
      _DAT_026df8c0 = 0;
      uRam00000000026df8c8 = 0;
      _DAT_026df8d0 = 0;
      uRam00000000026df8d8 = 0;
      _DAT_026df8e0 = 0;
      uRam00000000026df8e8 = 0;
      _DAT_026df8f0 = 0;
      uRam00000000026df8f8 = 0;
      _DAT_026df900 = 0;
      uRam00000000026df908 = 0;
      _DAT_026df910 = 0;
      uRam00000000026df918 = 0;
      _DAT_026df920 = 0;
      uRam00000000026df928 = 0;
      _DAT_026df930 = 0;
      uRam00000000026df938 = 0;
      _DAT_026df940 = 0;
      uVar8 = ___cxa_guard_release();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da;
    if (cVar3 != '\0') goto LAB_01d15c29;
  }
  pplVar6 = &DAT_02802688;
LAB_01d15c29:
  plVar1 = *pplVar6;
  if (*(char *)(pplVar6 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      uVar8 = FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar6 + 1) = 0;
  }
  if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
    uVar8 = FUN_00d50b20();
  }
  lVar2 = DAT_027e7c20;
  if (plVar1 != (longlong *)0x0) {
    if (DAT_027e7c20 != 0) {
      uVar8 = FUN_00d50b00();
    }
    local_80 = lVar2;
    local_78 = '\x01';
    uVar8 = FUN_01ccaae0(uVar8,&local_80);
    lVar2 = DAT_027edfc8;
    bVar7 = true;
    if (local_30 == (longlong *)0x0) {
      if (DAT_027edfc8 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_70 = lVar2;
      local_68 = '\x01';
      FUN_01ccaae0(uVar8,&local_70);
      bVar7 = local_90 != 0;
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_28 != '\0') && (local_30 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if (bVar7) {
      local_58 = '\0';
      local_60 = 0;
      (**(code **)(*plVar1 + 0xa20))();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_48 = '\0';
      local_50 = 0;
      (**(code **)(*plVar1 + 0xa10))();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      FUN_001f8a30();
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      plVar5 = plVar1;
      if (cVar3 == '\0') {
        plVar5 = DAT_02802688;
      }
      if (plVar5 != (longlong *)0x0) {
        local_38 = '\0';
        local_40 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0xae0))();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          (**(code **)(*local_40 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dd5240 — 694 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dd549c) */
/* WARNING: Removing unreachable block (ram,0x01dd53ab) */
/* WARNING: Removing unreachable block (ram,0x01dd545e) */
/* WARNING: Removing unreachable block (ram,0x01dd546b) */

undefined8 * FUN_01dd5240(void)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  longlong local_50;
  char local_48;
  
  FUN_01dd4960();
  if (local_50 == 0) {
    bVar3 = true;
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
    if ((6 < *(int *)(local_50 + 0x18) + 3U) && (*(longlong *)(unaff_RSI + 0x1f8) != 0)) {
      puVar5 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar5 = &DAT_02572358;
      (*DAT_02572370)();
      if (*(int *)(local_50 + 0x18) < 4) {
        lVar7 = 0;
        bVar4 = false;
      }
      else {
        lVar9 = 0;
        bVar4 = false;
        lVar8 = 0;
        do {
          plVar2 = *(longlong **)(unaff_RSI + 0x1f8);
          FUN_00d50b00();
          (**(code **)(*plVar2 + 0x40))
                    (*(undefined4 *)(*(longlong *)(local_50 + 0x10) + lVar9 * 4),
                     &stack0xffffffffffffff98);
          if (local_50 == lVar8) {
            lVar7 = lVar8;
            if ((!bVar4) && (local_50 != 0)) {
              if (local_48 == '\0') {
                FUN_00d50b00();
LAB_01dd5400:
                bVar10 = local_48 != '\0';
                goto joined_r0x01dd5404;
              }
              goto LAB_01dd5394;
            }
            bVar3 = bVar4;
            if (local_48 != '\0') {
LAB_01dd540a:
              lVar7 = lVar8;
              bVar3 = bVar4;
              if (local_50 != 0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            lVar7 = local_50;
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if (bVar4) {
                if (lVar8 != 0) {
                  FUN_00d50b20();
                  lVar8 = local_50;
                  goto LAB_01dd5400;
                }
                bVar10 = false;
                lVar8 = local_50;
joined_r0x01dd5404:
                bVar4 = true;
                lVar7 = lVar8;
                bVar3 = bVar4;
                if (bVar10) goto LAB_01dd540a;
              }
            }
            else {
              if ((bVar4) && (lVar8 != 0)) {
                FUN_00d50b20();
              }
LAB_01dd5394:
              local_48 = '\0';
              bVar3 = true;
            }
          }
          bVar4 = bVar3;
          if (unaff_RSI != 0) {
            FUN_00d50b20();
          }
          if (lVar7 != 0) {
            FUN_00d21140();
          }
          lVar9 = lVar9 + 1;
          iVar1 = *(int *)(local_50 + 0x18);
          iVar6 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar6 = iVar1;
          }
          lVar8 = lVar7;
        } while (lVar9 < iVar6 >> 2);
      }
      *unaff_RDI = puVar5;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      bVar3 = false;
      if ((bVar4) && (lVar7 != 0)) {
        FUN_00d50b20();
        bVar3 = false;
      }
      goto LAB_01dd54b5;
    }
    bVar3 = false;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_01dd54b5:
  if (!bVar3) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @000f9300 — 678 bytes
// ============================================================

undefined4
FUN_000f9300(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  int *unaff_RDI;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8;
  int local_res10;
  int local_res18;
  int local_res20;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000138;
  undefined4 in_stack_00000140;
  undefined4 in_stack_00000148;
  undefined4 in_stack_00000150;
  undefined4 in_stack_00000158;
  
  if (*(char *)*unaff_RSI == '=') {
    param_2 = param_1;
  }
  *unaff_RDI = param_2;
  param_2 = param_2 + 1;
  if (*(char *)unaff_RSI[1] != '=') {
    param_3 = param_2;
  }
  unaff_RDI[1] = param_3;
  if (*(char *)unaff_RSI[2] != '=') {
    param_4 = param_3 + 1;
  }
  unaff_RDI[2] = param_4;
  iVar7 = param_4 + 1;
  if (*(char *)unaff_RSI[3] == '=') {
    iVar7 = local_res8;
  }
  unaff_RDI[3] = iVar7;
  iVar5 = iVar7 + 1;
  if (*(char *)unaff_RSI[4] == '=') {
    iVar5 = local_res10;
  }
  unaff_RDI[4] = iVar5;
  iVar3 = iVar5 + 1;
  if (*(char *)unaff_RSI[5] == '=') {
    iVar3 = local_res18;
  }
  unaff_RDI[5] = iVar3;
  iVar4 = iVar3 + 1;
  if (*(char *)unaff_RSI[6] == '=') {
    iVar4 = local_res20;
  }
  unaff_RDI[6] = iVar4;
  iVar9 = iVar4 + 1;
  if (*(char *)unaff_RSI[7] == '=') {
    iVar9 = param_5;
  }
  unaff_RDI[7] = iVar9;
  iVar10 = iVar9 + 1;
  if (*(char *)unaff_RSI[8] == '=') {
    iVar10 = param_6;
  }
  unaff_RDI[8] = iVar10;
  iVar8 = iVar10 + 1;
  if (*(char *)unaff_RSI[9] == '=') {
    iVar8 = param_7;
  }
  unaff_RDI[9] = iVar8;
  iVar11 = iVar8 + 1;
  if (*(char *)unaff_RSI[10] == '=') {
    iVar11 = param_8;
  }
  unaff_RDI[10] = iVar11;
  iVar6 = iVar11 + 1;
  if (*(char *)unaff_RSI[0xb] == '=') {
    iVar6 = param_9;
  }
  unaff_RDI[0xb] = iVar6;
  cVar1 = FUN_000f95b0(param_10,iVar6 + 1,param_11,param_12,in_stack_00000088,in_stack_00000090,
                       in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0,
                       in_stack_000000b8,in_stack_000000c0,in_stack_000000c8,in_stack_000000d0,
                       in_stack_000000d8,in_stack_000000e0,in_stack_000000e8,in_stack_000000f0,
                       in_stack_000000f8,in_stack_00000100,in_stack_00000108,in_stack_00000110,
                       in_stack_00000118,in_stack_00000120,in_stack_00000128,in_stack_00000130,
                       in_stack_00000138,in_stack_00000140,in_stack_00000148,in_stack_00000150,
                       in_stack_00000158);
  if (((((cVar1 == '\0') || (unaff_RDI[0xc] != iVar6 + 1)) || (unaff_RDI[0xb] != iVar11 + 1)) ||
      ((((unaff_RDI[10] != iVar8 + 1 || (unaff_RDI[9] != iVar10 + 1)) ||
        ((unaff_RDI[8] != iVar9 + 1 || ((unaff_RDI[7] != iVar4 + 1 || (unaff_RDI[6] != iVar3 + 1))))
        )) || (unaff_RDI[5] != iVar5 + 1)))) ||
     (((unaff_RDI[4] != iVar7 + 1 || (unaff_RDI[3] != param_4 + 1)) || (unaff_RDI[2] != param_3 + 1)
      ))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),unaff_RDI[1] == param_2);
  }
  return uVar2;
}




// ============================================================
// @01d0ec70 — 623 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d0ec9b) */
/* WARNING: Removing unreachable block (ram,0x01d0eca4) */

void FUN_01d0ec70(void)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong local_28;
  char local_20;
  
  FUN_01e3b960();
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x138) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x140);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x140) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x140);
        *(longlong *)(unaff_RDI + 0x140) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x140) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x148) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x14c) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x150) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x158);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x158) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x158);
        *(longlong *)(unaff_RDI + 0x158) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x158) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x470))();
  lVar1 = *(longlong *)(unaff_RDI + 0x160);
  if (lVar1 != local_28) {
    if (local_20 == '\0') {
      if (local_28 == 0) {
        *(undefined8 *)(unaff_RDI + 0x160) = 0;
      }
      else {
        FUN_00d50b00();
        lVar1 = *(longlong *)(unaff_RDI + 0x160);
        *(longlong *)(unaff_RDI + 0x160) = local_28;
      }
    }
    else {
      local_20 = '\0';
      *(longlong *)(unaff_RDI + 0x160) = local_28;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if ((local_20 != '\0') && (local_28 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x168) = uVar2;
  uVar2 = (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  *(undefined1 *)(unaff_RDI + 0x16a) = uVar2;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x430))();
  *(undefined4 *)(unaff_RDI + 0x170) = uVar3;
  uVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x428))();
  *(undefined4 *)(unaff_RDI + 0x174) = uVar3;
  (**(code **)(*(longlong *)*unaff_RSI + 0x418))();
  return;
}




// ============================================================
// @01d16560 — 612 bytes
// ============================================================

undefined8 FUN_01d16560(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_40;
  longlong local_38;
  
  lVar2 = DAT_027ef820;
  if (DAT_027ef820 == 0) {
LAB_01d16626:
    local_38 = 0;
LAB_01d16638:
    local_40 = 0;
LAB_01d16641:
    lVar5 = 0;
  }
  else {
    FUN_00d50b00();
    local_38 = DAT_027ef820;
    if (DAT_027ef820 == 0) goto LAB_01d16626;
    FUN_00d50b00();
    local_40 = DAT_027ef820;
    if (DAT_027ef820 == 0) goto LAB_01d16638;
    FUN_00d50b00();
    lVar5 = DAT_027ef820;
    if (DAT_027ef820 == 0) goto LAB_01d16641;
    FUN_00d50b00();
    lVar3 = DAT_027ef820;
    if (DAT_027ef820 != 0) {
      FUN_00d50b00();
      lVar4 = DAT_027ef820;
      if (DAT_027ef820 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_00d50b00();
      }
      bVar1 = false;
      goto LAB_01d16646;
    }
  }
  bVar1 = true;
  lVar3 = 0;
  lVar4 = 0;
LAB_01d16646:
  local_88 = local_38;
  local_80 = local_40;
  local_78 = lVar5;
  local_70 = lVar3;
  local_68 = lVar4;
  FUN_007f7950(&local_80,&local_88,&local_78,&local_70);
  FUN_000b6830();
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @000f9080 — 599 bytes
// str: ""GNControl""
// str: ""GNControlType""
// str: ""_controlType""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000f9080(void)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_XMM0_Da;
  
  if (DAT_026dfff8 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026dff30 = 0x100000000;
      bVar1 = FUN_000f9300(extraout_XMM0_Da,2);
      DAT_026dfff0 = DAT_026dff34 == 1 & bVar1 & DAT_026dff38 == 2;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e0030 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      _DAT_026e0000 = "GNControlType";
      _DAT_026e0008 = 0x30;
      DAT_026e000c = DAT_026dfff0;
      _DAT_026e0010 = &DAT_026dff30;
      _DAT_026e0018 = &DAT_026dfda0;
      _DAT_026e0020 = 0;
      uRam00000000026e0028 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026dfd98 == '\0') {
    iVar2 = ___cxa_guard_acquire();
    if (iVar2 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar2 = ___cxa_guard_acquire();
        if (iVar2 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026dfd58 = "_controlType";
      _DAT_026dfd60 = &DAT_026df880;
      _DAT_026dfd68 = 0;
      _DAT_026dfd70 = 0x6500;
      _DAT_026dfd78 = "GNControlType";
      _DAT_026dfd80 = &DAT_026e0000;
      _DAT_026dfd88 = 0;
      uRam00000000026dfd90 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026dfd58;
}




// ============================================================
// @000f95b0 — 594 bytes
// ============================================================

undefined4
FUN_000f95b0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *unaff_RSI;
  int *unaff_RDI;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8;
  int local_res10;
  int local_res18;
  int local_res20;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  undefined4 in_stack_000000f8;
  
  if (*(char *)*unaff_RSI == '=') {
    param_2 = param_1;
  }
  *unaff_RDI = param_2;
  param_2 = param_2 + 1;
  if (*(char *)unaff_RSI[1] != '=') {
    param_3 = param_2;
  }
  unaff_RDI[1] = param_3;
  if (*(char *)unaff_RSI[2] != '=') {
    param_4 = param_3 + 1;
  }
  unaff_RDI[2] = param_4;
  iVar7 = param_4 + 1;
  if (*(char *)unaff_RSI[3] == '=') {
    iVar7 = local_res8;
  }
  unaff_RDI[3] = iVar7;
  iVar5 = iVar7 + 1;
  if (*(char *)unaff_RSI[4] == '=') {
    iVar5 = local_res10;
  }
  unaff_RDI[4] = iVar5;
  iVar3 = iVar5 + 1;
  if (*(char *)unaff_RSI[5] == '=') {
    iVar3 = local_res18;
  }
  unaff_RDI[5] = iVar3;
  iVar4 = iVar3 + 1;
  if (*(char *)unaff_RSI[6] == '=') {
    iVar4 = local_res20;
  }
  unaff_RDI[6] = iVar4;
  iVar9 = iVar4 + 1;
  if (*(char *)unaff_RSI[7] == '=') {
    iVar9 = param_5;
  }
  unaff_RDI[7] = iVar9;
  iVar10 = iVar9 + 1;
  if (*(char *)unaff_RSI[8] == '=') {
    iVar10 = param_6;
  }
  unaff_RDI[8] = iVar10;
  iVar8 = iVar10 + 1;
  if (*(char *)unaff_RSI[9] == '=') {
    iVar8 = param_7;
  }
  unaff_RDI[9] = iVar8;
  iVar11 = iVar8 + 1;
  if (*(char *)unaff_RSI[10] == '=') {
    iVar11 = param_8;
  }
  unaff_RDI[10] = iVar11;
  iVar6 = iVar11 + 1;
  if (*(char *)unaff_RSI[0xb] == '=') {
    iVar6 = param_9;
  }
  unaff_RDI[0xb] = iVar6;
  cVar1 = FUN_000f9810(param_10,iVar6 + 1,param_11,param_12,in_stack_00000088,in_stack_00000090,
                       in_stack_00000098,in_stack_000000a0,in_stack_000000a8,in_stack_000000b0,
                       in_stack_000000b8,in_stack_000000c0,in_stack_000000c8,in_stack_000000d0,
                       in_stack_000000d8,in_stack_000000e0,in_stack_000000e8,in_stack_000000f0,
                       in_stack_000000f8);
  if (((((cVar1 == '\0') || (unaff_RDI[0xc] != iVar6 + 1)) || (unaff_RDI[0xb] != iVar11 + 1)) ||
      ((((unaff_RDI[10] != iVar8 + 1 || (unaff_RDI[9] != iVar10 + 1)) ||
        ((unaff_RDI[8] != iVar9 + 1 || ((unaff_RDI[7] != iVar4 + 1 || (unaff_RDI[6] != iVar3 + 1))))
        )) || (unaff_RDI[5] != iVar5 + 1)))) ||
     (((unaff_RDI[4] != iVar7 + 1 || (unaff_RDI[3] != param_4 + 1)) || (unaff_RDI[2] != param_3 + 1)
      ))) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT31((int3)((uint)param_2 >> 8),unaff_RDI[1] == param_2);
  }
  return uVar2;
}




// ============================================================
// @01dd6cc0 — 569 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dd6ec1) */
/* WARNING: Removing unreachable block (ram,0x01dd6eca) */
/* WARNING: Removing unreachable block (ram,0x01dd6d88) */
/* WARNING: Removing unreachable block (ram,0x01dd6e43) */
/* WARNING: Removing unreachable block (ram,0x01dd6e48) */
/* WARNING: Removing unreachable block (ram,0x01dd6e53) */
/* WARNING: Removing unreachable block (ram,0x01dd6d92) */
/* WARNING: Removing unreachable block (ram,0x01dd6d39) */
/* WARNING: Removing unreachable block (ram,0x01dd6d45) */
/* WARNING: Removing unreachable block (ram,0x01dd6e7e) */
/* WARNING: Removing unreachable block (ram,0x01dd6e87) */
/* WARNING: Removing unreachable block (ram,0x01dd6e21) */
/* WARNING: Removing unreachable block (ram,0x01dd6e2e) */
/* WARNING: Removing unreachable block (ram,0x01dd6dd1) */
/* WARNING: Removing unreachable block (ram,0x01dd6dde) */

undefined8 FUN_01dd6cc0(undefined4 param_1)

{
  longlong *plVar1;
  longlong unaff_RDI;
  undefined8 uVar2;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RDI + 0x30);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = FUN_01e4ae70();
  }
  else {
    FUN_00d50b00();
    FUN_01e48f80(param_1);
    (**(code **)(*plVar1 + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 == (longlong *)0x0) {
      FUN_01e48f80(param_1);
      uVar2 = (**(code **)(*plVar1 + 0x6d0))();
    }
    else {
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x490))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_40 + 0x6d0))(param_1);
      uVar2 = FUN_01e437f0();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return uVar2;
}




// ============================================================
// @01dd6930 — 567 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dd6b37) */
/* WARNING: Removing unreachable block (ram,0x01dd6b40) */
/* WARNING: Removing unreachable block (ram,0x01dd69f9) */
/* WARNING: Removing unreachable block (ram,0x01dd6aba) */
/* WARNING: Removing unreachable block (ram,0x01dd6abf) */
/* WARNING: Removing unreachable block (ram,0x01dd6aca) */
/* WARNING: Removing unreachable block (ram,0x01dd6a03) */
/* WARNING: Removing unreachable block (ram,0x01dd69a6) */
/* WARNING: Removing unreachable block (ram,0x01dd69af) */
/* WARNING: Removing unreachable block (ram,0x01dd6af9) */
/* WARNING: Removing unreachable block (ram,0x01dd6b02) */
/* WARNING: Removing unreachable block (ram,0x01dd6a90) */
/* WARNING: Removing unreachable block (ram,0x01dd6a99) */
/* WARNING: Removing unreachable block (ram,0x01dd6a49) */
/* WARNING: Removing unreachable block (ram,0x01dd6a56) */

undefined8 FUN_01dd6930(undefined4 param_1)

{
  longlong *plVar1;
  longlong unaff_RSI;
  undefined8 unaff_RDI;
  longlong *local_40;
  char local_38;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x30);
  if (plVar1 == (longlong *)0x0) {
    FUN_01e4ae50();
  }
  else {
    FUN_00d50b00();
    FUN_01e48f80(param_1);
    (**(code **)(*plVar1 + 0xa28))();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    if (local_40 == (longlong *)0x0) {
      FUN_01e48f80(param_1);
      (**(code **)(*plVar1 + 0x6c8))();
      FUN_00d50b20();
    }
    else {
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x490))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01e48f80(param_1);
      (**(code **)(*local_40 + 0x6c8))();
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}




// ============================================================
// @01dd66d0 — 551 bytes
// str: ""GNControl""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd66d0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong **pplVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar8;
  longlong *local_58;
  undefined1 local_50;
  longlong local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  local_48 = *(longlong *)(unaff_RSI + 0x38);
  if (local_48 == 0) {
LAB_01dd68c9:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_50 = 0;
    local_58 = (longlong *)0x0;
    local_40 = -1;
    iStack_3c = 0;
    local_38 = 0;
    uVar7 = param_1;
    iVar3 = 0;
    do {
      while( true ) {
        do {
          do {
            iVar6 = 0;
            uVar8 = param_2;
            if (iVar3 != 0) {
              if (iVar3 < 1) {
                iVar6 = -iVar3;
                iStack_3c = iVar6;
              }
              else {
                local_40 = local_40 - iVar3;
                uVar7 = FUN_00d23690(uVar7,iVar3);
                local_38 = local_38 + iVar3;
                iVar6 = 0;
                uVar8 = param_2;
                iStack_3c = iVar6;
              }
            }
            lVar4 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(local_48 + 0xc) <= local_40) {
              FUN_000a9680();
              goto LAB_01dd68c9;
            }
            plVar1 = *(longlong **)(*(longlong *)(local_48 + 0x10) + 8 + lVar4 * 8);
            param_2 = uVar8;
            iVar3 = iVar6;
            local_58 = plVar1;
          } while (plVar1 == *(longlong **)(unaff_RSI + 0x298));
          param_2 = (**(code **)(*plVar1 + 0x4d8))();
          cVar2 = FUN_00d05410(param_1,param_2,uVar8);
          uVar7 = extraout_XMM0_Da;
        } while (cVar2 == '\0');
        if ((DAT_026e43b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar5 = &local_58;
        if (cVar2 == '\0') {
          pplVar5 = (longlong **)&DAT_02802688;
        }
        plVar1 = *pplVar5;
        uVar7 = extraout_XMM0_Da_00;
        if (*(char *)(pplVar5 + 1) == '\0') break;
        *(undefined1 *)(pplVar5 + 1) = 0;
        iVar3 = iStack_3c;
        if (plVar1 != (longlong *)0x0) goto LAB_01dd68ef;
      }
      iVar3 = iStack_3c;
    } while (plVar1 == (longlong *)0x0);
    FUN_00d50b00();
LAB_01dd68ef:
    *unaff_RDI = (longlong)plVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    FUN_000a9680();
  }
  return;
}




// ============================================================
// @01d0e580 — 526 bytes
// str: ""_editObjectValue""
// str: ""v@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01d0e755) */
/* WARNING: Removing unreachable block (ram,0x01d0e75e) */

void FUN_01d0e580(void)

{
  bool bVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong local_a0;
  char local_98;
  undefined8 *local_70;
  undefined4 local_68;
  longlong local_60;
  char local_58;
  
  plVar4 = (longlong *)FUN_00cafdf0();
  bVar1 = true;
  if (plVar4 == (longlong *)0x0) {
    bVar2 = true;
  }
  else {
    FUN_00d50b00();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x458))();
    if (unaff_RDI != (longlong *)0x0) {
      FUN_00d50b20();
    }
    FUN_00cb1f10();
    if (local_70 != (undefined8 *)0x0) {
      if ((char)local_68 == '\0') {
        FUN_00d50b00();
        if (((char)local_68 != '\0') && (local_70 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
      }
      (**(code **)(*unaff_RDI + 0x980))();
      local_68 = 1;
      local_70 = &DAT_024c5048;
      local_58 = 0;
      if (local_a0 != 0) {
        FUN_00d50b00();
      }
      local_60 = local_a0;
      local_58 = '\x01';
      (**(code **)(*unaff_RDI + 0x278))(&local_70,"v@");
      local_70 = &DAT_024c5048;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      lVar3 = DAT_027ef680;
      if (DAT_027ef680 != 0) {
        FUN_00d50b00();
      }
      FUN_00db3140();
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      bVar1 = false;
    }
    bVar2 = false;
  }
  (**(code **)(*unaff_RDI + 0x978))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @000f8a60 — 519 bytes
// str: ""GNControl""
// str: ""GNTextCropping""
// str: ""_textCropping""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_000f8a60(void)

{
  int iVar1;
  
  if (DAT_026dfc88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026dfc70 = _DAT_0238fcc0;
      uRam00000000026dfc74 = _UNK_0238fcc4;
      uRam00000000026dfc78 = _UNK_0238fcc8;
      uRam00000000026dfc7c = _UNK_0238fccc;
      DAT_026dfc80 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026dfcc0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026dfc90 = "GNTextCropping";
      _DAT_026dfc98 = 4;
      DAT_026dfc9c = DAT_026dfc80;
      _DAT_026dfca0 = &DAT_026dfc70;
      _DAT_026dfca8 = &DAT_026dfc40;
      _DAT_026dfcb0 = 0;
      uRam00000000026dfcb8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026dfc30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e43b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026df898 = FUN_0006d940();
          _DAT_026df880 = "GNControl";
          _DAT_026df888 = 0x1c8;
          _DAT_026df890 = FUN_000858d0;
          _DAT_026df8a0 = 0;
          uRam00000000026df8a8 = 0;
          _DAT_026df8b0 = 0;
          uRam00000000026df8b8 = 0;
          _DAT_026df8c0 = 0;
          uRam00000000026df8c8 = 0;
          _DAT_026df8d0 = 0;
          uRam00000000026df8d8 = 0;
          _DAT_026df8e0 = 0;
          uRam00000000026df8e8 = 0;
          _DAT_026df8f0 = 0;
          uRam00000000026df8f8 = 0;
          _DAT_026df900 = 0;
          uRam00000000026df908 = 0;
          _DAT_026df910 = 0;
          uRam00000000026df918 = 0;
          _DAT_026df920 = 0;
          uRam00000000026df928 = 0;
          _DAT_026df930 = 0;
          uRam00000000026df938 = 0;
          _DAT_026df940 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026dfbf0 = "_textCropping";
      _DAT_026dfbf8 = &DAT_026df880;
      _DAT_026dfc00 = 0;
      _DAT_026dfc08 = 0x6500;
      _DAT_026dfc10 = "GNTextCropping";
      _DAT_026dfc18 = &DAT_026dfc90;
      _DAT_026dfc20 = 0;
      uRam00000000026dfc28 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026dfbf0;
}



