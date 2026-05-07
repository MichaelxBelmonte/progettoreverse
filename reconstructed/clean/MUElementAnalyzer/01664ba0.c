// Function: FUN_01664ba0
// Address: 01664ba0
// Size: 768 bytes
// Class: MUElementAnalyzer
// === MUElementAnalyzer properties ===
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more


void FUN_01664ba0(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  uint64_t uVar4;
  int64_t local_50;
  char local_48;
  int64_t local_30;
  char local_28;
  
  if ((((*(int64_t *)(this_ptr + 0xf0) == 0) || (*(double *)(this_ptr + 0xc0) <= 0.0)) ||
      (*(int64_t *)(this_ptr + 0xd0) < 1)) || (*(int *)(this_ptr + 0xe0) == 0)) {
    uVar4 = FUN_01505340();
    if ((local_28 == '\0') && (local_30 != 0)) {
      uVar4 = FUN_00d50b00();
    }
    FUN_012ca6e0(uVar4,0);
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01505960();
    FUN_01667210();
    if (local_30 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  else {
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df30();
    if ((local_28 != '\0') && (local_30 != 0)) {
      FUN_00d50b20();
    }
    if (local_30 == 0) {
      plVar3 = *(int64_t **)(this_ptr + 0xf0);
      pvVar1 = _pthread_getspecific(param_1);
      if (pvVar1 != (void *)0x0) {
        plVar3 = *(int64_t **)(this_ptr + 0xf0);
        lVar2 = FUN_00e8b990();
        if (lVar2 != 0) {
          plVar3 = (int64_t *)plVar3[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
        }
      }
      (**(code **)(*plVar3 + 0x3d0))();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0124df10();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132c9b0(2,0);
    if ((local_28 == '\0') && (local_30 != 0)) {
      FUN_00d50b00();
    }
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    FUN_01667210();
    if (local_30 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}

