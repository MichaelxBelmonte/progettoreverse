// Function: FUN_01b63c50
// Address: 01b63c50
// Size: 987 bytes
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


void FUN_01b63c50(uint64_t param_1)

{
  bool bVar1;
  int64_t *plVar2;
  char cVar3;
  int iVar4;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  uint64_t local_58;
  uint32_t local_50;
  int local_44;
  int64_t *local_40;
  int64_t *local_38;
  
  iVar4 = FUN_01d6fde0();
  lVar5 = g_027e3c00;
  while (g_027e3c00 = lVar5, 1 < iVar4) {
    FUN_01d70040();
    iVar4 = FUN_01d6fde0();
    lVar5 = g_027e3c00;
  }
  if (iVar4 == 0) {
    if (lVar5 != 0) {
      FUN_00d50b00();
    }
    local_c8 = '\x01';
    local_d0 = lVar5;
    FUN_00e427c0(param_1,&local_d0);
    local_90 = local_70;
    local_88 = 0;
    if (local_68 == '\0') {
      if (local_70 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    local_88 = '\x01';
    FUN_01d6f990();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_01b57f70();
  plVar6 = local_70;
  if ((((local_68 == '\0') && (local_70 != (int64_t *)0x0)) && (FUN_00d50b00(), local_68 != '\0'))
     && (local_70 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01b57e50();
  plVar7 = local_70;
  if (((local_68 == '\0') && (local_70 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_68 != '\0' && (local_70 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  FUN_01b58c00();
  plVar2 = local_70;
  if (local_68 == '\0') {
    if (local_70 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01b63dbf;
    }
  }
  else if (local_70 != (int64_t *)0x0) {
LAB_01b63dbf:
    local_40 = plVar7;
    local_38 = plVar6;
    local_68 = '\0';
    local_70 = (int64_t *)0x0;
    local_60 = plVar2;
    local_50 = 0;
    local_58 = 0;
    if (*(int *)((int64_t)plVar2 + 0xc) < 1) {
      local_44 = 0;
    }
    else {
      lVar5 = 0;
      local_44 = 0;
      do {
        plVar6 = *(int64_t **)(plVar2[2] + lVar5 * 8);
        local_c0 = local_40;
        local_b8 = '\0';
        local_70 = plVar6;
        cVar3 = (**(code **)(*plVar6 + 0x50))();
        if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar3 != '\0') {
          local_44 = (int)lVar5 + 1;
        }
        local_a8 = '\0';
        local_b0 = plVar6;
        FUN_00e427c0(param_1,&local_b0);
        local_80 = local_a0;
        local_78 = 0;
        if (local_98 == '\0') {
          if (local_a0 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_98 = '\0';
        }
        local_78 = '\x01';
        FUN_01d6f990();
        if ((local_78 != '\0') && (local_80 != 0)) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)lVar5);
      } while ((int)lVar5 < *(int *)((int64_t)plVar2 + 0xc));
    }
    FUN_00018280();
    bVar1 = false;
    plVar6 = local_38;
    plVar7 = local_40;
    goto LAB_01b63f79;
  }
  bVar1 = true;
LAB_01b63f79:
  (**(code **)(**(int64_t **)(this_ptr + 0x70) + 0x918))();
  if (!bVar1) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

