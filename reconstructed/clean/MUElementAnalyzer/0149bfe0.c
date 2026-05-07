// Function: FUN_0149bfe0
// Address: 0149bfe0
// Size: 723 bytes
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


float FUN_0149bfe0(double param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  int64_t *in_RCX;
  float *arg1;
  uint64_t uVar4;
  uint64_t uVar5;
  uint uVar6;
  uint64_t uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int64_t local_50;
  char local_48;
  float local_40;
  int local_38;
  float local_34;
  
  if (*in_RCX != 0) {
    FUN_00d216c0();
  }
  fVar12 = 0.0;
  if (2 < param_2) {
    fVar11 = arg1[1];
    local_40 = fVar11 - *arg1;
    uVar6 = param_2 - 1;
    uVar7 = (uint64_t)uVar6 - 1;
    fVar12 = fVar11;
    fVar10 = local_40;
    if (uVar6 == 2) {
      fVar9 = 0.0;
      iVar3 = 0;
      uVar4 = 2;
    }
    else {
      iVar3 = 0;
      fVar9 = 0.0;
      uVar5 = 2;
      do {
        fVar1 = arg1[uVar5];
        bVar8 = 0.0 <= fVar10;
        fVar13 = fVar1 - fVar12;
        bVar2 = 0.0 < fVar12;
        if ((bVar2 && bVar8) && fVar13 < 0.0) {
          fVar9 = fVar9 + fVar12;
        }
        fVar12 = arg1[uVar5 + 1];
        fVar10 = fVar12 - fVar1;
        if ((0.0 < fVar1 && 0.0 <= fVar13) && fVar10 < 0.0) {
          fVar9 = fVar9 + fVar1;
        }
        iVar3 = iVar3 + (uint)((bVar2 && bVar8) && fVar13 < 0.0) +
                (uint)((0.0 < fVar1 && 0.0 <= fVar13) && fVar10 < 0.0);
        uVar4 = uVar5 + 2;
        bVar8 = uVar5 != (uVar7 & 0xfffffffffffffffe);
        uVar5 = uVar4;
      } while (bVar8);
    }
    if ((uVar7 & 1) != 0) {
      bVar8 = arg1[uVar4] - fVar12 < 0.0;
      if ((0.0 < fVar12 && 0.0 <= fVar10) && bVar8) {
        fVar9 = fVar9 + fVar12;
      }
      iVar3 = iVar3 + (uint)((0.0 < fVar12 && 0.0 <= fVar10) && bVar8);
    }
    param_1 = g_0238fee8 / param_1;
    fVar12 = 0.0;
    if (iVar3 != 0) {
      fVar12 = fVar9 / (float)iVar3;
    }
    fVar10 = g_02391094 * fVar12;
    local_38 = 0;
    uVar7 = 2;
    local_34 = 0.0;
    while( true ) {
      bVar8 = 0.0 <= local_40;
      local_40 = arg1[uVar7] - fVar11;
      if (((bVar8) && (local_40 < 0.0)) && (fVar10 < fVar11)) {
        local_34 = local_34 + fVar11;
        local_38 = local_38 + 1;
        if (*in_RCX != 0) {
          FUN_014328b0((double)((float)((int)uVar7 + -1) * (float)param_1),(double)fVar11);
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_48 = '\0';
          }
          FUN_00d21140();
          if (local_50 != 0) {
            FUN_00d50b20();
          }
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      if (uVar6 == uVar7) break;
      fVar11 = arg1[uVar7];
      uVar7 = uVar7 + 1;
    }
    if (local_38 != 0) {
      fVar12 = local_34 / (float)local_38;
    }
  }
  return fVar12;
}

