// Function: FUN_018753f0
// Address: 018753f0
// Size: 4418 bytes
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


void FUN_018753f0(void* param_1)

{
  uint uVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  void *pvVar12;
  void*puVar13;
  int64_t *plVar14;
  void*puVar15;
  int64_t lVar16;
  int iVar17;
  int64_t lVar18;
  int iVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t *arg1;
  int64_t lVar22;
  int64_t lVar23;
  int64_t this_ptr;
  int64_t lVar24;
  uint64_t uVar25;
  int64_t lVar26;
  uint64_t uVar27;
  uint32_t uVar28;
  float fVar29;
  uint32_t uVar30;
  float fVar31;
  int local_9c;
  int64_t local_60;
  char local_58;
  
  lVar3 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if (*(int *)(*arg1 + 0xc) != 0) {
    pvVar12 = _pthread_getspecific(param_1);
    if (pvVar12 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar9 = FUN_017874a0();
    FUN_00c8e2b0(g_02417200,8);
    if ((local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    uVar28 = FUN_00c92160();
    FUN_00c8e2b0(uVar28,0x10);
    if ((local_58 == '\0') && (local_60 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (*(char *)(this_ptr + 0x78) == '\0') {
      local_9c = -1;
    }
    else {
      lVar16 = *(int64_t *)(**(int64_t **)(*arg1 + 0x10) + 0x18);
      if (lVar16 != 0) {
        FUN_00d50b00();
      }
      if (*(int *)(lVar16 + 0xc) < 1) {
        fVar31 = 0.0;
        fVar29 = 0.0;
      }
      else {
        fVar29 = 0.0;
        lVar21 = 0;
        fVar31 = 0.0;
        do {
          lVar18 = *(int64_t *)(*(int64_t *)(lVar16 + 0x10) + lVar21 * 8);
          if (lVar18 != 0) {
            FUN_00d50b00();
          }
          iVar17 = *(int *)(lVar18 + 0xc) + *(int *)(lVar18 + 0x10);
          iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc
          ;
          if ((iVar17 >> 0x1f & 0xcU) + iVar17 == *(int *)(this_ptr + 0x7c)) {
            switch(*(int *)(lVar18 + 0x10)) {
            case 0:
              fVar29 = fVar29 + *(float *)(lVar18 + 0x14);
              break;
            case 2:
              fVar31 = fVar31 + *(float *)(lVar18 + 0x14) * g_02394dc0;
              break;
            case 7:
              fVar29 = fVar29 + *(float *)(lVar18 + 0x14) * g_02394dc0;
              break;
            case 9:
              fVar31 = fVar31 + *(float *)(lVar18 + 0x14);
            }
          }
          FUN_00d50b20();
          lVar21 = lVar21 + 1;
        } while (lVar21 < *(int *)(lVar16 + 0xc));
      }
      local_9c = 0x18;
      if (fVar29 < fVar31) {
        local_9c = 0x24;
      }
      FUN_00d50b20();
    }
    pcVar8 = g_02572370;
    pcVar7 = g_025683d8;
    lVar16 = *arg1;
    if (0 < *(int *)(lVar16 + 0xc)) {
      lVar21 = 0;
LAB_01875762:
      lVar16 = *(int64_t *)(*(int64_t *)(lVar16 + 0x10) + lVar21 * 8);
      if (lVar16 != 0) {
        FUN_00d50b00();
      }
      lVar18 = *(int64_t *)(lVar16 + 0x18);
      if ((*(int *)(lVar18 + 0xc) != 0) &&
         (g_0239425c < *(float *)(**(int64_t **)(lVar18 + 0x10) + 0x14))) {
        FUN_00d50b00();
        *(void*)(lVar16 + 0x38) = 0xffffffff;
        if (3 < *(int *)(lVar18 + 0xc)) {
          if (local_60 != 0) {
            FUN_00d50b00();
          }
          puVar13 = (void*)FUN_00e8fc40();
          FUN_00d4ff40();
          *puVar13 = &g_025683c0;
          (*pcVar7)();
          FUN_00c92170();
          uVar28 = FUN_00c92160();
          lVar20 = **(int64_t **)(lVar18 + 0x10);
          iVar17 = *(int *)(puVar13 + 3);
          FUN_00c8e340(uVar28,1);
          lVar22 = puVar13[2];
          *(void*)(lVar22 + iVar17) = *(void*)(lVar20 + 0xc);
          iVar17 = *(int *)(local_60 + 0x18);
          iVar11 = iVar17 + 3;
          if (-1 < iVar17) {
            iVar11 = iVar17;
          }
          if (3 < iVar17) {
            plVar14 = *(int64_t **)(lVar18 + 0x10);
            lVar20 = 0;
            do {
              if (*(int *)(*(int64_t *)(local_60 + 0x10) + lVar20 * 4) == *(int *)(*plVar14 + 0x10)
                 ) {
                fVar29 = *(float *)(*plVar14 + 0x14) * g_02394234;
                if ((*(int *)(lVar18 + 0xc) < 2) ||
                   (lVar20 = plVar14[1],
                   *(float *)(lVar20 + 0x14) <= fVar29 && fVar29 != *(float *)(lVar20 + 0x14)))
                goto LAB_01875994;
                lVar24 = 1;
                goto LAB_018758e0;
              }
              lVar20 = lVar20 + 1;
            } while (iVar11 >> 2 != (int)lVar20);
          }
          if (cVar9 != '\0') {
            *(void*)(lVar16 + 0x38) = 0;
          }
          goto LAB_01875994;
        }
        goto LAB_01875f1a;
      }
      goto LAB_01875f22;
    }
LAB_01875f38:
    lVar16 = **(int64_t **)(lVar16 + 0x10);
    if (lVar16 != 0) {
      FUN_00d50b00();
    }
    if (((*(char *)(this_ptr + 0x78) == '\0') || (local_9c == -1)) ||
       (*(char *)(this_ptr + 0x80) == '\0')) {
      lVar21 = *arg1;
      iVar17 = *(int *)(lVar21 + 0xc);
      if (1 < iVar17) {
        FUN_00d23620();
        lVar21 = *arg1;
        iVar17 = *(int *)(lVar21 + 0xc);
      }
    }
    else {
      while( true ) {
        lVar21 = *arg1;
        iVar17 = *(int *)(lVar21 + 0xc);
        if (iVar17 < 2) break;
        FUN_00d23740();
      }
    }
    if (0 < iVar17) {
      lVar18 = 0;
      do {
        lVar21 = *(int64_t *)(*(int64_t *)(lVar21 + 0x10) + lVar18 * 8);
        if (lVar21 != 0) {
          FUN_00d50b00();
        }
        lVar20 = *(int64_t *)(lVar21 + 0x18);
        if ((*(int *)(lVar20 + 0xc) != 0) &&
           (g_0239425c < *(float *)(**(int64_t **)(lVar20 + 0x10) + 0x14))) {
          FUN_00d50b00();
          if (3 < *(int *)(lVar20 + 0xc)) {
            puVar13 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar13 = &g_02572358;
            (*pcVar8)();
            lVar22 = **(int64_t **)(lVar20 + 0x10);
            if (lVar22 != 0) {
              FUN_00d50b00();
            }
            if (cVar9 == '\0') {
              iVar17 = *(int *)(lVar22 + 0x10);
              iVar11 = *(int *)(lVar22 + 0xc) + iVar17;
              iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) *
                                -0xc;
              cVar10 = ((byte)(iVar11 >> 0x1f) & 0xc) + (char)iVar11;
              if (iVar17 == 2) {
                *(void*)(lVar22 + 0x10) = 9;
                cVar10 = cVar10 + -9;
              }
              else {
                if (iVar17 != 7) goto LAB_01876104;
                *(void*)(lVar22 + 0x10) = 0;
              }
              cVar10 = cVar10 + ((char)((uint)(int)(short)(cVar10 * 0x2b) >> 9) - (cVar10 >> 7)) *
                                -0xc;
              iVar17 = cVar10 + 0xc;
              if (-1 < cVar10) {
                iVar17 = (int)cVar10;
              }
              *(int *)(lVar22 + 0xc) = iVar17;
            }
LAB_01876104:
            FUN_00d21140();
            if (local_60 != 0) {
              FUN_00d50b00();
            }
            if (0 < *(int *)(lVar20 + 0xc)) {
              lVar24 = 0;
LAB_01876180:
              if (*(int *)((int64_t)puVar13 + 0xc) < 4) {
                lVar26 = *(int64_t *)(*(int64_t *)(lVar20 + 0x10) + lVar24 * 8);
                if (lVar26 != 0) {
                  FUN_00d50b00();
                }
                iVar17 = *(int *)(local_60 + 0x18);
                iVar11 = iVar17 + 3;
                if (-1 < iVar17) {
                  iVar11 = iVar17;
                }
                if (3 < iVar17) {
                  iVar17 = *(int *)(lVar26 + 0x10);
                  lVar23 = 0;
                  do {
                    if (*(int *)(*(int64_t *)(local_60 + 0x10) + lVar23 * 4) == iVar17) {
                      if (cVar9 == '\0') {
                        iVar11 = *(int *)(lVar26 + 0xc) + iVar17;
                        iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) -
                                          (iVar11 >> 0x1f)) * -0xc;
                        cVar10 = ((byte)(iVar11 >> 0x1f) & 0xc) + (char)iVar11;
                        if (iVar17 == 2) {
                          *(void*)(lVar26 + 0x10) = 9;
                          cVar10 = cVar10 + -9;
                        }
                        else {
                          if (iVar17 != 7) goto LAB_01876282;
                          *(void*)(lVar26 + 0x10) = 0;
                        }
                        cVar10 = cVar10 + ((char)((uint)(int)(short)(cVar10 * 0x2b) >> 9) -
                                          (cVar10 >> 7)) * -0xc;
                        iVar17 = cVar10 + 0xc;
                        if (-1 < cVar10) {
                          iVar17 = (int)cVar10;
                        }
                        *(int *)(lVar26 + 0xc) = iVar17;
                      }
LAB_01876282:
                      if (*(int *)((int64_t)puVar13 + 0xc) < 1) goto LAB_018762da;
                      lVar23 = 0;
                      goto LAB_01876290;
                    }
                    lVar23 = lVar23 + 1;
                  } while (iVar11 >> 2 != (int)lVar23);
                }
                goto LAB_01876300;
              }
            }
LAB_01876316:
            bVar6 = true;
            if ((int64_t)*(int *)(lVar21 + 0x38) == -1) {
              lVar21 = 0;
            }
            else {
              lVar21 = *(int64_t *)
                        (*(int64_t *)(lVar20 + 0x10) + (int64_t)*(int *)(lVar21 + 0x38) * 8);
              if (lVar21 == 0) {
                lVar21 = 0;
                bVar6 = true;
              }
              else {
                FUN_00d50b00();
                bVar6 = false;
              }
            }
            uVar28 = FUN_00d216c0();
            FUN_00d214d0(uVar28,*(void*)(lVar20 + 0xc));
            if ((lVar21 != 0) && (FUN_00d21140(), !bVar6)) {
              FUN_00d50b20();
            }
            if (local_60 != 0) {
              FUN_00d50b20();
            }
            if (lVar22 != 0) {
              FUN_00d50b20();
            }
            if (puVar13 != (void*)0x0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
        lVar18 = lVar18 + 1;
        lVar21 = *arg1;
        iVar17 = *(int *)(lVar21 + 0xc);
      } while (lVar18 < iVar17);
    }
    if (((local_9c != -1) && (*(char *)(this_ptr + 0x78) != '\0')) && (iVar17 != 0)) {
      uVar28 = *(void*)(this_ptr + 0x7c);
      puVar13 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar13 = &g_0260d210;
      *(void*)((int64_t)puVar13 + 0xc) = 0;
      *(void*)((int64_t)puVar13 + 0x14) = 0;
      uVar30 = FUN_00d500e0();
      *(void*)((int64_t)puVar13 + 0xc) = uVar28;
      *(int *)(puVar13 + 2) = local_9c;
      *(void*)((int64_t)puVar13 + 0x14) = 0x3f800000;
      if (*(char *)(this_ptr + 0x80) == '\0') {
        FUN_00d21140();
      }
      else {
        FUN_00d23370(uVar30,0);
      }
      FUN_00d50b20();
    }
    if (lVar16 != 0) {
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar3) {
                        ___stack_chk_fail();
  }
  return;
  while( true ) {
    plVar14 = *(int64_t **)(lVar18 + 0x10);
    lVar20 = plVar14[lVar24];
    if (*(float *)(lVar20 + 0x14) <= fVar29 && fVar29 != *(float *)(lVar20 + 0x14)) break;
LAB_018758e0:
    if (*(int *)(lVar20 + 0xc) == *(int *)(*plVar14 + 0xc)) {
LAB_018758ec:
      iVar17 = *(int *)(puVar13 + 3);
    }
    else {
      iVar17 = *(int *)(puVar13 + 3);
      lVar26 = (int64_t)iVar17;
      iVar11 = iVar17 + 3;
      if (-1 < lVar26) {
        iVar11 = iVar17;
      }
      if (3 < lVar26) {
        lVar23 = 0;
        do {
          if (*(int *)(lVar22 + lVar23 * 4) == *(int *)(lVar20 + 0xc)) goto LAB_018758ec;
          lVar23 = lVar23 + 1;
        } while (iVar11 >> 2 != (int)lVar23);
      }
      FUN_00c8e340(lVar22,1);
      lVar22 = puVar13[2];
      *(void*)(lVar22 + lVar26) = *(void*)(lVar20 + 0xc);
      iVar17 = *(int *)(puVar13 + 3);
    }
    if ((7 < iVar17) || (lVar24 = lVar24 + 1, *(int *)(lVar18 + 0xc) <= lVar24)) break;
  }
LAB_01875994:
  puVar15 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar15 = &g_02572358;
  uVar28 = (*pcVar8)();
  uVar1 = *(uint *)(lVar18 + 0xc);
  if (0 < (int)uVar1) {
    if (9 < (int)uVar1) {
      uVar1 = 10;
    }
    uVar27 = 0;
LAB_01875a09:
    lVar20 = *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + uVar27 * 8);
    if (lVar20 != 0) {
      uVar28 = FUN_00d50b00();
    }
    iVar17 = *(int *)(local_60 + 0x18);
    iVar11 = iVar17 + 3;
    if (-1 < iVar17) {
      iVar11 = iVar17;
    }
    if (3 < iVar17) {
      iVar2 = *(int *)(lVar20 + 0x10);
      iVar17 = *(int *)(lVar20 + 0xc) + iVar2;
      iVar17 = iVar17 + (((uint)(iVar17 / 6 + (iVar17 >> 0x1f)) >> 1) - (iVar17 >> 0x1f)) * -0xc;
      iVar19 = iVar2 + -7 >> 0x1f;
      iVar19 = (((uint)((iVar2 + -7) / 6 + iVar19) >> 1) - iVar19) * -0xc + iVar2 + -7;
      lVar22 = 0;
      do {
        if (*(int *)(*(int64_t *)(local_60 + 0x10) + lVar22 * 4) == iVar2) {
          iVar11 = *(int *)(puVar13 + 3);
          iVar5 = iVar11 + 3;
          if (-1 < iVar11) {
            iVar5 = iVar11;
          }
          if (3 < iVar11) {
            lVar22 = 0;
            goto LAB_01875b10;
          }
          break;
        }
        lVar22 = lVar22 + 1;
      } while (iVar11 >> 2 != (int)lVar22);
    }
    goto LAB_01875c50;
  }
LAB_01875c67:
  if (*(int *)((int64_t)puVar15 + 0xc) == 0) {
    if (0 < (int)*(uint *)(lVar18 + 0xc)) {
      iVar17 = *(int *)(local_60 + 0x18);
      iVar11 = iVar17 + 3;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      if (3 < iVar17) {
        uVar27 = 0;
        do {
          lVar20 = 0;
          do {
            if (*(int *)(*(int64_t *)(local_60 + 0x10) + lVar20 * 4) ==
                *(int *)(*(int64_t *)(*(int64_t *)(lVar18 + 0x10) + uVar27 * 8) + 0x10)) {
              lVar18 = *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + (uVar27 & 0xffffffff) * 8);
              if (lVar18 != 0) {
                FUN_00d50b00();
              }
              uVar28 = FUN_00d23620();
              FUN_00d23370(uVar28,0);
              if (lVar18 != 0) {
                FUN_00d50b20();
              }
              goto LAB_01875e10;
            }
            lVar20 = lVar20 + 1;
          } while (iVar11 >> 2 != (int)lVar20);
          uVar27 = uVar27 + 1;
        } while (uVar27 != *(uint *)(lVar18 + 0xc));
LAB_01875e10:
        if (puVar15 == (void*)0x0) goto LAB_01875ef9;
      }
    }
  }
  else {
    FUN_00d242c0(uVar28,0);
    lVar18 = *(int64_t *)puVar15[2];
    if (lVar18 != 0) {
      FUN_00d50b00();
    }
    fVar29 = *(float *)(lVar18 + 0x18) * g_02417224;
    if (((*(int *)(lVar18 + 0x10) == 9) || (*(int *)(lVar18 + 0x10) == 2)) &&
       (1 < *(int *)((int64_t)puVar15 + 0xc))) {
      lVar20 = 1;
      do {
        lVar22 = *(int64_t *)(puVar15[2] + lVar20 * 8);
        if (lVar22 != 0) {
          FUN_00d50b00();
        }
        if (*(float *)(lVar22 + 0x18) <= fVar29 && fVar29 != *(float *)(lVar22 + 0x18)) {
          FUN_00d50b20();
          break;
        }
        if ((*(int *)(lVar22 + 0xc) == *(int *)(lVar18 + 0xc)) && (*(int *)(lVar22 + 0x10) == 0)) {
          if (lVar18 != lVar22) {
            FUN_00d50b00();
            FUN_00d50b20();
          }
          if (lVar22 != 0) {
            FUN_00d50b20();
          }
          break;
        }
        FUN_00d50b20();
        lVar20 = lVar20 + 1;
      } while (lVar20 < *(int *)((int64_t)puVar15 + 0xc));
    }
    iVar17 = FUN_00d237a0();
    uVar28 = FUN_00d23620();
    FUN_00d23370(uVar28,0);
    if ((*(int *)(lVar16 + 0x38) == 0) && (iVar17 != 0)) {
      *(void*)(lVar16 + 0x38) = 1;
    }
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01875ef9:
  if (puVar13 != (void*)0x0) {
    FUN_00d50b20();
  }
  if (local_60 != 0) {
    FUN_00d50b20();
  }
LAB_01875f1a:
  FUN_00d50b20();
LAB_01875f22:
  if (lVar16 != 0) {
    FUN_00d50b20();
  }
  lVar21 = lVar21 + 1;
  lVar16 = *arg1;
  if (*(int *)(lVar16 + 0xc) <= lVar21) goto LAB_01875f38;
  goto LAB_01875762;
  while (lVar22 = lVar22 + 1, iVar5 >> 2 != (int)lVar22) {
LAB_01875b10:
    if (*(int *)(puVar13[2] + lVar22 * 4) == *(int *)(lVar20 + 0xc)) {
      FUN_00d21140();
      uVar28 = *(void*)(lVar20 + 0x14);
      *(void*)(lVar20 + 0x18) = uVar28;
      if (0 < *(int *)(lVar18 + 0xc)) {
        uVar25 = 0;
        goto LAB_01875b9d;
      }
      break;
    }
  }
  goto LAB_01875c50;
LAB_01875b9d:
  do {
    if (uVar27 != uVar25) {
      lVar22 = *(int64_t *)(*(int64_t *)(lVar18 + 0x10) + uVar25 * 8);
      if (lVar22 != 0) {
        FUN_00d50b00();
      }
      iVar11 = *(int *)(lVar22 + 0xc) + *(int *)(lVar22 + 0x10);
      iVar11 = iVar11 + (((uint)(iVar11 / 6 + (iVar11 >> 0x1f)) >> 1) - (iVar11 >> 0x1f)) * -0xc;
      if (((iVar11 >> 0x1f & 0xcU) + iVar11 == (iVar17 >> 0x1f & 0xcU) + iVar17) &&
         (*(int *)(lVar22 + 0x10) == (iVar19 >> 0x1f & 0xcU) + iVar19)) {
        fVar29 = *(float *)(lVar22 + 0x14);
        fVar31 = g_02390124;
        if (fVar29 < *(float *)(lVar20 + 0x14)) {
          fVar31 = fVar29 / *(float *)(lVar20 + 0x14);
        }
        if (iVar2 == 7) {
          fVar31 = fVar31 * fVar31;
        }
        *(float *)(lVar20 + 0x18) = fVar29 * fVar31 + *(float *)(lVar20 + 0x18);
        uVar28 = FUN_00d50b20();
        break;
      }
      uVar28 = FUN_00d50b20();
    }
    uVar25 = uVar25 + 1;
  } while ((int64_t)uVar25 < (int64_t)*(int *)(lVar18 + 0xc));
LAB_01875c50:
  if (lVar20 != 0) {
    uVar28 = FUN_00d50b20();
  }
  uVar27 = uVar27 + 1;
  if (uVar27 == uVar1) goto LAB_01875c67;
  goto LAB_01875a09;
  while (lVar23 = lVar23 + 1, lVar23 < *(int *)((int64_t)puVar13 + 0xc)) {
LAB_01876290:
    lVar4 = *(int64_t *)(puVar13[2] + lVar23 * 8);
    if (lVar4 != 0) {
      FUN_00d50b00();
    }
    if ((*(int *)(lVar4 + 0xc) != *(int *)(lVar26 + 0xc)) ||
       (bVar6 = true, *(int *)(lVar4 + 0x10) != *(int *)(lVar26 + 0x10))) {
      bVar6 = false;
    }
    FUN_00d50b20();
    if (bVar6) goto LAB_01876300;
  }
LAB_018762da:
  FUN_00d235a0();
LAB_01876300:
  if (lVar26 != 0) {
    FUN_00d50b20();
  }
  lVar24 = lVar24 + 1;
  if (*(int *)(lVar20 + 0xc) <= lVar24) goto LAB_01876316;
  goto LAB_01876180;
}

