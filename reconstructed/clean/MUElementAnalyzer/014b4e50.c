// Function: FUN_014b4e50
// Address: 014b4e50
// Size: 955 bytes
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


void FUN_014b4e50(float param_1,int64_t *param_2,char param_3)

{
  int iVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int iVar9;
  uint64_t in_RCX;
  uint64_t uVar10;
  int64_t *plVar11;
  uint unaff_ESI;
  float *this_ptr;
  uint64_t uVar12;
  int64_t lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((0 < (int)unaff_ESI) && (0.0 < param_1)) {
    fVar16 = g_02390124 / param_1;
    iVar3 = (int)((float)(~-(uint)(param_1 < g_02390124) & (uint)param_1 |
                         -(uint)(param_1 < g_02390124) & (uint)fVar16) + g_0239011c);
    if ((iVar3 <= (int)unaff_ESI) || (param_1 < g_02390124)) {
      uVar8 = in_RCX;
      lVar4 = FUN_00aea550();
      uVar12 = (uint64_t)*(int *)(lVar4 + 0xc);
      iVar1 = *(int *)(lVar4 + 8);
      lVar13 = (int64_t)iVar1;
      lVar2 = *(int64_t *)(lVar4 + 0x10);
      plVar11 = (int64_t *)*param_2;
      pvVar5 = _pthread_getspecific((void*)uVar8);
      if (pvVar5 != (void *)0x0) {
        plVar11 = (int64_t *)*param_2;
        lVar6 = FUN_00e8b990();
        if (lVar6 != 0) {
          plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
      }
      uVar10 = in_RCX & 0xffffffff;
      (**(code **)(*plVar11 + 0x468))(uVar10,0,iVar1);
      uVar8 = lVar13 + in_RCX;
      if (iVar3 == 1) {
        lVar6 = 0;
        do {
          if (in_RCX == uVar8) {
            plVar11 = (int64_t *)*param_2;
            pvVar5 = _pthread_getspecific((void*)uVar10);
            if (pvVar5 != (void *)0x0) {
              plVar11 = (int64_t *)*param_2;
              lVar7 = FUN_00e8b990();
              if (lVar7 != 0) {
                plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
              }
            }
            (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
            uVar8 = lVar13 + in_RCX;
          }
          uVar10 = in_RCX & uVar12;
          this_ptr[lVar6] = *(float *)(lVar2 + uVar10 * 4);
          in_RCX = in_RCX + 1;
          lVar6 = lVar6 + 1;
        } while (unaff_ESI != (uint)lVar6);
      }
      else if (g_02390124 <= param_1) {
        do {
          uVar10 = (uint64_t)unaff_ESI;
          fVar15 = 0.0;
          iVar9 = iVar3;
          do {
            if (in_RCX == uVar8) {
              plVar11 = (int64_t *)*param_2;
              pvVar5 = _pthread_getspecific((void*)uVar10);
              if (pvVar5 != (void *)0x0) {
                plVar11 = (int64_t *)*param_2;
                lVar6 = FUN_00e8b990();
                if (lVar6 != 0) {
                  plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
                }
              }
              (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
              uVar8 = lVar13 + in_RCX;
            }
            uVar10 = in_RCX & uVar12;
            fVar15 = fVar15 + *(float *)(lVar2 + uVar10 * 4);
            in_RCX = in_RCX + 1;
            iVar9 = iVar9 + -1;
          } while (iVar9 != 0);
          *this_ptr = fVar15;
          this_ptr = this_ptr + 1;
          unaff_ESI = unaff_ESI - 1;
        } while (unaff_ESI != 0);
      }
      else {
        fVar15 = *(float *)(lVar2 + (uVar12 & in_RCX) * 4);
        in_RCX = in_RCX + 1;
        fVar14 = 0.0;
        lVar6 = 0;
        iVar9 = 0;
        fVar18 = fVar15;
        do {
          fVar17 = fVar18;
          if (iVar9 == 0) {
            if (in_RCX == uVar8) {
              plVar11 = (int64_t *)*param_2;
              pvVar5 = _pthread_getspecific(0);
              if (pvVar5 != (void *)0x0) {
                plVar11 = (int64_t *)*param_2;
                lVar7 = FUN_00e8b990();
                if (lVar7 != 0) {
                  plVar11 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
                }
              }
              (**(code **)(*plVar11 + 0x468))(in_RCX & 0xffffffff,0,iVar1);
              uVar8 = in_RCX + lVar13;
            }
            fVar17 = *(float *)(lVar2 + (in_RCX & uVar12) * 4);
            in_RCX = in_RCX + 1;
            fVar14 = (fVar17 - fVar18) * param_1;
            fVar15 = fVar18;
            iVar9 = iVar3;
          }
          iVar9 = iVar9 + -1;
          this_ptr[lVar6] = fVar15;
          fVar15 = fVar15 + fVar14;
          lVar6 = lVar6 + 1;
          fVar18 = fVar17;
        } while (unaff_ESI != (uint)lVar6);
      }
      if ((param_3 != '\0') && (g_02390124 < param_1)) {
        (**(code **)(g_02786500 + 0x20))(fVar16);
      }
      if (lVar4 != 0) {
        FUN_00aea5b0();
        return;
      }
    }
  }
  return;
}

