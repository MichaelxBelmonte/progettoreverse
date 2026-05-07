// Function: FUN_017ecb00
// Address: 017ecb00
// Size: 1817 bytes
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


void FUN_017ecb00(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int64_t lVar4;
  void *pvVar5;
  void*puVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar9;
  double dVar10;
  double local_98;
  int64_t local_88;
  char local_80;
  double local_78;
  double local_70;
  int64_t local_68;
  char local_60;
  int local_50;
  int64_t local_38;
  
  lVar8 = *arg1;
  cVar2 = '\0';
  if (lVar8 != 0) {
    local_60 = '\0';
    local_68 = 0;
    local_50 = -1;
    do {
      do {
        lVar4 = (int64_t)local_50;
        local_50 = local_50 + 1;
        if (*(int *)(lVar8 + 0xc) <= local_50) {
          cVar2 = '\0';
          goto LAB_017eccbf;
        }
        lVar9 = *(int64_t *)(lVar8 + 0x10);
        local_68 = *(int64_t *)(lVar9 + 8 + lVar4 * 8);
        pvVar5 = _pthread_getspecific((void*)lVar9);
        pVar7 = (void*)lVar9;
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01264240();
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      } while (local_88 == 0);
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar3 = FUN_01326de0();
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
    } while ((uVar3 & 0xfffffffd) != 1);
    cVar2 = '\x01';
LAB_017eccbf:
    FUN_001159b0();
  }
  if (*(char *)(this_ptr + 0x79) != cVar2) {
    FUN_00d64850();
    *(char *)(this_ptr + 0x79) = cVar2;
    FUN_00d64910();
  }
  if (cVar2 == '\0') {
    if (*(int64_t *)(this_ptr + 0x80) == 0) {
      return;
    }
    FUN_00d64850();
    if (*(int64_t *)(this_ptr + 0x80) != 0) {
      *(void*)(this_ptr + 0x80) = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
    return;
  }
  puVar6 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar6 = &g_02572358;
  (*g_02572370)();
  lVar8 = *arg1;
  if (((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) && (0 < *(int *)(lVar8 + 0xc))) {
    local_78 = 0.0;
    lVar4 = 0;
    do {
      pvVar5 = _pthread_getspecific((void*)lVar8);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_01263cf0();
      if (cVar2 == '\0') {
        local_68 = *(int64_t *)(*(int64_t *)(*arg1 + 0x10) + lVar4 * 8);
        if (local_68 != 0) {
          FUN_00d50b00();
        }
        local_60 = '\0';
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        pvVar5 = _pthread_getspecific((void*)lVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_01264170();
        local_78 = local_78 + dVar10;
        if (g_0241c430 < local_78) break;
      }
      lVar4 = lVar4 + 1;
      lVar8 = *arg1;
    } while (lVar4 < *(int *)(lVar8 + 0xc));
    if (g_02411158 <= local_78) {
      if (*(int64_t *)(this_ptr + 0x38) == 0) {
        bVar1 = false;
        local_38 = 0;
        lVar4 = *(int64_t *)(this_ptr + 0x80);
        if (lVar4 != 0) goto LAB_017ecfe4;
LAB_017ed1de:
        FUN_017ed3c0();
      }
      else {
        pvVar5 = _pthread_getspecific((void*)lVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0123f310();
        local_38 = local_68;
        lVar8 = local_68;
        if (local_68 == 0) {
          local_38 = 0;
          bVar1 = false;
        }
        else {
          bVar1 = true;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        lVar4 = *(int64_t *)(this_ptr + 0x80);
        if (lVar4 == 0) goto LAB_017ed1de;
LAB_017ecfe4:
        FUN_00d50b00();
        if ((*(int *)(lVar4 + 0xc) == 0) || (*(int *)(lVar4 + 0xc) < 1)) goto LAB_017ed1de;
        if (local_38 == 0) {
          lVar9 = 0;
          do {
            pvVar5 = _pthread_getspecific((void*)lVar8);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01264170();
            lVar9 = lVar9 + 1;
          } while (lVar9 < *(int *)(lVar4 + 0xc));
          goto LAB_017ed1de;
        }
        local_98 = 0.0;
        lVar9 = 0;
        local_70 = 0.0;
        do {
          pvVar5 = _pthread_getspecific((void*)lVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          dVar10 = (double)FUN_01264170();
          pvVar5 = _pthread_getspecific((void*)lVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          if (local_68 == local_38) {
            local_98 = local_98 + dVar10;
          }
          local_70 = local_70 + dVar10;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(lVar4 + 0xc));
        if ((local_98 < g_02411158) ||
           ((local_98 < g_0241c430 &&
            ((((g_024110e8 < local_70 / local_98 || (local_70 / local_98 < g_0241b6c8)) ||
              (g_024110e8 < local_70 / local_78)) || (local_70 / local_78 < g_0241b6c8))))))
        goto LAB_017ed1de;
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      if ((bVar1) && (local_38 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_017ececa;
    }
  }
  if (*(char *)(this_ptr + 0x79) != '\0') {
    FUN_00d64850();
    *(void*)(this_ptr + 0x79) = 0;
    FUN_00d64910();
  }
  if (*(int64_t *)(this_ptr + 0x80) != 0) {
    FUN_00d64850();
    if (*(int64_t *)(this_ptr + 0x80) != 0) {
      *(int64_t *)(this_ptr + 0x80) = 0;
      FUN_00d50b20();
    }
    FUN_00d64910();
  }
LAB_017ececa:
  if (puVar6 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

