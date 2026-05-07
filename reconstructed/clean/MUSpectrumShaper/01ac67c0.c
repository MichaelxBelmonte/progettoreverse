// Function: FUN_01ac67c0
// Address: 01ac67c0
// Size: 1600 bytes
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


void FUN_01ac67c0(uint64_t param_1,uint64_t param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint32_t uVar3;
  uint8_t auVar4 [16];
  int64_t lVar5;
  char cVar6;
  void *pvVar7;
  int64_t lVar8;
  void* in_ECX;
  byte bVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int iVar13;
  int64_t *this_ptr;
  int64_t lVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  float fVar18;
  uint64_t uVar19;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint64_t in_XMM1_Qb;
  uint8_t auVar23 [16];
  float fVar25;
  uint8_t auVar24 [16];
  uint uVar26;
  uint8_t auVar28 [16];
  uint8_t auVar29 [16];
  float fVar30;
  uint32_t uVar31;
  int64_t *local_38;
  char local_30;
  uint8_t auVar27 [16];
  
  (**(code **)(*this_ptr + 0x640))();
  FUN_01e3f820();
  uVar19 = (**(code **)(*local_38 + 0x3d0))();
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  *(void*)(this_ptr + 0x33) = 0;
  *(void*)((int64_t)this_ptr + 0x1b4) = param_1;
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar6 = FUN_017f2970();
  if (cVar6 != '\0') {
    pvVar7 = _pthread_getspecific(in_ECX);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar6 = FUN_017f2980();
    if (cVar6 == '\0') {
      auVar28._8_8_ = in_XMM1_Qb;
      auVar28._0_8_ = param_2;
      uVar31 = (uint32_t)((uint64_t)in_XMM1_Qb >> 0x20);
      fVar30 = (float)((uint64_t)param_2 >> 0x20);
      fVar18 = g_0240b530 * fVar30;
      auVar23 = ZEXT416(g_023945e0 & (uint)fVar18) | g_023945f0;
      auVar23._0_4_ = auVar23._0_4_ + fVar18;
      auVar23 = roundss(ZEXT816(0),auVar23,0xb);
      fVar18 = g_0241fd58;
      if (auVar23._0_4_ <= g_0241fd58) {
        fVar18 = auVar23._0_4_;
      }
      auVar4._8_8_ = extraout_XMM0_Qb;
      auVar4._0_8_ = uVar19;
      uVar3 = (uint32_t)((uint64_t)extraout_XMM0_Qb >> 0x20);
      fVar25 = (float)((uint64_t)uVar19 >> 0x20);
      auVar20._4_4_ = fVar25;
      auVar20._0_4_ = fVar25;
      auVar20._8_4_ = uVar3;
      auVar20._12_4_ = uVar3;
      fVar30 = fVar30 - fVar18;
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = fVar25 + fVar30;
      insertps(auVar4,auVar21,0x10);
      insertps(auVar28,ZEXT416((uint)fVar18),0x10);
      cVar6 = FUN_00d05410();
      if (cVar6 == '\0') {
        if (-1 < (int)*(uint *)((int64_t)this_ptr + 0x19c)) {
          lVar8 = 0;
          auVar29._8_8_ = in_XMM0_Qb;
          auVar29._0_8_ = param_1;
          while (((float)param_1 < *(float *)(*(int64_t *)(this_ptr[0x2f] + 0x10) + lVar8 * 4) ||
                 (*(float *)(*(int64_t *)(this_ptr[0x2f] + 0x10) + 4 + lVar8 * 4) <=
                  (float)param_1))) {
            lVar8 = lVar8 + 1;
            if ((uint64_t)*(uint *)((int64_t)this_ptr + 0x19c) + 1 == lVar8) goto LAB_01ac6b0a;
          }
          fVar18 = *(float *)(*(int64_t *)(this_ptr[0x30] + 0x10) + lVar8 * 4);
          uVar17 = -(uint)(fVar30 + g_02390440 < fVar18);
          uVar26 = ~uVar17 & (uint)fVar18;
          auVar27 = ZEXT416(uVar26);
          fVar18 = auVar21._0_4_ -
                   (float)(uVar17 & (uint)(fVar18 - (fVar18 - (fVar30 + g_02390440))) | uVar26);
          fVar25 = (float)((uint64_t)param_1 >> 0x20);
          if (fVar18 < fVar25) {
            FUN_01ac0380();
            if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
              FUN_00d50b00();
            }
            FUN_01e4ac90();
            if (local_38 != (int64_t *)0x0) {
              FUN_00d50b20();
            }
            goto LAB_01ac6de3;
          }
          if (fVar25 <= fVar18 + g_02390440) {
            FUN_01e4ac90();
            goto LAB_01ac6def;
          }
          pcVar2 = *(char **)(this_ptr[0x2e] + 0x10);
          auVar22 = ZEXT816(0);
          lVar10 = 0xc;
          auVar24._0_12_ = ZEXT812(0);
          auVar24._12_4_ = 0;
          do {
            auVar28 = pmovzxbd(auVar27,*(void*)(pcVar2 + lVar10 + -0xc));
            auVar27._0_4_ = auVar28._0_4_ + auVar22._0_4_;
            auVar27._4_4_ = auVar28._4_4_ + auVar22._4_4_;
            auVar27._8_4_ = auVar28._8_4_ + auVar22._8_4_;
            auVar27._12_4_ = auVar28._12_4_ + auVar22._12_4_;
            auVar28 = pmovzxbd(auVar29,*(void*)(pcVar2 + lVar10 + -8));
            auVar29._0_4_ = auVar28._0_4_ + auVar24._0_4_;
            auVar29._4_4_ = auVar28._4_4_ + auVar24._4_4_;
            auVar29._8_4_ = auVar28._8_4_ + auVar24._8_4_;
            auVar29._12_4_ = auVar28._12_4_ + auVar24._12_4_;
            auVar28 = pmovzxbd(auVar22,*(void*)(pcVar2 + lVar10 + -4));
            auVar23 = pmovzxbd(auVar24,*(void*)(pcVar2 + lVar10));
            auVar22._0_4_ = auVar28._0_4_ + auVar27._0_4_;
            auVar22._4_4_ = auVar28._4_4_ + auVar27._4_4_;
            auVar22._8_4_ = auVar28._8_4_ + auVar27._8_4_;
            auVar22._12_4_ = auVar28._12_4_ + auVar27._12_4_;
            auVar24._0_4_ = auVar23._0_4_ + auVar29._0_4_;
            auVar24._4_4_ = auVar23._4_4_ + auVar29._4_4_;
            auVar24._8_4_ = auVar23._8_4_ + auVar29._8_4_;
            auVar24._12_4_ = auVar23._12_4_ + auVar29._12_4_;
            lVar10 = lVar10 + 0x10;
          } while (lVar10 != 0x20c);
          if (*pcVar2 == '\0') {
            bVar15 = true;
            uVar11 = 0x20c;
          }
          else {
            uVar12 = 0;
            do {
              uVar11 = uVar12;
              if (pcVar2[uVar11 + 1] == '\0') goto LAB_01ac6c59;
              if (pcVar2[uVar11 + 2] == '\0') {
                uVar11 = uVar11 + 1;
                goto LAB_01ac6c59;
              }
              if (pcVar2[uVar11 + 3] == '\0') {
                uVar11 = uVar11 + 2;
                goto LAB_01ac6c59;
              }
              if (uVar11 == 0x1fc) {
                uVar11 = 0x1ff;
                goto LAB_01ac6c59;
              }
              uVar12 = uVar11 + 4;
            } while (pcVar2[uVar11 + 4] != '\0');
            uVar11 = uVar11 | 3;
LAB_01ac6c59:
            bVar15 = uVar11 < 0x1ff;
          }
          uVar17 = auVar24._8_4_ + auVar22._8_4_ + auVar24._0_4_ + auVar22._0_4_ +
                   auVar24._12_4_ + auVar22._12_4_ + auVar24._4_4_ + auVar22._4_4_;
          if (*pcVar2 == '\0') {
            lVar10 = 0;
            do {
              if (pcVar2[lVar10 + 1] != '\0') {
                lVar14 = lVar10 + 1;
                break;
              }
              if (pcVar2[lVar10 + 2] != '\0') {
                lVar14 = lVar10 + 2;
                break;
              }
              if (pcVar2[lVar10 + 3] != '\0') {
                lVar14 = lVar10 + 3;
                break;
              }
              if (lVar10 == 0x1fc) {
                lVar14 = 0xffffffff;
                break;
              }
              lVar14 = lVar10 + 4;
              lVar5 = lVar10 + 4;
              lVar10 = lVar14;
            } while (pcVar2[lVar5] == '\0');
          }
          else {
            lVar14 = 0;
          }
          uVar12 = 0x1ff;
          do {
            if (pcVar2[uVar12] != '\0') goto LAB_01ac6cfe;
            iVar13 = (int)uVar12;
            if (pcVar2[uVar12 - 1] != '\0') {
              uVar12 = (uint64_t)(iVar13 - 1);
              goto LAB_01ac6cfe;
            }
            if (pcVar2[uVar12 - 2] != '\0') {
              uVar12 = (uint64_t)(iVar13 - 2);
              goto LAB_01ac6cfe;
            }
            uVar11 = (uint64_t)(iVar13 - 3);
            if (pcVar2[uVar11] != '\0') {
              uVar12 = (uint64_t)(iVar13 - 3);
              goto LAB_01ac6cfe;
            }
            uVar12 = uVar12 - 4;
          } while ((int)uVar12 != -1);
          uVar12 = 0xffffffff;
LAB_01ac6cfe:
          iVar13 = (int)lVar14;
          if (iVar13 != -1) {
            uVar11 = CONCAT71((int7)(uVar11 >> 8),1);
            if (iVar13 <= (int)uVar12) {
              lVar10 = (int64_t)iVar13;
              do {
                pcVar1 = pcVar2 + lVar10;
                if (*pcVar1 == '\0') break;
                bVar16 = (int)uVar12 != lVar10;
                lVar10 = lVar10 + 1;
              } while (bVar16);
              uVar11 = CONCAT71((int7)(int3)(uVar12 >> 8),*pcVar1 != '\0');
            }
            if (((pcVar2[lVar8] != '\0') &&
                (bVar9 = (byte)uVar11 & bVar15, uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar9),
                bVar9 != 0)) && (2 < uVar17)) {
              FUN_01ac05e0();
              if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
                FUN_00d50b00();
              }
              FUN_01e4ac90();
              if (local_38 != (int64_t *)0x0) {
                FUN_00d50b20();
              }
              *(void*)(this_ptr + 0x33) = 2;
              goto LAB_01ac6def;
            }
          }
          FUN_01ac0380(pcVar2,uVar11,bVar15,uVar17,fVar30,uVar31);
          if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
            FUN_00d50b00();
          }
          FUN_01e4ac90();
          if (local_38 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
LAB_01ac6de3:
          *(void*)(this_ptr + 0x33) = 1;
          goto LAB_01ac6def;
        }
LAB_01ac6b0a:
        FUN_01e4ac90();
      }
      else {
        FUN_01ac0840();
        if ((local_30 == '\0') && (local_38 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        FUN_01e4ac90();
        if (local_38 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        *(void*)(this_ptr + 0x33) = 3;
      }
    }
  }
LAB_01ac6def:
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

