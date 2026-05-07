// Function: FUN_01b70bd0
// Address: 01b70bd0
// Size: 768 bytes
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


void* FUN_01b70bd0(void*param_1,void*param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  void *pvVar6;
  void*puVar7;
  void* pVar8;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  void*local_60;
  uint32_t local_54;
  int64_t local_50;
  char local_48;
  void*local_40;
  void*local_38;
  
  local_40 = param_2;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar7 = (void*)&g_02572358;
  *puVar3 = &g_02572358;
  local_38 = puVar3;
  (*g_02572370)();
  cVar2 = (**(code **)(*arg1 + 0x9d0))();
  if (cVar2 != '\0') {
    local_54 = 0xffffffff;
    local_68 = '\0';
    local_70 = 0;
    local_60 = (void*)FUN_00e7bdb0();
    uVar4 = FUN_00e7bdb0();
    if (local_40 != (void*)0x0) {
      uVar5 = FUN_00e7bdb0();
      *local_40 = uVar5;
      puVar7 = local_40;
    }
    if (param_1 == (void*)0x0) {
      while( true ) {
        pVar8 = (void*)puVar7;
        lVar1 = arg1[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar4 = (**(code **)(*arg1 + 0x9d8))();
        puVar7 = (void*)(**(code **)(*arg1 + 0x9e0))();
        cVar2 = FUN_01252960(puVar7,uVar4,&local_70,&local_60);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') break;
        if (local_70 != 0) {
          puVar7 = local_38;
          if ((*(int *)((int64_t)local_38 + 0xc) == 0) && (local_40 != (void*)0x0)) {
            *local_40 = local_60;
            puVar7 = local_60;
          }
          local_50 = local_70;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
    }
    else {
      uVar5 = FUN_00e7bdb0();
      *param_1 = uVar5;
      puVar7 = param_1;
      while( true ) {
        pVar8 = (void*)puVar7;
        lVar1 = arg1[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar8);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar5 = (**(code **)(*arg1 + 0x9d8))();
        puVar7 = (void*)(**(code **)(*arg1 + 0x9e0))();
        cVar2 = FUN_01252960(puVar7,uVar5,&local_70,&local_60);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') break;
        if (local_70 != 0) {
          if ((*(int *)((int64_t)local_38 + 0xc) == 0) && (local_40 != (void*)0x0)) {
            *local_40 = local_60;
          }
          local_50 = local_70;
          local_48 = '\0';
          FUN_00d21140();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          *param_1 = uVar4;
          puVar7 = param_1;
        }
      }
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = local_38;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

