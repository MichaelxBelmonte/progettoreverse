// Function: FUN_01bcf5e0
// Address: 01bcf5e0
// Size: 993 bytes
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


void FUN_01bcf5e0(uint64_t param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int64_t *plVar4;
  char unaff_SIL;
  int64_t *this_ptr;
  int64_t *plVar5;
  float fVar6;
  uint32_t uVar7;
  int64_t local_80;
  char local_78;
  int64_t *local_40;
  char local_38;
  
  FUN_01beea30();
  if (local_78 == '\0') {
    if (local_80 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_002dff80();
  if (local_38 == '\0') {
    if (local_40 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (local_80 != 0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != 0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x7b8))();
  if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((float)((uint64_t)param_1 >> 0x20) <= g_02390124) {
    plVar5 = (int64_t *)0x0;
    bVar1 = false;
    bVar2 = false;
    if (local_40 == (int64_t *)0x0) goto LAB_01bcf99d;
  }
  else {
    bVar1 = false;
    plVar5 = (int64_t *)0x0;
LAB_01bcf6f0:
    (**(code **)(*this_ptr + 0x658))();
    if (local_40 == plVar5) {
      if ((!bVar1) && (local_40 != (int64_t *)0x0)) {
        plVar4 = plVar5;
        if (local_38 != '\0') goto LAB_01bcf743;
        bVar1 = true;
        FUN_00d50b00();
      }
    }
    else {
      plVar4 = local_40;
      if (local_38 == '\0') {
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar5 = local_40;
          bVar1 = true;
          goto LAB_01bcf790;
        }
      }
      else {
        if ((bVar1) && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_01bcf743:
        local_38 = '\0';
      }
      plVar5 = plVar4;
      bVar1 = true;
    }
LAB_01bcf790:
    if (plVar5 != (int64_t *)0x0) {
      iVar3 = FUN_01d3a5a0();
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar3 == 6) goto LAB_01bcf974;
      iVar3 = FUN_01d3a5a0();
      if (iVar3 == 5) {
        FUN_01d3abf0();
        fVar6 = (float)FUN_01e466c0();
        fVar6 = fVar6 - (float)param_1;
        uVar7 = FUN_00d05150();
        FUN_01bcf2f0();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        if (unaff_SIL != '\0') {
          local_38 = '\0';
          FUN_00d23480();
        }
        (**(code **)(*(int64_t *)this_ptr[0x2a] + 0x9d0))();
        FUN_00d50b00();
        uVar7 = FUN_01e437f0(uVar7);
        if (this_ptr != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        (**(code **)(*local_40 + 0x948))(uVar7,fVar6);
        if (local_40 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
      }
      goto LAB_01bcf6f0;
    }
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_01bcf974:
    (**(code **)(*local_40 + 0x948))((int)g_023dccec,(int)g_023dccf4);
  }
  FUN_00d50b20();
  bVar2 = bVar1;
LAB_01bcf99d:
  if (local_40 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((bVar2) && (plVar5 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

