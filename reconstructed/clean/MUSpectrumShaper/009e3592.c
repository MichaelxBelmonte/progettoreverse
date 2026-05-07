// Function: FUN_009e3592
// Address: 009e3592
// Size: 532 bytes
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


uint32_t FUN_009e3592(void)

{
  int64_t *plVar1;
  int *piVar2;
  int64_t *plVar3;
  uint32_t uVar4;
  int64_t lVar5;
  uint uVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  
  lVar5 = FUN_00ace010();
  this_ptr[0x1a] = lVar5;
  this_ptr[0x1b] = lVar5 + 0xff8;
  *(void*)(lVar5 + 0xff8) = 0;
  *(void*)(this_ptr + 0x1c) = 0x400;
  this_ptr[0xd] = 0;
  if ((*(uint *)(this_ptr + 0xc) >> 9 & 1) == 0) {
    this_ptr[5] = this_ptr[3];
    this_ptr[7] = this_ptr[3];
    this_ptr[0xb] = *(int64_t *)(*(int64_t *)this_ptr[9] + 0x48);
    FUN_009e3b3c(this_ptr[4]);
    *(int64_t *)(this_ptr[2] + 0x18) = this_ptr[3];
    plVar3 = *(int64_t **)(this_ptr[9] + 8);
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    FUN_009e5ecc();
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        LOCK();
        piVar2 = (int *)((int64_t)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x18))();
        }
      }
    }
    uVar6 = *(uint *)(this_ptr + 0xc) | 0x200;
    *(uint *)(this_ptr + 0xc) = uVar6;
  }
  else {
    lVar5 = FUN_009e2686();
    lVar5 = *(int64_t *)(lVar5 + 8);
    this_ptr[5] = lVar5;
    this_ptr[7] = lVar5;
    if (((*(byte *)((int64_t)this_ptr + 0x61) & 8) == 0) && (lVar5 = FUN_009e3c78(), lVar5 == 0))
    {
      if (this_ptr[5] == this_ptr[4]) {
        uVar4 = 0;
        goto LAB_009e378c;
      }
      this_ptr[5] = this_ptr[5] + 1;
    }
    FUN_009e3b3c(this_ptr[4],this_ptr[7]);
    uVar6 = *(uint *)(this_ptr + 0xc);
  }
  if ((uVar6 >> 0x11 & 1) != 0) {
    FUN_009e3b3c(this_ptr[4],this_ptr[3]);
    *(int64_t *)(*this_ptr + 0x18) = this_ptr[3];
  }
  FUN_00acdf70();
  uVar7 = 4;
  if ((*(byte *)((int64_t)this_ptr + 0x61) & 0x10) == 0) {
    uVar7 = (uint64_t)*(uint *)(*(int64_t *)this_ptr[9] + 0x50);
  }
  uVar4 = (**(code **)(&g_025240d0 + uVar7 * 0x10))();
LAB_009e378c:
  FUN_009e7f5c();
  return uVar4;
}

