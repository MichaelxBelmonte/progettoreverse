// Function: FUN_01b5e5b0
// Address: 01b5e5b0
// Size: 4424 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperSlider"
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_01b5e5b0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void*puVar7;
  void* pVar8;
  int64_t **pplVar9;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar10;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
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
  int64_t local_1e0;
  char local_1d8;
  int64_t local_1d0;
  char local_1c8;
  int64_t local_1c0;
  char local_1b8;
  int64_t local_1b0;
  char local_1a8;
  int64_t local_1a0;
  char local_198;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  void*local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  void*local_130;
  char local_128;
  int64_t *local_120;
  char local_118;
  int64_t *local_110;
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
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01b5e5fd;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01b5e5fd:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_118 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    uVar10 = FUN_00d50b00();
    local_118 = '\x01';
    local_250 = 0;
    local_248 = '\0';
    local_120 = (int64_t *)(this_ptr + 0x70);
    FUN_00e8b9a0(uVar10,&local_250);
    if ((local_248 != '\0') && (local_250 != 0)) {
      FUN_00d50b20();
    }
    if ((local_118 != '\0') && (local_120 != (int64_t *)0x0)) {
      (**(code **)(*local_120 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  local_240 = *arg1;
  local_238 = '\0';
  FUN_01d2a770();
  if ((local_238 != '\0') && (local_240 != 0)) {
    FUN_00d50b20();
  }
  FUN_01b5e510();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01b5e742;
    }
  }
  else if (local_40 != (int64_t *)0x0) {
LAB_01b5e742:
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)(this_ptr + 0x70);
    local_108 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
    FUN_00d50b00();
    local_108 = '\x01';
    local_110 = plVar1;
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_00d4efa0();
    local_230 = g_027e4c88;
    if (g_027e4c88 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_228 = '\x01';
    FUN_00c841b0(uVar10,&local_230);
    local_d0 = local_40;
    local_c8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_c8 = '\x01';
    pVar8 = 4;
    FUN_00e8b850(4,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_228 != '\0') && (local_230 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != (int64_t *)0x0)) {
      (**(code **)(*local_110 + 0x10))();
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_f8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_f8 = '\x01';
    local_100 = plVar1;
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_00d4efa0();
    local_220 = g_027d4cf8;
    if (g_027d4cf8 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_218 = '\x01';
    FUN_00c841b0(uVar10,&local_220);
    local_c0 = local_40;
    local_b8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_b8 = '\x01';
    pVar8 = 4;
    FUN_00e8b850(4,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_218 != '\0') && (local_220 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      (**(code **)(*local_100 + 0x10))();
      FUN_00d50b20();
    }
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_e8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_e8 = '\x01';
    local_f0 = plVar1;
    pvVar6 = _pthread_getspecific(pVar8);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    uVar10 = FUN_00d4efa0();
    local_210 = g_027d4d00;
    if (g_027d4d00 != 0) {
      uVar10 = FUN_00d50b00();
    }
    local_208 = '\x01';
    FUN_00c841b0(uVar10,&local_210);
    local_b0 = local_40;
    local_a8 = 0;
    if (local_38 == '\0') {
      if (local_40 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_a8 = '\x01';
    param_1 = 4;
    FUN_00e8b850(4,&local_b0);
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_208 != '\0') && (local_210 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if ((local_e8 != '\0') && (local_f0 != (int64_t *)0x0)) {
      (**(code **)(*local_f0 + 0x10))();
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  FUN_01b5e510();
  local_e0 = local_40;
  local_d8 = 0;
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  local_d8 = '\x01';
  FUN_01ac7020();
  if ((local_d8 != '\0') && (local_e0 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar10 = FUN_01b60350();
  local_200 = g_027e4c58;
  if (*arg1 == 0) {
    return;
  }
  if (g_027e4c58 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_1f8 = '\x01';
  pplVar9 = &local_40;
  uVar10 = FUN_01e57490(uVar10,&local_200);
  plVar1 = local_40;
  if ((g_027e5dd8 == '\0') &&
     (iVar5 = ___cxa_guard_acquire(), uVar10 = extraout_XMM0_Da_00, iVar5 != 0)) {
    g_027e5d28 = FUN_001b37d0();
    g_027e5d10 = "MUSpectrumShaperSlider";
    g_027e5d18 = 0x200;
    param_1 = 0x1bdaad0;
    g_027e5d20 = FUN_01bdaad0;
    g_027e5d30 = 0;
    ram_00000000027e5d38 = 0;
    g_027e5d40 = 0;
    ram_00000000027e5d48 = 0;
    g_027e5d50 = 0;
    ram_00000000027e5d58 = 0;
    g_027e5d60 = 0;
    ram_00000000027e5d68 = 0;
    g_027e5d70 = 0;
    ram_00000000027e5d78 = 0;
    g_027e5d80 = 0;
    ram_00000000027e5d88 = 0;
    g_027e5d90 = 0;
    ram_00000000027e5d98 = 0;
    g_027e5da0 = 0;
    ram_00000000027e5da8 = 0;
    g_027e5db0 = 0;
    ram_00000000027e5db8 = 0;
    g_027e5dc0 = 0;
    ram_00000000027e5dc8 = 0;
    g_027e5dd0 = 0;
    uVar10 = ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_01b5ed2c:
    pplVar9 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    uVar10 = extraout_XMM0_Da;
    if (cVar4 == '\0') goto LAB_01b5ed2c;
  }
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      uVar10 = FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar10 = FUN_00d50b20();
  }
  if ((local_1f8 != '\0') && (local_200 != 0)) {
    uVar10 = FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_015b7ba0();
    lVar3 = g_027e4c90;
    lVar2 = g_027e4c60;
    if (iVar5 == 3) {
      if (g_027e4c90 != 0) {
        FUN_00d50b00();
      }
      local_1f0 = lVar3;
      local_1e8 = '\x01';
      FUN_01bd1950(g_02390d00);
      if ((local_1e8 != '\0') && (local_1f0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027e4c98;
      if (g_027e4c98 != 0) {
        FUN_00d50b00();
      }
      local_1e0 = lVar2;
      local_1d8 = '\x01';
      FUN_01bd1950(0);
      if ((local_1d8 != '\0') && (local_1e0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027e4ca0;
      if (g_027e4ca0 != 0) {
        FUN_00d50b00();
      }
      local_1d0 = lVar2;
      local_1c8 = '\x01';
      FUN_01bd1950(g_02390124);
      if ((local_1c8 != '\0') && (local_1d0 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = (**(code **)(*plVar1 + 0x9c0))();
      local_1c0 = g_027e4ca8;
      if (g_027e4ca8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_1b8 = '\x01';
      FUN_01e57260(uVar10,&local_1c0);
      local_98 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_98 = '\x01';
      local_a0 = local_50;
      FUN_00d4c980();
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_1b8 != '\0') && (local_1c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      if (g_027e4c60 != 0) {
        FUN_00d50b00();
      }
      local_1b0 = lVar2;
      local_1a8 = '\x01';
      FUN_01bd1950(g_02390d00);
      if ((local_1a8 != '\0') && (local_1b0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027e4c68;
      if (g_027e4c68 != 0) {
        FUN_00d50b00();
      }
      local_1a0 = lVar2;
      local_198 = '\x01';
      FUN_01bd1950(0);
      if ((local_198 != '\0') && (local_1a0 != 0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027e4c70;
      if (g_027e4c70 != 0) {
        FUN_00d50b00();
      }
      local_190 = lVar2;
      local_188 = '\x01';
      FUN_01bd1950(g_02390124);
      if ((local_188 != '\0') && (local_190 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = (**(code **)(*plVar1 + 0x9c0))();
      local_180 = g_027e4cb0;
      if (g_027e4cb0 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_178 = '\x01';
      FUN_01e57260(uVar10,&local_180);
      local_88 = 0;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_88 = '\x01';
      local_90 = local_50;
      FUN_00d4c980();
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    uVar10 = FUN_00d50b20();
  }
  lVar2 = g_027e4c78;
  if (g_027e4c78 != 0) {
    uVar10 = FUN_00d50b00();
  }
  local_170 = lVar2;
  local_168 = '\x01';
  pplVar9 = &local_40;
  FUN_01e57490(uVar10,&local_170);
  plVar1 = local_40;
  if ((g_027e5dd8 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_027e5d28 = FUN_001b37d0();
    g_027e5d10 = "MUSpectrumShaperSlider";
    g_027e5d18 = 0x200;
    param_1 = 0x1bdaad0;
    g_027e5d20 = FUN_01bdaad0;
    g_027e5d30 = 0;
    ram_00000000027e5d38 = 0;
    g_027e5d40 = 0;
    ram_00000000027e5d48 = 0;
    g_027e5d50 = 0;
    ram_00000000027e5d58 = 0;
    g_027e5d60 = 0;
    ram_00000000027e5d68 = 0;
    g_027e5d70 = 0;
    ram_00000000027e5d78 = 0;
    g_027e5d80 = 0;
    ram_00000000027e5d88 = 0;
    g_027e5d90 = 0;
    ram_00000000027e5d98 = 0;
    g_027e5da0 = 0;
    ram_00000000027e5da8 = 0;
    g_027e5db0 = 0;
    ram_00000000027e5db8 = 0;
    g_027e5dc0 = 0;
    ram_00000000027e5dc8 = 0;
    g_027e5dd0 = 0;
    ___cxa_guard_release();
  }
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x360))();
    cVar4 = FUN_00e85ea0();
    if (cVar4 != '\0') goto LAB_01b5f236;
  }
  pplVar9 = (int64_t **)&g_02802688;
LAB_01b5f236:
  plVar1 = *pplVar9;
  if (*(char *)(pplVar9 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(pplVar9 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar5 = FUN_015b7ba0();
    if (iVar5 == 3) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *(void*)((int64_t)puVar7 + 0xc) = 0;
      *(void*)((int64_t)puVar7 + 0x14) = 0;
      *(void*)((int64_t)puVar7 + 0x1a) = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      *puVar7 = &g_0264c460;
      FUN_00d500e0();
      uVar10 = FUN_00d48ac0();
      local_160 = g_027e4cb8;
      if (g_027e4cb8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_158 = '\x01';
      FUN_01e57260(uVar10,&local_160);
      local_80 = local_40;
      local_78 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_78 = '\x01';
      FUN_00d4c980();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != 0)) {
        FUN_00d50b20();
      }
      local_148 = '\0';
      local_150 = puVar7;
      (**(code **)(*plVar1 + 0x9b8))();
      if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_02576110;
      *(void*)((int64_t)puVar7 + 0xc) = 0;
      *(void*)((int64_t)puVar7 + 0x14) = 0;
      *(void*)((int64_t)puVar7 + 0x1a) = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[9] = 0;
      (*g_02576128)();
      uVar10 = FUN_00d48ac0();
      local_140 = g_027e4cb8;
      if (g_027e4cb8 != 0) {
        uVar10 = FUN_00d50b00();
      }
      local_138 = '\x01';
      FUN_01e57260(uVar10,&local_140);
      local_70 = local_40;
      local_68 = 0;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_68 = '\x01';
      FUN_00d4c980();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      local_128 = '\0';
      local_130 = puVar7;
      (**(code **)(*plVar1 + 0x9b8))();
      if ((local_128 != '\0') && (local_130 != (void*)0x0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    FUN_00d50b20();
  }
  return;
}

