// Function: FUN_014a8cc0
// Address: 014a8cc0
// Size: 5728 bytes
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


void FUN_014a8cc0(double param_1,float param_2,float param_3,float param_4)

{
  void*puVar1;
  bool bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint8_t auVar5 [16];
  double dVar6;
  void*******pppppppuVar7;
  uint uVar8;
  void*puVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int iVar16;
  int64_t in_RCX;
  uint64_t uVar17;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  uint64_t in_RDX;
  uint uVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint uVar24;
  uint64_t uVar25;
  int64_t lVar26;
  float *pfVar27;
  size_t sVar28;
  uint64_t in_R8;
  uint64_t uVar29;
  uint in_R9D;
  uint64_t uVar30;
  uint uVar31;
  uint64_t uVar32;
  char cVar33;
  uint uVar34;
  int iVar35;
  undefined7 uVar36;
  int iVar37;
  void*******pppppppuVar38;
  float fVar39;
  float fVar40;
  uint8_t auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float in_XMM4_Da;
  float fVar45;
  uint8_t auVar46 [16];
  uint8_t auVar47 [16];
  float in_XMM5_Da;
  uint8_t auVar48 [16];
  float fVar49;
  float unaff_XMM7_Da;
  float fVar50;
  int local_a0;
  void*******local_90;
  void*******local_80;
  char local_78;
  void*local_70;
  uint64_t local_68;
  uint32_t uStack_60;
  uint32_t uStack_5c;
  uint8_t local_58 [16];
  uint64_t local_40;
  uint64_t local_38;
  
  pppppppuVar38 = (void*******)(uint64_t)in_R9D;
  uVar17 = in_R8;
  puVar9 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar9 = &g_02572358;
  local_70 = puVar9;
  (*g_02572370)();
  lVar10 = FUN_00e83010();
  uVar11 = FUN_00e83010();
  uVar12 = FUN_00e83010();
  local_40 = 0;
  local_38._0_4_ = 0.0;
  local_38._4_4_ = 0;
  local_68._0_4_ = 0.0;
  local_68._4_4_ = 0;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_58._8_8_;
  local_58 = auVar5 << 0x40;
  lVar13 = FUN_00e83010();
  local_58._0_8_ = (int64_t)(int)in_R9D << 2;
  ___bzero();
  fVar49 = g_02411280;
  auVar5 = g_0240e270;
  fVar50 = _UNK_0240e26c;
  fVar44 = _UNK_0240e268;
  fVar45 = _UNK_0240e264;
  fVar39 = g_0240e260;
  fVar43 = g_02394214;
  fVar40 = g_02390124;
  sVar28 = (size_t)uVar17;
  uVar25 = (uint64_t)in_R9D;
  if (0 < (int)in_R9D) {
    if (in_RCX == 0) {
      fVar40 = g_02411280;
      if (in_R9D < 4) {
        uVar17 = 0;
      }
      else {
        uVar29 = uVar11 + uVar25 * 4;
        uVar30 = uVar25 * 4 + uVar12;
        uVar22 = in_RDX + uVar25 * 4;
        uVar32 = in_R8 + uVar25 * 4;
        sVar28 = (size_t)CONCAT71((int7)(uVar17 >> 8),in_RDX < uVar29);
        uVar17 = 0;
        if ((((uVar30 <= uVar11 || uVar29 <= uVar12) && (uVar22 <= uVar11 || in_RDX >= uVar29)) &&
            (uVar32 <= uVar11 || uVar29 <= in_R8)) &&
           ((uVar17 = 0, uVar22 <= uVar12 || uVar30 <= in_RDX &&
            (uVar32 <= uVar12 || uVar30 <= in_R8)))) {
          uVar17 = (uint64_t)(in_R9D & 0xfffffffc);
          uVar29 = 0;
          do {
            puVar9 = (void*)(in_RDX + uVar29 * 4);
            uVar15 = puVar9[1];
            puVar1 = (void*)(uVar11 + uVar29 * 4);
            *puVar1 = *puVar9;
            puVar1[1] = uVar15;
            auVar46 = *(uint8_t (*) [16])(in_R8 + uVar29 * 4);
            *(uint8_t (*) [16])(uVar12 + uVar29 * 4) = auVar46;
            auVar47 = *(uint8_t (*) [16])(uVar11 + uVar29 * 4);
            if (auVar46._0_4_ < fVar43) {
              *(void*)(uVar11 + uVar29 * 4) = 0x3727c5ac;
            }
            if (auVar46._4_4_ < fVar45) {
              *(void*)(uVar11 + 4 + uVar29 * 4) = 0x3727c5ac;
            }
            if (auVar46._8_4_ < fVar44) {
              *(void*)(uVar11 + 8 + uVar29 * 4) = 0x3727c5ac;
            }
            if (auVar46._12_4_ < fVar50) {
              *(void*)(uVar11 + 0xc + uVar29 * 4) = 0x3727c5ac;
            }
            auVar41._4_4_ = -(uint)(auVar46._4_4_ < fVar45);
            auVar41._0_4_ = -(uint)(auVar46._0_4_ < fVar39);
            auVar41._8_4_ = -(uint)(auVar46._8_4_ < fVar44);
            auVar41._12_4_ = -(uint)(auVar46._12_4_ < fVar50);
            auVar48 = blendvps(auVar47,auVar5,auVar41);
            auVar46 = blendvps(auVar46,*(uint8_t (*) [16])(uVar12 + uVar29 * 4),auVar41);
            auVar47._0_4_ = auVar46._0_4_ * auVar48._0_4_;
            auVar47._4_4_ = auVar46._4_4_ * auVar48._4_4_;
            auVar47._8_4_ = auVar46._8_4_ * auVar48._8_4_;
            auVar47._12_4_ = auVar46._12_4_ * auVar48._12_4_;
            auVar46 = maxps(auVar5,auVar47);
            *(uint8_t (*) [16])(uVar11 + uVar29 * 4) = auVar46;
            uVar29 = uVar29 + 4;
          } while (uVar17 != uVar29);
          fVar40 = g_02411280;
          fVar43 = g_02394214;
          if (uVar17 == uVar25) goto LAB_014a9050;
        }
      }
      do {
        *(void*)(uVar11 + uVar17 * 4) = *(void*)(in_RDX + uVar17 * 4);
        fVar39 = *(float *)(in_R8 + uVar17 * 4);
        *(float *)(uVar12 + uVar17 * 4) = fVar39;
        if (fVar39 < fVar43) {
          *(void*)(uVar11 + uVar17 * 4) = 0x3727c5ac;
          fVar39 = *(float *)(uVar12 + uVar17 * 4);
          fVar45 = fVar40;
        }
        else {
          fVar45 = *(float *)(uVar11 + uVar17 * 4);
        }
        fVar44 = fVar40;
        if (fVar40 <= fVar45 * fVar39) {
          fVar44 = fVar45 * fVar39;
        }
        *(float *)(uVar11 + uVar17 * 4) = fVar44;
        uVar17 = uVar17 + 1;
      } while (uVar25 != uVar17);
    }
    else {
      uVar17 = 0;
      do {
        *(void*)(uVar11 + uVar17 * 4) = *(void*)(in_RDX + uVar17 * 4);
        fVar39 = *(float *)(in_R8 + uVar17 * 4);
        *(float *)(uVar12 + uVar17 * 4) = fVar39;
        if (fVar43 <= fVar39) {
          fVar45 = *(float *)(uVar11 + uVar17 * 4);
        }
        else {
          *(void*)(uVar11 + uVar17 * 4) = 0x3727c5ac;
          fVar39 = *(float *)(uVar12 + uVar17 * 4);
          fVar45 = fVar49;
        }
        fVar45 = fVar45 * fVar39;
        *(float *)(uVar11 + uVar17 * 4) = fVar45;
        fVar39 = *(float *)(in_RCX + uVar17 * 4);
        fVar45 = (float)(-(uint)(0.0 < fVar39) & (uint)((fVar40 - fVar39) * fVar45) |
                        ~-(uint)(0.0 < fVar39) & (uint)fVar45);
        if ((0.0 < fVar39) || (fVar45 < fVar49)) {
          fVar39 = fVar49;
          if (fVar49 <= fVar45) {
            fVar39 = fVar45;
          }
          *(float *)(uVar11 + uVar17 * 4) = fVar39;
        }
        uVar17 = uVar17 + 1;
      } while (uVar25 != uVar17);
    }
  }
LAB_014a9050:
  pvVar18 = (void *)0x0;
  FUN_015c1480(0,pppppppuVar38);
  _memcpy(pvVar18,(void *)local_58._0_8_,sVar28);
  FUN_015c1480(0,pppppppuVar38);
  local_90 = pppppppuVar38;
  if (0 < (int)in_R9D) {
    fVar39 = (float)((double)param_2 * param_1);
    uVar17 = 0;
    local_90 = &local_80;
    local_38._0_4_ = g_02390d00;
    fVar43 = 0.0;
    fVar40 = g_02393944;
    do {
      fVar50 = (float)local_38;
      fVar45 = *(float *)(uVar11 + uVar17 * 4);
      fVar44 = *(float *)(lVar10 + uVar17 * 4);
      fVar49 = fVar45 / fVar44;
      local_58 = ZEXT416((uint)fVar49);
      local_38._0_4_ = g_02390d00;
      if ((in_XMM4_Da <= fVar44 && in_XMM4_Da <= fVar45) && param_3 <= fVar49) {
        local_38._0_4_ = g_02390124;
      }
      local_68._0_4_ = fVar49;
      if (fVar40 <= fVar49) {
        local_68._0_4_ = fVar40;
      }
      iVar16 = (int)uVar17;
      if ((0.0 <= fVar50) || ((float)local_38 <= 0.0)) {
        fVar42 = fVar49;
        if (fVar49 <= fVar43) {
          fVar42 = fVar43;
        }
        local_58 = ZEXT416((uint)fVar42);
        fVar40 = (float)local_68;
        if (((in_XMM4_Da > fVar44 || in_XMM4_Da > fVar45) || param_3 > fVar49) && 0.0 < fVar50) {
          iVar37 = *(int *)((int64_t)local_70 + 0xc);
          if (0 < iVar37) {
            lVar14 = *(int64_t *)(local_70[2] + (uint64_t)(iVar37 - 1) * 8);
            fVar40 = (float)*(double *)(lVar14 + 0x10);
            fVar43 = (float)iVar16 - fVar40;
            fVar45 = (float)*(double *)(lVar14 + 0x18);
            local_40 = CONCAT44(local_40._4_4_,fVar45);
            if ((fVar43 < fVar39) ||
               ((fVar43 < fVar39 + fVar39 &&
                ((fVar42 < param_4 || (g_02390120 < fVar45 / fVar42)))))) {
              FUN_00d23740();
              fVar40 = (float)local_40;
              if ((float)local_68 <= (float)local_40) {
                fVar40 = (float)local_68;
              }
              fVar42 = (float)local_58._0_4_;
              goto LAB_014a912b;
            }
            if (((2 < iVar37) &&
                (lVar14 = *(int64_t *)(local_70[2] + (uint64_t)(iVar37 - 2) * 8),
                fVar40 - (float)*(double *)(lVar14 + 0x10) < fVar39 + fVar39)) &&
               ((fVar40 = (float)((uint)(float)*(double *)(lVar14 + 0x18) ^ g_023945e0),
                g_02390120 < fVar45 / fVar42 || (g_02390120 < fVar45 / fVar40)))) {
              local_68._4_4_ = _UNK_023945e4;
              uStack_60 = _UNK_023945e8;
              uStack_5c = _UNK_023945ec;
              local_68._0_4_ = fVar40;
              FUN_00d23740();
              FUN_00d23740();
              fVar40 = (float)local_68;
              if ((float)local_68 <= (float)local_58._0_4_) {
                fVar40 = (float)local_58._0_4_;
              }
              local_58._4_4_ = local_68._4_4_;
              local_58._0_4_ = fVar40;
              local_58._8_4_ = uStack_60;
              local_58._12_4_ = uStack_5c;
            }
          }
          FUN_014328b0((double)iVar16);
          pppppppuVar7 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (void*******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d21140();
          if (pppppppuVar7 != (void*******)0x0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_014a9120;
        }
      }
      else {
        FUN_014328b0((double)iVar16);
        pppppppuVar7 = local_80;
        if (local_78 == '\0') {
          if (local_80 != (void*******)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_78 = '\0';
        }
        FUN_00d21140();
        if (pppppppuVar7 != (void*******)0x0) {
          FUN_00d50b20();
        }
        if ((local_78 != '\0') && (local_80 != (void*******)0x0)) {
          FUN_00d50b20();
        }
LAB_014a9120:
        fVar42 = 0.0;
        fVar40 = g_02393944;
      }
LAB_014a912b:
      uVar17 = uVar17 + 1;
      fVar43 = fVar42;
    } while (uVar25 != uVar17);
  }
  if (g_02390124 < unaff_XMM7_Da) {
    FUN_015c1480(0,pppppppuVar38);
  }
  if (*(int *)((int64_t)local_70 + 0xc) < 1) {
    local_40 = 0;
    local_38 = 0;
    local_68 = 0;
    lVar10 = 0;
  }
  else {
    iVar16 = (int)(g_0240e3e8 * param_1);
    uVar8 = (uint)(g_0240e3f0 * param_1);
    lVar10 = 0;
    local_68 = 0;
    local_38 = 0;
    local_40 = 0;
    local_a0 = 0;
    do {
      lVar14 = local_70[2];
      lVar26 = *(int64_t *)(lVar14 + (int64_t)local_a0 * 8);
      local_58._0_8_ = lVar10;
      if (lVar10 == lVar26) {
        if (((char)local_68 == '\0') && (lVar10 != 0)) {
          local_68 = CONCAT71((int7)((uint64_t)lVar14 >> 8),1);
          FUN_00d50b00();
        }
      }
      else {
        if (lVar26 != 0) {
          lVar14 = FUN_00d50b00();
        }
        if (((char)local_68 == '\0') || (local_58._0_8_ == 0)) {
          local_68 = CONCAT71((int7)((uint64_t)lVar14 >> 8),1);
          local_58._0_8_ = lVar26;
        }
        else {
          local_58._0_8_ = lVar26;
          uVar15 = FUN_00d50b20();
          local_68 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
        }
      }
      uVar36 = (undefined7)((uint64_t)local_90 >> 8);
      uVar15 = local_58._0_8_;
      lVar10 = local_38;
      if (local_a0 < *(int *)((int64_t)local_70 + 0xc) + -1) {
        lVar14 = *(int64_t *)(local_70[2] + 8 + (int64_t)local_a0 * 8);
        if (local_38 == lVar14) {
          if ((char)local_40 != '\0') {
            local_90 = (void*******)(local_40 & 0xffffffff);
            goto LAB_014a9712;
          }
          if (local_38 == 0) {
            local_90 = (void*******)(local_40 & 0xffffffff);
            goto LAB_014a9712;
          }
          local_40 = 0;
          FUN_00d50b00();
          iVar37 = (int)(*(double *)(uVar15 + 0x10) + g_023942d0);
          local_90 = (void*******)CONCAT71(uVar36,1);
        }
        else {
          if (lVar14 == 0) {
            lVar14 = 0;
          }
          else {
            FUN_00d50b00();
            lVar10 = local_38;
          }
joined_r0x014a96fd:
          local_90 = (void*******)CONCAT71(uVar36,1);
          local_38 = lVar14;
          if (((char)local_40 != '\0') &&
             (local_90 = (void*******)CONCAT71(uVar36,1), lVar10 != 0)) {
            FUN_00d50b20();
            local_38 = lVar14;
          }
LAB_014a9712:
          iVar37 = (int)(*(double *)(uVar15 + 0x10) + g_023942d0);
          if (local_38 == 0) {
            local_40 = (uint64_t)local_90 & 0xffffffff;
            goto LAB_014a9759;
          }
        }
        local_40 = (uint64_t)local_90 & 0xffffffff;
        uVar34 = (int)(*(double *)(local_38 + 0x10) + g_023942d0);
      }
      else {
        if (local_38 != 0) {
          lVar14 = 0;
          goto joined_r0x014a96fd;
        }
        iVar37 = (int)(*(double *)(local_58._0_8_ + 0x10) + g_023942d0);
LAB_014a9759:
        local_38 = 0;
        uVar34 = in_R9D;
      }
      if ((int)in_R9D < (int)uVar34) {
        uVar34 = in_R9D;
      }
      if (*(double *)(local_58._0_8_ + 0x18) < g_02390448) {
LAB_014a9580:
        lVar10 = local_58._0_8_;
      }
      else {
        uVar11 = (uint64_t)iVar37;
        uVar17 = (uint64_t)(int)uVar34;
        if (iVar37 < (int)uVar34) {
          uVar29 = uVar17 - uVar11;
          uVar25 = uVar11;
          if ((7 < uVar29) &&
             ((uVar17 * 4 + uVar12 <= lVar13 + uVar11 * 4 ||
              (lVar13 + uVar17 * 4 <= uVar11 * 4 + uVar12)))) {
            uVar25 = uVar29 & 0xfffffffffffffff8;
            uVar22 = (uVar25 - 8 >> 3) + 1;
            uVar32 = (uint64_t)((uint)uVar22 & 3);
            if (uVar25 - 8 < 0x18) {
              lVar26 = 0;
            }
            else {
              lVar10 = lVar13 + 0x70 + uVar11 * 4;
              lVar14 = uVar12 + 0x70 + uVar11 * 4;
              lVar23 = -(uVar22 & 0xfffffffffffffffc);
              lVar26 = 0;
              do {
                puVar9 = (void*)(lVar14 + -0x70 + lVar26 * 4);
                uVar15 = puVar9[1];
                puVar1 = (void*)(lVar14 + -0x60 + lVar26 * 4);
                uVar3 = *puVar1;
                uVar4 = puVar1[1];
                puVar1 = (void*)(lVar10 + -0x70 + lVar26 * 4);
                *puVar1 = *puVar9;
                puVar1[1] = uVar15;
                puVar9 = (void*)(lVar10 + -0x60 + lVar26 * 4);
                *puVar9 = uVar3;
                puVar9[1] = uVar4;
                puVar9 = (void*)(lVar14 + -0x50 + lVar26 * 4);
                uVar15 = puVar9[1];
                puVar1 = (void*)(lVar14 + -0x40 + lVar26 * 4);
                uVar3 = *puVar1;
                uVar4 = puVar1[1];
                puVar1 = (void*)(lVar10 + -0x50 + lVar26 * 4);
                *puVar1 = *puVar9;
                puVar1[1] = uVar15;
                puVar9 = (void*)(lVar10 + -0x40 + lVar26 * 4);
                *puVar9 = uVar3;
                puVar9[1] = uVar4;
                puVar9 = (void*)(lVar14 + -0x30 + lVar26 * 4);
                uVar15 = puVar9[1];
                puVar1 = (void*)(lVar14 + -0x20 + lVar26 * 4);
                uVar3 = *puVar1;
                uVar4 = puVar1[1];
                puVar1 = (void*)(lVar10 + -0x30 + lVar26 * 4);
                *puVar1 = *puVar9;
                puVar1[1] = uVar15;
                puVar9 = (void*)(lVar10 + -0x20 + lVar26 * 4);
                *puVar9 = uVar3;
                puVar9[1] = uVar4;
                puVar1 = (void*)(lVar14 + -0x10 + lVar26 * 4);
                uVar15 = puVar1[1];
                puVar9 = (void*)(lVar14 + lVar26 * 4);
                uVar3 = *puVar9;
                uVar4 = puVar9[1];
                puVar9 = (void*)(lVar10 + -0x10 + lVar26 * 4);
                *puVar9 = *puVar1;
                puVar9[1] = uVar15;
                puVar9 = (void*)(lVar10 + lVar26 * 4);
                *puVar9 = uVar3;
                puVar9[1] = uVar4;
                lVar26 = lVar26 + 0x20;
                lVar23 = lVar23 + 4;
              } while (lVar23 != 0);
            }
            if (uVar32 != 0) {
              lVar10 = lVar13 + 0x10 + (lVar26 + uVar11) * 4;
              lVar14 = uVar12 + 0x10 + (lVar26 + uVar11) * 4;
              lVar26 = 0;
              do {
                puVar1 = (void*)(lVar14 + -0x10 + lVar26);
                uVar15 = puVar1[1];
                puVar9 = (void*)(lVar14 + lVar26);
                uVar3 = *puVar9;
                uVar4 = puVar9[1];
                puVar9 = (void*)(lVar10 + -0x10 + lVar26);
                *puVar9 = *puVar1;
                puVar9[1] = uVar15;
                puVar9 = (void*)(lVar10 + lVar26);
                *puVar9 = uVar3;
                puVar9[1] = uVar4;
                lVar26 = lVar26 + 0x20;
              } while (uVar32 << 5 != lVar26);
            }
            if (uVar29 == uVar25) goto LAB_014a999c;
            uVar25 = uVar25 + uVar11;
          }
          uVar19 = uVar34 - (int)uVar25;
          uVar29 = ~uVar25;
          uVar22 = (uint64_t)uVar19 & 3;
          if ((uVar19 & 3) != 0) {
            do {
              *(void*)(lVar13 + uVar25 * 4) = *(void*)(uVar12 + uVar25 * 4);
              uVar25 = uVar25 + 1;
              uVar22 = uVar22 - 1;
            } while (uVar22 != 0);
          }
          if (2 < uVar29 + uVar17) {
            do {
              *(void*)(lVar13 + uVar25 * 4) = *(void*)(uVar12 + uVar25 * 4);
              *(void*)(lVar13 + 4 + uVar25 * 4) = *(void*)(uVar12 + 4 + uVar25 * 4);
              *(void*)(lVar13 + 8 + uVar25 * 4) = *(void*)(uVar12 + 8 + uVar25 * 4);
              *(void*)(lVar13 + 0xc + uVar25 * 4) =
                   *(void*)(uVar12 + 0xc + uVar25 * 4);
              uVar25 = uVar25 + 4;
            } while (uVar17 != uVar25);
          }
        }
LAB_014a999c:
        FUN_015c13f0(lVar13 + uVar11 * 4,*(float *)(lVar13 + uVar11 * 4) * g_02390120);
        uVar19 = iVar37 + iVar16;
        iVar35 = uVar34 - iVar16;
        if (iVar35 <= (int)uVar19) goto LAB_014a9580;
        uVar17 = (uint64_t)(int)uVar19;
        fVar40 = *(float *)(lVar13 + uVar17 * 4);
        fVar39 = fVar40 - *(float *)(lVar13 + -4 + uVar17 * 4);
        uVar31 = (iVar16 - uVar8) + iVar37;
        iVar37 = iVar37 + iVar16 + uVar8 + -1;
        uVar34 = uVar19;
        fVar43 = 0.0;
        do {
          fVar45 = *(float *)(lVar13 + 4 + uVar17 * 4);
          bVar2 = fVar39 <= 0.0;
          fVar39 = fVar45 - fVar40;
          uVar24 = (uint)uVar17;
          if ((bVar2) && (0.0 < fVar39)) {
            fVar44 = 0.0;
            uVar21 = uVar24;
            fVar50 = g_02390124;
            if ((int64_t)(uVar17 - (int64_t)(int)uVar8) < (int64_t)(int)((uVar8 - 1) + uVar24)) {
              lVar10 = (int64_t)(int)uVar31;
              fVar44 = *(float *)(uVar12 + lVar10 * 4);
              uVar11 = uVar17 & 0xffffffff;
              if (fVar44 < g_02390124) {
                uVar11 = (uint64_t)uVar31;
                fVar50 = fVar44;
                uVar21 = uVar31;
              }
              if (fVar44 <= 0.0) {
                fVar44 = 0.0;
              }
              if ((uVar8 & 0x7fffffff) != 1) {
                pfVar27 = (float *)(uVar12 + 8 + lVar10 * 4);
                uVar25 = lVar10 + 1;
                do {
                  fVar49 = pfVar27[-1];
                  fVar42 = *pfVar27;
                  if (fVar49 < fVar50) {
                    uVar11 = uVar25 & 0xffffffff;
                    fVar50 = fVar49;
                  }
                  if (fVar49 <= fVar44) {
                    fVar49 = fVar44;
                  }
                  uVar20 = (int)uVar25 + 1;
                  uVar21 = (uint)uVar11;
                  if (fVar42 < fVar50) {
                    uVar11 = (uint64_t)uVar20;
                    fVar50 = fVar42;
                    uVar21 = uVar20;
                  }
                  fVar44 = fVar42;
                  if (fVar42 <= fVar49) {
                    fVar44 = fVar49;
                  }
                  uVar25 = uVar25 + 2;
                  pfVar27 = pfVar27 + 2;
                } while (iVar37 != (int)uVar25);
              }
            }
            if ((((int)uVar19 <= (int)uVar21) && ((int)uVar21 < iVar35)) &&
               ((g_023b81d4 <
                 *(float *)(lVar13 + (int64_t)(int)uVar21 * 4) -
                 *(float *)(uVar12 + (int64_t)(int)uVar21 * 4) || (g_02421228 < fVar44 - fVar50))
               )) {
              uVar15 = FUN_014328b0((double)(int)uVar21,SUB84(g_0238fee8,0));
              local_90 = local_80;
              lVar10 = local_58._0_8_;
              if (local_78 == '\0') {
                if (local_80 != (void*******)0x0) {
                  uVar15 = FUN_00d50b00();
                }
              }
              else {
                local_78 = '\0';
              }
              FUN_00d23370(uVar15,local_a0 + 1);
              if (local_90 != (void*******)0x0) {
                FUN_00d50b20();
              }
              if ((local_78 != '\0') && (local_80 != (void*******)0x0)) {
                FUN_00d50b20();
              }
              goto LAB_014a9d13;
            }
          }
          fVar44 = fVar40 - *(float *)(uVar12 + uVar17 * 4);
          uVar17 = uVar17 + 1;
          if (fVar44 <= fVar43) {
            fVar44 = fVar43;
            uVar24 = uVar34;
          }
          uVar34 = uVar24;
          uVar31 = uVar31 + 1;
          iVar37 = iVar37 + 1;
          fVar40 = fVar45;
          fVar43 = fVar44;
        } while ((int64_t)uVar17 < (int64_t)iVar35);
        lVar10 = local_58._0_8_;
        if (g_02421228 < fVar44) {
          uVar15 = FUN_014328b0((double)(int)uVar34,SUB84(g_0238fee8,0));
          local_90 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (void*******)0x0) {
              uVar15 = FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d23370(uVar15,local_a0 + 1);
          if (local_90 != (void*******)0x0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (void*******)0x0)) {
            FUN_00d50b20();
          }
LAB_014a9d13:
          local_a0 = local_a0 + -1;
        }
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 < *(int *)((int64_t)local_70 + 0xc));
  }
  local_58._0_8_ = lVar10;
  fVar40 = (float)FUN_0149bfe0(0,pppppppuVar38);
  if (0 < *(int *)((int64_t)local_70 + 0xc)) {
    fVar43 = g_02394214;
    if (g_02394214 <= fVar40 * in_XMM5_Da) {
      fVar43 = fVar40 * in_XMM5_Da;
    }
    lVar10 = 0;
    do {
      lVar13 = local_70[2];
      lVar14 = *(int64_t *)(lVar13 + lVar10 * 8);
      if (local_58._0_8_ == lVar14) {
        if (((char)local_68 == '\0') && (local_58._0_8_ != 0)) {
          local_68 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
          local_90 = (void*******)0x0;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar14 != 0) {
          local_90 = (void*******)(local_68 & 0xffffffff);
          lVar13 = FUN_00d50b00();
        }
        if (((char)local_68 == '\0') || (local_58._0_8_ == 0)) {
          local_68 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
          local_58._0_8_ = lVar14;
        }
        else {
          local_90 = (void*******)(local_68 & 0xffffffff);
          local_58._0_8_ = lVar14;
          uVar15 = FUN_00d50b20();
          local_68 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
        }
      }
      uVar36 = (undefined7)((uint64_t)local_90 >> 8);
      lVar13 = local_38;
      if (lVar10 < (int64_t)*(int *)((int64_t)local_70 + 0xc) + -1) {
        lVar14 = *(int64_t *)(local_70[2] + 8 + lVar10 * 8);
        if (local_38 == lVar14) {
          if ((char)local_40 != '\0') {
            local_90 = (void*******)(local_40 & 0xffffffff);
            goto LAB_014a9f22;
          }
          if (local_38 == 0) {
            local_90 = (void*******)(local_40 & 0xffffffff);
            goto LAB_014a9f22;
          }
          local_40 = 0;
          FUN_00d50b00();
          iVar16 = (int)(*(double *)(local_58._0_8_ + 0x10) + g_023942d0);
          local_90 = (void*******)CONCAT71(uVar36,1);
        }
        else {
          if (lVar14 == 0) {
            lVar14 = 0;
          }
          else {
            FUN_00d50b00();
            lVar13 = local_38;
          }
joined_r0x014a9ea0:
          local_90 = (void*******)CONCAT71(uVar36,1);
          local_38 = lVar14;
          if (((char)local_40 != '\0') &&
             (local_90 = (void*******)CONCAT71(uVar36,1), lVar13 != 0)) {
            FUN_00d50b20();
            local_38 = lVar14;
          }
LAB_014a9f22:
          iVar16 = (int)(*(double *)(local_58._0_8_ + 0x10) + g_023942d0);
          if (local_38 == 0) {
            local_40 = (uint64_t)local_90 & 0xffffffff;
            goto LAB_014a9f79;
          }
        }
        uVar8 = (uint)(*(double *)(local_38 + 0x10) + g_023942d0);
        local_40 = (uint64_t)local_90 & 0xffffffff;
        if (g_02390448 <= *(double *)(local_58._0_8_ + 0x18)) {
LAB_014a9f97:
          if (iVar16 < (int)uVar8) {
            lVar13 = 0;
            do {
              if (fVar43 < *(float *)((int64_t)iVar16 * 4 + uVar12 + lVar13 * 4))
              goto LAB_014a9db8;
              lVar13 = lVar13 + 1;
            } while (uVar8 - iVar16 != (int)lVar13);
          }
          *(void*)(local_58._0_8_ + 0x18) = 0xbff0000000000000;
        }
      }
      else {
        if (local_38 != 0) {
          lVar14 = 0;
          goto joined_r0x014a9ea0;
        }
        iVar16 = (int)(*(double *)(local_58._0_8_ + 0x10) + g_023942d0);
LAB_014a9f79:
        local_38 = 0;
        uVar8 = in_R9D;
        if (g_02390448 <= *(double *)(local_58._0_8_ + 0x18)) goto LAB_014a9f97;
      }
LAB_014a9db8:
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((int64_t)local_70 + 0xc));
  }
  FUN_00d216c0();
  if (0 < *(int *)((int64_t)local_70 + 0xc)) {
    param_1 = g_0238fee8 / param_1;
    lVar10 = 0;
    uVar17 = local_40 & 0xffffffff;
    do {
      lVar13 = local_70[2];
      lVar14 = *(int64_t *)(lVar13 + lVar10 * 8);
      uVar11 = uVar17;
      if (local_58._0_8_ == lVar14) {
        if (((char)local_68 == '\0') && (local_58._0_8_ != 0)) {
          local_68 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
          FUN_00d50b00();
        }
LAB_014aa0f0:
        if (0.0 < *(double *)(local_58._0_8_ + 0x18) || *(double *)(local_58._0_8_ + 0x18) == 0.0) {
LAB_014aa12c:
          lVar13 = local_38;
          lVar14 = (int64_t)*(int *)((int64_t)local_70 + 0xc) + -1;
          cVar33 = (char)uVar17;
          if (lVar10 < lVar14) {
            lVar26 = *(int64_t *)(local_70[2] + 8 + lVar10 * 8);
            uVar36 = (undefined7)((uint64_t)local_70[2] >> 8);
            if (local_38 == lVar26) {
              local_40 = uVar17;
              if ((cVar33 != '\0') || (local_38 == 0)) goto LAB_014aa199;
              local_40 = CONCAT71(uVar36,1);
              FUN_00d50b00();
            }
            else {
              if (lVar26 != 0) {
                lVar14 = FUN_00d50b00();
                lVar13 = lVar26;
                goto LAB_014aa17d;
              }
              lVar13 = 0;
              local_40 = CONCAT71(uVar36,1);
              if (cVar33 == '\0') goto LAB_014aa199;
LAB_014aa188:
              if (local_38 != 0) {
                FUN_00d50b20();
              }
LAB_014aa199:
              if (lVar13 == 0) goto LAB_014aa1de;
            }
            dVar6 = *(double *)(lVar13 + 0x10);
          }
          else {
            lVar13 = 0;
            local_40 = uVar17;
            if (local_38 != 0) {
LAB_014aa17d:
              local_40 = CONCAT71((int7)((uint64_t)lVar14 >> 8),1);
              if (cVar33 != '\0') goto LAB_014aa188;
              goto LAB_014aa199;
            }
LAB_014aa1de:
            lVar13 = 0;
            dVar6 = (double)(int)(in_R9D - 1);
          }
          local_38 = lVar13;
          FUN_01432380(*(double *)(local_58._0_8_ + 0x10) * (double)(float)param_1,
                       SUB84(dVar6 * (double)(float)param_1,0));
          pppppppuVar38 = local_80;
          if (local_78 == '\0') {
            if (local_80 != (void*******)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_78 = '\0';
          }
          FUN_00d21140();
          if (pppppppuVar38 != (void*******)0x0) {
            FUN_00d50b20();
          }
          if ((local_78 != '\0') && (local_80 != (void*******)0x0)) {
            FUN_00d50b20();
          }
          uVar17 = local_40 & 0xffffffff;
          uVar11 = local_40;
        }
      }
      else {
        if (lVar14 != 0) {
          lVar13 = FUN_00d50b00();
        }
        if (((char)local_68 != '\0') && (local_58._0_8_ != 0)) {
          local_58._0_8_ = lVar14;
          uVar15 = FUN_00d50b20();
          local_68 = CONCAT71((int7)((uint64_t)uVar15 >> 8),1);
          goto LAB_014aa0f0;
        }
        local_68 = CONCAT71((int7)((uint64_t)lVar13 >> 8),1);
        local_58._0_8_ = lVar14;
        if (0.0 < *(double *)(lVar14 + 0x18) || *(double *)(lVar14 + 0x18) == 0.0)
        goto LAB_014aa12c;
      }
      local_40 = uVar11;
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)((int64_t)local_70 + 0xc));
  }
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  FUN_00e83070();
  FUN_00d50b20();
  uVar15 = local_58._0_8_;
  if (((char)local_40 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_68 != '\0') && (uVar15 != 0)) {
    FUN_00d50b20();
  }
  return;
}

