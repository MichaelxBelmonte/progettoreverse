// ===================================================================
// MUAraContentReader — Complete reconstructed pseudocode
// 22 functions
// ===================================================================

// Registered properties (12):
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


// ============================================================
// 016c4850
// ============================================================
// Function: FUN_016c4850
// Address: 016c4850
// Size: 15112 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016c4850(int64_t *param_1,int64_t *param_2,int64_t *param_3,uint32_t param_4)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  uint32_t uVar6;
  uint uVar7;
  void *pvVar8;
  void*puVar9;
  void*puVar10;
  uint64_t uVar11;
  char *pcVar12;
  int64_t lVar13;
  int64_t lVar14;
  code *pcVar15;
  uint64_t uVar16;
  void* pVar17;
  int iVar18;
  void*puVar19;
  void*puVar20;
  uint64_t *puVar21;
  code *pcVar22;
  int iVar23;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar24;
  code *pcVar25;
  uint64_t uVar26;
  char *pcVar27;
  code *pcVar28;
  bool bVar29;
  uint64_t extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar30;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  double dVar31;
  char local_res8;
  char local_res10;
  uint8_t local_390 [8];
  int64_t local_388;
  uint8_t local_380;
  int64_t local_378;
  uint8_t local_370;
  int64_t local_368;
  uint8_t local_360;
  void*local_358;
  uint8_t local_350;
  int64_t local_348;
  char local_340;
  code *local_338;
  uint8_t local_330;
  code *local_328;
  uint8_t local_320;
  code *local_318;
  uint8_t local_310;
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
  uint64_t local_1c8;
  code *local_1c0;
  char local_1b8;
  code *local_1b0;
  code *local_1a8;
  uint32_t local_19c;
  code *local_198;
  char local_190;
  code *local_188;
  char local_180;
  code *local_178;
  char local_170;
  uint64_t local_168;
  code *local_160;
  code *local_158;
  uint8_t local_150 [4];
  int local_14c;
  uint64_t local_148;
  uint32_t local_13c;
  uint32_t local_138;
  uint32_t local_134;
  code *local_130;
  code *local_128;
  double local_120;
  int64_t *local_118;
  uint32_t local_10c;
  uint64_t local_108;
  uint64_t local_100;
  uint32_t local_f4;
  uint32_t local_f0;
  int iStack_ec;
  uint64_t local_e8;
  code *local_e0;
  uint64_t local_d8;
  uint32_t local_cc;
  uint64_t local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  code *local_b0;
  uint64_t local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  int iStack_94;
  uint64_t local_90;
  char local_88;
  code *local_80;
  code *local_78;
  code *local_68;
  code *local_60;
  char local_58 [8];
  code *local_50;
  uint64_t local_48;
  int local_40;
  
  cVar3 = (char)param_1;
  local_388 = *param_2;
  local_380 = 0;
  local_118 = param_3;
  local_cc = param_4;
  cVar2 = FUN_016bf700();
  pVar17 = (void*)param_1;
  if (cVar2 == '\0') {
    return;
  }
  if (cVar3 == '\0') {
    local_378 = *arg1;
    local_370 = 0;
    FUN_016cbba0();
    pVar17 = (void*)param_1;
    lVar14 = *arg1;
    if (lVar14 == local_60) {
      if (((char)arg1[1] != '\0') || (local_60 == 0x0)) {
        if ((local_58[0] != '\0') && (local_60 != 0x0)) {
          FUN_00d50b20();
        }
        goto LAB_016c4970;
      }
      param_1 = arg1;
      if (local_58[0] == '\0') {
        FUN_00d50b00();
      }
    }
    else {
      lVar13 = arg1[1];
      if (local_58[0] == '\0') {
        if (local_60 != 0x0) {
          FUN_00d50b00();
        }
        *arg1 = (int64_t)local_60;
        if (((char)lVar13 != '\0') && (lVar14 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *arg1 = (int64_t)local_60;
        if ((char)lVar13 == '\0') {
          *(void*)(arg1 + 1) = 1;
          goto LAB_016c4970;
        }
        if (lVar14 != 0) {
          FUN_00d50b20();
        }
      }
    }
    pVar17 = (void*)param_1;
    *(void*)(arg1 + 1) = 1;
  }
LAB_016c4970:
  if ((*(int *)(*param_2 + 0x10) == 0) && (*(int *)(*param_2 + 0x18) == 0)) {
    lVar14 = *local_118;
    uVar26 = *(uint64_t *)(lVar14 + 0x14);
    pVar17 = (void*)(uVar26 >> 0x20);
    if (*(uint64_t *)(lVar14 + 0xc) >> 0x20 == 0) {
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
      if (*(uint64_t *)(lVar14 + 0xc) >> 0x20 == 0) goto LAB_016c49e3;
LAB_016c5d87:
      FUN_016c46a0(0,0);
LAB_016c5d9a:
      local_368 = *arg1;
      local_360 = 0;
      FUN_016f1400();
      lVar14 = *local_118;
      uVar11 = FUN_00e7bdb0();
      *(void*)(lVar14 + 0x14) = uVar11;
      *(void*)(lVar14 + 0xc) = uVar11;
      return;
    }
  }
  pvVar8 = _pthread_getspecific(pVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_c8 = *(code **)(*param_2 + 0xc);
  if ((uint64_t)local_c8 >> 0x20 != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_c8 = FUN_0165d690();
  }
  pvVar8 = _pthread_getspecific(pVar17);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_a8 = *(code **)(*param_2 + 0x14);
  if ((uint64_t)local_a8 >> 0x20 != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = FUN_0165d690();
  }
  local_a0 = *(code **)(*local_118 + 0xc);
  if ((uint64_t)local_a0 >> 0x20 != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a0 = FUN_0165d690();
  }
  local_b8 = local_a0;
  if (((char)local_cc == '\0') &&
     (local_b8 = *(code **)(*local_118 + 0x14),
     (uint64_t)*(code **)(*local_118 + 0x14) >> 0x20 != 0)) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_b8 = FUN_0165d690();
  }
  local_60 = local_a0;
  FUN_00e7b970();
  pcVar25 = local_a8;
  uVar7 = (uint)((uint64_t)local_a8 >> 0x20);
  local_160 = local_60;
  if ((uint64_t)local_a8 >> 0x20 == 0) {
    local_d8 = FUN_00e7bdb0();
    if ((char)local_cc != '\0') goto LAB_016c4cf6;
LAB_016c4d45:
    pcVar25 = local_b8;
    uVar7 = (uint)((uint64_t)local_b8 >> 0x20);
    if ((uint64_t)local_b8 >> 0x20 == 0) {
LAB_016c4d95:
      local_90 = FUN_00e7bdb0();
    }
    else {
      FUN_00e7b970();
      local_90 = pcVar25;
      local_60 = ((uint64_t)pcVar25 & 0xffffffff00000000);
      if (((uint64_t)pcVar25 >> 0x20 != 0) && (cVar3 = FUN_00e7c630(), cVar3 != '\0'))
      goto LAB_016c4d95;
    }
    pcVar25 = local_60;
    if (local_d8._4_4_ == 0) {
      local_158 = local_b8;
      if ((uint64_t)local_90 >> 0x20 != 0) {
LAB_016c4e29:
        pcVar25 = local_c8;
        FUN_00e7b820();
        local_158 = local_b8;
        local_a8 = pcVar25;
      }
    }
    else {
      if ((uint64_t)local_90 >> 0x20 != 0) {
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
    local_60 = ((uint64_t)pcVar25 & 0xffffffff00000000);
    if (((uint64_t)pcVar25 >> 0x20 != 0) && (cVar3 = FUN_00e7c630(), cVar3 != '\0')) {
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
    if ((local_58[0] == '\0') && (pcVar25 != 0x0)) {
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
    if ((local_2d0 != '\0') && (local_2d8 != 0x0)) {
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
        if (pcVar25 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_180 = '\x01';
      local_188 = pcVar25;
      local_2e8 = (double)FUN_018fde50();
      if ((local_180 != '\0') && (local_188 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (pcVar25 != 0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      pvVar8 = _pthread_getspecific(uVar7);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_016da710();
      if ((local_58[0] == '\0') && (pcVar25 != 0x0)) {
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
        if (pcVar25 != 0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_58[0] = '\0';
      }
      local_190 = '\x01';
      local_198 = pcVar25;
      local_2e8 = (double)FUN_018fde50();
      if ((local_190 != '\0') && (local_198 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (pcVar25 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_2c0 != '\0') && (local_2c8 != 0x0)) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
    }
    pvVar8 = _pthread_getspecific(uVar7);
    pVar17 = (int)this_ptr + 0x50;
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_80 = FUN_018fcb10();
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_78 = FUN_018fcb10();
    pcVar15 = FUN_00e8fc40();
    FUN_00d4ff40();
    pVar17 = 0x2572358;
    *(void**)pcVar15 = &g_02572358;
    (*g_02572370)();
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
      if (pcVar25 != 0x0) {
        FUN_00d50b00();
        if ((local_58[0] != '\0') && (pcVar25 != 0x0)) {
          FUN_00d50b20();
        }
        goto LAB_016c553d;
      }
    }
    else if (pcVar25 != 0x0) {
LAB_016c553d:
      local_80 = ((double)local_80 - (double)local_78);
      local_58[0] = '\0';
      local_60 = 0x0;
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
        lVar14 = (int64_t)(int)local_48;
        iVar24 = (int)local_48 + 1;
        local_48 = CONCAT44(local_48._4_4_,iVar24);
        pcVar25 = local_50;
        if (*(int *)(local_50 + 0xc) <= iVar24) break;
        pcVar25 = *(code **)(local_50 + 0x10);
        local_60 = *(code **)(pcVar25 + lVar14 * 8 + 8);
        if (local_a8._4_4_ != 0) {
          pvVar8 = _pthread_getspecific((void*)pcVar25);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = FUN_019079b0();
          if ((((uint64_t)local_90 >> 0x20 != 0) && (local_a8._4_4_ != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 != '\0')) break;
        }
        pVar17 = (void*)pcVar25;
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_90 = FUN_019079b0();
        if ((((uint64_t)local_90 >> 0x20 != 0) && (local_c8._4_4_ != 0)) &&
           (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          pvVar8 = _pthread_getspecific(pVar17);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = FUN_019079b0();
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
          if ((local_88 != '\0') && (local_90 != 0x0)) {
            FUN_00d50b20();
          }
        }
      }
      pVar17 = (void*)pcVar25;
      FUN_000beb10();
      FUN_00d50b20();
    }
    lVar14 = *arg1;
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      lVar14 = *arg1;
      lVar13 = FUN_00e8b990();
      if (lVar13 != 0) {
        lVar14 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8);
      }
    }
    pcVar25 = *(code **)(lVar14 + 0x70);
    local_80 = pcVar25;
    if (pcVar25 == 0x0) {
LAB_016c59e9:
      local_168 = 0;
      puVar9 = (void*)0x0;
    }
    else {
      FUN_00d50b00();
      uVar7 = *(uint *)(pcVar25 + 0x18);
      if ((int)uVar7 < 8) goto LAB_016c59e9;
      local_128 = g_025683d8;
      uVar26 = 0;
      local_78 = &g_025683c0;
      puVar9 = (void*)0x0;
      local_168 = 0;
      do {
        local_90 = *(code **)(*(int64_t *)(local_80 + 0x10) + uVar26 * 8);
        pVar17 = (void*)((uint64_t)local_90 >> 0x20);
        if ((local_a8._4_4_ != 0) && (pVar17 != 0)) {
          cVar3 = FUN_00e7c020();
          if (cVar3 == '\0') break;
          pVar17 = (void*)((uint64_t)local_90 >> 0x20);
        }
        if (((pVar17 != 0) && (local_c8._4_4_ != 0)) && (cVar3 = FUN_00e7c020(), cVar3 == '\0')) {
          if (puVar9 == (void*)0x0) {
            puVar9 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar9 = local_78;
            (*local_128)();
            FUN_00c92170();
            uVar11 = FUN_00c92160();
            local_168 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
          }
          pcVar25 = local_90;
          local_60 = local_90;
          uVar11 = FUN_00e7b820();
          iVar24 = *(int *)(puVar9 + 3);
          FUN_00c8e340(uVar11,1);
          *(code **)(puVar9[2] + (int64_t)iVar24) = pcVar25;
        }
        uVar26 = uVar26 + 1;
      } while (uVar7 >> 3 != uVar26);
    }
    pcVar25 = local_1a8;
    if ((char)local_cc == '\0') {
      lVar14 = *local_118;
      puVar10 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar10 = &g_025fa538;
      uVar11 = _UNK_02393728;
      *(void*)((int64_t)puVar10 + 0xc) = g_02393720;
      *(void*)((int64_t)puVar10 + 0x14) = uVar11;
      FUN_00d500e0();
      uVar11 = *(void*)(lVar14 + 0x14);
      *(void*)((int64_t)puVar10 + 0xc) = *(void*)(lVar14 + 0xc);
      *(void*)((int64_t)puVar10 + 0x14) = uVar11;
      pcVar15 = local_b8;
      if ((uint64_t)local_b8 >> 0x20 != 0) {
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar17 = 0;
        local_60 = FUN_0165cf20(0,0);
        FUN_00e7c860();
        pcVar15 = FUN_00e7cc50();
      }
      *(code **)((int64_t)puVar10 + 0x14) = pcVar15;
      local_350 = 0;
      local_358 = puVar10;
      FUN_016d4110();
      FUN_00d50b20();
    }
    local_100 = *(void*)(this_ptr + 0x68);
    local_90 = local_a0;
    uVar11 = FUN_00e7b970();
    FUN_016da710(uVar11,local_90);
    if ((local_58[0] == '\0') && (local_60 != 0x0)) {
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
    if ((local_2b0 != '\0') && (local_2b8 != 0x0)) {
      FUN_00d50b20();
    }
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_2a8 = local_128;
    local_2a0 = '\0';
    pcVar15 = 0x0;
    uVar11 = FUN_01900ec0(0,&local_2a8);
    local_78 = local_60;
    if (local_58[0] == '\0') {
      if (((local_60 != 0x0) && (uVar11 = FUN_00d50b00(), local_58[0] != '\0')) &&
         (local_60 != 0x0)) {
        uVar11 = FUN_00d50b20();
      }
    }
    else {
      local_58[0] = '\0';
    }
    if ((local_2a0 != '\0') && (local_2a8 != 0x0)) {
      uVar11 = FUN_00d50b20();
    }
    if (local_78 == 0x0) {
LAB_016c5d25:
      FUN_016da710(uVar11,local_a0);
      if (local_78 == local_60) {
        if ((local_58[0] != '\0') && (local_60 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else if (local_58[0] == '\0') {
        if (local_60 != 0x0) {
          FUN_00d50b00();
        }
        if (local_78 == 0x0) goto LAB_016c5e0a;
        local_78 = local_60;
        FUN_00d50b20();
      }
      else if (local_78 == 0x0) {
LAB_016c5e0a:
        local_78 = local_60;
      }
      else {
        FUN_00d50b20();
        local_78 = local_60;
      }
LAB_016c5e0e:
      pcVar15 = 0x0;
      if ((uint64_t)local_b8 >> 0x20 == 0) goto LAB_016c5e94;
      local_100 = *(void*)(this_ptr + 0x68);
      local_90 = local_b8;
      uVar11 = FUN_00e7b820();
      FUN_016da710(uVar11,local_90);
      local_e0 = local_60;
      pcVar15 = local_60;
      if (local_60 == 0x0) {
        local_e0 = 0x0;
        local_f4 = 0;
      }
      else {
        local_f4 = (uint32_t)CONCAT71((int7)((uint64_t)local_60 >> 8),1);
        if (local_58[0] == '\0') {
          FUN_00d50b00();
        }
      }
      pvVar8 = _pthread_getspecific((void*)pcVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01901340();
      if ((local_58[0] != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      pcVar22 = local_b8;
      if (local_60 == local_e0) {
        local_90 = CONCAT44(local_90._4_4_,1);
        local_60 = local_b8;
        uVar11 = FUN_00e7c260();
        FUN_016da710(uVar11,pcVar22);
        if ((local_340 != '\0') && (local_348 != 0)) {
          FUN_00d50b20();
        }
      }
      if (local_e0 == 0x0) goto LAB_016c5e9e;
      pvVar8 = _pthread_getspecific((void*)pcVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_298 = local_e0;
      local_290 = '\0';
      pcVar15 = 0x0;
      FUN_01900ad0(0,&local_298);
      if (local_58[0] == '\0') {
        if (((local_60 != 0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
           (local_60 != 0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_58[0] = '\0';
      }
      if ((local_290 != '\0') && (local_298 != 0x0)) {
        FUN_00d50b20();
      }
      local_288 = local_60;
      local_280 = '\0';
      local_278 = local_e0;
      local_270 = '\0';
      local_2e0 = (double)FUN_019079d0();
      if ((local_270 != '\0') && (local_278 != 0x0)) {
        FUN_00d50b20();
      }
      if ((local_280 != '\0') && (local_288 != 0x0)) {
        FUN_00d50b20();
      }
      if (local_60 != 0x0) {
        FUN_00d50b20();
      }
      pVar17 = (void*)pcVar15;
      local_134 = 0;
      if ((char)local_cc != '\0') goto LAB_016c5fcb;
LAB_016c6332:
      local_120 = 0.0;
      if (local_b8._4_4_ != 0) {
        FUN_00d23340();
        pVar17 = (void*)CONCAT71((int7)((uint64_t)pcVar15 >> 8),local_58[0]);
        pcVar12 = local_58;
        if (local_58[0] == '\0') {
          pcVar12 = (char *)&local_90;
        }
        local_90 = CONCAT71(local_90._1_7_,local_58[0]);
        *pcVar12 = '\0';
        if ((local_58[0] != '\0') && (local_60 != 0x0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_120 = (double)FUN_01907950();
        if (((char)local_90 != '\0') && (local_60 != 0x0)) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar30 = (double)FUN_018fcb10();
        local_120 = local_120 - dVar30;
      }
      pcVar15 = FUN_00e7bdb0();
    }
    else {
      if (local_b8._4_4_ != 0) {
        pvVar8 = _pthread_getspecific((void*)pcVar15);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = FUN_019079b0();
        if ((((uint64_t)local_60 >> 0x20 != 0) && (local_b8._4_4_ != 0)) &&
           (cVar3 = FUN_00e7c020(), uVar11 = extraout_XMM0_Qa, cVar3 == '\0')) goto LAB_016c5d25;
        goto LAB_016c5e0e;
      }
LAB_016c5e94:
      local_f4 = 0;
LAB_016c5e9e:
      pvVar8 = _pthread_getspecific((void*)pcVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific((void*)pcVar15);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar11 = FUN_01901340();
      local_170 = 0;
      if (local_58[0] == '\0') {
        if (local_60 != 0x0) {
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
      if ((local_170 != '\0') && (local_178 != 0x0)) {
        uVar11 = FUN_00d50b20();
      }
      if ((local_58[0] != '\0') && (local_60 != 0x0)) {
        uVar11 = FUN_00d50b20();
      }
      pVar17 = (void*)pcVar15;
      local_134 = (uint32_t)CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
      local_e0 = 0x0;
      if ((char)local_cc == '\0') goto LAB_016c6332;
LAB_016c5fcb:
      FUN_00d23340();
      pcVar12 = (char *)&local_90;
      if (local_58[0] != '\0') {
        pcVar12 = local_58;
      }
      local_90 = CONCAT71(local_90._1_7_,local_58[0]);
      *pcVar12 = '\0';
      if ((local_58[0] != '\0') && (local_60 != 0x0)) {
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
      if ((local_58[0] != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      pcVar25 = local_1a8;
      pvVar8 = _pthread_getspecific((void*)pcVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_2f0 = (double)FUN_01907950();
      if (((char)local_100 != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_90 != '\0') && (local_60 != 0x0)) {
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
    if (puVar9 != (void*)0x0) {
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
    if (g_023b36d8 < dVar30 / dVar31) {
      uVar7 = *(uint *)(*(int64_t *)(this_ptr + 0x70) + 0x18);
      uVar26 = (uint64_t)uVar7;
      uVar1 = uVar7 + 7;
      if (-1 < (int)uVar7) {
        uVar1 = uVar7;
      }
      if (7 < (int)uVar7) {
        iVar24 = (int)uVar1 >> 3;
        lVar14 = *(int64_t *)(*(int64_t *)(this_ptr + 0x70) + 0x10);
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
    uVar26 = (uint64_t)local_158 >> 0x20;
    if (uVar26 != 0) {
      dVar30 = local_2e0;
      if (local_2e0 <= local_2e8) {
        dVar30 = local_2e8;
      }
      dVar31 = local_2e0;
      if (local_2e8 <= local_2e0) {
        dVar31 = local_2e8;
      }
      if (g_023b36d8 < dVar30 / dVar31) {
        lVar14 = *(int64_t *)(this_ptr + 0x70);
        iVar24 = *(int *)(lVar14 + 0x18);
        iVar23 = iVar24 + 7;
        if (-1 < iVar24) {
          iVar23 = iVar24;
        }
        if (7 < iVar24) {
          iVar23 = iVar23 >> 3;
          iVar24 = *(int *)(*(int64_t *)(lVar14 + 0x10) + 4);
          lVar13 = *(int64_t *)(lVar14 + 0x10);
          while( true ) {
            iVar23 = iVar23 + -1;
            if ((iVar24 != 0) && ((int)uVar26 != 0)) {
              cVar3 = FUN_00e7c000();
              uVar7 = (uint)lVar14;
              if (cVar3 != '\0') goto LAB_016c667c;
            }
            if (iVar23 == 0) break;
            uVar26 = (uint64_t)local_158 >> 0x20;
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
    if (local_78 != 0x0) {
      FUN_00d50b20();
    }
    if (local_128 != 0x0) {
      FUN_00d50b20();
    }
    if (local_80 != 0x0) {
      FUN_00d50b20();
    }
    if (((char)local_168 != '\0') && (puVar9 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (local_b0 != 0x0) {
      FUN_00d50b20();
    }
    if (pcVar25 != 0x0) {
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
  if ((((local_58[0] == '\0') && (local_60 != 0x0)) && (FUN_00d50b00(), local_58[0] != '\0')
      ) && (local_60 != 0x0)) {
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
  pvVar8 = _pthread_getspecific((void*)puVar19);
  if (pvVar8 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar20 = local_150;
  FUN_0165c0f0(puVar20,pcVar25,&local_1c8,&local_10c);
  uVar7 = (uint)puVar20;
  local_80 = local_60;
  if (((local_58[0] == '\0') && (local_60 != 0x0)) &&
     ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != 0x0)))) {
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
    local_60 = FUN_0165be20();
    if (((local_14c == 0) || ((uint64_t)local_60 >> 0x20 == 0)) ||
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
          bVar29 = local_80 != 0x0;
          local_80 = local_60;
          if (bVar29) {
            FUN_00d50b20();
          }
          goto LAB_016c736a;
        }
        if (local_60 != 0x0) {
          FUN_00d50b00();
        }
        bVar29 = local_80 != 0x0;
        local_80 = local_60;
        if (bVar29) {
          FUN_00d50b20();
        }
      }
      if ((local_58[0] != '\0') && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
    }
LAB_016c736a:
    local_108 = FUN_00e7bdb0();
  }
  local_268 = local_80;
  local_260 = '\0';
  bVar4 = (**(code **)(*(int64_t *)local_b0 + 0x50))();
  if ((local_260 != '\0') && (local_268 != 0x0)) {
    FUN_00d50b20();
  }
  if (local_a8._4_4_ == 0) {
    bVar5 = (uint64_t)local_90 >> 0x20 == 0;
LAB_016c6b78:
    bVar5 = bVar5 & bVar4;
  }
  else {
    bVar5 = bVar4;
    if ((uint64_t)local_90 >> 0x20 != 0) {
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
        local_60 = ((uint64_t)local_60 & 0xffffffff00000000);
        if ((local_108._4_4_ == 0) || (cVar3 = FUN_00e7c630(), cVar3 == '\0')) {
          pcVar25 = local_130;
          FUN_00e7b970();
          uVar6 = FUN_0123ff00();
          FUN_0123fc50(extraout_XMM0_Qa_01,uVar6);
          if (((local_58[0] == '\0') &&
              ((local_60 != 0x0 && (FUN_00d50b00(), local_58[0] != '\0')))) &&
             (local_60 != 0x0)) {
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
          if ((local_240 != '\0') && (local_248 != 0x0)) {
            FUN_00d50b20();
          }
          if (local_60 != 0x0) {
            FUN_00d50b20();
          }
        }
      }
      else {
        FUN_00e7b970();
        local_c0 = pcVar25;
        local_60 = (((uint64_t)pcVar25 >> 0x20) << 0x20);
        if ((uint64_t)pcVar25 >> 0x20 == 0) {
LAB_016c6c90:
          FUN_00e7b970();
        }
        else {
          cVar3 = FUN_00e7c630();
          if (cVar3 != '\0') goto LAB_016c6f12;
          if ((local_c0._4_4_ == 0) || (cVar3 = FUN_00e7c6b0(), cVar3 != '\0')) goto LAB_016c6c90;
          FUN_00e7b970();
        }
        local_60 = (((uint64_t)pcVar25 >> 0x20) << 0x20);
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
        if ((local_250 != '\0') && (local_258 != 0x0)) {
          FUN_00d50b20();
        }
      }
LAB_016c6f12:
      local_c0 = local_a8;
      if ((uint64_t)local_a8 >> 0x20 != 0) {
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
        if ((((local_58[0] == '\0') && (local_60 != 0x0)) &&
            (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0x0)) {
          FUN_00d50b20();
        }
        local_68 = local_60;
        if (((iStack_94 == 0) || (local_a8._4_4_ == 0)) || (cVar3 = FUN_00e7c000(), cVar3 == '\0'))
        {
          lVar14 = *arg1;
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            lVar14 = *arg1;
            lVar13 = FUN_00e8b990();
            if (lVar13 != 0) {
              lVar14 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8)
              ;
            }
          }
          pcVar25 = *(code **)(lVar14 + 0x58);
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            pcVar25 = *(code **)(lVar14 + 0x58);
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pcVar25 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
            }
          }
          puVar19 = &local_138;
          FUN_0165db00(puVar19,&local_e8);
          uVar7 = (uint)puVar19;
          if ((char)local_cc == '\0') goto LAB_016c73ed;
LAB_016c719e:
          local_19c = local_10c;
          if (local_80 == 0x0) {
            uVar26 = 0;
          }
          else {
            uVar26 = CONCAT71((int7)((uint64_t)pcVar25 >> 8),1);
            local_78 = 0x0;
            FUN_00d50b00();
          }
          local_148 = local_108;
          local_78 = (uVar26 & 0xffffffff);
          pcVar25 = local_80;
        }
        else {
          lVar14 = *arg1;
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            lVar14 = *arg1;
            lVar13 = FUN_00e8b990();
            if (lVar13 != 0) {
              lVar14 = *(int64_t *)(lVar14 + 0x20 + (uint64_t)(*(uint *)(lVar13 + 0x154) & 1) * 8)
              ;
            }
          }
          pcVar25 = *(code **)(lVar14 + 0x58);
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            pcVar25 = *(code **)(lVar14 + 0x58);
            lVar14 = FUN_00e8b990();
            if (lVar14 != 0) {
              pcVar25 = *(code **)(pcVar25 + (uint64_t)(*(uint *)(lVar14 + 0x154) & 1) * 8 + 0x20);
            }
          }
          pcVar15 = FUN_0165be20();
          if (((iStack_94 == 0) || ((uint64_t)pcVar15 >> 0x20 == 0)) ||
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
                bVar29 = local_60 != 0x0;
                local_60 = pcVar15;
                if (bVar29) {
                  FUN_00d50b20();
                }
                goto LAB_016c73bd;
              }
              if (pcVar15 != 0x0) {
                FUN_00d50b00();
              }
              pcVar22 = pcVar15;
              if (local_60 != 0x0) {
                FUN_00d50b20();
              }
            }
            local_60 = pcVar22;
            if ((local_58[0] != '\0') && (pcVar15 != 0x0)) {
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
          pVar17 = (void*)puVar20;
          if (local_60 == 0x0) {
            local_78 = 0x0;
            pcVar25 = 0x0;
          }
          else {
            local_78 = CONCAT71((int7)((uint64_t)uVar11 >> 8),1);
            pcVar25 = local_60;
            if (((local_58[0] == '\0') && (FUN_00d50b00(), local_58[0] != '\0')) &&
               (local_60 != 0x0)) {
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
        cVar3 = (**(code **)(*(int64_t *)local_68 + 0x50))();
        if (cVar3 == '\0') {
          if ((local_1b8 != '\0') && (local_1c0 != 0x0)) {
            FUN_00d50b20();
          }
LAB_016c769b:
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_016f1d60();
          local_60 = ((uint64_t)local_60 & 0xffffffff00000000);
          if ((local_148._4_4_ == 0) || (cVar3 = FUN_00e7c630(), cVar3 == '\0')) {
            local_60 = FUN_0123fff0();
            FUN_00e7b970();
            pcVar15 = local_c0;
            local_1b0 = local_60;
            FUN_00e7b820();
            uVar6 = FUN_0123ff00();
            FUN_0123fc50(extraout_XMM0_Qa_02,uVar6);
            if ((local_58[0] == '\0') &&
               (((local_60 != 0x0 && (FUN_00d50b00(), local_58[0] != '\0')) &&
                (local_60 != 0x0)))) {
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
            if ((local_210 != '\0') && (local_218 != 0x0)) {
              FUN_00d50b20();
            }
            if (local_60 != 0x0) {
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
          if ((local_1b8 != '\0') && (local_1c0 != 0x0)) {
            FUN_00d50b20();
          }
          if (cVar3 == '\0') goto LAB_016c769b;
          uVar7 = (uint)((uint64_t)local_308 >> 0x20);
          if ((uint64_t)local_308 >> 0x20 == 0) {
            local_c0 = FUN_00e7bdb0();
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
              if ((local_220 != '\0') && (local_228 != 0x0)) {
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
            if ((local_230 != '\0') && (local_238 != 0x0)) {
              FUN_00d50b20();
            }
          }
        }
        if (((char)local_78 != '\0') && (pcVar25 != 0x0)) {
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
      if ((((local_58[0] == '\0') && (local_60 != 0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0x0)) {
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
        pVar17 = (void*)puVar19;
        if (((local_58[0] == '\0') && (local_60 != 0x0)) &&
           ((FUN_00d50b00(), local_58[0] != '\0' && (local_60 != 0x0)))) {
          FUN_00d50b20();
        }
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_208 = local_60;
        local_200 = '\0';
        pcVar22 = CONCAT44(iStack_94,local_98);
        FUN_00e7b820();
        pcVar15 = CONCAT44(iStack_ec,local_f0);
        FUN_0165b1b0(pcVar15,pcVar22,0);
        if ((local_200 != '\0') && (local_208 != 0x0)) {
          FUN_00d50b20();
        }
        pcVar28 = local_60;
        local_60 = pcVar22;
        while( true ) {
          pvVar8 = _pthread_getspecific((void*)pcVar15);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          puVar19 = &local_f0;
          FUN_0165c650(puVar19,&local_98,&local_e8);
          uVar7 = (uint)puVar19;
          if (local_60 != pcVar28) {
            if (local_58[0] == '\0') {
              if (local_60 != 0x0) {
                FUN_00d50b00();
              }
              bVar29 = pcVar28 != 0x0;
              pcVar28 = local_60;
              if (bVar29) {
                FUN_00d50b20();
              }
            }
            else {
              if (pcVar28 != 0x0) {
                FUN_00d50b20();
              }
              local_58[0] = '\0';
              pcVar28 = local_60;
            }
          }
          if (pcVar28 == 0x0) {
            if ((local_58[0] != '\0') && (local_60 != 0x0)) {
              FUN_00d50b20();
            }
            goto LAB_016c7c4d;
          }
          bVar4 = 0;
          if ((iStack_94 != 0) &&
             (local_a0._4_4_ = (int)((uint64_t)local_a0 >> 0x20), bVar29 = local_a0._4_4_ != 0,
             bVar4 = 0, bVar29)) {
            bVar4 = FUN_00e7c020();
            bVar4 = bVar4 ^ 1;
          }
          if ((local_58[0] != '\0') && (local_60 != 0x0)) {
            FUN_00d50b20();
          }
          if (bVar4 == 0) break;
          pvVar8 = _pthread_getspecific(uVar7);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_1f0 = '\0';
          pcVar22 = CONCAT44(iStack_94,local_98);
          local_1f8 = pcVar28;
          FUN_00e7b820();
          pcVar15 = CONCAT44(iStack_ec,local_f0);
          local_60 = pcVar22;
          if (iStack_ec != 0) {
            FUN_00e7b820();
            local_60 = pcVar15;
          }
          FUN_0165b1b0(pcVar15,pcVar22,0);
          if ((local_1f0 != '\0') && (local_1f8 != 0x0)) {
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
      if ((((local_58[0] == '\0') && (local_60 != 0x0)) &&
          (FUN_00d50b00(), local_58[0] != '\0')) && (local_60 != 0x0)) {
        FUN_00d50b20();
      }
      pvVar8 = _pthread_getspecific((void*)puVar19);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar8 = _pthread_getspecific((void*)puVar19);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_0165e830();
      while ((pVar17 = (void*)puVar19, iStack_ec != 0 &&
             ((local_c0._4_4_ == 0 || (cVar3 = FUN_00e7c020(), cVar3 != '\0'))))) {
        pvVar8 = _pthread_getspecific(pVar17);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_1d0 = '\0';
        uVar11 = CONCAT44(iStack_94,local_98);
        local_1d8 = local_60;
        FUN_00e7b820();
        pcVar15 = CONCAT44(iStack_ec,local_f0);
        FUN_00e7b820();
        pcVar22 = pcVar15;
        FUN_0165b1b0(pcVar15,uVar11,uVar7 & 1);
        pVar17 = (void*)pcVar22;
        if ((local_1d0 != '\0') && (local_1d8 != 0x0)) {
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
          if ((local_58[0] != '\0') && (pcVar15 != 0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_58[0] == '\0') {
            if (pcVar15 != 0x0) {
              FUN_00d50b00();
            }
            bVar29 = local_60 != 0x0;
            local_60 = pcVar15;
            if (bVar29) {
              FUN_00d50b20();
            }
            goto LAB_016c7fad;
          }
          bVar29 = local_60 != 0x0;
          local_60 = pcVar15;
          if (bVar29) {
            FUN_00d50b20();
          }
        }
        pvVar8 = _pthread_getspecific((void*)puVar19);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar8 = _pthread_getspecific((void*)puVar19);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar7 = FUN_0165e830();
      }
      pcVar15 = local_c0;
      if ((uint64_t)local_c0 >> 0x20 != 0) {
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
      if ((local_1e0 != '\0') && (local_1e8 != 0x0)) {
        FUN_00d50b20();
      }
      FUN_00d64850();
      pcVar15 = *(code **)(this_ptr + 0x58);
      if (pcVar15 != pcVar25) {
        if (pcVar25 != 0x0) {
          FUN_00d50b00();
        }
        *(code **)(this_ptr + 0x58) = pcVar25;
        if (pcVar15 != 0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
      FUN_016f28b0();
      if (local_60 != 0x0) {
        FUN_00d50b20();
      }
      if (pcVar25 != 0x0) {
        FUN_00d50b20();
      }
    }
  }
  else {
    if (local_1c8 >> 0x20 == 0) goto joined_r0x016c6bb9;
    cVar3 = FUN_00e7c020();
    if (cVar3 != '\0' || bVar5 != 1) goto LAB_016c6bc8;
  }
  if (local_80 != 0x0) {
    FUN_00d50b20();
  }
  if (local_b0 != 0x0) {
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
  *(void*)(lVar14 + 0xc) = uVar11;
  lVar14 = *local_118;
  if ((uint64_t)local_158 >> 0x20 != 0) {
    pvVar8 = _pthread_getspecific(pVar17);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165cf20(0,0);
    FUN_00e7c860();
    local_158 = FUN_00e7cc50();
  }
  *(code **)(lVar14 + 0x14) = local_158;
  return;
}



// ============================================================
// 016c11a0
// ============================================================
// Function: FUN_016c11a0
// Address: 016c11a0
// Size: 4191 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void* FUN_016c11a0(double param_1,double param_2,double param_3,double param_4)

{
  void* pVar1;
  void*puVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  void*puVar6;
  int64_t lVar7;
  int extraout_var;
  int64_t lVar8;
  void* in_ECX;
  void* pVar9;
  void*puVar10;
  void*puVar11;
  int64_t *in_RDX;
  int64_t *arg1;
  void*this_ptr;
  bool bVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  double dVar15;
  double dVar16;
  uint64_t uVar17;
  uint64_t extraout_XMM0_Qa;
  uint64_t local_130;
  uint8_t local_128;
  int64_t local_120;
  uint8_t local_118;
  uint64_t local_110;
  double local_e8;
  double local_e0;
  int64_t local_d8;
  char local_d0;
  double local_a8;
  int64_t local_80;
  char local_78;
  void*local_68;
  void*local_60;
  char local_58;
  int local_48;
  double local_38;
  
  puVar2 = local_60;
  if (*in_RDX == 0) {
    local_a8 = g_0238fee8;
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
    uVar13 = -(uint64_t)(dVar16 - local_e0 != 0.0);
    uVar14 = -(uint64_t)(dVar15 - local_e8 != 0.0);
    local_a8 = (double)(~uVar13 & (uint64_t)g_0238fee8 |
                       (~uVar14 & (uint64_t)g_0238fee8 |
                       (uint64_t)((dVar16 - local_e0) / (dVar15 - local_e8)) & uVar14) & uVar13);
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
  if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b00();
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar9 = 0x2572358;
  *puVar6 = &g_02572358;
  (*g_02572370)();
  if (local_60 != (void*)0x0) {
    local_58 = '\0';
    local_60 = (void*)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)puVar2 + 0xc) <= local_48) break;
      lVar8 = puVar2[2];
      local_60 = *(void**)(lVar8 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar8);
      pVar9 = (void*)lVar8;
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
    pVar9 = (void*)puVar10;
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
    if (local_60 != (void*)0x0) {
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
  pVar1 = (void*)local_60;
  if (local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_016c1a80;
    }
    bVar12 = true;
  }
  else if (local_60 == (void*)0x0) {
    bVar12 = true;
  }
  else {
LAB_016c1a80:
    local_58 = '\0';
    local_60 = (void*)0x0;
    local_48 = -1;
    while( true ) {
      lVar7 = (int64_t)local_48;
      local_48 = local_48 + 1;
      if (*(int *)((int64_t)puVar10 + 0xc) <= local_48) break;
      lVar8 = puVar10[2];
      local_60 = *(void**)(lVar8 + 8 + lVar7 * 8);
      pvVar5 = _pthread_getspecific((void*)lVar8);
      pVar9 = (void*)lVar8;
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
    pVar9 = (void*)puVar11;
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
    if ((local_58 != '\0') && (local_60 != (void*)0x0)) {
      uVar17 = FUN_00d50b20();
    }
  }
  else if (local_58 == '\0') {
    if (local_60 != (void*)0x0) {
      uVar17 = FUN_00d50b00();
    }
    if (puVar6 != (void*)0x0) {
      uVar17 = FUN_00d50b20();
      puVar6 = local_68;
      goto LAB_016c1f06;
    }
  }
  else {
    if (puVar6 != (void*)0x0) {
      uVar17 = FUN_00d50b20();
    }
  }
  if (!bVar12) {
    uVar17 = FUN_00d50b20();
  }
  if (puVar10 != (void*)0x0) {
    uVar17 = FUN_00d50b20();
  }
LAB_016c1f39:
  local_130 = 0;
  local_128 = 0;
  FUN_016c2780(uVar17,&local_130);
  if ((local_58 == '\0') && (local_60 != (void*)0x0)) {
    FUN_00d50b00();
  }
  pvVar5 = _pthread_getspecific(pVar9);
  puVar6 = local_60;
  if ((pvVar5 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
    puVar6 = (void*)local_60[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
  }
  lVar7 = *arg1;
  pvVar5 = _pthread_getspecific(pVar9);
  if (pvVar5 != (void *)0x0) {
    lVar7 = *arg1;
    lVar8 = FUN_00e8b990();
    if (lVar8 != 0) {
      lVar7 = *(int64_t *)(lVar7 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
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
    pVar9 = (void*)uVar17;
  }
  else {
    pvVar5 = _pthread_getspecific(pVar9);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_120 = *arg1;
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
  *this_ptr = local_60;
  *(void*)(this_ptr + 1) = 1;
  if (local_68 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar2 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 016c3770
// ============================================================
// Function: FUN_016c3770
// Address: 016c3770
// Size: 3175 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


int64_t * FUN_016c3770(double param_1,double param_2)

{
  int64_t *plVar1;
  char cVar2;
  void *pvVar3;
  int64_t *plVar4;
  void*puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  void*puVar9;
  void* in_ECX;
  void* pVar10;
  void*puVar11;
  int64_t *in_RDX;
  int64_t *this_ptr;
  bool bVar12;
  uint64_t uVar13;
  uint8_t uVar14;
  void*local_110;
  uint8_t local_108;
  void*local_100;
  uint8_t local_f8;
  int64_t *local_f0;
  uint64_t local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  uint32_t local_c0;
  uint32_t local_bc;
  uint64_t local_b8;
  int64_t *local_b0;
  int64_t *local_a8;
  int64_t *local_a0;
  double local_98;
  uint32_t local_8c;
  int64_t *local_88;
  uint32_t local_80;
  uint32_t local_7c;
  uint64_t local_78;
  int64_t *local_70;
  void*local_68;
  uint32_t local_5c;
  uint64_t local_58;
  int64_t *local_50;
  int64_t *local_48;
  char local_40;
  int64_t local_38;
  
  if (NAN(param_1)) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  local_98 = param_2;
  local_70 = (int64_t *)param_1;
  local_50 = in_RDX;
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00d51d20();
  local_38 = (int64_t)local_48;
  if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) && (FUN_00d50b00(), local_40 != '\0'))
     && (local_48 != (int64_t *)0x0)) {
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
  local_78 = (int64_t *)FUN_00e7cd00();
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pvVar3 = _pthread_getspecific(in_ECX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar11 = &local_5c;
  local_a0 = (int64_t *)FUN_0165e220(puVar11,1);
  pVar10 = (void*)puVar11;
  plVar4 = (int64_t *)FUN_00e7bdb0();
  local_88 = (int64_t *)CONCAT44(local_88._4_4_,1);
  local_48 = local_a0;
  FUN_00e7c260();
  local_58 = local_48;
  if (((local_78._4_4_ == 0) || ((uint64_t)local_48 >> 0x20 == 0)) ||
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
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025fa538;
    uVar8 = _UNK_02393728;
    *(void*)((int64_t)puVar5 + 0xc) = g_02393720;
    *(void*)((int64_t)puVar5 + 0x14) = uVar8;
    FUN_00d500e0();
    *(int64_t **)((int64_t)puVar5 + 0xc) = plVar1;
    *(void*)((int64_t)puVar5 + 0x14) = uVar13;
  }
  else {
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_00e7bcc0();
    FUN_016cb850(local_98,&local_8c);
    local_58 = (int64_t *)FUN_00e7cd00();
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_8c;
    plVar4 = (int64_t *)FUN_0165e220(puVar11,2);
    pVar10 = (void*)puVar11;
    local_b8 = CONCAT44(local_b8._4_4_,1);
    local_48 = plVar4;
    FUN_00e7c280();
    local_88 = local_48;
    bVar12 = local_58._4_4_ != 0;
    if (((bVar12) && ((uint64_t)local_48 >> 0x20 != 0)) && (cVar2 = FUN_00e7c020(), cVar2 == '\0'))
    {
      local_58 = plVar4;
    }
    plVar1 = local_58;
    plVar4 = local_78;
    puVar5 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar5 = &g_025fa538;
    uVar8 = _UNK_02393728;
    *(void*)((int64_t)puVar5 + 0xc) = g_02393720;
    *(void*)((int64_t)puVar5 + 0x14) = uVar8;
    FUN_00d500e0();
    *(int64_t **)((int64_t)puVar5 + 0xc) = plVar4;
    *(int64_t **)((int64_t)puVar5 + 0x14) = plVar1;
  }
  cVar2 = FUN_016bf620();
  if (cVar2 != '\0') {
    local_68 = puVar5;
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar11 = &local_5c;
    local_a8 = (int64_t *)FUN_016c46a0(puVar11,&local_80);
    local_bc = 0xffffffff;
    local_7c = 0xffffffff;
    pVar10 = (void*)puVar11;
    pvVar3 = _pthread_getspecific(pVar10);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar10 = (void*)local_38;
    }
    FUN_00e7bcc0();
    FUN_016cb850(local_a8,&local_7c);
    local_58 = (int64_t *)FUN_00e7cd00();
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
      pVar10 = (void*)local_38;
    }
    pvVar3 = _pthread_getspecific(pVar10);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_88 = (int64_t *)FUN_0165d690();
    local_48 = (int64_t *)uVar7;
    FUN_00e7b970();
    plVar4 = local_48;
    puVar5 = local_68;
    local_b8 = (uint64_t)local_48;
    local_48 = (int64_t *)((uint64_t)local_48 & 0xffffffff00000000);
    if (((uint64_t)plVar4 >> 0x20 != 0) && (cVar2 = FUN_00e7c630(), cVar2 != '\0')) {
      pvVar3 = _pthread_getspecific(pVar10);
      if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar10 = (void*)local_38;
      }
      pvVar3 = _pthread_getspecific(pVar10);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      puVar11 = &local_7c;
      local_e8 = FUN_0165e220(puVar11,1);
      pVar10 = (void*)puVar11;
      local_48 = local_58;
      FUN_00e7b970();
      local_f0 = local_48;
      local_48 = local_70;
      FUN_00e7b970();
      plVar4 = local_48;
      local_b0 = local_48;
      local_48 = (int64_t *)((uint64_t)local_48 & 0xffffffff00000000);
      if (((uint64_t)plVar4 >> 0x20 == 0) || (cVar2 = FUN_00e7c630(), cVar2 == '\0')) {
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
        if ((((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
            (FUN_00d50b00(), local_40 != '\0')) && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(pVar10);
        if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar10 = (void*)local_38;
        }
        uVar8 = local_e8;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar10 = 0;
        FUN_0165c940(0,uVar8,0,&local_7c);
        plVar4 = local_48;
        if (((local_40 == '\0') && (local_48 != (int64_t *)0x0)) &&
           ((FUN_00d50b00(), local_40 != '\0' && (local_48 != (int64_t *)0x0)))) {
          FUN_00d50b20();
        }
        local_e0 = plVar4;
        local_d8 = '\0';
        cVar2 = (**(code **)(*local_70 + 0x50))();
        if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          local_48 = (int64_t *)FUN_0123ffd0();
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
        if (plVar4 != (int64_t *)0x0) {
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
          pVar10 = (void*)local_38;
        }
        FUN_00e7bcc0();
        FUN_016cb850(local_98,0);
        uVar8 = FUN_00e7cd00();
      }
      plVar4 = local_58;
      puVar9 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar9 = &g_025fa538;
      uVar13 = _UNK_02393728;
      *(void*)((int64_t)puVar9 + 0xc) = g_02393720;
      *(void*)((int64_t)puVar9 + 0x14) = uVar13;
      uVar13 = FUN_00d500e0();
      *(int64_t **)((int64_t)puVar9 + 0xc) = plVar4;
      *(void*)((int64_t)puVar9 + 0x14) = uVar8;
      uVar14 = 0;
      cVar2 = FUN_016bf700(uVar13,0);
      if (cVar2 == '\0') {
        *(void*)(this_ptr + 1) = 0;
        *this_ptr = 0;
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
        *this_ptr = local_38;
        *(void*)(this_ptr + 1) = 1;
        bVar12 = false;
      }
      FUN_00d50b20();
      goto LAB_016c3e0b;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  bVar12 = true;
LAB_016c3e0b:
  FUN_00d50b20();
  if ((bVar12) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 016bc130
// ============================================================
// Function: FUN_016bc130
// Address: 016bc130
// Size: 1795 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioModification->getDocumentController() == documentController"
//   "isContentAvailable"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


int64_t FUN_016bc130(void*param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint8_t uVar4;
  void *pvVar5;
  void* pVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  puVar7 = param_1;
  uVar10 = FUN_00da7190();
  pVar6 = (void*)puVar7;
  if ((this_ptr == 0) || (cVar3 = FUN_0168a120(), uVar10 = extraout_XMM0_Qa, cVar3 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar10,"provided object ref is invalid");
    }
  }
  else {
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        lVar8 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar8 = 0;
        }
        goto LAB_016bc1f6;
      }
    }
    else {
      uVar10 = extraout_XMM0_Qa_00;
      if ((arg1 == 0) || (cVar3 = FUN_01653650(), uVar10 = extraout_XMM0_Qa_01, cVar3 == '\0'))
      {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar10,"provided object ref is invalid");
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
        if (lVar8 == this_ptr) {
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
              pVar6 = (void*)lVar8;
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
              pVar6 = (void*)lVar8;
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
            if (param_1 == (void*)0x0) {
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
          if (g_02802f60 != (void*)0x0) {
            lVar8 = 0;
            if (*g_02802f60 != 0x0) {
              (**g_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
            }
            goto LAB_016bc1f6;
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
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
// 016baff0
// ============================================================
// Function: FUN_016baff0
// Address: 016baff0
// Size: 1573 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
//   "isContentAvailable"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


int64_t FUN_016baff0(void*param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint8_t uVar4;
  void *pvVar5;
  void* pVar6;
  void*puVar7;
  int64_t lVar8;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40;
  
  puVar7 = param_1;
  uVar10 = FUN_00da7190();
  pVar6 = (void*)puVar7;
  if ((this_ptr == 0) || (cVar3 = FUN_0168a120(), uVar10 = extraout_XMM0_Qa, cVar3 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar10,"provided object ref is invalid");
    }
  }
  else {
    cVar3 = FUN_0168a0d0();
    if (cVar3 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        lVar8 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar8 = 0;
        }
        goto LAB_016bb0b6;
      }
    }
    else {
      uVar10 = extraout_XMM0_Qa_00;
      if ((arg1 == 0) || (cVar3 = FUN_0166db10(), uVar10 = extraout_XMM0_Qa_01, cVar3 == '\0'))
      {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar10,"provided object ref is invalid");
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
        if (lVar8 == this_ptr) {
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
              pVar6 = (void*)lVar8;
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
              pVar6 = (void*)lVar8;
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
            if (param_1 == (void*)0x0) {
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
          if (g_02802f60 != (void*)0x0) {
            lVar8 = 0;
            if (*g_02802f60 != 0x0) {
              (**g_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
            }
            goto LAB_016bb0b6;
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
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
// 016bd400
// ============================================================
// Function: FUN_016bd400
// Address: 016bd400
// Size: 1164 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "playbackRegion->getDocumentController() == documentController"
//   "isContentAvailable"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


int64_t FUN_016bd400(void*param_1,uint32_t param_2)

{
  bool bVar1;
  char cVar2;
  uint8_t uVar3;
  void *pvVar4;
  void* pVar5;
  void*puVar6;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t extraout_XMM0_Qa;
  uint64_t extraout_XMM0_Qa_00;
  uint64_t extraout_XMM0_Qa_01;
  uint64_t extraout_XMM0_Qa_02;
  uint64_t extraout_XMM0_Qa_03;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  
  puVar6 = param_1;
  uVar8 = FUN_00da7190();
  pVar5 = (void*)puVar6;
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), uVar8 = extraout_XMM0_Qa, cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)(uVar8,"provided object ref is invalid");
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (g_02802f60 != (void*)0x0) {
        lVar7 = 0;
        if (*g_02802f60 != 0x0) {
          (**g_02802f60)(extraout_XMM0_Qa_00,"call required from document main thread");
          lVar7 = 0;
        }
        goto LAB_016bd4c7;
      }
    }
    else {
      uVar8 = extraout_XMM0_Qa_00;
      if ((arg1 == 0) || (cVar2 = FUN_01658870(), uVar8 = extraout_XMM0_Qa_01, cVar2 == '\0'))
      {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)(uVar8,"provided object ref is invalid");
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
        if (lVar7 == this_ptr) {
          uVar3 = FUN_0167b260();
          cVar2 = FUN_016bcb60(extraout_XMM0_Qa_02,uVar3);
          if (cVar2 == '\0') {
            if (g_02802f60 != (void*)0x0) {
              lVar7 = 0;
              if (*g_02802f60 != 0x0) {
                (**g_02802f60)(extraout_XMM0_Qa_03,"isContentAvailable");
              }
              goto LAB_016bd4c7;
            }
          }
          else {
            if (param_1 == (void*)0x0) {
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
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)
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
// 016c2780
// ============================================================
// Function: FUN_016c2780
// Address: 016c2780
// Size: 1272 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016c2780(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  void*this_ptr;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0119c6b0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific((void*)param_1);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
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
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
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
    pvVar2 = _pthread_getspecific((void*)param_1);
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
  pvVar2 = _pthread_getspecific((void*)param_1);
  if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
    lVar3 = plVar1[0xb];
    plVar5 = plVar1;
  }
  else {
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
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
    pvVar2 = _pthread_getspecific((void*)param_1);
    plVar5 = plVar1;
    if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    if (*(int *)(plVar5[0xc] + 0xc) <= lVar3) break;
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    pvVar2 = _pthread_getspecific((void*)param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01909dc0();
    FUN_016cc400();
    lVar3 = lVar3 + 1;
  }
  pvVar2 = _pthread_getspecific((void*)param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_016cc730();
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 016c0400
// ============================================================
// Function: FUN_016c0400
// Address: 016c0400
// Size: 933 bytes
// Class: MUAraContentReader
// String references:
//   "%@|%I"
//   "%@|%I/%I"
//   "%@|%I+%I/%I"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016c0400(void* param_1)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  int local_88;
  int local_84;
  void*local_80;
  uint32_t local_78;
  int64_t local_70;
  char local_68;
  int local_60;
  int local_5c;
  int local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
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
    local_80 = &g_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = (void*)&g_025df2a0;
    local_60 = local_88;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_60 == 0) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 3;
    local_80 = &g_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_5c = local_84 << 2;
    local_68 = '\x01';
    local_60 = local_88;
    local_80 = (void*)&g_02509758;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_88 == 0) {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 2;
    local_80 = &g_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_68 = '\x01';
    local_80 = (void*)&g_025df2a0;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    FUN_018c3210();
    uVar3 = (**(code **)(*local_40 + 0x378))((float)iVar1);
    local_70 = local_50;
    local_78 = 4;
    local_80 = &g_024c5048;
    local_68 = 0;
    if (local_50 != 0) {
      uVar3 = FUN_00d50b00();
    }
    local_58 = local_84 << 2;
    local_68 = '\x01';
    local_5c = local_88;
    local_80 = (void*)&g_025fa8b0;
    FUN_00d8cb40(uVar3,&local_80);
    local_80 = &g_024c5048;
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 016c3130
// ============================================================
// Function: FUN_016c3130
// Address: 016c3130
// Size: 1225 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016c3130(int64_t param_1)

{
  int iVar1;
  uint64_t uVar2;
  char cVar3;
  void *pvVar4;
  void* pVar5;
  int64_t this_ptr;
  int64_t lVar6;
  double dVar7;
  double dVar8;
  uint64_t uVar9;
  double dVar10;
  int64_t local_d8;
  char local_d0;
  int iStack_74;
  double local_68;
  uint64_t local_60;
  char local_58;
  int local_4c;
  int64_t local_40;
  
  FUN_016d63b0();
  uVar2 = *(void*)(this_ptr + 0x68);
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  local_40 = **(int64_t **)(local_60 + 0x10);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific((void*)param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_018fbce0();
  lVar6 = *(int64_t *)(*(int64_t *)(local_60 + 0x10) + 8);
  if (local_58 != '\0') {
    FUN_00d50b20();
  }
  local_68 = (double)FUN_019079d0();
  local_4c = 2;
  while( true ) {
    pVar5 = (void*)param_1;
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
    param_1 = *(int64_t *)(local_60 + 0x10);
    lVar6 = *(int64_t *)(param_1 + (int64_t)local_4c * 8);
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
    if (g_02411148 < dVar8 / dVar10) {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_016cc400();
    }
    if ((local_68 != dVar7) || (NAN(local_68) || NAN(dVar7))) {
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_60 = FUN_019079b0();
      pvVar4 = _pthread_getspecific((void*)param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_019079b0();
      FUN_00e7b970();
      if (((local_60 >> 0x20 != 0) && (iStack_74 = (int)((uint64_t)uVar2 >> 0x20), iStack_74 != 0))
         && (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
        pvVar4 = _pthread_getspecific((void*)param_1);
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
// 016cc400
// ============================================================
// Function: FUN_016cc400
// Address: 016cc400
// Size: 623 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016cc400(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  char cVar4;
  uint64_t uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  uint64_t arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar12;
  char local_40;
  uint uVar11;
  
  uVar9 = arg1 >> 0x20;
  if (uVar9 != 0) {
    puVar1 = (uint64_t *)(this_ptr + 0x70);
    uVar5 = *(uint64_t *)(this_ptr + 0x70);
    if (7 < *(int *)(uVar5 + 0x18)) {
      lVar12 = 1;
      iVar8 = 0;
      iVar10 = *(int *)(*(int64_t *)(uVar5 + 0x10) + 4);
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
        uVar3 = arg1 >> 0x20;
        iVar8 = iVar8 + 8;
        lVar12 = lVar12 + 1;
        iVar10 = *(int *)(*(int64_t *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    if (uVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00c8e4f0();
    if ((local_40 == '\0') && (arg1 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
    uVar5 = *puVar1;
    uVar2 = *(uint *)(uVar5 + 0x18);
    pvVar7 = (void *)(uint64_t)uVar2;
    uVar11 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar11 = uVar2;
    }
    iVar10 = (int)uVar11 >> 3;
    if (7 < (int)uVar2) {
      lVar12 = 1;
      iVar8 = *(int *)(*(int64_t *)(uVar5 + 0x10) + 4);
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
        pvVar7 = (void *)(int64_t)(iVar6 >> 3);
        if ((int64_t)pvVar7 <= lVar12) break;
        uVar9 = arg1 >> 0x20;
        lVar12 = lVar12 + 1;
        iVar8 = *(int *)(*(int64_t *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    iVar8 = *(int *)(arg1 + 0x18);
    FUN_00c8e340();
    lVar12 = *(int64_t *)(arg1 + 0x10);
    _memmove(pvVar7,(void *)(int64_t)(iVar8 + iVar10 * -8),param_3);
    *(uint64_t *)(lVar12 + (int64_t)iVar10 * 8) = arg1;
    FUN_00d64850();
    uVar9 = *puVar1;
    if (uVar9 != arg1) {
      FUN_00d50b00();
      *puVar1 = arg1;
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
// 016c0b50
// ============================================================
// Function: FUN_016c0b50
// Address: 016c0b50
// Size: 1026 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016c0b50(uint64_t param_1)

{
  int64_t *plVar1;
  void *pvVar2;
  int64_t lVar3;
  uint64_t uVar4;
  void* in_ECX;
  void*this_ptr;
  int64_t *plVar5;
  uint64_t extraout_XMM0_Qa;
  int64_t local_78;
  char local_70;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar1 = (int64_t *)FUN_00e8fc40();
  FUN_0119c6b0();
  (**(code **)(*plVar1 + 0x18))();
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = plVar1;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
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
    plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
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
  *this_ptr = plVar1;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 016ba380
// ============================================================
// Function: FUN_016ba380
// Address: 016ba380
// Size: 749 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
//   "!audioSource->isDeactivatedForUndoHistory()"
//   "contentTypesCount > 0"
//   "contentTypes != NULL"
//   "MUAraContentReader::isEventTypeSupported((GNInt)contentTypes[i])"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016ba380(int64_t param_1,int64_t param_2)

{
  char cVar1;
  void *pvVar2;
  void* pVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  pVar3 = (void*)param_1;
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
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
      if (local_48 == this_ptr) {
        if (param_2 == 0) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else if (param_1 == 0) {
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else {
          lVar4 = 0;
          do {
            cVar1 = FUN_0172c0d0();
            if (cVar1 == '\0') {
              if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
                (**g_02802f60)();
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
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
      }
      else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
  }
LAB_016ba441:
  FUN_00da71b0();
  return;
}



// ============================================================
// 016be130
// ============================================================
// Function: FUN_016be130
// Address: 016be130
// Size: 536 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "contentTypes != NULL"
//   "MUAraContentReader::isEventTypeSupported((GNInt)contentTypes[i])"
//   "contentTypes == NULL"
//   "GNClearFlags(transformationFlags, factory->supportedPlaybackTransformationFlags) == 0"
//   "(contentTypesCount > 0) || (transformationFlags != ARA::kARAPlaybackTransformationNoChanges)"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


char FUN_016be130(int64_t param_1,int64_t param_2,uint param_3)

{
  code *pcVar1;
  char cVar2;
  int64_t lVar3;
  int unaff_ESI;
  int64_t this_ptr;
  
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if (g_02802f60 == (void*)0x0) {
      return '\0';
    }
    pcVar1 = *g_02802f60;
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if (g_02802f60 == (void*)0x0) {
        return '\0';
      }
      pcVar1 = *g_02802f60;
    }
    else {
      if (param_2 == 0) {
        if (param_1 != 0) {
          if (g_02802f60 == (void*)0x0) {
            return '\0';
          }
          pcVar1 = *g_02802f60;
          goto joined_r0x016be1b8;
        }
      }
      else {
        if (param_1 == 0) {
          if (g_02802f60 == (void*)0x0) {
            return '\0';
          }
          pcVar1 = *g_02802f60;
          goto joined_r0x016be1b8;
        }
        lVar3 = 0;
        do {
          cVar2 = FUN_0172c0d0();
          if (cVar2 == '\0') {
            if (g_02802f60 == (void*)0x0) {
              return '\0';
            }
            pcVar1 = *g_02802f60;
            goto joined_r0x016be1b8;
          }
          lVar3 = lVar3 + 1;
        } while (param_2 != lVar3);
      }
      FUN_016ace20();
      if ((~g_028ad950 & param_3) == 0) {
        if ((param_2 != 0) || (param_3 != 0)) {
          if (g_02802f58 == '\0') {
            if (g_027cb0f4 != '\0') {
              return '\x01';
            }
            if (unaff_ESI != 0) {
              if (g_02802f50 == 0x0) {
                return '\0';
              }
              g_02802f58 = 1;
              (*g_02802f50)();
              g_02802f58 = 0;
              return g_027cb0f4;
            }
          }
          return '\0';
        }
        if (g_02802f60 == (void*)0x0) {
          return '\0';
        }
        pcVar1 = *g_02802f60;
      }
      else {
        if (g_02802f60 == (void*)0x0) {
          return '\0';
        }
        pcVar1 = *g_02802f60;
      }
    }
  }
joined_r0x016be1b8:
  if (pcVar1 != 0x0) {
    (*pcVar1)();
  }
  return '\0';
}



// ============================================================
// 016ba9d0
// ============================================================
// Function: FUN_016ba9d0
// Address: 016ba9d0
// Size: 696 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "documentController->isHostEditingDocument()"
//   "audioSource->getDocumentController() == documentController"
//   "algorithmIndex >= 0"
//   "algorithmIndex < _sortedProcessingAlgorithmIdentifiers->getCount()"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016ba9d0(void* param_1,uint param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_58;
  char local_50;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
      }
    }
    else {
      cVar2 = FUN_0167b260();
      if (cVar2 == '\0') {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
      else if ((arg1 == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
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
        if (local_58 == this_ptr) {
          if ((int)param_2 < 0) {
            if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
              (**g_02802f60)();
            }
          }
          else if ((int)param_2 < *(int *)(g_028ad890 + 0xc)) {
            pvVar3 = _pthread_getspecific(param_1);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            lVar1 = *(int64_t *)(*(int64_t *)(g_028ad890 + 0x10) + (uint64_t)param_2 * 8);
            if (lVar1 != 0) {
              FUN_00d50b00();
            }
            FUN_01668130();
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
          }
        }
        else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return;
}



// ============================================================
// 016bb8f0
// ============================================================
// Function: FUN_016bb8f0
// Address: 016bb8f0
// Size: 667 bytes
// Class: MUAraContentReader
// String references:
//   "!audioModification->isDeactivatedForUndoHistory()"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


uint32_t FUN_016bb8f0(void* param_1,char param_2)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t *local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_01650890();
  if (cVar1 == '\0') {
    if (g_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0164e2c0();
      cVar1 = (**(code **)(*local_40 + 0x398))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          plVar5 = (int64_t *)*this_ptr;
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            plVar5 = (int64_t *)*this_ptr;
            lVar4 = FUN_00e8b990();
            if (lVar4 != 0) {
              plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
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
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 == '\0') {
          return uVar2;
        }
        if (local_40 == (int64_t *)0x0) {
          return uVar2;
        }
        FUN_00d50b20();
        return uVar2;
      }
    }
  }
  else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
    (**g_02802f60)();
    return 0;
  }
  return 0;
}



// ============================================================
// 016bcb60
// ============================================================
// Function: FUN_016bcb60
// Address: 016bcb60
// Size: 711 bytes
// Class: MUAraContentReader
// String references:
//   "!playbackRegion->getAudioModification()->isDeactivatedForUndoHistory()"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


uint32_t FUN_016bcb60(void* param_1,char param_2)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t local_60;
  char local_58;
  int64_t *local_40;
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
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 == '\0') {
    if (g_027cb0f4 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01654a00();
      cVar1 = (**(code **)(*local_40 + 0x3a0))();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
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
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (local_40 == (int64_t *)0x0) {
            return 0;
          }
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0165a070();
        if (local_38 == '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        uVar2 = FUN_0172c2f0();
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        if (local_38 != '\0') {
          if (local_40 != (int64_t *)0x0) {
            FUN_00d50b20();
            return uVar2;
          }
          return uVar2;
        }
        return uVar2;
      }
    }
  }
  else if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
    (**g_02802f60)();
    return 0;
  }
  return 0;
}



// ============================================================
// 016ba6a0
// ============================================================
// Function: FUN_016ba6a0
// Address: 016ba6a0
// Size: 658 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


int FUN_016ba6a0(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int iVar4;
  int64_t lVar5;
  int64_t local_60;
  char local_58;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar2 = FUN_0168a120(), cVar2 == '\0')) {
    iVar4 = 0;
    if ((g_02802f60 != (void*)0x0) && (iVar4 = 0, *g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar2 = FUN_0168a0d0();
    if (cVar2 == '\0') {
      iVar4 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
        iVar4 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar2 = FUN_0166db10(), cVar2 == '\0')) {
      iVar4 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
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
      if (local_60 == this_ptr) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01662650();
        if ((local_58 == '\0') && (local_60 != 0)) {
          FUN_00d50b00();
        }
        lVar1 = g_028ad890;
        if (g_028ad890 == 0) {
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
            cVar2 = (**(code **)(**(int64_t **)(*(int64_t *)(lVar1 + 0x10) + lVar5 * 8) + 0x50))()
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
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return iVar4;
}



// ============================================================
// 016bbe20
// ============================================================
// Function: FUN_016bbe20
// Address: 016bbe20
// Size: 660 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioModification->getDocumentController() == documentController"
//   "isContentAvailable"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


uint32_t FUN_016bbe20(void* param_1)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((g_02802f60 != (void*)0x0) && (uVar2 = 0, *g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_01653650(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
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
      if (local_48 == this_ptr) {
        FUN_0167b260();
        cVar1 = FUN_016bb8f0();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
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
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}



// ============================================================
// 016bd0f0
// ============================================================
// Function: FUN_016bd0f0
// Address: 016bd0f0
// Size: 660 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "playbackRegion->getDocumentController() == documentController"
//   "isContentAvailable"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


uint32_t FUN_016bd0f0(void* param_1)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((g_02802f60 != (void*)0x0) && (uVar2 = 0, *g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_01658870(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
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
      if (local_48 == this_ptr) {
        FUN_0167b260();
        cVar1 = FUN_016bcb60();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
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
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}



// ============================================================
// 016bace0
// ============================================================
// Function: FUN_016bace0
// Address: 016bace0
// Size: 660 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
//   "isContentAvailable"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


uint32_t FUN_016bace0(void* param_1)

{
  char cVar1;
  uint32_t uVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    uVar2 = 0;
    if ((g_02802f60 != (void*)0x0) && (uVar2 = 0, *g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
        uVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      uVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
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
      if (local_48 == this_ptr) {
        FUN_0167b260();
        cVar1 = FUN_016b9a60();
        if (cVar1 == '\0') {
          uVar2 = 0;
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
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
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return uVar2;
}



// ============================================================
// 016b9ed0
// ============================================================
// Function: FUN_016b9ed0
// Address: 016b9ed0
// Size: 597 bytes
// Class: MUAraContentReader
// String references:
//   "provided object ref is invalid"
//   "call required from document main thread"
//   "audioSource->getDocumentController() == documentController"
//   "MUAraContentReader::isEventTypeSupported((GNInt)contentType)"
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


byte FUN_016b9ed0(void* param_1)

{
  char cVar1;
  byte bVar2;
  void *pvVar3;
  int64_t arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  FUN_00da7190();
  if ((this_ptr == 0) || (cVar1 = FUN_0168a120(), cVar1 == '\0')) {
    bVar2 = 0;
    if ((g_02802f60 != (void*)0x0) && (bVar2 = 0, *g_02802f60 != 0x0)) {
      (**g_02802f60)();
    }
  }
  else {
    cVar1 = FUN_0168a0d0();
    if (cVar1 == '\0') {
      bVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
        bVar2 = 0;
      }
    }
    else if ((arg1 == 0) || (cVar1 = FUN_0166db10(), cVar1 == '\0')) {
      bVar2 = 0;
      if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
        (**g_02802f60)();
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
      if (local_48 == this_ptr) {
        cVar1 = FUN_0172c0d0();
        if (cVar1 == '\0') {
          bVar2 = 0;
          if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
            (**g_02802f60)();
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
        if ((g_02802f60 != (void*)0x0) && (*g_02802f60 != 0x0)) {
          (**g_02802f60)();
        }
      }
    }
  }
  FUN_00da71b0();
  return bVar2;
}



// ============================================================
// 016be890
// ============================================================
// Function: FUN_016be890
// Address: 016be890
// Size: 568 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016be890(void)

{
  code *pcVar1;
  int iVar2;
  void*puVar3;
  void*this_ptr;
  
  FUN_00d4ff40();
  *this_ptr = &g_025f89b0;
  this_ptr[2] = &g_025f8d70;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  iVar2 = g_02802630;
  if (g_02802630 < 2) {
    this_ptr[10] = 0;
    this_ptr[0xb] = 0;
LAB_016bea35:
    this_ptr[0xc] = 0;
    this_ptr[0xd] = 0;
  }
  else {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    pcVar1 = g_02572370;
    (*g_02572370)();
    this_ptr[9] = puVar3;
    iVar2 = g_02802630;
    this_ptr[10] = 0;
    if (iVar2 < 2) {
      this_ptr[0xb] = 0;
      this_ptr[0xc] = 0;
    }
    else {
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[10] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0xb] = 0;
      if (iVar2 < 2) goto LAB_016bea35;
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*pcVar1)();
      this_ptr[0xb] = puVar3;
      iVar2 = g_02802630;
      this_ptr[0xc] = 0;
      if (1 < iVar2) {
        puVar3 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar3 = &g_02572358;
        (*pcVar1)();
        this_ptr[0xc] = puVar3;
        iVar2 = g_02802630;
        this_ptr[0xd] = 0;
        if (1 < iVar2) {
          puVar3 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar3 = &g_02572358;
          (*g_02572370)();
          this_ptr[0xd] = puVar3;
          iVar2 = g_02802630;
        }
        goto LAB_016bea6f;
      }
    }
    this_ptr[0xd] = 0;
  }
LAB_016bea6f:
  this_ptr[0xf] = 0;
  *(void*)(this_ptr + 0xe) = 0;
  *(void*)((int64_t)this_ptr + 0x73) = 0;
  if (1 < iVar2) {
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    this_ptr[0xf] = puVar3;
  }
  return;
}

