// Function: FUN_013549f0
// Address: 013549f0
// Size: 1267 bytes
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


void FUN_013549f0(float param_1)

{
  void*puVar1;
  code *pcVar2;
  char cVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  void* pVar7;
  void*puVar8;
  int64_t this_ptr;
  int64_t lVar9;
  int64_t lVar10;
  float fVar11;
  
  fVar11 = *(float *)(this_ptr + 0x7c);
  if ((fVar11 != param_1) || (NAN(fVar11) || NAN(param_1))) {
    FUN_00d64850();
    *(float *)(this_ptr + 0x7c) = param_1;
    FUN_00d64910();
    puVar4 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &g_02572358;
    *puVar4 = &g_02572358;
    pcVar2 = g_02572370;
    (*g_02572370)();
    if (param_1 <= fVar11) {
      lVar10 = *(int64_t *)(this_ptr + 0x100);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (void*)puVar8;
          lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar9 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_014bae60();
          if ((param_1 <= fVar11) && (cVar3 = FUN_00d23d70(), cVar3 == '\0')) {
            FUN_00d21140();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar10 = *(int64_t *)(this_ptr + 0x100);
          puVar8 = (void*)(int64_t)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (int64_t)puVar8);
      }
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329970();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329030();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((int64_t)puVar4 + 0xc));
      }
    }
    else {
      lVar10 = *(int64_t *)(this_ptr + 0xd0);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (void*)puVar8;
          lVar10 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar9 * 8);
          if (lVar10 != 0) {
            FUN_00d50b00();
          }
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar11 = (float)FUN_014bae60();
          if ((fVar11 < param_1) && (cVar3 = FUN_00d23d70(), cVar3 == '\0')) {
            FUN_00d21140();
          }
          if (lVar10 != 0) {
            FUN_00d50b20();
          }
          lVar9 = lVar9 + 1;
          lVar10 = *(int64_t *)(this_ptr + 0xd0);
          puVar8 = (void*)(int64_t)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (int64_t)puVar8);
      }
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013291f0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013297b0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((int64_t)puVar4 + 0xc));
      }
    }
    if (*(int64_t *)(this_ptr + 0x1b8) == 0) {
      puVar6 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &g_02572358;
      (*pcVar2)();
      puVar1 = *(void**)(this_ptr + 0x1b8);
      if (puVar1 == puVar6) {
        FUN_00d50b20();
      }
      else {
        *(void**)(this_ptr + 0x1b8) = puVar6;
        if (puVar1 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
      lVar10 = 0;
      do {
        lVar9 = *(int64_t *)(puVar4[2] + lVar10 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d235a0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((int64_t)puVar4 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}

