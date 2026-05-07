// Function: FUN_014b0a60
// Address: 014b0a60
// Size: 5433 bytes
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


void FUN_014b0a60(int param_1,int64_t *param_2,int64_t *param_3,char param_4)

{
  double dVar1;
  uint8_t uVar2;
  bool bVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  code *pcVar10;
  void*puVar11;
  bool bVar12;
  uint32_t uVar13;
  float *pfVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  void*puVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  float *pfVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  void*puVar26;
  uint uVar27;
  int iVar28;
  int64_t lVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  uint64_t uVar32;
  uint64_t uVar33;
  int iVar34;
  int iVar35;
  int64_t arg1;
  int64_t lVar36;
  int64_t lVar37;
  uint uVar38;
  uint uVar39;
  int64_t *this_ptr;
  uint64_t uVar40;
  int64_t lVar41;
  int64_t lVar42;
  uint uVar43;
  uint uVar44;
  int64_t lVar45;
  uint uVar46;
  uint64_t uVar47;
  void*puVar48;
  int64_t *plVar49;
  bool bVar50;
  bool bVar51;
  float fVar52;
  uint8_t auVar53 [16];
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  byte local_res8;
  float *local_res10;
  float *local_res18;
  float local_1e8;
  int64_t local_1b8;
  int64_t local_1b0;
  int64_t local_198;
  int64_t local_180;
  char local_178;
  int64_t local_170;
  char local_168;
  void*local_160;
  char local_158;
  void*local_150;
  char local_148;
  int64_t local_140;
  char local_138;
  uint local_12c;
  uint local_128;
  uint local_124;
  int local_120;
  uint local_11c;
  uint64_t local_118;
  int64_t local_110;
  int64_t local_108;
  int64_t local_100;
  uint64_t local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int local_bc;
  int64_t *local_b8;
  uint64_t local_b0;
  float local_98;
  float local_94;
  void*local_78;
  char local_70;
  void*local_38;
  
  puVar11 = local_78;
  lVar19 = *param_3;
  uVar46 = *(uint *)(lVar19 + 0x20);
  uVar32 = (uint64_t)uVar46;
  local_108 = (int64_t)*(int *)(lVar19 + 0x30);
  dVar1 = *(double *)(lVar19 + 0x18);
  local_bc = param_1;
  FUN_015c7140();
  if (local_70 != '\0') {
    FUN_00d50b20();
  }
  bVar50 = local_res10 != (float *)0x0;
  bVar51 = local_res18 != (float *)0x0;
  FUN_00d216c0();
  uVar2 = *(void*)(*param_3 + 0x5c);
  GNFastFourierTransformer_create();
  if ((local_70 == '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b00();
  }
  pfVar14 = (float *)FUN_00e83010();
  uVar15 = FUN_00e83010();
  local_100 = FUN_00e83da0();
  if ((param_4 != '\0') && (0 < (int)uVar46)) {
    if (uVar46 < 4) {
      uVar22 = 0;
    }
    else {
      uVar22 = (uint64_t)(uVar46 & 0xfffffffc);
      uVar21 = 0;
      do {
        auVar53 = *(uint8_t (*) [16])(local_100 + uVar21 * 4);
        auVar53 = sqrtps(auVar53,auVar53);
        *(uint8_t (*) [16])(local_100 + uVar21 * 4) = auVar53;
        uVar21 = uVar21 + 4;
      } while (uVar22 != uVar21);
      if (uVar22 == uVar32) goto LAB_014b0bd7;
    }
    do {
      *(float *)(local_100 + uVar22 * 4) = SQRT(*(float *)(local_100 + uVar22 * 4));
      uVar22 = uVar22 + 1;
    } while (uVar32 != uVar22);
  }
LAB_014b0bd7:
  pcVar10 = g_025f14a0;
  uVar38 = (int)uVar46 / 2;
  local_f8 = (uint64_t)uVar38;
  local_b8 = param_2;
  if (local_bc < 1) {
    local_98 = 0.0;
    bVar12 = false;
    puVar26 = (void*)0x0;
    bVar7 = false;
    local_38 = (void*)0x0;
    local_94 = 0.0;
    puVar18 = local_78;
  }
  else {
    local_128 = local_res8 + 0x3e;
    fVar58 = (float)dVar1;
    uVar44 = (uint)((float)(~-(uint)(fVar58 < g_02390124) & (uint)fVar58 |
                           -(uint)(fVar58 < g_02390124) & (uint)(g_02390124 / fVar58)) +
                   g_0239011c);
    bVar3 = fVar58 < g_02390124;
    lVar41 = (int64_t)(int)((double)(int)uVar38 * dVar1 + g_023942d0);
    uVar43 = uVar46 - 1;
    uVar21 = (uint64_t)uVar43 + 1;
    uVar47 = uVar21 & 0xfffffffffffffff8;
    local_11c = uVar46 - (int)uVar47;
    lVar45 = arg1 + lVar41 * -4;
    uVar40 = (uVar47 - 8 >> 3) + 1;
    local_124 = (uint)((float)(int)uVar38 * g_0241bdc0);
    uVar30 = (uint64_t)local_124;
    uVar22 = uVar30 - 1;
    uVar33 = (uint64_t)((uint)uVar40 & 3);
    uVar16 = (uint64_t)((uint)uVar22 & 7);
    uVar38 = uVar44 - 1;
    uVar31 = (uint64_t)uVar38;
    local_b0 = ~uVar31;
    iVar34 = 0;
    local_120 = -(uVar46 & 0xfffffffe);
    local_198 = arg1 + (4 - lVar41) * 4;
    local_1e8 = 0.0;
    local_94 = 0.0;
    local_98 = 0.0;
    local_118 = CONCAT44(local_118._4_4_,uVar44 - 1);
    lVar19 = local_108 * 4;
    local_1b0 = 0;
    local_110 = 0;
    local_38 = (void*)0x0;
    bVar7 = false;
    puVar48 = (void*)0x0;
    local_1b8 = lVar41;
    bVar8 = false;
    do {
      local_12c = local_128;
      if (iVar34 == 0) {
        local_12c = local_res8 | 0x26;
      }
      if (((int)uVar44 <= (int)uVar46 || bVar3) && (0.0 < fVar58 && 0 < (int)uVar46)) {
        lVar42 = local_110 - lVar41;
        if (uVar44 == 1) {
          uVar27 = uVar46;
          pfVar23 = pfVar14;
          if ((6 < uVar43) &&
             (((float *)(arg1 + ((uVar21 - lVar41) + local_1b0 * local_108) * 4) <= pfVar14 ||
              (pfVar14 + (uint64_t)uVar43 + 1 <=
               (float *)(arg1 + (local_1b0 * local_108 - lVar41) * 4))))) {
            if (uVar47 - 8 < 0x18) {
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              lVar36 = -(uVar40 & 0xfffffffffffffffc);
              do {
                puVar18 = (void*)(lVar45 + lVar17 * 4);
                uVar4 = puVar18[1];
                puVar26 = (void*)(lVar45 + 0x10 + lVar17 * 4);
                uVar5 = *puVar26;
                uVar6 = puVar26[1];
                *(void*)(pfVar14 + lVar17) = *puVar18;
                *(void*)(pfVar14 + lVar17 + 2) = uVar4;
                *(void*)(pfVar14 + lVar17 + 4) = uVar5;
                *(void*)(pfVar14 + lVar17 + 4 + 2) = uVar6;
                puVar18 = (void*)(lVar45 + 0x20 + lVar17 * 4);
                uVar4 = puVar18[1];
                puVar26 = (void*)(lVar45 + 0x30 + lVar17 * 4);
                uVar5 = *puVar26;
                uVar6 = puVar26[1];
                *(void*)(pfVar14 + lVar17 + 8) = *puVar18;
                *(void*)(pfVar14 + lVar17 + 8 + 2) = uVar4;
                *(void*)(pfVar14 + lVar17 + 0xc) = uVar5;
                *(void*)(pfVar14 + lVar17 + 0xc + 2) = uVar6;
                puVar18 = (void*)(lVar45 + 0x40 + lVar17 * 4);
                uVar4 = puVar18[1];
                puVar26 = (void*)(lVar45 + 0x50 + lVar17 * 4);
                uVar5 = *puVar26;
                uVar6 = puVar26[1];
                *(void*)(pfVar14 + lVar17 + 0x10) = *puVar18;
                *(void*)(pfVar14 + lVar17 + 0x10 + 2) = uVar4;
                *(void*)(pfVar14 + lVar17 + 0x14) = uVar5;
                *(void*)(pfVar14 + lVar17 + 0x14 + 2) = uVar6;
                puVar18 = (void*)(lVar45 + 0x60 + lVar17 * 4);
                uVar4 = puVar18[1];
                puVar26 = (void*)(lVar45 + 0x70 + lVar17 * 4);
                uVar5 = *puVar26;
                uVar6 = puVar26[1];
                *(void*)(pfVar14 + lVar17 + 0x18) = *puVar18;
                *(void*)(pfVar14 + lVar17 + 0x18 + 2) = uVar4;
                *(void*)(pfVar14 + lVar17 + 0x1c) = uVar5;
                *(void*)(pfVar14 + lVar17 + 0x1c + 2) = uVar6;
                lVar17 = lVar17 + 0x20;
                lVar36 = lVar36 + 4;
              } while (lVar36 != 0);
            }
            if (uVar33 != 0) {
              lVar36 = local_198 + lVar17 * 4;
              lVar29 = 0;
              do {
                puVar26 = (void*)(lVar36 + -0x10 + lVar29);
                uVar4 = puVar26[1];
                puVar18 = (void*)(lVar36 + lVar29);
                uVar5 = *puVar18;
                uVar6 = puVar18[1];
                puVar18 = (void*)((int64_t)pfVar14 + lVar29 + lVar17 * 4);
                *puVar18 = *puVar26;
                puVar18[1] = uVar4;
                puVar18 = (void*)((int64_t)pfVar14 + lVar29 + lVar17 * 4 + 0x10);
                *puVar18 = uVar5;
                puVar18[1] = uVar6;
                lVar29 = lVar29 + 0x20;
              } while (uVar33 << 5 != lVar29);
            }
            if (uVar21 == uVar47) goto LAB_014b1310;
            lVar42 = lVar42 + uVar47;
            uVar27 = local_11c;
            pfVar23 = pfVar14 + uVar47;
          }
          uVar9 = uVar27 - 1;
          if ((uVar27 & 3) != 0) {
            uVar39 = 0;
            do {
              *pfVar23 = *(float *)(arg1 + lVar42 * 4);
              pfVar23 = pfVar23 + 1;
              lVar42 = lVar42 + 1;
              uVar39 = uVar39 + 1;
            } while ((uVar27 & 3) != uVar39);
            uVar27 = uVar27 - uVar39;
          }
          if (2 < uVar9) {
            lVar42 = arg1 + 0xc + lVar42 * 4;
            lVar36 = 0;
            do {
              pfVar23[lVar36] = *(float *)(lVar42 + -0xc + lVar36 * 4);
              pfVar23[lVar36 + 1] = *(float *)(lVar42 + -8 + lVar36 * 4);
              pfVar23[lVar36 + 2] = *(float *)(lVar42 + -4 + lVar36 * 4);
              pfVar23[lVar36 + 3] = *(float *)(lVar42 + lVar36 * 4);
              lVar36 = lVar36 + 4;
            } while (uVar27 != (uint)lVar36);
          }
        }
        else {
          lVar36 = lVar45;
          lVar17 = local_1b8;
          pfVar23 = pfVar14;
          uVar25 = uVar32;
          if (g_02390124 <= fVar58) {
            do {
              fVar52 = 0.0;
              uVar27 = uVar44;
              lVar29 = lVar42;
              if ((uVar44 & 3) != 0) {
                lVar29 = 0;
                do {
                  fVar52 = fVar52 + *(float *)(lVar36 + lVar29 * 4);
                  lVar29 = lVar29 + 1;
                } while ((uVar44 & 3) != (uint)lVar29);
                uVar27 = uVar44 - (uint)lVar29;
                lVar29 = lVar29 - lVar17;
              }
              if (2 < (uint)local_118) {
                lVar29 = arg1 + 0xc + lVar29 * 4;
                lVar37 = 0;
                do {
                  fVar52 = fVar52 + *(float *)(lVar29 + -0xc + lVar37 * 4) +
                           *(float *)(lVar29 + -8 + lVar37 * 4) +
                           *(float *)(lVar29 + -4 + lVar37 * 4) + *(float *)(lVar29 + lVar37 * 4);
                  lVar37 = lVar37 + 4;
                } while (uVar27 != (uint)lVar37);
              }
              lVar42 = lVar42 + uVar31 + 1;
              *pfVar23 = fVar52;
              uVar27 = (int)uVar25 - 1;
              lVar36 = lVar36 + uVar31 * 4 + 4;
              lVar17 = lVar17 + local_b0;
              pfVar23 = pfVar23 + 1;
              uVar25 = (uint64_t)uVar27;
            } while (uVar27 != 0);
          }
          else {
            fVar52 = *(float *)(arg1 + lVar42 * 4);
            fVar59 = fVar52;
            if (uVar46 == 1) {
              iVar28 = 0;
            }
            else {
              lVar42 = lVar42 + 1;
              fVar56 = 0.0;
              uVar25 = 0;
              iVar35 = local_120;
              fVar54 = fVar52;
              do {
                if ((int)uVar25 == 0) {
                  fVar55 = *(float *)(arg1 + lVar42 * 4);
                  fVar56 = (fVar55 - fVar54) * fVar58;
                  lVar42 = lVar42 + 1;
                  *pfVar23 = fVar54;
                  uVar27 = uVar38;
                  fVar52 = fVar55;
                  if (uVar38 == 0) goto LAB_014b1203;
LAB_014b11d7:
                  fVar55 = fVar54 + fVar56;
                  uVar25 = (uint64_t)(uVar27 - 1);
                }
                else {
                  uVar27 = (int)uVar25 - 1;
                  *pfVar23 = fVar59;
                  fVar55 = fVar54;
                  fVar52 = fVar54;
                  fVar54 = fVar59;
                  if (uVar27 != 0) goto LAB_014b11d7;
LAB_014b1203:
                  fVar52 = *(float *)(arg1 + lVar42 * 4);
                  fVar56 = (fVar52 - fVar55) * fVar58;
                  lVar42 = lVar42 + 1;
                  uVar25 = uVar31;
                }
                iVar28 = (int)uVar25;
                pfVar23[1] = fVar55;
                pfVar23 = pfVar23 + 2;
                fVar59 = fVar55 + fVar56;
                iVar35 = iVar35 + 2;
                fVar54 = fVar52;
              } while (iVar35 != 0);
            }
            if ((uVar46 & 1) != 0) {
              if (iVar28 != 0) {
                fVar52 = fVar59;
              }
              *pfVar23 = fVar52;
            }
          }
        }
LAB_014b1310:
        if (g_02390124 < fVar58) {
          (**(code **)(g_02786500 + 0x20))();
        }
      }
      fVar52 = 0.0;
      if (!bVar50 || !bVar51) {
        fVar52 = local_1e8;
      }
      if ((bVar50 && bVar51) && 0 < (int)uVar46) {
        if (uVar32 - 1 < 3) {
          fVar52 = 0.0;
          uVar25 = 0;
        }
        else {
          fVar52 = 0.0;
          uVar25 = 0;
          do {
            fVar59 = (float)((uint)pfVar14[uVar25] & g_02390140);
            if ((float)((uint)pfVar14[uVar25] & g_02390140) <= fVar52) {
              fVar59 = fVar52;
            }
            fVar52 = (float)((uint)pfVar14[uVar25 + 1] & g_02390140);
            if ((float)((uint)pfVar14[uVar25 + 1] & g_02390140) <= fVar59) {
              fVar52 = fVar59;
            }
            fVar59 = (float)((uint)pfVar14[uVar25 + 2] & g_02390140);
            if ((float)((uint)pfVar14[uVar25 + 2] & g_02390140) <= fVar52) {
              fVar59 = fVar52;
            }
            fVar52 = (float)((uint)pfVar14[uVar25 + 3] & g_02390140);
            if ((float)((uint)pfVar14[uVar25 + 3] & g_02390140) <= fVar59) {
              fVar52 = fVar59;
            }
            uVar25 = uVar25 + 4;
          } while ((uVar46 & 0xfffffffc) != uVar25);
        }
        if ((uint64_t)(uVar46 & 3) != 0) {
          uVar24 = 0;
          fVar59 = fVar52;
          do {
            fVar52 = (float)((uint)pfVar14[uVar25 + uVar24] & g_02390140);
            if ((float)((uint)pfVar14[uVar25 + uVar24] & g_02390140) <= fVar59) {
              fVar52 = fVar59;
            }
            uVar24 = uVar24 + 1;
            fVar59 = fVar52;
          } while ((uVar46 & 3) != uVar24);
        }
      }
      puVar18 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar18 = &g_025f1488;
      *(void*)((int64_t)puVar18 + 0xc) = 0;
      *(void*)((int64_t)puVar18 + 0x14) = 0;
      *(void*)((int64_t)puVar18 + 0x1c) = 0;
      *(void*)((int64_t)puVar18 + 0x24) = 0;
      *(void*)((int64_t)puVar18 + 0x2c) = 0;
      *(void*)((int64_t)puVar18 + 0x34) = 0;
      *(void*)((int64_t)puVar18 + 0x3c) = 0;
      *(void*)((int64_t)puVar18 + 0x44) = 0;
      puVar18[9] = 0;
      puVar18[10] = 0;
      (*pcVar10)();
      if (puVar18 == local_38) {
        puVar18 = local_38;
        if (bVar7) {
          FUN_00d50b20();
          bVar12 = bVar7;
        }
        else {
          bVar12 = true;
        }
      }
      else {
        bVar12 = true;
        if ((bVar7) && (local_38 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      bVar7 = bVar12;
      local_180 = *this_ptr;
      local_178 = '\0';
      local_170 = *param_3;
      local_168 = '\0';
      local_158 = '\0';
      local_150 = local_78;
      local_148 = '\0';
      local_140 = 0;
      local_138 = '\0';
      local_160 = puVar48;
      FUN_015c4d90(1,uVar15,&local_180,&local_170,&local_150,local_100,uVar2,local_12c,&local_140);
      if ((local_138 != '\0') && (local_140 != 0)) {
        FUN_00d50b20();
      }
      if ((local_148 != '\0') && (local_150 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_158 != '\0') && (local_160 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_168 != '\0') && (local_170 != 0)) {
        FUN_00d50b20();
      }
      if ((local_178 != '\0') && (local_180 != 0)) {
        FUN_00d50b20();
      }
      if ((bVar50 && bVar51) && (lVar42 = FUN_015c6b60(), 1 < (int)local_124)) {
        if (uVar30 - 2 < 7) {
          fVar59 = 0.0;
          lVar36 = 1;
        }
        else {
          fVar59 = 0.0;
          uVar25 = 0;
          do {
            uVar24 = uVar25;
            fVar59 = fVar59 + *(float *)(lVar42 + 4 + uVar24 * 4) +
                     *(float *)(lVar42 + 8 + uVar24 * 4) + *(float *)(lVar42 + 0xc + uVar24 * 4) +
                     *(float *)(lVar42 + 0x10 + uVar24 * 4) + *(float *)(lVar42 + 0x14 + uVar24 * 4)
                     + *(float *)(lVar42 + 0x18 + uVar24 * 4) +
                     *(float *)(lVar42 + 0x1c + uVar24 * 4) + *(float *)(lVar42 + 0x20 + uVar24 * 4)
            ;
            uVar25 = uVar24 + 8;
          } while ((uVar22 & 0xfffffffffffffff8) != uVar24 + 8);
          lVar36 = uVar24 + 9;
        }
        if (uVar16 != 0) {
          uVar25 = 0;
          do {
            fVar59 = fVar59 + *(float *)(lVar42 + lVar36 * 4 + uVar25 * 4);
            uVar25 = uVar25 + 1;
          } while (uVar16 != uVar25);
        }
        if (g_0239424c < fVar59) {
          fVar54 = (fVar52 + fVar59) * (fVar52 + fVar59);
          local_94 = local_94 + (fVar52 / fVar59) * fVar54;
          local_98 = local_98 + fVar54;
        }
      }
      local_70 = '\0';
      FUN_00d21140();
      if (puVar48 == puVar18) {
        puVar26 = puVar48;
        bVar12 = bVar8;
        if ((!bVar8) && (puVar18 != (void*)0x0)) {
          FUN_00d50b00();
          bVar12 = true;
        }
      }
      else {
        if (puVar18 != (void*)0x0) {
          FUN_00d50b00();
        }
        puVar26 = puVar18;
        bVar12 = bVar7;
        if ((bVar8) && (puVar48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_110 = local_110 + local_108;
      iVar34 = iVar34 + 1;
      local_1b0 = local_1b0 + 1;
      local_1b8 = local_1b8 - local_108;
      lVar45 = lVar45 + lVar19;
      local_198 = local_198 + lVar19;
      puVar48 = puVar26;
      local_38 = puVar18;
      local_1e8 = fVar52;
      bVar8 = bVar12;
    } while (iVar34 != local_bc);
  }
  local_78 = puVar18;
  plVar49 = local_b8;
  lVar19 = *(int64_t *)(*(int64_t *)(*local_b8 + 0x10) + 8);
  local_e8 = 0;
  if (lVar19 != 0) {
    FUN_00d50b00();
  }
  local_e8 = '\x01';
  local_f0 = lVar19;
  MUSpectralTimeSlice_takeDataFromTimeSlice();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  uVar38 = *(uint *)(*plVar49 + 0xc);
  FUN_00c8e690();
  if ((local_70 == '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  lVar19 = FUN_00e83010();
  puVar20 = (uint64_t *)FUN_00e83010();
  if (0 < (int)uVar38) {
    uVar32 = 0;
    do {
      uVar15 = FUN_015c66c0();
      *(void*)(lVar19 + uVar32 * 8) = uVar15;
      uVar21 = FUN_015c6b60();
      puVar20[uVar32] = uVar21;
      uVar32 = uVar32 + 1;
    } while (uVar38 != uVar32);
  }
  fVar52 = g_02394274;
  fVar58 = g_0239011c;
  if (3 < (int)uVar46) {
    if (*(int *)(*plVar49 + 0xc) < 3) {
      uVar32 = 2;
      if (2 < (int)local_f8) {
        uVar32 = local_f8 & 0xffffffff;
      }
      uVar21 = (uint64_t)((uint)(uVar32 - 1) & 7);
      if (6 < uVar32 - 2) {
        lVar19 = -(uVar32 - 1 & 0xfffffffffffffff8);
        do {
          lVar19 = lVar19 + 8;
        } while (lVar19 != 0);
      }
      for (; uVar21 != 0; uVar21 = uVar21 - 1) {
      }
    }
    else {
      uVar38 = *(int *)(*plVar49 + 0xc) - 1;
      uVar32 = (uint64_t)uVar38;
      uVar21 = 2;
      if (2 < (int)local_f8) {
        uVar21 = local_f8 & 0xffffffff;
      }
      uVar22 = *puVar20;
      local_b0 = puVar20[1];
      lVar41 = *(int64_t *)(lVar19 + 8);
      lVar45 = local_78[2];
      if (uVar38 == 2) {
        uVar32 = puVar20[2];
        lVar19 = *(int64_t *)(lVar19 + 0x10);
        uVar30 = 1;
        do {
          fVar59 = *(float *)(uVar22 + uVar30 * 4);
          fVar54 = *(float *)(local_b0 + uVar30 * 4);
          fVar56 = *(float *)(uVar32 + uVar30 * 4);
          fVar59 = fVar59 * fVar59;
          fVar54 = fVar54 * fVar54;
          fVar56 = fVar56 * fVar56;
          fVar55 = *(float *)(lVar41 + uVar30 * 4);
          fVar57 = *(float *)(lVar19 + uVar30 * 4);
          fVar60 = fVar54 + fVar54 + fVar59 + fVar56;
          if (fVar60 < fVar52) {
            fVar60 = (fVar55 + fVar57) * fVar58;
          }
          else {
            fVar60 = (fVar56 * fVar57 + fVar54 * fVar57 + fVar55 * fVar54 + fVar59 * fVar55) /
                     fVar60;
          }
          *(float *)(lVar45 + 4) = fVar60;
          *(float *)(lVar41 + uVar30 * 4) = fVar60;
          uVar30 = uVar30 + 1;
        } while (uVar21 != uVar30);
      }
      else {
        local_118 = uVar32 - 3;
        uVar16 = (uint64_t)((uint)(uVar32 - 2) & 3);
        uVar30 = 1;
        do {
          lVar36 = 0;
          lVar42 = lVar41;
          uVar33 = local_b0;
          uVar31 = uVar22;
          do {
            while( true ) {
              uVar40 = uVar33;
              fVar59 = *(float *)(uVar31 + uVar30 * 4);
              fVar54 = *(float *)(uVar40 + uVar30 * 4);
              uVar33 = puVar20[lVar36 + 2];
              fVar56 = *(float *)(uVar33 + uVar30 * 4);
              fVar59 = fVar59 * fVar59;
              fVar54 = fVar54 * fVar54;
              fVar56 = fVar56 * fVar56;
              fVar55 = *(float *)(lVar42 + uVar30 * 4);
              lVar42 = *(int64_t *)(lVar19 + 0x10 + lVar36 * 8);
              fVar57 = *(float *)(lVar42 + uVar30 * 4);
              fVar60 = fVar54 + fVar54 + fVar59 + fVar56;
              uVar31 = uVar40;
              if (fVar60 < fVar52) break;
              *(float *)(lVar45 + 4 + lVar36 * 4) =
                   (fVar56 * fVar57 + fVar54 * fVar57 + fVar55 * fVar54 + fVar59 * fVar55) / fVar60;
              lVar36 = lVar36 + 1;
              if (uVar32 - 1 == lVar36) goto LAB_014b1f52;
            }
            *(float *)(lVar45 + 4 + lVar36 * 4) = (fVar55 + fVar57) * fVar58;
            lVar36 = lVar36 + 1;
          } while (uVar32 - 1 != lVar36);
LAB_014b1f52:
          *(void*)(lVar41 + uVar30 * 4) = *(void*)(lVar45 + 4);
          lVar42 = 2;
          if (2 < local_118) {
            lVar42 = 2;
            do {
              *(void*)(*(int64_t *)(lVar19 + lVar42 * 8) + uVar30 * 4) =
                   *(void*)(lVar45 + lVar42 * 4);
              *(void*)(*(int64_t *)(lVar19 + 8 + lVar42 * 8) + uVar30 * 4) =
                   *(void*)(lVar45 + 4 + lVar42 * 4);
              *(void*)(*(int64_t *)(lVar19 + 0x10 + lVar42 * 8) + uVar30 * 4) =
                   *(void*)(lVar45 + 8 + lVar42 * 4);
              *(void*)(*(int64_t *)(lVar19 + 0x18 + lVar42 * 8) + uVar30 * 4) =
                   *(void*)(lVar45 + 0xc + lVar42 * 4);
              lVar36 = lVar42 - (uVar32 - 2 & 0xfffffffffffffffc);
              lVar42 = lVar42 + 4;
            } while (lVar36 != -2);
          }
          if (uVar16 != 0) {
            uVar33 = 0;
            do {
              *(void*)(*(int64_t *)(lVar19 + lVar42 * 8 + uVar33 * 8) + uVar30 * 4) =
                   *(void*)(lVar45 + lVar42 * 4 + uVar33 * 4);
              uVar33 = uVar33 + 1;
            } while (uVar16 != uVar33);
          }
          uVar30 = uVar30 + 1;
          plVar49 = local_b8;
        } while (uVar30 != uVar21);
      }
    }
  }
  FUN_00e83070();
  uVar15 = FUN_00e83070();
  uVar32 = local_f8;
  if (local_78 != (void*)0x0) {
    uVar15 = FUN_00d50b20();
  }
  lVar19 = *(int64_t *)(*(int64_t *)(*plVar49 + 0x10) + 8);
  local_d8 = 0;
  if (lVar19 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_d8 = '\x01';
  local_e0 = lVar19;
  uVar15 = MUSpectralTimeSlice_takeDataFromTimeSlice(uVar15,8);
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    uVar15 = FUN_00d50b20();
  }
  lVar19 = *(int64_t *)
            (*(int64_t *)(*plVar49 + 0x10) + -0x10 + (int64_t)*(int *)(*plVar49 + 0xc) * 8);
  local_c8 = 0;
  if (lVar19 != 0) {
    uVar15 = FUN_00d50b00();
  }
  local_c8 = '\x01';
  local_d0 = lVar19;
  MUSpectralTimeSlice_takeDataFromTimeSlice(uVar15,8);
  if ((local_c8 != '\0') && (local_d0 != 0)) {
    FUN_00d50b20();
  }
  FUN_00c8e690();
  if ((local_70 == '\0') && (local_78 != (void*)0x0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  uVar38 = *(uint *)(*plVar49 + 0xc);
  if (0 < (int)uVar38) {
    if ((int)uVar46 < 8) {
      lVar19 = 0;
      while( true ) {
        FUN_015c6be0();
        FUN_015c6b60();
        if ((uint64_t)uVar38 - 1 == lVar19) break;
        lVar19 = lVar19 + 1;
      }
    }
    else {
      uVar46 = (int)uVar32 - 1;
      uVar32 = 3;
      if (3 < (int)uVar46) {
        uVar32 = (uint64_t)uVar46;
      }
      uVar21 = 0;
      do {
        lVar41 = FUN_015c6be0();
        local_b0 = uVar21;
        lVar45 = FUN_015c6b60();
        fVar52 = g_02394274;
        fVar58 = g_0239011c;
        iVar34 = *(int *)(lVar41 + 8);
        lVar19 = local_78[2];
        lVar42 = 0;
        do {
          while( true ) {
            fVar59 = *(float *)(lVar45 + 4 + lVar42 * 4);
            uVar15 = *(void*)(lVar45 + 8 + lVar42 * 4);
            fVar59 = fVar59 * fVar59;
            fVar55 = (float)uVar15;
            fVar54 = (float)((uint64_t)uVar15 >> 0x20);
            fVar55 = fVar55 * fVar55;
            fVar54 = fVar54 * fVar54;
            fVar56 = (float)iVar34;
            iVar34 = *(int *)(lVar41 + 0xc + lVar42 * 4);
            fVar60 = (float)iVar34;
            fVar57 = fVar55 + fVar55 + fVar59 + fVar54;
            if (fVar57 < fVar52) break;
            *(float *)(lVar19 + 8 + lVar42 * 4) =
                 (fVar60 * fVar54 + fVar56 * fVar55 + fVar59 * fVar56 + fVar60 * fVar55) / fVar57;
            lVar42 = lVar42 + 1;
            if (uVar32 - 2 == lVar42) goto LAB_014b1d29;
          }
          *(float *)(lVar19 + 8 + lVar42 * 4) = (fVar56 + fVar60) * fVar58;
          lVar42 = lVar42 + 1;
        } while (uVar32 - 2 != lVar42);
LAB_014b1d29:
        uVar21 = 2;
        do {
          uVar13 = FUN_00e7d780();
          *(void*)(lVar41 + uVar21 * 4) = uVar13;
          uVar21 = uVar21 + 1;
        } while (uVar32 != uVar21);
        uVar21 = local_b0 + 1;
      } while (uVar21 != uVar38);
    }
  }
  if (local_78 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (bVar50 && bVar51) {
    *local_res10 = local_94;
    *local_res18 = local_98;
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  if (puVar11 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar12) && (puVar26 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((bVar7) && (local_38 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return;
}

