// Function: FUN_01355320
// Address: 01355320
// Size: 3734 bytes
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


void FUN_01355320(byte param_1,int64_t *param_2,uint8_t param_3)

{
  int64_t *plVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t lVar7;
  void *pvVar8;
  void* pVar9;
  void* pVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *plVar13;
  void*this_ptr;
  uint64_t uVar14;
  double dVar15;
  double dVar16;
  int64_t local_90;
  char local_88;
  int local_78;
  int64_t local_68;
  int local_50;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*g_02572370)();
  lVar6 = *param_2;
  if (0 < *(int *)(lVar6 + 0xc)) {
    lVar12 = 0;
    do {
      lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + lVar12 * 8);
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      bVar3 = FUN_00d23d70();
      FUN_01366a10();
      if (lVar6 == 0) {
        bVar2 = true;
        local_68 = 0;
      }
      else {
        FUN_00d50b00();
        local_68 = 0;
        local_50 = -1;
        if (bVar3 == 0) {
          while( true ) {
            lVar7 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_50) break;
            local_68 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar7 * 8);
            cVar4 = FUN_0133aef0();
            if (cVar4 != '\0') {
              local_88 = '\0';
              FUN_00d235a0();
              local_90 = local_68;
            }
          }
        }
        else {
          while( true ) {
            lVar7 = (int64_t)local_50;
            local_50 = local_50 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_50) break;
            local_68 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar7 * 8);
            cVar4 = FUN_01366cc0(param_3,0);
            if ((cVar4 == '\0') && (cVar4 = FUN_0133aef0(), cVar4 != '\0')) {
              local_88 = '\0';
              FUN_00d235a0();
              local_90 = local_68;
            }
          }
        }
        FUN_001150f0();
        bVar2 = false;
      }
      if (((bVar3 & param_1) == 1) && (FUN_01367040(), local_68 != 0)) {
        FUN_00d50b00();
        local_50 = -1;
        while( true ) {
          lVar7 = (int64_t)local_50;
          local_50 = local_50 + 1;
          if (*(int *)(local_68 + 0xc) <= local_50) break;
          lVar11 = *(int64_t *)(local_68 + 0x10);
          lVar7 = *(int64_t *)(lVar11 + 8 + lVar7 * 8);
          pvVar8 = _pthread_getspecific((void*)lVar11);
          pVar9 = (void*)lVar11;
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar14 = FUN_013dfdd0();
          if (local_88 == '\0') {
            if (local_90 != 0) {
              FUN_00d50b00();
              goto LAB_01355850;
            }
LAB_01355920:
            local_38 = '\0';
            FUN_01346520(uVar14,1);
            local_88 = '\0';
            FUN_00d235a0();
            local_90 = lVar7;
            local_40 = lVar7;
          }
          else {
            if (local_90 == 0) goto LAB_01355920;
LAB_01355850:
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd6a0();
            if ((local_88 == '\0') && (local_90 != 0)) {
              FUN_00d50b00();
            }
            if ((local_90 == 0) || (local_90 == lVar6)) {
              if (local_90 != 0) goto LAB_01355755;
            }
            else {
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_014bb3e0();
              pvVar8 = _pthread_getspecific(pVar9);
              if (pvVar8 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar16 = (double)FUN_014bb3e0();
              if (dVar15 < dVar16) {
                FUN_0133aef0();
                local_38 = '\0';
                FUN_01346520(lVar6,1);
                local_88 = '\0';
                FUN_00d235a0();
                local_90 = lVar7;
                local_40 = lVar7;
              }
LAB_01355755:
              FUN_00d50b20();
            }
            FUN_00d50b20();
          }
        }
        FUN_001150f0();
        FUN_00d50b20();
      }
      if (!bVar2) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      lVar12 = lVar12 + 1;
      lVar6 = *param_2;
    } while (lVar12 < *(int *)(lVar6 + 0xc));
  }
  local_50 = -1;
LAB_01355b1b:
  do {
    lVar12 = local_90;
    lVar7 = (int64_t)local_50;
    local_50 = local_50 + 1;
    if (*(int *)(lVar6 + 0xc) <= local_50) {
      FUN_01a02100();
      if (puVar5 != (void*)0x0) {
        if (0 < *(int *)((int64_t)puVar5 + 0xc)) {
          pVar9 = 0;
          do {
            lVar6 = local_90;
            pVar10 = pVar9;
            pvVar8 = _pthread_getspecific(pVar9);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfef0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013e0cc0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dfcb0();
            pvVar8 = _pthread_getspecific(pVar10);
            if (pvVar8 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013dd790();
            if (local_88 == '\0') {
              if (local_90 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_88 = '\0';
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (local_90 != 0) {
              local_88 = '\0';
              local_90 = 0;
              local_78 = -1;
              while( true ) {
                lVar12 = (int64_t)local_78;
                local_78 = local_78 + 1;
                if (*(int *)(lVar6 + 0xc) <= local_78) break;
                lVar7 = *(int64_t *)(lVar6 + 0x10);
                local_90 = *(int64_t *)(lVar7 + 8 + lVar12 * 8);
                pvVar8 = _pthread_getspecific((void*)lVar7);
                pVar10 = (void*)lVar7;
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_011ef8d0();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0126f610();
                pvVar8 = _pthread_getspecific(pVar10);
                if (pvVar8 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125a5f0();
                FUN_0039e8b0();
                if (local_38 == '\0') {
                  if (local_40 != 0) {
                    FUN_00d50b00();
                  }
                }
                else {
                  local_38 = '\0';
                }
                FUN_00e7bdb0();
                FUN_01287c80();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
                if ((local_38 != '\0') && (local_40 != 0)) {
                  FUN_00d50b20();
                }
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
              FUN_0015edf0();
              FUN_00d50b20();
            }
            pVar9 = pVar9 + 1;
          } while ((int)pVar9 < *(int *)((int64_t)puVar5 + 0xc));
        }
        FUN_001150f0();
      }
      *this_ptr = puVar5;
      *(void*)(this_ptr + 1) = 1;
      return;
    }
    plVar1 = *(int64_t **)(*(int64_t *)(lVar6 + 0x10) + 8 + lVar7 * 8);
    FUN_01366a10();
    if (local_88 == '\0') goto LAB_01355bb0;
  } while (local_90 == 0);
  goto LAB_01355bc4;
LAB_01355bb0:
  if (local_90 != 0) {
    FUN_00d50b00();
LAB_01355bc4:
    local_88 = '\0';
    local_90 = 0;
    local_78 = -1;
    while( true ) {
      lVar7 = (int64_t)local_78;
      local_78 = local_78 + 1;
      if (*(int *)(lVar12 + 0xc) <= local_78) break;
      lVar11 = *(int64_t *)(lVar12 + 0x10);
      local_90 = *(int64_t *)(lVar11 + 8 + lVar7 * 8);
      cVar4 = FUN_00d23d70();
      pVar9 = (void*)lVar11;
      if (cVar4 == '\0') {
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        if (local_90 != 0) {
          FUN_00d50b00();
        }
        pvVar8 = _pthread_getspecific(pVar9);
        plVar13 = plVar1;
        if ((pvVar8 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar13 + 0x3a0))();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar8 = _pthread_getspecific(pVar9);
        if (pvVar8 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bcf30();
        FUN_00d21140();
        if (local_90 != 0) {
          FUN_00d50b20();
        }
      }
      local_38 = '\0';
      local_40 = local_90;
    }
    FUN_001150f0();
    FUN_00d50b20();
  }
  goto LAB_01355b1b;
}

