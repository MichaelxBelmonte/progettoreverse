// Function: FUN_00942a9c
// Address: 00942a9c
// Size: 3086 bytes
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


void FUN_00942a9c(uint64_t param_1,uint64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int iVar7;
  uint64_t uVar8;
  string *this;
  void *pvVar9;
  string *psVar10;
  int64_t arg1;
  int64_t this_ptr;
  int64_t lVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  void*local_868;
  int local_860;
  uint32_t uStack_85c;
  void*local_858;
  uint64_t local_4ac;
  int local_4a4;
  int64_t local_a0;
  
  lVar11 = *(int64_t *)(this_ptr + 8);
  lVar1 = *(int64_t *)(this_ptr + 0x10);
  if (lVar11 != lVar1) {
    bVar14 = false;
    do {
      if ((*(char *)(lVar11 + 0x58) != '\0') &&
         ((!bVar14 || (bVar14 = true, *(char *)(lVar11 + 0x48) < '\0')))) {
        iVar7 = 0;
        if (*(char *)(lVar11 + 0x37d) != '\0') {
          *(void*)(lVar11 + 0xe3) = 1;
          *(void*)(lVar11 + 0x40) = 1;
          *(void*)(lVar11 + 0xb8) = 0;
          if (*(char *)(lVar11 + 0xe2) == '\0') {
            lVar3 = FUN_009f3f64();
            lVar4 = FUN_009f3f64();
            lVar2 = FUN_009585b8();
            if ((((lVar3 == lVar2) || (lVar2 = FUN_009585b8(), lVar4 == lVar2)) || (lVar4 <= lVar3))
               || (lVar4 < arg1)) {
              *(void*)(lVar11 + 0xe3) = 0;
              *(void*)(lVar11 + 0x40) = 4;
              if (param_3 == (int64_t *)0x0) goto LAB_009433f2;
              lVar3 = *(int64_t *)(lVar11 + 0x38);
              if ((lVar3 == 0x2000) || (iVar7 = 0, lVar3 == 0x80)) {
                lVar3 = *param_3;
                lVar4 = param_3[1];
                if (lVar3 != lVar4) {
                  bVar14 = false;
                  do {
                    FUN_00900250();
                    if (((local_860 == 9) && ((int)local_4ac == *(int *)(lVar11 + 8))) &&
                       (local_4ac._4_4_ == *(int *)(lVar11 + 0xc))) {
                      bVar13 = true;
                      bVar12 = true;
                      if (local_4a4 != *(int *)(lVar11 + 0x10)) goto LAB_00942cc2;
                    }
                    else {
LAB_00942cc2:
                      bVar13 = false;
                      bVar12 = bVar14;
                    }
                    FUN_008ffc2c();
                  } while ((!bVar13) &&
                          (bVar13 = lVar4 + -0x760 != lVar3, lVar3 = lVar3 + 0x760, bVar14 = bVar12,
                          bVar13));
                  iVar7 = 0;
                  if (bVar12) goto LAB_009433f8;
                }
                local_868 = &g_0251c820;
                local_858 = &g_0251c6f0;
                uVar8 = 0xffffffffffffffff;
                ___bzero();
                ___bzero();
                this = (string *)CONCAT62((int6)((uint64_t)uVar8 >> 0x10),1);
                psVar10 = (string *)&LAB_01010101;
                ___bzero();
                local_860 = 9;
                std::string::operator=(this,psVar10);
                local_4ac = *(void*)(lVar11 + 8);
                local_4a4 = *(int *)(lVar11 + 0x10);
                FUN_008f6a12();
                lVar3 = param_3[1];
                if (lVar3 == param_3[2]) {
                  lVar3 = (lVar3 - *param_3 >> 5) * -0x34115b1e5f75270d;
                  if (0x22b63cbeea4e1a < lVar3 + 1U) {
                                        std::__vector_base_common<true>::__throw_length_error();
                  }
                  FUN_008cde30(param_3 + 2,lVar3);
                  FUN_00900250();
                  FUN_0090dc60();
                  FUN_008cdea0();
                }
                else {
                  FUN_00900250();
                  param_3[1] = lVar3 + 0x760;
                }
                FUN_008ffc2c();
                iVar7 = 0;
                goto LAB_009433f8;
              }
            }
            else {
              if (arg1 < lVar3) {
                *(void*)(lVar11 + 0xe3) = 0;
                *(void*)(lVar11 + 0x40) = 8;
                iVar7 = 1;
              }
              else {
                FUN_0094ca28(lVar4,&stack0xffffffffffffff90);
                FUN_009f3a8b();
                *(int64_t *)(lVar11 + 0xb8) = local_a0;
LAB_009433f2:
                iVar7 = 0;
              }
LAB_009433f8:
              lVar3 = *(int64_t *)(lVar11 + 0x38);
            }
            if ((((lVar3 == 0x2000) || (lVar3 == 0x80)) && (*(char *)(lVar11 + 0xeb) != '\0')) &&
               (*(char *)(lVar11 + 0xea) != '\0')) {
              FUN_00938842();
            }
          }
          else {
            *(void*)(lVar11 + 0xe3) = 0;
            *(void*)(lVar11 + 0x40) = 4;
            *(void*)(this_ptr + 0x21) = 1;
          }
        }
        if (*(char *)(lVar11 + 0x37f) != '\0') {
          local_a0 = FUN_009f3f64();
          lVar3 = FUN_009f3f64();
          *(void*)(lVar11 + 0x1d3) = 0;
          lVar4 = FUN_009585b8();
          if (local_a0 == lVar4) {
            bVar14 = false;
            lVar4 = FUN_009585b8();
            if (lVar3 != lVar4) {
              if ((*(byte *)(lVar11 + 0x178) & 1) == 0) {
                uVar5 = (uint64_t)(*(byte *)(lVar11 + 0x178) >> 1);
              }
              else {
                uVar5 = *(uint64_t *)(lVar11 + 0x180);
              }
              bVar14 = uVar5 == 0;
            }
          }
          else {
            if ((*(byte *)(lVar11 + 400) & 1) == 0) {
              uVar5 = (uint64_t)(*(byte *)(lVar11 + 400) >> 1);
            }
            else {
              uVar5 = *(uint64_t *)(lVar11 + 0x198);
            }
            if (uVar5 == 0) {
              bVar14 = true;
            }
            else {
              bVar14 = false;
              lVar4 = FUN_009585b8();
              if (lVar3 != lVar4) {
                bVar14 = local_a0 < lVar3;
              }
            }
          }
          *(bool *)(lVar11 + 0x1d3) = bVar14;
          if (param_2 != 0) {
            lVar4 = FUN_009585b8();
            if (local_a0 == lVar4) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_009f39a9();
            }
            lVar4 = FUN_009585b8();
            uVar6 = 0xffffffffffffffff;
            if (lVar3 != lVar4) {
              uVar6 = FUN_009f39a9();
            }
            if ((param_2 < uVar5) || (uVar6 < param_2)) {
              *(void*)(lVar11 + 0x1d3) = 0;
              *(void*)(lVar11 + 0x50) = 0;
              *(void*)(lVar11 + 0x40) = 4;
            }
            pvVar9 = (void *)((int64_t)&MACH_HEADER.magic + 1);
            FUN_0097e7bc(1,1);
            FUN_00953fa0();
            FUN_009f4dea();
            if ((*(byte *)(lVar11 + 0x1b0) & 1) != 0) {
              operator_delete(pvVar9);
            }
            *(void**)(lVar11 + 0x1c0) = local_858;
            *(uint64_t *)(lVar11 + 0x1b8) = CONCAT44(uStack_85c,local_860);
            *(void**)(lVar11 + 0x1b0) = local_868;
            *(void*)(lVar11 + 0x1d9) = 1;
          }
        }
        if (((*(char *)(lVar11 + 0x37d) != '\0') && (*(char *)(lVar11 + 0xe3) == '\0')) ||
           ((bVar14 = true, *(char *)(lVar11 + 0x37f) != '\0' && (*(char *)(lVar11 + 0x1d3) == '\0')
            ))) {
          if (iVar7 < *(int *)(lVar11 + 0x50)) {
            *(int *)(lVar11 + 0x50) = iVar7;
          }
          if (iVar7 < *(int *)(this_ptr + 0x24)) {
            *(int *)(this_ptr + 0x24) = iVar7;
          }
          bVar14 = true;
          if (*(char *)(this_ptr + 0x20) != '\0') {
            *(void*)(this_ptr + 0x20) = 0;
          }
        }
      }
      lVar11 = lVar11 + 0x390;
    } while (lVar11 != lVar1);
  }
  return;
}

