// Function: FUN_01ac0bd0
// Address: 01ac0bd0
// Size: 18564 bytes
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


uint64_t FUN_01ac0bd0(uint64_t param_1,uint64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  void*puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  code *pcVar21;
  char cVar22;
  int iVar23;
  int iVar24;
  void* pVar25;
  void *pvVar26;
  int64_t lVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  char *pcVar30;
  uint64_t uVar31;
  void*puVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  void* pVar36;
  uint64_t uVar37;
  char *pcVar38;
  char *pcVar39;
  char *pcVar40;
  byte bVar41;
  char cVar42;
  uint uVar43;
  int64_t lVar44;
  int64_t lVar45;
  int64_t *plVar46;
  int64_t *arg1;
  uint64_t uVar47;
  uint64_t uVar48;
  void*puVar49;
  int64_t *this_ptr;
  int64_t lVar50;
  uint64_t uVar51;
  int64_t lVar52;
  size_t sVar53;
  uint64_t uVar54;
  uint64_t uVar55;
  uint64_t uVar56;
  uint64_t uVar57;
  uint64_t uVar58;
  uint64_t uVar59;
  uint64_t uVar60;
  int64_t lVar61;
  bool bVar62;
  bool bVar63;
  int iVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  uint32_t uVar68;
  uint64_t uVar69;
  int iVar88;
  uint64_t in_XMM0_Qb;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar70 [16];
  uint8_t auVar71 [16];
  uint8_t auVar72 [16];
  int iVar86;
  int iVar90;
  int iVar91;
  uint8_t auVar73 [16];
  int iVar92;
  uint8_t auVar74 [16];
  float extraout_XMM0_Db;
  uint8_t auVar75 [16];
  uint8_t auVar76 [16];
  uint8_t auVar77 [16];
  uint8_t auVar78 [16];
  uint8_t auVar79 [16];
  uint8_t auVar80 [16];
  uint64_t extraout_XMM0_Qb_02;
  uint8_t auVar81 [16];
  uint8_t auVar82 [16];
  uint8_t auVar83 [16];
  uint8_t auVar84 [16];
  int iVar87;
  int iVar89;
  int iVar93;
  int iVar94;
  uint8_t auVar85 [16];
  float fVar95;
  uint8_t in_XMM1 [16];
  uint8_t auVar96 [16];
  uint8_t auVar97 [16];
  uint8_t auVar98 [16];
  uint8_t auVar99 [16];
  uint8_t auVar100 [16];
  uint8_t auVar101 [16];
  uint8_t auVar102 [16];
  uint8_t auVar103 [16];
  uint8_t auVar104 [16];
  uint8_t auVar105 [16];
  uint8_t auVar106 [16];
  uint8_t auVar107 [16];
  uint8_t auVar108 [16];
  uint8_t auVar109 [16];
  uint8_t auVar110 [16];
  uint8_t auVar111 [16];
  uint8_t in_XMM3 [16];
  uint8_t auVar112 [16];
  uint8_t auVar113 [16];
  uint8_t auVar114 [16];
  uint8_t auVar115 [16];
  uint8_t auVar116 [16];
  uint8_t auVar117 [16];
  void* local_140;
  float local_118;
  uint local_10c;
  int local_f8;
  float fStack_f4;
  uint32_t uStack_ec;
  char *local_d0;
  float local_c8;
  uint8_t local_a8 [8];
  uint64_t uStack_a0;
  int64_t local_98;
  char local_90;
  void* local_70;
  char *local_68;
  uint64_t local_50;
  char *local_48;
  char local_40;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_03;
  
  uStack_a0 = in_XMM0_Qb;
  local_a8 = (uint8_t  [8])param_1;
  auVar96 = _local_a8;
  (**(code **)(*this_ptr + 0x640))();
  FUN_01e3f820();
  (**(code **)(*(int64_t *)local_48 + 0x3d0))();
  if ((local_40 != '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b20();
  }
  *(void*)((int64_t)this_ptr + 0x1bc) = 0xffffffff;
  plVar1 = this_ptr + 0x29;
  plVar46 = plVar1;
  pvVar26 = _pthread_getspecific((void*)plVar1);
  pVar25 = (void*)plVar46;
  if (pvVar26 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015b7b80();
  if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
    FUN_00d50b00();
  }
  pvVar26 = _pthread_getspecific(pVar25);
  if (pvVar26 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar23 = FUN_015b7ba0();
  iVar24 = FUN_01d3a5a0();
  if ((iVar24 == 1) && (iVar24 = FUN_01d3b630(), iVar24 == 1)) {
    pvVar26 = _pthread_getspecific(pVar25);
    if ((pvVar26 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
      pVar25 = (void*)local_48;
    }
    cVar22 = FUN_017f2970();
    if (cVar22 != '\0') {
      pvVar26 = _pthread_getspecific(pVar25);
      if ((pvVar26 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
        pVar25 = (void*)local_48;
      }
      cVar22 = FUN_017f2980();
      if (cVar22 == '\0') {
        pvVar26 = _pthread_getspecific(pVar25);
        if (pvVar26 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar28 = FUN_015b7bb0();
        pvVar26 = _pthread_getspecific(pVar25);
        if (pvVar26 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017ed3a0();
        if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
          FUN_00d50b00();
        }
        sVar53 = (size_t)param_3;
        local_a8._0_4_ = (uint32_t)param_1;
        if (-1 < (int)*(uint *)((int64_t)this_ptr + 0x19c)) {
          lVar27 = 0;
          do {
            if ((*(float *)(*(int64_t *)(this_ptr[0x2f] + 0x10) + lVar27 * 4) <=
                 (float)local_a8._0_4_) &&
               ((float)local_a8._0_4_ <
                *(float *)(*(int64_t *)(this_ptr[0x2f] + 0x10) + 4 + lVar27 * 4))) {
              *(int *)((int64_t)this_ptr + 0x1bc) = (int)lVar27;
              break;
            }
            lVar27 = lVar27 + 1;
          } while ((uint64_t)*(uint *)((int64_t)this_ptr + 0x19c) + 1 != lVar27);
        }
        local_70 = (void*)uVar28;
        auVar100._4_12_ = auVar96._4_12_;
        if ((int)this_ptr[0x33] != 3) {
          if ((int)this_ptr[0x33] == 0) {
            *(void*)((int64_t)this_ptr + 0x1bc) = 0xffffffff;
LAB_01ac10a2:
            ___bzero();
            local_f8 = -1;
            bVar63 = false;
            local_50._0_4_ = -NAN;
LAB_01ac10e0:
            (**(code **)(*this_ptr + 0x658))();
            pcVar40 = (char *)*arg1;
            if (pcVar40 == local_48) {
              if (((char)arg1[1] != '\0') || (local_48 == (char *)0x0)) goto LAB_01ac1191;
              if (local_40 == '\0') {
                FUN_00d50b00();
                goto LAB_01ac118b;
              }
              *(void*)(arg1 + 1) = 1;
            }
            else {
              lVar27 = arg1[1];
              if (local_40 == '\0') {
                if (local_48 != (char *)0x0) {
                  FUN_00d50b00();
                }
                *arg1 = (int64_t)local_48;
                if (((char)lVar27 != '\0') && (pcVar40 != (char *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01ac118b:
                *(void*)(arg1 + 1) = 1;
LAB_01ac1191:
                lVar27 = *arg1;
                if ((local_40 != '\0') && (local_48 != (char *)0x0)) {
                  FUN_00d50b20();
                }
                pcVar40 = (char *)0x0;
                if (lVar27 == 0) goto LAB_01ac13a8;
                pcVar40 = (char *)*arg1;
              }
              else {
                *arg1 = (int64_t)local_48;
                pcVar38 = local_48;
                if (((char)lVar27 != '\0') && (pcVar40 != (char *)0x0)) {
                  FUN_00d50b20();
                  pcVar38 = (char *)*arg1;
                }
                pcVar40 = pcVar38;
                *(void*)(arg1 + 1) = 1;
                if (pcVar40 == (char *)0x0) goto LAB_01ac13a8;
              }
            }
            iVar23 = FUN_01d3a5a0();
            if ((iVar23 == 6) && (iVar23 = FUN_01d3b630(), iVar23 == 1)) goto LAB_01ac13a8;
            iVar23 = FUN_01d3a5a0();
            if (iVar23 == 5) {
              FUN_01d3abf0();
              uVar69 = FUN_01e466c0();
              fVar66 = (float)uVar69;
              auVar96._8_4_ = (int)extraout_XMM0_Qb;
              auVar96._0_8_ = uVar69;
              auVar96._12_4_ = (int)((uint64_t)extraout_XMM0_Qb >> 0x20);
              uVar35 = *(uint *)((int64_t)this_ptr + 0x19c);
              uVar29 = (uint64_t)uVar35;
              pfVar5 = *(float **)(this_ptr[0x2f] + 0x10);
              fVar65 = *pfVar5;
              uVar28 = 0;
              if ((fVar65 <= fVar66) && (uVar28 = (uint64_t)uVar35, -1 < (int)uVar35)) {
                for (uVar37 = 0;
                    ((fVar66 < fVar65 || (uVar28 = uVar37, pfVar5[uVar37 + 1] <= fVar66)) &&
                    (uVar28 = uVar29, uVar29 != uVar37)); uVar37 = uVar37 + 1) {
                  fVar65 = pfVar5[uVar37 + 1];
                }
              }
              iVar24 = (int)uVar28;
              iVar23 = iVar24;
              if ((float)local_a8._0_4_ < fVar66) {
                local_50._0_4_ = (float)iVar24;
                iVar23 = local_f8;
              }
              bVar62 = local_f8 == -1;
              local_f8 = iVar23;
              if (bVar62) {
                local_50._0_4_ = (float)iVar24;
                local_f8 = iVar24;
              }
              if (g_02394298 < (float)((uint)((float)local_a8._0_4_ - fVar66) & g_02390140)) {
                bVar63 = true;
              }
              if (((bVar63) && (local_f8 != -1)) && (-1 < (int)uVar35)) {
                iVar23 = 0x1ff;
                uVar28 = 0;
                do {
                  pvVar26 = *(void **)(this_ptr[0x2e] + 0x10);
                  if (((int64_t)uVar28 < (int64_t)local_f8) ||
                     ((int64_t)(int)(float)local_50 < (int64_t)uVar28)) {
                    *(void*)((int64_t)pvVar26 + uVar28) = 0;
                    if ((uVar28 < 0x1ff) && (uVar28 == (uVar29 & 0xffffffff))) {
                      ___bzero();
                    }
                  }
                  else {
                    *(void*)((int64_t)pvVar26 + uVar28) = 1;
                    if ((uVar28 < 0x1ff) && (uVar28 == (uVar29 & 0xffffffff))) {
                      _memset(pvVar26,iVar23,(size_t)param_3);
                    }
                  }
                  uVar29 = (uint64_t)*(int *)((int64_t)this_ptr + 0x19c);
                  iVar23 = iVar23 + -1;
                  bVar62 = (int64_t)uVar28 < (int64_t)uVar29;
                  uVar28 = uVar28 + 1;
                } while (bVar62);
              }
              auVar104._4_12_ = auVar96._4_12_;
              auVar104._0_4_ = fVar66 - (float)local_a8._0_4_;
              auVar96 = blendps(auVar104,g_023907b0,0xe);
              uVar69 = FUN_00d05150();
              *(void*)((int64_t)this_ptr + 0x1a4) = uVar69;
              *(int64_t *)((int64_t)this_ptr + 0x1ac) = auVar96._0_8_;
              (**(code **)(*this_ptr + 0x620))();
            }
            goto LAB_01ac10e0;
          }
          if ((int64_t)*(int *)((int64_t)this_ptr + 0x1bc) == -1) goto LAB_01ac10a2;
          plVar1 = this_ptr + 0x2e;
          if ((*(char *)(*(int64_t *)(this_ptr[0x2e] + 0x10) +
                        (int64_t)*(int *)((int64_t)this_ptr + 0x1bc)) == '\0') &&
             (uVar29 = FUN_01d3b590(), (uVar29 & 4) == 0)) {
            ___bzero();
          }
          pvVar26 = (void *)(uint64_t)*(uint *)((int64_t)this_ptr + 0x1bc);
          lVar44 = (int64_t)(int)*(uint *)((int64_t)this_ptr + 0x1bc);
          lVar27 = *(int64_t *)(this_ptr[0x2e] + 0x10);
          if (*(char *)(lVar27 + lVar44) == '\0') {
LAB_01ac1060:
            *(void*)(lVar27 + lVar44) = 1;
            iVar24 = (int)pvVar26;
            if ((iVar24 < 0x1ff) && (*(int *)((int64_t)this_ptr + 0x19c) == iVar24)) {
              _memset(pvVar26,0x1ff - iVar24,sVar53);
            }
          }
          else {
            uVar29 = FUN_01d3b590();
            uVar35 = *(uint *)((int64_t)this_ptr + 0x1bc);
            pvVar26 = (void *)(uint64_t)uVar35;
            lVar44 = (int64_t)(int)uVar35;
            if ((uVar29 & 4) == 0) {
              lVar27 = *(int64_t *)(*plVar1 + 0x10);
              goto LAB_01ac1060;
            }
            *(void*)(*(int64_t *)(this_ptr[0x2e] + 0x10) + lVar44) = 0;
            if (((int)uVar35 < 0x1ff) && (*(uint *)((int64_t)this_ptr + 0x19c) == uVar35)) {
              ___bzero();
            }
          }
          pVar25 = (void*)pvVar26;
          iVar24 = FUN_01d3b620();
          if (iVar24 == 2) {
            if (iVar23 == 3) {
              FUN_00c8e690();
              if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
                FUN_00d50b00();
              }
              FUN_00c92170();
              ___bzero();
              lVar27 = *(int64_t *)(*plVar1 + 0x10);
              uVar29 = 0;
              do {
                if (*(char *)(lVar27 + uVar29) != '\0') {
                  *(void*)
                   (uVar29 + (uVar29 / 3 & 0xfffffffffffffffc) * -3 + *(int64_t *)(local_48 + 0x10)
                   ) = 1;
                }
                uVar29 = uVar29 + 1;
              } while (uVar29 != 0x66);
              ___bzero();
              pcVar40 = *(char **)(local_48 + 0x10);
              if (*pcVar40 != '\0') {
                uVar29 = 1;
                bVar41 = 0;
                do {
                  while( true ) {
                    bVar6 = bVar41 / 3 & 0xfc;
                    if ((byte)((char)uVar29 + bVar6 * -3) == '\x01') {
                      *(void*)(*(int64_t *)(*plVar1 + 0x10) + -1 + uVar29) = 1;
                    }
                    if ((byte)(bVar6 * -3 + (char)uVar29) == '\0') break;
                    uVar29 = uVar29 + 2;
                    bVar41 = bVar41 + 2;
                    if (uVar29 == 0x67) goto LAB_01ac1655;
                  }
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  uVar29 = uVar29 + 2;
                  bVar41 = bVar41 + 2;
                } while (uVar29 != 0x67);
              }
LAB_01ac1655:
              if (pcVar40[1] != '\0') {
                uVar29 = 0;
                do {
                  while( true ) {
                    cVar22 = (char)uVar29;
                    bVar41 = (byte)(((uint)uVar29 & 0xff) / 3) & 0xfc;
                    cVar42 = bVar41 * -3;
                    if ((byte)(cVar22 + bVar41 * -3) != '\x01') break;
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                    if ((char)(cVar42 + cVar22) != '\0') goto LAB_01ac1671;
LAB_01ac16a0:
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + 1 + uVar29) = 1;
                    uVar29 = uVar29 + 2;
                    if (uVar29 == 0x66) goto LAB_01ac16b6;
                  }
                  if ((char)(cVar42 + cVar22) == '\0') goto LAB_01ac16a0;
LAB_01ac1671:
                  uVar29 = uVar29 + 2;
                } while (uVar29 != 0x66);
              }
LAB_01ac16b6:
              if (pcVar40[2] != '\0') {
                uVar29 = 1;
                bVar41 = 0;
                do {
                  bVar6 = bVar41 / 3 & 0xfc;
                  if ((byte)((char)uVar29 + bVar6 * -3) == '\x03') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + -1 + uVar29) = 1;
                  }
                  if ((byte)(bVar6 * -3 + (char)uVar29) == '\x02') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  }
                  uVar29 = uVar29 + 2;
                  bVar41 = bVar41 + 2;
                } while (uVar29 != 0x67);
              }
              if (pcVar40[3] != '\0') {
                uVar29 = 0;
                do {
                  while( true ) {
                    bVar41 = (byte)(((uint)uVar29 & 0xff) / 3) & 0xfc;
                    cVar22 = (char)uVar29;
                    cVar42 = bVar41 * -3;
                    if ((byte)(cVar22 + bVar41 * -3) == '\x03') break;
                    if ((char)(cVar42 + cVar22) == '\x02') goto LAB_01ac1774;
LAB_01ac1742:
                    uVar29 = uVar29 + 2;
                    if (uVar29 == 0x66) goto LAB_01ac178a;
                  }
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  if ((char)(cVar42 + cVar22) != '\x02') goto LAB_01ac1742;
LAB_01ac1774:
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + 1 + uVar29) = 1;
                  uVar29 = uVar29 + 2;
                } while (uVar29 != 0x66);
              }
LAB_01ac178a:
              if (pcVar40[4] != '\0') {
                uVar29 = 1;
                bVar41 = 0;
                do {
                  bVar6 = bVar41 / 3 & 0xfc;
                  if ((byte)((char)uVar29 + bVar6 * -3) == '\x05') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + -1 + uVar29) = 1;
                  }
                  if ((byte)(bVar6 * -3 + (char)uVar29) == '\x04') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  }
                  uVar29 = uVar29 + 2;
                  bVar41 = bVar41 + 2;
                } while (uVar29 != 0x67);
              }
              if (pcVar40[5] != '\0') {
                uVar29 = 0;
                do {
                  while( true ) {
                    bVar41 = (byte)(((uint)uVar29 & 0xff) / 3) & 0xfc;
                    cVar22 = (char)uVar29;
                    cVar42 = bVar41 * -3;
                    if ((byte)(cVar22 + bVar41 * -3) == '\x05') break;
                    if ((char)(cVar42 + cVar22) == '\x04') goto LAB_01ac1848;
LAB_01ac1816:
                    uVar29 = uVar29 + 2;
                    if (uVar29 == 0x66) goto LAB_01ac185e;
                  }
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  if ((char)(cVar42 + cVar22) != '\x04') goto LAB_01ac1816;
LAB_01ac1848:
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + 1 + uVar29) = 1;
                  uVar29 = uVar29 + 2;
                } while (uVar29 != 0x66);
              }
LAB_01ac185e:
              if (pcVar40[6] != '\0') {
                uVar29 = 1;
                bVar41 = 0;
                do {
                  bVar6 = bVar41 / 3 & 0xfc;
                  if ((byte)((char)uVar29 + bVar6 * -3) == '\a') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + -1 + uVar29) = 1;
                  }
                  if ((byte)(bVar6 * -3 + (char)uVar29) == '\x06') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  }
                  uVar29 = uVar29 + 2;
                  bVar41 = bVar41 + 2;
                } while (uVar29 != 0x67);
              }
              if (pcVar40[7] != '\0') {
                uVar29 = 0;
                do {
                  while( true ) {
                    bVar41 = (byte)(((uint)uVar29 & 0xff) / 3) & 0xfc;
                    cVar22 = (char)uVar29;
                    cVar42 = bVar41 * -3;
                    if ((byte)(cVar22 + bVar41 * -3) == '\a') break;
                    if ((char)(cVar42 + cVar22) == '\x06') goto LAB_01ac191c;
LAB_01ac18ea:
                    uVar29 = uVar29 + 2;
                    if (uVar29 == 0x66) goto LAB_01ac1932;
                  }
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  if ((char)(cVar42 + cVar22) != '\x06') goto LAB_01ac18ea;
LAB_01ac191c:
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + 1 + uVar29) = 1;
                  uVar29 = uVar29 + 2;
                } while (uVar29 != 0x66);
              }
LAB_01ac1932:
              if (pcVar40[8] != '\0') {
                uVar29 = 1;
                bVar41 = 0;
                do {
                  bVar6 = bVar41 / 3 & 0xfc;
                  if ((byte)((char)uVar29 + bVar6 * -3) == '\t') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + -1 + uVar29) = 1;
                  }
                  if ((byte)(bVar6 * -3 + (char)uVar29) == '\b') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  }
                  uVar29 = uVar29 + 2;
                  bVar41 = bVar41 + 2;
                } while (uVar29 != 0x67);
              }
              if (pcVar40[9] != '\0') {
                uVar29 = 0;
                do {
                  while( true ) {
                    bVar41 = (byte)(((uint)uVar29 & 0xff) / 3) & 0xfc;
                    cVar22 = (char)uVar29;
                    cVar42 = bVar41 * -3;
                    if ((byte)(cVar22 + bVar41 * -3) == '\t') break;
                    if ((char)(cVar42 + cVar22) == '\b') goto LAB_01ac19f0;
LAB_01ac19be:
                    uVar29 = uVar29 + 2;
                    if (uVar29 == 0x66) goto LAB_01ac1a06;
                  }
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  if ((char)(cVar42 + cVar22) != '\b') goto LAB_01ac19be;
LAB_01ac19f0:
                  *(void*)(*(int64_t *)(*plVar1 + 0x10) + 1 + uVar29) = 1;
                  uVar29 = uVar29 + 2;
                } while (uVar29 != 0x66);
              }
LAB_01ac1a06:
              if (pcVar40[10] != '\0') {
                uVar29 = 1;
                bVar41 = 0;
                do {
                  bVar6 = bVar41 / 3 & 0xfc;
                  if ((byte)((char)uVar29 + bVar6 * -3) == '\v') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + -1 + uVar29) = 1;
                  }
                  if ((byte)(bVar6 * -3 + (char)uVar29) == '\n') {
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + uVar29) = 1;
                  }
                  uVar29 = uVar29 + 2;
                  bVar41 = bVar41 + 2;
                } while (uVar29 != 0x67);
              }
              if (pcVar40[0xb] != '\0') {
                lVar27 = 0;
                do {
                  while( true ) {
                    uVar35 = (uint)lVar27;
                    uVar33 = (uVar35 & 0xff) / 3 & 0xfffffffc;
                    uVar34 = uVar33 * -3;
                    if ((char)((char)lVar27 + (char)uVar33 * -3) != '\v') break;
                    *(void*)(*(int64_t *)(*plVar1 + 0x10) + lVar27) = 1;
                    uVar35 = (uVar34 & 0xff) + uVar35;
                    if ((char)uVar35 != '\n') goto LAB_01ac1a92;
LAB_01ac1ac3:
                    uVar29 = *(uint64_t *)(*plVar1 + 0x10);
                    *(void*)(uVar29 + 1 + lVar27) = 1;
                    lVar27 = lVar27 + 2;
                    if (lVar27 == 0x66) goto LAB_01ac1ad9;
                  }
                  uVar35 = (uVar34 & 0xff) + uVar35;
                  if ((char)uVar35 == '\n') goto LAB_01ac1ac3;
LAB_01ac1a92:
                  uVar29 = (uint64_t)uVar35;
                  lVar27 = lVar27 + 2;
                } while (lVar27 != 0x66);
              }
LAB_01ac1ad9:
              pVar25 = (void*)uVar29;
              if (local_48 != (char *)0x0) {
                FUN_00d50b20();
              }
            }
            else if (1 < (int)local_70) {
              lVar27 = *(int64_t *)(*plVar1 + 0x10);
              uVar29 = 1;
              do {
                if (*(char *)(lVar27 + uVar29) != '\0') {
                  iVar24 = (int)uVar29;
                  while (iVar24 = iVar24 * 2, iVar24 < (int)local_70) {
                    *(void*)(lVar27 + iVar24) = 1;
                  }
                }
                uVar29 = uVar29 + 1;
                pVar25 = local_70;
              } while (uVar29 != (uVar28 & 0xffffffff));
            }
          }
          (**(code **)(*this_ptr + 0x620))();
          uVar35 = FUN_01d3b590();
          uVar33 = FUN_01daf9a0();
          if ((uVar33 & ~uVar35) != 0) {
            fStack_f4 = in_XMM1._4_4_;
            uStack_ec = in_XMM1._12_4_;
            auVar105._4_4_ = fStack_f4;
            auVar105._0_4_ = fStack_f4;
            auVar105._8_4_ = uStack_ec;
            auVar105._12_4_ = uStack_ec;
            auVar96 = ZEXT416(g_023945e0 & (uint)(g_0240b530 * fStack_f4)) | g_023945f0;
            auVar98._4_12_ = auVar96._4_12_;
            auVar98._0_4_ = auVar96._0_4_ + g_0240b530 * fStack_f4;
            auVar96 = roundss(ZEXT816(0),auVar98,0xb);
            fVar65 = g_0241fd58;
            if (auVar96._0_4_ <= g_0241fd58) {
              fVar65 = auVar96._0_4_;
            }
            auVar106._4_12_ = auVar105._4_12_;
            auVar106._0_4_ = fStack_f4 - fVar65;
            lVar27 = *(int64_t *)(*plVar1 + 0x10);
            auVar71 = ZEXT816(0);
            lVar44 = 0;
            auVar99 = ZEXT816(0);
            auVar107 = auVar106;
            do {
              auVar96 = pmovzxbd(auVar107,*(void*)(lVar27 + lVar44));
              auVar107._0_4_ = auVar96._0_4_ + auVar71._0_4_;
              auVar107._4_4_ = auVar96._4_4_ + auVar71._4_4_;
              auVar107._8_4_ = auVar96._8_4_ + auVar71._8_4_;
              auVar107._12_4_ = auVar96._12_4_ + auVar71._12_4_;
              auVar96 = pmovzxbd(in_XMM3,*(void*)(lVar27 + 4 + lVar44));
              in_XMM3._0_4_ = auVar96._0_4_ + auVar99._0_4_;
              in_XMM3._4_4_ = auVar96._4_4_ + auVar99._4_4_;
              in_XMM3._8_4_ = auVar96._8_4_ + auVar99._8_4_;
              in_XMM3._12_4_ = auVar96._12_4_ + auVar99._12_4_;
              auVar96 = pmovzxbd(auVar71,*(void*)(lVar27 + 8 + lVar44));
              auVar100 = pmovzxbd(auVar99,*(void*)(lVar27 + 0xc + lVar44));
              auVar71._0_4_ = auVar96._0_4_ + auVar107._0_4_;
              auVar71._4_4_ = auVar96._4_4_ + auVar107._4_4_;
              auVar71._8_4_ = auVar96._8_4_ + auVar107._8_4_;
              auVar71._12_4_ = auVar96._12_4_ + auVar107._12_4_;
              auVar99._0_4_ = auVar100._0_4_ + in_XMM3._0_4_;
              auVar99._4_4_ = auVar100._4_4_ + in_XMM3._4_4_;
              auVar99._8_4_ = auVar100._8_4_ + in_XMM3._8_4_;
              auVar99._12_4_ = auVar100._12_4_ + in_XMM3._12_4_;
              lVar44 = lVar44 + 0x10;
            } while (lVar44 != 0x200);
            uVar35 = auVar99._12_4_ + auVar71._12_4_ + auVar99._4_4_ + auVar71._4_4_ +
                     auVar99._8_4_ + auVar71._8_4_ + auVar99._0_4_ + auVar71._0_4_;
            lVar44 = 0;
            do {
              if (*(char *)(lVar27 + lVar44) != '\0') goto LAB_01ac38c9;
              if (*(char *)(lVar27 + 1 + lVar44) != '\0') {
                lVar44 = lVar44 + 1;
                goto LAB_01ac38c9;
              }
              if (*(char *)(lVar27 + 2 + lVar44) != '\0') {
                lVar44 = lVar44 + 2;
                goto LAB_01ac38c9;
              }
              if (*(char *)(lVar27 + 3 + lVar44) != '\0') {
                lVar44 = lVar44 + 3;
                goto LAB_01ac38c9;
              }
              lVar44 = lVar44 + 4;
            } while (lVar44 != 0x200);
            lVar44 = 0xffffffff;
LAB_01ac38c9:
            lVar61 = 0x1ff;
            while (((*(char *)(lVar27 + lVar61) == '\0' && (*(char *)(lVar27 + -1 + lVar61) == '\0')
                    ) && (*(char *)(lVar27 + -2 + lVar61) == '\0'))) {
              if ((*(char *)(lVar27 + (uint64_t)((int)lVar61 - 3)) != '\0') ||
                 (lVar61 = lVar61 + -4, (int)lVar61 == -1)) break;
            }
            pVar25 = *(void* *)(this_ptr + 0x33);
            pVar36 = pVar25;
            if (pVar25 == 2) {
              if (*(char *)((int64_t)(int)local_70 + -1 + lVar27) == '\0') {
                local_140 = *(void* *)((int64_t)this_ptr + 0x1bc);
              }
              else {
                local_140 = FUN_00e7d780((float)(int)lVar44 * g_024112a4 * g_024112a4);
                if ((int)local_70 < (int)local_140) {
                  local_140 = local_70;
                }
              }
              pVar36 = local_140 - (int)lVar44;
            }
            pvVar26 = _pthread_getspecific(pVar36);
            if (pvVar26 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b93e0();
            if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
              FUN_00d50b00();
            }
            pvVar26 = _pthread_getspecific(pVar36);
            if (pvVar26 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b9950();
            if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
              FUN_00d50b00();
            }
            pvVar26 = _pthread_getspecific(pVar36);
            if (pvVar26 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015b82b0();
            if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
              FUN_00d50b00();
            }
            pvVar26 = _pthread_getspecific(pVar36);
            if (pvVar26 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_015ba4f0();
            if (local_90 == '\0') {
              if (local_98 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_90 = '\0';
            }
            FUN_00c8e4f0();
            if (local_40 == '\0') {
              if (local_48 != (char *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00c92170();
            FUN_00c92160();
            if (local_98 != 0) {
              FUN_00d50b20();
            }
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            FUN_00c8e690();
            if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            FUN_00c92160();
            ___bzero();
            FUN_00c8e690();
            if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
              FUN_00d50b00();
            }
            FUN_00c92170();
            FUN_00c92160();
            ___bzero();
            pcVar38 = (char *)(uVar28 & 0xffffffff);
            if (iVar23 == 3) {
              pcVar40 = pcVar38;
              pvVar26 = _pthread_getspecific(local_70);
              if ((pvVar26 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
                pcVar40 = local_48;
              }
              fVar65 = (float)FUN_017f2da0();
              pvVar26 = _pthread_getspecific((void*)pcVar40);
              if ((pvVar26 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
                pcVar40 = local_48;
              }
              iVar23 = FUN_017f2d90();
              lVar27 = 0;
              do {
                fVar66 = (float)_exp2f((float)((int)lVar27 + 0x23) * g_023908e0 * g_023941f4);
                *(float *)(*(int64_t *)(local_48 + 0x10) + lVar27 * 4) =
                     (fVar66 * g_023941f8) / (fVar65 * (float)iVar23);
                if (lVar27 != 0) {
                  pvVar26 = _pthread_getspecific((void*)pcVar40);
                  if (pvVar26 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_015b9640();
                }
                FUN_00aea610();
                fVar67 = (float)_powf();
                fVar66 = 0.0;
                if (0.0 <= fVar67 * auVar106._0_4_) {
                  fVar66 = fVar67 * auVar106._0_4_;
                }
                *(float *)(*(int64_t *)(local_48 + 0x10) + lVar27 * 4) = fVar66;
                lVar27 = lVar27 + 1;
              } while (lVar27 != 0x66);
            }
            else {
              pcVar40 = local_48 + 0x10;
              if (0 < (int)local_70) {
                plVar46 = (int64_t *)0x0;
                do {
                  *(float *)(*(int64_t *)(local_48 + 0x10) + (int64_t)plVar46 * 4) =
                       (float)(int)plVar46;
                  if (plVar46 != (int64_t *)0x0) {
                    pvVar26 = _pthread_getspecific((void*)pcVar40);
                    if (pvVar26 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_015b9640();
                  }
                  FUN_00aea610();
                  fVar66 = (float)_powf();
                  fVar65 = 0.0;
                  if (0.0 <= fVar66 * auVar106._0_4_) {
                    fVar65 = fVar66 * auVar106._0_4_;
                  }
                  *(float *)(*(int64_t *)(local_48 + 0x10) + (int64_t)plVar46 * 4) = fVar65;
                  plVar46 = (int64_t *)((int64_t)plVar46 + 1);
                } while ((int64_t *)pcVar38 != plVar46);
              }
            }
            local_d0 = local_48 + 0x10;
            local_a8._4_4_ = (uint32_t)(param_1 >> 0x20);
            lVar27 = (int64_t)(int)local_140;
            local_a8._0_4_ = local_a8._4_4_;
            local_118 = (float)local_a8._4_4_;
LAB_01ac40f4:
            (**(code **)(*this_ptr + 0x658))();
            pcVar40 = (char *)*arg1;
            if (pcVar40 == local_48) {
              if (((char)arg1[1] != '\0') || (local_48 == (char *)0x0)) goto LAB_01ac4198;
              if (local_40 == '\0') {
                FUN_00d50b00();
                goto LAB_01ac4192;
              }
              *(void*)(arg1 + 1) = 1;
            }
            else {
              lVar44 = arg1[1];
              if (local_40 == '\0') {
                if (local_48 != (char *)0x0) {
                  FUN_00d50b00();
                }
                *arg1 = (int64_t)local_48;
                if (((char)lVar44 != '\0') && (pcVar40 != (char *)0x0)) {
                  FUN_00d50b20();
                }
LAB_01ac4192:
                *(void*)(arg1 + 1) = 1;
LAB_01ac4198:
                lVar44 = *arg1;
                if ((local_40 != '\0') && (local_48 != (char *)0x0)) {
                  FUN_00d50b20();
                }
                pcVar40 = (char *)0x0;
                if (lVar44 == 0) goto LAB_01ac47b0;
                pcVar40 = (char *)*arg1;
              }
              else {
                *arg1 = (int64_t)local_48;
                pcVar39 = local_48;
                if (((char)lVar44 != '\0') && (pcVar40 != (char *)0x0)) {
                  FUN_00d50b20();
                  pcVar39 = (char *)*arg1;
                }
                pcVar40 = pcVar39;
                *(void*)(arg1 + 1) = 1;
                if (pcVar40 == (char *)0x0) goto LAB_01ac47b0;
              }
            }
            iVar23 = FUN_01d3a5a0();
            if ((iVar23 == 6) && (iVar23 = FUN_01d3b630(), iVar23 == 1)) goto LAB_01ac47b0;
            uVar33 = FUN_01d3b590();
            iVar23 = FUN_01d3a5a0();
            if (iVar23 == 5) {
              FUN_01d3abf0();
              FUN_01e466c0();
              if ((extraout_XMM0_Db != (float)local_a8._0_4_) ||
                 (NAN(extraout_XMM0_Db) || NAN((float)local_a8._0_4_))) {
                fVar65 = extraout_XMM0_Db - (float)local_a8._0_4_;
                if ((uVar33 & 8) != 0) {
                  fVar65 = (extraout_XMM0_Db - (float)local_a8._0_4_) * g_02391094;
                }
                if (uVar35 == 1) {
                  lVar44 = (int64_t)*(int *)((int64_t)this_ptr + 0x1bc);
                  lVar27 = *(int64_t *)(local_48 + 0x10);
                  if (*(float *)(lVar27 + lVar44 * 4) <= g_0240d16c) {
                    *(void*)(lVar27 + lVar44 * 4) = 0x3f800000;
                    *(void*)(*(int64_t *)local_d0 + lVar44 * 4) = 0x33d6bf95;
                    lVar27 = *(int64_t *)(local_48 + 0x10);
                    *(void*)(lVar27 + lVar44 * 4) = 0;
                    pvVar26 = _pthread_getspecific((void*)lVar27);
                    if (pvVar26 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_015b8540();
                    pvVar26 = _pthread_getspecific((void*)lVar27);
                    if (pvVar26 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_015ba560();
                    pvVar26 = _pthread_getspecific((void*)lVar27);
                    if (pvVar26 != (void *)0x0) {
                      FUN_00e8b990();
                    }
                    FUN_015ba4f0();
                    if (local_90 == '\0') {
                      if (local_98 != 0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_90 = '\0';
                    }
                    FUN_00c8e4f0();
                    if (local_40 == '\0') {
                      if (local_48 != (char *)0x0) {
                        FUN_00d50b00();
                      }
                    }
                    else {
                      local_40 = '\0';
                    }
                    FUN_00c92170();
                    FUN_00c92160();
                    FUN_00d50b20();
                    if (local_98 != 0) {
                      FUN_00d50b20();
                    }
                    if ((local_90 != '\0') && (local_98 != 0)) {
                      FUN_00d50b20();
                    }
                  }
                }
                local_118 = local_118 + fVar65;
                if (0 < (int)local_70) {
                  plVar46 = (int64_t *)0x0;
                  do {
                    if (*(char *)(*(int64_t *)(*plVar1 + 0x10) + (int64_t)plVar46) != '\0') {
                      fVar65 = g_02390124;
                      if (pVar25 == 2) {
                        fVar65 = (float)FUN_00e84a50();
                      }
                      if (1 < uVar35) {
                        fVar66 = (float)_powf();
                        fVar65 = fVar65 * fVar66;
                      }
                      fVar66 = fVar65 * ((float)local_a8._4_4_ - local_118) +
                               *(float *)(*(int64_t *)(local_48 + 0x10) + (int64_t)plVar46 * 4);
                      fVar65 = 0.0;
                      if (0.0 <= fVar66) {
                        fVar65 = fVar66;
                      }
                      auVar75 = auVar106;
                      if (fVar65 <= auVar106._0_4_) {
                        auVar75._4_12_ = auVar106._4_12_;
                        auVar75._0_4_ = fVar65;
                      }
                      fVar65 = g_0240d16c;
                      if (g_02394274 <= auVar75._0_4_) {
                        fVar65 = *(float *)(*(int64_t *)(local_48 + 0x10) + (int64_t)plVar46 * 4);
                        auVar76._4_12_ = auVar75._4_12_;
                        auVar76._0_4_ = auVar75._0_4_ / auVar106._0_4_;
                        auVar77._0_8_ = _logf(auVar76._0_8_);
                        auVar77._8_8_ = extraout_XMM0_Qb_00;
                        auVar78._4_12_ = auVar77._4_12_;
                        auVar78._0_4_ = (float)auVar77._0_8_ / g_0241c620;
                        auVar79._0_8_ = _expf(auVar78._0_8_);
                        auVar79._8_8_ = extraout_XMM0_Qb_01;
                        auVar80._4_12_ = auVar79._4_12_;
                        auVar80._0_4_ = (float)auVar79._0_8_ * g_023908e8 + g_02417668;
                        auVar81._0_8_ = FUN_00aea5e0(auVar80._0_8_);
                        auVar81._8_8_ = extraout_XMM0_Qb_02;
                        if (g_0239424c < fVar65) {
                          fVar66 = (float)auVar81._0_8_;
                          auVar81._0_4_ = fVar66 / fVar65;
                        }
                        fVar66 = auVar81._0_4_;
                        if (plVar46 != (int64_t *)0x0) {
                          pvVar26 = _pthread_getspecific((void*)lVar27);
                          if (pvVar26 != (void *)0x0) {
                            FUN_00e8b990();
                          }
                          fVar65 = (float)FUN_015b9640();
                          fVar66 = fVar66 / fVar65;
                        }
                        fVar65 = g_0240d16c;
                        if (g_0240d16c <= fVar66) {
                          fVar65 = fVar66;
                        }
                      }
                      *(float *)(*(int64_t *)local_d0 + (int64_t)plVar46 * 4) = fVar65;
                    }
                    plVar46 = (int64_t *)((int64_t)plVar46 + 1);
                  } while ((int64_t *)pcVar38 != plVar46);
                }
                pvVar26 = _pthread_getspecific((void*)lVar27);
                if (pvVar26 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_015b8540();
              }
              FUN_01abf3d0();
              local_a8._0_4_ = extraout_XMM0_Db;
            }
            goto LAB_01ac40f4;
          }
          pvVar26 = _pthread_getspecific(pVar25);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b9950();
          if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
            FUN_00d50b00();
          }
          pvVar26 = _pthread_getspecific(pVar25);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b7c80();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          FUN_00c8e4f0();
          if (local_40 == '\0') {
            if (local_48 != (char *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00c92170();
          FUN_00c92160();
          if (local_98 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          pvVar26 = _pthread_getspecific(pVar25);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b93b0();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          FUN_00c8e4f0();
          if (local_40 == '\0') {
            if (local_48 != (char *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          FUN_00c92170();
          FUN_00c92160();
          if (local_98 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          pvVar26 = _pthread_getspecific(pVar25);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015ba4f0();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          FUN_00c8e4f0();
          if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          if (local_98 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          if (0 < (int)local_70) {
            lVar27 = *(int64_t *)(*plVar1 + 0x10);
            uVar29 = 0;
            do {
              if (*(char *)(lVar27 + uVar29) != '\0') {
                *(void*)(*(int64_t *)(local_48 + 0x10) + uVar29 * 4) =
                     *(void*)(*(int64_t *)(local_48 + 0x10) + uVar29 * 4);
                *(void*)(*(int64_t *)(local_48 + 0x10) + uVar29 * 4) = 0x3f800000;
                *(void*)(*(int64_t *)(local_48 + 0x10) + uVar29 * 4) = 0x3f800000;
              }
              uVar29 = uVar29 + 1;
            } while ((uVar28 & 0xffffffff) != uVar29);
          }
          pvVar26 = _pthread_getspecific(local_70);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b7cb0();
          pvVar26 = _pthread_getspecific(local_70);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b92d0();
          pvVar26 = _pthread_getspecific(local_70);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015ba560();
          pcVar40 = local_48;
          if (local_48 != (char *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
            FUN_00d50b20();
            FUN_00d50b20();
          }
          goto LAB_01ac53a2;
        }
        iVar24 = *(int *)((int64_t)this_ptr + 0x1bc);
        lVar27 = (int64_t)iVar24;
        fVar65 = *(float *)(*(int64_t *)(this_ptr[0x2f] + 0x10) + lVar27 * 4);
        fVar65 = ((float)local_a8._0_4_ - fVar65) /
                 (*(float *)(*(int64_t *)(this_ptr[0x2f] + 0x10) + 4 + lVar27 * 4) - fVar65);
        if (iVar23 == 3) {
          auVar100._0_4_ = (fVar65 + (float)(iVar24 + 0x23)) * g_023908e0 * g_023941f4;
          fVar65 = (float)_exp2f();
          fVar65 = fVar65 * g_023941f8;
        }
        else {
          auVar100._0_4_ = fVar65 + (float)iVar24;
          fVar65 = auVar100._0_4_;
        }
        pcVar40 = *(char **)(this_ptr[0x2e] + 0x10);
        auVar70 = ZEXT816(0);
        lVar44 = 0xc;
        auVar97 = ZEXT816(0);
        do {
          auVar104 = pmovzxbd(auVar100,*(void*)(pcVar40 + lVar44 + -0xc));
          auVar100._0_4_ = (float)(auVar104._0_4_ + auVar70._0_4_);
          auVar100._4_4_ = auVar104._4_4_ + auVar70._4_4_;
          auVar100._8_4_ = auVar104._8_4_ + auVar70._8_4_;
          auVar100._12_4_ = auVar104._12_4_ + auVar70._12_4_;
          auVar104 = pmovzxbd(in_XMM3,*(void*)(pcVar40 + lVar44 + -8));
          in_XMM3._0_4_ = auVar104._0_4_ + auVar97._0_4_;
          in_XMM3._4_4_ = auVar104._4_4_ + auVar97._4_4_;
          in_XMM3._8_4_ = auVar104._8_4_ + auVar97._8_4_;
          in_XMM3._12_4_ = auVar104._12_4_ + auVar97._12_4_;
          auVar104 = pmovzxbd(auVar70,*(void*)(pcVar40 + lVar44 + -4));
          auVar98 = pmovzxbd(auVar97,*(void*)(pcVar40 + lVar44));
          auVar70._0_4_ = auVar104._0_4_ + (int)auVar100._0_4_;
          auVar70._4_4_ = auVar104._4_4_ + auVar100._4_4_;
          auVar70._8_4_ = auVar104._8_4_ + auVar100._8_4_;
          auVar70._12_4_ = auVar104._12_4_ + auVar100._12_4_;
          auVar97._0_4_ = auVar98._0_4_ + in_XMM3._0_4_;
          auVar97._4_4_ = auVar98._4_4_ + in_XMM3._4_4_;
          auVar97._8_4_ = auVar98._8_4_ + in_XMM3._8_4_;
          auVar97._12_4_ = auVar98._12_4_ + in_XMM3._12_4_;
          lVar44 = lVar44 + 0x10;
        } while (lVar44 != 0x20c);
        if ((uint)(auVar97._12_4_ + auVar70._12_4_ + auVar97._4_4_ + auVar70._4_4_ +
                  auVar97._8_4_ + auVar70._8_4_ + auVar97._0_4_ + auVar70._0_4_) < 3) {
LAB_01ac2297:
          ___bzero();
          (**(code **)(*this_ptr + 0x620))();
          pcVar40 = *(char **)(this_ptr[0x2e] + 0x10);
        }
        else {
          lVar44 = 0;
          do {
            if (pcVar40[lVar44] != '\0') goto LAB_01ac220d;
            if (pcVar40[lVar44 + 1] != '\0') {
              lVar44 = lVar44 + 1;
              goto LAB_01ac220d;
            }
            if (pcVar40[lVar44 + 2] != '\0') {
              lVar44 = lVar44 + 2;
              goto LAB_01ac220d;
            }
            if (pcVar40[lVar44 + 3] != '\0') {
              lVar44 = lVar44 + 3;
              goto LAB_01ac220d;
            }
            lVar44 = lVar44 + 4;
          } while (lVar44 != 0x200);
          lVar44 = 0xffffffff;
LAB_01ac220d:
          lVar61 = 0;
          do {
            iVar24 = (int)lVar61;
            if (pcVar40[lVar61 + 0x1ff] != '\0') {
              iVar24 = iVar24 + 0x1ff;
              goto LAB_01ac226a;
            }
            if (pcVar40[lVar61 + 0x1fe] != '\0') {
              iVar24 = iVar24 + 0x1fe;
              goto LAB_01ac226a;
            }
            if (pcVar40[lVar61 + 0x1fd] != '\0') {
              iVar24 = iVar24 + 0x1fd;
              goto LAB_01ac226a;
            }
            if (pcVar40[iVar24 + 0x1fc] != '\0') {
              iVar24 = iVar24 + 0x1fc;
              goto LAB_01ac226a;
            }
            lVar61 = lVar61 + -4;
          } while ((int)lVar61 != -0x200);
          iVar24 = -1;
LAB_01ac226a:
          iVar87 = (int)lVar44;
          if (iVar87 == -1) goto LAB_01ac2297;
          if (iVar87 <= iVar24) {
            lVar44 = (int64_t)iVar87;
            do {
              pcVar38 = pcVar40 + lVar44;
              if (*pcVar38 == '\0') break;
              bVar63 = iVar24 != lVar44;
              lVar44 = lVar44 + 1;
            } while (bVar63);
            if (*pcVar38 == '\0') goto LAB_01ac2297;
          }
          if (pcVar40[lVar27] == '\0') goto LAB_01ac2297;
        }
        auVar72 = (uint8_t  [16])0x0;
        lVar27 = 0;
        auVar101 = (uint8_t  [16])0x0;
        do {
          auVar104 = pmovzxbd(auVar100,*(void*)(pcVar40 + lVar27));
          auVar100._0_4_ = (float)(auVar104._0_4_ + auVar72._0_4_);
          auVar100._4_4_ = auVar104._4_4_ + auVar72._4_4_;
          auVar100._8_4_ = auVar104._8_4_ + auVar72._8_4_;
          auVar100._12_4_ = auVar104._12_4_ + auVar72._12_4_;
          auVar104 = pmovzxbd(in_XMM3,*(void*)(pcVar40 + lVar27 + 4));
          in_XMM3._0_4_ = auVar104._0_4_ + auVar101._0_4_;
          in_XMM3._4_4_ = auVar104._4_4_ + auVar101._4_4_;
          in_XMM3._8_4_ = auVar104._8_4_ + auVar101._8_4_;
          in_XMM3._12_4_ = auVar104._12_4_ + auVar101._12_4_;
          auVar104 = pmovzxbd(auVar72,*(void*)(pcVar40 + lVar27 + 8));
          auVar98 = pmovzxbd(auVar101,*(void*)(pcVar40 + lVar27 + 0xc));
          auVar72._0_4_ = auVar104._0_4_ + (int)auVar100._0_4_;
          auVar72._4_4_ = auVar104._4_4_ + auVar100._4_4_;
          auVar72._8_4_ = auVar104._8_4_ + auVar100._8_4_;
          auVar72._12_4_ = auVar104._12_4_ + auVar100._12_4_;
          auVar101._0_4_ = auVar98._0_4_ + in_XMM3._0_4_;
          auVar101._4_4_ = auVar98._4_4_ + in_XMM3._4_4_;
          auVar101._8_4_ = auVar98._8_4_ + in_XMM3._8_4_;
          auVar101._12_4_ = auVar98._12_4_ + in_XMM3._12_4_;
          lVar27 = lVar27 + 0x10;
        } while (lVar27 != 0x200);
        pcVar38 = (char *)0x0;
        do {
          if (pcVar40[(int64_t)pcVar38] != '\0') goto LAB_01ac2362;
          if ((pcVar40 + 1)[(int64_t)pcVar38] != '\0') {
            pcVar38 = pcVar38 + 1;
            goto LAB_01ac2362;
          }
          if ((pcVar40 + 2)[(int64_t)pcVar38] != '\0') {
            pcVar38 = pcVar38 + 2;
            goto LAB_01ac2362;
          }
          if ((pcVar40 + 3)[(int64_t)pcVar38] != '\0') {
            pcVar38 = pcVar38 + 3;
            goto LAB_01ac2362;
          }
          pcVar38 = pcVar38 + 4;
        } while (pcVar38 != section_000001f8.sectname + 8);
        pcVar38 = (char *)0xffffffff;
LAB_01ac2362:
        lVar27 = 0;
        pcVar39 = pcVar38;
        do {
          iVar24 = (int)lVar27;
          if (pcVar40[lVar27 + 0x1ff] != '\0') {
            iVar24 = iVar24 + 0x1ff;
            goto LAB_01ac23d1;
          }
          if (pcVar40[lVar27 + 0x1fe] != '\0') {
            iVar24 = iVar24 + 0x1fe;
            goto LAB_01ac23d1;
          }
          if (pcVar40[lVar27 + 0x1fd] != '\0') {
            iVar24 = iVar24 + 0x1fd;
            goto LAB_01ac23d1;
          }
          pcVar39 = (char *)(uint64_t)(iVar24 + 0x1fc);
          if (pcVar40[(int64_t)pcVar39] != '\0') {
            iVar24 = iVar24 + 0x1fc;
            goto LAB_01ac23d1;
          }
          lVar27 = lVar27 + -4;
        } while ((int)lVar27 != -0x200);
        iVar24 = -1;
LAB_01ac23d1:
        if ((uint)(auVar101._12_4_ + auVar72._12_4_ + auVar101._4_4_ + auVar72._4_4_ +
                  auVar101._8_4_ + auVar72._8_4_ + auVar101._0_4_ + auVar72._0_4_) < 3) {
          bVar63 = false;
        }
        else if (*pcVar40 == '\0') {
          bVar63 = true;
        }
        else {
          pcVar30 = (char *)0x0;
          do {
            pcVar39 = pcVar30;
            pcVar30 = pcVar39;
            if ((pcVar40 + 1)[(int64_t)pcVar39] == '\0') goto LAB_01ac2440;
            if ((pcVar40 + 2)[(int64_t)pcVar39] == '\0') {
              pcVar30 = pcVar39 + 1;
              goto LAB_01ac2440;
            }
            if ((pcVar40 + 3)[(int64_t)pcVar39] == '\0') {
              pcVar30 = pcVar39 + 2;
              goto LAB_01ac2440;
            }
            if (pcVar39 == section_000001f8.sectname + 4) {
              pcVar30 = section_000001f8.sectname + 7;
              goto LAB_01ac2440;
            }
            pcVar30 = pcVar39 + 4;
          } while ((pcVar40 + 4)[(int64_t)pcVar39] != '\0');
          pcVar30 = (char *)((uint64_t)pcVar39 | 3);
          pcVar39 = pcVar39 + 4;
LAB_01ac2440:
          bVar63 = pcVar30 < section_000001f8.sectname + 7;
        }
        uVar35 = FUN_01d3b590();
        uVar33 = FUN_01daf9a0();
        uVar34 = (uint)pcVar38;
        if ((uVar35 & uVar33) != uVar33) {
          if (bVar63) {
            if (*(char *)((int64_t)(int)local_70 + -1 + *(int64_t *)(this_ptr[0x2e] + 0x10)) ==
                '\0') {
              pVar25 = *(void* *)((int64_t)this_ptr + 0x1bc);
            }
            else {
              pVar25 = FUN_00e7d780((float)(int)uVar34 * g_024112a4 * g_024112a4);
              if ((int)local_70 < (int)pVar25) {
                pVar25 = local_70;
              }
            }
            pcVar39 = (char *)(uint64_t)(pVar25 - uVar34);
          }
          pvVar26 = _pthread_getspecific((void*)pcVar39);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_015b9440();
          if (local_90 == '\0') {
            if (local_98 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_90 = '\0';
          }
          FUN_00c8e4f0();
          local_68 = local_48;
          pcVar40 = local_48;
          if (local_40 == '\0') {
            if (local_48 != (char *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          pVar25 = (void*)pcVar40;
          FUN_00c92170();
          FUN_00c92160();
          if (local_98 != 0) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          iVar24 = *(int *)(local_48 + 0x18);
          iVar87 = iVar24 + 3;
          if (-1 < iVar24) {
            iVar87 = iVar24;
          }
          pvVar26 = _pthread_getspecific(pVar25);
          if (pvVar26 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012c6af0();
          pcVar21 = g_025f0db0;
          uVar34 = iVar87 >> 2;
          if (iVar87 >> 2 < 3) {
            uVar34 = 2;
          }
          uVar47 = uVar28 & 0xffffffff;
          uVar29 = uVar47 - 1;
          uVar37 = (uint64_t)uVar34 - 1;
          uVar51 = uVar37 & 0xfffffffffffffff8;
          uVar58 = uVar29 & 0xfffffffffffffffc;
          uVar54 = (uVar51 - 8 >> 3) + 1;
          uVar56 = (uVar58 - 4 >> 2) + 1;
          local_10c = 0x80000000;
          local_118 = NAN;
          local_50 = param_1 & 0xffffffff;
          _local_a8 = auVar96;
LAB_01ac2ad0:
          (**(code **)(*this_ptr + 0x658))();
          pcVar40 = (char *)*arg1;
          if (pcVar40 == local_48) {
            if (((char)arg1[1] != '\0') || (local_48 == (char *)0x0)) goto LAB_01ac2b74;
            if (local_40 == '\0') {
              FUN_00d50b00();
              goto LAB_01ac2b6e;
            }
            *(void*)(arg1 + 1) = 1;
          }
          else {
            lVar27 = arg1[1];
            if (local_40 == '\0') {
              if (local_48 != (char *)0x0) {
                FUN_00d50b00();
              }
              *arg1 = (int64_t)local_48;
              if (((char)lVar27 != '\0') && (pcVar40 != (char *)0x0)) {
                FUN_00d50b20();
              }
LAB_01ac2b6e:
              *(void*)(arg1 + 1) = 1;
LAB_01ac2b74:
              lVar27 = *arg1;
              if ((local_40 != '\0') && (local_48 != (char *)0x0)) {
                FUN_00d50b20();
              }
              pcVar40 = (char *)0x0;
              if (lVar27 == 0) goto LAB_01ac3834;
              pcVar40 = (char *)*arg1;
            }
            else {
              *arg1 = (int64_t)local_48;
              pcVar38 = local_48;
              if (((char)lVar27 != '\0') && (pcVar40 != (char *)0x0)) {
                FUN_00d50b20();
                pcVar38 = (char *)*arg1;
              }
              pcVar40 = pcVar38;
              *(void*)(arg1 + 1) = 1;
              if (pcVar40 == (char *)0x0) goto LAB_01ac3834;
            }
          }
          iVar87 = FUN_01d3a5a0();
          if ((iVar87 == 6) && (iVar87 = FUN_01d3b630(), iVar87 == 1)) goto LAB_01ac3834;
          iVar87 = FUN_01d3a5a0();
          if (iVar87 == 5) {
            FUN_01d3abf0();
            fVar67 = (float)FUN_01e466c0();
            uVar31 = FUN_01d3b590();
            fVar66 = fVar67 - (float)local_50;
            if ((uVar31 & 8) != 0) {
              fVar66 = (fVar67 - (float)local_50) * g_02391094;
            }
            local_a8._0_4_ = (float)local_a8._0_4_ + fVar66;
            uVar43 = *(uint *)((int64_t)this_ptr + 0x19c);
            uVar48 = (uint64_t)uVar43;
            pfVar5 = *(float **)(this_ptr[0x2f] + 0x10);
            fVar66 = *pfVar5;
            uVar31 = 0;
            if (fVar66 <= (float)local_a8._0_4_) {
              local_c8 = 0.0;
              uVar60 = uVar48;
              if (-1 < (int)uVar43) {
                for (uVar31 = 0;
                    ((float)local_a8._0_4_ < fVar66 || (pfVar5[uVar31 + 1] <= (float)local_a8._0_4_)
                    ); uVar31 = uVar31 + 1) {
                  if (uVar48 == uVar31) goto LAB_01ac2cc9;
                  fVar66 = pfVar5[uVar31 + 1];
                }
                fVar66 = pfVar5[uVar31];
                local_c8 = 0.0;
                uVar60 = uVar31;
                if ((int)uVar31 < (int)uVar43) goto LAB_01ac2c55;
              }
            }
            else {
              local_c8 = 0.0;
              uVar60 = uVar31;
              _local_a8 = ZEXT416((uint)fVar66);
              if (0 < (int)uVar43) {
LAB_01ac2c55:
                uVar48 = uVar31 & 0xffffffff;
                local_c8 = (local_a8._0_4_ - fVar66) / (pfVar5[uVar48 + 1] - fVar66);
                uVar60 = uVar31;
              }
            }
LAB_01ac2cc9:
            if (iVar23 == 3) {
              local_c8 = (float)_exp2f((local_c8 + (float)((int)uVar60 + 0x23)) * g_023908e0 *
                                       g_023941f4);
              local_c8 = local_c8 * g_023941f8;
            }
            else {
              local_c8 = local_c8 + (float)(int)uVar60;
            }
            FUN_00c8e4f0();
            if (local_40 == '\0') {
              if (local_48 != (char *)0x0) {
                FUN_00d50b00();
              }
            }
            else {
              local_40 = '\0';
            }
            FUN_00c92170();
            FUN_00c92160();
            pVar25 = (void*)uVar48;
            fVar66 = g_02391090;
            if (g_02391090 <= local_c8) {
              fVar66 = local_c8;
            }
            fVar95 = fVar65 / fVar66;
            if (bVar63) {
              if (1 < (int)local_70) {
                uVar31 = 1;
                do {
                  if (*(char *)(*(int64_t *)(this_ptr[0x2e] + 0x10) + uVar31) != '\0') {
                    FUN_00e84a50();
                    lVar27 = *(int64_t *)(local_48 + 0x10);
                    fVar95 = (float)_powf();
                    *(float *)(lVar27 + uVar31 * 4) = fVar95 * *(float *)(lVar27 + uVar31 * 4);
                  }
                  pVar25 = (void*)uVar48;
                  uVar31 = uVar31 + 1;
                } while (uVar47 != uVar31);
              }
              pvVar26 = _pthread_getspecific(pVar25);
              if (pvVar26 != (void *)0x0) {
                FUN_00e8b990();
              }
              iVar87 = FUN_015b9550();
LAB_01ac316d:
              if (iVar87 != -1 && bVar63) {
                FUN_00c8e690();
                if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
                  FUN_00d50b00();
                }
                FUN_00c92170();
                FUN_00c92160();
                ___bzero();
                iVar86 = _UNK_023de2bc;
                iVar64 = _UNK_023de2b8;
                iVar94 = _UNK_023de2b4;
                iVar20 = g_023de2b0;
                iVar19 = _UNK_0239418c;
                iVar18 = _UNK_02394188;
                iVar93 = _UNK_02394184;
                iVar89 = g_02394180;
                if (1 < (int)local_70) {
                  lVar27 = *(int64_t *)(local_48 + 0x10);
                  lVar44 = *(int64_t *)(local_48 + 0x10);
                  uVar31 = 1;
                  if ((3 < uVar29) &&
                     ((lVar27 + uVar47 * 4 <= lVar44 + 4U || (lVar44 + uVar47 * 4 <= lVar27 + 4U))))
                  {
                    iVar88 = g_02394150;
                    iVar90 = _UNK_02394154;
                    iVar92 = _UNK_02394158;
                    iVar91 = _UNK_0239415c;
                    if (uVar58 - 4 == 0) {
                      lVar61 = 0;
                    }
                    else {
                      lVar61 = 0;
                      lVar50 = -(uVar56 & 0xfffffffffffffffe);
                      do {
                        auVar110._0_4_ = (float)iVar88;
                        auVar110._4_4_ = (float)iVar90;
                        auVar110._8_4_ = (float)iVar92;
                        auVar110._12_4_ = (float)iVar91;
                        auVar96 = divps(auVar110,*(uint8_t (*) [16])(lVar27 + 4 + lVar61 * 4));
                        *(uint8_t (*) [16])(lVar44 + 4 + lVar61 * 4) = auVar96;
                        auVar102._0_4_ = (float)(iVar88 + iVar89);
                        auVar102._4_4_ = (float)(iVar90 + iVar93);
                        auVar102._8_4_ = (float)(iVar92 + iVar18);
                        auVar102._12_4_ = (float)(iVar91 + iVar19);
                        auVar96 = divps(auVar102,*(uint8_t (*) [16])(lVar27 + 0x14 + lVar61 * 4))
                        ;
                        *(uint8_t (*) [16])(lVar44 + 0x14 + lVar61 * 4) = auVar96;
                        lVar61 = lVar61 + 8;
                        iVar88 = iVar88 + iVar20;
                        iVar90 = iVar90 + iVar94;
                        iVar92 = iVar92 + iVar64;
                        iVar91 = iVar91 + iVar86;
                        lVar50 = lVar50 + 2;
                      } while (lVar50 != 0);
                    }
                    if ((uVar56 & 1) != 0) {
                      uVar31 = lVar61 << 2 | 4;
                      auVar73._0_4_ = (float)iVar88;
                      auVar73._4_4_ = (float)iVar90;
                      auVar73._8_4_ = (float)iVar92;
                      auVar73._12_4_ = (float)iVar91;
                      auVar96 = divps(auVar73,*(uint8_t (*) [16])(lVar27 + uVar31));
                      *(uint8_t (*) [16])(lVar44 + uVar31) = auVar96;
                    }
                    uVar31 = uVar58 + 1;
                    if (uVar29 == uVar58) goto LAB_01ac3361;
                  }
                  uVar48 = uVar31;
                  if ((uVar28 & 1) == 0) {
                    *(float *)(lVar44 + uVar31 * 4) =
                         (float)(int)uVar31 / *(float *)(lVar27 + uVar31 * 4);
                    uVar48 = uVar31 + 1;
                  }
                  if (~uVar31 != -uVar47) {
                    do {
                      *(float *)(lVar44 + uVar48 * 4) =
                           (float)(int)uVar48 / *(float *)(lVar27 + uVar48 * 4);
                      *(float *)(lVar44 + 4 + uVar48 * 4) =
                           (float)((int)uVar48 + 1) / *(float *)(lVar27 + 4 + uVar48 * 4);
                      uVar48 = uVar48 + 2;
                    } while (uVar48 != uVar47);
                  }
                }
LAB_01ac3361:
                FUN_00c8e4f0();
                if (local_40 == '\0') {
                  if (local_48 != (char *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                FUN_00c92170();
                FUN_00c92160();
                puVar32 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar32 = &g_025f0d98;
                puVar32[2] = 0;
                puVar32[3] = 0;
                puVar32[4] = 0;
                puVar32[5] = 0;
                puVar32[6] = 0;
                puVar32[7] = 0;
                (*pcVar21)();
                FUN_015c15b0(1,uVar28 & 0xffffffff);
                if ((int)(iVar87 - 10U) < (int)local_118) {
                  local_118 = (float)(iVar87 - 10U);
                }
                if ((int)local_10c < (int)(iVar87 + 0xbU)) {
                  local_10c = iVar87 + 0xbU;
                }
                if ((int)local_118 < 0) {
                  local_118 = 0.0;
                }
                uVar31 = (uint64_t)local_10c;
                if ((int)local_70 <= (int)local_10c) {
                  uVar31 = uVar28 & 0xffffffff;
                }
                local_10c = (uint)uVar31;
                uVar48 = uVar31;
                if ((int)local_118 < (int)local_10c) {
                  uVar60 = (uint64_t)(uint)local_118;
                  uVar48 = uVar60;
                  fVar65 = g_02390124;
                  do {
                    fVar95 = (float)FUN_00e84a50((float)((uint)(float)((int)uVar48 - iVar87) &
                                                        g_02390140) / g_02394248 + fVar65);
                    fVar65 = g_02390124;
                    *(float *)(*(int64_t *)(local_48 + 0x10) + uVar48 * 4) =
                         *(float *)(*(int64_t *)(local_48 + 0x10) + uVar48 * 4) * fVar95 +
                         (g_02390124 - fVar95) *
                         *(float *)(*(int64_t *)(local_48 + 0x10) + uVar48 * 4);
                    iVar86 = _UNK_023de2bc;
                    iVar64 = _UNK_023de2b8;
                    iVar94 = _UNK_023de2b4;
                    iVar20 = g_023de2b0;
                    iVar19 = _UNK_0239418c;
                    iVar18 = _UNK_02394188;
                    iVar93 = _UNK_02394184;
                    iVar89 = g_02394180;
                    uVar48 = uVar48 + 1;
                  } while (uVar31 != uVar48);
                  lVar27 = *(int64_t *)(local_48 + 0x10);
                  uVar48 = *(uint64_t *)(local_48 + 0x10);
                  uVar59 = uVar31 - uVar60;
                  if ((3 < uVar59) &&
                     ((lVar27 + uVar31 * 4 <= uVar48 + uVar60 * 4 ||
                      (uVar48 + uVar31 * 4 <= lVar27 + uVar60 * 4)))) {
                    uVar55 = uVar59 & 0xfffffffffffffffc;
                    iVar87 = (int)local_118 + g_0238fcc0;
                    iVar88 = (int)local_118 + _UNK_0238fcc4;
                    iVar90 = (int)local_118 + _UNK_0238fcc8;
                    iVar92 = (int)local_118 + _UNK_0238fccc;
                    uVar57 = (uVar55 - 4 >> 2) + 1;
                    if (uVar55 - 4 == 0) {
                      lVar44 = 0;
                    }
                    else {
                      lVar61 = uVar48 + uVar60 * 4;
                      lVar50 = lVar27 + uVar60 * 4;
                      lVar45 = -(uVar57 & 0xfffffffffffffffe);
                      lVar44 = 0;
                      do {
                        auVar111._0_4_ = (float)iVar87;
                        auVar111._4_4_ = (float)iVar88;
                        auVar111._8_4_ = (float)iVar90;
                        auVar111._12_4_ = (float)iVar92;
                        auVar96 = divps(auVar111,*(uint8_t (*) [16])(lVar50 + lVar44 * 4));
                        *(uint8_t (*) [16])(lVar61 + lVar44 * 4) = auVar96;
                        auVar103._0_4_ = (float)(iVar87 + iVar89);
                        auVar103._4_4_ = (float)(iVar88 + iVar93);
                        auVar103._8_4_ = (float)(iVar90 + iVar18);
                        auVar103._12_4_ = (float)(iVar92 + iVar19);
                        auVar96 = divps(auVar103,*(uint8_t (*) [16])(lVar50 + 0x10 + lVar44 * 4))
                        ;
                        *(uint8_t (*) [16])(lVar61 + 0x10 + lVar44 * 4) = auVar96;
                        lVar44 = lVar44 + 8;
                        iVar87 = iVar87 + iVar20;
                        iVar88 = iVar88 + iVar94;
                        iVar90 = iVar90 + iVar64;
                        iVar92 = iVar92 + iVar86;
                        lVar45 = lVar45 + 2;
                      } while (lVar45 != 0);
                    }
                    if ((uVar57 & 1) != 0) {
                      auVar74._0_4_ = (float)iVar87;
                      auVar74._4_4_ = (float)iVar88;
                      auVar74._8_4_ = (float)iVar90;
                      auVar74._12_4_ = (float)iVar92;
                      auVar96 = divps(auVar74,*(uint8_t (*) [16])(lVar27 + (lVar44 + uVar60) * 4)
                                     );
                      *(uint8_t (*) [16])(uVar48 + (lVar44 + uVar60) * 4) = auVar96;
                    }
                    if (uVar59 == uVar55) goto LAB_01ac368b;
                    uVar60 = uVar60 + uVar55;
                  }
                  uVar59 = uVar60;
                  if ((local_10c - (int)uVar60 & 1) != 0) {
                    *(float *)(uVar48 + uVar60 * 4) =
                         (float)(int)uVar60 / *(float *)(lVar27 + uVar60 * 4);
                    uVar59 = uVar60 + 1;
                  }
                  if (~uVar60 + uVar31 != 0) {
                    do {
                      *(float *)(uVar48 + uVar59 * 4) =
                           (float)(int)uVar59 / *(float *)(lVar27 + uVar59 * 4);
                      *(float *)(uVar48 + 4 + uVar59 * 4) =
                           (float)((int)uVar59 + 1) / *(float *)(lVar27 + 4 + uVar59 * 4);
                      uVar59 = uVar59 + 2;
                    } while (uVar59 != uVar31);
                  }
                }
LAB_01ac368b:
                pvVar26 = _pthread_getspecific((void*)uVar48);
                if (pvVar26 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_015b9550();
                FUN_00c8e4f0();
                if (local_40 == '\0') {
                  if (local_48 != (char *)0x0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_40 = '\0';
                }
                FUN_00c92170();
                FUN_00c92160();
                if (local_48 == local_68) {
                  if (local_68 == (char *)0x0) {
                    local_68 = (char *)0x0;
                  }
                  else {
                    FUN_00d50b20();
                  }
                }
                else if (local_68 == (char *)0x0) {
                  local_68 = local_48;
                }
                else {
                  FUN_00d50b20();
                  local_68 = local_48;
                }
                if (puVar32 != (void*)0x0) {
                  FUN_00d50b20();
                }
                fVar65 = fVar66;
                if (local_48 != (char *)0x0) {
                  FUN_00d50b20();
                  FUN_00d50b20();
                }
              }
            }
            else {
              if ((iVar23 != 0) && (iVar23 != 3)) {
                if (7 < iVar24) {
                  lVar27 = *(int64_t *)(local_48 + 0x10);
                  uVar48 = 1;
                  if (7 < uVar37) {
                    if (uVar51 - 8 == 0) {
                      lVar44 = 0;
                    }
                    else {
                      lVar44 = 0;
                      lVar61 = -(uVar54 & 0xfffffffffffffffe);
                      do {
                        pfVar5 = (float *)(lVar27 + 4 + lVar44 * 4);
                        fVar7 = pfVar5[1];
                        fVar8 = pfVar5[2];
                        fVar9 = pfVar5[3];
                        pfVar3 = (float *)(lVar27 + 0x14 + lVar44 * 4);
                        pfVar4 = (float *)(lVar27 + 0x24 + lVar44 * 4);
                        fVar10 = *pfVar4;
                        fVar11 = pfVar4[1];
                        fVar12 = pfVar4[2];
                        fVar13 = pfVar4[3];
                        pfVar4 = (float *)(lVar27 + 0x34 + lVar44 * 4);
                        fVar14 = *pfVar4;
                        fVar15 = pfVar4[1];
                        fVar16 = pfVar4[2];
                        fVar17 = pfVar4[3];
                        auVar108._0_4_ = *pfVar3 * fVar95;
                        auVar108._4_4_ = pfVar3[1] * fVar95;
                        auVar108._8_4_ = pfVar3[2] * fVar95;
                        auVar108._12_4_ = pfVar3[3] * fVar95;
                        pfVar3 = (float *)(lVar27 + 4 + lVar44 * 4);
                        *pfVar3 = *pfVar5 * fVar95;
                        pfVar3[1] = fVar7 * fVar95;
                        pfVar3[2] = fVar8 * fVar95;
                        pfVar3[3] = fVar9 * fVar95;
                        *(uint8_t (*) [16])(lVar27 + 0x14 + lVar44 * 4) = auVar108;
                        auVar113._0_4_ = fVar10 * fVar95;
                        auVar113._4_4_ = fVar11 * fVar95;
                        auVar113._8_4_ = fVar12 * fVar95;
                        auVar113._12_4_ = fVar13 * fVar95;
                        auVar116._0_4_ = fVar14 * fVar95;
                        auVar116._4_4_ = fVar15 * fVar95;
                        auVar116._8_4_ = fVar16 * fVar95;
                        auVar116._12_4_ = fVar17 * fVar95;
                        *(uint8_t (*) [16])(lVar27 + 0x24 + lVar44 * 4) = auVar113;
                        *(uint8_t (*) [16])(lVar27 + 0x34 + lVar44 * 4) = auVar116;
                        lVar44 = lVar44 + 0x10;
                        lVar61 = lVar61 + 2;
                      } while (lVar61 != 0);
                    }
                    if ((uVar54 & 1) != 0) {
                      uVar31 = lVar44 << 2 | 4;
                      pfVar5 = (float *)(lVar27 + uVar31);
                      fVar7 = pfVar5[1];
                      fVar8 = pfVar5[2];
                      fVar9 = pfVar5[3];
                      pfVar3 = (float *)(lVar27 + 0x10 + uVar31);
                      auVar109._0_4_ = *pfVar3 * fVar95;
                      auVar109._4_4_ = pfVar3[1] * fVar95;
                      auVar109._8_4_ = pfVar3[2] * fVar95;
                      auVar109._12_4_ = pfVar3[3] * fVar95;
                      pfVar3 = (float *)(lVar27 + uVar31);
                      *pfVar3 = *pfVar5 * fVar95;
                      pfVar3[1] = fVar7 * fVar95;
                      pfVar3[2] = fVar8 * fVar95;
                      pfVar3[3] = fVar9 * fVar95;
                      *(uint8_t (*) [16])(lVar27 + 0x10 + uVar31) = auVar109;
                    }
                    uVar48 = uVar51 + 1;
                    if (uVar37 == uVar51) goto LAB_01ac30f6;
                  }
                  do {
                    *(float *)(lVar27 + uVar48 * 4) = *(float *)(lVar27 + uVar48 * 4) * fVar95;
                    uVar48 = uVar48 + 1;
                  } while (uVar34 != uVar48);
                }
LAB_01ac30f6:
                pvVar26 = _pthread_getspecific((void*)uVar48);
                if (pvVar26 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar87 = FUN_015b9550();
                goto LAB_01ac316d;
              }
              _logf();
              pvVar26 = _pthread_getspecific(pVar25);
              if (pvVar26 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012c6a90();
            }
            FUN_01abf3d0();
            local_50 = (uint64_t)(uint)fVar67;
            if (local_48 != (char *)0x0) {
              FUN_00d50b20();
            }
          }
          goto LAB_01ac2ad0;
        }
        pvVar26 = _pthread_getspecific((void*)pcVar39);
        if (pvVar26 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_015b9440();
        if (local_90 == '\0') {
          if (local_98 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_90 = '\0';
        }
        FUN_00c8e4f0();
        if (local_40 == '\0') {
          if (local_48 != (char *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_40 = '\0';
        }
        FUN_00c92170();
        FUN_00c92160();
        if (local_98 != 0) {
          FUN_00d50b20();
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        iVar87 = *(int *)(local_48 + 0x18);
        iVar89 = iVar87 + 3;
        if (-1 < iVar87) {
          iVar89 = iVar87;
        }
        if (bVar63) {
          FUN_00c8e690();
          if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          ___bzero();
          iVar94 = _UNK_023de2bc;
          iVar20 = _UNK_023de2b8;
          iVar19 = _UNK_023de2b4;
          iVar18 = g_023de2b0;
          iVar93 = _UNK_0239418c;
          iVar89 = _UNK_02394188;
          iVar87 = _UNK_02394184;
          iVar23 = g_02394180;
          if (1 < (int)local_70) {
            lVar27 = *(int64_t *)(local_48 + 0x10);
            lVar44 = *(int64_t *)(local_48 + 0x10);
            uVar37 = uVar28 & 0xffffffff;
            uVar29 = uVar37 - 1;
            uVar47 = 1;
            if ((3 < uVar29) &&
               ((lVar27 + uVar37 * 4 <= lVar44 + 4U || (lVar44 + uVar37 * 4 <= lVar27 + 4U)))) {
              uVar47 = uVar29 & 0xfffffffffffffffc;
              uVar54 = (uVar47 - 4 >> 2) + 1;
              iVar64 = g_02394150;
              iVar86 = _UNK_02394154;
              iVar88 = _UNK_02394158;
              iVar90 = _UNK_0239415c;
              if (uVar47 - 4 == 0) {
                lVar61 = 0;
              }
              else {
                lVar50 = -(uVar54 & 0xfffffffffffffffe);
                lVar61 = 0;
                do {
                  auVar115._0_4_ = (float)iVar64;
                  auVar115._4_4_ = (float)iVar86;
                  auVar115._8_4_ = (float)iVar88;
                  auVar115._12_4_ = (float)iVar90;
                  auVar96 = divps(auVar115,*(uint8_t (*) [16])(lVar27 + 4 + lVar61 * 4));
                  *(uint8_t (*) [16])(lVar44 + 4 + lVar61 * 4) = auVar96;
                  auVar112._0_4_ = (float)(iVar64 + iVar23);
                  auVar112._4_4_ = (float)(iVar86 + iVar87);
                  auVar112._8_4_ = (float)(iVar88 + iVar89);
                  auVar112._12_4_ = (float)(iVar90 + iVar93);
                  auVar96 = divps(auVar112,*(uint8_t (*) [16])(lVar27 + 0x14 + lVar61 * 4));
                  *(uint8_t (*) [16])(lVar44 + 0x14 + lVar61 * 4) = auVar96;
                  lVar61 = lVar61 + 8;
                  iVar64 = iVar64 + iVar18;
                  iVar86 = iVar86 + iVar19;
                  iVar88 = iVar88 + iVar20;
                  iVar90 = iVar90 + iVar94;
                  lVar50 = lVar50 + 2;
                } while (lVar50 != 0);
              }
              if ((uVar54 & 1) != 0) {
                uVar54 = lVar61 << 2 | 4;
                auVar84._0_4_ = (float)iVar64;
                auVar84._4_4_ = (float)iVar86;
                auVar84._8_4_ = (float)iVar88;
                auVar84._12_4_ = (float)iVar90;
                auVar96 = divps(auVar84,*(uint8_t (*) [16])(lVar27 + uVar54));
                *(uint8_t (*) [16])(lVar44 + uVar54) = auVar96;
              }
              if (uVar29 == uVar47) goto LAB_01ac4915;
              uVar47 = uVar47 | 1;
            }
            uVar29 = ~uVar47;
            if ((uVar28 & 1) == 0) {
              *(float *)(lVar44 + uVar47 * 4) = (float)(int)uVar47 / *(float *)(lVar27 + uVar47 * 4)
              ;
              uVar47 = uVar47 + 1;
            }
            if (uVar29 + uVar37 != 0) {
              do {
                *(float *)(lVar44 + uVar47 * 4) =
                     (float)(int)uVar47 / *(float *)(lVar27 + uVar47 * 4);
                *(float *)(lVar44 + 4 + uVar47 * 4) =
                     (float)((int)uVar47 + 1) / *(float *)(lVar27 + 4 + uVar47 * 4);
                uVar47 = uVar47 + 2;
              } while (uVar47 != uVar37);
            }
          }
LAB_01ac4915:
          FUN_00c8e4f0();
          if ((local_40 == '\0') && (local_48 != (char *)0x0)) {
            FUN_00d50b00();
          }
          FUN_00c92170();
          FUN_00c92160();
          puVar32 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar32 = &g_025f0d98;
          puVar32[2] = 0;
          puVar32[3] = 0;
          puVar32[4] = 0;
          puVar32[5] = 0;
          puVar32[6] = 0;
          puVar32[7] = 0;
          (*g_025f0db0)();
          FUN_015c15b0(1,uVar28);
          pcVar40 = local_48 + 0x10;
          **(void**)pcVar40 = 0;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 4) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 4) + fVar65;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 8) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 8) + fVar65 + fVar65;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 0xc) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 0xc) +
               fVar65 * g_02394298;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 0x10) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 0x10) +
               fVar65 * g_02390d2c;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 0x14) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 0x14) +
               fVar65 * g_023908d8;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 0x18) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 0x18) +
               fVar65 * g_02390d30;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 0x1c) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 0x1c) +
               fVar65 * g_0241c3ec;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 0x20) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 0x20) +
               fVar65 * g_023b36b0;
          fVar65 = (float)FUN_00e84a50();
          *(float *)(*(int64_t *)pcVar40 + 0x24) =
               (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 0x24) +
               fVar65 * g_023b160c;
          lVar44 = (int64_t)(int)local_70;
          lVar27 = (int64_t)(int)uVar34;
          if (*(char *)(lVar44 + -1 + *(int64_t *)(this_ptr[0x2e] + 0x10)) != '\0') {
            pVar25 = local_70;
            if ((int)local_70 < (int)uVar34) {
              pVar25 = uVar34;
            }
            fVar65 = (float)FUN_00e84a50();
            if ((int)uVar34 < (int)local_70) {
              *(float *)(*(int64_t *)pcVar40 + lVar27 * 4) =
                   (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + lVar27 * 4) +
                   (float)(int)uVar34 * fVar65;
              fVar65 = (float)FUN_00e84a50();
              lVar61 = (int64_t)(int)pVar25;
              if (lVar27 + 1 != lVar61) {
                *(float *)(*(int64_t *)pcVar40 + 4 + lVar27 * 4) =
                     (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 4 + lVar27 * 4) +
                     (float)(int)(lVar27 + 1) * fVar65;
                fVar65 = (float)FUN_00e84a50();
                if (lVar27 + 2 != lVar61) {
                  *(float *)(*(int64_t *)pcVar40 + 8 + lVar27 * 4) =
                       (g_02390124 - fVar65) * *(float *)(*(int64_t *)pcVar40 + 8 + lVar27 * 4) +
                       (float)(int)(lVar27 + 2) * fVar65;
                  fVar65 = (float)FUN_00e84a50();
                  if (lVar27 + 3 != lVar61) {
                    *(float *)(*(int64_t *)pcVar40 + 0xc + lVar27 * 4) =
                         (g_02390124 - fVar65) *
                         *(float *)(*(int64_t *)pcVar40 + 0xc + lVar27 * 4) +
                         (float)(int)(lVar27 + 3) * fVar65;
                    fVar65 = (float)FUN_00e84a50();
                    if (lVar27 + 4 != lVar61) {
                      *(float *)(*(int64_t *)pcVar40 + 0x10 + lVar27 * 4) =
                           (g_02390124 - fVar65) *
                           *(float *)(*(int64_t *)pcVar40 + 0x10 + lVar27 * 4) +
                           (float)(int)(lVar27 + 4) * fVar65;
                      fVar65 = (float)FUN_00e84a50();
                      if (lVar27 + 5 != lVar61) {
                        *(float *)(*(int64_t *)pcVar40 + 0x14 + lVar27 * 4) =
                             (g_02390124 - fVar65) *
                             *(float *)(*(int64_t *)pcVar40 + 0x14 + lVar27 * 4) +
                             (float)(int)(lVar27 + 5) * fVar65;
                        fVar65 = (float)FUN_00e84a50();
                        if (lVar27 + 6 != lVar61) {
                          *(float *)(*(int64_t *)pcVar40 + 0x18 + lVar27 * 4) =
                               (g_02390124 - fVar65) *
                               *(float *)(*(int64_t *)pcVar40 + 0x18 + lVar27 * 4) +
                               (float)(int)(lVar27 + 6) * fVar65;
                          fVar65 = (float)FUN_00e84a50();
                          if (lVar27 + 7 != lVar61) {
                            *(float *)(*(int64_t *)pcVar40 + 0x1c + lVar27 * 4) =
                                 (g_02390124 - fVar65) *
                                 *(float *)(*(int64_t *)pcVar40 + 0x1c + lVar27 * 4) +
                                 (float)(int)(lVar27 + 7) * fVar65;
                            fVar65 = (float)FUN_00e84a50();
                            if (lVar27 + 8 != lVar61) {
                              *(float *)(*(int64_t *)pcVar40 + 0x20 + lVar27 * 4) =
                                   (g_02390124 - fVar65) *
                                   *(float *)(*(int64_t *)pcVar40 + 0x20 + lVar27 * 4) +
                                   (float)(int)(lVar27 + 8) * fVar65;
                              fVar65 = (float)FUN_00e84a50();
                              if (lVar27 + 9 != lVar61) {
                                *(float *)(*(int64_t *)pcVar40 + 0x24 + lVar27 * 4) =
                                     (g_02390124 - fVar65) *
                                     *(float *)(*(int64_t *)pcVar40 + 0x24 + lVar27 * 4) +
                                     (float)(int)(lVar27 + 9) * fVar65;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            auVar100 = g_023de2d0;
            auVar96 = g_023de2c0;
            iVar94 = _UNK_023de2bc;
            iVar20 = _UNK_023de2b8;
            iVar19 = _UNK_023de2b4;
            iVar18 = g_023de2b0;
            iVar93 = _UNK_0239418c;
            iVar89 = _UNK_02394188;
            iVar87 = _UNK_02394184;
            iVar23 = g_02394180;
            if ((int)(uVar34 + 10) < (int)local_70) {
              lVar50 = *(int64_t *)pcVar40;
              lVar61 = lVar27 + 10;
              uVar28 = (lVar44 - lVar27) - 10;
              if (7 < uVar28) {
                uVar29 = uVar28 & 0xfffffffffffffff8;
                iVar64 = (int)lVar61;
                iVar86 = iVar64 + g_0238fcc0;
                iVar88 = iVar64 + _UNK_0238fcc4;
                iVar90 = iVar64 + _UNK_0238fcc8;
                iVar64 = iVar64 + _UNK_0238fccc;
                uVar37 = (uVar29 - 8 >> 3) + 1;
                if (uVar29 - 8 == 0) {
                  lVar27 = 0;
                }
                else {
                  lVar45 = lVar50 + lVar27 * 4;
                  lVar52 = -(uVar37 & 0xfffffffffffffffe);
                  lVar27 = 0;
                  do {
                    pfVar5 = (float *)(lVar45 + 0x28 + lVar27 * 4);
                    *pfVar5 = (float)iVar86;
                    pfVar5[1] = (float)iVar88;
                    pfVar5[2] = (float)iVar90;
                    pfVar5[3] = (float)iVar64;
                    pfVar5 = (float *)(lVar45 + 0x38 + lVar27 * 4);
                    *pfVar5 = (float)(iVar86 + iVar23);
                    pfVar5[1] = (float)(iVar88 + iVar87);
                    pfVar5[2] = (float)(iVar90 + iVar89);
                    pfVar5[3] = (float)(iVar64 + iVar93);
                    pfVar5 = (float *)(lVar45 + 0x48 + lVar27 * 4);
                    *pfVar5 = (float)(iVar86 + iVar18);
                    pfVar5[1] = (float)(iVar88 + iVar19);
                    pfVar5[2] = (float)(iVar90 + iVar20);
                    pfVar5[3] = (float)(iVar64 + iVar94);
                    pfVar5 = (float *)(lVar45 + 0x58 + lVar27 * 4);
                    *pfVar5 = (float)(iVar86 + auVar96._0_4_);
                    pfVar5[1] = (float)(iVar88 + auVar96._4_4_);
                    pfVar5[2] = (float)(iVar90 + auVar96._8_4_);
                    pfVar5[3] = (float)(iVar64 + auVar96._12_4_);
                    lVar27 = lVar27 + 0x10;
                    iVar86 = iVar86 + auVar100._0_4_;
                    iVar88 = iVar88 + auVar100._4_4_;
                    iVar90 = iVar90 + auVar100._8_4_;
                    iVar64 = iVar64 + auVar100._12_4_;
                    lVar52 = lVar52 + 2;
                  } while (lVar52 != 0);
                }
                if ((uVar37 & 1) != 0) {
                  iVar23 = iVar86 + g_02394180;
                  iVar87 = iVar88 + _UNK_02394184;
                  iVar89 = iVar90 + _UNK_02394188;
                  iVar93 = iVar64 + _UNK_0239418c;
                  pfVar5 = (float *)(lVar50 + (lVar27 + lVar61) * 4);
                  *pfVar5 = (float)iVar86;
                  pfVar5[1] = (float)iVar88;
                  pfVar5[2] = (float)iVar90;
                  pfVar5[3] = (float)iVar64;
                  pfVar5 = (float *)(lVar50 + 0x10 + (lVar27 + lVar61) * 4);
                  *pfVar5 = (float)iVar23;
                  pfVar5[1] = (float)iVar87;
                  pfVar5[2] = (float)iVar89;
                  pfVar5[3] = (float)iVar93;
                }
                if (uVar28 == uVar29) goto LAB_01ac505f;
                lVar61 = lVar61 + uVar29;
              }
              do {
                *(float *)(lVar50 + lVar61 * 4) = (float)(int)lVar61;
                lVar61 = lVar61 + 1;
              } while (lVar44 != lVar61);
            }
          }
LAB_01ac505f:
          uVar43 = 10;
          if (10 < (int)uVar34) {
            uVar43 = uVar34;
          }
          pcVar39 = (char *)(uint64_t)(uVar43 - 10);
          if ((int)(iVar24 + 0xbU) < (int)local_70) {
            local_70 = iVar24 + 0xbU;
          }
          if ((int)(uVar43 - 10) < (int)local_70) {
            uVar37 = (uint64_t)uVar43;
            uVar28 = uVar37 - 10;
            uVar47 = (uint64_t)(int)local_70;
            uVar29 = uVar28;
            do {
              fVar65 = (float)FUN_00e84a50();
              *(float *)(*(int64_t *)(local_48 + 0x10) + uVar29 * 4) =
                   *(float *)(*(int64_t *)pcVar40 + uVar29 * 4) * fVar65 +
                   (g_02390124 - fVar65) * *(float *)(*(int64_t *)(local_48 + 0x10) + uVar29 * 4)
              ;
              iVar20 = _UNK_023de2bc;
              iVar19 = _UNK_023de2b8;
              iVar18 = _UNK_023de2b4;
              iVar93 = g_023de2b0;
              iVar89 = _UNK_0239418c;
              iVar87 = _UNK_02394188;
              iVar24 = _UNK_02394184;
              iVar23 = g_02394180;
              uVar29 = uVar29 + 1;
            } while (uVar47 != uVar29);
            lVar27 = *(int64_t *)(local_48 + 0x10);
            pcVar39 = *(char **)(local_48 + 0x10);
            uVar29 = (uVar47 - uVar37) + 10;
            if ((3 < uVar29) &&
               (((void*)(lVar27 + uVar47 * 4) <= pcVar39 + uVar28 * 4 ||
                (pcVar39 + uVar47 * 4 <= (void*)(lVar27 + uVar28 * 4))))) {
              uVar54 = uVar29 & 0xfffffffffffffffc;
              iVar94 = (int)uVar28;
              iVar64 = iVar94 + g_0238fcc0;
              iVar86 = iVar94 + _UNK_0238fcc4;
              iVar88 = iVar94 + _UNK_0238fcc8;
              iVar94 = iVar94 + _UNK_0238fccc;
              uVar58 = (uVar54 - 4 >> 2) + 1;
              if (uVar54 - 4 == 0) {
                lVar44 = 0;
              }
              else {
                lVar61 = lVar27 + uVar37 * 4;
                lVar50 = -(uVar58 & 0xfffffffffffffffe);
                lVar44 = 0;
                do {
                  auVar117._0_4_ = (float)iVar64;
                  auVar117._4_4_ = (float)iVar86;
                  auVar117._8_4_ = (float)iVar88;
                  auVar117._12_4_ = (float)iVar94;
                  auVar96 = divps(auVar117,*(uint8_t (*) [16])(lVar61 + -0x28 + lVar44 * 4));
                  *(uint8_t (*) [16])(pcVar39 + lVar44 * 4 + uVar37 * 4 + -0x28) = auVar96;
                  auVar114._0_4_ = (float)(iVar64 + iVar23);
                  auVar114._4_4_ = (float)(iVar86 + iVar24);
                  auVar114._8_4_ = (float)(iVar88 + iVar87);
                  auVar114._12_4_ = (float)(iVar94 + iVar89);
                  auVar96 = divps(auVar114,*(uint8_t (*) [16])(lVar61 + -0x18 + lVar44 * 4));
                  *(uint8_t (*) [16])(pcVar39 + lVar44 * 4 + uVar37 * 4 + -0x18) = auVar96;
                  lVar44 = lVar44 + 8;
                  iVar64 = iVar64 + iVar93;
                  iVar86 = iVar86 + iVar18;
                  iVar88 = iVar88 + iVar19;
                  iVar94 = iVar94 + iVar20;
                  lVar50 = lVar50 + 2;
                } while (lVar50 != 0);
              }
              if ((uVar58 & 1) != 0) {
                auVar85._0_4_ = (float)iVar64;
                auVar85._4_4_ = (float)iVar86;
                auVar85._8_4_ = (float)iVar88;
                auVar85._12_4_ = (float)iVar94;
                auVar96 = divps(auVar85,*(uint8_t (*) [16])(lVar27 + (lVar44 + uVar28) * 4));
                *(uint8_t (*) [16])(pcVar39 + (lVar44 + uVar28) * 4) = auVar96;
              }
              if (uVar29 == uVar54) goto LAB_01ac52c0;
              uVar28 = uVar28 + uVar54;
            }
            uVar29 = ~uVar28;
            if ((local_70 - (int)uVar28 & 1) != 0) {
              *(float *)(pcVar39 + uVar28 * 4) =
                   (float)(int)uVar28 / *(float *)(lVar27 + uVar28 * 4);
              uVar28 = uVar28 + 1;
            }
            if (uVar29 + uVar47 != 0) {
              do {
                *(float *)(pcVar39 + uVar28 * 4) =
                     (float)(int)uVar28 / *(float *)(lVar27 + uVar28 * 4);
                *(float *)(pcVar39 + uVar28 * 4 + 4) =
                     (float)((int)uVar28 + 1) / *(float *)(lVar27 + 4 + uVar28 * 4);
                uVar28 = uVar28 + 2;
              } while (uVar28 != uVar47);
            }
          }
LAB_01ac52c0:
          if (puVar32 != (void*)0x0) {
            FUN_00d50b20();
          }
          if (local_48 != (char *)0x0) {
            FUN_00d50b20();
            FUN_00d50b20();
          }
        }
        else {
          uVar34 = iVar89 >> 2;
          if ((iVar23 == 3) || (iVar23 == 0)) {
            pvVar26 = _pthread_getspecific((void*)pcVar39);
            if ((pvVar26 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
              pcVar39 = local_48;
            }
            FUN_012c6a90();
            if (7 < iVar87) {
              uVar43 = 2;
              if (2 < (int)uVar34) {
                uVar43 = uVar34;
              }
              _memset_pattern16(pcVar39,(void *)((uint64_t)(uVar43 - 1) << 2),sVar53);
            }
          }
          else {
            pvVar26 = _pthread_getspecific((void*)pcVar39);
            if ((pvVar26 != (void *)0x0) && (lVar27 = FUN_00e8b990(), lVar27 != 0)) {
              pcVar39 = local_48;
            }
            auVar82._0_8_ = FUN_012c6af0();
            auVar82._8_8_ = extraout_XMM0_Qb_03;
            auVar83._4_12_ = auVar82._4_12_;
            auVar83._0_4_ = (float)auVar82._0_8_ * g_023941f4;
            uVar68 = _exp2f(auVar83._0_8_);
            if (7 < iVar87) {
              pcVar39 = (char *)((int64_t)&MACH_HEADER.magic + 2);
              if (2 < (int)uVar34) {
                pcVar39 = (char *)(uint64_t)uVar34;
              }
              lVar27 = *(int64_t *)(local_48 + 0x10);
              pcVar40 = pcVar39 + -1;
              plVar46 = (int64_t *)((int64_t)&MACH_HEADER.magic + 1);
              if ("\x01\x03" < pcVar40) {
                puVar49 = (void*)((uint64_t)pcVar40 & 0xfffffffffffffff8);
                uVar29 = ((uint64_t)(puVar49 + -8) >> 3) + 1;
                uVar28 = (uint64_t)((uint)uVar29 & 3);
                if (puVar49 + -8 < (void*)0x18) {
                  lVar44 = 0;
                }
                else {
                  lVar61 = -(uVar29 & 0xfffffffffffffffc);
                  lVar44 = 0;
                  do {
                    puVar2 = (void*)(lVar27 + 4 + lVar44 * 4);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    puVar2 = (void*)(lVar27 + 0x14 + lVar44 * 4);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    puVar2 = (void*)(lVar27 + 0x24 + lVar44 * 4);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    puVar2 = (void*)(lVar27 + 0x34 + lVar44 * 4);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    puVar2 = (void*)(lVar27 + 0x44 + lVar44 * 4);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    puVar2 = (void*)(lVar27 + 0x54 + lVar44 * 4);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    puVar2 = (void*)(lVar27 + 100 + lVar44 * 4);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    puVar2 = (void*)(lVar27 + 0x74 + lVar44 * 4);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    lVar44 = lVar44 + 0x20;
                    lVar61 = lVar61 + 4;
                  } while (lVar61 != 0);
                }
                if (uVar28 != 0) {
                  lVar61 = -uVar28;
                  do {
                    uVar28 = lVar44 * 4 | 4;
                    puVar2 = (void*)(lVar27 + uVar28);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    puVar2 = (void*)(lVar27 + 0x10 + uVar28);
                    *puVar2 = uVar68;
                    puVar2[1] = uVar68;
                    puVar2[2] = uVar68;
                    puVar2[3] = uVar68;
                    lVar44 = lVar44 + 8;
                    lVar61 = lVar61 + 1;
                  } while (lVar61 != 0);
                }
                if (pcVar40 == puVar49) goto LAB_01ac52ef;
                plVar46 = (int64_t *)((uint64_t)puVar49 | 1);
              }
              do {
                *(void*)(lVar27 + (int64_t)plVar46 * 4) = uVar68;
                plVar46 = (int64_t *)((int64_t)plVar46 + 1);
              } while ((int64_t *)pcVar39 != plVar46);
            }
          }
        }
LAB_01ac52ef:
        pcVar40 = (char *)*plVar1;
        pvVar26 = _pthread_getspecific((void*)pcVar39);
        if (pvVar26 != (void *)0x0) {
          pcVar40 = (char *)*plVar1;
          lVar27 = FUN_00e8b990();
          if (lVar27 != 0) {
            pcVar40 = *(char **)(pcVar40 + ((uint64_t)(*(uint *)(lVar27 + 0x154) & 1) + 4) * 8);
          }
        }
        FUN_015b9550();
        *(void*)((int64_t)this_ptr + 0x1bc) = 0xffffffff;
        (**(code **)(*this_ptr + 0x6e0))();
        (**(code **)(*this_ptr + 0x620))();
        if (local_48 != (char *)0x0) {
          FUN_00d50b20();
        }
        goto LAB_01ac5394;
      }
    }
  }
  uVar28 = 0;
  goto LAB_01ac0de0;
LAB_01ac13a8:
  uVar69 = g_023dccf4;
  *(void*)((int64_t)this_ptr + 0x1a4) = g_023dccec;
  *(void*)((int64_t)this_ptr + 0x1ac) = uVar69;
  (**(code **)(*this_ptr + 0x620))();
  goto LAB_01ac53a2;
LAB_01ac3834:
  if (local_68 != (char *)0x0) {
    FUN_00d50b20();
  }
LAB_01ac5394:
  if ((uVar35 & uVar33) != uVar33) goto LAB_01ac53a2;
  goto LAB_01ac53c6;
LAB_01ac47b0:
  if (local_48 != (char *)0x0) {
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
    FUN_00d50b20();
  }
LAB_01ac53a2:
  *(void*)((int64_t)this_ptr + 0x1bc) = 0xffffffff;
  (**(code **)(*this_ptr + 0x6e0))();
  (**(code **)(*this_ptr + 0x620))();
LAB_01ac53c6:
  uVar28 = CONCAT71((int7)((uint64_t)pcVar40 >> 8),1);
  if (local_48 != (char *)0x0) {
    FUN_00d50b20();
  }
LAB_01ac0de0:
  if (local_48 != (char *)0x0) {
    FUN_00d50b20();
  }
  return uVar28 & 0xffffffff;
}

