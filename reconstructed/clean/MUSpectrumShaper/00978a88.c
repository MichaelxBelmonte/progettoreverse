// Function: FUN_00978a88
// Address: 00978a88
// Size: 1141 bytes
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


uint64_t FUN_00978a88(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t arg1;
  void *pvVar10;
  int64_t lVar11;
  int64_t this_ptr;
  size_t sVar12;
  
  lVar7 = *(int64_t *)(this_ptr + 8);
  lVar6 = *(int64_t *)(this_ptr + 0x10);
  if (lVar6 - lVar7 == *(int64_t *)(arg1 + 0x10) - *(int64_t *)(arg1 + 8)) {
    for (; lVar7 != lVar6; lVar7 = lVar7 + 0x390) {
      cVar3 = FUN_00976c80();
      if (cVar3 == '\0') goto LAB_00978eea;
    }
    if (((*(char *)(this_ptr + 0x20) == *(char *)(arg1 + 0x20)) &&
        (*(char *)(this_ptr + 0x21) == *(char *)(arg1 + 0x21))) &&
       (*(int *)(this_ptr + 0x24) == *(int *)(arg1 + 0x24))) {
      bVar1 = *(byte *)(this_ptr + 0x28);
      pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar5 = *(void **)(this_ptr + 0x30);
      }
      bVar2 = *(byte *)(arg1 + 0x28);
      if ((bVar2 & 1) == 0) {
        pvVar10 = (void *)(uint64_t)(bVar2 >> 1);
      }
      else {
        pvVar10 = *(void **)(arg1 + 0x30);
      }
      if (pvVar5 == pvVar10) {
        sVar12 = CONCAT31((int3)((uint)param_3 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar7 = arg1 + 0x29;
        }
        else {
          lVar7 = *(int64_t *)(arg1 + 0x38);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar5 != (void *)0x0) {
            pvVar5 = (void *)0x0;
            do {
              if (*(char *)(this_ptr + 0x29 + (int64_t)pvVar5) !=
                  *(char *)(lVar7 + (int64_t)pvVar5)) goto LAB_00978eea;
              pvVar5 = (void *)((int64_t)pvVar5 + 1);
            } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
          }
        }
        else if ((pvVar5 != (void *)0x0) &&
                (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar5,sVar12), iVar4 != 0))
        goto LAB_00978eea;
        bVar1 = *(byte *)(this_ptr + 0x40);
        pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar5 = *(void **)(this_ptr + 0x48);
        }
        bVar2 = *(byte *)(arg1 + 0x40);
        if ((bVar2 & 1) == 0) {
          pvVar10 = (void *)(uint64_t)(bVar2 >> 1);
        }
        else {
          pvVar10 = *(void **)(arg1 + 0x48);
        }
        if (pvVar5 == pvVar10) {
          sVar12 = CONCAT31((int3)(sVar12 >> 8),1);
          if ((bVar2 & 1) == 0) {
            lVar7 = arg1 + 0x41;
          }
          else {
            lVar7 = *(int64_t *)(arg1 + 0x50);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar5 != (void *)0x0) {
              pvVar5 = (void *)0x0;
              do {
                if (*(char *)(this_ptr + 0x41 + (int64_t)pvVar5) !=
                    *(char *)(lVar7 + (int64_t)pvVar5)) goto LAB_00978eea;
                pvVar5 = (void *)((int64_t)pvVar5 + 1);
              } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
            }
          }
          else if ((pvVar5 != (void *)0x0) &&
                  (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar5,sVar12), iVar4 != 0))
          goto LAB_00978eea;
          if ((*(int64_t *)(this_ptr + 0x58) == *(int64_t *)(arg1 + 0x58)) &&
             (*(int64_t *)(this_ptr + 0x60) == *(int64_t *)(arg1 + 0x60))) {
            bVar1 = *(byte *)(this_ptr + 0x68);
            pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
            if ((bVar1 & 1) != 0) {
              pvVar5 = *(void **)(this_ptr + 0x70);
            }
            bVar2 = *(byte *)(arg1 + 0x68);
            if ((bVar2 & 1) == 0) {
              pvVar10 = (void *)(uint64_t)(bVar2 >> 1);
            }
            else {
              pvVar10 = *(void **)(arg1 + 0x70);
            }
            if (pvVar5 == pvVar10) {
              if ((bVar2 & 1) == 0) {
                lVar7 = arg1 + 0x69;
              }
              else {
                lVar7 = *(int64_t *)(arg1 + 0x78);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar5 != (void *)0x0) {
                  pvVar5 = (void *)0x0;
                  do {
                    if (*(char *)(this_ptr + 0x69 + (int64_t)pvVar5) !=
                        *(char *)(lVar7 + (int64_t)pvVar5)) goto LAB_00978eea;
                    pvVar5 = (void *)((int64_t)pvVar5 + 1);
                  } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
                }
              }
              else if ((pvVar5 != (void *)0x0) &&
                      (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar5,
                                       CONCAT31((int3)(sVar12 >> 8),1)), iVar4 != 0))
              goto LAB_00978eea;
              if ((((*(char *)(this_ptr + 0x80) == *(char *)(arg1 + 0x80)) &&
                   (*(int *)(this_ptr + 0x84) == *(int *)(arg1 + 0x84))) &&
                  (*(char *)(this_ptr + 0x27b) == *(char *)(arg1 + 0x27b))) &&
                 (((*(char *)(this_ptr + 0x27b) == '\0' || (cVar3 = FUN_009b2a98(), cVar3 != '\0'))
                  && ((*(int *)(this_ptr + 0x198) == *(int *)(arg1 + 0x198) &&
                      ((*(char *)(this_ptr + 0x19c) == *(char *)(arg1 + 0x19c) &&
                       (*(int64_t *)(this_ptr + 0x1a0) == *(int64_t *)(arg1 + 0x1a0)))))))))
              {
                lVar7 = *(int64_t *)(this_ptr + 0x1a8);
                lVar6 = *(int64_t *)(this_ptr + 0x1b0) - lVar7;
                if (lVar6 == *(int64_t *)(arg1 + 0x1b0) - *(int64_t *)(arg1 + 0x1a8)) {
                  lVar8 = arg1;
                  if (lVar7 != *(int64_t *)(this_ptr + 0x1b0)) {
                    lVar11 = 0;
                    do {
                      lVar8 = CONCAT71((int7)((uint64_t)lVar8 >> 8),*(char *)(lVar7 + lVar11));
                      if (*(char *)(lVar7 + lVar11) !=
                          *(char *)(*(int64_t *)(arg1 + 0x1a8) + lVar11)) goto LAB_00978eea;
                      lVar11 = lVar11 + 1;
                    } while (lVar6 != lVar11);
                  }
                  if ((*(char *)(this_ptr + 0x280) == *(char *)(arg1 + 0x280)) &&
                     (((*(char *)(this_ptr + 0x280) == '\0' ||
                       (cVar3 = FUN_009b3030(), cVar3 != '\0')) &&
                      (*(char *)(this_ptr + 0x281) == *(char *)(arg1 + 0x281))))) {
                    if (*(char *)(this_ptr + 0x281) != '\0') {
                      lVar8 = *(int64_t *)(this_ptr + 0x240);
                      lVar7 = *(int64_t *)(this_ptr + 0x248);
                      if (lVar7 - lVar8 !=
                          *(int64_t *)(arg1 + 0x248) - *(int64_t *)(arg1 + 0x240))
                      goto LAB_00978eea;
                      for (; lVar8 != lVar7; lVar8 = lVar8 + 0x58) {
                        cVar3 = FUN_009796ac();
                        if (cVar3 == '\0') goto LAB_00978eea;
                      }
                    }
                    if (*(char *)(this_ptr + 0x282) == *(char *)(arg1 + 0x282)) {
                      uVar9 = CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
                      if (*(char *)(this_ptr + 0x282) == '\0') goto LAB_00978eec;
                      lVar7 = *(int64_t *)(this_ptr + 600);
                      lVar6 = *(int64_t *)(this_ptr + 0x260);
                      if (lVar6 - lVar7 ==
                          *(int64_t *)(arg1 + 0x260) - *(int64_t *)(arg1 + 600)) {
                        for (; lVar7 != lVar6; lVar7 = lVar7 + 0x180) {
                          cVar3 = FUN_009b34e8();
                          if (cVar3 == '\0') goto LAB_00978eea;
                        }
                        goto LAB_00978eec;
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
  }
LAB_00978eea:
  uVar9 = 0;
LAB_00978eec:
  return uVar9 & 0xffffffff;
}

