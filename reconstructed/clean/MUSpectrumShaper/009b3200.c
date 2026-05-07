// Function: FUN_009b3200
// Address: 009b3200
// Size: 738 bytes
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


uint64_t FUN_009b3200(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  void *pvVar5;
  uint32_t extraout_var;
  uint64_t uVar6;
  int64_t lVar7;
  void *pvVar8;
  int64_t arg1;
  int64_t lVar9;
  void *pvVar10;
  int64_t lVar11;
  int64_t this_ptr;
  
  if (*(int *)(this_ptr + 8) == *(int *)(arg1 + 8)) {
    lVar11 = *(int64_t *)(this_ptr + 0x10);
    lVar7 = *(int64_t *)(this_ptr + 0x18) - lVar11;
    if (lVar7 == *(int64_t *)(arg1 + 0x18) - *(int64_t *)(arg1 + 0x10)) {
      if (lVar11 != *(int64_t *)(this_ptr + 0x18)) {
        lVar9 = 0;
        do {
          if (*(char *)(lVar11 + lVar9) != *(char *)(*(int64_t *)(arg1 + 0x10) + lVar9)) {
            return 0;
          }
          lVar9 = lVar9 + 1;
        } while (lVar7 != lVar9);
      }
      bVar1 = *(byte *)(this_ptr + 0x28);
      pvVar8 = (void *)(uint64_t)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar8 = *(void **)(this_ptr + 0x30);
      }
      bVar2 = *(byte *)(arg1 + 0x28);
      if ((bVar2 & 1) == 0) {
        pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
      }
      else {
        pvVar5 = *(void **)(arg1 + 0x30);
      }
      if (pvVar8 == pvVar5) {
        if ((bVar2 & 1) == 0) {
          lVar11 = arg1 + 0x29;
        }
        else {
          lVar11 = *(int64_t *)(arg1 + 0x38);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar8 != (void *)0x0) {
            pvVar8 = (void *)0x0;
            do {
              if (*(char *)(this_ptr + 0x29 + (int64_t)pvVar8) !=
                  *(char *)(lVar11 + (int64_t)pvVar8)) {
                return 0;
              }
              pvVar8 = (void *)((int64_t)pvVar8 + 1);
            } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar8);
          }
        }
        else if ((pvVar8 != (void *)0x0) &&
                (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar8,(uint)bVar1), iVar4 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(this_ptr + 0x40);
        pvVar8 = (void *)(uint64_t)(bVar1 >> 1);
        if ((bVar1 & 1) != 0) {
          pvVar8 = *(void **)(this_ptr + 0x48);
        }
        bVar2 = *(byte *)(arg1 + 0x40);
        if ((bVar2 & 1) == 0) {
          pvVar5 = (void *)(uint64_t)(bVar2 >> 1);
        }
        else {
          pvVar5 = *(void **)(arg1 + 0x48);
        }
        if (pvVar8 == pvVar5) {
          if ((bVar2 & 1) == 0) {
            lVar11 = arg1 + 0x41;
          }
          else {
            lVar11 = *(int64_t *)(arg1 + 0x50);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar8 != (void *)0x0) {
              pvVar8 = (void *)0x0;
              do {
                if (*(char *)(this_ptr + 0x41 + (int64_t)pvVar8) !=
                    *(char *)(lVar11 + (int64_t)pvVar8)) {
                  return 0;
                }
                pvVar8 = (void *)((int64_t)pvVar8 + 1);
              } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar8);
            }
          }
          else if ((pvVar8 != (void *)0x0) &&
                  (iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar8,(uint)bVar1), iVar4 != 0)) {
            return 0;
          }
          if (*(int64_t *)(this_ptr + 0x58) == *(int64_t *)(arg1 + 0x58)) {
            bVar1 = *(byte *)(this_ptr + 0x60);
            pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
            pvVar8 = pvVar5;
            if ((bVar1 & 1) != 0) {
              pvVar8 = *(void **)(this_ptr + 0x68);
            }
            bVar2 = *(byte *)(arg1 + 0x60);
            if ((bVar2 & 1) == 0) {
              pvVar10 = (void *)(uint64_t)(bVar2 >> 1);
            }
            else {
              pvVar10 = *(void **)(arg1 + 0x68);
            }
            if (pvVar8 == pvVar10) {
              if ((bVar2 & 1) == 0) {
                lVar11 = arg1 + 0x61;
              }
              else {
                lVar11 = *(int64_t *)(arg1 + 0x70);
              }
              if ((bVar1 & 1) == 0) {
                if (pvVar8 != (void *)0x0) {
                  pvVar8 = (void *)0x0;
                  do {
                    if (*(char *)(this_ptr + 0x61 + (int64_t)pvVar8) !=
                        *(char *)(lVar11 + (int64_t)pvVar8)) {
                      return 0;
                    }
                    pvVar8 = (void *)((int64_t)pvVar8 + 1);
                  } while (pvVar5 != pvVar8);
                }
              }
              else if (pvVar8 != (void *)0x0) {
                iVar4 = _memcmp((void *)(uint64_t)bVar2,pvVar8,(uint)bVar1);
                pvVar5 = (void *)CONCAT44(extraout_var,iVar4);
                if (iVar4 != 0) {
                  return 0;
                }
              }
              cVar3 = *(char *)(this_ptr + 0x8a);
              uVar6 = CONCAT71((int7)((uint64_t)pvVar5 >> 8),cVar3);
              if ((cVar3 == *(char *)(arg1 + 0x8a)) &&
                 ((cVar3 == '\0' ||
                  (uVar6 = (uint64_t)*(uint *)(this_ptr + 0x78),
                  *(uint *)(this_ptr + 0x78) == *(uint *)(arg1 + 0x78))))) {
                cVar3 = *(char *)(this_ptr + 0x8b);
                uVar6 = CONCAT71((int7)(uVar6 >> 8),cVar3);
                if ((cVar3 == *(char *)(arg1 + 0x8b)) &&
                   ((cVar3 == '\0' ||
                    (uVar6 = (uint64_t)*(uint *)(this_ptr + 0x7c),
                    *(uint *)(this_ptr + 0x7c) == *(uint *)(arg1 + 0x7c))))) {
                  if (((*(char *)(this_ptr + 0x8c) == *(char *)(arg1 + 0x8c)) &&
                      (((*(char *)(this_ptr + 0x8c) == '\0' ||
                        (*(char *)(this_ptr + 0x80) == *(char *)(arg1 + 0x80))) &&
                       (*(char *)(this_ptr + 0x8d) == *(char *)(arg1 + 0x8d))))) &&
                     (((*(char *)(this_ptr + 0x8d) == '\0' ||
                       (*(char *)(this_ptr + 0x81) == *(char *)(arg1 + 0x81))) &&
                      (*(char *)(this_ptr + 0x82) == *(char *)(arg1 + 0x82))))) {
                    return CONCAT71((int7)(uVar6 >> 8),
                                    *(char *)(this_ptr + 0x83) == *(char *)(arg1 + 0x83));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

