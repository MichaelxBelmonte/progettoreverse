// ===================================================================
// MUSignatureEditorRulerView — Complete reconstructed pseudocode
// 9 functions
// ===================================================================

// Registered properties (14):
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


// ============================================================
// 01c936e0
// ============================================================
// Function: FUN_01c936e0
// Address: 01c936e0
// Size: 5039 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


uint64_t FUN_01c936e0(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  code *pcVar2;
  int64_t *plVar3;
  char cVar4;
  uint32_t uVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t **pplVar8;
  void*puVar9;
  void*puVar10;
  char *pcVar11;
  void* pVar12;
  int64_t *plVar13;
  int64_t lVar14;
  int64_t **pplVar15;
  uint64_t uVar16;
  int iVar17;
  int64_t *arg1;
  int64_t *this_ptr;
  bool bVar18;
  int iStack_294;
  int64_t local_290;
  char local_288;
  int64_t local_280;
  char local_278;
  int64_t local_270;
  char local_268;
  int64_t local_260;
  char local_258;
  int64_t local_250;
  char local_248;
  int64_t local_240;
  char local_238;
  int64_t local_230;
  char local_228;
  int64_t local_220;
  char local_218;
  int64_t local_210;
  char local_208;
  int64_t local_200;
  char local_1f8;
  int64_t local_1f0;
  char local_1e8;
  int64_t *local_1e0;
  char local_1d8;
  int64_t *local_1d0;
  char local_1c8;
  void*local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  void*local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  void*local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t *local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t *local_130;
  char local_128;
  int64_t local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t *local_f0;
  char local_e8;
  int64_t *local_e0;
  char local_d8;
  int64_t *local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  void*local_b0;
  void*local_a8;
  int64_t *local_88;
  char local_80;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58 [8];
  void*local_50;
  uint64_t local_48;
  int local_40;
  char local_38 [8];
  
  local_290 = *arg1;
  if (local_290 == 0) {
    uVar16 = 0;
    goto LAB_01c94a97;
  }
  local_288 = '\0';
  FUN_01c957d0(param_1,&local_290);
  plVar3 = local_60;
  lVar7 = *arg1;
  if ((int64_t *)lVar7 == local_60) {
    if (((char)arg1[1] == '\0') && (local_60 != (int64_t *)0x0)) {
      if (local_58[0] == '\0') {
        FUN_00d50b00();
      }
      goto LAB_01c937c3;
    }
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    lVar14 = arg1[1];
    if (local_58[0] == '\0') {
      if (local_60 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)plVar3;
      if (((char)lVar14 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      *arg1 = (int64_t)local_60;
      if (((char)lVar14 != '\0') && (lVar7 != 0)) {
        FUN_00d50b20();
      }
    }
LAB_01c937c3:
    *(void*)(arg1 + 1) = 1;
  }
  if ((local_288 != '\0') && (local_290 != 0)) {
    FUN_00d50b20();
  }
  plVar13 = (int64_t *)*arg1;
  bVar18 = *(int *)((int64_t)plVar13 + 0xc) == 0;
  uVar16 = CONCAT71((int7)((uint64_t)plVar3 >> 8),!bVar18);
  if ((bVar18) || ((char)param_1 == '\0')) goto LAB_01c94a97;
  local_278 = '\0';
  local_280 = (int64_t)plVar13;
  FUN_01266770();
  plVar3 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_278 != '\0') && (local_280 != 0)) {
    FUN_00d50b20();
  }
  FUN_00e7bcc0();
  iStack_294 = (int)((uint64_t)param_2 >> 0x20);
  if (iStack_294 != 0) {
    pvVar6 = _pthread_getspecific((void*)plVar13);
    if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
      plVar13 = plVar3;
    }
    FUN_0125e930();
    plVar1 = local_60;
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      pvVar6 = _pthread_getspecific((void*)plVar13);
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar13 = plVar3;
      }
      pVar12 = (void*)plVar13;
      FUN_0125e930();
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ebe0();
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = (int64_t *)FUN_01507970();
      FUN_00e7b970();
      if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  local_270 = *arg1;
  local_268 = '\0';
  FUN_01273930();
  plVar13 = local_60;
  if (local_58[0] == '\0') {
    if (((local_60 != (int64_t *)0x0) && (FUN_00d50b00(), local_58[0] != '\0')) &&
       (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_58[0] = '\0';
  }
  if ((local_268 != '\0') && (local_270 != 0)) {
    FUN_00d50b20();
  }
  FUN_01ca5d90();
  if (*(char *)((int64_t)this_ptr + 0x2f) == '\0') {
    FUN_00d23310();
    plVar1 = local_60;
    pplVar15 = &local_70;
    if (local_58[0] != '\0') {
      pplVar15 = (int64_t **)local_58;
    }
    local_70 = (int64_t *)CONCAT71(local_70._1_7_,local_58[0]);
    *(char *)pplVar15 = '\0';
    if ((local_58[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    lVar7 = FUN_00cafdf0();
    if (lVar7 != 0) {
      FUN_00d50b00();
    }
    if (((char)local_70 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar7 != 0) {
      FUN_00cb1f10();
      plVar1 = local_60;
      if (local_58[0] == '\0') {
        if (local_60 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c93b7f;
        }
      }
      else if (local_60 != (int64_t *)0x0) {
LAB_01c93b7f:
        FUN_00d403d0();
        local_128 = 0;
        FUN_00d50b00();
        local_260 = g_026e0f70;
        local_128 = '\x01';
        local_130 = this_ptr;
        if (g_026e0f70 != 0) {
          FUN_00d50b00();
        }
        local_258 = '\x01';
        local_250 = (int64_t)plVar1;
        local_248 = '\0';
        FUN_00d41430(&local_250,&local_260);
        if ((local_248 != '\0') && (local_250 != 0)) {
          FUN_00d50b20();
        }
        if ((local_258 != '\0') && (local_260 != 0)) {
          FUN_00d50b20();
        }
        if ((local_128 != '\0') && (local_130 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        *(void*)((int64_t)this_ptr + 0x2f) = 1;
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
  }
  local_60 = (int64_t *)*arg1;
  local_58[0] = '\0';
  FUN_00d243f0();
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_118 = 0;
  lVar7 = this_ptr[7];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  lVar14 = g_027ed420;
  local_118 = '\x01';
  local_120 = lVar7;
  if (g_027ed420 != 0) {
    FUN_00d50b00();
  }
  local_240 = lVar14;
  local_238 = '\x01';
  (**(code **)(*this_ptr + 0x370))();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  if ((local_118 != '\0') && (local_120 != 0)) {
    FUN_00d50b20();
  }
  local_108 = 0;
  lVar7 = this_ptr[7];
  if (lVar7 != 0) {
    FUN_00d50b00();
  }
  lVar14 = g_027ed428;
  local_108 = '\x01';
  local_110 = lVar7;
  if (g_027ed428 != 0) {
    FUN_00d50b00();
  }
  local_230 = lVar14;
  local_228 = '\x01';
  (**(code **)(*this_ptr + 0x370))();
  if ((local_228 != '\0') && (local_230 != 0)) {
    FUN_00d50b20();
  }
  if ((local_108 != '\0') && (local_110 != 0)) {
    FUN_00d50b20();
  }
  local_f8 = 0;
  (**(code **)(this_ptr[2] + 0x10))();
  FUN_00d50b00();
  local_220 = g_027ed418;
  local_f8 = '\x01';
  local_100 = this_ptr + 2;
  if (g_027ed418 != 0) {
    FUN_00d50b00();
  }
  local_218 = '\x01';
  FUN_01cacee0();
  if ((local_218 != '\0') && (local_220 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
    (**(code **)(*local_100 + 0x10))();
    FUN_00d50b20();
  }
  FUN_01caddb0();
  local_f0 = local_60;
  local_e8 = 0;
  local_210 = g_027ed430;
  if (local_58[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_210 = g_027ed430;
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_e8 = '\x01';
  g_027ed430 = local_210;
  if (local_210 != 0) {
    local_e8 = '\x01';
    FUN_00d50b00();
  }
  local_208 = '\x01';
  FUN_01ca93d0();
  if ((local_208 != '\0') && (local_210 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00c9fe20();
  plVar1 = local_60;
  pplVar15 = (int64_t **)local_58;
  local_88 = (int64_t *)CONCAT71(local_88._1_7_,local_58[0]);
  pplVar8 = &local_88;
  if (local_58[0] != '\0') {
    pplVar8 = pplVar15;
  }
  *(char *)pplVar8 = '\0';
  if ((local_58[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pVar12 = (void*)pplVar15;
  FUN_00d46530();
  local_e0 = local_70;
  local_d8 = 0;
  local_200 = g_027ed438;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_200 = g_027ed438;
    }
  }
  else {
    local_68 = '\0';
  }
  local_d8 = '\x01';
  g_027ed438 = local_200;
  if (local_200 != 0) {
    local_d8 = '\x01';
    FUN_00d50b00();
  }
  local_1f8 = '\x01';
  FUN_01ca93d0();
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_88 != '\0') {
    FUN_00d50b20();
  }
  FUN_00dd67f0();
  local_d0 = local_60;
  local_c8 = 0;
  local_1f0 = g_027ed440;
  if (local_58[0] == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      local_1f0 = g_027ed440;
    }
  }
  else {
    local_58[0] = '\0';
  }
  local_c8 = '\x01';
  g_027ed440 = local_1f0;
  if (local_1f0 != 0) {
    local_c8 = '\x01';
    FUN_00d50b00();
  }
  local_1e8 = '\x01';
  FUN_01ca93d0();
  if ((local_1e8 != '\0') && (local_1f0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  pcVar2 = g_02572370;
  (*g_02572370)();
  local_a8 = puVar9;
  puVar10 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar10 = &g_02572358;
  (*pcVar2)();
  local_b0 = puVar10;
  if ((void*)*arg1 != (void*)0x0) {
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = (void*)*arg1;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar17 = -local_48._4_4_;
        }
        else {
          iVar17 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar17);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar17 = 0;
        }
        local_48 = CONCAT44(iVar17,(int)local_48);
      }
      lVar7 = (int64_t)(int)local_48;
      iVar17 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar17);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar17) break;
      lVar14 = local_50[2];
      local_60 = *(int64_t **)(lVar14 + 8 + lVar7 * 8);
      pvVar6 = _pthread_getspecific((void*)lVar14);
      pVar12 = (void*)lVar14;
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012f8400();
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_70 != (int64_t *)0x0) {
        local_1e0 = local_70;
        local_1d8 = '\0';
        FUN_00d235a0();
        if ((local_1d8 != '\0') && (local_1e0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(pVar12);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      plVar1 = local_70;
      if (local_68 == '\0') {
        if (local_70 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c943d0;
        }
      }
      else if (local_70 != (int64_t *)0x0) {
LAB_01c943d0:
        local_1d0 = plVar1;
        local_1c8 = '\0';
        FUN_00d235a0();
        if ((local_1c8 != '\0') && (local_1d0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    puVar9 = local_50;
    FUN_001159b0();
    pVar12 = (void*)puVar9;
    puVar9 = local_a8;
  }
  puVar10 = local_b0;
  lVar7 = g_027ed448;
  if (*(int *)((int64_t)puVar9 + 0xc) != 0) {
    local_1b8 = '\0';
    local_1c0 = puVar9;
    if (g_027ed448 != 0) {
      FUN_00d50b00();
    }
    local_1b0 = lVar7;
    local_1a8 = '\x01';
    FUN_01cac590();
    if ((local_1a8 != '\0') && (local_1b0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_1b8 != '\0') && (local_1c0 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  lVar7 = g_027ed450;
  if (*(int *)((int64_t)puVar10 + 0xc) != 0) {
    local_198 = '\0';
    local_1a0 = puVar10;
    if (g_027ed450 != 0) {
      FUN_00d50b00();
    }
    local_190 = lVar7;
    local_188 = '\x01';
    FUN_01cac590();
    if ((local_188 != '\0') && (local_190 != 0)) {
      FUN_00d50b20();
    }
    if ((local_198 != '\0') && (local_1a0 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar9 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar9 = &g_025683c0;
    (*g_025683d8)();
    FUN_00c92170();
    FUN_00c92160();
    local_58[0] = '\0';
    local_60 = (int64_t *)0x0;
    local_48 = 0xffffffff;
    local_40 = 0;
    local_48._4_4_ = 0;
    local_50 = puVar10;
    while( true ) {
      if (local_48._4_4_ != 0) {
        if (local_48._4_4_ < 1) {
          iVar17 = -local_48._4_4_;
        }
        else {
          iVar17 = (int)local_48 - local_48._4_4_;
          local_48 = CONCAT44(local_48._4_4_,iVar17);
          FUN_00d23690();
          local_40 = local_40 + local_48._4_4_;
          iVar17 = 0;
        }
        local_48 = CONCAT44(iVar17,(int)local_48);
      }
      lVar7 = (int64_t)(int)local_48;
      iVar17 = (int)local_48 + 1;
      local_48 = CONCAT44(local_48._4_4_,iVar17);
      if (*(int *)((int64_t)local_50 + 0xc) <= iVar17) break;
      plVar1 = *(int64_t **)(local_50[2] + 8 + lVar7 * 8);
      local_70 = plVar1;
      local_60 = plVar1;
      FUN_002771e0();
      pplVar15 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar4 = FUN_00e85ea0();
        pplVar15 = &local_70;
        if (cVar4 == '\0') {
          pplVar15 = (int64_t **)&g_02802688;
        }
      }
      if (*pplVar15 != (int64_t *)0x0) {
        pvVar6 = _pthread_getspecific((void*)pplVar15);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = FUN_013d8eb0();
        iVar17 = *(int *)(puVar9 + 3);
        FUN_00c8e340();
        *(void*)(puVar9[2] + (int64_t)iVar17) = uVar5;
      }
    }
    puVar10 = local_50;
    FUN_01ca56a0();
    local_170 = g_027ed458;
    pVar12 = (void*)puVar10;
    local_178 = '\0';
    local_180 = puVar9;
    if (g_027ed458 != 0) {
      FUN_00d50b00();
    }
    local_168 = '\x01';
    FUN_01ca93d0();
    if ((local_168 != '\0') && (local_170 != 0)) {
      FUN_00d50b20();
    }
    if ((local_178 != '\0') && (local_180 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if (puVar9 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d23310();
  plVar1 = local_60;
  local_38[0] = local_58[0];
  pcVar11 = local_58;
  if (local_58[0] == '\0') {
    pcVar11 = local_38;
  }
  *pcVar11 = '\0';
  if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(pVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  pvVar6 = _pthread_getspecific(pVar12);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012f8680();
  if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar7 = g_027ed460;
  if (local_70 == (int64_t *)0x0) {
    FUN_00d23310();
    plVar1 = local_60;
    pcVar11 = local_58;
    if (local_58[0] == '\0') {
      pcVar11 = local_38;
    }
    local_38[0] = local_58[0];
    *pcVar11 = '\0';
    if ((local_58[0] != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    puVar9 = local_a8;
    pvVar6 = _pthread_getspecific((void*)pcVar11);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01267000();
    local_c0 = local_88;
    local_b8 = 0;
    local_140 = g_027ed468;
    if (local_80 == '\0') {
      if (local_88 != (int64_t *)0x0) {
        FUN_00d50b00();
        local_140 = g_027ed468;
      }
    }
    else {
      local_80 = '\0';
    }
    local_b8 = '\x01';
    g_027ed468 = local_140;
    if (local_140 != 0) {
      local_b8 = '\x01';
      FUN_00d50b00();
    }
    local_138 = '\x01';
    FUN_01caa390();
    if ((local_138 != '\0') && (local_140 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_160 = local_70;
    local_158 = '\0';
    if (g_027ed460 != 0) {
      FUN_00d50b00();
    }
    puVar9 = local_a8;
    local_150 = lVar7;
    local_148 = '\x01';
    FUN_01caa390();
    if ((local_148 != '\0') && (local_150 != 0)) {
      FUN_00d50b20();
    }
    if ((local_158 != '\0') && (local_160 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_b0 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar9 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (plVar13 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  uVar16 = CONCAT71((int7)((uint64_t)plVar13 >> 8),1);
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_01c94a97:
  return uVar16 & 0xffffffff;
}



// ============================================================
// 01c90380
// ============================================================
// Function: FUN_01c90380
// Address: 01c90380
// Size: 1528 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c90380(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  void *pvVar7;
  void* pVar8;
  uint uVar9;
  int64_t lVar10;
  int iVar11;
  void*puVar12;
  bool bVar13;
  uint64_t uVar14;
  int64_t local_d8;
  char local_d0;
  int64_t *local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t *local_88;
  char local_80;
  void*local_78;
  void*local_70;
  void*local_68;
  char local_60;
  void*local_58;
  uint64_t local_50;
  int local_48;
  int64_t *local_40;
  char local_38;
  
  uVar14 = (**(code **)(*g_028b7260 + 0x9a8))(param_1,0);
  puVar12 = local_68;
  if ((((local_60 == '\0') && (local_68 != (void*)0x0)) &&
      (uVar14 = FUN_00d50b00(), local_60 != '\0')) && (local_68 != (void*)0x0)) {
    uVar14 = FUN_00d50b20();
  }
  local_70 = puVar12;
  (**(code **)(*g_028b7260 + 0x9b0))(uVar14,0);
  local_a8 = local_40;
  local_a0 = 0;
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  local_a0 = '\x01';
  local_d8 = 0;
  local_d0 = '\0';
  FUN_01293ed0(&local_d8);
  local_78 = local_68;
  if (local_60 == '\0') {
    if (((local_68 != (void*)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
       (local_68 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_60 = '\0';
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  if (local_78 != (void*)0x0) {
    local_60 = '\0';
    local_68 = (void*)0x0;
    local_58 = local_78;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_50._4_4_ = 0;
    while( true ) {
      if (local_50._4_4_ != 0) {
        if ((int)local_50._4_4_ < 1) {
          iVar11 = -local_50._4_4_;
        }
        else {
          iVar11 = (int)local_50 - local_50._4_4_;
          local_50 = CONCAT44(local_50._4_4_,iVar11);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar11 = 0;
        }
        local_50 = CONCAT44(iVar11,(int)local_50);
      }
      lVar5 = (int64_t)(int)local_50;
      iVar11 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar11);
      if (*(int *)((int64_t)local_58 + 0xc) <= iVar11) break;
      lVar10 = local_58[2];
      local_68 = *(void**)(lVar10 + 8 + lVar5 * 8);
      FUN_0141ae30();
      local_98 = local_b8;
      pVar8 = (void*)lVar10;
      local_90 = 0;
      if (local_b0 == '\0') {
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b0 = '\0';
      }
      local_90 = '\x01';
      FUN_0141af60();
      plVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      plVar6 = (int64_t *)FUN_00e8fc40();
      FUN_000fdf90();
      (**(code **)(*plVar6 + 0x18))();
      pvVar7 = _pthread_getspecific(pVar8);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01320d00();
      plVar2 = local_40;
      puVar12 = local_70;
      local_80 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_80 = '\x01';
      local_88 = plVar2;
      FUN_013fb180();
      if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_c8 = plVar1;
      local_c0 = '\0';
      FUN_013fb350();
      if ((local_c0 != '\0') && (local_c8 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      local_38 = '\0';
      local_40 = plVar6;
      FUN_00d21140();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      (**(code **)(*plVar6 + 0x398))();
      FUN_00d50b20();
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00115190();
  }
  if (puVar4 == (void*)0x0) {
    while( true ) {
      FUN_00d403d0();
      FUN_00d3fc60();
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (MACH_HEADER.filetype == 0) break;
      FUN_00da68a0(g_02391038);
    }
  }
  else {
    while( true ) {
      FUN_00d403d0();
      FUN_00d3fc60();
      if ((local_60 != '\0') && (local_68 != (void*)0x0)) {
        FUN_00d50b20();
      }
      local_60 = '\0';
      local_68 = (void*)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = puVar4;
      while( true ) {
        lVar5 = (int64_t)(int)local_50;
        iVar11 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar11);
        if (*(int *)((int64_t)local_58 + 0xc) <= iVar11) break;
        local_68 = *(void**)(local_58[2] + 8 + lVar5 * 8);
        cVar3 = FUN_00e34230();
        if (((cVar3 == '\0') && (cVar3 = FUN_00e34240(), cVar3 == '\0')) &&
           (cVar3 = FUN_00e34250(), cVar3 == '\0')) {
          bVar13 = local_50 < 0;
          uVar9 = local_50._4_4_;
        }
        else {
          lVar5 = local_50;
          uVar9 = ~local_50._4_4_;
          local_50 = CONCAT44(uVar9,(int)local_50);
          bVar13 = -1 < lVar5;
        }
        if (uVar9 != 0) {
          if (uVar9 == 0 || bVar13) {
            iVar11 = -uVar9;
          }
          else {
            local_50._4_4_ = (uint)((uint64_t)local_50 >> 0x20);
            local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar9);
            FUN_00d23690(uVar9,uVar9);
            local_48 = local_48 + local_50._4_4_;
            iVar11 = 0;
          }
          local_50 = CONCAT44(iVar11,(int)local_50);
        }
      }
      FUN_0079b950();
      if (*(int *)((int64_t)puVar4 + 0xc) == 0) break;
      FUN_00da68a0(g_02391038);
    }
  }
  FUN_00d50b20();
  if (local_78 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar12 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c91010
// ============================================================
// Function: FUN_01c91010
// Address: 01c91010
// Size: 2024 bytes
// Class: MUSignatureEditorRulerView
// String references:
//   "%s %s %s\n"
//   "%@ %@ %@ (%I cores)\n\n"
//   "%I Note(s) of %I File(s)\n\n"
//   "Archiving"
//   "Unarchiving"
//   "Plain Rendering"
//   "Plain Rendering in Realtime"
//   "Editing Pitch"
//   "Edited Rendering"
//   "Edited Rendering in Realtime"
//   "Analyzing Audio"
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void* FUN_01c91010(uint64_t param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  void*puVar3;
  int64_t *plVar4;
  void*puVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  void*puVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  void*this_ptr;
  bool bVar12;
  uint8_t local_140 [8];
  uint8_t local_138 [8];
  int64_t *local_128;
  char local_120;
  int64_t local_118;
  char local_110;
  int64_t *local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t *local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  void*local_a8;
  char local_a0;
  void*local_98;
  uint local_90;
  uint32_t local_8c;
  int64_t local_88;
  uint64_t local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  uint32_t local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  plVar4 = g_028b7260;
  plVar11 = (int64_t *)*param_2;
  if (g_028b7260 != plVar11) {
    if (plVar11 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
    g_028b7260 = plVar11;
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar11 = (int64_t *)*param_2;
  }
  if ((plVar11 != (int64_t *)0x0) && (g_028b7268 == '\0')) {
    g_028b7268 = '\x01';
    FUN_00e8cb90();
  }
  puVar8 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar8 = &g_025795a8;
  (*g_025795c0)();
  if (g_028b7230 == puVar8) {
    bVar2 = false;
    bVar1 = false;
  }
  else {
    bVar2 = true;
    bVar1 = true;
    bVar12 = g_028b7230 != (void*)0x0;
    g_028b7230 = puVar8;
    if (bVar12) {
      FUN_00d50b20();
    }
  }
  if (g_028b7238 == '\0') {
    g_028b7238 = '\x01';
    FUN_00e8cb90();
    bVar1 = bVar2;
  }
  if (!bVar1) {
    FUN_00d50b20();
  }
  lVar9 = FUN_00003040();
  uVar10 = FUN_00003050();
  local_78 = FUN_00003060();
  local_90 = 3;
  local_98 = (void*)&g_02670858;
  local_88 = lVar9;
  local_80 = uVar10;
  FUN_00d94d80(&g_02670858,&local_98);
  FUN_00dec0e0();
  (**(code **)(*local_128 + 0x398))();
  FUN_00dec0e0();
  (**(code **)(*local_108 + 0x3a0))();
  FUN_00dec0e0();
  (**(code **)(*local_e8 + 0x3a8))();
  uVar6 = FUN_00da6b30();
  FUN_002bd7b0(local_138,local_140,4);
  local_98 = (void*)&g_02670890;
  local_58 = uVar6;
  FUN_00d94d80();
  local_98 = (void*)&g_025df260;
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  local_98 = (void*)&g_0253d630;
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  local_98 = &g_024c5048;
  if (((char)local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_f0 != '\0') && (local_f8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_e0 != '\0') && (local_e8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_110 != '\0') && (local_118 != 0)) {
    FUN_00d50b20();
  }
  if ((local_100 != '\0') && (local_108 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if ((local_120 != '\0') && (local_128 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*(int64_t *)*param_2 + 0x9b0))();
  uVar6 = *(void*)((int64_t)local_98 + 0xc);
  if ((char)local_90 != '\0') {
    FUN_00d50b20();
  }
  (**(code **)(*g_028b7260 + 0x9b0))();
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
  local_d0 = '\0';
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01293ed0(&local_c8,&local_d8);
  puVar8 = local_98;
  if ((char)local_90 == '\0') {
    if (local_98 != (void*)0x0) {
      FUN_00d50b00();
      if (((char)local_90 != '\0') && (local_98 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    local_90 = local_90 & 0xffffff00;
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (puVar8 == (void*)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(void*)((int64_t)puVar8 + 0xc);
  }
  local_90 = 2;
  local_98 = (void*)&g_024c3df0;
  local_88 = CONCAT44(local_88._4_4_,uVar7);
  local_8c = uVar6;
  FUN_00d94d80(&g_024c3df0,&local_98);
  FUN_00da6ff0();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_01c90e10();
  FUN_00da7150();
  FUN_01ca6970();
  puVar5 = local_98;
  if (((char)local_90 == '\0') && (local_98 != (void*)0x0)) {
    FUN_00d50b00();
    if (((char)local_90 != '\0') && (local_98 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01ca5d90();
  local_a8 = g_028b7230;
  local_a0 = 0;
  if (g_028b7230 != (void*)0x0) {
    FUN_00d50b00();
  }
  lVar9 = g_026fceb8;
  local_a0 = '\x01';
  if (g_026fceb8 != 0) {
    FUN_00d50b00();
  }
  local_b8 = lVar9;
  local_b0 = '\x01';
  FUN_01ca93d0();
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a0 != '\0') && (local_a8 != (void*)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d8c7d0();
  if (g_028b7250 != 0) {
    FUN_00d50130();
  }
  if (g_028b7250 != 0) {
    g_028b7250 = 0;
    FUN_00d50b20();
  }
  if (g_028b7260 != (int64_t *)0x0) {
    g_028b7260 = (int64_t *)0x0;
    FUN_00d50b20();
  }
  if (g_028b7240 != 0) {
    g_028b7240 = 0;
    FUN_00d50b20();
  }
  *(void*)(this_ptr + 1) = 0;
  puVar3 = g_028b7230;
  if (g_028b7230 != (void*)0x0) {
    FUN_00d50b00();
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  if (puVar5 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar8 != (void*)0x0) {
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 01c8f0f0
// ============================================================
// Function: FUN_01c8f0f0
// Address: 01c8f0f0
// Size: 1209 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c8f0f0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int iVar8;
  uint32_t uVar9;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t *local_a8;
  char local_a0;
  int64_t *local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  int64_t local_38;
  
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  lVar5 = local_78;
  if ((((local_70 == '\0') && (local_78 != 0)) && (FUN_00d50b00(), local_70 != '\0')) &&
     (local_78 != 0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)FUN_00e8fc40();
  FUN_00274ea0();
  *plVar4 = (int64_t)&g_02630138;
  plVar4[2] = (int64_t)&g_02630600;
  plVar4[7] = 0;
  (*g_02630150)();
  local_a8 = g_028b7260;
  local_a0 = 0;
  if (g_028b7260 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_a0 = '\x01';
  (**(code **)(*plVar4 + 0x410))();
  if ((local_a0 != '\0') && (local_a8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*g_028b7260 + 0x9b0))();
  local_88 = local_50;
  local_80 = 0;
  if (local_48 == '\0') {
    if (local_50 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_48 = '\0';
  }
  local_80 = '\x01';
  FUN_00243390();
  lVar2 = local_78;
  if (local_70 == '\0') {
    if (((local_78 != 0) && (FUN_00d50b00(), local_70 != '\0')) && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = '\0';
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    local_38 = lVar5;
    local_70 = '\0';
    local_78 = 0;
    local_68 = lVar2;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_40 = plVar4;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar8 = -local_60._4_4_;
        }
        else {
          iVar8 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar8);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar8 = 0;
        }
        local_60 = CONCAT44(iVar8,(int)local_60);
      }
      lVar5 = (int64_t)(int)local_60;
      iVar8 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar8);
      if (*(int *)(local_68 + 0xc) <= iVar8) break;
      lVar7 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(int64_t *)(lVar7 + 8 + lVar5 * 8);
      pvVar3 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01274b60();
      lVar5 = local_50;
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (lVar5 != 0) {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar9 = FUN_01274b60();
        lVar5 = local_b8;
        if (local_b0 == '\0') {
          if (local_b8 != 0) {
            uVar9 = FUN_00d50b00();
          }
        }
        else {
          local_b0 = '\0';
        }
        local_50 = lVar5;
        local_48 = '\0';
        FUN_00d233f0(uVar9,local_58 + (int)local_60);
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          FUN_00d50b20();
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    FUN_001159b0();
    lVar5 = local_38;
    plVar4 = local_40;
  }
  plVar1 = g_028b7260;
  local_90 = 0;
  if (g_028b7260 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  local_98 = plVar1;
  local_90 = '\x01';
  local_d8 = lVar2;
  local_d0 = '\0';
  local_c8 = 0;
  local_c0 = '\0';
  FUN_01a26560(g_0241eeb0,&local_d8,&local_c8,0);
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*plVar4 + 0x418))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c8fe40
// ============================================================
// Function: FUN_01c8fe40
// Address: 01c8fe40
// Size: 887 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c8fe40(uint64_t param_1)

{
  void *pvVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void* pVar4;
  void* pVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int64_t local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific((void*)param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_40 == 0) {
    uVar6 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
    lVar8 = 0;
  }
  else {
    lVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  uVar2 = uVar6;
  pvVar1 = _pthread_getspecific((void*)uVar6);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_40 == 0) {
    pVar4 = (void*)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
    lVar10 = 0;
  }
  else {
    lVar10 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      pVar4 = 0;
    }
    else {
      pVar4 = 0;
    }
  }
  pVar5 = pVar4;
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_012ebfe0();
  pvVar1 = _pthread_getspecific(pVar5);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_012ebd30();
  uVar2 = FUN_00aea410(dVar12,2);
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_012dc370();
  FUN_012d1940();
  (**(code **)(*plVar3 + 0x398))(g_02410f78);
  FUN_00b335a0();
  (**(code **)(*plVar3 + 0x3a0))();
  (**(code **)(*plVar3 + 0x418))();
  (**(code **)(*plVar3 + 0x368))();
  FUN_0141c4c0(0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x690))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  FUN_00da6e20();
  dVar13 = g_0241eeb8;
  if (dVar12 <= g_0241eeb8) {
    dVar13 = dVar12;
  }
  iVar9 = (int)((dVar13 - dVar11) * g_02410f78);
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      (**(code **)(*plVar3 + 0x400))(0x400,uVar2);
      iVar7 = iVar7 + 0x400;
    } while (iVar7 < iVar9);
  }
  FUN_00da6fa0();
  (**(code **)(*plVar3 + 0x370))();
  FUN_00d50b20();
  if ((char)pVar4 == '\0' && lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0' && lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c8f960
// ============================================================
// Function: FUN_01c8f960
// Address: 01c8f960
// Size: 834 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c8f960(uint64_t param_1)

{
  void *pvVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void* pVar4;
  void* pVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t lVar8;
  int iVar9;
  int64_t lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int64_t local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific((void*)param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  if (local_40 == 0) {
    uVar6 = CONCAT71((int7)((uint64_t)param_1 >> 8),1);
    lVar8 = 0;
  }
  else {
    lVar8 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
    }
  }
  uVar2 = uVar6;
  pvVar1 = _pthread_getspecific((void*)uVar6);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  if (local_40 == 0) {
    pVar4 = (void*)CONCAT71((int7)((uint64_t)uVar2 >> 8),1);
    lVar10 = 0;
  }
  else {
    lVar10 = local_40;
    if (local_38 == '\0') {
      FUN_00d50b00();
      pVar4 = 0;
    }
    else {
      pVar4 = 0;
    }
  }
  pVar5 = pVar4;
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_012ebfe0();
  pvVar1 = _pthread_getspecific(pVar5);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar12 = (double)FUN_012ebd30();
  uVar2 = FUN_00aea410(dVar12,2);
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_0038cc50();
  (**(code **)(*plVar3 + 0x18))();
  FUN_012dc370();
  FUN_012d1940();
  (**(code **)(*plVar3 + 0x398))(g_02410f78);
  FUN_00b335a0();
  (**(code **)(*plVar3 + 0x3a0))();
  (**(code **)(*plVar3 + 0x418))();
  (**(code **)(*plVar3 + 0x368))();
  FUN_0141c350(0);
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  (**(code **)(*plVar3 + 0x690))();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  dVar13 = g_0241eeb8;
  if (dVar12 <= g_0241eeb8) {
    dVar13 = dVar12;
  }
  iVar9 = (int)((dVar13 - dVar11) * g_02410f78);
  if (0 < iVar9) {
    iVar7 = 0;
    do {
      (**(code **)(*plVar3 + 0x400))(0x400,uVar2);
      iVar7 = iVar7 + 0x400;
    } while (iVar7 < iVar9);
  }
  (**(code **)(*plVar3 + 0x370))();
  FUN_00d50b20();
  if ((char)pVar4 == '\0' && lVar10 != 0) {
    FUN_00d50b20();
  }
  if ((char)uVar6 == '\0' && lVar8 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c93360
// ============================================================
// Function: FUN_01c93360
// Address: 01c93360
// Size: 592 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c93360(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plVar3;
  void *pvVar4;
  int64_t this_ptr;
  int64_t **pplVar5;
  int64_t *local_48;
  char local_40;
  char local_31;
  
  plVar3 = (int64_t *)*param_2;
  FUN_001152a0();
  if (plVar3 == (int64_t *)0x0) {
LAB_01c933a5:
    param_2 = &g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c933a5;
  }
  local_31 = (char)param_2[1];
  if ((local_31 == '\0') || (*param_2 == 0)) {
    if (*param_2 == 0) {
      return;
    }
  }
  else {
    FUN_00d50b00();
  }
  lVar1 = g_026e1370;
  if (g_026e1370 != 0) {
    FUN_00d50b00();
  }
  pplVar5 = &local_48;
  FUN_000175c0();
  plVar3 = local_48;
  if (local_40 == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40 != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40 = '\0';
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (plVar3 == (int64_t *)0x0) goto LAB_01c93593;
  plVar3 = (int64_t *)FUN_00dd6dc0();
  local_48 = plVar3;
  FUN_001156b0();
  if (plVar3 == (int64_t *)0x0) {
LAB_01c93471:
    pplVar5 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar3 + 0x360))();
    cVar2 = FUN_00e85ea0();
    if (cVar2 == '\0') goto LAB_01c93471;
  }
  plVar3 = *pplVar5;
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b00();
  }
  if (*(char *)(this_ptr + 0x28) == '\0') {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd9a0();
  }
  pvVar4 = _pthread_getspecific(param_1);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_011ef3f0();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01c93593:
  if (local_31 != '\0') {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 01c92050
// ============================================================
// Function: FUN_01c92050
// Address: 01c92050
// Size: 619 bytes
// Class: MUSignatureEditorRulerView
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c92050(void* param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  void *pvVar3;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar4;
  int64_t local_58;
  char local_50;
  int64_t local_40;
  char local_38;
  
  FUN_00d243f0();
  lVar1 = *arg1;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0xc)) {
      iVar4 = 0;
      do {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar3 = _pthread_getspecific(param_1);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          if ((local_38 == '\0') && (local_40 != 0)) {
            FUN_00d50b00();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          local_38 = '\0';
          FUN_00d21140();
          if (local_40 != 0) {
            FUN_00d50b20();
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(lVar1 + 0xc));
    }
    FUN_001159b0();
  }
  lVar1 = *param_2;
  lVar2 = *(int64_t *)(this_ptr + 0x28);
  if (lVar2 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x28) = lVar1;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 01c8e070
// ============================================================
// Function: FUN_01c8e070
// Address: 01c8e070
// Size: 568 bytes
// Class: MUSignatureEditorRulerView
// String references:
//   "MUSignatureEditorRulerView"
// === MUSignatureEditorRulerView properties ===
//                   _primaryGridColor
//                   _secondaryGridColor
//                   _currentlyEditedSignatureStartQuarter
//                   _currentGrid
//                   _showDestinationGrid
//                   _destinationGrid
//                   _destinationAlpha
//                   _editTimelineMode
//                   _timelineHelper
//                   _runloopObserver
//                   _targetEditor
//                   _reassignsScalesAndChords
//                   _audioSourceElements
//                   _tempoEditorRulerView


void FUN_01c8e070(void)

{
  int iVar1;
  void*this_ptr;
  
  FUN_000a32b0();
  *this_ptr = &g_0266f0a0;
  this_ptr[2] = &g_0266f9c8;
  FUN_01c8e2d0();
  *(void*)(this_ptr + 0x28) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ecfc3 == '\0') {
    FUN_01c8e5f0();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x141) = 0;
  // [STATIC_INIT: property registration]
  if (g_027ecfc3 == '\0') {
    FUN_01c8e780();
    FUN_00e87980();
  }
  return;
}

