// Function: FUN_014b7630
// Address: 014b7630
// Size: 753 bytes
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


void FUN_014b7630(float param_1,float param_2)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  int iVar4;
  int in_ECX;
  int64_t *in_RDX;
  int64_t *plVar5;
  int64_t lVar6;
  char unaff_SIL;
  int64_t *this_ptr;
  int iVar7;
  int64_t lVar8;
  float fVar9;
  float extraout_XMM0_Da;
  uint32_t uVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = (float)_logf(g_02394204 * param_1);
  iVar4 = FUN_00e7d780((fVar9 * g_02394208) / g_023908e0);
  bVar3 = true;
  fVar9 = extraout_XMM0_Da;
  if (unaff_SIL == '\0') {
LAB_014b7754:
    bVar3 = true;
    lVar6 = 0;
  }
  else {
    lVar8 = *in_RDX;
    lVar6 = 0;
    if ((lVar8 != 0) && (lVar6 = 0, in_ECX + -1 <= iVar4)) {
      iVar4 = ((iVar4 - in_ECX) + 1) / 3;
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      iVar7 = *(int *)(lVar8 + 0xc) + -1;
      if (iVar4 < *(int *)(lVar8 + 0xc)) {
        iVar7 = iVar4;
      }
      lVar6 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar7 * 8);
      fVar9 = (float)FUN_00d50b00();
      iVar4 = *(int *)(lVar6 + 0x18);
      iVar7 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar7 = iVar4;
      }
      in_RDX = (int64_t *)(uint64_t)(uint)(iVar7 >> 2);
      if (7 < iVar4) {
        plVar5 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
        fVar11 = **(float **)(lVar6 + 0x10);
        do {
          fVar9 = (*(float **)(lVar6 + 0x10))[(int64_t)plVar5];
          if (fVar9 < fVar11) {
            fVar9 = (float)FUN_00d50b20();
            goto LAB_014b7754;
          }
          plVar5 = (int64_t *)((int64_t)plVar5 + 1);
          fVar11 = fVar9;
        } while (in_RDX != plVar5);
      }
      bVar3 = false;
    }
  }
  uVar10 = FUN_00c8e340(fVar9,0);
  lVar8 = *this_ptr;
  iVar4 = *(int *)(lVar8 + 0x18);
  FUN_00c8e340(uVar10,1);
  *(void*)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar4) = 0;
  fVar9 = param_1;
  if (lVar6 != 0) {
    fVar12 = 0.0;
    lVar8 = 1;
    if ((int64_t)(int)in_RDX < 2) goto LAB_014b77e0;
    do {
      fVar12 = *(float *)(*(int64_t *)(lVar6 + 0x10) + lVar8 * 4);
      while( true ) {
        fVar11 = fVar12 * param_1;
        if (param_2 < fVar11) goto LAB_014b78a3;
        lVar2 = *this_ptr;
        iVar4 = *(int *)(lVar2 + 0x18);
        FUN_00c8e340(param_1,1);
        *(float *)(*(int64_t *)(lVar2 + 0x10) + (int64_t)iVar4) = fVar11;
        lVar8 = lVar8 + 1;
        if (lVar8 < (int)in_RDX) break;
LAB_014b77e0:
        fVar12 = fVar12 + g_02390124;
      }
    } while( true );
  }
  fVar11 = param_1;
  if (param_1 <= param_2) {
    iVar4 = 2;
    fVar12 = param_1;
    do {
      lVar8 = *this_ptr;
      iVar7 = *(int *)(lVar8 + 0x18);
      FUN_00c8e340(fVar9,1);
      *(float *)(*(int64_t *)(lVar8 + 0x10) + (int64_t)iVar7) = fVar12;
      fVar11 = (float)iVar4 * param_1;
      iVar4 = iVar4 + 1;
      fVar9 = fVar12;
      fVar12 = fVar11;
    } while (fVar11 <= param_2);
  }
LAB_014b78a3:
  lVar8 = *this_ptr;
  uVar1 = *(uint *)(lVar8 + 0x18);
  if ((uVar1 & 0xfffffffc) == 4) {
    FUN_00c8e340(fVar9,1);
    *(float *)(*(int64_t *)(lVar8 + 0x10) + (uint64_t)uVar1) = fVar11;
  }
  if (!bVar3 && lVar6 != 0) {
    FUN_00d50b20();
  }
  return;
}

