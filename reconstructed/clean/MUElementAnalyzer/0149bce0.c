// Function: FUN_0149bce0
// Address: 0149bce0
// Size: 758 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzerEngine::calcRmsAndDCData: call without sourceSignal not implemented!"
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


void FUN_0149bce0(double param_1,double param_2,int64_t param_3,int64_t param_4)

{
  float fVar1;
  int64_t lVar2;
  int64_t in_RCX;
  int64_t in_RDX;
  uint64_t uVar3;
  int64_t arg1;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  int local_res8;
  int local_res10;
  int local_res18;
  
  param_1 = param_1 / param_2;
  dVar9 = g_0238fee8 / param_1;
  lVar7 = (int64_t)(int)(g_023942d0 * param_1);
  lVar5 = (int64_t)(param_1 * 0.0) + lVar7;
  if ((in_RDX != 0) && (param_4 != 0)) {
    if (in_RCX < 1) {
      iVar8 = 0;
    }
    else {
      fVar10 = 0.0;
      iVar8 = 0;
      fVar11 = 0.0;
      lVar2 = 0;
      do {
        if (lVar2 == lVar5) {
          if (iVar8 < local_res8) {
            *(float *)(param_3 + (int64_t)iVar8 * 4) = (float)SQRT((double)fVar11 * dVar9);
            *(float *)(param_4 + (int64_t)iVar8 * 4) = (float)((double)fVar10 * dVar9);
            iVar8 = iVar8 + 1;
          }
          lVar5 = (int64_t)((double)iVar8 * param_1) + lVar7;
          fVar11 = 0.0;
          fVar10 = 0.0;
        }
        fVar1 = *(float *)(arg1 + lVar2 * 4);
        fVar11 = fVar11 + fVar1 * fVar1;
        fVar10 = fVar10 + (*(float *)(in_RDX + lVar2 * 4) - fVar1);
        lVar2 = lVar2 + 1;
      } while (in_RCX != lVar2);
    }
    if (iVar8 < local_res8) {
      lVar5 = (int64_t)(iVar8 + -1);
      uVar3 = (uint64_t)iVar8;
      uVar4 = ~uVar3;
      if ((local_res8 - iVar8 & 1U) != 0) {
        *(void*)(param_3 + uVar3 * 4) = *(void*)(param_3 + lVar5 * 4);
        *(void*)(param_4 + uVar3 * 4) = *(void*)(param_4 + lVar5 * 4);
        uVar3 = uVar3 + 1;
      }
      if (uVar4 + (int64_t)local_res8 != 0) {
        do {
          *(void*)(param_3 + uVar3 * 4) = *(void*)(param_3 + lVar5 * 4);
          *(void*)(param_4 + uVar3 * 4) = *(void*)(param_4 + lVar5 * 4);
          *(void*)(param_3 + 4 + uVar3 * 4) = *(void*)(param_3 + lVar5 * 4);
          *(void*)(param_4 + 4 + uVar3 * 4) = *(void*)(param_4 + lVar5 * 4);
          uVar3 = uVar3 + 2;
        } while ((int64_t)local_res8 != uVar3);
      }
    }
    FUN_015c1480((float)local_res10,local_res8);
    goto LAB_0149bfbf;
  }
  if (arg1 == 0) {
    FUN_00e828a0();
LAB_0149be60:
    iVar8 = 0;
  }
  else {
    if (in_RCX < 1) goto LAB_0149be60;
    fVar10 = 0.0;
    iVar8 = 0;
    lVar2 = 0;
    do {
      if (lVar2 == lVar5) {
        if (iVar8 < local_res8) {
          *(float *)(param_3 + (int64_t)iVar8 * 4) = (float)SQRT((double)fVar10 * dVar9);
          iVar8 = iVar8 + 1;
        }
        lVar5 = (int64_t)((double)iVar8 * param_1) + lVar7;
        fVar10 = 0.0;
      }
      fVar11 = *(float *)(arg1 + lVar2 * 4);
      fVar10 = fVar10 + fVar11 * fVar11;
      lVar2 = lVar2 + 1;
    } while (in_RCX != lVar2);
  }
  local_res18 = local_res10;
  if (iVar8 < local_res8) {
    lVar5 = (int64_t)(iVar8 + -1);
    uVar4 = (uint64_t)iVar8;
    uVar3 = ~uVar4;
    uVar6 = (uint64_t)(uint)(local_res8 - iVar8) & 3;
    if ((local_res8 - iVar8 & 3U) != 0) {
      do {
        *(void*)(param_3 + uVar4 * 4) = *(void*)(param_3 + lVar5 * 4);
        uVar4 = uVar4 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (2 < uVar3 + (int64_t)local_res8) {
      do {
        *(void*)(param_3 + uVar4 * 4) = *(void*)(param_3 + lVar5 * 4);
        *(void*)(param_3 + 4 + uVar4 * 4) = *(void*)(param_3 + lVar5 * 4);
        *(void*)(param_3 + 8 + uVar4 * 4) = *(void*)(param_3 + lVar5 * 4);
        *(void*)(param_3 + 0xc + uVar4 * 4) = *(void*)(param_3 + lVar5 * 4);
        uVar4 = uVar4 + 4;
      } while ((int64_t)local_res8 != uVar4);
    }
  }
LAB_0149bfbf:
  FUN_015c1480((float)local_res18,local_res8);
  return;
}

