// Function: FUN_0142e5e0
// Address: 0142e5e0
// Size: 582 bytes
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


int64_t * FUN_0142e5e0(void)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  
  uVar1 = *(uint *)(*(int64_t *)(arg1 + 0xf0) + 0xc);
  if ((int)uVar1 < 1) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return this_ptr;
  }
  lVar6 = 0;
  lVar5 = 0;
  bVar2 = false;
  lVar8 = **(int64_t **)(*(int64_t *)(arg1 + 0xf0) + 0x10);
  bVar3 = bVar2;
  if (lVar8 == 0) goto LAB_0142e660;
  do {
    if (lVar8 != 0) {
      FUN_00d50b00();
    }
    bVar2 = true;
    if ((bVar3) && (lVar5 != 0)) {
      FUN_00d50b20();
    }
LAB_0142e690:
    lVar5 = lVar8;
    cVar4 = FUN_012c2b70();
    if (cVar4 != '\0') goto LAB_0142e7fd;
    if ((uint64_t)uVar1 - 1 == lVar6) {
      uVar7 = 0;
      while( true ) {
        lVar8 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0xf0) + 0x10) + uVar7 * 8);
        if (lVar5 == lVar8) {
          if ((!bVar2) && (lVar5 != 0)) {
            bVar2 = true;
            FUN_00d50b00();
          }
        }
        else {
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          if ((bVar2) && (lVar5 != 0)) {
            bVar2 = true;
            FUN_00d50b20();
            lVar5 = lVar8;
          }
          else {
            bVar2 = true;
            lVar5 = lVar8;
          }
        }
        cVar4 = FUN_012c2b70();
        if (cVar4 != '\0') break;
        uVar7 = uVar7 + 1;
        if (uVar1 == uVar7) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          if ((bVar2) && (lVar5 != 0)) {
            FUN_00d50b20();
          }
          return this_ptr;
        }
      }
LAB_0142e7fd:
      *(void*)(this_ptr + 1) = 0;
      if ((!bVar2) && (lVar5 != 0)) {
        FUN_00d50b00();
      }
      *this_ptr = lVar5;
      *(void*)(this_ptr + 1) = 1;
      return this_ptr;
    }
    lVar6 = lVar6 + 1;
    lVar8 = *(int64_t *)(*(int64_t *)(*(int64_t *)(arg1 + 0xf0) + 0x10) + lVar6 * 8);
    bVar3 = bVar2;
  } while (lVar5 != lVar8);
LAB_0142e660:
  lVar8 = lVar5;
  if ((!bVar2) && (lVar5 != 0)) {
    bVar2 = true;
    FUN_00d50b00();
  }
  goto LAB_0142e690;
}

