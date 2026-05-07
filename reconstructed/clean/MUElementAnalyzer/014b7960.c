// Function: FUN_014b7960
// Address: 014b7960
// Size: 5759 bytes
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


void FUN_014b7960(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  float *pfVar2;
  uint64_t uVar3;
  int iVar4;
  uint8_t auVar5 [16];
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  code *pcVar15;
  code *pcVar16;
  uint uVar17;
  int iVar18;
  int64_t lVar19;
  void*puVar20;
  void*puVar21;
  void*puVar22;
  void*puVar23;
  void*puVar24;
  uint64_t uVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t lVar28;
  uint uVar29;
  int64_t lVar30;
  int64_t lVar31;
  uint uVar32;
  int iVar33;
  int64_t *arg1;
  uint64_t uVar34;
  int64_t *this_ptr;
  int64_t lVar35;
  uint64_t uVar36;
  int64_t lVar37;
  uint uVar38;
  int iVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  uint64_t uVar42;
  float fVar43;
  uint32_t uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint8_t auVar49 [16];
  int iVar50;
  int iVar51;
  uint8_t auVar52 [16];
  uint8_t auVar53 [16];
  uint8_t auVar54 [16];
  uint8_t auVar55 [16];
  uint8_t auVar56 [16];
  uint local_ec;
  int64_t local_e0;
  int64_t local_d0;
  int64_t local_c0;
  int64_t local_b8;
  char local_b0;
  uint64_t local_a8;
  int64_t local_a0;
  uint64_t local_98;
  int64_t local_90;
  
  uVar29 = *(uint *)(*this_ptr + 0xc);
  uVar42 = (uint64_t)uVar29;
  iVar4 = *(int *)(*param_1 + 0x18);
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  fVar45 = *(float *)(*(int64_t *)(*param_1 + 0x10) + 4);
  if ((g_028acf38 == 0) || (g_028acf41 == '\0')) {
    FUN_00e8cb50();
    if (g_028acf38 == 0) {
      FUN_00c8e690();
      if ((local_b0 == '\0') && (local_b8 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      FUN_00c92160();
      lVar35 = g_028acf38;
      if ((g_028acf38 != local_b8) && (g_028acf38 = local_b8, lVar35 != 0)) {
        FUN_00d50b20();
      }
      if (local_b8 != 0) {
        if (g_028acf40 == '\0') {
          g_028acf40 = '\x01';
          FUN_00e8cb90();
        }
        if (local_b8 != 0 && lVar35 == local_b8) {
          FUN_00d50b20();
        }
      }
      lVar19 = FUN_00e83da0();
      lVar35 = g_028acf38;
      fVar47 = g_02394274;
      fVar43 = g_0239011c;
      lVar30 = 0;
      do {
        fVar48 = *(float *)(lVar19 + lVar30 * 4) * fVar43;
        if (fVar47 <= fVar48) {
          *(float *)(*(int64_t *)(lVar35 + 0x10) + lVar30 * 4) = g_02390124 / fVar48;
          fVar48 = *(float *)(lVar19 + 4 + lVar30 * 4);
        }
        else {
          fVar48 = *(float *)(lVar19 + 4 + lVar30 * 4);
        }
        fVar48 = fVar48 * fVar43;
        if (fVar47 <= fVar48) {
          *(float *)(*(int64_t *)(lVar35 + 0x10) + 4 + lVar30 * 4) = g_02390124 / fVar48;
        }
        lVar30 = lVar30 + 2;
      } while (lVar30 != 0x100);
      FUN_00e83070();
      g_028acf41 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028acf41 = '\x01';
      FUN_00e8cb70();
    }
  }
  puVar20 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar20 = &g_02572358;
  pcVar16 = g_02572370;
  (*g_02572370)();
  FUN_00d21370();
  puVar21 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar21 = &g_02572358;
  (*pcVar16)();
  FUN_00d21370();
  pcVar15 = g_025683d8;
  if ((int)uVar29 < 1) {
    lVar35 = 0;
  }
  else {
    uVar25 = 0;
    do {
      iVar4 = *(int *)(*(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + uVar25 * 8) + 0x18);
      iVar39 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar39 = iVar4;
      }
      puVar22 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar22 = &g_02572358;
      (*pcVar16)();
      iVar39 = iVar39 >> 2;
      FUN_00d21370();
      FUN_00d21140();
      puVar23 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar23 = &g_02572358;
      (*pcVar16)();
      FUN_00d21370();
      FUN_00d21140();
      if (iVar4 < 4) {
LAB_014b7e8a:
        FUN_00d50b20();
      }
      else {
        do {
          puVar24 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar24 = &g_025683c0;
          (*pcVar15)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          puVar24 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar24 = &g_025683c0;
          (*pcVar15)();
          FUN_00c92170();
          FUN_00c92160();
          FUN_00d21140();
          FUN_00d50b20();
          iVar39 = iVar39 + -1;
        } while (iVar39 != 0);
        if (puVar23 != (void*)0x0) goto LAB_014b7e8a;
      }
      if (puVar22 != (void*)0x0) {
        FUN_00d50b20();
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar42);
    fVar43 = g_02394244 * fVar45;
    local_98 = 1;
    lVar35 = 0;
    uVar25 = 0;
    do {
      lVar19 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + uVar25 * 8);
      if (lVar35 != lVar19) {
        lVar35 = lVar19;
      }
      uVar38 = *(uint *)(lVar35 + 0x18);
      uVar26 = uVar25 + 1;
      if (7 < (int)uVar38) {
        local_a8 = 1;
        do {
          if (uVar26 < uVar42) {
            fVar47 = *(float *)(*(int64_t *)(lVar35 + 0x10) + local_a8 * 4);
            uVar40 = local_98;
            do {
              lVar19 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + uVar40 * 8);
              iVar4 = *(int *)(lVar19 + 0x18);
              iVar39 = iVar4 + 3;
              if (-1 < iVar4) {
                iVar39 = iVar4;
              }
              uVar17 = iVar39 >> 2;
              lVar19 = *(int64_t *)(lVar19 + 0x10);
              uVar32 = uVar17;
              if (7 < iVar4) {
                uVar27 = 2;
                if (2 < (int)uVar17) {
                  uVar27 = (uint64_t)uVar17;
                }
                uVar41 = 1;
                do {
                  if (fVar47 < *(float *)(lVar19 + uVar41 * 4)) {
                    uVar3 = *(void*)(lVar19 + -4 + uVar41 * 4);
                    fVar48 = (float)((uint64_t)uVar3 >> 0x20);
                    if ((float)((uint)(fVar48 - fVar47) & _UNK_02390144) <
                        (float)((uint)((float)uVar3 - fVar47) & g_02390140)) goto LAB_014b80ae;
                    uVar32 = (uint)uVar41;
                    break;
                  }
                  uVar41 = uVar41 + 1;
                } while (uVar27 != uVar41);
              }
              uVar7 = uVar32 - 1;
              if ((int)(uVar32 - 1) < 1) {
                uVar7 = 1;
              }
              uVar41 = (uint64_t)uVar7;
              fVar48 = *(float *)(lVar19 + uVar41 * 4);
LAB_014b80ae:
              if (((float)((uint)(fVar47 - fVar48) & g_02390140) < fVar43) &&
                 ((int)uVar41 < (int)uVar17)) {
                lVar19 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(puVar20[2] + uVar25 * 8) + 0x10) +
                          local_a8 * 8);
                iVar4 = *(int *)(lVar19 + 0x18);
                uVar44 = FUN_00c8e340(local_a8,1);
                *(int *)(*(int64_t *)(lVar19 + 0x10) + (int64_t)iVar4) = (int)uVar40;
                lVar19 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(puVar20[2] + uVar40 * 8) + 0x10) + uVar41 * 8
                          );
                iVar4 = *(int *)(lVar19 + 0x18);
                FUN_00c8e340(uVar44,1);
                *(int *)(*(int64_t *)(lVar19 + 0x10) + (int64_t)iVar4) = (int)uVar25;
                lVar19 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(puVar21[2] + uVar25 * 8) + 0x10) +
                          local_a8 * 8);
                iVar4 = *(int *)(lVar19 + 0x18);
                uVar44 = FUN_00c8e340(local_a8,1);
                *(int *)(*(int64_t *)(lVar19 + 0x10) + (int64_t)iVar4) = (int)uVar41;
                lVar19 = *(int64_t *)
                          (*(int64_t *)(*(int64_t *)(puVar21[2] + uVar40 * 8) + 0x10) + uVar41 * 8
                          );
                iVar4 = *(int *)(lVar19 + 0x18);
                FUN_00c8e340(uVar44,1);
                *(int *)(*(int64_t *)(lVar19 + 0x10) + (int64_t)iVar4) = (int)local_a8;
              }
              uVar40 = uVar40 + 1;
            } while (uVar40 != uVar42);
          }
          local_a8 = local_a8 + 1;
        } while (local_a8 != uVar38 >> 2);
      }
      local_98 = local_98 + 1;
      uVar25 = uVar26;
    } while (uVar26 != uVar42);
  }
  if (0 < (int)uVar29) {
    fVar43 = g_02390124 / fVar45;
    fVar45 = g_023b2d70 / (fVar45 + fVar45);
    uVar25 = 0;
    local_c0 = 0;
    lVar19 = 0;
    local_e0 = 0;
    local_90 = 0;
    local_d0 = 0;
    local_a0 = 0;
    do {
      lVar30 = *(int64_t *)(*(int64_t *)(*this_ptr + 0x10) + uVar25 * 8);
      if (lVar35 != lVar30) {
        lVar35 = lVar30;
      }
      lVar30 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar25 * 8);
      if (local_c0 != lVar30) {
        local_c0 = lVar30;
      }
      ___bzero();
      iVar4 = *(int *)(local_c0 + 0x18);
      iVar39 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar39 = iVar4;
      }
      lVar30 = *(int64_t *)(puVar20[2] + uVar25 * 8);
      if (local_e0 != lVar30) {
        local_e0 = lVar30;
      }
      lVar30 = *(int64_t *)(puVar21[2] + uVar25 * 8);
      if (local_d0 != lVar30) {
        local_d0 = lVar30;
      }
      uVar29 = iVar39 >> 2;
      if (iVar4 < 8) {
        fVar47 = 0.0;
        local_ec = 0;
        uVar26 = 0;
        auVar55 = ZEXT816(0);
LAB_014b8762:
        fVar48 = g_02394264;
        if (g_02394274 <= auVar55._0_4_) {
          fVar48 = fVar47 / auVar55._0_4_;
        }
        if (local_ec == (uint)uVar26) {
          uVar26 = (uint64_t)(uVar29 - 1);
          local_ec = uVar29;
        }
        if (1 < (int)local_ec) {
          uVar40 = 1;
          do {
            fVar47 = *(float *)(*(int64_t *)(lVar35 + 0x10) + uVar40 * 4);
            iVar39 = FUN_00e7d780(fVar43 * fVar47);
            fVar46 = g_02394274;
            if (iVar39 < iVar6 >> 2) {
              iVar18 = FUN_00e7d780((float)((uint)(fVar47 - *(float *)(*(int64_t *)
                                                                        (*param_1 + 0x10) +
                                                                      (int64_t)iVar39 * 4)) &
                                           g_02390140) * fVar45);
              lVar30 = *(int64_t *)(*(int64_t *)(local_d0 + 0x10) + uVar40 * 8);
              if (local_a0 != lVar30) {
                local_a0 = lVar30;
              }
              fVar46 = g_02390124 / (float)(int)uVar40;
              fVar47 = fVar46;
              if (3 < (int)*(uint *)(local_a0 + 0x18)) {
                uVar38 = *(uint *)(local_a0 + 0x18) >> 2;
                lVar30 = *(int64_t *)(local_a0 + 0x10);
                if (uVar38 == 1) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = 0;
                  do {
                    fVar47 = g_02390124 / (float)*(int *)(lVar30 + 4 + uVar27 * 4) +
                             g_02390124 / (float)*(int *)(lVar30 + uVar27 * 4) + fVar47;
                    uVar27 = uVar27 + 2;
                  } while ((uVar38 & 0xfffffffe) != uVar27);
                }
                if ((uVar38 & 1) != 0) {
                  fVar47 = fVar47 + g_02390124 / (float)*(int *)(lVar30 + uVar27 * 4);
                }
              }
              fVar46 = *(float *)(*(int64_t *)(*param_2 + 0x10) + (int64_t)iVar39 * 4) *
                       *(float *)(*(int64_t *)(g_028acf38 + 0x10) + 0x200 + (int64_t)iVar18 * 4)
                       * (fVar46 / fVar47);
            }
            fVar47 = fVar48 / (float)(int)uVar40;
            if (fVar47 <= fVar46) {
              fVar46 = fVar47;
            }
            fVar47 = g_02394274;
            if (g_02394274 <= fVar46) {
              fVar47 = fVar46;
            }
            *(float *)(*(int64_t *)(local_c0 + 0x10) + uVar40 * 4) = fVar47;
            uVar40 = uVar40 + 1;
          } while (uVar40 != local_ec);
        }
      }
      else {
        uVar40 = 2;
        if (2 < (int)uVar29) {
          uVar40 = (uint64_t)uVar29;
        }
        uVar26 = 0;
        uVar27 = 1;
        local_ec = 0;
        do {
          while( true ) {
            fVar47 = *(float *)(*(int64_t *)(lVar35 + 0x10) + uVar27 * 4);
            lVar30 = *(int64_t *)(*(int64_t *)(local_e0 + 0x10) + uVar27 * 8);
            if (local_90 != lVar30) {
              local_90 = lVar30;
            }
            lVar30 = *(int64_t *)(*(int64_t *)(local_d0 + 0x10) + uVar27 * 8);
            if (local_a0 != lVar30) {
              local_a0 = lVar30;
            }
            uVar38 = *(uint *)(local_90 + 0x18);
            local_a8._0_4_ = 0.0;
            if (uVar38 + 3 < 7) break;
            uVar32 = uVar38 + 3;
            if (-1 < (int)uVar38) {
              uVar32 = uVar38;
            }
            if ((int64_t)
                *(int *)(*(int64_t *)(local_90 + 0x10) + -4 + (int64_t)((int)uVar32 >> 2) * 4) <
                (int64_t)uVar25) {
              if (3 < (int)uVar38) {
                local_a8._0_4_ = 0.0;
                lVar30 = 0;
                do {
                  lVar28 = *(int64_t *)
                            (*(int64_t *)(*arg1 + 0x10) +
                            (int64_t)*(int *)(*(int64_t *)(local_90 + 0x10) + lVar30 * 4) * 8);
                  if (lVar19 != lVar28) {
                    lVar19 = lVar28;
                  }
                  iVar39 = *(int *)(local_90 + 0x18);
                  local_a8._0_4_ =
                       (float)local_a8 +
                       *(float *)(*(int64_t *)(lVar19 + 0x10) +
                                 (int64_t)*(int *)(*(int64_t *)(local_a0 + 0x10) + lVar30 * 4) * 4
                                 );
                  lVar30 = lVar30 + 1;
                  iVar18 = iVar39 + 3;
                  if (-1 < iVar39) {
                    iVar18 = iVar39;
                  }
                } while (lVar30 < iVar18 >> 2);
              }
              break;
            }
LAB_014b8488:
            uVar27 = uVar27 + 1;
            if (uVar27 == uVar40) goto LAB_014b89e0;
          }
          iVar39 = FUN_00e7d780(fVar43 * fVar47);
          if (iVar6 >> 2 <= iVar39) goto LAB_014b8488;
          iVar18 = FUN_00e7d780((float)((uint)(fVar47 - *(float *)(*(int64_t *)(*param_1 + 0x10) +
                                                                  (int64_t)iVar39 * 4)) &
                                       g_02390140) * fVar45);
          local_a8._0_4_ =
               *(float *)(*(int64_t *)(*param_2 + 0x10) + (int64_t)iVar39 * 4) *
               *(float *)(*(int64_t *)(g_028acf38 + 0x10) + 0x200 + (int64_t)iVar18 * 4) -
               (float)local_a8;
          if ((float)local_a8 <= g_0239424c) goto LAB_014b8488;
          *(float *)(*(int64_t *)(local_c0 + 0x10) + uVar27 * 4) = (float)local_a8;
          if (local_ec == 0) {
            local_ec = (uint)uVar27;
          }
          uVar26 = uVar27 & 0xffffffff;
          uVar27 = uVar27 + 1;
        } while (uVar27 != uVar40);
LAB_014b89e0:
        if ((local_ec != 1) || ((int)uVar26 == 1)) {
          lVar30 = *(int64_t *)(local_c0 + 0x10);
          if (iVar4 < 0xc) {
            auVar55 = ZEXT816(0);
            lVar28 = 1;
            fVar47 = 0.0;
          }
          else {
            auVar55 = ZEXT816(0);
            lVar28 = 1;
            fVar47 = 0.0;
            do {
              fVar48 = *(float *)(lVar30 + lVar28 * 4);
              if (g_0239424c < fVar48) {
                fVar47 = fVar47 + fVar48;
                auVar55._0_4_ = auVar55._0_4_ + g_02390124 / (float)(int)lVar28;
              }
              fVar48 = *(float *)(lVar30 + 4 + lVar28 * 4);
              if (g_0239424c < fVar48) {
                fVar47 = fVar47 + fVar48;
                auVar55._0_4_ = auVar55._0_4_ + g_02390124 / (float)((int)lVar28 + 1);
              }
              lVar31 = lVar28 - (uVar40 - 1 & 0xfffffffffffffffe);
              lVar28 = lVar28 + 2;
            } while (lVar31 != -1);
          }
          if (((uVar40 - 1 & 1) != 0) &&
             (fVar48 = *(float *)(lVar30 + lVar28 * 4), g_0239424c < fVar48)) {
            fVar47 = fVar47 + fVar48;
            auVar55._0_4_ = auVar55._0_4_ + g_02390124 / (float)(int)lVar28;
          }
          goto LAB_014b8762;
        }
      }
      uVar38 = 2;
      if (2 < (int)uVar29) {
        uVar38 = uVar29;
      }
      iVar39 = (int)uVar26;
      uVar40 = 2;
      if (2 < iVar39) {
        uVar40 = uVar26;
      }
      lVar30 = *(int64_t *)(local_c0 + 0x10);
      uVar27 = 1;
      uVar26 = 1;
      lVar28 = 0;
      do {
        if (uVar26 == uVar38 - 1) break;
        uVar41 = uVar26 + 1;
        fVar47 = *(float *)(lVar30 + uVar41 * 4);
        if (g_0239424c < fVar47) {
          iVar18 = (int)uVar27;
          uVar27 = (uint64_t)iVar18;
          if ((int64_t)uVar27 < (int64_t)uVar26) {
            fVar48 = *(float *)(lVar30 + uVar27 * 4);
            fVar47 = (fVar47 - fVar48) / (float)((int)uVar41 - iVar18);
            uVar32 = (int)(lVar28 + 1) - iVar18;
            uVar36 = lVar28 - uVar27;
            uVar34 = (uint64_t)uVar32 & 3;
            if ((uVar32 & 3) != 0) {
              do {
                fVar48 = fVar48 + fVar47;
                *(float *)(lVar30 + 4 + uVar27 * 4) = fVar48;
                uVar27 = uVar27 + 1;
                uVar34 = uVar34 - 1;
              } while (uVar34 != 0);
            }
            if (2 < uVar36) {
              do {
                *(float *)(lVar30 + 4 + uVar27 * 4) = fVar48 + fVar47;
                fVar48 = fVar48 + fVar47 + fVar47;
                *(float *)(lVar30 + 8 + uVar27 * 4) = fVar48;
                fVar48 = fVar48 + fVar47;
                *(float *)(lVar30 + 0xc + uVar27 * 4) = fVar48;
                fVar48 = fVar48 + fVar47;
                *(float *)(lVar30 + 0x10 + uVar27 * 4) = fVar48;
                uVar27 = uVar27 + 4;
              } while (uVar26 != uVar27);
            }
          }
          uVar27 = uVar41 & 0xffffffff;
        }
        uVar26 = uVar41;
        lVar28 = lVar28 + 1;
      } while (uVar41 != uVar40);
      iVar14 = _UNK_023de2bc;
      iVar13 = _UNK_023de2b8;
      iVar12 = _UNK_023de2b4;
      iVar11 = g_023de2b0;
      iVar10 = _UNK_0239418c;
      iVar9 = _UNK_02394188;
      iVar8 = _UNK_02394184;
      iVar18 = g_02394180;
      iVar33 = iVar39 + 1;
      if (iVar33 < (int)uVar29) {
        fVar47 = (float)iVar39 * *(float *)(lVar30 + (int64_t)iVar39 * 4);
        lVar28 = (int64_t)iVar33;
        uVar32 = (uVar29 - iVar39) - 2;
        if (2 < uVar32) {
          uVar26 = (uint64_t)uVar32 + 1;
          uVar40 = uVar26 & 0xfffffffffffffffc;
          iVar39 = iVar33 + g_0238fcc0;
          iVar50 = iVar33 + _UNK_0238fcc4;
          iVar51 = iVar33 + _UNK_0238fcc8;
          iVar33 = iVar33 + _UNK_0238fccc;
          auVar49._0_8_ = CONCAT44(fVar47,fVar47);
          auVar49._8_4_ = fVar47;
          auVar49._12_4_ = fVar47;
          uVar27 = (uVar40 - 4 >> 2) + 1;
          if (uVar40 - 4 == 0) {
            lVar31 = 0;
LAB_014b8c07:
            auVar5._4_4_ = (float)iVar50;
            auVar5._0_4_ = (float)iVar39;
            auVar5._8_4_ = (float)iVar51;
            auVar5._12_4_ = (float)iVar33;
            auVar55 = divps(auVar49,auVar5);
            *(uint8_t (*) [16])(lVar30 + (lVar31 + lVar28) * 4) = auVar55;
          }
          else {
            lVar1 = lVar30 + lVar28 * 4;
            lVar37 = -(uVar27 & 0xfffffffffffffffe);
            lVar31 = 0;
            do {
              auVar52._0_4_ = (float)iVar39;
              auVar52._4_4_ = (float)iVar50;
              auVar52._8_4_ = (float)iVar51;
              auVar52._12_4_ = (float)iVar33;
              auVar54._8_4_ = fVar47;
              auVar54._0_8_ = auVar49._0_8_;
              auVar54._12_4_ = fVar47;
              auVar55 = divps(auVar54,auVar52);
              *(uint8_t (*) [16])(lVar1 + lVar31 * 4) = auVar55;
              auVar53._0_4_ = (float)(iVar39 + iVar18);
              auVar53._4_4_ = (float)(iVar50 + iVar8);
              auVar53._8_4_ = (float)(iVar51 + iVar9);
              auVar53._12_4_ = (float)(iVar33 + iVar10);
              auVar56._8_4_ = fVar47;
              auVar56._0_8_ = auVar49._0_8_;
              auVar56._12_4_ = fVar47;
              auVar55 = divps(auVar56,auVar53);
              *(uint8_t (*) [16])(lVar1 + 0x10 + lVar31 * 4) = auVar55;
              lVar31 = lVar31 + 8;
              iVar39 = iVar39 + iVar11;
              iVar50 = iVar50 + iVar12;
              iVar51 = iVar51 + iVar13;
              iVar33 = iVar33 + iVar14;
              lVar37 = lVar37 + 2;
            } while (lVar37 != 0);
            if ((uVar27 & 1) != 0) goto LAB_014b8c07;
          }
          if (uVar26 == uVar40) goto LAB_014b8c4b;
          lVar28 = lVar28 + uVar40;
        }
        do {
          *(float *)(lVar30 + lVar28 * 4) = fVar47 / (float)(int)lVar28;
          lVar28 = lVar28 + 1;
        } while (uVar29 != (uint)lVar28);
      }
LAB_014b8c4b:
      if (7 < iVar4) {
        uVar26 = (uint64_t)uVar38 - 1;
        uVar40 = 1;
        if (7 < uVar26) {
          uVar41 = uVar26 & 0xfffffffffffffff8;
          uVar40 = uVar41 + 1;
          uVar27 = 0;
          do {
            pfVar2 = (float *)(lVar30 + 4 + uVar27 * 4);
            fVar47 = pfVar2[1];
            fVar48 = pfVar2[2];
            fVar46 = pfVar2[3];
            if (*pfVar2 < g_02394274) {
              *(void*)(lVar30 + 4 + uVar27 * 4) = 0x800000;
            }
            if (fVar47 < _UNK_02411094) {
              *(void*)(lVar30 + 8 + uVar27 * 4) = 0x800000;
            }
            if (_UNK_02411098 <= fVar48) {
              if (_UNK_0241109c <= fVar46) goto LAB_014b8d01;
LAB_014b8d98:
              *(void*)(lVar30 + 0x10 + uVar27 * 4) = 0x800000;
              pfVar2 = (float *)(lVar30 + 0x14 + uVar27 * 4);
              fVar47 = pfVar2[1];
              fVar48 = pfVar2[2];
              fVar46 = pfVar2[3];
              if (*pfVar2 < g_02394274) {
LAB_014b8d13:
                *(void*)(lVar30 + 0x14 + uVar27 * 4) = 0x800000;
              }
            }
            else {
              *(void*)(lVar30 + 0xc + uVar27 * 4) = 0x800000;
              if (fVar46 < _UNK_0241109c) goto LAB_014b8d98;
LAB_014b8d01:
              pfVar2 = (float *)(lVar30 + 0x14 + uVar27 * 4);
              fVar47 = pfVar2[1];
              fVar48 = pfVar2[2];
              fVar46 = pfVar2[3];
              if (*pfVar2 < g_02394274) goto LAB_014b8d13;
            }
            if (fVar47 < _UNK_02411094) {
              *(void*)(lVar30 + 0x18 + uVar27 * 4) = 0x800000;
            }
            if (fVar48 < _UNK_02411098) {
              *(void*)(lVar30 + 0x1c + uVar27 * 4) = 0x800000;
            }
            if (fVar46 < _UNK_0241109c) {
              *(void*)(lVar30 + 0x20 + uVar27 * 4) = 0x800000;
            }
            uVar27 = uVar27 + 8;
          } while (uVar41 != uVar27);
          if (uVar26 == uVar41) goto LAB_014b82d0;
        }
        do {
          pfVar2 = (float *)(lVar30 + uVar40 * 4);
          if (*pfVar2 <= g_02394274 && g_02394274 != *pfVar2) {
            *(void*)(lVar30 + uVar40 * 4) = 0x800000;
          }
          uVar40 = uVar40 + 1;
        } while (uVar38 != uVar40);
      }
LAB_014b82d0:
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar42);
  }
  if (puVar21 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (puVar20 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

