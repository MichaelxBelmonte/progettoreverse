// Function: FUN_0149d5b0
// Address: 0149d5b0
// Size: 2143 bytes
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


void FUN_0149d5b0(float param_1,uint param_2,float *param_3,float *param_4)

{
  int64_t lVar1;
  uint8_t auVar2 [16];
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  uint8_t auVar7 [16];
  uint8_t auVar8 [16];
  uint8_t auVar9 [16];
  uint8_t auVar10 [16];
  uint8_t auVar11 [16];
  uint8_t auVar12 [16];
  uint8_t auVar13 [16];
  uint8_t auVar14 [16];
  uint8_t auVar15 [16];
  uint8_t auVar16 [16];
  uint8_t auVar17 [16];
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint8_t auVar22 [16];
  uint8_t auVar23 [16];
  uint8_t auVar24 [16];
  float fVar25;
  uint uVar26;
  uint uVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  int iVar31;
  uint8_t (*pauVar32) [16];
  int64_t lVar33;
  uint64_t uVar34;
  float *in_RCX;
  int iVar35;
  int iVar36;
  int64_t *arg1;
  int iVar37;
  uint uVar38;
  uint64_t uVar39;
  int iVar40;
  int64_t lVar41;
  int iVar42;
  uint64_t uVar43;
  bool bVar44;
  float fVar45;
  uint8_t auVar46 [16];
  float fVar47;
  float *local_res8;
  float *local_res10;
  float *local_res18;
  float *local_res20;
  int64_t local_48;
  
  pauVar32 = (uint8_t (*) [16])FUN_00e83010();
  ___bzero();
  if ((int)param_2 < 1) {
    bVar29 = false;
    lVar41 = 0;
    bVar28 = false;
    local_48 = 0;
  }
  else {
    uVar39 = 0;
    local_48 = 0;
    bVar28 = false;
    lVar41 = 0;
    bVar29 = false;
    do {
      lVar33 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + uVar39 * 8);
      if (local_48 == lVar33) {
        if ((!bVar28) && (local_48 != 0)) {
          bVar28 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar33 != 0) {
          FUN_00d50b00();
        }
        if ((bVar28) && (local_48 != 0)) {
          FUN_00d50b20();
          bVar28 = true;
          local_48 = lVar33;
        }
        else {
          bVar28 = true;
          local_48 = lVar33;
        }
      }
      if (*(int *)(local_48 + 0xc) != 0) {
        lVar33 = **(int64_t **)(local_48 + 0x10);
        if (lVar41 == lVar33) {
          if ((!bVar29) && (lVar41 != 0)) {
            FUN_00d50b00();
            lVar33 = lVar41;
            goto LAB_0149d72d;
          }
          fVar45 = *(float *)(lVar41 + 0x1c) + g_02390118;
          if (fVar45 <= g_0239424c) goto LAB_0149d648;
        }
        else {
          if (lVar33 != 0) {
            FUN_00d50b00();
          }
          if ((bVar29) && (lVar41 != 0)) {
            FUN_00d50b20();
          }
LAB_0149d72d:
          bVar29 = true;
          fVar45 = *(float *)(lVar33 + 0x1c) + g_02390118;
          lVar41 = lVar33;
          if (fVar45 <= g_0239424c) goto LAB_0149d648;
        }
        lVar33 = (int64_t)(*(int *)(lVar41 + 0x10) / 5);
        *(float *)(*pauVar32 + lVar33 * 4) = fVar45 + *(float *)(*pauVar32 + lVar33 * 4);
      }
LAB_0149d648:
      uVar39 = uVar39 + 1;
    } while (param_2 != uVar39);
  }
  uVar38 = 0;
  FUN_015c1480(g_02390d28,0x60);
  fVar45 = 0.0;
  lVar33 = 0;
  do {
    fVar47 = *(float *)(*pauVar32 + lVar33 * 4);
    uVar30 = (uint)lVar33;
    if (fVar45 < fVar47) {
      uVar38 = uVar30;
    }
    if (fVar47 <= fVar45) {
      fVar47 = fVar45;
    }
    fVar45 = *(float *)(*pauVar32 + lVar33 * 4 + 4);
    uVar26 = uVar30 + 1;
    if (*(float *)(*pauVar32 + lVar33 * 4 + 4) <= fVar47) {
      fVar45 = fVar47;
      uVar26 = uVar38;
    }
    fVar47 = *(float *)(*pauVar32 + lVar33 * 4 + 8);
    uVar27 = uVar30 + 2;
    if (*(float *)(*pauVar32 + lVar33 * 4 + 8) <= fVar45) {
      fVar47 = fVar45;
      uVar27 = uVar26;
    }
    fVar45 = *(float *)(*pauVar32 + lVar33 * 4 + 0xc);
    uVar38 = uVar30 + 3;
    if (*(float *)(*pauVar32 + lVar33 * 4 + 0xc) <= fVar47) {
      fVar45 = fVar47;
      uVar38 = uVar27;
    }
    lVar33 = lVar33 + 4;
  } while (lVar33 != 0x60);
  if (0.0 < fVar45) {
    auVar46._4_4_ = fVar45;
    auVar46._0_4_ = fVar45;
    auVar46._8_4_ = fVar45;
    auVar46._12_4_ = fVar45;
    auVar46 = divps(*pauVar32,auVar46);
    *pauVar32 = auVar46;
    auVar2._4_4_ = fVar45;
    auVar2._0_4_ = fVar45;
    auVar2._8_4_ = fVar45;
    auVar2._12_4_ = fVar45;
    auVar46 = divps(pauVar32[1],auVar2);
    pauVar32[1] = auVar46;
    auVar3._4_4_ = fVar45;
    auVar3._0_4_ = fVar45;
    auVar3._8_4_ = fVar45;
    auVar3._12_4_ = fVar45;
    auVar46 = divps(pauVar32[2],auVar3);
    pauVar32[2] = auVar46;
    auVar4._4_4_ = fVar45;
    auVar4._0_4_ = fVar45;
    auVar4._8_4_ = fVar45;
    auVar4._12_4_ = fVar45;
    auVar46 = divps(pauVar32[3],auVar4);
    pauVar32[3] = auVar46;
    auVar5._4_4_ = fVar45;
    auVar5._0_4_ = fVar45;
    auVar5._8_4_ = fVar45;
    auVar5._12_4_ = fVar45;
    auVar46 = divps(pauVar32[4],auVar5);
    pauVar32[4] = auVar46;
    auVar6._4_4_ = fVar45;
    auVar6._0_4_ = fVar45;
    auVar6._8_4_ = fVar45;
    auVar6._12_4_ = fVar45;
    auVar46 = divps(pauVar32[5],auVar6);
    pauVar32[5] = auVar46;
    auVar7._4_4_ = fVar45;
    auVar7._0_4_ = fVar45;
    auVar7._8_4_ = fVar45;
    auVar7._12_4_ = fVar45;
    auVar46 = divps(pauVar32[6],auVar7);
    pauVar32[6] = auVar46;
    auVar8._4_4_ = fVar45;
    auVar8._0_4_ = fVar45;
    auVar8._8_4_ = fVar45;
    auVar8._12_4_ = fVar45;
    auVar46 = divps(pauVar32[7],auVar8);
    pauVar32[7] = auVar46;
    auVar9._4_4_ = fVar45;
    auVar9._0_4_ = fVar45;
    auVar9._8_4_ = fVar45;
    auVar9._12_4_ = fVar45;
    auVar46 = divps(pauVar32[8],auVar9);
    pauVar32[8] = auVar46;
    auVar10._4_4_ = fVar45;
    auVar10._0_4_ = fVar45;
    auVar10._8_4_ = fVar45;
    auVar10._12_4_ = fVar45;
    auVar46 = divps(pauVar32[9],auVar10);
    pauVar32[9] = auVar46;
    auVar11._4_4_ = fVar45;
    auVar11._0_4_ = fVar45;
    auVar11._8_4_ = fVar45;
    auVar11._12_4_ = fVar45;
    auVar46 = divps(pauVar32[10],auVar11);
    pauVar32[10] = auVar46;
    auVar12._4_4_ = fVar45;
    auVar12._0_4_ = fVar45;
    auVar12._8_4_ = fVar45;
    auVar12._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xb],auVar12);
    pauVar32[0xb] = auVar46;
    auVar13._4_4_ = fVar45;
    auVar13._0_4_ = fVar45;
    auVar13._8_4_ = fVar45;
    auVar13._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xc],auVar13);
    pauVar32[0xc] = auVar46;
    auVar14._4_4_ = fVar45;
    auVar14._0_4_ = fVar45;
    auVar14._8_4_ = fVar45;
    auVar14._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xd],auVar14);
    pauVar32[0xd] = auVar46;
    auVar15._4_4_ = fVar45;
    auVar15._0_4_ = fVar45;
    auVar15._8_4_ = fVar45;
    auVar15._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xe],auVar15);
    pauVar32[0xe] = auVar46;
    auVar16._4_4_ = fVar45;
    auVar16._0_4_ = fVar45;
    auVar16._8_4_ = fVar45;
    auVar16._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0xf],auVar16);
    pauVar32[0xf] = auVar46;
    auVar17._4_4_ = fVar45;
    auVar17._0_4_ = fVar45;
    auVar17._8_4_ = fVar45;
    auVar17._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x10],auVar17);
    pauVar32[0x10] = auVar46;
    auVar18._4_4_ = fVar45;
    auVar18._0_4_ = fVar45;
    auVar18._8_4_ = fVar45;
    auVar18._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x11],auVar18);
    pauVar32[0x11] = auVar46;
    auVar19._4_4_ = fVar45;
    auVar19._0_4_ = fVar45;
    auVar19._8_4_ = fVar45;
    auVar19._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x12],auVar19);
    pauVar32[0x12] = auVar46;
    auVar20._4_4_ = fVar45;
    auVar20._0_4_ = fVar45;
    auVar20._8_4_ = fVar45;
    auVar20._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x13],auVar20);
    pauVar32[0x13] = auVar46;
    auVar21._4_4_ = fVar45;
    auVar21._0_4_ = fVar45;
    auVar21._8_4_ = fVar45;
    auVar21._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x14],auVar21);
    pauVar32[0x14] = auVar46;
    auVar22._4_4_ = fVar45;
    auVar22._0_4_ = fVar45;
    auVar22._8_4_ = fVar45;
    auVar22._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x15],auVar22);
    pauVar32[0x15] = auVar46;
    auVar23._4_4_ = fVar45;
    auVar23._0_4_ = fVar45;
    auVar23._8_4_ = fVar45;
    auVar23._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x16],auVar23);
    pauVar32[0x16] = auVar46;
    auVar24._4_4_ = fVar45;
    auVar24._0_4_ = fVar45;
    auVar24._8_4_ = fVar45;
    auVar24._12_4_ = fVar45;
    auVar46 = divps(pauVar32[0x17],auVar24);
    pauVar32[0x17] = auVar46;
  }
  if ((int)uVar38 < 1) {
    uVar30 = 0;
  }
  else {
    fVar45 = *(float *)(*pauVar32 + 4) - *(float *)*pauVar32;
    uVar30 = 0;
    lVar33 = 0;
    do {
      if (lVar33 == 0x5e) goto LAB_0149da88;
      fVar47 = *(float *)(*pauVar32 + lVar33 * 4 + 8) - *(float *)(*pauVar32 + lVar33 * 4 + 4);
      if (((0.0 <= fVar45) && (fVar47 < 0.0)) && (param_1 < *(float *)(*pauVar32 + lVar33 * 4 + 4)))
      {
        lVar33 = lVar33 + 1;
        break;
      }
      lVar1 = lVar33 * 4;
      fVar45 = *(float *)(*pauVar32 + lVar33 * 4 + 0xc) - *(float *)(*pauVar32 + lVar1 + 8);
      lVar33 = lVar33 + 2;
    } while (((fVar47 < 0.0) || (0.0 <= fVar45)) || (*(float *)(*pauVar32 + lVar1 + 8) <= param_1));
    uVar30 = (uint)lVar33;
LAB_0149da88:
    uVar39 = 0x5f;
    if (0x5e < (int)uVar38) goto LAB_0149db0d;
  }
  fVar45 = *(float *)(pauVar32[0x17] + 8) - *(float *)(pauVar32[0x17] + 0xc);
  uVar39 = 0x5f;
  do {
    if (uVar39 == 1) {
      uVar39 = (uint64_t)uVar30;
      break;
    }
    fVar47 = *(float *)(*pauVar32 + (uint64_t)((int)uVar39 - 2) * 4) -
             *(float *)(pauVar32[-1] + uVar39 * 4 + 0xc);
    if (((0.0 <= fVar45) && (fVar47 < 0.0)) &&
       (param_1 < *(float *)(pauVar32[-1] + uVar39 * 4 + 0xc))) {
      uVar39 = uVar39 - 1;
      iVar40 = 0x5f;
      iVar36 = (int)uVar39;
      if (0x5f < iVar36) goto LAB_0149db49;
      goto LAB_0149db18;
    }
    lVar33 = uVar39 * 4;
    fVar45 = *(float *)(*pauVar32 + (uint64_t)((int)uVar39 - 3U & 0xfffffffe) * 4) -
             *(float *)(pauVar32[-1] + lVar33 + 8);
    uVar39 = uVar39 - 2;
  } while (((fVar47 < 0.0) || (0.0 <= fVar45)) || (*(float *)(pauVar32[-1] + lVar33 + 8) <= param_1)
          );
LAB_0149db0d:
  iVar40 = 0x5f;
  iVar36 = (int)uVar39;
  if (iVar36 < 0x60) {
LAB_0149db18:
    iVar36 = (int)uVar39;
    fVar45 = *(float *)(*pauVar32 + (int64_t)iVar36 * 4) * g_0239011c;
    if (param_1 <= fVar45) {
      fVar45 = param_1;
    }
    uVar39 = uVar39 & 0xffffffff;
    do {
      uVar43 = uVar39 + 1;
      if (*(float *)(*pauVar32 + uVar39 * 4) <= fVar45 &&
          fVar45 != *(float *)(*pauVar32 + uVar39 * 4)) break;
      bVar44 = uVar39 != 0x5f;
      uVar39 = uVar43;
    } while (bVar44);
    iVar40 = (int)uVar43 + -1;
  }
LAB_0149db49:
  fVar45 = 0.0;
  if ((int)uVar30 < 0) {
    iVar37 = 0;
  }
  else {
    uVar39 = (uint64_t)uVar30;
    fVar47 = *(float *)(*pauVar32 + uVar39 * 4);
    fVar25 = g_0239011c * fVar47;
    if (param_1 <= g_0239011c * fVar47) {
      fVar25 = param_1;
    }
    uVar43 = uVar39;
    if ((fVar25 <= fVar47) && (uVar34 = uVar39, uVar30 != 0)) {
      do {
        uVar43 = uVar34 - 1;
        if (*(float *)(pauVar32[-1] + uVar34 * 4 + 0xc) <= fVar25 &&
            fVar25 != *(float *)(pauVar32[-1] + uVar34 * 4 + 0xc)) break;
        bVar44 = uVar34 != 1;
        uVar34 = uVar43;
      } while (bVar44);
    }
    iVar37 = (int)uVar43;
    uVar43 = uVar39;
    if (g_0239011c <= fVar47) {
      do {
        if ((int64_t)uVar43 < 1) goto LAB_0149dbd6;
        uVar39 = uVar43 - 1;
        lVar33 = uVar43 * 4;
        uVar43 = uVar39;
      } while (g_0239011c < *(float *)(pauVar32[-1] + lVar33 + 0xc) ||
               g_0239011c == *(float *)(pauVar32[-1] + lVar33 + 0xc));
    }
    iVar42 = 0;
    if (-1 < (int)uVar39) {
      iVar42 = (int)uVar39;
    }
    fVar45 = (float)iVar42;
  }
LAB_0149dbd6:
  if ((iVar37 < (int)uVar38) && ((int)uVar38 < iVar40)) {
    uVar43 = (uint64_t)uVar38;
    uVar39 = (uint64_t)uVar38;
    fVar47 = g_0239109c;
    do {
      if ((int)uVar43 < 0x5f) {
        uVar43 = (uint64_t)(int)uVar43;
        do {
          if (*(float *)(*pauVar32 + uVar43 * 4) <= fVar47) goto LAB_0149dc4c;
          uVar43 = uVar43 + 1;
        } while (uVar43 != 0x5f);
        uVar43 = 0x5f;
      }
LAB_0149dc4c:
      iVar42 = (int)uVar43;
      if (0 < (int)uVar39) {
        uVar39 = uVar39 & 0xffffffff;
        do {
          if (*(float *)(*pauVar32 + uVar39 * 4) <= fVar47) goto LAB_0149dc7b;
          bVar44 = 1 < (int64_t)uVar39;
          uVar39 = uVar39 - 1;
        } while (bVar44);
        uVar39 = 0;
      }
LAB_0149dc7b:
      iVar35 = (int)uVar39;
      if (0xb < iVar42 - iVar35) {
        if (0xd < iVar42 - iVar35) {
          iVar42 = 0x5f;
          if ((int)uVar38 < 0x59) {
            iVar42 = uVar38 + 6;
          }
          iVar35 = 0;
          if (5 < (int)uVar38) {
            iVar35 = uVar38 - 6;
          }
        }
        goto LAB_0149dceb;
      }
      if ((0x5e < iVar42) && (iVar35 < 1)) goto LAB_0149dceb;
      fVar47 = fVar47 + g_0241b638;
    } while( true );
  }
  iVar31 = iVar37 + iVar40;
  uVar38 = iVar31 / 2;
  iVar42 = 0x5f;
  if (iVar31 < 0xb2) {
    iVar42 = uVar38 + 6;
  }
  iVar35 = 0;
  if (0xb < iVar31) {
    iVar35 = uVar38 - 6;
  }
LAB_0149dceb:
  fVar47 = (float)_exp2f((float)(int)uVar38 / g_02390d28);
  *in_RCX = fVar47 * g_0240e330;
  fVar47 = (float)_exp2f((float)iVar36 / g_02390d28);
  *param_3 = fVar47 * g_0240e330;
  fVar45 = (float)_exp2f(fVar45 / g_02390d28);
  *param_4 = fVar45 * g_0240e330;
  fVar45 = (float)_exp2f((float)iVar40 / g_02390d28);
  *local_res8 = fVar45 * g_0240e330;
  fVar45 = (float)_exp2f((float)iVar37 / g_02390d28);
  *local_res10 = fVar45 * g_0240e330;
  fVar45 = (float)_exp2f((float)iVar42 / g_02390d28);
  *local_res18 = fVar45 * g_0240e330;
  fVar45 = (float)_exp2f((float)iVar35 / g_02390d28);
  *local_res20 = fVar45 * g_0240e330;
  FUN_00e83070();
  if ((bVar29) && (lVar41 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar28) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  return;
}

