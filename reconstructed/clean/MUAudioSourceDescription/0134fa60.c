// Function: FUN_0134fa60
// Address: 0134fa60
// Size: 1546 bytes
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


void FUN_0134fa60(void)

{
  char cVar1;
  bool bVar2;
  uint64_t uVar3;
  char *pcVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  int64_t *arg1;
  int64_t lVar9;
  int64_t lVar10;
  bool bVar11;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  uint8_t local_e0;
  int64_t local_d8;
  uint8_t local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b0;
  char local_a8;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  uint64_t local_50;
  int64_t local_48;
  char local_40 [8];
  int64_t local_38;
  
  if (0 < *(int *)(*arg1 + 0xc)) {
    lVar10 = 0;
    local_50 = 0;
    local_38 = 0;
    bVar2 = false;
    lVar6 = 0;
    do {
      uVar3 = local_50;
      cVar1 = (char)local_50;
      FUN_00d23310();
      lVar9 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar9 != 0)) {
        pcVar4 = (char *)FUN_00d50b20();
      }
      if (lVar9 == lVar6) {
        if ((cVar1 == '\0') && (lVar9 != 0)) {
          local_50 = CONCAT71((int7)((uint64_t)pcVar8 >> 8),1);
          lVar9 = lVar6;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_60 == '\0') || (lVar9 == 0)) {
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
        else {
          FUN_00d50b20();
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
      }
      else if (local_60 == '\0') {
        if (lVar9 != 0) {
          pcVar4 = (char *)FUN_00d50b00();
        }
        local_50 = CONCAT71((int7)((uint64_t)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = CONCAT71((int7)((uint64_t)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      lVar6 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = (void*)pcVar8;
      if (lVar6 == local_38) {
        if ((bVar2) || (lVar6 == 0)) {
          if ((local_60 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_60 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar2) || (local_38 == 0)) goto LAB_0134fc90;
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else {
LAB_0134fc90:
        local_38 = lVar6;
        bVar2 = true;
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_48 == 0) {
        bVar11 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (void*)local_38;
        }
        FUN_0125e7c0();
        if (CONCAT71(uStack_5f,local_60) == 0) {
          bVar11 = false;
          lVar6 = 0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          bVar11 = local_c8 == local_108;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = CONCAT71(uStack_5f,local_60);
        }
        if ((local_58 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        local_e0 = 0;
        local_d8 = local_38;
        local_d0 = 0;
        local_e8 = lVar9;
        FUN_01329cf0(&local_d8,&local_e8);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_00e7bdb0();
      FUN_01287c80();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_012879b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
      lVar6 = lVar9;
    } while (lVar10 < *(int *)(*arg1 + 0xc));
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

