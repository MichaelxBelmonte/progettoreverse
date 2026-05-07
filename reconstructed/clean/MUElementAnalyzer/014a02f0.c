// Function: FUN_014a02f0
// Address: 014a02f0
// Size: 1374 bytes
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


void FUN_014a02f0(double param_1,double param_2,float param_3,float param_4)

{
  int64_t lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int64_t lVar5;
  int64_t lVar6;
  int in_ECX;
  uint64_t uVar7;
  uint64_t in_RDX;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t arg1;
  int64_t in_R8;
  int64_t in_R9;
  uint64_t uVar10;
  uint64_t uVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int64_t local_res8;
  int64_t local_70;
  char local_68;
  float local_50;
  float local_4c;
  float local_34;
  
  param_2 = param_1 / param_2;
  uVar3 = (uint)(param_2 + param_2);
  lVar5 = FUN_00e83010();
  dVar13 = (double)_exp(SUB84(g_0240e3d0 / ((double)param_4 * param_1),0));
  fVar14 = (float)dVar13;
  if (0 < (int64_t)in_RDX) {
    uVar11 = in_RDX;
    fVar12 = param_3;
    if ((in_RDX & 1) != 0) {
      uVar11 = in_RDX - 1;
      fVar15 = *(float *)(in_R8 + -4 + in_RDX * 4);
      fVar15 = (float)(~-(uint)(0.0 < fVar15) & (g_023945e0 ^ (uint)fVar15) |
                      (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar14 * param_3;
      if (param_3 <= fVar15) {
        fVar12 = fVar15;
      }
      *(float *)(arg1 + -4 + in_RDX * 4) = fVar12;
    }
    uVar2 = g_023945e0;
    if (in_RDX != 1) {
      lVar6 = uVar11 + 2;
      do {
        fVar15 = *(float *)(in_R8 + -0xc + lVar6 * 4);
        fVar15 = (float)(~-(uint)(0.0 < fVar15) & ((uint)fVar15 ^ uVar2) |
                        (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar12 * fVar14;
        fVar12 = param_3;
        if (param_3 <= fVar15) {
          fVar12 = fVar15;
        }
        *(float *)(arg1 + -0xc + lVar6 * 4) = fVar12;
        fVar15 = *(float *)(in_R8 + -0x10 + lVar6 * 4);
        fVar15 = (float)(~-(uint)(0.0 < fVar15) & ((uint)fVar15 ^ uVar2) |
                        (uint)fVar15 & -(uint)(0.0 < fVar15)) + fVar12 * fVar14;
        fVar12 = param_3;
        if (param_3 <= fVar15) {
          fVar12 = fVar15;
        }
        *(float *)(arg1 + -0x10 + lVar6 * 4) = fVar12;
        lVar6 = lVar6 + -2;
      } while (2 < lVar6);
    }
  }
  uVar11 = (uint64_t)(int)uVar3;
  ___bzero();
  if ((int64_t)in_RDX < 1) {
    iVar4 = 0;
  }
  else {
    dVar13 = g_0238fee8 / param_2;
    lVar6 = (int64_t)(int)(g_023942d0 * param_2);
    uVar7 = (int64_t)(param_2 * 0.0) + lVar6;
    iVar4 = 0;
    uVar10 = 0;
    local_4c = 0.0;
    fVar12 = 0.0;
    fVar15 = 0.0;
    local_34 = g_02390d00;
    local_50 = param_3;
    do {
      if (uVar10 == uVar7) {
        fVar16 = (float)((double)fVar15 * dVar13 + g_023b19a0);
        if (iVar4 < in_ECX) {
          fVar15 = g_02390d2c;
          if (fVar16 <= g_02390d2c) {
            fVar15 = fVar16;
          }
          *(float *)(in_R9 + (int64_t)iVar4 * 4) = fVar15;
          *(float *)(local_res8 + (int64_t)iVar4 * 4) = (float)SQRT((double)fVar12 * dVar13);
        }
        fVar17 = fVar16 - local_4c;
        if (((0.0 < local_4c) && (0.0 <= local_34)) && (fVar17 < 0.0)) {
          uVar7 = (int64_t)((double)(iVar4 + -2) * param_2) + lVar6;
          if ((int64_t)uVar7 < 0) {
            uVar7 = 0;
          }
          uVar9 = uVar7;
          if (0 < (int)uVar3) {
            lVar1 = uVar7 + uVar11;
            fVar12 = g_0240e30c;
            do {
              if ((uVar7 | uVar11) >> 0x20 == 0) {
                uVar8 = (uVar7 & 0xffffffff) % (uint64_t)uVar3;
              }
              else {
                uVar8 = (int64_t)uVar7 % (int64_t)uVar11;
              }
              fVar15 = *(float *)(lVar5 + uVar8 * 4);
              uVar8 = uVar7;
              if (fVar15 <= fVar12) {
                fVar15 = fVar12;
                uVar8 = uVar9;
              }
              uVar9 = uVar8;
              fVar12 = fVar15;
              uVar7 = uVar7 + 1;
            } while ((int64_t)uVar7 < lVar1);
          }
          FUN_014328b0(SUB84((double)(int64_t)uVar9 / param_1,0));
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
        iVar4 = iVar4 + 1;
        uVar7 = (int64_t)((double)iVar4 * param_2) + lVar6;
        fVar15 = 0.0;
        fVar12 = 0.0;
        local_4c = fVar16;
        local_34 = fVar17;
      }
      fVar16 = *(float *)(in_R8 + uVar10 * 4);
      fVar16 = (float)(~-(uint)(fVar16 < 0.0) & (uint)fVar16 |
                      ((uint)fVar16 ^ g_023945e0) & -(uint)(fVar16 < 0.0));
      fVar17 = local_50 * fVar14 + fVar16;
      local_50 = param_3;
      if (param_3 <= fVar17) {
        local_50 = fVar17;
      }
      fVar17 = *(float *)(arg1 + uVar10 * 4) / local_50;
      if ((uVar10 | uVar11) >> 0x20 == 0) {
        uVar9 = (uVar10 & 0xffffffff) % (uint64_t)uVar3;
      }
      else {
        uVar9 = (int64_t)uVar10 % (int64_t)uVar11;
      }
      *(float *)(lVar5 + uVar9 * 4) = fVar17;
      fVar15 = fVar15 + fVar17;
      fVar12 = fVar12 + fVar16 * fVar16;
      uVar10 = uVar10 + 1;
    } while (uVar10 != in_RDX);
  }
  if (iVar4 < in_ECX) {
    lVar5 = (int64_t)(iVar4 + -1);
    uVar11 = (uint64_t)iVar4;
    uVar7 = ~uVar11;
    if ((in_ECX - iVar4 & 1U) != 0) {
      *(void*)(in_R9 + uVar11 * 4) = *(void*)(in_R9 + lVar5 * 4);
      *(void*)(local_res8 + uVar11 * 4) = *(void*)(local_res8 + lVar5 * 4);
      uVar11 = uVar11 + 1;
    }
    if (uVar7 + (int64_t)in_ECX != 0) {
      do {
        *(void*)(in_R9 + uVar11 * 4) = *(void*)(in_R9 + lVar5 * 4);
        *(void*)(local_res8 + uVar11 * 4) = *(void*)(local_res8 + lVar5 * 4);
        *(void*)(in_R9 + 4 + uVar11 * 4) = *(void*)(in_R9 + lVar5 * 4);
        *(void*)(local_res8 + 4 + uVar11 * 4) = *(void*)(local_res8 + lVar5 * 4);
        uVar11 = uVar11 + 2;
      } while ((int64_t)in_ECX != uVar11);
    }
  }
  FUN_00e83070();
  return;
}

