// Function: FUN_014ceed0
// Address: 014ceed0
// Size: 2760 bytes
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


void FUN_014ceed0(void* param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  void*puVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  int64_t lVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  void *pvVar20;
  uint64_t uVar21;
  int64_t lVar22;
  void*puVar23;
  void*puVar24;
  void* pVar25;
  uint64_t uVar26;
  uint64_t uVar27;
  int64_t *arg1;
  int64_t *this_ptr;
  uint64_t uVar28;
  int iVar29;
  uint64_t uVar30;
  uint32_t uVar31;
  float fVar32;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  int64_t local_38;
  
  (**(code **)(*this_ptr + 0x378))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    (**(code **)(*this_ptr + 0x378))();
    lVar22 = *arg1;
    if (lVar22 == local_50) {
      if (((char)arg1[1] != '\0') || (local_50 == 0)) goto LAB_014cefab;
      if (local_48 == '\0') {
        FUN_00d50b00();
        goto LAB_014cefa6;
      }
    }
    else {
      lVar15 = arg1[1];
      if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_50;
        if (((char)lVar15 != '\0') && (lVar22 != 0)) {
          FUN_00d50b20();
        }
LAB_014cefa6:
        *(void*)(arg1 + 1) = 1;
LAB_014cefab:
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_014cefbf;
      }
      *arg1 = local_50;
      if (((char)lVar15 != '\0') && (lVar22 != 0)) {
        FUN_00d50b20();
      }
    }
    *(void*)(arg1 + 1) = 1;
  }
LAB_014cefbf:
  if (*(int *)(this_ptr[0x21] + 0xc) == 0) {
    return;
  }
  pvVar20 = _pthread_getspecific(param_1);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0132d790();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  dVar16 = g_0238fee8;
  uVar3 = *(uint *)(local_50 + 0x30);
  uVar30 = (uint64_t)(int)uVar3;
  dVar5 = g_0238fee8 / *(double *)(local_50 + 0x38);
  uVar21 = (**(code **)(*this_ptr + 0x388))();
  uVar26 = (uVar21 | uVar30) >> 0x20;
  if (uVar26 == 0) {
    iVar19 = (int)((uVar21 & 0xffffffff) / (uint64_t)uVar3);
    uVar21 = (uVar21 & 0xffffffff) % (uint64_t)uVar3;
  }
  else {
    iVar19 = (int)((int64_t)uVar21 / (int64_t)uVar30);
    uVar21 = (int64_t)uVar21 % (int64_t)uVar30;
  }
  lVar22 = (**(code **)(*this_ptr + 0x380))(uVar26,uVar21);
  uVar18 = iVar19 + 2;
  FUN_00c8e690();
  if ((local_48 == '\0') && (local_50 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  iVar29 = 0;
  if (iVar19 < -1) {
    bVar13 = false;
    local_38 = 0;
    bVar12 = false;
    local_40 = 0;
  }
  else {
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (uint64_t)uVar18;
    }
    uVar26 = 0;
    local_40 = 0;
    bVar12 = false;
    local_38 = 0;
    bVar13 = false;
    do {
      dVar6 = (double)(iVar29 + lVar22) * (dVar16 / (double)(int)uVar3);
      uVar31 = FUN_014c36d0(iVar29,(int)dVar6);
      if (local_50 == local_40) {
        if ((bVar12) || (local_50 == 0)) {
          if ((local_48 != '\0') && (local_50 != 0)) {
            uVar31 = FUN_00d50b20();
          }
        }
        else {
          bVar12 = true;
          if (local_48 == '\0') {
            uVar31 = FUN_00d50b00();
          }
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          uVar31 = FUN_00d50b00();
        }
        if ((!bVar12) || (local_40 == 0)) goto LAB_014cf280;
        uVar31 = FUN_00d50b20();
        local_40 = local_50;
        bVar12 = true;
      }
      else if ((bVar12) && (local_40 != 0)) {
        uVar31 = FUN_00d50b20();
        local_40 = local_50;
        bVar12 = true;
      }
      else {
LAB_014cf280:
        local_40 = local_50;
        bVar12 = true;
      }
      FUN_014c36d0(uVar31,(int)dVar6 + 1);
      if (local_50 == local_38) {
        lVar15 = local_38;
        if ((bVar13) || (local_50 == 0)) {
          bVar17 = bVar13;
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar17 = true;
          if (local_48 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        lVar15 = local_50;
        bVar17 = true;
        if (bVar13) {
          if (local_38 == 0) goto LAB_014cf370;
          FUN_00d50b20();
          lVar15 = local_50;
        }
      }
      else if ((bVar13) && (local_38 != 0)) {
        FUN_00d50b20();
        lVar15 = local_50;
        bVar17 = true;
      }
      else {
LAB_014cf370:
        lVar15 = local_50;
        bVar17 = true;
      }
      bVar13 = bVar17;
      local_38 = lVar15;
      fVar32 = 0.0;
      if ((((local_40 != 0) && (fVar32 = 0.0, local_38 != 0)) &&
          (fVar2 = *(float *)(local_40 + 0x10), !NAN(fVar2))) && (!NAN(*(float *)(local_38 + 0x10)))
         ) {
        fVar32 = (*(float *)(local_38 + 0x10) - fVar2) * ((float)dVar6 - (float)(int)dVar6) + fVar2;
      }
      *(float *)(*(int64_t *)(local_50 + 0x10) + uVar26 * 4) = fVar32;
      uVar26 = uVar26 + 1;
      iVar29 = iVar29 + uVar3;
    } while (uVar21 != uVar26);
  }
  puVar23 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar23 = &g_025f0d98;
  puVar23[2] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  (*g_025f0db0)();
  FUN_015c1480(g_0241c3ec);
  fVar11 = _UNK_024114ac;
  fVar10 = _UNK_024114a8;
  fVar2 = _UNK_024114a4;
  uVar14 = g_023945e0;
  fVar32 = g_0239426c;
  if (-2 < iVar19) {
    lVar22 = *(int64_t *)(local_50 + 0x10);
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (uint64_t)uVar18;
    }
    if ((uint)uVar21 < 8) {
      uVar26 = 0;
    }
    else {
      uVar26 = (uint64_t)((uint)uVar21 & 0x7ffffff8);
      uVar27 = 0;
      do {
        pfVar1 = (float *)(lVar22 + uVar27 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(uint *)(lVar22 + uVar27 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar7 < fVar2) {
          *(uint *)(lVar22 + 4 + uVar27 * 4) = (uint)fVar7 ^ uVar14;
        }
        if (fVar8 < fVar10) {
          *(uint *)(lVar22 + 8 + uVar27 * 4) = (uint)fVar8 ^ uVar14;
        }
        if (fVar9 < fVar11) {
          *(uint *)(lVar22 + 0xc + uVar27 * 4) = (uint)fVar9 ^ uVar14;
        }
        pfVar1 = (float *)(lVar22 + 0x10 + uVar27 * 4);
        fVar7 = pfVar1[1];
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        if (*pfVar1 < fVar32) {
          *(uint *)(lVar22 + 0x10 + uVar27 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar7 < fVar2) {
          *(uint *)(lVar22 + 0x14 + uVar27 * 4) = (uint)fVar7 ^ uVar14;
        }
        if (fVar8 < fVar10) {
          *(uint *)(lVar22 + 0x18 + uVar27 * 4) = (uint)fVar8 ^ uVar14;
        }
        if (fVar9 < fVar11) {
          *(uint *)(lVar22 + 0x1c + uVar27 * 4) = (uint)fVar9 ^ uVar14;
        }
        uVar27 = uVar27 + 8;
      } while (uVar26 != uVar27);
      uVar14 = g_023945e0;
      fVar32 = g_0239426c;
      if (uVar26 == uVar21) goto LAB_014cf61b;
    }
    do {
      fVar2 = *(float *)(lVar22 + uVar26 * 4);
      if (fVar2 < fVar32) {
        *(uint *)(lVar22 + uVar26 * 4) = (uint)fVar2 ^ uVar14;
      }
      uVar26 = uVar26 + 1;
    } while (uVar21 != uVar26);
  }
LAB_014cf61b:
  uVar26 = (**(code **)(*this_ptr + 0x398))();
  uVar14 = g_023945e0;
  uVar21 = (uVar26 | uVar30) >> 0x20;
  if (uVar21 == 0) {
    iVar19 = (int)((uVar26 & 0xffffffff) / (uint64_t)uVar3);
    uVar27 = (uVar26 & 0xffffffff) % (uint64_t)uVar3;
  }
  else {
    uVar27 = (int64_t)uVar26 % (int64_t)uVar30;
    iVar19 = (int)((int64_t)uVar26 / (int64_t)uVar30);
  }
  if (iVar19 < (int)uVar18) {
    uVar21 = *(uint64_t *)(local_50 + 0x10);
    uVar27 = (uint64_t)iVar19;
    uVar26 = (int64_t)(int)uVar18 - uVar27;
    uVar3 = g_023945e0;
    if (7 < uVar26) {
      uVar28 = uVar26 & 0xfffffffffffffff8;
      uVar27 = uVar27 + uVar28;
      lVar22 = uVar21 + (int64_t)iVar19 * 4;
      uVar30 = 0;
      do {
        pfVar1 = (float *)(lVar22 + uVar30 * 4);
        fVar32 = pfVar1[1];
        fVar2 = pfVar1[2];
        fVar10 = pfVar1[3];
        if (0.0 < *pfVar1) {
          *(uint *)(lVar22 + uVar30 * 4) = (uint)*pfVar1 ^ uVar14;
        }
        if (fVar32 <= 0.0) {
          if (fVar2 > 0.0) goto LAB_014cf75c;
LAB_014cf71d:
          if (0.0 < fVar10) goto LAB_014cf729;
LAB_014cf778:
          pfVar1 = (float *)(lVar22 + 0x10 + uVar30 * 4);
          fVar32 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
        }
        else {
          *(uint *)(lVar22 + 4 + uVar30 * 4) = (uint)fVar32 ^ uVar14;
          if (fVar2 <= 0.0) goto LAB_014cf71d;
LAB_014cf75c:
          *(uint *)(lVar22 + 8 + uVar30 * 4) = (uint)fVar2 ^ uVar14;
          if (0.0 >= fVar10) goto LAB_014cf778;
LAB_014cf729:
          *(uint *)(lVar22 + 0xc + uVar30 * 4) = (uint)fVar10 ^ uVar14;
          pfVar1 = (float *)(lVar22 + 0x10 + uVar30 * 4);
          fVar32 = *pfVar1;
          fVar2 = pfVar1[1];
          fVar10 = pfVar1[2];
          fVar11 = pfVar1[3];
        }
        if (0.0 < fVar32) {
          *(uint *)(lVar22 + 0x10 + uVar30 * 4) = (uint)fVar32 ^ uVar14;
        }
        if (0.0 < fVar2) {
          *(uint *)(lVar22 + 0x14 + uVar30 * 4) = (uint)fVar2 ^ uVar14;
        }
        if (0.0 < fVar10) {
          *(uint *)(lVar22 + 0x18 + uVar30 * 4) = (uint)fVar10 ^ uVar14;
        }
        if (0.0 < fVar11) {
          *(uint *)(lVar22 + 0x1c + uVar30 * 4) = (uint)fVar11 ^ uVar14;
        }
        uVar30 = uVar30 + 8;
      } while (uVar28 != uVar30);
      uVar3 = g_023945e0;
      if (uVar26 == uVar28) goto LAB_014cf817;
    }
    do {
      fVar32 = *(float *)(uVar21 + uVar27 * 4);
      if (0.0 < fVar32) {
        *(uint *)(uVar21 + uVar27 * 4) = (uint)fVar32 ^ uVar3;
      }
      uVar27 = uVar27 + 1;
    } while ((int64_t)(int)uVar18 != uVar27);
  }
LAB_014cf817:
  puVar24 = (void*)FUN_00e8fc40(uVar21,uVar27);
  FUN_00d4ff40();
  *(void*)(puVar24 + 7) = 0;
  *(void*)((int64_t)puVar24 + 0x3c) = 0;
  *(void*)(puVar24 + 8) = 0;
  pVar25 = 0x25dc9e8;
  *puVar24 = &g_025dc9e8;
  puVar24[9] = 0;
  puVar24[10] = 0;
  (*g_025dca00)();
  pvVar20 = _pthread_getspecific(pVar25);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84((double)(float)dVar5,0));
  pvVar20 = _pthread_getspecific(pVar25);
  if (pvVar20 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb890();
  if ((void*)this_ptr[9] != puVar24) {
    FUN_00d64850();
    puVar4 = (void*)this_ptr[9];
    if (puVar4 != puVar24) {
      FUN_00d50b00();
      this_ptr[9] = (int64_t)puVar24;
      if (puVar4 != (void*)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  if (puVar23 != (void*)0x0) {
    FUN_00d50b20();
  }
  if ((bVar13) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar12) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    FUN_00d50b20();
    FUN_00d50b20();
  }
  return;
}

