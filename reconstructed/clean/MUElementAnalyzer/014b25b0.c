// Function: FUN_014b25b0
// Address: 014b25b0
// Size: 872 bytes
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


void FUN_014b25b0(double param_1,uint64_t param_2,uint param_3)

{
  int64_t lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint64_t uVar10;
  void*puVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t uVar14;
  uint in_ECX;
  uint64_t uVar15;
  void*puVar16;
  void*puVar17;
  int64_t *arg1;
  uint uVar18;
  uint64_t uVar19;
  float fVar20;
  
  uVar18 = param_3;
  puVar11 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar16 = &g_025f0d98;
  *puVar11 = &g_025f0d98;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  (*g_025f0db0)();
  if (0 < (int)in_ECX) {
    uVar12 = (uint64_t)in_ECX;
    if ((int)param_3 < 2) {
      uVar14 = 0;
      do {
        FUN_015c6b60();
        *(void*)(*arg1 + uVar14 * 4) = 0;
        uVar14 = uVar14 + 1;
      } while (uVar12 != uVar14);
    }
    else {
      uVar14 = (uint64_t)param_3 - 1;
      puVar17 = (void*)(uint64_t)((uint)uVar14 & 7);
      uVar19 = 0;
      do {
        lVar13 = FUN_015c6b60();
        fVar20 = 0.0;
        if ((uint64_t)param_3 - 2 < 7) {
          puVar16 = (void*)((int64_t)&MACH_HEADER.magic + 1);
        }
        else {
          uVar10 = 0;
          do {
            uVar15 = uVar10;
            fVar20 = fVar20 + *(float *)(lVar13 + 4 + uVar15 * 4) +
                     *(float *)(lVar13 + 8 + uVar15 * 4) + *(float *)(lVar13 + 0xc + uVar15 * 4) +
                     *(float *)(lVar13 + 0x10 + uVar15 * 4) + *(float *)(lVar13 + 0x14 + uVar15 * 4)
                     + *(float *)(lVar13 + 0x18 + uVar15 * 4) +
                     *(float *)(lVar13 + 0x1c + uVar15 * 4) + *(float *)(lVar13 + 0x20 + uVar15 * 4)
            ;
            uVar10 = uVar15 + 8;
          } while ((uVar14 & 0xfffffffffffffff8) != uVar15 + 8);
          puVar16 = (void*)(uVar15 + 9);
        }
        if (puVar17 != (void*)0x0) {
          lVar1 = (int64_t)puVar16 * 4;
          puVar16 = (void*)0x0;
          do {
            fVar20 = fVar20 + *(float *)(lVar13 + lVar1 + (int64_t)puVar16 * 4);
            puVar16 = puVar16 + 1;
          } while (puVar17 != puVar16);
        }
        *(float *)(*arg1 + uVar19 * 4) = fVar20;
        uVar19 = uVar19 + 1;
      } while (uVar19 != uVar12);
    }
    fVar9 = g_02411280;
    fVar8 = _UNK_0240e27c;
    fVar7 = _UNK_0240e278;
    fVar20 = _UNK_0240e274;
    lVar13 = *arg1;
    if (in_ECX < 8) {
      uVar14 = 0;
      fVar20 = g_02411280;
    }
    else {
      uVar14 = (uint64_t)(in_ECX & 0xfffffff8);
      puVar16 = (void*)(uVar12 * 4 & 0xffffffffffffffe0);
      puVar17 = (void*)0x0;
      do {
        pfVar2 = (float *)(puVar17 + lVar13);
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar2[3];
        if (*pfVar2 < fVar9) {
          *(void*)(puVar17 + lVar13) = 0x3727c5ac;
        }
        if (fVar3 < fVar20) {
          *(void*)(puVar17 + lVar13 + 4) = 0x3727c5ac;
        }
        if (fVar4 < fVar7) {
          *(void*)(puVar17 + lVar13 + 8) = 0x3727c5ac;
          if (fVar8 <= fVar5) goto LAB_014b27db;
LAB_014b2858:
          *(void*)(puVar17 + lVar13 + 0xc) = 0x3727c5ac;
          pfVar2 = (float *)(puVar17 + lVar13 + 0x10);
          fVar3 = *pfVar2;
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
        }
        else {
          if (fVar5 < fVar8) goto LAB_014b2858;
LAB_014b27db:
          pfVar2 = (float *)(puVar17 + lVar13 + 0x10);
          fVar3 = *pfVar2;
          fVar4 = pfVar2[1];
          fVar5 = pfVar2[2];
          fVar6 = pfVar2[3];
        }
        if (fVar3 < fVar9) {
          *(void*)(puVar17 + lVar13 + 0x10) = 0x3727c5ac;
        }
        if (fVar4 < fVar20) {
          *(void*)(puVar17 + lVar13 + 0x14) = 0x3727c5ac;
        }
        if (fVar5 < fVar7) {
          *(void*)(puVar17 + lVar13 + 0x18) = 0x3727c5ac;
        }
        if (fVar6 < fVar8) {
          *(void*)(puVar17 + lVar13 + 0x1c) = 0x3727c5ac;
        }
        puVar17 = puVar17 + 0x20;
      } while (puVar16 != puVar17);
      fVar20 = g_02411280;
      if (uVar14 == uVar12) goto LAB_014b28af;
    }
    do {
      pfVar2 = (float *)(lVar13 + uVar14 * 4);
      if (*pfVar2 <= fVar20 && fVar20 != *pfVar2) {
        *(void*)(lVar13 + uVar14 * 4) = 0x3727c5ac;
      }
      uVar14 = uVar14 + 1;
    } while (uVar12 != uVar14);
  }
LAB_014b28af:
  param_1 = g_0238fee8 / param_1;
  _memcpy(puVar16,(void *)((int64_t)(int)in_ECX << 2),uVar18);
  FUN_015c1480((float)param_1,in_ECX);
  if (puVar11 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

