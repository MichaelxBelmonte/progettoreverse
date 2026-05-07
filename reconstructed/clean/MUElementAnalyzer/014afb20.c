// Function: FUN_014afb20
// Address: 014afb20
// Size: 3362 bytes
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


void FUN_014afb20(double param_1,int64_t *param_2,int64_t param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int64_t lVar18;
  int64_t lVar19;
  void*puVar20;
  uint64_t uVar21;
  int64_t lVar22;
  float *pfVar23;
  uint uVar24;
  void*in_RCX;
  void *pvVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int iVar28;
  int64_t lVar29;
  int64_t *arg1;
  uint64_t uVar30;
  size_t sVar31;
  int iVar32;
  int64_t lVar33;
  int64_t lVar34;
  uint64_t uVar35;
  float fVar36;
  float fVar37;
  int iVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  int64_t local_d8;
  char local_d0;
  int64_t local_38;
  
  uVar26 = (uint64_t)param_4;
  lVar18 = FUN_00e83010();
  lVar19 = FUN_00e83010();
  puVar20 = (void*)FUN_00e83010();
  lVar22 = *arg1;
  iVar28 = 0;
  if (*(int *)(lVar22 + 0xc) < 1) {
    bVar12 = false;
    lVar34 = 0;
  }
  else {
    lVar34 = 0;
    bVar12 = false;
    do {
      lVar22 = *(int64_t *)(*(int64_t *)(lVar22 + 0x10) + (int64_t)iVar28 * 8);
      if (lVar34 == lVar22) {
        if ((!bVar12) && (lVar34 != 0)) {
          bVar12 = true;
          FUN_00d50b00();
        }
LAB_014afc60:
        iVar17 = *(int *)(lVar34 + 0x3c);
      }
      else {
        if (lVar22 != 0) {
          FUN_00d50b00();
        }
        if ((bVar12) && (lVar34 != 0)) {
          FUN_00d50b20();
          bVar12 = true;
          lVar34 = lVar22;
          goto LAB_014afc60;
        }
        bVar12 = true;
        iVar17 = *(int *)(lVar22 + 0x3c);
        lVar34 = lVar22;
      }
      if (iVar17 == 8) {
        FUN_00d23620();
        iVar28 = iVar28 + -1;
      }
      iVar28 = iVar28 + 1;
      lVar22 = *arg1;
    } while (iVar28 < *(int *)(lVar22 + 0xc));
  }
  iVar28 = (int)(g_02390108 * param_1);
  if (0 < (int)param_4) {
    uVar27 = 0;
    iVar17 = 0;
    uVar21 = 0;
    do {
      uVar35 = uVar21 + 1;
      if (0.0 < *(float *)(param_3 + uVar21 * 4)) {
        *(void*)(lVar18 + uVar21 * 4) = 1;
        if (iVar17 != 1) {
          uVar27 = uVar21 & 0xffffffff;
        }
      }
      else {
        *(void*)(lVar18 + uVar21 * 4) = 0;
        if (iVar17 != 0) {
          iVar38 = (int)uVar27;
          iVar17 = (int)uVar21 - iVar38;
          if (iVar17 < iVar28) {
            if ((int64_t)iVar38 < (int64_t)uVar21) {
LAB_014afde8:
              ___bzero();
            }
          }
          else {
            iVar32 = iVar28;
            if (iVar17 < iVar28 * 3) {
              iVar32 = iVar17 / 3;
            }
            if (0 < iVar32) {
              iVar17 = iVar38 + 1;
              if (iVar38 + 1 < iVar32 + iVar38) {
                iVar17 = iVar32 + iVar38;
              }
              ___bzero(lVar18,iVar17);
              goto LAB_014afde8;
            }
          }
        }
      }
      iVar17 = *(int *)(lVar18 + uVar21 * 4);
      uVar21 = uVar35;
    } while (uVar26 != uVar35);
  }
  lVar22 = *param_2;
  if (*(int *)(lVar22 + 0xc) < 1) {
    bVar14 = false;
    lVar29 = 0;
    bVar13 = false;
    local_38 = 0;
  }
  else {
    lVar33 = 0;
    local_38 = 0;
    bVar13 = false;
    lVar29 = 0;
    bVar14 = false;
    do {
      lVar22 = *(int64_t *)(*(int64_t *)(lVar22 + 0x10) + lVar33 * 8);
      if (local_38 == lVar22) {
        if ((!bVar13) && (local_38 != 0)) {
          bVar13 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar22 != 0) {
          FUN_00d50b00();
        }
        if ((bVar13) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar13 = true;
          local_38 = lVar22;
        }
        else {
          bVar13 = true;
          local_38 = lVar22;
        }
      }
      if (lVar33 < (int64_t)*(int *)(*param_2 + 0xc) + -1) {
        lVar22 = *(int64_t *)(*(int64_t *)(*param_2 + 0x10) + 8 + lVar33 * 8);
        if (lVar29 == lVar22) {
          lVar22 = lVar29;
          bVar16 = bVar14;
          if ((bVar14) || (lVar29 == 0)) goto LAB_014aff7b;
          bVar16 = true;
          FUN_00d50b00();
        }
        else {
          if (lVar22 != 0) {
            FUN_00d50b00();
            goto LAB_014aff61;
          }
          lVar22 = 0;
          bVar16 = true;
          if (!bVar14) goto LAB_014aff7b;
LAB_014aff6a:
          bVar16 = true;
          if (lVar29 != 0) {
            FUN_00d50b20();
          }
LAB_014aff7b:
          lVar29 = lVar22;
          if (lVar29 == 0) {
            lVar29 = 0;
            bVar14 = bVar16;
            goto LAB_014afe76;
          }
        }
        bVar14 = bVar16;
        if (*(int64_t *)(lVar29 + 0x40) != 0) {
          iVar38 = (int)(*(double *)(local_38 + 0x18) * param_1);
          iVar17 = iVar38 - (int)(*(double *)(local_38 + 0x10) * param_1);
          if (iVar28 * 3 < iVar17) {
            iVar17 = -iVar28;
          }
          else {
            iVar17 = (int)((uint64_t)((int64_t)iVar17 * 0x55555555) >> 0x20) - iVar17;
            iVar17 = (iVar17 >> 1) - (iVar17 >> 0x1f);
          }
          uVar24 = iVar38 + iVar17;
          iVar17 = (int)(*(double *)(local_38 + 0x28) * param_1);
          if ((int)uVar24 < iVar17) {
            ___bzero(~uVar24 + iVar17,(int64_t)(int)uVar24);
          }
        }
      }
      else {
        lVar22 = 0;
        if (lVar29 != 0) {
LAB_014aff61:
          bVar16 = true;
          if (bVar14) goto LAB_014aff6a;
          goto LAB_014aff7b;
        }
        lVar29 = 0;
      }
LAB_014afe76:
      lVar33 = lVar33 + 1;
      lVar22 = *param_2;
    } while (lVar33 < *(int *)(lVar22 + 0xc));
  }
  sVar31 = (size_t)(g_0240e400 * param_1);
  *puVar20 = 0;
  if (1 < (int)param_4) {
    uVar21 = uVar26 - 1;
    uVar27 = 1;
    if ((uVar21 < 8) || ((puVar20 + 1 < in_RCX + uVar26 && (in_RCX < puVar20 + uVar26)))) {
      uVar21 = 0xfffffffffffffffe;
    }
    else {
      uVar27 = uVar21 & 0xfffffffffffffff8;
      uVar35 = (uVar27 - 8 >> 3) + 1;
      if (uVar27 - 8 == 0) {
        lVar22 = 0;
LAB_014b021b:
        uVar35 = lVar22 * 4 | 4;
        pfVar23 = (float *)((int64_t)in_RCX + uVar35);
        fVar36 = pfVar23[1];
        fVar41 = pfVar23[2];
        fVar39 = pfVar23[3];
        pfVar2 = (float *)((int64_t)in_RCX + uVar35 + 0x10);
        fVar37 = *pfVar2;
        fVar40 = pfVar2[1];
        fVar42 = pfVar2[2];
        fVar4 = pfVar2[3];
        pfVar2 = (float *)(in_RCX + lVar22);
        fVar5 = pfVar2[1];
        fVar6 = pfVar2[2];
        fVar7 = pfVar2[3];
        pfVar1 = (float *)(in_RCX + lVar22 + 4);
        fVar8 = *pfVar1;
        fVar9 = pfVar1[1];
        fVar10 = pfVar1[2];
        fVar11 = pfVar1[3];
        pfVar1 = (float *)((int64_t)puVar20 + uVar35);
        *pfVar1 = *pfVar23 - *pfVar2;
        pfVar1[1] = fVar36 - fVar5;
        pfVar1[2] = fVar41 - fVar6;
        pfVar1[3] = fVar39 - fVar7;
        pfVar23 = (float *)((int64_t)puVar20 + uVar35 + 0x10);
        *pfVar23 = fVar37 - fVar8;
        pfVar23[1] = fVar40 - fVar9;
        pfVar23[2] = fVar42 - fVar10;
        pfVar23[3] = fVar4 - fVar11;
      }
      else {
        lVar33 = -(uVar35 & 0xfffffffffffffffe);
        lVar22 = 0;
        do {
          pfVar23 = (float *)(in_RCX + lVar22);
          fVar36 = pfVar23[1];
          fVar41 = pfVar23[2];
          fVar39 = pfVar23[3];
          pfVar2 = (float *)(in_RCX + lVar22 + 1);
          fVar37 = pfVar2[1];
          fVar40 = pfVar2[2];
          fVar42 = pfVar2[3];
          pfVar1 = (float *)(in_RCX + lVar22 + 4);
          fVar4 = *pfVar1;
          fVar5 = pfVar1[1];
          fVar6 = pfVar1[2];
          fVar7 = pfVar1[3];
          pfVar1 = (float *)(in_RCX + lVar22 + 5);
          fVar8 = *pfVar1;
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar1 = (float *)(puVar20 + lVar22 + 1);
          *pfVar1 = *pfVar2 - *pfVar23;
          pfVar1[1] = fVar37 - fVar36;
          pfVar1[2] = fVar40 - fVar41;
          pfVar1[3] = fVar42 - fVar39;
          pfVar23 = (float *)(puVar20 + lVar22 + 5);
          *pfVar23 = fVar8 - fVar4;
          pfVar23[1] = fVar9 - fVar5;
          pfVar23[2] = fVar10 - fVar6;
          pfVar23[3] = fVar11 - fVar7;
          pfVar23 = (float *)(in_RCX + lVar22 + 8);
          fVar36 = pfVar23[1];
          fVar41 = pfVar23[2];
          fVar39 = pfVar23[3];
          pfVar2 = (float *)(in_RCX + lVar22 + 9);
          fVar37 = pfVar2[1];
          fVar40 = pfVar2[2];
          fVar42 = pfVar2[3];
          pfVar1 = (float *)(in_RCX + lVar22 + 0xc);
          fVar4 = *pfVar1;
          fVar5 = pfVar1[1];
          fVar6 = pfVar1[2];
          fVar7 = pfVar1[3];
          pfVar1 = (float *)(in_RCX + lVar22 + 0xd);
          fVar8 = *pfVar1;
          fVar9 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
          pfVar1 = (float *)(puVar20 + lVar22 + 9);
          *pfVar1 = *pfVar2 - *pfVar23;
          pfVar1[1] = fVar37 - fVar36;
          pfVar1[2] = fVar40 - fVar41;
          pfVar1[3] = fVar42 - fVar39;
          pfVar23 = (float *)(puVar20 + lVar22 + 0xd);
          *pfVar23 = fVar8 - fVar4;
          pfVar23[1] = fVar9 - fVar5;
          pfVar23[2] = fVar10 - fVar6;
          pfVar23[3] = fVar11 - fVar7;
          lVar22 = lVar22 + 0x10;
          lVar33 = lVar33 + 2;
        } while (lVar33 != 0);
        if ((uVar35 & 1) != 0) goto LAB_014b021b;
      }
      if (uVar21 == uVar27) goto LAB_014b025e;
      uVar27 = uVar27 | 1;
      uVar21 = ~uVar27;
    }
    if ((param_4 & 1) == 0) {
      puVar20[uVar27] = (float)in_RCX[uVar27] - (float)in_RCX[uVar27 - 1];
      uVar27 = uVar27 + 1;
    }
    if (uVar21 + uVar26 != 0) {
      do {
        puVar20[uVar27] = (float)in_RCX[uVar27] - (float)in_RCX[uVar27 - 1];
        puVar20[uVar27 + 1] = (float)in_RCX[uVar27 + 1] - (float)in_RCX[uVar27];
        uVar27 = uVar27 + 2;
      } while (uVar26 != uVar27);
    }
  }
LAB_014b025e:
  fVar36 = g_02394254;
  uVar24 = g_02390140;
  if (0 < (int)param_4) {
    fVar41 = 0.0;
    lVar22 = 0;
    fVar39 = 0.0;
    while( true ) {
      fVar39 = fVar41 + fVar39;
      if ((int)sVar31 <= lVar22) {
        fVar39 = fVar39 - (float)puVar20[lVar22 - (int)sVar31];
      }
      if ((int)sVar31 / 2 <= lVar22) {
        *(float *)(lVar19 + (int64_t)((int)sVar31 / 2) * -4 + lVar22 * 4) =
             (float)((uint)fVar39 & uVar24) * fVar36;
      }
      if (uVar26 - 1 == lVar22) break;
      fVar41 = (float)puVar20[lVar22 + 1];
      lVar22 = lVar22 + 1;
    }
  }
  if (1 < (int)sVar31) {
    ___bzero();
  }
  FUN_00e83070();
  pfVar23 = (float *)FUN_00e83010();
  fVar37 = _UNK_0240e28c;
  fVar39 = _UNK_0240e288;
  fVar41 = _UNK_0240e284;
  fVar36 = g_02390d2c;
  dVar3 = param_1 / g_0240f0f0;
  if (0 < (int)param_4) {
    if (param_4 < 8) {
      uVar27 = 0;
    }
    else {
      uVar27 = (uint64_t)(param_4 & 0xfffffff8);
      uVar21 = 0;
      do {
        pfVar2 = (float *)(lVar19 + uVar21 * 4);
        fVar40 = pfVar2[1];
        fVar42 = pfVar2[2];
        fVar4 = pfVar2[3];
        if (fVar36 < *pfVar2) {
          *(void*)(lVar19 + uVar21 * 4) = 0x40800000;
        }
        if (fVar40 <= fVar41) {
          if (fVar39 >= fVar42) goto LAB_014b0405;
LAB_014b043b:
          *(void*)(lVar19 + 8 + uVar21 * 4) = 0x40800000;
          if (fVar4 > fVar37) goto LAB_014b0410;
LAB_014b044f:
          pfVar2 = (float *)(lVar19 + 0x10 + uVar21 * 4);
          fVar40 = *pfVar2;
          fVar42 = pfVar2[1];
          fVar4 = pfVar2[2];
          fVar5 = pfVar2[3];
        }
        else {
          *(void*)(lVar19 + 4 + uVar21 * 4) = 0x40800000;
          if (fVar39 < fVar42) goto LAB_014b043b;
LAB_014b0405:
          if (fVar4 <= fVar37) goto LAB_014b044f;
LAB_014b0410:
          *(void*)(lVar19 + 0xc + uVar21 * 4) = 0x40800000;
          pfVar2 = (float *)(lVar19 + 0x10 + uVar21 * 4);
          fVar40 = *pfVar2;
          fVar42 = pfVar2[1];
          fVar4 = pfVar2[2];
          fVar5 = pfVar2[3];
        }
        if (fVar36 < fVar40) {
          *(void*)(lVar19 + 0x10 + uVar21 * 4) = 0x40800000;
        }
        if (fVar41 < fVar42) {
          *(void*)(lVar19 + 0x14 + uVar21 * 4) = 0x40800000;
        }
        if (fVar39 < fVar4) {
          *(void*)(lVar19 + 0x18 + uVar21 * 4) = 0x40800000;
        }
        if (fVar37 < fVar5) {
          *(void*)(lVar19 + 0x1c + uVar21 * 4) = 0x40800000;
        }
        uVar21 = uVar21 + 8;
      } while (uVar27 != uVar21);
      fVar36 = g_02390d2c;
      if (uVar27 == uVar26) goto LAB_014b04db;
    }
    do {
      if (fVar36 < *(float *)(lVar19 + uVar27 * 4)) {
        *(void*)(lVar19 + uVar27 * 4) = 0x40800000;
      }
      uVar27 = uVar27 + 1;
    } while (uVar26 != uVar27);
  }
LAB_014b04db:
  pvVar25 = (void *)0x0;
  FUN_015c1480(g_023908d8 * (float)dVar3,uVar26);
  _memcpy(pvVar25,(void *)((int64_t)(int)param_4 << 2),sVar31);
  fVar36 = (float)FUN_015c1480((float)dVar3 * g_0241fd58,uVar26);
  if (2 < (int)param_4) {
    param_1 = g_0238fee8 / param_1;
    uVar27 = 1;
    bVar16 = false;
    uVar26 = 0;
    uVar21 = 0;
    fVar41 = pfVar23[1] - *pfVar23;
    do {
      iVar28 = (int)uVar26;
      fVar36 = pfVar23[uVar27 + 1] - pfVar23[uVar27];
      bVar15 = bVar16;
      if ((bVar16) && ((fVar41 <= 0.0 && 0.0 < fVar36 || (uVar27 == param_4 - 2)))) {
        uVar35 = (uint64_t)iVar28;
        fVar39 = 0.0;
        if ((int64_t)uVar35 < (int64_t)uVar27) {
          fVar39 = 0.0;
          uVar30 = uVar35;
          fVar37 = fVar36;
          fVar40 = g_02394264;
          if (((int)(uVar21 + 1) - iVar28 & 1U) != 0) {
            fVar37 = *(float *)(lVar19 + uVar35 * 4);
            fVar39 = fVar37;
            if (fVar37 <= 0.0) {
              fVar39 = 0.0;
            }
            if (g_02394264 <= fVar37) {
              fVar37 = g_02394264;
            }
            uVar30 = uVar35 + 1;
            fVar40 = fVar37;
          }
          if (uVar21 != uVar35) {
            do {
              fVar42 = *(float *)(lVar19 + uVar30 * 4);
              fVar37 = *(float *)(lVar19 + 4 + uVar30 * 4);
              if (fVar39 < fVar42) {
                uVar26 = uVar30 & 0xffffffff;
                fVar39 = fVar42;
              }
              if (fVar40 <= fVar42) {
                fVar42 = fVar40;
              }
              if (fVar39 < fVar37) {
                uVar26 = (uint64_t)((int)uVar30 + 1);
                fVar39 = fVar37;
              }
              iVar28 = (int)uVar26;
              if (fVar42 <= fVar37) {
                fVar37 = fVar42;
              }
              uVar30 = uVar30 + 2;
              fVar40 = fVar37;
            } while (uVar30 != uVar27);
          }
          iVar17 = *(int *)(lVar18 + (int64_t)iVar28 * 4);
        }
        else {
          iVar17 = *(int *)(lVar18 + uVar35 * 4);
          fVar37 = g_02394264;
        }
        if ((iVar17 != 0) && (g_02391090 < fVar39 - fVar37)) {
          FUN_014ba9e0(SUB84((double)((float)iVar28 * (float)param_1),0));
          if (local_d0 == '\0') {
            if (local_d8 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_d0 = '\0';
          }
          FUN_00d21140();
          if (local_d8 != 0) {
            FUN_00d50b20();
          }
          if ((local_d0 != '\0') && (local_d8 != 0)) {
            FUN_00d50b20();
          }
        }
        bVar15 = false;
        uVar26 = uVar27 & 0xffffffff;
      }
      uVar27 = uVar27 + 1;
      bVar16 = bVar15;
      if (fVar36 < 0.0) {
        bVar16 = true;
      }
      if (fVar41 < 0.0) {
        bVar16 = bVar15;
      }
      uVar21 = uVar21 + 1;
      fVar41 = fVar36;
    } while (uVar27 != param_4 - 1);
  }
  FUN_00d242c0(fVar36,0);
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  if ((bVar12) && (lVar34 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar14) && (lVar29 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar13) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  return;
}

