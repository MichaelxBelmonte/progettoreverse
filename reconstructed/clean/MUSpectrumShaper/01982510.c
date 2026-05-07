// Function: FUN_01982510
// Address: 01982510
// Size: 1698 bytes
// Class: MUSpectrumShaper
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


void FUN_01982510(uint64_t param_1,uint64_t param_2,uint param_3)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  int in_EDX;
  void*arg1;
  bool bVar5;
  float fVar6;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  
  fVar6 = (float)((uint64_t)param_2 >> 0x20);
  if ((g_028b0f08 == (void*)0x0) || (g_028b0f11 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0f08 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02680400;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(void*)((int64_t)puVar4 + 0x39) = 0;
      *(void*)((int64_t)puVar4 + 0x41) = 0;
      (*g_02680418)();
      if (g_028b0f08 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = g_028b0f08 != (void*)0x0;
        g_028b0f08 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b0f10 == '\0') {
        g_028b0f10 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(g_023b1614,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,g_02390d2c);
      FUN_01d38b10();
      g_028b0f11 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0f11 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b0f18 == (void*)0x0) || (g_028b0f21 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0f18 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02680400;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(void*)((int64_t)puVar4 + 0x39) = 0;
      *(void*)((int64_t)puVar4 + 0x41) = 0;
      (*g_02680418)();
      if (g_028b0f18 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = g_028b0f18 != (void*)0x0;
        g_028b0f18 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b0f20 == '\0') {
        g_028b0f20 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(g_023b1614,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,g_023b1614);
      FUN_01d38b10();
      g_028b0f21 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0f21 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b0f28 == (void*)0x0) || (g_028b0f31 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0f28 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02680400;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(void*)((int64_t)puVar4 + 0x39) = 0;
      *(void*)((int64_t)puVar4 + 0x41) = 0;
      (*g_02680418)();
      if (g_028b0f28 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = g_028b0f28 != (void*)0x0;
        g_028b0f28 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b0f30 == '\0') {
        g_028b0f30 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(g_02390d2c,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,g_02390d2c);
      FUN_01d38b10();
      g_028b0f31 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0f31 = '\x01';
      FUN_00e8cb70();
    }
  }
  if ((g_028b0f38 == (void*)0x0) || (g_028b0f41 == '\0')) {
    FUN_00e8cb50();
    if (g_028b0f38 == (void*)0x0) {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar4 = &g_02680400;
      *(void*)((int64_t)puVar4 + 0xc) = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(void*)((int64_t)puVar4 + 0x39) = 0;
      *(void*)((int64_t)puVar4 + 0x41) = 0;
      (*g_02680418)();
      if (g_028b0f38 == puVar4) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        bVar3 = true;
        bVar2 = true;
        bVar5 = g_028b0f38 != (void*)0x0;
        g_028b0f38 = puVar4;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028b0f40 == '\0') {
        g_028b0f40 = '\x01';
        FUN_00e8cb90();
        bVar2 = bVar3;
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      FUN_01d39400(0,0);
      FUN_01d38ba0(g_02390d2c,0);
      fVar6 = 0.0;
      FUN_01d38ba0(0,g_023b1614);
      FUN_01d38b10();
      g_028b0f41 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028b0f41 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_01e3f820();
  FUN_01e3f820();
  fVar6 = fVar6 + extraout_XMM0_Db_00 + g_02390d00;
  if (in_EDX == 0) {
    (**(code **)(*(int64_t *)*arg1 + 0x370))(param_3,extraout_XMM0_Db);
    puVar4 = g_028b0f08;
    plVar1 = (int64_t *)*arg1;
    if (g_028b0f08 != (void*)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x370))(0,fVar6 - extraout_XMM0_Db);
    puVar4 = g_028b0f18;
    plVar1 = (int64_t *)*arg1;
    if (g_028b0f18 != (void*)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  else {
    if (in_EDX != 2) {
      return;
    }
    (**(code **)(*(int64_t *)*arg1 + 0x370))(param_3,extraout_XMM0_Db);
    puVar4 = g_028b0f28;
    plVar1 = (int64_t *)*arg1;
    if (g_028b0f28 != (void*)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x370))(0,fVar6 - extraout_XMM0_Db);
    puVar4 = g_028b0f38;
    plVar1 = (int64_t *)*arg1;
    if (g_028b0f38 != (void*)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar1 + 0x3a0))();
    if (puVar4 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x370))
            (param_3 ^ g_023945e0,(uint)fVar6 ^ g_023945e0);
  return;
}

