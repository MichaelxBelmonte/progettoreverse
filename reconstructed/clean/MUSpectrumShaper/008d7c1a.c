// Function: FUN_008d7c1a
// Address: 008d7c1a
// Size: 650 bytes
// Class: MUSpectrumShaper
// String references:
//   "initializationVector"
//   "encryptionMode"
//   "version"
//   "SymmetricKey"
//   "keyAlgorithm"
//   "encryptionPadding"
//   "keyData"
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


int FUN_008d7c1a(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int64_t lVar11;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(0xb,8);
  iVar6 = (**(code **)(*arg1 + 0x90))();
  iVar7 = (**(code **)(*arg1 + 0x38))();
  iVar8 = (**(code **)(*arg1 + 0x30))(0xc,8);
  iVar9 = (**(code **)(*arg1 + 0x90))();
  iVar10 = (**(code **)(*arg1 + 0x38))();
  iVar10 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10;
  if (*(char *)(this_ptr + 0x4b) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xd,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar10 = iVar1 + iVar10 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x4c) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x15,0xf);
    iVar2 = (**(code **)(*arg1 + 0x58))();
    iVar2 = iVar1 + iVar10 + iVar2;
    for (lVar11 = *(int64_t *)(this_ptr + 0x18); lVar11 != *(int64_t *)(this_ptr + 0x20);
        lVar11 = lVar11 + 1) {
      iVar1 = (**(code **)(*arg1 + 0x80))();
      iVar2 = iVar2 + iVar1;
    }
    iVar1 = (**(code **)(*arg1 + 0x60))();
    iVar10 = (**(code **)(*arg1 + 0x38))();
    iVar10 = iVar1 + iVar2 + iVar10;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x16,0xf);
  iVar2 = (**(code **)(*arg1 + 0x58))();
  iVar2 = iVar1 + iVar10 + iVar2;
  for (lVar11 = *(int64_t *)(this_ptr + 0x30); lVar11 != *(int64_t *)(this_ptr + 0x38);
      lVar11 = lVar11 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar2 = iVar2 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x40))();
  iVar5 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar2 + iVar3 + iVar4 + iVar5;
}

