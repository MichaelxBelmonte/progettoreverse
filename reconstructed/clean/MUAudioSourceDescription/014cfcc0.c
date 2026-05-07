// Function: FUN_014cfcc0
// Address: 014cfcc0
// Size: 1752 bytes
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


void FUN_014cfcc0(void* param_1)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  int64_t lVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  uint64_t uVar11;
  int64_t lVar12;
  void*puVar13;
  void* pVar14;
  uint64_t uVar15;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar16;
  int iVar17;
  float fVar18;
  uint32_t uVar19;
  float fVar20;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  int64_t local_40;
  
  (**(code **)(*this_ptr + 0x378))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) goto LAB_014cfdaf;
  (**(code **)(*this_ptr + 0x378))();
  lVar12 = *arg1;
  if (lVar12 == local_58) {
    if (((char)arg1[1] != '\0') || (local_58 == 0)) goto LAB_014cfd9b;
    if (local_50 == '\0') {
      FUN_00d50b00();
      goto LAB_014cfd96;
    }
  }
  else {
    lVar6 = arg1[1];
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
      *arg1 = local_58;
      if (((char)lVar6 != '\0') && (lVar12 != 0)) {
        FUN_00d50b20();
      }
LAB_014cfd96:
      *(void*)(arg1 + 1) = 1;
LAB_014cfd9b:
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_014cfdaf;
    }
    *arg1 = local_58;
    if (((char)lVar6 != '\0') && (lVar12 != 0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
LAB_014cfdaf:
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar18 = (float)FUN_0132db90();
  if (*(int *)(this_ptr[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    dVar7 = g_0238fee8;
    uVar1 = *(uint *)(local_58 + 0x30);
    uVar16 = (uint64_t)(int)uVar1;
    dVar2 = g_0238fee8 / *(double *)(local_58 + 0x38);
    uVar11 = (**(code **)(*this_ptr + 0x388))();
    uVar15 = (uVar11 | uVar16) >> 0x20;
    if (uVar15 == 0) {
      uVar16 = (uVar11 & 0xffffffff) % (uint64_t)uVar1;
      iVar9 = (int)((uVar11 & 0xffffffff) / (uint64_t)uVar1);
    }
    else {
      iVar9 = (int)((int64_t)uVar11 / (int64_t)uVar16);
      uVar16 = (int64_t)uVar11 % (int64_t)uVar16;
    }
    lVar12 = (**(code **)(*this_ptr + 0x380))(uVar15,uVar16);
    FUN_00c8e690();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar17 = 0;
    if (iVar9 < -1) {
      local_48 = 0;
      bVar4 = false;
      local_40 = 0;
      bVar5 = false;
    }
    else {
      uVar16 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar16 = (uint64_t)(iVar9 + 2U);
      }
      uVar11 = 0;
      bVar5 = false;
      local_40 = 0;
      bVar4 = false;
      local_48 = 0;
      do {
        dVar3 = (double)(iVar17 + lVar12) * (dVar7 / (double)(int)uVar1);
        uVar19 = FUN_014c36d0((float)dVar3,(int)dVar3);
        if (local_58 == local_48) {
          if ((bVar4) || (local_58 == 0)) {
            if ((local_50 != '\0') && (local_58 != 0)) {
              uVar19 = FUN_00d50b20();
            }
          }
          else {
            bVar4 = true;
            if (local_50 == '\0') {
              uVar19 = FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            uVar19 = FUN_00d50b00();
          }
          if ((!bVar4) || (local_48 == 0)) goto LAB_014d0090;
          uVar19 = FUN_00d50b20();
          local_48 = local_58;
          bVar4 = true;
        }
        else if ((bVar4) && (local_48 != 0)) {
          uVar19 = FUN_00d50b20();
          local_48 = local_58;
          bVar4 = true;
        }
        else {
LAB_014d0090:
          local_48 = local_58;
          bVar4 = true;
        }
        FUN_014c36d0(uVar19,(int)dVar3 + 1);
        if (local_58 == local_40) {
          lVar6 = local_40;
          if ((bVar5) || (local_58 == 0)) {
            bVar8 = bVar5;
            if ((local_50 != '\0') && (local_58 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = true;
            if (local_50 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
          lVar6 = local_58;
          bVar8 = true;
          if (bVar5) {
            if (local_40 == 0) goto LAB_014d0170;
            FUN_00d50b20();
            lVar6 = local_58;
          }
        }
        else if ((bVar5) && (local_40 != 0)) {
          FUN_00d50b20();
          lVar6 = local_58;
          bVar8 = true;
        }
        else {
LAB_014d0170:
          lVar6 = local_58;
          bVar8 = true;
        }
        bVar5 = bVar8;
        local_40 = lVar6;
        fVar20 = 0.0;
        if ((local_48 != 0) && (fVar20 = 0.0, local_40 != 0)) {
          fVar20 = *(float *)(local_48 + 0x28) * fVar18;
          fVar20 = (*(float *)(local_40 + 0x28) * fVar18 - fVar20) *
                   ((float)dVar3 - (float)(int)dVar3) + fVar20;
        }
        *(float *)(*(int64_t *)(local_58 + 0x10) + uVar11 * 4) = fVar20;
        uVar11 = uVar11 + 1;
        iVar17 = iVar17 + uVar1;
      } while (uVar16 != uVar11);
    }
    puVar13 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar13 + 7) = 0;
    *(void*)((int64_t)puVar13 + 0x3c) = 0;
    *(void*)(puVar13 + 8) = 0;
    pVar14 = 0x25dc9e8;
    *puVar13 = &g_025dc9e8;
    puVar13[9] = 0;
    puVar13[10] = 0;
    (*g_025dca00)();
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950(SUB84((double)(float)dVar2,0));
    pvVar10 = _pthread_getspecific(pVar14);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    FUN_014bc1d0();
    FUN_00d50b20();
    if ((bVar5) && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if ((bVar4) && (local_48 != 0)) {
      FUN_00d50b20();
    }
    if (local_58 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}

