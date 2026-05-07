// Function: FUN_0135d660
// Address: 0135d660
// Size: 556 bytes
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


void FUN_0135d660(int64_t param_1)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar5;
  int64_t lVar6;
  uint32_t uVar7;
  
  FUN_0138f140();
  lVar1 = *arg1;
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar6 = 0;
    do {
      pVar4 = (void*)param_1;
      lVar1 = *(int64_t *)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ce440();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ceed0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014cfcc0();
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        plVar5 = *(int64_t **)(this_ptr + 0x38);
        if (plVar5 != (int64_t *)0x0) goto LAB_0135d850;
LAB_0135d831:
        uVar7 = 0;
      }
      else {
        plVar5 = *(int64_t **)(this_ptr + 0x38);
        if (plVar5 == (int64_t *)0x0) goto LAB_0135d831;
LAB_0135d850:
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          plVar5 = *(int64_t **)(this_ptr + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        uVar7 = (**(code **)(*plVar5 + 0x370))();
      }
      FUN_014bd640(uVar7);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar1 = *arg1;
      param_1 = (int64_t)*(int *)(lVar1 + 0xc);
    } while (lVar6 < param_1);
  }
  return;
}

