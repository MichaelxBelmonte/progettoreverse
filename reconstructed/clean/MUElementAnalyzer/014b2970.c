// Function: FUN_014b2970
// Address: 014b2970
// Size: 1149 bytes
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


void FUN_014b2970(double param_1,double param_2,float param_3,float param_4)

{
  int64_t lVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t in_RDX;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t arg1;
  uint64_t uVar13;
  uint64_t uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int64_t local_70;
  char local_68;
  float local_44;
  float local_40;
  float local_34;
  
  param_2 = param_1 / param_2;
  uVar5 = (uint)(param_2 + param_2);
  lVar7 = FUN_00e83010();
  lVar8 = FUN_00e83010();
  dVar3 = (double)_exp(SUB84(g_0240e3d0 / ((double)param_4 * param_1),0));
  fVar15 = (float)dVar3;
  if (0 < (int64_t)arg1) {
    uVar13 = arg1;
    fVar16 = param_3;
    if ((arg1 & 1) != 0) {
      uVar13 = arg1 - 1;
      fVar18 = *(float *)(in_RDX + -4 + arg1 * 4);
      fVar18 = (float)(~-(uint)(0.0 < fVar18) & (g_023945e0 ^ (uint)fVar18) |
                      (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar15 * param_3;
      if (param_3 <= fVar18) {
        fVar16 = fVar18;
      }
      *(float *)(lVar8 + -4 + arg1 * 4) = fVar16;
    }
    uVar4 = g_023945e0;
    if (arg1 != 1) {
      lVar9 = uVar13 + 2;
      do {
        fVar18 = *(float *)(in_RDX + -0xc + lVar9 * 4);
        fVar18 = (float)(~-(uint)(0.0 < fVar18) & ((uint)fVar18 ^ uVar4) |
                        (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar16 * fVar15;
        fVar16 = param_3;
        if (param_3 <= fVar18) {
          fVar16 = fVar18;
        }
        *(float *)(lVar8 + -0xc + lVar9 * 4) = fVar16;
        fVar18 = *(float *)(in_RDX + -0x10 + lVar9 * 4);
        fVar18 = (float)(~-(uint)(0.0 < fVar18) & ((uint)fVar18 ^ uVar4) |
                        (uint)fVar18 & -(uint)(0.0 < fVar18)) + fVar16 * fVar15;
        fVar16 = param_3;
        if (param_3 <= fVar18) {
          fVar16 = fVar18;
        }
        *(float *)(lVar8 + -0x10 + lVar9 * 4) = fVar16;
        lVar9 = lVar9 + -2;
      } while (2 < lVar9);
    }
  }
  uVar13 = (uint64_t)(int)uVar5;
  ___bzero();
  if (0 < (int64_t)arg1) {
    dVar3 = g_0238fee8 / param_2;
    lVar9 = (int64_t)(int)(g_023942d0 * param_2);
    uVar10 = (int64_t)(param_2 * 0.0) + lVar9;
    iVar6 = 0;
    uVar14 = 0;
    local_40 = 0.0;
    fVar16 = 0.0;
    local_34 = g_02390d00;
    local_44 = param_3;
    do {
      if (uVar14 == uVar10) {
        fVar18 = (float)((double)fVar16 * dVar3 + g_023b19a0);
        fVar17 = fVar18 - local_40;
        if (((0.0 < local_40) && (0.0 <= local_34)) && (fVar17 < 0.0)) {
          uVar10 = (int64_t)((double)(iVar6 + -2) * param_2) + lVar9;
          if ((int64_t)uVar10 < 0) {
            uVar10 = 0;
          }
          uVar12 = uVar10;
          fVar16 = g_0240e30c;
          if (0 < (int)uVar5) {
            lVar1 = uVar10 + uVar13;
            do {
              if ((uVar10 | uVar13) >> 0x20 == 0) {
                uVar11 = (uVar10 & 0xffffffff) % (uint64_t)uVar5;
              }
              else {
                uVar11 = (int64_t)uVar10 % (int64_t)uVar13;
              }
              fVar2 = *(float *)(lVar7 + uVar11 * 4);
              uVar11 = uVar10;
              if (fVar2 <= fVar16) {
                fVar2 = fVar16;
                uVar11 = uVar12;
              }
              uVar12 = uVar11;
              fVar16 = fVar2;
              uVar10 = uVar10 + 1;
            } while ((int64_t)uVar10 < lVar1);
          }
          FUN_014328b0(SUB84((double)(int64_t)uVar12 / param_1,0),(double)fVar16 + g_023b19a0);
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_00d21140();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar6 = iVar6 + 1;
        uVar10 = (int64_t)((double)iVar6 * param_2) + lVar9;
        fVar16 = 0.0;
        local_40 = fVar18;
        local_34 = fVar17;
      }
      fVar18 = *(float *)(in_RDX + uVar14 * 4);
      fVar18 = local_44 * fVar15 +
               (float)(~-(uint)(fVar18 < 0.0) & (uint)fVar18 |
                      ((uint)fVar18 ^ g_023945e0) & -(uint)(fVar18 < 0.0));
      local_44 = param_3;
      if (param_3 <= fVar18) {
        local_44 = fVar18;
      }
      fVar18 = *(float *)(lVar8 + uVar14 * 4) / local_44;
      if ((uVar14 | uVar13) >> 0x20 == 0) {
        uVar12 = (uVar14 & 0xffffffff) % (uint64_t)uVar5;
      }
      else {
        uVar12 = (int64_t)uVar14 % (int64_t)uVar13;
      }
      *(float *)(lVar7 + uVar12 * 4) = fVar18;
      fVar16 = fVar16 + fVar18;
      uVar14 = uVar14 + 1;
    } while (uVar14 != arg1);
  }
  FUN_00e83070();
  FUN_00e83070();
  return;
}

