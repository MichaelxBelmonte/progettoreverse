// Reconstructed implementation of MUAraContentReader
// From MikeCore binary — reverse-engineered pseudocode

#include "MUAraContentReader.h"

// ============================================================
// @016c4850 — 15112 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_016c4850(longlong *param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  code *pcVar15;
  undefined8 uVar16;
  pthread_key_t pVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined1 *puVar20;
  ulonglong *puVar21;
  code *pcVar22;
  int iVar23;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int iVar24;
  code *pcVar25;
  ulonglong uVar26;
  char *pcVar27;
  code *pcVar28;
  bool bVar29;
  undefined8 extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar30;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  double dVar31;
  char local_res8;
  char local_res10;
  undefined1 local_390 [8];
  longlong local_388;
  undefined1 local_380;
  longlong local_378;
  undefined1 local_370;
  longlong local_368;
  undefined1 local_360;
  undefined8 *local_358;
  undefined1 local_350;
  longlong local_348;
  char local_340;
  code *local_338;
  undefined1 local_330;
  code *local_328;
  undefined1 local_320;
  code *local_318;
  undefined1 local_310;
  code *local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  code *local_2d8;
  char local_2d0;
  code *local_2c8;
  char local_2c0;
  code *local_2b8;
  char local_2b0;
  code *local_2a8;
  char local_2a0;
  code *local_298;
  char local_290;
  code *local_288;
  char local_280;
  code *local_278;
  char local_270;
  code *local_268;
  char local_260;
  code *local_258;
  char local_250;
  code *local_248;
  char local_240;
  code *local_238;
  char local_230;
  code *local_228;
  char local_220;
  code *local_218;
  char local_210;
  code *local_208;
  char local_200;
  code *local_1f8;
  char local_1f0;
  code *local_1e8;
  char local_1e0;
  code *local_1d8;
  char local_1d0;
  ulonglong local_1c8;
  code *local_1c0;
  char local_1b8;
  code *local_1b0;
  code *local_1a8;
  undefined4 local_19c;
  code *local_198;
  char local_190;
  code *local_188;
  char local_180;
  code *local_178;
  char local_170;
  undefined8 local_168;
  code *local_160;
  code *local_158;
  undefined1 local_150 [4];
  int local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  code *local_128;
  double local_120;
  longlong *local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined4 local_f0;
  int iStack_ec;
  undefined8 local_e8;
  code *local_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined8 local_90;
  char local_88;
  code *local_80;
  code *local_78;
  code *local_68;
  code *local_60;
  char local_58 [8];
  code *local_50;
  undefined8 local_48;
  int local_40;
  
  cVar3 = (char)param_1;
  local_388 = *param_2;
  local_380 = 0;
  local_118 = param_3;
  local_cc = param_4;
  cVar2 = FUN_016bf700();
  pVar17 = (pthread_key_t)param_1;
  if (cVar2 == '\0') {
    return;
  }
  if (cVar3 == '\0') {
    local_378 = *unaff_RSI;
    local_370 = 0;
    FUN_016cbba0();
    pVar17 = (pthread_key_t)param_1;
    lVar14 = *unaff_RSI;
    if ((code *)lVar14 == local_60) {
      if (((char)unaff_RSI[1] != '\0') || (local_60 == (code *)0x0)) {
        if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_016c4970;
      }
      param_1 = unaff_RSI;
      if (local_58[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      lVar13 = unaff_RSI[1];
      if (local_58[0] == '\0') {
        if (local_60 != (code *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)local_60;
        if (((char)lVar13 != '\0') && (lVar14 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *unaff_RSI = (longlong)local_60;
        if ((char)lVar13 == '\0') {
          *(undefined1 *)(unaff_RSI + 1) = 1;
          goto LAB_016c4970;
        }
        if (lVar14 != 0) {
          FUN_00d50b20();
        }
      }
    }
    pVar17 = (pthread_key_t)param_1;
    *(undefined1 *)(unaff_RSI + 1) = 1;
  }
LAB_016c4970:
  if ((*(int *)(*param_2 + 0x10) == 0) && (*(int *)(*param_2 + 0x18) == 0)) {
    lVar14 = *local_118;
    uVar26 = *(ulonglong *)(lVar14 + 0x14);
    pVar17 = (pthread_key_t)(uVar26 >> 0x20);
    if (*(ulonglong *)(lVar14 + 0xc) >> 0x20 == 0) {
      if (uVar26 >> 0x20 == 0) {
LAB_016c49e3:
        if (*(int *)(lVar14 + 0x18) == 0) {
          pvVar8 = _pthread_getspecific(0);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_00e7bdb0();
          FUN_016c46a0(0,0);
          goto LAB_016c5d9a;
        }
        goto LAB_016c5d87;
      }
    }
    else if ((uVar26 >> 0x20 != 0) && (cVar3 = FUN_00e7c000(), cVar3 != '\0')) {
      lVar14 = *local_118;
      if (*(ulonglong *)(lVar14 + 0xc) >> 0x20 == 0) goto LAB_016c49e3;
LAB_016c5d87:
      FUN_016c46a0(0,0);
LAB_016c5d9a:
      local_368 = *unaff_RSI;
      local_360 = 0;
      FUN_016f1400();
      lVar14 = *local_118;
      uVar11 = FUN_00e7bdb0();
      *(undefined8 *)(lVar14 + 0x14) = uVar11;
      *(undefined8 *)(lVar14 + 0xc) = uVar11;
      return;
    }
  }
  pvVar8 = _pthread_getspecific(pVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c8 = *(code **)(*param_2 + 0xc);
  if ((ulonglong)local_c8 >> 0x20 != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = (code *)FUN_0165d690();
  }
  pvVar8 = _pthread_getspecific(pVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a8 = *(code **)(*param_2 + 0x14);
  if ((ulonglong)local_a8 >> 0x20 != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = (code *)FUN_0165d690();
  }
  local_a0 = *(code **)(*local_118 + 0xc);
  if ((ulonglong)local_a0 >> 0x20 != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = (code *)FUN_0165d690();
  }
  local_b8 = local_a0;
  if (((char)local_cc == '\0') &&
     (local_b8 = *(code **)(*local_118 + 0x14),
     (ulonglong)*(code **)(*local_118 + 0x14) >> 0x20 != 0)) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = (code *)FUN_0165d690();
  }
  local_60 = local_a0;
  FUN_00e7b970();
  pcVar25 = local_a8;
  uVar7 = (uint)((ulonglong)local_a8 >> 0x20);
  local_160 = local_60;
  if ((ulonglong)local_a8 >> 0x20 == 0) {
    local_d8 = (code *)FUN_00e7bdb0();
    if ((char)local_cc != '\0') goto LAB_016c4cf6;
LAB_016c4d45:
    pcVar25 = local_b8;
    uVar7 = (uint)((ulonglong)local_b8 >> 0x20);
    if ((ulonglong)local_b8 >> 0x20 == 0) {
LAB_016c4d95:
      local_90 = (code *)FUN_00e7bdb0();
    }
    else {
      FUN_00e7b970();
      local_90 = pcVar25;
      local_60 = (code *)((ulonglong)pcVar25 & 0xffffffff00000000);
      if (((ulonglong)pcVar25 >> 0x20 != 0) && (cVar3 = FUN_00e7c630(), cVar3 != '\0'))
      goto LAB_016c4d95;
    }
    pcVar25 = local_60;
    if (local_d8._4_4_ == 0) {
      local_158 = local_b8;
      if ((ulonglong)local_90 >> 0x20 != 0) {
LAB_016c4e29:
        pcVar25 = local_c8;
        FUN_00e7b820();
        local_158 = local_b8;
        local_a8 = pcVar25;
      }
    }
    else {
      if ((ulonglong)local_90 >> 0x20 != 0) {
        cVar3 = FUN_00e7c000();
        local_158 = local_b8;
        if (cVar3 != '\0') goto joined_r0x016c4d1e;
        if (((local_d8._4_4_ == 0) || (local_90._4_4_ == 0)) ||
           (cVar3 = FUN_00e7c020(), cVar3 == '\0')) goto LAB_016c4e29;
      }
      pcVar25 = local_a0;
      FUN_00e7b820();
      local_158 = pcVar25;
      local_b8 = pcVar25;
    }
  }
  else {
    FUN_00e7b970();
    local_d8 = pcVar25;
    local_60 = (code *)((ulonglong)pcVar25 & 0xffffffff00000000);
    if (((ulonglong)pcVar25 >> 0x20 != 0) && (cVar3 = FUN_00e7c630(), cVar3 != '\0')) {
      return;
    }
    if ((char)local_cc == '\0') goto LAB_016c4d45;
LAB_016c4cf6:
    pcVar25 = local_a0;
    FUN_00e7b820();
    local_158 = pcVar25;
  }
joined_r0x016c4d1e:
  local_60 = pcVar25;
  if (local_res8 != '\0') {
    pvVar8 = _pthread_getspecific(uVar7);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_016da710();
    if ((local_58[0] == '\0') && (pcVar25 != (code *)0x0)) {
      FUN_00d50b00();
    }
    local_1a8 = pcVar25;
    pvVar8 = _pthread_getspecific(uVar7);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(uVar7);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_2d0 = '\0';
    local_2d8 = pcVar25;
    local_300 = (double)FUN_018fde50();
    if ((local_2d0 != '\0') && (local_2d8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    if (local_a8._4_4_ == 0) {
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901340();
      local_180 = 0;
      if (local_58[0] == '\0') {
        if (pcVar25 != (code *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_180 = '\x01';
      local_188 = pcVar25;
      local_2e8 = (double)FUN_018fde50();
      if ((local_180 != '\0') && (local_188 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (pcVar25 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016da710();
      if ((local_58[0] == '\0') && (pcVar25 != (code *)0x0)) {
        FUN_00d50b00();
      }
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_2c0 = '\0';
      uVar7 = 0;
      local_2c8 = pcVar25;
      FUN_01900ad0();
      local_190 = 0;
      if (local_58[0] == '\0') {
        if (pcVar25 != (code *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_190 = '\x01';
      local_198 = pcVar25;
      local_2e8 = (double)FUN_018fde50();
      if ((local_190 != '\0') && (local_198 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (pcVar25 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_2c0 != '\0') && (local_2c8 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != (code *)0x0) {
        FUN_00d50b20();
      }
    }
    pvVar8 = _pthread_getspecific(uVar7);
    pVar17 = (int)unaff_RDI + 0x50;
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = (code *)FUN_018fcb10();
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = (code *)FUN_018fcb10();
    pcVar15 = (code *)FUN_00e8fc40();
    FUN_00d4ff40();
    pVar17 = 0x2572358;
    *(undefined **)pcVar15 = &DAT_02572358;
    (*DAT_02572370)();
    local_b0 = pcVar15;
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    if (local_58[0] == '\0') {
      if (pcVar25 != (code *)0x0) {
        FUN_00d50b00();
        if ((local_58[0] != '\0') && (pcVar25 != (code *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_016c553d;
      }
    }
    else if (pcVar25 != (code *)0x0) {
LAB_016c553d:
      local_80 = (code *)((double)local_80 - (double)local_78);
      local_58[0] = '\0';
      local_60 = (code *)0x0;
      local_48 = 0xffffffff;
      local_40 = 0;
      local_48._4_4_ = 0;
      local_50 = pcVar25;
      while( true ) {
        if (local_48._4_4_ != 0) {
          if (local_48._4_4_ < 1) {
            iVar24 = -local_48._4_4_;
          }
          else {
            iVar24 = (int)local_48 - local_48._4_4_;
            local_48 = CONCAT44(local_48._4_4_,iVar24);
            FUN_00d23690();
            local_40 = local_40 + local_48._4_4_;
            iVar24 = 0;
          }
          local_48 = CONCAT44(iVar24,(int)local_48);
        }
        lVar14 = (longlong)(int)local_48;
        iVar24 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar24);
        pcVar25 = local_50;
        if (*(int *)(local_50 + 0xc) <= iVar24) break;
        pcVar25 = *(code **)(local_50 + 0x10);
        local_60 = *(code **)(pcVar25 + lVar14 * 8 + 8);
        if (local_a8._4_4_ != 0) {
          pvVar8 = _pthread_getspecific((pthread_key_t)pcVar25);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = (code *)FUN_019079b0();
          if ((((ulonglong)local_90 >> 0x20 != 0) && (local_a8._4_4_ != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 != '\0')) break;
        }
        pVar17 = (pthread_key_t)pcVar25;
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = (code *)FUN_019079b0();
        if ((((ulonglong)local_90 >> 0x20 != 0) && (local_c8._4_4_ != 0)) &&
           (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = (code *)FUN_019079b0();
          FUN_00e7b820();
          FUN_01907c60();
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar30 = (double)FUN_01907950();
          FUN_01907cc0(dVar30 + (double)local_80);
          local_88 = '\0';
          local_90 = local_60;
          FUN_00d21140();
          if ((local_88 != '\0') && (local_90 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pVar17 = (pthread_key_t)pcVar25;
      FUN_000beb10();
      FUN_00d50b20();
    }
    lVar14 = *unaff_RSI;
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      lVar14 = *unaff_RSI;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        lVar14 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
    }
    pcVar25 = *(code **)(lVar14 + 0x70);
    local_80 = pcVar25;
    if (pcVar25 == (code *)0x0) {
LAB_016c59e9:
      local_168 = 0;
      puVar9 = (undefined8 *)0x0;
    }
    else {
      FUN_00d50b00();
      uVar7 = *(uint *)(pcVar25 + 0x18);
      if ((int)uVar7 < 8) goto LAB_016c59e9;
      local_128 = DAT_025683d8;
      uVar26 = 0;
      local_78 = (code *)&DAT_025683c0;
      puVar9 = (undefined8 *)0x0;
      local_168 = 0;
      do {
        local_90 = *(code **)(*(longlong *)(local_80 + 0x10) + uVar26 * 8);
        pVar17 = (pthread_key_t)((ulonglong)local_90 >> 0x20);
        if ((local_a8._4_4_ != 0) && (pVar17 != 0)) {
          cVar3 = FUN_00e7c020();
          if (cVar3 == '\0') break;
          pVar17 = (pthread_key_t)((ulonglong)local_90 >> 0x20);
        }
        if (((pVar17 != 0) && (local_c8._4_4_ != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
          if (puVar9 == (undefined8 *)0x0) {
            puVar9 = (undefined8 *)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = local_78;
            (*local_128)();
            FUN_00c92170();
            uVar11 = FUN_00c92160();
            local_168 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
          }
          pcVar25 = local_90;
          local_60 = local_90;
          uVar11 = FUN_00e7b820();
          iVar24 = *(int *)(puVar9 + 3);
          FUN_00c8e340(uVar11,1);
          *(code **)(puVar9[2] + (longlong)iVar24) = pcVar25;
        }
        uVar26 = uVar26 + 1;
      } while (uVar7 >> 3 != uVar26);
    }
    pcVar25 = local_1a8;
    if ((char)local_cc == '\0') {
      lVar14 = *local_118;
      puVar10 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &DAT_025fa538;
      uVar11 = _UNK_02393728;
      *(undefined8 *)((longlong)puVar10 + 0xc) = _DAT_02393720;
      *(undefined8 *)((longlong)puVar10 + 0x14) = uVar11;
      FUN_00d500e0();
      uVar11 = *(undefined8 *)(lVar14 + 0x14);
      *(undefined8 *)((longlong)puVar10 + 0xc) = *(undefined8 *)(lVar14 + 0xc);
      *(undefined8 *)((longlong)puVar10 + 0x14) = uVar11;
      pcVar15 = local_b8;
      if ((ulonglong)local_b8 >> 0x20 != 0) {
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar17 = 0;
        local_60 = (code *)FUN_0165cf20(0,0);
        FUN_00e7c860();
        pcVar15 = (code *)FUN_00e7cc50();
      }
      *(code **)((longlong)puVar10 + 0x14) = pcVar15;
      local_350 = 0;
      local_358 = puVar10;
      FUN_016d4110();
      FUN_00d50b20();
    }
    local_100 = *(undefined8 *)(unaff_RDI + 0x68);
    local_90 = local_a0;
    uVar11 = FUN_00e7b970();
    FUN_016da710(uVar11,local_90);
    if ((local_58[0] == '\0') && (local_60 != (code *)0x0)) {
      FUN_00d50b00();
    }
    local_128 = local_60;
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_2b8 = local_128;
    local_2b0 = '\0';
    local_2f8 = (double)FUN_018fde50();
    if ((local_2b0 != '\0') && (local_2b8 != (code *)0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_2a8 = local_128;
    local_2a0 = '\0';
    pcVar15 = (code *)0x0;
    uVar11 = FUN_01900ec0(0,&local_2a8);
    local_78 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != (code *)0x0) && (uVar11 = FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != (code *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_2a0 != '\0') && (local_2a8 != (code *)0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if (local_78 == (code *)0x0) {
LAB_016c5d25:
      FUN_016da710(uVar11,local_a0);
      if (local_78 == local_60) {
        if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_58[0] == '\0') {
        if (local_60 != (code *)0x0) {
          FUN_00d50b00();
        }
        if (local_78 == (code *)0x0) goto LAB_016c5e0a;
        local_78 = local_60;
        FUN_00d50b20();
      }
      else if (local_78 == (code *)0x0) {
LAB_016c5e0a:
        local_78 = local_60;
      }
      else {
        FUN_00d50b20();
        local_78 = local_60;
      }
LAB_016c5e0e:
      pcVar15 = (code *)0x0;
      if ((ulonglong)local_b8 >> 0x20 == 0) goto LAB_016c5e94;
      local_100 = *(undefined8 *)(unaff_RDI + 0x68);
      local_90 = local_b8;
      uVar11 = FUN_00e7b820();
      FUN_016da710(uVar11,local_90);
      local_e0 = local_60;
      pcVar15 = local_60;
      if (local_60 == (code *)0x0) {
        local_e0 = (code *)0x0;
        local_f4 = 0;
      }
      else {
        local_f4 = (undefined4)CONCAT71((int7)((ulonglong)local_60 >> 8),1);
        if (local_58[0] == '\0') {
          FUN_00d50b00();
        }
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)pcVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901340();
      if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pcVar22 = local_b8;
      if (local_60 == local_e0) {
        local_90 = (code *)CONCAT44(local_90._4_4_,1);
        local_60 = local_b8;
        uVar11 = FUN_00e7c260();
        FUN_016da710(uVar11,pcVar22);
        if ((local_340 != '\0') && (local_348 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_e0 == (code *)0x0) goto LAB_016c5e9e;
      pvVar8 = _pthread_getspecific((pthread_key_t)pcVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_298 = local_e0;
      local_290 = '\0';
      pcVar15 = (code *)0x0;
      FUN_01900ad0(0,&local_298);
      if (local_58[0] == '\0') {
        if (((local_60 != (code *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
           (local_60 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58[0] = '\0';
      }
      if ((local_290 != '\0') && (local_298 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_288 = local_60;
      local_280 = '\0';
      local_278 = local_e0;
      local_270 = '\0';
      local_2e0 = (double)FUN_019079d0();
      if ((local_270 != '\0') && (local_278 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_280 != '\0') && (local_288 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (local_60 != (code *)0x0) {
        FUN_00d50b20();
      }
      pVar17 = (pthread_key_t)pcVar15;
      local_134 = 0;
      if ((char)local_cc != '\0') goto LAB_016c5fcb;
LAB_016c6332:
      local_120 = 0.0;
      if (local_b8._4_4_ != 0) {
        FUN_00d23340();
        pVar17 = (pthread_key_t)CONCAT71((int7)((ulonglong)pcVar15 >> 8),local_58[0]);
        pcVar12 = local_58;
        if (local_58[0] == '\0') {
          pcVar12 = (char *)&local_90;
        }
        local_90 = (code *)CONCAT71(local_90._1_7_,local_58[0]);
        *pcVar12 = '\0';
        if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_120 = (double)FUN_01907950();
        if (((char)local_90 != '\0') && (local_60 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar30 = (double)FUN_018fcb10();
        local_120 = local_120 - dVar30;
      }
      pcVar15 = (code *)FUN_00e7bdb0();
    }
    else {
      if (local_b8._4_4_ != 0) {
        pvVar8 = _pthread_getspecific((pthread_key_t)pcVar15);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = (code *)FUN_019079b0();
        if ((((ulonglong)local_60 >> 0x20 != 0) && (local_b8._4_4_ != 0)) &&
           (cVar3 = FUN_00e7c020(), uVar11 = extraout_XMM0_Qa, cVar3 == '\0')) goto LAB_016c5d25;
        goto LAB_016c5e0e;
      }
LAB_016c5e94:
      local_f4 = 0;
LAB_016c5e9e:
      pvVar8 = _pthread_getspecific((pthread_key_t)pcVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)pcVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_01901340();
      local_170 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != (code *)0x0) {
          uVar11 = FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_170 = '\x01';
      local_178 = local_60;
      uVar11 = FUN_018fde50(uVar11,0);
      local_2e0 = extraout_XMM0_Qa_00;
      if ((local_170 != '\0') && (local_178 != (code *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
        uVar11 = FUN_00d50b20();
      }
      pVar17 = (pthread_key_t)pcVar15;
      local_134 = (undefined4)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      local_e0 = (code *)0x0;
      if ((char)local_cc == '\0') goto LAB_016c6332;
LAB_016c5fcb:
      FUN_00d23340();
      pcVar12 = (char *)&local_90;
      if (local_58[0] != '\0') {
        pcVar12 = local_58;
      }
      local_90 = (code *)CONCAT71(local_90._1_7_,local_58[0]);
      *pcVar12 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific(pVar17);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_120 = (double)FUN_01907950();
      FUN_00d23310();
      pcVar12 = (char *)&local_100;
      pcVar27 = local_58;
      if (local_58[0] == '\0') {
        pcVar27 = pcVar12;
      }
      local_100 = CONCAT71(local_100._1_7_,local_58[0]);
      *pcVar27 = '\0';
      if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pcVar25 = local_1a8;
      pvVar8 = _pthread_getspecific((pthread_key_t)pcVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_2f0 = (double)FUN_01907950();
      if (((char)local_100 != '\0') && (local_60 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_90 != '\0') && (local_60 != (code *)0x0)) {
        FUN_00d50b20();
      }
      local_120 = local_120 - local_2f0;
      pcVar15 = local_d8;
    }
    uVar7 = (uint)pcVar15;
    local_338 = local_78;
    local_330 = 0;
    local_328 = local_e0;
    local_320 = 0;
    local_318 = local_b0;
    local_310 = 0;
    uVar11 = FUN_00e7bdb0();
    FUN_016e9760(local_120,&local_328,&local_318,uVar11);
    pvVar8 = _pthread_getspecific(uVar7);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018f9310();
    if (puVar9 != (undefined8 *)0x0) {
      iVar24 = 0;
      while( true ) {
        iVar23 = *(int *)(puVar9 + 3);
        iVar18 = iVar23 + 7;
        if (-1 < iVar23) {
          iVar18 = iVar23;
        }
        uVar7 = iVar18 >> 3;
        if ((int)uVar7 <= iVar24) break;
        iVar24 = iVar24 + 1;
        FUN_016cc400();
      }
    }
    dVar30 = local_300;
    if (local_300 <= local_2f8) {
      dVar30 = local_2f8;
    }
    dVar31 = local_300;
    if (local_2f8 <= local_300) {
      dVar31 = local_2f8;
    }
    if (DAT_023b36d8 < dVar30 / dVar31) {
      uVar7 = *(uint *)(*(longlong *)(unaff_RDI + 0x70) + 0x18);
      uVar26 = (ulonglong)uVar7;
      uVar1 = uVar7 + 7;
      if (-1 < (int)uVar7) {
        uVar1 = uVar7;
      }
      if (7 < (int)uVar7) {
        iVar24 = (int)uVar1 >> 3;
        lVar14 = *(longlong *)(*(longlong *)(unaff_RDI + 0x70) + 0x10);
        do {
          if ((*(int *)(lVar14 + 4) != 0) && (local_a0._4_4_ != 0)) {
            cVar3 = FUN_00e7c000();
            uVar7 = (uint)uVar26;
            if (cVar3 != '\0') goto LAB_016c65ca;
          }
          uVar7 = (uint)uVar26;
          lVar14 = lVar14 + 8;
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
      }
      FUN_016cc400();
    }
LAB_016c65ca:
    uVar26 = (ulonglong)local_158 >> 0x20;
    if (uVar26 != 0) {
      dVar30 = local_2e0;
      if (local_2e0 <= local_2e8) {
        dVar30 = local_2e8;
      }
      dVar31 = local_2e0;
      if (local_2e8 <= local_2e0) {
        dVar31 = local_2e8;
      }
      if (DAT_023b36d8 < dVar30 / dVar31) {
        lVar14 = *(longlong *)(unaff_RDI + 0x70);
        iVar24 = *(int *)(lVar14 + 0x18);
        iVar23 = iVar24 + 7;
        if (-1 < iVar24) {
          iVar23 = iVar24;
        }
        if (7 < iVar24) {
          iVar23 = iVar23 >> 3;
          iVar24 = *(int *)(*(longlong *)(lVar14 + 0x10) + 4);
          lVar13 = *(longlong *)(lVar14 + 0x10);
          while( true ) {
            iVar23 = iVar23 + -1;
            if ((iVar24 != 0) && ((int)uVar26 != 0)) {
              cVar3 = FUN_00e7c000();
              uVar7 = (uint)lVar14;
              if (cVar3 != '\0') goto LAB_016c667c;
            }
            if (iVar23 == 0) break;
            uVar26 = (ulonglong)local_158 >> 0x20;
            iVar24 = *(int *)(lVar13 + 0xc);
            lVar13 = lVar13 + 8;
          }
        }
        uVar7 = (uint)lVar14;
        FUN_016cc400();
      }
    }
LAB_016c667c:
    pvVar8 = _pthread_getspecific(uVar7);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018f9310();
    if ((char)local_f4 != '\0' && (char)local_134 == '\0') {
      FUN_00d50b20();
    }
    if (local_78 != (code *)0x0) {
      FUN_00d50b20();
    }
    if (local_128 != (code *)0x0) {
      FUN_00d50b20();
    }
    if (local_80 != (code *)0x0) {
      FUN_00d50b20();
    }
    if (((char)local_168 != '\0') && (puVar9 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    if (local_b0 != (code *)0x0) {
      FUN_00d50b20();
    }
    if (pcVar25 != (code *)0x0) {
      FUN_00d50b20();
    }
  }
  if (local_res10 == '\0') goto LAB_016c81aa;
  local_13c = 0xffffffff;
  pvVar8 = _pthread_getspecific(uVar7);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  pcVar25 = local_c8;
  pvVar8 = _pthread_getspecific(uVar7);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar17 = 0;
  FUN_0165c0f0(0,pcVar25,&local_90,&local_13c);
  local_b0 = local_60;
  if ((((local_58[0] == '\0') && (local_60 != (code *)0x0)) && (FUN_00d50b00(), local_58[0] != '\0')
      ) && (local_60 != (code *)0x0)) {
    FUN_00d50b20();
  }
  pvVar8 = _pthread_getspecific(pVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar8 = _pthread_getspecific(pVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar19 = &local_13c;
  FUN_0165db00(puVar19,&local_100);
  pcVar25 = local_a0;
  local_10c = 0xffffffff;
  pvVar8 = _pthread_getspecific((pthread_key_t)puVar19);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar20 = local_150;
  FUN_0165c0f0(puVar20,pcVar25,&local_1c8,&local_10c);
  uVar7 = (uint)puVar20;
  local_80 = local_60;
  if (((local_58[0] == '\0') && (local_60 != (code *)0x0)) &&
     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (code *)0x0)))) {
    FUN_00d50b20();
  }
  if (((local_14c == 0) || (local_a0._4_4_ == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
    pvVar8 = _pthread_getspecific(uVar7);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar19 = &local_10c;
    FUN_0165db00(puVar19,&local_108);
    uVar7 = (uint)puVar19;
  }
  else {
    pvVar8 = _pthread_getspecific(uVar7);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_60 = (code *)FUN_0165be20();
    if (((local_14c == 0) || ((ulonglong)local_60 >> 0x20 == 0)) ||
       (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar21 = &local_1c8;
      FUN_0165c650(puVar21,local_150,&local_10c);
      uVar7 = (uint)puVar21;
      if (local_80 != local_60) {
        if (local_58[0] != '\0') {
          bVar29 = local_80 != (code *)0x0;
          local_80 = local_60;
          if (bVar29) {
            FUN_00d50b20();
          }
          goto LAB_016c736a;
        }
        if (local_60 != (code *)0x0) {
          FUN_00d50b00();
        }
        bVar29 = local_80 != (code *)0x0;
        local_80 = local_60;
        if (bVar29) {
          FUN_00d50b20();
        }
      }
      if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
        FUN_00d50b20();
      }
    }
LAB_016c736a:
    local_108 = FUN_00e7bdb0();
  }
  local_268 = local_80;
  local_260 = '\0';
  bVar4 = (**(code **)(*(longlong *)local_b0 + 0x50))();
  if ((local_260 != '\0') && (local_268 != (code *)0x0)) {
    FUN_00d50b20();
  }
  if (local_a8._4_4_ == 0) {
    bVar5 = (ulonglong)local_90 >> 0x20 == 0;
LAB_016c6b78:
    bVar5 = bVar5 & bVar4;
  }
  else {
    bVar5 = bVar4;
    if ((ulonglong)local_90 >> 0x20 != 0) {
      bVar5 = FUN_00e7c020();
      bVar5 = ~bVar5;
      goto LAB_016c6b78;
    }
  }
  if (local_b8._4_4_ == 0) {
    bVar5 = local_1c8 >> 0x20 == 0 & bVar5;
joined_r0x016c6bb9:
    if (bVar5 == 0) {
LAB_016c6bc8:
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016f1a80();
      local_130 = local_c8;
      if ((((bVar4 == 0) || (local_100._4_4_ == 0)) || (local_108._4_4_ == 0)) ||
         (cVar3 = FUN_00e7c000(), pcVar25 = local_a0, cVar3 == '\0')) {
        pvVar8 = _pthread_getspecific(uVar7);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016f1d60();
        local_60 = (code *)((ulonglong)local_60 & 0xffffffff00000000);
        if ((local_108._4_4_ == 0) || (cVar3 = FUN_00e7c630(), cVar3 == '\0')) {
          pcVar25 = local_130;
          FUN_00e7b970();
          uVar6 = FUN_0123ff00();
          FUN_0123fc50(extraout_XMM0_Qa_01,uVar6);
          if (((local_58[0] == '\0') &&
              ((local_60 != (code *)0x0 && (FUN_00d50b00(), local_58[0] != '\0')))) &&
             (local_60 != (code *)0x0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_248 = local_60;
          local_240 = '\0';
          FUN_0165b1b0(pcVar25,local_130,1);
          uVar7 = (uint)pcVar25;
          if ((local_240 != '\0') && (local_248 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != (code *)0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00e7b970();
        local_c0 = pcVar25;
        local_60 = (code *)(((ulonglong)pcVar25 >> 0x20) << 0x20);
        if ((ulonglong)pcVar25 >> 0x20 == 0) {
LAB_016c6c90:
          FUN_00e7b970();
        }
        else {
          cVar3 = FUN_00e7c630();
          if (cVar3 != '\0') goto LAB_016c6f12;
          if ((local_c0._4_4_ == 0) || (cVar3 = FUN_00e7c6b0(), cVar3 != '\0')) goto LAB_016c6c90;
          FUN_00e7b970();
        }
        local_60 = (code *)(((ulonglong)pcVar25 >> 0x20) << 0x20);
        pvVar8 = _pthread_getspecific(uVar7);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar8 = _pthread_getspecific(uVar7);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_258 = local_b0;
        local_250 = '\0';
        pcVar25 = local_90;
        FUN_0165b1b0(local_90,local_130,0);
        uVar7 = (uint)pcVar25;
        if ((local_250 != '\0') && (local_258 != (code *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_016c6f12:
      local_c0 = local_a8;
      if ((ulonglong)local_a8 >> 0x20 != 0) {
        local_138 = local_13c;
        pvVar8 = _pthread_getspecific(uVar7);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pcVar25 = local_a8;
        pvVar8 = _pthread_getspecific(uVar7);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar19 = &local_98;
        FUN_0165c0f0(puVar19,pcVar25,&local_f0,&local_138);
        uVar7 = (uint)puVar19;
        if ((((local_58[0] == '\0') && (local_60 != (code *)0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (code *)0x0)) {
          FUN_00d50b20();
        }
        local_68 = local_60;
        if (((iStack_94 == 0) || (local_a8._4_4_ == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0'))
        {
          lVar14 = *unaff_RSI;
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            lVar14 = *unaff_RSI;
            lVar13 = FUN_00e8b990();
            if (lVar13 != 0) {
              lVar14 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8)
              ;
            }
          }
          pcVar25 = *(code **)(lVar14 + 0x58);
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            pcVar25 = *(code **)(lVar14 + 0x58);
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pcVar25 = *(code **)(pcVar25 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
            }
          }
          puVar19 = &local_138;
          FUN_0165db00(puVar19,&local_e8);
          uVar7 = (uint)puVar19;
          if ((char)local_cc == '\0') goto LAB_016c73ed;
LAB_016c719e:
          local_19c = local_10c;
          if (local_80 == (code *)0x0) {
            uVar26 = 0;
          }
          else {
            uVar26 = CONCAT71((int7)((ulonglong)pcVar25 >> 8),1);
            local_78 = (code *)0x0;
            FUN_00d50b00();
          }
          local_148 = local_108;
          local_78 = (code *)(uVar26 & 0xffffffff);
          pcVar25 = local_80;
        }
        else {
          lVar14 = *unaff_RSI;
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            lVar14 = *unaff_RSI;
            lVar13 = FUN_00e8b990();
            if (lVar13 != 0) {
              lVar14 = *(longlong *)(lVar14 + 0x20 + (ulonglong)(*(uint *)(lVar13 + 0x154) & 1) * 8)
              ;
            }
          }
          pcVar25 = *(code **)(lVar14 + 0x58);
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            pcVar25 = *(code **)(lVar14 + 0x58);
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pcVar25 = *(code **)(pcVar25 + (ulonglong)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
            }
          }
          pcVar15 = (code *)FUN_0165be20();
          if (((iStack_94 == 0) || ((ulonglong)pcVar15 >> 0x20 == 0)) ||
             (cVar3 = FUN_00e7c000(), cVar3 == '\0')) {
            pvVar8 = _pthread_getspecific(uVar7);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar8 = _pthread_getspecific(uVar7);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            puVar19 = &local_f0;
            FUN_0165c650(puVar19,&local_98,&local_138);
            uVar7 = (uint)puVar19;
            pcVar22 = local_60;
            pcVar25 = pcVar15;
            if (local_60 != pcVar15) {
              if (local_58[0] != '\0') {
                bVar29 = local_60 != (code *)0x0;
                local_60 = pcVar15;
                if (bVar29) {
                  FUN_00d50b20();
                }
                goto LAB_016c73bd;
              }
              if (pcVar15 != (code *)0x0) {
                FUN_00d50b00();
              }
              pcVar22 = pcVar15;
              if (local_60 != (code *)0x0) {
                FUN_00d50b20();
              }
            }
            local_60 = pcVar22;
            if ((local_58[0] != '\0') && (pcVar15 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
LAB_016c73bd:
          local_e8 = FUN_00e7bdb0();
          local_68 = local_60;
          local_60 = pcVar15;
          if ((char)local_cc != '\0') goto LAB_016c719e;
LAB_016c73ed:
          pcVar25 = local_b8;
          local_19c = local_10c;
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar20 = local_390;
          uVar11 = FUN_0165c0f0(puVar20,pcVar25,&local_308,&local_19c);
          pVar17 = (pthread_key_t)puVar20;
          if (local_60 == (code *)0x0) {
            local_78 = (code *)0x0;
            pcVar25 = (code *)0x0;
          }
          else {
            local_78 = (code *)CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
            pcVar25 = local_60;
            if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
               (local_60 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar19 = &local_19c;
          FUN_0165db00(puVar19,&local_148);
          uVar7 = (uint)puVar19;
        }
        local_1b8 = '\0';
        local_1c0 = pcVar25;
        cVar3 = (**(code **)(*(longlong *)local_68 + 0x50))();
        if (cVar3 == '\0') {
          if ((local_1b8 != '\0') && (local_1c0 != (code *)0x0)) {
            FUN_00d50b20();
          }
LAB_016c769b:
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016f1d60();
          local_60 = (code *)((ulonglong)local_60 & 0xffffffff00000000);
          if ((local_148._4_4_ == 0) || (cVar3 = FUN_00e7c630(), cVar3 == '\0')) {
            local_60 = (code *)FUN_0123fff0();
            FUN_00e7b970();
            pcVar15 = local_c0;
            local_1b0 = local_60;
            FUN_00e7b820();
            uVar6 = FUN_0123ff00();
            FUN_0123fc50(extraout_XMM0_Qa_02,uVar6);
            if ((local_58[0] == '\0') &&
               (((local_60 != (code *)0x0 && (FUN_00d50b00(), local_58[0] != '\0')) &&
                (local_60 != (code *)0x0)))) {
              FUN_00d50b20();
            }
            pvVar8 = _pthread_getspecific(uVar7);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar8 = _pthread_getspecific(uVar7);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_210 = '\0';
            pcVar22 = local_c0;
            local_218 = local_60;
            FUN_0165b1b0(local_c0,pcVar15,1);
            uVar7 = (uint)pcVar22;
            if ((local_210 != '\0') && (local_218 != (code *)0x0)) {
              FUN_00d50b20();
            }
            if (local_60 != (code *)0x0) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if ((local_e8._4_4_ == 0) || (local_148._4_4_ == 0)) {
            cVar3 = '\0';
          }
          else {
            cVar3 = FUN_00e7c000();
          }
          if ((local_1b8 != '\0') && (local_1c0 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') goto LAB_016c769b;
          uVar7 = (uint)((ulonglong)local_308 >> 0x20);
          if ((ulonglong)local_308 >> 0x20 == 0) {
            local_c0 = (code *)FUN_00e7bdb0();
            if (iStack_ec != 0) {
              pvVar8 = _pthread_getspecific(uVar7);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              pvVar8 = _pthread_getspecific(uVar7);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_228 = local_68;
              local_220 = '\0';
              uVar11 = CONCAT44(iStack_94,local_98);
              uVar16 = FUN_00e7bdb0();
              FUN_0165b1b0(uVar16,uVar11,0);
              uVar7 = (uint)uVar16;
              if ((local_220 != '\0') && (local_228 != (code *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
          else {
            local_60 = local_308;
            FUN_00e7b970();
            local_1b0 = local_308;
            FUN_00e7b820();
            pvVar8 = _pthread_getspecific(uVar7);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar8 = _pthread_getspecific(uVar7);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_238 = local_68;
            local_230 = '\0';
            pcVar15 = local_c0;
            FUN_0165b1b0(local_c0,CONCAT44(iStack_94,local_98),0);
            uVar7 = (uint)pcVar15;
            if ((local_230 != '\0') && (local_238 != (code *)0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if (((char)local_78 != '\0') && (pcVar25 != (code *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      pcVar25 = local_60;
      FUN_016f1a80();
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_00d51d20();
      if ((((local_58[0] == '\0') && (local_60 != (code *)0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (code *)0x0)) {
        FUN_00d50b20();
      }
      if ((char)local_cc != '\0') {
        local_e8 = CONCAT44(local_e8._4_4_,0xffffffff);
        pvVar8 = _pthread_getspecific(uVar7);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar19 = &local_f0;
        FUN_0165c4d0(puVar19,&local_98,&local_e8);
        pVar17 = (pthread_key_t)puVar19;
        if (((local_58[0] == '\0') && (local_60 != (code *)0x0)) &&
           ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != (code *)0x0)))) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_208 = local_60;
        local_200 = '\0';
        pcVar22 = (code *)CONCAT44(iStack_94,local_98);
        FUN_00e7b820();
        pcVar15 = (code *)CONCAT44(iStack_ec,local_f0);
        FUN_0165b1b0(pcVar15,pcVar22,0);
        if ((local_200 != '\0') && (local_208 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pcVar28 = local_60;
        local_60 = pcVar22;
        while( true ) {
          pvVar8 = _pthread_getspecific((pthread_key_t)pcVar15);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar19 = &local_f0;
          FUN_0165c650(puVar19,&local_98,&local_e8);
          uVar7 = (uint)puVar19;
          if (local_60 != pcVar28) {
            if (local_58[0] == '\0') {
              if (local_60 != (code *)0x0) {
                FUN_00d50b00();
              }
              bVar29 = pcVar28 != (code *)0x0;
              pcVar28 = local_60;
              if (bVar29) {
                FUN_00d50b20();
              }
            }
            else {
              if (pcVar28 != (code *)0x0) {
                FUN_00d50b20();
              }
              local_58[0] = '\0';
              pcVar28 = local_60;
            }
          }
          if (pcVar28 == (code *)0x0) {
            if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_016c7c4d;
          }
          bVar4 = 0;
          if ((iStack_94 != 0) &&
             (local_a0._4_4_ = (int)((ulonglong)local_a0 >> 0x20), bVar29 = local_a0._4_4_ != 0,
             bVar4 = 0, bVar29)) {
            bVar4 = FUN_00e7c020();
            bVar4 = bVar4 ^ 1;
          }
          if ((local_58[0] != '\0') && (local_60 != (code *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar4 == 0) break;
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_1f0 = '\0';
          pcVar22 = (code *)CONCAT44(iStack_94,local_98);
          local_1f8 = pcVar28;
          FUN_00e7b820();
          pcVar15 = (code *)CONCAT44(iStack_ec,local_f0);
          local_60 = pcVar22;
          if (iStack_ec != 0) {
            FUN_00e7b820();
            local_60 = pcVar15;
          }
          FUN_0165b1b0(pcVar15,pcVar22,0);
          if ((local_1f0 != '\0') && (local_1f8 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        FUN_00d50b20();
      }
LAB_016c7c4d:
      local_e8 = CONCAT44(local_e8._4_4_,0xffffffff);
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pcVar15 = local_130;
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar19 = &local_98;
      FUN_0165c0f0(puVar19,pcVar15,&local_f0,&local_e8);
      if ((((local_58[0] == '\0') && (local_60 != (code *)0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != (code *)0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar19);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific((pthread_key_t)puVar19);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_0165e830();
      while ((pVar17 = (pthread_key_t)puVar19, iStack_ec != 0 &&
             ((local_c0._4_4_ == 0 || (cVar3 = FUN_00e7c020(), cVar3 != '\0'))))) {
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_1d0 = '\0';
        uVar11 = CONCAT44(iStack_94,local_98);
        local_1d8 = local_60;
        FUN_00e7b820();
        pcVar15 = (code *)CONCAT44(iStack_ec,local_f0);
        FUN_00e7b820();
        pcVar22 = pcVar15;
        FUN_0165b1b0(pcVar15,uVar11,uVar7 & 1);
        pVar17 = (pthread_key_t)pcVar22;
        if ((local_1d0 != '\0') && (local_1d8 != (code *)0x0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar19 = &local_f0;
        FUN_0165c7f0(puVar19,&local_98,&local_e8);
        if (local_60 == pcVar15) {
LAB_016c7fad:
          if ((local_58[0] != '\0') && (pcVar15 != (code *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_58[0] == '\0') {
            if (pcVar15 != (code *)0x0) {
              FUN_00d50b00();
            }
            bVar29 = local_60 != (code *)0x0;
            local_60 = pcVar15;
            if (bVar29) {
              FUN_00d50b20();
            }
            goto LAB_016c7fad;
          }
          bVar29 = local_60 != (code *)0x0;
          local_60 = pcVar15;
          if (bVar29) {
            FUN_00d50b20();
          }
        }
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar19);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar8 = _pthread_getspecific((pthread_key_t)puVar19);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_0165e830();
      }
      pcVar15 = local_c0;
      if ((ulonglong)local_c0 >> 0x20 != 0) {
        FUN_00e7b820();
      }
      pvVar8 = _pthread_getspecific(pVar17);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_1e0 = '\0';
      local_1e8 = local_60;
      FUN_00e7b820();
      FUN_0165b1b0(pcVar15,CONCAT44(iStack_94,local_98),uVar7 & 1);
      uVar7 = (uint)pcVar15;
      if ((local_1e0 != '\0') && (local_1e8 != (code *)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d64850();
      pcVar15 = *(code **)(unaff_RDI + 0x58);
      if (pcVar15 != pcVar25) {
        if (pcVar25 != (code *)0x0) {
          FUN_00d50b00();
        }
        *(code **)(unaff_RDI + 0x58) = pcVar25;
        if (pcVar15 != (code *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
      FUN_016f28b0();
      if (local_60 != (code *)0x0) {
        FUN_00d50b20();
      }
      if (pcVar25 != (code *)0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_1c8 >> 0x20 == 0) goto joined_r0x016c6bb9;
    cVar3 = FUN_00e7c020();
    if (cVar3 != '\0' || bVar5 != 1) goto LAB_016c6bc8;
  }
  if (local_80 != (code *)0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != (code *)0x0) {
    FUN_00d50b20();
  }
LAB_016c81aa:
  lVar14 = *local_118;
  pvVar8 = _pthread_getspecific(uVar7);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar17 = 0;
  FUN_0165cf20(0,0);
  FUN_00e7c860();
  uVar11 = FUN_00e7cc50();
  *(undefined8 *)(lVar14 + 0xc) = uVar11;
  lVar14 = *local_118;
  if ((ulonglong)local_158 >> 0x20 != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    local_158 = (code *)FUN_00e7cc50();
  }
  *(code **)(lVar14 + 0x14) = local_158;
  return;
}




// ============================================================
// @016c11a0 — 4191 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016c1857) */
/* WARNING: Removing unreachable block (ram,0x016c1860) */
/* WARNING: Removing unreachable block (ram,0x016c1968) */
/* WARNING: Removing unreachable block (ram,0x016c1974) */
/* WARNING: Removing unreachable block (ram,0x016c1a5e) */
/* WARNING: Removing unreachable block (ram,0x016c1a67) */
/* WARNING: Removing unreachable block (ram,0x016c1a30) */
/* WARNING: Removing unreachable block (ram,0x016c1a3d) */
/* WARNING: Removing unreachable block (ram,0x016c154b) */
/* WARNING: Removing unreachable block (ram,0x016c1554) */
/* WARNING: Removing unreachable block (ram,0x016c1bb4) */
/* WARNING: Removing unreachable block (ram,0x016c1bbd) */
/* WARNING: Removing unreachable block (ram,0x016c1ab7) */
/* WARNING: Removing unreachable block (ram,0x016c1ae0) */
/* WARNING: Removing unreachable block (ram,0x016c15e7) */
/* WARNING: Removing unreachable block (ram,0x016c1610) */
/* WARNING: Removing unreachable block (ram,0x016c15e9) */
/* WARNING: Removing unreachable block (ram,0x016c1612) */
/* WARNING: Removing unreachable block (ram,0x016c1ab9) */
/* WARNING: Removing unreachable block (ram,0x016c1ae2) */

undefined8 * FUN_016c11a0(double param_1,double param_2,double param_3,double param_4)

{
  pthread_key_t pVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int extraout_var;
  longlong lVar8;
  pthread_key_t in_ECX;
  pthread_key_t pVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong *in_RDX;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  bool bVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_130;
  undefined1 local_128;
  longlong local_120;
  undefined1 local_118;
  ulonglong local_110;
  double local_e8;
  double local_e0;
  longlong local_d8;
  char local_d0;
  double local_a8;
  longlong local_80;
  char local_78;
  undefined8 *local_68;
  undefined8 *local_60;
  char local_58;
  int local_48;
  double local_38;
  
  puVar2 = local_60;
  if (*in_RDX == 0) {
    local_a8 = DAT_0238fee8;
    if (((param_2 != 0.0) || (NAN(param_2))) && ((param_4 != 0.0 || (NAN(param_4))))) {
      local_a8 = param_2 / param_4;
    }
  }
  else {
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e8 = (double)FUN_018fc680(param_3);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar15 = (double)FUN_018fc680(param_4 + param_3);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e0 = (double)FUN_018fc680(param_1);
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_018fc680(param_2 + param_1);
    uVar13 = -(ulonglong)(dVar16 - local_e0 != 0.0);
    uVar14 = -(ulonglong)(dVar15 - local_e8 != 0.0);
    local_a8 = (double)(~uVar13 & (ulonglong)DAT_0238fee8 |
                       (~uVar14 & (ulonglong)DAT_0238fee8 |
                       (ulonglong)((dVar16 - local_e0) / (dVar15 - local_e8)) & uVar14) & uVar13);
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(in_ECX);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  if ((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  puVar6 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x2572358;
  *puVar6 = &DAT_02572358;
  (*DAT_02572370)();
  if (local_60 != (undefined8 *)0x0) {
    local_58 = '\0';
    local_60 = (undefined8 *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)puVar2 + 0xc) <= local_48) break;
      lVar8 = puVar2[2];
      local_60 = *(undefined8 **)(lVar8 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar9 = (pthread_key_t)lVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar15 = (double)FUN_01907950();
      if (*in_RDX == 0) {
        local_38 = (dVar15 - param_1) / local_a8 + param_3;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar15 = (double)FUN_018fc680(dVar15);
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_38 = (double)FUN_018fd0c0((dVar15 - local_e0) / local_a8 + local_e8);
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_01907b60(local_38);
      if (local_d0 == '\0') {
        if (local_d8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_d0 = '\0';
      }
      local_80 = local_d8;
      local_78 = '\0';
      FUN_00d21140();
      if (local_d8 != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
    }
    puVar10 = puVar2;
    FUN_000beb10();
    pVar9 = (pthread_key_t)puVar10;
  }
  puVar10 = local_60;
  uVar17 = FUN_01907d40();
  local_68 = puVar6;
  if (*in_RDX == 0) goto LAB_016c1f39;
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar3 = FUN_018fe5d0();
  uVar17 = extraout_XMM0_Qa;
  if (cVar3 != '\0') goto LAB_016c1f39;
  FUN_018f9610();
  if (local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_58 = '\0';
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  pVar1 = (pthread_key_t)local_60;
  if (local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
      goto LAB_016c1a80;
    }
    bVar12 = true;
  }
  else if (local_60 == (undefined8 *)0x0) {
    bVar12 = true;
  }
  else {
LAB_016c1a80:
    local_58 = '\0';
    local_60 = (undefined8 *)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (longlong)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((longlong)puVar10 + 0xc) <= local_48) break;
      lVar8 = puVar10[2];
      local_60 = *(undefined8 **)(lVar8 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar9 = (pthread_key_t)lVar8;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar17 = FUN_01907950();
      pvVar5 = _pthread_getspecific(pVar9);
      if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        pVar9 = pVar1;
      }
      FUN_019006f0(uVar17,0);
      if ((local_78 == '\0') && (local_80 != 0)) {
        FUN_00d50b00();
      }
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      dVar15 = (double)FUN_00e7c860();
      FUN_00e7cd00((dVar15 - local_e8) * local_a8 + local_e0);
      pvVar5 = _pthread_getspecific(pVar9);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar7 = FUN_019079b0();
      FUN_00e7b970();
      local_110 = FUN_00e7bdb0();
      if (((local_110 >> 0x20 == 0) || (extraout_var == 0)) ||
         (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
        dVar15 = (double)FUN_00e7c860();
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_018fd0c0((dVar15 - local_e0) / local_a8 + local_e8);
        pvVar5 = _pthread_getspecific(pVar9);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar17 = FUN_01907b60(uVar17);
        if (local_78 == '\0') {
          if (lVar7 != 0) {
            uVar17 = FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_01902110(uVar17,0);
        if (lVar7 != 0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (lVar7 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar12 = local_80 != 0;
      local_80 = lVar7;
      if (bVar12) {
        FUN_00d50b20();
      }
    }
    puVar11 = puVar10;
    FUN_000beb10();
    pVar9 = (pthread_key_t)puVar11;
    bVar12 = false;
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    pVar9 = pVar1;
  }
  uVar17 = FUN_018fbce0();
  local_68 = local_60;
  if (puVar6 == local_60) {
LAB_016c1f06:
    local_68 = puVar6;
    if ((local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      uVar17 = FUN_00d50b00();
    }
    if (puVar6 != (undefined8 *)0x0) {
      uVar17 = FUN_00d50b20();
      puVar6 = local_68;
      goto LAB_016c1f06;
    }
  }
  else {
    if (puVar6 != (undefined8 *)0x0) {
      uVar17 = FUN_00d50b20();
    }
  }
  if (!bVar12) {
    uVar17 = FUN_00d50b20();
  }
  if (puVar10 != (undefined8 *)0x0) {
    uVar17 = FUN_00d50b20();
  }
LAB_016c1f39:
  local_130 = 0;
  local_128 = 0;
  FUN_016c2780(uVar17,&local_130);
  if ((local_58 == '\0') && (local_60 != (undefined8 *)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  puVar6 = local_60;
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar6 = (undefined8 *)local_60[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  lVar7 = *unaff_RSI;
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *unaff_RSI;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar7 = *(longlong *)(lVar7 + 0x20 + (ulonglong)(*(uint *)(lVar8 + 0x154) & 1) * 8);
    }
  }
  iVar4 = *(int *)(lVar7 + 0x38);
  if (*(int *)(puVar6 + 7) != iVar4) {
    FUN_00d64850();
    *(int *)(puVar6 + 7) = iVar4;
    FUN_00d64910();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_0165c2e0();
  if (iVar4 < 1) {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar17 = FUN_00e7bdb0();
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165b8b0(uVar17,4,0);
    pVar9 = (pthread_key_t)uVar17;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_120 = *unaff_RSI;
    local_118 = 0;
    FUN_016c2ef0();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0165bd00();
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016c3130();
  *unaff_RDI = local_60;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_68 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @016c3770 — 3175 bytes
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_016c3770(double param_1,double param_2)

{
  longlong *plVar1;
  char cVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  pthread_key_t in_ECX;
  pthread_key_t pVar10;
  undefined4 *puVar11;
  longlong *in_RDX;
  longlong *unaff_RDI;
  bool bVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined8 *local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined1 local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  double local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  char local_40;
  longlong local_38;
  
  if (NAN(param_1)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  local_98 = param_2;
  local_70 = (longlong *)param_1;
  local_50 = in_RDX;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  local_38 = (longlong)local_48;
  if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = 0xffffffff;
  local_5c = 0xffffffff;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bcc0();
  FUN_016cb850(local_70,&local_5c);
  local_78 = (longlong *)FUN_00e7cd00();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar11 = &local_5c;
  local_a0 = (longlong *)FUN_0165e220(puVar11,1);
  pVar10 = (pthread_key_t)puVar11;
  plVar4 = (longlong *)FUN_00e7bdb0();
  local_88 = (longlong *)CONCAT44(local_88._4_4_,1);
  local_48 = local_a0;
  FUN_00e7c260();
  local_58 = local_48;
  if (((local_78._4_4_ == 0) || ((ulonglong)local_48 >> 0x20 == 0)) ||
     (cVar2 = FUN_00e7c020(), cVar2 != '\0')) {
    local_48 = local_78;
    FUN_00e7b970();
    plVar4 = local_48;
  }
  else {
    local_78 = local_a0;
  }
  plVar1 = local_78;
  local_c0 = local_80;
  local_8c = local_5c;
  local_70 = plVar4;
  if (NAN(local_98)) {
    uVar13 = FUN_00e7bdb0();
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025fa538;
    uVar8 = _UNK_02393728;
    *(undefined8 *)((longlong)puVar5 + 0xc) = _DAT_02393720;
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar8;
    FUN_00d500e0();
    *(longlong **)((longlong)puVar5 + 0xc) = plVar1;
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar13;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bcc0();
    FUN_016cb850(local_98,&local_8c);
    local_58 = (longlong *)FUN_00e7cd00();
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_8c;
    plVar4 = (longlong *)FUN_0165e220(puVar11,2);
    pVar10 = (pthread_key_t)puVar11;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_48 = plVar4;
    FUN_00e7c280();
    local_88 = local_48;
    bVar12 = local_58._4_4_ != 0;
    if (((bVar12) && ((ulonglong)local_48 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0'))
    {
      local_58 = plVar4;
    }
    plVar1 = local_58;
    plVar4 = local_78;
    puVar5 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &DAT_025fa538;
    uVar8 = _UNK_02393728;
    *(undefined8 *)((longlong)puVar5 + 0xc) = _DAT_02393720;
    *(undefined8 *)((longlong)puVar5 + 0x14) = uVar8;
    FUN_00d500e0();
    *(longlong **)((longlong)puVar5 + 0xc) = plVar4;
    *(longlong **)((longlong)puVar5 + 0x14) = plVar1;
  }
  cVar2 = FUN_016bf620();
  if (cVar2 != '\0') {
    local_68 = puVar5;
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_5c;
    local_a8 = (longlong *)FUN_016c46a0(puVar11,&local_80);
    local_bc = 0xffffffff;
    local_7c = 0xffffffff;
    pVar10 = (pthread_key_t)puVar11;
    pvVar3 = _pthread_getspecific(pVar10);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (pthread_key_t)local_38;
    }
    FUN_00e7bcc0();
    FUN_016cb850(local_a8,&local_7c);
    local_58 = (longlong *)FUN_00e7cd00();
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar7 = FUN_0165d690();
    pvVar3 = _pthread_getspecific(pVar10);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (pthread_key_t)local_38;
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = (longlong *)FUN_0165d690();
    local_48 = (longlong *)uVar7;
    FUN_00e7b970();
    plVar4 = local_48;
    puVar5 = local_68;
    local_b8 = (ulonglong)local_48;
    local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
    if (((ulonglong)plVar4 >> 0x20 != 0) && (cVar2 = FUN_00e7c630(), cVar2 != '\0')) {
      pvVar3 = _pthread_getspecific(pVar10);
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (pthread_key_t)local_38;
      }
      pvVar3 = _pthread_getspecific(pVar10);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar11 = &local_7c;
      local_e8 = FUN_0165e220(puVar11,1);
      pVar10 = (pthread_key_t)puVar11;
      local_48 = local_58;
      FUN_00e7b970();
      local_f0 = local_48;
      local_48 = local_70;
      FUN_00e7b970();
      plVar4 = local_48;
      local_b0 = local_48;
      local_48 = (longlong *)((ulonglong)local_48 & 0xffffffff00000000);
      if (((ulonglong)plVar4 >> 0x20 == 0) || (cVar2 = FUN_00e7c630(), cVar2 == '\0')) {
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        plVar4 = local_a0;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = 0;
        FUN_0165c940(0,plVar4,0,&local_5c);
        local_70 = local_48;
        if ((((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar10);
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (pthread_key_t)local_38;
        }
        uVar8 = local_e8;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = 0;
        FUN_0165c940(0,uVar8,0,&local_7c);
        plVar4 = local_48;
        if (((local_40 == '\0') && (local_48 != (longlong *)0x0)) &&
           ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (longlong *)0x0)))) {
          FUN_00d50b20();
        }
        local_e0 = plVar4;
        local_d8 = '\0';
        cVar2 = (**(code **)(*local_70 + 0x50))();
        if ((local_d8 != '\0') && (local_e0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_48 = (longlong *)FUN_0123ffd0();
          FUN_00e7bac0();
          local_a8 = local_48;
          pvVar3 = _pthread_getspecific(pVar10);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar3 = _pthread_getspecific(pVar10);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165bdc0();
          FUN_00e7b820();
        }
        if (plVar4 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      if (NAN(local_98)) {
        uVar8 = FUN_00e7bdb0();
      }
      else {
        pvVar3 = _pthread_getspecific(pVar10);
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (pthread_key_t)local_38;
        }
        FUN_00e7bcc0();
        FUN_016cb850(local_98,0);
        uVar8 = FUN_00e7cd00();
      }
      plVar4 = local_58;
      puVar9 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &DAT_025fa538;
      uVar13 = _UNK_02393728;
      *(undefined8 *)((longlong)puVar9 + 0xc) = _DAT_02393720;
      *(undefined8 *)((longlong)puVar9 + 0x14) = uVar13;
      uVar13 = FUN_00d500e0();
      *(longlong **)((longlong)puVar9 + 0xc) = plVar4;
      *(undefined8 *)((longlong)puVar9 + 0x14) = uVar8;
      uVar14 = 0;
      cVar2 = FUN_016bf700(uVar13,0);
      if (cVar2 == '\0') {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        *unaff_RDI = 0;
        bVar12 = true;
      }
      else {
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_d0 = *local_50;
        local_c8 = '\0';
        local_110 = puVar5;
        local_108 = 0;
        local_f8 = 0;
        local_100 = puVar9;
        FUN_016c4850(1,&local_110,&local_100,0,uVar14);
        if ((local_c8 != '\0') && (local_d0 != 0)) {
          FUN_00d50b20();
        }
        *unaff_RDI = local_38;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        bVar12 = false;
      }
      FUN_00d50b20();
      goto LAB_016c3e0b;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  bVar12 = true;
LAB_016c3e0b:
  FUN_00d50b20();
  if ((bVar12) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}




// ============================================================
// @016bc130 — 1795 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""audioModification->getDocumentController() == documentController""
// str: ""isContentAvailable""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016bc6cd) */
/* WARNING: Removing unreachable block (ram,0x016bc6d9) */

longlong FUN_016bc130(undefined8 *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar7 = param_1;
  uVar10 = FUN_00da7190();
  pVar6 = (pthread_key_t)puVar7;
  if ((unaff_RDI == 0) || (cVar3 = FUN_0168a120(), uVar10 = extraout_XMM0_Qa, cVar3 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
    }
  }
  else {
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar8 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar8 = 0;
        }
        goto LAB_016bc1f6;
      }
    }
    else {
      uVar10 = extraout_XMM0_Qa_00;
      if ((unaff_RSI == 0) || (cVar3 = FUN_01653650(), uVar10 = extraout_XMM0_Qa_01, cVar3 == '\0'))
      {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_0164e2c0();
        lVar8 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar8 == unaff_RDI) {
          uVar4 = FUN_0167b260();
          cVar3 = FUN_016bb8f0(extraout_XMM0_Qa_02,uVar4);
          if (cVar3 != '\0') {
            if (param_2 == 0x15) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650620();
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d810();
              local_60 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar2 = true;
              }
              pVar6 = (pthread_key_t)lVar8;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01651ad0();
            }
            else if (param_2 == 0x14) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650620();
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d7d0();
              local_60 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar2 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar2 = true;
              }
              pVar6 = (pthread_key_t)lVar8;
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01651ad0();
            }
            else {
              bVar2 = false;
              local_60 = 0;
            }
            lVar9 = local_60;
            if (param_1 == (undefined8 *)0x0) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650330();
              local_70 = local_58;
              local_68 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_68 = '\x01';
              local_a0 = lVar9;
              local_98 = '\0';
              FUN_0172d300(&local_a0,param_2);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01650330();
              local_80 = local_58;
              local_78 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              lVar9 = local_60;
              local_78 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              local_88 = '\0';
              local_90 = lVar8;
              FUN_01689550();
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_016bc1f6;
          }
          if (DAT_02802f60 != (undefined8 *)0x0) {
            lVar8 = 0;
            if ((code *)*DAT_02802f60 != (code *)0x0) {
              (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
            }
            goto LAB_016bc1f6;
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar10,"audioModification->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar8 = 0;
LAB_016bc1f6:
  FUN_00da71b0();
  return lVar8;
}




// ============================================================
// @016baff0 — 1573 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""audioSource->getDocumentController() == documentController""
// str: ""isContentAvailable""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016bb4af) */
/* WARNING: Removing unreachable block (ram,0x016bb4bb) */

longlong FUN_016baff0(undefined8 *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  void *pvVar5;
  pthread_key_t pVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_50;
  longlong local_48;
  char local_40;
  
  puVar7 = param_1;
  uVar10 = FUN_00da7190();
  pVar6 = (pthread_key_t)puVar7;
  if ((unaff_RDI == 0) || (cVar3 = FUN_0168a120(), uVar10 = extraout_XMM0_Qa, cVar3 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
    }
  }
  else {
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar8 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar8 = 0;
        }
        goto LAB_016bb0b6;
      }
    }
    else {
      uVar10 = extraout_XMM0_Qa_00;
      if ((unaff_RSI == 0) || (cVar3 = FUN_0166db10(), uVar10 = extraout_XMM0_Qa_01, cVar3 == '\0'))
      {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar10,"provided object ref is invalid");
        }
      }
      else {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_01660830();
        lVar8 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar10 = FUN_00d50b20();
        }
        if (lVar8 == unaff_RDI) {
          uVar4 = FUN_0167b260();
          cVar3 = FUN_016b9a60(extraout_XMM0_Qa_02,uVar4);
          if (cVar3 != '\0') {
            if (param_2 == 0x15) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d810();
              local_50 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              pVar6 = (pthread_key_t)lVar8;
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d4c0();
            }
            else if (param_2 == 0x14) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d7d0();
              local_50 = local_48;
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
                if (((local_40 == '\0') && (FUN_00d50b00(), local_40 != '\0')) && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              pVar6 = (pthread_key_t)lVar8;
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0166d4c0();
            }
            else {
              bVar2 = false;
              local_50 = 0;
            }
            lVar9 = local_50;
            if (param_1 == (undefined8 *)0x0) {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016676f0();
              local_70 = local_60;
              local_68 = 0;
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              local_68 = '\x01';
              local_a0 = lVar9;
              local_98 = '\0';
              FUN_0172d300(&local_a0,param_2);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_98 != '\0') && (local_a0 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar5 = _pthread_getspecific(pVar6);
              if (pvVar5 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_016676f0();
              local_80 = local_60;
              local_78 = 0;
              if (local_58 == '\0') {
                if (local_60 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_58 = '\0';
              }
              lVar9 = local_50;
              local_78 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar8 = local_48;
              if (local_48 == 0) {
                bVar1 = false;
                lVar8 = 0;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              local_88 = '\0';
              local_90 = lVar8;
              FUN_01689550();
              if ((local_88 != '\0') && (local_90 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
            }
            if ((bVar2) && (lVar9 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_016bb0b6;
          }
          if (DAT_02802f60 != (undefined8 *)0x0) {
            lVar8 = 0;
            if ((code *)*DAT_02802f60 != (code *)0x0) {
              (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
            }
            goto LAB_016bb0b6;
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar10,"audioSource->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar8 = 0;
LAB_016bb0b6:
  FUN_00da71b0();
  return lVar8;
}




// ============================================================
// @016c2780 — 1272 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016c29e1) */
/* WARNING: Removing unreachable block (ram,0x016c29ea) */
/* WARNING: Removing unreachable block (ram,0x016c289f) */
/* WARNING: Removing unreachable block (ram,0x016c28a8) */
/* WARNING: Removing unreachable block (ram,0x016c290a) */
/* WARNING: Removing unreachable block (ram,0x016c2917) */
/* WARNING: Removing unreachable block (ram,0x016c2aae) */
/* WARNING: Removing unreachable block (ram,0x016c2afa) */
/* WARNING: Removing unreachable block (ram,0x016c2aff) */

void FUN_016c2780(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *unaff_RDI;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0119c6b0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_018f9610();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar3 = plVar5[10];
  if (lVar3 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar5[10] = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (*param_2 == 0) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_019079b0();
    FUN_00e7bcc0();
    FUN_01909ea0();
    if (local_48 == '\0') {
      if (local_50 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_40 = local_50;
    FUN_00d21140();
    if (local_50 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_40 = *param_2;
    FUN_00d243f0();
  }
  FUN_0123fbe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_0165b080();
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = plVar1[0xb];
    plVar5 = plVar1;
  }
  else {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    lVar3 = plVar5[0xb];
  }
  if (lVar3 != local_40) {
    if (local_40 == 0) {
      plVar5[0xb] = 0;
      param_1 = lVar3;
    }
    else {
      FUN_00d50b00();
      param_1 = plVar5[0xb];
      plVar5[0xb] = local_40;
    }
    if (param_1 != 0) {
      FUN_00d50b20();
    }
  }
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  lVar3 = 1;
  while( true ) {
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    plVar5 = plVar1;
    if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    if (*(int *)(plVar5[0xc] + 0xc) <= lVar3) break;
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    FUN_016cc400();
    lVar3 = lVar3 + 1;
  }
  pvVar2 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cc730();
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @016c3130 — 1225 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016c33f7) */
/* WARNING: Removing unreachable block (ram,0x016c3400) */
/* WARNING: Removing unreachable block (ram,0x016c327a) */
/* WARNING: Removing unreachable block (ram,0x016c3286) */
/* WARNING: Removing unreachable block (ram,0x016c3260) */
/* WARNING: Removing unreachable block (ram,0x016c326c) */
/* WARNING: Removing unreachable block (ram,0x016c3330) */
/* WARNING: Removing unreachable block (ram,0x016c3339) */
/* WARNING: Removing unreachable block (ram,0x016c35fd) */
/* WARNING: Removing unreachable block (ram,0x016c3602) */
/* WARNING: Removing unreachable block (ram,0x016c340e) */
/* WARNING: Removing unreachable block (ram,0x016c341a) */

void FUN_016c3130(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  longlong unaff_RDI;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  longlong local_d8;
  char local_d0;
  int iStack_74;
  double local_68;
  ulonglong local_60;
  char local_58;
  int local_4c;
  longlong local_40;
  
  FUN_016d63b0();
  uVar2 = *(undefined8 *)(unaff_RDI + 0x68);
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  local_40 = **(longlong **)(local_60 + 0x10);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  lVar6 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  local_68 = (double)FUN_019079d0();
  local_4c = 2;
  while( true ) {
    pVar5 = (pthread_key_t)param_1;
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    iVar1 = *(int *)(local_60 + 0xc);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (iVar1 <= local_4c) break;
    if (lVar6 != local_40) {
      local_40 = lVar6;
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_018fbce0();
    param_1 = *(longlong *)(local_60 + 0x10);
    lVar6 = *(longlong *)(param_1 + (longlong)local_4c * 8);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    dVar7 = (double)FUN_019079d0();
    dVar8 = dVar7;
    if (dVar7 <= local_68) {
      dVar8 = local_68;
    }
    dVar10 = dVar7;
    if (local_68 <= dVar7) {
      dVar10 = local_68;
    }
    if (DAT_02411148 < dVar8 / dVar10) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_016cc400();
    }
    if ((local_68 != dVar7) || (NAN(local_68) || NAN(dVar7))) {
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = FUN_019079b0();
      pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00e7b970();
      if (((local_60 >> 0x20 != 0) && (iStack_74 = (int)((ulonglong)uVar2 >> 0x20), iStack_74 != 0))
         && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
        pvVar4 = _pthread_getspecific((pthread_key_t)param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_019079b0();
        uVar9 = FUN_00e7b970();
        FUN_016da710(uVar9,local_60);
        if ((local_d0 != '\0') && (local_d8 != 0)) {
          FUN_00d50b20();
        }
        local_4c = local_4c + 1;
      }
    }
    local_4c = local_4c + 1;
    local_68 = dVar7;
  }
  return;
}




// ============================================================
// @016bd400 — 1164 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""playbackRegion->getDocumentController() == documentController""
// str: ""isContentAvailable""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016bd740) */
/* WARNING: Removing unreachable block (ram,0x016bd74c) */

longlong FUN_016bd400(undefined8 *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  void *pvVar4;
  pthread_key_t pVar5;
  undefined8 *puVar6;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  char local_40;
  
  puVar6 = param_1;
  uVar8 = FUN_00da7190();
  pVar5 = (pthread_key_t)puVar6;
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), uVar8 = extraout_XMM0_Qa, cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)(uVar8,"provided object ref is invalid");
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 != (undefined8 *)0x0) {
        lVar7 = 0;
        if ((code *)*DAT_02802f60 != (code *)0x0) {
          (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar7 = 0;
        }
        goto LAB_016bd4c7;
      }
    }
    else {
      uVar8 = extraout_XMM0_Qa_00;
      if ((unaff_RSI == 0) || (cVar2 = FUN_01658870(), uVar8 = extraout_XMM0_Qa_01, cVar2 == '\0'))
      {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)(uVar8,"provided object ref is invalid");
        }
      }
      else {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_01654a00();
        lVar7 = local_48;
        if ((local_40 != '\0') && (local_48 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if (lVar7 == unaff_RDI) {
          uVar3 = FUN_0167b260();
          cVar2 = FUN_016bcb60(extraout_XMM0_Qa_02,uVar3);
          if (cVar2 == '\0') {
            if (DAT_02802f60 != (undefined8 *)0x0) {
              lVar7 = 0;
              if ((code *)*DAT_02802f60 != (code *)0x0) {
                (*(code *)*DAT_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
              }
              goto LAB_016bd4c7;
            }
          }
          else {
            if (param_1 == (undefined8 *)0x0) {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              local_68 = local_58;
              local_60 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_60 = '\x01';
              local_90 = '\0';
              local_98 = 0;
              FUN_0172d300(&local_98,param_2);
              lVar7 = local_48;
              if (local_48 == 0) {
                lVar7 = 0;
                bVar1 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_90 != '\0') && (local_98 != 0)) {
                FUN_00d50b20();
              }
              if ((local_60 != '\0') && (local_68 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              pvVar4 = _pthread_getspecific(pVar5);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0165a070();
              local_78 = local_58;
              local_70 = 0;
              if (local_50 == '\0') {
                if (local_58 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_50 = '\0';
              }
              local_70 = '\x01';
              FUN_0172dae0(*param_1,param_1[1]);
              lVar7 = local_48;
              if (local_48 == 0) {
                lVar7 = 0;
                bVar1 = false;
              }
              else if (local_40 == '\0') {
                FUN_00d50b00();
                bVar1 = true;
                if ((local_40 != '\0') && (local_48 != 0)) {
                  FUN_00d50b20();
                }
              }
              else {
                local_40 = '\0';
                bVar1 = true;
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
            }
            if (lVar7 != 0) {
              local_80 = '\0';
              local_88 = lVar7;
              FUN_01689550();
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if (bVar1) {
                FUN_00d50b20();
              }
              goto LAB_016bd4c7;
            }
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)
                    (uVar8,"playbackRegion->getDocumentController() == documentController");
        }
      }
    }
  }
  lVar7 = 0;
LAB_016bd4c7:
  FUN_00da71b0();
  return lVar7;
}




// ============================================================
// @016c0b50 — 1026 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016c0dcf) */
/* WARNING: Removing unreachable block (ram,0x016c0dd8) */
/* WARNING: Removing unreachable block (ram,0x016c0e9d) */
/* WARNING: Removing unreachable block (ram,0x016c0f02) */
/* WARNING: Removing unreachable block (ram,0x016c0f0b) */

void FUN_016c0b50(undefined8 param_1)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  pthread_key_t in_ECX;
  undefined8 *unaff_RDI;
  longlong *plVar5;
  undefined8 extraout_XMM0_Qa;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  plVar1 = (longlong *)FUN_00e8fc40();
  FUN_0119c6b0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018f9320(param_1);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  FUN_00d64850();
  lVar3 = plVar5[10];
  if (lVar3 != local_40) {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
    plVar5[10] = local_40;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019012b0();
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_019079b0();
  uVar4 = FUN_00e7bcc0();
  FUN_01909ea0(extraout_XMM0_Qa,uVar4);
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_00d21140();
  if (local_50 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (longlong *)plVar1[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  FUN_0123fbe0();
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  FUN_0165b080();
  if (local_50 != 0) {
    FUN_00d50b00();
  }
  FUN_00d64850();
  lVar3 = plVar5[0xb];
  if (lVar3 != local_50) {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
    plVar5[0xb] = local_50;
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d64910();
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  *unaff_RDI = plVar1;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}




// ============================================================
// @016c0400 — 933 bytes
// str: ""%@|%I""
// str: ""%@|%I/%I""
// str: ""%@|%I+%I/%I""
// ============================================================

void FUN_016c0400(pthread_key_t param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_88;
  int local_84;
  undefined8 *local_80;
  undefined4 local_78;
  longlong local_70;
  char local_68;
  int local_60;
  int local_5c;
  int local_58;
  longlong local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar1 = FUN_0165db00(0,&local_88);
  local_60 = local_88 / local_84;
  local_88 = local_88 % local_84;
  if ((local_84 == 1) && (local_60 == 0)) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 2;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = (undefined8 *)&DAT_025df2a0;
    local_60 = local_88;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == 0) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 3;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_5c = local_84 << 2;
    local_68 = '\x01';
    local_60 = local_88;
    local_80 = (undefined8 *)&DAT_02509758;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == 0) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 2;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = (undefined8 *)&DAT_025df2a0;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 4;
    local_80 = &DAT_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_58 = local_84 << 2;
    local_68 = '\x01';
    local_5c = local_88;
    local_80 = (undefined8 *)&DAT_025fa8b0;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &DAT_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ============================================================
// @016ba380 — 749 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""audioSource->getDocumentController() == documentController""
// str: ""!audioSource->isDeactivatedForUndoHistory()""
// str: ""contentTypesCount > 0""
// ============================================================

void FUN_016ba380(longlong param_1,longlong param_2)

{
  char cVar1;
  void *pvVar2;
  pthread_key_t pVar3;
  longlong lVar4;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  pVar3 = (pthread_key_t)param_1;
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar2 = _pthread_getspecific(pVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        if (param_2 == 0) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else if (param_1 == 0) {
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else {
          lVar4 = 0;
          do {
            cVar1 = FUN_0172c0d0();
            if (cVar1 == '\0') {
              if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
                (*(code *)*DAT_02802f60)();
              }
              goto LAB_016ba441;
            }
            lVar4 = lVar4 + 1;
          } while (param_2 != lVar4);
          pvVar2 = _pthread_getspecific(pVar3);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_016670a0();
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(pVar3);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01667ea0();
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
      }
      else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
  }
LAB_016ba441:
  FUN_00da71b0();
  return;
}




// ============================================================
// @016bcb60 — 711 bytes
// str: ""!playbackRegion->getAudioModification()->isDeactivatedForUndoHistory()""
// ============================================================

undefined4 FUN_016bcb60(pthread_key_t param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong local_60;
  char local_58;
  longlong *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01657380();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01650890();
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    if (DAT_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      cVar1 = (**(code **)(*local_40 + 0x3a0))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012eb770();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == (longlong *)0x0) {
            return 0;
          }
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 != '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
            return uVar2;
          }
          return uVar2;
        }
        return uVar2;
      }
    }
  }
  else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)();
    return 0;
  }
  return 0;
}




// ============================================================
// @016ba9d0 — 696 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""documentController->isHostEditingDocument()""
// str: ""audioSource->getDocumentController() == documentController""
// str: ""algorithmIndex >= 0""
// ============================================================

void FUN_016ba9d0(pthread_key_t param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_58;
  char local_50;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else if ((unaff_RSI == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
      else {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01660830();
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if (local_58 == unaff_RDI) {
          if ((int)param_2 < 0) {
            if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
              (*(code *)*DAT_02802f60)();
            }
          }
          else if ((int)param_2 < *(int *)(DAT_028ad890 + 0xc)) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar1 = *(longlong *)(*(longlong *)(DAT_028ad890 + 0x10) + (ulonglong)param_2 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_01668130();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
          }
        }
        else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}




// ============================================================
// @016bb8f0 — 667 bytes
// str: ""!audioModification->isDeactivatedForUndoHistory()""
// ============================================================

undefined4 FUN_016bb8f0(pthread_key_t param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *unaff_RDI;
  longlong *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01650890();
  if (cVar1 == '\0') {
    if (DAT_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      cVar1 = (**(code **)(*local_40 + 0x398))();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        if (param_2 != '\0') {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01650620();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0166b8c0();
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          plVar5 = (longlong *)*unaff_RDI;
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            plVar5 = (longlong *)*unaff_RDI;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
            }
          }
          (**(code **)(*plVar5 + 0x3a0))();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01650330();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return uVar2;
        }
        if (local_40 == (longlong *)0x0) {
          return uVar2;
        }
        FUN_00d50b20();
        return uVar2;
      }
    }
  }
  else if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
    (*(code *)*DAT_02802f60)();
    return 0;
  }
  return 0;
}




// ============================================================
// @016bd0f0 — 660 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""playbackRegion->getDocumentController() == documentController""
// str: ""isContentAvailable""
// ============================================================

undefined4 FUN_016bd0f0(pthread_key_t param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((unaff_RSI == 0) || (cVar1 = FUN_01658870(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        FUN_0167b260();
        cVar1 = FUN_016bcb60();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            uVar2 = 0;
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0165a070();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          uVar2 = FUN_0172cba0();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ============================================================
// @016bace0 — 660 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""audioSource->getDocumentController() == documentController""
// str: ""isContentAvailable""
// ============================================================

undefined4 FUN_016bace0(pthread_key_t param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        FUN_0167b260();
        cVar1 = FUN_016b9a60();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            uVar2 = 0;
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016676f0();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          uVar2 = FUN_0172cba0();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ============================================================
// @016bbe20 — 660 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""audioModification->getDocumentController() == documentController""
// str: ""isContentAvailable""
// ============================================================

undefined4 FUN_016bbe20(pthread_key_t param_1)

{
  char cVar1;
  undefined4 uVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (uVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((unaff_RSI == 0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        FUN_0167b260();
        cVar1 = FUN_016bb8f0();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            uVar2 = 0;
          }
        }
        else {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01650330();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          uVar2 = FUN_0172cba0();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        uVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}




// ============================================================
// @016ba6a0 — 658 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""audioSource->getDocumentController() == documentController""
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016ba8f1) */
/* WARNING: Removing unreachable block (ram,0x016ba8fa) */
/* WARNING: Removing unreachable block (ram,0x016ba87f) */
/* WARNING: Removing unreachable block (ram,0x016ba888) */

int FUN_016ba6a0(pthread_key_t param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  int iVar4;
  longlong lVar5;
  longlong local_60;
  char local_58;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    iVar4 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (iVar4 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      iVar4 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        iVar4 = 0;
      }
    }
    else if ((unaff_RSI == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      iVar4 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (local_60 == unaff_RDI) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01662650();
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        lVar1 = DAT_028ad890;
        if (DAT_028ad890 == 0) {
LAB_016ba90a:
          iVar4 = 0;
        }
        else {
          lVar5 = 0;
          do {
            if (*(int *)(lVar1 + 0xc) <= (int)lVar5) {
              FUN_00018280();
              goto LAB_016ba90a;
            }
            cVar2 = (**(code **)(**(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar5 * 8) + 0x50))()
            ;
            lVar5 = lVar5 + 1;
          } while (cVar2 == '\0');
          FUN_00018280();
          iVar4 = (int)lVar5 + -1;
        }
        if (local_60 != 0) {
          FUN_00d50b20();
        }
      }
      else {
        iVar4 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return iVar4;
}




// ============================================================
// @016cc400 — 623 bytes
// ============================================================

/* WARNING: Removing unreachable block (ram,0x016cc4df) */
/* WARNING: Removing unreachable block (ram,0x016cc4e8) */
/* WARNING: Removing unreachable block (ram,0x016cc5b4) */
/* WARNING: Removing unreachable block (ram,0x016cc5c1) */

void FUN_016cc400(undefined8 param_1,undefined8 param_2,size_t param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  ulonglong unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar9;
  int iVar10;
  longlong lVar12;
  char local_40;
  uint uVar11;
  
  uVar9 = unaff_RSI >> 0x20;
  if (uVar9 != 0) {
    puVar1 = (ulonglong *)(unaff_RDI + 0x70);
    uVar5 = *(ulonglong *)(unaff_RDI + 0x70);
    if (7 < *(int *)(uVar5 + 0x18)) {
      lVar12 = 1;
      iVar8 = 0;
      iVar10 = *(int *)(*(longlong *)(uVar5 + 0x10) + 4);
      uVar3 = uVar9;
      do {
        if ((iVar10 != 0) && ((int)uVar3 != 0)) {
          cVar4 = FUN_00e7c000();
          if (cVar4 != '\0') {
            if (iVar8 != -8) {
              return;
            }
            uVar5 = *puVar1;
            break;
          }
          uVar5 = *puVar1;
        }
        iVar10 = *(int *)(uVar5 + 0x18);
        iVar6 = iVar10 + 7;
        if (-1 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar6 >> 3 <= lVar12) break;
        uVar3 = unaff_RSI >> 0x20;
        iVar8 = iVar8 + 8;
        lVar12 = lVar12 + 1;
        iVar10 = *(int *)(*(longlong *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    if (uVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00c8e4f0();
    if ((local_40 == '\0') && (unaff_RSI != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
    uVar5 = *puVar1;
    uVar2 = *(uint *)(uVar5 + 0x18);
    pvVar7 = (void *)(ulonglong)uVar2;
    uVar11 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar11 = uVar2;
    }
    iVar10 = (int)uVar11 >> 3;
    if (7 < (int)uVar2) {
      lVar12 = 1;
      iVar8 = *(int *)(*(longlong *)(uVar5 + 0x10) + 4);
      do {
        if ((iVar8 != 0) && ((int)uVar9 != 0)) {
          cVar4 = FUN_00e7c020();
          if (cVar4 != '\0') {
            iVar10 = (int)lVar12 + -1;
            break;
          }
          uVar5 = *puVar1;
        }
        iVar8 = *(int *)(uVar5 + 0x18);
        iVar6 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        pvVar7 = (void *)(longlong)(iVar6 >> 3);
        if ((longlong)pvVar7 <= lVar12) break;
        uVar9 = unaff_RSI >> 0x20;
        lVar12 = lVar12 + 1;
        iVar8 = *(int *)(*(longlong *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    iVar8 = *(int *)(unaff_RSI + 0x18);
    FUN_00c8e340();
    lVar12 = *(longlong *)(unaff_RSI + 0x10);
    _memmove(pvVar7,(void *)(longlong)(iVar8 + iVar10 * -8),param_3);
    *(ulonglong *)(lVar12 + (longlong)iVar10 * 8) = unaff_RSI;
    FUN_00d64850();
    uVar9 = *puVar1;
    if (uVar9 != unaff_RSI) {
      FUN_00d50b00();
      *puVar1 = unaff_RSI;
      if (uVar9 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d50b20();
  }
  return;
}




// ============================================================
// @016b9ed0 — 597 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""audioSource->getDocumentController() == documentController""
// str: ""MUAraContentReader::isEventTypeSupported((GNInt)contentType)""
// ============================================================

byte FUN_016b9ed0(pthread_key_t param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong local_48;
  char local_40;
  
  FUN_00da7190();
  if ((unaff_RDI == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    bVar2 = 0;
    if ((DAT_02802f60 != (undefined8 *)0x0) && (bVar2 = 0, (code *)*DAT_02802f60 != (code *)0x0)) {
      (*(code *)*DAT_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      bVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
        bVar2 = 0;
      }
    }
    else if ((unaff_RSI == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      bVar2 = 0;
      if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
        (*(code *)*DAT_02802f60)();
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01660830();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 == unaff_RDI) {
        cVar1 = FUN_0172c0d0();
        if (cVar1 == '\0') {
          bVar2 = 0;
          if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
            (*(code *)*DAT_02802f60)();
            bVar2 = 0;
          }
        }
        else {
          FUN_016acc10();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar1 = FUN_01667e90();
          bVar2 = 1;
          if (cVar1 == '\0') {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            bVar2 = FUN_01667df0();
            bVar2 = bVar2 ^ 1;
          }
        }
      }
      else {
        bVar2 = 0;
        if ((DAT_02802f60 != (undefined8 *)0x0) && ((code *)*DAT_02802f60 != (code *)0x0)) {
          (*(code *)*DAT_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return bVar2;
}




// ============================================================
// @016be890 — 568 bytes
// ============================================================

void FUN_016be890(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *unaff_RDI;
  
  FUN_00d4ff40();
  *unaff_RDI = &DAT_025f89b0;
  unaff_RDI[2] = &DAT_025f8d70;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  iVar2 = DAT_02802630;
  if (DAT_02802630 < 2) {
    unaff_RDI[10] = 0;
    unaff_RDI[0xb] = 0;
LAB_016bea35:
    unaff_RDI[0xc] = 0;
    unaff_RDI[0xd] = 0;
  }
  else {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    pcVar1 = DAT_02572370;
    (*DAT_02572370)();
    unaff_RDI[9] = puVar3;
    iVar2 = DAT_02802630;
    unaff_RDI[10] = 0;
    if (iVar2 < 2) {
      unaff_RDI[0xb] = 0;
      unaff_RDI[0xc] = 0;
    }
    else {
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[10] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0xb] = 0;
      if (iVar2 < 2) goto LAB_016bea35;
      puVar3 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &DAT_02572358;
      (*pcVar1)();
      unaff_RDI[0xb] = puVar3;
      iVar2 = DAT_02802630;
      unaff_RDI[0xc] = 0;
      if (1 < iVar2) {
        puVar3 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &DAT_02572358;
        (*pcVar1)();
        unaff_RDI[0xc] = puVar3;
        iVar2 = DAT_02802630;
        unaff_RDI[0xd] = 0;
        if (1 < iVar2) {
          puVar3 = (undefined8 *)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &DAT_02572358;
          (*DAT_02572370)();
          unaff_RDI[0xd] = puVar3;
          iVar2 = DAT_02802630;
        }
        goto LAB_016bea6f;
      }
    }
    unaff_RDI[0xd] = 0;
  }
LAB_016bea6f:
  unaff_RDI[0xf] = 0;
  *(undefined4 *)(unaff_RDI + 0xe) = 0;
  *(undefined4 *)((longlong)unaff_RDI + 0x73) = 0;
  if (1 < iVar2) {
    puVar3 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &DAT_02572358;
    (*DAT_02572370)();
    unaff_RDI[0xf] = puVar3;
  }
  return;
}




// ============================================================
// @016be130 — 536 bytes
// str: ""provided object ref is invalid""
// str: ""call required from document main thread""
// str: ""contentTypes != NULL""
// str: ""MUAraContentReader::isEventTypeSupported((GNInt)contentTypes[i])""
// str: ""contentTypes == NULL""
// ============================================================

char FUN_016be130(longlong param_1,longlong param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  longlong lVar3;
  int unaff_ESI;
  longlong unaff_RDI;
  
  if ((unaff_RDI == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if (DAT_02802f60 == (undefined8 *)0x0) {
      return '\0';
    }
    pcVar1 = (code *)*DAT_02802f60;
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (DAT_02802f60 == (undefined8 *)0x0) {
        return '\0';
      }
      pcVar1 = (code *)*DAT_02802f60;
    }
    else {
      if (param_2 == 0) {
        if (param_1 != 0) {
          if (DAT_02802f60 == (undefined8 *)0x0) {
            return '\0';
          }
          pcVar1 = (code *)*DAT_02802f60;
          goto joined_r0x016be1b8;
        }
      }
      else {
        if (param_1 == 0) {
          if (DAT_02802f60 == (undefined8 *)0x0) {
            return '\0';
          }
          pcVar1 = (code *)*DAT_02802f60;
          goto joined_r0x016be1b8;
        }
        lVar3 = 0;
        do {
          cVar2 = FUN_0172c0d0();
          if (cVar2 == '\0') {
            if (DAT_02802f60 == (undefined8 *)0x0) {
              return '\0';
            }
            pcVar1 = (code *)*DAT_02802f60;
            goto joined_r0x016be1b8;
          }
          lVar3 = lVar3 + 1;
        } while (param_2 != lVar3);
      }
      FUN_016ace20();
      if ((~DAT_028ad950 & param_3) == 0) {
        if ((param_2 != 0) || (param_3 != 0)) {
          if (DAT_02802f58 == '\0') {
            if (DAT_027cb0f4 != '\0') {
              return '\x01';
            }
            if (unaff_ESI != 0) {
              if (DAT_02802f50 == (code *)0x0) {
                return '\0';
              }
              DAT_02802f58 = 1;
              (*DAT_02802f50)();
              DAT_02802f58 = 0;
              return DAT_027cb0f4;
            }
          }
          return '\0';
        }
        if (DAT_02802f60 == (undefined8 *)0x0) {
          return '\0';
        }
        pcVar1 = (code *)*DAT_02802f60;
      }
      else {
        if (DAT_02802f60 == (undefined8 *)0x0) {
          return '\0';
        }
        pcVar1 = (code *)*DAT_02802f60;
      }
    }
  }
joined_r0x016be1b8:
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)();
  }
  return '\0';
}



