// Function: FUN_016c4850
// Address: 016c4850
// Size: 15112 bytes
// Class: MUAraContentReader


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


