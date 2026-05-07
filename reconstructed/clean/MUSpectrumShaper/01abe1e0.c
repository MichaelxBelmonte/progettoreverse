// Function: FUN_01abe1e0
// Address: 01abe1e0
// Size: 2354 bytes
// Class: MUSpectrumShaper
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_01abe1e0(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int64_t lVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  void* in_ECX;
  void* pVar8;
  int64_t lVar9;
  uint uVar10;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar12;
  int64_t lVar13;
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar15;
  uint64_t in_XMM0_Qb;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  float fStack_124;
  float fStack_11c;
  float fStack_f4;
  float fStack_ec;
  float local_4c;
  int64_t local_48;
  char local_40;
  int iVar11;
  
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if (local_40 == '\0') {
    if (local_48 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == 0) {
    return;
  }
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar5 = FUN_017f2980();
  if ((cVar5 != '\0') || (*(int64_t *)(this_ptr + 0x168) == 0)) goto LAB_01abeaf7;
  FUN_00d50b00();
  iVar6 = FUN_014148b0();
  if (0 < iVar6) {
    FUN_01414880();
    if (local_40 == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        goto LAB_01abe341;
      }
    }
    else if (local_48 != 0) {
LAB_01abe341:
      if (g_02394274 < *(float *)(*(int64_t *)(local_48 + 0x10) + 4)) {
        iVar6 = *(int *)(local_48 + 0x18);
        iVar11 = iVar6 + 3;
        if (-1 < iVar6) {
          iVar11 = iVar6;
        }
        uVar10 = iVar11 >> 2;
        lVar13 = 0;
        do {
          iVar6 = (int)lVar13;
          if ((int)(uVar10 + iVar6) < 2) goto LAB_01abeae2;
          lVar9 = lVar13 * 4;
          lVar13 = lVar13 + -1;
        } while (*(float *)(*(int64_t *)(local_48 + 0x10) + (uint64_t)(uVar10 - 1) * 4 + lVar9) *
                 (float)(int)(uVar10 + iVar6 + -1) <= g_02394274);
        lVar9 = (uint64_t)uVar10 + lVar13;
        if ((lVar9 != 1) && ((uint64_t)uVar10 + lVar13 != 2)) {
          lVar12 = (uint64_t)(uVar10 + (int)lVar13 + 1 & 1) + 1;
          do {
            lVar12 = lVar12 + 2;
          } while (lVar9 != lVar12);
        }
        FUN_00aea610();
        fVar14 = (float)_powf();
        fStack_f4 = (float)((uint64_t)param_2 >> 0x20);
        fStack_ec = (float)((uint64_t)in_XMM1_Qb >> 0x20);
        lVar9 = (int64_t)(int)uVar10 * 4 + *(int64_t *)(*(int64_t *)(this_ptr + 0x180) + 0x10);
        fVar1 = *(float *)(lVar9 + lVar13 * 4);
        if (g_02394274 <= fVar1) {
          local_4c = 0.0;
          if (0.0 <= fVar14 * fStack_f4) {
            local_4c = fVar14 * fStack_f4;
          }
          local_4c = local_4c / fVar1;
        }
        else {
          local_4c = g_02390124;
        }
        pvVar7 = _pthread_getspecific((void*)lVar9);
        pVar8 = (void*)lVar9;
        if ((pvVar7 != (void *)0x0) && (lVar9 = FUN_00e8b990(), lVar9 != 0)) {
          pVar8 = (void*)local_48;
        }
        fVar14 = (float)FUN_017f2db0();
        fVar1 = g_02390124;
        if (g_02394274 <= fVar14) {
          FUN_014148b0();
          FUN_014148d0();
          FUN_014148b0();
          pvVar7 = _pthread_getspecific(pVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017f2db0();
        }
        if (0 < *(int *)(this_ptr + 0x19c)) {
          fVar14 = g_02390d34;
          if (local_4c <= g_02390d34) {
            fVar14 = local_4c;
          }
          fStack_124 = (float)((uint64_t)param_1 >> 0x20);
          fStack_11c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
          fVar15 = g_0239011c * fStack_f4;
          lVar9 = 0;
          do {
            lVar12 = lVar9 + 1;
            lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x178) + 0x10);
            fVar2 = *(float *)(lVar4 + 4 + lVar9 * 4);
            fVar3 = *(float *)(lVar4 + 8 + lVar9 * 4);
            if (lVar12 < (int)uVar10 + lVar13 + 1) {
              FUN_00aea610();
              fVar16 = (float)_powf();
              fVar17 = 0.0;
              if (0.0 <= fVar16 * fStack_f4) {
                fVar17 = fVar16 * fStack_f4;
              }
            }
            else {
              fVar17 = *(float *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x180) + 0x10) + 4 +
                                 lVar9 * 4) * fVar14;
            }
            lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 400) + 0x10);
            fVar17 = (*(float *)(lVar4 + 4 + lVar9 * 4) - fVar17) * g_0239109c + fVar17;
            *(float *)(lVar4 + 4 + lVar9 * 4) = fVar17;
            if (g_02391090 < (fVar1 / fVar15) * fVar17) {
              lVar4 = *(int64_t *)(*(int64_t *)(this_ptr + 0x178) + 0x10);
              fVar16 = *(float *)(lVar4 + 8 + lVar9 * 4) - *(float *)(lVar4 + 4 + lVar9 * 4);
              FUN_01cfc9f0();
              if (local_40 == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40 = '\0';
              }
              FUN_01d488d0();
              if (local_48 != 0) {
                FUN_00d50b20();
              }
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              auVar20 = roundss(ZEXT816(0),
                                ZEXT416((uint)((float)((uint)fVar2 & g_023945e0 | g_02394dc8) +
                                              fVar2)),0xb);
              auVar18 = ZEXT416((uint)((float)((uint)fVar3 & g_023945e0 | g_02394dc8) + fVar3))
              ;
              auVar18 = roundss(auVar18,auVar18,0xb);
              auVar19._4_12_ = auVar18._4_12_;
              auVar21 = ZEXT416((uint)fVar16 & g_023945e0) | g_023945f0;
              auVar21._0_4_ = auVar21._0_4_ + fVar16;
              auVar21 = roundss(auVar21,auVar21,0xb);
              auVar19._0_4_ = (auVar18._0_4_ + auVar20._0_4_ + g_023b1608) * g_0239011c;
              auVar18._4_4_ = fStack_124 + fStack_f4;
              auVar18._0_4_ = (fStack_124 + fStack_f4) - fVar17;
              auVar18._8_4_ = fStack_11c + fStack_ec;
              auVar18._12_4_ = fStack_11c + fStack_ec;
              auVar18 = insertps(auVar19,auVar18,0x10);
              auVar20._4_12_ = auVar21._4_12_;
              auVar20._0_4_ = auVar21._0_4_ * g_02391094;
              (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar18._0_8_,auVar20._0_8_);
            }
            lVar9 = lVar12;
          } while (lVar12 < *(int *)(this_ptr + 0x19c));
        }
      }
LAB_01abeae2:
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01abeaf7:
  FUN_00d50b20();
  return;
}

