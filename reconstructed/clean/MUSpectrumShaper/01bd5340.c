// Function: FUN_01bd5340
// Address: 01bd5340
// Size: 1170 bytes
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


void FUN_01bd5340(void)

{
  int64_t *plVar1;
  dword *pdVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  void *pvVar6;
  dword *pdVar7;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar8;
  int64_t local_80;
  char local_78;
  int local_50;
  int64_t local_40;
  char local_38;
  
  if ((*arg1 == 0) ||
     (cVar5 = (**(code **)(**(int64_t **)(this_ptr + 0x78) + 0x50))(), cVar5 == '\0')) {
    lVar3 = *(int64_t *)(this_ptr + 0x78);
    if (*(int *)(lVar3 + 0xc) != 0) {
      local_50 = -1;
      plVar1 = (int64_t *)(this_ptr + 0x70);
      while (local_50 = local_50 + 1, local_50 < *(int *)(lVar3 + 0xc)) {
        pvVar6 = _pthread_getspecific((void*)*(void*)(lVar3 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        (**(code **)(*plVar1 + 0x10))();
        FUN_00d50b00();
        FUN_000823a0();
        FUN_00e86210();
        lVar4 = g_026f6f60;
        if (g_026f6f60 != 0) {
          FUN_00d50b00();
        }
        FUN_00c841b0();
        if (local_38 == '\0') {
          if (local_40 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_00e8b9a0();
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x10))();
          FUN_00d50b20();
        }
      }
      FUN_000be170();
    }
    FUN_00d243f0();
    lVar3 = *(int64_t *)(this_ptr + 0x78);
    if (*(int *)(lVar3 + 0xc) != 0) {
      if (0 < *(int *)(lVar3 + 0xc)) {
        pdVar2 = (dword *)(this_ptr + 0x70);
        iVar8 = 0;
        pdVar7 = pdVar2;
        do {
          pvVar6 = _pthread_getspecific((void*)pdVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          (**(code **)(*(int64_t *)pdVar2 + 0x10))();
          FUN_00d50b00();
          FUN_000823a0();
          FUN_00e86210();
          lVar4 = g_026f6f60;
          if (g_026f6f60 != 0) {
            FUN_00d50b00();
          }
          FUN_00c841b0();
          local_78 = 0;
          if (local_38 == '\0') {
            if (local_40 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_38 = '\0';
          }
          local_78 = '\x01';
          local_80 = local_40;
          pdVar7 = &section_00000068.reloff;
          FUN_00e8b850(0xa0,&local_80);
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (pdVar2 != (dword *)0x0) {
            (**(code **)(*(int64_t *)pdVar2 + 0x10))();
            FUN_00d50b20();
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < *(int *)(lVar3 + 0xc));
      }
      FUN_000be170();
    }
    FUN_01bd7b90();
  }
  else {
    FUN_01bd69c0();
  }
  return;
}

