// Function: FUN_01350430
// Address: 01350430
// Size: 2985 bytes
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


void FUN_01350430(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  void*puVar4;
  void*puVar5;
  int64_t lVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  uint uVar10;
  int64_t *plVar11;
  int64_t *plVar12;
  int iVar13;
  int64_t this_ptr;
  int64_t *plVar14;
  code *pcVar15;
  uint uVar16;
  float fVar17;
  uint32_t uVar18;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  void*local_160;
  uint8_t local_158;
  int64_t *local_150;
  uint8_t local_148;
  uint64_t local_140;
  uint8_t local_138;
  int64_t *local_130;
  uint8_t local_128;
  int64_t *local_120;
  uint8_t local_118;
  uint64_t local_110;
  uint8_t local_108;
  void*local_100;
  uint8_t local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  void*local_c0;
  char local_b8;
  void*local_b0;
  char local_a8;
  int64_t *local_a0;
  void*local_98;
  void*local_90;
  code *local_88;
  int64_t *local_80;
  int64_t *local_78;
  char local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  int64_t *local_50;
  char local_48;
  
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_02572358;
  pcVar15 = g_02572370;
  (*g_02572370)();
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02572358;
  (*pcVar15)();
  local_80 = (int64_t *)&g_02572358;
  local_98 = puVar5;
  if (*(int64_t *)(this_ptr + 0xe8) != 0) {
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(int64_t *)(this_ptr + 0xe8);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (int64_t)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(int64_t *)(local_68 + 0x10);
      plVar12 = *(int64_t **)(lVar8 + 8 + lVar6 * 8);
      local_78 = plVar12;
      pvVar7 = _pthread_getspecific((void*)lVar8);
      plVar11 = local_78;
      pVar9 = (void*)lVar8;
      if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
        plVar12 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
      plVar12 = local_78;
      if (*(float *)(this_ptr + 0x70) <= fVar17) {
        pvVar7 = _pthread_getspecific(pVar9);
        plVar11 = local_78;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
          plVar12 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
        if (fVar17 <= *(float *)(this_ptr + 0x74)) {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          if (*(float *)(this_ptr + 0x78) <= fVar17) {
            local_50 = local_78;
            local_48 = '\0';
            cVar2 = FUN_00d24090();
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              local_50 = local_78;
              local_48 = '\0';
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  if (*(int64_t *)(this_ptr + 0x40) != 0) {
    local_88 = pcVar15;
    local_70 = '\0';
    local_78 = (int64_t *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(int64_t *)(this_ptr + 0x40);
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar13 = -local_60._4_4_;
        }
        else {
          iVar13 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar13);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar13 = 0;
        }
        local_60 = CONCAT44(iVar13,(int)local_60);
      }
      lVar6 = (int64_t)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(int64_t **)(lVar8 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((void*)lVar8);
      pVar9 = (void*)lVar8;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar12 = local_50;
      if ((((local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      if (((cVar2 == '\0') && (plVar12 != *(int64_t **)(this_ptr + 0x118))) &&
         ((plVar12 != *(int64_t **)(this_ptr + 0x128) &&
          (plVar12 != *(int64_t **)(this_ptr + 0x120))))) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar17 = (float)FUN_013de3b0();
        if (fVar17 < *(float *)(this_ptr + 0x70)) {
LAB_013508ab:
          bVar1 = false;
LAB_013508ae:
          local_50 = local_78;
          local_48 = '\0';
          bVar3 = FUN_00d24090();
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (bVar1) {
            bVar3 = bVar3 ^ 1;
            goto joined_r0x013508f6;
          }
          if (bVar3 != 0) goto LAB_01350a00;
        }
        else {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_013de3b0();
          if (*(float *)(this_ptr + 0x74) <= fVar17 && fVar17 != *(float *)(this_ptr + 0x74))
          goto LAB_013508ab;
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          bVar1 = true;
          if (fVar17 < *(float *)(this_ptr + 0x78)) goto LAB_013508ae;
          bVar3 = 0;
joined_r0x013508f6:
          if ((local_e8 != '\0') && (local_f0 != 0)) {
            FUN_00d50b20();
          }
          if (bVar3 == 0) goto LAB_01350a00;
        }
        local_50 = local_78;
        local_48 = '\0';
        FUN_00d21140();
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01350a00:
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001150f0();
    pcVar15 = local_88;
  }
  plVar12 = local_80;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_88 = puVar5;
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = plVar12;
  uVar18 = (*pcVar15)();
  local_160 = local_98;
  local_158 = 0;
  local_90 = puVar5;
  uVar18 = FUN_013514e0(uVar18,&local_160);
  local_a0 = local_78;
  if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
    uVar18 = FUN_00d50b00();
  }
  uVar16 = *(uint *)((int64_t)puVar4 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (uint64_t)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar11 = (int64_t *)(uint64_t)uVar16;
      plVar12 = *(int64_t **)(puVar4[2] + (int64_t)plVar11 * 8);
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      local_80 = plVar12;
      pvVar7 = _pthread_getspecific((void*)plVar11);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar11 = local_80;
        plVar12 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      pVar9 = (void*)plVar11;
      (**(code **)(*plVar12 + 0x380))();
      pvVar7 = _pthread_getspecific(pVar9);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar12 = (int64_t *)local_80[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      (**(code **)(*plVar12 + 0x388))();
      FUN_00e7b4e0();
      plVar12 = local_80;
      local_150 = local_80;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_e0 = 0;
      local_d8 = '\0';
      local_d0 = 0;
      local_c8 = '\0';
      uVar18 = MUAudioSourceDescription__activateItem(1,&local_150,&local_140,&local_e0);
      plVar11 = local_78;
      if ((local_70 == '\0') && (local_78 != (int64_t *)0x0)) {
        uVar18 = FUN_00d50b00();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (int64_t *)0x0) {
        local_c0 = (void*)local_88;
        local_b8 = '\0';
        FUN_015b4ee0();
        if ((local_b8 != '\0') && (local_c0 != (void*)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar11;
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  uVar16 = *(uint *)((int64_t)local_98 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (uint64_t)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar12 = *(int64_t **)(local_98[2] + (uint64_t)uVar16 * 8);
      uVar10 = uVar16;
      if (plVar12 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      uVar18 = extraout_XMM0_Da;
      if (cVar2 == '\0') {
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x380))();
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (int64_t *)plVar11[(uint64_t)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x388))();
        uVar18 = FUN_00e7b4e0();
        local_128 = 0;
        local_130 = plVar12;
        cVar2 = FUN_01353c30(uVar18,1);
        uVar18 = extraout_XMM0_Da_00;
        if (cVar2 != '\0') {
          local_b0 = (void*)local_88;
          local_a8 = '\0';
          FUN_015b4ee0();
          if ((local_a8 != '\0') && (local_b0 != (void*)0x0)) {
            FUN_00d50b20();
          }
          local_70 = '\0';
          local_78 = plVar12;
          uVar18 = FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (int64_t *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      if (plVar11 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (int64_t *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  if (0xe < *(int *)((int64_t)local_88 + 0x18) + 7U) {
    local_120 = local_a0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    uVar18 = FUN_013469e0(uVar18,&local_110);
    local_100 = (void*)local_88;
    local_f8 = 0;
    FUN_01353f80(uVar18,&local_100);
  }
  if (local_a0 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (void*)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (puVar4 != (void*)0x0) {
    FUN_00d50b20();
  }
  return;
}

