// Function: FUN_01982df0
// Address: 01982df0
// Size: 2296 bytes
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


void FUN_01982df0(uint64_t param_1,uint64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  void *pvVar5;
  void* pVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t *plVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  uint64_t uVar12;
  float extraout_XMM0_Db;
  uint8_t auVar13 [16];
  float fVar14;
  uint32_t uVar15;
  uint32_t in_XMM1_Dc;
  uint32_t in_XMM1_Dd;
  int64_t local_88;
  char local_80;
  float local_78;
  char local_5c;
  char local_50;
  int64_t *local_48;
  char local_40;
  
  uVar15 = (uint32_t)((uint64_t)param_2 >> 0x20);
  fVar14 = (float)param_2;
  if (*(char *)(this_ptr + 0x18a) == '\0') {
    bVar8 = *(char *)(this_ptr + 0x18b) == '\0';
    lVar1 = *(int64_t *)(this_ptr + 0x178);
  }
  else {
    bVar8 = false;
    lVar1 = *(int64_t *)(this_ptr + 0x178);
  }
  if (((lVar1 == 0) && (!bVar8)) && (*(int *)(this_ptr + 0x198) == 1)) {
    return;
  }
  if (*(char *)(this_ptr + 0x18c) == '\0') {
    local_5c = '\0';
  }
  else {
    FUN_01989f80();
    local_5c = (**(code **)(*local_48 + 0xb58))();
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01989f80();
  (**(code **)(&UNK_00001418 + *local_48))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01989f80();
  fVar10 = (float)(**(code **)(*local_48 + 3000))();
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  fVar11 = (float)FUN_01e3f820();
  fVar14 = fVar14 * g_0239011c;
  FUN_01e3f820();
  FUN_01e3f820();
  auVar13._4_4_ = uVar15;
  auVar13._0_4_ = fVar14 + fVar11;
  auVar13._8_4_ = in_XMM1_Dc;
  auVar13._12_4_ = in_XMM1_Dd;
  auVar13 = roundss(auVar13,auVar13,9);
  local_78 = auVar13._0_4_;
  if ((*(char *)(this_ptr + 0x188) == '\0') || (*(int64_t *)(this_ptr + 0x170) == 0)) {
LAB_0198300e:
    bVar8 = false;
    plVar7 = (int64_t *)0x0;
  }
  else {
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0125e7c0();
    if (local_40 == '\0') {
      if (local_48 == (int64_t *)0x0) goto LAB_0198300e;
      FUN_00d50b00();
    }
    else if (local_48 == (int64_t *)0x0) goto LAB_0198300e;
    pvVar5 = _pthread_getspecific((void*)param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfcb0();
    if (local_48 == (int64_t *)0x0) {
      cVar3 = '\0';
    }
    else {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_013ddf90();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    }
    if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar3 == '\0') {
      plVar7 = (int64_t *)0x0;
      bVar8 = false;
    }
    else {
      FUN_01cfcdc0();
      if (local_48 == (int64_t *)0x0) {
        plVar7 = (int64_t *)0x0;
        bVar8 = false;
      }
      else {
        bVar8 = true;
        plVar7 = local_48;
        if (local_40 == '\0') {
          FUN_00d50b00();
        }
      }
      local_78 = local_78 + g_02390124;
    }
    FUN_00d50b20();
  }
  if (local_5c == '\0') {
    if (plVar7 == (int64_t *)0x0) {
      FUN_01d48b40();
      FUN_01cfcdc0();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d488d0();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d48b40();
      FUN_01d488d0();
    }
  }
  else {
    FUN_01d48b40();
    if (plVar7 == (int64_t *)0x0) {
      FUN_01cfcdc0();
      if (local_40 == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40 = '\0';
      }
      FUN_01d488d0();
      if (local_48 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01d488d0();
    }
  }
  if ((*(char *)(this_ptr + 0x18b) == '\0') && (*(char *)(this_ptr + 0x18a) == '\0')) {
    cVar3 = *(char *)(this_ptr + 0x188);
    if (cVar3 == '\0') {
      pVar6 = 0;
LAB_019834c5:
      bVar9 = cVar3 != '\0';
      pvVar5 = _pthread_getspecific(pVar6);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01263cf0();
      local_50 = (char)pVar6;
      cVar2 = cVar4;
      if (local_50 == '\0') {
        if (cVar3 != '\0') goto LAB_01983547;
      }
      else {
LAB_01983524:
        cVar4 = cVar2;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if (bVar9) goto LAB_01983547;
      }
    }
    else {
      pvVar5 = _pthread_getspecific((void*)param_1);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      if (local_48 != (int64_t *)0x0) {
        pvVar5 = _pthread_getspecific((void*)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268710();
        pvVar5 = _pthread_getspecific((void*)param_1);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar4 = FUN_01263cf0();
        bVar9 = true;
        cVar2 = '\x01';
        if (cVar4 == '\0') goto LAB_019834a4;
        goto LAB_01983524;
      }
LAB_019834a4:
      pVar6 = (void*)CONCAT71((int7)((uint64_t)param_1 >> 8),local_48 != (int64_t *)0x0);
      if (*(char *)(this_ptr + 0x188) == '\0') goto LAB_019834c5;
      bVar9 = true;
      cVar4 = '\0';
      cVar2 = '\0';
      if (local_48 != (int64_t *)0x0) goto LAB_01983524;
LAB_01983547:
      if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    if (cVar4 != '\0') {
      auVar13 = ZEXT416((uint)(fVar10 * g_0241b4d4 + fVar10 * g_0241b4d4));
      auVar13 = roundss(auVar13,auVar13,9);
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      if (local_5c != '\0') {
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))
                  (g_02390124 + local_78,extraout_XMM0_Db,g_02390124 + local_78,
                   extraout_XMM0_Db + auVar13._0_4_);
        (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
      }
      goto LAB_0198364e;
    }
  }
  (**(code **)(*(int64_t *)*arg1 + 0x3e0))();
LAB_0198364e:
  uVar12 = FUN_01d48b40();
  if (*(char *)(this_ptr + 0x18b) != '\0') {
    uVar12 = FUN_01982510(uVar12,2,local_78);
  }
  if (*(char *)(this_ptr + 0x18a) != '\0') {
    FUN_01982510(uVar12,0,local_78);
  }
  if ((bVar8) && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

