// Function: FUN_01366cc0
// Address: 01366cc0
// Size: 848 bytes
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


uint64_t FUN_01366cc0(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  double dVar7;
  double dVar8;
  double local_68;
  int64_t local_60;
  char local_58;
  double local_48;
  double local_40;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = (double)FUN_013de8d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_013de9b0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_013dee00();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_013dee60();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_013de790();
      if (g_023942d0 < (double)lVar3 / (double)lVar4) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      pvVar2 = _pthread_getspecific(param_1);
      lVar3 = local_60;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar3 = *(int64_t *)(local_60 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      plVar6 = *(int64_t **)(lVar3 + 0x38);
      if (plVar6 == (int64_t *)0x0) {
        local_68 = 0.0;
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          plVar6 = *(int64_t **)(lVar3 + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar6 = (int64_t *)plVar6[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        local_68 = (double)(**(code **)(*plVar6 + 0x370))();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      dVar7 = (double)lVar3 / local_68 + g_0240d3e0;
      dVar8 = 0.0;
      if (0.0 <= dVar7) {
        dVar8 = dVar7;
      }
      local_48 = local_48 + dVar8;
      local_40 = local_40 - dVar8;
    }
  }
  uVar5 = FUN_013676b0(local_48,local_40);
  return uVar5;
}

