// Function: FUN_009e5486
// Address: 009e5486
// Size: 550 bytes
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


uint64_t FUN_009e5486(void)

{
  int64_t lVar1;
  int64_t lVar2;
  byte *pbVar3;
  uint64_t uVar4;
  bool bVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  uint64_t *puVar9;
  byte *pbVar10;
  void*puVar11;
  uint64_t uVar12;
  int64_t this_ptr;
  uint64_t uVar13;
  byte *pbVar14;
  uint64_t *local_50;
  uint64_t *local_40;
  
  lVar1 = *(int64_t *)(this_ptr + 0x58);
  lVar2 = *(int64_t *)(lVar1 + 8);
  if (*(char *)(lVar1 + 0x135) == '\0') {
    puVar9 = (uint64_t *)(lVar1 + 0x120);
    bVar5 = false;
  }
  else if (((*(byte *)(this_ptr + 0x61) & 4) == 0) ||
          (puVar9 = (uint64_t *)(lVar1 + 0x120), *(char *)(this_ptr + 0x7b) != '\0')) {
    puVar9 = (uint64_t *)(lVar1 + 0x128);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  local_40 = (uint64_t *)(lVar1 + 0x128);
  local_50 = (uint64_t *)(lVar1 + 0x120);
  uVar12 = *puVar9;
  pbVar3 = *(byte **)(this_ptr + 0x28);
  pbVar6 = pbVar3;
  pbVar14 = pbVar3;
  if (uVar12 == 0xffffffffffffffff) {
    pbVar10 = *(byte **)(this_ptr + 0x20);
  }
  else {
    pbVar10 = *(byte **)(this_ptr + 0x20);
    if (uVar12 < (uint64_t)((int64_t)pbVar10 - (int64_t)pbVar3)) {
      pbVar10 = pbVar3 + uVar12;
    }
  }
  while (pbVar6 != pbVar10) {
    bVar7 = *pbVar6;
    if (*(char *)(this_ptr + 0x78) != '\0') {
      bVar7 = (**(code **)(**(int64_t **)(**(int64_t **)(this_ptr + 0x50) + 8) + 0x28))();
    }
    pbVar14 = *(byte **)(this_ptr + 0x28);
    if (*(char *)(lVar2 + 0x10 + (uint64_t)bVar7) == '\0') break;
    *(byte **)(this_ptr + 0x28) = pbVar14 + 1;
    pbVar6 = pbVar14 + 1;
    pbVar14 = pbVar10;
  }
  uVar13 = (uint64_t)(uint)((int)pbVar14 - (int)pbVar3);
  uVar12 = *local_50;
  if (uVar13 < uVar12) {
    uVar12 = 0;
  }
  else if (bVar5) {
    if ((*(char *)(lVar1 + 0x134) != '\0') && (uVar13 < *local_40)) {
      *(byte **)(this_ptr + 0x30) = pbVar14;
    }
    if (uVar13 != uVar12) {
      puVar11 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      if (puVar11 < *(void**)(this_ptr + 0xd0)) {
        FUN_009e5df8();
        puVar11 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      }
      *puVar11 = 7;
      *(uint64_t *)(puVar11 + 2) = uVar13;
      *(int64_t *)(puVar11 + 4) = lVar1;
      *(byte **)(puVar11 + 6) = pbVar14;
      *(void**)(this_ptr + 0xd8) = puVar11;
    }
    uVar4 = *(void*)(lVar1 + 0x10);
    *(void*)(this_ptr + 0x58) = uVar4;
    uVar12 = CONCAT71((int7)((uint64_t)uVar4 >> 8),1);
  }
  else {
    if (uVar13 < *local_40) {
      puVar11 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      if (puVar11 < *(void**)(this_ptr + 0xd0)) {
        FUN_009e5df8();
        puVar11 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      }
      *puVar11 = 0xb;
      *(uint64_t *)(puVar11 + 2) = uVar13;
      *(int64_t *)(puVar11 + 4) = lVar1;
      *(byte **)(puVar11 + 6) = pbVar14;
      *(void**)(this_ptr + 0xd8) = puVar11;
      pbVar14 = *(byte **)(this_ptr + 0x28);
    }
    *(void*)(this_ptr + 0x58) = *(void*)(lVar1 + 0x10);
    if (pbVar14 == *(byte **)(this_ptr + 0x20)) {
      uVar8 = *(uint *)(lVar1 + 0x118) & 2;
    }
    else {
      uVar8 = *(byte *)(lVar1 + 0x18 + (uint64_t)*pbVar14) >> 1 & 1;
    }
    uVar12 = (uint64_t)(uVar8 != 0);
  }
  return uVar12;
}

