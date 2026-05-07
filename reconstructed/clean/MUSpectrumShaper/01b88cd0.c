// Function: FUN_01b88cd0
// Address: 01b88cd0
// Size: 8187 bytes
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


void FUN_01b88cd0(void* param_1,uint64_t param_2)

{
  float fVar1;
  int64_t lVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int64_t lVar10;
  char cVar11;
  int iVar12;
  void *pvVar13;
  uint64_t uVar14;
  int64_t *arg1;
  int64_t *this_ptr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint64_t uVar23;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  uint8_t auVar26 [16];
  float local_b8;
  float fStack_b4;
  float local_98;
  float fStack_94;
  float local_88;
  float fStack_84;
  int64_t local_58;
  char local_50;
  float local_40;
  
  iVar12 = FUN_01d3a5a0();
  if ((iVar12 != 5) &&
     ((iVar12 = FUN_01d3a5a0(), iVar12 != 1 || (iVar12 = FUN_01d3b630(), iVar12 != 1)))) {
    FUN_01e459c0();
    return;
  }
  *(void*)(this_ptr + 0x30) = 0;
  FUN_01e4ac90();
  if (this_ptr[0x29] == 0) {
    return;
  }
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar11 = FUN_0188f1d0();
  if (cVar11 != '\0') {
    return;
  }
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0188f1e0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar11 = FUN_017f2980();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (cVar11 != '\0') {
    return;
  }
  FUN_01e3f820();
  FUN_01d3abf0();
  uVar23 = FUN_01e466c0();
  local_98 = (float)uVar23;
  fStack_94 = (float)((uint64_t)uVar23 >> 0x20);
  auVar25._0_8_ = _powf();
  auVar25._8_8_ = extraout_XMM0_Qb;
  fStack_84 = (float)((uint64_t)param_2 >> 0x20);
  auVar24._4_12_ = auVar25._4_12_;
  auVar24._0_4_ = (float)auVar25._0_8_ + fStack_84 * fStack_84;
  fVar15 = (float)_powf(auVar24._0_8_);
  fVar17 = g_02390124;
  if (g_02390124 <= fVar15 / g_02420c90) {
    fVar17 = fVar15 / g_02420c90;
  }
  fVar15 = g_0241da20;
  if (fVar17 <= g_0241da20) {
    fVar15 = fVar17;
  }
  auVar25 = roundss(ZEXT816(0),
                    ZEXT416((uint)((float)((uint)(g_0241c3ec * fVar15) & g_023945e0 |
                                          g_02394dc8) + g_0241c3ec * fVar15)),0xb);
  fVar21 = auVar25._0_4_;
  fVar16 = fVar21 + g_02390124;
  local_88 = (float)param_2;
  uVar23 = FUN_00d05530();
  local_88 = local_88 - fVar21;
  fVar16 = fVar16 + g_023b1608;
  fVar17 = local_88 / *(float *)((int64_t)this_ptr + 0x184);
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar16 = fVar16 + g_02411474;
  fVar18 = (float)FUN_0188ef40();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar19 = g_023945a4 + fVar16;
  fVar20 = (float)FUN_0188f0f0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar19 = fVar19 + g_02390124;
  FUN_0188eed0();
  pvVar13 = _pthread_getspecific(param_1);
  if (pvVar13 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_b8 = (float)uVar23;
  fVar21 = fVar21 + local_b8;
  FUN_0188efb0();
  fVar1 = *(float *)((int64_t)this_ptr + 0x184);
  cVar11 = FUN_00d05410();
  fStack_b4 = (float)((uint64_t)uVar23 >> 0x20);
  if (cVar11 == '\0') {
    cVar11 = FUN_00d05410();
    if (cVar11 != '\0') {
      *(void*)((int64_t)this_ptr + 0x182) = 1;
      FUN_01b880f0();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar15 = (float)FUN_0188f0f0();
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0188efb0();
      bVar5 = false;
      bVar6 = true;
      goto LAB_01b893bd;
    }
    cVar11 = FUN_00d05410();
    if (cVar11 != '\0') {
      *(void*)((int64_t)this_ptr + 0x183) = 1;
      FUN_01b88350();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
LAB_01b8a686:
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar15 = (float)FUN_0188f1c0();
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0188f020();
      bVar5 = false;
      bVar6 = false;
      bVar7 = false;
      bVar8 = true;
      goto LAB_01b893cb;
    }
    if (local_98 < fVar21) {
LAB_01b8a921:
      *(void*)(this_ptr + 0x30) = 1;
      FUN_01b87c30();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      pvVar13 = _pthread_getspecific(param_1);
      if (pvVar13 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0188eed0();
      fVar15 = 0.0;
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      goto LAB_01b893c4;
    }
    auVar26._0_12_ = ZEXT812(0);
    auVar26._12_4_ = 0;
    auVar25 = roundss(auVar26,ZEXT416((uint)((float)(g_02394dc8 |
                                                    g_023945e0 & (uint)(fVar15 * g_023908ec)) +
                                            fVar15 * g_023908ec)),0xb);
    fVar22 = auVar25._0_4_ * g_0239011c;
    fVar18 = fVar18 * fVar17 + fVar21;
    fVar15 = fVar18 - fVar22;
    if (local_98 < fVar15) goto LAB_01b8a921;
    if ((fStack_b4 + fVar16 + (fStack_84 - fVar19) + g_0240cdd8 < fStack_94) &&
       (fVar21 < local_98)) {
      FUN_01b88a70();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      bVar4 = true;
      bVar3 = 1;
LAB_01b8a881:
      bVar9 = false;
      bVar8 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      fVar15 = 0.0;
      goto LAB_01b893d9;
    }
    fVar16 = fVar20 * fVar17 + fVar21;
    fVar22 = fVar22 + fVar16;
    if (fVar22 < local_98) {
      *(void*)((int64_t)this_ptr + 0x183) = 1;
      FUN_01b88350();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      goto LAB_01b8a686;
    }
    bVar4 = false;
    if (local_98 < fVar15) {
      bVar3 = 0;
      goto LAB_01b8a881;
    }
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    bVar9 = false;
    bVar3 = 0;
    fVar15 = 0.0;
    if (fVar22 < local_98) goto LAB_01b893d9;
    *(void*)((int64_t)this_ptr + 0x181) = 0x101;
    if ((fVar18 != fVar16) || (NAN(fVar18) || NAN(fVar16))) {
      FUN_01b885b0();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_01b88810();
      if ((local_50 == '\0') && (local_58 != 0)) {
        FUN_00d50b00();
      }
      FUN_01e4ac90();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
    }
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar15 = (float)FUN_0188ef40();
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188efb0();
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    bVar8 = false;
    bVar9 = true;
  }
  else {
    *(void*)((int64_t)this_ptr + 0x181) = 1;
    FUN_01b87e90();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_01e4ac90();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar15 = (float)FUN_0188ef40();
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188efb0();
    bVar6 = false;
    bVar5 = true;
LAB_01b893bd:
    bVar7 = false;
LAB_01b893c4:
    bVar8 = false;
LAB_01b893cb:
    bVar9 = false;
  }
  bVar4 = true;
  bVar3 = 0;
LAB_01b893d9:
  iVar12 = FUN_01d3a5a0();
  if ((iVar12 == 1) && (iVar12 = FUN_01d3b630(), iVar12 == 1)) {
    cVar11 = FUN_01e420b0();
    if (cVar11 == '\0') {
      FUN_01e42250();
    }
    uVar14 = FUN_01d3b590();
    if ((uVar14 & 2) == 0) {
      do {
        (**(code **)(*this_ptr + 0x620))();
        do {
          do {
            (**(code **)(*this_ptr + 0x658))();
            lVar2 = *arg1;
            if (lVar2 == local_58) {
              if (((char)arg1[1] == '\0') && (local_58 != 0)) {
                if (local_50 == '\0') {
                  FUN_00d50b00();
                  goto LAB_01b894f0;
                }
LAB_01b894ae:
                *(void*)(arg1 + 1) = 1;
                local_50 = '\0';
              }
              lVar2 = *arg1;
            }
            else {
              lVar10 = arg1[1];
              if (local_50 != '\0') {
                *arg1 = local_58;
                if (((char)lVar10 != '\0') && (lVar2 != 0)) {
                  FUN_00d50b20();
                }
                goto LAB_01b894ae;
              }
              if (local_58 != 0) {
                FUN_00d50b00();
              }
              *arg1 = local_58;
              if (((char)lVar10 != '\0') && (lVar2 != 0)) {
                FUN_00d50b20();
              }
LAB_01b894f0:
              *(void*)(arg1 + 1) = 1;
              lVar2 = *arg1;
            }
            if (lVar2 == 0) {
              if ((local_50 != '\0') && (local_58 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01b8a8f7;
            }
            iVar12 = FUN_01d3a5a0();
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
            if (iVar12 == 6) goto LAB_01b8a8f7;
            iVar12 = FUN_01d3a5a0();
          } while (iVar12 != 5);
          FUN_01d3abf0();
          fVar16 = (float)FUN_01e466c0();
        } while (!bVar4);
        fVar19 = *(float *)((int64_t)this_ptr + 0x184) * g_02394234;
        fVar20 = (fVar16 - local_98) / fVar17 + fVar15;
        fVar18 = 0.0;
        if (0.0 <= fVar20) {
          fVar18 = fVar20;
        }
        local_40 = fVar19;
        if (fVar18 <= fVar19) {
          local_40 = fVar18;
        }
        if (bVar5) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188eee0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188ef50();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar19 <= fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f030();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f0f0();
          if (fVar18 < local_40) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f030();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < g_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar20 = (float)FUN_0188f0f0();
          if (fVar18 < fVar20) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f0f0();
            FUN_0188f100();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar19 <= fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
          }
        }
        if (bVar6) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188f030();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188ef50();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (local_40 < fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188eee0();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < g_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          if (fVar18 < local_40) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f100();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f0f0();
          if (fVar19 <= fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
          }
        }
        if (bVar7) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188ee70();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < g_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ef50();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          if (fVar18 < g_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
          }
        }
        if (bVar8) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188f100();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188efc0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f0f0();
          if (local_40 < fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f030();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (local_40 < fVar18) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188eee0();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < g_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efb0();
            FUN_0188ee70();
          }
          if (local_40 < g_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ef50();
          }
        }
        if (bVar9) {
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f0f0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar20 = (float)FUN_0188ef40();
          local_40 = local_40 + (fVar18 - fVar20);
          if (fVar19 <= local_40) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
            local_40 = fVar19;
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188eee0();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188f030();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0188ef50();
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188ef40();
          if (fVar18 < g_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          if (fVar18 < local_40) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188f100();
          }
          pvVar13 = _pthread_getspecific(param_1);
          if (pvVar13 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar18 = (float)FUN_0188f1c0();
          if (fVar18 < g_0239425c) {
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188ee70();
            pvVar13 = _pthread_getspecific(param_1);
            if (pvVar13 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0188efc0();
          }
        }
        if ((bool)(g_0239424c < fVar16 - fVar21 & bVar3)) {
          fVar18 = (((local_98 - fVar21) / local_88) / ((fVar16 - fVar21) / local_88)) * fVar1;
          fVar16 = g_024112a8;
          if (g_024112a8 <= fVar18) {
            fVar16 = fVar18;
          }
          fVar18 = g_0241deb0;
          if (fVar16 <= g_0241deb0) {
            fVar18 = fVar16;
          }
          *(float *)((int64_t)this_ptr + 0x184) = fVar18;
        }
      } while( true );
    }
    *(void*)((int64_t)this_ptr + 0x184) = 0x3f19999a;
    pvVar13 = _pthread_getspecific(param_1);
    if (pvVar13 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0188f2b0();
  }
  else {
LAB_01b8a8f7:
    *(void*)(this_ptr + 0x30) = 0;
  }
  (**(code **)(*this_ptr + 0x620))();
  return;
}

