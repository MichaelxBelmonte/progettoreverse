// Function: FUN_0138f140
// Address: 0138f140
// Size: 2930 bytes
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


void FUN_0138f140(int64_t param_1)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  code *pcVar7;
  int64_t lVar8;
  void* pVar9;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int64_t lVar13;
  void*puVar14;
  void* pVar15;
  uint64_t uVar16;
  int64_t *arg1;
  int64_t this_ptr;
  int iVar17;
  int iVar18;
  int64_t lVar19;
  int64_t lVar20;
  bool bVar21;
  int64_t local_190;
  char local_188;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  int64_t local_160;
  char local_158;
  int64_t local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  int64_t local_130;
  char local_128;
  void*local_120;
  char local_118;
  int64_t local_110;
  char local_108;
  int64_t local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int local_dc;
  int local_d8;
  uint32_t local_d4;
  int64_t local_d0;
  int64_t local_c8;
  int64_t local_c0;
  uint64_t local_b8;
  uint32_t local_b0;
  float local_ac;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  int64_t local_80;
  void*local_70;
  byte local_61;
  void*local_58;
  int local_44;
  void* local_38;
  
  lVar13 = *arg1;
  if (*(int *)(lVar13 + 0xc) < 1) {
    iVar18 = -1;
    iVar17 = 0x7fffffff;
  }
  else {
    iVar17 = 0x7fffffff;
    iVar18 = -1;
    lVar20 = 0;
    do {
      pVar15 = (void*)param_1;
      lVar13 = *(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar20 * 8);
      if (lVar13 != 0) {
        FUN_00d50b00();
      }
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar10 = FUN_014c2f20();
      pvVar12 = _pthread_getspecific(pVar15);
      if (pvVar12 != (void *)0x0) {
        FUN_00e8b990();
      }
      iVar11 = FUN_014c2f80();
      if (iVar10 < iVar17) {
        iVar17 = iVar10;
      }
      if (iVar18 < iVar11) {
        iVar18 = iVar11;
      }
      if (lVar13 != 0) {
        FUN_00d50b20();
      }
      lVar20 = lVar20 + 1;
      lVar13 = *arg1;
      param_1 = (int64_t)*(int *)(lVar13 + 0xc);
    } while (lVar20 < param_1);
  }
  pcVar7 = g_025f14a0;
  if (iVar17 <= iVar18) {
    local_38 = -1000;
    local_d0 = 0;
    local_c0 = 0;
    local_44 = -1000;
    local_c8 = 0;
    local_b8 = 0;
    local_88 = 0;
    bVar6 = false;
    local_80 = 0;
    bVar5 = false;
    local_70 = (void*)0x0;
    bVar4 = 0;
    local_58 = (void*)0x0;
    bVar2 = 0;
    local_dc = iVar18;
    do {
      if (0 < *(int *)(lVar13 + 0xc)) {
        uVar16 = (uint64_t)((uint)(1 < iVar17) * 2 - 1);
        lVar20 = 0;
        local_d8 = iVar17 + -1;
        do {
          pVar15 = (void*)uVar16;
          lVar13 = *(int64_t *)(*(int64_t *)(lVar13 + 0x10) + lVar20 * 8);
          if (lVar13 != 0) {
            FUN_00d50b00();
          }
          pvVar12 = _pthread_getspecific(pVar15);
          if (pvVar12 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_014c34a0();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
              goto LAB_0138f420;
            }
LAB_0138f436:
            if (local_98 != 0) goto LAB_0138f43e;
          }
          else {
            if (local_98 == 0) goto LAB_0138f436;
LAB_0138f420:
            if ((!NAN(*(float *)(local_98 + 0x20))) && (!NAN(*(float *)(local_98 + 0x10))))
            goto LAB_0138f436;
            puVar14 = local_58;
            pVar9 = local_38;
            if (iVar17 != local_44) {
              if (local_88 == 0) {
                lVar19 = *(int64_t *)(this_ptr + 0x1a0);
                if (lVar19 == 0) {
                  FUN_0132d640();
                  lVar19 = *(int64_t *)(this_ptr + 0x1a0);
                }
                if (lVar19 != 0) {
                  FUN_00d50b00();
                }
                if (lVar19 == local_80) {
                  bVar21 = bVar5;
                  if (lVar19 != 0) {
                    bVar21 = true;
                  }
                  lVar8 = local_80;
                  if ((bVar5) && (bVar21 = bVar5, lVar19 != 0)) {
                    FUN_00d50b20();
                  }
                }
                else {
                  bVar21 = true;
                  lVar8 = lVar19;
                  if ((bVar5) && (local_80 != 0)) {
                    FUN_00d50b20();
                  }
                }
                bVar5 = bVar21;
                local_80 = lVar8;
                local_b0 = *(void*)(local_80 + 0x30);
                local_b8 = (uint64_t)*(uint *)(local_80 + 0x20);
                dVar1 = *(double *)(local_80 + 0x50);
                local_d4 = *(void*)(local_80 + 0x2c);
                local_61 = *(byte *)(local_80 + 0x5c);
                GNFastFourierTransformer_create();
                local_88 = local_98;
                if (local_98 == 0) {
                  local_88 = 0;
                }
                else {
                  bVar6 = true;
                  if (local_90 == '\0') {
                    FUN_00d50b00();
                  }
                }
                local_d0 = FUN_00e83da0();
                local_c0 = FUN_00e83010();
                local_c8 = FUN_00e83010();
                local_ac = (float)dVar1;
              }
              if (local_38 != local_d8) {
                puVar14 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar14 = &g_025f1488;
                *(void*)((int64_t)puVar14 + 0xc) = 0;
                *(void*)((int64_t)puVar14 + 0x14) = 0;
                *(void*)((int64_t)puVar14 + 0x1c) = 0;
                *(void*)((int64_t)puVar14 + 0x24) = 0;
                *(void*)((int64_t)puVar14 + 0x2c) = 0;
                *(void*)((int64_t)puVar14 + 0x34) = 0;
                *(void*)((int64_t)puVar14 + 0x3c) = 0;
                *(void*)((int64_t)puVar14 + 0x44) = 0;
                puVar14[9] = 0;
                puVar14[10] = 0;
                (*pcVar7)();
                if (puVar14 == local_58) {
                  puVar14 = local_58;
                  if (bVar2 == 0) {
                    bVar2 = 1;
                  }
                  else {
                    FUN_00d50b20();
                  }
                }
                else {
                  bVar3 = 1;
                  bVar21 = bVar2 != 0;
                  bVar2 = bVar3;
                  if ((bVar21) && (local_58 != (void*)0x0)) {
                    FUN_00d50b20();
                  }
                }
                local_58 = puVar14;
                local_190 = *(int64_t *)(this_ptr + 0x38);
                local_188 = '\0';
                local_180 = local_80;
                local_178 = '\0';
                local_170 = 0;
                local_168 = '\0';
                local_160 = local_88;
                local_158 = '\0';
                local_150 = 0;
                local_148 = '\0';
                FUN_015c4d90(0,local_c8,&local_190,&local_180,&local_160,local_d0,local_61 & 1,6,
                             &local_150);
                if ((local_148 != '\0') && (local_150 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_158 != '\0') && (local_160 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_168 != '\0') && (local_170 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_178 != '\0') && (local_180 != 0)) {
                  FUN_00d50b20();
                }
                if ((local_188 != '\0') && (local_190 != 0)) {
                  FUN_00d50b20();
                }
              }
              puVar14 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar14 = &g_025f1488;
              *(void*)((int64_t)puVar14 + 0xc) = 0;
              *(void*)((int64_t)puVar14 + 0x14) = 0;
              *(void*)((int64_t)puVar14 + 0x1c) = 0;
              *(void*)((int64_t)puVar14 + 0x24) = 0;
              *(void*)((int64_t)puVar14 + 0x2c) = 0;
              *(void*)((int64_t)puVar14 + 0x34) = 0;
              *(void*)((int64_t)puVar14 + 0x3c) = 0;
              *(void*)((int64_t)puVar14 + 0x44) = 0;
              puVar14[9] = 0;
              puVar14[10] = 0;
              (*pcVar7)();
              if (puVar14 == local_70) {
                puVar14 = local_70;
                if (bVar4 == 0) {
                  local_38 = 1;
                }
                else {
                  FUN_00d50b20();
                  local_38 = (void*)bVar4;
                }
              }
              else {
                local_38 = 1;
                if ((bVar4 != 0) && (local_70 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
              local_140 = *(int64_t *)(this_ptr + 0x38);
              local_138 = '\0';
              local_130 = local_80;
              local_128 = '\0';
              local_120 = local_58;
              local_118 = '\0';
              local_110 = local_88;
              local_108 = '\0';
              local_100 = 0;
              local_f8 = '\0';
              pVar15 = 0;
              FUN_015c4d90(0,local_c8,&local_140,&local_130,&local_110,local_d0,local_61 & 1,0x1e,
                           &local_100);
              if ((local_f8 != '\0') && (local_100 != 0)) {
                FUN_00d50b20();
              }
              if ((local_108 != '\0') && (local_110 != 0)) {
                FUN_00d50b20();
              }
              if ((local_118 != '\0') && (local_120 != (void*)0x0)) {
                FUN_00d50b20();
              }
              if ((local_128 != '\0') && (local_130 != 0)) {
                FUN_00d50b20();
              }
              if ((local_138 != '\0') && (local_140 != 0)) {
                FUN_00d50b20();
              }
              FUN_015c6b60();
              FUN_015c66c0();
              FUN_015c6ba0();
              pVar9 = iVar17;
              bVar4 = (byte)local_38;
              if (local_58 == puVar14) {
                local_70 = local_58;
                puVar14 = local_58;
                if ((bVar2 == 0) && (local_70 = local_58, local_58 != (void*)0x0)) {
                  FUN_00d50b00();
                  local_70 = local_58;
                  bVar2 = 1;
                }
              }
              else {
                if (puVar14 != (void*)0x0) {
                  FUN_00d50b00();
                }
                bVar21 = bVar2 != 0;
                pVar15 = local_38;
                local_70 = puVar14;
                bVar2 = (byte)local_38;
                if ((bVar21) && (local_58 != (void*)0x0)) {
                  FUN_00d50b20();
                }
              }
            }
            local_38 = pVar9;
            local_58 = puVar14;
            pvVar12 = _pthread_getspecific(pVar15);
            if (pvVar12 != (void *)0x0) {
              FUN_00e8b990();
            }
            local_f0 = local_98;
            local_e8 = '\0';
            FUN_014c3020();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_e8 != '\0') && (local_f0 != 0)) {
              FUN_00d50b20();
            }
            if (NAN(*(float *)(local_98 + 0x20))) {
              FUN_014eecb0(g_0240ded4,local_ac,local_d4);
            }
            local_44 = iVar17;
            if (NAN(*(float *)(local_98 + 0x10))) {
              FUN_014eed60(local_ac,local_b8);
            }
LAB_0138f43e:
            FUN_00d50b20();
          }
          if (lVar13 != 0) {
            FUN_00d50b20();
          }
          lVar20 = lVar20 + 1;
          lVar13 = *arg1;
          uVar16 = (uint64_t)*(int *)(lVar13 + 0xc);
          iVar18 = local_dc;
        } while (lVar20 < (int64_t)uVar16);
      }
      lVar19 = local_c8;
      lVar20 = local_d0;
      bVar21 = iVar17 != iVar18;
      iVar17 = iVar17 + 1;
    } while (bVar21);
    if (local_c0 != 0) {
      FUN_00e83070();
    }
    if (lVar19 != 0) {
      FUN_00e83070();
    }
    if (lVar20 != 0) {
      FUN_00e83070();
    }
    if ((bVar2 != 0) && (local_58 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar4 != 0) && (local_70 != (void*)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar5) && (local_80 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_88 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

