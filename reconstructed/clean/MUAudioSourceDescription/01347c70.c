// Function: FUN_01347c70
// Address: 01347c70
// Size: 2169 bytes
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


uint FUN_01347c70(int64_t *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int64_t *plVar7;
  char cVar8;
  void *pvVar9;
  int64_t lVar10;
  int64_t *plVar11;
  void* pVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  int64_t lVar15;
  byte bVar16;
  int64_t local_b8;
  char local_b0;
  int64_t *local_68;
  uint local_54;
  char local_50 [8];
  int64_t *local_48;
  char local_40 [15];
  char local_31;
  
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  plVar13 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01347cfe;
    }
LAB_01347d5b:
    bVar6 = true;
  }
  else {
    if (local_48 == (int64_t *)0x0) goto LAB_01347d5b;
LAB_01347cfe:
    pvVar9 = _pthread_getspecific((void*)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      param_1 = plVar13;
    }
    cVar8 = FUN_014bc070();
    param_1 = (int64_t *)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
    local_54 = (uint)param_1;
    if (cVar8 != '\0') {
      bVar6 = false;
      goto LAB_01348516;
    }
    pvVar9 = _pthread_getspecific(local_54);
    if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      param_1 = plVar13;
      plVar13 = (int64_t *)plVar13[(uint64_t)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    cVar8 = (**(code **)(*plVar13 + 0x3c0))();
    bVar6 = false;
    if (cVar8 != '\0') goto LAB_01348516;
  }
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar9 = _pthread_getspecific((void*)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  plVar13 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (int64_t *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)((int64_t)plVar13 + 0xc) < 1) {
    local_54 = 0;
  }
  else {
    lVar15 = 0;
    local_54 = 0;
    do {
      pvVar9 = _pthread_getspecific((void*)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      plVar7 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (int64_t *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((void*)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = plVar7;
      }
      FUN_01267000();
      pVar12 = (void*)param_1;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01347fb0;
        }
LAB_01348080:
        bVar5 = true;
LAB_01348145:
        bVar4 = true;
LAB_01348155:
        bVar3 = true;
        local_68 = (int64_t *)0x0;
        bVar2 = false;
      }
      else {
        if (local_48 == (int64_t *)0x0) goto LAB_01348080;
LAB_01347fb0:
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        if (local_48 == (int64_t *)0x0) {
          bVar5 = false;
          param_1 = local_48;
          goto LAB_01348145;
        }
        plVar11 = local_48;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((void*)plVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505b90();
        if (local_48 == (int64_t *)0x0) {
          bVar5 = false;
          bVar4 = false;
          param_1 = local_48;
          goto LAB_01348155;
        }
        plVar11 = local_48;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((void*)plVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0179acd0();
        FUN_00d23340();
        local_68 = local_48;
        local_50[0] = local_40[0];
        param_1 = (int64_t *)local_50;
        plVar11 = (int64_t *)local_40;
        if (local_40[0] == '\0') {
          plVar11 = param_1;
        }
        *(void*)plVar11 = 0;
        if ((local_40[0] != '\0') && (local_68 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (int64_t *)0x0) {
          bVar2 = false;
          local_68 = (int64_t *)0x0;
        }
        else {
          bVar2 = true;
          if (local_50[0] == '\0') {
            FUN_00d50b00();
          }
        }
        if ((local_b0 != '\0') && (local_b8 != 0)) {
          FUN_00d50b20();
        }
        bVar3 = false;
        bVar5 = false;
        bVar4 = false;
      }
      pvVar9 = _pthread_getspecific((void*)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = plVar7;
      }
      FUN_0128c200();
      plVar11 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_013482a7;
        }
        bVar16 = (local_54 & 1) == 0;
        cVar8 = local_68 == (int64_t *)0x0;
      }
      else {
LAB_013482a7:
        local_31 = local_68 == (int64_t *)0x0;
        if (((bool)local_31) || (plVar11 == (int64_t *)0x0)) {
LAB_01348410:
          bVar16 = (local_54 & 1) == 0;
          cVar8 = local_31;
          if (plVar11 == (int64_t *)0x0) goto LAB_01348453;
        }
        else {
          pvVar9 = _pthread_getspecific((void*)param_1);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            param_1 = local_68;
          }
          FUN_017e5950();
          plVar14 = local_48;
          if (local_48 == (int64_t *)0x0) {
            bVar1 = true;
            plVar14 = (int64_t *)0x0;
          }
          else {
            if (local_40[0] == '\0') {
              FUN_00d50b00();
              bVar1 = false;
              if ((local_40[0] == '\0') || (local_48 == (int64_t *)0x0)) goto LAB_013483b3;
              FUN_00d50b20();
            }
            else {
              local_40[0] = '\0';
            }
            bVar1 = false;
          }
LAB_013483b3:
          if (plVar14 == (int64_t *)0x0) goto LAB_01348410;
          pvVar9 = _pthread_getspecific((void*)param_1);
          if (pvVar9 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_54 = FUN_017dcae0();
          bVar16 = (byte)local_54 ^ 1;
          if (!bVar1) {
            FUN_00d50b20();
          }
        }
        cVar8 = local_31;
        FUN_00d50b20();
      }
LAB_01348453:
      if ((bVar2) && (cVar8 == '\0')) {
        FUN_00d50b20();
      }
      if (!bVar3) {
        FUN_00d50b20();
      }
      if (!bVar4) {
        FUN_00d50b20();
      }
      if (!bVar5) {
        FUN_00d50b20();
      }
      if (plVar7 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    } while ((bVar16 != 0) && (lVar15 = lVar15 + 1, lVar15 < *(int *)((int64_t)plVar13 + 0xc)));
  }
  FUN_00d50b20();
  local_54 = local_54 & 0xffffff01;
LAB_01348516:
  if (!bVar6) {
    FUN_00d50b20();
  }
  return local_54;
}

