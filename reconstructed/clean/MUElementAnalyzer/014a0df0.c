// Function: FUN_014a0df0
// Address: 014a0df0
// Size: 4416 bytes
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


void FUN_014a0df0(double param_1,float param_2,uint32_t param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  void*puVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  void*puVar8;
  uint32_t uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint32_t uVar30;
  uint32_t uVar31;
  uint32_t uVar32;
  uint64_t uVar33;
  uint64_t uVar34;
  uint64_t uVar35;
  uint64_t uVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  bool bVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  void*puVar49;
  uint64_t uVar50;
  uint64_t uVar51;
  int64_t lVar52;
  uint64_t uVar53;
  uint64_t uVar54;
  uint uVar55;
  int64_t *in_RCX;
  uint64_t uVar56;
  uint64_t uVar57;
  uint64_t uVar58;
  uint in_EDX;
  uint uVar59;
  int64_t lVar60;
  uint64_t uVar61;
  int iVar62;
  uint64_t arg1;
  int64_t lVar63;
  uint uVar64;
  char in_R8B;
  uint uVar65;
  int64_t lVar66;
  uint64_t uVar67;
  uint64_t uVar68;
  int iVar69;
  uint64_t uVar70;
  uint64_t uVar71;
  int64_t lVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  bool bVar76;
  bool bVar77;
  float fVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  float in_XMM4_Da;
  int64_t local_c0;
  char local_b8;
  int64_t local_50;
  int64_t local_48;
  int64_t local_40;
  
  uVar71 = (uint64_t)in_EDX;
  puVar49 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar49 = &g_02572358;
  (*g_02572370)();
  uVar50 = FUN_00e83010();
  uVar51 = FUN_00e83010();
  lVar52 = *in_RCX;
  if (*(int *)(lVar52 + 0xc) < 1) {
    bVar37 = false;
    local_40 = 0;
  }
  else {
    lVar72 = 0;
    local_40 = 0;
    bVar37 = false;
    do {
      lVar52 = *(int64_t *)(*(int64_t *)(lVar52 + 0x10) + lVar72 * 8);
      if (local_40 == lVar52) {
        if ((!bVar37) && (local_40 != 0)) {
          bVar37 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar52 != 0) {
          FUN_00d50b00();
        }
        if ((bVar37) && (local_40 != 0)) {
          FUN_00d50b20();
          bVar37 = true;
          local_40 = lVar52;
        }
        else {
          bVar37 = true;
          local_40 = lVar52;
        }
      }
      FUN_014328b0(SUB84(*(double *)(local_40 + 0x10) * param_1 + g_023942d0,0),
                   (int)*(void*)(local_40 + 0x18));
      if (local_b8 == '\0') {
        if (local_c0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_b8 = '\0';
      }
      FUN_00d21140();
      if (local_c0 != 0) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      lVar72 = lVar72 + 1;
      lVar52 = *in_RCX;
    } while (lVar72 < *(int *)(lVar52 + 0xc));
  }
  iVar47 = (int)((double)param_2 * param_1);
  uVar1 = uVar51 + uVar71 * 4;
  uVar2 = uVar50 + uVar71 * 4;
  uVar3 = arg1 + uVar71 * 4;
  uVar58 = (uint64_t)(in_EDX & 0xfffffff8);
  uVar56 = (uVar58 - 8 >> 3) + 1;
  lVar52 = 0;
  bVar38 = false;
  local_50 = 0;
  bVar39 = false;
  local_48 = 0;
  bVar40 = false;
  bVar76 = true;
  do {
    bVar77 = bVar76;
    if (bVar77) {
      if (0 < (int)in_EDX) {
        if ((arg1 < uVar2 && uVar50 < uVar3 || in_EDX < 8) ||
            (arg1 < uVar1 && uVar51 < uVar3 || uVar50 < uVar1 && uVar51 < uVar2)) {
          uVar54 = 0;
        }
        else {
          if (uVar58 - 8 == 0) {
            lVar72 = 0;
LAB_014a1c14:
            puVar8 = (void*)(arg1 + lVar72 * 4);
            uVar9 = *puVar8;
            uVar30 = puVar8[1];
            uVar31 = puVar8[2];
            uVar32 = puVar8[3];
            puVar4 = (void*)(arg1 + 0x10 + lVar72 * 4);
            uVar33 = *puVar4;
            uVar34 = puVar4[1];
            puVar8 = (void*)(uVar51 + lVar72 * 4);
            *puVar8 = uVar9;
            puVar8[1] = uVar30;
            puVar8[2] = uVar31;
            puVar8[3] = uVar32;
            puVar4 = (void*)(uVar51 + 0x10 + lVar72 * 4);
            *puVar4 = uVar33;
            puVar4[1] = uVar34;
            puVar8 = (void*)(uVar50 + lVar72 * 4);
            *puVar8 = uVar9;
            puVar8[1] = uVar30;
            puVar8[2] = uVar31;
            puVar8[3] = uVar32;
            puVar4 = (void*)(uVar50 + 0x10 + lVar72 * 4);
            *puVar4 = uVar33;
            puVar4[1] = uVar34;
          }
          else {
            lVar72 = 0;
            lVar60 = -(uVar56 & 0xfffffffffffffffe);
            do {
              puVar4 = (void*)(arg1 + lVar72 * 4);
              uVar33 = *puVar4;
              uVar34 = puVar4[1];
              puVar4 = (void*)(arg1 + 0x10 + lVar72 * 4);
              uVar35 = *puVar4;
              uVar36 = puVar4[1];
              puVar4 = (void*)(uVar51 + lVar72 * 4);
              *puVar4 = uVar33;
              puVar4[1] = uVar34;
              puVar4 = (void*)(uVar51 + 0x10 + lVar72 * 4);
              *puVar4 = uVar35;
              puVar4[1] = uVar36;
              puVar4 = (void*)(uVar50 + lVar72 * 4);
              *puVar4 = uVar33;
              puVar4[1] = uVar34;
              puVar4 = (void*)(uVar50 + 0x10 + lVar72 * 4);
              *puVar4 = uVar35;
              puVar4[1] = uVar36;
              puVar8 = (void*)(arg1 + 0x20 + lVar72 * 4);
              uVar9 = *puVar8;
              uVar30 = puVar8[1];
              uVar31 = puVar8[2];
              uVar32 = puVar8[3];
              puVar4 = (void*)(arg1 + 0x30 + lVar72 * 4);
              uVar33 = *puVar4;
              uVar34 = puVar4[1];
              puVar8 = (void*)(uVar51 + 0x20 + lVar72 * 4);
              *puVar8 = uVar9;
              puVar8[1] = uVar30;
              puVar8[2] = uVar31;
              puVar8[3] = uVar32;
              puVar4 = (void*)(uVar51 + 0x30 + lVar72 * 4);
              *puVar4 = uVar33;
              puVar4[1] = uVar34;
              puVar8 = (void*)(uVar50 + 0x20 + lVar72 * 4);
              *puVar8 = uVar9;
              puVar8[1] = uVar30;
              puVar8[2] = uVar31;
              puVar8[3] = uVar32;
              puVar4 = (void*)(uVar50 + 0x30 + lVar72 * 4);
              *puVar4 = uVar33;
              puVar4[1] = uVar34;
              lVar72 = lVar72 + 0x10;
              lVar60 = lVar60 + 2;
            } while (lVar60 != 0);
            if ((uVar56 & 1) != 0) goto LAB_014a1c14;
          }
          uVar54 = uVar58;
          if (uVar58 == uVar71) goto LAB_014a11ef;
        }
        uVar57 = ~uVar54;
        for (uVar61 = (uint64_t)(in_EDX & 3); uVar61 != 0; uVar61 = uVar61 - 1) {
          uVar9 = *(void*)(arg1 + uVar54 * 4);
          *(void*)(uVar51 + uVar54 * 4) = uVar9;
          *(void*)(uVar50 + uVar54 * 4) = uVar9;
          uVar54 = uVar54 + 1;
        }
        if (2 < uVar57 + uVar71) {
          do {
            uVar9 = *(void*)(arg1 + uVar54 * 4);
            *(void*)(uVar51 + uVar54 * 4) = uVar9;
            *(void*)(uVar50 + uVar54 * 4) = uVar9;
            uVar9 = *(void*)(arg1 + 4 + uVar54 * 4);
            *(void*)(uVar51 + 4 + uVar54 * 4) = uVar9;
            *(void*)(uVar50 + 4 + uVar54 * 4) = uVar9;
            uVar9 = *(void*)(arg1 + 8 + uVar54 * 4);
            *(void*)(uVar51 + 8 + uVar54 * 4) = uVar9;
            *(void*)(uVar50 + 8 + uVar54 * 4) = uVar9;
            uVar9 = *(void*)(arg1 + 0xc + uVar54 * 4);
            *(void*)(uVar51 + 0xc + uVar54 * 4) = uVar9;
            *(void*)(uVar50 + 0xc + uVar54 * 4) = uVar9;
            uVar54 = uVar54 + 4;
          } while (uVar71 != uVar54);
        }
      }
    }
    else {
      ___bzero();
    }
LAB_014a11ef:
    if (0 < *(int *)((int64_t)puVar49 + 0xc)) {
      uVar54 = 0;
      do {
        lVar72 = *(int64_t *)(puVar49[2] + uVar54 * 8);
        if (local_40 == lVar72) {
          if ((!bVar37) && (local_40 != 0)) {
            bVar37 = true;
            FUN_00d50b00();
          }
LAB_014a12e0:
          if (uVar54 != 0) goto LAB_014a12e9;
LAB_014a1323:
          lVar72 = 0;
          if (lVar52 != 0) goto joined_r0x014a1384;
          lVar52 = 0;
        }
        else {
          if (lVar72 != 0) {
            FUN_00d50b00();
          }
          if ((bVar37) && (local_40 != 0)) {
            FUN_00d50b20();
            bVar37 = true;
            local_40 = lVar72;
            goto LAB_014a12e0;
          }
          bVar37 = true;
          local_40 = lVar72;
          if (uVar54 == 0) goto LAB_014a1323;
LAB_014a12e9:
          lVar72 = *(int64_t *)(puVar49[2] + -8 + uVar54 * 8);
          if (lVar52 == lVar72) {
            if ((!bVar38) && (lVar52 != 0)) {
              bVar38 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar72 == 0) {
              lVar72 = 0;
            }
            else {
              FUN_00d50b00();
            }
joined_r0x014a1384:
            if ((bVar38) && (lVar52 != 0)) {
              FUN_00d50b20();
              bVar38 = true;
              lVar52 = lVar72;
            }
            else {
              bVar38 = true;
              lVar52 = lVar72;
            }
          }
        }
        if ((int64_t)uVar54 < (int64_t)*(int *)((int64_t)puVar49 + 0xc) + -1) {
          lVar72 = *(int64_t *)(puVar49[2] + 8 + uVar54 * 8);
          if (local_50 == lVar72) {
            if ((!bVar39) && (local_50 != 0)) {
              bVar39 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar72 == 0) {
              lVar72 = 0;
            }
            else {
              FUN_00d50b00();
            }
joined_r0x014a13f0:
            if ((bVar39) && (local_50 != 0)) {
              FUN_00d50b20();
              bVar39 = true;
              local_50 = lVar72;
            }
            else {
              bVar39 = true;
              local_50 = lVar72;
            }
          }
        }
        else {
          lVar72 = 0;
          if (local_50 != 0) goto joined_r0x014a13f0;
          local_50 = 0;
        }
        if ((int64_t)uVar54 < (int64_t)*(int *)((int64_t)puVar49 + 0xc) + -2) {
          lVar72 = *(int64_t *)(puVar49[2] + 0x10 + uVar54 * 8);
          if (local_48 == lVar72) {
            if ((!bVar40) && (local_48 != 0)) {
              bVar40 = true;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar72 == 0) {
              lVar72 = 0;
            }
            else {
              FUN_00d50b00();
            }
joined_r0x014a14b0:
            if ((bVar40) && (local_48 != 0)) {
              FUN_00d50b20();
              bVar40 = true;
              local_48 = lVar72;
            }
            else {
              bVar40 = true;
              local_48 = lVar72;
            }
          }
        }
        else {
          lVar72 = 0;
          if (local_48 != 0) goto joined_r0x014a14b0;
          local_48 = 0;
        }
        iVar46 = _UNK_023de2bc;
        iVar45 = _UNK_023de2b8;
        iVar44 = _UNK_023de2b4;
        iVar43 = g_023de2b0;
        iVar42 = _UNK_0239418c;
        iVar41 = _UNK_02394188;
        iVar11 = _UNK_02394184;
        iVar69 = g_02394180;
        uVar55 = in_EDX;
        if (local_50 != 0) {
          uVar55 = (uint)*(double *)(local_50 + 0x10);
        }
        iVar62 = (int)*(double *)(local_40 + 0x10);
        iVar48 = 0;
        if ((lVar52 != 0) &&
           (iVar48 = (iVar62 - (int)*(double *)(lVar52 + 0x10)) / 2, iVar47 <= iVar48)) {
          iVar48 = iVar47;
        }
        uVar59 = iVar62 - iVar48;
        if ((int)uVar59 < 0) {
          uVar59 = 0;
        }
        iVar48 = 0;
        if (((local_50 != 0) && (iVar48 = iVar47, local_48 != 0)) &&
           (iVar48 = (int)((int)*(double *)(local_48 + 0x10) - uVar55) / 2, iVar47 <= iVar48)) {
          iVar48 = iVar47;
        }
        uVar64 = iVar48 + uVar55;
        if ((int)in_EDX < (int)(iVar48 + uVar55)) {
          uVar64 = in_EDX;
        }
        uVar61 = uVar51;
        if ((uVar54 & 1) == 0) {
          uVar61 = uVar50;
        }
        if (bVar77) {
          FUN_015c2d90(param_3,(float)*(double *)(local_40 + 0x18));
        }
        else {
          uVar65 = iVar62 * 2 - uVar59;
          uVar55 = uVar55 * 2 - uVar64;
          if ((int)in_EDX < (int)uVar65) {
            uVar65 = in_EDX;
          }
          uVar10 = uVar55;
          if ((int)uVar55 < (int)uVar65) {
            uVar10 = uVar65;
          }
          fVar73 = g_02390124;
          if (uVar65 - uVar59 != 0 && (int)uVar59 <= (int)uVar65) {
            fVar73 = g_02390124 / (float)(int)(uVar65 - uVar59);
          }
          if ((int)uVar59 < (int)uVar65) {
            uVar57 = (uint64_t)uVar59;
            lVar72 = (int64_t)(int)uVar65;
            uVar67 = lVar72 - uVar57;
            uVar68 = 0;
            if ((7 < uVar67) &&
               ((uVar61 + lVar72 * 4 <= arg1 + uVar57 * 4 ||
                (arg1 + lVar72 * 4 <= uVar61 + uVar57 * 4)))) {
              uVar68 = uVar67 & 0xfffffffffffffff8;
              lVar60 = uVar61 + uVar57 * 4;
              lVar63 = arg1 + 0x10 + uVar57 * 4;
              uVar53 = 0;
              iVar48 = g_0238fcc0;
              iVar62 = _UNK_0238fcc4;
              iVar79 = _UNK_0238fcc8;
              iVar80 = _UNK_0238fccc;
              do {
                pfVar6 = (float *)(lVar60 + uVar53 * 4);
                fVar75 = pfVar6[1];
                fVar78 = pfVar6[2];
                fVar12 = pfVar6[3];
                pfVar5 = (float *)(lVar60 + 0x10 + uVar53 * 4);
                fVar74 = *pfVar5;
                fVar13 = pfVar5[1];
                fVar14 = pfVar5[2];
                fVar15 = pfVar5[3];
                pfVar7 = (float *)(lVar63 + -0x10 + uVar53 * 4);
                fVar16 = pfVar7[1];
                fVar17 = pfVar7[2];
                fVar18 = pfVar7[3];
                pfVar5 = (float *)(lVar63 + uVar53 * 4);
                fVar19 = *pfVar5;
                fVar20 = pfVar5[1];
                fVar21 = pfVar5[2];
                fVar22 = pfVar5[3];
                pfVar5 = (float *)(lVar63 + -0x10 + uVar53 * 4);
                *pfVar5 = *pfVar7 + *pfVar6 * (float)iVar48 * fVar73;
                pfVar5[1] = fVar16 + fVar75 * (float)iVar62 * fVar73;
                pfVar5[2] = fVar17 + fVar78 * (float)iVar79 * fVar73;
                pfVar5[3] = fVar18 + fVar12 * (float)iVar80 * fVar73;
                pfVar5 = (float *)(lVar63 + uVar53 * 4);
                *pfVar5 = fVar19 + fVar74 * (float)(iVar48 + iVar69) * fVar73;
                pfVar5[1] = fVar20 + fVar13 * (float)(iVar62 + iVar11) * fVar73;
                pfVar5[2] = fVar21 + fVar14 * (float)(iVar79 + iVar41) * fVar73;
                pfVar5[3] = fVar22 + fVar15 * (float)(iVar80 + iVar42) * fVar73;
                uVar53 = uVar53 + 8;
                iVar48 = iVar48 + iVar43;
                iVar62 = iVar62 + iVar44;
                iVar79 = iVar79 + iVar45;
                iVar80 = iVar80 + iVar46;
              } while (uVar68 != uVar53);
              uVar57 = uVar68 + uVar57;
              if (uVar67 == uVar68) goto LAB_014a17a0;
            }
            iVar69 = (int)uVar68;
            uVar67 = uVar57;
            if ((uVar65 - (int)uVar57 & 1) != 0) {
              fVar75 = (float)iVar69;
              iVar69 = iVar69 + 1;
              *(float *)(arg1 + uVar57 * 4) =
                   fVar75 * fVar73 * *(float *)(uVar61 + uVar57 * 4) +
                   *(float *)(arg1 + uVar57 * 4);
              uVar67 = uVar57 + 1;
            }
            if (~uVar57 + lVar72 != 0) {
              lVar60 = arg1 + 4 + uVar67 * 4;
              lVar63 = uVar61 + uVar67 * 4;
              lVar66 = 0;
              do {
                *(float *)(lVar60 + -4 + lVar66 * 4) =
                     (float)(iVar69 + (int)lVar66) * fVar73 * *(float *)(lVar63 + lVar66 * 4) +
                     *(float *)(lVar60 + -4 + lVar66 * 4);
                *(float *)(lVar60 + lVar66 * 4) =
                     (float)(iVar69 + 1 + (int)lVar66) * fVar73 *
                     *(float *)(lVar63 + 4 + lVar66 * 4) + *(float *)(lVar60 + lVar66 * 4);
                lVar66 = lVar66 + 2;
              } while (lVar72 - uVar67 != lVar66);
            }
          }
LAB_014a17a0:
          iVar69 = uVar64 - uVar10;
          if ((int)uVar65 < (int)uVar55) {
            uVar67 = (uint64_t)(int)uVar65;
            uVar57 = (uint64_t)(int)uVar10;
            uVar68 = uVar57 - uVar67;
            if ((7 < uVar68) &&
               ((uVar61 + uVar57 * 4 <= arg1 + uVar67 * 4 ||
                (arg1 + uVar57 * 4 <= uVar61 + uVar67 * 4)))) {
              uVar53 = uVar68 & 0xfffffffffffffff8;
              uVar70 = (uVar53 - 8 >> 3) + 1;
              if (uVar53 - 8 == 0) {
                lVar72 = 0;
LAB_014a1949:
                lVar72 = lVar72 + uVar67;
                pfVar5 = (float *)(uVar61 + lVar72 * 4);
                fVar73 = pfVar5[1];
                fVar75 = pfVar5[2];
                fVar78 = pfVar5[3];
                pfVar6 = (float *)(uVar61 + 0x10 + lVar72 * 4);
                fVar12 = *pfVar6;
                fVar74 = pfVar6[1];
                fVar13 = pfVar6[2];
                fVar14 = pfVar6[3];
                pfVar6 = (float *)(arg1 + lVar72 * 4);
                fVar15 = pfVar6[1];
                fVar16 = pfVar6[2];
                fVar17 = pfVar6[3];
                pfVar7 = (float *)(arg1 + 0x10 + lVar72 * 4);
                fVar18 = *pfVar7;
                fVar19 = pfVar7[1];
                fVar20 = pfVar7[2];
                fVar21 = pfVar7[3];
                pfVar7 = (float *)(arg1 + lVar72 * 4);
                *pfVar7 = *pfVar6 + *pfVar5;
                pfVar7[1] = fVar15 + fVar73;
                pfVar7[2] = fVar16 + fVar75;
                pfVar7[3] = fVar17 + fVar78;
                pfVar5 = (float *)(arg1 + 0x10 + lVar72 * 4);
                *pfVar5 = fVar18 + fVar12;
                pfVar5[1] = fVar19 + fVar74;
                pfVar5[2] = fVar20 + fVar13;
                pfVar5[3] = fVar21 + fVar14;
              }
              else {
                lVar60 = arg1 + 0x30 + uVar67 * 4;
                lVar63 = uVar61 + uVar67 * 4;
                lVar66 = -(uVar70 & 0xfffffffffffffffe);
                lVar72 = 0;
                do {
                  pfVar6 = (float *)(lVar63 + lVar72 * 4);
                  fVar73 = pfVar6[1];
                  fVar75 = pfVar6[2];
                  fVar78 = pfVar6[3];
                  pfVar5 = (float *)(lVar63 + 0x10 + lVar72 * 4);
                  fVar12 = *pfVar5;
                  fVar74 = pfVar5[1];
                  fVar13 = pfVar5[2];
                  fVar14 = pfVar5[3];
                  pfVar7 = (float *)(lVar60 + -0x30 + lVar72 * 4);
                  fVar15 = pfVar7[1];
                  fVar16 = pfVar7[2];
                  fVar17 = pfVar7[3];
                  pfVar5 = (float *)(lVar60 + -0x20 + lVar72 * 4);
                  fVar18 = *pfVar5;
                  fVar19 = pfVar5[1];
                  fVar20 = pfVar5[2];
                  fVar21 = pfVar5[3];
                  pfVar5 = (float *)(lVar60 + -0x10 + lVar72 * 4);
                  fVar22 = *pfVar5;
                  fVar23 = pfVar5[1];
                  fVar24 = pfVar5[2];
                  fVar25 = pfVar5[3];
                  pfVar5 = (float *)(lVar60 + lVar72 * 4);
                  fVar26 = *pfVar5;
                  fVar27 = pfVar5[1];
                  fVar28 = pfVar5[2];
                  fVar29 = pfVar5[3];
                  pfVar5 = (float *)(lVar60 + -0x30 + lVar72 * 4);
                  *pfVar5 = *pfVar7 + *pfVar6;
                  pfVar5[1] = fVar15 + fVar73;
                  pfVar5[2] = fVar16 + fVar75;
                  pfVar5[3] = fVar17 + fVar78;
                  pfVar5 = (float *)(lVar60 + -0x20 + lVar72 * 4);
                  *pfVar5 = fVar18 + fVar12;
                  pfVar5[1] = fVar19 + fVar74;
                  pfVar5[2] = fVar20 + fVar13;
                  pfVar5[3] = fVar21 + fVar14;
                  pfVar6 = (float *)(lVar63 + 0x20 + lVar72 * 4);
                  fVar73 = pfVar6[1];
                  fVar75 = pfVar6[2];
                  fVar78 = pfVar6[3];
                  pfVar5 = (float *)(lVar63 + 0x30 + lVar72 * 4);
                  fVar12 = *pfVar5;
                  fVar74 = pfVar5[1];
                  fVar13 = pfVar5[2];
                  fVar14 = pfVar5[3];
                  pfVar5 = (float *)(lVar60 + -0x10 + lVar72 * 4);
                  *pfVar5 = *pfVar6 + fVar22;
                  pfVar5[1] = fVar73 + fVar23;
                  pfVar5[2] = fVar75 + fVar24;
                  pfVar5[3] = fVar78 + fVar25;
                  pfVar5 = (float *)(lVar60 + lVar72 * 4);
                  *pfVar5 = fVar12 + fVar26;
                  pfVar5[1] = fVar74 + fVar27;
                  pfVar5[2] = fVar13 + fVar28;
                  pfVar5[3] = fVar14 + fVar29;
                  lVar72 = lVar72 + 0x10;
                  lVar66 = lVar66 + 2;
                } while (lVar66 != 0);
                if ((uVar70 & 1) != 0) goto LAB_014a1949;
              }
              if (uVar68 == uVar53) goto LAB_014a1990;
              uVar67 = uVar67 + uVar53;
            }
            uVar55 = uVar10 - (int)uVar67;
            uVar68 = ~uVar67;
            if ((uVar55 & 3) != 0) {
              lVar72 = -((uint64_t)uVar55 & 3);
              do {
                *(float *)(arg1 + uVar67 * 4) =
                     *(float *)(uVar61 + uVar67 * 4) + *(float *)(arg1 + uVar67 * 4);
                uVar67 = uVar67 + 1;
                lVar72 = lVar72 + 1;
              } while (lVar72 != 0);
            }
            if (2 < uVar68 + uVar57) {
              do {
                *(float *)(arg1 + uVar67 * 4) =
                     *(float *)(uVar61 + uVar67 * 4) + *(float *)(arg1 + uVar67 * 4);
                *(float *)(arg1 + 4 + uVar67 * 4) =
                     *(float *)(uVar61 + 4 + uVar67 * 4) + *(float *)(arg1 + 4 + uVar67 * 4);
                *(float *)(arg1 + 8 + uVar67 * 4) =
                     *(float *)(uVar61 + 8 + uVar67 * 4) + *(float *)(arg1 + 8 + uVar67 * 4);
                *(float *)(arg1 + 0xc + uVar67 * 4) =
                     *(float *)(uVar61 + 0xc + uVar67 * 4) +
                     *(float *)(arg1 + 0xc + uVar67 * 4);
                uVar67 = uVar67 + 4;
              } while (uVar57 != uVar67);
            }
          }
LAB_014a1990:
          iVar48 = _UNK_023de2bc;
          iVar46 = _UNK_023de2b8;
          iVar45 = _UNK_023de2b4;
          iVar44 = g_023de2b0;
          fVar12 = _UNK_023b2d5c;
          fVar78 = _UNK_023b2d58;
          fVar75 = _UNK_023b2d54;
          fVar73 = g_023b2d50;
          iVar43 = _UNK_0239418c;
          iVar42 = _UNK_02394188;
          iVar41 = _UNK_02394184;
          iVar11 = g_02394180;
          fVar74 = g_02390124;
          if (0 < iVar69) {
            fVar74 = g_02390124 / (float)iVar69;
          }
          if ((int)uVar10 < (int)uVar64) {
            lVar60 = (int64_t)(int)uVar10;
            uVar55 = ~uVar10 + uVar64;
            uVar57 = 0;
            lVar72 = lVar60;
            if ((6 < uVar55) &&
               ((lVar63 = lVar60 + (uint64_t)uVar55,
                uVar61 + lVar63 * 4 + 4 <= arg1 + lVar60 * 4 ||
                (arg1 + lVar63 * 4 + 4 <= uVar61 + lVar60 * 4)))) {
              uVar68 = (uint64_t)uVar55 + 1;
              uVar57 = uVar68 & 0xfffffffffffffff8;
              lVar72 = uVar57 + lVar60;
              lVar63 = uVar61 + lVar60 * 4;
              lVar60 = arg1 + 0x10 + lVar60 * 4;
              uVar67 = 0;
              iVar62 = g_0238fcc0;
              iVar79 = _UNK_0238fcc4;
              iVar80 = _UNK_0238fcc8;
              iVar81 = _UNK_0238fccc;
              do {
                pfVar6 = (float *)(lVar63 + uVar67 * 4);
                fVar13 = pfVar6[1];
                fVar14 = pfVar6[2];
                fVar15 = pfVar6[3];
                pfVar5 = (float *)(lVar63 + 0x10 + uVar67 * 4);
                fVar16 = *pfVar5;
                fVar17 = pfVar5[1];
                fVar18 = pfVar5[2];
                fVar19 = pfVar5[3];
                pfVar7 = (float *)(lVar60 + -0x10 + uVar67 * 4);
                fVar20 = pfVar7[1];
                fVar21 = pfVar7[2];
                fVar22 = pfVar7[3];
                pfVar5 = (float *)(lVar60 + uVar67 * 4);
                fVar23 = *pfVar5;
                fVar24 = pfVar5[1];
                fVar25 = pfVar5[2];
                fVar26 = pfVar5[3];
                pfVar5 = (float *)(lVar60 + -0x10 + uVar67 * 4);
                *pfVar5 = *pfVar7 + *pfVar6 * (fVar73 - (float)iVar62 * fVar74);
                pfVar5[1] = fVar20 + fVar13 * (fVar75 - (float)iVar79 * fVar74);
                pfVar5[2] = fVar21 + fVar14 * (fVar78 - (float)iVar80 * fVar74);
                pfVar5[3] = fVar22 + fVar15 * (fVar12 - (float)iVar81 * fVar74);
                pfVar5 = (float *)(lVar60 + uVar67 * 4);
                *pfVar5 = fVar23 + fVar16 * (fVar73 - (float)(iVar62 + iVar11) * fVar74);
                pfVar5[1] = fVar24 + fVar17 * (fVar75 - (float)(iVar79 + iVar41) * fVar74);
                pfVar5[2] = fVar25 + fVar18 * (fVar78 - (float)(iVar80 + iVar42) * fVar74);
                pfVar5[3] = fVar26 + fVar19 * (fVar12 - (float)(iVar81 + iVar43) * fVar74);
                uVar67 = uVar67 + 8;
                iVar62 = iVar62 + iVar44;
                iVar79 = iVar79 + iVar45;
                iVar80 = iVar80 + iVar46;
                iVar81 = iVar81 + iVar48;
              } while (uVar57 != uVar67);
              if (uVar68 == uVar57) goto LAB_014a1247;
            }
            uVar59 = (uint)uVar57;
            uVar55 = ~uVar59;
            if ((uVar64 - uVar10 & 1) != 0) {
              fVar73 = (float)(int)uVar59;
              uVar59 = uVar59 + 1;
              *(float *)(arg1 + lVar72 * 4) =
                   (g_02390124 - fVar73 * fVar74) * *(float *)(uVar61 + lVar72 * 4) +
                   *(float *)(arg1 + lVar72 * 4);
              lVar72 = lVar72 + 1;
            }
            fVar73 = g_02390124;
            if (uVar55 + uVar64 != uVar10) {
              lVar60 = uVar61 + lVar72 * 4;
              lVar72 = arg1 + 4 + lVar72 * 4;
              lVar63 = 0;
              do {
                iVar11 = (int)lVar63;
                *(float *)(lVar72 + -4 + lVar63 * 4) =
                     (fVar73 - (float)(int)(uVar59 + iVar11) * fVar74) *
                     *(float *)(lVar60 + lVar63 * 4) + *(float *)(lVar72 + -4 + lVar63 * 4);
                *(float *)(lVar72 + lVar63 * 4) =
                     (fVar73 - (float)(int)(uVar59 + 1 + iVar11) * fVar74) *
                     *(float *)(lVar60 + 4 + lVar63 * 4) + *(float *)(lVar72 + lVar63 * 4);
                lVar63 = lVar63 + 2;
              } while (uVar59 + iVar11 + 2 != iVar69);
            }
          }
        }
LAB_014a1247:
        uVar54 = uVar54 + 1;
      } while ((int64_t)uVar54 < (int64_t)*(int *)((int64_t)puVar49 + 0xc));
    }
    bVar76 = false;
  } while (bVar77);
  if ((in_R8B != '\0') && (0 < (int)in_EDX)) {
    if (in_EDX < 8) {
      uVar58 = 0;
    }
    else {
      uVar50 = 0;
      do {
        pfVar5 = (float *)(arg1 + uVar50 * 4);
        fVar73 = pfVar5[1];
        fVar75 = pfVar5[2];
        fVar78 = pfVar5[3];
        if (in_XMM4_Da <= *pfVar5) {
          if (fVar73 < in_XMM4_Da) goto LAB_014a1e43;
LAB_014a1da2:
          if (fVar75 < in_XMM4_Da) goto LAB_014a1db1;
LAB_014a1e60:
          if (fVar78 < in_XMM4_Da) goto LAB_014a1e6f;
LAB_014a1dce:
          pfVar5 = (float *)(arg1 + 0x10 + uVar50 * 4);
          fVar73 = pfVar5[1];
          fVar75 = pfVar5[2];
          fVar78 = pfVar5[3];
          if (*pfVar5 < in_XMM4_Da) goto LAB_014a1ddd;
LAB_014a1e8c:
          bVar76 = fVar75 < in_XMM4_Da;
          bVar77 = fVar78 < in_XMM4_Da;
          if (fVar73 < in_XMM4_Da) goto LAB_014a1e9f;
LAB_014a1dfe:
          if (bVar76) goto LAB_014a1e0d;
LAB_014a1ebc:
          if (bVar77) goto LAB_014a1ecb;
        }
        else {
          *(float *)(arg1 + uVar50 * 4) = in_XMM4_Da;
          if (in_XMM4_Da <= fVar73) goto LAB_014a1da2;
LAB_014a1e43:
          *(float *)(arg1 + 4 + uVar50 * 4) = in_XMM4_Da;
          if (in_XMM4_Da <= fVar75) goto LAB_014a1e60;
LAB_014a1db1:
          *(float *)(arg1 + 8 + uVar50 * 4) = in_XMM4_Da;
          if (in_XMM4_Da <= fVar78) goto LAB_014a1dce;
LAB_014a1e6f:
          *(float *)(arg1 + 0xc + uVar50 * 4) = in_XMM4_Da;
          pfVar5 = (float *)(arg1 + 0x10 + uVar50 * 4);
          fVar73 = pfVar5[1];
          fVar75 = pfVar5[2];
          fVar78 = pfVar5[3];
          if (in_XMM4_Da <= *pfVar5) goto LAB_014a1e8c;
LAB_014a1ddd:
          *(float *)(arg1 + 0x10 + uVar50 * 4) = in_XMM4_Da;
          bVar76 = fVar75 < in_XMM4_Da;
          bVar77 = fVar78 < in_XMM4_Da;
          if (in_XMM4_Da <= fVar73) goto LAB_014a1dfe;
LAB_014a1e9f:
          *(float *)(arg1 + 0x14 + uVar50 * 4) = in_XMM4_Da;
          if (!bVar76) goto LAB_014a1ebc;
LAB_014a1e0d:
          *(float *)(arg1 + 0x18 + uVar50 * 4) = in_XMM4_Da;
          if (bVar77) {
LAB_014a1ecb:
            *(float *)(arg1 + 0x1c + uVar50 * 4) = in_XMM4_Da;
          }
        }
        uVar50 = uVar50 + 8;
      } while (uVar58 != uVar50);
      if (uVar58 == uVar71) goto LAB_014a1ee7;
    }
    do {
      pfVar5 = (float *)(arg1 + uVar58 * 4);
      if (*pfVar5 <= in_XMM4_Da && in_XMM4_Da != *pfVar5) {
        *(float *)(arg1 + uVar58 * 4) = in_XMM4_Da;
      }
      uVar58 = uVar58 + 1;
    } while (uVar71 != uVar58);
  }
LAB_014a1ee7:
  FUN_00e83070();
  FUN_00e83070();
  if (puVar49 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar40) && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar39) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar38) && (lVar52 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar37) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return;
}

