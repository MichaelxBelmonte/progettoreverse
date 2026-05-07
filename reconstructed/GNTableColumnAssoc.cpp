// Reconstructed implementation of GNTableColumnAssoc
// From MikeCore binary — reverse-engineered pseudocode

#include "GNTableColumnAssoc.h"

// ============================================================
// @01dfa400 — 4352 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dfa6ad) */
/* WARNING: Removing unreachable block (ram,0x01dfa6b9) */

undefined8 FUN_01dfa400(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  char cVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  char cVar17;
  longlong *plVar18;
  bool bVar19;
  longlong local_268;
  char local_260;
  longlong local_258;
  char local_250;
  longlong local_248;
  char local_240;
  undefined8 *local_238;
  char local_230;
  longlong *local_228;
  char local_220;
  longlong *local_218;
  char local_210;
  longlong *local_208;
  char local_200;
  longlong *local_1f8;
  char local_1f0;
  longlong *local_1e8;
  char local_1e0;
  longlong *local_1d8;
  char local_1d0;
  longlong *local_1c8;
  char local_1c0;
  longlong *local_1b8;
  char local_1b0;
  longlong *local_1a8;
  char local_1a0;
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
  longlong *local_148;
  char local_140;
  longlong *local_138;
  char local_130;
  longlong *local_128;
  char local_120;
  longlong *local_118;
  char local_110;
  longlong *local_108;
  char local_100;
  longlong *local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong *local_a0;
  char local_98;
  longlong *local_90;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  int local_5c;
  longlong *local_58;
  longlong *local_50;
  char local_48;
  ulonglong local_40;
  char local_31;
  undefined7 uVar16;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  local_70 = puVar5;
  (*DAT_02572370)();
  local_78 = (longlong *)*unaff_RSI;
  cVar11 = (char)unaff_RSI[1];
  if ((cVar11 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  lVar15 = DAT_027edfd0;
  local_c0 = (longlong *)0x0;
  local_b8 = '\x01';
  local_5c = 0;
  if (DAT_027edfd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccab60();
  local_90 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  lVar15 = DAT_027edfd0;
  if (DAT_027edfd0 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  local_80 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  lVar15 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  local_68 = local_50;
  if (local_48 == '\0') {
    if (((local_50 != (longlong *)0x0) && (FUN_00d50b00(), local_48 != '\0')) &&
       (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48 = '\0';
  }
  if (lVar15 != 0) {
    FUN_00d50b20();
  }
  if (local_68 == (longlong *)0x0) {
LAB_01dfa6fd:
    lVar15 = DAT_027f2e90;
    if (local_90 == (longlong *)0x0) {
      plVar18 = (longlong *)0x0;
      cVar17 = '\0';
      local_58 = (longlong *)0x0;
      plVar7 = (longlong *)0x0;
      local_40 = 0;
    }
    else {
      local_31 = cVar11;
      if (DAT_027f2e90 != 0) {
        FUN_00d50b00();
      }
      local_248 = lVar15;
      local_240 = '\x01';
      plVar7 = (longlong *)FUN_01cac500();
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_48 = '\0';
      local_50 = plVar7;
      FUN_00d243f0();
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      local_40 = CONCAT44(local_40._4_4_,param_1);
      if ((local_240 != '\0') && (local_248 != 0)) {
        FUN_00d50b20();
      }
      puVar5 = local_70;
      plVar13 = local_78;
      local_58 = (longlong *)0x0;
      FUN_00d242c0();
      local_238 = puVar5;
      local_230 = '\0';
      FUN_01ed9200(&local_c0,local_40 & 0xffffffff,&local_5c);
      if ((local_230 != '\0') && (local_238 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      if (*(int *)((longlong)local_70 + 0xc) < 1) {
        plVar18 = (longlong *)0x0;
        plVar14 = (longlong *)0x0;
        local_58 = (longlong *)0x0;
        plVar7 = (longlong *)0x0;
      }
      else {
        uVar9 = 0;
        plVar7 = (longlong *)0x0;
        local_58 = (longlong *)0x0;
        plVar14 = (longlong *)0x0;
        plVar18 = (longlong *)0x0;
        do {
          plVar10 = *(longlong **)(local_70[2] + uVar9 * 8);
          local_40 = uVar9;
          if (plVar7 != plVar10) {
            if (plVar10 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            bVar19 = plVar7 != (longlong *)0x0;
            plVar7 = plVar10;
            if (bVar19) {
              FUN_00d50b20();
            }
          }
          local_220 = '\0';
          local_228 = plVar7;
          FUN_01ed2ec0();
          if ((local_220 != '\0') && (local_228 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_210 = '\0';
          local_218 = plVar7;
          FUN_01edb1d0();
          plVar10 = local_50;
          if (local_50 == local_58) {
LAB_01dfa943:
            if (local_48 != '\0') {
LAB_01dfa949:
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              if (local_58 != (longlong *)0x0) {
                FUN_00d50b20();
                local_58 = plVar10;
                goto LAB_01dfa943;
              }
              local_58 = plVar10;
              if (local_48 == '\0') goto LAB_01dfa957;
              goto LAB_01dfa949;
            }
            if (local_58 != (longlong *)0x0) {
              FUN_00d50b20();
            }
            local_48 = '\0';
            local_58 = plVar10;
          }
LAB_01dfa957:
          if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar10 = local_c0;
          if (local_c0 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
            if (plVar7 == (longlong *)0x0) goto LAB_01dfada6;
LAB_01dfa9cb:
            if (local_58 == (longlong *)0x0) {
              if (plVar10 == (longlong *)0x0) {
                FUN_01d25cb0();
                local_190 = '\0';
                local_198 = plVar7;
                iVar4 = FUN_00d23d20();
                if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if (iVar4 < local_5c) {
                  local_5c = local_5c + -1;
                }
                uVar9 = local_40;
                if (iVar4 == local_5c) goto LAB_01dfb240;
              }
LAB_01dfaaf0:
              FUN_01d28610();
              plVar13 = local_50;
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if (plVar13 != (longlong *)0x0) {
                FUN_01d28610();
                (**(code **)(*local_50 + 0x4c8))();
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              uVar2 = FUN_01d258e0();
              local_84 = CONCAT31(local_84._1_3_,uVar2);
              uVar3 = FUN_01d259f0();
              plVar13 = (longlong *)(ulonglong)uVar3;
              FUN_01d2d390();
              FUN_01d2d3a0();
              if (local_58 == (longlong *)0x0) {
                local_160 = '\0';
                local_168 = plVar7;
                FUN_002edd50();
                plVar10 = local_50;
                local_98 = 0;
                if (local_48 == '\0') {
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_48 = '\0';
                }
                local_98 = '\x01';
                local_a0 = plVar10;
                FUN_01d2db80();
                if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_180 = '\0';
                local_178 = local_90;
                local_170 = '\0';
                local_188 = plVar7;
                (**(code **)(*local_58 + 200))();
                if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              if (local_c0 == (longlong *)0x0) {
                local_130 = '\0';
                local_138 = plVar7;
                FUN_01d2cbb0();
                if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_150 = '\0';
                local_148 = local_90;
                local_140 = '\0';
                local_158 = plVar7;
                (**(code **)(*local_c0 + 0xc0))(local_5c,&local_148);
                if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              FUN_01d2d390();
              FUN_01d2d3a0();
              FUN_01d28610();
              plVar10 = local_50;
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar9 = local_40;
              if (plVar10 != (longlong *)0x0) {
                FUN_01d28610();
                uVar9 = local_40;
                (**(code **)(*local_50 + 0x4d0))();
                if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            else {
              if (local_c0 != local_58) goto LAB_01dfaaf0;
              local_1f8 = local_90;
              local_1f0 = '\0';
              (**(code **)(*local_58 + 0x88))(local_58,&local_1f8);
              local_b0 = local_e8;
              local_a8 = 0;
              if (local_e0 == '\0') {
                if (local_e8 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_e0 = '\0';
              }
              local_a8 = '\x01';
              FUN_019ba260();
              plVar10 = local_50;
              if (local_50 == (longlong *)0x0) {
                uVar12 = (undefined4)CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
                plVar10 = (longlong *)0x0;
              }
              else {
                if (local_48 == '\0') {
                  FUN_00d50b00();
                  uVar12 = 0;
                  if ((local_48 == '\0') || (local_50 == (longlong *)0x0)) goto LAB_01dfb0b6;
                  FUN_00d50b20();
                }
                else {
                  local_48 = '\0';
                }
                uVar12 = 0;
              }
LAB_01dfb0b6:
              if ((local_a8 != '\0') && (local_b0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              local_84 = uVar12;
              if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              local_1e0 = '\0';
              local_1e8 = plVar7;
              iVar4 = FUN_00d23d20();
              if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              uVar9 = local_40;
              if (iVar4 != local_5c) {
                local_1d0 = '\0';
                local_1d8 = plVar7;
                FUN_00d23770();
                if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                local_1c0 = '\0';
                local_1b8 = local_58;
                local_1b0 = '\0';
                local_1a8 = local_90;
                local_1a0 = '\0';
                local_1c8 = plVar10;
                FUN_01d27890(&local_1a8,&local_1b8);
                if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
                if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
              }
              plVar13 = plVar10;
              if ((char)local_84 == '\0' && plVar10 != (longlong *)0x0) {
                FUN_00d50b20();
              }
            }
LAB_01dfb240:
            plVar8 = local_c0;
            if (local_c0 == (longlong *)0x0) goto LAB_01dfadb6;
LAB_01dfb253:
            local_128 = local_78;
            local_120 = '\0';
            local_110 = '\0';
            local_118 = plVar8;
            (**(code **)(*unaff_RDI + 0x518))(&local_118,&local_128);
            local_100 = '\0';
            local_108 = plVar7;
            local_5c = FUN_00d23d20();
            local_5c = local_5c + 1;
            if ((local_100 != '\0') && (local_108 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            uVar16 = (undefined7)((ulonglong)plVar13 >> 8);
            plVar13 = (longlong *)CONCAT71(uVar16,local_b8);
            if (local_c0 == plVar18) {
              plVar10 = plVar18;
              plVar13 = plVar14;
              if ((local_b8 != '\0') && ((char)plVar14 == '\0')) {
                FUN_00d50b00();
                plVar13 = (longlong *)CONCAT71(uVar16,1);
              }
            }
            else {
              if (local_b8 != '\0') {
                FUN_00d50b00();
              }
              if (((char)plVar14 != '\0') && (plVar18 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            plVar14 = (longlong *)((ulonglong)plVar13 & 0xffffffff);
            do {
              uVar9 = local_40;
              plVar18 = plVar7;
              if (plVar10 == plVar7) goto LAB_01dfb240;
              local_200 = '\0';
              local_208 = plVar10;
              FUN_01edb1d0();
              plVar18 = local_50;
              cVar11 = (char)plVar14;
              uVar16 = (undefined7)((ulonglong)plVar13 >> 8);
              if (local_50 == plVar10) {
                plVar18 = plVar10;
                if ((cVar11 == '\0') && (plVar10 != (longlong *)0x0)) {
                  if (local_48 != '\0') goto LAB_01dfac93;
                  FUN_00d50b00();
LAB_01dfad10:
                  plVar14 = (longlong *)CONCAT71(uVar16,1);
                  plVar18 = plVar10;
                }
joined_r0x01dfad66:
                plVar10 = plVar18;
                plVar13 = plVar14;
                if (local_48 == '\0') {
                  plVar14 = (longlong *)((ulonglong)plVar14 & 0xffffffff);
                }
                else {
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b20();
                  }
                  plVar14 = (longlong *)((ulonglong)plVar14 & 0xffffffff);
                }
              }
              else {
                if (local_48 == '\0') {
                  if (local_50 != (longlong *)0x0) {
                    FUN_00d50b00();
                  }
                  plVar14 = (longlong *)CONCAT71(uVar16,1);
                  if ((cVar11 != '\0') && (plVar10 != (longlong *)0x0)) {
                    FUN_00d50b20();
                    plVar10 = plVar18;
                    goto LAB_01dfad10;
                  }
                  goto joined_r0x01dfad66;
                }
                if ((cVar11 != '\0') && (plVar10 != (longlong *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01dfac93:
                local_48 = '\0';
                plVar14 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
                plVar10 = plVar18;
              }
              if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            } while (plVar10 != (longlong *)0x0);
            plVar18 = (longlong *)0x0;
            plVar10 = local_c0;
            if (local_c0 != plVar7) goto LAB_01dfa9cb;
LAB_01dfada6:
            plVar8 = plVar7;
            uVar9 = local_40;
            if (plVar10 != (longlong *)0x0) goto LAB_01dfb253;
LAB_01dfadb6:
            FUN_01d25cb0();
            local_f0 = '\0';
            local_f8 = plVar7;
            local_5c = FUN_00d23d20();
            local_5c = local_5c + 1;
            if ((local_f0 != '\0') && (local_f8 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          uVar9 = uVar9 + 1;
        } while ((longlong)uVar9 < (longlong)*(int *)((longlong)local_70 + 0xc));
      }
      puVar5 = local_70;
      cVar17 = (char)plVar14;
      uVar6 = FUN_01dd4c60();
      local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      cVar11 = local_31;
      if (0 < *(int *)((longlong)puVar5 + 0xc)) {
        lVar15 = 0;
        do {
          lVar1 = *(longlong *)(local_70[2] + lVar15 * 8);
          local_d0 = 0;
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          local_d0 = '\x01';
          local_d8 = lVar1;
          FUN_01ed2ec0();
          FUN_01dd3d20();
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
          lVar15 = lVar15 + 1;
          cVar11 = local_31;
        } while (lVar15 < *(int *)((longlong)local_70 + 0xc));
      }
    }
    if (local_68 == (longlong *)0x0) goto LAB_01dfb4ab;
  }
  else {
    FUN_01d26010();
    plVar7 = local_50;
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if (plVar7 == (longlong *)0x0) goto LAB_01dfa6fd;
    FUN_01d26010();
    local_268 = *param_2;
    local_260 = '\0';
    local_258 = *unaff_RSI;
    local_250 = '\0';
    uVar6 = (**(code **)(*local_50 + 0xc0))(param_1,&local_268,&local_258);
    cVar17 = (char)uVar6;
    if ((local_250 != '\0') && (local_258 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_260 != '\0') && (local_268 != 0)) {
      uVar6 = FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      uVar6 = FUN_00d50b20();
    }
    if (cVar17 == '\0') goto LAB_01dfa6fd;
    local_40 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    plVar7 = (longlong *)0x0;
    local_58 = (longlong *)0x0;
    cVar17 = '\0';
    plVar18 = (longlong *)0x0;
  }
  FUN_00d50b20();
LAB_01dfb4ab:
  if ((cVar17 != '\0') && (plVar18 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar18 = local_58;
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar18 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((cVar11 != '\0') && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return local_40;
}




// ============================================================
// @01df8390 — 1146 bytes
// str: ""GNTableColumnAssoc""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01df8489) */
/* WARNING: Removing unreachable block (ram,0x01df8492) */
/* WARNING: Removing unreachable block (ram,0x01df8419) */
/* WARNING: Removing unreachable block (ram,0x01df8422) */
/* WARNING: Removing unreachable block (ram,0x01df8609) */
/* WARNING: Removing unreachable block (ram,0x01df8612) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_01df8390(undefined4 param_1)

{
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong *in_RCX;
  longlong *plVar6;
  longlong *plVar7;
  longlong *unaff_RDI;
  longlong *plVar8;
  bool bVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar10;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  longlong *local_68;
  undefined4 local_5c;
  longlong *local_40;
  char local_38;
  
  lVar1 = DAT_027edfd0;
  local_70 = (longlong *)0x0;
  if (DAT_027edfd0 != 0) {
    param_1 = FUN_00d50b00();
  }
  local_c0 = lVar1;
  local_b8 = '\x01';
  FUN_01ccaae0(param_1,&local_c0);
  if (local_40 == (longlong *)0x0) {
    local_5c = (undefined4)CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    plVar8 = (longlong *)0x0;
  }
  else {
    plVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_5c = 0;
    }
    else {
      local_38 = '\0';
      local_5c = 0;
    }
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  local_68 = plVar8;
  FUN_01db9a80();
  if (local_40 == (longlong *)0x0) {
    bVar2 = false;
    plVar6 = (longlong *)0x0;
LAB_01df850d:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    bVar3 = false;
    local_40 = (longlong *)0x0;
    bVar9 = false;
    plVar7 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    local_70 = local_40;
    if ((DAT_026f20e8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_026f2038 = FUN_001ba850();
      _DAT_026f2020 = "GNTableColumnAssoc";
      _DAT_026f2028 = 0x58;
      _DAT_026f2030 = FUN_001f28d0;
      _DAT_026f2040 = 0;
      uRam00000000026f2048 = 0;
      _DAT_026f2050 = 0;
      uRam00000000026f2058 = 0;
      _DAT_026f2060 = 0;
      uRam00000000026f2068 = 0;
      _DAT_026f2070 = 0;
      uRam00000000026f2078 = 0;
      _DAT_026f2080 = 0;
      uRam00000000026f2088 = 0;
      _DAT_026f2090 = 0;
      uRam00000000026f2098 = 0;
      _DAT_026f20a0 = 0;
      uRam00000000026f20a8 = 0;
      _DAT_026f20b0 = 0;
      uRam00000000026f20b8 = 0;
      _DAT_026f20c0 = 0;
      uRam00000000026f20c8 = 0;
      _DAT_026f20d0 = 0;
      uRam00000000026f20d8 = 0;
      _DAT_026f20e0 = 0;
      ___cxa_guard_release();
      plVar8 = local_68;
    }
    (**(code **)(*local_40 + 0x360))();
    cVar4 = FUN_00e85ea0();
    plVar7 = local_70;
    plVar6 = local_70;
    if (cVar4 == '\0') {
      plVar6 = DAT_02802688;
    }
    if (plVar6 == (longlong *)0x0) {
      bVar2 = true;
      plVar6 = local_70;
      goto LAB_01df850d;
    }
    bVar9 = local_70 != (longlong *)0x0;
    uVar10 = extraout_XMM0_Da;
    local_b0 = DAT_027e7c20;
    if (bVar9) {
      uVar10 = FUN_00d50b00();
      local_b0 = DAT_027e7c20;
    }
    DAT_027e7c20 = local_b0;
    if (local_b0 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_a8 = '\x01';
    uVar10 = FUN_01ccab60(uVar10,&local_b0);
    if (local_40 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      bVar3 = false;
    }
    else if (local_38 == '\0') {
      uVar10 = FUN_00d50b00();
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      uVar10 = FUN_00d50b20();
    }
    plVar6 = plVar7;
    if (local_40 == (longlong *)0x0) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      lVar1 = *in_RCX;
      if ((char)in_RCX[1] == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        local_40 = (longlong *)0x0;
LAB_01df874c:
        bVar2 = true;
      }
      else {
        *unaff_RDI = lVar1;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        *(undefined1 *)(in_RCX + 1) = 0;
        bVar2 = true;
        local_40 = (longlong *)0x0;
      }
    }
    else {
      if (plVar8 == (longlong *)0x0) {
        local_78 = '\0';
        local_80 = local_40;
        (**(code **)(*(longlong *)*in_RCX + 0x88))(uVar10,&local_80);
        bVar2 = true;
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_01df8540;
      }
      local_a0 = *in_RCX;
      local_98 = '\0';
      local_88 = '\0';
      local_90 = local_40;
      FUN_01d26fb0(&local_90,&local_a0);
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      bVar2 = true;
      if ((local_98 == '\0') || (local_a0 == 0)) goto LAB_01df874c;
      FUN_00d50b20();
    }
  }
  if ((char)local_5c == '\0' && local_68 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01df8540:
  if ((bVar3) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (plVar7 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01de8cb0 — 1123 bytes
// str: ""GNTableColumnAssoc""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01de8f95) */
/* WARNING: Removing unreachable block (ram,0x01de8fa2) */
/* WARNING: Removing unreachable block (ram,0x01de8df2) */
/* WARNING: Removing unreachable block (ram,0x01de8dff) */
/* WARNING: Removing unreachable block (ram,0x01de8f21) */
/* WARNING: Removing unreachable block (ram,0x01de8f2e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01de8cb0(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01db9a80();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01de8cf6;
    }
    local_48 = (longlong *)0x0;
  }
  else {
LAB_01de8cf6:
    local_48 = local_40;
    if (local_40 != (longlong *)0x0) {
      if ((DAT_026f20e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026f2038 = FUN_001ba850();
        _DAT_026f2020 = "GNTableColumnAssoc";
        _DAT_026f2028 = 0x58;
        _DAT_026f2030 = FUN_001f28d0;
        _DAT_026f2040 = 0;
        uRam00000000026f2048 = 0;
        _DAT_026f2050 = 0;
        uRam00000000026f2058 = 0;
        _DAT_026f2060 = 0;
        uRam00000000026f2068 = 0;
        _DAT_026f2070 = 0;
        uRam00000000026f2078 = 0;
        _DAT_026f2080 = 0;
        uRam00000000026f2088 = 0;
        _DAT_026f2090 = 0;
        uRam00000000026f2098 = 0;
        _DAT_026f20a0 = 0;
        uRam00000000026f20a8 = 0;
        _DAT_026f20b0 = 0;
        uRam00000000026f20b8 = 0;
        _DAT_026f20c0 = 0;
        uRam00000000026f20c8 = 0;
        _DAT_026f20d0 = 0;
        uRam00000000026f20d8 = 0;
        _DAT_026f20e0 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*local_40 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = local_40;
      if (cVar2 == '\0') {
        plVar4 = DAT_02802688;
      }
      if (plVar4 != (longlong *)0x0) {
        local_98 = *param_2;
        local_90 = '\0';
        local_88 = *param_3;
        local_80 = '\0';
        (**(code **)(*local_40 + 0x520))(param_1,&local_98,&local_88);
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          *unaff_RDI = local_40;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          goto LAB_01de8f60;
        }
      }
    }
  }
  lVar1 = DAT_027f2e50;
  if (DAT_027f2e50 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_01ccc2f0(param_1,&local_78);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    (**(code **)(*local_50 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = local_50;
    if (cVar2 == '\0') {
      plVar4 = DAT_02802688;
    }
    if (plVar4 == (longlong *)0x0) {
      *unaff_RDI = local_50;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      local_68 = local_50;
      local_60 = '\0';
      FUN_01cfb480();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (local_48 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_01de8f60:
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @01de9300 — 1123 bytes
// str: ""GNTableColumnAssoc""
// str: ""GNString""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01de95e5) */
/* WARNING: Removing unreachable block (ram,0x01de95f2) */
/* WARNING: Removing unreachable block (ram,0x01de9442) */
/* WARNING: Removing unreachable block (ram,0x01de944f) */
/* WARNING: Removing unreachable block (ram,0x01de9571) */
/* WARNING: Removing unreachable block (ram,0x01de957e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_01de9300(undefined4 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *unaff_RDI;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01db9a80();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_01de9346;
    }
    local_48 = (longlong *)0x0;
  }
  else {
LAB_01de9346:
    local_48 = local_40;
    if (local_40 != (longlong *)0x0) {
      if ((DAT_026f20e8 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
        _DAT_026f2038 = FUN_001ba850();
        _DAT_026f2020 = "GNTableColumnAssoc";
        _DAT_026f2028 = 0x58;
        _DAT_026f2030 = FUN_001f28d0;
        _DAT_026f2040 = 0;
        uRam00000000026f2048 = 0;
        _DAT_026f2050 = 0;
        uRam00000000026f2058 = 0;
        _DAT_026f2060 = 0;
        uRam00000000026f2068 = 0;
        _DAT_026f2070 = 0;
        uRam00000000026f2078 = 0;
        _DAT_026f2080 = 0;
        uRam00000000026f2088 = 0;
        _DAT_026f2090 = 0;
        uRam00000000026f2098 = 0;
        _DAT_026f20a0 = 0;
        uRam00000000026f20a8 = 0;
        _DAT_026f20b0 = 0;
        uRam00000000026f20b8 = 0;
        _DAT_026f20c0 = 0;
        uRam00000000026f20c8 = 0;
        _DAT_026f20d0 = 0;
        uRam00000000026f20d8 = 0;
        _DAT_026f20e0 = 0;
        ___cxa_guard_release();
      }
      (**(code **)(*local_40 + 0x360))();
      cVar2 = FUN_00e85ea0();
      plVar4 = local_40;
      if (cVar2 == '\0') {
        plVar4 = DAT_02802688;
      }
      if (plVar4 != (longlong *)0x0) {
        local_98 = *param_2;
        local_90 = '\0';
        local_88 = *param_3;
        local_80 = '\0';
        (**(code **)(*local_40 + 0x528))(param_1,&local_98,&local_88);
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != (longlong *)0x0) {
          *unaff_RDI = local_40;
          *(undefined1 *)(unaff_RDI + 1) = 1;
          goto LAB_01de95b0;
        }
      }
    }
  }
  lVar1 = DAT_02724b68;
  if (DAT_02724b68 != 0) {
    FUN_00d50b00();
  }
  local_78 = lVar1;
  local_70 = '\x01';
  FUN_01ccc2f0(param_1,&local_78);
  local_50 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      local_50 = (longlong *)0x0;
    }
    else {
      FUN_00d50b00();
    }
  }
  else {
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    if ((DAT_026fd0c0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
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
    (**(code **)(*local_50 + 0x360))();
    cVar2 = FUN_00e85ea0();
    plVar4 = local_50;
    if (cVar2 == '\0') {
      plVar4 = DAT_02802688;
    }
    if (plVar4 == (longlong *)0x0) {
      *unaff_RDI = local_50;
      *(undefined1 *)(unaff_RDI + 1) = 1;
    }
    else {
      local_68 = local_50;
      local_60 = '\0';
      FUN_01cfb480();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  if (local_48 == (longlong *)0x0) {
    return unaff_RDI;
  }
LAB_01de95b0:
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @01dfc450 — 1019 bytes
// str: ""GNTableColumnAssoc""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01dfc450(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  undefined8 unaff_RDI;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar7 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  uVar8 = FUN_01dcd4e0();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_01dfc810;
    uVar8 = FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else if (local_78 == (longlong *)0x0) goto LAB_01dfc810;
  local_48 = plVar7;
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_68 = plVar1;
  local_60 = 0xffffffff;
  local_58 = 0;
  iVar6 = 0;
  local_50 = plVar3;
  while( true ) {
    if (iVar6 != 0) {
      if (iVar6 < 1) {
        iVar6 = -iVar6;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar6);
        FUN_00d23690(uVar8,iVar6);
        local_58 = local_58 + iVar6;
        iVar6 = 0;
      }
      local_60 = CONCAT44(iVar6,(int)local_60);
    }
    lVar4 = (longlong)(int)local_60;
    iVar6 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar6);
    if (*(int *)((longlong)local_68 + 0xc) <= iVar6) break;
    local_78 = *(longlong **)(local_68[2] + 8 + lVar4 * 8);
    uVar8 = FUN_01db9a80();
    plVar7 = local_40;
    if ((DAT_026f20e8 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar6 != 0)) {
      _DAT_026f2038 = FUN_001ba850();
      _DAT_026f2020 = "GNTableColumnAssoc";
      _DAT_026f2028 = 0x58;
      _DAT_026f2030 = FUN_001f28d0;
      _DAT_026f2040 = 0;
      uRam00000000026f2048 = 0;
      _DAT_026f2050 = 0;
      uRam00000000026f2058 = 0;
      _DAT_026f2060 = 0;
      uRam00000000026f2068 = 0;
      _DAT_026f2070 = 0;
      uRam00000000026f2078 = 0;
      _DAT_026f2080 = 0;
      uRam00000000026f2088 = 0;
      _DAT_026f2090 = 0;
      uRam00000000026f2098 = 0;
      _DAT_026f20a0 = 0;
      uRam00000000026f20a8 = 0;
      _DAT_026f20b0 = 0;
      uRam00000000026f20b8 = 0;
      _DAT_026f20c0 = 0;
      uRam00000000026f20c8 = 0;
      _DAT_026f20d0 = 0;
      uRam00000000026f20d8 = 0;
      _DAT_026f20e0 = 0;
      uVar8 = ___cxa_guard_release();
    }
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_40;
      uVar8 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar4 = DAT_027e7c20;
    if (plVar7 != (longlong *)0x0) {
      if (DAT_027e7c20 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      uVar8 = FUN_01ccab60(uVar8,&local_a8);
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (uVar8 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        local_98 = plVar7;
        local_90 = '\0';
        local_40 = local_78;
        local_38 = '\0';
        FUN_00ca0840(uVar8,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      uVar8 = FUN_00d50b20();
    }
    iVar6 = local_60._4_4_;
  }
  FUN_01de6a30();
  uVar8 = FUN_00d50b20();
  plVar3 = local_50;
  plVar7 = local_48;
LAB_01dfc810:
  local_80 = '\0';
  local_88 = plVar3;
  FUN_01dcd6e0(uVar8,&local_88);
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01deb620 — 1019 bytes
// str: ""GNTableColumnAssoc""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01deb620(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong **pplVar5;
  int iVar6;
  undefined8 unaff_RDI;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  longlong local_a8;
  char local_a0;
  longlong *local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar7 = local_78;
  if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) && (FUN_00d50b00(), local_70 != '\0'))
     && (local_78 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar3 + 0x18))();
  uVar8 = FUN_01dcd4e0();
  plVar1 = local_78;
  if (local_70 == '\0') {
    if (local_78 == (longlong *)0x0) goto LAB_01deb9e0;
    uVar8 = FUN_00d50b00();
    if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
  }
  else if (local_78 == (longlong *)0x0) goto LAB_01deb9e0;
  local_48 = plVar7;
  local_70 = '\0';
  local_78 = (longlong *)0x0;
  local_68 = plVar1;
  local_60 = 0xffffffff;
  local_58 = 0;
  iVar6 = 0;
  local_50 = plVar3;
  while( true ) {
    if (iVar6 != 0) {
      if (iVar6 < 1) {
        iVar6 = -iVar6;
      }
      else {
        local_60 = CONCAT44(local_60._4_4_,(int)local_60 - iVar6);
        FUN_00d23690(uVar8,iVar6);
        local_58 = local_58 + iVar6;
        iVar6 = 0;
      }
      local_60 = CONCAT44(iVar6,(int)local_60);
    }
    lVar4 = (longlong)(int)local_60;
    iVar6 = (int)local_60 + 1;
    local_60 = CONCAT44(local_60._4_4_,iVar6);
    if (*(int *)((longlong)local_68 + 0xc) <= iVar6) break;
    local_78 = *(longlong **)(local_68[2] + 8 + lVar4 * 8);
    uVar8 = FUN_01db9a80();
    plVar7 = local_40;
    if ((DAT_026f20e8 == '\0') &&
       (iVar6 = ___cxa_guard_acquire(), uVar8 = extraout_XMM0_Da_00, iVar6 != 0)) {
      _DAT_026f2038 = FUN_001ba850();
      _DAT_026f2020 = "GNTableColumnAssoc";
      _DAT_026f2028 = 0x58;
      _DAT_026f2030 = FUN_001f28d0;
      _DAT_026f2040 = 0;
      uRam00000000026f2048 = 0;
      _DAT_026f2050 = 0;
      uRam00000000026f2058 = 0;
      _DAT_026f2060 = 0;
      uRam00000000026f2068 = 0;
      _DAT_026f2070 = 0;
      uRam00000000026f2078 = 0;
      _DAT_026f2080 = 0;
      uRam00000000026f2088 = 0;
      _DAT_026f2090 = 0;
      uRam00000000026f2098 = 0;
      _DAT_026f20a0 = 0;
      uRam00000000026f20a8 = 0;
      _DAT_026f20b0 = 0;
      uRam00000000026f20b8 = 0;
      _DAT_026f20c0 = 0;
      uRam00000000026f20c8 = 0;
      _DAT_026f20d0 = 0;
      uRam00000000026f20d8 = 0;
      _DAT_026f20e0 = 0;
      uVar8 = ___cxa_guard_release();
    }
    pplVar5 = (longlong **)&DAT_02802688;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x360))();
      cVar2 = FUN_00e85ea0();
      pplVar5 = &local_40;
      uVar8 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pplVar5 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = *pplVar5;
    if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        uVar8 = FUN_00d50b00();
      }
    }
    else {
      *(undefined1 *)(pplVar5 + 1) = 0;
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      uVar8 = FUN_00d50b20();
    }
    lVar4 = DAT_027e7c20;
    if (plVar7 != (longlong *)0x0) {
      if (DAT_027e7c20 != 0) {
        uVar8 = FUN_00d50b00();
      }
      local_a8 = lVar4;
      local_a0 = '\x01';
      uVar8 = FUN_01ccab60(uVar8,&local_a8);
      plVar7 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (uVar8 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        uVar8 = FUN_00d50b20();
      }
      if (plVar7 != (longlong *)0x0) {
        local_98 = plVar7;
        local_90 = '\0';
        local_40 = local_78;
        local_38 = '\0';
        FUN_00ca0840(uVar8,&local_40);
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      uVar8 = FUN_00d50b20();
    }
    iVar6 = local_60._4_4_;
  }
  FUN_01de6a30();
  uVar8 = FUN_00d50b20();
  plVar3 = local_50;
  plVar7 = local_48;
LAB_01deb9e0:
  local_80 = '\0';
  local_88 = plVar3;
  FUN_01dcd6e0(uVar8,&local_88);
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @01df8af0 — 983 bytes
// str: ""GNTableColumnAssoc""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01df8af0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar6;
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
  longlong local_68;
  char local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01db9a80();
  plVar2 = local_40;
  local_58 = local_40;
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
  }
  if (plVar2 != (longlong *)0x0) {
    if ((DAT_026f20e8 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_026f2038 = FUN_001ba850();
      _DAT_026f2020 = "GNTableColumnAssoc";
      _DAT_026f2028 = 0x58;
      _DAT_026f2030 = FUN_001f28d0;
      _DAT_026f2040 = 0;
      uRam00000000026f2048 = 0;
      _DAT_026f2050 = 0;
      uRam00000000026f2058 = 0;
      _DAT_026f2060 = 0;
      uRam00000000026f2068 = 0;
      _DAT_026f2070 = 0;
      uRam00000000026f2078 = 0;
      _DAT_026f2080 = 0;
      uRam00000000026f2088 = 0;
      _DAT_026f2090 = 0;
      uRam00000000026f2098 = 0;
      _DAT_026f20a0 = 0;
      uRam00000000026f20a8 = 0;
      _DAT_026f20b0 = 0;
      uRam00000000026f20b8 = 0;
      _DAT_026f20c0 = 0;
      uRam00000000026f20c8 = 0;
      _DAT_026f20d0 = 0;
      uRam00000000026f20d8 = 0;
      _DAT_026f20e0 = 0;
      ___cxa_guard_release();
    }
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    plVar2 = local_58;
    plVar5 = local_58;
    if (cVar3 == '\0') {
      plVar5 = DAT_02802688;
    }
    if (plVar5 != (longlong *)0x0) {
      uVar6 = extraout_XMM0_Da;
      if (local_58 != (longlong *)0x0) {
        uVar6 = FUN_00d50b00();
      }
      lVar1 = DAT_027e7c20;
      if (DAT_027e7c20 != 0) {
        uVar6 = FUN_00d50b00();
      }
      local_b8 = lVar1;
      local_b0 = '\x01';
      uVar6 = FUN_01ccab60(uVar6,&local_b8);
      local_50 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (uVar6 = FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        uVar6 = FUN_00d50b20();
      }
      lVar1 = DAT_027edfd0;
      if (local_50 != (longlong *)0x0) {
        if (DAT_027edfd0 != 0) {
          uVar6 = FUN_00d50b00();
        }
        local_a8 = lVar1;
        local_a0 = '\x01';
        FUN_01ccaae0(uVar6,&local_a8);
        local_48 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_a0 != '\0') && (local_a8 != 0)) {
          FUN_00d50b20();
        }
        local_98 = *param_2;
        local_90 = '\0';
        local_88 = *param_1;
        local_80 = '\0';
        local_78 = local_50;
        local_70 = '\0';
        FUN_01d27890(&local_78,&local_88);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        local_68 = *param_1;
        local_60 = '\0';
        uVar6 = FUN_01ed2ec0();
        FUN_01dd3d20(uVar6,0);
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*unaff_RDI + 0x510))();
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
    }
    if (plVar2 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @01dea240 — 950 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dea56f) */
/* WARNING: Removing unreachable block (ram,0x01dea578) */
/* WARNING: Removing unreachable block (ram,0x01dea3e6) */
/* WARNING: Removing unreachable block (ram,0x01dea3f2) */
/* WARNING: Removing unreachable block (ram,0x01dea4f8) */
/* WARNING: Removing unreachable block (ram,0x01dea504) */
/* WARNING: Removing unreachable block (ram,0x01dea5b8) */
/* WARNING: Removing unreachable block (ram,0x01dea5c1) */
/* WARNING: Removing unreachable block (ram,0x01dea36c) */
/* WARNING: Removing unreachable block (ram,0x01dea375) */
/* WARNING: Removing unreachable block (ram,0x01dea2a4) */
/* WARNING: Removing unreachable block (ram,0x01dea2ad) */
/* WARNING: Removing unreachable block (ram,0x01dea4a5) */
/* WARNING: Removing unreachable block (ram,0x01dea4b2) */
/* WARNING: Removing unreachable block (ram,0x01dea467) */
/* WARNING: Removing unreachable block (ram,0x01dea474) */

void FUN_01dea240(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong *unaff_RDI;
  int local_44;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x548))();
  if (local_38 == '\0') {
    if (local_40 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_40 == 0) {
    return;
  }
  lVar4 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == 0) goto LAB_01dea5dd;
  if (*param_2 == 0) {
LAB_01dea592:
    iVar3 = FUN_01dcc980();
    if (iVar3 != -1) {
      FUN_01dd0010();
    }
  }
  else {
    if (*param_1 == 0) {
      FUN_01d25cb0();
      local_44 = FUN_00d23d20();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d25cb0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      if (*(int *)(local_40 + 0xc) < 1) {
        local_44 = -1;
      }
      else {
        local_44 = -1;
        lVar4 = 0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(local_40 + 0x10) + lVar4 * 8);
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          (**(code **)(*plVar1 + 0x98))();
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          bVar2 = true;
          if (local_40 == *param_2) {
            if (local_44 == -1) {
              local_44 = (int)lVar4;
            }
            else {
              local_44 = -1;
              bVar2 = false;
            }
          }
          if (local_40 != 0) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (!bVar2) {
            if (local_40 == 0) goto LAB_01dea540;
            break;
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(local_40 + 0xc));
      }
      FUN_00d50b20();
    }
LAB_01dea540:
    if (local_44 == -1) goto LAB_01dea592;
    iVar3 = FUN_01dcc980();
    if (iVar3 != -1) {
      FUN_01dd0280();
    }
  }
  FUN_00d50b20();
LAB_01dea5dd:
  FUN_00d50b20();
  return;
}




// ============================================================
// @01dba5d0 — 860 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dba6a5) */
/* WARNING: Removing unreachable block (ram,0x01dba6b1) */
/* WARNING: Removing unreachable block (ram,0x01dba860) */
/* WARNING: Removing unreachable block (ram,0x01dba7a0) */
/* WARNING: Removing unreachable block (ram,0x01dba777) */
/* WARNING: Removing unreachable block (ram,0x01dba780) */
/* WARNING: Removing unreachable block (ram,0x01dba836) */
/* WARNING: Removing unreachable block (ram,0x01dba83f) */
/* WARNING: Removing unreachable block (ram,0x01dba8f6) */
/* WARNING: Removing unreachable block (ram,0x01dba8ff) */

void FUN_01dba5d0(void)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  plVar2 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  uVar3 = FUN_01dba1f0();
  if (local_40 == '\0') {
    if (local_48 == 0) goto LAB_01dba6bf;
    uVar4 = FUN_00d50b00();
  }
  else {
    uVar4 = extraout_XMM0_Da;
    if (local_48 == 0) {
LAB_01dba6bf:
      local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      goto LAB_01dba6c4;
    }
  }
  lVar1 = DAT_027092b8;
  if (DAT_027092b8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_48 = lVar1;
  local_40 = '\0';
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_34 = 0;
LAB_01dba6c4:
  uVar4 = FUN_00d46dc0(*(undefined4 *)(unaff_RSI + 0x28));
  lVar1 = DAT_027f2350;
  if ((local_50 == '\0') && (local_58 != 0)) {
    uVar4 = FUN_00d50b00();
    lVar1 = DAT_027f2350;
  }
  DAT_027f2350 = lVar1;
  if (lVar1 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d46530();
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar1 = DAT_027f2358;
  if (DAT_027f2358 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  uVar4 = FUN_00d46530();
  if (local_58 != 0) {
    uVar4 = FUN_00d50b00();
  }
  lVar1 = DAT_027f2360;
  if (DAT_027f2360 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = '\0';
  local_48 = lVar1;
  FUN_00ca0840(uVar4,&local_48);
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01dec210 — 836 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01dec413) */
/* WARNING: Removing unreachable block (ram,0x01dec41c) */
/* WARNING: Removing unreachable block (ram,0x01dec2d7) */
/* WARNING: Removing unreachable block (ram,0x01dec2e0) */
/* WARNING: Removing unreachable block (ram,0x01dec2ad) */
/* WARNING: Removing unreachable block (ram,0x01dec2b6) */
/* WARNING: Removing unreachable block (ram,0x01dec367) */
/* WARNING: Removing unreachable block (ram,0x01dec370) */
/* WARNING: Removing unreachable block (ram,0x01dec31a) */
/* WARNING: Removing unreachable block (ram,0x01dec323) */

undefined8 FUN_01dec210(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  lVar4 = DAT_02800140;
  if (DAT_02800140 != 0) {
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
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_40 == (longlong *)0x0) {
    return 0;
  }
  FUN_01d258f0();
  if (local_38 == '\0') {
    if (local_40 == (longlong *)0x0) goto LAB_01dec32c;
    FUN_00d50b00();
LAB_01dec2e5:
    (**(code **)(*local_40 + 0x538))();
    if (local_40 == (longlong *)0x0) {
      bVar5 = false;
      goto LAB_01dec332;
    }
    if (local_38 == '\0') {
      FUN_00d50b00();
    }
    bVar5 = false;
LAB_01dec375:
    (**(code **)(*unaff_RDI + 0x548))();
    FUN_01dcc2e0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d28610();
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    cVar7 = FUN_01caa660();
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar3 = bVar5;
    if (cVar7 != '\0') {
      if ((char)unaff_RDI[0xb] == '\0') {
        bVar3 = true;
        if (!bVar5) {
          cVar7 = (**(code **)(*local_40 + 0x540))();
          if (cVar7 != '\0') goto LAB_01dec45b;
          bVar3 = false;
        }
      }
      else {
LAB_01dec45b:
        (**(code **)(*unaff_RDI + 0x548))();
        FUN_01dcc2e0();
        bVar3 = bVar5;
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    (**(code **)(*unaff_RDI + 0x548))();
    FUN_01dcc2e0();
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar1 = true;
    uVar8 = 2;
    bVar2 = false;
    bVar5 = true;
    bVar6 = false;
    if (!bVar3) goto LAB_01dec51c;
  }
  else {
    if (local_40 != (longlong *)0x0) goto LAB_01dec2e5;
LAB_01dec32c:
    bVar5 = true;
LAB_01dec332:
    FUN_01d25f70();
    if (local_40 != (longlong *)0x0) {
      if (local_38 == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01dec375;
    }
    uVar8 = 0;
    if (bVar5) {
      uVar8 = 0;
      goto LAB_01dec53b;
    }
    bVar5 = false;
    bVar6 = true;
LAB_01dec51c:
    bVar2 = bVar6;
    bVar1 = bVar5;
    FUN_00d50b20();
  }
  if ((bVar1) && (!bVar2)) {
    FUN_00d50b20();
  }
LAB_01dec53b:
  FUN_00d50b20();
  return uVar8;
}




// ============================================================
// @01dba1f0 — 821 bytes
// str: ""GNTableColumnAssoc""
// str: ""GNString""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01dba1f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_01;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong *local_30;
  
  plVar1 = *(longlong **)(unaff_RSI + 0x40);
  if (plVar1 == (longlong *)0x0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  FUN_00d50b00();
  local_30 = plVar1;
  if ((DAT_026fd0c0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
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
  (**(code **)(*plVar1 + 0x360))();
  cVar3 = FUN_00e85ea0();
  plVar1 = local_30;
  plVar5 = local_30;
  if (cVar3 == '\0') {
    plVar5 = DAT_02802688;
  }
  if (plVar5 == (longlong *)0x0) {
    uVar7 = extraout_XMM0_Da;
    if ((DAT_026f20e8 == '\0') &&
       (iVar4 = ___cxa_guard_acquire(), uVar7 = extraout_XMM0_Da_01, iVar4 != 0)) {
      _DAT_026f2038 = FUN_001ba850();
      _DAT_026f2020 = "GNTableColumnAssoc";
      _DAT_026f2028 = 0x58;
      _DAT_026f2030 = FUN_001f28d0;
      _DAT_026f2040 = 0;
      uRam00000000026f2048 = 0;
      _DAT_026f2050 = 0;
      uRam00000000026f2058 = 0;
      _DAT_026f2060 = 0;
      uRam00000000026f2068 = 0;
      _DAT_026f2070 = 0;
      uRam00000000026f2078 = 0;
      _DAT_026f2080 = 0;
      uRam00000000026f2088 = 0;
      _DAT_026f2090 = 0;
      uRam00000000026f2098 = 0;
      _DAT_026f20a0 = 0;
      uRam00000000026f20a8 = 0;
      _DAT_026f20b0 = 0;
      uRam00000000026f20b8 = 0;
      _DAT_026f20c0 = 0;
      uRam00000000026f20c8 = 0;
      _DAT_026f20d0 = 0;
      uRam00000000026f20d8 = 0;
      _DAT_026f20e0 = 0;
      uVar7 = ___cxa_guard_release();
    }
    lVar2 = DAT_027e7c20;
    plVar5 = local_30;
    plVar6 = DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      uVar7 = extraout_XMM0_Da_00;
      lVar2 = DAT_027e7c20;
      plVar5 = local_30;
      plVar6 = DAT_02802688;
      if (cVar3 != '\0') {
        plVar6 = local_30;
      }
    }
    DAT_027e7c20 = lVar2;
    local_30 = plVar5;
    if (plVar6 != (longlong *)0x0) {
      if (lVar2 != 0) {
        uVar7 = FUN_00d50b00();
      }
      local_48 = '\x01';
      local_50 = lVar2;
      FUN_01ccab60(uVar7,&local_50);
      plVar1 = local_40;
      plVar6 = plVar5;
      if (local_40 == plVar5) {
LAB_01dba359:
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_30 = plVar1;
          plVar6 = plVar1;
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_01dba359;
        }
        local_30 = local_40;
        if (plVar5 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        local_38 = '\0';
        plVar6 = local_40;
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        *unaff_RDI = (longlong)plVar6;
        goto LAB_01dba261;
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    lVar2 = *(longlong *)(unaff_RSI + 0x48);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar2;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if (local_30 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    *unaff_RDI = (longlong)local_30;
LAB_01dba261:
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}




// ============================================================
// @01df9250 — 742 bytes
// ============================================================

void FUN_01df9250(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char unaff_SIL;
  longlong *unaff_RDI;
  longlong *plVar3;
  longlong *plVar4;
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
  longlong *local_58;
  longlong *local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  plVar4 = local_40;
  if (local_40 == (longlong *)0x0) {
    local_58 = (longlong *)0x0;
joined_r0x01df929f:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_58 = plVar4;
      goto joined_r0x01df929f;
    }
  }
  lVar1 = DAT_02800140;
  if (local_58 == (longlong *)0x0) {
    return;
  }
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  local_a8 = lVar1;
  local_a0 = '\x01';
  uVar2 = FUN_01ccaae0(param_1,&local_a8);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    plVar3 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      local_44 = 0;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01df933a;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    local_44 = 0;
  }
LAB_01df933a:
  if ((local_a0 != '\0') && (local_a8 != 0)) {
    FUN_00d50b20();
  }
  if (plVar3 != (longlong *)0x0) {
    local_50 = plVar4;
    *(undefined1 *)((longlong)unaff_RDI + 0x61) = 1;
    FUN_01ed4a00();
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
    plVar4 = local_50;
    local_80 = '\x01';
    FUN_01d2a8f0();
    if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (unaff_SIL == '\0') {
      (**(code **)(*plVar3 + 0x3f8))();
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
      FUN_01ed73b0();
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01ed7190();
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
      local_90 = '\0';
      local_98 = plVar3;
      (**(code **)(*unaff_RDI + 0x580))(param_1,&local_98);
      if ((local_90 != '\0') && (local_98 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)((longlong)unaff_RDI + 0x61) = 0;
    if ((char)local_44 == '\0') {
      FUN_00d50b20();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01de9ba0 — 731 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01de9d7a) */
/* WARNING: Removing unreachable block (ram,0x01de9d83) */
/* WARNING: Removing unreachable block (ram,0x01de9cc4) */
/* WARNING: Removing unreachable block (ram,0x01de9ccd) */
/* WARNING: Removing unreachable block (ram,0x01de9be7) */
/* WARNING: Removing unreachable block (ram,0x01de9bf0) */
/* WARNING: Removing unreachable block (ram,0x01de9e13) */
/* WARNING: Removing unreachable block (ram,0x01de9e20) */
/* WARNING: Removing unreachable block (ram,0x01de9d03) */
/* WARNING: Removing unreachable block (ram,0x01de9d0c) */

void FUN_01de9ba0(undefined8 param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong unaff_RDI;
  longlong lVar4;
  longlong *local_40;
  char local_38;
  
  FUN_01ccad60();
  if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  if ((*(char *)(unaff_RDI + 0x59) == '\0') && ((param_2 & 4) != 0)) {
    (**(code **)(*local_40 + 0x920))();
  }
  lVar4 = DAT_02800140;
  if (DAT_02800140 != 0) {
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
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40 == (longlong *)0x0) || ((param_2 & 2) == 0)) {
LAB_01de9e5b:
    if (local_40 == (longlong *)0x0) goto LAB_01de9e6c;
  }
  else {
    cVar2 = FUN_01d26970();
    if (cVar2 != '\0') {
      FUN_01d25cb0();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      (**(code **)(*local_40 + 0x3f8))();
      if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b00();
      }
      if (0 < *(int *)((longlong)local_40 + 0xc)) {
        lVar4 = 0;
        do {
          lVar1 = *(longlong *)(local_40[2] + lVar4 * 8);
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          cVar2 = FUN_00d24090();
          if (cVar2 == '\0') {
            cVar2 = FUN_01dd3250();
            if (cVar2 != '\0') {
              FUN_01dd4720();
            }
          }
          else {
            cVar2 = FUN_01dd3250();
            if (cVar2 == '\0') {
              FUN_01dd3d20();
            }
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)((longlong)local_40 + 0xc));
      }
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_01de9e5b;
    }
    iVar3 = FUN_01d26e20();
    if (iVar3 == -1) {
      FUN_01dd4c60();
    }
    else {
      FUN_01dd3d20();
    }
  }
  FUN_00d50b20();
LAB_01de9e6c:
  if (local_40 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01debcb0 — 724 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01debe5f) */
/* WARNING: Removing unreachable block (ram,0x01debe6b) */

ulonglong FUN_01debcb0(undefined8 param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  longlong *unaff_RSI;
  longlong *plVar7;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  longlong *plVar6;
  
  lVar2 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  plVar7 = local_40;
  if (local_40 == (longlong *)0x0) {
    bVar1 = true;
    plVar7 = (longlong *)0x0;
  }
  else {
    if (local_38 == '\0') {
      FUN_00d50b00();
      bVar1 = false;
      if ((local_38 == '\0') || (local_40 == (longlong *)0x0)) goto LAB_01debd3e;
      FUN_00d50b20();
    }
    else {
      local_38 = '\0';
    }
    bVar1 = false;
  }
LAB_01debd3e:
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((bVar1) || ((**(code **)(*plVar7 + 0x3f8))(), plVar3 = local_40, local_40 == (longlong *)0x0))
  {
    uVar5 = 0;
    goto LAB_01debf63;
  }
  if (((local_38 == '\0') && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01d26010();
  plVar6 = local_40;
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    (**(code **)(*local_40 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
LAB_01debe96:
    local_70 = plVar3;
    local_68 = '\0';
    FUN_01d28610();
    plVar6 = local_40;
    local_48 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_48 = '\x01';
    local_50 = plVar6;
    FUN_01ca97a0();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    local_60 = plVar3;
    local_58 = '\0';
    FUN_01ca86b0();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_01d26010();
    local_90 = *param_2;
    local_88 = '\0';
    local_80 = *unaff_RSI;
    local_78 = '\0';
    cVar4 = (**(code **)(*local_40 + 200))(&local_80,&local_90);
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if (cVar4 == '\0') goto LAB_01debe96;
  }
  uVar5 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
  FUN_00d50b20();
LAB_01debf63:
  if (plVar7 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @01df9df0 — 661 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01df9f29) */
/* WARNING: Removing unreachable block (ram,0x01df9f35) */

int FUN_01df9df0(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong *unaff_RSI;
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
  
  lVar5 = DAT_02800140;
  if (DAT_02800140 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
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
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_01d26010();
    plVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if (plVar3 != (longlong *)0x0) {
      FUN_01d26010();
      local_80 = *param_2;
      local_78 = '\0';
      local_70 = *unaff_RSI;
      local_68 = '\0';
      iVar4 = (**(code **)(*local_40 + 0xb8))(param_1,&local_80,&local_70);
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        (**(code **)(*local_40 + 0x10))();
        FUN_00d50b20();
      }
      if (iVar4 != 0) goto LAB_01dfa06b;
    }
  }
  lVar5 = DAT_027f2e90;
  if (DAT_027f2e90 != 0) {
    FUN_00d50b00();
  }
  local_60 = lVar5;
  local_58 = '\x01';
  lVar5 = FUN_01cac500();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  lVar1 = DAT_027f2e98;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    if (DAT_027f2e98 != 0) {
      FUN_00d50b00();
    }
    local_50 = lVar1;
    local_48 = '\x01';
    lVar5 = FUN_01cac500();
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((lVar5 == 0) || (*unaff_RSI != lVar5)) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0x10;
    }
    FUN_01dcc2e0();
    if (lVar5 != 0) {
      FUN_00d50b20();
    }
  }
  if (plVar2 == (longlong *)0x0) {
    return iVar4;
  }
LAB_01dfa06b:
  FUN_00d50b20();
  return iVar4;
}




// ============================================================
// @01df05b0 — 601 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01df0795) */
/* WARNING: Removing unreachable block (ram,0x01df079e) */
/* WARNING: Removing unreachable block (ram,0x01df0692) */
/* WARNING: Removing unreachable block (ram,0x01df069f) */
/* WARNING: Removing unreachable block (ram,0x01df06e9) */
/* WARNING: Removing unreachable block (ram,0x01df06f2) */
/* WARNING: Removing unreachable block (ram,0x01df06bb) */

ulonglong FUN_01df05b0(undefined8 param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_90;
  char local_88;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = DAT_027f2e68;
  if (DAT_027f2e68 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    uVar3 = FUN_01d827c0();
    uVar5 = (ulonglong)uVar3;
  }
  else {
    uVar5 = CONCAT71((int7)((ulonglong)local_40 >> 8),1);
    if (param_2 != '\0') {
      FUN_01ccad60();
      if (local_40 == (longlong *)0x0) {
        plVar6 = (longlong *)0x0;
        if (local_38 != '\0') {
          plVar6 = (longlong *)0x0;
        }
      }
      else {
        plVar6 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      FUN_01db9a60();
      if (local_40 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = local_40;
        if (local_38 == '\0') {
          FUN_00d50b00();
        }
      }
      if ((int)plVar7[0x27] != -1) {
        FUN_01caeb00();
        (**(code **)(*local_90 + 0x980))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        lVar1 = plVar7[0x27];
        uVar4 = FUN_01dcc980();
        (**(code **)(*plVar7 + 0x978))(uVar4,(int)lVar1);
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  return uVar5 & 0xffffffff;
}




// ============================================================
// @01deef50 — 562 bytes
// str: ""GNTableColumnAssoc""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01deef50(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong **pplVar7;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  pplVar7 = &local_88;
  local_34 = param_2;
  FUN_01db9a80();
  plVar6 = local_88;
  if ((DAT_026f20e8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026f2038 = FUN_001ba850();
    _DAT_026f2020 = "GNTableColumnAssoc";
    _DAT_026f2028 = 0x58;
    _DAT_026f2030 = FUN_001f28d0;
    _DAT_026f2040 = 0;
    uRam00000000026f2048 = 0;
    _DAT_026f2050 = 0;
    uRam00000000026f2058 = 0;
    _DAT_026f2060 = 0;
    uRam00000000026f2068 = 0;
    _DAT_026f2070 = 0;
    uRam00000000026f2078 = 0;
    _DAT_026f2080 = 0;
    uRam00000000026f2088 = 0;
    _DAT_026f2090 = 0;
    uRam00000000026f2098 = 0;
    _DAT_026f20a0 = 0;
    uRam00000000026f20a8 = 0;
    _DAT_026f20b0 = 0;
    uRam00000000026f20b8 = 0;
    _DAT_026f20c0 = 0;
    uRam00000000026f20c8 = 0;
    _DAT_026f20d0 = 0;
    uRam00000000026f20d8 = 0;
    _DAT_026f20e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01deefb9;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_01deefb9:
  plVar6 = *pplVar7;
  if (plVar6 == (longlong *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar6 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_80 != '\0') && (bVar1 = bVar2, local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    local_58 = *unaff_RSI;
    local_50 = '\0';
    local_48 = *param_1;
    local_40 = '\0';
    uVar4 = FUN_01dc7fa0(&local_48,local_34);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = *unaff_RSI;
    local_70 = '\0';
    local_68 = *param_1;
    local_60 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0x538))(&local_68,local_34);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}




// ============================================================
// @01deec00 — 562 bytes
// str: ""GNTableColumnAssoc""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01deec00(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *unaff_RSI;
  longlong **pplVar7;
  longlong *local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  undefined4 local_34;
  
  pplVar7 = &local_88;
  local_34 = param_2;
  FUN_01db9a80();
  plVar6 = local_88;
  if ((DAT_026f20e8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    _DAT_026f2038 = FUN_001ba850();
    _DAT_026f2020 = "GNTableColumnAssoc";
    _DAT_026f2028 = 0x58;
    _DAT_026f2030 = FUN_001f28d0;
    _DAT_026f2040 = 0;
    uRam00000000026f2048 = 0;
    _DAT_026f2050 = 0;
    uRam00000000026f2058 = 0;
    _DAT_026f2060 = 0;
    uRam00000000026f2068 = 0;
    _DAT_026f2070 = 0;
    uRam00000000026f2078 = 0;
    _DAT_026f2080 = 0;
    uRam00000000026f2088 = 0;
    _DAT_026f2090 = 0;
    uRam00000000026f2098 = 0;
    _DAT_026f20a0 = 0;
    uRam00000000026f20a8 = 0;
    _DAT_026f20b0 = 0;
    uRam00000000026f20b8 = 0;
    _DAT_026f20c0 = 0;
    uRam00000000026f20c8 = 0;
    _DAT_026f20d0 = 0;
    uRam00000000026f20d8 = 0;
    _DAT_026f20e0 = 0;
    ___cxa_guard_release();
  }
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_01deec69;
  }
  pplVar7 = (longlong **)&DAT_02802688;
LAB_01deec69:
  plVar6 = *pplVar7;
  if (plVar6 == (longlong *)0x0) {
    bVar2 = true;
    bVar1 = true;
    plVar6 = (longlong *)0x0;
  }
  else {
    if (*(char *)(pplVar7 + 1) == '\0') {
      FUN_00d50b00();
    }
    else {
      *(undefined1 *)(pplVar7 + 1) = 0;
    }
    bVar2 = false;
    bVar1 = false;
  }
  if ((local_80 != '\0') && (bVar1 = bVar2, local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) {
    local_58 = *unaff_RSI;
    local_50 = '\0';
    local_48 = *param_1;
    local_40 = '\0';
    uVar4 = FUN_01dc7f90(&local_48,local_34);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_78 = *unaff_RSI;
    local_70 = '\0';
    local_68 = *param_1;
    local_60 = '\0';
    uVar4 = (**(code **)(*plVar6 + 0x530))(&local_68,local_34);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (!bVar1) {
      FUN_00d50b20();
    }
  }
  return uVar4;
}




// ============================================================
// @01deffb0 — 523 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01df0130) */

void FUN_01deffb0(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong unaff_RDI;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  char local_30;
  
  lVar1 = DAT_027e7c20;
  if (*(char *)(unaff_RDI + 0x50) == '\0') {
    return;
  }
  if (DAT_027e7c20 != 0) {
    FUN_00d50b00();
  }
  FUN_01ccaae0();
  lVar2 = local_38;
  if (local_30 == '\0') {
    if (((local_38 != 0) && (FUN_00d50b00(), local_30 != '\0')) && (local_38 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_30 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (lVar2 == 0) {
LAB_01df0135:
    local_50 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x10))();
    FUN_00d50b00();
    local_50 = '\x01';
    local_58 = (longlong *)(unaff_RDI + 0x48);
    FUN_00cbb340();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x10))();
      FUN_00d50b20();
    }
    *(undefined1 *)(unaff_RDI + 0x50) = 0;
  }
  else {
    FUN_01d28610();
    if (local_30 == '\0') {
      if (local_38 == 0) goto LAB_01df0135;
      FUN_00d50b00();
      if ((local_30 != '\0') && (local_38 != 0)) {
        FUN_00d50b20();
      }
    }
    else if (local_38 == 0) goto LAB_01df0135;
    local_40 = 0;
    (**(code **)(*(longlong *)(unaff_RDI + 0x48) + 0x10))();
    FUN_00d50b00();
    local_40 = '\x01';
    local_78 = 0;
    local_70 = '\0';
    local_68 = 0;
    local_60 = '\0';
    local_48 = (longlong *)(unaff_RDI + 0x48);
    FUN_00cbadd0(&local_68,&local_78);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == '\0') {
      *(undefined1 *)(unaff_RDI + 0x50) = 0;
    }
    else {
      if (local_48 != (longlong *)0x0) {
        (**(code **)(*local_48 + 0x10))();
        FUN_00d50b20();
      }
      *(undefined1 *)(unaff_RDI + 0x50) = 0;
    }
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @01deae10 — 514 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x01deafe2) */
/* WARNING: Removing unreachable block (ram,0x01deafeb) */
/* WARNING: Removing unreachable block (ram,0x01deae9f) */
/* WARNING: Removing unreachable block (ram,0x01deaea8) */

ulonglong FUN_01deae10(void)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong local_50;
  char local_48;
  longlong local_40;
  
  lVar6 = DAT_02800140;
  if (*unaff_RSI != 0) {
    if (DAT_02800140 != 0) {
      FUN_00d50b00();
    }
    FUN_01ccaae0();
    local_40 = local_50;
    if (local_50 == 0) {
      bVar3 = true;
      local_40 = 0;
    }
    else if (local_48 == '\0') {
      FUN_00d50b00();
      bVar3 = false;
    }
    else {
      local_48 = '\0';
      bVar3 = false;
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
      if (3 < *(int *)(*unaff_RSI + 0x18)) {
        lVar6 = 0;
        do {
          FUN_01d25cb0();
          lVar2 = *(longlong *)
                   (*(longlong *)(local_50 + 0x10) +
                   (longlong)*(int *)(*(longlong *)(*unaff_RSI + 0x10) + lVar6 * 4) * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00d21140();
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = lVar6 + 1;
          iVar1 = *(int *)(*unaff_RSI + 0x18);
          iVar5 = iVar1 + 3;
          if (-1 < iVar1) {
            iVar5 = iVar1;
          }
        } while (lVar6 < iVar5 >> 2);
      }
      FUN_01d2ec10();
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
      if (!bVar3) {
        FUN_00d50b20();
      }
      goto LAB_01deb00e;
    }
  }
  uVar7 = 0;
LAB_01deb00e:
  return uVar7 & 0xffffffff;
}



