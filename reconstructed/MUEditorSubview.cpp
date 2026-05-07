// Reconstructed implementation of MUEditorSubview
// From MikeCore binary — reverse-engineered pseudocode

#include "MUEditorSubview.h"

// ============================================================
// @019af4c0 — 12355 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019b00ea) */
/* WARNING: Removing unreachable block (ram,0x019b00f6) */
/* WARNING: Removing unreachable block (ram,0x019b004b) */
/* WARNING: Removing unreachable block (ram,0x019afb6b) */
/* WARNING: Removing unreachable block (ram,0x019afb77) */
/* WARNING: Removing unreachable block (ram,0x019af779) */
/* WARNING: Removing unreachable block (ram,0x019af785) */
/* WARNING: Removing unreachable block (ram,0x019afac6) */
/* WARNING: Removing unreachable block (ram,0x019afad2) */
/* WARNING: Removing unreachable block (ram,0x019afc9d) */
/* WARNING: Removing unreachable block (ram,0x019b0057) */
/* WARNING: Removing unreachable block (ram,0x019b057b) */
/* WARNING: Removing unreachable block (ram,0x019b0587) */
/* WARNING: Removing unreachable block (ram,0x019afc91) */
/* WARNING: Removing unreachable block (ram,0x019b05c8) */
/* WARNING: Removing unreachable block (ram,0x019b05d4) */

void FUN_019af4c0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined7 uVar9;
  void *pvVar7;
  undefined8 uVar8;
  pthread_key_t pVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined8 unaff_RBX;
  longlong *unaff_RDI;
  uint uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong **pplVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  longlong local_378;
  char local_370;
  longlong local_368;
  char local_360;
  longlong local_358;
  char local_350;
  longlong *local_348;
  char local_340;
  longlong *local_338;
  char local_330;
  longlong local_328;
  char local_320;
  longlong local_318;
  char local_310;
  longlong *local_308;
  char local_300;
  longlong *local_2f8;
  char local_2f0;
  longlong *local_2e8;
  char local_2e0;
  longlong *local_2d8;
  char local_2d0;
  longlong *local_2c8;
  char local_2c0;
  longlong *local_2b8;
  char local_2b0;
  longlong *local_2a8;
  char local_2a0;
  longlong *local_298;
  char local_290;
  longlong *local_288;
  char local_280;
  longlong *local_278;
  char local_270;
  longlong local_268;
  char local_260;
  longlong *local_258;
  char local_250;
  longlong *local_248;
  char local_240;
  longlong *local_238;
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
  ulonglong local_108;
  code *local_100;
  undefined8 local_f8;
  longlong *local_f0;
  char local_e8;
  longlong *local_e0;
  char local_d8;
  longlong *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  uint local_b4;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  ulonglong local_98;
  longlong *local_90;
  char local_88;
  longlong *local_80;
  undefined8 local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  ulonglong local_58;
  uint local_4c;
  longlong *local_48;
  char local_40;
  
  if (*(char *)((longlong)unaff_RDI + 0x3c5) != '\0') {
    return;
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x3c5) = 1;
  (**(code **)(*unaff_RDI + 0x9b0))();
  plVar17 = local_90;
  if (local_88 == '\0') {
    if (local_90 == (longlong *)0x0) {
      bVar20 = (char)unaff_RDI[0x9f] == '\0';
      goto LAB_019af829;
    }
    FUN_00d50b00();
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    bVar20 = (char)unaff_RDI[0x9f] == '\0';
LAB_019af55f:
    (**(code **)(*unaff_RDI + 0xe20))();
    local_1f8 = local_48;
    local_1f0 = 0;
    if (local_40 == '\0') {
      if (local_48 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_40 = '\0';
    }
    local_1f0 = '\x01';
    uVar21 = FUN_00243390();
    local_d0 = local_90;
    if (local_90 == (longlong *)0x0) {
      local_d0 = (longlong *)0x0;
      local_f8 = 0;
    }
    else if (local_88 == '\0') {
      uVar21 = FUN_00d50b00();
      local_f8 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
      uVar21 = extraout_XMM0_Qa;
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
      local_f8 = CONCAT71((int7)((ulonglong)local_90 >> 8),1);
    }
    if ((local_1f0 != '\0') && (local_1f8 != (longlong *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      uVar21 = FUN_00d50b20();
    }
    plVar11 = (longlong *)0x0;
    local_c8 = (longlong *)CONCAT71(local_c8._1_7_,bVar20);
    if ((longlong *)unaff_RDI[0x41] == (longlong *)0x0) goto LAB_019af83d;
    local_88 = '\0';
    local_90 = (longlong *)0x0;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_108 = 0;
    local_80 = (longlong *)unaff_RDI[0x41];
    while( true ) {
      iVar13 = (int)plVar11;
      if (iVar13 != 0) {
        if (iVar13 < 1) {
          iVar13 = -iVar13;
        }
        else {
          local_78 = CONCAT44(local_78._4_4_,(int)local_78 - iVar13);
          FUN_00d23690(uVar21,plVar11);
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
      lVar6 = (longlong)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((longlong)local_80 + 0xc) <= iVar13) break;
      local_90 = *(longlong **)(local_80[2] + 8 + lVar6 * 8);
      local_40 = '\0';
      local_48 = local_90;
      cVar2 = FUN_00d23d70();
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((cVar2 == '\0') ||
         (cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI)
                  )(), uVar21 = extraout_XMM0_Qa_00, cVar2 == '\0')) {
        local_48 = local_90;
        local_40 = '\0';
        uVar21 = FUN_00d23f50();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_108 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        if (((longlong *)unaff_RDI[0x92] == local_90) &&
           ((longlong *)unaff_RDI[0x92] != (longlong *)0x0)) {
          unaff_RDI[0x92] = 0;
          uVar21 = FUN_00d50b20();
        }
      }
      plVar11 = (longlong *)(local_78 >> 0x20);
    }
    FUN_001159b0();
    plVar11 = (longlong *)0x0;
  }
  else {
    bVar20 = (char)unaff_RDI[0x9f] == '\0';
    if (local_90 != (longlong *)0x0) goto LAB_019af55f;
LAB_019af829:
    local_c8 = (longlong *)CONCAT71(local_c8._1_7_,bVar20);
    plVar11 = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    local_f8 = 0;
    local_d0 = (longlong *)0x0;
LAB_019af83d:
    local_108 = 0;
  }
  (**(code **)(*unaff_RDI + 0xa60))();
  (**(code **)(*unaff_RDI + 0x9b8))();
  plVar15 = local_90;
  if (plVar17 == local_90) {
    local_b0 = plVar17;
LAB_019af8ce:
    if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (local_88 == '\0') {
      if (local_90 != (longlong *)0x0) {
        local_b0 = plVar17;
        FUN_00d50b00();
      }
      local_b0 = plVar15;
      if ((char)plVar11 == '\0') {
        FUN_00d50b20();
      }
      goto LAB_019af8ce;
    }
    local_b0 = local_90;
    if ((char)plVar11 == '\0') {
      FUN_00d50b20();
    }
  }
  lVar6 = unaff_RDI[0x46];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (ulonglong)uVar14;
  if (0 < (int)uVar14) {
    local_68 = (longlong *)0x0;
    local_4c = 0;
    uVar16 = 0;
    plVar17 = (longlong *)0x0;
    do {
      uVar14 = uVar14 - 1;
      (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar14 * 8) + 0x928))();
      plVar11 = local_90;
      local_a8 = local_90;
      uVar9 = (undefined7)((ulonglong)local_90 >> 8);
      cVar2 = (char)uVar16;
      if (plVar17 == local_90) {
        plVar11 = plVar17;
        local_c0 = uVar16;
        if ((cVar2 == '\0') && (plVar17 != (longlong *)0x0)) {
          local_c0 = CONCAT71(uVar9,1);
          if (local_88 != '\0') goto LAB_019afa47;
          local_c0 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
joined_r0x019afa0f:
        local_a8 = plVar11;
        plVar11 = local_a8;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
      else {
        if (local_88 == '\0') {
          uVar21 = 0;
          if (local_90 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          plVar11 = local_a8;
          local_c0 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar17 = plVar11;
            plVar11 = local_a8;
          }
          goto joined_r0x019afa0f;
        }
        local_c0 = CONCAT71(uVar9,1);
        if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar17 = plVar11;
          plVar11 = local_a8;
        }
      }
LAB_019afa47:
      local_a8 = plVar11;
      cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI))();
      plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar17 >> 8),1);
      if ((cVar2 != '\0') && (local_b0 != (longlong *)0x0)) {
        local_90 = local_a8;
        local_88 = '\0';
        uVar5 = FUN_00d24090();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar11 = (longlong *)((ulonglong)uVar5 ^ 1);
      }
      plVar17 = local_68;
      if ((char)plVar11 != '\0') {
        plVar11 = *(longlong **)(*(longlong *)(unaff_RDI[0x46] + 0x10) + (ulonglong)uVar14 * 8);
        local_58 = uVar19;
        if (local_68 == plVar11) {
          if ((char)local_4c == '\0') {
            if (local_68 != (longlong *)0x0) {
              local_a0 = (longlong *)CONCAT71(local_a0._1_7_,1);
              local_4c = 0;
              FUN_00d50b00();
              goto LAB_019afb2b;
            }
            local_a0 = (longlong *)((ulonglong)local_a0._1_7_ << 8);
            if (unaff_RDI[0x4b] == 0) goto LAB_019afb3c;
          }
          else {
            local_a0 = (longlong *)CONCAT71(local_a0._1_7_,(char)local_4c);
            if ((longlong *)unaff_RDI[0x4b] == local_68) goto LAB_019afb3c;
          }
        }
        else {
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          local_a0 = (longlong *)CONCAT71(local_a0._1_7_,1);
          plVar17 = plVar11;
          if (((char)local_4c != '\0') && (local_68 != (longlong *)0x0)) {
            local_68 = plVar11;
            FUN_00d50b20();
          }
LAB_019afb2b:
          if ((longlong *)unaff_RDI[0x4b] == plVar17) {
LAB_019afb3c:
            (**(code **)(&DAT_00001440 + *unaff_RDI))();
          }
        }
        (**(code **)(*plVar17 + 0x928))();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar11;
        local_88 = '\0';
        FUN_00e383c0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01960580();
        (**(code **)(*plVar17 + 0x478))();
        FUN_00d23620();
        local_4c = (uint)(byte)local_a0;
        uVar19 = local_58;
        local_68 = plVar17;
      }
      if ((longlong)uVar19 < 2) goto LAB_019afd25;
      uVar19 = uVar19 - 1;
      lVar6 = unaff_RDI[0x46];
      uVar16 = local_c0 & 0xffffffff;
      plVar17 = local_a8;
    } while( true );
  }
  local_c0 = 0;
  local_a8 = (longlong *)0x0;
  local_4c = 0;
  local_68 = (longlong *)0x0;
LAB_019afd25:
  lVar6 = unaff_RDI[0x49];
  uVar14 = *(uint *)(lVar6 + 0xc);
  plVar17 = (longlong *)(ulonglong)uVar14;
  if (0 < (int)uVar14) {
    local_60 = (longlong *)0x0;
    uVar21 = 0;
    local_98 = 0;
    do {
      uVar14 = uVar14 - 1;
      uVar19 = (ulonglong)uVar14;
      (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + uVar19 * 8) + 0x928))();
      if (local_48 == (longlong *)0x0) {
        cVar2 = '\x01';
      }
      else {
        (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI[0x49] + 0x10) + uVar19 * 8) + 0x928))()
        ;
        plVar11 = local_f0;
        local_1e0 = 0;
        if (local_e8 == '\0') {
          if (local_f0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_e8 = '\0';
        }
        local_1e0 = '\x01';
        local_1e8 = plVar11;
        cVar3 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *unaff_RDI + 0x30))();
        cVar2 = '\x01';
        if ((cVar3 != '\0') && (local_b0 != (longlong *)0x0)) {
          (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI[0x49] + 0x10) + uVar19 * 8) + 0x928))
                    ();
          plVar11 = local_e0;
          if (local_d8 == '\0') {
            if (local_e0 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d8 = '\0';
          }
          local_90 = plVar11;
          local_88 = '\0';
          cVar3 = FUN_00d24090();
          if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          cVar2 = '\x01';
          if (cVar3 != '\0') {
            (**(code **)(**(longlong **)(*(longlong *)(unaff_RDI[0x49] + 0x10) + uVar19 * 8) + 0x928
                        ))();
            pvVar7 = _pthread_getspecific((pthread_key_t)uVar21);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_01263cf0();
            if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          if (plVar11 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          plVar11 = plVar17;
          if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if ((local_1e0 != '\0') && (local_1e8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      plVar15 = local_60;
      if (cVar2 != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(unaff_RDI[0x49] + 0x10) + uVar19 * 8);
        if (local_60 == plVar1) {
          if ((char)local_98 == '\0') {
            if (local_60 != (longlong *)0x0) {
              local_98 = 0;
              FUN_00d50b00();
              goto LAB_019b000b;
            }
            plVar11 = (longlong *)(local_98 & 0xffffffff);
            if (unaff_RDI[0x4b] == 0) goto LAB_019b001c;
          }
          else {
            plVar11 = (longlong *)(local_98 & 0xffffffff);
            if ((longlong *)unaff_RDI[0x4b] == local_60) goto LAB_019b001c;
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar15 = plVar1;
          if (((char)local_98 != '\0') && (local_60 != (longlong *)0x0)) {
            local_60 = plVar1;
            FUN_00d50b20();
          }
LAB_019b000b:
          plVar11 = (longlong *)CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
          if ((longlong *)unaff_RDI[0x4b] == plVar15) {
LAB_019b001c:
            (**(code **)(&DAT_00001440 + *unaff_RDI))();
          }
        }
        FUN_019781b0();
        (**(code **)(*plVar15 + 0x478))();
        FUN_00d23620();
        local_98 = (ulonglong)plVar11 & 0xffffffff;
        local_60 = plVar15;
      }
      if ((longlong)plVar17 < 2) goto LAB_019b0155;
      plVar17 = (longlong *)((longlong)plVar17 + -1);
      lVar6 = unaff_RDI[0x49];
    } while( true );
  }
  local_98 = 0;
  local_60 = (longlong *)0x0;
LAB_019b0155:
  lVar6 = unaff_RDI[0x4a];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (ulonglong)uVar14;
  local_c8 = (longlong *)CONCAT44(local_c8._4_4_,(uint)(byte)local_c8);
  if (0 < (int)uVar14) {
    plVar17 = (longlong *)0x0;
    uVar16 = 0;
    do {
      uVar14 = uVar14 - 1;
      lVar6 = *(longlong *)(lVar6 + 0x10);
      plVar11 = *(longlong **)(lVar6 + (ulonglong)uVar14 * 8);
      if (plVar17 == plVar11) {
        if (((char)uVar16 == '\0') && (plVar17 != (longlong *)0x0)) {
          local_58 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
          FUN_00d50b00();
          plVar11 = plVar17;
          goto LAB_019b0200;
        }
        local_a0 = plVar17;
        local_58 = uVar16;
        if (local_b0 != (longlong *)0x0) goto LAB_019b0215;
LAB_019b0551:
        plVar17 = local_a0;
        FUN_0197ef60();
        if ((longlong *)unaff_RDI[0x4b] == plVar17) {
          (**(code **)(&DAT_00001440 + *unaff_RDI))();
        }
        (**(code **)(*plVar17 + 0x478))();
        FUN_00d23620();
      }
      else {
        if (plVar11 != (longlong *)0x0) {
          lVar6 = FUN_00d50b00();
        }
        local_58 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
        if (((char)uVar16 != '\0') && (plVar17 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019b0200:
        plVar17 = plVar11;
        local_a0 = plVar11;
        if (local_b0 == (longlong *)0x0) goto LAB_019b0551;
LAB_019b0215:
        local_a0 = plVar17;
        (**(code **)(*plVar17 + 0x928))();
        plVar17 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar17;
        local_88 = '\0';
        cVar2 = FUN_00d24090();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        bVar4 = 1;
        if (cVar2 != '\0') {
          cVar2 = FUN_019801a0();
          local_b4 = CONCAT31(local_b4._1_3_,cVar2);
          if (cVar2 == '\0') {
LAB_019b035b:
            cVar2 = FUN_019801b0();
            local_100 = (code *)CONCAT71(local_100._1_7_,cVar2);
            if (cVar2 == '\0') {
LAB_019b03fd:
              (**(code **)(*local_a0 + 0x928))();
              plVar11 = local_90;
              local_1b0 = 0;
              if (local_88 == '\0') {
                if (local_90 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_88 = '\0';
              }
              local_1b0 = '\x01';
              local_1b8 = plVar11;
              bVar4 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version +
                                  *unaff_RDI))();
              if ((local_1b0 != '\0') && (local_1b8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              bVar4 = bVar4 ^ 1;
              if ((char)local_100 != '\0') goto LAB_019b04af;
            }
            else {
              (**(code **)(*local_a0 + 0x928))();
              local_1c8 = local_e0;
              local_1c0 = 0;
              if (local_d8 == '\0') {
                if (local_e0 != (longlong *)0x0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_d8 = '\0';
              }
              local_1c0 = '\x01';
              cVar2 = (**(code **)(
                                  "/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText"
                                  + *unaff_RDI + 8))();
              bVar4 = 1;
              if (cVar2 != '\0') goto LAB_019b03fd;
LAB_019b04af:
              if ((local_1c0 != '\0') && (local_1c8 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
              if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            if ((char)local_b4 == '\0') goto LAB_019b0520;
          }
          else {
            (**(code **)(*local_a0 + 0x928))();
            local_1d8 = local_f0;
            local_1d0 = 0;
            if (local_e8 == '\0') {
              if (local_f0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_e8 = '\0';
            }
            local_1d0 = '\x01';
            cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText"
                                + *unaff_RDI))();
            bVar4 = 1;
            if (cVar2 != '\0') goto LAB_019b035b;
          }
          if ((local_1d0 != '\0') && (local_1d8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_e8 != '\0') && (local_f0 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b0520:
        if (plVar17 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar17 = local_a0;
        if (bVar4 != 0) goto LAB_019b0551;
      }
      if ((longlong)uVar19 < 2) goto LAB_019b0631;
      uVar19 = uVar19 - 1;
      lVar6 = unaff_RDI[0x4a];
      uVar16 = local_58 & 0xffffffff;
    } while( true );
  }
  local_58 = 0;
  plVar17 = (longlong *)0x0;
LAB_019b0631:
  local_100 = (code *)(**(code **)(*unaff_RDI + 0xa58))();
  (**(code **)(*unaff_RDI + 0x9b8))();
  plVar11 = local_90;
  if (local_90 != local_b0) {
    if (local_88 != '\0') {
      if (local_b0 == (longlong *)0x0) {
        local_b0 = local_90;
      }
      else {
        local_b0 = local_90;
        FUN_00d50b20();
      }
      goto LAB_019b06dd;
    }
    if (local_90 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    bVar20 = local_b0 != (longlong *)0x0;
    local_b0 = plVar11;
    if (bVar20) {
      FUN_00d50b20();
    }
  }
  if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
LAB_019b06dd:
  if (local_b0 == (longlong *)0x0) {
    local_b4 = 0;
  }
  else {
    local_88 = 0;
    local_90 = (longlong *)0x0;
    local_80 = local_b0;
    local_78._0_4_ = -1;
    local_78._4_4_ = 0;
    local_70 = 0;
    local_b4 = 0;
    local_a0 = plVar17;
    while( true ) {
      lVar6 = (longlong)(int)local_78;
      local_78._0_4_ = (int)local_78 + 1;
      if (*(int *)((longlong)local_80 + 0xc) <= (int)local_78) break;
      local_378 = *(longlong *)(local_80[2] + 8 + lVar6 * 8);
      local_370 = '\0';
      local_90 = (longlong *)local_378;
      (**(code **)(*unaff_RDI + 0xab0))(local_80[2],&local_378);
      plVar11 = local_48;
      plVar17 = local_68;
      uVar9 = (undefined7)(uVar19 >> 8);
      if (local_48 == local_68) {
        if (((char)local_4c == '\0') && (local_48 != (longlong *)0x0)) {
          plVar11 = local_68;
          if (local_40 != '\0') goto LAB_019b0805;
          uVar19 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
        else {
          uVar19 = (ulonglong)local_4c;
        }
      }
      else if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar19 = CONCAT71(uVar9,1);
        plVar17 = plVar11;
        if (((char)local_4c != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_4c != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019b0805:
        local_40 = '\0';
        uVar19 = CONCAT71(uVar9,1);
        plVar17 = plVar11;
      }
      if (plVar17 == (longlong *)0x0) {
        local_368 = (longlong)local_90;
        local_360 = '\0';
        cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI))
                          ();
        if ((local_360 != '\0') && (local_368 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        cVar2 = '\0';
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_370 != '\0') && (local_378 != 0)) {
        FUN_00d50b20();
      }
      uVar14 = (uint)uVar19;
      if (cVar2 != '\0') {
        (**(code **)(&UNK_000014e8 + *unaff_RDI))();
        local_68 = local_48;
        cVar2 = (char)uVar19;
        uVar9 = (undefined7)((ulonglong)local_48 >> 8);
        plVar11 = local_48;
        if (local_48 == plVar17) {
          plVar15 = plVar17;
          local_4c = uVar14;
          if ((cVar2 == '\0') && (local_48 != (longlong *)0x0)) {
            local_4c = (uint)CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b09af;
            local_4c = (uint)CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
LAB_019b099b:
          local_68 = plVar15;
          plVar15 = local_68;
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar15 = local_68;
          }
        }
        else {
          if (local_40 == '\0') {
            uVar21 = 0;
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_4c = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
            plVar15 = local_68;
            if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar15 = local_68;
            }
            goto LAB_019b099b;
          }
          local_4c = (uint)CONCAT71(uVar9,1);
          plVar15 = local_68;
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar15 = local_68;
          }
        }
LAB_019b09af:
        local_68 = plVar15;
        pVar10 = (pthread_key_t)plVar11;
        local_358 = (longlong)local_90;
        local_350 = '\0';
        FUN_01960580();
        if ((local_350 != '\0') && (local_358 != 0)) {
          FUN_00d50b20();
        }
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_1a0 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_1a0 = '\x01';
        local_1a8 = plVar17;
        FUN_0198a7b0();
        if ((local_1a0 != '\0') && (local_1a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_348 = local_68;
        local_340 = '\0';
        (**(code **)(*unaff_RDI + 0x450))();
        if ((local_340 != '\0') && (local_348 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_48 = local_68;
        local_40 = '\0';
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_338 = local_68;
        local_330 = '\0';
        uVar21 = (**(code **)(*local_68 + 0x928))();
        plVar17 = local_48;
        local_190 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_190 = '\x01';
        local_198 = plVar17;
        uVar21 = FUN_019b43b0(uVar21,&local_198);
        if ((local_190 != '\0') && (local_198 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        plVar17 = local_68;
        uVar14 = local_4c;
        if ((local_330 != '\0') && (local_338 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar17 = local_68;
          uVar14 = local_4c;
        }
      }
      local_4c = uVar14;
      local_68 = plVar17;
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          local_78._4_4_ = -local_78._4_4_;
        }
        else {
          local_78._0_4_ = (int)local_78 - local_78._4_4_;
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          local_78._4_4_ = 0;
        }
      }
    }
    FUN_001159b0();
    plVar17 = local_a0;
    local_88 = 0;
    local_90 = (longlong *)0x0;
    local_80 = local_b0;
    local_78._0_4_ = -1;
    local_78._4_4_ = 0;
    local_70 = 0;
    pplVar18 = &local_48;
    while( true ) {
      lVar6 = (longlong)(int)local_78;
      local_78._0_4_ = (int)local_78 + 1;
      if (*(int *)((longlong)local_80 + 0xc) <= (int)local_78) break;
      lVar12 = local_80[2];
      local_90 = *(longlong **)(lVar12 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar12);
      pVar10 = (pthread_key_t)lVar12;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar21 = FUN_0125e930();
      if (local_48 == (longlong *)0x0) {
LAB_019b0d61:
        cVar2 = '\0';
      }
      else {
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        uVar21 = extraout_XMM0_Qa_01;
        if (cVar2 != '\0') goto LAB_019b0d61;
        local_328 = (longlong)local_90;
        local_320 = '\0';
        cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                            *unaff_RDI + 0x30))();
        uVar21 = extraout_XMM0_Qa_02;
        if ((local_320 != '\0') && (local_328 != 0)) {
          uVar21 = FUN_00d50b20();
        }
      }
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (cVar2 != '\0') {
        local_318 = (longlong)local_90;
        local_310 = '\0';
        (**(code **)(*unaff_RDI + 0xae8))(uVar21,&local_318);
        plVar11 = local_60;
        uVar9 = (undefined7)(uVar19 >> 8);
        if (local_48 == local_60) {
          if (((char)local_98 == '\0') && (local_48 != (longlong *)0x0)) {
            if (local_40 != '\0') goto LAB_019b0e68;
            uVar19 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            uVar19 = local_98 & 0xffffffff;
          }
LAB_019b0ec0:
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          plVar11 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            uVar19 = CONCAT71(uVar9,1);
            if (((char)local_98 != '\0') && (local_60 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_019b0ec0;
          }
          if (((char)local_98 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_019b0e68:
          local_40 = '\0';
          uVar19 = CONCAT71(uVar9,1);
        }
        if ((local_310 != '\0') && (local_318 != 0)) {
          FUN_00d50b20();
        }
        if (plVar11 == (longlong *)0x0) {
          (**(code **)(&UNK_000014f0 + *unaff_RDI))();
          local_60 = local_48;
          plVar11 = local_48;
          if (local_48 == (longlong *)0x0) {
            local_60 = (longlong *)0x0;
            local_98 = uVar19 & 0xffffffff;
          }
          else {
            local_98 = CONCAT71((int7)((ulonglong)local_48 >> 8),1);
            if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) &&
               (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          pVar10 = (pthread_key_t)plVar11;
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar11 = local_48;
          local_180 = 0;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_180 = '\x01';
          local_188 = plVar11;
          FUN_0198a7b0();
          if ((local_180 != '\0') && (local_188 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_308 = local_60;
          local_300 = '\0';
          (**(code **)(*unaff_RDI + 0x450))();
          if ((local_300 != '\0') && (local_308 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_48 = local_60;
          local_40 = '\0';
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          plVar11 = local_48;
          local_170 = 0;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_170 = '\x01';
          local_178 = plVar11;
          uVar21 = FUN_019781b0();
          if ((local_170 != '\0') && (local_178 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        }
        else {
          local_98 = uVar19 & 0xffffffff;
          local_60 = plVar11;
        }
      }
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          local_78._4_4_ = -local_78._4_4_;
        }
        else {
          local_78._0_4_ = (int)local_78 - local_78._4_4_;
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          local_78._4_4_ = 0;
        }
      }
    }
    FUN_001159b0();
    local_88 = '\0';
    local_90 = (longlong *)0x0;
    local_80 = local_b0;
    local_78 = 0xffffffff;
    local_70 = 0;
    while( true ) {
      lVar6 = (longlong)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((longlong)local_80 + 0xc) <= iVar13) break;
      lVar12 = local_80[2];
      local_2f8 = *(longlong **)(lVar12 + 8 + lVar6 * 8);
      local_2f0 = '\0';
      local_90 = local_2f8;
      cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                          *unaff_RDI))(lVar12,(ulonglong)local_c8 & 0xffffffff);
      pVar10 = (pthread_key_t)lVar12;
      if (cVar2 == '\0') {
        bVar20 = false;
        uVar19 = local_58 & 0xffffffff;
        uVar21 = extraout_XMM0_Qa_03;
      }
      else {
        local_2e8 = local_90;
        local_2e0 = '\0';
        uVar21 = (**(code **)(*unaff_RDI + 0xaf0))(extraout_XMM0_Qa_03,&local_2e8);
        plVar11 = local_48;
        uVar9 = (undefined7)((ulonglong)pplVar18 >> 8);
        if (local_48 == plVar17) {
          if (((char)local_58 == '\0') && (local_48 != (longlong *)0x0)) {
            plVar11 = plVar17;
            if (local_40 != '\0') goto LAB_019b12e4;
            uVar19 = CONCAT71(uVar9,1);
            uVar21 = FUN_00d50b00();
          }
          else {
            uVar19 = local_58 & 0xffffffff;
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            uVar19 = CONCAT71(uVar9,1);
            if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
              uVar21 = FUN_00d50b20();
              plVar17 = plVar11;
              goto LAB_019b1330;
            }
          }
          else {
            if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
              uVar21 = FUN_00d50b20();
            }
LAB_019b12e4:
            local_40 = '\0';
          }
          uVar19 = CONCAT71(uVar9,1);
          plVar17 = plVar11;
        }
LAB_019b1330:
        bVar20 = plVar17 == (longlong *)0x0;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_2e0 != '\0') && (local_2e8 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
      }
      if ((local_2f0 != '\0') && (local_2f8 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (bVar20) {
        uVar21 = (**(code **)(&UNK_000014f8 + *unaff_RDI))();
        plVar11 = local_48;
        uVar9 = (undefined7)((ulonglong)uVar21 >> 8);
        cVar2 = (char)uVar19;
        if (local_48 == plVar17) {
          plVar11 = plVar17;
          if ((cVar2 == '\0') && (local_48 != (longlong *)0x0)) {
            local_58 = CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b146e;
            local_58 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            local_58 = uVar19 & 0xffffffff;
          }
joined_r0x019b1446:
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_58 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
            if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x019b1446;
          }
          local_58 = CONCAT71(uVar9,1);
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b146e:
        local_2d8 = local_90;
        local_2d0 = '\0';
        FUN_0197ef60();
        if ((local_2d0 != '\0') && (local_2d8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01983ac0();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_160 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_160 = '\x01';
        local_168 = plVar17;
        FUN_0198a7b0();
        if ((local_160 != '\0') && (local_168 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_2c0 = '\0';
        local_2c8 = plVar11;
        (**(code **)(*unaff_RDI + 0x450))();
        if ((local_2c0 != '\0') && (local_2c8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = plVar11;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01981860();
        (**(code **)(*unaff_RDI + 0xed0))();
        plVar17 = local_48;
        local_150 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_150 = '\x01';
        local_158 = plVar17;
        uVar8 = FUN_01983f50();
        uVar21 = extraout_XMM0_Qa_04;
        if ((local_150 != '\0') && (local_158 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
          uVar21 = extraout_XMM0_Qa_05;
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar8 = FUN_00d50b20();
          uVar21 = extraout_XMM0_Qa_06;
        }
        local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
        plVar17 = plVar11;
      }
      else {
        local_58 = uVar19 & 0xffffffff;
      }
      local_2b8 = local_90;
      local_2b0 = '\0';
      cVar2 = (**(code **)("/System/Library/Frameworks/CoreText.framework/Versions/A/CoreText" +
                          *unaff_RDI + 8))(uVar21,(ulonglong)local_c8 & 0xffffffff);
      if (cVar2 == '\0') {
        bVar20 = false;
        pplVar18 = (longlong **)(local_58 & 0xffffffff);
      }
      else {
        local_2a8 = local_90;
        local_2a0 = '\0';
        (**(code **)(*unaff_RDI + 0xaf8))(extraout_XMM0_Qa_07,&local_2a8);
        plVar11 = local_48;
        uVar9 = (undefined7)(uVar19 >> 8);
        if (local_48 == plVar17) {
          if (((char)local_58 == '\0') && (local_48 != (longlong *)0x0)) {
            plVar11 = plVar17;
            if (local_40 != '\0') goto LAB_019b1744;
            pplVar18 = (longlong **)CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            pplVar18 = (longlong **)(local_58 & 0xffffffff);
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            pplVar18 = (longlong **)CONCAT71(uVar9,1);
            if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar17 = plVar11;
              goto LAB_019b1790;
            }
          }
          else {
            if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_019b1744:
            local_40 = '\0';
          }
          pplVar18 = (longlong **)CONCAT71(uVar9,1);
          plVar17 = plVar11;
        }
LAB_019b1790:
        bVar20 = plVar17 == (longlong *)0x0;
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_2a0 != '\0') && (local_2a8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_2b0 != '\0') && (local_2b8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar20) {
        uVar21 = (**(code **)(&UNK_000014f8 + *unaff_RDI))();
        plVar11 = local_48;
        cVar2 = (char)pplVar18;
        uVar9 = (undefined7)((ulonglong)uVar21 >> 8);
        if (local_48 == plVar17) {
          plVar11 = plVar17;
          if ((cVar2 == '\0') && (local_48 != (longlong *)0x0)) {
            local_58 = CONCAT71(uVar9,1);
            if (local_40 != '\0') goto LAB_019b18be;
            local_58 = CONCAT71(uVar9,1);
            FUN_00d50b00();
          }
          else {
            local_58 = (ulonglong)pplVar18 & 0xffffffff;
          }
joined_r0x019b1896:
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
            local_58 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
            if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto joined_r0x019b1896;
          }
          local_58 = CONCAT71(uVar9,1);
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
LAB_019b18be:
        local_298 = local_90;
        local_290 = '\0';
        FUN_0197ef60();
        if ((local_290 != '\0') && (local_298 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01983ad0();
        pvVar7 = _pthread_getspecific(pVar10);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        plVar17 = local_48;
        local_140 = 0;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_140 = '\x01';
        local_148 = plVar17;
        FUN_0198a7b0();
        if ((local_140 != '\0') && (local_148 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_280 = '\0';
        local_288 = plVar11;
        (**(code **)(*unaff_RDI + 0x450))();
        if ((local_280 != '\0') && (local_288 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        local_40 = '\0';
        local_48 = plVar11;
        FUN_00d21140();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01981860();
        (**(code **)(*unaff_RDI + 0xed0))();
        plVar17 = local_48;
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
        local_138 = plVar17;
        uVar21 = FUN_01983f50();
        if ((local_130 != '\0') && (local_138 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
        plVar17 = plVar11;
      }
      else {
        local_58 = (ulonglong)pplVar18 & 0xffffffff;
      }
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar13 = -local_78._4_4_;
        }
        else {
          iVar13 = (int)local_78 - local_78._4_4_;
          local_78._4_4_ = (int)(local_78 >> 0x20);
          local_78 = CONCAT44(local_78._4_4_,iVar13);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
    }
    FUN_001159b0();
  }
  local_a0 = plVar17;
  uVar21 = (**(code **)(*unaff_RDI + 0x9d8))(local_100,param_2);
  plVar11 = local_90;
  if ((((local_88 == '\0') && (local_90 != (longlong *)0x0)) &&
      (uVar21 = FUN_00d50b00(), local_88 != '\0')) && (local_90 != (longlong *)0x0)) {
    uVar21 = FUN_00d50b20();
  }
  lVar6 = unaff_RDI[0x48];
  uVar14 = *(uint *)(lVar6 + 0xc);
  uVar19 = (ulonglong)uVar14;
  local_c8 = plVar11;
  if (0 < (int)uVar14) {
    do {
      plVar17 = local_a8;
      uVar14 = uVar14 - 1;
      uVar16 = local_c0 & 0xffffffff;
      (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar14 * 8) + 0x928))();
      local_a8 = local_90;
      uVar9 = (undefined7)((ulonglong)local_90 >> 8);
      cVar2 = (char)uVar16;
      if (plVar17 == local_90) {
        local_c0 = uVar16;
        plVar11 = plVar17;
        if ((cVar2 == '\0') && (plVar17 != (longlong *)0x0)) {
          local_c0 = CONCAT71(uVar9,1);
          if (local_88 != '\0') goto LAB_019b1cd7;
          local_c0 = CONCAT71(uVar9,1);
          FUN_00d50b00();
        }
joined_r0x019b1c8f:
        local_a8 = plVar11;
        plVar11 = local_a8;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
      else {
        if (local_88 == '\0') {
          uVar21 = 0;
          if (local_90 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          local_c0 = CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
          plVar11 = local_a8;
          if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
            FUN_00d50b20();
            plVar11 = local_a8;
          }
          goto joined_r0x019b1c8f;
        }
        local_c0 = CONCAT71(uVar9,1);
        plVar11 = local_a8;
        if ((cVar2 != '\0') && (plVar17 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar11 = local_a8;
        }
      }
LAB_019b1cd7:
      local_a8 = plVar11;
      local_278 = local_a8;
      local_270 = '\0';
      cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI))();
      bVar4 = 1;
      uVar21 = extraout_XMM0_Qa_08;
      if ((cVar2 != '\0') && (local_c8 != (longlong *)0x0)) {
        local_90 = local_a8;
        local_88 = '\0';
        bVar4 = FUN_00d24090();
        uVar21 = extraout_XMM0_Qa_09;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          uVar21 = FUN_00d50b20();
        }
        bVar4 = bVar4 ^ 1;
      }
      if ((local_270 != '\0') && (local_278 != (longlong *)0x0)) {
        uVar21 = FUN_00d50b20();
      }
      if (bVar4 != 0) {
        plVar17 = *(longlong **)(*(longlong *)(unaff_RDI[0x48] + 0x10) + (ulonglong)uVar14 * 8);
        if (plVar17 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        (**(code **)(*plVar17 + 0x928))();
        plVar11 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        local_90 = plVar11;
        local_88 = '\0';
        FUN_00e383c0();
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar11 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d23620();
        local_260 = '\0';
        local_268 = 0;
        FUN_01960580();
        if ((local_260 != '\0') && (local_268 != 0)) {
          FUN_00d50b20();
        }
        (**(code **)(*plVar17 + 0x478))();
        uVar21 = FUN_00d50b20();
      }
      plVar17 = local_a0;
      if ((longlong)uVar19 < 2) break;
      uVar19 = uVar19 - 1;
      lVar6 = unaff_RDI[0x48];
    } while( true );
  }
  if (local_c8 != (longlong *)0x0) {
    local_88 = '\0';
    local_90 = (longlong *)0x0;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_100 = DAT_02621e10;
    local_78._4_4_ = 0;
    local_80 = local_c8;
    while( true ) {
      if (local_78._4_4_ != 0) {
        if (local_78._4_4_ < 1) {
          iVar13 = -local_78._4_4_;
        }
        else {
          iVar13 = (int)local_78 - local_78._4_4_;
          local_78 = CONCAT44(local_78._4_4_,iVar13);
          FUN_00d23690();
          local_70 = local_70 + local_78._4_4_;
          iVar13 = 0;
        }
        local_78 = CONCAT44(iVar13,(int)local_78);
      }
      lVar6 = (longlong)(int)local_78;
      iVar13 = (int)local_78 + 1;
      local_78 = CONCAT44(local_78._4_4_,iVar13);
      if (*(int *)((longlong)local_80 + 0xc) <= iVar13) break;
      lVar12 = local_80[2];
      local_258 = *(longlong **)(lVar12 + 8 + lVar6 * 8);
      local_250 = '\0';
      local_90 = local_258;
      (**(code **)(*unaff_RDI + 0xac0))(lVar12,&local_258);
      plVar17 = local_48;
      pVar10 = (pthread_key_t)lVar12;
      if (local_40 == '\0') {
        if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_40 = '\0';
      }
      if ((local_250 != '\0') && (local_258 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar17 == (longlong *)0x0) {
        local_248 = local_90;
        local_240 = '\0';
        cVar2 = (**(code **)((longlong)&dylib_command_000012e8.dylib.current_version + *unaff_RDI))
                          ();
        if ((local_240 != '\0') && (local_248 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          plVar17 = (longlong *)FUN_00e8fc40();
          FUN_0034cc20();
          *plVar17 = (longlong)&DAT_02621df8;
          plVar17[2] = (longlong)&DAT_026227f0;
          plVar17[0x27] = (longlong)&DAT_02622830;
          plVar17[0x2d] = (longlong)&DAT_02622860;
          plVar17[0x2e] = (longlong)&DAT_026228b0;
          (*local_100)();
          local_238 = local_90;
          local_230 = '\0';
          FUN_01960580();
          if ((local_230 != '\0') && (local_238 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          plVar11 = local_48;
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
          local_128 = plVar11;
          FUN_0198a7b0();
          if ((local_120 != '\0') && (local_128 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_220 = '\0';
          local_228 = plVar17;
          (**(code **)(*unaff_RDI + 0x450))();
          if ((local_220 != '\0') && (local_228 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          local_48 = plVar17;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_210 = '\0';
          local_218 = plVar17;
          uVar21 = (**(code **)(*plVar17 + 0x928))();
          plVar17 = local_48;
          local_110 = 0;
          if (local_40 == '\0') {
            if (local_48 != (longlong *)0x0) {
              uVar21 = FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          local_110 = '\x01';
          local_118 = plVar17;
          uVar21 = FUN_019b43b0(uVar21,&local_118);
          if ((local_110 != '\0') && (local_118 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            uVar21 = FUN_00d50b20();
          }
          local_b4 = (uint)CONCAT71((int7)((ulonglong)uVar21 >> 8),1);
          if ((local_210 != '\0') && (local_218 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_019b1f00;
        }
      }
      else {
LAB_019b1f00:
        FUN_00d50b20();
      }
    }
    uVar21 = FUN_001159b0();
    plVar17 = local_a0;
  }
  if ((local_108 & 1) != 0) {
    local_208 = local_d0;
    local_200 = '\0';
    (**(code **)(*unaff_RDI + 0xdc8))(uVar21,1);
    if ((local_200 != '\0') && (local_208 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  for (iVar13 = *(int *)(unaff_RDI[0x48] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  for (iVar13 = *(int *)(unaff_RDI[0x46] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  for (iVar13 = *(int *)(unaff_RDI[0x49] + 0xc); 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_0198a800();
  }
  uVar19 = (ulonglong)*(uint *)(unaff_RDI[0x4a] + 0xc);
  if (0 < (int)*(uint *)(unaff_RDI[0x4a] + 0xc)) {
    while( true ) {
      FUN_019801c0();
      plVar17 = local_90;
      if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar17 == (longlong *)0x0) {
        FUN_0198a800();
      }
      if ((longlong)uVar19 < 2) break;
      uVar19 = uVar19 - 1;
    }
    uVar19 = (ulonglong)*(uint *)(unaff_RDI[0x4a] + 0xc);
    plVar17 = local_a0;
    if (0 < (int)*(uint *)(unaff_RDI[0x4a] + 0xc)) {
      while( true ) {
        FUN_019801c0();
        plVar17 = local_90;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar17 != (longlong *)0x0) {
          FUN_0198a800();
        }
        plVar17 = local_a0;
        if ((longlong)uVar19 < 2) break;
        uVar19 = uVar19 - 1;
      }
    }
  }
  if ((longlong *)unaff_RDI[0x58] != (longlong *)0x0) {
    (**(code **)(*(longlong *)unaff_RDI[0x58] + 0x458))();
  }
  plVar11 = (longlong *)unaff_RDI[0x59];
  if ((plVar11 != (longlong *)0x0) && ((longlong *)unaff_RDI[0x58] != plVar11)) {
    (**(code **)(*plVar11 + 0x458))();
  }
  if ((local_b4 & 1) != 0) {
    (**(code **)(*unaff_RDI + 0xb48))();
  }
  (**(code **)(&DAT_000014b8 + *unaff_RDI))();
  *(undefined1 *)((longlong)unaff_RDI + 0x3c5) = 0;
  if (local_c8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_f8 != '\0') && (local_d0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (((char)local_c0 != '\0') && (local_a8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (plVar17 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_98 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (((char)local_4c != '\0') && (local_68 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @019365c0 — 2753 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019369ac) */
/* WARNING: Removing unreachable block (ram,0x01936f65) */
/* WARNING: Removing unreachable block (ram,0x01936f71) */
/* WARNING: Removing unreachable block (ram,0x0193684a) */
/* WARNING: Removing unreachable block (ram,0x01936856) */
/* WARNING: Removing unreachable block (ram,0x0193675e) */
/* WARNING: Removing unreachable block (ram,0x0193676a) */
/* WARNING: Removing unreachable block (ram,0x01936e62) */
/* WARNING: Removing unreachable block (ram,0x01936e6e) */
/* WARNING: Removing unreachable block (ram,0x01936fd3) */
/* WARNING: Removing unreachable block (ram,0x01936fe2) */
/* WARNING: Removing unreachable block (ram,0x019369b8) */

void FUN_019365c0(undefined8 param_1,double param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong lVar8;
  void *pvVar9;
  undefined7 uVar11;
  undefined8 uVar10;
  pthread_key_t pVar12;
  longlong lVar13;
  double dVar14;
  longlong *unaff_RDI;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong local_d8;
  char local_d0;
  ulonglong local_90;
  longlong *local_80;
  char local_78 [8];
  longlong *local_70;
  undefined8 local_68;
  int local_60;
  longlong *local_58;
  char local_50;
  undefined8 local_48;
  double local_40;
  longlong *local_38;
  
  plVar3 = local_80;
  FUN_019af4c0();
  if (unaff_RDI[0xa7] == 0) {
    if (*(int *)(unaff_RDI[0xab] + 0xc) == 0) {
      return;
    }
    do {
      FUN_00d23340();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_019562f0();
      if (((char)local_58 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d23340();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*local_80 + 0x478))();
      if ((char)local_58 != '\0') {
        FUN_00d50b20();
      }
      FUN_00d23740();
    } while (*(int *)(unaff_RDI[0xab] + 0xc) != 0);
    return;
  }
  local_38 = (longlong *)(**(code **)(*unaff_RDI + 0xa60))();
  local_40 = param_2;
  dVar16 = (double)(**(code **)(&UNK_000016a8 + *unaff_RDI))();
  dVar14 = local_40;
  (**(code **)(&UNK_000016d0 + *unaff_RDI))((double)local_38 - dVar16);
  if ((((local_78[0] == '\0') && (local_80 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar15 = *(uint *)(unaff_RDI[0xab] + 0xc);
  local_90 = (ulonglong)uVar15;
  if ((int)uVar15 < 1) {
    local_40 = 0.0;
    plVar6 = (longlong *)0x0;
  }
  else {
    local_38 = (longlong *)0x0;
    local_48 = (double)((ulonglong)local_48 & 0xffffffff00000000);
    while( true ) {
      plVar2 = local_80;
      uVar15 = uVar15 - 1;
      FUN_01956980();
      local_58 = (longlong *)CONCAT71(local_58._1_7_,local_78[0]);
      pplVar7 = (longlong **)local_78;
      if (local_78[0] == '\0') {
        pplVar7 = &local_58;
      }
      *(char *)pplVar7 = '\0';
      if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (longlong *)0x0) {
        iVar5 = -1;
      }
      else {
        local_78[0] = '\0';
        iVar5 = FUN_00d23d20();
        if ((local_78[0] != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      cVar4 = (**(code **)(&DAT_00001770 + *unaff_RDI))();
      plVar6 = local_38;
      if (cVar4 == '\x01' && iVar5 != -1) {
        local_40 = (double)((ulonglong)local_48 & 0xffffffff);
      }
      else {
        plVar1 = *(longlong **)(*(longlong *)(unaff_RDI[0xab] + 0x10) + (ulonglong)uVar15 * 8);
        if (local_38 == plVar1) {
          if (((char)local_48 == '\0') && (local_38 != (longlong *)0x0)) {
            local_40 = (double)CONCAT71((int7)((ulonglong)local_38 >> 8),1);
            local_48 = (double)((ulonglong)local_48 & 0xffffffff00000000);
            FUN_00d50b00();
          }
          else {
            local_40 = (double)((ulonglong)local_48 & 0xffffffff);
          }
        }
        else {
          if (plVar1 != (longlong *)0x0) {
            plVar6 = (longlong *)FUN_00d50b00();
          }
          local_40 = (double)CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
          plVar6 = plVar1;
          if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
            local_38 = plVar1;
            FUN_00d50b20();
          }
        }
        FUN_019562f0();
        (**(code **)(*plVar6 + 0x478))();
        local_78[0] = '\0';
        FUN_00d23f50();
        local_80 = plVar6;
        if ((local_78[0] != '\0') && (plVar6 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (iVar5 != -1) {
        FUN_00d23620();
      }
      if (((char)local_58 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((longlong)local_90 < 2) break;
      local_90 = local_90 - 1;
      local_48 = (double)CONCAT44(local_48._4_4_,SUB84(local_40,0));
      local_38 = plVar6;
    }
  }
  local_38 = plVar6;
  dVar16 = (double)(**(code **)(*unaff_RDI + 0xa58))();
  FUN_019363e0();
  if ((((local_78[0] == '\0') && (local_80 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_78[0] != '\0')) && (local_80 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_48 = (double)(**(code **)(&UNK_000016a8 + *unaff_RDI))();
  dVar17 = (double)(**(code **)(&UNK_000016a8 + *unaff_RDI))();
  if (plVar3 != (longlong *)0x0) {
    local_48 = dVar16 - local_48;
    local_78[0] = '\0';
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    local_70 = plVar3;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar5 = -local_68._4_4_;
        }
        else {
          iVar5 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar5);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar5 = 0;
        }
        local_68 = CONCAT44(iVar5,(int)local_68);
      }
      lVar8 = (longlong)(int)local_68;
      iVar5 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      if (*(int *)((longlong)local_70 + 0xc) <= iVar5) break;
      lVar13 = local_70[2];
      plVar2 = *(longlong **)(lVar13 + 8 + lVar8 * 8);
      pvVar9 = _pthread_getspecific((pthread_key_t)lVar13);
      pVar12 = (pthread_key_t)lVar13;
      plVar6 = plVar2;
      if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
        plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar6 + 0x378))();
      plVar6 = local_58;
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        pvVar9 = _pthread_getspecific(pVar12);
        plVar6 = plVar2;
        if ((pvVar9 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar6 = (longlong *)plVar2[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar6 + 0x378))();
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        plVar6 = local_58;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        if (plVar6 != (longlong *)0x0) {
          pvVar9 = _pthread_getspecific(pVar12);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar18 = (double)FUN_014bb4b0();
          if (local_48 <= dVar18) {
            pvVar9 = _pthread_getspecific(pVar12);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar18 = (double)FUN_014bb3e0();
            if (dVar18 <= (dVar16 - dVar17) + dVar14) {
              local_50 = '\0';
              local_58 = plVar2;
              FUN_00d21140();
              if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  plVar2 = plVar3;
  dVar14 = local_40;
  plVar6 = local_38;
  if (plVar3 != local_80) {
    if (local_80 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    plVar2 = local_80;
    dVar14 = local_40;
    plVar6 = local_38;
    if (plVar3 != (longlong *)0x0) {
      FUN_00d50b20();
      dVar14 = local_40;
      plVar6 = local_38;
    }
  }
  local_40 = dVar14;
  local_38 = plVar6;
  if (plVar2 == (longlong *)0x0) {
    uVar15 = 0;
  }
  else {
    local_78[0] = '\0';
    local_60 = 0;
    local_68 = 0;
    local_48._4_4_ = (uint)((ulonglong)local_48 >> 0x20);
    local_70 = plVar2;
    if (*(int *)((longlong)plVar2 + 0xc) < 1) {
      local_48 = (double)((ulonglong)local_48._4_4_ << 0x20);
    }
    else {
      iVar5 = 0;
      local_48 = (double)((ulonglong)local_48._4_4_ << 0x20);
      do {
        dVar14 = (double)((ulonglong)dVar14 & 0xffffffff);
        cVar4 = (**(code **)(&DAT_00001770 + *unaff_RDI))();
        if (cVar4 != '\0') {
          (**(code **)(&UNK_000016d8 + *unaff_RDI))();
          local_38 = local_58;
          cVar4 = SUB81(dVar14,0);
          uVar11 = (undefined7)((ulonglong)local_58 >> 8);
          if (local_58 == plVar6) {
            local_40 = dVar14;
            plVar3 = plVar6;
            if ((cVar4 == '\0') && (local_58 != (longlong *)0x0)) {
              local_40 = (double)CONCAT71(uVar11,1);
              if (local_50 != '\0') goto LAB_01936f36;
              local_40 = (double)CONCAT71(uVar11,1);
              FUN_00d50b00();
            }
LAB_01936f22:
            local_38 = plVar3;
            plVar3 = local_38;
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
          else {
            if (local_50 == '\0') {
              uVar10 = 0;
              if (local_58 != (longlong *)0x0) {
                uVar10 = FUN_00d50b00();
              }
              local_40 = (double)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
              plVar3 = local_38;
              if ((cVar4 != '\0') && (plVar6 != (longlong *)0x0)) {
                FUN_00d50b20();
                plVar3 = local_38;
              }
              goto LAB_01936f22;
            }
            local_40 = (double)CONCAT71(uVar11,1);
            plVar3 = local_38;
            if ((cVar4 != '\0') && (plVar6 != (longlong *)0x0)) {
              FUN_00d50b20();
              plVar3 = local_38;
            }
          }
LAB_01936f36:
          local_38 = plVar3;
          (**(code **)(*unaff_RDI + 0x450))();
          local_58 = local_38;
          local_50 = '\0';
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          uVar10 = FUN_019562f0();
          local_48 = (double)CONCAT44(local_48._4_4_,(int)CONCAT71((int7)((ulonglong)uVar10 >> 8),1)
                                     );
          plVar6 = local_38;
          dVar14 = local_40;
        }
        iVar5 = iVar5 + 1;
        local_68 = CONCAT44(local_68._4_4_,iVar5);
      } while (iVar5 < *(int *)((longlong)plVar2 + 0xc));
    }
    local_40 = dVar14;
    local_38 = plVar6;
    FUN_0131c810();
    uVar15 = (uint)local_48;
  }
  for (iVar5 = *(int *)(unaff_RDI[0xab] + 0xc); plVar3 = local_38, 0 < iVar5; iVar5 = iVar5 + -1) {
    FUN_0198a800();
  }
  if ((uVar15 & 1) != 0) {
    (**(code **)(*unaff_RDI + 0xb48))();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if ((local_40._0_1_ != '\0') && (plVar3 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @019ae3f0 — 1268 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x019ae56a) */
/* WARNING: Removing unreachable block (ram,0x019ae573) */
/* WARNING: Removing unreachable block (ram,0x019ae538) */
/* WARNING: Removing unreachable block (ram,0x019ae541) */
/* WARNING: Removing unreachable block (ram,0x019ae7cb) */
/* WARNING: Removing unreachable block (ram,0x019ae7d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ae3f0(float *param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  float *pfVar6;
  longlong lVar7;
  double *in_RDX;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  longlong local_a0;
  char local_98 [8];
  float local_40;
  float local_3c;
  char local_38 [8];
  
  fVar21 = (float)((ulonglong)param_2 >> 0x20);
  fVar19 = (float)param_2;
  if ((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) {
    pfVar6 = param_1;
    FUN_00d23310();
    lVar7 = CONCAT71((int7)((ulonglong)pfVar6 >> 8),local_98[0]);
    pcVar8 = local_38;
    if (local_98[0] != '\0') {
      pcVar8 = local_98;
    }
    local_38[0] = local_98[0];
    *pcVar8 = '\0';
    if ((local_98[0] != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_a0 == 0) {
      local_a0 = 0;
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_38[0] == '\0') {
        FUN_00d50b00();
      }
    }
    pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar12 = (double)FUN_0125a280();
    pvVar3 = _pthread_getspecific((pthread_key_t)lVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar13 = (double)FUN_01259520();
    fVar11 = (float)(**(code **)(*unaff_RDI + 0xc38))();
    local_3c = (float)(**(code **)(*unaff_RDI + 0xc38))();
    FUN_01e436c0();
    FUN_01e436c0();
    lVar4 = *unaff_RSI;
    if (*(int *)(lVar4 + 0xc) < 2) {
      auVar22 = ZEXT416((uint)local_3c);
      uVar16 = 0;
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      lVar9 = 1;
      local_40 = fVar11;
      do {
        pVar5 = (pthread_key_t)lVar7;
        lVar7 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar9 * 8);
        if (local_a0 == lVar7) {
          if ((!bVar2) && (local_a0 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar7 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (local_a0 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            local_a0 = lVar7;
          }
          else {
            bVar2 = true;
            local_a0 = lVar7;
          }
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_0125a280();
        if (dVar14 < dVar12) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar12 = (double)FUN_0125a280();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_01259520();
        if (dVar13 < dVar14) {
          pvVar3 = _pthread_getspecific(pVar5);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar13 = (double)FUN_01259520();
        }
        uVar15 = (**(code **)(*unaff_RDI + 0xc38))();
        uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
        fVar11 = (float)uVar15;
        auVar22._8_4_ = extraout_XMM0_Dc;
        auVar22._0_8_ = uVar15;
        auVar22._12_4_ = extraout_XMM0_Dd;
        if (fVar11 <= local_3c) {
          auVar22._0_4_ = local_3c;
        }
        if (local_40 <= fVar11) {
          fVar11 = local_40;
        }
        lVar9 = lVar9 + 1;
        lVar4 = *unaff_RSI;
        lVar7 = (longlong)*(int *)(lVar4 + 0xc);
        local_3c = auVar22._0_4_;
        uVar17 = extraout_XMM0_Dc;
        uVar18 = extraout_XMM0_Dd;
        local_40 = fVar11;
      } while (lVar9 < lVar7);
    }
    auVar1._4_4_ = uVar16;
    auVar1._0_4_ = fVar11;
    auVar1._8_4_ = uVar17;
    auVar1._12_4_ = uVar18;
    auVar22 = insertps(auVar22,auVar1,0x10);
    fVar11 = auVar22._0_4_ + _DAT_0241b5d0;
    fVar23 = auVar22._4_4_ + _UNK_0241b5d4;
    fVar20 = fVar11 - fVar23;
    while (fVar20 < (fVar21 / DAT_0241b640) * DAT_0239394c) {
      fVar11 = fVar11 + _DAT_0241b5e0;
      fVar23 = fVar23 + _UNK_0241b5e4;
      fVar20 = fVar11 - fVar23;
    }
    if (in_RDX != (double *)0x0) {
      dVar12 = dVar12 + DAT_0241b680;
      dVar13 = dVar13 + DAT_02390108;
      dVar14 = ((double)(fVar19 / DAT_02390d38) - (dVar13 - dVar12)) * DAT_023942d0;
      uVar10 = -(ulonglong)(dVar13 - dVar12 < (double)(fVar19 / DAT_02390d38));
      dVar12 = (double)(~uVar10 & (ulonglong)dVar12 | (ulonglong)(dVar12 - dVar14) & uVar10);
      *in_RDX = dVar12;
      in_RDX[1] = (double)(~uVar10 & (ulonglong)dVar13 | (ulonglong)(dVar14 + dVar13) & uVar10) -
                  dVar12;
    }
    if (param_1 != (float *)0x0) {
      *param_1 = fVar23;
      param_1[1] = fVar20;
    }
    if ((bVar2) && (local_a0 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @019a40d0 — 1170 bytes
// ============================================================

void FUN_019a40d0(void)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined7 uVar6;
  undefined7 extraout_var;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined7 uVar10;
  int iVar11;
  ulonglong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar12;
  longlong local_b0;
  char local_a8;
  ulonglong local_a0;
  char local_98;
  ulonglong local_90;
  char local_88;
  longlong *local_80;
  char local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  ulonglong local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  longlong local_38;
  
  plVar1 = (longlong *)*unaff_RSI;
  plVar8 = (longlong *)unaff_RDI[0x3d];
  if (plVar1 == plVar8) {
    return;
  }
  if (plVar1 != (longlong *)0x0) {
    local_78 = 0;
    if (plVar8 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    local_80 = plVar8;
    uVar3 = (**(code **)(*plVar1 + 0x50))();
    plVar8 = (longlong *)(ulonglong)uVar3;
    if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((char)uVar3 != '\0') {
      return;
    }
  }
  if (unaff_RDI[0x9e] != 0) {
    unaff_RDI[0x9e] = 0;
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0x990))();
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *unaff_RDI + 0x38))();
  FUN_00d216c0();
  if (*unaff_RSI != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    plVar8 = &local_b0;
    local_58 = *unaff_RSI;
    iVar11 = 0;
    while( true ) {
      iVar4 = 0;
      if (iVar11 != 0) {
        if (iVar11 < 1) {
          iVar4 = -iVar11;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar4 = 0;
        }
        local_50 = CONCAT44(iVar4,(int)local_50);
      }
      lVar7 = (longlong)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)(local_58 + 0xc) <= iVar11) break;
      local_68 = *(longlong *)(*(longlong *)(local_58 + 0x10) + 8 + lVar7 * 8);
      iVar11 = iVar4;
      if (local_68 != 0) {
        local_a8 = '\0';
        local_b0 = local_68;
        FUN_00d21140();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        iVar11 = local_50._4_4_;
      }
    }
    FUN_000be170();
  }
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *unaff_RDI + 0x30))();
  (**(code **)(*unaff_RDI + 0x970))();
  lVar7 = local_68;
  if (local_60 == '\0') {
    if (local_68 == 0) goto LAB_019a42e5;
    FUN_00d50b00();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
LAB_019a42b9:
    local_70 = lVar7;
    uVar5 = FUN_0197c2b0();
    lVar7 = local_68;
    if (local_68 == 0) {
      local_40 = 0;
      local_38 = 0;
joined_r0x019a4302:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      bVar2 = lVar7 != 0;
      if (local_38 != 0) {
        uVar9 = (ulonglong)plVar1 & 0xffffff00;
        goto LAB_019a433d;
      }
      local_38 = 0;
      uVar9 = (ulonglong)plVar1 & 0xffffff00;
    }
    else {
      if (local_60 == '\0') {
        uVar5 = FUN_00d50b00();
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        local_38 = lVar7;
        goto joined_r0x019a4302;
      }
      uVar9 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
      bVar2 = true;
      local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      local_38 = local_68;
LAB_019a433d:
      local_a0 = *unaff_RSI;
      local_98 = '\0';
      FUN_01a17f30();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
    }
    uVar5 = FUN_0197c480();
    lVar12 = local_68;
    uVar6 = (undefined7)((ulonglong)uVar5 >> 8);
    uVar10 = (undefined7)(uVar9 >> 8);
    if (local_68 == local_38) {
      if (lVar7 == 0) {
        if (local_68 == 0) {
          uVar9 = local_40 & 0xffffffff;
        }
        else {
          lVar12 = local_38;
          if (local_60 != '\0') goto joined_r0x019a43d0;
          uVar9 = CONCAT71(uVar10,1);
          local_40 = 0;
          FUN_00d50b00();
        }
      }
      else {
        uVar9 = local_40 & 0xffffffff;
      }
LAB_019a4463:
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (local_38 == 0) {
        bVar2 = false;
        local_40 = uVar9 & 0xffffffff;
        goto LAB_019a44ce;
      }
      local_40 = uVar9 & 0xffffffff;
      lVar12 = local_38;
    }
    else {
      if (local_60 == '\0') {
        if (local_68 != 0) {
          uVar5 = FUN_00d50b00();
        }
        if ((bool)(bVar2 & local_38 != 0)) {
          local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          local_38 = lVar12;
          FUN_00d50b20();
          uVar9 = CONCAT71(uVar10,1);
        }
        else {
          uVar9 = CONCAT71(uVar10,1);
          local_38 = lVar12;
        }
        goto LAB_019a4463;
      }
      if ((bool)(bVar2 & local_38 != 0)) {
        local_40 = CONCAT71(uVar6,1);
        local_38 = local_68;
        FUN_00d50b20();
        uVar6 = extraout_var;
      }
joined_r0x019a43d0:
      local_40 = CONCAT71(uVar6,1);
      if (lVar12 == 0) {
        bVar2 = false;
        goto LAB_019a44ce;
      }
    }
    local_90 = *unaff_RSI;
    local_88 = '\0';
    FUN_01a17f30();
    bVar2 = false;
    if ((local_88 != '\0') && (bVar2 = false, local_90 != 0)) {
      FUN_00d50b20();
      bVar2 = false;
    }
  }
  else {
    if (local_68 != 0) goto LAB_019a42b9;
LAB_019a42e5:
    bVar2 = true;
    local_40 = 0;
LAB_019a44ce:
    lVar12 = 0;
  }
  (**(code **)(*unaff_RDI + 0x998))();
  (**(code **)(*unaff_RDI + 0xa00))();
  lVar7 = local_68;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar7 != 0) {
    (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics" +
                *unaff_RDI + 0x40))();
  }
  (**(code **)(&DAT_00001620 + *unaff_RDI))();
  (**(code **)(*unaff_RDI + 0x540))();
  (**(code **)(*unaff_RDI + 0xa48))();
  if (((char)local_40 != '\0') && (lVar12 != 0)) {
    FUN_00d50b20();
  }
  if (!bVar2) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @019ad9b0 — 1065 bytes
// ============================================================

void FUN_019ad9b0(longlong param_1,double param_2)

{
  longlong *plVar1;
  bool bVar2;
  char *pcVar3;
  void *pvVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  char in_DL;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  double dVar10;
  float local_88;
  longlong local_68;
  char local_60 [8];
  double local_58;
  undefined8 uStack_50;
  double local_40;
  char local_38 [8];
  
  if ((*unaff_RSI != 0) && (*(int *)(*unaff_RSI + 0xc) != 0)) {
    FUN_01e436c0();
    dVar10 = param_2;
    FUN_00d23310();
    local_38[0] = local_60[0];
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = local_38;
    }
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_58 = (double)FUN_0125a280();
    uStack_50 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar3 = local_60;
    if (local_60[0] == '\0') {
      pcVar3 = local_38;
    }
    local_38[0] = local_60[0];
    *pcVar3 = '\0';
    if ((local_60[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = (double)FUN_01259520();
    if ((local_38[0] != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    lVar5 = *unaff_RSI;
    if (*(int *)(lVar5 + 0xc) < 2) {
      bVar2 = false;
      lVar8 = 0;
    }
    else {
      lVar7 = 1;
      lVar8 = 0;
      bVar2 = false;
      do {
        pVar6 = (pthread_key_t)param_1;
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar7 * 8);
        if (lVar8 == lVar5) {
          if ((!bVar2) && (lVar8 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar8 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar8 = lVar5;
          }
          else {
            bVar2 = true;
            lVar8 = lVar5;
          }
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_0125a280();
        dVar10 = local_58;
        if (dVar9 < local_58) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_58 = (double)FUN_0125a280();
          uStack_50 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
        }
        pvVar4 = _pthread_getspecific(pVar6);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar9 = (double)FUN_01259520();
        if (local_40 < dVar9) {
          pvVar4 = _pthread_getspecific(pVar6);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = (double)FUN_01259520();
        }
        lVar7 = lVar7 + 1;
        lVar5 = *unaff_RSI;
        param_1 = (longlong)*(int *)(lVar5 + 0xc);
      } while (lVar7 < param_1);
    }
    if (in_DL != '\0') {
      local_88 = SUB84(param_2,0);
      dVar9 = (double)(local_88 / DAT_0241b640) * DAT_023908b8;
      local_58 = (double)(~-(ulonglong)(local_58 < DAT_0238fee8) & (ulonglong)local_58);
      local_40 = local_40 + DAT_0238fee8;
      dVar10 = local_40 - local_58;
      uStack_50 = 0;
      if (dVar9 < dVar10) {
        local_40 = dVar9 + local_58;
      }
    }
    (**(code **)(*unaff_RDI + 0x540))();
    (**(code **)(*unaff_RDI + 0xa48))();
    if (local_58 < local_40) {
      plVar1 = (longlong *)unaff_RDI[0x27];
      FUN_01e436c0();
      (**(code **)(*plVar1 + 0x3f0))(SUB84(local_58,0),local_40 - local_58,dVar10);
    }
    (**(code **)(*unaff_RDI + 0x540))();
    (**(code **)(*unaff_RDI + 0xa48))();
    if (local_58 < local_40) {
      FUN_00e7b500(SUB84(local_58,0),local_40 - local_58);
      (**(code **)(*unaff_RDI + 0xa78))();
    }
    if ((bVar2) && (lVar8 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @019a4cd0 — 995 bytes
// str: ""MUEditorSubview""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_019a4cd0(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong local_60;
  char local_58;
  longlong local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  plVar1 = (longlong *)*unaff_RDI;
  if ((DAT_02702df0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027142d8 = FUN_0006d940();
    _DAT_027142c0 = "MUEditorSubview";
    _DAT_027142c8 = 0x168;
    _DAT_027142d0 = FUN_0034d130;
    _DAT_027142e0 = 0;
    uRam00000000027142e8 = 0;
    _DAT_027142f0 = 0;
    _DAT_02714368 = 0;
    uRam0000000002714370 = 0;
    _DAT_02714378 = 0;
    DAT_0271437a = 1;
    _DAT_027142f8 = 0;
    uRam0000000002714300 = 0;
    _DAT_02714308 = 0;
    uRam0000000002714310 = 0;
    _DAT_02714318 = 0;
    uRam0000000002714320 = 0;
    _DAT_02714328 = 0;
    uRam0000000002714330 = 0;
    _DAT_02714338 = 0;
    uRam0000000002714340 = 0;
    _DAT_02714348 = 0;
    uRam0000000002714350 = 0;
    _DAT_02714358 = 0;
    uRam0000000002714360 = 0;
    DAT_02714383 = 0;
    _DAT_0271437b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (longlong *)0x0) {
LAB_019a4d20:
    unaff_RDI = &DAT_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_019a4d20;
  }
  plVar1 = (longlong *)*unaff_RDI;
  plVar2 = (longlong *)*unaff_RSI;
  if ((DAT_02702df0 == '\0') && (iVar6 = ___cxa_guard_acquire(), iVar6 != 0)) {
    _DAT_027142d8 = FUN_0006d940();
    _DAT_027142c0 = "MUEditorSubview";
    _DAT_027142c8 = 0x168;
    _DAT_027142d0 = FUN_0034d130;
    _DAT_027142e0 = 0;
    uRam00000000027142e8 = 0;
    _DAT_027142f0 = 0;
    _DAT_02714368 = 0;
    uRam0000000002714370 = 0;
    _DAT_02714378 = 0;
    DAT_0271437a = 1;
    _DAT_027142f8 = 0;
    uRam0000000002714300 = 0;
    _DAT_02714308 = 0;
    uRam0000000002714310 = 0;
    _DAT_02714318 = 0;
    uRam0000000002714320 = 0;
    _DAT_02714328 = 0;
    uRam0000000002714330 = 0;
    _DAT_02714338 = 0;
    uRam0000000002714340 = 0;
    _DAT_02714348 = 0;
    uRam0000000002714350 = 0;
    _DAT_02714358 = 0;
    uRam0000000002714360 = 0;
    DAT_02714383 = 0;
    _DAT_0271437b = 0;
    ___cxa_guard_release();
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 != '\0') goto LAB_019a4d66;
  }
  unaff_RSI = &DAT_02802688;
LAB_019a4d66:
  plVar2 = (longlong *)*unaff_RSI;
  uVar5 = 0;
  uVar4 = 0;
  if (plVar1 != (longlong *)0x0) {
    uVar4 = FUN_01989fa0();
  }
  if (plVar2 != (longlong *)0x0) {
    uVar5 = FUN_01989fa0();
  }
  if (uVar4 == uVar5) {
    (**(code **)(*plVar1 + 0x928))();
    local_40[0] = local_48[0];
    pcVar7 = local_40;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    (**(code **)(*plVar2 + 0x928))();
    pcVar7 = local_48;
    if (local_48[0] == '\0') {
      pcVar7 = local_38;
    }
    local_38[0] = local_48[0];
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    uVar5 = uVar4;
    if ((local_50 != 0) && (local_50 != 0)) {
      (**(code **)(*param_2 + 0xe10))();
      local_48[0] = '\0';
      uVar4 = FUN_00d24090();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      (**(code **)(*param_2 + 0xe10))();
      local_48[0] = '\0';
      uVar5 = FUN_00d24090();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      uVar4 = uVar4 & 0xff;
      uVar5 = uVar5 & 0xff;
    }
    if ((local_38[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  uVar8 = 0xffffffff;
  if ((int)uVar5 <= (int)uVar4) {
    uVar8 = (ulonglong)((int)uVar5 < (int)uVar4);
  }
  return uVar8;
}




// ============================================================
// @019a5c40 — 884 bytes
// str: ""MUEditorSubview""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019a5c40(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong **pplVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar8;
  longlong *plVar9;
  longlong *local_68;
  char local_60;
  longlong *local_48;
  char local_40;
  longlong *local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  if ((*param_2 == 0) || (*(int *)(*param_2 + 0xc) == 0)) {
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  else {
    lVar6 = *(longlong *)(unaff_RSI + 0x38);
    uVar1 = *(uint *)(lVar6 + 0xc);
    if (0 < (int)uVar1) {
      lVar8 = 0;
      local_38 = (longlong *)0x0;
      bVar2 = false;
      do {
        plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + lVar8 * 8);
        local_48 = plVar9;
        local_40 = '\0';
        if ((DAT_02702df0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          _DAT_027142d8 = FUN_0006d940();
          _DAT_027142c0 = "MUEditorSubview";
          _DAT_027142c8 = 0x168;
          _DAT_027142d0 = FUN_0034d130;
          _DAT_027142e0 = 0;
          uRam00000000027142e8 = 0;
          _DAT_027142f0 = 0;
          _DAT_02714368 = 0;
          uRam0000000002714370 = 0;
          _DAT_02714378 = 0;
          DAT_0271437a = 1;
          _DAT_027142f8 = 0;
          uRam0000000002714300 = 0;
          _DAT_02714308 = 0;
          uRam0000000002714310 = 0;
          _DAT_02714318 = 0;
          uRam0000000002714320 = 0;
          _DAT_02714328 = 0;
          uRam0000000002714330 = 0;
          _DAT_02714338 = 0;
          uRam0000000002714340 = 0;
          _DAT_02714348 = 0;
          uRam0000000002714350 = 0;
          _DAT_02714358 = 0;
          uRam0000000002714360 = 0;
          DAT_02714383 = 0;
          _DAT_0271437b = 0;
          ___cxa_guard_release();
        }
        pplVar7 = (longlong **)&DAT_02802688;
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 0x360))();
          cVar3 = FUN_00e85ea0();
          pplVar7 = &local_48;
          if (cVar3 == '\0') {
            pplVar7 = (longlong **)&DAT_02802688;
          }
        }
        plVar9 = *pplVar7;
        if (plVar9 == local_38) {
          if ((!bVar2) && (plVar9 != (longlong *)0x0)) {
            plVar9 = local_38;
            if (*(char *)(pplVar7 + 1) != '\0') goto LAB_019a5d64;
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (*(char *)(pplVar7 + 1) == '\0') {
            if (plVar9 != (longlong *)0x0) {
              FUN_00d50b00();
            }
            if ((bVar2) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
              local_38 = plVar9;
              bVar2 = true;
              goto LAB_019a5db0;
            }
          }
          else {
            if ((bVar2) && (local_38 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
LAB_019a5d64:
            *(undefined1 *)(pplVar7 + 1) = 0;
          }
          local_38 = plVar9;
          bVar2 = true;
        }
LAB_019a5db0:
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        plVar9 = local_38;
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x928))();
          if (local_60 == '\0') {
            if (local_68 != (longlong *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_60 = '\0';
          }
          local_48 = local_68;
          local_40 = '\0';
          cVar3 = FUN_00d24090();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (local_68 != (longlong *)0x0) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') {
            local_48 = plVar9;
            local_40 = '\0';
            FUN_00d21140();
            if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if ((ulonglong)uVar1 - 1 == lVar8) goto LAB_019a5f90;
        lVar6 = *(longlong *)(unaff_RSI + 0x38);
        lVar8 = lVar8 + 1;
      } while( true );
    }
    bVar2 = false;
    plVar9 = (longlong *)0x0;
LAB_019a5f90:
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return unaff_RDI;
}




// ============================================================
// @019a68b0 — 819 bytes
// str: ""MUEditorSubview""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019a68b0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong **pplVar10;
  longlong *local_60;
  char local_58;
  undefined8 local_50;
  ulonglong local_48;
  uint local_3c;
  undefined8 local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if (0 < (int)uVar9) {
    local_48 = (ulonglong)uVar9;
    local_50 = 0;
    plVar7 = (longlong *)0x0;
    do {
      local_3c = uVar9 - 1;
      plVar8 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar9 - 1) * 8);
      local_60 = plVar8;
      local_58 = '\0';
      uVar5 = 0;
      if ((DAT_02702df0 == '\0') && (uVar5 = ___cxa_guard_acquire(), (int)uVar5 != 0)) {
        _DAT_027142d8 = FUN_0006d940();
        _DAT_027142c0 = "MUEditorSubview";
        _DAT_027142c8 = 0x168;
        _DAT_027142d0 = FUN_0034d130;
        _DAT_027142e0 = 0;
        uRam00000000027142e8 = 0;
        _DAT_027142f0 = 0;
        _DAT_02714368 = 0;
        uRam0000000002714370 = 0;
        _DAT_02714378 = 0;
        DAT_0271437a = 1;
        _DAT_027142f8 = 0;
        uRam0000000002714300 = 0;
        _DAT_02714308 = 0;
        uRam0000000002714310 = 0;
        _DAT_02714318 = 0;
        uRam0000000002714320 = 0;
        _DAT_02714328 = 0;
        uRam0000000002714330 = 0;
        _DAT_02714338 = 0;
        uRam0000000002714340 = 0;
        _DAT_02714348 = 0;
        uRam0000000002714350 = 0;
        _DAT_02714358 = 0;
        uRam0000000002714360 = 0;
        DAT_02714383 = 0;
        _DAT_0271437b = 0;
        uVar5 = ___cxa_guard_release();
      }
      pplVar10 = (longlong **)&DAT_02802688;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar10 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar10 = (longlong **)&DAT_02802688;
        }
      }
      plVar8 = *pplVar10;
      cVar2 = (char)local_50;
      if (plVar8 == plVar7) {
        if ((cVar2 == '\0') && (plVar8 != (longlong *)0x0)) {
          uVar5 = local_50;
          plVar8 = plVar7;
          if (*(char *)(pplVar10 + 1) != '\0') goto LAB_019a69c7;
          local_38 = CONCAT71((int7)((ulonglong)local_50 >> 8),1);
          FUN_00d50b00();
          uVar6 = local_48;
          uVar9 = local_3c;
        }
        else {
          local_38 = local_50;
          uVar6 = local_48;
          plVar8 = plVar7;
          uVar9 = local_3c;
        }
      }
      else if (*(char *)(pplVar10 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        uVar9 = local_3c;
        uVar6 = local_48;
        local_38 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if ((cVar2 != '\0') && (plVar7 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if ((cVar2 != '\0') && (plVar7 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a69c7:
        *(undefined1 *)(pplVar10 + 1) = 0;
        local_38 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        uVar6 = local_48;
        uVar9 = local_3c;
      }
      if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((plVar8 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar8 + 0x960))(param_1), cVar2 != '\0')) {
        local_58 = '\0';
        local_60 = plVar8;
        FUN_00d21140();
        if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((longlong)uVar6 < 2) goto LAB_019a6b8d;
      local_48 = uVar6 - 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x38);
      local_50 = local_38;
      plVar7 = plVar8;
    } while( true );
  }
  cVar2 = '\0';
  plVar8 = (longlong *)0x0;
  iVar1 = *(int *)((longlong)puVar3 + 0xc);
joined_r0x019a6bba:
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = puVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((cVar2 != '\0') && (plVar8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_019a6b8d:
  cVar2 = (char)local_38;
  iVar1 = *(int *)((longlong)puVar3 + 0xc);
  goto joined_r0x019a6bba;
}




// ============================================================
// @019a5880 — 739 bytes
// str: ""MUEditorSubview""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_019a5880(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong **pplVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *local_40;
  char local_38;
  
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  lVar7 = *(longlong *)(unaff_RSI + 0x38);
  uVar1 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar1 < 1) {
    bVar2 = false;
    plVar9 = (longlong *)0x0;
LAB_019a5b3f:
    *unaff_RDI = puVar6;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    if ((bVar2) && (plVar9 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    return unaff_RDI;
  }
  lVar11 = 0;
  plVar9 = (longlong *)0x0;
  bVar2 = false;
  do {
    plVar10 = *(longlong **)(*(longlong *)(lVar7 + 0x10) + lVar11 * 8);
    local_40 = plVar10;
    local_38 = '\0';
    if ((DAT_02702df0 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
      _DAT_027142d8 = FUN_0006d940();
      _DAT_027142c0 = "MUEditorSubview";
      _DAT_027142c8 = 0x168;
      _DAT_027142d0 = FUN_0034d130;
      _DAT_027142e0 = 0;
      uRam00000000027142e8 = 0;
      _DAT_027142f0 = 0;
      _DAT_02714368 = 0;
      uRam0000000002714370 = 0;
      _DAT_02714378 = 0;
      DAT_0271437a = 1;
      _DAT_027142f8 = 0;
      uRam0000000002714300 = 0;
      _DAT_02714308 = 0;
      uRam0000000002714310 = 0;
      _DAT_02714318 = 0;
      uRam0000000002714320 = 0;
      _DAT_02714328 = 0;
      uRam0000000002714330 = 0;
      _DAT_02714338 = 0;
      uRam0000000002714340 = 0;
      _DAT_02714348 = 0;
      uRam0000000002714350 = 0;
      _DAT_02714358 = 0;
      uRam0000000002714360 = 0;
      DAT_02714383 = 0;
      _DAT_0271437b = 0;
      ___cxa_guard_release();
    }
    pplVar8 = (longlong **)&DAT_02802688;
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x360))();
      cVar4 = FUN_00e85ea0();
      pplVar8 = &local_40;
      if (cVar4 == '\0') {
        pplVar8 = (longlong **)&DAT_02802688;
      }
    }
    plVar10 = *pplVar8;
    if (plVar10 == plVar9) {
      if ((!bVar2) && (plVar10 != (longlong *)0x0)) {
        plVar10 = plVar9;
        if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a5983;
        bVar2 = true;
        FUN_00d50b00();
      }
    }
    else {
      if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar10 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar9 = plVar10;
          bVar2 = true;
          goto LAB_019a59d0;
        }
      }
      else {
        if ((bVar2) && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019a5983:
        *(undefined1 *)(pplVar8 + 1) = 0;
      }
      plVar9 = plVar10;
      bVar2 = true;
    }
LAB_019a59d0:
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x928))();
      plVar3 = local_40;
      plVar10 = (longlong *)*param_2;
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar3 == plVar10) {
        local_38 = '\0';
        local_40 = plVar9;
        FUN_00d21140();
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((ulonglong)uVar1 - 1 == lVar11) goto LAB_019a5b3f;
    lVar7 = *(longlong *)(unaff_RSI + 0x38);
    lVar11 = lVar11 + 1;
  } while( true );
}




// ============================================================
// @019a7930 — 714 bytes
// str: ""MUEditorSubview""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019a7930(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong **pplVar5;
  ulonglong uVar6;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  undefined7 uVar11;
  ulonglong uVar10;
  longlong *local_58;
  char local_50;
  ulonglong local_48;
  ulonglong local_40;
  uint local_34;
  
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  uVar9 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar9 < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return;
  }
  local_48 = (ulonglong)uVar9;
  local_40 = 0;
  plVar8 = (longlong *)0x0;
  do {
    local_34 = uVar9 - 1;
    plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar9 - 1) * 8);
    local_58 = plVar1;
    local_50 = '\0';
    if ((DAT_02702df0 == '\0') && (iVar3 = ___cxa_guard_acquire(), iVar3 != 0)) {
      _DAT_027142d8 = FUN_0006d940();
      _DAT_027142c0 = "MUEditorSubview";
      _DAT_027142c8 = 0x168;
      _DAT_027142d0 = FUN_0034d130;
      _DAT_027142e0 = 0;
      uRam00000000027142e8 = 0;
      _DAT_027142f0 = 0;
      _DAT_02714368 = 0;
      uRam0000000002714370 = 0;
      _DAT_02714378 = 0;
      DAT_0271437a = 1;
      _DAT_027142f8 = 0;
      uRam0000000002714300 = 0;
      _DAT_02714308 = 0;
      uRam0000000002714310 = 0;
      _DAT_02714318 = 0;
      uRam0000000002714320 = 0;
      _DAT_02714328 = 0;
      uRam0000000002714330 = 0;
      _DAT_02714338 = 0;
      uRam0000000002714340 = 0;
      _DAT_02714348 = 0;
      uRam0000000002714350 = 0;
      _DAT_02714358 = 0;
      uRam0000000002714360 = 0;
      DAT_02714383 = 0;
      _DAT_0271437b = 0;
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
    plVar7 = *pplVar5;
    uVar11 = (undefined7)((ulonglong)plVar1 >> 8);
    if (plVar7 == plVar8) {
      if (((char)local_40 == '\0') && (plVar7 != (longlong *)0x0)) {
        plVar7 = plVar8;
        if (*(char *)(pplVar5 + 1) != '\0') goto LAB_019a7a14;
        uVar10 = CONCAT71(uVar11,1);
        FUN_00d50b00();
        uVar6 = local_48;
        uVar9 = local_34;
      }
      else {
        uVar10 = local_40 & 0xffffffff;
        uVar6 = local_48;
        plVar7 = plVar8;
        uVar9 = local_34;
      }
    }
    else if (*(char *)(pplVar5 + 1) == '\0') {
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      uVar9 = local_34;
      uVar6 = local_48;
      uVar10 = CONCAT71(uVar11,1);
      if (((char)local_40 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (((char)local_40 != '\0') && (plVar8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a7a14:
      *(undefined1 *)(pplVar5 + 1) = 0;
      uVar10 = CONCAT71(uVar11,1);
      uVar6 = local_48;
      uVar9 = local_34;
    }
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((plVar7 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar7 + 0x960))(param_1), cVar2 != '\0')) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if ((char)uVar10 == '\0') {
        FUN_00d50b00();
      }
      *unaff_RDI = plVar7;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      return;
    }
    if ((longlong)uVar6 < 2) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if ((char)uVar10 == '\0') {
        return;
      }
      if (plVar7 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    local_48 = uVar6 - 1;
    lVar4 = *(longlong *)(unaff_RSI + 0x38);
    local_40 = uVar10 & 0xffffffff;
    plVar8 = plVar7;
  } while( true );
}




// ============================================================
// @019a6f50 — 657 bytes
// ============================================================

undefined8 * FUN_019a6f50(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar9;
  char cVar10;
  longlong **pplVar11;
  ulonglong local_68;
  longlong *local_58;
  char local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(unaff_RSI + 0x38);
  uVar7 = *(uint *)(lVar5 + 0xc);
  local_68 = (ulonglong)uVar7;
  if (0 < (int)uVar7) {
    plVar9 = (longlong *)0x0;
    local_40 = 0;
    local_48 = puVar4;
    do {
      uVar7 = uVar7 - 1;
      plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + (ulonglong)uVar7 * 8);
      local_50 = '\0';
      local_58 = plVar2;
      uVar6 = FUN_0082d880();
      pplVar11 = (longlong **)&DAT_02802688;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x360))();
        uVar6 = FUN_00e85ea0();
        pplVar11 = &local_58;
        if ((char)uVar6 == '\0') {
          pplVar11 = (longlong **)&DAT_02802688;
        }
      }
      puVar4 = local_48;
      plVar8 = *pplVar11;
      if (plVar8 == plVar9) {
        plVar3 = plVar9;
        local_38 = local_40;
        if (((char)local_40 == '\0') && (plVar8 != (longlong *)0x0)) {
          plVar8 = plVar9;
          if (*(char *)(pplVar11 + 1) != '\0') goto LAB_019a7055;
          local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
          FUN_00d50b00();
        }
      }
      else if (*(char *)(pplVar11 + 1) == '\0') {
        if (plVar8 != (longlong *)0x0) {
          uVar6 = FUN_00d50b00();
        }
        puVar4 = local_48;
        local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        plVar3 = plVar8;
        if (((char)local_40 != '\0') && (plVar9 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_40 != '\0') && (plVar9 != (longlong *)0x0)) {
          uVar6 = FUN_00d50b20();
        }
LAB_019a7055:
        *(undefined1 *)(pplVar11 + 1) = 0;
        local_38 = CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
        plVar3 = plVar8;
        puVar4 = local_48;
      }
      plVar9 = plVar3;
      if ((local_50 != '\0') && (plVar2 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar9 != (longlong *)0x0) {
        (**(code **)(*plVar9 + 0x928))();
        plVar8 = local_58;
        plVar2 = (longlong *)*param_2;
        if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar8 == plVar2) {
          local_50 = '\0';
          local_58 = plVar9;
          FUN_00d21140();
          if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((longlong)local_68 < 2) goto LAB_019a718f;
      local_68 = local_68 - 1;
      lVar5 = *(longlong *)(unaff_RSI + 0x38);
      local_40 = local_38;
    } while( true );
  }
  cVar10 = '\0';
  plVar9 = (longlong *)0x0;
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
joined_r0x019a71b2:
  if (iVar1 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = puVar4;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if ((cVar10 != '\0') && (plVar9 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
LAB_019a718f:
  cVar10 = (char)local_38;
  iVar1 = *(int *)((longlong)puVar4 + 0xc);
  goto joined_r0x019a71b2;
}




// ============================================================
// @019a7590 — 638 bytes
// ============================================================

undefined8 * FUN_019a7590(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong **pplVar8;
  ulonglong local_80;
  longlong *local_60;
  char local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &DAT_02572358;
  local_50 = puVar3;
  (*DAT_02572370)();
  lVar4 = *(longlong *)(unaff_RSI + 0x38);
  uVar6 = *(uint *)(lVar4 + 0xc);
  local_80 = (ulonglong)uVar6;
  if (0 < (int)uVar6) {
    local_38 = (longlong *)0x0;
    local_48 = 0;
    do {
      uVar6 = uVar6 - 1;
      plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x10) + (ulonglong)uVar6 * 8);
      local_58 = '\0';
      local_60 = plVar1;
      uVar5 = FUN_0082d880();
      pplVar8 = (longlong **)&DAT_02802688;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        uVar5 = FUN_00e85ea0();
        pplVar8 = &local_60;
        if ((char)uVar5 == '\0') {
          pplVar8 = (longlong **)&DAT_02802688;
        }
      }
      plVar7 = *pplVar8;
      if (plVar7 == local_38) {
        if (((char)local_48 == '\0') && (plVar7 != (longlong *)0x0)) {
          plVar7 = local_38;
          if (*(char *)(pplVar8 + 1) != '\0') goto LAB_019a7696;
          local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
          FUN_00d50b00();
          plVar7 = local_38;
        }
        else {
          local_40 = local_48;
          plVar7 = local_38;
        }
      }
      else if (*(char *)(pplVar8 + 1) == '\0') {
        if (plVar7 != (longlong *)0x0) {
          uVar5 = FUN_00d50b00();
        }
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (((char)local_48 != '\0') && (local_38 != (longlong *)0x0)) {
          uVar5 = FUN_00d50b20();
        }
LAB_019a7696:
        *(undefined1 *)(pplVar8 + 1) = 0;
        local_40 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      local_38 = plVar7;
      if ((local_58 != '\0') && (plVar1 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar5 = local_40;
      if (local_38 != (longlong *)0x0) {
        FUN_00d50b00();
        plVar1 = local_38;
        FUN_01e437f0(param_1);
        cVar2 = (**(code **)(*plVar1 + 0x920))();
        if (unaff_RSI != 0) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_60 = local_38;
          local_58 = '\0';
          FUN_00d21140();
          if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      if ((longlong)local_80 < 2) goto LAB_019a77ce;
      local_80 = local_80 - 1;
      lVar4 = *(longlong *)(unaff_RSI + 0x38);
      local_48 = uVar5;
    } while( true );
  }
  uVar5 = 0;
  local_38 = (longlong *)0x0;
LAB_019a77ce:
  puVar3 = local_50;
  if (*(int *)((longlong)local_50 + 0xc) == 0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_00d50b00();
  }
  *unaff_RDI = puVar3;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (((char)uVar5 != '\0') && (local_38 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}




// ============================================================
// @019ad3e0 — 633 bytes
// str: ""MUEditorSubview""
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ad3e0(void)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong **pplVar6;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong lVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong *plVar11;
  longlong *local_48;
  char local_40;
  ulonglong local_38;
  
  lVar5 = *(longlong *)(unaff_RDI + 0x38);
  uVar1 = *(uint *)(lVar5 + 0xc);
  if ((int)uVar1 < 1) {
    return;
  }
  lVar8 = 0;
  plVar11 = (longlong *)0x0;
  local_38 = 0;
  do {
    plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x10) + lVar8 * 8);
    local_48 = plVar2;
    local_40 = '\0';
    if ((DAT_02702df0 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      _DAT_027142d8 = FUN_0006d940();
      _DAT_027142c0 = "MUEditorSubview";
      _DAT_027142c8 = 0x168;
      _DAT_027142d0 = FUN_0034d130;
      _DAT_027142e0 = 0;
      uRam00000000027142e8 = 0;
      _DAT_027142f0 = 0;
      _DAT_02714368 = 0;
      uRam0000000002714370 = 0;
      _DAT_02714378 = 0;
      DAT_0271437a = 1;
      _DAT_027142f8 = 0;
      uRam0000000002714300 = 0;
      _DAT_02714308 = 0;
      uRam0000000002714310 = 0;
      _DAT_02714318 = 0;
      uRam0000000002714320 = 0;
      _DAT_02714328 = 0;
      uRam0000000002714330 = 0;
      _DAT_02714338 = 0;
      uRam0000000002714340 = 0;
      _DAT_02714348 = 0;
      uRam0000000002714350 = 0;
      _DAT_02714358 = 0;
      uRam0000000002714360 = 0;
      DAT_02714383 = 0;
      _DAT_0271437b = 0;
      ___cxa_guard_release();
    }
    pplVar6 = (longlong **)&DAT_02802688;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x360))();
      cVar3 = FUN_00e85ea0();
      pplVar6 = &local_48;
      if (cVar3 == '\0') {
        pplVar6 = (longlong **)&DAT_02802688;
      }
    }
    plVar7 = *pplVar6;
    uVar10 = (undefined7)((ulonglong)plVar2 >> 8);
    if (plVar7 == plVar11) {
      if (((char)local_38 == '\0') && (plVar7 != (longlong *)0x0)) {
        plVar7 = plVar11;
        if (*(char *)(pplVar6 + 1) != '\0') goto LAB_019ad4b4;
        uVar9 = CONCAT71(uVar10,1);
        FUN_00d50b00();
      }
      else {
        uVar9 = local_38 & 0xffffffff;
      }
    }
    else {
      if (*(char *)(pplVar6 + 1) == '\0') {
        if (plVar7 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        uVar9 = CONCAT71(uVar10,1);
        if (((char)local_38 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
          plVar11 = plVar7;
          goto LAB_019ad500;
        }
      }
      else {
        if (((char)local_38 != '\0') && (plVar11 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_019ad4b4:
        *(undefined1 *)(pplVar6 + 1) = 0;
      }
      uVar9 = CONCAT71(uVar10,1);
      plVar11 = plVar7;
    }
LAB_019ad500:
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x928))();
      plVar7 = local_48;
      plVar2 = (longlong *)*unaff_RSI;
      if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar7 == plVar2) {
        (**(code **)(*plVar11 + 0x620))();
      }
    }
    if ((ulonglong)uVar1 - 1 == lVar8) {
      if ((char)uVar9 == '\0') {
        return;
      }
      if (plVar11 == (longlong *)0x0) {
        return;
      }
      FUN_00d50b20();
      return;
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x38);
    lVar8 = lVar8 + 1;
    local_38 = uVar9 & 0xffffffff;
  } while( true );
}




// ============================================================
// @019aeb20 — 592 bytes
// ============================================================

void FUN_019aeb20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar3;
  undefined8 unaff_R14;
  undefined7 uVar5;
  ulonglong uVar4;
  longlong lVar6;
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  char local_40;
  undefined8 local_38;
  
  if (*unaff_RSI == 0) {
    if (*(char *)((longlong)unaff_RDI + 0x35c) == '\0') {
      return;
    }
    (**(code **)(*unaff_RDI + 0xce0))(DAT_023b3490,unaff_RDI + 0x6e);
    *(undefined1 *)((longlong)unaff_RDI + 0x35c) = 0;
    return;
  }
  uVar2 = (**(code **)(*unaff_RDI + 0xe20))();
  lVar3 = local_48;
  local_58 = local_48;
  uVar5 = (undefined7)((ulonglong)unaff_R14 >> 8);
  if (local_40 == '\0') {
    if (local_48 != 0) {
      FUN_00d50b00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_019aebc5;
    }
LAB_019aec25:
    local_38 = CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
  }
  else {
    if (local_48 == 0) goto LAB_019aec25;
LAB_019aebc5:
    if (*(int *)(lVar3 + 0xc) != 0) {
      if (*unaff_RSI != 0) {
        local_40 = '\0';
        local_48 = *unaff_RSI;
        cVar1 = FUN_00d24090();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        lVar3 = local_58;
        if (cVar1 == '\0') goto LAB_019aec29;
      }
      uVar4 = CONCAT71(uVar5,1);
      local_38 = 0;
      local_50 = 0;
      FUN_00d50b00();
      goto LAB_019aec97;
    }
LAB_019aec29:
    local_38 = 0;
  }
  local_78 = *unaff_RSI;
  local_70 = '\0';
  FUN_0039e8b0();
  lVar3 = local_48;
  if (local_48 == 0) {
    uVar4 = 0;
  }
  else if (local_40 == '\0') {
    FUN_00d50b00();
    uVar4 = CONCAT71(uVar5,1);
    if ((local_40 != '\0') && (local_48 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
    uVar4 = CONCAT71(uVar5,1);
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
LAB_019aec97:
  local_50 = uVar4 & 0xffffffff;
  if (*(char *)((longlong)unaff_RDI + 0x35c) == '\0') {
    *(undefined1 *)((longlong)unaff_RDI + 0x35c) = 1;
    lVar6 = (**(code **)(*unaff_RDI + 0xa50))();
    unaff_RDI[0x6c] = lVar6;
    unaff_RDI[0x6d] = param_2;
    lVar6 = (**(code **)(*unaff_RDI + 0xa98))();
    unaff_RDI[0x6e] = lVar6;
  }
  local_60 = '\0';
  local_68 = lVar3;
  (**(code **)(*unaff_RDI + 0xca8))(local_80,local_90);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*unaff_RDI + 0xce0))(DAT_023b3490,local_80);
  if ((char)local_38 == '\0') {
    FUN_00d50b20();
  }
  if (((char)local_50 != '\0') && (lVar3 != 0)) {
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @019ae080 — 562 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_019ae080(undefined8 param_1,undefined8 param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  char in_DL;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong lVar5;
  float fVar6;
  double dVar7;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 in_XMM1_Dd;
  undefined1 local_48 [24];
  undefined8 uVar8;
  
  fVar6 = (float)((ulonglong)param_2 >> 0x20);
  lVar4 = *unaff_RSI;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0xc) < 1) {
      local_48._0_8_ = 0;
    }
    else {
      lVar5 = 0;
      local_48._0_16_ = ZEXT816(0);
      auVar9._0_4_ = 0.0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar5 * 8);
        if (lVar4 != 0) {
          FUN_00d50b00();
        }
        fVar6 = (float)(**(code **)(*unaff_RDI + 0xc38))();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        fVar1 = fVar6;
        if (lVar5 == 0) {
          local_48._0_16_ = ZEXT416((uint)fVar6);
        }
        else {
          if (auVar9._0_4_ <= fVar6) {
            fVar1 = auVar9._0_4_;
          }
          if ((float)local_48._0_4_ < fVar6) {
            local_48._0_16_ = ZEXT416((uint)fVar6);
          }
        }
        in_XMM1_Dd = 0;
        fVar6 = 0.0;
        lVar5 = lVar5 + 1;
        lVar4 = *unaff_RSI;
        auVar9._0_4_ = fVar1;
      } while (lVar5 < *(int *)(lVar4 + 0xc));
      auVar9 = insertps(local_48._0_16_,fVar1,0x10);
      local_48._0_8_ = auVar9._0_8_;
    }
    FUN_01e436c0();
    if (DAT_023908ec <= fVar6) {
      dVar7 = (double)(**(code **)(*unaff_RDI + 0x928))();
      if (in_DL == '\0') {
        auVar3._4_4_ = fVar6;
        auVar3._0_4_ = fVar6;
        auVar3._8_4_ = in_XMM1_Dd;
        auVar3._12_4_ = in_XMM1_Dd;
        auVar11._4_12_ = auVar3._4_12_;
        auVar11._0_4_ =
             fVar6 / (((float)local_48._0_4_ + _DAT_0241b5b0) -
                     ((float)local_48._4_4_ + _UNK_0241b5b4));
        uVar8 = auVar11._0_8_;
      }
      else {
        auVar2._4_4_ = fVar6;
        auVar2._0_4_ = fVar6;
        auVar2._8_4_ = in_XMM1_Dd;
        auVar2._12_4_ = in_XMM1_Dd;
        do {
          local_48._0_4_ = (float)local_48._0_4_ + _DAT_0241b5b0;
          local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5b4;
          auVar10._4_12_ = auVar2._4_12_;
          auVar10._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
          uVar8 = auVar10._0_8_;
        } while ((float)dVar7 < auVar10._0_4_ * DAT_0241b644);
        auVar9._0_4_ = auVar10._0_4_;
        if (in_DL != '\0') {
          while (DAT_023908e0 * auVar9._0_4_ < DAT_02390d28) {
            local_48._0_4_ = (float)local_48._0_4_ + _DAT_0241b5c0;
            local_48._4_4_ = (float)local_48._4_4_ + _UNK_0241b5c4;
            auVar9._0_4_ = fVar6 / ((float)local_48._0_4_ - (float)local_48._4_4_);
            auVar9._4_12_ = auVar10._4_12_;
            uVar8 = auVar9._0_8_;
          }
        }
      }
      (**(code **)(*unaff_RDI + 0xc08))(uVar8);
      (**(code **)(*unaff_RDI + 0x540))();
      (**(code **)(*unaff_RDI + 0xa48))();
      FUN_00e7b4f0();
      (**(code **)(*unaff_RDI + 0xaa0))();
    }
  }
  return;
}




// ============================================================
// @019a72b0 — 543 bytes
// ============================================================

undefined8 * FUN_019a72b0(undefined4 param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *plVar8;
  longlong **pplVar9;
  longlong *local_78;
  char local_70;
  longlong *local_40;
  
  lVar6 = *(longlong *)(unaff_RSI + 0x38);
  if (*(int *)(lVar6 + 0xc) < 1) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  uVar7 = (ulonglong)(*(int *)(lVar6 + 0xc) - 1);
  local_40 = (longlong *)0x0;
  bVar2 = false;
  do {
    plVar1 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + uVar7 * 8);
    local_70 = '\0';
    local_78 = plVar1;
    FUN_0082d880();
    pplVar9 = (longlong **)&DAT_02802688;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x360))();
      cVar5 = FUN_00e85ea0();
      pplVar9 = &local_78;
      if (cVar5 == '\0') {
        pplVar9 = (longlong **)&DAT_02802688;
      }
    }
    plVar8 = *pplVar9;
    if (plVar8 == local_40) {
      plVar3 = local_40;
      bVar4 = bVar2;
      if ((!bVar2) && (plVar8 != (longlong *)0x0)) {
        plVar8 = local_40;
        if (*(char *)(pplVar9 + 1) != '\0') goto LAB_019a738a;
        FUN_00d50b00();
        bVar4 = true;
      }
    }
    else if (*(char *)(pplVar9 + 1) == '\0') {
      if (plVar8 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      bVar4 = true;
      plVar3 = plVar8;
      if ((bVar2) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if ((bVar2) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_019a738a:
      *(undefined1 *)(pplVar9 + 1) = 0;
      plVar3 = plVar8;
      bVar4 = true;
    }
    bVar2 = bVar4;
    local_40 = plVar3;
    if ((local_70 != '\0') && (plVar1 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      FUN_01e437f0(param_1);
      cVar5 = (**(code **)(*local_40 + 0x920))();
      if (unaff_RSI != 0) {
        FUN_00d50b20();
      }
      if (cVar5 != '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (!bVar2) {
          FUN_00d50b00();
        }
        *unaff_RDI = local_40;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return unaff_RDI;
      }
    }
    if ((longlong)uVar7 < 1) {
      *(undefined1 *)(unaff_RDI + 1) = 0;
      *unaff_RDI = 0;
      if (!bVar2) {
        return unaff_RDI;
      }
      if (local_40 == (longlong *)0x0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    uVar7 = uVar7 - 1;
    lVar6 = *(longlong *)(unaff_RSI + 0x38);
  } while( true );
}




// ============================================================
// @005b9d10 — 520 bytes
// str: ""MUEditorSubview""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x005b9e31) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b9d10(void)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_1a0;
  
  if ((DAT_02702df0 == '\0') && (iVar1 = ___cxa_guard_acquire(), iVar1 != 0)) {
    _DAT_027142d8 = FUN_0006d940();
    _DAT_027142c0 = "MUEditorSubview";
    _DAT_027142c8 = 0x168;
    _DAT_027142d0 = FUN_0034d130;
    _DAT_027142e0 = 0;
    uRam00000000027142e8 = 0;
    _DAT_027142f0 = 0;
    _DAT_02714368 = 0;
    uRam0000000002714370 = 0;
    _DAT_02714378 = 0;
    DAT_0271437a = 1;
    _DAT_027142f8 = 0;
    uRam0000000002714300 = 0;
    _DAT_02714308 = 0;
    uRam0000000002714310 = 0;
    _DAT_02714318 = 0;
    uRam0000000002714320 = 0;
    _DAT_02714328 = 0;
    uRam0000000002714330 = 0;
    _DAT_02714338 = 0;
    uRam0000000002714340 = 0;
    _DAT_02714348 = 0;
    uRam0000000002714350 = 0;
    _DAT_02714358 = 0;
    uRam0000000002714360 = 0;
    DAT_02714383 = 0;
    _DAT_0271437b = 0;
    ___cxa_guard_release();
  }
  if (DAT_0271437b == '\0') {
    FUN_000a31d0();
    FUN_00e87760();
    FUN_0006daf0();
    FUN_00d50c00();
    FUN_0059c6c0();
    FUN_00d50c00();
    uVar2 = FUN_00e87770();
    FUN_00e87920(uVar2,0);
    if (local_1a0 != 0) {
      FUN_00d50b20();
    }
    FUN_0006d770();
    FUN_0006d770();
  }
  return;
}



