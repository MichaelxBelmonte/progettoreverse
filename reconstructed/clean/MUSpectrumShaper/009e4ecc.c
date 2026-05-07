// Function: FUN_009e4ecc
// Address: 009e4ecc
// Size: 630 bytes
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


uint64_t FUN_009e4ecc(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void*puVar5;
  uint64_t uVar6;
  byte *pbVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  byte bVar11;
  byte bVar12;
  int *piVar13;
  
  pbVar7 = *(byte **)(this_ptr + 0x28);
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  if (pbVar7 == *(byte **)(this_ptr + 0x20)) {
    bVar12 = (byte)*(uint *)(lVar1 + 0x118);
    bVar11 = (byte)((*(uint *)(lVar1 + 0x118) & 2) >> 1);
  }
  else {
    bVar12 = *(byte *)(lVar1 + 0x18 + (uint64_t)*pbVar7);
    bVar11 = (bVar12 & 2) >> 1;
  }
  bVar12 = bVar12 & 1;
  piVar13 = *(int **)(this_ptr + 0xd8);
  if (((*piVar13 != 5) || (piVar13[6] != *(int *)(lVar1 + 0x130))) ||
     (lVar4 = *(int64_t *)(this_ptr + 0x80), *(int *)(lVar4 + 0x10) != piVar13[6])) {
    piVar13 = piVar13 + -0xc;
    if (piVar13 < *(int **)(this_ptr + 0xd0)) {
      FUN_009e5df8();
      pbVar7 = *(byte **)(this_ptr + 0x28);
      piVar13 = (int *)(*(int64_t *)(this_ptr + 0xd8) + -0x30);
    }
    uVar10 = 0x80000003;
    if (*(int64_t *)(this_ptr + 0xc0) != *(int64_t *)(this_ptr + 0xb8)) {
      uVar10 = *(void*)(*(int64_t *)(this_ptr + 0xc0) + -0x70);
    }
    *piVar13 = 5;
    FUN_009e623c(pbVar7,this_ptr + 0x80,uVar10);
    *(int **)(this_ptr + 0xd8) = piVar13;
    lVar4 = *(int64_t *)(this_ptr + 0x80);
  }
  uVar2 = *(uint64_t *)(lVar1 + 0x128);
  if (*(int64_t *)(lVar4 + 0x18) == 0) {
    lVar8 = *(int64_t *)(this_ptr + 0x28);
LAB_009e4fe0:
    *(int64_t *)(lVar4 + 0x20) = lVar8;
    lVar4 = *(int64_t *)(this_ptr + 0x80);
    uVar9 = *(uint64_t *)(lVar4 + 0x18);
  }
  else {
    lVar8 = *(int64_t *)(this_ptr + 0x28);
    if (lVar8 != *(int64_t *)(lVar4 + 0x20)) goto LAB_009e4fe0;
    *(uint64_t *)(lVar4 + 0x18) = uVar2;
    uVar9 = uVar2;
  }
  if (uVar9 < *(uint64_t *)(lVar1 + 0x120)) {
    if (bVar12 == 0) {
      return 0;
    }
LAB_009e5001:
    *(uint64_t *)(lVar4 + 0x18) = uVar9 + 1;
    uVar6 = *(void*)(lVar1 + 8);
  }
  else {
    if (*(char *)(lVar1 + 0x135) == '\0') {
      bVar12 = bVar12 ^ 1 | uVar2 <= uVar9;
LAB_009e50c8:
      if (bVar11 == 0) {
        if (bVar12 != 0) {
          return 0;
        }
        goto LAB_009e5001;
      }
      if (bVar12 == 0) {
        uVar6 = *(void*)(lVar1 + 8);
        puVar5 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x18);
        if (puVar5 < *(void**)(this_ptr + 0xd0)) {
          FUN_009e5df8();
          puVar5 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x18);
        }
        uVar3 = *(void*)(this_ptr + 0x28);
        *puVar5 = 0xd;
        *(void*)(puVar5 + 2) = uVar6;
        *(void*)(puVar5 + 4) = uVar3;
        *(void**)(this_ptr + 0xd8) = puVar5;
      }
    }
    else {
      if ((*(byte *)(this_ptr + 0x61) & 4) == 0) {
        if ((uVar9 < uVar2) && (bVar12 == 1)) {
LAB_009e5037:
          if (bVar11 != 0) {
            uVar6 = *(void*)(lVar1 + 0x10);
            puVar5 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x18);
            if (puVar5 < *(void**)(this_ptr + 0xd0)) {
              FUN_009e5df8();
              puVar5 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x18);
            }
            uVar3 = *(void*)(this_ptr + 0x28);
            *puVar5 = 4;
            *(void*)(puVar5 + 2) = uVar6;
            *(void*)(puVar5 + 4) = uVar3;
            *(void**)(this_ptr + 0xd8) = puVar5;
            lVar4 = *(int64_t *)(this_ptr + 0x80);
            uVar9 = *(uint64_t *)(lVar4 + 0x18);
          }
          goto LAB_009e5001;
        }
      }
      else {
        bVar12 = bVar12 ^ 1 | uVar2 <= uVar9;
        if (*(char *)(this_ptr + 0x7b) == '\0') goto LAB_009e50c8;
        if (bVar12 == 0) goto LAB_009e5037;
      }
      if (bVar11 == 0) {
        return 0;
      }
    }
    uVar6 = *(void*)(lVar1 + 0x10);
  }
  *(void*)(this_ptr + 0x58) = uVar6;
  return CONCAT71((int7)((uint64_t)uVar6 >> 8),1);
}

