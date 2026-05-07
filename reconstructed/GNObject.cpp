// Reconstructed implementation of GNObject
// From MikeCore binary — reverse-engineered pseudocode

#include "GNObject.h"

// ============================================================
// @00d5af30 — 17348 bytes
// str: ""GNObject""
// str: ""GNValue""
// str: ""Cannot set value for key: No Property""
// str: ""Cannot set value %@ for key %@ directly.""
// str: ""GNString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d5af30(undefined4 param_1,undefined8 param_2,char param_3)

{
  byte bVar1;
  double dVar2;
  bool bVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  int extraout_var;
  longlong lVar9;
  longlong *plVar10;
  double dVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 in_RCX;
  double *pdVar14;
  int iVar15;
  longlong *in_RDX;
  longlong *plVar16;
  double *unaff_RSI;
  longlong *unaff_RDI;
  double *pdVar17;
  byte bVar18;
  undefined8 *puVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Da_13;
  undefined4 extraout_XMM0_Da_14;
  undefined4 extraout_XMM0_Da_15;
  undefined4 extraout_XMM0_Da_16;
  undefined4 extraout_XMM0_Da_17;
  undefined4 extraout_XMM0_Da_18;
  undefined4 extraout_XMM0_Da_19;
  undefined4 extraout_XMM0_Da_20;
  undefined4 extraout_XMM0_Da_21;
  undefined4 extraout_XMM0_Da_22;
  undefined4 extraout_XMM0_Da_23;
  undefined4 extraout_XMM0_Da_24;
  undefined4 extraout_XMM0_Da_25;
  undefined4 extraout_XMM0_Da_26;
  undefined4 extraout_XMM0_Da_27;
  undefined4 extraout_XMM0_Da_28;
  undefined4 extraout_XMM0_Da_29;
  undefined4 extraout_XMM0_Da_30;
  float fVar20;
  undefined4 extraout_XMM0_Da_31;
  undefined4 extraout_XMM0_Da_32;
  undefined4 extraout_XMM0_Da_33;
  undefined4 extraout_XMM0_Da_34;
  undefined4 extraout_XMM0_Da_35;
  undefined4 extraout_XMM0_Da_36;
  undefined4 extraout_XMM0_Da_37;
  undefined4 extraout_XMM0_Da_38;
  undefined4 extraout_XMM0_Da_39;
  undefined4 extraout_XMM0_Da_40;
  undefined4 extraout_XMM0_Da_41;
  undefined4 uVar21;
  undefined4 extraout_XMM0_Da_42;
  undefined4 extraout_XMM0_Da_43;
  undefined4 extraout_XMM0_Da_44;
  undefined4 extraout_XMM0_Da_45;
  undefined4 extraout_XMM0_Da_46;
  undefined4 extraout_XMM0_Da_47;
  undefined4 extraout_XMM0_Da_48;
  undefined4 extraout_XMM0_Da_49;
  undefined4 extraout_XMM0_Da_50;
  undefined4 extraout_XMM0_Da_51;
  undefined4 extraout_XMM0_Da_52;
  undefined4 extraout_XMM0_Da_53;
  undefined4 extraout_XMM0_Da_54;
  undefined4 extraout_XMM0_Da_55;
  undefined4 extraout_XMM0_Da_56;
  undefined4 extraout_XMM0_Da_57;
  undefined4 extraout_XMM0_Da_58;
  undefined4 extraout_XMM0_Da_59;
  undefined4 extraout_XMM0_Da_60;
  undefined4 extraout_XMM0_Da_61;
  undefined4 extraout_XMM0_Da_62;
  undefined4 extraout_XMM0_Da_63;
  undefined4 extraout_XMM0_Da_64;
  undefined4 extraout_XMM0_Da_65;
  undefined4 extraout_XMM0_Da_66;
  undefined4 extraout_XMM0_Da_67;
  double local_270;
  char local_268;
  double local_260;
  char local_258;
  longlong local_250;
  char local_248;
  longlong local_240;
  char local_238;
  longlong local_230;
  char local_228;
  longlong local_220;
  char local_218;
  double local_210;
  char local_208;
  double local_200;
  char local_1f8;
  double local_1f0;
  char local_1e8;
  double local_1e0;
  char local_1d8;
  double local_1d0;
  char local_1c8;
  double local_1c0;
  char local_1b8;
  longlong *local_1b0;
  char local_1a8;
  longlong *local_1a0;
  char local_198;
  longlong *local_190;
  char local_188;
  longlong *local_180;
  char local_178;
  longlong local_170;
  char local_168;
  longlong local_160;
  char local_158;
  longlong local_150;
  char local_148;
  longlong *local_140;
  char local_138;
  longlong *local_130;
  char local_128;
  longlong local_120;
  char local_118;
  longlong *local_110;
  char local_108;
  longlong local_100;
  longlong local_f8;
  char local_f0;
  longlong *local_e8;
  char local_e0;
  longlong *local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  char local_a0;
  ulonglong local_98;
  undefined8 local_90;
  longlong *local_88;
  char local_80 [8];
  undefined8 *local_78;
  undefined8 local_70;
  int local_68;
  undefined4 uStack_64;
  char local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 *puVar22;
  char local_34;
  
  lVar9 = DAT_0277ddb0;
  if (in_RDX == (longlong *)0x0) {
    if (DAT_0277ddb0 != 0) {
      param_1 = FUN_00e31530(in_RCX,0);
    }
    FUN_00cc7b40(param_1,DAT_025908a0);
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
  }
  local_58 = (undefined8 *)in_RDX[2];
  if ((param_3 == '\0') || (cVar6 = (**(code **)(*unaff_RDI + 0x1e0))(), cVar6 == '\0')) {
    local_34 = '\0';
  }
  else {
    (**(code **)(*unaff_RDI + 0x150))();
    local_34 = '\x01';
  }
  cVar6 = (**(code **)(*in_RDX + 0x368))();
  if (cVar6 == '\0') {
    cVar6 = (**(code **)(*in_RDX + 0x370))();
    uVar21 = extraout_XMM0_Da_01;
    if (cVar6 == '\0') goto switchD_00d5afda_caseD_2b;
    uVar21 = FUN_00d77bd0();
    if ((char)in_RCX == '\0') {
      local_80[0] = '\0';
      local_50 = (longlong *)0x0;
    }
    else {
      uVar21 = FUN_00d77be0();
      local_50 = local_88;
    }
    plVar10 = local_50;
    plVar16 = &local_a8;
    if (local_80[0] != '\0') {
      plVar16 = (longlong *)local_80;
    }
    local_a8 = CONCAT71(local_a8._1_7_,local_80[0]);
    local_88 = local_50;
    *(char *)plVar16 = '\0';
    if ((local_80[0] != '\0') && (local_50 != (longlong *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if (plVar10 == (longlong *)0x0) {
      local_98 = 0;
    }
    else {
      local_98 = FUN_00d77bd0();
      local_98 = local_98 >> 0x20;
      uVar21 = extraout_XMM0_Da_02;
    }
    if (extraout_var < 2) {
      if (extraout_var != 1) {
        if (((char)local_a8 != '\0') && (local_50 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        goto joined_r0x00d5b3a4;
      }
      local_58 = (undefined8 *)(longlong)*(int *)((longlong)in_RDX + 0x24);
      if (in_RDX[0xe] == 0) {
        plVar10 = *(longlong **)((longlong)unaff_RDI + (longlong)local_58);
        bVar18 = 0;
      }
      else {
        bVar1 = *(byte *)(in_RDX[0xe] + 0x18);
        bVar18 = bVar1 >> 7;
        plVar10 = *(longlong **)((longlong)unaff_RDI + (longlong)local_58);
        if (((char)bVar1 < '\0') && (plVar10 != (longlong *)0x0)) {
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x10))();
          bVar18 = 1;
          uVar21 = extraout_XMM0_Da_03;
        }
      }
      if ((local_50 != (longlong *)0x0) && (plVar10 != (longlong *)0x0)) {
        if ((int)local_98 < 2) {
          if ((int)local_98 == 1) {
            local_158 = '\0';
            local_160 = 0;
            uVar21 = (**(code **)(*plVar10 + 0x200))(0,local_50,local_34);
            if ((local_158 != '\0') && (local_160 != 0)) {
              uVar21 = FUN_00d50b20();
            }
          }
        }
        else {
          local_108 = 0;
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00e31530(uVar21,0);
          }
          local_108 = '\x01';
          local_110 = unaff_RDI;
          uVar21 = (**(code **)(*plVar10 + 0x228))(0,local_50,1);
          if ((local_108 != '\0') && (local_110 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
        }
      }
      if (bVar18 == 0) {
        cVar6 = FUN_00d77e30();
        dVar11 = *unaff_RSI;
        uVar21 = extraout_XMM0_Da_24;
        if (cVar6 == '\0') {
          *(double *)((longlong)unaff_RDI + (longlong)local_58) = dVar11;
        }
        else {
          dVar2 = *(double *)((longlong)unaff_RDI + (longlong)local_58);
          if (dVar2 != dVar11) {
            if (dVar11 != 0.0) {
              uVar21 = FUN_00e31530(local_58,0);
            }
            *(double *)((longlong)unaff_RDI + (longlong)local_58) = dVar11;
            if (dVar2 != 0.0) {
              uVar21 = FUN_00d50b20();
            }
          }
        }
        goto LAB_00d5cf7c;
      }
      if (*unaff_RSI == 0.0) {
LAB_00d5be5e:
        lVar9 = 0;
      }
      else {
        cVar6 = FUN_00d77e30();
        uVar21 = extraout_XMM0_Da_23;
        if (cVar6 != '\0') {
          uVar21 = FUN_00e31530(extraout_XMM0_Da_23,0);
        }
        if ((longlong *)*unaff_RSI == (longlong *)0x0) goto LAB_00d5be5e;
        uVar21 = (**(code **)(*(longlong *)*unaff_RSI + 0x360))();
        lVar9 = FUN_00e86120(uVar21,1);
        lVar9 = lVar9 + (longlong)*unaff_RSI;
        uVar21 = extraout_XMM0_Da_42;
      }
      *(longlong *)((longlong)unaff_RDI + (longlong)local_58) = lVar9;
      if ((plVar10 != (longlong *)0x0) &&
         (cVar6 = FUN_00d77e30(), uVar21 = extraout_XMM0_Da_43, cVar6 != '\0')) {
        uVar21 = FUN_00d50b20();
      }
LAB_00d5cf7c:
      if ((local_50 != (longlong *)0x0) &&
         (plVar10 = (longlong *)*unaff_RSI, plVar10 != (longlong *)0x0)) {
        if ((int)local_98 < 2) {
          if ((int)local_98 == 1) {
            local_128 = 0;
            if (unaff_RDI != (longlong *)0x0) {
              FUN_00e31530(uVar21,0);
            }
            local_128 = '\x01';
            local_130 = unaff_RDI;
            (**(code **)(*plVar10 + 0x200))(0,local_50,local_34);
            if ((local_128 != '\0') && (local_130 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_138 = 0;
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00e31530(uVar21,0);
          }
          local_138 = '\x01';
          local_140 = unaff_RDI;
          (**(code **)(*plVar10 + 0x220))(0xffffffff,local_50,0,local_34);
          if ((local_138 != '\0') && (local_140 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if (local_34 == '\0') {
        if ((char)local_a8 == '\0') {
          return;
        }
        if (local_50 == (longlong *)0x0) {
          return;
        }
        FUN_00d50b20();
        return;
      }
      (**(code **)(*unaff_RDI + 0x158))();
      if ((char)local_a8 == '\0') {
        return;
      }
      if (local_50 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_b8 = (longlong *)(longlong)*(int *)((longlong)in_RDX + 0x24);
    puVar12 = *(undefined8 **)((longlong)local_b8 + (longlong)unaff_RDI);
    if (puVar12 == (undefined8 *)0x0) {
      puVar19 = (undefined8 *)*unaff_RSI;
      if (local_50 == (longlong *)0x0) {
        bVar3 = false;
        puVar22 = (undefined8 *)0x0;
        local_90 = 0;
        local_58 = (undefined8 *)0x0;
        goto LAB_00d5c009;
      }
LAB_00d5bd08:
      iVar15 = (int)local_98;
      if (puVar19 != (undefined8 *)0x0) {
        puVar22 = (undefined8 *)0x0;
        bVar3 = false;
        local_90 = 0;
        local_58 = (undefined8 *)0x0;
        uVar13 = FUN_00e31530();
        local_90 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
        local_58 = puVar19;
        goto LAB_00d5c020;
      }
      local_58 = (undefined8 *)0x0;
      local_90 = 0;
      puVar22 = (undefined8 *)0x0;
      bVar3 = false;
    }
    else {
      FUN_00e31530();
      pcVar4 = DAT_02572370;
      puVar19 = (undefined8 *)*unaff_RSI;
      if (local_50 == (longlong *)0x0) {
        bVar3 = false;
        puVar22 = (undefined8 *)0x0;
        local_90 = 0;
        local_58 = (undefined8 *)0x0;
      }
      else {
        if (*(int *)((longlong)puVar12 + 0xc) == 0) goto LAB_00d5bd08;
        if ((puVar19 == (undefined8 *)0x0) || (*(int *)((longlong)puVar19 + 0xc) == 0)) {
          local_90 = 0;
          local_58 = (undefined8 *)0x0;
          FUN_00e31530();
          bVar3 = true;
          local_58 = (undefined8 *)0x0;
          puVar22 = puVar12;
          local_90 = 0;
        }
        else {
          local_80[0] = 0;
          local_88 = (longlong *)0x0;
          local_70._0_4_ = -1;
          local_70._4_4_ = 0;
          local_68 = 0;
          bVar3 = false;
          puVar22 = (undefined8 *)0x0;
          local_b0 = puVar12;
          local_78 = puVar12;
          while( true ) {
            lVar9 = (longlong)(int)local_70;
            local_70._0_4_ = (int)local_70 + 1;
            if (*(int *)((longlong)local_78 + 0xc) <= (int)local_70) break;
            local_1b0 = *(longlong **)(local_78[2] + 8 + lVar9 * 8);
            local_1a8 = '\0';
            local_88 = local_1b0;
            cVar6 = FUN_00d24090();
            if ((local_1a8 != '\0') && (local_1b0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar6 == '\0') {
              if (puVar22 == (undefined8 *)0x0) {
                puVar22 = (undefined8 *)FUN_00e8fc40();
                *(undefined4 *)(puVar22 + 1) = 0;
                *puVar22 = &DAT_02572358;
                (*pcVar4)();
                bVar3 = true;
              }
              local_1a0 = local_88;
              local_198 = '\0';
              FUN_00d21140();
              if ((local_198 != '\0') && (local_1a0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                local_70._4_4_ = -local_70._4_4_;
              }
              else {
                local_70._0_4_ = (int)local_70 - local_70._4_4_;
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                local_70._4_4_ = 0;
              }
            }
          }
          FUN_00083b20();
          local_80[0] = '\0';
          local_88 = (longlong *)0x0;
          local_70 = 0xffffffff;
          local_68 = 0;
          local_90 = 0;
          local_58 = (undefined8 *)0x0;
          local_78 = puVar19;
          while( true ) {
            lVar9 = (longlong)(int)local_70;
            iVar15 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar15);
            if (*(int *)((longlong)local_78 + 0xc) <= iVar15) break;
            local_190 = *(longlong **)(local_78[2] + 8 + lVar9 * 8);
            local_188 = '\0';
            local_88 = local_190;
            cVar6 = FUN_00d24090();
            if ((local_188 != '\0') && (local_190 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar6 == '\0') {
              if (local_58 == (undefined8 *)0x0) {
                puVar12 = (undefined8 *)FUN_00e8fc40();
                *(undefined4 *)(puVar12 + 1) = 0;
                *puVar12 = &DAT_02572358;
                uVar13 = (*pcVar4)();
                local_90 = CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
                local_58 = puVar12;
              }
              local_180 = local_88;
              local_178 = '\0';
              FUN_00d21140();
              if ((local_178 != '\0') && (local_180 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else {
            }
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ == 0 || local_70 < 0) {
                iVar15 = -local_70._4_4_;
              }
              else {
                iVar15 = (int)local_70 - local_70._4_4_;
                local_70._4_4_ = (int)((ulonglong)local_70 >> 0x20);
                local_70 = CONCAT44(local_70._4_4_,iVar15);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar15 = 0;
              }
              local_70 = CONCAT44(iVar15,(int)local_70);
            }
          }
          FUN_00083b20();
          puVar12 = local_b0;
        }
      }
LAB_00d5c009:
      iVar15 = (int)local_98;
      if (puVar19 != (undefined8 *)0x0) {
LAB_00d5c020:
        uVar21 = FUN_00e88810();
        goto LAB_00d5c044;
      }
    }
    uVar21 = FUN_00d216c0();
LAB_00d5c044:
    if (local_50 != (longlong *)0x0) {
      local_b0 = puVar12;
      if (local_58 != (undefined8 *)0x0) {
        local_80[0] = '\0';
        local_88 = (longlong *)0x0;
        local_78 = local_58;
        local_70 = 0xffffffff;
        local_68 = 0;
        local_70._4_4_ = 0;
        if (iVar15 < 2) {
          if (unaff_RDI == (longlong *)0x0) {
            while( true ) {
              if (local_70._4_4_ != 0) {
                if (local_70._4_4_ < 1) {
                  iVar15 = -local_70._4_4_;
                }
                else {
                  iVar15 = (int)local_70 - local_70._4_4_;
                  local_70 = CONCAT44(local_70._4_4_,iVar15);
                  FUN_00d23690();
                  local_68 = local_68 + local_70._4_4_;
                  iVar15 = 0;
                }
                local_70 = CONCAT44(iVar15,(int)local_70);
              }
              lVar9 = (longlong)(int)local_70;
              iVar15 = (int)local_70 + 1;
              local_70 = CONCAT44(local_70._4_4_,iVar15);
              if (*(int *)((longlong)local_78 + 0xc) <= iVar15) break;
              local_88 = *(longlong **)(local_78[2] + 8 + lVar9 * 8);
              if ((local_88 != (longlong *)0x0) && ((int)local_98 == 1)) {
                local_d0 = '\x01';
                local_d8 = unaff_RDI;
                (**(code **)(*local_88 + 0x200))(0,local_50,local_34);
                if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
          else {
            while( true ) {
              if (local_70._4_4_ != 0) {
                if (local_70._4_4_ < 1) {
                  iVar15 = -local_70._4_4_;
                }
                else {
                  iVar15 = (int)local_70 - local_70._4_4_;
                  local_70 = CONCAT44(local_70._4_4_,iVar15);
                  FUN_00d23690();
                  local_68 = local_68 + local_70._4_4_;
                  iVar15 = 0;
                }
                local_70 = CONCAT44(iVar15,(int)local_70);
              }
              lVar9 = (longlong)(int)local_70;
              iVar15 = (int)local_70 + 1;
              local_70 = CONCAT44(local_70._4_4_,iVar15);
              if (*(int *)((longlong)local_78 + 0xc) <= iVar15) break;
              plVar10 = *(longlong **)(local_78[2] + 8 + lVar9 * 8);
              local_88 = plVar10;
              if ((plVar10 != (longlong *)0x0) && ((int)local_98 == 1)) {
                local_d0 = 0;
                FUN_00e31530(local_78[2],0);
                local_d0 = '\x01';
                local_d8 = unaff_RDI;
                (**(code **)(*plVar10 + 0x200))(0,local_50,local_34);
                if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
          }
        }
        else if (unaff_RDI == (longlong *)0x0) {
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar15 = -local_70._4_4_;
              }
              else {
                iVar15 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar15);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar15 = 0;
              }
              local_70 = CONCAT44(iVar15,(int)local_70);
            }
            lVar9 = (longlong)(int)local_70;
            iVar15 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar15);
            if (*(int *)((longlong)local_78 + 0xc) <= iVar15) break;
            local_88 = *(longlong **)(local_78[2] + 8 + lVar9 * 8);
            if (local_88 != (longlong *)0x0) {
              local_e0 = '\x01';
              local_e8 = unaff_RDI;
              (**(code **)(*local_88 + 0x220))(0xffffffff,local_50,0,local_34);
              if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        else {
          while( true ) {
            if (local_70._4_4_ != 0) {
              if (local_70._4_4_ < 1) {
                iVar15 = -local_70._4_4_;
              }
              else {
                iVar15 = (int)local_70 - local_70._4_4_;
                local_70 = CONCAT44(local_70._4_4_,iVar15);
                FUN_00d23690();
                local_68 = local_68 + local_70._4_4_;
                iVar15 = 0;
              }
              local_70 = CONCAT44(iVar15,(int)local_70);
            }
            lVar9 = (longlong)(int)local_70;
            iVar15 = (int)local_70 + 1;
            local_70 = CONCAT44(local_70._4_4_,iVar15);
            if (*(int *)((longlong)local_78 + 0xc) <= iVar15) break;
            plVar10 = *(longlong **)(local_78[2] + 8 + lVar9 * 8);
            local_88 = plVar10;
            if (plVar10 != (longlong *)0x0) {
              local_e0 = 0;
              FUN_00e31530(local_78[2],0);
              local_e0 = '\x01';
              local_e8 = unaff_RDI;
              (**(code **)(*plVar10 + 0x220))(0xffffffff,local_50,0,local_34);
              if ((local_e0 != '\0') && (local_e8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
        uVar21 = FUN_00083b20();
        iVar15 = (int)local_98;
      }
      puVar12 = local_b0;
      if (puVar22 != (undefined8 *)0x0) {
        local_80[0] = '\0';
        local_88 = (longlong *)0x0;
        local_68 = 0;
        local_70 = 0;
        local_78 = puVar22;
        if (iVar15 < 2) {
          local_b8 = in_RDX;
          if (0 < *(int *)((longlong)puVar22 + 0xc)) {
            lVar9 = 0;
            do {
              local_88 = *(longlong **)(puVar22[2] + lVar9 * 8);
              if ((local_88 != (longlong *)0x0) && (iVar15 == 1)) {
                local_168 = '\0';
                local_170 = 0;
                (**(code **)(*local_88 + 0x200))(0,local_50,local_34);
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
              }
              lVar9 = lVar9 + 1;
              local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
            } while ((int)lVar9 < *(int *)((longlong)puVar22 + 0xc));
          }
        }
        else {
          local_b8 = in_RDX;
          if (0 < *(int *)((longlong)puVar22 + 0xc)) {
            if (unaff_RDI == (longlong *)0x0) {
              lVar9 = 0;
              do {
                local_88 = *(longlong **)(puVar22[2] + lVar9 * 8);
                if (local_88 != (longlong *)0x0) {
                  local_c0 = '\x01';
                  local_c8 = unaff_RDI;
                  (**(code **)(*local_88 + 0x228))(0,local_50,local_34);
                  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                    FUN_00d50b20();
                  }
                }
                lVar9 = lVar9 + 1;
                local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
              } while ((int)lVar9 < *(int *)((longlong)puVar22 + 0xc));
            }
            else {
              lVar9 = 0;
              do {
                plVar10 = *(longlong **)(puVar22[2] + lVar9 * 8);
                local_88 = plVar10;
                if (plVar10 != (longlong *)0x0) {
                  local_c0 = 0;
                  FUN_00e31530(uVar21,0);
                  local_c0 = '\x01';
                  local_c8 = unaff_RDI;
                  uVar21 = (**(code **)(*plVar10 + 0x228))(0,local_50,local_34);
                  if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
                    uVar21 = FUN_00d50b20();
                  }
                }
                lVar9 = lVar9 + 1;
                local_70 = CONCAT44(local_70._4_4_,(int)lVar9);
              } while ((int)lVar9 < *(int *)((longlong)puVar22 + 0xc));
            }
          }
        }
        FUN_00083b20();
        puVar12 = local_b0;
      }
    }
    if (local_34 != '\0') {
      (**(code **)(*unaff_RDI + 0x158))();
    }
    if ((bVar3) && (puVar22 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    plVar10 = local_50;
    if (((char)local_90 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((char)local_a8 == '\0') {
      return;
    }
    if (plVar10 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  uVar21 = extraout_XMM0_Da;
  if (0x49 < (int)*(char *)(in_RDX[0xc] + 0x19) - 0x2aU) goto switchD_00d5afda_caseD_2b;
  pdVar17 = (double *)((longlong)*(int *)((longlong)in_RDX + 0x24) + (longlong)unaff_RDI);
  switch((int)*(char *)(in_RDX[0xc] + 0x19)) {
  case 0x2a:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_45, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5b6ff:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_12;
      if (cVar6 == '\0') goto LAB_00d5b6ff;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00d8b910();
    goto LAB_00d5c98d;
  case 0x40:
    FUN_00c77cd0();
    plVar10 = local_88;
    plVar16 = &local_100;
    if (local_80[0] != '\0') {
      plVar16 = (longlong *)local_80;
    }
    local_100 = CONCAT71(local_100._1_7_,local_80[0]);
    *(char *)plVar16 = '\0';
    if ((local_80[0] != '\0') && (plVar10 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_50 = plVar10;
    cVar6 = FUN_00c7b7e0();
    uVar21 = extraout_XMM0_Da_08;
    if (cVar6 == '\0') goto LAB_00d5d26e;
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_54, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5b58d:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_09;
      if (cVar6 == '\0') goto LAB_00d5b58d;
    }
    dVar11 = *pdVar14;
    if (dVar11 == 0.0) goto LAB_00d5d26e;
    uVar21 = FUN_00c798d0();
    local_f8 = local_120;
    local_f0 = 0;
    if (local_118 == '\0') {
      if (local_120 != 0) {
        FUN_00e31530(uVar21,0);
      }
    }
    else {
      local_118 = '\0';
    }
    local_f0 = '\x01';
    uVar21 = FUN_00c80cd0();
    local_268 = '\0';
    local_270 = dVar11;
    uVar21 = FUN_00c884c0(uVar21,&local_270);
    plVar16 = local_88;
    plVar10 = (longlong *)*unaff_RSI;
    if (plVar10 == local_88) {
      if ((*(char *)(unaff_RSI + 1) == '\0') && (local_88 != (longlong *)0x0)) {
        local_b8 = in_RDX;
        if (local_80[0] != '\0') goto LAB_00d5d18b;
        uVar21 = FUN_00e31530(uVar21,0);
        goto LAB_00d5d1e3;
      }
LAB_00d5d1f2:
      if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
    else {
      cVar6 = *(char *)(unaff_RSI + 1);
      if (local_80[0] == '\0') {
        local_b8 = in_RDX;
        if (local_88 != (longlong *)0x0) {
          uVar21 = FUN_00e31530(uVar21,0);
        }
        *unaff_RSI = (double)plVar16;
        if ((cVar6 != '\0') && (plVar10 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
LAB_00d5d1e3:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        goto LAB_00d5d1f2;
      }
      *unaff_RSI = (double)local_88;
      local_b8 = in_RDX;
      if ((cVar6 != '\0') && (plVar10 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
LAB_00d5d18b:
      *(undefined1 *)(unaff_RSI + 1) = 1;
      local_80[0] = '\0';
    }
    if ((local_268 != '\0') && (local_270 != 0.0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_f0 != '\0') && (local_f8 != 0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != 0)) {
      uVar21 = FUN_00d50b20();
    }
LAB_00d5d26e:
    dVar11 = *unaff_RSI;
    dVar2 = *pdVar17;
    if (dVar2 != dVar11) {
      if (dVar11 != 0.0) {
        FUN_00e31530(uVar21,0);
      }
      *pdVar17 = dVar11;
      if (dVar2 != 0.0) {
        FUN_00d50b20();
      }
    }
    if (local_34 != '\0') {
      (**(code **)(*unaff_RDI + 0x158))();
    }
    if ((char)local_100 == '\0') {
      return;
    }
    if (local_50 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  case 0x43:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_47, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5b7f0:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_14;
      if (cVar6 == '\0') goto LAB_00d5b7f0;
    }
    if (*pdVar14 != 0.0) {
      local_208 = '\0';
      local_210 = *pdVar14;
      dVar11 = (double)FUN_00d97540();
      *pdVar17 = dVar11;
      if ((local_208 != '\0') && (local_210 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_61, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4348 = &DAT_028a7cd0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c6b2:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_34;
      if (cVar6 == '\0') goto LAB_00d5c6b2;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00dd63c0();
    goto LAB_00d5c98d;
  case 0x45:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_46, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5b758:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_13;
      if (cVar6 == '\0') goto LAB_00d5b758;
    }
    if (*pdVar14 != 0.0) {
      local_1d8 = '\0';
      local_1e0 = *pdVar14;
      dVar11 = (double)FUN_00d967b0();
      *pdVar17 = dVar11;
      *(int *)(pdVar17 + 1) = (int)param_2;
      *(int *)((longlong)pdVar17 + 0xc) = (int)((ulonglong)param_2 >> 0x20);
      if ((local_1d8 != '\0') && (local_1e0 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_60, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4348 = &DAT_028a7cd0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c65d:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_33;
      if (cVar6 == '\0') goto LAB_00d5c65d;
    }
    if (*pdVar14 != 0.0) {
      dVar11 = (double)FUN_00dd6b50();
      goto LAB_00d5c71f;
    }
    break;
  case 0x49:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_06;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d45870();
      *(undefined4 *)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_56, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c4b7:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_29;
      if (cVar6 == '\0') goto LAB_00d5c4b7;
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d8d560();
      *(undefined4 *)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    break;
  case 0x50:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_44, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5b621:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_10;
      if (cVar6 == '\0') goto LAB_00d5b621;
    }
    if (*pdVar14 != 0.0) {
      local_1c8 = '\0';
      local_1d0 = *pdVar14;
      dVar11 = (double)FUN_00d96ea0();
      *pdVar17 = dVar11;
      if ((local_1c8 != '\0') && (local_1d0 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_58, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4348 = &DAT_028a7cd0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c591:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_31;
      if (cVar6 == '\0') goto LAB_00d5c591;
    }
    if (*pdVar14 != 0.0) {
      dVar11 = (double)FUN_00dd6bf0();
      *pdVar17 = dVar11;
      goto LAB_00d5c991;
    }
    break;
  case 0x52:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_48, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5b884:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_15;
      if (cVar6 == '\0') goto LAB_00d5b884;
    }
    if (*pdVar14 != 0.0) {
      local_1e8 = '\0';
      local_1f0 = *pdVar14;
      dVar11 = (double)FUN_00d96410();
      *pdVar17 = dVar11;
      *(int *)(pdVar17 + 1) = (int)param_2;
      *(int *)((longlong)pdVar17 + 0xc) = (int)((ulonglong)param_2 >> 0x20);
      if ((local_1e8 != '\0') && (local_1f0 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_62, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4348 = &DAT_028a7cd0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c707:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_35;
      if (cVar6 == '\0') goto LAB_00d5c707;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00dd6ab0();
LAB_00d5c71f:
    *pdVar17 = dVar11;
    *(int *)(pdVar17 + 1) = (int)param_2;
    *(int *)((longlong)pdVar17 + 0xc) = (int)((ulonglong)param_2 >> 0x20);
    goto LAB_00d5c991;
  case 0x53:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_49, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5b91c:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_16;
      if (cVar6 == '\0') goto LAB_00d5b91c;
    }
    if (*pdVar14 != 0.0) {
      local_1f8 = '\0';
      local_200 = *pdVar14;
      dVar11 = (double)FUN_00d96b50();
      *pdVar17 = dVar11;
      if ((local_1f8 != '\0') && (local_200 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_63, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4348 = &DAT_028a7cd0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c764:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_36;
      if (cVar6 == '\0') goto LAB_00d5c764;
    }
    if (*pdVar14 != 0.0) {
      dVar11 = (double)FUN_00dd6c90();
      *pdVar17 = dVar11;
      goto LAB_00d5c991;
    }
    break;
  case 0x55:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_19;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
LAB_00d5c815:
      uVar8 = FUN_00d45870();
      *(undefined2 *)pdVar17 = uVar8;
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_65, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4348 = &DAT_028a7cd0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c85c:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_38;
      if (cVar6 == '\0') goto LAB_00d5c85c;
    }
    if (*pdVar14 != 0.0) {
      uVar8 = FUN_00dd6d30();
      *(undefined2 *)pdVar17 = uVar8;
      goto LAB_00d5c991;
    }
    goto LAB_00d5c87a;
  case 0x5e:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_50, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4348 = &DAT_028a7cd0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5b9fa:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_18;
      if (cVar6 == '\0') goto LAB_00d5b9fa;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00dd6dc0();
    goto LAB_00d5c98d;
  case 0x62:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_05;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      uVar7 = FUN_00d45ad0();
      *(undefined1 *)pdVar17 = uVar7;
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_55, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c2c9:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_25;
      if (cVar6 == '\0') goto LAB_00d5c2c9;
    }
    lVar9 = DAT_0277ddb8;
    if (*pdVar14 != 0.0) {
      plVar10 = (longlong *)*unaff_RSI;
      if (DAT_0277ddb8 != 0) {
        FUN_00e31530(pdVar14,0);
      }
      local_250 = lVar9;
      local_248 = '\x01';
      cVar6 = (**(code **)(*plVar10 + 0x50))();
      lVar9 = DAT_0275e480;
      uVar7 = 1;
      if (cVar6 == '\0') {
        plVar10 = (longlong *)*unaff_RSI;
        if (DAT_0275e480 != 0) {
          FUN_00e31530(extraout_XMM0_Da_26,0);
        }
        local_240 = lVar9;
        local_238 = '\x01';
        cVar6 = (**(code **)(*plVar10 + 0x50))();
        lVar9 = DAT_0277ddc0;
        uVar7 = 1;
        if (cVar6 == '\0') {
          plVar10 = (longlong *)*unaff_RSI;
          if (DAT_0277ddc0 != 0) {
            FUN_00e31530(extraout_XMM0_Da_27,0);
          }
          local_230 = lVar9;
          local_228 = '\x01';
          cVar6 = (**(code **)(*plVar10 + 0x50))();
          lVar9 = DAT_027e3c48;
          uVar7 = 1;
          if (cVar6 == '\0') {
            plVar10 = (longlong *)*unaff_RSI;
            if (DAT_027e3c48 != 0) {
              FUN_00e31530(extraout_XMM0_Da_28,0);
            }
            local_220 = lVar9;
            local_218 = '\x01';
            uVar7 = (**(code **)(*plVar10 + 0x50))();
            if ((local_218 != '\0') && (local_220 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_228 != '\0') && (local_230 != 0)) {
            FUN_00d50b20();
          }
        }
        if ((local_238 != '\0') && (local_240 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_248 != '\0') && (local_250 != 0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)pdVar17 = uVar7;
      goto LAB_00d5c991;
    }
    break;
  case 99:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_11;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 == 0.0) {
      plVar10 = (longlong *)*unaff_RSI;
      if ((DAT_026fd0c0 == '\0') &&
         (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_59, iVar15 != 0)) {
        if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
          DAT_028a7cd0 = "GNObject";
          _DAT_028a7cd8 = 0x10;
          _DAT_028a7ce0 = FUN_00d4ff10;
          _DAT_028a7ce8 = 0;
          uRam00000000028a7cf0 = 0;
          _DAT_028a7cf8 = 0;
          uRam00000000028a7d00 = 0;
          _DAT_028a7d08 = 0;
          uRam00000000028a7d10 = 0;
          _DAT_028a7d18 = 0;
          uRam00000000028a7d20 = 0;
          _DAT_028a7d28 = 0;
          uRam00000000028a7d30 = 0;
          _DAT_028a7d38 = 0;
          uRam00000000028a7d40 = 0;
          _DAT_028a7d48 = 0;
          uRam00000000028a7d50 = 0;
          _DAT_028a7d58 = 0;
          uRam00000000028a7d60 = 0;
          _DAT_028a7d68 = 0;
          uRam00000000028a7d70 = 0;
          _DAT_028a7d78 = 0;
          uRam00000000028a7d80 = 0;
          _DAT_028a7d84 = 0;
          uRam00000000028a7d88 = 0;
          uRam00000000028a7d8c = 0;
          ___cxa_guard_release();
        }
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e58 = &DAT_028a7cd0;
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
        uVar21 = ___cxa_guard_release();
      }
      if (plVar10 == (longlong *)0x0) {
LAB_00d5c604:
        pdVar14 = (double *)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pdVar14 = unaff_RSI;
        uVar21 = extraout_XMM0_Da_32;
        if (cVar6 == '\0') goto LAB_00d5c604;
      }
      if (*pdVar14 == 0.0) break;
      uVar7 = FUN_00d8d560();
    }
    else {
      uVar7 = FUN_00d45870();
    }
    *(undefined1 *)pdVar17 = uVar7;
    goto LAB_00d5c991;
  case 100:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_07;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      dVar11 = (double)FUN_00d45bc0();
      *pdVar17 = dVar11;
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_57, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c532:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_30;
      if (cVar6 == '\0') goto LAB_00d5c532;
    }
    if (*pdVar14 != 0.0) {
      fVar20 = (float)FUN_00d8d7b0();
      *pdVar17 = (double)fVar20;
      goto LAB_00d5c991;
    }
    break;
  case 0x65:
  case 0x69:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_00;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d460c0();
      *(undefined4 *)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_52, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5bc3c:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_22;
      if (cVar6 == '\0') goto LAB_00d5bc3c;
    }
    dVar11 = *pdVar14;
    if (dVar11 != 0.0) {
      uVar21 = FUN_00c77cd0();
      local_258 = '\0';
      local_260 = dVar11;
      cVar6 = FUN_00c7b320(uVar21,pdVar17);
      if ((local_258 != '\0') && (local_260 != 0.0)) {
        FUN_00d50b20();
      }
      if ((local_80[0] != '\0') && (local_88 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        uVar21 = FUN_00d8d560();
        *(undefined4 *)pdVar17 = uVar21;
      }
      goto LAB_00d5c991;
    }
    break;
  case 0x66:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_17;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d459e0();
      *(undefined4 *)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_64, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c7e0:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_37;
      if (cVar6 == '\0') goto LAB_00d5c7e0;
    }
    if (*pdVar14 != 0.0) {
      uVar21 = FUN_00d8d7b0();
      *(undefined4 *)pdVar17 = uVar21;
      goto LAB_00d5c991;
    }
    break;
  case 0x6c:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_21;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 == 0.0) {
      plVar10 = (longlong *)*unaff_RSI;
      if ((DAT_026fd0c0 == '\0') &&
         (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_67, iVar15 != 0)) {
        if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
          DAT_028a7cd0 = "GNObject";
          _DAT_028a7cd8 = 0x10;
          _DAT_028a7ce0 = FUN_00d4ff10;
          _DAT_028a7ce8 = 0;
          uRam00000000028a7cf0 = 0;
          _DAT_028a7cf8 = 0;
          uRam00000000028a7d00 = 0;
          _DAT_028a7d08 = 0;
          uRam00000000028a7d10 = 0;
          _DAT_028a7d18 = 0;
          uRam00000000028a7d20 = 0;
          _DAT_028a7d28 = 0;
          uRam00000000028a7d30 = 0;
          _DAT_028a7d38 = 0;
          uRam00000000028a7d40 = 0;
          _DAT_028a7d48 = 0;
          uRam00000000028a7d50 = 0;
          _DAT_028a7d58 = 0;
          uRam00000000028a7d60 = 0;
          _DAT_028a7d68 = 0;
          uRam00000000028a7d70 = 0;
          _DAT_028a7d78 = 0;
          uRam00000000028a7d80 = 0;
          _DAT_028a7d84 = 0;
          uRam00000000028a7d88 = 0;
          uRam00000000028a7d8c = 0;
          ___cxa_guard_release();
        }
        DAT_026d5e40 = "GNString";
        _DAT_026d5e48 = 0x40;
        _DAT_026d5e50 = FUN_0005d920;
        _DAT_026d5e58 = &DAT_028a7cd0;
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
        uVar21 = ___cxa_guard_release();
      }
      if (plVar10 == (longlong *)0x0) {
LAB_00d5c977:
        pdVar14 = (double *)&DAT_02802688;
      }
      else {
        (**(code **)(*plVar10 + 0x360))();
        cVar6 = FUN_00e85ea0();
        pdVar14 = unaff_RSI;
        uVar21 = extraout_XMM0_Da_41;
        if (cVar6 == '\0') goto LAB_00d5c977;
      }
      if (*pdVar14 == 0.0) break;
      iVar15 = FUN_00d8d560();
      dVar11 = (double)(longlong)iVar15;
    }
    else {
      dVar11 = (double)FUN_00d45790();
    }
    goto LAB_00d5c98d;
  case 0x71:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_51, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5ba9c:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_20;
      if (cVar6 == '\0') goto LAB_00d5ba9c;
    }
    if (*pdVar14 != 0.0) {
      local_1b8 = '\0';
      local_1c0 = *pdVar14;
      dVar11 = (double)FUN_00d971f0();
      *pdVar17 = dVar11;
      if ((local_1b8 != '\0') && (local_1c0 != 0.0)) {
        FUN_00d50b20();
      }
      goto LAB_00d5c991;
    }
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_0270c850 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_66, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      _DAT_026d4330 = "GNValue";
      _DAT_026d4338 = 0x18;
      _DAT_026d4340 = FUN_00053cb0;
      _DAT_026d4348 = &DAT_028a7cd0;
      _DAT_026d4350 = 0;
      uRam00000000026d4358 = 0;
      _DAT_026d4360 = 0;
      uRam00000000026d4368 = 0;
      _DAT_026d4370 = 0;
      uRam00000000026d4378 = 0;
      _DAT_026d4380 = 0;
      uRam00000000026d4388 = 0;
      _DAT_026d4390 = 0;
      uRam00000000026d4398 = 0;
      _DAT_026d43a0 = 0;
      uRam00000000026d43a8 = 0;
      _DAT_026d43b0 = 0;
      uRam00000000026d43b8 = 0;
      _DAT_026d43c0 = 0;
      uRam00000000026d43c8 = 0;
      _DAT_026d43d0 = 0;
      uRam00000000026d43d8 = 0;
      _DAT_026d43e0 = 0;
      uRam00000000026d43e8 = 0;
      _DAT_026d43f0 = 0;
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c90c:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_40;
      if (cVar6 == '\0') goto LAB_00d5c90c;
    }
    if (*pdVar14 == 0.0) break;
    dVar11 = (double)FUN_00dd6320();
LAB_00d5c98d:
    *pdVar17 = dVar11;
LAB_00d5c991:
    if (local_34 != '\0') {
      (**(code **)(*unaff_RDI + 0x158))();
    }
    return;
  case 0x73:
    plVar10 = (longlong *)*unaff_RSI;
    uVar21 = FUN_00d68120();
    if (plVar10 == (longlong *)0x0) {
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_04;
      if (cVar6 == '\0') {
        pdVar14 = (double *)&DAT_02802688;
      }
    }
    if (*pdVar14 != 0.0) goto LAB_00d5c815;
LAB_00d5c87a:
    plVar10 = (longlong *)*unaff_RSI;
    if ((DAT_026fd0c0 == '\0') &&
       (iVar15 = ___cxa_guard_acquire(), uVar21 = extraout_XMM0_Da_53, iVar15 != 0)) {
      if ((DAT_028a7d98 == '\0') && (iVar15 = ___cxa_guard_acquire(), iVar15 != 0)) {
        DAT_028a7cd0 = "GNObject";
        _DAT_028a7cd8 = 0x10;
        _DAT_028a7ce0 = FUN_00d4ff10;
        _DAT_028a7ce8 = 0;
        uRam00000000028a7cf0 = 0;
        _DAT_028a7cf8 = 0;
        uRam00000000028a7d00 = 0;
        _DAT_028a7d08 = 0;
        uRam00000000028a7d10 = 0;
        _DAT_028a7d18 = 0;
        uRam00000000028a7d20 = 0;
        _DAT_028a7d28 = 0;
        uRam00000000028a7d30 = 0;
        _DAT_028a7d38 = 0;
        uRam00000000028a7d40 = 0;
        _DAT_028a7d48 = 0;
        uRam00000000028a7d50 = 0;
        _DAT_028a7d58 = 0;
        uRam00000000028a7d60 = 0;
        _DAT_028a7d68 = 0;
        uRam00000000028a7d70 = 0;
        _DAT_028a7d78 = 0;
        uRam00000000028a7d80 = 0;
        _DAT_028a7d84 = 0;
        uRam00000000028a7d88 = 0;
        uRam00000000028a7d8c = 0;
        ___cxa_guard_release();
      }
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e58 = &DAT_028a7cd0;
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
      uVar21 = ___cxa_guard_release();
    }
    if (plVar10 == (longlong *)0x0) {
LAB_00d5c8b2:
      pdVar14 = (double *)&DAT_02802688;
    }
    else {
      (**(code **)(*plVar10 + 0x360))();
      cVar6 = FUN_00e85ea0();
      pdVar14 = unaff_RSI;
      uVar21 = extraout_XMM0_Da_39;
      if (cVar6 == '\0') goto LAB_00d5c8b2;
    }
    if (*pdVar14 != 0.0) {
      uVar8 = FUN_00d8d560();
      *(undefined2 *)pdVar17 = uVar8;
      goto LAB_00d5c991;
    }
  }
switchD_00d5afda_caseD_2b:
joined_r0x00d5b3a4:
  if (local_34 != '\0') {
    uVar21 = (**(code **)(*unaff_RDI + 0x158))();
  }
  lVar9 = DAT_0277ddb0;
  if (DAT_0277ddb0 != 0) {
    uVar21 = FUN_00e31530(uVar21,0);
  }
  lVar5 = DAT_0277d7d8;
  local_150 = lVar9;
  local_148 = '\x01';
  if ((longlong *)*unaff_RSI == (longlong *)0x0) {
    local_a0 = 0;
    if (DAT_0277d7d8 != 0) {
      FUN_00e31530(uVar21,0);
    }
    local_a8 = lVar5;
    local_a0 = '\x01';
  }
  else {
    (**(code **)(*(longlong *)*unaff_RSI + 400))();
  }
  local_100 = (longlong)local_58;
  local_120 = local_a8;
  uVar21 = FUN_00083ea0(2,&local_100);
  FUN_00cc7b40(uVar21,&local_88);
  local_88 = (longlong *)&DAT_0253d630;
  if ((local_60 != '\0') && (CONCAT44(uStack_64,local_68) != 0)) {
    FUN_00d50b20();
  }
  local_88 = &DAT_024c5048;
  if (((char)local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (local_148 == '\0') {
    return;
  }
  if (local_150 == 0) {
    return;
  }
  FUN_00d50b20();
  return;
}




// ============================================================
// @001c36b0 — 3837 bytes
// str: ""bool""
// str: ""GNObject""
// str: ""GNQualifier""
// str: ""GNClassDescription""
// str: ""GNEditingContext""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001c36b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00006550();
  *unaff_RDI = &DAT_0267f0d0;
  unaff_RDI[2] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c49e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  puVar4 = unaff_RDI + 3;
  unaff_RDI[3] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4ad0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  unaff_RDI[4] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4bc0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[5] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4cb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNAssociation");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c4da0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  *(undefined1 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026eb918 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026eb8e0 = FUN_00081d60();
        _DAT_026eb8d8 = "_emtpySelectionAllowed";
        _DAT_026eb8e8 = 0;
        _DAT_026eb8f0 = 0x6200;
        _DAT_026eb8f8 = "bool";
        _DAT_026eb900 = 0;
        uRam00000000026eb908 = 0;
        _DAT_026eb910 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x39) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026eb960 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026eb928 = FUN_00081d60();
        _DAT_026eb920 = "_autoselectNewObjects";
        _DAT_026eb930 = 0;
        _DAT_026eb938 = 0x6200;
        _DAT_026eb940 = "bool";
        _DAT_026eb948 = 0;
        uRam00000000026eb950 = 0;
        _DAT_026eb958 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3a) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026eb9a8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026eb970 = FUN_00081d60();
        _DAT_026eb968 = "_autoselectObjects";
        _DAT_026eb978 = 0;
        _DAT_026eb980 = 0x6200;
        _DAT_026eb988 = "bool";
        _DAT_026eb990 = 0;
        uRam00000000026eb998 = 0;
        _DAT_026eb9a0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_001c4e90();
  unaff_RDI[9] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5060();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  unaff_RDI[10] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5150();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5240();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNQualifier");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5330();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext");
  }
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5420();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNSortOrdering");
  }
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebbb0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebb78 = FUN_00081d60();
        _DAT_026ebb70 = "_autofetchEnabled";
        _DAT_026ebb80 = 0;
        _DAT_026ebb88 = 0x6200;
        _DAT_026ebb90 = "bool";
        _DAT_026ebb98 = 0;
        uRam00000000026ebba0 = 0;
        _DAT_026ebba8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5510();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObjectProvider");
  }
  *(undefined1 *)(unaff_RDI + 0x10) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebc40 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebc08 = FUN_00081d60();
        _DAT_026ebc00 = "_fetchesOnDemand";
        _DAT_026ebc10 = 0;
        _DAT_026ebc18 = 0x6201;
        _DAT_026ebc20 = "bool";
        _DAT_026ebc28 = 0;
        uRam00000000026ebc30 = 0;
        _DAT_026ebc38 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x11] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c5600();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNMasterDetailAssoc");
  }
  unaff_RDI[0x12] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c56f0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNView");
  }
  *(undefined1 *)(unaff_RDI + 0x13) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebd18 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebce0 = FUN_00081d60();
        _DAT_026ebcd8 = "_selectionDidUpdateAssociations";
        _DAT_026ebce8 = 0;
        _DAT_026ebcf0 = 0x6201;
        _DAT_026ebcf8 = "bool";
        _DAT_026ebd00 = 0;
        uRam00000000026ebd08 = 0;
        _DAT_026ebd10 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x99) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebd60 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebd28 = FUN_00081d60();
        _DAT_026ebd20 = "_isAddingObjectsEnabled";
        _DAT_026ebd30 = 0;
        _DAT_026ebd38 = 0x6200;
        _DAT_026ebd40 = "bool";
        _DAT_026ebd48 = 0;
        uRam00000000026ebd50 = 0;
        _DAT_026ebd58 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9a) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebda8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebd70 = FUN_00081d60();
        _DAT_026ebd68 = "_isRemovingObjectsEnabled";
        _DAT_026ebd78 = 0;
        _DAT_026ebd80 = 0x6200;
        _DAT_026ebd88 = "bool";
        _DAT_026ebd90 = 0;
        uRam00000000026ebd98 = 0;
        _DAT_026ebda0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9b) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebdf0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebdb8 = FUN_00081d60();
        _DAT_026ebdb0 = "_revertsObjectsByKeepingGlobalIDs";
        _DAT_026ebdc0 = 0;
        _DAT_026ebdc8 = 0x6200;
        _DAT_026ebdd0 = "bool";
        _DAT_026ebdd8 = 0;
        uRam00000000026ebde0 = 0;
        _DAT_026ebde8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x9c) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebe38 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebe00 = FUN_00081d60();
        _DAT_026ebdf8 = "_revertsObjectsByRefetching";
        _DAT_026ebe08 = 0;
        _DAT_026ebe10 = 0x6200;
        _DAT_026ebe18 = "bool";
        _DAT_026ebe20 = 0;
        uRam00000000026ebe28 = 0;
        _DAT_026ebe30 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x14] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c57e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNGlobalID");
  }
  *(undefined4 *)(unaff_RDI + 0x15) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebec8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebe90 = FUN_00081d60();
        _DAT_026ebe88 = "_lastSelectedRow";
        _DAT_026ebe98 = 0;
        _DAT_026ebea0 = 0x6901;
        _DAT_026ebea8 = "GNInt";
        _DAT_026ebeb0 = 0;
        uRam00000000026ebeb8 = 0;
        _DAT_026ebec0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xac) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebf10 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebed8 = FUN_00081d60();
        _DAT_026ebed0 = "_changeKindMask";
        _DAT_026ebee0 = 0;
        _DAT_026ebee8 = 0x6901;
        _DAT_026ebef0 = "GNInt";
        _DAT_026ebef8 = 0;
        uRam00000000026ebf00 = 0;
        _DAT_026ebf08 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)(unaff_RDI + 0x16) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebf58 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebf20 = FUN_00081d60();
        _DAT_026ebf18 = "_currentBatchIndex";
        _DAT_026ebf28 = 0;
        _DAT_026ebf30 = 0x6901;
        _DAT_026ebf38 = "GNInt";
        _DAT_026ebf40 = 0;
        uRam00000000026ebf48 = 0;
        _DAT_026ebf50 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0xb4) = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ebfa0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ebf68 = FUN_00081d60();
        _DAT_026ebf60 = "_numberOfObjectsPerBatch";
        _DAT_026ebf70 = 0;
        _DAT_026ebf78 = 0x6900;
        _DAT_026ebf80 = "GNInt";
        _DAT_026ebf88 = 0;
        uRam00000000026ebf90 = 0;
        _DAT_026ebf98 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0x17] = 0;
  lVar2 = FUN_00081d60();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_001c58d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  return;
}




// ============================================================
// @00d630e0 — 3052 bytes
// ============================================================

void FUN_00d630e0(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  longlong local_268;
  undefined1 local_260;
  longlong local_258;
  undefined1 local_250;
  longlong *local_248;
  char local_240;
  longlong local_238;
  undefined8 local_230;
  undefined4 local_228;
  longlong local_220;
  char local_218;
  longlong local_210;
  char local_208;
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
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_58;
  char local_50 [8];
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  ulonglong uVar9;
  
  local_220 = *unaff_RSI;
  local_218 = '\0';
  uVar12 = (**(code **)(*unaff_RDI + 600))(param_1,&local_220);
  plVar3 = local_248;
  if (local_240 == '\0') {
    if (((local_248 != (longlong *)0x0) && (FUN_00e31530(uVar12,0), local_240 != '\0')) &&
       (local_248 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_240 = '\0';
  }
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    local_240 = 0;
    local_248 = (longlong *)0x0;
    local_238 = (longlong)plVar3;
    local_228 = 0;
    local_230 = 0;
    if (0 < *(int *)((longlong)plVar3 + 0xc)) {
      lVar11 = 0;
      do {
        plVar1 = *(longlong **)(*(longlong *)((longlong)plVar3 + 0x10) + lVar11 * 8);
        local_248 = plVar1;
        FUN_00d74120();
        local_40[0] = local_50[0];
        pcVar7 = local_50;
        if (local_50[0] == '\0') {
          pcVar7 = local_40;
        }
        *pcVar7 = '\0';
        if ((local_50[0] != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        local_48 = local_58;
        cVar5 = (**(code **)(*plVar1 + 0x368))();
        if (cVar5 == '\0') {
          cVar5 = FUN_00d77e10();
          plVar2 = (longlong *)*unaff_RSI;
          if (cVar5 == '\0') {
            uVar12 = (**(code **)(*unaff_RDI + 0x210))(extraout_XMM0_Qa,plVar1);
            local_68 = 0;
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_68 = '\x01';
            local_70 = local_58;
            local_f0 = local_48;
            local_e8 = '\0';
            (**(code **)(*plVar2 + 0x4f8))(uVar12,&local_f0);
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            uVar12 = (**(code **)(*unaff_RDI + 0x210))(extraout_XMM0_Qa,plVar1);
            local_78 = 0;
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_78 = '\x01';
            local_80 = local_58;
            local_100 = local_48;
            local_f8 = '\0';
            (**(code **)(*plVar2 + 0x4f0))(uVar12,&local_100);
            if ((local_f8 != '\0') && (local_100 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          goto LAB_00d637d0;
        }
        cVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x388))();
        if (cVar5 == '\0') {
          FUN_00c77cd0();
          local_38[0] = local_50[0];
          pcVar7 = local_50;
          if (local_50[0] == '\0') {
            pcVar7 = local_38;
          }
          *pcVar7 = '\0';
          lVar4 = local_48;
          if ((local_50[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          cVar5 = FUN_00c7b220();
          uVar12 = extraout_XMM0_Qa_00;
          if (cVar5 == 'e') {
            uVar12 = FUN_00c7b2d0();
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              uVar12 = FUN_00d50b20();
            }
            if (local_58 == 0) goto LAB_00d63447;
            plVar1 = (longlong *)*unaff_RSI;
            local_130 = lVar4;
            local_128 = '\0';
            uVar12 = (**(code **)(*unaff_RDI + 0x1f8))(uVar12,&local_130);
            local_90 = local_e0;
            local_88 = 0;
            if (local_d8 == '\0') {
              if (local_e0 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_d8 = '\0';
            }
            local_88 = '\x01';
            uVar12 = FUN_00c7b3d0(uVar12,&local_90);
            if (local_50[0] == '\0') {
              if (local_58 != 0) {
                uVar12 = FUN_00e31530(uVar12,0);
              }
            }
            else {
              local_50[0] = '\0';
            }
            local_120 = local_48;
            local_118 = '\0';
            (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_120);
            if ((local_118 != '\0') && (local_120 != 0)) {
              FUN_00d50b20();
            }
            if (local_58 != 0) {
              FUN_00d50b20();
            }
            if ((local_50[0] != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if ((local_88 != '\0') && (local_90 != 0)) {
              FUN_00d50b20();
            }
            if ((local_d8 != '\0') && (local_e0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_128 != '\0') && (local_130 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
LAB_00d63447:
            plVar1 = (longlong *)*unaff_RSI;
            local_258 = lVar4;
            local_250 = 0;
            uVar12 = FUN_00d603c0(uVar12,&local_258);
            if ((local_50[0] == '\0') && (local_58 != 0)) {
              uVar12 = FUN_00e31530(uVar12,0);
            }
            local_110 = local_48;
            local_108 = '\0';
            (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_110);
            if ((local_108 != '\0') && (local_110 != 0)) {
              FUN_00d50b20();
            }
            if (local_58 != 0) {
              FUN_00d50b20();
            }
          }
          if ((local_38[0] != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00d637d0;
        }
        puVar6 = (undefined8 *)(**(code **)(*unaff_RDI + 0x218))();
        uVar8 = (int)*(char *)(plVar1[0xc] + 0x19) - 0x43;
        uVar9 = (ulonglong)uVar8;
        uVar10 = uVar9;
        if (uVar8 < 0x2f) {
          uVar10 = (longlong)&switchD_00d63280::switchdataD_00d644fc +
                   (longlong)(int)(&switchD_00d63280::switchdataD_00d644fc)[uVar9];
          switch(uVar9) {
          case 0:
            local_190 = local_48;
            local_188 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4e0))(uVar10,&local_190);
            if ((local_188 != '\0') && (local_190 != 0)) {
              FUN_00d50b20();
            }
            break;
          default:
            goto switchD_00d63280_caseD_1;
          case 2:
            local_1a0 = local_48;
            local_198 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4c8))(*puVar6,puVar6[1]);
            if ((local_198 != '\0') && (local_1a0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 6:
            local_200 = local_48;
            local_1f8 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x498))(uVar10,&local_200);
            if ((local_1f8 != '\0') && (local_200 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0xd:
            local_1d0 = local_48;
            local_1c8 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4d8))(*puVar6);
            if ((local_1c8 != '\0') && (local_1d0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0xf:
            local_1b0 = local_48;
            local_1a8 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4c0))(*puVar6,puVar6[1]);
            if ((local_1a8 != '\0') && (local_1b0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x10:
            local_1c0 = local_48;
            local_1b8 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4d0))(*puVar6);
            if ((local_1b8 != '\0') && (local_1c0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x1f:
            local_180 = local_48;
            local_178 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x488))(uVar10,&local_180);
            if ((local_178 != '\0') && (local_180 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x20:
            local_210 = local_48;
            local_208 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x490))(uVar10,&local_210);
            if ((local_208 != '\0') && (local_210 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x21:
            local_1e0 = local_48;
            local_1d8 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4b8))(*puVar6);
            if ((local_1d8 != '\0') && (local_1e0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x22:
          case 0x26:
            local_170 = local_48;
            local_168 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4a0))(uVar10,&local_170);
            if ((local_168 != '\0') && (local_170 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x23:
            local_1f0 = local_48;
            local_1e8 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4b0))(*(undefined4 *)puVar6);
            if ((local_1e8 != '\0') && (local_1f0 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x29:
            local_160 = local_48;
            local_158 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4a8))(uVar10,&local_160);
            if ((local_158 != '\0') && (local_160 != 0)) {
              FUN_00d50b20();
            }
            break;
          case 0x2e:
            local_150 = local_48;
            local_148 = '\0';
            (**(code **)(*(longlong *)*unaff_RSI + 0x4e8))(uVar10,&local_150);
            if ((local_148 != '\0') && (local_150 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
switchD_00d63280_caseD_1:
          plVar1 = (longlong *)*unaff_RSI;
          local_268 = local_48;
          local_260 = 0;
          uVar12 = FUN_00d603c0(uVar10,&local_268);
          if ((local_50[0] == '\0') && (local_58 != 0)) {
            uVar12 = FUN_00e31530(uVar12,0);
          }
          local_140 = local_48;
          local_138 = '\0';
          (**(code **)(*plVar1 + 0x4f0))(uVar12,&local_140);
          if ((local_138 != '\0') && (local_140 != 0)) {
            FUN_00d50b20();
          }
          if (local_58 != 0) {
            FUN_00d50b20();
          }
        }
LAB_00d637d0:
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar11 = lVar11 + 1;
        local_230 = CONCAT44(local_230._4_4_,(int)lVar11);
      } while ((int)lVar11 < *(int *)((longlong)plVar3 + 0xc));
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00d61ea0 — 2607 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d628cb) */
/* WARNING: Removing unreachable block (ram,0x00d628db) */
/* WARNING: Removing unreachable block (ram,0x00d61fdb) */
/* WARNING: Removing unreachable block (ram,0x00d61fe4) */

void FUN_00d61ea0(undefined4 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_208;
  char local_200;
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
  longlong local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined1 local_51;
  longlong local_40;
  undefined4 uStack_38;
  
  local_1e0 = *unaff_RSI;
  local_1d8 = '\0';
  uVar7 = (**(code **)(*unaff_RDI + 600))(param_1,&local_1e0);
  if ((local_200 == '\0') && (local_208 != 0)) {
    FUN_00e31530(uVar7,0);
  }
  if ((local_1d8 != '\0') && (local_1e0 != 0)) {
    FUN_00d50b20();
  }
  local_51 = (**(code **)(*(longlong *)*unaff_RSI + 0x398))();
  if (local_208 != 0) {
    if (0 < *(int *)(local_208 + 0xc)) {
      lVar6 = 0;
      do {
        lVar2 = local_40;
        plVar1 = *(longlong **)(*(longlong *)(local_208 + 0x10) + lVar6 * 8);
        uVar7 = FUN_00d74120();
        if (((char)uStack_38 == '\0') && (local_40 != 0)) {
          FUN_00e31530(uVar7,0);
        }
        local_1d0 = local_40;
        local_1c8 = '\0';
        cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x590))();
        if ((local_1c8 != '\0') && (local_1d0 != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*plVar1 + 0x368))();
          if (cVar3 == '\0') {
            local_b0 = local_40;
            local_a8 = '\0';
            uVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da,&local_b0);
            local_60 = 0;
            if ((char)uStack_38 == '\0') {
              if (local_40 != 0) {
                FUN_00e31530(uVar7,0);
              }
            }
            else {
              uStack_38 = 0;
            }
            local_60 = '\x01';
            local_a0 = local_40;
            local_98 = '\0';
            local_68 = local_a0;
            (**(code **)(*unaff_RDI + 0x1f0))(local_51,&local_a0,0);
            if ((local_98 != '\0') && (local_a0 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
            if (((char)uStack_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_a8 != '\0') && (local_b0 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            cVar3 = (**(code **)(*(longlong *)*unaff_RSI + 0x390))();
            if (cVar3 == '\0') {
              local_d0 = local_40;
              local_c8 = '\0';
              uVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x578))(extraout_XMM0_Da_00,&local_d0);
              local_70 = 0;
              if ((char)uStack_38 == '\0') {
                if (local_40 != 0) {
                  FUN_00e31530(uVar7,0);
                }
              }
              else {
                uStack_38 = 0;
              }
              local_70 = '\x01';
              local_c0 = local_40;
              local_b8 = '\0';
              local_78 = local_c0;
              (**(code **)(*unaff_RDI + 0x1f0))(0);
              if ((local_b8 != '\0') && (local_c0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if (((char)uStack_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c8 != '\0') && (local_d0 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              uVar7 = local_40._4_4_;
              switch(*(undefined1 *)(plVar1[0xc] + 0x19)) {
              case 0x43:
                local_140 = local_40;
                local_138 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x568))();
                if ((local_138 != '\0') && (local_140 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              default:
                local_f0 = local_40;
                local_e8 = '\0';
                uVar7 = (**(code **)(*(longlong *)*unaff_RSI + 0x578))
                                  (extraout_XMM0_Da_00,&local_f0);
                local_80 = 0;
                if ((char)uStack_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00e31530(uVar7,0);
                  }
                }
                else {
                  uStack_38 = 0;
                }
                local_80 = '\x01';
                local_e0 = local_40;
                local_d8 = '\0';
                local_88 = local_e0;
                (**(code **)(*unaff_RDI + 0x1f0))();
                if ((local_d8 != '\0') && (local_e0 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_80 != '\0') && (local_88 != 0)) {
                  FUN_00d50b20();
                }
                if (((char)uStack_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_e8 != '\0') && (local_f0 != 0)) {
                  FUN_00d50b20();
                }
                break;
              case 0x45:
                local_150 = local_40;
                local_148 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x550))();
                uStack_38 = (undefined4)param_2;
                if ((local_148 != '\0') && (local_150 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x49:
                local_1b0 = local_40;
                local_1a8 = '\0';
                uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x520))();
                if ((local_1a8 != '\0') && (local_1b0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,uVar5);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x50:
                local_180 = local_40;
                local_178 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x560))();
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x52:
                local_160 = local_40;
                local_158 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x548))();
                uStack_38 = (undefined4)param_2;
                if ((local_158 != '\0') && (local_160 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x53:
                local_170 = local_40;
                local_168 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x558))();
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x62:
                local_130 = local_40;
                local_128 = '\0';
                uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x510))();
                if ((local_128 != '\0') && (local_130 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT71(local_40._1_7_,uVar4);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 99:
                local_1c0 = local_40;
                local_1b8 = '\0';
                uVar4 = (**(code **)(*(longlong *)*unaff_RSI + 0x518))();
                if ((local_1b8 != '\0') && (local_1c0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT71(local_40._1_7_,uVar4);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 100:
                local_190 = local_40;
                local_188 = '\0';
                local_90 = (**(code **)(*(longlong *)*unaff_RSI + 0x540))();
                if ((local_188 != '\0') && (local_190 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = local_90;
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x65:
              case 0x69:
                local_120 = local_40;
                local_118 = '\0';
                uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x528))();
                if ((local_118 != '\0') && (local_120 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,uVar5);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x66:
                local_1a0 = local_40;
                local_198 = '\0';
                uVar5 = (**(code **)(*(longlong *)*unaff_RSI + 0x538))();
                local_90 = CONCAT44(local_90._4_4_,uVar5);
                if ((local_198 != '\0') && (local_1a0 != 0)) {
                  FUN_00d50b20();
                }
                local_40 = CONCAT44(uVar7,(undefined4)local_90);
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x6c:
                local_110 = local_40;
                local_108 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x530))();
                if ((local_108 != '\0') && (local_110 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
                break;
              case 0x71:
                local_100 = local_40;
                local_f8 = '\0';
                local_40 = (**(code **)(*(longlong *)*unaff_RSI + 0x570))();
                if ((local_f8 != '\0') && (local_100 != 0)) {
                  FUN_00d50b20();
                }
                (**(code **)(*unaff_RDI + 0x208))();
              }
            }
          }
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < *(int *)(local_208 + 0xc));
    }
    FUN_00d74c70();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00d6a330 — 2323 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d6a98b) */
/* WARNING: Removing unreachable block (ram,0x00d6a997) */
/* WARNING: Removing unreachable block (ram,0x00d6a775) */
/* WARNING: Removing unreachable block (ram,0x00d6a781) */
/* WARNING: Removing unreachable block (ram,0x00d6aad1) */
/* WARNING: Removing unreachable block (ram,0x00d6aadd) */

longlong * FUN_00d6a330(void)

{
  char cVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  int iVar13;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar14;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  char local_e0;
  longlong local_d8;
  undefined8 local_d0;
  int local_c8;
  longlong local_98;
  char local_90;
  longlong local_88;
  undefined8 *local_80;
  char local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  uint local_4c;
  longlong local_48;
  byte local_31;
  
  if (*unaff_RSI == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    cVar1 = (char)unaff_RSI[1];
    lVar14 = 0;
joined_r0x00d6ab28:
    if (cVar1 == '\0') {
      if (lVar14 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar14;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      *unaff_RDI = lVar14;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
    }
    return unaff_RDI;
  }
  iVar7 = FUN_00d8c7a0();
  lVar14 = DAT_02773310;
  if (iVar7 == 0) {
    lVar14 = *unaff_RSI;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    cVar1 = (char)unaff_RSI[1];
    goto joined_r0x00d6ab28;
  }
  if (DAT_02773310 != 0) {
    FUN_00d50b00();
  }
  lVar9 = DAT_02773318;
  if (DAT_02773318 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_02773300;
  if (DAT_02773300 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_02773308;
  if (DAT_02773308 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_027732f8;
  if (DAT_027732f8 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar9;
  local_110 = lVar4;
  local_108 = lVar5;
  local_100 = lVar3;
  FUN_007f7a00(&local_110,&local_118,&local_108,&local_100);
  FUN_000b6830();
  local_70 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  local_e8 = &DAT_02511780;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  lVar14 = DAT_027845f0;
  if (DAT_027845f0 != 0) {
    FUN_00d50b00();
  }
  lVar9 = DAT_0277e578;
  if (DAT_0277e578 != 0) {
    FUN_00d50b00();
  }
  lVar4 = DAT_0277e580;
  if (DAT_0277e580 != 0) {
    FUN_00d50b00();
  }
  lVar5 = DAT_0277e588;
  if (DAT_0277e588 != 0) {
    FUN_00d50b00();
  }
  lVar3 = DAT_0277e590;
  if (DAT_0277e590 != 0) {
    FUN_00d50b00();
  }
  local_118 = lVar9;
  local_110 = lVar4;
  local_108 = lVar5;
  local_100 = lVar3;
  FUN_007f7a00(&local_110,&local_118,&local_108,&local_100);
  FUN_000b6830();
  local_48 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != 0) && (FUN_00d50b00(), local_60 != '\0')) && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  local_e8 = &DAT_02511780;
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  FUN_007f76c0();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 != 0) {
    FUN_00d50b20();
  }
  pcVar2 = DAT_025795c0;
  local_58 = (undefined8 *)0x0;
  local_f0 = 0;
  while( true ) {
    FUN_00d8c7a0();
    uVar8 = FUN_00e7b4e0();
    iVar7 = FUN_00d8c7a0();
    if ((iVar7 < 1) || (local_70 == 0)) break;
    local_f8 = uVar8 >> 0x20;
    local_e0 = '\0';
    local_e8 = (undefined8 *)0x0;
    local_d8 = local_70;
    local_d0 = 0xffffffff;
    local_c8 = 0;
    local_d0._4_4_ = 0;
    lVar14 = 0;
    local_4c = 0;
    while( true ) {
      iVar7 = (int)uVar8;
      if (local_d0._4_4_ != 0) {
        if (local_d0._4_4_ < 1) {
          iVar13 = -local_d0._4_4_;
        }
        else {
          iVar13 = (int)local_d0 - local_d0._4_4_;
          local_d0 = CONCAT44(local_d0._4_4_,iVar13);
          FUN_00d23690();
          local_c8 = local_c8 + local_d0._4_4_;
          iVar13 = 0;
        }
        local_d0 = CONCAT44(iVar13,(int)local_d0);
      }
      lVar9 = (longlong)(int)local_d0;
      iVar13 = (int)local_d0 + 1;
      local_d0 = CONCAT44(local_d0._4_4_,iVar13);
      if (*(int *)(local_d8 + 0xc) <= iVar13) break;
      local_e8 = *(undefined8 **)(*(longlong *)(local_d8 + 0x10) + 8 + lVar9 * 8);
      uVar10 = FUN_00d90650();
      iVar13 = (int)uVar10;
      if ((iVar13 != -1) && ((lVar14 == 0 || (iVar13 < iVar7)))) {
        lVar9 = *(longlong *)
                 (*(longlong *)(local_48 + 0x10) +
                 ((longlong)local_c8 + (longlong)(int)local_d0) * 8);
        if (lVar14 == lVar9) {
          local_31 = (byte)local_4c;
          if (((byte)local_4c == 0) && (lVar14 != 0)) {
            local_4c = 0;
            FUN_00d50b00();
            lVar9 = lVar14;
            goto LAB_00d6a810;
          }
        }
        else {
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          if (((byte)local_4c != '\0') && (lVar14 != 0)) {
            FUN_00d50b20();
          }
LAB_00d6a810:
          local_31 = 1;
          lVar14 = lVar9;
        }
        if (iVar13 == 0) {
          local_f8 = uVar10 >> 0x20;
          iVar7 = 0;
          goto LAB_00d6a866;
        }
        local_f8 = uVar10 >> 0x20;
        local_4c = (uint)local_31;
        uVar8 = uVar10 & 0xffffffff;
      }
    }
    local_31 = (byte)local_4c;
LAB_00d6a866:
    FUN_00018280();
    local_88 = lVar14;
    if (lVar14 == 0) break;
    if (local_58 == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar11 = &DAT_025795a8;
      uVar12 = (*pcVar2)();
      local_f0 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
      local_58 = puVar11;
    }
    if (0 < iVar7) {
      FUN_00d97ce0();
      puVar11 = local_e8;
      local_78 = 0;
      if (local_e0 == '\0') {
        if (local_e8 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_e0 = '\0';
      }
      local_78 = '\x01';
      local_80 = puVar11;
      FUN_00d8dbf0();
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00d8dbf0();
    FUN_00d8f140();
    puVar6 = local_e8;
    puVar11 = (undefined8 *)*unaff_RSI;
    if (puVar11 == local_e8) {
      if (((char)unaff_RSI[1] != '\0') || (local_e8 == (undefined8 *)0x0)) goto LAB_00d6aa48;
      if (local_e0 == '\0') {
        FUN_00d50b00();
        goto LAB_00d6aa40;
      }
LAB_00d6aa04:
      *(undefined1 *)(unaff_RSI + 1) = 1;
    }
    else {
      lVar14 = unaff_RSI[1];
      if (local_e0 != '\0') {
        *unaff_RSI = (longlong)local_e8;
        if (((char)lVar14 != '\0') && (puVar11 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00d6aa04;
      }
      if (local_e8 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      *unaff_RSI = (longlong)puVar6;
      if (((char)lVar14 != '\0') && (puVar11 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
LAB_00d6aa40:
      *(undefined1 *)(unaff_RSI + 1) = 1;
LAB_00d6aa48:
      if ((local_e0 != '\0') && (local_e8 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (local_31 != 0) {
      FUN_00d50b20();
    }
  }
  lVar9 = local_48;
  lVar14 = local_70;
  if (local_58 == (undefined8 *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    puVar11 = (undefined8 *)*unaff_RSI;
    if ((char)unaff_RSI[1] != '\0') {
      *unaff_RDI = (longlong)puVar11;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      *(undefined1 *)(unaff_RSI + 1) = 0;
      goto joined_r0x00d6ac05;
    }
    if (puVar11 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    iVar7 = FUN_00d8c7a0();
    if (0 < iVar7) {
      FUN_00d8dbf0();
    }
    FUN_00d8c7d0();
    puVar11 = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if ((char)local_f0 != '\0') {
      *unaff_RDI = (longlong)local_58;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto joined_r0x00d6ac05;
    }
    FUN_00d50b00();
  }
  *unaff_RDI = (longlong)puVar11;
  *(undefined1 *)(unaff_RDI + 1) = 1;
joined_r0x00d6ac05:
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar14 == 0) {
    return unaff_RDI;
  }
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @00d605b0 — 2095 bytes
// str: ""Cannot get stored value for key %@ directly""
// str: ""Cannot get value for property %@ directly. Ivar not registered.""
// ============================================================

longlong * FUN_00d605b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  int extraout_var;
  int extraout_var_00;
  longlong lVar5;
  uint uVar6;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar7;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  undefined8 *local_50;
  undefined4 local_48 [2];
  longlong local_40;
  char local_38;
  
  lVar5 = DAT_0277ddb0;
  if (*(int *)((longlong)param_2 + 0x24) == 0) {
    if (DAT_0277ddb0 != 0) {
      FUN_00e31530(param_1,0);
    }
    uVar7 = FUN_00d74120();
    lVar2 = DAT_0277ddc8;
    if (local_90 == 0) {
      if (DAT_0277ddc8 != 0) {
        uVar7 = FUN_00e31530(uVar7,0);
      }
      local_60 = lVar2;
      local_58 = '\x01';
    }
    else {
      uVar7 = FUN_00d74120();
    }
    local_48[0] = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_60 != 0) {
      uVar7 = FUN_00e31530(uVar7,0);
    }
    local_38 = '\x01';
    local_40 = local_60;
    FUN_00cc7b40(uVar7,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  cVar3 = (**(code **)(*param_2 + 0x368))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_2 + 0x370))();
    uVar7 = extraout_XMM0_Qa_00;
    if (cVar3 != '\0') {
      FUN_00d77bd0();
      if (extraout_var < 2) {
        uVar7 = FUN_00d77bd0();
        if (extraout_var_00 != 1) goto switchD_00d6060d_caseD_2b;
        if ((param_2[0xe] != 0) && (*(char *)(param_2[0xe] + 0x18) < '\0')) {
          cVar3 = FUN_00d77e30();
          iVar1 = *(int *)((longlong)param_2 + 0x24);
          if (cVar3 == '\0') {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            plVar4 = *(longlong **)(unaff_RSI + iVar1);
            if (plVar4 != (longlong *)0x0) {
              lVar5 = (**(code **)(*plVar4 + 0x10))();
              goto LAB_00d606b5;
            }
          }
          else {
            *(undefined1 *)(unaff_RDI + 1) = 0;
            plVar4 = *(longlong **)(unaff_RSI + iVar1);
            if (plVar4 != (longlong *)0x0) {
              lVar5 = (**(code **)(*plVar4 + 0x10))();
              goto LAB_00d606b5;
            }
          }
          lVar5 = 0;
          goto LAB_00d606b5;
        }
        FUN_00d77e30();
      }
      lVar5 = *(longlong *)(*(int *)((longlong)param_2 + 0x24) + unaff_RSI);
LAB_00d606b5:
      *unaff_RDI = lVar5;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      return unaff_RDI;
    }
switchD_00d6060d_caseD_2b:
    lVar5 = DAT_0277ddb0;
    if (DAT_0277ddb0 != 0) {
      FUN_00e31530(uVar7,0);
    }
    uVar7 = FUN_00d74120();
    local_48[0] = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (local_60 != 0) {
      uVar7 = FUN_00e31530(uVar7,0);
    }
    local_40 = local_60;
    local_38 = '\x01';
    FUN_00cc7b40(uVar7,&local_50);
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
LAB_00d607d7:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    uVar6 = (int)*(char *)(param_2[0xc] + 0x19) - 0x2a;
    uVar7 = extraout_XMM0_Qa;
    if (0x49 < uVar6) goto switchD_00d6060d_caseD_2b;
    plVar4 = (longlong *)(*(int *)((longlong)param_2 + 0x24) + unaff_RSI);
    switch((int)*(char *)(param_2[0xc] + 0x19)) {
    case 0x2a:
      if (*plVar4 != 0) {
        FUN_00d91a70((longlong)&switchD_00d6060d::switchdataD_00d61008 +
                     (longlong)(int)(&switchD_00d6060d::switchdataD_00d61008)[uVar6],1);
        plVar4 = unaff_RDI + 1;
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = (longlong)local_50;
        if ((char)local_48[0] != '\0') {
          *(undefined1 *)plVar4 = 1;
          plVar4 = (longlong *)local_48;
        }
        *(undefined1 *)plVar4 = 0;
        if ((char)local_48[0] == '\0') {
          return unaff_RDI;
        }
        if (local_50 == (undefined8 *)0x0) {
          return unaff_RDI;
        }
        FUN_00d50b20();
        return unaff_RDI;
      }
      goto LAB_00d607d7;
    default:
      goto switchD_00d6060d_caseD_2b;
    case 0x40:
      lVar5 = *plVar4;
      goto LAB_00d606b5;
    case 0x43:
      FUN_00dd6690();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x45:
      FUN_00dd6530(*plVar4,plVar4[1]);
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x49:
      FUN_00d46530();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x50:
      FUN_00dd65e0(*plVar4);
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x52:
      FUN_00dd6480(*plVar4,plVar4[1]);
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x53:
      FUN_00dd6740(*plVar4);
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x55:
      FUN_00dd6950();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x5e:
      FUN_00dd6a00();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x62:
      FUN_00d46300();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 99:
      FUN_00dd68a0();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 100:
      FUN_00d470c0(*plVar4);
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x65:
    case 0x69:
      FUN_00d46aa0();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x66:
      FUN_00d46dc0((int)*plVar4);
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x6c:
      FUN_00d468f0();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x71:
      FUN_00dd67f0();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      break;
    case 0x73:
      FUN_00d46530();
      plVar4 = unaff_RDI + 1;
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = (longlong)local_50;
      if ((char)local_48[0] != '\0') {
        *(undefined1 *)plVar4 = 1;
        plVar4 = (longlong *)local_48;
      }
      *(undefined1 *)plVar4 = 0;
      if (((char)local_48[0] != '\0') && (local_50 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  return unaff_RDI;
}




// ============================================================
// @00e86b50 — 1648 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e86d41) */
/* WARNING: Removing unreachable block (ram,0x00e87115) */
/* WARNING: Removing unreachable block (ram,0x00e8711e) */
/* WARNING: Removing unreachable block (ram,0x00e86c27) */
/* WARNING: Removing unreachable block (ram,0x00e86c30) */
/* WARNING: Removing unreachable block (ram,0x00e86c9c) */
/* WARNING: Removing unreachable block (ram,0x00e86ca8) */
/* WARNING: Removing unreachable block (ram,0x00e86deb) */
/* WARNING: Removing unreachable block (ram,0x00e86df7) */
/* WARNING: Removing unreachable block (ram,0x00e87085) */
/* WARNING: Removing unreachable block (ram,0x00e8708e) */
/* WARNING: Removing unreachable block (ram,0x00e86e72) */
/* WARNING: Removing unreachable block (ram,0x00e86e7f) */
/* WARNING: Removing unreachable block (ram,0x00e86b9f) */
/* WARNING: Removing unreachable block (ram,0x00e86ba8) */
/* WARNING: Removing unreachable block (ram,0x00e86cd4) */
/* WARNING: Removing unreachable block (ram,0x00e86cdd) */
/* WARNING: Removing unreachable block (ram,0x00e87157) */
/* WARNING: Removing unreachable block (ram,0x00e87167) */
/* WARNING: Removing unreachable block (ram,0x00e86d50) */
/* WARNING: Removing unreachable block (ram,0x00e86d70) */
/* WARNING: Removing unreachable block (ram,0x00e86d52) */
/* WARNING: Removing unreachable block (ram,0x00e86d72) */

undefined8 * FUN_00e86b50(void)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong *local_a0;
  char local_98;
  longlong *local_78;
  char local_70;
  int local_60;
  longlong *local_48;
  char local_40;
  
  plVar4 = local_78;
  uVar1 = *(uint *)(unaff_RSI + 8);
  FUN_00d894f0();
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if (0 < (int)uVar1) {
    uVar13 = 0;
    do {
      FUN_00d7e190();
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      local_78 = local_48;
      local_70 = '\0';
      FUN_00d21140();
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar13);
  }
  plVar5 = local_78;
  FUN_00d9b9b0();
  if (local_70 == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_70 = '\0';
  }
  if (local_78 == (longlong *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00d8c7a0();
  }
  do {
    iVar10 = iVar7;
    if ((iVar10 == 0) || (plVar4 == (longlong *)0x0)) break;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = -1;
    do {
      lVar8 = (longlong)local_60;
      local_60 = local_60 + 1;
      iVar9 = *(int *)((longlong)plVar4 + 0xc);
      if (iVar9 <= local_60) break;
      local_78 = *(longlong **)(plVar4[2] + 8 + lVar8 * 8);
      cVar6 = FUN_00d99ce0();
    } while (cVar6 == '\0');
    FUN_00018280();
    iVar7 = iVar10 + -1;
  } while (local_60 < iVar9);
  FUN_00d9b9e0();
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_78 != (longlong *)0x0) && (iVar7 = FUN_00d8c7a0(), iVar7 != 0)) {
    iVar9 = 0;
    do {
      cVar6 = FUN_00d99ce0();
      if (cVar6 == '\0') {
        bVar14 = iVar10 != 0;
        bVar2 = true;
        if (plVar4 == (longlong *)0x0) goto LAB_00e871a1;
        goto LAB_00e86ea4;
      }
      iVar9 = iVar9 + 1;
    } while (iVar7 != iVar9);
  }
  if (iVar10 != 0) {
    bVar14 = true;
    bVar2 = false;
    if (plVar4 != (longlong *)0x0) {
LAB_00e86ea4:
      for (lVar8 = 0; (int)lVar8 < *(int *)((longlong)plVar4 + 0xc); lVar8 = lVar8 + 1) {
        plVar12 = *(longlong **)(plVar4[2] + lVar8 * 8);
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        plVar11 = plVar12;
        if (bVar14) {
          FUN_00d8f140();
          if (plVar12 == local_48) {
LAB_00e86f5e:
            plVar11 = plVar12;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            plVar11 = local_48;
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar12 = local_48;
              goto LAB_00e86f5e;
            }
          }
          else {
            plVar11 = local_48;
            if (plVar12 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        plVar12 = plVar11;
        if (bVar2) {
          FUN_00d8c7a0();
          FUN_00d97ce0();
          if (local_48 == plVar11) {
LAB_00e86fe7:
            plVar12 = plVar11;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            plVar12 = local_48;
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (plVar11 != (longlong *)0x0) {
                FUN_00d50b20();
                plVar11 = local_48;
                goto LAB_00e86fe7;
              }
            }
            else if (plVar11 != (longlong *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        lVar3 = DAT_02789050;
        if (DAT_02789050 != 0) {
          FUN_00d50b00();
        }
        cVar6 = (**(code **)(*plVar12 + 0x50))();
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        local_48 = DAT_02789058;
        if (cVar6 == '\0') {
          FUN_00e86820();
          if (local_98 == '\0') {
            if (local_a0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_98 = '\0';
          }
          local_48 = local_a0;
          FUN_00d233f0();
          if (local_a0 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (DAT_02789058 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          FUN_00d233f0();
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        local_40 = '\0';
        FUN_00d50b20();
      }
      FUN_00018280();
    }
  }
LAB_00e871a1:
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_78 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00d59fc0 — 1644 bytes
// str: ""GNObject""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d5a0ec) */
/* WARNING: Removing unreachable block (ram,0x00d5a0f9) */
/* WARNING: Removing unreachable block (ram,0x00d5a3c7) */
/* WARNING: Removing unreachable block (ram,0x00d5a3d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00d59fc0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  longlong local_d8;
  char local_d0;
  longlong *local_c8;
  char local_c0;
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
  longlong *local_68;
  char local_60;
  int local_54;
  longlong *local_48;
  char local_40;
  
  if ((longlong *)*param_1 == (longlong *)0x0) {
    return 0;
  }
  local_d8 = *param_2;
  local_d0 = '\0';
  (**(code **)(*(longlong *)*param_1 + 0x88))(param_1,&local_d8);
  local_88 = local_48;
  uVar8 = extraout_XMM0_Da;
  if (local_40 == '\0') {
    if (local_48 == (longlong *)0x0) {
      local_88 = (longlong *)0x0;
    }
    else {
      FUN_00e31530(extraout_XMM0_Da,0);
      uVar8 = extraout_XMM0_Da_03;
    }
  }
  else {
    local_40 = '\0';
  }
  plVar7 = local_88;
  local_80 = '\x01';
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
    uVar8 = extraout_XMM0_Da_00;
  }
  plVar6 = (longlong *)*unaff_RSI;
  local_54 = 1;
  if (plVar6 == plVar7) goto LAB_00d5a4a8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    if (unaff_RDI == (longlong *)0x0) goto LAB_00d5a10c;
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      local_c0 = '\0';
      local_c8 = plVar7;
      cVar3 = (**(code **)(*plVar6 + 0x50))();
      uVar8 = extraout_XMM0_Da_01;
      if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_02;
      }
      if (cVar3 != '\0') goto LAB_00d5a4a8;
      plVar6 = (longlong *)*unaff_RSI;
    }
    if (plVar6 == unaff_RDI) {
LAB_00d5a10c:
      if ((longlong *)*param_1 == plVar7) goto LAB_00d5a4a8;
    }
  }
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x148))();
    if (local_48 == (longlong *)0x0) {
      cVar3 = '\0';
      uVar8 = extraout_XMM0_Da_04;
    }
    else {
      (**(code **)(*plVar7 + 0x148))();
      local_b8 = *unaff_RSI;
      local_b0 = '\0';
      cVar3 = (**(code **)(*local_78 + 0x50))();
      uVar8 = extraout_XMM0_Da_05;
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_06;
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
        uVar8 = extraout_XMM0_Da_07;
      }
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
      uVar8 = extraout_XMM0_Da_08;
    }
    if (cVar3 != '\0') goto LAB_00d5a4a8;
    plVar6 = (longlong *)*unaff_RSI;
  }
  if ((DAT_026fd0c0 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_12, iVar5 != 0)) {
    if ((DAT_028a7d98 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      DAT_028a7cd0 = "GNObject";
      _DAT_028a7cd8 = 0x10;
      _DAT_028a7ce0 = FUN_00d4ff10;
      _DAT_028a7ce8 = 0;
      uRam00000000028a7cf0 = 0;
      _DAT_028a7cf8 = 0;
      uRam00000000028a7d00 = 0;
      _DAT_028a7d08 = 0;
      uRam00000000028a7d10 = 0;
      _DAT_028a7d18 = 0;
      uRam00000000028a7d20 = 0;
      _DAT_028a7d28 = 0;
      uRam00000000028a7d30 = 0;
      _DAT_028a7d38 = 0;
      uRam00000000028a7d40 = 0;
      _DAT_028a7d48 = 0;
      uRam00000000028a7d50 = 0;
      _DAT_028a7d58 = 0;
      uRam00000000028a7d60 = 0;
      _DAT_028a7d68 = 0;
      uRam00000000028a7d70 = 0;
      _DAT_028a7d78 = 0;
      uRam00000000028a7d80 = 0;
      _DAT_028a7d84 = 0;
      uRam00000000028a7d88 = 0;
      uRam00000000028a7d8c = 0;
      ___cxa_guard_release();
    }
    DAT_026d5e40 = "GNString";
    _DAT_026d5e48 = 0x40;
    _DAT_026d5e50 = FUN_0005d920;
    _DAT_026d5e58 = &DAT_028a7cd0;
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
    uVar8 = ___cxa_guard_release();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_00d5a208:
    unaff_RSI = (longlong *)&DAT_02802688;
  }
  else {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_09;
    if (cVar3 == '\0') goto LAB_00d5a208;
  }
  plVar6 = (longlong *)*unaff_RSI;
  lVar2 = unaff_RSI[1];
  if (((char)lVar2 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00e31530(uVar8,0);
  }
  plVar7 = local_88;
  uVar8 = FUN_00d68120();
  plVar1 = DAT_02802688;
  cVar3 = DAT_02802690;
  if (plVar7 != (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar8 = extraout_XMM0_Da_10;
    plVar1 = DAT_02802688;
    cVar3 = DAT_02802690;
    if (cVar4 != '\0') {
      plVar1 = local_88;
      cVar3 = local_80;
    }
  }
  if ((cVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00e31530(uVar8,0);
  }
  local_54 = 0;
  if ((plVar6 != (longlong *)0x0) && (plVar1 != (longlong *)0x0)) {
    (**(code **)(*unaff_RDI + 0x360))();
    FUN_00e86210();
    local_a8 = *param_2;
    local_a0 = '\0';
    FUN_00c837f0(local_a8,&local_a8);
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00e31530(extraout_XMM0_Da_11,0);
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_48 != (longlong *)0x0) {
      FUN_00c77cd0();
      cVar4 = FUN_00c7b220();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar4 == 'e') {
        uVar8 = FUN_00c77cd0();
        local_90 = '\0';
        local_98 = plVar1;
        uVar8 = FUN_00c7b3d0(uVar8,&local_98);
        local_60 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00e31530(uVar8,0);
          }
        }
        else {
          local_40 = '\0';
        }
        local_60 = '\x01';
        local_68 = local_48;
        cVar4 = (**(code **)(*plVar6 + 0x50))();
        if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar4 != '\0') {
          local_54 = 1;
          FUN_00d50b20();
          goto LAB_00d5a484;
        }
      }
      FUN_00d50b20();
    }
  }
LAB_00d5a484:
  if ((cVar3 != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)lVar2 != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_00d5a4a8:
  if ((local_80 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_54 == 0) {
    return 0;
  }
  return 1;
}




// ============================================================
// @0002a9b0 — 1586 bytes
// str: ""bool""
// str: ""GNObject""
// str: ""GNHashedDictionary""
// str: ""GNTypedStream""
// str: ""GNClassDescription""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002a9b0(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_0258cea8;
  *(undefined4 *)(unaff_RDI + 5) = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ce898 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ce860 = FUN_0002a740();
        _DAT_026ce858 = "_usedCompressorIndex";
        _DAT_026ce868 = 0;
        _DAT_026ce870 = 0x6900;
        _DAT_026ce878 = "GNInt";
        _DAT_026ce880 = 0;
        uRam00000000026ce888 = 0;
        _DAT_026ce890 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x2c) = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ce8e0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026ce8a8 = FUN_0002a740();
        _DAT_026ce8a0 = "_gatherOnly";
        _DAT_026ce8b0 = 0;
        _DAT_026ce8b8 = 0x6200;
        _DAT_026ce8c0 = "bool";
        _DAT_026ce8c8 = 0;
        uRam00000000026ce8d0 = 0;
        _DAT_026ce8d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b370();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b460();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b550();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  unaff_RDI[9] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b640();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryArchiveTypeInfoContainer");
  }
  FUN_0002b730();
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b810();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002b900();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryArchiveTypeInfoContainer");
  }
  FUN_0002b9f0();
  unaff_RDI[0xe] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bad0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  FUN_0002bbc0();
  unaff_RDI[0x10] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bca0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  FUN_0002bd90();
  FUN_0002be70();
  unaff_RDI[0x13] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002bf50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  FUN_0002c040();
  FUN_0002c120();
  FUN_0002c200();
  FUN_0002c2e0();
  FUN_0002c3c0();
  unaff_RDI[0x19] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002c4a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNBinaryKeyValueArchiverDelegate");
  }
  unaff_RDI[0x1a] = 0;
  lVar2 = FUN_0002a740();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0002c5e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNOperationProgressObserver");
  }
  return;
}




// ============================================================
// @00d6caf0 — 1350 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d6cf49) */
/* WARNING: Removing unreachable block (ram,0x00d6cf55) */
/* WARNING: Removing unreachable block (ram,0x00d6cf77) */
/* WARNING: Removing unreachable block (ram,0x00d6cf83) */

undefined8 * FUN_00d6caf0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  code *pcVar5;
  longlong lVar6;
  short sVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 *puVar12;
  int iVar13;
  short sVar14;
  bool bVar15;
  undefined2 local_88;
  undefined6 uStack_86;
  char local_80;
  undefined8 *local_40;
  
  plVar9 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar9 + 0x18))();
  lVar1 = *(longlong *)(unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
    puVar12 = *(undefined8 **)(unaff_RSI + 0x18);
    if (puVar12 != (undefined8 *)0x0) {
      FUN_00d50b00();
      bVar2 = false;
      goto LAB_00d6cb5d;
    }
  }
  bVar2 = true;
  puVar12 = (undefined8 *)0x0;
LAB_00d6cb5d:
  bVar3 = true;
  FUN_00d6be80();
  if (!bVar2) {
    FUN_00d50b20();
  }
  if (local_80 == '\0') {
    if (CONCAT62(uStack_86,local_88) != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_80 = '\0';
  }
  uVar10 = FUN_00d90650();
  if (CONCAT62(uStack_86,local_88) != 0) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (CONCAT62(uStack_86,local_88) != 0)) {
    FUN_00d50b20();
  }
  pcVar5 = DAT_025795c0;
  if ((int)uVar10 < 1) {
    *unaff_RDI = plVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    iVar13 = (int)((ulonglong)uVar10 >> 0x20) + (int)uVar10;
    bVar4 = false;
    local_40 = (undefined8 *)0x0;
    puVar11 = (undefined8 *)0x0;
    sVar14 = 0;
    bVar2 = false;
    while (iVar8 = FUN_00d8c7a0(), iVar13 < iVar8) {
      sVar7 = FUN_00d8cbc0();
      if (local_40 == (undefined8 *)0x0) {
        if (puVar11 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar11 = &DAT_025795a8;
          (*pcVar5)();
          bVar2 = true;
        }
        if (sVar7 != 0x3d) {
          FUN_00d8ea20();
          local_40 = (undefined8 *)0x0;
          goto LAB_00d6cdaa;
        }
        FUN_00d8c7d0();
        lVar6 = DAT_027259e0;
        if (DAT_027259e0 != 0) {
          FUN_00d50b00();
        }
        FUN_00d97f20();
        if (puVar12 == puVar11) {
          bVar15 = bVar2;
          if ((!bVar2) && (puVar12 != (undefined8 *)0x0)) {
            if (!bVar3) {
              FUN_00d50b00();
              goto LAB_00d6ce5c;
            }
            goto LAB_00d6ce8a;
          }
joined_r0x00d6ce83:
          if ((bVar3) && (puVar12 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          puVar11 = puVar12;
          if (bVar3) {
            if (bVar2) {
              FUN_00d50b20();
            }
LAB_00d6ce8a:
            bVar3 = false;
            bVar15 = true;
          }
          else {
            if (puVar12 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            bVar15 = true;
            if (bVar2) {
              FUN_00d50b20();
LAB_00d6ce5c:
              bVar15 = true;
              goto joined_r0x00d6ce83;
            }
          }
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        local_40 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *local_40 = &DAT_025795a8;
        (*pcVar5)();
        bVar4 = true;
        sVar14 = 0;
        iVar13 = iVar13 + 1;
        bVar2 = bVar15;
      }
      else if ((sVar7 == 0x20) && (sVar14 == 0)) {
        sVar14 = 0;
        iVar13 = iVar13 + 1;
      }
      else {
        bVar15 = sVar14 == 0;
        if ((bVar15) && (sVar7 == 0x27)) {
          sVar14 = 0x27;
          iVar13 = iVar13 + 1;
        }
        else if (bVar15 && sVar7 == 0x22) {
          sVar14 = 0x22;
          iVar13 = iVar13 + 1;
        }
        else if (sVar14 == sVar7) {
          FUN_00d8c7d0();
          FUN_00d6a330();
          if (bVar3) {
            bVar3 = false;
          }
          else if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          FUN_00cd2930();
          if (puVar12 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if (puVar11 != (undefined8 *)0x0) {
            if (bVar2) {
              FUN_00d50b20();
            }
            bVar2 = false;
          }
          if (bVar4) {
            FUN_00d50b20();
          }
          bVar4 = false;
          local_40 = (undefined8 *)0x0;
          puVar11 = (undefined8 *)0x0;
          iVar13 = iVar13 + 1;
        }
        else {
          FUN_00d8ea20(bVar15,1);
LAB_00d6cdaa:
          iVar13 = iVar13 + 1;
        }
      }
    }
    *unaff_RDI = plVar9;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (puVar11 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_40 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @0004b1c0 — 1082 bytes
// str: ""bool""
// str: ""GNObject""
// str: ""GNHashedDictionary""
// str: ""_predictedDecodedValuesIndex""
// str: ""GNKeyValueUnarchiverDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004b1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_02571d38;
  FUN_0004b7d0();
  unaff_RDI[6] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004b8b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004b9a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004ba90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_0004bb80();
  unaff_RDI[10] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004bc60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNKeyValueUnarchiverDelegate");
  }
  *(undefined1 *)(unaff_RDI + 0xb) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d3260 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d3228 = FUN_0004ae80();
        _DAT_026d3220 = "_awakesObjectsAfterDecodig";
        _DAT_026d3230 = 0;
        _DAT_026d3238 = 0x6200;
        _DAT_026d3240 = "bool";
        _DAT_026d3248 = 0;
        uRam00000000026d3250 = 0;
        _DAT_026d3258 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0004bda0();
  puVar4 = unaff_RDI + 0xd;
  unaff_RDI[0xd] = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004be80();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNEditingContext",param_3,param_4,puVar4);
  }
  FUN_0004bf70();
  *(undefined4 *)(unaff_RDI + 0xf) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d3380 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d3348 = FUN_0004ae80();
        _DAT_026d3340 = "_predictedDecodedValuesIndex";
        _DAT_026d3350 = 0;
        _DAT_026d3358 = 0x6900;
        _DAT_026d3360 = "GNInt";
        _DAT_026d3368 = 0;
        uRam00000000026d3370 = 0;
        _DAT_026d3378 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x7c) = 0;
  lVar2 = FUN_0004ae80();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d33c8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d3390 = FUN_0004ae80();
        _DAT_026d3388 = "_reflectsOwnerTree";
        _DAT_026d3398 = 0;
        _DAT_026d33a0 = 0x6200;
        _DAT_026d33a8 = "bool";
        _DAT_026d33b0 = 0;
        uRam00000000026d33b8 = 0;
        _DAT_026d33c0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_0004c050();
  return;
}




// ============================================================
// @000493b0 — 1047 bytes
// str: ""bool""
// str: ""GNObject""
// str: ""GNHashedDictionary""
// str: ""GNClassDescription""
// str: ""GNKeyValueArchiverDelegate""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000493b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_02570f00;
  puVar4 = unaff_RDI + 5;
  unaff_RDI[5] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_000499d0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049ac0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNHashedDictionary");
  }
  unaff_RDI[7] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049bb0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  FUN_00049ca0();
  FUN_00049d80();
  unaff_RDI[10] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049e60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00049f50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNKeyValueArchiverDelegate");
  }
  *(undefined4 *)(unaff_RDI + 0xc) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004a090();
    FUN_00e87980();
  }
  FUN_0004a200();
  *(undefined1 *)(unaff_RDI + 0xe) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d2c70 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d2c38 = FUN_00048ff0();
        _DAT_026d2c30 = "_encodesGlobalIDsOfReferredObjects";
        _DAT_026d2c40 = 0;
        _DAT_026d2c48 = 0x6200;
        _DAT_026d2c50 = "bool";
        _DAT_026d2c58 = 0;
        uRam00000000026d2c60 = 0;
        _DAT_026d2c68 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x71) = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026d2cb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026d2c80 = FUN_00048ff0();
        _DAT_026d2c78 = "_reflectsOwnerTree";
        _DAT_026d2c88 = 0;
        _DAT_026d2c90 = 0x6200;
        _DAT_026d2c98 = "bool";
        _DAT_026d2ca0 = 0;
        uRam00000000026d2ca8 = 0;
        _DAT_026d2cb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[0xf] = 0;
  lVar2 = FUN_00048ff0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_0004a2e0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_0004a3d0();
  FUN_0004a4b0();
  return;
}




// ============================================================
// @00d691c0 — 1015 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d6950d) */
/* WARNING: Removing unreachable block (ram,0x00d69516) */
/* WARNING: Removing unreachable block (ram,0x00d694c7) */
/* WARNING: Removing unreachable block (ram,0x00d694d3) */
/* WARNING: Removing unreachable block (ram,0x00d69356) */
/* WARNING: Removing unreachable block (ram,0x00d6935f) */
/* WARNING: Removing unreachable block (ram,0x00d693dc) */
/* WARNING: Removing unreachable block (ram,0x00d693e5) */
/* WARNING: Removing unreachable block (ram,0x00d69475) */
/* WARNING: Removing unreachable block (ram,0x00d6947e) */
/* WARNING: Removing unreachable block (ram,0x00d69592) */
/* WARNING: Removing unreachable block (ram,0x00d6959e) */
/* WARNING: Removing unreachable block (ram,0x00d69269) */
/* WARNING: Removing unreachable block (ram,0x00d69272) */
/* WARNING: Removing unreachable block (ram,0x00d692bc) */
/* WARNING: Removing unreachable block (ram,0x00d692e0) */
/* WARNING: Removing unreachable block (ram,0x00d692be) */
/* WARNING: Removing unreachable block (ram,0x00d692e4) */

undefined8 FUN_00d691c0(void)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong local_80;
  char local_78;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  pcVar2 = DAT_02572370;
  (*DAT_02572370)();
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*pcVar2)();
  (**(code **)(*unaff_RSI + 0x3d8))();
  if (local_50 == '\0') {
    if (local_58 == 0) goto LAB_00d693a3;
    FUN_00d50b00();
  }
  else if (local_58 == 0) goto LAB_00d693a3;
  local_40 = -1;
  while( true ) {
    lVar5 = (longlong)local_40;
    local_40 = local_40 + 1;
    if (*(int *)(local_58 + 0xc) <= local_40) break;
    plVar1 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar5 * 8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 400))();
      if (local_78 == '\0') {
        if (local_80 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_78 = '\0';
      }
      local_68 = local_80;
      local_60 = '\0';
      FUN_00d21140();
      if (local_80 != 0) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  FUN_00c6f7c0();
  FUN_00d50b20();
LAB_00d693a3:
  lVar5 = DAT_02772078;
  if (1 < *(int *)((longlong)puVar3 + 0xc)) {
    if (DAT_02772078 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_0277e4f0;
  if (DAT_0277e4f0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (local_60 == '\0') {
    if (local_68 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_60 = '\0';
  }
  FUN_00d21140();
  if (local_68 != 0) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  lVar5 = DAT_02772088;
  if (1 < *(int *)((longlong)puVar3 + 0xc)) {
    if (DAT_02772088 != 0) {
      FUN_00d50b00();
    }
    FUN_00d21140();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  lVar5 = DAT_027259e0;
  if (DAT_027259e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d95130();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @00d6b9a0 — 980 bytes
// ============================================================

longlong * FUN_00d6b9a0(void)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  short sVar8;
  bool bVar9;
  longlong local_60;
  undefined1 local_58;
  longlong *local_50;
  char local_48;
  undefined7 uStack_47;
  char local_40;
  undefined4 local_38;
  short local_32;
  
LAB_00d6b9bf:
  FUN_00c8e710();
  lVar3 = CONCAT71(uStack_47,local_48);
  if ((((local_40 == '\0') && (lVar3 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (CONCAT71(uStack_47,local_48) != 0)) {
    FUN_00d50b20();
  }
  FUN_00c92170();
  FUN_00c92160();
  do {
    *(undefined8 *)(unaff_RSI + 0x30) = *(undefined8 *)(unaff_RSI + 0x28);
    cVar5 = FUN_00d6b3f0();
    if (cVar5 == '\0') goto LAB_00d6bcfe;
    *(undefined4 *)(unaff_RSI + 0x40) = 0;
  } while (local_32 != 0x3c);
  iVar1 = *(int *)(lVar3 + 0x18);
  local_50 = unaff_RDI;
  FUN_00c8e340();
  *(undefined2 *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar1) = 0x3c;
  do {
    cVar5 = FUN_00d6b3f0();
    unaff_RDI = local_50;
    if (cVar5 == '\0') goto LAB_00d6bcfe;
    if (local_32 == 0x22) {
      sVar8 = 0x22;
      if (*(int *)(unaff_RSI + 0x40) == 1) {
        *(undefined4 *)(unaff_RSI + 0x40) = 0;
LAB_00d6bc24:
        local_38 = 1;
      }
      else {
        if (*(int *)(unaff_RSI + 0x40) == 0) {
          *(undefined4 *)(unaff_RSI + 0x40) = 1;
        }
LAB_00d6bafb:
        local_38 = 0;
      }
    }
    else if (local_32 == 0x27) {
      iVar1 = *(int *)(unaff_RSI + 0x40);
      if (iVar1 != 2) {
        if (iVar1 == 0) {
          *(undefined4 *)(unaff_RSI + 0x40) = 2;
          sVar8 = 0x27;
          goto LAB_00d6bafb;
        }
        goto LAB_00d6baf3;
      }
      *(undefined4 *)(unaff_RSI + 0x40) = 0;
      local_38 = 1;
      sVar8 = 0x27;
    }
    else {
      iVar1 = *(int *)(unaff_RSI + 0x40);
LAB_00d6baf3:
      sVar8 = local_32;
      if (iVar1 != 0) goto LAB_00d6bafb;
      if (((local_32 != 9) && (local_32 != 10)) && (local_32 != 0xd)) goto LAB_00d6bc24;
      local_38 = 1;
      local_32 = 0x20;
      sVar8 = 0x20;
    }
    iVar1 = *(int *)(lVar3 + 0x18);
    FUN_00c8e340();
    psVar2 = *(short **)(lVar3 + 0x10);
    *(short *)((longlong)psVar2 + (longlong)iVar1) = sVar8;
    iVar1 = *(int *)(lVar3 + 0x18);
    unaff_RDI = local_50;
    if (iVar1 < 8) {
      if (3 < iVar1) goto LAB_00d6bb60;
    }
    else {
      if (((psVar2[1] == 0x21) && (psVar2[2] == 0x2d)) && (psVar2[3] == 0x2d)) {
        FUN_00d6b840();
        if (CONCAT71(uStack_47,local_48) == 0) {
          *(undefined1 *)(local_50 + 1) = 0;
          *local_50 = 0;
          FUN_00d50b20();
          return local_50;
        }
        unaff_RDI = local_50;
        if (local_40 != '\0') {
          FUN_00d50b20();
        }
        goto LAB_00d6bc65;
      }
LAB_00d6bb60:
      if (psVar2[1] == 0x3f) {
        local_58 = 0;
        local_60 = lVar3;
        FUN_00d6b700(0x3f,&local_60);
        goto LAB_00d6bd0a;
      }
      if (((((0x11 < iVar1) && (*psVar2 == 0x3c)) && (psVar2[1] == 0x21)) &&
          ((psVar2[2] == 0x5b && (psVar2[3] == 0x43)))) &&
         ((((psVar2[4] == 0x44 && ((psVar2[5] == 0x41 && (psVar2[6] == 0x54)))) &&
           (psVar2[7] == 0x41)) && (psVar2[8] == 0x5b)))) break;
    }
    if (sVar8 == 0x3e) {
      if ((char)local_38 == '\0') goto LAB_00d6bcfe;
      *(undefined8 *)(unaff_RSI + 0x38) = *(undefined8 *)(unaff_RSI + 0x28);
      FUN_00d920f0(*(undefined8 *)(unaff_RSI + 0x28),iVar1 / 2);
      *(undefined1 *)(local_50 + 1) = 0;
      lVar7 = CONCAT71(uStack_47,local_48);
      unaff_RDI = local_50;
      if (local_40 == '\0') {
        if (lVar7 != 0) {
          FUN_00d50b00();
          *local_50 = lVar7;
          *(undefined1 *)(local_50 + 1) = 1;
          if ((local_40 != '\0') && (CONCAT71(uStack_47,local_48) != 0)) {
            FUN_00d50b20();
          }
          goto LAB_00d6bd0a;
        }
        lVar7 = 0;
      }
      *local_50 = lVar7;
      *(undefined1 *)(local_50 + 1) = 1;
      goto LAB_00d6bd0a;
    }
  } while( true );
  local_48 = '\0';
  cVar5 = '\0';
  do {
    cVar4 = local_48;
    cVar6 = FUN_00d6b5b0();
    unaff_RDI = local_50;
    if (cVar6 == '\0') {
LAB_00d6bcfe:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
LAB_00d6bd0a:
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      return unaff_RDI;
    }
    bVar9 = cVar5 != ']';
    cVar5 = cVar4;
  } while (((bVar9) || (cVar4 != ']')) || (local_48 != '>'));
  if (lVar3 != 0) {
LAB_00d6bc65:
    FUN_00d50b20();
  }
  goto LAB_00d6b9bf;
}




// ============================================================
// @00026600 — 955 bytes
// str: ""bool""
// str: ""GNObject""
// str: ""_state""
// str: ""GNTypedStream""
// str: ""_coding""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00026600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  undefined8 *puVar4;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_025668e0;
  FUN_00026ba0();
  FUN_00026c80();
  unaff_RDI[7] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00026d60();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00026e50();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  FUN_00026f40();
  *(undefined4 *)(unaff_RDI + 10) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cdee0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cdea8 = FUN_00025850();
        _DAT_026cdea0 = "_state";
        _DAT_026cdeb0 = 0;
        _DAT_026cdeb8 = 0x6900;
        _DAT_026cdec0 = "GNInt";
        _DAT_026cdec8 = 0;
        uRam00000000026cded0 = 0;
        _DAT_026cded8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  puVar4 = unaff_RDI + 0xb;
  unaff_RDI[0xb] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00027020();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject",param_3,param_4,puVar4);
  }
  unaff_RDI[0xc] = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00027110();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  *(undefined1 *)(unaff_RDI + 0xd) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026cdfb8 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cdf80 = FUN_00025850();
        _DAT_026cdf78 = "_coding";
        _DAT_026cdf88 = 0;
        _DAT_026cdf90 = 0x6200;
        _DAT_026cdf98 = "bool";
        _DAT_026cdfa0 = 0;
        uRam00000000026cdfa8 = 0;
        _DAT_026cdfb0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x69) = 0;
  lVar2 = FUN_00025850();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_026ce000 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_026cdfc8 = FUN_00025850();
        _DAT_026cdfc0 = "_isSecureSaveEnabled";
        _DAT_026cdfd0 = 0;
        _DAT_026cdfd8 = 0x6200;
        _DAT_026cdfe0 = "bool";
        _DAT_026cdfe8 = 0;
        uRam00000000026cdff0 = 0;
        _DAT_026cdff8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ============================================================
// @00d61870 — 934 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d61ba2) */
/* WARNING: Removing unreachable block (ram,0x00d61bae) */
/* WARNING: Removing unreachable block (ram,0x00d61b55) */
/* WARNING: Removing unreachable block (ram,0x00d6192f) */
/* WARNING: Removing unreachable block (ram,0x00d6193b) */
/* WARNING: Removing unreachable block (ram,0x00d61b61) */
/* WARNING: Removing unreachable block (ram,0x00d61be6) */
/* WARNING: Removing unreachable block (ram,0x00d61bf2) */

void FUN_00d61870(char param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  int extraout_var;
  ulonglong uVar3;
  char *pcVar4;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  char cVar5;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(*unaff_RDI + 0x210))();
  if ((((local_40[0] == '\0') && (local_48 != 0)) && (FUN_00e31530(), local_40[0] != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((param_3 == '\0') || (cVar2 = (**(code **)(*unaff_RDI + 0x1e0))(), cVar2 == '\0')) {
    cVar5 = '\0';
    cVar2 = '\0';
  }
  else {
    (**(code **)(*unaff_RDI + 0x168))();
    cVar5 = '\x01';
    cVar2 = '\x01';
  }
  if (param_1 != '\0') {
    FUN_00d77be0();
    pcVar4 = local_38;
    if (local_40[0] != '\0') {
      pcVar4 = local_40;
    }
    local_38[0] = local_40[0];
    *pcVar4 = '\0';
    if ((local_40[0] != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    cVar2 = cVar5;
    if (local_48 != 0) {
      FUN_00d77be0();
      FUN_00d77bd0();
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (extraout_var < 2) {
        FUN_00d77be0();
        uVar3 = FUN_00d77bd0();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((uVar3 & 0xffffffff00000000) == 0x100000000) {
          plVar1 = (longlong *)*unaff_RSI;
          FUN_00d77f60();
          local_60 = 0;
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00e31530();
            }
          }
          else {
            local_40[0] = '\0';
          }
          local_60 = '\x01';
          local_68 = local_48;
          (**(code **)(*plVar1 + 0x1f0))(0,&local_68,cVar5);
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar1 = (longlong *)*unaff_RSI;
        FUN_00e31530();
        (**(code **)(*plVar1 + 0x228))(0,local_48,1);
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  FUN_00d23f50();
  if (cVar2 != '\0') {
    (**(code **)(*unaff_RDI + 0x178))();
  }
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e86210 — 899 bytes
// ============================================================

undefined8 FUN_00e86210(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*(longlong *)(unaff_RDI + 0xb0) != 0) goto LAB_00e86231;
  lVar1 = *(longlong *)(unaff_RDI + 0x18);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xb0) == 0)) {
    FUN_00e86210();
  }
  FUN_00d7e190();
  if (local_a8 == '\0') {
    if (local_b0 != 0) {
      FUN_00d50b00();
    }
    if (lVar1 != 0) goto LAB_00e8629f;
LAB_00e862ed:
    local_98 = '\0';
    local_a0 = 0;
LAB_00e86303:
    local_50 = 0;
  }
  else {
    local_a8 = '\0';
    if (lVar1 == 0) goto LAB_00e862ed;
LAB_00e8629f:
    FUN_00d7e190();
    local_48 = 0;
    if (local_98 == '\0') {
      if (local_a0 != 0) {
        FUN_00d50b00();
        local_50 = local_a0;
        goto LAB_00e8631c;
      }
      goto LAB_00e86303;
    }
    local_50 = local_a0;
    local_98 = '\0';
  }
LAB_00e8631c:
  local_48 = '\x01';
  FUN_00c81410(*(undefined8 *)(unaff_RDI + 0x10),&local_50,*(undefined4 *)(unaff_RDI + 8));
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if (local_b0 != 0) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  *(longlong *)(unaff_RDI + 0xb0) = lVar1;
  if ((*(byte *)(unaff_RDI + 0xba) & 1) != 0) {
    FUN_00c83750();
  }
  for (lVar1 = *(longlong *)(unaff_RDI + 0x20);
      (lVar1 != 0 && (*(longlong *)(lVar1 + 8) == unaff_RDI)); lVar1 = *(longlong *)(lVar1 + 0x38))
  {
    lVar2 = FUN_00e85330();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00c808f0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  for (lVar1 = *(longlong *)(unaff_RDI + 0x28);
      (lVar1 != 0 && (*(longlong *)(lVar1 + 8) == unaff_RDI)); lVar1 = *(longlong *)(lVar1 + 0x30))
  {
    lVar2 = FUN_00e85930();
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_00c807f0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00c811a0();
  for (lVar1 = *(longlong *)(unaff_RDI + 0xa8); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 8)) {
    FUN_00d7e190();
    lVar2 = local_40;
    if (local_38 == '\0') {
      if (local_40 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    FUN_00c822a0();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
LAB_00e86231:
  return *(undefined8 *)(unaff_RDI + 0xb0);
}




// ============================================================
// @00e87d20 — 889 bytes
// ============================================================

void FUN_00e87d20(void)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  FUN_00e316f0();
  iVar2 = DAT_02802628 + 1;
  if (0 < DAT_02802628) {
    DAT_02802628 = iVar2;
    FUN_00e31730();
    return;
  }
  uVar7 = DAT_02802630 | DAT_02802634;
  DAT_02802628 = iVar2;
  if (uVar7 == 0) {
    bVar1 = FUN_00da5b80();
    DAT_02802634 = (uint)bVar1 * 2 - 1;
  }
  if (DAT_02802634 != 0xffffffff) {
    if (DAT_02802630 == 0) {
      FUN_00e880e0();
      FUN_00e8f2a0();
      FUN_00d93000();
    }
    else {
      FUN_00e8f2a0();
      FUN_00d93000();
    }
    if (DAT_02802630 == 0) {
      FUN_00e99bf0();
      DAT_028025f8 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      DAT_02802600 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      DAT_02802608 = FUN_00c8d380();
      FUN_00c8d600();
      FUN_00c8d610();
      FUN_00e99bf0();
      DAT_02802610 = FUN_00e38c70();
      FUN_00e99bf0();
      DAT_02802618 = FUN_00e38c70();
      DAT_02802630 = 1;
      FUN_000064f0();
      FUN_000198f0();
      FUN_00020b20();
      FUN_0001b450();
      FUN_000191c0();
      FUN_00021930();
      FUN_0001e9a0();
      FUN_0001fe70();
      plVar6 = (longlong *)FUN_0027a220();
      (**(code **)(*plVar6 + 0x10))();
      FUN_00e84f80();
    }
    DAT_02802630 = 2;
    FUN_00e8cc30();
    FUN_00d7e120();
    FUN_00d7e380();
    iVar2 = FUN_00c8d630();
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if (lVar3 != 0) {
          FUN_00e875e0();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar4 = &DAT_025736a8;
    puVar4[3] = 0;
    *(undefined4 *)(puVar4 + 4) = 0;
    (*DAT_025736c0)();
    FUN_00d50b00();
    DAT_028025f0 = puVar4;
    FUN_00da57f0();
    FUN_00d403f0();
    iVar2 = FUN_00c8d630();
    if (0 < iVar2) {
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xbb) != '\0')) {
          FUN_00e86210();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
      iVar8 = 0;
      do {
        lVar3 = FUN_00c8df10();
        if ((lVar3 != 0) && (*(char *)(lVar3 + 0xbb) != '\0')) {
          FUN_00e86210();
          FUN_00c88ec0();
        }
        iVar8 = iVar8 + 1;
      } while (iVar2 != iVar8);
    }
    DAT_02802630 = 3;
    for (iVar2 = 0; iVar8 = FUN_00e38d70(), iVar2 < iVar8; iVar2 = iVar2 + 1) {
      pcVar5 = (code *)FUN_00e38d90();
      (*pcVar5)();
    }
    DAT_02802630 = 4;
    plVar6 = (longlong *)FUN_0027a220();
    (**(code **)(*plVar6 + 0x18))();
    FUN_00e31730();
    if (puVar4 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _exit(uVar7);
}




// ============================================================
// @00e85930 — 875 bytes
// str: ""GNObject""
// ============================================================

undefined8 * FUN_00e85930(void)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong unaff_RDI;
  longlong local_70;
  longlong local_40;
  longlong local_30;
  char local_28;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_000276d0();
  *puVar2 = &DAT_025783f8;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5b) = 0;
  *(undefined8 *)((longlong)puVar2 + 99) = 0;
  (*DAT_02578410)();
  FUN_00d7e190();
  if (local_28 == '\0') {
    if (local_30 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_28 = '\0';
  }
  FUN_00d73b40();
  if (local_30 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d73c80();
  *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(unaff_RDI + 0x10);
  bVar1 = *(byte *)(unaff_RDI + 0x18);
  if ((bVar1 & 8) == 0) {
    if ((bVar1 & 0x20) == 0) {
      FUN_00d76d00();
    }
    else {
      FUN_00d76d00();
    }
  }
  else if ((bVar1 & 0x20) == 0) {
    FUN_00d76d00();
  }
  else {
    FUN_00d76d00();
  }
  FUN_00d77e00();
  FUN_00d77e20();
  if ((char)*(byte *)(unaff_RDI + 0x18) < '\0') {
    FUN_00d7e190();
    if (local_28 == '\0') {
      if (local_30 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_28 = '\0';
    }
    FUN_00d76cb0();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if ((*(byte *)(unaff_RDI + 0x18) & 0x40) == 0) {
      if (*(longlong *)(unaff_RDI + 0x20) != 0) goto LAB_00e85ada;
LAB_00e85b09:
      local_28 = '\0';
      local_30 = 0;
LAB_00e85b19:
      local_40 = 0;
    }
    else {
      if ((*(longlong *)(unaff_RDI + 0x20) == 0) ||
         (*(longlong *)(*(longlong *)(unaff_RDI + 0x20) + 8) == 0)) goto LAB_00e85b09;
LAB_00e85ada:
      FUN_00d7e190();
      if (local_28 == '\0') {
        if (local_30 == 0) goto LAB_00e85b19;
        FUN_00d50b00();
        local_40 = local_30;
      }
      else {
        local_40 = local_30;
        local_28 = '\0';
      }
    }
    FUN_00d76cb0();
    if (local_40 != 0) {
      FUN_00d50b20();
    }
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
  }
  if (((*(byte *)(unaff_RDI + 0x18) & 0x40) == 0) || (*(longlong *)(unaff_RDI + 0x20) == 0)) {
    local_28 = '\0';
    local_30 = 0;
  }
  else {
    FUN_00d7e190();
    if (local_28 != '\0') {
      local_70 = local_30;
      local_28 = '\0';
      goto LAB_00e85c2c;
    }
    if (local_30 != 0) {
      FUN_00d50b00();
      local_70 = local_30;
      goto LAB_00e85c2c;
    }
  }
  local_70 = 0;
LAB_00e85c2c:
  FUN_00d76bf0();
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  puVar2[0xe] = unaff_RDI;
  *(undefined8 **)(unaff_RDI + 0x28) = puVar2;
  return puVar2;
}




// ============================================================
// @00d68ce0 — 827 bytes
// ============================================================

undefined8 * FUN_00d68ce0(undefined1 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_a0;
  char local_98;
  undefined8 *local_90;
  char local_88;
  longlong *local_78;
  char local_70 [8];
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  undefined8 *local_38;
  
  plVar4 = local_78;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  (**(code **)(*unaff_RSI + 0x3d8))();
  local_40 = local_78;
  if (local_70[0] == '\0') {
    if (local_78 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d68d7a;
    }
  }
  else if (local_78 != (longlong *)0x0) {
LAB_00d68d7a:
    local_70[0] = '\0';
    local_78 = (longlong *)0x0;
    local_40 = plVar4;
    local_68 = plVar4;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_38 = puVar2;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar5 = -local_60._4_4_;
        }
        else {
          iVar5 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar5);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar5 = 0;
        }
        local_60 = CONCAT44(iVar5,(int)local_60);
      }
      lVar3 = (longlong)(int)local_60;
      iVar5 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar5);
      if (*(int *)((longlong)local_68 + 0xc) <= iVar5) break;
      local_78 = *(longlong **)(local_68[2] + 8 + lVar3 * 8);
      local_a0 = *param_2;
      local_98 = '\0';
      (**(code **)(*local_78 + 0x388))(param_1,&local_a0);
      lVar3 = local_50;
      if (local_48 == '\0') {
        if (((local_50 != 0) && (FUN_00d50b00(), local_48 != '\0')) && (local_50 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        local_48 = '\0';
        local_50 = lVar3;
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    FUN_00c6f7c0();
    puVar2 = local_38;
  }
  local_88 = '\0';
  local_90 = puVar2;
  cVar1 = (**(code **)(*local_40 + 0x50))();
  if ((local_88 != '\0') && (local_90 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    if (*(int *)((longlong)puVar2 + 0xc) < 2) {
      if (*(int *)((longlong)puVar2 + 0xc) != 1) {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        goto LAB_00d6900d;
      }
      FUN_00d23340();
      plVar4 = &local_50;
      if (local_70[0] != '\0') {
        plVar4 = (longlong *)local_70;
      }
      local_50 = CONCAT71(local_50._1_7_,local_70[0]);
      *(char *)plVar4 = '\0';
      if ((local_70[0] != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (((char)local_50 == '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
    }
    else {
      FUN_00d68760();
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (local_70[0] == '\0') {
        if (local_78 == (longlong *)0x0) {
          local_78 = (longlong *)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
    }
    *unaff_RDI = local_78;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (unaff_RSI != (longlong *)0x0) {
      FUN_00d50b00();
    }
    *unaff_RDI = unaff_RSI;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
LAB_00d6900d:
  FUN_00d50b20();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00d6c3d0 — 796 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d6c5d7) */
/* WARNING: Removing unreachable block (ram,0x00d6c5e0) */

void FUN_00d6c3d0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_50;
  char local_48;
  
  plVar7 = (longlong *)FUN_00be9900();
  (**(code **)(*plVar7 + 0x18))();
  lVar1 = *unaff_RSI;
  lVar2 = plVar7[3];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar7[3] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  plVar7[4] = *(longlong *)(*param_2 + 0x38);
  if (*unaff_RSI != 0) {
    FUN_00d8c7a0();
    sVar6 = FUN_00d8cbc0();
    if ((sVar6 == 0x2f) || ((*unaff_RSI != 0 && (sVar6 = FUN_00d8cbc0(), sVar6 == 0x3f)))) {
      plVar7[5] = *(longlong *)(*param_2 + 0x38);
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
  }
  bVar4 = true;
  do {
    FUN_00d6b9a0();
    if (local_88 == 0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      break;
    }
    sVar6 = FUN_00d8cbc0();
    if (sVar6 == 0x2f) {
      FUN_00d6be80();
      FUN_00d6be80();
      if (local_70 == '\0') {
        if (local_78 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_70 = '\0';
      }
      cVar5 = (**(code **)(*local_50 + 0x50))();
      if (local_78 != 0) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar5 == '\0') goto LAB_00d6c6b0;
      plVar7[5] = *(longlong *)(*param_2 + 0x30);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (!bVar4) {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      bVar4 = false;
      bVar3 = false;
    }
    else {
      FUN_00d6c3d0();
      if (local_48 == '\0') {
        if (local_50 != (longlong *)0x0) {
          FUN_00d50b00();
          goto LAB_00d6c5bc;
        }
      }
      else if (local_50 != (longlong *)0x0) {
LAB_00d6c5bc:
        local_48 = '\0';
        FUN_00d21140();
        bVar3 = true;
        FUN_00d50b20();
        goto joined_r0x00d6c6c2;
      }
LAB_00d6c6b0:
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      bVar3 = false;
    }
joined_r0x00d6c6c2:
    if (local_80 != '\0') {
      FUN_00d50b20();
    }
  } while (bVar3);
  if ((bVar4) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00d69a70 — 795 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d69c67) */
/* WARNING: Removing unreachable block (ram,0x00d69c72) */
/* WARNING: Removing unreachable block (ram,0x00d69cde) */
/* WARNING: Removing unreachable block (ram,0x00d69ce9) */
/* WARNING: Removing unreachable block (ram,0x00d69be7) */
/* WARNING: Removing unreachable block (ram,0x00d69bf0) */
/* WARNING: Removing unreachable block (ram,0x00d69aea) */
/* WARNING: Removing unreachable block (ram,0x00d69af6) */
/* WARNING: Removing unreachable block (ram,0x00d69c88) */
/* WARNING: Removing unreachable block (ram,0x00d69ce0) */
/* WARNING: Removing unreachable block (ram,0x00d69c91) */

longlong * FUN_00d69a70(void)

{
  longlong *plVar1;
  bool bVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  longlong lVar4;
  longlong local_98;
  char local_90;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  if (*(int *)(unaff_RSI[3] + 0xc) != 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  (**(code **)(*unaff_RSI + 0x3d8))();
  if (local_90 == '\0') {
    if (local_98 == 0) goto LAB_00d69ceb;
    FUN_00d50b00();
LAB_00d69afb:
    if (*(int *)(local_98 + 0xc) < 1) {
      bVar2 = false;
      lVar3 = 0;
    }
    else {
      lVar4 = 0;
      lVar3 = 0;
      bVar2 = false;
      do {
        plVar1 = *(longlong **)(*(longlong *)(local_98 + 0x10) + lVar4 * 8);
        if (lVar3 == 0) {
          (**(code **)(*plVar1 + 0x3c8))();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00c6f510();
          if (local_58 == 0) {
            lVar3 = 0;
          }
          else {
            lVar3 = local_58;
            if (local_50 == '\0') {
              FUN_00d50b00();
              bVar2 = true;
            }
            else {
              local_50 = '\0';
              bVar2 = true;
            }
          }
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          (**(code **)(*plVar1 + 0x3c8))();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_58 = local_48;
          local_50 = '\0';
          FUN_00d7ad40();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < *(int *)(local_98 + 0xc));
    }
    FUN_00c6f7c0();
    FUN_00d50b20();
  }
  else {
    if (local_98 != 0) goto LAB_00d69afb;
LAB_00d69ceb:
    lVar3 = 0;
    bVar2 = false;
  }
  lVar4 = unaff_RSI[4];
  if (lVar4 != lVar3) {
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    unaff_RSI[4] = lVar3;
    if (lVar4 != 0) {
      FUN_00d50b20();
      lVar4 = unaff_RSI[4];
      *(undefined1 *)(unaff_RDI + 1) = 0;
      goto joined_r0x00d69d69;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar4 = lVar3;
joined_r0x00d69d69:
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((bVar2) && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00d6de90 — 784 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d6e155) */
/* WARNING: Removing unreachable block (ram,0x00d6e15e) */

void FUN_00d6de90(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_90;
  char local_88;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00055590();
  (**(code **)(*plVar4 + 0x18))();
  lVar1 = *unaff_RSI;
  lVar2 = plVar4[2];
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    plVar4[2] = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(longlong *)*unaff_RSI + 0x3c0))();
  plVar5 = (longlong *)plVar4[6];
  plVar7 = plVar5;
  if (plVar5 != local_40) {
    if (local_38 == '\0') {
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
        goto LAB_00d6df1a;
      }
      FUN_00d50b00();
      plVar5 = (longlong *)plVar4[6];
      plVar4[6] = (longlong)local_40;
      plVar7 = local_40;
    }
    else {
      local_38 = '\0';
      plVar7 = local_40;
LAB_00d6df1a:
      plVar4[6] = (longlong)plVar7;
    }
    if (plVar5 != (longlong *)0x0) {
      FUN_00d50b20();
      plVar7 = local_40;
    }
  }
  if ((local_38 != '\0') && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d6e310();
  plVar5 = local_40;
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_00d6e047;
    }
  }
  else if (local_40 != (longlong *)0x0) goto LAB_00d6e047;
  FUN_00d6ebd0();
  plVar7 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d6ebd0();
    if ((local_88 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    FUN_00d6e310();
    if ((local_40 != (longlong *)0x0) && (plVar5 = local_40, local_38 == '\0')) {
      FUN_00d50b00();
    }
    if (local_90 != 0) {
      FUN_00d50b20();
    }
  }
LAB_00d6e047:
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_00e8fc40();
    FUN_00022d50();
    (**(code **)(*plVar5 + 0x18))();
  }
  plVar7 = (longlong *)plVar4[3];
  if (plVar7 != plVar5) {
    FUN_00d50b00();
    plVar4[3] = (longlong)plVar5;
    if (plVar7 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02578b00;
  (*DAT_02578b18)();
  puVar3 = (undefined8 *)plVar4[4];
  if (puVar3 == puVar6) {
    FUN_00d50b20();
  }
  else {
    plVar4[4] = (longlong)puVar6;
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d403d0();
  local_60 = DAT_0277e5d8;
  if (DAT_0277e5d8 != 0) {
    FUN_00d50b00();
  }
  local_58 = '\x01';
  local_48 = '\0';
  local_50 = plVar4;
  FUN_00d41430(&local_50,&local_60);
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  FUN_00d50b20();
  return;
}




// ============================================================
// @00d4f8e0 — 741 bytes
// str: ""GNObject""
// str: ""GNCoder""
// str: ""GNCopier""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4f8e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0277e1c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027c0140 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          if (DAT_028a7d98 == '\0') {
            iVar1 = ___cxa_guard_acquire();
            if (iVar1 != 0) {
              DAT_028a7cd0 = "GNObject";
              _DAT_028a7cd8 = 0x10;
              _DAT_028a7ce0 = FUN_00d4ff10;
              _DAT_028a7ce8 = 0;
              uRam00000000028a7cf0 = 0;
              _DAT_028a7cf8 = 0;
              uRam00000000028a7d00 = 0;
              _DAT_028a7d08 = 0;
              uRam00000000028a7d10 = 0;
              _DAT_028a7d18 = 0;
              uRam00000000028a7d20 = 0;
              _DAT_028a7d28 = 0;
              uRam00000000028a7d30 = 0;
              _DAT_028a7d38 = 0;
              uRam00000000028a7d40 = 0;
              _DAT_028a7d48 = 0;
              uRam00000000028a7d50 = 0;
              _DAT_028a7d58 = 0;
              uRam00000000028a7d60 = 0;
              _DAT_028a7d68 = 0;
              uRam00000000028a7d70 = 0;
              _DAT_028a7d78 = 0;
              uRam00000000028a7d80 = 0;
              _DAT_028a7d84 = 0;
              uRam00000000028a7d88 = 0;
              uRam00000000028a7d8c = 0;
              ___cxa_guard_release();
            }
          }
          _DAT_026cdb90 = "GNCoder";
          _DAT_026cdb98 = 0x28;
          _DAT_026cdba0 = FUN_00025a60;
          _DAT_026cdba8 = &DAT_028a7cd0;
          _DAT_026cdbb0 = 0;
          uRam00000000026cdbb8 = 0;
          _DAT_026cdbc0 = 0;
          _DAT_026cdc38 = 0;
          uRam00000000026cdc40 = 0;
          _DAT_026cdc48 = 0;
          DAT_026cdc4a = 1;
          _DAT_026cdbc8 = 0;
          uRam00000000026cdbd0 = 0;
          _DAT_026cdbd8 = 0;
          uRam00000000026cdbe0 = 0;
          _DAT_026cdbe8 = 0;
          uRam00000000026cdbf0 = 0;
          _DAT_026cdbf8 = 0;
          uRam00000000026cdc00 = 0;
          _DAT_026cdc08 = 0;
          uRam00000000026cdc10 = 0;
          _DAT_026cdc18 = 0;
          uRam00000000026cdc20 = 0;
          _DAT_026cdc28 = 0;
          uRam00000000026cdc30 = 0;
          DAT_026cdc53 = 0;
          _DAT_026cdc4b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0277e100 = "GNCopier";
      _DAT_0277e108 = 0x58;
      _DAT_0277e110 = FUN_00d66f00;
      _DAT_0277e118 = &DAT_026cdb90;
      _DAT_0277e120 = 0;
      uRam000000000277e128 = 0;
      _DAT_0277e130 = 0;
      uRam000000000277e138 = 0;
      _DAT_0277e140 = 0;
      uRam000000000277e148 = 0;
      _DAT_0277e150 = 0;
      uRam000000000277e158 = 0;
      _DAT_0277e160 = 0;
      uRam000000000277e168 = 0;
      _DAT_0277e170 = 0;
      uRam000000000277e178 = 0;
      _DAT_0277e180 = 0;
      uRam000000000277e188 = 0;
      _DAT_0277e190 = 0;
      uRam000000000277e198 = 0;
      _DAT_0277e1a0 = 0;
      uRam000000000277e1a8 = 0;
      _DAT_0277e1b0 = 0;
      _uRam000000000277e1b8 = 0;
      _DAT_0277e1c0 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_0277e1bb != '\0') {
    return;
  }
  FUN_00025580();
  FUN_00e87760();
  FUN_00d66f40();
  uVar2 = FUN_00e87770();
  FUN_00e87920(uVar2,0);
  FUN_00d67ac0();
  FUN_00d67ac0();
  return;
}




// ============================================================
// @00064b50 — 713 bytes
// str: ""bool""
// str: ""GNObject""
// str: ""_state""
// str: ""GNTypedStream""
// str: ""GNClassDescription""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00064b50(void)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *unaff_RDI;
  
  FUN_00025ab0();
  *unaff_RDI = &DAT_0257a838;
  unaff_RDI[5] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00064f90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNObject");
  }
  unaff_RDI[6] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00065080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNClassDescription");
  }
  *(undefined4 *)(unaff_RDI + 7) = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277bbd0 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277bb98 = FUN_000647b0();
        _DAT_0277bb90 = "_state";
        _DAT_0277bba0 = 0;
        _DAT_0277bba8 = 0x6900;
        _DAT_0277bbb0 = "GNInt";
        _DAT_0277bbb8 = 0;
        uRam000000000277bbc0 = 0;
        _DAT_0277bbc8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  unaff_RDI[8] = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_00065170();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"GNTypedStream");
  }
  *(undefined1 *)(unaff_RDI + 9) = 0;
  lVar2 = FUN_000647b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    if (DAT_0277bc30 == '\0') {
      iVar1 = ___cxa_guard_acquire();
      if (iVar1 != 0) {
        _DAT_0277bbf8 = FUN_000647b0();
        _DAT_0277bbf0 = "_decoding";
        _DAT_0277bc00 = 0;
        _DAT_0277bc08 = 0x6200;
        _DAT_0277bc10 = "bool";
        _DAT_0277bc18 = 0;
        uRam000000000277bc20 = 0;
        _DAT_0277bc28 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  FUN_00065260();
  FUN_00065340();
  FUN_00065420();
  return;
}




// ============================================================
// @00d6be80 — 674 bytes
// ============================================================

void FUN_00d6be80(void)

{
  longlong lVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RSI;
  char cVar5;
  bool bVar6;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar4 = *unaff_RSI;
  if (lVar4 == 0) {
    FUN_00d8ede0();
    return;
  }
  cVar5 = (char)unaff_RSI[1];
  if (cVar5 != '\0') {
    FUN_00d50b00();
  }
  sVar2 = FUN_00d8cbc0();
  if (sVar2 == 0x2f) {
    FUN_00d8c7a0();
    FUN_00e7b4e0();
    FUN_00d8e3d0();
  }
  else {
    FUN_00d8c7a0();
    sVar2 = FUN_00d8cbc0();
    lVar1 = DAT_027259e0;
    if (sVar2 == 0x2f) {
      if (DAT_027259e0 != 0) {
        FUN_00d50b00();
      }
      iVar3 = FUN_00d90650();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (iVar3 == -1) {
        FUN_00d8c7a0();
        FUN_00e7b4e0();
        FUN_00d8e3d0();
        goto LAB_00d6c0fe;
      }
    }
    lVar1 = DAT_027259e0;
    if (DAT_027259e0 != 0) {
      FUN_00d50b00();
    }
    iVar3 = FUN_00d90650();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_027259e0;
    if (iVar3 == -1) {
      FUN_00d8c7a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
    }
    else {
      if (DAT_027259e0 != 0) {
        FUN_00d50b00();
      }
      local_50 = lVar1;
      local_48 = '\x01';
      FUN_00d91000(1,&local_50);
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      lVar1 = **(longlong **)(lVar1 + 0x10);
      if (lVar4 == lVar1) {
        if ((cVar5 == '\0') && (lVar1 != 0)) {
          cVar5 = '\x01';
          FUN_00d50b00();
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        bVar6 = cVar5 != '\0';
        lVar4 = lVar1;
        cVar5 = '\x01';
        if (bVar6) {
          FUN_00d50b20();
        }
      }
      FUN_00d8c7a0();
      FUN_00e7b4e0();
      FUN_00d8e3d0();
      FUN_00d50b20();
    }
  }
LAB_00d6c0fe:
  if ((cVar5 != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00d613b0 — 617 bytes
// ============================================================

void FUN_00d613b0(int param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  int extraout_var;
  int extraout_var_00;
  char *pcVar3;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_a8;
  char local_a0 [8];
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  char local_3c;
  char local_38 [8];
  
  if (param_1 == -1) {
    param_1 = *(int *)(*(longlong *)((longlong)*(int *)(param_2 + 0x24) + (longlong)unaff_RDI) + 0xc
                      );
  }
  if ((param_4 == '\0') || (cVar2 = (**(code **)(*unaff_RDI + 0x1e0))(), cVar2 == '\0')) {
    local_3c = '\0';
  }
  else {
    local_98 = *unaff_RSI;
    local_90 = '\0';
    (**(code **)(*unaff_RDI + 0x160))(param_1,param_2);
    local_3c = '\x01';
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
  }
  local_88 = *unaff_RSI;
  local_80 = '\0';
  FUN_00d23370();
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if (param_3 != '\0') {
    FUN_00d77be0();
    pcVar3 = local_38;
    if (local_a0[0] != '\0') {
      pcVar3 = local_a0;
    }
    local_38[0] = local_a0[0];
    *pcVar3 = '\0';
    if ((local_a0[0] != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (local_a8 != 0) {
      FUN_00d77bd0();
      if (extraout_var < 2) {
        FUN_00d77bd0();
        if (extraout_var_00 == 1) {
          plVar1 = (longlong *)*unaff_RSI;
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00e31530();
          }
          (**(code **)(*plVar1 + 0x200))(0,local_a8,local_3c);
          if (unaff_RDI != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        plVar1 = (longlong *)*unaff_RSI;
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00e31530();
        }
        (**(code **)(*plVar1 + 0x220))(0xffffffff,local_a8,0,local_3c);
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      if (local_38[0] != '\0') {
        FUN_00d50b20();
      }
    }
  }
  if (local_3c != '\0') {
    local_78 = *unaff_RSI;
    local_70 = '\0';
    (**(code **)(*unaff_RDI + 0x170))(param_1,param_2);
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @00d66bb0 — 606 bytes
// str: ""GNObject""
// str: ""GNKeyValueGetBinding""
// str: ""GNDirectAccessKeyValueGetBinding""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00d66bb0(void)

{
  int iVar1;
  
  if (DAT_0277e0b0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0277dec8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          if (DAT_028a7d98 == '\0') {
            iVar1 = ___cxa_guard_acquire();
            if (iVar1 != 0) {
              DAT_028a7cd0 = "GNObject";
              _DAT_028a7cd8 = 0x10;
              _DAT_028a7ce0 = FUN_00d4ff10;
              _DAT_028a7ce8 = 0;
              uRam00000000028a7cf0 = 0;
              _DAT_028a7cf8 = 0;
              uRam00000000028a7d00 = 0;
              _DAT_028a7d08 = 0;
              uRam00000000028a7d10 = 0;
              _DAT_028a7d18 = 0;
              uRam00000000028a7d20 = 0;
              _DAT_028a7d28 = 0;
              uRam00000000028a7d30 = 0;
              _DAT_028a7d38 = 0;
              uRam00000000028a7d40 = 0;
              _DAT_028a7d48 = 0;
              uRam00000000028a7d50 = 0;
              _DAT_028a7d58 = 0;
              uRam00000000028a7d60 = 0;
              _DAT_028a7d68 = 0;
              uRam00000000028a7d70 = 0;
              _DAT_028a7d78 = 0;
              uRam00000000028a7d80 = 0;
              _DAT_028a7d84 = 0;
              uRam00000000028a7d88 = 0;
              uRam00000000028a7d8c = 0;
              ___cxa_guard_release();
            }
          }
          _DAT_0277de00 = "GNKeyValueGetBinding";
          _DAT_0277de08 = 0x10;
          _DAT_0277de10 = FUN_00d667d0;
          _DAT_0277de18 = &DAT_028a7cd0;
          _DAT_0277de20 = 0;
          uRam000000000277de28 = 0;
          _DAT_0277de30 = 0;
          _DAT_0277dea8 = 0;
          uRam000000000277deb0 = 0;
          _DAT_0277deb8 = 0;
          DAT_0277deba = 3;
          _DAT_0277de38 = 0;
          uRam000000000277de40 = 0;
          _DAT_0277de48 = 0;
          uRam000000000277de50 = 0;
          _DAT_0277de58 = 0;
          uRam000000000277de60 = 0;
          _DAT_0277de68 = 0;
          uRam000000000277de70 = 0;
          _DAT_0277de78 = 0;
          uRam000000000277de80 = 0;
          _DAT_0277de88 = 0;
          uRam000000000277de90 = 0;
          _DAT_0277de98 = 0;
          uRam000000000277dea0 = 0;
          DAT_0277dec3 = 0;
          _DAT_0277debb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0277dfe8 = "GNDirectAccessKeyValueGetBinding";
      _DAT_0277dff0 = 0x18;
      _DAT_0277dff8 = FUN_00d66b80;
      _DAT_0277e000 = &DAT_0277de00;
      _DAT_0277e008 = 0;
      uRam000000000277e010 = 0;
      _DAT_0277e018 = 0;
      _DAT_0277e090 = 0;
      uRam000000000277e098 = 0;
      _DAT_0277e0a0 = 0;
      DAT_0277e0a2 = 3;
      _DAT_0277e020 = 0;
      uRam000000000277e028 = 0;
      _DAT_0277e030 = 0;
      uRam000000000277e038 = 0;
      _DAT_0277e040 = 0;
      uRam000000000277e048 = 0;
      _DAT_0277e050 = 0;
      uRam000000000277e058 = 0;
      _DAT_0277e060 = 0;
      uRam000000000277e068 = 0;
      _DAT_0277e070 = 0;
      uRam000000000277e078 = 0;
      _DAT_0277e080 = 0;
      uRam000000000277e088 = 0;
      DAT_0277e0ab = 0;
      _DAT_0277e0a3 = 0;
      ___cxa_guard_release();
      return &DAT_0277dfe8;
    }
  }
  return &DAT_0277dfe8;
}




// ============================================================
// @00d66830 — 606 bytes
// str: ""GNObject""
// str: ""GNKeyValueGetBinding""
// str: ""GNMethodInvocationKeyValueGetBinding""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00d66830(void)

{
  int iVar1;
  
  if (DAT_0277df98 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0277dec8 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          if (DAT_028a7d98 == '\0') {
            iVar1 = ___cxa_guard_acquire();
            if (iVar1 != 0) {
              DAT_028a7cd0 = "GNObject";
              _DAT_028a7cd8 = 0x10;
              _DAT_028a7ce0 = FUN_00d4ff10;
              _DAT_028a7ce8 = 0;
              uRam00000000028a7cf0 = 0;
              _DAT_028a7cf8 = 0;
              uRam00000000028a7d00 = 0;
              _DAT_028a7d08 = 0;
              uRam00000000028a7d10 = 0;
              _DAT_028a7d18 = 0;
              uRam00000000028a7d20 = 0;
              _DAT_028a7d28 = 0;
              uRam00000000028a7d30 = 0;
              _DAT_028a7d38 = 0;
              uRam00000000028a7d40 = 0;
              _DAT_028a7d48 = 0;
              uRam00000000028a7d50 = 0;
              _DAT_028a7d58 = 0;
              uRam00000000028a7d60 = 0;
              _DAT_028a7d68 = 0;
              uRam00000000028a7d70 = 0;
              _DAT_028a7d78 = 0;
              uRam00000000028a7d80 = 0;
              _DAT_028a7d84 = 0;
              uRam00000000028a7d88 = 0;
              uRam00000000028a7d8c = 0;
              ___cxa_guard_release();
            }
          }
          _DAT_0277de00 = "GNKeyValueGetBinding";
          _DAT_0277de08 = 0x10;
          _DAT_0277de10 = FUN_00d667d0;
          _DAT_0277de18 = &DAT_028a7cd0;
          _DAT_0277de20 = 0;
          uRam000000000277de28 = 0;
          _DAT_0277de30 = 0;
          _DAT_0277dea8 = 0;
          uRam000000000277deb0 = 0;
          _DAT_0277deb8 = 0;
          DAT_0277deba = 3;
          _DAT_0277de38 = 0;
          uRam000000000277de40 = 0;
          _DAT_0277de48 = 0;
          uRam000000000277de50 = 0;
          _DAT_0277de58 = 0;
          uRam000000000277de60 = 0;
          _DAT_0277de68 = 0;
          uRam000000000277de70 = 0;
          _DAT_0277de78 = 0;
          uRam000000000277de80 = 0;
          _DAT_0277de88 = 0;
          uRam000000000277de90 = 0;
          _DAT_0277de98 = 0;
          uRam000000000277dea0 = 0;
          DAT_0277dec3 = 0;
          _DAT_0277debb = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0277ded0 = "GNMethodInvocationKeyValueGetBinding";
      _DAT_0277ded8 = 0x18;
      _DAT_0277dee0 = FUN_00d66800;
      _DAT_0277dee8 = &DAT_0277de00;
      _DAT_0277def0 = 0;
      uRam000000000277def8 = 0;
      _DAT_0277df00 = 0;
      _DAT_0277df78 = 0;
      uRam000000000277df80 = 0;
      _DAT_0277df88 = 0;
      DAT_0277df8a = 3;
      _DAT_0277df08 = 0;
      uRam000000000277df10 = 0;
      _DAT_0277df18 = 0;
      uRam000000000277df20 = 0;
      _DAT_0277df28 = 0;
      uRam000000000277df30 = 0;
      _DAT_0277df38 = 0;
      uRam000000000277df40 = 0;
      _DAT_0277df48 = 0;
      uRam000000000277df50 = 0;
      _DAT_0277df58 = 0;
      uRam000000000277df60 = 0;
      _DAT_0277df68 = 0;
      uRam000000000277df70 = 0;
      DAT_0277df93 = 0;
      _DAT_0277df8b = 0;
      ___cxa_guard_release();
      return &DAT_0277ded0;
    }
  }
  return &DAT_0277ded0;
}




// ============================================================
// @00d67220 — 578 bytes
// str: ""GNObject""
// str: ""GNCoder""
// str: ""GNCopier""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00d67220(void)

{
  int iVar1;
  
  if (DAT_0277e1c8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027c0140 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          if (DAT_028a7d98 == '\0') {
            iVar1 = ___cxa_guard_acquire();
            if (iVar1 != 0) {
              DAT_028a7cd0 = "GNObject";
              _DAT_028a7cd8 = 0x10;
              _DAT_028a7ce0 = FUN_00d4ff10;
              _DAT_028a7ce8 = 0;
              uRam00000000028a7cf0 = 0;
              _DAT_028a7cf8 = 0;
              uRam00000000028a7d00 = 0;
              _DAT_028a7d08 = 0;
              uRam00000000028a7d10 = 0;
              _DAT_028a7d18 = 0;
              uRam00000000028a7d20 = 0;
              _DAT_028a7d28 = 0;
              uRam00000000028a7d30 = 0;
              _DAT_028a7d38 = 0;
              uRam00000000028a7d40 = 0;
              _DAT_028a7d48 = 0;
              uRam00000000028a7d50 = 0;
              _DAT_028a7d58 = 0;
              uRam00000000028a7d60 = 0;
              _DAT_028a7d68 = 0;
              uRam00000000028a7d70 = 0;
              _DAT_028a7d78 = 0;
              uRam00000000028a7d80 = 0;
              _DAT_028a7d84 = 0;
              uRam00000000028a7d88 = 0;
              uRam00000000028a7d8c = 0;
              ___cxa_guard_release();
            }
          }
          _DAT_026cdb90 = "GNCoder";
          _DAT_026cdb98 = 0x28;
          _DAT_026cdba0 = FUN_00025a60;
          _DAT_026cdba8 = &DAT_028a7cd0;
          _DAT_026cdbb0 = 0;
          uRam00000000026cdbb8 = 0;
          _DAT_026cdbc0 = 0;
          _DAT_026cdc38 = 0;
          uRam00000000026cdc40 = 0;
          _DAT_026cdc48 = 0;
          DAT_026cdc4a = 1;
          _DAT_026cdbc8 = 0;
          uRam00000000026cdbd0 = 0;
          _DAT_026cdbd8 = 0;
          uRam00000000026cdbe0 = 0;
          _DAT_026cdbe8 = 0;
          uRam00000000026cdbf0 = 0;
          _DAT_026cdbf8 = 0;
          uRam00000000026cdc00 = 0;
          _DAT_026cdc08 = 0;
          uRam00000000026cdc10 = 0;
          _DAT_026cdc18 = 0;
          uRam00000000026cdc20 = 0;
          _DAT_026cdc28 = 0;
          uRam00000000026cdc30 = 0;
          DAT_026cdc53 = 0;
          _DAT_026cdc4b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_0277e100 = "GNCopier";
      _DAT_0277e108 = 0x58;
      _DAT_0277e110 = FUN_00d66f00;
      _DAT_0277e118 = &DAT_026cdb90;
      _DAT_0277e120 = 0;
      uRam000000000277e128 = 0;
      _DAT_0277e130 = 0;
      uRam000000000277e138 = 0;
      _DAT_0277e140 = 0;
      uRam000000000277e148 = 0;
      _DAT_0277e150 = 0;
      uRam000000000277e158 = 0;
      _DAT_0277e160 = 0;
      uRam000000000277e168 = 0;
      _DAT_0277e170 = 0;
      uRam000000000277e178 = 0;
      _DAT_0277e180 = 0;
      uRam000000000277e188 = 0;
      _DAT_0277e190 = 0;
      uRam000000000277e198 = 0;
      _DAT_0277e1a0 = 0;
      uRam000000000277e1a8 = 0;
      _DAT_0277e1b0 = 0;
      uRam000000000277e1b8 = 0;
      _DAT_0277e1c0 = 0;
      ___cxa_guard_release();
      return &DAT_0277e100;
    }
  }
  return &DAT_0277e100;
}




// ============================================================
// @00d5a9c0 — 574 bytes
// str: ""Cannot set scalar for key %@ directly. Property is not an attribute""
// str: ""Cannot set scalar for key %@ directly. Type mismatch.""
// ============================================================

void FUN_00d5a9c0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong *unaff_RDI;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong *local_50;
  uint local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x360))();
  FUN_00e86210();
  local_88 = *param_1;
  local_80 = '\0';
  FUN_00c841b0(local_88,&local_88);
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 != (longlong *)0x0) {
      FUN_00e31530();
      if (((char)local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_48 = local_48 & 0xffffff00;
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  cVar3 = (**(code **)(*plVar2 + 0x368))();
  lVar1 = DAT_0277ddb0;
  if (cVar3 == '\0') {
    local_54 = param_2;
    if (DAT_0277ddb0 != 0) {
      FUN_00e31530();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    lVar1 = *param_1;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    local_38 = 0;
    if (lVar1 != 0) {
      FUN_00e31530();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    param_2 = local_54;
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = DAT_0277ddb0;
  if (*(char *)(plVar2[0xc] + 0x19) != (char)param_2) {
    if (DAT_0277ddb0 != 0) {
      FUN_00e31530();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    lVar1 = *param_1;
    local_48 = 1;
    local_50 = &DAT_024c5048;
    if (lVar1 != 0) {
      FUN_00e31530();
    }
    local_38 = '\x01';
    local_40 = lVar1;
    FUN_00cc7b40();
    local_50 = &DAT_024c5048;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*unaff_RDI + 0x208))(1,plVar2);
  FUN_00d50b20();
  return;
}




// ============================================================
// @00d68120 — 550 bytes
// str: ""GNObject""
// str: ""GNValue""
// str: ""GNNumber""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_00d68120(void)

{
  int iVar1;
  
  if (DAT_0270c840 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_0270c850 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          if (DAT_028a7d98 == '\0') {
            iVar1 = ___cxa_guard_acquire();
            if (iVar1 != 0) {
              DAT_028a7cd0 = "GNObject";
              _DAT_028a7cd8 = 0x10;
              _DAT_028a7ce0 = FUN_00d4ff10;
              _DAT_028a7ce8 = 0;
              uRam00000000028a7cf0 = 0;
              _DAT_028a7cf8 = 0;
              uRam00000000028a7d00 = 0;
              _DAT_028a7d08 = 0;
              uRam00000000028a7d10 = 0;
              _DAT_028a7d18 = 0;
              uRam00000000028a7d20 = 0;
              _DAT_028a7d28 = 0;
              uRam00000000028a7d30 = 0;
              _DAT_028a7d38 = 0;
              uRam00000000028a7d40 = 0;
              _DAT_028a7d48 = 0;
              uRam00000000028a7d50 = 0;
              _DAT_028a7d58 = 0;
              uRam00000000028a7d60 = 0;
              _DAT_028a7d68 = 0;
              uRam00000000028a7d70 = 0;
              _DAT_028a7d78 = 0;
              uRam00000000028a7d80 = 0;
              _DAT_028a7d84 = 0;
              uRam00000000028a7d88 = 0;
              uRam00000000028a7d8c = 0;
              ___cxa_guard_release();
            }
          }
          _DAT_026d4330 = "GNValue";
          _DAT_026d4338 = 0x18;
          _DAT_026d4340 = FUN_00053cb0;
          _DAT_026d4348 = &DAT_028a7cd0;
          _DAT_026d4350 = 0;
          uRam00000000026d4358 = 0;
          _DAT_026d4360 = 0;
          uRam00000000026d4368 = 0;
          _DAT_026d4370 = 0;
          uRam00000000026d4378 = 0;
          _DAT_026d4380 = 0;
          uRam00000000026d4388 = 0;
          _DAT_026d4390 = 0;
          uRam00000000026d4398 = 0;
          _DAT_026d43a0 = 0;
          uRam00000000026d43a8 = 0;
          _DAT_026d43b0 = 0;
          uRam00000000026d43b8 = 0;
          _DAT_026d43c0 = 0;
          uRam00000000026d43c8 = 0;
          _DAT_026d43d0 = 0;
          uRam00000000026d43d8 = 0;
          _DAT_026d43e0 = 0;
          uRam00000000026d43e8 = 0;
          _DAT_026d43f0 = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_026d4260 = "GNNumber";
      _DAT_026d4268 = 0x18;
      _DAT_026d4270 = FUN_00053c70;
      _DAT_026d4278 = &DAT_026d4330;
      _DAT_026d4280 = 0;
      uRam00000000026d4288 = 0;
      _DAT_026d4290 = 0;
      uRam00000000026d4298 = 0;
      _DAT_026d42a0 = 0;
      uRam00000000026d42a8 = 0;
      _DAT_026d42b0 = 0;
      uRam00000000026d42b8 = 0;
      _DAT_026d42c0 = 0;
      uRam00000000026d42c8 = 0;
      _DAT_026d42d0 = 0;
      uRam00000000026d42d8 = 0;
      _DAT_026d42e0 = 0;
      uRam00000000026d42e8 = 0;
      _DAT_026d42f0 = 0;
      uRam00000000026d42f8 = 0;
      _DAT_026d4300 = 0;
      uRam00000000026d4308 = 0;
      _DAT_026d4310 = 0;
      uRam00000000026d4318 = 0;
      _DAT_026d4320 = 0;
      ___cxa_guard_release();
      return &DAT_026d4260;
    }
  }
  return &DAT_026d4260;
}




// ============================================================
// @00e86820 — 534 bytes
// ============================================================

void FUN_00e86820(void)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  iVar3 = FUN_00d8c7a0();
  if (0 < iVar3) {
    iVar5 = 0;
    do {
      cVar2 = FUN_00d99d20();
      iVar6 = iVar5;
      if (cVar2 == '\0') break;
      iVar5 = iVar5 + 1;
      iVar6 = iVar3;
    } while (iVar3 != iVar5);
    if (iVar6 == 1) {
      FUN_00d9a140();
      return;
    }
    if (iVar6 != 0) {
      if (iVar6 == iVar3) {
        FUN_00d99300();
        return;
      }
      FUN_00d99ce0();
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_025795a8;
      (*DAT_025795c0)();
      FUN_00d97ce0();
      FUN_00d99300();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d8dbf0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8f140();
      if (local_38 == '\0') {
        if (local_40 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_00d8dbf0();
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d8c7d0();
      *unaff_RDI = (longlong)puVar4;
      goto LAB_00e86a1f;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  lVar1 = *unaff_RSI;
  if ((char)unaff_RSI[1] != '\0') {
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    *(undefined1 *)(unaff_RSI + 1) = 0;
    return;
  }
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  *unaff_RDI = lVar1;
LAB_00e86a1f:
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @00d4fbf0 — 520 bytes
// str: ""GNObject""
// str: ""GNComparer""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00d4fc95) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d4fbf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong local_20;
  
  if ((DAT_0277e468 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    if ((DAT_028a7d98 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
      DAT_028a7cd0 = "GNObject";
      _DAT_028a7cd8 = 0x10;
      _DAT_028a7ce0 = FUN_00d4ff10;
      _DAT_028a7ce8 = 0;
      uRam00000000028a7cf0 = 0;
      _DAT_028a7cf8 = 0;
      uRam00000000028a7d00 = 0;
      _DAT_028a7d08 = 0;
      uRam00000000028a7d10 = 0;
      _DAT_028a7d18 = 0;
      uRam00000000028a7d20 = 0;
      _DAT_028a7d28 = 0;
      uRam00000000028a7d30 = 0;
      _DAT_028a7d38 = 0;
      uRam00000000028a7d40 = 0;
      _DAT_028a7d48 = 0;
      uRam00000000028a7d50 = 0;
      _DAT_028a7d58 = 0;
      uRam00000000028a7d60 = 0;
      _DAT_028a7d68 = 0;
      uRam00000000028a7d70 = 0;
      _DAT_028a7d78 = 0;
      uRam00000000028a7d80 = 0;
      _DAT_028a7d84 = 0;
      uRam00000000028a7d88 = 0;
      uRam00000000028a7d8c = 0;
      ___cxa_guard_release();
    }
    _DAT_0277e3a0 = "GNComparer";
    _DAT_0277e3a8 = 0x18;
    _DAT_0277e3b0 = FUN_00d67bd0;
    _DAT_0277e3b8 = &DAT_028a7cd0;
    _DAT_0277e3c0 = 0;
    uRam000000000277e3c8 = 0;
    _DAT_0277e3d0 = 0;
    uRam000000000277e3d8 = 0;
    _DAT_0277e3e0 = 0;
    uRam000000000277e3e8 = 0;
    _DAT_0277e3f0 = 0;
    uRam000000000277e3f8 = 0;
    _DAT_0277e400 = 0;
    uRam000000000277e408 = 0;
    _DAT_0277e410 = 0;
    uRam000000000277e418 = 0;
    _DAT_0277e420 = 0;
    uRam000000000277e428 = 0;
    _DAT_0277e430 = 0;
    uRam000000000277e438 = 0;
    _DAT_0277e440 = 0;
    uRam000000000277e448 = 0;
    _DAT_0277e450 = 0;
    _uRam000000000277e458 = 0;
    _DAT_0277e460 = 0;
    ___cxa_guard_release();
  }
  if (DAT_0277e45b == '\0') {
    FUN_000064f0();
    FUN_00e87760();
    uVar3 = 0;
    FUN_00d67c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0,param_3,param_4,uVar3);
    if (local_20 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



