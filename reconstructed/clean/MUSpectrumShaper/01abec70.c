// Function: FUN_01abec70
// Address: 01abec70
// Size: 1512 bytes
// Class: MUSpectrumShaper
// String references:
//   "fff?333?"
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


void FUN_01abec70(uint64_t param_1,uint64_t param_2)

{
  float fVar1;
  float fVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  void* in_ECX;
  uint64_t uVar7;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint64_t in_XMM0_Qb;
  uint8_t auVar13 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  float fStack_a4;
  float fStack_9c;
  float fStack_94;
  float fStack_8c;
  int64_t local_48;
  char local_40;
  
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
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
  pvVar6 = _pthread_getspecific(in_ECX);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar4 = FUN_017f2980();
  if ((cVar4 == '\0') && (*(int64_t *)(this_ptr + 0x168) != 0)) {
    FUN_00d50b00();
    iVar5 = FUN_014148b0();
    if (0 < iVar5) {
      FUN_01414880();
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        FUN_01414880();
        if ((local_40 == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_014148d0();
        FUN_014148b0();
        FUN_014148b0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_017f2db0();
        if (g_02394274 < fVar9) {
          pvVar6 = _pthread_getspecific(in_ECX);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017f2db0();
        }
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f2da0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017f2d90();
        fStack_94 = (float)((uint64_t)param_2 >> 0x20);
        fStack_8c = (float)((uint64_t)in_XMM1_Qb >> 0x20);
        fStack_a4 = (float)((uint64_t)param_1 >> 0x20);
        fStack_9c = (float)((uint64_t)in_XMM0_Qb >> 0x20);
        fStack_a4 = fStack_a4 + fStack_94;
        fVar9 = g_02390124 / (fStack_94 * g_0239011c);
        lVar8 = 0;
        do {
          lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x178) + 0x10);
          fVar1 = *(float *)(lVar3 + 4 + lVar8 * 4);
          fVar2 = *(float *)(lVar3 + 8 + lVar8 * 4);
          _exp2f((float)((int)lVar8 + 0x24) * g_023908e0 * g_023941f4);
          FUN_00aea610();
          fVar10 = (float)_powf();
          fVar11 = 0.0;
          if (0.0 <= fVar10 * fStack_94) {
            fVar11 = fVar10 * fStack_94;
          }
          lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 400) + 0x10);
          fVar10 = *(float *)(lVar3 + 4 + lVar8 * 4);
          uVar7 = (uint64_t)(fVar10 < fVar11);
          fVar11 = (fVar10 - fVar11) * *(float *)("fff?333?" + uVar7 * 4) + fVar11;
          *(float *)(lVar3 + 4 + lVar8 * 4) = fVar11;
          fVar10 = fVar9 * fVar11;
          if (g_02391090 < fVar10) {
            lVar3 = *(int64_t *)(*(int64_t *)(this_ptr + 0x178) + 0x10);
            fVar12 = *(float *)(lVar3 + 8 + lVar8 * 4) - *(float *)(lVar3 + 4 + lVar8 * 4);
            FUN_01cfc9f0(uVar7,-(uint)(fVar10 < g_02394288) &
                               (uint)((fVar10 + g_0241b638) * g_023908d8 * g_023b294c) |
                               ~-(uint)(fVar10 < g_02394288) & (uint)g_023b294c);
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
            auVar14 = roundss(ZEXT816(0),
                              ZEXT416((uint)((float)((uint)fVar1 & g_023945e0 | g_02394dc8) +
                                            fVar1)),0xb);
            auVar15 = ZEXT416((uint)((float)((uint)fVar2 & g_023945e0 | g_02394dc8) + fVar2));
            auVar13 = roundss(auVar15,auVar15,0xb);
            auVar15 = ZEXT416((uint)fVar12 & g_023945e0) | g_023945f0;
            auVar16._4_12_ = auVar15._4_12_;
            auVar16._0_4_ = auVar15._0_4_ + fVar12;
            auVar16 = roundss(auVar16,auVar16,0xb);
            auVar15._4_4_ = fStack_a4;
            auVar15._0_4_ = fStack_a4;
            auVar15._8_4_ = fStack_9c + fStack_8c;
            auVar15._12_4_ = fStack_9c + fStack_8c;
            auVar17._4_12_ = auVar15._4_12_;
            auVar17._0_4_ = fStack_a4 - fVar11;
            auVar13._0_4_ = (auVar13._0_4_ + auVar14._0_4_ + g_023b1608) * g_0239011c;
            auVar15 = insertps(auVar13,auVar17,0x10);
            auVar14._4_12_ = auVar16._4_12_;
            auVar14._0_4_ = auVar16._0_4_ * g_02391094;
            (**(code **)(*(int64_t *)*arg1 + 0x3c0))(auVar15._0_8_,auVar14._0_8_);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 0x65);
        FUN_00d50b20();
      }
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

