// Function: FUN_009da82e
// Address: 009da82e
// Size: 612 bytes
// Class: MUSpectrumShaper
// String references:
//   "A regular expression cannot start with the alternation operator |."
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


uint64_t FUN_009da82e(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  byte *pbVar5;
  int64_t lVar6;
  void *pvVar7;
  undefined7 uVar9;
  uint64_t uVar8;
  int64_t lVar10;
  int64_t *this_ptr;
  void *pvVar11;
  int64_t lVar12;
  uint64_t uVar13;
  byte local_58 [24];
  int64_t local_40;
  int64_t local_38;
  
  if ((((int *)this_ptr[2] == (int *)0x0) || (*(int *)this_ptr[2] == 0)) &&
     ((*(uint *)(*this_ptr + 0x28) & 0x1000003) != 0)) {
    lVar12 = this_ptr[0x11];
    lVar6 = this_ptr[0xf];
    pbVar5 = local_58;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar5,lVar12 - lVar6);
    if ((local_58[0] & 1) != 0) {
      operator_delete(pbVar5);
    }
    uVar8 = 0;
  }
  else {
    if (*(uint *)(this_ptr + 0x13) < *(uint *)(this_ptr + 0x12)) {
      *(uint *)(this_ptr + 0x13) = *(uint *)(this_ptr + 0x12);
    }
    if (-1 < *(int *)((int64_t)this_ptr + 0x94)) {
      *(int *)(this_ptr + 0x12) = *(int *)((int64_t)this_ptr + 0x94);
    }
    this_ptr[0x11] = this_ptr[0x11] + 1;
    lVar2 = FUN_009d8a9c(param_1,0x18);
    lVar12 = *(int64_t *)(*this_ptr + 0x160);
    lVar3 = FUN_009dcfc8(0x120,0x11);
    lVar6 = *this_ptr;
    lVar10 = ((*(int64_t *)(lVar6 + 0x168) - *(int64_t *)(lVar6 + 0x160)) + 7U &
             0xfffffffffffffff8) + *(int64_t *)(lVar6 + 0x160);
    *(int64_t *)(lVar6 + 0x168) = lVar10;
    *(int64_t *)(lVar3 + 0x10) = lVar10 - lVar3;
    lVar6 = *(int64_t *)(*this_ptr + 0x168) - *(int64_t *)(*this_ptr + 0x160);
    this_ptr[0x15] = lVar6;
    if ((char)this_ptr[0x16] != '\0') {
      lVar3 = this_ptr[3];
      lVar6 = FUN_009d8a9c(lVar6,0x18);
      *(char *)(lVar6 + 0x10) = (char)lVar3;
    }
    lVar12 = (lVar2 - lVar12) + 0x120;
    plVar1 = (int64_t *)this_ptr[0x18];
    uVar9 = (undefined7)((uint64_t)this_ptr >> 8);
    if (plVar1 == (int64_t *)this_ptr[0x19]) {
      lVar6 = this_ptr[0x17];
      pvVar11 = (void *)((int64_t)plVar1 - lVar6);
      lVar2 = (int64_t)pvVar11 >> 3;
      uVar8 = lVar2 + 1;
      if (uVar8 >> 0x3d != 0) {
                            std::__vector_base_common<true>::__throw_length_error();
      }
      lVar3 = this_ptr[0x19] - lVar6;
      uVar13 = lVar3 >> 2;
      if (uVar13 < uVar8) {
        uVar13 = uVar8;
      }
      pvVar7 = (void *)0xfffffffffffffff;
      if (0xffffffffffffffe < (uint64_t)(lVar3 >> 3)) {
        uVar13 = 0x1fffffffffffffff;
      }
      if (uVar13 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        local_40 = lVar6;
        local_38 = lVar2;
        if (0x1fffffffffffffff < uVar13) {
                              FUN_009d5f52();
        }
        pvVar4 = operator_new(0xffffffff);
        lVar2 = local_38;
        lVar6 = local_40;
      }
      lVar2 = (int64_t)pvVar4 + lVar2 * 8 + 8;
      *(int64_t *)(lVar2 + -8) = lVar12;
      if (0 < (int64_t)pvVar11) {
        _memcpy(pvVar7,pvVar11,(size_t)lVar6);
      }
      this_ptr[0x17] = (int64_t)pvVar4;
      this_ptr[0x18] = lVar2;
      this_ptr[0x19] = (int64_t)((int64_t)pvVar4 + uVar13 * 8);
      uVar8 = CONCAT71(uVar9,1);
      if (lVar6 != 0) {
        operator_delete(pvVar7);
      }
    }
    else {
      *plVar1 = lVar12;
      this_ptr[0x18] = (int64_t)(plVar1 + 1);
      uVar8 = CONCAT71(uVar9,1);
    }
  }
  return uVar8 & 0xffffffff;
}

