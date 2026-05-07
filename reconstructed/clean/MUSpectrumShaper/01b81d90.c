// Function: FUN_01b81d90
// Address: 01b81d90
// Size: 567 bytes
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


uint64_t FUN_01b81d90(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  void* pVar5;
  void*puVar6;
  void*puVar7;
  undefined7 uVar8;
  int64_t *this_ptr;
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  int64_t local_40;
  char local_38;
  
  cVar3 = (**(code **)(*this_ptr + 0x9d0))();
  if (cVar3 == '\0') {
    puVar7 = (void*)0x0;
    goto LAB_01b81f95;
  }
  local_50 = FUN_00e7bdb0();
  local_48 = FUN_00e7bdb0();
  puVar6 = &local_48;
  FUN_01b70bd0(puVar6,&local_50);
  lVar1 = local_40;
  pVar5 = (void*)puVar6;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_38 = '\0';
  }
  if (*(int *)(lVar1 + 0xc) == 1) {
    local_60 = local_50;
    local_58 = local_48;
    local_38 = '\0';
    local_40 = 0;
    lVar1 = this_ptr[0x2b];
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    puVar6 = &local_60;
    cVar3 = FUN_01253c10(puVar6,&local_40,&local_58,0);
    lVar2 = local_40;
    pVar5 = (void*)puVar6;
    if (cVar3 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
LAB_01b81edd:
      local_60 = local_50;
      local_58 = local_48;
      lVar1 = this_ptr[0x2b];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar3 = FUN_012535e0(&local_60,&local_40,&local_58,0);
      lVar2 = local_40;
      if (cVar3 == '\0') {
        if (lVar1 == 0) {
          puVar7 = (void*)0x0;
        }
        else {
          FUN_00d50b20();
          puVar7 = (void*)0x0;
        }
      }
      else {
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        uVar8 = (undefined7)((uint64_t)lVar2 >> 8);
        puVar7 = (void*)CONCAT71(uVar8,lVar2 != 0);
        if ((lVar2 != 0) && (param_2 != '\0')) {
          puVar7 = (void*)CONCAT71(uVar8,1);
          (**(code **)(*this_ptr + 0xa40))();
        }
      }
    }
    else {
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if (lVar2 == 0) goto LAB_01b81edd;
      puVar7 = &g_02802501;
      if (param_2 != '\0') {
        (**(code **)(*this_ptr + 0xa40))();
      }
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    puVar7 = (void*)0x0;
  }
  FUN_00d50b20();
LAB_01b81f95:
  return (uint64_t)puVar7 & 0xffffffff;
}

