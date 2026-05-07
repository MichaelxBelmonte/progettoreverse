// Function: FUN_01353f80
// Address: 01353f80
// Size: 1469 bytes
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


void FUN_01353f80(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  void*puVar4;
  void *pvVar5;
  void*puVar6;
  int iVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t this_ptr;
  int64_t lVar10;
  uint64_t local_118;
  uint8_t local_110;
  int64_t local_108;
  uint8_t local_100;
  int64_t local_f8;
  int64_t *local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_48;
  char local_40;
  
  if (*(char *)(this_ptr + 0x1a9) == '\0') {
    if (*(char *)(this_ptr + 0x172) == '\0') {
      puVar4 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar6 = &g_02572358;
      *puVar4 = &g_02572358;
      (*g_02572370)();
      lVar8 = *param_2;
      if (*(int *)(lVar8 + 0x18) < 8) {
        bVar2 = false;
        lVar10 = 0;
      }
      else {
        lVar9 = 0;
        lVar10 = 0;
        bVar2 = false;
        local_f0 = param_2;
        do {
          iVar1 = *(int *)(*(int64_t *)(lVar8 + 0x10) + 4 + lVar9 * 8);
          lVar8 = *(int64_t *)(this_ptr + 0x40);
          local_f8 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          MUAudioSourceDescription_assignEnergyClaimsInSampleRange(0,0,(int64_t)iVar1,0);
          lVar9 = local_e8;
          if (local_e8 == lVar10) {
            lVar9 = lVar10;
            if ((bVar2) || (local_e8 == 0)) {
              bVar3 = bVar2;
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
            }
            else if (local_e0 == '\0') {
              FUN_00d50b00();
              bVar3 = true;
            }
            else {
              bVar3 = true;
            }
          }
          else if (local_e0 == '\0') {
            if (local_e8 != 0) {
              FUN_00d50b00();
            }
            bVar3 = true;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            local_e0 = '\0';
            bVar3 = true;
          }
          bVar2 = bVar3;
          lVar10 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b20();
          }
          if (0 < *(int *)(lVar10 + 0xc)) {
            lVar8 = 0;
            do {
              lVar9 = *(int64_t *)(*(int64_t *)(lVar10 + 0x10) + lVar8 * 8);
              if (lVar9 != 0) {
                FUN_00d50b00();
              }
              FUN_00d235a0();
              if (lVar9 != 0) {
                FUN_00d50b20();
              }
              lVar8 = lVar8 + 1;
            } while (lVar8 < *(int *)(lVar10 + 0xc));
          }
          lVar9 = local_f8 + 1;
          lVar8 = *local_f0;
          iVar1 = *(int *)(lVar8 + 0x18);
          iVar7 = iVar1 + 7;
          if (-1 < iVar1) {
            iVar7 = iVar1;
          }
          puVar6 = (void*)(int64_t)(iVar7 >> 3);
        } while (lVar9 < (int64_t)puVar6);
      }
      if (0 < *(int *)((int64_t)puVar4 + 0xc)) {
        lVar8 = 0;
        do {
          pvVar5 = _pthread_getspecific((void*)puVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_90 = '\0';
          local_98 = 0;
          FUN_014cfcc0();
          if ((local_90 != '\0') && (local_98 != 0)) {
            FUN_00d50b20();
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < *(int *)((int64_t)puVar4 + 0xc));
      }
      if (*(char *)(this_ptr + 0x1a8) != '\x01') {
        FUN_00d64850();
        *(void*)(this_ptr + 0x1a8) = 1;
        FUN_00d64910();
      }
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d403d0();
      local_d8 = g_027bf410;
      if (g_027bf410 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      FUN_00d50b00();
      local_c8 = 0;
      local_c0 = '\0';
      FUN_00d40470(&local_c8,&stack0xffffffffffffff80,3,3);
      if ((local_c0 != '\0') && (local_c8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      local_118 = 0;
      local_110 = 0;
      local_108 = *param_2;
      local_100 = 0;
      FUN_0134a250(&local_108,&local_118,0,0);
      FUN_00d403d0();
      local_b8 = g_027e0908;
      if (g_027e0908 != 0) {
        FUN_00d50b00();
      }
      local_b0 = '\x01';
      FUN_00d50b00();
      local_a8 = 0;
      local_a0 = '\0';
      FUN_00d40470(&local_a8,&stack0xffffffffffffff90,3,3);
      if ((local_a0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (this_ptr != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_b8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_40 != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  return;
}

