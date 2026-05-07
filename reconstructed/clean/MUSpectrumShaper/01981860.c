// Function: FUN_01981860
// Address: 01981860
// Size: 2072 bytes
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


void FUN_01981860(void* param_1)

{
  int64_t lVar1;
  char cVar2;
  char cVar3;
  void *pvVar4;
  int64_t *this_ptr;
  int64_t lVar5;
  int iVar6;
  bool bVar7;
  int64_t local_70;
  char local_68;
  int64_t *local_48;
  char local_40;
  
  FUN_01989f80();
  (**(code **)(*local_48 + 0xe20))();
  if ((local_68 == '\0') && (local_70 != 0)) {
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar5 = this_ptr[0x2e];
  if (lVar5 != 0) {
    FUN_00d50b00();
  }
  cVar2 = FUN_00d23d70();
  if (lVar5 != 0) {
    FUN_00d50b20();
  }
  if (cVar2 != '\0') {
    if ((char)this_ptr[0x31] == '\0') {
      if (*(char *)((int64_t)this_ptr + 0x18a) == '\0') {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01268dd0();
        if (lVar5 != 0) {
          FUN_00d50b00();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar2 = FUN_01263cf0();
          if (cVar2 == '\0') {
            cVar2 = FUN_00d23d70();
          }
          else {
            cVar2 = '\0';
          }
          FUN_00d50b20();
          goto LAB_01982016;
        }
      }
      else {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        if (lVar5 != 0) {
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          pvVar4 = _pthread_getspecific(param_1);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          lVar1 = this_ptr[0x2e];
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          FUN_012ebc80();
          bVar7 = lVar5 == 0;
          if (bVar7) {
            lVar5 = 0;
          }
          else {
            FUN_00d50b00();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            if (*(int *)(lVar5 + 0xc) < 1) {
              cVar2 = '\0';
              FUN_001159b0();
            }
            else {
              iVar6 = 0;
              cVar2 = '\0';
              do {
                cVar3 = FUN_00d23d70();
                if (cVar3 != '\0') {
                  cVar2 = '\x01';
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < *(int *)(lVar5 + 0xc));
              FUN_001159b0();
            }
            if (!bVar7) {
              FUN_00d50b20();
            }
            goto LAB_01982016;
          }
        }
      }
    }
    else if (*(char *)((int64_t)this_ptr + 0x18b) == '\0') {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      if (lVar5 != 0) {
        FUN_00d50b00();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        cVar2 = FUN_01263cf0();
        if (cVar2 == '\0') {
          cVar2 = FUN_00d23d70();
        }
        else {
          cVar2 = '\0';
        }
        FUN_00d50b20();
        goto LAB_01982016;
      }
    }
    else {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if (lVar5 != 0) {
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar4 = _pthread_getspecific(param_1);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        lVar1 = this_ptr[0x2e];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        FUN_012eb7a0();
        bVar7 = lVar5 == 0;
        if (bVar7) {
          lVar5 = 0;
        }
        else {
          FUN_00d50b00();
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (lVar5 != 0) {
          if (*(int *)(lVar5 + 0xc) < 1) {
            cVar2 = '\0';
            FUN_001159b0();
          }
          else {
            iVar6 = 0;
            cVar2 = '\0';
            do {
              cVar3 = FUN_00d23d70();
              if (cVar3 != '\0') {
                cVar2 = '\x01';
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(int *)(lVar5 + 0xc));
            FUN_001159b0();
          }
          if (!bVar7) {
            FUN_00d50b20();
          }
          goto LAB_01982016;
        }
      }
    }
  }
  cVar2 = '\0';
LAB_01982016:
  if (*(char *)((int64_t)this_ptr + 0x18c) != cVar2) {
    *(char *)((int64_t)this_ptr + 0x18c) = cVar2;
    (**(code **)(*this_ptr + 0x620))();
  }
  if (local_70 != 0) {
    FUN_00d50b20();
  }
  return;
}

