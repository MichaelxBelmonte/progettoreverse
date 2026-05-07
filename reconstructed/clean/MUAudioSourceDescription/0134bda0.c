// Function: FUN_0134bda0
// Address: 0134bda0
// Size: 830 bytes
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


void* FUN_0134bda0(uint64_t param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  int64_t lVar8;
  bool bVar9;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_50;
  char local_48;
  int64_t local_38;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar6 = *(int64_t *)(arg1 + 0x40);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    local_38 = 0;
    bVar9 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar9 = false;
    local_38 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      pVar7 = (void*)lVar8;
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar11 * 8);
      if (local_38 == lVar6) {
        if ((!bVar2) && (local_38 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_38 = lVar6;
        }
        else {
          bVar2 = true;
          local_38 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar7 = (void*)local_38;
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (void*)local_38;
        }
        FUN_013de560();
        if (local_50 == lVar10) {
          lVar6 = lVar10;
          bVar1 = bVar9;
          if ((!bVar9) && (local_50 != 0)) {
            bVar1 = true;
            if (local_48 != '\0') goto LAB_0134c000;
            FUN_00d50b00();
            bVar1 = true;
          }
LAB_0134bfec:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = local_50;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar9) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0134bfec;
          }
          bVar1 = true;
          if ((bVar9) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_0134c000:
        lVar10 = lVar6;
        bVar9 = bVar1;
        if (param_2 == '\0') {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if (cVar3 == '\0') {
            local_48 = '\0';
            FUN_00d21140();
            local_50 = lVar6;
          }
        }
        else {
          local_48 = '\0';
          FUN_00d21140();
          local_50 = lVar6;
        }
      }
      lVar11 = lVar11 + 1;
      lVar6 = *(int64_t *)(arg1 + 0x40);
      lVar8 = (int64_t)*(int *)(lVar6 + 0xc);
    } while (lVar11 < lVar8);
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

