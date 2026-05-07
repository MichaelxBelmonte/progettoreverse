// Function: FUN_014b2ee0
// Address: 014b2ee0
// Size: 949 bytes
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


void FUN_014b2ee0(double param_1,double param_2,uint64_t param_3,int64_t param_4)

{
  int64_t lVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  int64_t in_RCX;
  int64_t *plVar6;
  int iVar7;
  int64_t in_RDX;
  int64_t arg1;
  uint64_t uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float *local_res8;
  float *local_res10;
  
  iVar7 = 0;
  fVar14 = 0.0;
  fVar10 = g_0240e35c;
  do {
    plVar6 = &g_02802ee0;
    if (iVar7 == 6) {
      plVar6 = &g_02802ee8;
    }
    if (iVar7 == 0) {
      plVar6 = &g_02802ed8;
    }
    lVar1 = *plVar6;
    dVar15 = (double)((float)(1 << (0xcU - (char)iVar7 & 0x1f)) * fVar10) * param_2;
    dVar12 = dVar15 * g_0240e408 * g_023942d0 + param_1;
    dVar16 = 0.0;
    if (0.0 <= dVar12) {
      dVar16 = dVar12;
    }
    uVar2 = (uint)(dVar15 + g_0240de78);
    uVar9 = 0;
    if (-1 < (int)uVar2) {
      uVar9 = uVar2;
    }
    dVar13 = (double)___bzero();
    dVar12 = g_023942d0;
    if (uVar9 == 1) {
      lVar3 = 0;
      do {
        dVar13 = dVar16 + dVar12;
        if (in_RCX <= (int64_t)dVar13) break;
        *(void*)(param_4 + lVar3 * 4) = *(void*)(in_RDX + (int64_t)dVar13 * 4);
        dVar13 = dVar16 + dVar15 + dVar12;
        if (in_RCX <= (int64_t)dVar13) break;
        uVar9 = *(uint *)(in_RDX + (int64_t)dVar13 * 4);
        dVar13 = (double)(uint64_t)uVar9;
        *(uint *)(param_4 + 4 + lVar3 * 4) = uVar9;
        dVar16 = dVar16 + dVar15 + dVar15;
        lVar3 = lVar3 + 2;
      } while (lVar3 != 0x100);
    }
    else if ((int)uVar2 < 1) {
      lVar3 = (int64_t)dVar16;
      if (lVar3 <= in_RCX + -2) {
        uVar8 = 0;
        do {
          dVar13 = (double)(uint64_t)(uint)(float)(dVar16 - (double)lVar3);
          fVar10 = *(float *)(in_RDX + lVar3 * 4);
          *(float *)(param_4 + uVar8 * 4) =
               (*(float *)(in_RDX + 4 + lVar3 * 4) - fVar10) * (float)(dVar16 - (double)lVar3) +
               fVar10;
          if (0xfe < uVar8) break;
          dVar16 = dVar16 + dVar15;
          uVar8 = uVar8 + 1;
          lVar3 = (int64_t)dVar16;
        } while (lVar3 <= in_RCX + -2);
      }
    }
    else {
      lVar3 = (int64_t)dVar16;
      if (lVar3 <= (int64_t)(~(uint64_t)uVar9 + in_RCX)) {
        fVar10 = g_02390124 / (float)(int)uVar9;
        dVar13 = (double)(uint64_t)(uint)fVar10;
        uVar8 = 0;
        do {
          fVar11 = 0.0;
          if (2 < uVar9 - 1) {
            fVar11 = 0.0;
            iVar5 = -(uVar9 & 0xfffffffc);
            do {
              fVar11 = fVar11 + *(float *)(in_RDX + lVar3 * 4) + *(float *)(in_RDX + 4 + lVar3 * 4)
                       + *(float *)(in_RDX + 8 + lVar3 * 4) + *(float *)(in_RDX + 0xc + lVar3 * 4);
              lVar3 = lVar3 + 4;
              iVar5 = iVar5 + 4;
            } while (iVar5 != 0);
          }
          if ((uVar9 & 3) != 0) {
            lVar4 = 0;
            do {
              fVar11 = fVar11 + *(float *)(in_RDX + lVar3 * 4 + lVar4 * 4);
              lVar4 = lVar4 + 1;
            } while ((uVar9 & 3) != (uint)lVar4);
          }
          *(float *)(param_4 + uVar8 * 4) = fVar11 * fVar10;
          if (0xfe < uVar8) break;
          dVar16 = dVar16 + dVar15;
          uVar8 = uVar8 + 1;
          lVar3 = (int64_t)dVar16;
        } while (lVar3 <= (int64_t)(~(uint64_t)uVar9 + in_RCX));
      }
    }
    FUN_00e3daa0(dVar13,local_res8);
    lVar3 = g_02802ed0;
    fVar10 = g_0240e35c;
    fVar11 = *local_res8 * g_0240e35c;
    lVar4 = 1;
    do {
      *(float *)(arg1 + -4 + lVar4 * 4) =
           local_res8[*(int *)(lVar3 + -4 + lVar4 * 4)] * *(float *)(lVar1 + -4 + lVar4 * 4) +
           *(float *)(arg1 + -4 + lVar4 * 4);
      *(float *)(arg1 + lVar4 * 4) =
           local_res8[*(int *)(lVar3 + lVar4 * 4)] * *(float *)(lVar1 + lVar4 * 4) +
           *(float *)(arg1 + lVar4 * 4);
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0x79);
    fVar14 = fVar14 + fVar11;
    iVar7 = iVar7 + 1;
    arg1 = arg1 + 0xf0;
    if (iVar7 == 7) {
      if (local_res10 != (float *)0x0) {
        *local_res10 = fVar14 / g_0241c3ec;
      }
      return;
    }
  } while( true );
}

