// Function: FUN_009e56ac
// Address: 009e56ac
// Size: 530 bytes
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


uint64_t FUN_009e56ac(void)

{
  uint8_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  byte *pbVar7;
  void*puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  int64_t this_ptr;
  byte *pbVar12;
  byte *pbVar13;
  uint64_t uVar14;
  
  lVar2 = *(int64_t *)(this_ptr + 0x58);
  uVar3 = *(void*)(lVar2 + 8);
  if ((*(char *)(lVar2 + 0x135) == '\0') ||
     (((*(byte *)(this_ptr + 0x61) & 4) != 0 && (*(char *)(this_ptr + 0x7b) == '\0')))) {
    puVar11 = (uint64_t *)(lVar2 + 0x120);
    bVar5 = false;
  }
  else {
    puVar11 = (uint64_t *)(lVar2 + 0x128);
    bVar5 = true;
  }
  uVar9 = *puVar11;
  pbVar4 = *(byte **)(this_ptr + 0x28);
  if (uVar9 == 0xffffffffffffffff) {
    pbVar13 = *(byte **)(this_ptr + 0x20);
  }
  else {
    pbVar13 = *(byte **)(this_ptr + 0x20);
    if (uVar9 < (uint64_t)((int64_t)pbVar13 - (int64_t)pbVar4)) {
      pbVar13 = pbVar4 + uVar9;
    }
  }
  pbVar7 = pbVar4;
  pbVar12 = pbVar4;
  if (pbVar4 != pbVar13) {
    uVar10 = **(void**)(this_ptr + 0x48);
    uVar1 = *(void*)(this_ptr + 0x78);
    while( true ) {
      pbVar7 = (byte *)FUN_009e63a2(uVar10,uVar3,uVar1);
      pbVar12 = *(byte **)(this_ptr + 0x28);
      if (pbVar12 == pbVar7) break;
      pbVar12 = pbVar12 + 1;
      *(byte **)(this_ptr + 0x28) = pbVar12;
      pbVar7 = pbVar13;
      if (pbVar12 == pbVar13) break;
      uVar10 = **(void**)(this_ptr + 0x48);
      uVar1 = *(void*)(this_ptr + 0x78);
    }
  }
  uVar14 = (uint64_t)(uint)((int)pbVar7 - (int)pbVar4);
  uVar9 = *(uint64_t *)(lVar2 + 0x120);
  if (uVar14 < uVar9) {
    uVar9 = 0;
  }
  else if (bVar5) {
    if ((*(char *)(lVar2 + 0x134) != '\0') && (uVar14 < *(uint64_t *)(lVar2 + 0x128))) {
      *(byte **)(this_ptr + 0x30) = pbVar12;
    }
    if (uVar14 != uVar9) {
      puVar8 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      if (puVar8 < *(void**)(this_ptr + 0xd0)) {
        FUN_009e5df8();
        puVar8 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      }
      *puVar8 = 7;
      *(uint64_t *)(puVar8 + 2) = uVar14;
      *(int64_t *)(puVar8 + 4) = lVar2;
      *(byte **)(puVar8 + 6) = pbVar7;
      *(void**)(this_ptr + 0xd8) = puVar8;
    }
    uVar3 = *(void*)(lVar2 + 0x10);
    *(void*)(this_ptr + 0x58) = uVar3;
    uVar9 = CONCAT71((int7)((uint64_t)uVar3 >> 8),1);
  }
  else {
    if (uVar14 < *(uint64_t *)(lVar2 + 0x128)) {
      puVar8 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      if (puVar8 < *(void**)(this_ptr + 0xd0)) {
        FUN_009e5df8();
        puVar8 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      }
      *puVar8 = 0xc;
      *(uint64_t *)(puVar8 + 2) = uVar14;
      *(int64_t *)(puVar8 + 4) = lVar2;
      *(byte **)(puVar8 + 6) = pbVar7;
      *(void**)(this_ptr + 0xd8) = puVar8;
      pbVar7 = *(byte **)(this_ptr + 0x28);
    }
    *(void*)(this_ptr + 0x58) = *(void*)(lVar2 + 0x10);
    if (pbVar7 == *(byte **)(this_ptr + 0x20)) {
      uVar6 = *(uint *)(lVar2 + 0x118) & 2;
    }
    else {
      uVar6 = *(byte *)(lVar2 + 0x18 + (uint64_t)*pbVar7) >> 1 & 1;
    }
    uVar9 = (uint64_t)(uVar6 != 0);
  }
  return uVar9;
}

