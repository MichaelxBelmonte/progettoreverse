// Function: FUN_014c36d0
// Address: 014c36d0
// Size: 685 bytes
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


int64_t * FUN_014c36d0(void* param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t lVar5;
  int iVar6;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  FUN_014c34a0();
  lVar5 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == 0) goto LAB_014c371a;
  }
  else {
    if (local_40 != 0) goto LAB_014c3963;
LAB_014c371a:
    cVar2 = (**(code **)(*arg1 + 1000))();
    iVar6 = -1;
    if ((cVar2 != '\0') && (lVar1 = **(int64_t **)(arg1[0x21] + 0x10), lVar1 != 0)) {
      FUN_00d50b00();
      iVar6 = *(int *)(lVar1 + 0xc);
      FUN_00d50b20();
    }
    if (param_2 < iVar6) {
      FUN_014bc340();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc340();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*arg1 + 1000))();
      if ((cVar2 == '\0') ||
         (lVar5 = **(int64_t **)(arg1[0x21] + 0x10),
         **(int64_t **)(arg1[0x21] + 0x10) == 0)) {
LAB_014c3960:
        lVar5 = 0;
        goto LAB_014c3963;
      }
    }
    else {
      FUN_014bc420();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc420();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*arg1 + 1000))();
      if (cVar2 == '\0') goto LAB_014c3960;
      FUN_00d23340();
      pcVar4 = &local_50;
      if (local_38[0] != '\0') {
        pcVar4 = local_38;
      }
      local_50 = local_38[0];
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = local_40;
      if ((local_50 != '\0') || (local_40 == 0)) goto LAB_014c3963;
    }
  }
  FUN_00d50b00();
LAB_014c3963:
  *this_ptr = lVar5;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

