// Function: FUN_014ce440
// Address: 014ce440
// Size: 1975 bytes
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


void FUN_014ce440(void* param_1)

{
  double dVar1;
  uint uVar2;
  void*puVar3;
  uint8_t auVar4 [12];
  uint8_t auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uint64_t uVar13;
  void*puVar14;
  void* pVar15;
  uint64_t uVar16;
  int64_t *plVar17;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar18;
  float fVar19;
  double dVar20;
  uint64_t uVar21;
  uint64_t extraout_XMM0_Qb;
  uint8_t auVar22 [16];
  double dVar23;
  uint8_t auVar24 [16];
  uint8_t auVar25 [16];
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  int64_t *local_38;
  uint64_t extraout_XMM0_Qb_00;
  
  (**(code **)(*this_ptr + 0x378))();
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (int64_t *)0x0) goto LAB_014ce52f;
  (**(code **)(*this_ptr + 0x378))();
  plVar17 = (int64_t *)*arg1;
  if (plVar17 == local_50) {
    if (((char)arg1[1] != '\0') || (local_50 == (int64_t *)0x0)) goto LAB_014ce51b;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_014ce516;
    }
  }
  else {
    lVar12 = arg1[1];
    if (local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (int64_t)local_50;
      if (((char)lVar12 != '\0') && (plVar17 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
LAB_014ce516:
      *(void*)(arg1 + 1) = 1;
LAB_014ce51b:
      if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_014ce52f;
    }
    *arg1 = (int64_t)local_50;
    if (((char)lVar12 != '\0') && (plVar17 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(void*)(arg1 + 1) = 1;
LAB_014ce52f:
  if (*(int *)(this_ptr[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    dVar1 = (double)local_50[7];
    uVar2 = *(uint *)(local_50 + 6);
    uVar11 = (uint64_t)(int)uVar2;
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar10 = _pthread_getspecific(param_1);
    plVar17 = local_50;
    if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
      plVar17 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
    dVar20 = (double)(**(code **)(*plVar17 + 0x370))();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(*this_ptr + 0x388))();
    uVar16 = (uVar13 | uVar11) >> 0x20;
    if (uVar16 == 0) {
      uVar11 = (uVar13 & 0xffffffff) % (uint64_t)uVar2;
      iVar9 = (int)((uVar13 & 0xffffffff) / (uint64_t)uVar2);
    }
    else {
      iVar9 = (int)((int64_t)uVar13 / (int64_t)uVar11);
      uVar11 = (int64_t)uVar13 % (int64_t)uVar11;
    }
    lVar12 = (**(code **)(*this_ptr + 0x380))(uVar16,uVar11);
    FUN_00c8e690();
    if ((local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar18 = 0;
    if (iVar9 < -1) {
      bVar6 = false;
      local_40 = (int64_t *)0x0;
      bVar7 = false;
      local_38 = (int64_t *)0x0;
    }
    else {
      dVar23 = g_0238fee8 / (double)(int)uVar2;
      uVar11 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar11 = (uint64_t)(iVar9 + 2U);
      }
      auVar5._4_4_ = (float)dVar20;
      auVar5._0_4_ = (float)dVar20;
      uVar13 = 0;
      local_38 = (int64_t *)0x0;
      bVar7 = false;
      local_40 = (int64_t *)0x0;
      bVar6 = false;
      do {
        dVar20 = (double)(iVar18 + lVar12) * dVar23;
        auVar4._4_8_ = (uint64_t)dVar20 >> 0x20;
        auVar4._0_4_ = (float)dVar20;
        uVar21 = FUN_014c36d0(auVar4._0_8_,(int)dVar20);
        if (local_50 == local_38) {
          if ((bVar6) || (local_50 == (int64_t *)0x0)) {
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              uVar21 = FUN_00d50b20();
            }
          }
          else {
            bVar6 = true;
            if (local_48 == '\0') {
              uVar21 = FUN_00d50b00();
            }
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          if ((!bVar6) || (local_38 == (int64_t *)0x0)) goto LAB_014ce870;
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else if ((bVar6) && (local_38 != (int64_t *)0x0)) {
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else {
LAB_014ce870:
          local_38 = local_50;
          bVar6 = true;
        }
        FUN_014c36d0(uVar21,(int)dVar20 + 1);
        if (local_50 == local_40) {
          plVar17 = local_40;
          if ((bVar7) || (local_50 == (int64_t *)0x0)) {
            bVar8 = bVar7;
            if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            bVar8 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
            }
          }
        }
        else if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          plVar17 = local_50;
          bVar8 = true;
          if (bVar7) {
            if (local_40 == (int64_t *)0x0) goto LAB_014ce940;
            FUN_00d50b20();
            plVar17 = local_50;
          }
        }
        else if ((bVar7) && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
          plVar17 = local_50;
          bVar8 = true;
        }
        else {
LAB_014ce940:
          plVar17 = local_50;
          bVar8 = true;
        }
        bVar7 = bVar8;
        local_40 = plVar17;
        fVar19 = 0.0;
        if ((local_38 != (int64_t *)0x0) && (fVar19 = 0.0, local_40 != (int64_t *)0x0)) {
          insertps(ZEXT416(*(uint *)((int64_t)local_40 + 0x14)),
                   *(void*)((int64_t)local_38 + 0x14),0x10);
          uVar21 = _exp2f();
          auVar22._0_8_ = _exp2f();
          auVar22._8_8_ = extraout_XMM0_Qb_00;
          auVar24._8_8_ = extraout_XMM0_Qb;
          auVar24._0_8_ = uVar21;
          auVar24 = insertps(auVar24,auVar22,0x10);
          auVar25._0_4_ = auVar24._0_4_ * g_0240e480;
          auVar25._4_4_ = auVar24._4_4_ * _UNK_0240e484;
          auVar25._8_4_ = auVar24._8_4_ * _UNK_0240e488;
          auVar25._12_4_ = auVar24._12_4_ * _UNK_0240e48c;
          auVar5._8_8_ = 0;
          auVar24 = divps(auVar5,auVar25);
          fVar19 = (auVar24._0_4_ - auVar24._4_4_) * ((float)dVar20 - (float)(int)dVar20) +
                   auVar24._4_4_;
        }
        *(float *)(local_50[2] + uVar13 * 4) = fVar19;
        uVar13 = uVar13 + 1;
        iVar18 = iVar18 + uVar2;
      } while (uVar11 != uVar13);
    }
    puVar14 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *(void*)(puVar14 + 7) = 0;
    *(void*)((int64_t)puVar14 + 0x3c) = 0;
    *(void*)(puVar14 + 8) = 0;
    pVar15 = 0x25dc9e8;
    *puVar14 = &g_025dc9e8;
    puVar14[9] = 0;
    puVar14[10] = 0;
    (*g_025dca00)();
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950((double)(float)(g_0238fee8 / dVar1));
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    if ((void*)this_ptr[0x11] != puVar14) {
      FUN_00d64850();
      puVar3 = (void*)this_ptr[0x11];
      if (puVar3 != puVar14) {
        FUN_00d50b00();
        this_ptr[0x11] = (int64_t)puVar14;
        if (puVar3 != (void*)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_00d50b20();
    if ((bVar7) && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}

