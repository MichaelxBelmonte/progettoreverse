// Function: FUN_01348960
// Address: 01348960
// Size: 2714 bytes
// Class: MUAudioSourceDescription
// === MUAudioSourceDescription properties ===
//   MUAudioSourceDescriptionType _currentDescriptionType
//   bool            _isNewDocument
//   bool            _isDetectionInProgress
//   bool            _insertGroupDefinesPerformanceTempo
//   bool            _stretchInsertGroup
//   double          _stretchInsertStartTime
//   bool            _createdFromSoundfile
//   bool            _timelineWasModified
//   GNInt           _recordingsInProgress
//   bool            _isComparing
//   bool            _followsHostRegionSelection
//   bool            _zoomsToHostRegionSelection
//   GNInt           _shouldDisplayStructureProblemDialog
//   bool            _shouldDisplayUnknownArchiveDialog
//   bool            _shouldDisplayImportedArchiveDialog
//   bool            _useAutomaticDetection
//   bool            _percussiveSeparation
//   bool            _hasDistinctAttacks
//   bool            _findSibilantPointsAutomatically
//   bool            _isPreliminary
//   bool            _isTonalicOnly
//   bool            _allowAutomaticPolyphonicDetection
//   SInt64          _startSampleIndex
//   SInt64          _sampleCount
//   SInt64          _signalEndSampleOffset
//   SInt64          _signalStartSampleOffset
//   float           _pitchCenter
//   float           _energyClaimFactor
//   float           _detectionQuality
//   GNFraction      _idealStartPulse
//   ... +8 more


void FUN_01348960(float param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  void* pVar5;
  int64_t in_RCX;
  char unaff_SIL;
  int iVar6;
  bool bVar7;
  float fVar8;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_a8;
  char local_a0;
  int64_t local_80;
  char local_78;
  int local_64;
  int64_t local_60;
  char local_58;
  int64_t local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014ed740();
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar3 = _pthread_getspecific((void*)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar5 = (void*)in_RCX;
  if (local_a8 != 0) {
    if (*(int *)(local_a8 + 0xc) < 1) {
      local_64 = 0x7fffffff;
    }
    else {
      local_64 = 0x7fffffff;
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1 + g_02394254);
        pvVar3 = _pthread_getspecific((void*)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1);
        if (unaff_SIL != '\0') {
          pvVar3 = _pthread_getspecific((void*)in_RCX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == 0) {
            bVar7 = false;
          }
          else {
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            if (local_60 == 0) {
              bVar7 = false;
            }
            else {
              pvVar3 = _pthread_getspecific((void*)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar3 = _pthread_getspecific((void*)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              pvVar3 = _pthread_getspecific((void*)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150eb60();
              if (local_108 == 0) {
                bVar7 = false;
              }
              else {
                pvVar3 = _pthread_getspecific((void*)in_RCX);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                if (local_f8 == 0) {
                  bVar7 = false;
                }
                else {
                  pvVar3 = _pthread_getspecific((void*)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  pvVar3 = _pthread_getspecific((void*)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0152ebe0();
                  bVar7 = local_118 != 0;
                  if ((local_110 != '\0') && (local_118 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (bVar7) {
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0150eb60();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01822e80();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar1 = FUN_01507f00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              in_RCX = local_40;
            }
            pvVar3 = _pthread_getspecific((void*)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar2 = FUN_01773f20();
            if (local_64 == 0x7fffffff) {
              local_64 = iVar1 - iVar2;
            }
            if (local_40 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        pVar5 = (void*)in_RCX;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_a8 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
    if (local_64 != 0x7fffffff) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed740();
    }
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  return;
}

