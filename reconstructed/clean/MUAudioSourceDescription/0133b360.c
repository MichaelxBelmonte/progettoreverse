// Function: FUN_0133b360
// Address: 0133b360
// Size: 1971 bytes
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


void FUN_0133b360(void* param_1)

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void*puVar6;
  int64_t lVar7;
  int64_t lVar8;
  void*puVar9;
  void* pVar10;
  void*puVar11;
  int64_t *plVar12;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t *plVar13;
  double dVar14;
  double dVar15;
  uint64_t uVar16;
  double dVar17;
  uint8_t auVar18 [16];
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  int64_t local_40;
  char local_38;
  
  if ((*arg1 != 0) || (MACH_HEADER.filetype == 0)) {
    lVar5 = **(int64_t **)(*arg1 + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    plVar12 = *(int64_t **)(lVar5 + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar12 + 0x370))();
    plVar12 = *(int64_t **)(this_ptr + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar15 = (double)(**(code **)(*plVar12 + 0x370))();
    puVar6 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar11 = &g_02572358;
    *puVar6 = &g_02572358;
    uVar16 = (*g_02572370)();
    lVar5 = *arg1;
    if (0 < *(int *)(lVar5 + 0xc)) {
      lVar4 = 0;
      do {
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + lVar4 * 8);
        pvVar3 = _pthread_getspecific((void*)puVar11);
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar5 = *(int64_t *)(lVar5 + 0x20 + (uint64_t)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        lVar5 = *(int64_t *)(lVar5 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if (0 < *(int *)(lVar5 + 0xc)) {
          lVar7 = 0;
          do {
            pvVar3 = _pthread_getspecific((void*)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((void*)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar3 = _pthread_getspecific((void*)puVar11);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dfdd0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                pvVar3 = _pthread_getspecific((void*)puVar11);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_013e5500();
                if ((local_38 == '\0') && (local_40 != 0)) {
                  FUN_00d50b00();
                }
                local_38 = '\0';
                FUN_00d21140();
                if (local_40 != 0) {
                  FUN_00d50b20();
                }
              }
            }
            if (local_40 != 0) {
              FUN_00d50b20();
            }
            lVar7 = lVar7 + 1;
          } while (lVar7 < *(int *)(lVar5 + 0xc));
        }
        uVar16 = FUN_00d50b20();
        lVar4 = lVar4 + 1;
        lVar5 = *arg1;
        puVar11 = (void*)(int64_t)*(int *)(lVar5 + 0xc);
      } while (lVar4 < (int64_t)puVar11);
    }
    FUN_00d242c0(uVar16,0);
    pcVar1 = g_025e6278;
    if (0 < *(int *)((int64_t)puVar6 + 0xc)) {
      dVar15 = dVar15 / dVar14;
      lVar5 = 0;
      do {
        plVar12 = *(int64_t **)(puVar6[2] + lVar5 * 8);
        lVar4 = lVar5;
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((void*)lVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_014bacf0();
        lVar4 = *(int64_t *)(this_ptr + 0xd0);
        if (0 < *(int *)(lVar4 + 0xc)) {
          lVar7 = 0;
          do {
            lVar8 = *(int64_t *)(*(int64_t *)(lVar4 + 0x10) + lVar7 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((void*)lVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_014bacf0();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if ((double)((uint64_t)(dVar17 - dVar14) & g_023908f0) < g_0240d3c0)
            goto LAB_0133bb35;
            lVar7 = lVar7 + 1;
            lVar4 = *(int64_t *)(this_ptr + 0xd0);
          } while (lVar7 < *(int *)(lVar4 + 0xc));
        }
        pVar10 = (void*)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar13 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        lVar4 = (**(code **)(*plVar13 + 0x3a0))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        lVar7 = (**(code **)(*plVar13 + 0x390))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (int64_t *)plVar12[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar13 + 0x388))();
        puVar9 = (void*)FUN_00e8fc40();
        FUN_007ef480();
        pVar10 = 0x25e6250;
        *puVar9 = &g_025e6260;
        puVar9[7] = &g_025e66c0;
        puVar9[0x1c] = 0;
        puVar9[0x19] = 0;
        puVar9[0x1a] = 0;
        *(void*)(puVar9 + 0x1b) = 0;
        (*pcVar1)();
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar18._0_8_ =
             (double)((uint64_t)((double)lVar4 * dVar15) & g_023945b0 | g_023945c0) +
             (double)lVar4 * dVar15;
        auVar18._8_8_ = _UNK_023945c8;
        roundsd(ZEXT816(0),auVar18,0xb);
        auVar19._0_8_ =
             (double)((uint64_t)((double)lVar7 * dVar15) & g_023945b0 | g_023945c0) +
             (double)lVar7 * dVar15;
        auVar19._8_8_ = _UNK_023945c8;
        auVar18 = roundsd(ZEXT816(0),auVar19,0xb);
        auVar20._0_8_ =
             (double)((uint64_t)((double)lVar8 * dVar15) & g_023945b0 | g_023945c0) +
             (double)lVar8 * dVar15;
        auVar20._8_8_ = _UNK_023945c8;
        auVar19 = roundsd(ZEXT816(0),auVar20,0xb);
        lVar4 = (int64_t)auVar19._0_8_;
        FUN_014bad20(lVar4,(int64_t)auVar18._0_8_);
        pVar10 = (void*)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bae60();
        FUN_014bae10();
        FUN_01329030();
        FUN_00d50b20();
LAB_0133bb35:
        if (plVar12 != (int64_t *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((int64_t)puVar6 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}

