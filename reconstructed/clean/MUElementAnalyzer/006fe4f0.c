// Function: FUN_006fe4f0
// Address: 006fe4f0
// Size: 588 bytes
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


void FUN_006fe4f0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  int local_38;
  uint64_t local_34;
  
  if (*(int64_t *)(this_ptr + 0x10) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    cVar2 = FUN_00e34230();
    if (cVar2 == '\0') {
      cVar2 = FUN_00e34240();
      if (cVar2 == '\0') {
        lVar3 = *(int64_t *)(this_ptr + 0x10);
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        local_60 = *param_2;
        local_58 = '\0';
        FUN_002e4d80(param_1,&local_60);
        lVar1 = local_50;
        if (local_48 == '\0') {
          if (local_50 != 0) {
            FUN_00d50b00();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          local_48 = '\0';
        }
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
        if (lVar1 != 0) {
          local_48 = 0;
          local_50 = 0;
          local_40 = lVar1;
          local_34 = 0;
          for (lVar3 = 0; local_38 = (int)lVar3, local_38 < *(int *)(lVar1 + 0xc); lVar3 = lVar3 + 1
              ) {
            local_50 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar3 * 8);
            FUN_01bca0a0();
          }
          FUN_00713b30();
          FUN_00d50b20();
        }
      }
    }
    else {
      lVar3 = *(int64_t *)(this_ptr + 0x10);
      if (lVar3 != 0) {
        FUN_00d50b00();
      }
      local_70 = *param_2;
      local_68 = '\0';
      FUN_002e4d80(param_1,&local_70);
      lVar1 = local_50;
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_48 = '\0';
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar3 != 0) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        local_48 = 0;
        local_50 = 0;
        local_40 = lVar1;
        local_34 = 0;
        for (lVar3 = 0; local_38 = (int)lVar3, local_38 < *(int *)(lVar1 + 0xc); lVar3 = lVar3 + 1)
        {
          local_50 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar3 * 8);
          FUN_01bca0a0();
        }
        FUN_00713b30();
        FUN_00d50b20();
      }
    }
  }
  return;
}

