// Function: FUN_01349890
// Address: 01349890
// Size: 725 bytes
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


void FUN_01349890(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t this_ptr;
  int iVar6;
  float fVar7;
  float fVar8;
  uint64_t uVar9;
  int64_t *local_48;
  char local_40;
  
  plVar5 = *(int64_t **)(this_ptr + 0x38);
  if (plVar5 != (int64_t *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar5 = *(int64_t **)(this_ptr + 0x38);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    uVar9 = (**(code **)(*plVar5 + 0x370))();
    lVar3 = *(int64_t *)(this_ptr + 0x40);
    if (lVar3 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar3 + 0xc)) {
        iVar6 = 0;
        do {
          cVar1 = FUN_01347c70();
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_40 == '\0') {
              if (local_48 != (int64_t *)0x0) {
                FUN_00d50b00();
                goto LAB_01349a00;
              }
            }
            else if (local_48 != (int64_t *)0x0) {
LAB_01349a00:
              pvVar2 = _pthread_getspecific(param_1);
              plVar5 = local_48;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
              fVar7 = (float)(**(code **)(*plVar5 + 0x3e0))();
              if (!NAN(fVar7)) {
                pvVar2 = _pthread_getspecific(param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bd640(uVar9);
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                if (NAN(fVar8)) {
                  pvVar2 = _pthread_getspecific(param_1);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bd3c0(fVar7);
                }
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (int64_t *)local_48[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                FUN_01348960(fVar8 - fVar7);
              }
              FUN_00d50b20();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar3 + 0xc));
      }
      FUN_001150f0();
      FUN_00d50b20();
    }
  }
  return;
}

