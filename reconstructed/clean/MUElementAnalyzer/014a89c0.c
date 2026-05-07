// Function: FUN_014a89c0
// Address: 014a89c0
// Size: 584 bytes
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


void* FUN_014a89c0(float param_1,double param_2,double param_3)

{
  float fVar1;
  dword dVar2;
  int64_t lVar3;
  bool bVar4;
  bool bVar5;
  void*puVar6;
  void*this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t local_58;
  char local_50;
  int64_t local_38;
  
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  FUN_014a42b0(0,0,g_02391090,g_02421228);
  if (local_58 == 0) {
    bVar5 = true;
    local_38 = 0;
    dVar2 = MACH_HEADER.filetype;
  }
  else {
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
    bVar5 = false;
    dVar2 = *(dword *)(local_58 + 0xc);
    local_38 = local_58;
  }
  if ((int)dVar2 < 1) {
    bVar4 = false;
    lVar8 = 0;
  }
  else {
    lVar7 = 0;
    lVar8 = 0;
    bVar4 = false;
    do {
      lVar3 = *(int64_t *)(*(int64_t *)(local_38 + 0x10) + lVar7 * 8);
      if (lVar8 == lVar3) {
        if ((!bVar4) && (lVar8 != 0)) {
          bVar4 = true;
          FUN_00d50b00();
        }
LAB_014a8b30:
        fVar1 = *(float *)(lVar8 + 0x20);
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        if ((bVar4) && (lVar8 != 0)) {
          FUN_00d50b20();
          bVar4 = true;
          lVar8 = lVar3;
          goto LAB_014a8b30;
        }
        bVar4 = true;
        fVar1 = *(float *)(lVar3 + 0x20);
        lVar8 = lVar3;
      }
      if (((param_1 < fVar1) && (param_2 <= *(double *)(lVar8 + 0x10))) &&
         (*(double *)(lVar8 + 0x10) < param_3)) {
        FUN_00d21140();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(local_38 + 0xc));
  }
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  if (!bVar5) {
    FUN_00d50b20();
  }
  if ((bVar4) && (lVar8 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

