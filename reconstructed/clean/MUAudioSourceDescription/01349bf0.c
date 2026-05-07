// Function: FUN_01349bf0
// Address: 01349bf0
// Size: 1386 bytes
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


void FUN_01349bf0(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int64_t lVar4;
  int64_t lVar5;
  void* pVar6;
  int64_t lVar7;
  int64_t *plVar8;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar9;
  float fVar10;
  float fVar11;
  uint64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  int64_t *local_88;
  char local_80;
  uint64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint64_t local_60;
  int local_58;
  
  if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x200) != 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x148) == 0) {
LAB_01349fcd:
    if (*(int64_t *)(this_ptr + 0x200) != 0) {
      return;
    }
    if (*(int64_t *)(this_ptr + 0x148) == 0) {
      return;
    }
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) {
      return;
    }
  }
  else {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 1) {
      if (*(int64_t *)(this_ptr + 0x1f8) != 0) {
        return;
      }
      goto LAB_01349fcd;
    }
  }
  plVar8 = *(int64_t **)(this_ptr + 0x38);
  if (plVar8 == (int64_t *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar8 + 0x370))();
  lVar4 = *(int64_t *)(this_ptr + 0x40);
  if (lVar4 != 0) {
    FUN_00d50b00();
    local_70 = 0;
    local_78 = 0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = lVar4;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar2 = -local_60._4_4_;
        }
        else {
          iVar2 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar2);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar2 = 0;
        }
        local_60 = CONCAT44(iVar2,(int)local_60);
      }
      lVar5 = (int64_t)(int)local_60;
      iVar2 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      if (*(int *)(local_68 + 0xc) <= iVar2) break;
      lVar7 = *(int64_t *)(local_68 + 0x10);
      local_78 = *(void*)(lVar7 + 8 + lVar5 * 8);
      cVar1 = FUN_01347c70();
      pVar6 = (void*)lVar7;
      if (cVar1 == '\0') {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        plVar8 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (int64_t *)0x0) {
            FUN_00d50b00();
            if ((local_80 != '\0') && (local_88 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01349e07;
          }
        }
        else if (local_88 != (int64_t *)0x0) {
LAB_01349e07:
          pvVar3 = _pthread_getspecific(pVar6);
          plVar9 = plVar8;
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
          fVar10 = (float)(**(code **)(*plVar9 + 0x3e0))();
          if (!NAN(fVar10)) {
            pvVar3 = _pthread_getspecific(pVar6);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_00d50b00();
            pVar6 = 1;
            FUN_014d9720(1,1);
            if (this_ptr != 0) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar6);
            plVar9 = plVar8;
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            fVar11 = (float)(**(code **)(*plVar9 + 0x3e0))();
            if (NAN(fVar11)) {
              pvVar3 = _pthread_getspecific(pVar6);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_014bd3c0(fVar10);
            }
            pvVar3 = _pthread_getspecific(pVar6);
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar8 = (int64_t *)plVar8[(uint64_t)(*(uint *)(lVar5 + 0x154) & 1) + 4];
            }
            fVar11 = (float)(**(code **)(*plVar8 + 0x3e0))();
            FUN_01348960(fVar11 - fVar10);
          }
          FUN_00d50b20();
        }
      }
    }
    lVar5 = local_68;
    FUN_001150f0();
    param_1 = (void*)lVar5;
  }
  if (unaff_SIL == '\0') goto LAB_0134a0c6;
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (*(int64_t *)(this_ptr + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar2 = FUN_0141bab0();
    if (iVar2 != 3) goto LAB_0134a061;
  }
  else {
LAB_0134a061:
    cVar1 = FUN_01334f30();
    if (cVar1 == '\0') goto LAB_0134a0c6;
  }
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  FUN_0134a250(&local_98,&local_a8,0,0,0,0);
LAB_0134a0c6:
  if (*(char *)(this_ptr + 0x141) != '\x01') {
    FUN_00d64850();
    *(void*)(this_ptr + 0x141) = 1;
    FUN_00d64910();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}

