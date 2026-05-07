// Function: FUN_01346520
// Address: 01346520
// Size: 952 bytes
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


uint FUN_01346520(void* param_1,char param_2,uint64_t param_3,uint64_t param_4)

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t *this_ptr;
  int64_t local_50;
  char local_48;
  
  if (*this_ptr != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == 0) {
      if (param_2 != '\0') {
        param_1 = 0;
        cVar1 = FUN_01366cc0(0,0,param_3,param_4,0);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        plVar4 = (int64_t *)FUN_00115860();
        (**(code **)(*plVar4 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = (void*)plVar4;
        }
        FUN_013dd650();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc440();
        plVar4 = (int64_t *)*this_ptr;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          plVar4 = (int64_t *)*this_ptr;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar4 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar4 + 0x3a0))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = 0;
        }
        FUN_014bcf30();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfce0();
        FUN_00d50b20();
      }
      return uVar2 ^ 1;
    }
  }
  return 0;
}

