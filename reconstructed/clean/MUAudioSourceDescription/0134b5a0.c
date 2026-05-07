// Function: FUN_0134b5a0
// Address: 0134b5a0
// Size: 1452 bytes
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


void* FUN_0134b5a0(int64_t *param_1,int64_t *param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  void*puVar4;
  int64_t lVar5;
  void *pvVar6;
  void* pVar7;
  int64_t lVar8;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t local_70;
  char local_68;
  int64_t local_50;
  char local_48;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  (*g_02572370)();
  lVar5 = *(int64_t *)(arg1 + 0x40);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar1 = false;
    lVar9 = 0;
    bVar2 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar2 = false;
    lVar9 = 0;
    lVar8 = 0;
    bVar1 = false;
    do {
      pVar7 = (void*)lVar8;
      lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar11 * 8);
      if (lVar9 == lVar5) {
        if ((!bVar1) && (lVar9 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar9 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar9 = lVar5;
        }
        else {
          bVar1 = true;
          lVar9 = lVar5;
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (param_3 == '\0') {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_0134b620;
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == 0) {
          if (*param_1 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (*param_2 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5500();
          if (lVar10 == local_50) {
            if ((bVar2) || (lVar10 == 0)) goto joined_r0x0134ba47;
            bVar2 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
              lVar5 = lVar10;
              goto LAB_0134ba0b;
            }
          }
          else if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            lVar5 = local_50;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_0134ba0b:
            bVar2 = true;
            lVar10 = lVar5;
joined_r0x0134ba47:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar2) && (lVar10 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar10 = local_50;
          }
          else {
            bVar2 = true;
            lVar10 = local_50;
          }
          local_48 = '\0';
          FUN_00d235a0();
          local_50 = lVar10;
        }
      }
LAB_0134b620:
      lVar11 = lVar11 + 1;
      lVar5 = *(int64_t *)(arg1 + 0x40);
      lVar8 = (int64_t)*(int *)(lVar5 + 0xc);
    } while (lVar11 < lVar8);
  }
  *this_ptr = puVar4;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar1) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

