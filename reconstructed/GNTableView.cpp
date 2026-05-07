// Reconstructed implementation of GNTableView
// From MikeCore binary — reverse-engineered pseudocode

#include "GNTableView.h"

// ============================================================
// @01dd9800 — 11637 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dd9800(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  char cVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  undefined8 in_RAX;
  undefined8 uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong *plVar26;
  int iVar27;
  longlong *plVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  byte bVar31;
  uint uVar32;
  longlong lVar33;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined7 uVar34;
  bool bVar35;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float fVar37;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  float extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dc_07;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float extraout_XMM0_Dd_04;
  float fVar38;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined4 extraout_XMM0_Dd_07;
  undefined4 extraout_XMM0_Dd_08;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0;
  longlong local_2a8;
  undefined1 local_2a0;
  longlong local_298;
  undefined1 local_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  longlong local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  longlong local_238;
  char local_230;
  longlong local_228;
  char local_220;
  longlong local_218;
  char local_210;
  longlong local_208;
  char local_200;
  longlong local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  longlong *local_158;
  char local_150;
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  ulonglong local_128;
  ulonglong local_120;
  undefined1 local_118 [16];
  uint local_fc;
  undefined8 local_f8;
  float fStack_f0;
  float fStack_ec;
  int local_dc;
  longlong local_d8;
  ulonglong local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  float fStack_b0;
  float fStack_ac;
  ulonglong local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  longlong *local_80;
  undefined1 local_78 [4];
  undefined1 auStack_74 [4];
  undefined8 uStack_70;
  ulonglong local_60;
  longlong local_58;
  longlong *local_50;
  char local_48;
  char local_31;
  
  lVar33 = *unaff_RSI;
  local_a0 = (undefined4)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)unaff_RSI[1]);
  if (((char)unaff_RSI[1] != '\0') && (lVar33 != 0)) {
    FUN_00d50b00();
  }
  local_d8 = lVar33;
  FUN_01e40eb0();
  plVar26 = local_50;
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar26 == (longlong *)0x0) goto LAB_01dd9e49;
  (**(code **)(*unaff_RDI + 0x7b0))();
  if (local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_01dd98c4;
    FUN_00d50b00();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01dd98af:
    uVar32 = FUN_01cf7680();
    uVar24 = (ulonglong)uVar32;
    FUN_00d50b20();
  }
  else {
    if (local_50 != (longlong *)0x0) goto LAB_01dd98af;
LAB_01dd98c4:
    uVar24 = 0;
  }
  iVar20 = FUN_01d3a5a0();
  if ((iVar20 == 2) || (iVar20 = FUN_01d3a5a0(), iVar20 == 8)) {
    if ((int)unaff_RDI[0x29] == -1) {
LAB_01dd9bfb:
      iVar20 = FUN_01d3b590();
      if (iVar20 == 0x800) {
        if (((int)unaff_RDI[0x30] != 0) &&
           (((int)unaff_RDI[0x36] == -1 || ((int)unaff_RDI[0x36] < (int)unaff_RDI[0x30] + -1)))) {
          FUN_01dd3d20(extraout_XMM0_Da_02,0);
        }
        (**(code **)(*unaff_RDI + 0x990))();
      }
      else {
        iVar20 = FUN_01d3b590();
        if (iVar20 == 0x400) {
          if (((int)unaff_RDI[0x36] == -1) || (0 < (int)unaff_RDI[0x36])) {
            FUN_01dd3d20(extraout_XMM0_Da_03,0);
          }
          (**(code **)(*unaff_RDI + 0x990))();
        }
        else {
          local_248 = *unaff_RSI;
          local_240 = '\0';
          FUN_01e459c0();
          if ((local_240 == '\0') || (local_248 == 0)) {
            local_58 = 0;
            local_60 = 0;
            goto LAB_01dd9e55;
          }
          FUN_00d50b20();
        }
      }
    }
    else {
      FUN_01d3b5d0();
      iVar20 = FUN_00d8c7a0();
      if (iVar20 == 1) {
        FUN_01d3b5d0();
        cVar18 = FUN_00d8ca70();
        bVar35 = cVar18 == '\x1b';
        uVar36 = extraout_XMM0_Da_00;
        if ((local_260 != '\0') && (local_268 != 0)) {
          uVar36 = FUN_00d50b20();
        }
      }
      else {
        bVar35 = false;
        uVar36 = extraout_XMM0_Da;
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        uVar36 = FUN_00d50b20();
      }
      if (bVar35) {
        local_2c0 = 0;
        local_2c8 = 0;
        FUN_01dd96d0(uVar36,&local_2c8);
      }
      else {
        FUN_01d3b5d0();
        plVar26 = local_50;
        local_258 = DAT_027f3310;
        if (DAT_027f3310 != 0) {
          FUN_00d50b00();
        }
        local_250 = '\x01';
        cVar18 = (**(code **)(*plVar26 + 0x50))();
        if ((local_250 != '\0') && (local_258 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar18 != '\0') goto LAB_01dd9bfb;
        if ((int)unaff_RDI[0x29] != -1) {
          local_50 = (longlong *)*unaff_RSI;
          local_48 = '\0';
          FUN_01dd5630(*(undefined4 *)((longlong)unaff_RDI + 0x254));
        }
      }
    }
LAB_01dd9e49:
    local_60 = 0;
    local_58 = 0;
    goto LAB_01dd9e55;
  }
  iVar20 = FUN_01d3a5a0();
  if ((iVar20 == 1) &&
     (((char)unaff_RDI[0x4f] == '\0' || (char)uVar24 != '\0' ||
      (*(char *)((longlong)unaff_RDI + 0x27a) != '\0')))) {
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_60 = 0;
    local_58 = 0;
    FUN_01d3abf0();
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_f8 = FUN_01e466c0();
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_60 = 0;
    local_58 = 0;
    fStack_f0 = extraout_XMM0_Dc;
    fStack_ec = extraout_XMM0_Dd;
    local_9c = FUN_01d3b590();
    if ((int)unaff_RDI[0x29] != -1) {
      local_2b0 = 0;
      local_2b8 = 0;
      FUN_01dd96d0(extraout_XMM0_Da_01,&local_2b8);
    }
    local_c0 = 0;
    local_88 = (longlong *)0x0;
    local_60 = 0;
    local_58 = 0;
    local_dc = FUN_01d3b620();
    plVar26 = (longlong *)CONCAT71((int7)(uVar24 >> 8),1);
    if (local_dc == 2) {
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_60 = 0;
      local_58 = 0;
      iVar20 = FUN_01d3b630();
      if (iVar20 != 1) goto LAB_01dd9d73;
      iVar20 = FUN_01dd3800((float)local_f8);
      if (iVar20 == -1) goto LAB_01dd9d73;
      uVar24 = *(ulonglong *)(unaff_RDI[0x2c] + 0x10);
      lVar33 = *(longlong *)(uVar24 + (longlong)iVar20 * 8);
      if (lVar33 == 0) goto LAB_01dd9d73;
      uVar22 = FUN_00d50b00();
      local_60 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      local_58 = lVar33;
      cVar18 = FUN_01db9af0();
      if (cVar18 != '\0') {
        local_2a8 = *unaff_RSI;
        local_2a0 = 0;
        local_60 = CONCAT71((int7)((ulonglong)local_2a8 >> 8),1);
        FUN_01ddd120();
        goto LAB_01dd9e55;
      }
      local_c0 = 0;
      local_88 = (longlong *)0x0;
      uVar22 = FUN_01db9ae0();
      uVar34 = (undefined7)((ulonglong)uVar22 >> 8);
      if ((char)uVar22 == '\0') {
        local_60 = CONCAT71(uVar34,1);
        local_c0 = 0;
        local_88 = (longlong *)0x0;
        iVar20 = FUN_01d3a5a0();
        cVar18 = *(char *)((longlong)unaff_RDI + 0x279);
        if (iVar20 == 1) {
          if (cVar18 == '\0') {
            fVar37 = local_f8._4_4_ /
                     (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
            uVar32 = 0xffffffff;
            if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
              uVar32 = (uint)fVar37;
            }
          }
          else {
            uVar32 = 0xffffffff;
            if ((0.0 <= local_f8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
              iVar20 = *(int *)(lVar33 + 0x18);
              iVar21 = iVar20 + 3;
              if (-1 < iVar20) {
                iVar21 = iVar20;
              }
              uVar24 = 0;
              uVar29 = (ulonglong)(uint)(iVar21 >> 2);
              if (iVar21 >> 2 < 1) {
                uVar29 = 0;
              }
              do {
                if (uVar29 == uVar24) goto LAB_01ddc38c;
                lVar25 = uVar24 * 4;
                uVar24 = uVar24 + 1;
              } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
              uVar32 = (int)uVar24 - 1;
              uVar24 = (ulonglong)uVar32;
            }
          }
LAB_01ddc38c:
          if (*(uint *)(unaff_RDI + 0x36) != uVar32) {
            lVar33 = unaff_RDI[0x34];
            if (lVar33 != 0) {
              uVar2 = *(uint *)(lVar33 + 0x18);
              uVar24 = (ulonglong)uVar2;
              uVar5 = uVar2 + 3;
              if (-1 < (int)uVar2) {
                uVar5 = uVar2;
              }
              if (3 < (int)uVar2) {
                uVar24 = 0;
                do {
                  if (*(uint *)(*(longlong *)(lVar33 + 0x10) + uVar24 * 4) == uVar32)
                  goto LAB_01ddc394;
                  uVar24 = uVar24 + 1;
                } while ((int)uVar5 >> 2 != (int)uVar24);
              }
            }
            goto LAB_01ddc441;
          }
LAB_01ddc394:
          if ((local_9c & 2) == 0) goto LAB_01ddc441;
          if (((cVar18 != '\0') && (0.0 <= local_f8._4_4_)) &&
             (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
            iVar20 = *(int *)(lVar33 + 0x18);
            iVar21 = iVar20 + 3;
            if (-1 < iVar20) {
              iVar21 = iVar20;
            }
            uVar29 = 0;
            uVar24 = (ulonglong)(uint)(iVar21 >> 2);
            if (iVar21 >> 2 < 1) {
              uVar24 = uVar29;
            }
            do {
              if (uVar24 == uVar29) break;
              lVar25 = uVar29 * 4;
              uVar29 = uVar29 + 1;
            } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
          }
          local_c0 = 0;
          local_88 = (longlong *)0x0;
          FUN_01dd4720();
        }
        else {
LAB_01ddc441:
          if (cVar18 == '\0') {
            fVar37 = local_f8._4_4_ /
                     (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
          }
          else {
            fVar37 = local_f8._4_4_;
            if ((0.0 <= local_f8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
              iVar20 = *(int *)(lVar33 + 0x18);
              iVar21 = iVar20 + 3;
              if (-1 < iVar20) {
                iVar21 = iVar20;
              }
              uVar29 = 0;
              uVar24 = (ulonglong)(uint)(iVar21 >> 2);
              if (iVar21 >> 2 < 1) {
                uVar24 = uVar29;
              }
              do {
                if (uVar24 == uVar29) break;
                lVar25 = uVar29 * 4;
                uVar29 = uVar29 + 1;
              } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
            }
          }
          local_c0 = 0;
          local_88 = (longlong *)0x0;
          FUN_01dd3d20(fVar37,(local_9c & 2) >> 1);
        }
        local_60 = CONCAT71((int7)(uVar24 >> 8),1);
        local_c0 = 0;
        local_88 = (longlong *)0x0;
        (**(code **)(*unaff_RDI + 0x990))();
        goto LAB_01dd9e55;
      }
      bVar31 = 1;
      plVar26 = (longlong *)0x0;
      local_60 = CONCAT71(uVar34,1);
    }
    else {
LAB_01dd9d73:
      bVar31 = 0;
      local_60 = 0;
      local_58 = 0;
    }
    FUN_01e42030();
    local_88 = local_50;
    if (local_50 == (longlong *)0x0) {
      local_c4 = 1;
      local_c0 = 0;
      local_88 = (longlong *)0x0;
    }
    else {
      if (local_48 == '\0') {
        FUN_00d50b00();
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d8b200();
      if (local_50 == unaff_RDI) {
        bVar35 = false;
        plVar23 = unaff_RDI;
      }
      else {
        plVar23 = (longlong *)FUN_01d3b630();
        bVar35 = (int)plVar23 == 1;
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        plVar23 = (longlong *)FUN_00d50b20();
      }
      local_c0 = CONCAT71((int7)((ulonglong)plVar23 >> 8),1);
      if (bVar35) {
        FUN_01e42250();
      }
      local_c4 = 0;
    }
    if (*(char *)((longlong)unaff_RDI + 0x1b6) != '\0') {
      uVar24 = FUN_01d3b590();
      if ((uVar24 & 4) != 0) {
        if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
          fVar37 = local_f8._4_4_ /
                   (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
          if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
            iVar20 = (int)fVar37;
            goto LAB_01dda068;
          }
        }
        else if ((0.0 <= local_f8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
          iVar20 = *(int *)(lVar33 + 0x18);
          iVar21 = iVar20 + 3;
          if (-1 < iVar20) {
            iVar21 = iVar20;
          }
          uVar29 = 0;
          uVar24 = (ulonglong)(uint)(iVar21 >> 2);
          if (iVar21 >> 2 < 1) {
            uVar24 = uVar29;
          }
          do {
            if (uVar24 == uVar29) goto LAB_01dda088;
            lVar25 = uVar29 * 4;
            uVar29 = uVar29 + 1;
          } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
          iVar20 = (int)uVar29 + -1;
LAB_01dda068:
          if (-1 < iVar20) {
            FUN_01dd4110();
            lVar33 = *unaff_RSI;
            while (lVar33 != 0) {
              iVar20 = FUN_01d3a5a0();
              if (iVar20 == 6) break;
              (**(code **)(*unaff_RDI + 0x658))();
              plVar23 = local_50;
              plVar26 = (longlong *)*unaff_RSI;
              if (plVar26 == local_50) {
                if (((char)unaff_RSI[1] == '\0') && (local_50 != (longlong *)0x0)) {
                  if (local_48 != '\0') goto LAB_01dda0a3;
                  FUN_00d50b00();
                  goto LAB_01dda145;
                }
LAB_01dda14b:
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                lVar33 = unaff_RSI[1];
                if (local_48 == '\0') {
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  *unaff_RSI = (longlong)plVar23;
                  if (((char)lVar33 != '\0') && (plVar26 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
LAB_01dda145:
                  *(undefined1 *)(unaff_RSI + 1) = 1;
                  goto LAB_01dda14b;
                }
                *unaff_RSI = (longlong)local_50;
                if (((char)lVar33 != '\0') && (plVar26 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01dda0a3:
                *(undefined1 *)(unaff_RSI + 1) = 1;
              }
              lVar33 = *unaff_RSI;
            }
            (**(code **)(*unaff_RDI + 0x990))();
            if ((char)local_c4 == '\0') {
              FUN_00d50b20();
            }
            goto LAB_01dd9e55;
          }
        }
LAB_01dda088:
        if ((char)local_c4 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_01dd9e55;
      }
    }
    iVar20 = FUN_01d3b630();
    local_b8 = CONCAT44(local_b8._4_4_,(float)local_b8);
    if (iVar20 == 1) {
      iVar20 = FUN_01dd3800((float)local_f8);
      if (iVar20 == -1) {
        uVar24 = 1;
        if (local_58 == 0) {
          uVar24 = local_60 & 0xff;
        }
        local_60 = uVar24;
        if (local_58 != 0 && (byte)plVar26 == 0) {
          uVar22 = FUN_00d50b20();
          local_60 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
        }
LAB_01dda021:
        local_58 = 0;
        lVar33 = local_58;
        uVar22 = local_f8;
      }
      else {
        lVar25 = (longlong)iVar20;
        lVar33 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + lVar25 * 8);
        if (lVar33 != 0) {
          lVar25 = FUN_00d50b00();
        }
        uVar34 = (undefined7)((ulonglong)lVar25 >> 8);
        uVar22 = local_f8;
        if (local_58 == lVar33) {
          if (((byte)plVar26 & local_58 != 0) == 0) {
            if (local_58 == 0) goto LAB_01dda021;
            FUN_00d50b20();
            lVar33 = local_58;
            uVar22 = local_f8;
          }
          else {
            local_60 = CONCAT71(uVar34,1);
            lVar33 = local_58;
          }
        }
        else {
          local_60 = CONCAT71(uVar34,1);
          if ((bool)(bVar31 & local_58 != 0)) {
            FUN_00d50b20();
            uVar22 = local_f8;
          }
        }
      }
      local_58 = lVar33;
      local_f8._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
      local_f8._0_4_ = (float)uVar22;
      if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
        local_f8._4_4_ =
             local_f8._4_4_ /
             (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
        iVar20 = -1;
        if ((0.0 <= local_f8._4_4_) && (local_f8._4_4_ < (float)(int)unaff_RDI[0x30])) {
          iVar20 = (int)local_f8._4_4_;
        }
      }
      else {
        iVar20 = -1;
        if ((0.0 <= local_f8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
          iVar21 = *(int *)(lVar33 + 0x18);
          iVar27 = iVar21 + 3;
          if (-1 < iVar21) {
            iVar27 = iVar21;
          }
          uVar29 = 0;
          uVar24 = (ulonglong)(uint)(iVar27 >> 2);
          if (iVar27 >> 2 < 1) {
            uVar24 = uVar29;
          }
          do {
            if (uVar24 == uVar29) goto LAB_01dda268;
            lVar25 = uVar29 * 4;
            uVar29 = uVar29 + 1;
          } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
          iVar20 = (int)uVar29 + -1;
        }
      }
LAB_01dda268:
      iVar21 = FUN_01dd3800((float)local_f8);
      local_f8 = uVar22;
      if ((((local_9c & 2) == 0) && (local_58 != 0)) && (iVar20 != -1)) {
        cVar18 = FUN_01db9ae0();
        if (cVar18 == '\0') goto LAB_01dda394;
        plVar26 = (longlong *)unaff_RDI[0x3e];
        if (plVar26 != (longlong *)0x0) {
          local_150 = 0;
          FUN_00d50b00();
          local_150 = '\x01';
          local_238 = *(longlong *)(*(longlong *)(unaff_RDI[0x2c] + 0x10) + (longlong)iVar21 * 8);
          local_158 = unaff_RDI;
          if (local_238 != 0) {
            FUN_00d50b00();
          }
          local_230 = '\x01';
          cVar18 = (**(code **)(*plVar26 + 0x40))(&local_238,iVar20);
          if ((local_230 != '\0') && (local_238 != 0)) {
            FUN_00d50b20();
          }
          if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar18 == '\0') goto LAB_01dda394;
        }
        local_298 = *unaff_RSI;
        local_290 = 0;
        cVar18 = FUN_01dd5630(iVar21,iVar20);
        uVar22 = local_f8;
        local_b8 = CONCAT44(local_b8._4_4_,(float)local_b8);
        if (cVar18 == '\0') goto LAB_01dda394;
      }
      else {
LAB_01dda394:
        if (*unaff_RSI == 0) {
          plVar26 = (longlong *)((longlong)&MACH_HEADER.magic + 1);
          local_80 = (longlong *)0x0;
          fStack_b0 = fStack_f0;
          fStack_ac = fStack_ec;
          local_120 = 0;
          local_128 = 0;
          uVar17 = local_f8;
        }
        else {
          local_d0 = 0xffffffff;
          local_78 = (undefined1  [4])0xffffff01;
          fStack_b0 = fStack_f0;
          fStack_ac = fStack_ec;
          plVar26 = (longlong *)CONCAT71((int7)((ulonglong)plVar26 >> 8),1);
          local_128 = 0;
          local_120 = 0;
          local_a8 = 0xffffffff;
          local_fc = 0;
          local_80 = (longlong *)0x0;
          local_b8 = local_f8;
          do {
            iVar20 = FUN_01d3a5a0();
            uVar17 = local_b8;
            if ((iVar20 == 6) || ((local_128 & 1) != 0)) break;
            if ((int)local_d0 == -1) {
              if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
                fVar37 = local_b8._4_4_ /
                         (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
                local_a8 = 0xffffffff;
                if (fVar37 < 0.0) goto LAB_01dda8e5;
                local_d0 = 0xffffffff;
                if (fVar37 < (float)(int)unaff_RDI[0x30]) {
                  local_d0 = (ulonglong)(uint)(int)fVar37;
                  local_a8 = local_d0;
                }
              }
              else if ((local_b8._4_4_ < DAT_0239424c) || (lVar33 = unaff_RDI[0x52], lVar33 == 0)) {
LAB_01dda8e5:
                local_a8 = 0xffffffff;
                local_d0 = local_a8;
              }
              else {
                iVar20 = *(int *)(lVar33 + 0x18);
                iVar21 = iVar20 + 3;
                if (-1 < iVar20) {
                  iVar21 = iVar20;
                }
                uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                if (iVar21 >> 2 < 1) {
                  uVar24 = 0;
                }
                uVar29 = 0;
                do {
                  if (uVar24 == uVar29) goto LAB_01dda8e5;
                  lVar25 = uVar29 * 4;
                  uVar29 = uVar29 + 1;
                } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                local_d0 = (ulonglong)((int)uVar29 - 1);
                local_a8 = local_d0;
              }
            }
            cVar19 = (char)plVar26;
            plVar23 = (longlong *)*unaff_RSI;
            cVar18 = (char)unaff_RSI[1];
            if (plVar23 == local_80) {
              if (((cVar18 != '\0') && (cVar19 == '\0')) && (plVar23 != (longlong *)0x0)) {
                cVar18 = '\x01';
                FUN_00d50b00();
                plVar23 = local_80;
                goto LAB_01dda958;
              }
              cVar1 = *(char *)((longlong)unaff_RDI + 0x1b5);
              cVar18 = cVar19;
              uVar22 = local_b8;
            }
            else {
              if ((cVar18 != '\0') && (plVar23 != (longlong *)0x0)) {
                FUN_00d50b00();
              }
              if ((cVar19 != '\0') && (local_80 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01dda958:
              local_80 = plVar23;
              cVar1 = *(char *)((longlong)unaff_RDI + 0x1b5);
              uVar22 = local_b8;
            }
            plVar23 = unaff_RDI;
            if (cVar1 != '\0') {
              local_b8._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
              plVar23 = (longlong *)(local_120 & 0xffffffffffffff01);
              if ((local_120 & 1) == 0) {
                if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
                  local_b8._4_4_ =
                       local_b8._4_4_ /
                       (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
                  plVar23 = (longlong *)0xffffffff;
                  if ((0.0 <= local_b8._4_4_) && (local_b8._4_4_ < (float)(int)unaff_RDI[0x30])) {
                    plVar23 = (longlong *)(ulonglong)(uint)(int)local_b8._4_4_;
                  }
                }
                else {
                  plVar23 = (longlong *)0xffffffff;
                  if ((DAT_0239424c <= local_b8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                    iVar20 = *(int *)(lVar33 + 0x18);
                    iVar21 = iVar20 + 3;
                    if (-1 < iVar20) {
                      iVar21 = iVar20;
                    }
                    uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                    if (iVar21 >> 2 < 1) {
                      uVar24 = 0;
                    }
                    uVar29 = 0;
                    do {
                      if (uVar24 == uVar29) goto LAB_01ddaa39;
                      lVar25 = uVar29 * 4;
                      uVar29 = uVar29 + 1;
                    } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                    plVar23 = (longlong *)(ulonglong)((int)uVar29 - 1);
                  }
                }
LAB_01ddaa39:
                plVar28 = (longlong *)unaff_RDI[0x34];
                if ((int)unaff_RDI[0x36] == (int)plVar23) {
LAB_01ddaa4c:
                  if ((plVar28 == (longlong *)0x0) || ((int)plVar28[3] < 8)) goto LAB_01ddb393;
                }
                else if (plVar28 != (longlong *)0x0) {
                  iVar20 = (int)plVar28[3];
                  iVar21 = iVar20 + 3;
                  if (-1 < iVar20) {
                    iVar21 = iVar20;
                  }
                  if (3 < iVar20) {
                    lVar33 = 0;
                    do {
                      if (*(int *)(plVar28[2] + lVar33 * 4) == (int)plVar23) goto LAB_01ddaa4c;
                      lVar33 = lVar33 + 1;
                    } while (iVar21 >> 2 != (int)lVar33);
                  }
                }
                local_b8 = uVar22;
                iVar20 = FUN_01d3a5a0();
                if (iVar20 == 1) {
                  cVar19 = *(char *)((longlong)unaff_RDI + 0x279);
                  if (cVar19 == '\0') {
                    fVar37 = local_b8._4_4_ /
                             (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174)
                             );
                    plVar28 = (longlong *)0xffffffff;
                    if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
                      plVar28 = (longlong *)(ulonglong)(uint)(int)fVar37;
                    }
                  }
                  else {
                    plVar28 = (longlong *)0xffffffff;
                    if ((DAT_0239424c <= local_b8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0))
                    {
                      iVar20 = *(int *)(lVar33 + 0x18);
                      iVar21 = iVar20 + 3;
                      if (-1 < iVar20) {
                        iVar21 = iVar20;
                      }
                      uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                      if (iVar21 >> 2 < 1) {
                        uVar24 = 0;
                      }
                      uVar29 = 0;
                      do {
                        if (uVar24 == uVar29) goto LAB_01ddab88;
                        lVar25 = uVar29 * 4;
                        uVar29 = uVar29 + 1;
                      } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                      plVar28 = (longlong *)(ulonglong)((int)uVar29 - 1);
                    }
                  }
LAB_01ddab88:
                  plVar23 = unaff_RDI;
                  if ((int)unaff_RDI[0x36] != (int)plVar28) {
                    lVar33 = unaff_RDI[0x34];
                    if (lVar33 != 0) {
                      iVar20 = *(int *)(lVar33 + 0x18);
                      iVar21 = iVar20 + 3;
                      if (-1 < iVar20) {
                        iVar21 = iVar20;
                      }
                      if (3 < iVar20) {
                        plVar23 = *(longlong **)(lVar33 + 0x10);
                        lVar33 = 0;
                        do {
                          if (*(int *)((longlong)plVar23 + lVar33 * 4) == (int)plVar28)
                          goto LAB_01ddab98;
                          lVar33 = lVar33 + 1;
                        } while (iVar21 >> 2 != (int)lVar33);
                      }
                    }
                    goto LAB_01ddac56;
                  }
LAB_01ddab98:
                  if ((local_9c & 2) == 0) goto LAB_01ddac6d;
                  if (((cVar19 != '\0') && (DAT_0239424c <= local_b8._4_4_)) &&
                     (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                    iVar20 = *(int *)(lVar33 + 0x18);
                    iVar21 = iVar20 + 3;
                    if (-1 < iVar20) {
                      iVar21 = iVar20;
                    }
                    plVar28 = (longlong *)(ulonglong)(uint)(iVar21 >> 2);
                    if (iVar21 >> 2 < 1) {
                      plVar28 = (longlong *)0x0;
                    }
                    plVar23 = (longlong *)0x0;
                    do {
                      if (plVar28 == plVar23) goto LAB_01ddb263;
                      lVar25 = (longlong)plVar23 * 4;
                      plVar23 = (longlong *)((longlong)plVar23 + 1);
                    } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                    plVar23 = (longlong *)(ulonglong)((int)plVar23 - 1);
                  }
LAB_01ddb263:
                  FUN_01dd4720(plVar28,plVar23);
                }
                else {
LAB_01ddac56:
                  if ((local_9c & 2) == 0) {
                    cVar19 = *(char *)((longlong)unaff_RDI + 0x279);
LAB_01ddac6d:
                    if (cVar19 == '\0') {
                      fVar37 = local_b8._4_4_ /
                               (*(float *)(unaff_RDI + 0x2d) +
                               *(float *)((longlong)unaff_RDI + 0x174));
                      iVar20 = -1;
                      if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
                        iVar20 = (int)fVar37;
                      }
                    }
                    else {
                      iVar20 = -1;
                      if ((DAT_0239424c <= local_b8._4_4_) &&
                         (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                        iVar21 = *(int *)(lVar33 + 0x18);
                        iVar27 = iVar21 + 3;
                        if (-1 < iVar21) {
                          iVar27 = iVar21;
                        }
                        uVar24 = (ulonglong)(uint)(iVar27 >> 2);
                        if (iVar27 >> 2 < 1) {
                          uVar24 = 0;
                        }
                        uVar29 = 0;
                        do {
                          if (uVar24 == uVar29) goto LAB_01ddad14;
                          lVar25 = uVar29 * 4;
                          uVar29 = uVar29 + 1;
                        } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_
                                );
                        iVar20 = (int)uVar29 + -1;
                      }
                    }
LAB_01ddad14:
                    plVar28 = unaff_RDI;
                    if ((int)unaff_RDI[0x36] != iVar20) {
                      lVar33 = unaff_RDI[0x34];
                      if (lVar33 != 0) {
                        iVar21 = *(int *)(lVar33 + 0x18);
                        iVar27 = iVar21 + 3;
                        if (-1 < iVar21) {
                          iVar27 = iVar21;
                        }
                        if (3 < iVar21) {
                          plVar28 = *(longlong **)(lVar33 + 0x10);
                          lVar33 = 0;
                          do {
                            if (*(int *)((longlong)plVar28 + lVar33 * 4) == iVar20)
                            goto LAB_01ddad72;
                            lVar33 = lVar33 + 1;
                          } while (iVar27 >> 2 != (int)lVar33);
                        }
                      }
                      iVar20 = FUN_01d3a5a0();
                      local_fc = local_fc & 0xff;
                      if (iVar20 == 1) {
                        local_fc = 1;
                      }
                      plVar28 = (longlong *)0x0;
                    }
                  }
LAB_01ddad72:
                  if (local_80 != (longlong *)0x0) {
                    iVar20 = FUN_01d3a5a0();
                    if (iVar20 != 5) {
                      if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
                        fVar37 = local_b8._4_4_ /
                                 (*(float *)(unaff_RDI + 0x2d) +
                                 *(float *)((longlong)unaff_RDI + 0x174));
                        plVar28 = (longlong *)0xffffffff;
                        if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
                          plVar28 = (longlong *)(ulonglong)(uint)(int)fVar37;
                        }
                      }
                      else {
                        plVar28 = (longlong *)0xffffffff;
                        if ((DAT_0239424c <= local_b8._4_4_) &&
                           (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            uVar24 = 0;
                          }
                          uVar29 = 0;
                          do {
                            if (uVar24 == uVar29) goto LAB_01ddae3a;
                            lVar25 = uVar29 * 4;
                            uVar29 = uVar29 + 1;
                          } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                          plVar28 = (longlong *)(ulonglong)((int)uVar29 - 1);
                        }
                      }
LAB_01ddae3a:
                      if ((int)unaff_RDI[0x36] != (int)plVar28) {
                        lVar33 = unaff_RDI[0x34];
                        if (lVar33 != 0) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          if (3 < iVar20) {
                            lVar25 = 0;
                            do {
                              if (*(int *)(*(longlong *)(lVar33 + 0x10) + lVar25 * 4) ==
                                  (int)plVar28) goto LAB_01ddae4a;
                              lVar25 = lVar25 + 1;
                            } while (iVar21 >> 2 != (int)lVar25);
                          }
                        }
                        if (((*(char *)((longlong)unaff_RDI + 0x279) != '\0') &&
                            (DAT_0239424c <= local_b8._4_4_)) &&
                           (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          plVar28 = (longlong *)(ulonglong)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            plVar28 = (longlong *)0x0;
                          }
                          plVar23 = (longlong *)0x0;
                          do {
                            if (plVar28 == plVar23) break;
                            lVar25 = (longlong)plVar23 * 4;
                            plVar23 = (longlong *)((longlong)plVar23 + 1);
                          } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                        }
                        FUN_01dd3d20(plVar28,(local_9c & 2) >> 1);
                        goto LAB_01ddb377;
                      }
                    }
LAB_01ddae4a:
                    iVar20 = FUN_01d3a5a0();
                    if (iVar20 == 5) {
                      if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
                        fVar37 = local_b8._4_4_ /
                                 (*(float *)(unaff_RDI + 0x2d) +
                                 *(float *)((longlong)unaff_RDI + 0x174));
                        plVar28 = (longlong *)0xffffffff;
                        if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
                          plVar28 = (longlong *)(ulonglong)(uint)(int)fVar37;
                        }
                      }
                      else {
                        plVar28 = (longlong *)0xffffffff;
                        if ((DAT_0239424c <= local_b8._4_4_) &&
                           (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            uVar24 = 0;
                          }
                          uVar29 = 0;
                          do {
                            if (uVar24 == uVar29) goto LAB_01ddafc9;
                            lVar25 = uVar29 * 4;
                            uVar29 = uVar29 + 1;
                          } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                          plVar28 = (longlong *)(ulonglong)((int)uVar29 - 1);
                        }
                      }
LAB_01ddafc9:
                      if ((int)unaff_RDI[0x36] != (int)plVar28) {
                        lVar33 = unaff_RDI[0x34];
                        if (lVar33 != 0) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          if (3 < iVar20) {
                            lVar25 = 0;
                            do {
                              if (*(int *)(*(longlong *)(lVar33 + 0x10) + lVar25 * 4) ==
                                  (int)plVar28) goto LAB_01ddafd9;
                              lVar25 = lVar25 + 1;
                            } while (iVar21 >> 2 != (int)lVar25);
                          }
                        }
                        if (((*(char *)((longlong)unaff_RDI + 0x279) != '\0') &&
                            (DAT_0239424c <= local_b8._4_4_)) &&
                           (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          plVar28 = (longlong *)(ulonglong)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            plVar28 = (longlong *)0x0;
                          }
                          plVar23 = (longlong *)0x0;
                          do {
                            if (plVar28 == plVar23) break;
                            lVar25 = (longlong)plVar23 * 4;
                            plVar23 = (longlong *)((longlong)plVar23 + 1);
                          } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                        }
                        FUN_01dd3d20(plVar28,(local_9c & 2) >> 1);
                        goto LAB_01ddb377;
                      }
                    }
LAB_01ddafd9:
                    iVar20 = FUN_01d3a5a0();
                    if (iVar20 == 6) {
                      if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
                        fVar37 = local_b8._4_4_ /
                                 (*(float *)(unaff_RDI + 0x2d) +
                                 *(float *)((longlong)unaff_RDI + 0x174));
                        plVar28 = (longlong *)0xffffffff;
                        if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
                          plVar28 = (longlong *)(ulonglong)(uint)(int)fVar37;
                        }
                      }
                      else {
                        plVar28 = (longlong *)0xffffffff;
                        if ((DAT_0239424c <= local_b8._4_4_) &&
                           (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            uVar24 = 0;
                          }
                          uVar29 = 0;
                          do {
                            if (uVar24 == uVar29) goto LAB_01ddb158;
                            lVar25 = uVar29 * 4;
                            uVar29 = uVar29 + 1;
                          } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                          plVar28 = (longlong *)(ulonglong)((int)uVar29 - 1);
                        }
                      }
LAB_01ddb158:
                      if ((int)unaff_RDI[0x36] == (int)plVar28) {
LAB_01ddb164:
                        if (((*(char *)((longlong)unaff_RDI + 0x279) != '\0') &&
                            (DAT_0239424c <= local_b8._4_4_)) &&
                           (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          plVar28 = (longlong *)(ulonglong)(uint)(iVar21 >> 2);
                          if (iVar21 >> 2 < 1) {
                            plVar28 = (longlong *)0x0;
                          }
                          plVar23 = (longlong *)0x0;
                          do {
                            if (plVar28 == plVar23) break;
                            lVar25 = (longlong)plVar23 * 4;
                            plVar23 = (longlong *)((longlong)plVar23 + 1);
                          } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <=
                                   local_b8._4_4_);
                        }
                        FUN_01dd3d20(plVar28,(local_9c & 2) >> 1);
                      }
                      else {
                        lVar33 = unaff_RDI[0x34];
                        if (lVar33 != 0) {
                          iVar20 = *(int *)(lVar33 + 0x18);
                          iVar21 = iVar20 + 3;
                          if (-1 < iVar20) {
                            iVar21 = iVar20;
                          }
                          if (3 < iVar20) {
                            lVar25 = 0;
                            do {
                              if (*(int *)(*(longlong *)(lVar33 + 0x10) + lVar25 * 4) ==
                                  (int)plVar28) goto LAB_01ddb164;
                              lVar25 = lVar25 + 1;
                            } while (iVar21 >> 2 != (int)lVar25);
                          }
                        }
                      }
                    }
                  }
                }
LAB_01ddb377:
                local_120 = CONCAT71((int7)((ulonglong)plVar28 >> 8),1);
                plVar23 = (longlong *)(**(code **)(*unaff_RDI + 0x990))();
                uVar22 = local_b8;
              }
            }
LAB_01ddb393:
            lVar33 = *unaff_RSI;
            cVar19 = (char)unaff_RSI[1];
            local_b8 = uVar22;
            if (local_d8 == lVar33) {
              if (((cVar19 != '\0') && ((char)local_a0 == '\0')) && (local_d8 != 0)) {
                local_a0 = (undefined4)CONCAT71((int7)((ulonglong)plVar23 >> 8),1);
                FUN_00d50b00();
              }
            }
            else {
              if ((cVar19 != '\0') && (lVar33 != 0)) {
                FUN_00d50b00();
              }
              if (((char)local_a0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
              local_a0 = (undefined4)CONCAT71((int7)((ulonglong)plVar26 >> 8),cVar19);
              local_d8 = lVar33;
            }
            (**(code **)(*unaff_RDI + 0x658))();
            plVar26 = local_50;
            if (local_50 == local_80) {
              plVar26 = local_80;
              local_31 = cVar18;
              if ((cVar18 == '\0') && (local_50 != (longlong *)0x0)) {
                if (local_48 != '\0') goto LAB_01ddb454;
                local_31 = '\x01';
                FUN_00d50b00();
                plVar26 = local_80;
              }
            }
            else {
              if (local_48 == '\0') {
                if (local_50 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
                local_31 = '\x01';
                if ((cVar18 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                  goto LAB_01ddb4a4;
                }
              }
              else {
                if ((cVar18 != '\0') && (local_80 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01ddb454:
                local_48 = '\0';
              }
              local_31 = '\x01';
            }
LAB_01ddb4a4:
            plVar23 = (longlong *)*unaff_RSI;
            local_80 = plVar26;
            if (plVar23 == plVar26) {
              if (((local_31 != '\0') && ((char)unaff_RSI[1] == '\0')) &&
                 (plVar26 != (longlong *)0x0)) {
                cVar18 = '\x01';
                plVar23 = (longlong *)((ulonglong)plVar23 & 0xffffffffffffff00);
                FUN_00d50b00(plVar26);
                goto LAB_01ddb518;
              }
            }
            else {
              lVar33 = unaff_RSI[1];
              if ((local_31 != '\0') && (plVar26 != (longlong *)0x0)) {
                FUN_00d50b00(plVar26);
              }
              *unaff_RSI = (longlong)plVar26;
              cVar18 = local_31;
              if (((char)lVar33 != '\0') && (plVar23 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
LAB_01ddb518:
              *(char *)(unaff_RSI + 1) = cVar18;
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            uVar34 = (undefined7)((ulonglong)plVar23 >> 8);
            plVar26 = (longlong *)CONCAT71(uVar34,local_31);
            uVar17 = local_b8;
            if (*unaff_RSI == 0) break;
            iVar20 = FUN_01d3a5a0();
            if (iVar20 == 5) {
              plVar26 = (longlong *)CONCAT71(uVar34,local_31);
              FUN_01d3abf0();
              uVar22 = FUN_01e466c0();
              fStack_b0 = extraout_XMM0_Dc_00;
              fStack_ac = extraout_XMM0_Dd_00;
              local_b8 = uVar22;
              if (((local_78[0] & 1) != 0) &&
                 (((char)unaff_RDI[0x3d] != '\0' || ((char)unaff_RDI[0x46] != '\0')))) {
                if (*(char *)((longlong)unaff_RDI + 0x1b5) != '\0') {
                  local_228 = local_d8;
                  local_220 = '\0';
                  local_218 = *unaff_RSI;
                  local_210 = '\0';
                  cVar18 = (**(code **)(*unaff_RDI + 0x9e0))((byte)local_fc & 1,&local_218);
                  if ((local_210 != '\0') && (local_218 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_220 != '\0') && (local_228 != 0)) {
                    FUN_00d50b20();
                  }
                  uVar22 = local_b8;
                  if (cVar18 == '\0') goto LAB_01ddb78f;
                }
                local_b8._4_4_ = (float)((ulonglong)uVar22 >> 0x20);
                local_168 = DAT_023dccec;
                uStack_160 = 0;
                local_278._8_8_ = 0;
                local_278._0_8_ = DAT_023dccf4;
                if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
                  local_b8._4_4_ =
                       local_b8._4_4_ /
                       (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
                  if ((0.0 <= local_b8._4_4_) &&
                     (fVar37 = (float)(int)unaff_RDI[0x30], local_b8._4_4_ < fVar37)) {
                    iVar20 = (int)local_b8._4_4_;
                    goto LAB_01ddb6ee;
                  }
LAB_01ddb740:
                  plVar23 = (longlong *)0x0;
                  bVar35 = false;
                  auVar40._8_8_ = 0;
                  auVar40._0_8_ = uStack_70;
                  _local_78 = auVar40 << 0x40;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = local_98._8_8_;
                  local_98 = auVar8 << 0x40;
LAB_01ddb754:
                  uVar34 = (undefined7)((ulonglong)plVar26 >> 8);
                  bVar9 = true;
                  local_b8 = uVar22;
                }
                else {
                  if ((local_b8._4_4_ < DAT_0239424c) || (lVar33 = unaff_RDI[0x52], lVar33 == 0))
                  goto LAB_01ddb740;
                  iVar20 = *(int *)(lVar33 + 0x18);
                  iVar21 = iVar20 + 3;
                  if (-1 < iVar20) {
                    iVar21 = iVar20;
                  }
                  uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                  if (iVar21 >> 2 < 1) {
                    uVar24 = 0;
                  }
                  uVar29 = 0;
                  do {
                    if (uVar24 == uVar29) goto LAB_01ddb740;
                    fVar37 = *(float *)(*(longlong *)(lVar33 + 0x10) + uVar29 * 4);
                    uVar29 = uVar29 + 1;
                  } while (fVar37 <= local_b8._4_4_);
                  iVar20 = (int)uVar29 + -1;
LAB_01ddb6ee:
                  auVar40 = ZEXT416((uint)fVar37);
                  if (iVar20 == -1) goto LAB_01ddb740;
                  local_b8 = uVar22;
                  FUN_01dd4960();
                  plVar26 = local_50;
                  if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
                    FUN_00d50b00();
                  }
                  _local_78 = FUN_01e436c0();
                  uStack_70._0_4_ = extraout_XMM0_Dc_01;
                  uStack_70._4_4_ = extraout_XMM0_Dd_01;
                  local_98 = auVar40;
                  if ((int)plVar26[3] < 4) {
LAB_01ddbc76:
                    bVar35 = false;
                    plVar23 = (longlong *)0x0;
                    auVar14._8_8_ = 0;
                    auVar14._0_8_ = uStack_70;
                    _local_78 = auVar14 << 0x40;
                    auVar15._8_8_ = 0;
                    auVar15._0_8_ = local_98._8_8_;
                    local_98 = auVar15 << 0x40;
                  }
                  else {
                    bVar35 = true;
                    lVar33 = 0;
                    do {
                      local_288._0_8_ = FUN_01dcf710();
                      local_288._8_4_ = extraout_XMM0_Dc_05;
                      local_288._12_4_ = extraout_XMM0_Dd_06;
                      local_118 = auVar40;
                      cVar18 = FUN_00d054a0();
                      if (cVar18 != '\0') {
                        auVar40 = local_118;
                        if (bVar35) {
                          local_168 = FUN_00d05360(local_288._0_4_);
                          uStack_160 = CONCAT44(extraout_XMM0_Dd_05,extraout_XMM0_Dc_04);
                          bVar35 = false;
                          local_278 = auVar40;
                        }
                        else {
                          FUN_00d05360(local_288._0_4_);
                          local_168 = FUN_00d052e0();
                          uStack_160 = CONCAT44(extraout_XMM0_Dd_07,extraout_XMM0_Dc_06);
                          local_278 = auVar40;
                        }
                      }
                      lVar33 = lVar33 + 1;
                      iVar20 = (int)plVar26[3];
                      iVar21 = iVar20 + 3;
                      if (-1 < iVar20) {
                        iVar21 = iVar20;
                      }
                    } while (lVar33 < iVar21 >> 2);
                    if (bVar35) goto LAB_01ddbc76;
                    plVar23 = (longlong *)FUN_00e8fc40();
                    FUN_00152930();
                    (**(code **)(*plVar23 + 0x18))();
                    local_200 = '\0';
                    local_208 = 0;
                    FUN_01d4eaa0(local_278._0_4_);
                    if ((local_200 != '\0') && (local_208 != 0)) {
                      FUN_00d50b20();
                    }
                    FUN_01d52700();
                    FUN_01d52740();
                    (**(code **)(*local_50 + 0x368))(0.0 - (float)local_168);
                    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if (3 < (int)plVar26[3]) {
                      lVar33 = 0;
                      do {
                        local_118._0_8_ = FUN_01dcf710();
                        local_118._8_4_ = extraout_XMM0_Dc_07;
                        local_118._12_4_ = extraout_XMM0_Dd_08;
                        local_288 = auVar40;
                        cVar18 = FUN_00d054a0();
                        if (cVar18 != '\0') {
                          FUN_01d52740();
                          local_138 = local_50;
                          local_130 = 0;
                          if (local_48 == '\0') {
                            if (local_50 != (longlong *)0x0) {
                              FUN_00d50b00();
                            }
                          }
                          else {
                            local_48 = '\0';
                          }
                          local_130 = '\x01';
                          auVar40 = local_288;
                          (**(code **)(*unaff_RDI + 0x610))(local_118._0_4_);
                          if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                            FUN_00d50b20();
                          }
                        }
                        lVar33 = lVar33 + 1;
                        iVar20 = (int)plVar26[3];
                        iVar21 = iVar20 + 3;
                        if (-1 < iVar20) {
                          iVar21 = iVar20;
                        }
                      } while (lVar33 < iVar21 >> 2);
                    }
                    FUN_01d52740();
                    (**(code **)(*local_50 + 0x368))((float)local_168);
                    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    FUN_01d52770();
                    plVar26 = (longlong *)FUN_00e8fc40();
                    FUN_00152930();
                    (**(code **)(*plVar26 + 0x18))();
                    local_118._0_8_ = plVar26;
                    FUN_01d526f0();
                    local_1f0 = '\0';
                    local_1f8 = 0;
                    FUN_01d4eaa0();
                    if ((local_1f0 != '\0') && (local_1f8 != 0)) {
                      FUN_00d50b20();
                    }
                    FUN_01d52700();
                    FUN_01d52740();
                    local_1e0 = '\0';
                    local_1e8 = plVar23;
                    FUN_01d49110(0,3);
                    if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                      FUN_00d50b20();
                    }
                    auVar40 = local_118;
                    uVar22 = local_118._0_8_;
                    FUN_01d52770();
                    if (plVar23 != (longlong *)uVar22) {
                      FUN_00d50b00();
                      if (plVar23 == (longlong *)0x0) {
                        plVar23 = (longlong *)local_118._0_8_;
                      }
                      else {
                        FUN_00d50b20();
                        plVar23 = (longlong *)local_118._0_8_;
                      }
                    }
                    FUN_01ca6a90();
                    _local_78 = (longlong)local_50;
                    if (local_50 == (longlong *)0x0) {
                      uVar22 = 0;
                      auVar16._8_8_ = 0;
                      auVar16._0_8_ = uStack_70;
                      _local_78 = auVar16 << 0x40;
                    }
                    else {
                      uVar22 = CONCAT71(auVar40._1_7_,1);
                      if (local_48 == '\0') {
                        FUN_00d50b00();
                        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                      }
                    }
                    local_98._0_8_ = uVar22;
                    FUN_01ca5d90();
                    if ((char)unaff_RDI[0x46] != '\0') {
                      local_1d8 = _local_78;
                      local_1d0 = '\0';
                      (**(code **)(*unaff_RDI + 0x9c0))();
                      if ((local_1d0 != '\0') && (local_1d8 != 0)) {
                        FUN_00d50b20();
                      }
                    }
                    if (((char)unaff_RDI[0x3d] == '\0') ||
                       (plVar26 = (longlong *)unaff_RDI[0x3e], plVar26 == (longlong *)0x0)) {
                      if ((char)unaff_RDI[0x46] != '\0') goto LAB_01ddbfa5;
                    }
                    else {
                      local_140 = 0;
                      uVar36 = FUN_00d50b00();
                      local_140 = '\x01';
                      local_1c8 = _local_78;
                      local_1c0 = '\0';
                      local_148 = unaff_RDI;
                      cVar18 = (**(code **)(*plVar26 + 0x18))(uVar36,&local_1c8);
                      bVar35 = true;
                      if (cVar18 == '\0') {
                        bVar35 = (char)unaff_RDI[0x46] != '\0';
                      }
                      if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                        FUN_00d50b20();
                      }
                      if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
                        FUN_00d50b20();
                      }
                      if (bVar35) {
LAB_01ddbfa5:
                        FUN_01e42030();
                        plVar26 = local_50;
                        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                          FUN_00d50b20();
                        }
                        if (plVar26 != (longlong *)0x0) {
                          FUN_01e42030();
                          plVar26 = local_50;
                          local_1b0 = '\0';
                          local_1a8 = 0;
                          local_1a0 = '\0';
                          local_1b8 = plVar23;
                          FUN_01e48f80(((float)local_b8 - (float)local_f8) + (float)local_168);
                          local_190 = '\0';
                          local_198 = 0;
                          local_188 = _local_78;
                          local_180 = '\0';
                          uVar22 = (**(code **)(*plVar26 + 0x738))(&local_188,&local_198,4);
                          if ((local_180 != '\0') && (local_188 != 0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          if ((local_190 != '\0') && (local_198 != 0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                            uVar22 = FUN_00d50b20();
                          }
                          local_128 = CONCAT71((int7)((ulonglong)uVar22 >> 8),1);
                        }
                      }
                    }
                    bVar35 = true;
                    FUN_00d50b20();
                  }
                  FUN_00d50b20();
                  plVar26 = plVar23;
                  uVar22 = local_b8;
                  if (bVar35) goto LAB_01ddb754;
                  bVar9 = false;
                  uVar34 = 0;
                }
                if ((local_98[0] != '\0') && (_local_78 != 0)) {
                  FUN_00d50b20();
                }
                if ((bVar35) && (plVar23 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                plVar26 = (longlong *)CONCAT71(uVar34,local_31);
                if (!bVar9) {
                  bVar31 = 1;
                  uVar17 = local_b8;
                  goto LAB_01ddc19e;
                }
              }
LAB_01ddb78f:
              if (*(char *)((longlong)unaff_RDI + 0x1b5) == '\0') {
LAB_01ddb9d7:
                auVar11._12_4_ = 0;
                auVar11._0_12_ = _auStack_74;
                _local_78 = auVar11 << 0x20;
                uVar24 = local_a8;
              }
              else {
                auVar10._12_4_ = 0;
                auVar10._0_12_ = _auStack_74;
                _local_78 = auVar10 << 0x20;
                uVar24 = local_a8;
                if ((*(char *)((longlong)unaff_RDI + 0x1b6) != '\0') && ((int)local_d0 != -1)) {
                  FUN_01e3f820();
                  auVar39._4_4_ = -(uint)(fStack_b0 < extraout_XMM0_Dc_02);
                  auVar39._0_4_ = -(uint)(local_b8._4_4_ < extraout_XMM0_Db);
                  auVar39._8_4_ = -(uint)(fStack_ac < extraout_XMM0_Dd_02);
                  auVar39._12_4_ = 0;
                  auVar39 = auVar39 << 0x20;
                  uStack_70._0_4_ = fStack_b0;
                  _local_78 = local_b8;
                  uStack_70._4_4_ = fStack_ac;
                  if ((-(uint)(local_b8._4_4_ < extraout_XMM0_Db) & 1) != 0) {
                    uVar22 = FUN_01e3f820();
                    auVar6._8_4_ = fStack_b0;
                    auVar6._0_8_ = local_b8;
                    auVar6._12_4_ = fStack_ac;
                    auVar3._8_4_ = extraout_XMM0_Dc_03;
                    auVar3._0_8_ = uVar22;
                    auVar3._12_4_ = extraout_XMM0_Dd_03;
                    auVar39 = blendps(auVar6,auVar3,2);
                    _local_78 = auVar39;
                  }
                  FUN_01e3f820();
                  auVar40 = _local_78;
                  if (extraout_XMM0_Db_00 + auVar39._4_4_ + DAT_02390d00 < (float)auStack_74) {
                    FUN_01e3f820();
                    fVar37 = extraout_XMM0_Db_01 + auVar39._4_4_;
                    fVar38 = extraout_XMM0_Dd_04 + auVar39._12_4_;
                    auVar4._4_4_ = fVar37;
                    auVar4._0_4_ = fVar37 + DAT_02390d00;
                    auVar4._8_4_ = fVar38;
                    auVar4._12_4_ = fVar38;
                    auVar40 = insertps(_local_78,auVar4,0x10);
                  }
                  fVar37 = auVar40._4_4_;
                  if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
                    fVar37 = fVar37 / (*(float *)(unaff_RDI + 0x2d) +
                                      *(float *)((longlong)unaff_RDI + 0x174));
                    uVar24 = 0xffffffff;
                    if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
                      uVar24 = (ulonglong)(uint)(int)fVar37;
                    }
                  }
                  else {
                    uVar24 = 0xffffffff;
                    if ((DAT_0239424c <= fVar37) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                      iVar20 = *(int *)(lVar33 + 0x18);
                      iVar21 = iVar20 + 3;
                      if (-1 < iVar20) {
                        iVar21 = iVar20;
                      }
                      uVar29 = (ulonglong)(uint)(iVar21 >> 2);
                      if (iVar21 >> 2 < 1) {
                        uVar29 = 0;
                      }
                      uVar30 = 0;
                      do {
                        if (uVar29 == uVar30) goto LAB_01ddb9cb;
                        lVar25 = uVar30 * 4;
                        uVar30 = uVar30 + 1;
                      } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= fVar37);
                      uVar24 = (ulonglong)((int)uVar30 - 1);
                    }
                  }
LAB_01ddb9cb:
                  iVar20 = (int)local_a8;
                  iVar21 = (int)uVar24;
                  if (iVar20 == iVar21) goto LAB_01ddb9d7;
                  if (((int)local_d0 < iVar20) ||
                     ((iVar20 == (int)local_d0 && ((int)local_d0 < iVar21)))) {
                    uVar29 = local_a8;
                    if (iVar20 < iVar21) {
                      do {
                        fVar37 = (float)FUN_01dd3d20(fVar37,1);
                        uVar32 = (int)uVar29 + 1;
                        uVar29 = (ulonglong)uVar32;
                      } while (iVar21 + 1U != uVar32);
                    }
                    else {
                      while (iVar20 = (int)uVar29, iVar21 < iVar20) {
                        if ((int)local_d0 < iVar20) {
                          fVar37 = (float)FUN_01dd4720();
                        }
                        else {
                          fVar37 = (float)FUN_01dd3d20(fVar37,1);
                        }
                        uVar29 = (ulonglong)(iVar20 - 1);
                      }
                    }
                  }
                  else {
                    if ((int)local_d0 <= iVar20) {
                      auVar12._12_4_ = 0;
                      auVar12._0_12_ = _auStack_74;
                      _local_78 = auVar12 << 0x20;
                      if ((iVar20 != (int)local_d0) || ((int)local_d0 <= iVar21)) goto LAB_01dda7f8;
                    }
                    uVar29 = local_a8;
                    if (iVar20 <= iVar21) {
                      plVar26 = (longlong *)(ulonglong)(iVar21 + 1U);
                      do {
                        if ((int)uVar29 < (int)local_d0) {
                          fVar37 = (float)FUN_01dd4720();
                        }
                        else {
                          fVar37 = (float)FUN_01dd3d20(fVar37,1);
                        }
                        uVar32 = (int)uVar29 + 1;
                        uVar29 = (ulonglong)uVar32;
                      } while (iVar21 + 1U != uVar32);
                      auVar7._12_4_ = 0;
                      auVar7._0_12_ = _auStack_74;
                      _local_78 = auVar7 << 0x20;
                      local_a8 = uVar24;
                      goto LAB_01dda7f4;
                    }
                    do {
                      iVar20 = (int)uVar29;
                      fVar37 = (float)FUN_01dd3d20(fVar37,1);
                      uVar29 = (ulonglong)(iVar20 - 1);
                    } while (iVar21 < iVar20);
                  }
                  auVar13._12_4_ = 0;
                  auVar13._0_12_ = _auStack_74;
                  _local_78 = auVar13 << 0x20;
                }
              }
            }
            else {
LAB_01dda7f4:
              plVar26 = (longlong *)CONCAT71((int7)((ulonglong)plVar26 >> 8),local_31);
              uVar24 = local_a8;
            }
LAB_01dda7f8:
            local_a8 = uVar24;
            uVar17 = local_b8;
          } while (*unaff_RSI != 0);
        }
        local_b8._4_4_ = (float)((ulonglong)uVar17 >> 0x20);
        bVar31 = (byte)local_128 & 1;
        local_b8 = uVar17;
        if (((*(char *)((longlong)unaff_RDI + 0x1b6) == '\0') || ((local_128 & 1) != 0)) ||
           ((local_120 & 1) != 0)) {
          if ((((byte)local_128 | (byte)local_120) & 1) == 0) {
            if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
              fVar37 = local_b8._4_4_ /
                       (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
              uVar24 = 0xffffffff;
              if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
                uVar24 = (ulonglong)(uint)(int)fVar37;
              }
            }
            else {
              uVar24 = 0xffffffff;
              if ((0.0 <= local_b8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                iVar20 = *(int *)(lVar33 + 0x18);
                iVar21 = iVar20 + 3;
                if (-1 < iVar20) {
                  iVar21 = iVar20;
                }
                uVar30 = 0;
                uVar29 = (ulonglong)(uint)(iVar21 >> 2);
                if (iVar21 >> 2 < 1) {
                  uVar29 = uVar30;
                }
                do {
                  if (uVar29 == uVar30) goto LAB_01dda62b;
                  lVar25 = uVar30 * 4;
                  uVar30 = uVar30 + 1;
                } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                uVar24 = (ulonglong)((int)uVar30 - 1);
              }
            }
LAB_01dda62b:
            lVar33 = unaff_RDI[0x34];
            if ((int)unaff_RDI[0x36] == (int)uVar24) {
LAB_01dda63e:
              if ((lVar33 != 0) && ((*(uint *)(lVar33 + 0x18) & 0xfffffffc) != 4))
              goto LAB_01dda684;
            }
            else {
              if (lVar33 != 0) {
                iVar20 = *(int *)(lVar33 + 0x18);
                iVar21 = iVar20 + 3;
                if (-1 < iVar20) {
                  iVar21 = iVar20;
                }
                if (3 < iVar20) {
                  lVar25 = 0;
                  do {
                    if (*(int *)(*(longlong *)(lVar33 + 0x10) + lVar25 * 4) == (int)uVar24)
                    goto LAB_01dda63e;
                    lVar25 = lVar25 + 1;
                  } while (iVar21 >> 2 != (int)lVar25);
                }
              }
LAB_01dda684:
              if ((*(char *)((longlong)unaff_RDI + 0x279) != '\0') &&
                 ((0.0 <= local_b8._4_4_ && (lVar33 = unaff_RDI[0x52], lVar33 != 0)))) {
                iVar20 = *(int *)(lVar33 + 0x18);
                iVar21 = iVar20 + 3;
                if (-1 < iVar20) {
                  iVar21 = iVar20;
                }
                uVar29 = 0;
                uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                if (iVar21 >> 2 < 1) {
                  uVar24 = uVar29;
                }
                do {
                  if (uVar24 == uVar29) break;
                  lVar25 = uVar29 * 4;
                  uVar29 = uVar29 + 1;
                } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
              }
              FUN_01dd3d20(uVar24,0);
              uVar17 = local_b8;
            }
            local_b8 = uVar17;
            (**(code **)(*unaff_RDI + 0x990))();
            uVar17 = local_b8;
          }
        }
        else if ((unaff_RDI[0x34] != 0) && (7 < *(int *)(unaff_RDI[0x34] + 0x18))) {
          if (*unaff_RSI != 0) {
            FUN_01d3abf0();
            uVar22 = FUN_01e466c0();
            if (((((float)local_f8 == (float)uVar22) &&
                 (!NAN((float)local_f8) && !NAN((float)uVar22))) &&
                (local_f8._4_4_ == (float)((ulonglong)uVar22 >> 0x20))) &&
               (local_9c = local_9c & 2, local_9c == 0)) {
              if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
                fVar37 = local_b8._4_4_ /
                         (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
              }
              else {
                fVar37 = local_b8._4_4_;
                if ((0.0 <= local_b8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
                  iVar20 = *(int *)(lVar33 + 0x18);
                  iVar21 = iVar20 + 3;
                  if (-1 < iVar20) {
                    iVar21 = iVar20;
                  }
                  uVar29 = 0;
                  uVar24 = (ulonglong)(uint)(iVar21 >> 2);
                  if (iVar21 >> 2 < 1) {
                    uVar24 = uVar29;
                  }
                  do {
                    if (uVar24 == uVar29) break;
                    lVar25 = uVar29 * 4;
                    uVar29 = uVar29 + 1;
                  } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_b8._4_4_);
                }
              }
              FUN_01dd3d20(fVar37,0);
            }
          }
          (**(code **)(*unaff_RDI + 0x990))();
          uVar17 = local_b8;
        }
LAB_01ddc19e:
        uVar22 = local_f8;
        if (((char)plVar26 != '\0') && (local_80 != (longlong *)0x0)) {
          local_b8 = uVar17;
          FUN_00d50b20();
          uVar22 = local_f8;
          uVar17 = local_b8;
        }
        local_f8 = uVar17;
        local_b8 = local_f8;
        if (bVar31 == 0) {
          fStack_f0 = fStack_b0;
          fStack_ec = fStack_ac;
          goto LAB_01ddc1e0;
        }
      }
      local_f8 = uVar22;
      if ((char)local_c4 == '\0') {
        FUN_00d50b20();
      }
      goto LAB_01dd9e55;
    }
LAB_01ddc1e0:
    if (*unaff_RSI != 0) {
      iVar20 = FUN_01d3b630();
      if (iVar20 == 1) {
        if ((char)local_c4 == '\0') {
          FUN_00d50b20();
        }
        goto LAB_01dd9e55;
      }
      if (*unaff_RSI != 0) {
        iVar20 = FUN_01d3b630();
        if (iVar20 == 2) {
          if (*(char *)((longlong)unaff_RDI + 0x279) == '\0') {
            fVar37 = local_f8._4_4_ /
                     (*(float *)(unaff_RDI + 0x2d) + *(float *)((longlong)unaff_RDI + 0x174));
            iVar20 = -1;
            if ((0.0 <= fVar37) && (fVar37 < (float)(int)unaff_RDI[0x30])) {
              iVar20 = (int)fVar37;
            }
          }
          else {
            iVar20 = -1;
            fVar37 = local_f8._4_4_;
            if ((0.0 <= local_f8._4_4_) && (lVar33 = unaff_RDI[0x52], lVar33 != 0)) {
              iVar21 = *(int *)(lVar33 + 0x18);
              iVar27 = iVar21 + 3;
              if (-1 < iVar21) {
                iVar27 = iVar21;
              }
              uVar29 = 0;
              uVar24 = (ulonglong)(uint)(iVar27 >> 2);
              if (iVar27 >> 2 < 1) {
                uVar24 = uVar29;
              }
              do {
                if (uVar24 == uVar29) goto LAB_01ddc2d3;
                lVar25 = uVar29 * 4;
                uVar29 = uVar29 + 1;
              } while (*(float *)(*(longlong *)(lVar33 + 0x10) + lVar25) <= local_f8._4_4_);
              iVar20 = (int)uVar29 + -1;
            }
          }
LAB_01ddc2d3:
          if ((int)unaff_RDI[0x36] != iVar20) {
            lVar33 = unaff_RDI[0x34];
            if (lVar33 != 0) {
              iVar21 = *(int *)(lVar33 + 0x18);
              iVar27 = iVar21 + 3;
              if (-1 < iVar21) {
                iVar27 = iVar21;
              }
              if (3 < iVar21) {
                lVar25 = 0;
                do {
                  if (*(int *)(*(longlong *)(lVar33 + 0x10) + lVar25 * 4) == iVar20)
                  goto LAB_01ddc334;
                  lVar25 = lVar25 + 1;
                } while (iVar27 >> 2 != (int)lVar25);
              }
            }
            FUN_01dd3d20(fVar37,0);
            (**(code **)(*unaff_RDI + 0x990))();
          }
        }
      }
    }
LAB_01ddc334:
    if ((char)local_c4 == '\0') {
      FUN_00d50b20();
    }
  }
  else {
    iVar20 = FUN_01d3a5a0();
    if ((iVar20 == 1) && ((char)unaff_RDI[0x4f] != '\0')) {
      *(undefined1 *)((longlong)unaff_RDI + 0x14c) = 1;
      goto LAB_01dd9e49;
    }
    local_60 = 0;
    local_58 = 0;
  }
  local_178 = *unaff_RSI;
  local_170 = '\0';
  FUN_01e459c0();
  if ((local_170 != '\0') && (local_178 != 0)) {
    FUN_00d50b20();
  }
LAB_01dd9e55:
  if (((char)local_a0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00194050 — 9938 bytes
// str: ""GNTableView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00194050(void)

{
  int iVar1;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  
  FUN_000a32b0();
  *unaff_RDI = &DAT_02698620;
  unaff_RDI[2] = &DAT_02699060;
  *(undefined4 *)(unaff_RDI + 0x27) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00196b10();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x13c) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00196c80();
    FUN_00e87980();
  }
  FUN_00196df0();
  *(undefined4 *)(unaff_RDI + 0x29) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_001970e0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x14c) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00197250();
    FUN_00e87980();
  }
  FUN_001973c0();
  *(undefined4 *)(unaff_RDI + 0x2b) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_001976b0();
    FUN_00e87980();
  }
  FUN_00197820();
  *(undefined4 *)(unaff_RDI + 0x2d) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00197b30();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x16c) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00197ca0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x16d) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00197e10();
    FUN_00e87980();
  }
  unaff_RDI[0x2e] = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00197f80();
    FUN_00e87980();
  }
  FUN_001980f0();
  *(undefined4 *)(unaff_RDI + 0x30) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00198370();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x184) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_001984e0();
    FUN_00e87980();
  }
  unaff_RDI[0x31] = *(undefined8 *)(unaff_RSI + 0x188);
  FUN_00198650();
  *(undefined1 *)(unaff_RDI + 0x33) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00198940();
    FUN_00e87980();
  }
  FUN_00198ab0();
  FUN_00198d30();
  *(undefined4 *)(unaff_RDI + 0x36) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00198fb0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1b4) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00199120();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1b5) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00199290();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1b6) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00199400();
    FUN_00e87980();
  }
  FUN_00199570();
  FUN_001997f0();
  *(undefined4 *)(unaff_RDI + 0x39) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00199ae0();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x1cc) = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x1d4) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00199c50();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x1dc) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_00199dc0();
    FUN_00e87980();
  }
  FUN_00199f30();
  *(undefined1 *)(unaff_RDI + 0x3d) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019a220();
    FUN_00e87980();
  }
  FUN_0019a390();
  FUN_0019a6d0();
  FUN_0019aa10();
  *(undefined4 *)(unaff_RDI + 0x41) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019ad00();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x20c) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019ae70();
    FUN_00e87980();
  }
  FUN_0019afe0();
  FUN_0019b2d0();
  *(undefined1 *)(unaff_RDI + 0x44) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019b550();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x221) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019b6c0();
    FUN_00e87980();
  }
  *(undefined8 *)((longlong)unaff_RDI + 0x224) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019b830();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x22c) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019b9a0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x22d) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019bb10();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x22e) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019bc80();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x22f) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019bdf0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x46) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019bf60();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x231) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019c0d0();
    FUN_00e87980();
  }
  FUN_0019c240();
  *(undefined4 *)(unaff_RDI + 0x48) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019c530();
    FUN_00e87980();
  }
  FUN_0019c760();
  *(undefined4 *)(unaff_RDI + 0x4a) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019ca50();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x254) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019cbc0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x4b) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019cd30();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x25c) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019cea0();
    FUN_00e87980();
  }
  *(undefined1 *)(unaff_RDI + 0x4c) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019d010();
    FUN_00e87980();
  }
  FUN_0019d180();
  FUN_0019d470();
  *(undefined1 *)(unaff_RDI + 0x4f) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019d760();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x279) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019d8d0();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x27a) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019da40();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x27c) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019dbb0();
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x50) = 0;
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      _uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_026fd53b == '\0') {
    FUN_0019dd20();
    FUN_00e87980();
  }
  FUN_0019de90();
  FUN_0019e110();
  FUN_0019e390();
  return;
}




// ============================================================
// @01dc82c0 — 4560 bytes
// str: ""GNTableView""
// str: ""_editNumberOfColumns""
// str: ""_editShowsHeaderView""
// str: ""_editColumnResizingAllowed""
// str: ""_editColumnReorderingAllowed""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dc82c0(void)

{
  int iVar1;
  
  if (DAT_026e56b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87cb0();
  if (DAT_028b8ad8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8a98 = "_editNumberOfColumns";
      _DAT_028b8aa0 = &DAT_026fd480;
      _DAT_028b8aa8 = 0;
      _DAT_028b8ab0 = &DAT_027f2b40;
      _DAT_028b8ab8 = FUN_01de6810;
      _DAT_028b8ac0 = FUN_01dc94d0;
      _DAT_028b8ac8 = 0;
      uRam00000000028b8ad0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8b20 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8ae0 = "_editShowsHeaderView";
      _DAT_028b8ae8 = &DAT_026fd480;
      _DAT_028b8af0 = 0;
      _DAT_028b8af8 = &DAT_027f2b43;
      _DAT_028b8b00 = FUN_01de6830;
      _DAT_028b8b08 = FUN_01dc9aa0;
      _DAT_028b8b10 = 0;
      uRam00000000028b8b18 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8b68 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8b28 = "_editColumnResizingAllowed";
      _DAT_028b8b30 = &DAT_026fd480;
      _DAT_028b8b38 = 0;
      _DAT_028b8b40 = &DAT_027f2b43;
      _DAT_028b8b48 = FUN_01de6830;
      _DAT_028b8b50 = FUN_01dc9b70;
      _DAT_028b8b58 = 0;
      uRam00000000028b8b60 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8bb0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8b70 = "_editColumnReorderingAllowed";
      _DAT_028b8b78 = &DAT_026fd480;
      _DAT_028b8b80 = 0;
      _DAT_028b8b88 = &DAT_027f2b43;
      _DAT_028b8b90 = FUN_01de6830;
      _DAT_028b8b98 = FUN_01dc9bb0;
      _DAT_028b8ba0 = 0;
      uRam00000000028b8ba8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8bf8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8bb8 = "_editColumnHidingAllowed";
      _DAT_028b8bc0 = &DAT_026fd480;
      _DAT_028b8bc8 = 0;
      _DAT_028b8bd0 = &DAT_027f2b43;
      _DAT_028b8bd8 = FUN_01de6830;
      _DAT_028b8be0 = FUN_01dc9bf0;
      _DAT_028b8be8 = 0;
      uRam00000000028b8bf0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8c40 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8c00 = "_editAssciiExportEnabled";
      _DAT_028b8c08 = &DAT_026fd480;
      _DAT_028b8c10 = 0;
      _DAT_028b8c18 = &DAT_027f2b43;
      _DAT_028b8c20 = FUN_01de6830;
      _DAT_028b8c28 = FUN_01dc9c30;
      _DAT_028b8c30 = 0;
      uRam00000000028b8c38 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8c88 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8c48 = "_editDropFeedback";
      _DAT_028b8c50 = &DAT_026fd480;
      _DAT_028b8c58 = 0;
      _DAT_028b8c60 = &DAT_027f2b40;
      _DAT_028b8c68 = FUN_01de6810;
      _DAT_028b8c70 = FUN_01dc9c70;
      _DAT_028b8c78 = 0;
      uRam00000000028b8c80 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8cd0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8c90 = "_editRowReorderingAllowed";
      _DAT_028b8c98 = &DAT_026fd480;
      _DAT_028b8ca0 = 0;
      _DAT_028b8ca8 = &DAT_027f2b43;
      _DAT_028b8cb0 = FUN_01de6830;
      _DAT_028b8cb8 = FUN_01dc9cb0;
      _DAT_028b8cc0 = 0;
      uRam00000000028b8cc8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8d18 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8cd8 = "_editUsesSubviewsForCells";
      _DAT_028b8ce0 = &DAT_026fd480;
      _DAT_028b8ce8 = 0;
      _DAT_028b8cf0 = &DAT_027f2b43;
      _DAT_028b8cf8 = FUN_01de6830;
      _DAT_028b8d00 = FUN_01dc9cf0;
      _DAT_028b8d08 = 0;
      uRam00000000028b8d10 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8d60 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8d20 = "getNumberOfColumns";
      _DAT_028b8d28 = &DAT_026fd480;
      _DAT_028b8d30 = 0;
      _DAT_028b8d38 = &DAT_027f2b46;
      _DAT_028b8d40 = FUN_01de6850;
      _DAT_028b8d48 = FUN_01dca080;
      _DAT_028b8d50 = 0;
      uRam00000000028b8d58 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8da8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8d68 = "showsHeaderView";
      _DAT_028b8d70 = &DAT_026fd480;
      _DAT_028b8d78 = 0;
      _DAT_028b8d80 = &DAT_027f2b48;
      _DAT_028b8d88 = FUN_01de6880;
      _DAT_028b8d90 = FUN_01dca090;
      _DAT_028b8d98 = 0;
      uRam00000000028b8da0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8df0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8db0 = "setMultipleSelectionAllowed";
      _DAT_028b8db8 = &DAT_026fd480;
      _DAT_028b8dc0 = 0;
      _DAT_028b8dc8 = &DAT_027f2b43;
      _DAT_028b8dd0 = FUN_01de6830;
      _DAT_028b8dd8 = FUN_01dca0e0;
      _DAT_028b8de0 = 0;
      uRam00000000028b8de8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  if (DAT_028b8e38 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_028b8df8 = "isMultipleSelectionAllowed";
      _DAT_028b8e00 = &DAT_026fd480;
      _DAT_028b8e08 = 0;
      _DAT_028b8e10 = &DAT_027f2b48;
      _DAT_028b8e18 = FUN_01de6880;
      _DAT_028b8e20 = FUN_01dca100;
      _DAT_028b8e28 = 0;
      uRam00000000028b8e30 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}




// ============================================================
// @01c59970 — 3055 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c59c6f) */
/* WARNING: Removing unreachable block (ram,0x01c59c7b) */

void FUN_01c59970(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char *pcVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  float in_XMM0_Dd;
  float extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  float extraout_XMM0_Dd_02;
  float extraout_XMM0_Dd_03;
  float fVar11;
  float fVar12;
  undefined4 in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  longlong local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_48 [8];
  longlong *local_40;
  char local_38 [8];
  
  fStack_f4 = (float)((ulonglong)param_2 >> 0x20);
  local_f8 = (float)param_2;
  fStack_e4 = (float)((ulonglong)param_1 >> 0x20);
  local_e8 = (float)param_1;
  uStack_f0 = in_XMM1_Dc;
  fStack_ec = in_XMM1_Dd;
  fStack_dc = in_XMM0_Dd;
  (**(code **)(*unaff_RDI + 0x640))();
  plVar1 = local_40;
  pcVar7 = local_48;
  if (local_38[0] != '\0') {
    pcVar7 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_58 = plVar1;
  if (((char)unaff_RDI[0x5c] == '\0') && (unaff_RDI[0x2e] != 0)) {
    FUN_00d50b00();
    FUN_00d50b20();
    plVar1 = (longlong *)unaff_RDI[0x2e];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    uVar8 = (**(code **)(*plVar1 + 0x390))((int)unaff_RDI[0x4b]);
    *(undefined4 *)((longlong)unaff_RDI + 0x254) = uVar8;
    FUN_00d50b20();
  }
  if (local_f8 < DAT_023908d8) {
    local_e8 = local_e8 + DAT_023b1614;
    local_f8 = local_f8 + DAT_023b36b0;
  }
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  uVar8 = uStack_f0;
  fVar13 = fStack_ec;
  FUN_01e3f820();
  if ((int)unaff_RDI[0x39] == 1) {
    local_d8 = FUN_01e3f820();
    lVar4 = unaff_RDI[0x39];
    local_c8._0_4_ = fVar11;
    local_c8._4_4_ = fVar12;
    uStack_c0 = uVar8;
    fStack_bc = fVar13;
    FUN_01d48370();
    auVar3._4_4_ = local_c8._4_4_;
    auVar3._0_4_ = (float)local_c8;
    auVar3._8_4_ = uStack_c0;
    auVar3._12_4_ = fStack_bc;
    if ((int)lVar4 == 1) {
      auVar2._4_4_ = local_c8._4_4_;
      auVar2._0_4_ = local_c8._4_4_ + DAT_0241c6e4;
      auVar2._8_4_ = fStack_bc;
      auVar2._12_4_ = fStack_bc;
      insertps(auVar3,auVar2,0x10);
    }
    plVar1 = (longlong *)*unaff_RSI;
    FUN_00d05360(local_e8,local_f8,(undefined4)local_d8);
    (**(code **)(*plVar1 + 0x390))();
  }
  FUN_01c532f0(local_e8,local_f8);
  fVar11 = local_f8;
  fVar12 = fStack_f4;
  uVar8 = uStack_f0;
  fVar13 = fStack_ec;
  FUN_01c54470(local_e8);
  if (((((*(float *)((longlong)unaff_RDI + 0x21c) != (float)DAT_023dccec) ||
        (NAN(*(float *)((longlong)unaff_RDI + 0x21c)) || NAN((float)DAT_023dccec))) ||
       (*(float *)(unaff_RDI + 0x44) != DAT_023dccec._4_4_)) ||
      ((NAN(*(float *)(unaff_RDI + 0x44)) || NAN(DAT_023dccec._4_4_) ||
       (*(float *)((longlong)unaff_RDI + 0x224) != (float)DAT_023dccf4)))) ||
     (NAN(*(float *)((longlong)unaff_RDI + 0x224)) || NAN((float)DAT_023dccf4))) {
LAB_01c59bbf:
    FUN_01d39800((int)*(undefined8 *)((longlong)unaff_RDI + 0x21c),
                 (int)*(undefined8 *)((longlong)unaff_RDI + 0x224),DAT_02390124);
    plVar1 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_58 + 0x390))();
    plVar5 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01d488d0();
    FUN_01d48b40(DAT_02390124);
    fVar11 = (float)*(undefined8 *)((longlong)unaff_RDI + 0x21c);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              (fVar11,(float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x21c) >> 0x20) +
                      DAT_02394248,*(float *)((longlong)unaff_RDI + 0x224) + fVar11 + DAT_02390d00);
    uVar8 = (undefined4)*(undefined8 *)((longlong)unaff_RDI + 0x21c);
    (**(code **)(*(longlong *)*unaff_RSI + 0x3e0))
              (uVar8,(float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x21c) >> 0x20) +
                     DAT_02394248,uVar8);
    fVar12 = (float)((ulonglong)*(undefined8 *)((longlong)unaff_RDI + 0x21c) >> 0x20);
    fVar9 = *(float *)((longlong)unaff_RDI + 0x224) +
            (float)*(undefined8 *)((longlong)unaff_RDI + 0x21c) + DAT_02390d00;
    uVar8 = 0;
    fVar13 = 0.0;
    fVar11 = fVar12 + DAT_02394248;
    fVar9 = (float)(**(code **)(*(longlong *)*unaff_RSI + 0x3e0))(fVar9,fVar11,fVar9);
    if (plVar5 != (longlong *)0x0) {
      fVar9 = (float)FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      fVar9 = (float)FUN_00d50b20();
    }
  }
  else {
    fVar9 = *(float *)(unaff_RDI + 0x45);
    if ((fVar9 != DAT_023dccf4._4_4_) || (NAN(fVar9) || NAN(DAT_023dccf4._4_4_))) goto LAB_01c59bbf;
  }
  if ((int)unaff_RDI[0x39] == 1) {
    FUN_01d48390();
    fVar11 = local_f8;
    fVar9 = (float)FUN_01c5ab50(local_e8);
    fVar12 = fStack_f4;
    uVar8 = uStack_f0;
    fVar13 = fStack_ec;
  }
  lVar4 = DAT_026e41f0;
  if ((*(char *)((longlong)unaff_RDI + 0x22d) != '\0') ||
     (*(char *)((longlong)unaff_RDI + 0x22e) != '\0')) {
    if (DAT_026e41f0 != 0) {
      fVar9 = (float)FUN_00d50b00();
    }
    local_128 = lVar4;
    local_120 = '\x01';
    (**(code **)(*local_58 + 0x3b0))(fVar9,&local_128);
    local_98 = local_40;
    local_90 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_90 = '\x01';
    FUN_01d488d0();
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_120 != '\0') && (local_128 != 0)) {
      FUN_00d50b20();
    }
    if (*(char *)((longlong)unaff_RDI + 0x22e) != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      fVar9 = (float)FUN_01e3f820();
      fVar9 = fVar9 + fVar11;
      fVar11 = 0.0;
      fVar12 = 0.0;
      uVar8 = 0;
      fVar13 = 0.0;
      (**(code **)(*plVar1 + 0x3e0))(0,0,fVar9 + DAT_02390d00);
    }
    if (*(char *)((longlong)unaff_RDI + 0x22d) != '\0') {
      plVar1 = (longlong *)*unaff_RSI;
      uVar10 = FUN_01e3f820();
      local_c8._0_4_ = fVar11;
      local_c8._4_4_ = fVar12;
      uStack_c0 = uVar8;
      fStack_bc = fVar13;
      local_d8 = uVar10;
      fVar9 = (float)FUN_01e3f820();
      FUN_01e3f820();
      fVar12 = extraout_XMM0_Db + fVar12;
      auVar14._4_4_ = fVar12;
      auVar14._0_4_ = fVar12;
      auVar14._8_4_ = extraout_XMM0_Dd + fVar13;
      auVar14._12_4_ = extraout_XMM0_Dd + fVar13;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = fVar12 + DAT_02390d00;
      (**(code **)(*plVar1 + 0x3e0))
                (0,local_d8._4_4_ + local_c8._4_4_ + DAT_02390d00,fVar9 + fVar11 + DAT_02390d00,
                 auVar15._0_8_);
    }
  }
  fVar11 = 0.0;
  fVar12 = 0.0;
  if ((*(float *)((longlong)unaff_RDI + 0x23c) != 0.0) ||
     (NAN(*(float *)((longlong)unaff_RDI + 0x23c)))) {
    uVar8 = FUN_01d48a00();
    local_d8._0_4_ = uVar8;
    FUN_01d489d0(*(undefined4 *)((longlong)unaff_RDI + 0x23c));
    FUN_01d48b40(DAT_02390124);
    FUN_01c4b410();
    local_b8 = local_40;
    local_b0 = 0;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_b0 = '\x01';
    FUN_01d488d0();
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_c8._0_4_ = (float)unaff_RDI[0x49];
    local_c8._4_4_ = (float)((ulonglong)unaff_RDI[0x49] >> 0x20);
    uStack_c0 = 0;
    fStack_bc = 0.0;
    FUN_01e3f820();
    fVar11 = extraout_XMM0_Db_00 + fVar11;
    auVar16._4_4_ = fVar11;
    auVar16._0_4_ = fVar11;
    auVar16._8_4_ = extraout_XMM0_Dd_00 + fVar12;
    auVar16._12_4_ = extraout_XMM0_Dd_00 + fVar12;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = fVar11 + DAT_02390d00;
    (**(code **)(*plVar1 + 0x3e0))((float)local_c8,0,(float)local_c8,auVar17._0_8_);
    FUN_01d489d0((undefined4)local_d8);
  }
  lVar4 = unaff_RDI[0x5b];
  if (lVar4 != 0) {
    FUN_00d50b00();
    FUN_01d48b40(DAT_02390124);
    FUN_01c4b410();
    local_a8 = local_40;
    local_a0 = 0;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    local_a0 = '\x01';
    FUN_01d488d0();
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    uVar10 = FUN_00dd6bf0();
    local_d8 = uVar10;
    local_c8 = FUN_00dd6bf0();
    uStack_c0 = extraout_XMM0_Dc;
    fStack_bc = extraout_XMM0_Dd_01;
    FUN_01e3f820();
    (**(code **)(*plVar1 + 0x3e0))((undefined4)local_d8,0,(float)local_c8);
  }
  if ((((char)unaff_RDI[0x4a] != '\0') && (local_e8 <= *(float *)((longlong)unaff_RDI + 0x254))) &&
     (*(float *)((longlong)unaff_RDI + 0x254) <= local_e8 + local_f8 + DAT_02390d00)) {
    FUN_01d48b40(DAT_02390124);
    (**(code **)(*local_58 + 0x390))();
    local_88 = local_40;
    local_80 = 0;
    fVar11 = fStack_e4;
    fVar12 = fStack_dc;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
        fVar11 = fStack_e4;
        fVar12 = fStack_dc;
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_80 = '\x01';
    FUN_01d488d0();
    uVar10 = local_d8;
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar10 = local_d8;
    }
    local_d8._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      local_d8 = uVar10;
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_d8._0_4_ = *(undefined4 *)((longlong)unaff_RDI + 0x254);
    uVar10 = FUN_01e3f820();
    uVar8 = *(undefined4 *)((longlong)unaff_RDI + 0x254);
    uStack_c0 = extraout_XMM0_Dc_00;
    fStack_bc = extraout_XMM0_Dd_02;
    local_c8 = uVar10;
    FUN_01e3f820();
    fVar11 = extraout_XMM0_Db_01 + fVar11;
    auVar18._4_4_ = fVar11;
    auVar18._0_4_ = fVar11;
    auVar18._8_4_ = extraout_XMM0_Dd_03 + fVar12;
    auVar18._12_4_ = extraout_XMM0_Dd_03 + fVar12;
    auVar19._4_12_ = auVar18._4_12_;
    auVar19._0_4_ = fVar11 + DAT_02390d00;
    (**(code **)(*plVar1 + 0x3e0))((undefined4)local_d8,local_c8._4_4_,uVar8,auVar19._0_8_);
  }
  if ((*(float *)(unaff_RDI + 0x52) == (float)DAT_023dccec) &&
     (!NAN(*(float *)(unaff_RDI + 0x52)) && !NAN((float)DAT_023dccec))) {
    if ((*(float *)((longlong)unaff_RDI + 0x294) == DAT_023dccec._4_4_) &&
       (!NAN(*(float *)((longlong)unaff_RDI + 0x294)) && !NAN(DAT_023dccec._4_4_))) {
      if ((*(float *)(unaff_RDI + 0x53) == (float)DAT_023dccf4) &&
         (!NAN(*(float *)(unaff_RDI + 0x53)) && !NAN((float)DAT_023dccf4))) {
        if ((*(float *)((longlong)unaff_RDI + 0x29c) == DAT_023dccf4._4_4_) &&
           (!NAN(*(float *)((longlong)unaff_RDI + 0x29c)) && !NAN(DAT_023dccf4._4_4_)))
        goto LAB_01c5a52a;
      }
    }
  }
  cVar6 = FUN_00d054a0((int)unaff_RDI[0x52],(int)unaff_RDI[0x53],local_e8);
  if (cVar6 != '\0') {
    FUN_01d39800((int)unaff_RDI[0x52],(int)unaff_RDI[0x53],DAT_02390d34);
    plVar1 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    (**(code **)(*local_58 + 0x390))();
    plVar5 = local_40;
    if ((local_38[0] == '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b00();
      if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_01cfcdc0((int)plVar5[2],*(undefined4 *)((longlong)plVar5 + 0x14),(int)plVar5[3],
                 *(float *)((longlong)plVar5 + 0x1c) * DAT_023b1610);
    local_78 = local_40;
    local_70 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_70 = '\x01';
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_118 = plVar1;
    local_110 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a0))();
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(*local_58 + 0x390))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38[0] == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38[0] = '\0';
    }
    local_60 = '\x01';
    FUN_01d488d0();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d48b40(DAT_02390124);
    local_108 = plVar1;
    local_100 = '\0';
    (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
    if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_01c5a52a:
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dc6c10 — 1911 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dc6e6c) */
/* WARNING: Removing unreachable block (ram,0x01dc6e63) */
/* WARNING: Removing unreachable block (ram,0x01dc7305) */
/* WARNING: Removing unreachable block (ram,0x01dc730e) */
/* WARNING: Removing unreachable block (ram,0x01dc6e01) */
/* WARNING: Removing unreachable block (ram,0x01dc6e0a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01dc6c10(undefined8 param_1,int param_2)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  bool bVar9;
  longlong local_78;
  char local_70;
  longlong *local_40;
  char local_38;
  
  plVar5 = local_40;
  lVar4 = DAT_027f27a8;
  lVar1 = DAT_027f27a0;
  if ((char)unaff_RSI[0x29] == '\0') {
    if (param_2 == 1) {
      if (DAT_027f27a8 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
    }
    else if (param_2 == 0) {
      if (DAT_027f27a0 != 0) {
        FUN_00d50b00();
      }
      FUN_01d51a40();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
  }
  else {
    if ((DAT_028b8a68 == (undefined8 *)0x0) || (DAT_028b8a71 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b8a68 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar6 = &DAT_02572358;
        (*DAT_02572370)();
        if (DAT_028b8a68 == puVar6) {
          bVar3 = false;
          bVar2 = false;
        }
        else {
          bVar3 = true;
          bVar2 = true;
          bVar9 = DAT_028b8a68 != (undefined8 *)0x0;
          DAT_028b8a68 = puVar6;
          if (bVar9) {
            FUN_00d50b20();
          }
        }
        if (DAT_028b8a70 == '\0') {
          DAT_028b8a70 = '\x01';
          FUN_00e8cb90();
          bVar2 = bVar3;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RSI + 0x640))();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        iVar8 = 0;
        do {
          plVar7 = (longlong *)FUN_00e8fc40();
          FUN_00152930();
          (**(code **)(*plVar7 + 0x18))();
          FUN_01d4eaa0(_DAT_0241f410);
          FUN_01d52700();
          FUN_01d52740();
          FUN_01d48b40(DAT_02390124);
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_01d52740();
          (**(code **)(*plVar5 + 0x390))();
          if (local_70 == '\0') {
            if (local_78 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          FUN_01d488d0();
          if (local_78 != 0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (iVar8 == 0) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d34,DAT_023b36b0,DAT_02390d34);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d2c,DAT_02390d30,DAT_02390d2c);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d30,DAT_023908ec,DAT_02390d30);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_023b36b0,DAT_02390d2c,DAT_023b36b0);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (iVar8 == 1) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d34,DAT_02390d2c,DAT_02390d34);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d2c,DAT_02390d30,DAT_02390d2c);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d30,DAT_023b36b0,DAT_02390d30);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_023b36b0,DAT_023908ec,DAT_023b36b0);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (iVar8 == 2) {
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d34,DAT_023908ec,DAT_02390d34);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d2c,DAT_023b36b0,DAT_02390d2c);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_02390d30,DAT_02390d30,DAT_02390d30);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            FUN_01d52740();
            (**(code **)(*local_40 + 0x3e0))(DAT_02390d34,DAT_023b36b0,DAT_02390d2c,DAT_023b36b0);
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_01d52770();
          local_38 = '\0';
          FUN_00d21140();
          FUN_00d50b20();
          iVar8 = iVar8 + 1;
          local_40 = plVar7;
        } while (iVar8 != 3);
        FUN_00d50b20();
        DAT_028b8a71 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b8a71 = '\x01';
        FUN_00e8cb70();
      }
    }
    if ((param_2 < -1) || (*(int *)((longlong)DAT_028b8a68 + 0xc) <= (int)(param_2 + 1U))) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
    }
    else {
      lVar1 = *(longlong *)(DAT_028b8a68[2] + (ulonglong)(param_2 + 1U) * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar1;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
  }
  return unaff_RDI;
}




// ============================================================
// @01dca1a0 — 1243 bytes
// ============================================================

void FUN_01dca1a0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *unaff_RDI;
  bool bVar9;
  float fVar10;
  longlong *local_38;
  char local_30;
  
  FUN_01e3b710();
  if ((DAT_028b8a78 == (undefined8 *)0x0) || (DAT_028b8a81 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8a78 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &DAT_025795a8;
      (*DAT_025795c0)();
      if (DAT_028b8a78 == puVar7) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar9 = DAT_028b8a78 != (undefined8 *)0x0;
        DAT_028b8a78 = puVar7;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8a80 == '\0') {
        DAT_028b8a80 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028b8a81 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8a81 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((DAT_028b8a88 == (undefined8 *)0x0) || (DAT_028b8a91 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b8a88 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)FUN_00e8fc40();
      FUN_0006daf0();
      *puVar7 = &DAT_0267ba68;
      puVar7[2] = &DAT_0267c530;
      *(undefined4 *)(puVar7 + 0x27) = 0;
      puVar7[0x2e] = 0;
      *(undefined4 *)(puVar7 + 0x2f) = 0;
      puVar7[0x30] = 0;
      *(undefined1 *)(puVar7 + 0x31) = 0;
      puVar7[0x28] = 0;
      puVar7[0x29] = 0;
      *(undefined4 *)(puVar7 + 0x2a) = 0;
      puVar7[0x2b] = 0;
      puVar7[0x2c] = 0;
      *(undefined8 *)((longlong)puVar7 + 0x165) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x18c) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x194) = 0;
      *(undefined8 *)((longlong)puVar7 + 0x199) = 0;
      puVar7[0x35] = 0;
      puVar7[0x36] = 0;
      puVar7[0x37] = 0;
      puVar7[0x38] = 0;
      (*DAT_0267ba80)();
      if (DAT_028b8a88 == puVar7) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar9 = DAT_028b8a88 != (undefined8 *)0x0;
        DAT_028b8a88 = puVar7;
        if (bVar9) {
          FUN_00d50b20();
        }
      }
      if (DAT_028b8a90 == '\0') {
        DAT_028b8a90 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      DAT_028b8a91 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b8a91 = '\x01';
      FUN_00e8cb70();
    }
  }
  fVar10 = DAT_028b8e40;
  if ((DAT_028b8e40 == 0.0) && (!NAN(DAT_028b8e40))) {
    DAT_028b8e40 = 18.0;
    fVar10 = DAT_02392fd8;
  }
  *(float *)(unaff_RDI + 0x2d) = fVar10;
  *(undefined1 *)((longlong)unaff_RDI + 0x16c) = 1;
  unaff_RDI[0x2e] = 0x3f80000000000000;
  *(undefined1 *)((longlong)unaff_RDI + 0x184) = 1;
  *(undefined1 *)(unaff_RDI + 0x33) = 1;
  *(undefined4 *)(unaff_RDI + 0x36) = 0xffffffff;
  *(undefined2 *)((longlong)unaff_RDI + 0x1b4) = 0x101;
  unaff_RDI[0x27] = -1;
  *(undefined2 *)((longlong)unaff_RDI + 0x22c) = 0x101;
  DAT_028b8e44 = 0;
  *(undefined4 *)(unaff_RDI + 0x48) = 1;
  *(undefined4 *)(unaff_RDI + 0x29) = 0xffffffff;
  *(undefined4 *)((longlong)unaff_RDI + 0x254) = 0xffffffff;
  unaff_RDI[0x31] = 0;
  (**(code **)(*unaff_RDI + 0x640))();
  cVar5 = (**(code **)(*local_38 + 0x638))();
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    DAT_028b8e44 = 1;
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_38 + 0x648))();
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  pcVar4 = DAT_02572370;
  (*DAT_02572370)();
  puVar7 = (undefined8 *)unaff_RDI[0x2f];
  if (puVar7 == puVar6) {
    FUN_00d50b20();
  }
  else {
    unaff_RDI[0x2f] = (longlong)puVar6;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_02572358;
  (*pcVar4)();
  lVar1 = unaff_RDI[0x51];
  unaff_RDI[0x51] = (longlong)puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  puVar7 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar7 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  lVar1 = unaff_RDI[0x52];
  unaff_RDI[0x52] = (longlong)puVar7;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar8 = (longlong *)FUN_00e8fc40();
  FUN_0006daf0();
  *plVar8 = (longlong)&DAT_026990a0;
  plVar8[2] = (longlong)&DAT_026999c8;
  FUN_00d500e0();
  lVar1 = unaff_RDI[0x53];
  unaff_RDI[0x53] = (longlong)plVar8;
  if (lVar1 != 0) {
    FUN_00d50b20();
    plVar8 = (longlong *)unaff_RDI[0x53];
  }
  FUN_01e3f820();
  (**(code **)(*plVar8 + 0x4d0))();
  lVar1 = unaff_RDI[0x53];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*unaff_RDI + 0x450))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01c365c0 — 1144 bytes
// str: ""%lld""
// ============================================================

void FUN_01c365c0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  undefined8 uVar6;
  pthread_key_t pVar7;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar8;
  undefined4 uVar9;
  longlong *local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  uint local_48;
  undefined8 local_40;
  longlong *local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  plVar8 = local_50;
  if (((char)local_48 == '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  cVar2 = FUN_01c33700();
  if (cVar2 == '\0') {
    bVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
    pVar7 = (pthread_key_t)bVar3;
    (**(code **)(*plVar8 + 0x490))(bVar3,0x17,0);
    local_90 = local_50;
    local_88 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_88 = '\x01';
    FUN_01d488d0();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x640))();
    plVar1 = local_60;
    bVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
    pVar7 = (pthread_key_t)bVar3;
    (**(code **)(*plVar1 + 0x4a8))(bVar3,0x17);
    local_a0 = local_50;
    local_98 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_98 = '\x01';
    FUN_01d488d0();
    if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  uVar9 = (**(code **)(*unaff_RDI + 0xb28))();
  if ((char)local_48 == '\0') {
    if (local_50 == (longlong *)0x0) goto LAB_01c36829;
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_01c367e3:
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar6 = FUN_017cac30();
    uVar9 = FUN_00d50b20();
  }
  else {
    if (local_50 != (longlong *)0x0) goto LAB_01c367e3;
LAB_01c36829:
    uVar6 = 0;
  }
  local_48 = 1;
  local_50 = (longlong *)&DAT_024da828;
  local_40 = uVar6;
  FUN_00d8cb40(uVar9,&local_50);
  plVar1 = local_60;
  if (local_58 == '\0') {
    if (local_60 == (longlong *)0x0) goto LAB_01c36a19;
    FUN_00d50b00();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == (longlong *)0x0) goto LAB_01c36a19;
  iVar4 = FUN_00d8c7a0();
  if (iVar4 != 0) {
    local_38 = plVar8;
    (**(code **)(*unaff_RDI + 0x9e8))();
    local_80 = local_50;
    local_78 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_78 = '\x01';
    FUN_01d48a10();
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar8 = (longlong *)*unaff_RSI;
    local_c0 = plVar1;
    local_b8 = '\0';
    local_a8 = '\0';
    local_b0 = plVar8;
    (**(code **)(*unaff_RDI + 0xa00))(param_2,&local_c0);
    local_70 = local_50;
    local_68 = 0;
    if ((char)local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    local_68 = '\x01';
    (**(code **)(*plVar8 + 0x3f8))(param_1,param_2);
    plVar8 = local_38;
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01c36a19:
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01de8580 — 1078 bytes
// ============================================================

ulonglong FUN_01de8580(undefined8 param_1,char param_2)

{
  int iVar1;
  uint3 uVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined7 uVar11;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar12;
  longlong *local_c0;
  char local_b8;
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
  
  FUN_01cae990();
  plVar12 = local_40;
  lVar4 = DAT_027f2e58;
  if (DAT_027f2e58 != 0) {
    FUN_00d50b00();
  }
  uVar8 = (**(code **)(*plVar12 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar8 != '\0') {
    uVar10 = CONCAT71((uint7)(uint3)((uint)uVar8 >> 8),1);
    if (param_2 != '\0') {
      (**(code **)(*unaff_RDI + 0x540))();
    }
    goto LAB_01de899b;
  }
  FUN_01cae990();
  plVar12 = local_40;
  lVar4 = DAT_027ef970;
  if (DAT_027ef970 != 0) {
    FUN_00d50b00();
  }
  cVar6 = (**(code **)(*plVar12 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  lVar4 = DAT_02800140;
  if (cVar6 == '\0') {
    FUN_01cae990();
    plVar12 = local_40;
    local_80 = DAT_027ef978;
    if (DAT_027ef978 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    cVar6 = (**(code **)(*plVar12 + 0x50))();
    cVar7 = '\x01';
    if (cVar6 == '\0') {
      FUN_01cae990();
      local_70 = DAT_02725a10;
      if (DAT_02725a10 != 0) {
        FUN_00d50b00();
      }
      local_68 = '\x01';
      cVar7 = (**(code **)(*local_c0 + 0x50))();
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    lVar4 = DAT_02800140;
    if (cVar7 == '\0') {
      local_50 = *unaff_RSI;
      local_48 = '\0';
      uVar9 = FUN_01d827c0(param_1,param_2);
      uVar10 = (ulonglong)uVar9;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01de899b;
    }
    if (DAT_02800140 != 0) {
      FUN_00d50b00();
    }
    local_60 = lVar4;
    local_58 = '\x01';
    FUN_01ccaae0(param_1,&local_60);
    plVar12 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar12 == (longlong *)0x0) {
      uVar10 = 0;
      goto LAB_01de899b;
    }
    (**(code **)(*plVar12 + 0x3f8))();
    plVar5 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      uVar10 = 0;
    }
    else {
      (**(code **)(*plVar12 + 0x3f8))();
      iVar1 = *(int *)((longlong)local_40 + 0xc);
      if (local_38 != '\0') {
        FUN_00d50b20();
      }
      uVar2 = (uint3)((uint)iVar1 >> 8);
      uVar10 = (ulonglong)CONCAT31(uVar2,iVar1 != 0);
      if ((iVar1 != 0) && (param_2 != '\0')) {
        uVar10 = CONCAT71((uint7)uVar2,1);
        FUN_01d25b00();
      }
    }
  }
  else {
    if (DAT_02800140 != 0) {
      FUN_00d50b00();
    }
    local_90 = lVar4;
    local_88 = '\x01';
    FUN_01ccaae0(param_1,&local_90);
    plVar12 = local_40;
    if (local_40 == (longlong *)0x0) {
      plVar12 = (longlong *)0x0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      FUN_00d50b00();
      bVar3 = true;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
      bVar3 = true;
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    uVar11 = (undefined7)((ulonglong)lVar4 >> 8);
    uVar10 = CONCAT71(uVar11,plVar12 != (longlong *)0x0);
    if ((plVar12 != (longlong *)0x0) && (param_2 != '\0')) {
      uVar10 = CONCAT71(uVar11,1);
      FUN_01d25910();
    }
  }
  if ((bVar3) && (plVar12 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_01de899b:
  return uVar10 & 0xffffffff;
}




// ============================================================
// @01c35730 — 974 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c35730(undefined8 param_1,float param_2,float param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined8 *unaff_RDI;
  float fVar3;
  float fVar4;
  longlong *local_68;
  char local_60;
  longlong local_30;
  char local_28;
  
  if ((DAT_028b6550 == 0) || (DAT_028b6559 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028b6550 == 0) {
      FUN_01cfcdc0(0,0,0,DAT_02390124);
      lVar2 = DAT_028b6550;
      if (DAT_028b6550 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6550 != 0;
        DAT_028b6550 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6558 == '\0')) {
        DAT_028b6558 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cfcdc0(DAT_0239011c,DAT_0239011c,DAT_0239011c,DAT_0239011c);
      lVar2 = DAT_028b6540;
      if (DAT_028b6540 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6540 != 0;
        DAT_028b6540 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6548 == '\0')) {
        DAT_028b6548 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      FUN_01cb4790();
      (**(code **)(*local_68 + 0x4c0))();
      lVar2 = DAT_028b6560;
      if (DAT_028b6560 != local_30) {
        if (local_28 == '\0') {
          if (local_30 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_00d50b00();
            lVar2 = local_30;
          }
        }
        else {
          local_28 = '\0';
          lVar2 = local_30;
        }
        bVar1 = DAT_028b6560 != 0;
        DAT_028b6560 = lVar2;
        if (bVar1) {
          FUN_00d50b20();
          lVar2 = local_30;
        }
      }
      if ((lVar2 != 0) && (DAT_028b6568 == '\0')) {
        DAT_028b6568 = '\x01';
        FUN_00e8cb90();
        lVar2 = local_30;
      }
      if ((local_28 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      DAT_028b6559 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028b6559 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar2 = DAT_028b6560;
  if (DAT_028b6560 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  fVar4 = (DAT_023b1608 + param_3) * DAT_0239011c + DAT_02390d00;
  fVar3 = _DAT_023945d0 * param_3 + param_2;
  (**(code **)(*(longlong *)*unaff_RDI + 0x3c0))(fVar3,DAT_02390118 + fVar4);
  lVar2 = DAT_028b6550;
  if (DAT_028b6550 != 0) {
    FUN_00d50b00();
  }
  FUN_01d488d0();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_01d48b40(DAT_02390124);
  (**(code **)(*(longlong *)*unaff_RDI + 0x3c8))(fVar3,fVar4);
  FUN_01c35c30(param_2,param_3);
  return;
}




// ============================================================
// @01c35eb0 — 960 bytes
// ============================================================

void FUN_01c35eb0(undefined4 param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  longlong *local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x640))();
  local_48 = local_40;
  if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  cVar3 = FUN_01c33700();
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*local_48 + 0x490))(uVar4,0x17,0);
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
    FUN_01d488d0();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x640))();
    uVar4 = (**(code **)(*unaff_RDI + 0x9a0))();
    (**(code **)(*local_b8 + 0x4a8))(uVar4,0x17);
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
    FUN_01d488d0();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x960))();
  plVar2 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01c36250;
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_40 == (longlong *)0x0) goto LAB_01c36250;
  iVar5 = FUN_00d8c7a0();
  if (iVar5 != 0) {
    (**(code **)(*unaff_RDI + 0x9e8))();
    local_68 = local_40;
    local_60 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_60 = '\x01';
    FUN_01d48a10();
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    plVar1 = (longlong *)*unaff_RSI;
    local_a8 = plVar2;
    local_a0 = '\0';
    local_90 = '\0';
    local_98 = plVar1;
    (**(code **)(*unaff_RDI + 0xa00))(param_2,&local_a8);
    local_58 = local_40;
    local_50 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_50 = '\x01';
    (**(code **)(*plVar1 + 0x3f8))(param_1,param_2);
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01c36250:
  if (local_48 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dc94d0 — 925 bytes
// ============================================================

void FUN_01dc94d0(void)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong local_d8;
  code *local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  char local_b8 [8];
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
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  longlong local_40;
  char local_38;
  
  if (0 < unaff_ESI) {
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
    if (iVar1 < unaff_ESI) {
      local_d0 = DAT_02692480;
      local_c8 = &DAT_02692468;
      do {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = local_c8;
        puVar3[2] = &DAT_026927f8;
        puVar3[0xc] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        *(undefined8 *)((longlong)puVar3 + 0x24) = 0;
        *(undefined8 *)((longlong)puVar3 + 0x2c) = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        *(undefined2 *)(puVar3 + 0xb) = 0;
        (*local_d0)();
        lVar2 = DAT_027f29e0;
        if (DAT_027f29e0 != 0) {
          FUN_00d50b00();
        }
        local_90 = lVar2;
        local_88 = '\x01';
        FUN_01db9840();
        if ((local_88 != '\0') && (local_90 != 0)) {
          FUN_00d50b20();
        }
        FUN_01db96b0(DAT_02394240);
        FUN_01dcc2f0();
        FUN_00d50b20();
        iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
      } while (iVar1 < unaff_ESI);
    }
    while (unaff_ESI < iVar1) {
      FUN_00d23340();
      puVar3 = local_c0;
      local_60 = local_b8[0];
      pcVar4 = local_b8;
      if (local_b8[0] == '\0') {
        pcVar4 = &local_60;
      }
      *pcVar4 = '\0';
      if ((local_b8[0] != '\0') && (local_c0 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 == '\0') && (puVar3 != (undefined8 *)0x0)) {
        FUN_00d50b00();
      }
      FUN_01dcc3e0();
      if (puVar3 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x160) + 0xc);
    }
    FUN_00d403d0();
    local_80 = DAT_027f29e8;
    if (DAT_027f29e8 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    FUN_00d50b00();
    lVar2 = DAT_027f29f0;
    if (DAT_027f29f0 != 0) {
      FUN_00d50b00();
    }
    local_d8 = lVar2;
    FUN_00083ea0(2,&local_d8);
    FUN_000b4da0();
    local_40 = local_70;
    local_38 = 0;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_38 = '\x01';
    FUN_00d40470(&local_40,&stack0xffffffffffffffb0,1,3);
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    local_c0 = (undefined8 *)&DAT_0253d630;
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_c0 = &DAT_024c5048;
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c34010 — 882 bytes
// ============================================================

void FUN_01c34010(void)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong **pplVar4;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_40;
  char local_38;
  
  FUN_00d654d0();
  FUN_00d4efa0();
  plVar1 = unaff_RDI + 0x3c;
  FUN_00c88450(plVar1);
  plVar2 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar2 != unaff_RSI) {
    return;
  }
  if ((longlong *)*plVar1 != (longlong *)0x0) {
    pplVar4 = &local_40;
    (**(code **)(*(longlong *)*plVar1 + 0x388))();
    plVar2 = local_40;
    FUN_01152ba0();
    if (plVar2 == (longlong *)0x0) {
LAB_01c340de:
      pplVar4 = (longlong **)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_01c340de;
    }
    plVar2 = *pplVar4;
    if (*(char *)(pplVar4 + 1) == '\0') {
      if (plVar2 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar4 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d403d0();
      FUN_00d50b00();
      local_c0 = DAT_027eb298;
      if (DAT_027eb298 != 0) {
        FUN_00d50b00();
      }
      local_b8 = '\x01';
      local_a8 = '\0';
      local_b0 = plVar2;
      FUN_00d41430(&local_b0,&local_c0);
      if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d403d0();
      FUN_00d50b00();
      local_a0 = DAT_027eb2a0;
      if (DAT_027eb2a0 != 0) {
        FUN_00d50b00();
      }
      local_98 = '\x01';
      local_88 = '\0';
      local_90 = plVar2;
      FUN_00d41430(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x368))();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      (**(code **)(*unaff_RDI + 0x968))();
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01c34363;
    }
  }
  local_78 = '\0';
  local_80 = 0;
  (**(code **)(*unaff_RDI + 0x968))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
LAB_01c34363:
  (**(code **)(*unaff_RDI + 0x620))();
  return;
}




// ============================================================
// @002a6470 — 862 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x002a64be) */
/* WARNING: Removing unreachable block (ram,0x002a64ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_002a6470(void)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar5 [16];
  float fVar7;
  undefined1 auVar6 [16];
  undefined1 local_c8 [16];
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  FUN_01e44a80();
  local_c8._0_8_ = (**(code **)(*unaff_RDI + 0xaf8))();
  local_c8._8_8_ = extraout_XMM0_Qb;
  cVar3 = (**(code **)(*unaff_RDI + 0x9a0))();
  if (cVar3 == '\0') {
    uVar4 = (**(code **)(*unaff_RDI + 0x640))();
    plVar1 = local_60;
    local_a0 = DAT_026e41f0;
    if (DAT_026e41f0 != 0) {
      uVar4 = FUN_00d50b00();
    }
    local_98 = '\x01';
    (**(code **)(*plVar1 + 0x3b0))(uVar4,&local_a0);
    local_50 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    FUN_01d488d0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    (**(code **)(*unaff_RDI + 0x640))();
    (**(code **)(*local_60 + 0x390))();
    local_70 = local_40;
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
    FUN_01d488d0();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_90 = *unaff_RSI;
  local_88 = '\0';
  (**(code **)(*unaff_RDI + 0xb20))();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  uVar2 = (uint)((ulonglong)extraout_XMM0_Qb >> 0x20);
  fVar7 = (float)((ulonglong)local_c8._0_8_ >> 0x20);
  auVar5._0_4_ = _DAT_023945e0 & (uint)fVar7;
  auVar5._4_4_ = _UNK_023945e4 & (uint)fVar7;
  auVar5._8_4_ = _UNK_023945e8 & uVar2;
  auVar5._12_4_ = _UNK_023945ec & uVar2;
  auVar6._4_12_ = SUB1612(auVar5 | _DAT_023945f0,4);
  auVar6._0_4_ = SUB164(auVar5 | _DAT_023945f0,0) + fVar7;
  auVar5 = roundss(ZEXT816(0),auVar6,0xb);
  insertps(local_c8,auVar5,0x10);
  FUN_01d48b40();
  plVar1 = (longlong *)*unaff_RSI;
  FUN_00d05530();
  FUN_01d39800();
  local_80 = local_40;
  local_78 = 0;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_78 = '\x01';
  (**(code **)(*plVar1 + 0x3a8))();
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_01d48b40();
  return;
}




// ============================================================
// @01c35270 — 819 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01c3549b) */
/* WARNING: Removing unreachable block (ram,0x01c354a4) */
/* WARNING: Removing unreachable block (ram,0x01c353ca) */
/* WARNING: Removing unreachable block (ram,0x01c353d3) */
/* WARNING: Removing unreachable block (ram,0x01c3556e) */
/* WARNING: Removing unreachable block (ram,0x01c35577) */
/* WARNING: Removing unreachable block (ram,0x01c352c5) */
/* WARNING: Removing unreachable block (ram,0x01c352ce) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c35270(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  longlong *local_40;
  char local_38;
  
  fVar6 = (float)param_2;
  fVar4 = (float)param_1;
  (**(code **)(*unaff_RDI + 0x640))();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*unaff_RDI + 0xaf0))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*unaff_RDI + 0xb18))();
    fVar8 = (float)((ulonglong)param_2 >> 0x20) * _UNK_023945d4;
    fVar7 = fVar6 * _DAT_023945d0 + fVar4;
    if (cVar2 == '\0') {
      FUN_00d05530(fVar4,fVar6,DAT_02390d00);
      (**(code **)(*local_40 + 0x3f0))(5,1,0,1);
      (**(code **)(*local_40 + 0x490))(1,1,0);
      if (local_38 == '\0') {
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_01d488d0();
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = FUN_00d05570(fVar7,DAT_023b1608);
      FUN_01cb3a30(uVar5,DAT_02390d2c);
    }
    else {
      FUN_01c35c30();
    }
    cVar2 = (**(code **)(*unaff_RDI + 0xb18))();
    if (cVar2 != '\0') {
      dVar1 = (double)(**(code **)(*unaff_RDI + 0xb20))();
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02680400;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      *(undefined8 *)((longlong)puVar3 + 0x39) = 0;
      *(undefined8 *)((longlong)puVar3 + 0x41) = 0;
      (*DAT_02680418)();
      FUN_01d39310(fVar7,fVar8 + (float)((ulonglong)param_1 >> 0x20),DAT_02390d30,
                   (float)dVar1 * _DAT_0241e850 + DAT_0241e854);
      (**(code **)(*(longlong *)*unaff_RSI + 0x3a8))();
      FUN_00d50b20();
    }
  }
  else {
    uVar5 = (**(code **)(*unaff_RDI + 0xaf8))();
    FUN_01c35730(uVar5,fVar4,fVar6);
  }
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01de7760 — 709 bytes
// str: ""GNTableView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de7760(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong **pplVar5;
  longlong unaff_RDI;
  longlong *local_60;
  char local_58;
  
  FUN_01ccad60();
  plVar1 = local_60;
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) goto LAB_01de7968;
  pplVar5 = &local_60;
  FUN_01ccad60();
  plVar1 = local_60;
  if ((DAT_026e56b0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    _DAT_026fd498 = FUN_0006d940();
    _DAT_026fd480 = "GNTableView";
    _DAT_026fd488 = 0x2a0;
    _DAT_026fd490 = FUN_00193920;
    _DAT_026fd4a0 = 0;
    uRam00000000026fd4a8 = 0;
    _DAT_026fd4b0 = 0;
    uRam00000000026fd4b8 = 0;
    _DAT_026fd4c0 = 0;
    uRam00000000026fd4c8 = 0;
    _DAT_026fd4d0 = 0;
    uRam00000000026fd4d8 = 0;
    _DAT_026fd4e0 = 0;
    uRam00000000026fd4e8 = 0;
    _DAT_026fd4f0 = 0;
    uRam00000000026fd4f8 = 0;
    _DAT_026fd500 = 0;
    uRam00000000026fd508 = 0;
    _DAT_026fd510 = 0;
    uRam00000000026fd518 = 0;
    _DAT_026fd520 = 0;
    uRam00000000026fd528 = 0;
    _DAT_026fd530 = 0;
    uRam00000000026fd538 = 0;
    _DAT_026fd540 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_01de77e1:
    pplVar5 = (longlong **)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_01de77e1;
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
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf190();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  lVar2 = DAT_027f2e58;
  if (DAT_027f2e58 != 0) {
    FUN_00d50b00();
  }
  FUN_01ddf130();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (unaff_RDI != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar1 + 0x7f8))();
  if (unaff_RDI != 0) {
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x10))();
  FUN_00d50b00();
  FUN_01de09b0();
  if ((longlong *)(unaff_RDI + 0x48) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)(*(longlong *)(unaff_RDI + 0x50) + 0x10))();
  FUN_00d50b00();
  FUN_01de09c0();
  if ((longlong *)(unaff_RDI + 0x50) != (longlong *)0x0) {
    (**(code **)(*(longlong *)(unaff_RDI + 0x50) + 0x10))();
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01de7968:
  FUN_01cc9ce0();
  return;
}




// ============================================================
// @01de8070 — 668 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01de827f) */
/* WARNING: Removing unreachable block (ram,0x01de8288) */
/* WARNING: Removing unreachable block (ram,0x01de8144) */
/* WARNING: Removing unreachable block (ram,0x01de814d) */
/* WARNING: Removing unreachable block (ram,0x01de81ae) */
/* WARNING: Removing unreachable block (ram,0x01de81b7) */
/* WARNING: Removing unreachable block (ram,0x01de80c8) */

void FUN_01de8070(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong unaff_RDI;
  longlong lVar8;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  FUN_01ccad60();
  if (local_50 == 0) {
    lVar8 = 0;
    if (local_48 != '\0') {
      lVar8 = 0;
    }
  }
  else {
    lVar8 = local_50;
    if (local_48 == '\0') {
      FUN_00d50b00();
    }
  }
  lVar1 = DAT_02800140;
  if (lVar8 != 0) {
    if (DAT_02800140 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    if (local_50 == 0) {
      bVar4 = true;
      lVar8 = 0;
    }
    else {
      lVar8 = local_50;
      if (local_48 == '\0') {
        FUN_00d50b00();
        bVar4 = false;
      }
      else {
        local_48 = '\0';
        bVar4 = false;
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar8 == 0) {
      puVar7 = (undefined8 *)0x0;
      local_40 = 0;
      bVar2 = false;
    }
    else {
      FUN_01d25cb0();
      if (local_50 == 0) {
        local_40 = 0;
        bVar3 = false;
        bVar2 = false;
        puVar7 = (undefined8 *)0x0;
      }
      else {
        if (local_48 == '\0') {
          FUN_00d50b00();
        }
        puVar7 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar7 = &DAT_02572358;
        (*DAT_02572370)();
        for (lVar8 = 0; iVar6 = FUN_01dcea80(), lVar8 < iVar6; lVar8 = lVar8 + 1) {
          cVar5 = FUN_01dd3250();
          if (cVar5 != '\0') {
            lVar1 = *(longlong *)(*(longlong *)(local_50 + 0x10) + lVar8 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_00d21140();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
        }
        *(undefined1 *)(unaff_RDI + 0x59) = 1;
        FUN_01d2c5c0();
        *(undefined1 *)(unaff_RDI + 0x59) = 0;
        bVar3 = true;
        bVar2 = true;
        local_40 = local_50;
      }
      if (!bVar4) {
        FUN_00d50b20();
        bVar2 = bVar3;
      }
    }
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((bVar2) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar2) && (puVar7 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01c33b70 — 646 bytes
// ============================================================

void FUN_01c33b70(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong **pplVar3;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_38;
  char local_30;
  
  FUN_00d652e0();
  FUN_00d4efa0();
  FUN_00c88450((longlong *)(unaff_RDI + 0x1e0));
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != unaff_RSI) {
    return;
  }
  plVar1 = *(longlong **)(unaff_RDI + 0x1e0);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  pplVar3 = &local_38;
  (**(code **)(*plVar1 + 0x388))();
  plVar1 = local_38;
  FUN_01152ba0();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01c33c4a;
  }
  pplVar3 = (longlong **)&DAT_02802688;
LAB_01c33c4a:
  plVar1 = *pplVar3;
  if (*(char *)(pplVar3 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar3 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d403d0();
    FUN_00d50b00();
    local_98 = DAT_027eb298;
    if (DAT_027eb298 != 0) {
      FUN_00d50b00();
    }
    local_90 = '\x01';
    local_80 = '\0';
    local_88 = plVar1;
    FUN_00d41040(&local_88,&local_98);
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d403d0();
    FUN_00d50b00();
    local_78 = DAT_027eb2a0;
    if (DAT_027eb2a0 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    local_60 = '\0';
    local_68 = plVar1;
    FUN_00d41040(&local_68,&local_78);
    if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (unaff_RDI != 0) {
      FUN_00d50b20();
    }
    if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @0198a0a0 — 588 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0198a0a0(double param_1)

{
  longlong *plVar1;
  longlong *unaff_RDI;
  float fVar2;
  longlong local_30;
  char local_28;
  
  fVar2 = *(float *)((longlong)unaff_RDI + 0x14c);
  if ((char)unaff_RDI[0x29] == '\0') {
    if (0.0 < fVar2) {
      fVar2 = fVar2 + (float)(param_1 / _DAT_0241b6b8);
      *(float *)((longlong)unaff_RDI + 0x14c) = fVar2;
      if (fVar2 < 0.0) {
        *(undefined4 *)((longlong)unaff_RDI + 0x14c) = 0;
        FUN_01f27fe0();
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b00();
        FUN_01f474f0();
        if (unaff_RDI + 0x27 != (longlong *)0x0) {
          (**(code **)(unaff_RDI[0x27] + 0x10))();
          FUN_00d50b20();
        }
        if ((local_28 != '\0') && (local_30 != 0)) {
          FUN_00d50b20();
        }
        *(undefined1 *)((longlong)unaff_RDI + 0x149) = 0;
      }
      (**(code **)(*unaff_RDI + 0x620))();
      plVar1 = (longlong *)unaff_RDI[6];
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b00();
        (**(code **)(&UNK_000014a0 + *plVar1))(*(undefined4 *)((longlong)unaff_RDI + 0x14c));
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
    }
  }
  else if (fVar2 < DAT_02390124) {
    fVar2 = fVar2 + (float)(param_1 / DAT_023b3490);
    *(float *)((longlong)unaff_RDI + 0x14c) = fVar2;
    if (DAT_02390124 < fVar2) {
      *(undefined4 *)((longlong)unaff_RDI + 0x14c) = 0x3f800000;
      FUN_01f27fe0();
      (**(code **)(unaff_RDI[0x27] + 0x10))();
      FUN_00d50b00();
      FUN_01f474f0();
      if (unaff_RDI + 0x27 != (longlong *)0x0) {
        (**(code **)(unaff_RDI[0x27] + 0x10))();
        FUN_00d50b20();
      }
      if ((local_28 != '\0') && (local_30 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)((longlong)unaff_RDI + 0x149) = 0;
    }
    (**(code **)(*unaff_RDI + 0x620))();
    plVar1 = (longlong *)unaff_RDI[6];
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
      (**(code **)(&UNK_000014a0 + *plVar1))(*(undefined4 *)((longlong)unaff_RDI + 0x14c));
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  return;
}




// ============================================================
// @01de7c30 — 523 bytes
// str: ""GNTableView""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01de7d6e) */
/* WARNING: Removing unreachable block (ram,0x01de7d3e) */
/* WARNING: Removing unreachable block (ram,0x01de7d12) */
/* WARNING: Removing unreachable block (ram,0x01de7d1b) */
/* WARNING: Removing unreachable block (ram,0x01de7d47) */
/* WARNING: Removing unreachable block (ram,0x01de7d77) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01de7c30(void)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *local_38;
  char local_30;
  
  FUN_01cc9cf0();
  FUN_01ccad60();
  plVar1 = local_38;
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  pplVar4 = &local_38;
  FUN_01ccad60();
  plVar1 = local_38;
  if ((DAT_026e56b0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
    _DAT_026fd498 = FUN_0006d940();
    _DAT_026fd480 = "GNTableView";
    _DAT_026fd488 = 0x2a0;
    _DAT_026fd490 = FUN_00193920;
    _DAT_026fd4a0 = 0;
    uRam00000000026fd4a8 = 0;
    _DAT_026fd4b0 = 0;
    uRam00000000026fd4b8 = 0;
    _DAT_026fd4c0 = 0;
    uRam00000000026fd4c8 = 0;
    _DAT_026fd4d0 = 0;
    uRam00000000026fd4d8 = 0;
    _DAT_026fd4e0 = 0;
    uRam00000000026fd4e8 = 0;
    _DAT_026fd4f0 = 0;
    uRam00000000026fd4f8 = 0;
    _DAT_026fd500 = 0;
    uRam00000000026fd508 = 0;
    _DAT_026fd510 = 0;
    uRam00000000026fd518 = 0;
    _DAT_026fd520 = 0;
    uRam00000000026fd528 = 0;
    _DAT_026fd530 = 0;
    uRam00000000026fd538 = 0;
    _DAT_026fd540 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 != '\0') goto LAB_01de7cbf;
  }
  pplVar4 = (longlong **)&DAT_02802688;
LAB_01de7cbf:
  plVar1 = *pplVar4;
  if (*(char *)(pplVar4 + 1) == '\0') {
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(undefined1 *)(pplVar4 + 1) = 0;
  }
  if ((local_30 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01ddf190();
  FUN_01ddf130();
  (**(code **)(*plVar1 + 0x7f8))();
  FUN_00d50b20();
  return;
}




// ============================================================
// @0019c530 — 519 bytes
// str: ""GNTableView""
// str: ""GNTableViewDropFeedback""
// str: ""_dropFeedback""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0019c530(void)

{
  int iVar1;
  
  if (DAT_026e5ef8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e5ee0 = _DAT_0238fcc0;
      uRam00000000026e5ee4 = _UNK_0238fcc4;
      uRam00000000026e5ee8 = _UNK_0238fcc8;
      uRam00000000026e5eec = _UNK_0238fccc;
      DAT_026e5ef0 = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_026e5f30 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_026e5f00 = "GNTableViewDropFeedback";
      _DAT_026e5f08 = 4;
      DAT_026e5f0c = DAT_026e5ef0;
      _DAT_026e5f10 = &DAT_026e5ee0;
      _DAT_026e5f18 = &DAT_026e5eb0;
      _DAT_026e5f20 = 0;
      uRam00000000026e5f28 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_026e5ea0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_026e56b0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026fd498 = FUN_0006d940();
          _DAT_026fd480 = "GNTableView";
          _DAT_026fd488 = 0x2a0;
          _DAT_026fd490 = FUN_00193920;
          _DAT_026fd4a0 = 0;
          uRam00000000026fd4a8 = 0;
          _DAT_026fd4b0 = 0;
          uRam00000000026fd4b8 = 0;
          _DAT_026fd4c0 = 0;
          uRam00000000026fd4c8 = 0;
          _DAT_026fd4d0 = 0;
          uRam00000000026fd4d8 = 0;
          _DAT_026fd4e0 = 0;
          uRam00000000026fd4e8 = 0;
          _DAT_026fd4f0 = 0;
          uRam00000000026fd4f8 = 0;
          _DAT_026fd500 = 0;
          uRam00000000026fd508 = 0;
          _DAT_026fd510 = 0;
          uRam00000000026fd518 = 0;
          _DAT_026fd520 = 0;
          uRam00000000026fd528 = 0;
          _DAT_026fd530 = 0;
          uRam00000000026fd538 = 0;
          _DAT_026fd540 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026e5e60 = "_dropFeedback";
      _DAT_026e5e68 = &DAT_026fd480;
      _DAT_026e5e70 = 0;
      _DAT_026e5e78 = 0x6500;
      _DAT_026e5e80 = "GNTableViewDropFeedback";
      _DAT_026e5e88 = &DAT_026e5f00;
      _DAT_026e5e90 = 0;
      uRam00000000026e5e98 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_026e5e60;
}




// ============================================================
// @01c33700 — 507 bytes
// str: ""GNTableView""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01c33700(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *unaff_RDI;
  longlong *local_48;
  char local_40;
  longlong *plVar5;
  
  if (unaff_RDI != (longlong *)0x0) {
    FUN_00d50b00();
  }
  plVar5 = unaff_RDI;
  do {
    (**(code **)(*plVar5 + 0x370))();
    if (local_48 == plVar5) {
LAB_01c337ac:
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      plVar5 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
        goto LAB_01c337ac;
      }
      FUN_00d50b20();
    }
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    if ((DAT_026e56b0 == '\0') && (iVar2 = ___cxa_guard_acquire(), iVar2 != 0)) {
      _DAT_026fd498 = FUN_0006d940();
      _DAT_026fd480 = "GNTableView";
      _DAT_026fd488 = 0x2a0;
      _DAT_026fd490 = FUN_00193920;
      _DAT_026fd4a0 = 0;
      uRam00000000026fd4a8 = 0;
      _DAT_026fd4b0 = 0;
      uRam00000000026fd4b8 = 0;
      _DAT_026fd4c0 = 0;
      uRam00000000026fd4c8 = 0;
      _DAT_026fd4d0 = 0;
      uRam00000000026fd4d8 = 0;
      _DAT_026fd4e0 = 0;
      uRam00000000026fd4e8 = 0;
      _DAT_026fd4f0 = 0;
      uRam00000000026fd4f8 = 0;
      _DAT_026fd500 = 0;
      uRam00000000026fd508 = 0;
      _DAT_026fd510 = 0;
      uRam00000000026fd518 = 0;
      _DAT_026fd520 = 0;
      uRam00000000026fd528 = 0;
      _DAT_026fd530 = 0;
      uRam00000000026fd538 = 0;
      _DAT_026fd540 = 0;
      ___cxa_guard_release();
    }
    plVar4 = &DAT_02802688;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x360))();
      cVar1 = FUN_00e85ea0();
      plVar4 = (longlong *)&stack0xffffffffffffffc8;
      if (cVar1 == '\0') {
        plVar4 = &DAT_02802688;
      }
    }
    if (*plVar4 != 0) {
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*unaff_RDI + 0x4d8))();
      FUN_01dcea90();
      uVar3 = FUN_01dd3250();
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      return uVar3;
    }
  } while( true );
}



