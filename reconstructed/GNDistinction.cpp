// Reconstructed implementation of GNDistinction
// From MikeCore binary — reverse-engineered pseudocode

#include "GNDistinction.h"

// ============================================================
// @00e09be0 — 4704 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e0a106) */
/* WARNING: Removing unreachable block (ram,0x00e09ccf) */
/* WARNING: Removing unreachable block (ram,0x00e09ee4) */
/* WARNING: Removing unreachable block (ram,0x00e0a2e3) */
/* WARNING: Removing unreachable block (ram,0x00e0a2f6) */
/* WARNING: Removing unreachable block (ram,0x00e09ef7) */
/* WARNING: Removing unreachable block (ram,0x00e09ce2) */
/* WARNING: Removing unreachable block (ram,0x00e0a119) */
/* WARNING: Removing unreachable block (ram,0x00e0a772) */
/* WARNING: Removing unreachable block (ram,0x00e0a77e) */
/* WARNING: Removing unreachable block (ram,0x00e0a12c) */
/* WARNING: Removing unreachable block (ram,0x00e09cf5) */
/* WARNING: Removing unreachable block (ram,0x00e09f0a) */
/* WARNING: Removing unreachable block (ram,0x00e0a309) */
/* WARNING: Removing unreachable block (ram,0x00e09f91) */
/* WARNING: Removing unreachable block (ram,0x00e0a1c7) */
/* WARNING: Removing unreachable block (ram,0x00e09d90) */
/* WARNING: Removing unreachable block (ram,0x00e0a3a4) */
/* WARNING: Removing unreachable block (ram,0x00e0a1db) */
/* WARNING: Removing unreachable block (ram,0x00e09fb9) */
/* WARNING: Removing unreachable block (ram,0x00e0a3b8) */
/* WARNING: Removing unreachable block (ram,0x00e09db8) */
/* WARNING: Removing unreachable block (ram,0x00e09fcd) */
/* WARNING: Removing unreachable block (ram,0x00e09dcc) */
/* WARNING: Removing unreachable block (ram,0x00e0a3e0) */
/* WARNING: Removing unreachable block (ram,0x00e0a217) */
/* WARNING: Removing unreachable block (ram,0x00e09ff5) */
/* WARNING: Removing unreachable block (ram,0x00e0a3f4) */
/* WARNING: Removing unreachable block (ram,0x00e09df2) */
/* WARNING: Removing unreachable block (ram,0x00e0a229) */

undefined8 * FUN_00e09be0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  char cVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined8 *unaff_RDI;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  longlong local_270;
  undefined1 local_268;
  undefined8 local_260;
  undefined1 local_258;
  longlong local_250;
  undefined1 local_248;
  longlong local_240;
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
  longlong local_1e8;
  char local_1e0;
  longlong local_1d8;
  char local_1d0;
  longlong local_1c8;
  char local_1c0;
  longlong local_1b8;
  char local_1b0;
  longlong local_1a8;
  char local_1a0;
  longlong local_198;
  char local_190;
  longlong local_188;
  char local_180;
  longlong local_178;
  char local_170;
  longlong local_168;
  char local_160;
  longlong local_158;
  char local_150;
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
  longlong *local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  undefined8 local_40;
  int local_38;
  
  puVar12 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar12 = &DAT_024c0e88;
  puVar12[2] = 0;
  puVar12[3] = 0;
  *(undefined4 *)(puVar12 + 4) = 0;
  FUN_00d500e0();
  plVar13 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  lVar1 = puVar12[2];
  puVar12[2] = plVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  plVar13 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar13 + 0x18))();
  lVar1 = puVar12[3];
  puVar12[3] = plVar13;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  FUN_00d934d0();
  lVar1 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d934d0();
  lVar2 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  local_60 = lVar2;
  FUN_00d934d0();
  lVar2 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  uVar17 = FUN_00d934d0();
  lVar3 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (uVar17 = FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    uVar17 = FUN_00d50b20();
  }
  FUN_00d934d0(uVar17,0);
  lVar4 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  FUN_00d934d0();
  lVar5 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  uVar17 = FUN_00d934d0();
  lVar6 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (uVar17 = FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    uVar17 = FUN_00d50b20();
  }
  FUN_00d934d0(uVar17,0);
  lVar7 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  uVar17 = FUN_00d934d0();
  lVar8 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((uVar17 = FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    uVar17 = FUN_00d50b20();
  }
  FUN_00d934d0(uVar17,0);
  lVar9 = local_58;
  if ((((local_50 == '\0') && (local_58 != 0)) && (FUN_00d50b00(), local_50 != '\0')) &&
     (local_58 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d934d0();
  lVar10 = local_58;
  if (((local_50 == '\0') && (local_58 != 0)) &&
     ((FUN_00d50b00(), local_50 != '\0' && (local_58 != 0)))) {
    FUN_00d50b20();
  }
  local_238 = lVar1;
  local_230 = '\0';
  FUN_00d91000(1);
  lVar15 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != 0) && (FUN_00d50b00(), local_50 != '\0')) && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_230 != '\0') && (local_238 != 0)) {
    FUN_00d50b20();
  }
  if (lVar15 != 0) {
    local_50 = '\0';
    local_58 = 0;
    local_240 = lVar15;
    local_48 = lVar15;
    local_40 = 0xffffffff;
    local_38 = 0;
    local_40._4_4_ = 0;
    lVar15 = local_60;
    while( true ) {
      if (local_40._4_4_ != 0) {
        if (local_40._4_4_ < 1) {
          iVar16 = -local_40._4_4_;
        }
        else {
          iVar16 = (int)local_40 - local_40._4_4_;
          local_40 = CONCAT44(local_40._4_4_,iVar16);
          FUN_00d23690();
          local_38 = local_38 + local_40._4_4_;
          iVar16 = 0;
        }
        local_40 = CONCAT44(iVar16,(int)local_40);
      }
      lVar14 = (longlong)(int)local_40;
      iVar16 = (int)local_40 + 1;
      local_40 = CONCAT44(local_40._4_4_,iVar16);
      if (*(int *)(local_48 + 0xc) <= iVar16) break;
      local_228 = *(longlong *)(*(longlong *)(local_48 + 0x10) + 8 + lVar14 * 8);
      local_220 = '\0';
      local_58 = local_228;
      uVar17 = FUN_00ddb860();
      plVar13 = local_70;
      if (local_68 == '\0') {
        if (((local_70 != (longlong *)0x0) && (uVar17 = FUN_00d50b00(), local_68 != '\0')) &&
           (local_70 != (longlong *)0x0)) {
          uVar17 = FUN_00d50b20();
        }
      }
      else {
        local_68 = '\0';
      }
      if ((local_220 != '\0') && (local_228 != 0)) {
        uVar17 = FUN_00d50b20();
      }
      local_68 = '\0';
      local_70 = (longlong *)0x0;
      local_210 = '\0';
      local_218 = lVar15;
      cVar11 = (**(code **)(*plVar13 + 0x3b0))(uVar17,&local_70);
      uVar17 = extraout_XMM0_Da;
      if ((local_210 != '\0') && (local_218 != 0)) {
        uVar17 = FUN_00d50b20();
      }
      if (cVar11 == '\0') {
LAB_00e0a750:
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        iVar16 = 1;
        lVar15 = local_60;
      }
      else {
        (**(code **)(*plVar13 + 0x3d0))(uVar17,0);
        cVar11 = (**(code **)(*plVar13 + 0x3d8))();
        if (cVar11 == '\0') goto LAB_00e0a750;
        local_208 = lVar2;
        local_200 = '\0';
        cVar11 = FUN_00d90870();
        if ((local_200 != '\0') && (local_208 != 0)) {
          FUN_00d50b20();
        }
        lVar15 = local_60;
        if (cVar11 == '\0') {
          local_1e8 = lVar3;
          local_1e0 = '\0';
          cVar11 = FUN_00d90870();
          if ((local_1e0 != '\0') && (local_1e8 != 0)) {
            FUN_00d50b20();
          }
          iVar16 = 3;
          lVar15 = local_60;
          if (cVar11 == '\0') {
            local_1d8 = lVar4;
            local_1d0 = '\0';
            cVar11 = FUN_00d90870();
            uVar17 = extraout_XMM0_Da_00;
            if ((local_1d0 != '\0') && (local_1d8 != 0)) {
              uVar17 = FUN_00d50b20();
            }
            if (cVar11 == '\0') {
              local_1a8 = lVar8;
              local_1a0 = '\0';
              cVar11 = FUN_00d90870();
              uVar17 = extraout_XMM0_Da_01;
              if ((local_1a0 != '\0') && (local_1a8 != 0)) {
                uVar17 = FUN_00d50b20();
              }
              if (cVar11 == '\0') {
                local_178 = lVar7;
                local_170 = '\0';
                cVar11 = FUN_00d90870();
                uVar17 = extraout_XMM0_Da_02;
                if ((local_170 != '\0') && (local_178 != 0)) {
                  uVar17 = FUN_00d50b20();
                }
                if (cVar11 == '\0') {
                  local_148 = lVar10;
                  local_140 = '\0';
                  cVar11 = FUN_00d90870();
                  uVar17 = extraout_XMM0_Da_03;
                  if ((local_140 != '\0') && (local_148 != 0)) {
                    uVar17 = FUN_00d50b20();
                  }
                  if (cVar11 == '\0') {
                    local_118 = lVar5;
                    local_110 = '\0';
                    cVar11 = FUN_00d90870();
                    uVar17 = extraout_XMM0_Da_04;
                    if ((local_110 != '\0') && (local_118 != 0)) {
                      uVar17 = FUN_00d50b20();
                    }
                    lVar15 = local_60;
                    if (cVar11 == '\0') {
                      local_108 = lVar6;
                      local_100 = '\0';
                      cVar11 = FUN_00d90870();
                      uVar17 = extraout_XMM0_Da_05;
                      if ((local_100 != '\0') && (local_108 != 0)) {
                        uVar17 = FUN_00d50b20();
                      }
                      lVar15 = local_60;
                      if (cVar11 == '\0') {
                        local_f8 = lVar9;
                        local_f0 = '\0';
                        cVar11 = FUN_00d90870();
                        if ((local_f0 != '\0') && (local_f8 != 0)) {
                          FUN_00d50b20();
                        }
                        lVar15 = local_60;
                        if (cVar11 != '\0') goto LAB_00e0a76c;
                      }
                      else {
                        local_260 = 0;
                        local_258 = 0;
                        local_250 = lVar6;
                        local_248 = 0;
                        FUN_00e09950(uVar17,&local_250);
                      }
                    }
                    else {
                      local_270 = lVar5;
                      local_268 = 0;
                      FUN_00e09950(uVar17,&local_270);
                    }
                  }
                  else {
                    local_138 = 0;
                    local_130 = '\0';
                    local_128 = lVar10;
                    local_120 = '\0';
                    FUN_00cd2930(uVar17,&local_128);
                    lVar15 = local_60;
                    if ((local_120 != '\0') && (local_128 != 0)) {
                      FUN_00d50b20();
                    }
                    if ((local_130 != '\0') && (local_138 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                else {
                  local_168 = 0;
                  local_160 = '\0';
                  local_158 = lVar7;
                  local_150 = '\0';
                  FUN_00cd2930(uVar17,&local_158);
                  lVar15 = local_60;
                  if ((local_150 != '\0') && (local_158 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_160 != '\0') && (local_168 != 0)) {
                    FUN_00d50b20();
                  }
                }
              }
              else {
                local_198 = 0;
                local_190 = '\0';
                local_188 = lVar8;
                local_180 = '\0';
                FUN_00cd2930(uVar17,&local_188);
                lVar15 = local_60;
                if ((local_180 != '\0') && (local_188 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_190 != '\0') && (local_198 != 0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              local_1c8 = 0;
              local_1c0 = '\0';
              local_1b8 = lVar4;
              local_1b0 = '\0';
              FUN_00cd2930(uVar17,&local_1b8);
              lVar15 = local_60;
              if ((local_1b0 != '\0') && (local_1b8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_1c0 != '\0') && (local_1c8 != 0)) {
                FUN_00d50b20();
              }
            }
            iVar16 = 0;
          }
        }
        else {
          local_1f8 = 0;
          local_1f0 = '\0';
          uVar17 = FUN_00c716c0();
          *(undefined4 *)(puVar12 + 4) = uVar17;
          iVar16 = 3;
          if ((local_1f0 != '\0') && (local_1f8 != 0)) {
            FUN_00d50b20();
          }
        }
      }
LAB_00e0a76c:
      if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      if ((iVar16 != 0) && (iVar16 != 3)) goto LAB_00e0ad14;
    }
    iVar16 = 2;
LAB_00e0ad14:
    FUN_00018280();
    lVar15 = local_240;
    if (iVar16 != 2) goto LAB_00e0ad35;
  }
  iVar16 = 0;
LAB_00e0ad35:
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if (iVar16 == 0) {
    *unaff_RDI = puVar12;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (lVar10 != 0) {
    FUN_00d50b20();
  }
  if (lVar9 != 0) {
    FUN_00d50b20();
  }
  if (lVar8 != 0) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((iVar16 != 0) && (puVar12 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00e0e4c0 — 4325 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e0e943) */
/* WARNING: Removing unreachable block (ram,0x00e0e956) */
/* WARNING: Removing unreachable block (ram,0x00e0e733) */
/* WARNING: Removing unreachable block (ram,0x00e0e746) */
/* WARNING: Removing unreachable block (ram,0x00e0e551) */
/* WARNING: Removing unreachable block (ram,0x00e0e55d) */
/* WARNING: Removing unreachable block (ram,0x00e0e512) */
/* WARNING: Removing unreachable block (ram,0x00e0e51e) */
/* WARNING: Removing unreachable block (ram,0x00e0eb53) */
/* WARNING: Removing unreachable block (ram,0x00e0eb66) */

undefined8 FUN_00e0e4c0(void)

{
  bool bVar1;
  longlong *plVar2;
  bool bVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *unaff_RSI;
  undefined8 unaff_RDI;
  longlong *plVar8;
  byte bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong local_158;
  char local_150;
  undefined8 *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
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
  char local_90;
  undefined8 *local_88;
  longlong *local_80;
  char local_78;
  undefined8 *local_70;
  int local_68;
  uint uStack_64;
  int local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  
  (**(code **)(*unaff_RSI + 0x368))();
  (**(code **)(*unaff_RSI + 0x378))();
  bVar1 = false;
  plVar10 = (undefined8 *)0x0;
  do {
    lVar7 = DAT_027851f0;
    if (DAT_027851f0 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RSI + 0x3a0))();
    local_138 = local_48;
    local_130 = 0;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_130 = '\x01';
    (**(code **)(*unaff_RSI + 0x398))();
    plVar8 = local_80;
    if (local_80 == plVar10) {
      plVar8 = plVar10;
      bVar3 = bVar1;
      if ((bVar1) || (local_80 == (undefined8 *)0x0)) goto joined_r0x00e0e686;
      if (local_78 == '\0') {
        FUN_00d50b00();
        goto LAB_00e0e6a0;
      }
LAB_00e0e643:
      local_78 = '\0';
      bVar1 = true;
    }
    else {
      if (local_78 != '\0') {
        if ((bVar1) && (plVar10 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00e0e643;
      }
      if (local_80 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar1) && (plVar10 != (undefined8 *)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar8;
LAB_00e0e6a0:
        plVar8 = plVar10;
        bVar3 = true;
      }
joined_r0x00e0e686:
      bVar1 = bVar3;
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar8 == (undefined8 *)0x0) break;
    (**(code **)(*unaff_RSI + 0x3a8))();
    plVar10 = plVar8;
  } while( true );
  plVar10 = (undefined8 *)0x0;
  do {
    lVar7 = DAT_02784c28;
    if (DAT_02784c28 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RSI + 0x3a0))();
    local_128 = local_48;
    local_120 = 0;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_120 = '\x01';
    (**(code **)(*unaff_RSI + 0x398))();
    plVar8 = local_80;
    if (local_80 == plVar10) {
      plVar8 = plVar10;
      bVar3 = bVar1;
      if ((bVar1) || (local_80 == (undefined8 *)0x0)) goto joined_r0x00e0e896;
      if (local_78 == '\0') {
        FUN_00d50b00();
        goto LAB_00e0e8b0;
      }
LAB_00e0e853:
      plVar10 = plVar8;
      local_78 = '\0';
      bVar1 = true;
    }
    else {
      if (local_78 != '\0') {
        if ((bVar1) && (plVar10 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00e0e853;
      }
      if (local_80 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar1) && (plVar10 != (undefined8 *)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar8;
LAB_00e0e8b0:
        plVar8 = plVar10;
        bVar3 = true;
      }
joined_r0x00e0e896:
      bVar1 = bVar3;
      plVar10 = plVar8;
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar10 == (undefined8 *)0x0) break;
    (**(code **)(*unaff_RSI + 0x3a8))();
  } while( true );
  plVar10 = (undefined8 *)0x0;
  do {
    lVar7 = DAT_027866d8;
    if (DAT_027866d8 != 0) {
      FUN_00d50b00();
    }
    (**(code **)(*unaff_RSI + 0x3a0))();
    local_118 = local_48;
    local_110 = 0;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_110 = '\x01';
    (**(code **)(*unaff_RSI + 0x398))();
    plVar8 = local_80;
    if (local_80 == plVar10) {
      plVar8 = plVar10;
      bVar3 = bVar1;
      if ((bVar1) || (local_80 == (undefined8 *)0x0)) goto joined_r0x00e0eaa6;
      if (local_78 == '\0') {
        FUN_00d50b00();
        goto LAB_00e0eac0;
      }
LAB_00e0ea63:
      local_78 = '\0';
      bVar1 = true;
    }
    else {
      if (local_78 != '\0') {
        if ((bVar1) && (plVar10 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_00e0ea63;
      }
      if (local_80 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
      bVar3 = true;
      if ((bVar1) && (plVar10 != (undefined8 *)0x0)) {
        FUN_00d50b20();
        plVar10 = plVar8;
LAB_00e0eac0:
        plVar8 = plVar10;
        bVar3 = true;
      }
joined_r0x00e0eaa6:
      bVar1 = bVar3;
      if ((local_78 != '\0') && (local_80 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
    if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00d50b20();
    }
    if (plVar8 == (undefined8 *)0x0) break;
    (**(code **)(*unaff_RSI + 0x3a8))();
    plVar10 = plVar8;
  } while( true );
  (**(code **)(*unaff_RSI + 0x370))();
  FUN_00d92220();
  local_108 = local_58;
  local_100 = 0;
  if (local_50 == '\0') {
    if (local_58 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  local_100 = '\x01';
  FUN_00d91000(0);
  plVar10 = local_80;
  if (local_78 == '\0') {
    if (((local_80 != (undefined8 *)0x0) && (FUN_00d50b00(), local_78 != '\0')) &&
       (local_80 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = '\0';
  }
  if ((local_100 != '\0') && (local_108 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  local_88 = puVar6;
  if (plVar10 != (undefined8 *)0x0) {
    local_78 = '\0';
    local_80 = (longlong *)0x0;
    local_70 = plVar10;
    local_68 = -1;
    uStack_64 = 0;
    local_60 = 0;
    while( true ) {
      if (uStack_64 != 0) {
        if ((int)uStack_64 < 1) {
          uStack_64 = -uStack_64;
        }
        else {
          local_68 = local_68 - uStack_64;
          FUN_00d23690();
          local_60 = local_60 + uStack_64;
          uStack_64 = 0;
        }
      }
      lVar7 = (longlong)local_68;
      local_68 = local_68 + 1;
      if (*(int *)((longlong)local_70 + 0xc) <= local_68) break;
      local_80 = *(longlong **)(local_70[2] + 8 + lVar7 * 8);
      FUN_00d95590();
      local_f8 = local_58;
      local_f0 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_f0 = '\x01';
      FUN_00d97fb0();
      plVar8 = local_48;
      if (local_48 == (longlong *)0x0) {
        bVar9 = 1;
        plVar8 = (longlong *)0x0;
        bVar1 = false;
      }
      else {
        if (local_40 == '\0') {
          FUN_00d50b00();
          bVar9 = 0;
          bVar1 = true;
          if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_00e0ede8;
          FUN_00d50b20();
        }
        else {
          local_40 = '\0';
        }
        bVar1 = true;
        bVar9 = 0;
      }
LAB_00e0ede8:
      if ((local_f0 != '\0') && (local_f8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      lVar7 = DAT_027866e0;
      if (DAT_027866e0 != 0) {
        FUN_00d50b00();
      }
      cVar5 = (**(code **)(*plVar8 + 0x50))();
      if (lVar7 != 0) {
        FUN_00d50b20();
      }
      plVar11 = local_80;
      puVar6 = local_88;
      if (cVar5 == '\0') {
        if (local_80 == plVar8) {
          if ((bool)(bVar9 & local_80 != (longlong *)0x0)) {
            if (local_78 != '\0') goto LAB_00e0eeb6;
            bVar1 = true;
            FUN_00d50b00();
          }
        }
        else {
          plVar8 = plVar11;
          if (local_78 == '\0') {
            if (local_80 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if (bVar1) {
              FUN_00d50b20();
              bVar1 = true;
              goto LAB_00e0ef00;
            }
          }
          else {
            if (bVar1) {
              FUN_00d50b20();
            }
LAB_00e0eeb6:
            local_78 = '\0';
            plVar11 = plVar8;
          }
          plVar8 = plVar11;
          bVar1 = true;
        }
LAB_00e0ef00:
        lVar7 = DAT_027866e0;
        if (DAT_027866e0 != 0) {
          FUN_00d50b00();
        }
        cVar5 = FUN_00d90eb0();
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        lVar7 = DAT_027866e0;
        puVar6 = local_88;
        if (cVar5 != '\0') {
          if (DAT_027866e0 != 0) {
            FUN_00d50b00();
          }
          local_158 = lVar7;
          local_150 = '\x01';
          FUN_00d8ede0();
          local_e8 = local_58;
          local_e0 = 0;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          puVar6 = local_88;
          local_e0 = '\x01';
          FUN_00d98db0(&local_e8,&local_158,0);
          plVar11 = local_48;
          if (local_48 == plVar8) {
            plVar11 = plVar8;
            bVar3 = bVar1;
            if ((!bVar1) && (local_48 != (longlong *)0x0)) {
              if (local_40 != '\0') goto LAB_00e0f031;
              FUN_00d50b00();
              bVar3 = true;
            }
LAB_00e0f071:
            bVar1 = bVar3;
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              bVar3 = true;
              if ((bVar1) && (plVar8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_00e0f071;
            }
            if ((bVar1) && (plVar8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_00e0f031:
            local_40 = '\0';
            bVar1 = true;
          }
          if ((local_e0 != '\0') && (local_e8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          plVar8 = plVar11;
          if ((local_150 != '\0') && (local_158 != 0)) {
            FUN_00d50b20();
          }
        }
        local_40 = '\0';
        local_48 = plVar8;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((bVar1) && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    FUN_00018280();
    if (puVar6 == (undefined8 *)0x0) {
      bVar3 = true;
      plVar8 = (longlong *)0x0;
      bVar1 = false;
      local_148 = local_88;
      goto LAB_00e0f4a9;
    }
  }
  local_78 = '\0';
  local_80 = (longlong *)0x0;
  local_70 = local_88;
  local_68 = -1;
  uStack_64 = 0;
  local_60 = 0;
  plVar8 = (longlong *)0x0;
  bVar1 = false;
  while( true ) {
    puVar6 = local_88;
    if (uStack_64 != 0) {
      if ((int)uStack_64 < 1) {
        uStack_64 = -uStack_64;
      }
      else {
        local_68 = local_68 - uStack_64;
        FUN_00d23690();
        local_60 = local_60 + uStack_64;
        uStack_64 = 0;
      }
    }
    lVar7 = (longlong)local_68;
    local_68 = local_68 + 1;
    if (*(int *)((longlong)local_70 + 0xc) <= local_68) break;
    local_80 = *(longlong **)(local_70[2] + 8 + lVar7 * 8);
    FUN_00d95590();
    local_d8 = local_58;
    local_d0 = 0;
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_d0 = '\x01';
    FUN_00d97fb0();
    plVar11 = local_48;
    if (local_40 == '\0') {
      if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
         (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_40 = '\0';
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    plVar4 = plVar8;
    bVar3 = bVar1;
    if (plVar8 == (longlong *)0x0) {
LAB_00e0f3d8:
      if (plVar11 != plVar8) {
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        plVar4 = plVar11;
        if ((bVar1) && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto joined_r0x00e0f451;
      }
      if ((bVar1) || (plVar11 == (longlong *)0x0)) goto joined_r0x00e0f451;
      bVar1 = true;
      FUN_00d50b00();
      goto LAB_00e0f16b;
    }
    FUN_00d8ede0();
    plVar2 = local_48;
    local_c0 = 0;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_c0 = '\x01';
    local_c8 = plVar2;
    cVar5 = (**(code **)(*plVar8 + 0x50))();
    if (cVar5 == '\0') {
      cVar5 = '\0';
    }
    else {
      FUN_00d8ede0();
      local_b8 = local_58;
      local_b0 = 0;
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_b0 = '\x01';
      cVar5 = (**(code **)(*plVar11 + 0x50))();
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_c0 != '\0') && (local_c8 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar5 == '\0') goto LAB_00e0f3d8;
    uStack_64 = ~uStack_64;
joined_r0x00e0f451:
    bVar1 = bVar3;
    plVar8 = plVar4;
    if (plVar11 != (longlong *)0x0) {
LAB_00e0f16b:
      FUN_00d50b20();
    }
  }
  FUN_00018280();
  bVar3 = false;
  local_148 = puVar6;
LAB_00e0f4a9:
  local_140 = '\0';
  FUN_00d92220();
  local_98 = local_48;
  local_90 = 0;
  if (local_40 == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_40 = '\0';
  }
  local_90 = '\x01';
  FUN_00d95130();
  local_a8 = local_80;
  local_a0 = 0;
  if (local_78 == '\0') {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  local_a0 = '\x01';
  (**(code **)(*unaff_RSI + 0x368))();
  if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RSI + 0x370))();
  if ((bVar1) && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar3) {
    FUN_00d50b20();
  }
  if (plVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @00e063c0 — 2394 bytes
// str: ""Duration: %f ms""
// str: ""\tVendor: %s""
// str: ""\tBrand: %s""
// str: ""\tSignature: Stepping: %I, Model: %I: Family: %I""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e06631) */
/* WARNING: Removing unreachable block (ram,0x00e067a1) */
/* WARNING: Removing unreachable block (ram,0x00e06760) */
/* WARNING: Removing unreachable block (ram,0x00e06717) */
/* WARNING: Removing unreachable block (ram,0x00e06617) */
/* WARNING: Removing unreachable block (ram,0x00e06500) */
/* WARNING: Removing unreachable block (ram,0x00e06c13) */
/* WARNING: Removing unreachable block (ram,0x00e06c1f) */

void FUN_00e063c0(void)

{
  longlong lVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  char cVar11;
  byte bVar12;
  longlong *unaff_RSI;
  byte bVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  longlong *plVar19;
  double dVar20;
  undefined8 uVar21;
  double local_1b8;
  undefined8 *local_190;
  char local_188;
  undefined8 *local_170;
  uint local_168;
  undefined4 local_164;
  longlong *local_160;
  undefined8 *local_158;
  char local_150;
  undefined8 *local_148;
  uint local_140;
  byte local_13c;
  byte local_13b;
  byte local_13a;
  longlong local_138;
  uint local_130;
  undefined1 local_12c;
  longlong alStack_128 [4];
  undefined1 auStack_108 [208];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_00d8ede0();
  lVar6 = local_138;
  if (((char)local_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
    if (((char)local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  if (lVar1 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    puVar8 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar8 = &DAT_02572358;
    (*DAT_02572370)();
    lVar9 = DAT_027850d0;
    if (DAT_027850d0 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar9;
    local_130 = local_130 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    local_1b8 = (double)FUN_00e7d6f0();
  }
  lVar9 = cpuid_basic_info(0);
  local_138 = *(longlong *)(lVar9 + 4);
  local_130 = *(undefined4 *)(lVar9 + 0xc);
  local_12c = 0;
  if (*unaff_RSI != 0) {
    local_168 = 1;
    local_170 = &DAT_026ba3d0;
    local_160 = &local_138;
    FUN_00d8cb40(local_130,&local_170);
    puVar3 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar3;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar7 = FUN_00e7dde0();
  lVar9 = (longlong)iVar7;
  plVar19 = (longlong *)((longlong)&local_138 + lVar9);
  puVar2 = (uint *)cpuid(0x80000000);
  if (((-1 < (int)*puVar2) || (*puVar2 < 0x80000004)) || (0xf4U - iVar7 < 2)) {
    *(undefined1 *)plVar19 = 0;
    goto LAB_00e0662c;
  }
  lVar14 = (longlong)(int)(0xf4U - iVar7);
  uVar15 = lVar14 - 1;
  puVar3 = (undefined8 *)cpuid_brand_part1_info(0x80000002);
  local_170 = (undefined8 *)*puVar3;
  local_164 = *(undefined4 *)(puVar3 + 1);
  local_168 = *(uint *)((longlong)puVar3 + 0xc);
  plVar17 = plVar19;
  if (uVar15 < 0x11) {
LAB_00e067c8:
    uVar21 = FUN_00e7dbc0(local_168,uVar15);
    puVar18 = (undefined1 *)((longlong)plVar17 + uVar15);
  }
  else {
    FUN_00e7dbc0(local_168,0x10);
    uVar15 = lVar14 - 0x11;
    plVar17 = (longlong *)((longlong)alStack_128 + lVar9);
    puVar3 = (undefined8 *)cpuid_brand_part2_info(0x80000003);
    local_170 = (undefined8 *)*puVar3;
    local_164 = *(undefined4 *)(puVar3 + 1);
    local_168 = *(uint *)((longlong)puVar3 + 0xc);
    if (uVar15 < 0x11) goto LAB_00e067c8;
    FUN_00e7dbc0(local_168,0x10);
    uVar15 = lVar14 - 0x21;
    plVar17 = (longlong *)((longlong)alStack_128 + lVar9 + 0x10);
    puVar3 = (undefined8 *)cpuid_brand_part3_info(0x80000004);
    local_170 = (undefined8 *)*puVar3;
    local_164 = *(undefined4 *)(puVar3 + 1);
    local_168 = *(uint *)((longlong)puVar3 + 0xc);
    if (uVar15 < 0x11) goto LAB_00e067c8;
    uVar21 = FUN_00e7dbc0(local_168,0x10);
    puVar18 = auStack_108 + lVar9;
  }
  *puVar18 = 0;
  if (*unaff_RSI != 0) {
    local_168 = 1;
    local_170 = &DAT_026ba3d0;
    local_160 = plVar19;
    FUN_00d8cb40(uVar21,&local_170);
    puVar3 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar3;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  iVar7 = FUN_00e7dde0();
  plVar19 = (longlong *)((longlong)plVar19 + (longlong)iVar7);
LAB_00e0662c:
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = *puVar2;
  bVar13 = (byte)uVar4 & 0xf;
  bVar12 = 0;
  if ((~uVar4 & 0xf00) == 0) {
    bVar12 = (byte)(uVar4 >> 0x10) & 0xf;
  }
  bVar12 = bVar12 + ((byte)(uVar4 >> 4) & 0xf);
  uVar10 = uVar4 >> 8 & 0xf;
  bVar16 = (char)(uVar4 >> 0x14) + 0xf;
  if (uVar10 != 0xf) {
    bVar16 = (byte)uVar10;
  }
  lVar9 = 0;
  if (*unaff_RSI != 0) {
    local_140 = 3;
    local_148 = (undefined8 *)&DAT_02585ac0;
    local_13c = bVar13;
    local_13b = bVar12;
    local_13a = bVar16;
    FUN_00d8cb40(uVar10,&local_148);
    puVar3 = local_158;
    if (local_150 == '\0') {
      if (local_158 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_150 = '\0';
    }
    local_170 = puVar3;
    local_168 = local_168 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_168 != '\0') && (local_170 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    lVar9 = *unaff_RSI;
  }
  cVar11 = bVar13 + 0x30;
  if (9 < bVar13) {
    cVar11 = bVar13 + 0x37;
  }
  *(undefined1 *)plVar19 = 0x30;
  *(char *)((longlong)plVar19 + 1) = cVar11;
  bVar13 = (bVar12 & 0xf) + 0x37;
  if ((bVar12 & 0xf) < 10) {
    bVar13 = bVar12 | 0x30;
  }
  *(byte *)((longlong)plVar19 + 2) = bVar12 >> 4 | 0x30;
  *(byte *)((longlong)plVar19 + 3) = bVar13;
  bVar12 = bVar16 >> 4 | 0x30;
  if (0x9f < bVar16) {
    bVar12 = (bVar16 >> 4) + 0x37;
  }
  *(byte *)((longlong)plVar19 + 4) = bVar12;
  bVar16 = bVar16 & 0xf;
  cVar11 = bVar16 + 0x30;
  if (9 < bVar16) {
    cVar11 = bVar16 + 0x37;
  }
  *(char *)((longlong)plVar19 + 5) = cVar11;
  *(undefined1 *)((longlong)plVar19 + 6) = 0;
  FUN_00e07210(0x31,0x30,&local_138,lVar9 != 0);
  puVar3 = local_170;
  if (((char)local_168 == '\0') && (local_170 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  local_168 = local_168 & 0xffffff00;
  local_170 = puVar3;
  FUN_00d21140();
  if (((char)local_168 != '\0') && (local_170 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI != 0) {
    dVar20 = (double)FUN_00e7d6f0();
    local_160 = (longlong *)((dVar20 - local_1b8) * DAT_023907c0);
    local_168 = 1;
    local_170 = (undefined8 *)&DAT_024de5e0;
    FUN_00d8cb40(local_160,&local_170);
    puVar5 = local_148;
    if ((char)local_140 == '\0') {
      if (local_148 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_158 = puVar5;
    local_150 = '\0';
    FUN_00d21140();
    if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    uVar21 = FUN_00d92220();
    local_190 = local_148;
    local_188 = 0;
    if ((char)local_140 == '\0') {
      if (local_148 != (undefined8 *)0x0) {
        uVar21 = FUN_00d50b00();
      }
    }
    else {
      local_140 = local_140 & 0xffffff00;
    }
    local_188 = '\x01';
    FUN_00d95130(uVar21,&local_190);
    puVar5 = local_158;
    if (local_150 == '\0') {
      if (local_158 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_150 = '\0';
    }
    local_170 = puVar5;
    local_168 = local_168 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_168 != '\0') && (local_170 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar5 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_150 != '\0') && (local_158 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_188 != '\0') && (local_190 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_140 != '\0') && (local_148 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (puVar8 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




// ============================================================
// @00e05610 — 2233 bytes
// str: ""%lld""
// str: ""sysctl(HW_AVAILCPU) failure %I""
// str: ""sysctl(HW_MODEL) failure %I""
// str: ""machdep.cpu.brand_string""
// str: ""sysctlbyname(machdep.cpu.brand_string) failure %I""
// ============================================================

void FUN_00e05610(void)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  longlong *unaff_RSI;
  void *pvVar7;
  u_int uVar8;
  longlong lVar9;
  double dVar10;
  undefined8 uVar11;
  double local_1d0;
  size_t sVar12;
  void *in_stack_fffffffffffffe38;
  undefined8 *puVar13;
  char cVar14;
  size_t in_stack_fffffffffffffe40;
  undefined4 local_1a4;
  undefined8 *local_1a0;
  char local_198;
  longlong local_190;
  undefined8 *local_180;
  undefined8 *local_178;
  uint local_170;
  int local_16c;
  undefined8 *local_168;
  uint local_160;
  double local_158;
  undefined8 *local_150;
  char local_148;
  undefined8 local_140;
  longlong local_138;
  ulonglong uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar8 = (u_int)&local_138;
  FUN_00d8ede0();
  lVar4 = local_138;
  if (((char)uStack_130 == '\0') && (local_138 != 0)) {
    FUN_00d50b00();
    if (((char)uStack_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  if (lVar1 == 0) {
    local_180 = (undefined8 *)0x0;
  }
  else {
    local_180 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *local_180 = &DAT_02572358;
    (*DAT_02572370)();
    lVar9 = DAT_027850c8;
    if (DAT_027850c8 != 0) {
      FUN_00d50b00();
    }
    local_138 = lVar9;
    uStack_130 = uStack_130 & 0xffffffffffffff00;
    FUN_00d21140();
    if (((char)uStack_130 != '\0') && (local_138 != 0)) {
      FUN_00d50b20();
    }
    if (lVar9 != 0) {
      FUN_00d50b20();
    }
    local_1d0 = (double)FUN_00e7d6f0();
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_1a4 = 0;
  local_140 = 0x1900000006;
  local_190 = 4;
  iVar5 = _sysctl((int *)&local_190,(u_int)&local_1a4,(void *)0x0,(size_t *)0x0,
                  in_stack_fffffffffffffe38,in_stack_fffffffffffffe40);
  if (iVar5 == 0) {
    FUN_00e7df20(local_1a4,"%lld");
    iVar5 = FUN_00e7dde0();
    uVar8 = (int)&local_138 + iVar5;
    lVar9 = 0x100 - (longlong)iVar5;
  }
  else {
    lVar9 = 0x100;
    if (*unaff_RSI != 0) {
      piVar6 = ___error();
      local_16c = *piVar6;
      local_170 = 1;
      local_178 = &DAT_024cc6f0;
      FUN_00d8cb40(&DAT_024cc6f0,&local_178);
      puVar2 = local_150;
      if (local_148 == '\0') {
        if (local_150 != (undefined8 *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_148 = '\0';
      }
      local_168 = puVar2;
      local_160 = local_160 & 0xffffff00;
      FUN_00d21140();
      if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (puVar2 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  local_140 = 0x200000006;
  pvVar7 = (void *)0x0;
  local_190 = lVar9;
  iVar5 = _sysctl((int *)&local_190,uVar8,(void *)0x0,(size_t *)0x0,in_stack_fffffffffffffe38,
                  in_stack_fffffffffffffe40);
  sVar12 = (size_t)in_stack_fffffffffffffe38;
  if (iVar5 == 0) {
    lVar9 = lVar9 - (local_190 + -1);
  }
  else if (*unaff_RSI != 0) {
    piVar6 = ___error();
    local_16c = *piVar6;
    local_170 = 1;
    local_178 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_178);
    puVar2 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar2;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  local_190 = lVar9;
  iVar5 = _sysctlbyname((char *)0x0,&local_190,(size_t *)0x0,pvVar7,sVar12);
  if ((iVar5 != 0) && (*unaff_RSI != 0)) {
    piVar6 = ___error();
    local_16c = *piVar6;
    local_170 = 1;
    local_178 = &DAT_024cc6f0;
    FUN_00d8cb40(&DAT_024cc6f0,&local_178);
    puVar2 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar2;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_00e07210(0x36,0x30,&local_138,*unaff_RSI != 0);
  puVar2 = local_168;
  if (((char)local_160 == '\0') && (local_168 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  local_160 = local_160 & 0xffffff00;
  local_168 = puVar2;
  FUN_00d21140();
  if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI != 0) {
    dVar10 = (double)FUN_00e7d6f0();
    local_158 = (dVar10 - local_1d0) * DAT_023907c0;
    local_160 = 1;
    local_168 = (undefined8 *)&DAT_024de5e0;
    FUN_00d8cb40(local_158,&local_168);
    puVar13 = local_178;
    if ((char)local_170 == '\0') {
      if (local_178 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_170 = local_170 & 0xffffff00;
    }
    local_150 = puVar13;
    local_148 = '\0';
    FUN_00d21140();
    if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar13 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    cVar14 = '\0';
    puVar13 = local_180;
    uVar11 = FUN_00d92220();
    local_1a0 = local_178;
    local_198 = 0;
    if ((char)local_170 == '\0') {
      if (local_178 != (undefined8 *)0x0) {
        uVar11 = FUN_00d50b00();
      }
    }
    else {
      local_170 = local_170 & 0xffffff00;
    }
    local_198 = '\x01';
    FUN_00d95130(uVar11,&local_1a0);
    puVar3 = local_150;
    if (local_148 == '\0') {
      if (local_150 != (undefined8 *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_148 = '\0';
    }
    local_168 = puVar3;
    local_160 = local_160 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_160 != '\0') && (local_168 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    if ((local_148 != '\0') && (local_150 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (((char)local_170 != '\0') && (local_178 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if ((cVar14 != '\0') && (puVar13 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if ((lVar1 != 0) && (local_180 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




// ============================================================
// @00e0bbc0 — 1520 bytes
// ============================================================

ulonglong FUN_00e0bbc0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong **pplVar6;
  longlong **unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar7;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48 [8];
  longlong local_40;
  int local_38;
  
  plVar4 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar4 + 0x18))();
  plVar1 = (longlong *)(*unaff_RSI)[2];
  local_70 = plVar4;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_48[0] = '\0';
  local_50 = plVar1;
  FUN_00ca1b70();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar5 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar5 + 0x18))();
  plVar1 = *(longlong **)(unaff_RDI + 0x10);
  local_68 = plVar5;
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_48[0] = '\0';
  local_50 = plVar1;
  FUN_00ca1b70();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = DAT_02781700;
  if ((*(int *)(unaff_RDI + 0x20) == 2) && ((int)(*unaff_RSI)[4] == 2)) {
    if (DAT_02781700 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar1;
    local_48[0] = '\0';
    FUN_00ca13a0();
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = DAT_02781700;
    if (DAT_02781700 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_50 = plVar1;
    local_48[0] = '\0';
    FUN_00ca13a0();
    if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  plVar5 = local_68;
  plVar1 = DAT_02781700;
  if (param_2 == 2) {
    if (*(int *)(unaff_RDI + 0x20) == 0) {
      if (0 < (int)(*unaff_RSI)[4]) {
LAB_00e0bdaa:
        if (DAT_02781700 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar1;
        local_48[0] = '\0';
        FUN_00ca13a0();
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        plVar1 = DAT_02781700;
        if (DAT_02781700 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        local_50 = plVar1;
        local_48[0] = '\0';
        FUN_00ca13a0();
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (longlong *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_00e0be3c;
    }
    if (0 < *(int *)(unaff_RDI + 0x20)) {
      if ((int)(*unaff_RSI)[4] == 0) goto LAB_00e0bdaa;
      goto LAB_00e0be3c;
    }
LAB_00e0be46:
    if ((int)(*unaff_RSI)[4] == 2) {
LAB_00e0be6a:
      plVar1 = DAT_027c20d8;
      if (DAT_027c20d8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar1;
      local_48[0] = '\0';
      FUN_00ca13a0();
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      plVar1 = DAT_027c20d8;
      if (DAT_027c20d8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_50 = plVar1;
      local_48[0] = '\0';
      FUN_00ca13a0();
      if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar1 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
LAB_00e0befc:
    iVar3 = *(int *)(unaff_RDI + 0x20);
    if (2 < iVar3) goto LAB_00e0bf14;
    if ((int)(*unaff_RSI)[4] != 3) goto LAB_00e0bfbc;
  }
  else {
    if (1 < param_2 - 1U) goto LAB_00e0bfbc;
LAB_00e0be3c:
    iVar3 = *(int *)(unaff_RDI + 0x20);
    if (iVar3 < 2) goto LAB_00e0be46;
    if (iVar3 == 2) {
      if ((int)(*unaff_RSI)[4] < 2) goto LAB_00e0be6a;
      goto LAB_00e0befc;
    }
LAB_00e0bf14:
    if ((iVar3 != 3) || (2 < (int)(*unaff_RSI)[4])) goto LAB_00e0bfbc;
  }
  plVar1 = DAT_0276c080;
  if (DAT_0276c080 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar1;
  local_48[0] = '\0';
  FUN_00ca13a0();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  plVar1 = DAT_0276c080;
  if (DAT_0276c080 != (longlong *)0x0) {
    FUN_00d50b00();
  }
  local_50 = plVar1;
  local_48[0] = '\0';
  FUN_00ca13a0();
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_00e0bfbc:
  local_48[0] = '\0';
  local_50 = (longlong *)0x0;
  local_40 = plVar5[2];
  local_38 = 0;
  if (0 < *(int *)(local_40 + 0xc)) {
    unaff_RSI = &local_80;
    do {
      local_50 = *(longlong **)(*(longlong *)(local_40 + 0x10) + (longlong)local_38 * 8);
      FUN_01da7840((longlong)local_38,&local_50);
      plVar1 = local_60;
      if (local_58 == '\0') {
        if (local_60 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00e0c060;
        }
LAB_00e0c17d:
        if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar7 = 0;
        goto LAB_00e0c198;
      }
      if (local_60 == (longlong *)0x0) goto LAB_00e0c17d;
LAB_00e0c060:
      FUN_01da7840();
      local_80 = plVar1;
      local_78 = '\0';
      cVar2 = (**(code **)(*local_60 + 0x50))();
      if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar4 = local_70;
      if (cVar2 == '\0') {
        FUN_00d50b20();
        plVar4 = local_70;
        goto LAB_00e0c17d;
      }
      local_60 = local_50;
      local_58 = '\0';
      FUN_00ca13a0();
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(local_40 + 0xc));
  }
  if ((local_48[0] != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_50;
  pplVar6 = &local_60;
  if (local_48[0] != '\0') {
    pplVar6 = (longlong **)local_48;
  }
  local_60 = (longlong *)CONCAT71(local_60._1_7_,local_48[0]);
  *(char *)pplVar6 = '\0';
  if ((local_48[0] != '\0') && (plVar1 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(int *)((longlong)plVar1 + 0xc) == 0);
  if ((char)local_60 != '\0') {
    FUN_00d50b20();
  }
LAB_00e0c198:
  FUN_00d50b20();
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar7 & 0xffffffff;
}




// ============================================================
// @00e07210 — 1446 bytes
// str: "" /* %s */""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e07210(undefined1 param_1,undefined1 param_2,longlong param_3,char param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  longlong lVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 unaff_SIL;
  ulonglong uVar14;
  uint uVar15;
  undefined8 *unaff_RDI;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_025795a8;
  (*DAT_025795c0)();
  FUN_00d8db40();
  puVar5 = (undefined1 *)FUN_00d8b910();
  *puVar5 = unaff_SIL;
  puVar5[1] = param_2;
  puVar5[2] = param_1;
  puVar5[3] = 0x5f;
  puVar6 = (uint *)FUN_00e83010();
  iVar3 = FUN_00e7dde0();
  local_48 = 0xc3d2e1f0;
  local_58 = _DAT_023e0060;
  uStack_50 = _UNK_023e0068;
  iVar18 = 0;
  if (0x3f < iVar3) {
    lVar19 = 0;
    do {
      lVar10 = (longlong)(int)lVar19;
      lVar7 = (longlong)((int)lVar19 + 0x3c);
      uVar13 = (lVar7 - lVar10) + 3;
      if (uVar13 < 0xc) {
        uVar14 = 0;
        lVar19 = lVar10;
LAB_00e073c5:
        puVar11 = (uint *)(local_198 + uVar14 * 4);
        lVar10 = lVar19;
        do {
          uVar12 = *(uint *)(param_3 + lVar10);
          *puVar11 = uVar12 >> 0x18 | (uVar12 & 0xff0000) >> 8 | (uVar12 & 0xff00) << 8 |
                     uVar12 << 0x18;
          lVar19 = lVar10 + 4;
          puVar11 = puVar11 + 1;
          bVar1 = lVar10 < lVar7;
          lVar10 = lVar19;
        } while (bVar1);
      }
      else {
        uVar13 = (uVar13 >> 2) + 1;
        uVar14 = uVar13 & 0xfffffffffffffffc;
        lVar19 = lVar10 + uVar14 * 4;
        uVar16 = 0;
        do {
          auVar20 = pshufb(*(undefined1 (*) [16])(lVar10 + param_3 + uVar16 * 4),_DAT_023e0070);
          *(undefined1 (*) [16])(local_198 + uVar16 * 4) = auVar20;
          uVar16 = uVar16 + 4;
        } while (uVar14 != uVar16);
        if (uVar13 != uVar14) goto LAB_00e073c5;
      }
      FUN_00e05070();
      iVar18 = (int)lVar19;
    } while (iVar18 <= iVar3 + -0x40);
  }
  uVar17 = iVar3 - iVar18;
  local_168 = (undefined1  [16])0x0;
  local_178 = (undefined1  [16])0x0;
  local_188 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  uVar12 = 0;
  if (0 < (int)uVar17) {
    bVar2 = 0;
    if (uVar17 == 1) {
      uVar13 = 0;
    }
    else {
      lVar19 = iVar18 + param_3;
      uVar13 = 0;
      do {
        uVar15 = (uint)uVar13 & 0xfffffffc;
        uVar12 = (uint)*(byte *)(lVar19 + uVar13) << (bVar2 & 0x10 ^ 0x18) |
                 *(uint *)(local_198 + uVar15);
        *(uint *)(local_198 + uVar15) = uVar12;
        *(uint *)(local_198 + uVar15) =
             (uint)*(byte *)(lVar19 + 1 + uVar13) << (bVar2 & 0x10 ^ 0x10) | uVar12;
        uVar13 = uVar13 + 2;
        bVar2 = bVar2 + 0x10;
      } while ((uVar17 & 0xfffffffe) != uVar13);
    }
    uVar12 = uVar17;
    if ((uVar17 & 1) != 0) {
      *(uint *)(local_198 + ((uint)uVar13 & 0xfffffffc)) =
           *(uint *)(local_198 + ((uint)uVar13 & 0xfffffffc)) |
           (uint)*(byte *)(param_3 + (longlong)iVar18 + uVar13) << (~((char)uVar13 * '\b') & 0x18U);
    }
  }
  *(uint *)(local_198 + (uVar12 & 0xfffffffc)) =
       *(uint *)(local_198 + (uVar12 & 0xfffffffc)) | 0x80 << (~((char)uVar12 * '\b') & 0x18U);
  if (0x37 < (int)uVar17) {
    FUN_00e05070();
    local_168._0_12_ = SUB1612((undefined1  [16])0x0,0);
    local_178 = (undefined1  [16])0x0;
    local_188 = (undefined1  [16])0x0;
    local_198 = (undefined1  [16])0x0;
  }
  local_168._12_4_ = iVar3 << 3;
  FUN_00e05070();
  puVar6[4] = local_48 >> 0x18 | (local_48 & 0xff0000) >> 8 | (local_48 & 0xff00) << 8 |
              local_48 << 0x18;
  puVar6[3] = uStack_50._4_4_ >> 0x18 | (uStack_50._4_4_ & 0xff0000) >> 8 |
              (uStack_50._4_4_ & 0xff00) << 8 | uStack_50._4_4_ << 0x18;
  puVar6[2] = (uint)uStack_50 >> 0x18 | ((uint)uStack_50 & 0xff0000) >> 8 |
              ((uint)uStack_50 & 0xff00) << 8 | (uint)uStack_50 << 0x18;
  puVar6[1] = local_58._4_4_ >> 0x18 | (local_58._4_4_ & 0xff0000) >> 8 |
              (local_58._4_4_ & 0xff00) << 8 | local_58._4_4_ << 0x18;
  *puVar6 = (uint)local_58 >> 0x18 | ((uint)local_58 & 0xff0000) >> 8 |
            ((uint)local_58 & 0xff00) << 8 | (uint)local_58 << 0x18;
  bVar8 = (byte)*puVar6 >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < (byte)*puVar6) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[4] = bVar2;
  bVar2 = (byte)*puVar6 & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[5] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 1) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 1)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[6] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 1) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[7] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 2) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 2)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[8] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 2) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[9] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 3) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 3)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[10] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 3) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xb] = cVar9;
  bVar8 = (byte)puVar6[1] >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < (byte)puVar6[1]) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0xc] = bVar2;
  bVar2 = (byte)puVar6[1] & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xd] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 5) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 5)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0xe] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 5) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0xf] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 6) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 6)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0x10] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 6) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0x11] = cVar9;
  bVar8 = *(byte *)((longlong)puVar6 + 7) >> 4;
  bVar2 = bVar8 | 0x30;
  if (0x9f < *(byte *)((longlong)puVar6 + 7)) {
    bVar2 = bVar8 + 0x37;
  }
  puVar5[0x12] = bVar2;
  bVar2 = *(byte *)((longlong)puVar6 + 7) & 0xf;
  cVar9 = bVar2 + 0x30;
  if (9 < bVar2) {
    cVar9 = bVar2 + 0x37;
  }
  puVar5[0x13] = cVar9;
  puVar5[0x14] = 0;
  if (param_4 != '\0') {
    local_198._8_4_ = 1;
    local_198._0_8_ = &DAT_026ba3d0;
    local_188._0_8_ = param_3;
    FUN_00d94d80(cVar9,local_198);
  }
  FUN_00d8c7d0();
  FUN_00e83070();
  *unaff_RDI = puVar4;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




// ============================================================
// @00e08fe0 — 1393 bytes
// str: ""Duration: %f ms""
// str: ""IOPlatformExpertDevice""
// str: ""SystemSerialNo: %@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e094e2) */
/* WARNING: Removing unreachable block (ram,0x00e094ee) */

void FUN_00e08fe0(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *unaff_RSI;
  undefined8 *puVar10;
  double dVar11;
  double local_b0;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  undefined8 *local_48;
  char local_40;
  
  FUN_00d8ede0();
  puVar9 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  if (lVar1 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    puVar10 = DAT_02785148;
    if (DAT_02785148 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    local_58 = puVar10;
    local_50 = local_50 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  _IOServiceMatching();
  iVar5 = _IOServiceGetMatchingService();
  bVar3 = true;
  bVar2 = true;
  puVar10 = puVar9;
  if (iVar5 != 0) {
    lVar7 = _IORegistryEntryCreateCFProperty(0,*(undefined8 *)PTR__kCFAllocatorDefault_024a98d8);
    _IOObjectRelease();
    if (lVar7 != 0) {
      FUN_00e1c780();
      puVar10 = local_58;
      if (puVar9 == local_58) {
LAB_00e09198:
        puVar10 = puVar9;
        if ((char)local_50 != '\0') {
LAB_00e0919e:
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if ((char)local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
            puVar9 = puVar10;
            goto LAB_00e09198;
          }
          if ((char)local_50 == '\0') goto LAB_00e091b1;
          goto LAB_00e0919e;
        }
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
LAB_00e091b1:
    if (puVar10 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x0;
      goto joined_r0x00e094fe;
    }
    iVar5 = FUN_00d8c7a0();
    if (iVar5 != 0) {
      uVar8 = FUN_00d8b910();
      FUN_00e07210(0x32,0x30,uVar8,*unaff_RSI != 0);
      puVar9 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
        }
        local_50 = local_50 & 0xffffff00;
        local_58 = puVar9;
        FUN_00d21140();
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (*unaff_RSI != 0) {
          local_50 = 1;
          local_58 = &DAT_024c5048;
          local_40 = 0;
          uVar8 = FUN_00d50b00();
          local_40 = '\x01';
          local_48 = puVar10;
          FUN_00d8cb40(uVar8,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          local_58 = &DAT_024c5048;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          dVar11 = (double)FUN_00e7d6f0();
          local_48 = (undefined8 *)((dVar11 - local_b0) * DAT_023907c0);
          local_50 = 1;
          local_58 = (undefined8 *)&DAT_024de5e0;
          FUN_00d8cb40(local_48,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          uVar8 = FUN_00d92220();
          local_88 = local_68;
          local_80 = 0;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_80 = '\x01';
          FUN_00d95130(uVar8,&local_88);
          puVar4 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_58 = puVar4;
          local_50 = local_50 & 0xffffff00;
          FUN_00d21140();
          if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = false;
        bVar2 = false;
        goto joined_r0x00e094fe;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
joined_r0x00e094fe:
  if ((lVar1 != 0) && (bVar2 = bVar3, puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e08490 — 1393 bytes
// str: ""Duration: %f ms""
// str: ""IOPlatformExpertDevice""
// str: ""UUID: %@""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e08992) */
/* WARNING: Removing unreachable block (ram,0x00e0899e) */

void FUN_00e08490(void)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong *unaff_RSI;
  undefined8 *puVar10;
  double dVar11;
  double local_b0;
  undefined8 *local_88;
  char local_80;
  undefined8 *local_78;
  char local_70;
  undefined8 *local_68;
  char local_60;
  undefined8 *local_58;
  uint local_50;
  undefined8 *local_48;
  char local_40;
  
  FUN_00d8ede0();
  puVar9 = local_58;
  if (((char)local_50 == '\0') && (local_58 != (undefined8 *)0x0)) {
    FUN_00d50b00();
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  if (lVar1 == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar6 = &DAT_02572358;
    (*DAT_02572370)();
    puVar10 = DAT_02785140;
    if (DAT_02785140 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
    local_58 = puVar10;
    local_50 = local_50 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  _IOServiceMatching();
  iVar5 = _IOServiceGetMatchingService();
  bVar3 = true;
  bVar2 = true;
  puVar10 = puVar9;
  if (iVar5 != 0) {
    lVar7 = _IORegistryEntryCreateCFProperty(0,*(undefined8 *)PTR__kCFAllocatorDefault_024a98d8);
    _IOObjectRelease();
    if (lVar7 != 0) {
      FUN_00e1c780();
      puVar10 = local_58;
      if (puVar9 == local_58) {
LAB_00e08648:
        puVar10 = puVar9;
        if ((char)local_50 != '\0') {
LAB_00e0864e:
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        if ((char)local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
          }
          if (puVar9 != (undefined8 *)0x0) {
            FUN_00d50b20();
            puVar9 = puVar10;
            goto LAB_00e08648;
          }
          if ((char)local_50 == '\0') goto LAB_00e08661;
          goto LAB_00e0864e;
        }
        if (puVar9 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
LAB_00e08661:
    if (puVar10 == (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x0;
      goto joined_r0x00e089ae;
    }
    iVar5 = FUN_00d8c7a0();
    if (iVar5 != 0) {
      uVar8 = FUN_00d8b910();
      FUN_00e07210(0x32,0x30,uVar8,*unaff_RSI != 0);
      puVar9 = local_58;
      if (local_58 != (undefined8 *)0x0) {
        if ((char)local_50 == '\0') {
          FUN_00d50b00();
        }
        local_50 = local_50 & 0xffffff00;
        local_58 = puVar9;
        FUN_00d21140();
        if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        if (*unaff_RSI != 0) {
          local_50 = 1;
          local_58 = &DAT_024c5048;
          local_40 = 0;
          uVar8 = FUN_00d50b00();
          local_40 = '\x01';
          local_48 = puVar10;
          FUN_00d8cb40(uVar8,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          local_58 = &DAT_024c5048;
          if ((local_40 != '\0') && (local_48 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          dVar11 = (double)FUN_00e7d6f0();
          local_48 = (undefined8 *)((dVar11 - local_b0) * DAT_023907c0);
          local_50 = 1;
          local_58 = (undefined8 *)&DAT_024de5e0;
          FUN_00d8cb40(local_48,&local_58);
          puVar4 = local_68;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_78 = puVar4;
          local_70 = '\0';
          FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          uVar8 = FUN_00d92220();
          local_88 = local_68;
          local_80 = 0;
          if (local_60 == '\0') {
            if (local_68 != (undefined8 *)0x0) {
              uVar8 = FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_80 = '\x01';
          FUN_00d95130(uVar8,&local_88);
          puVar4 = local_78;
          if (local_70 == '\0') {
            if (local_78 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_70 = '\0';
          }
          local_58 = puVar4;
          local_50 = local_50 & 0xffffff00;
          FUN_00d21140();
          if (((char)local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if (puVar4 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
          if ((local_70 != '\0') && (local_78 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
        }
        bVar3 = false;
        bVar2 = false;
        goto joined_r0x00e089ae;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
joined_r0x00e089ae:
  if ((lVar1 != 0) && (bVar2 = bVar3, puVar6 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (!bVar2 && puVar9 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar10 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e05070 — 1314 bytes
// ============================================================

void FUN_00e05070(void)

{
  longlong lVar1;
  uint uVar2;
  uint *unaff_RSI;
  uint *unaff_RDI;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar9 = *unaff_RDI;
  uVar2 = unaff_RDI[1];
  uVar4 = unaff_RDI[2];
  uVar3 = *unaff_RSI +
          (~uVar2 & unaff_RDI[3]) + unaff_RDI[4] + (uVar2 & uVar4) + (uVar9 << 5 | uVar9 >> 0x1b) +
          0x5a827999;
  uVar2 = uVar2 << 0x1e | uVar2 >> 2;
  uVar10 = unaff_RSI[1] +
           (~uVar9 & uVar4) + unaff_RDI[3] + (uVar9 & uVar2) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
           0x5a827999;
  uVar5 = uVar9 << 0x1e | uVar9 >> 2;
  uVar9 = unaff_RSI[2];
  uVar6 = uVar9 + (~uVar3 & uVar2) + uVar4 + (uVar3 & uVar5) + (uVar10 * 0x20 | uVar10 >> 0x1b) +
          0x5a827999;
  uVar4 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar2 = unaff_RSI[3] +
          (~uVar10 & uVar5) + uVar2 + (uVar10 & uVar4) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x5a827999
  ;
  uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar8 = unaff_RSI[4] +
          (~uVar6 & uVar4) + uVar5 + (uVar6 & uVar10) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar5 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar3 = unaff_RSI[5] +
          (~uVar2 & uVar10) + uVar4 + (uVar2 & uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999;
  uVar2 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar10 = unaff_RSI[6] +
           (~uVar8 & uVar5) + uVar10 + (uVar8 & uVar2) + (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x5a827999
  ;
  uVar8 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar4 = unaff_RSI[7] +
          (~uVar3 & uVar2) + uVar5 + (uVar3 & uVar8) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x5a827999
  ;
  uVar6 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar5 = unaff_RSI[8] +
          (~uVar10 & uVar8) + uVar2 + (uVar10 & uVar6) + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x5a827999
  ;
  uVar10 = uVar10 * 0x40000000 | uVar10 >> 2;
  uVar2 = unaff_RSI[9] +
          (~uVar4 & uVar6) + uVar8 + (uVar4 & uVar10) + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0x5a827999;
  uVar3 = uVar4 * 0x40000000 | uVar4 >> 2;
  uVar6 = unaff_RSI[10] +
          (~uVar5 & uVar10) + uVar6 + (uVar5 & uVar3) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = unaff_RSI[0xb] +
          (~uVar2 & uVar3) + uVar10 + (uVar2 & uVar5) + (uVar6 * 0x20 | uVar6 >> 0x1b) + 0x5a827999;
  uVar3 = (~uVar6 & uVar5) + uVar3 + (uVar6 & uVar4) + (uVar2 * 0x20 | uVar2 >> 0x1b) +
          unaff_RSI[0xc] + 0x5a827999;
  uVar10 = uVar6 * 0x40000000 | uVar6 >> 2;
  uVar7 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar2 = (~uVar2 & uVar4) + uVar5 + (uVar2 & uVar10) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
          unaff_RSI[0xd] + 0x5a827999;
  uVar5 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar8 = unaff_RSI[0xe] +
          (~uVar3 & uVar10) + uVar4 + (uVar3 & uVar7) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999;
  uVar6 = *unaff_RSI ^ uVar9 ^ unaff_RSI[8] ^ unaff_RSI[0xd];
  uVar4 = uVar2 * 0x40000000 | uVar2 >> 2;
  uVar3 = unaff_RSI[0xf] +
          (~uVar2 & uVar7) + uVar10 + (uVar2 & uVar5) + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x5a827999;
  uVar10 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar6 = uVar6 << 1 | (uint)((int)uVar6 < 0);
  uVar8 = uVar6 + (~uVar8 & uVar5) + uVar7 + (uVar8 & uVar4) + (uVar3 * 0x20 | uVar3 >> 0x1b) +
          0x5a827999;
  unaff_RSI[0x10] = uVar6;
  uVar2 = unaff_RSI[9] ^ unaff_RSI[0xe] ^ unaff_RSI[3] ^ unaff_RSI[1];
  uVar7 = uVar2 << 1 | (uint)((int)uVar2 < 0);
  unaff_RSI[0x11] = uVar7;
  uVar9 = unaff_RSI[10] ^ unaff_RSI[0xf] ^ unaff_RSI[4] ^ uVar9;
  uVar2 = uVar3 * 0x40000000 | uVar3 >> 2;
  uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
  uVar5 = uVar7 + (~uVar3 & uVar4) + uVar5 + (uVar3 & uVar10) + (uVar8 * 0x20 | uVar8 >> 0x1b) +
          0x5a827999;
  unaff_RSI[0x12] = uVar9;
  uVar9 = uVar9 + (~uVar8 & uVar10) + uVar4 + (uVar8 & uVar2) + (uVar5 * 0x20 | uVar5 >> 0x1b) +
          0x5a827999;
  uVar4 = uVar8 * 0x40000000 | uVar8 >> 2;
  uVar3 = uVar6 ^ unaff_RSI[0xb] ^ unaff_RSI[5] ^ unaff_RSI[3];
  uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
  unaff_RSI[0x13] = uVar3;
  lVar1 = 0;
  uVar3 = (~uVar5 & uVar2) + uVar10 + (uVar5 & uVar4) + (uVar9 * 0x20 | uVar9 >> 0x1b) + uVar3 +
          0x5a827999;
  uVar5 = uVar5 * 0x40000000 | uVar5 >> 2;
  do {
    uVar8 = uVar5;
    uVar10 = uVar3;
    uVar6 = uVar4;
    uVar4 = unaff_RSI[lVar1 + 0xc] ^ unaff_RSI[lVar1 + 0x11] ^ unaff_RSI[lVar1 + 6] ^
            unaff_RSI[lVar1 + 4];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    unaff_RSI[lVar1 + 0x14] = uVar4;
    uVar3 = uVar4 + (uVar8 ^ uVar6 ^ uVar9) + uVar2 + (uVar10 << 5 | uVar10 >> 0x1b) + 0x6ed9eba1;
    uVar5 = uVar9 << 0x1e | uVar9 >> 2;
    lVar1 = lVar1 + 1;
    uVar2 = uVar6;
    uVar9 = uVar10;
    uVar4 = uVar8;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  do {
    uVar4 = uVar5;
    uVar2 = uVar3;
    uVar9 = uVar8;
    uVar3 = unaff_RSI[lVar1 + 0x20] ^ unaff_RSI[lVar1 + 0x25] ^ unaff_RSI[lVar1 + 0x1a] ^
            unaff_RSI[lVar1 + 0x18];
    uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    unaff_RSI[lVar1 + 0x28] = uVar3;
    uVar3 = uVar3 + (uVar4 & uVar9 | (uVar4 | uVar9) & uVar10) + uVar6 +
                    (uVar2 << 5 | uVar2 >> 0x1b) + 0x8f1bbcdc;
    uVar5 = uVar10 << 0x1e | uVar10 >> 2;
    lVar1 = lVar1 + 1;
    uVar6 = uVar9;
    uVar10 = uVar2;
    uVar8 = uVar4;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  do {
    uVar10 = uVar5;
    uVar6 = uVar3;
    uVar8 = uVar4;
    uVar4 = unaff_RSI[lVar1 + 0x34] ^ unaff_RSI[lVar1 + 0x39] ^ unaff_RSI[lVar1 + 0x2e] ^
            unaff_RSI[lVar1 + 0x2c];
    uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
    unaff_RSI[lVar1 + 0x3c] = uVar4;
    uVar3 = uVar4 + (uVar10 ^ uVar8 ^ uVar2) + uVar9 + (uVar6 << 5 | uVar6 >> 0x1b) + 0xca62c1d6;
    uVar5 = uVar2 << 0x1e | uVar2 >> 2;
    lVar1 = lVar1 + 1;
    uVar9 = uVar8;
    uVar2 = uVar6;
    uVar4 = uVar10;
  } while (lVar1 != 0x14);
  *unaff_RDI = uVar3 + *unaff_RDI;
  unaff_RDI[1] = uVar6 + unaff_RDI[1];
  unaff_RDI[2] = uVar5 + unaff_RDI[2];
  unaff_RDI[3] = uVar10 + unaff_RDI[3];
  unaff_RDI[4] = unaff_RDI[4] + uVar8;
  return;
}




// ============================================================
// @00e07ae0 — 1296 bytes
// str: ""Duration: %f ms""
// str: ""OSVersion: %f""
// str: ""operatingSystemVersion""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e07fa9) */
/* WARNING: Removing unreachable block (ram,0x00e07fb5) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e07ae0(void)

{
  longlong lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  longlong *unaff_RSI;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined *puVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  double dVar11;
  undefined8 uVar12;
  double local_b0;
  undefined *local_88;
  char local_80;
  undefined *local_78;
  uint local_70;
  double local_68;
  undefined *local_60;
  char local_58;
  undefined *local_50;
  undefined *local_48;
  uint local_40;
  double local_38;
  
  FUN_00d8ede0();
  puVar10 = local_48;
  if (((char)local_40 == '\0') && (local_48 != (undefined *)0x0)) {
    FUN_00d50b00();
    if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar1 = *unaff_RSI;
  local_50 = puVar10;
  if (lVar1 == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    puVar10 = DAT_027850e8;
    if (DAT_027850e8 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    local_48 = puVar10;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    local_b0 = (double)FUN_00e7d6f0();
  }
  lVar4 = (*(code *)PTR__objc_msgSend_024a9998)();
  if (lVar4 == 0) {
    uVar9 = 0;
    uVar8 = 0;
    uVar5 = 0;
  }
  else {
    _objc_msgSend_stret(extraout_XMM0_Qa,PTR_s_operatingSystemVersion_026c94b0);
    uVar5 = (ulonglong)local_48 & 0xffffffff;
    uVar9 = (ulonglong)local_38 & 0xffffffff;
    uVar8 = (ulonglong)local_40 << 0x20;
  }
  FUN_00e08370(0x42,0x30,uVar8 | uVar5,uVar9);
  puVar2 = local_50;
  puVar10 = local_78;
  if (local_50 == local_78) {
    puVar10 = local_50;
    if (((char)local_70 != '\0') && (local_78 != (undefined *)0x0)) {
      FUN_00d50b20();
      puVar10 = local_50;
    }
  }
  else if ((char)local_70 == '\0') {
    if (local_78 != (undefined *)0x0) {
      FUN_00d50b00();
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00d50b20();
    }
  }
  else if (local_50 != (undefined *)0x0) {
    FUN_00d50b20();
  }
  local_40 = local_40 & 0xffffff00;
  local_48 = puVar10;
  FUN_00d21140();
  if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
    FUN_00d50b20();
  }
  if (*unaff_RSI != 0) {
    local_50 = puVar10;
    lVar4 = (*(code *)PTR__objc_msgSend_024a9998)();
    if (lVar4 == 0) {
      uVar6 = 0;
      dVar11 = 0.0;
      local_38._0_4_ = 0;
    }
    else {
      _objc_msgSend_stret(extraout_XMM0_Qa_00,PTR_s_operatingSystemVersion_026c94b0);
      dVar11 = (double)(int)local_48;
      uVar6 = local_40;
      if (0x3e6 < (int)local_40) {
        uVar6 = 999;
      }
    }
    iVar7 = 999;
    if (local_38._0_4_ < 999) {
      iVar7 = local_38._0_4_;
    }
    local_68 = (double)iVar7 * DAT_023d7d68 + (double)(int)uVar6 * _DAT_02391038 + dVar11;
    local_70 = 1;
    local_78 = &DAT_024de5e0;
    FUN_00d8cb40(iVar7,&local_78);
    puVar10 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_48 = puVar10;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar10 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    dVar11 = (double)FUN_00e7d6f0();
    local_38 = (dVar11 - local_b0) * DAT_023907c0;
    local_40 = 1;
    local_48 = &DAT_024de5e0;
    FUN_00d8cb40(local_38,&local_48);
    puVar10 = local_50;
    puVar2 = local_60;
    if (local_58 == '\0') {
      if (local_60 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_78 = puVar2;
    local_70 = local_70 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_70 != '\0') && (local_78 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    uVar12 = FUN_00d92220();
    local_88 = local_60;
    local_80 = 0;
    if (local_58 == '\0') {
      if (local_60 != (undefined *)0x0) {
        uVar12 = FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    local_80 = '\x01';
    FUN_00d95130(uVar12,&local_88);
    puVar2 = local_78;
    if ((char)local_70 == '\0') {
      if (local_78 != (undefined *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = local_70 & 0xffffff00;
    }
    local_48 = puVar2;
    local_40 = local_40 & 0xffffff00;
    FUN_00d21140();
    if (((char)local_40 != '\0') && (local_48 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if (puVar2 != (undefined *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_70 != '\0') && (local_78 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((lVar1 != 0) && (puVar3 != (undefined8 *)0x0)) {
    FUN_00d50b20();
  }
  if (puVar10 != (undefined *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @00e0c660 — 1039 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x00e0c964) */
/* WARNING: Removing unreachable block (ram,0x00e0c970) */

ulonglong FUN_00e0c660(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong local_a0;
  char local_98 [8];
  longlong local_90;
  int local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(*unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar1;
  FUN_00c9fe20();
  lVar1 = local_a0;
  pcVar4 = &local_50;
  if (local_98[0] != '\0') {
    pcVar4 = local_98;
  }
  local_50 = local_98[0];
  *pcVar4 = '\0';
  if ((local_98[0] != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  local_78 = 0;
  if (local_50 == '\0') {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  lVar5 = local_60;
  local_78 = '\x01';
  local_80 = lVar1;
  FUN_0009d720();
  local_58 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    local_98[0] = '\0';
    local_a0 = 0;
    local_90 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
    local_88 = 0;
    if (0 < *(int *)(local_90 + 0xc)) {
      do {
        local_a0 = *(longlong *)(*(longlong *)(local_90 + 0x10) + (longlong)local_88 * 8);
        FUN_00e0baf0((longlong)local_88,&local_a0);
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_00e0c800;
          }
LAB_00e0ca66:
          if ((local_98[0] != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
          uVar6 = 0;
          if (local_58 == 0) goto LAB_00e0ca11;
          goto LAB_00e0ca0c;
        }
        if (local_40 == 0) goto LAB_00e0ca66;
LAB_00e0c800:
        FUN_00e0baf0();
        local_68 = 0;
        lVar1 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        lVar5 = local_60;
        local_68 = '\x01';
        local_70 = lVar1;
        FUN_00e0cdb0();
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        FUN_00e0cdb0();
        lVar2 = CONCAT71(uStack_4f,local_50);
        if (local_48 == '\0') {
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_48 = '\0';
        }
        local_38 = '\0';
        local_40 = lVar2;
        cVar3 = FUN_00d7aa00();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_40 = local_a0;
          local_38 = '\0';
          FUN_00d23f50();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
        if (cVar3 == '\0') goto LAB_00e0ca66;
        local_88 = local_88 + 1;
      } while (local_88 < *(int *)(local_90 + 0xc));
    }
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),*(int *)(local_58 + 0xc) == 0);
LAB_00e0ca0c:
  FUN_00d50b20();
LAB_00e0ca11:
  if (local_60 != 0) {
    FUN_00d50b20();
  }
  return uVar6 & 0xffffffff;
}




// ============================================================
// @00e0cea0 — 749 bytes
// ============================================================

ulonglong FUN_00e0cea0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_98;
  char local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(*unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    local_90 = '\0';
    local_98 = 0;
    local_88 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
    local_80 = 0;
    if (0 < *(int *)(local_88 + 0xc)) {
      do {
        local_98 = *(longlong *)(*(longlong *)(local_88 + 0x10) + (longlong)local_80 * 8);
        uVar6 = FUN_00e0baf0((longlong)local_80,&local_98);
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar6 = FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              uVar6 = FUN_00d50b20();
            }
            goto LAB_00e0cfa0;
          }
        }
        else if (local_40 != 0) {
LAB_00e0cfa0:
          FUN_00e0baf0(uVar6,&local_98);
          lVar2 = local_40;
          if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_78 = lVar2;
          local_70 = '\0';
          FUN_00e0cdb0();
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          local_68 = lVar1;
          local_60 = '\0';
          FUN_00e0cdb0();
          unaff_R14 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_40 = unaff_R14;
          local_38 = '\0';
          FUN_00d7ab40();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_R14 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          iVar3 = FUN_00c8d620();
          cVar4 = '\x03';
          if ((double)*(int *)(lVar2 + 0xc) * DAT_023942d0 <= (double)iVar3) {
            iVar3 = FUN_00c8d620();
            cVar4 = ((double)iVar3 < (double)*(int *)(lVar1 + 0xc) * DAT_023942d0) * '\x02' + '\x01'
            ;
          }
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
          if (cVar4 != '\x03') {
            if (local_90 == '\0') goto LAB_00e0d18d;
            goto LAB_00e0d17c;
          }
        }
        local_80 = local_80 + 1;
      } while (local_80 < *(int *)(local_88 + 0xc));
    }
    cVar4 = '\x02';
    if (local_90 != '\0') {
LAB_00e0d17c:
      if (local_98 != 0) {
        FUN_00d50b20();
      }
    }
LAB_00e0d18d:
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (cVar4 != '\x02') goto LAB_00e0d198;
  }
  uVar5 = 0;
LAB_00e0d198:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @00e045e0 — 500 bytes
// str: ""GNDistinction""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e045e0(void)

{
  int iVar1;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff80();
  *unaff_RDI = &DAT_02585398;
  FUN_00e04820();
  *(undefined4 *)(unaff_RDI + 3) = 0;
  if (DAT_02784d00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02784c50 = FUN_00d4fe50();
      _DAT_02784c38 = "GNDistinction";
      _DAT_02784c40 = 0x28;
      _DAT_02784c48 = FUN_00e04470;
      _DAT_02784c58 = 0;
      uRam0000000002784c60 = 0;
      _DAT_02784c68 = 0;
      uRam0000000002784c70 = 0;
      _DAT_02784c78 = 0;
      uRam0000000002784c80 = 0;
      _DAT_02784c88 = 0;
      uRam0000000002784c90 = 0;
      _DAT_02784c98 = 0;
      uRam0000000002784ca0 = 0;
      _DAT_02784ca8 = 0;
      uRam0000000002784cb0 = 0;
      _DAT_02784cb8 = 0;
      uRam0000000002784cc0 = 0;
      _DAT_02784cc8 = 0;
      uRam0000000002784cd0 = 0;
      _DAT_02784cd8 = 0;
      uRam0000000002784ce0 = 0;
      _DAT_02784ce8 = 0;
      _uRam0000000002784cf0 = 0;
      _DAT_02784cf8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02784cf3 == '\0') {
    FUN_00e04aa0();
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)unaff_RDI + 0x1c) = 0;
  if (DAT_02784d00 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02784c50 = FUN_00d4fe50();
      _DAT_02784c38 = "GNDistinction";
      _DAT_02784c40 = 0x28;
      _DAT_02784c48 = FUN_00e04470;
      _DAT_02784c58 = 0;
      uRam0000000002784c60 = 0;
      _DAT_02784c68 = 0;
      uRam0000000002784c70 = 0;
      _DAT_02784c78 = 0;
      uRam0000000002784c80 = 0;
      _DAT_02784c88 = 0;
      uRam0000000002784c90 = 0;
      _DAT_02784c98 = 0;
      uRam0000000002784ca0 = 0;
      _DAT_02784ca8 = 0;
      uRam0000000002784cb0 = 0;
      _DAT_02784cb8 = 0;
      uRam0000000002784cc0 = 0;
      _DAT_02784cc8 = 0;
      uRam0000000002784cd0 = 0;
      _DAT_02784cd8 = 0;
      uRam0000000002784ce0 = 0;
      _DAT_02784ce8 = 0;
      _uRam0000000002784cf0 = 0;
      _DAT_02784cf8 = 0;
      ___cxa_guard_release();
    }
  }
  if (DAT_02784cf3 == '\0') {
    FUN_00e04c10();
    FUN_00e87980();
  }
  FUN_00e04d80();
  return;
}



