// ===== MUAudioSourceDescription — Annotated small functions =====
// 28 readable functions
// Known properties: 38
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

// ==================================================
// @01350430 (2985 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  longlong lVar8;
  pthread_key_t pVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  longlong this;
  longlong *plVar14;
  code *pcVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined8 *local_160;
  undefined1 local_158;
  longlong *local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  longlong *local_130;
  undefined1 local_128;
  longlong *local_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 *local_100;
  undefined1 local_f8;
  longlong local_f0;
  char local_e8;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 *local_c0;
  char local_b8;
  undefined8 *local_b0;
  char local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  code *local_88;
  longlong *local_80;
  longlong *local_78;
  char local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  longlong *local_50;
  char local_48;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  pcVar15 = DAT_02572370;
  (*DAT_02572370)();
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*pcVar15)();
  local_80 = (longlong *)&DAT_02572358;
  local_98 = puVar5;
  if (*(longlong *)(this + 0xe8) != 0) {
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(longlong *)(this + 0xe8);
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
      lVar6 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(longlong *)(local_68 + 0x10);
      plVar12 = *(longlong **)(lVar8 + 8 + lVar6 * 8);
      local_78 = plVar12;
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
      plVar11 = local_78;
      pVar9 = (pthread_key_t)lVar8;
      if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
        plVar12 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
      fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
      plVar12 = local_78;
      if (*(float *)(this + 0x70) <= fVar17) {
        pvVar7 = _pthread_getspecific(pVar9);
        plVar11 = local_78;
        if ((pvVar7 != (void *)0x0) && (lVar6 = FUN_00e8b990(), plVar12 = plVar11, lVar6 != 0)) {
          plVar12 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar6 + 0x154) & 1) + 4];
        }
        fVar17 = (float)(**(code **)(*plVar12 + 0x3e0))();
        if (fVar17 <= *(float *)(this + 0x74)) {
          pvVar7 = _pthread_getspecific(pVar9);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar17 = (float)FUN_014bc1c0();
          if (*(float *)(this + 0x78) <= fVar17) {
            local_50 = local_78;
            local_48 = '\0';
            cVar2 = FUN_00d24090();
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (cVar2 == '\0') {
              local_50 = local_78;
              local_48 = '\0';
              FUN_00d21140();
              if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
          }
        }
      }
    }
    FUN_0131c810();
  }
  if (*(longlong *)(this + 0x40) != 0) {
    local_88 = pcVar15;
    local_70 = '\0';
    local_78 = (longlong *)0x0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = *(longlong *)(this + 0x40);
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
      lVar6 = (longlong)(int)local_60;
      iVar13 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar13);
      if (*(int *)(local_68 + 0xc) <= iVar13) break;
      lVar8 = *(longlong *)(local_68 + 0x10);
      local_78 = *(longlong **)(lVar8 + 8 + lVar6 * 8);
      pvVar7 = _pthread_getspecific((pthread_key_t)lVar8);
      pVar9 = (pthread_key_t)lVar8;
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar12 = local_50;
      if ((((local_48 == '\0') && (local_50 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_48 != '\0')) && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar2 = FUN_014bc070();
      if (((cVar2 == '\0') && (plVar12 != *(longlong **)(this + 0x118))) &&
         ((plVar12 != *(longlong **)(this + 0x128) &&
          (plVar12 != *(longlong **)(this + 0x120))))) {
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar17 = (float)FUN_013de3b0();
        if (fVar17 < *(float *)(this + 0x70)) {
LAB_013508ab:
          bVar1 = false;
LAB_013508ae:
          local_50 = local_78;
          local_48 = '\0';
          bVar3 = FUN_00d24090();
          if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
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
          if (*(float *)(this + 0x74) <= fVar17 && fVar17 != *(float *)(this + 0x74))
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
          if (fVar17 < *(float *)(this + 0x78)) goto LAB_013508ae;
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
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
LAB_01350a00:
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_001150f0();
    pcVar15 = local_88;
  }
  plVar12 = local_80;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_025683c0;
  (*DAT_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  local_88 = (code *)puVar5;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = plVar12;
  uVar18 = (*pcVar15)();
  local_160 = local_98;
  local_158 = 0;
  local_90 = puVar5;
  uVar18 = FUN_013514e0(uVar18,&local_160);
  local_a0 = local_78;
  if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
    uVar18 = FUN_00d50b00();
  }
  uVar16 = *(uint *)((longlong)puVar4 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (ulonglong)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar11 = (longlong *)(ulonglong)uVar16;
      plVar12 = *(longlong **)(puVar4[2] + (longlong)plVar11 * 8);
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      local_80 = plVar12;
      pvVar7 = _pthread_getspecific((pthread_key_t)plVar11);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar11 = local_80;
        plVar12 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
      }
      pVar9 = (pthread_key_t)plVar11;
      (**(code **)(*plVar12 + 0x380))();
      pvVar7 = _pthread_getspecific(pVar9);
      plVar12 = local_80;
      if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), plVar12 = local_80, lVar8 != 0)) {
        plVar12 = (longlong *)local_80[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
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
      uVar18 = FUN_01351de0(1,&local_150,&local_140,&local_e0);
      plVar11 = local_78;
      if ((local_70 == '\0') && (local_78 != (longlong *)0x0)) {
        uVar18 = FUN_00d50b00();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar11 != (longlong *)0x0) {
        local_c0 = (undefined8 *)local_88;
        local_b8 = '\0';
        FUN_015b4ee0();
        if ((local_b8 != '\0') && (local_c0 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_70 = '\0';
        local_78 = plVar11;
        FUN_00d21140();
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  uVar16 = *(uint *)((longlong)local_98 + 0xc);
  if (0 < (int)uVar16) {
    lVar6 = (ulonglong)uVar16 + 1;
    do {
      uVar16 = uVar16 - 1;
      plVar12 = *(longlong **)(local_98[2] + (ulonglong)uVar16 * 8);
      uVar10 = uVar16;
      if (plVar12 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      pvVar7 = _pthread_getspecific(uVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      plVar11 = local_78;
      if ((((local_70 == '\0') && (local_78 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_70 != '\0')) && (local_78 != (longlong *)0x0)) {
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
          plVar14 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x380))();
        pvVar7 = _pthread_getspecific(uVar10);
        plVar14 = plVar11;
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar14 = (longlong *)plVar11[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        (**(code **)(*plVar14 + 0x388))();
        uVar18 = FUN_00e7b4e0();
        local_128 = 0;
        local_130 = plVar12;
        cVar2 = FUN_01353c30(uVar18,1);
        uVar18 = extraout_XMM0_Da_00;
        if (cVar2 != '\0') {
          local_b0 = (undefined8 *)local_88;
          local_a8 = '\0';
          FUN_015b4ee0();
          if ((local_a8 != '\0') && (local_b0 != (undefined8 *)0x0)) {
            FUN_00d50b20();
          }
          local_70 = '\0';
          local_78 = plVar12;
          uVar18 = FUN_00d21140();
          if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
            uVar18 = FUN_00d50b20();
          }
        }
      }
      if (plVar11 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      if (plVar12 != (longlong *)0x0) {
        uVar18 = FUN_00d50b20();
      }
      lVar6 = lVar6 + -1;
    } while (1 < lVar6);
  }
  if (0xe < *(int *)((longlong)local_88 + 0x18) + 7U) {
    local_120 = local_a0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    uVar18 = FUN_013469e0(uVar18,&local_110);
    local_100 = (undefined8 *)local_88;
    local_f8 = 0;
    FUN_01353f80(uVar18,&local_100);
  }
  if (local_a0 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (local_90 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  FUN_00d50b20();
  if (puVar4 != (undefined8 *)0x0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @014ceed0 (2760 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  undefined8 *puVar4;
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
  longlong lVar15;
  double dVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  void *pvVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  pthread_key_t pVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  longlong *arg1;
  longlong *this;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  undefined4 uVar31;
  float fVar32;
  longlong local_50;
  char local_48;
  longlong local_40;
  longlong local_38;
  
  (**(code **)(*this + 0x378))();
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 != 0) {
    (**(code **)(*this + 0x378))();
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
        *(undefined1 *)(arg1 + 1) = 1;
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
    *(undefined1 *)(arg1 + 1) = 1;
  }
LAB_014cefbf:
  if (*(int *)(this[0x21] + 0xc) == 0) {
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
  dVar16 = DAT_0238fee8;
  uVar3 = *(uint *)(local_50 + 0x30);
  uVar30 = (ulonglong)(int)uVar3;
  dVar5 = DAT_0238fee8 / *(double *)(local_50 + 0x38);
  uVar21 = (**(code **)(*this + 0x388))();
  uVar26 = (uVar21 | uVar30) >> 0x20;
  if (uVar26 == 0) {
    iVar19 = (int)((uVar21 & 0xffffffff) / (ulonglong)uVar3);
    uVar21 = (uVar21 & 0xffffffff) % (ulonglong)uVar3;
  }
  else {
    iVar19 = (int)((longlong)uVar21 / (longlong)uVar30);
    uVar21 = (longlong)uVar21 % (longlong)uVar30;
  }
  lVar22 = (**(code **)(*this + 0x380))(uVar26,uVar21);
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
      uVar21 = (ulonglong)uVar18;
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
      *(float *)(*(longlong *)(local_50 + 0x10) + uVar26 * 4) = fVar32;
      uVar26 = uVar26 + 1;
      iVar29 = iVar29 + uVar3;
    } while (uVar21 != uVar26);
  }
  puVar23 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar23 = &DAT_025f0d98;
  puVar23[2] = 0;
  puVar23[3] = 0;
  puVar23[4] = 0;
  puVar23[5] = 0;
  puVar23[6] = 0;
  puVar23[7] = 0;
  (*DAT_025f0db0)();
  FUN_015c1480(DAT_0241c3ec);
  fVar11 = _UNK_024114ac;
  fVar10 = _UNK_024114a8;
  fVar2 = _UNK_024114a4;
  uVar14 = _DAT_023945e0;
  fVar32 = DAT_0239426c;
  if (-2 < iVar19) {
    lVar22 = *(longlong *)(local_50 + 0x10);
    uVar21 = 1;
    if (1 < (int)uVar18) {
      uVar21 = (ulonglong)uVar18;
    }
    if ((uint)uVar21 < 8) {
      uVar26 = 0;
    }
    else {
      uVar26 = (ulonglong)((uint)uVar21 & 0x7ffffff8);
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
      uVar14 = _DAT_023945e0;
      fVar32 = DAT_0239426c;
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
  uVar26 = (**(code **)(*this + 0x398))();
  uVar14 = _DAT_023945e0;
  uVar21 = (uVar26 | uVar30) >> 0x20;
  if (uVar21 == 0) {
    iVar19 = (int)((uVar26 & 0xffffffff) / (ulonglong)uVar3);
    uVar27 = (uVar26 & 0xffffffff) % (ulonglong)uVar3;
  }
  else {
    uVar27 = (longlong)uVar26 % (longlong)uVar30;
    iVar19 = (int)((longlong)uVar26 / (longlong)uVar30);
  }
  if (iVar19 < (int)uVar18) {
    uVar21 = *(ulonglong *)(local_50 + 0x10);
    uVar27 = (ulonglong)iVar19;
    uVar26 = (longlong)(int)uVar18 - uVar27;
    uVar3 = _DAT_023945e0;
    if (7 < uVar26) {
      uVar28 = uVar26 & 0xfffffffffffffff8;
      uVar27 = uVar27 + uVar28;
      lVar22 = uVar21 + (longlong)iVar19 * 4;
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
      uVar3 = _DAT_023945e0;
      if (uVar26 == uVar28) goto LAB_014cf817;
    }
    do {
      fVar32 = *(float *)(uVar21 + uVar27 * 4);
      if (0.0 < fVar32) {
        *(uint *)(uVar21 + uVar27 * 4) = (uint)fVar32 ^ uVar3;
      }
      uVar27 = uVar27 + 1;
    } while ((longlong)(int)uVar18 != uVar27);
  }
LAB_014cf817:
  puVar24 = (undefined8 *)FUN_00e8fc40(uVar21,uVar27);
  FUN_00d4ff40();
  *(undefined1 *)(puVar24 + 7) = 0;
  *(undefined4 *)((longlong)puVar24 + 0x3c) = 0;
  *(undefined2 *)(puVar24 + 8) = 0;
  pVar25 = 0x25dc9e8;
  *puVar24 = &DAT_025dc9e8;
  puVar24[9] = 0;
  puVar24[10] = 0;
  (*DAT_025dca00)();
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
  if ((undefined8 *)this[9] != puVar24) {
    FUN_00d64850();
    puVar4 = (undefined8 *)this[9];
    if (puVar4 != puVar24) {
      FUN_00d50b00();
      this[9] = (longlong)puVar24;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
  }
  FUN_00d50b20();
  if (puVar23 != (undefined8 *)0x0) {
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




// ==================================================
// @01348960 (2714 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  pthread_key_t pVar5;
  longlong in_RCX;
  char unaff_SIL;
  int iVar6;
  bool bVar7;
  float fVar8;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  char local_a0;
  longlong local_80;
  char local_78;
  int local_64;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014ed740();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_a0 == '\0') && (local_a8 != 0)) {
    FUN_00d50b00();
  }
  if ((local_38 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  pVar5 = (pthread_key_t)in_RCX;
  if (local_a8 != 0) {
    if (*(int *)(local_a8 + 0xc) < 1) {
      local_64 = 0x7fffffff;
    }
    else {
      local_64 = 0x7fffffff;
      iVar6 = 0;
      do {
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_011ef8d0();
        if ((local_38 == '\0') && (local_40 != 0)) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar8 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1 + DAT_02394254);
        pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012595a0(fVar8 + param_1);
        if (unaff_SIL != '\0') {
          pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          if (local_40 == 0) {
            bVar7 = false;
          }
          else {
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            if (local_60 == 0) {
              bVar7 = false;
            }
            else {
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_01266fe0();
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_012e7fb0();
              pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_0150eb60();
              if (local_108 == 0) {
                bVar7 = false;
              }
              else {
                pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                if (pvVar3 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_0125e930();
                if (local_f8 == 0) {
                  bVar7 = false;
                }
                else {
                  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0125e930();
                  pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
                  if (pvVar3 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_0152ebe0();
                  bVar7 = local_118 != 0;
                  if ((local_110 != '\0') && (local_118 != 0)) {
                    FUN_00d50b20();
                  }
                  if ((local_c0 != '\0') && (local_c8 != 0)) {
                    FUN_00d50b20();
                  }
                }
                if ((local_f0 != '\0') && (local_f8 != 0)) {
                  FUN_00d50b20();
                }
              }
              if ((local_100 != '\0') && (local_108 != 0)) {
                FUN_00d50b20();
              }
              if ((local_e0 != '\0') && (local_e8 != 0)) {
                FUN_00d50b20();
              }
              if ((local_d0 != '\0') && (local_d8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (bVar7) {
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01266fe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e7fb0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0150eb60();
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            if ((local_78 != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01822e80();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125e930();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0152ebe0();
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            iVar1 = FUN_01507f00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
              in_RCX = local_40;
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)in_RCX);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0125dfa0();
            iVar2 = FUN_01773f20();
            if (local_64 == 0x7fffffff) {
              local_64 = iVar1 - iVar2;
            }
            if (local_40 != 0) {
              FUN_00d50b20();
              FUN_00d50b20();
            }
          }
        }
        if (local_40 != 0) {
          FUN_00d50b20();
        }
        pVar5 = (pthread_key_t)in_RCX;
        iVar6 = iVar6 + 1;
      } while (iVar6 < *(int *)(local_a8 + 0xc));
    }
    FUN_0015edf0();
    FUN_00d50b20();
    if (local_64 != 0x7fffffff) {
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ed740();
    }
  }
  if (local_a8 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01347c70 (2169 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  char cVar8;
  void *pvVar9;
  longlong lVar10;
  longlong *plVar11;
  pthread_key_t pVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  byte bVar16;
  longlong local_b8;
  char local_b0;
  longlong *local_68;
  uint local_54;
  char local_50 [8];
  longlong *local_48;
  char local_40 [15];
  char local_31;
  
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013de560();
  plVar13 = local_48;
  if (local_40[0] == '\0') {
    if (local_48 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01347cfe;
    }
LAB_01347d5b:
    bVar6 = true;
  }
  else {
    if (local_48 == (longlong *)0x0) goto LAB_01347d5b;
LAB_01347cfe:
    pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
    if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      param_1 = plVar13;
    }
    cVar8 = FUN_014bc070();
    param_1 = (longlong *)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    local_54 = (uint)param_1;
    if (cVar8 != '\0') {
      bVar6 = false;
      goto LAB_01348516;
    }
    pvVar9 = _pthread_getspecific(local_54);
    if ((pvVar9 != (void *)0x0) && (lVar15 = FUN_00e8b990(), lVar15 != 0)) {
      param_1 = plVar13;
      plVar13 = (longlong *)plVar13[(ulonglong)(*(uint *)(lVar15 + 0x154) & 1) + 4];
    }
    cVar8 = (**(code **)(*plVar13 + 0x3c0))();
    bVar6 = false;
    if (cVar8 != '\0') goto LAB_01348516;
  }
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar9 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  plVar13 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if (*(int *)((longlong)plVar13 + 0xc) < 1) {
    local_54 = 0;
  }
  else {
    lVar15 = 0;
    local_54 = 0;
    do {
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      plVar7 = local_48;
      if (((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
         ((FUN_00d50b00(), local_40[0] != '\0' && (local_48 != (longlong *)0x0)))) {
        FUN_00d50b20();
      }
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = plVar7;
      }
      FUN_01267000();
      pVar12 = (pthread_key_t)param_1;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
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
        local_68 = (longlong *)0x0;
        bVar2 = false;
      }
      else {
        if (local_48 == (longlong *)0x0) goto LAB_01348080;
LAB_01347fb0:
        pvVar9 = _pthread_getspecific(pVar12);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cade0();
        if (local_48 == (longlong *)0x0) {
          bVar5 = false;
          param_1 = local_48;
          goto LAB_01348145;
        }
        plVar11 = local_48;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01505b90();
        if (local_48 == (longlong *)0x0) {
          bVar5 = false;
          bVar4 = false;
          param_1 = local_48;
          goto LAB_01348155;
        }
        plVar11 = local_48;
        if (((local_40[0] == '\0') && (FUN_00d50b00(), local_40[0] != '\0')) &&
           (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        pvVar9 = _pthread_getspecific((pthread_key_t)plVar11);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0179acd0();
        FUN_00d23340();
        local_68 = local_48;
        local_50[0] = local_40[0];
        param_1 = (longlong *)local_50;
        plVar11 = (longlong *)local_40;
        if (local_40[0] == '\0') {
          plVar11 = param_1;
        }
        *(undefined1 *)plVar11 = 0;
        if ((local_40[0] != '\0') && (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_68 == (longlong *)0x0) {
          bVar2 = false;
          local_68 = (longlong *)0x0;
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
      pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
      if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
        param_1 = plVar7;
      }
      FUN_0128c200();
      plVar11 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_013482a7;
        }
        bVar16 = (local_54 & 1) == 0;
        cVar8 = local_68 == (longlong *)0x0;
      }
      else {
LAB_013482a7:
        local_31 = local_68 == (longlong *)0x0;
        if (((bool)local_31) || (plVar11 == (longlong *)0x0)) {
LAB_01348410:
          bVar16 = (local_54 & 1) == 0;
          cVar8 = local_31;
          if (plVar11 == (longlong *)0x0) goto LAB_01348453;
        }
        else {
          pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
          if ((pvVar9 != (void *)0x0) && (lVar10 = FUN_00e8b990(), lVar10 != 0)) {
            param_1 = local_68;
          }
          FUN_017e5950();
          plVar14 = local_48;
          if (local_48 == (longlong *)0x0) {
            bVar1 = true;
            plVar14 = (longlong *)0x0;
          }
          else {
            if (local_40[0] == '\0') {
              FUN_00d50b00();
              bVar1 = false;
              if ((local_40[0] == '\0') || (local_48 == (longlong *)0x0)) goto LAB_013483b3;
              FUN_00d50b20();
            }
            else {
              local_40[0] = '\0';
            }
            bVar1 = false;
          }
LAB_013483b3:
          if (plVar14 == (longlong *)0x0) goto LAB_01348410;
          pvVar9 = _pthread_getspecific((pthread_key_t)param_1);
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
      if (plVar7 != (longlong *)0x0) {
        FUN_00d50b20();
      }
    } while ((bVar16 != 0) && (lVar15 = lVar15 + 1, lVar15 < *(int *)((longlong)plVar13 + 0xc)));
  }
  FUN_00d50b20();
  local_54 = local_54 & 0xffffff01;
LAB_01348516:
  if (!bVar6) {
    FUN_00d50b20();
  }
  return local_54;
}




// ==================================================
// @014ce440 (1975 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  double dVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  pthread_key_t pVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *arg1;
  longlong *this;
  int iVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  longlong *local_50;
  char local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 extraout_XMM0_Qb_00;
  
  (**(code **)(*this + 0x378))();
  if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (local_50 == (longlong *)0x0) goto LAB_014ce52f;
  (**(code **)(*this + 0x378))();
  plVar17 = (longlong *)*arg1;
  if (plVar17 == local_50) {
    if (((char)arg1[1] != '\0') || (local_50 == (longlong *)0x0)) goto LAB_014ce51b;
    if (local_48 == '\0') {
      FUN_00d50b00();
      goto LAB_014ce516;
    }
  }
  else {
    lVar12 = arg1[1];
    if (local_48 == '\0') {
      if (local_50 != (longlong *)0x0) {
        FUN_00d50b00();
      }
      *arg1 = (longlong)local_50;
      if (((char)lVar12 != '\0') && (plVar17 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
LAB_014ce516:
      *(undefined1 *)(arg1 + 1) = 1;
LAB_014ce51b:
      if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_014ce52f;
    }
    *arg1 = (longlong)local_50;
    if (((char)lVar12 != '\0') && (plVar17 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  *(undefined1 *)(arg1 + 1) = 1;
LAB_014ce52f:
  if (*(int *)(this[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    dVar1 = (double)local_50[7];
    uVar2 = *(uint *)(local_50 + 6);
    uVar11 = (ulonglong)(int)uVar2;
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01320d00();
    pvVar10 = _pthread_getspecific(param_1);
    plVar17 = local_50;
    if ((pvVar10 != (void *)0x0) && (lVar12 = FUN_00e8b990(), lVar12 != 0)) {
      plVar17 = (longlong *)local_50[(ulonglong)(*(uint *)(lVar12 + 0x154) & 1) + 4];
    }
    dVar20 = (double)(**(code **)(*plVar17 + 0x370))();
    if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    uVar13 = (**(code **)(*this + 0x388))();
    uVar16 = (uVar13 | uVar11) >> 0x20;
    if (uVar16 == 0) {
      uVar11 = (uVar13 & 0xffffffff) % (ulonglong)uVar2;
      iVar9 = (int)((uVar13 & 0xffffffff) / (ulonglong)uVar2);
    }
    else {
      iVar9 = (int)((longlong)uVar13 / (longlong)uVar11);
      uVar11 = (longlong)uVar13 % (longlong)uVar11;
    }
    lVar12 = (**(code **)(*this + 0x380))(uVar16,uVar11);
    FUN_00c8e690();
    if ((local_48 == '\0') && (local_50 != (longlong *)0x0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    iVar18 = 0;
    if (iVar9 < -1) {
      bVar6 = false;
      local_40 = (longlong *)0x0;
      bVar7 = false;
      local_38 = (longlong *)0x0;
    }
    else {
      dVar23 = DAT_0238fee8 / (double)(int)uVar2;
      uVar11 = 1;
      if (1 < (int)(iVar9 + 2U)) {
        uVar11 = (ulonglong)(iVar9 + 2U);
      }
      auVar5._4_4_ = (float)dVar20;
      auVar5._0_4_ = (float)dVar20;
      uVar13 = 0;
      local_38 = (longlong *)0x0;
      bVar7 = false;
      local_40 = (longlong *)0x0;
      bVar6 = false;
      do {
        dVar20 = (double)(iVar18 + lVar12) * dVar23;
        auVar4._4_8_ = (ulonglong)dVar20 >> 0x20;
        auVar4._0_4_ = (float)dVar20;
        uVar21 = FUN_014c36d0(auVar4._0_8_,(int)dVar20);
        if (local_50 == local_38) {
          if ((bVar6) || (local_50 == (longlong *)0x0)) {
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
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
          if (local_50 != (longlong *)0x0) {
            uVar21 = FUN_00d50b00();
          }
          if ((!bVar6) || (local_38 == (longlong *)0x0)) goto LAB_014ce870;
          uVar21 = FUN_00d50b20();
          local_38 = local_50;
          bVar6 = true;
        }
        else if ((bVar6) && (local_38 != (longlong *)0x0)) {
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
          if ((bVar7) || (local_50 == (longlong *)0x0)) {
            bVar8 = bVar7;
            if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
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
          if (local_50 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          plVar17 = local_50;
          bVar8 = true;
          if (bVar7) {
            if (local_40 == (longlong *)0x0) goto LAB_014ce940;
            FUN_00d50b20();
            plVar17 = local_50;
          }
        }
        else if ((bVar7) && (local_40 != (longlong *)0x0)) {
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
        if ((local_38 != (longlong *)0x0) && (fVar19 = 0.0, local_40 != (longlong *)0x0)) {
          insertps(ZEXT416(*(uint *)((longlong)local_40 + 0x14)),
                   *(undefined4 *)((longlong)local_38 + 0x14),0x10);
          uVar21 = _exp2f();
          auVar22._0_8_ = _exp2f();
          auVar22._8_8_ = extraout_XMM0_Qb_00;
          auVar24._8_8_ = extraout_XMM0_Qb;
          auVar24._0_8_ = uVar21;
          auVar24 = insertps(auVar24,auVar22,0x10);
          auVar25._0_4_ = auVar24._0_4_ * _DAT_0240e480;
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
    puVar14 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)(puVar14 + 7) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x3c) = 0;
    *(undefined2 *)(puVar14 + 8) = 0;
    pVar15 = 0x25dc9e8;
    *puVar14 = &DAT_025dc9e8;
    puVar14[9] = 0;
    puVar14[10] = 0;
    (*DAT_025dca00)();
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb950((double)(float)(DAT_0238fee8 / dVar1));
    pvVar10 = _pthread_getspecific(pVar15);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013eb890();
    if ((undefined8 *)this[0x11] != puVar14) {
      FUN_00d64850();
      puVar3 = (undefined8 *)this[0x11];
      if (puVar3 != puVar14) {
        FUN_00d50b00();
        this[0x11] = (longlong)puVar14;
        if (puVar3 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
      FUN_00d64910();
    }
    FUN_00d50b20();
    if ((bVar7) && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((bVar6) && (local_38 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_50 != (longlong *)0x0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @0133b360 (1971 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  code *pcVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  pthread_key_t pVar10;
  undefined *puVar11;
  longlong *plVar12;
  longlong *arg1;
  longlong this;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  longlong local_40;
  char local_38;
  
  if ((*arg1 != 0) || (MACH_HEADER.filetype == 0)) {
    lVar5 = **(longlong **)(*arg1 + 0x10);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
    }
    plVar12 = *(longlong **)(lVar5 + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar14 = (double)(**(code **)(*plVar12 + 0x370))();
    plVar12 = *(longlong **)(this + 0x38);
    pvVar3 = _pthread_getspecific(param_1);
    if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
      plVar12 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
    }
    dVar15 = (double)(**(code **)(*plVar12 + 0x370))();
    puVar6 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar11 = &DAT_02572358;
    *puVar6 = &DAT_02572358;
    uVar16 = (*DAT_02572370)();
    lVar5 = *arg1;
    if (0 < *(int *)(lVar5 + 0xc)) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar4 * 8);
        pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          lVar5 = *(longlong *)(lVar5 + 0x20 + (ulonglong)(*(uint *)(lVar7 + 0x154) & 1) * 8);
        }
        lVar5 = *(longlong *)(lVar5 + 0x40);
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if (0 < *(int *)(lVar5 + 0xc)) {
          lVar7 = 0;
          do {
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if ((local_38 == '\0') && (local_40 != 0)) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar2 = FUN_014bc070();
            if (cVar2 == '\0') {
              pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
              if (pvVar3 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_013dfdd0();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
              if (local_40 != 0) {
                pvVar3 = _pthread_getspecific((pthread_key_t)puVar11);
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
        puVar11 = (undefined *)(longlong)*(int *)(lVar5 + 0xc);
      } while (lVar4 < (longlong)puVar11);
    }
    FUN_00d242c0(uVar16,0);
    pcVar1 = DAT_025e6278;
    if (0 < *(int *)((longlong)puVar6 + 0xc)) {
      dVar15 = dVar15 / dVar14;
      lVar5 = 0;
      do {
        plVar12 = *(longlong **)(puVar6[2] + lVar5 * 8);
        lVar4 = lVar5;
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar14 = (double)FUN_014bacf0();
        lVar4 = *(longlong *)(this + 0xd0);
        if (0 < *(int *)(lVar4 + 0xc)) {
          lVar7 = 0;
          do {
            lVar8 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + lVar7 * 8);
            if (lVar8 != 0) {
              FUN_00d50b00();
            }
            pvVar3 = _pthread_getspecific((pthread_key_t)lVar4);
            if (pvVar3 != (void *)0x0) {
              FUN_00e8b990();
            }
            dVar17 = (double)FUN_014bacf0();
            if (lVar8 != 0) {
              FUN_00d50b20();
            }
            if ((double)((ulonglong)(dVar17 - dVar14) & _DAT_023908f0) < DAT_0240d3c0)
            goto LAB_0133bb35;
            lVar7 = lVar7 + 1;
            lVar4 = *(longlong *)(this + 0xd0);
          } while (lVar7 < *(int *)(lVar4 + 0xc));
        }
        pVar10 = (pthread_key_t)lVar4;
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
        }
        lVar4 = (**(code **)(*plVar13 + 0x3a0))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        lVar7 = (**(code **)(*plVar13 + 0x390))();
        pvVar3 = _pthread_getspecific(pVar10);
        plVar13 = plVar12;
        if ((pvVar3 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          plVar13 = (longlong *)plVar12[(ulonglong)(*(uint *)(lVar8 + 0x154) & 1) + 4];
        }
        lVar8 = (**(code **)(*plVar13 + 0x388))();
        puVar9 = (undefined8 *)FUN_00e8fc40();
        FUN_007ef480();
        pVar10 = 0x25e6250;
        *puVar9 = &DAT_025e6260;
        puVar9[7] = &DAT_025e66c0;
        puVar9[0x1c] = 0;
        puVar9[0x19] = 0;
        puVar9[0x1a] = 0;
        *(undefined4 *)(puVar9 + 0x1b) = 0;
        (*pcVar1)();
        pvVar3 = _pthread_getspecific(pVar10);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        auVar18._0_8_ =
             (double)((ulonglong)((double)lVar4 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar4 * dVar15;
        auVar18._8_8_ = _UNK_023945c8;
        roundsd(ZEXT816(0),auVar18,0xb);
        auVar19._0_8_ =
             (double)((ulonglong)((double)lVar7 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar7 * dVar15;
        auVar19._8_8_ = _UNK_023945c8;
        auVar18 = roundsd(ZEXT816(0),auVar19,0xb);
        auVar20._0_8_ =
             (double)((ulonglong)((double)lVar8 * dVar15) & _DAT_023945b0 | _DAT_023945c0) +
             (double)lVar8 * dVar15;
        auVar20._8_8_ = _UNK_023945c8;
        auVar19 = roundsd(ZEXT816(0),auVar20,0xb);
        lVar4 = (longlong)auVar19._0_8_;
        FUN_014bad20(lVar4,(longlong)auVar18._0_8_);
        pVar10 = (pthread_key_t)lVar4;
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
        if (plVar12 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)((longlong)puVar6 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @0134c610 (1849 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  void *pvVar1;
  pthread_key_t pVar2;
  longlong lVar3;
  uint uVar4;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_70;
  char local_68;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfcb0();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dd790();
  if ((local_38 == '\0') && (local_40 != 0)) {
    FUN_00d50b00();
  }
  uVar4 = *(uint *)(local_40 + 0xc);
  if (0 < (int)uVar4) {
    lVar3 = (ulonglong)uVar4 + 1;
    do {
      uVar4 = uVar4 - 1;
      pVar2 = uVar4;
      pvVar1 = _pthread_getspecific(uVar4);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_011ef8d0();
      if ((local_38 == '\0') && (local_40 != 0)) {
        FUN_00d50b00();
      }
      pvVar1 = _pthread_getspecific(pVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01266fe0();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_40 != 0) {
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01270ab0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01270ab0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012708c0();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012708c0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012dffb0();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0125e930();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        if (local_40 != 0) {
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e930();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152ebe0();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01508450();
          pvVar1 = _pthread_getspecific(pVar2);
          if (pvVar1 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0039e8b0();
          if (local_68 == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_68 = '\0';
          }
          FUN_0150ec20();
          if (local_70 != 0) {
            FUN_00d50b20();
          }
          if ((local_68 != '\0') && (local_70 != 0)) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          if ((local_98 != '\0') && (local_a0 != 0)) {
            FUN_00d50b20();
          }
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01266fe0();
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e6e20();
        if ((local_38 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
        }
        pvVar1 = _pthread_getspecific(pVar2);
        if (pvVar1 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0128dda0();
      }
      if (local_40 != 0) {
        FUN_00d50b20();
      }
      lVar3 = lVar3 + -1;
    } while (1 < lVar3);
  }
  FUN_00d50b20();
  if (local_40 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @014cfcc0 (1752 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  uint uVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  void *pvVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  pthread_key_t pVar14;
  ulonglong uVar15;
  longlong *arg1;
  longlong *this;
  ulonglong uVar16;
  int iVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  
  (**(code **)(*this + 0x378))();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) goto LAB_014cfdaf;
  (**(code **)(*this + 0x378))();
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
      *(undefined1 *)(arg1 + 1) = 1;
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
  *(undefined1 *)(arg1 + 1) = 1;
LAB_014cfdaf:
  pvVar10 = _pthread_getspecific(param_1);
  if (pvVar10 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar18 = (float)FUN_0132db90();
  if (*(int *)(this[0x21] + 0xc) != 0) {
    pvVar10 = _pthread_getspecific(param_1);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0132d790();
    if ((local_50 == '\0') && (local_58 != 0)) {
      FUN_00d50b00();
    }
    dVar7 = DAT_0238fee8;
    uVar1 = *(uint *)(local_58 + 0x30);
    uVar16 = (ulonglong)(int)uVar1;
    dVar2 = DAT_0238fee8 / *(double *)(local_58 + 0x38);
    uVar11 = (**(code **)(*this + 0x388))();
    uVar15 = (uVar11 | uVar16) >> 0x20;
    if (uVar15 == 0) {
      uVar16 = (uVar11 & 0xffffffff) % (ulonglong)uVar1;
      iVar9 = (int)((uVar11 & 0xffffffff) / (ulonglong)uVar1);
    }
    else {
      iVar9 = (int)((longlong)uVar11 / (longlong)uVar16);
      uVar16 = (longlong)uVar11 % (longlong)uVar16;
    }
    lVar12 = (**(code **)(*this + 0x380))(uVar15,uVar16);
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
        uVar16 = (ulonglong)(iVar9 + 2U);
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
        *(float *)(*(longlong *)(local_58 + 0x10) + uVar11 * 4) = fVar20;
        uVar11 = uVar11 + 1;
        iVar17 = iVar17 + uVar1;
      } while (uVar16 != uVar11);
    }
    puVar13 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x3c) = 0;
    *(undefined2 *)(puVar13 + 8) = 0;
    pVar14 = 0x25dc9e8;
    *puVar13 = &DAT_025dc9e8;
    puVar13[9] = 0;
    puVar13[10] = 0;
    (*DAT_025dca00)();
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




// ==================================================
// @013514e0 (1647 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  undefined8 *this;
  longlong lVar9;
  undefined7 uVar11;
  longlong *plVar10;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  longlong local_38;
  
  plVar3 = (longlong *)FUN_00e8fc40();
  FUN_00022d50();
  local_78 = plVar3;
  (**(code **)(*plVar3 + 0x18))();
  if (*(int *)(*param_2 + 0xc) < 1) {
    plVar3 = (longlong *)0x0;
    local_38 = 0;
    local_60 = 0;
    lVar9 = 0;
    local_58 = 0;
    local_40 = 0;
  }
  else {
    lVar12 = 0;
    local_40 = 0;
    local_58 = 0;
    lVar9 = 0;
    local_60 = 0;
    lVar13 = 0;
    local_38 = 0;
    plVar3 = (longlong *)0x0;
    plVar10 = param_2;
    do {
      pVar7 = (pthread_key_t)lVar13;
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      pvVar4 = _pthread_getspecific(pVar7);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar5 = FUN_013dd7c0();
      lVar13 = local_50;
      uVar11 = (undefined7)((ulonglong)plVar10 >> 8);
      if (local_50 == local_40) {
        lVar13 = local_40;
        if (((char)local_58 != '\0') || (local_50 == 0)) {
          plVar10 = (longlong *)(local_58 & 0xffffffff);
          goto joined_r0x013516bd;
        }
        if (local_48 == '\0') {
          FUN_00d50b00();
          goto LAB_013516d0;
        }
LAB_01351655:
        local_48 = '\0';
        local_58 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        local_40 = lVar13;
      }
      else {
        if (local_48 != '\0') {
          if (((char)local_58 != '\0') && (local_40 != 0)) {
            uVar5 = FUN_00d50b20();
          }
          goto LAB_01351655;
        }
        if (local_50 != 0) {
          FUN_00d50b00();
        }
        plVar10 = (longlong *)CONCAT71(uVar11,1);
        if (((char)local_58 != '\0') && (local_40 != 0)) {
          FUN_00d50b20();
          local_40 = lVar13;
LAB_013516d0:
          plVar10 = (longlong *)CONCAT71(uVar11,1);
          lVar13 = local_40;
        }
joined_r0x013516bd:
        local_40 = lVar13;
        if ((local_48 == '\0') || (local_50 == 0)) {
          local_58 = (ulonglong)plVar10 & 0xffffffff;
        }
        else {
          FUN_00d50b20();
          local_58 = (ulonglong)plVar10 & 0xffffffff;
        }
      }
      if ((local_90 != '\0') && (local_98 != 0)) {
        FUN_00d50b20();
      }
      if (0 < *(int *)(local_40 + 0xc)) {
        lVar13 = 0;
        do {
          plVar10 = plVar3;
          lVar6 = *(longlong *)(local_40 + 0x10);
          lVar1 = *(longlong *)(lVar6 + lVar13 * 8);
          lVar8 = local_40;
          plVar3 = plVar10;
          if (lVar9 == lVar1) {
            if (((char)local_60 == '\0') && (lVar9 != 0)) {
              local_60 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              plVar3 = (longlong *)0x0;
              FUN_00d50b00();
            }
          }
          else {
            if (lVar1 != 0) {
              plVar3 = (longlong *)(local_60 & 0xffffffff);
              lVar6 = FUN_00d50b00();
            }
            if (((char)local_60 == '\0') || (lVar9 == 0)) {
              local_60 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
              lVar9 = lVar1;
            }
            else {
              plVar3 = (longlong *)(local_60 & 0xffffffff);
              uVar5 = FUN_00d50b20();
              local_60 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
              lVar9 = lVar1;
            }
          }
          pvVar4 = _pthread_getspecific((pthread_key_t)lVar8);
          if (pvVar4 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01266fe0();
          lVar6 = local_50;
          uVar11 = (undefined7)((ulonglong)plVar3 >> 8);
          cVar2 = (char)plVar10;
          lVar1 = local_50;
          if (local_50 == local_38) {
            plVar3 = plVar10;
            lVar6 = local_38;
            if ((cVar2 == '\0') && (local_50 != 0)) {
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              lVar6 = local_38;
              if (local_48 != '\0') goto joined_r0x013519fe;
              FUN_00d50b00();
LAB_0135189f:
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              lVar6 = local_38;
            }
joined_r0x01351ab8:
            local_38 = lVar6;
            lVar1 = local_50;
            if (local_48 != '\0') {
LAB_013518a9:
              lVar1 = local_50;
              lVar6 = local_38;
              if (local_50 != 0) {
                FUN_00d50b20();
                lVar1 = local_50;
                lVar6 = local_38;
              }
            }
          }
          else {
            if (local_48 == '\0') {
              if (local_50 != 0) {
                FUN_00d50b00();
              }
              plVar3 = (longlong *)CONCAT71(uVar11,1);
              if (cVar2 == '\0') goto joined_r0x01351ab8;
              if (local_38 != 0) {
                FUN_00d50b20();
                local_38 = lVar6;
                goto LAB_0135189f;
              }
              local_38 = lVar6;
              lVar1 = local_50;
              if (local_48 == '\0') goto joined_r0x013519fe;
              goto LAB_013518a9;
            }
            plVar3 = (longlong *)CONCAT71(uVar11,1);
            if ((cVar2 != '\0') && (local_38 != 0)) {
              FUN_00d50b20();
              lVar1 = local_50;
            }
          }
joined_r0x013519fe:
          local_50 = lVar6;
          local_38 = local_50;
          if (local_50 != 0) {
            pVar7 = (pthread_key_t)local_50;
            local_48 = '\0';
            cVar2 = FUN_00ca18c0();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = local_50;
            if (cVar2 == '\0') {
              pvVar4 = _pthread_getspecific(pVar7);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar14 = (double)FUN_0125a280();
              pvVar4 = _pthread_getspecific((pthread_key_t)lVar12);
              if (pvVar4 != (void *)0x0) {
                FUN_00e8b990();
              }
              dVar15 = (double)FUN_013de8d0();
              uVar5 = FUN_00d470c0(dVar14 - dVar15);
              lVar6 = local_50;
              local_68 = 0;
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  uVar5 = FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              local_68 = '\x01';
              local_70 = lVar6;
              local_88 = local_38;
              local_80 = '\0';
              FUN_0139d260(uVar5,&local_88);
              if ((local_80 != '\0') && (local_88 != 0)) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              lVar1 = local_50;
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
                lVar1 = local_50;
              }
            }
          }
          local_50 = lVar1;
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(local_40 + 0xc));
      }
      lVar12 = lVar12 + 1;
      lVar13 = (longlong)*(int *)(*param_2 + 0xc);
    } while (lVar12 < lVar13);
  }
  *this = local_78;
  *(undefined1 *)(this + 1) = 1;
  if (((char)plVar3 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_60 != '\0') && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if (((char)local_58 != '\0') && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @010f06d0 (1637 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  undefined8 *puVar11;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025e0530;
  FUN_010f0e90();
  FUN_010f0f70();
  FUN_010f1050();
  *(undefined4 *)(this + 10) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f1130();
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x54) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d030 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278cff8 = FUN_010f03e0();
        _DAT_0278cff0 = "_useAutomaticDetection";
        _DAT_0278d000 = 0;
        _DAT_0278d008 = 0x6200;
        _DAT_0278d010 = "bool";
        _DAT_0278d018 = 0;
        uRam000000000278d020 = 0;
        _DAT_0278d028 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x55) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d078 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d040 = FUN_010f03e0();
        _DAT_0278d038 = "_percussiveSeparation";
        _DAT_0278d048 = 0;
        _DAT_0278d050 = 0x6200;
        _DAT_0278d058 = "bool";
        _DAT_0278d060 = 0;
        uRam000000000278d068 = 0;
        _DAT_0278d070 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x56) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d0c0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d088 = FUN_010f03e0();
        _DAT_0278d080 = "_hasDistinctAttacks";
        _DAT_0278d090 = 0;
        _DAT_0278d098 = 0x6200;
        _DAT_0278d0a0 = "bool";
        _DAT_0278d0a8 = 0;
        uRam000000000278d0b0 = 0;
        _DAT_0278d0b8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x57) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d108 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d0d0 = FUN_010f03e0();
        _DAT_0278d0c8 = "_findSibilantPointsAutomatically";
        _DAT_0278d0d8 = 0;
        _DAT_0278d0e0 = 0x6200;
        _DAT_0278d0e8 = "bool";
        _DAT_0278d0f0 = 0;
        uRam000000000278d0f8 = 0;
        _DAT_0278d100 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)(this + 0xb) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d150 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d118 = FUN_010f03e0();
        _DAT_0278d110 = "_isPreliminary";
        _DAT_0278d120 = 0;
        _DAT_0278d128 = 0x6200;
        _DAT_0278d130 = "bool";
        _DAT_0278d138 = 0;
        uRam000000000278d140 = 0;
        _DAT_0278d148 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x59) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d198 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d160 = FUN_010f03e0();
        _DAT_0278d158 = "_isTonalicOnly";
        _DAT_0278d168 = 0;
        _DAT_0278d170 = 0x6200;
        _DAT_0278d178 = "bool";
        _DAT_0278d180 = 0;
        uRam000000000278d188 = 0;
        _DAT_0278d190 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined1 *)((longlong)this + 0x5a) = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_0278d1e0 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_0278d1a8 = FUN_010f03e0();
        _DAT_0278d1a0 = "_allowAutomaticPolyphonicDetection";
        _DAT_0278d1b0 = 0;
        _DAT_0278d1b8 = 0x6200;
        _DAT_0278d1c0 = "bool";
        _DAT_0278d1c8 = 0;
        uRam000000000278d1d0 = 0;
        _DAT_0278d1d8 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  puVar11 = this + 0xc;
  this[0xc] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f12c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTimeline",param_3,param_4,puVar11);
  }
  this[0xd] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f13b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  this[0xe] = 0;
  lVar9 = FUN_010f03e0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f14a0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescriptionRange");
  }
  return;
}




// ==================================================
// @0134fa60 (1546 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  char *pcVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *arg1;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined1 local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b0;
  char local_a8;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  ulonglong local_50;
  longlong local_48;
  char local_40 [8];
  longlong local_38;
  
  if (0 < *(int *)(*arg1 + 0xc)) {
    lVar10 = 0;
    local_50 = 0;
    local_38 = 0;
    bVar2 = false;
    lVar6 = 0;
    do {
      uVar3 = local_50;
      cVar1 = (char)local_50;
      FUN_00d23310();
      lVar9 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar9 != 0)) {
        pcVar4 = (char *)FUN_00d50b20();
      }
      if (lVar9 == lVar6) {
        if ((cVar1 == '\0') && (lVar9 != 0)) {
          local_50 = CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
          lVar9 = lVar6;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
        else if ((local_60 == '\0') || (lVar9 == 0)) {
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
        else {
          FUN_00d50b20();
          local_50 = uVar3 & 0xffffffff;
          lVar9 = lVar6;
        }
      }
      else if (local_60 == '\0') {
        if (lVar9 != 0) {
          pcVar4 = (char *)FUN_00d50b00();
        }
        local_50 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = CONCAT71((int7)((ulonglong)pcVar4 >> 8),1);
        if ((cVar1 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_00d23340();
      lVar6 = local_48;
      local_60 = local_40[0];
      pcVar8 = &local_60;
      pcVar4 = local_40;
      if (local_40[0] == '\0') {
        pcVar4 = pcVar8;
      }
      *pcVar4 = '\0';
      if ((local_40[0] != '\0') && (lVar6 != 0)) {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)pcVar8;
      if (lVar6 == local_38) {
        if ((bVar2) || (lVar6 == 0)) {
          if ((local_60 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          bVar2 = true;
          if (local_60 == '\0') {
            FUN_00d50b00();
          }
        }
      }
      else if (local_60 == '\0') {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((!bVar2) || (local_38 == 0)) goto LAB_0134fc90;
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else if ((bVar2) && (local_38 != 0)) {
        FUN_00d50b20();
        local_38 = lVar6;
        bVar2 = true;
      }
      else {
LAB_0134fc90:
        local_38 = lVar6;
        bVar2 = true;
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125e7c0();
      if (local_48 == 0) {
        bVar11 = false;
      }
      else {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (pthread_key_t)local_38;
        }
        FUN_0125e7c0();
        if (CONCAT71(uStack_5f,local_60) == 0) {
          bVar11 = false;
          lVar6 = 0;
        }
        else {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e61a0();
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          bVar11 = local_c8 == local_108;
          if ((local_100 != '\0') && (local_108 != 0)) {
            FUN_00d50b20();
          }
          if ((local_c0 != '\0') && (local_c8 != 0)) {
            FUN_00d50b20();
          }
          if ((local_a8 != '\0') && (local_b0 != 0)) {
            FUN_00d50b20();
          }
          lVar6 = CONCAT71(uStack_5f,local_60);
        }
        if ((local_58 != '\0') && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (bVar11) {
        local_e0 = 0;
        local_d8 = local_38;
        local_d0 = 0;
        local_e8 = lVar9;
        FUN_01329cf0(&local_d8,&local_e8);
        if ((local_f0 != '\0') && (local_f8 != 0)) {
          FUN_00d50b20();
        }
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_00e7bdb0();
      FUN_01287c80();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      FUN_0039e8b0();
      lVar6 = local_48;
      if (local_40[0] == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_40[0] = '\0';
      }
      FUN_012879b0();
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      lVar10 = lVar10 + 1;
      lVar6 = lVar9;
    } while (lVar10 < *(int *)(*arg1 + 0xc));
    if ((bVar2) && (local_38 != 0)) {
      FUN_00d50b20();
    }
    if (((char)local_50 != '\0') && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01353f80 (1469 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong this;
  longlong lVar10;
  undefined8 local_118;
  undefined1 local_110;
  longlong local_108;
  undefined1 local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_48;
  char local_40;
  
  if (*(char *)(this + 0x1a9) == '\0') {
    if (*(char *)(this + 0x172) == '\0') {
      puVar4 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      puVar6 = &DAT_02572358;
      *puVar4 = &DAT_02572358;
      (*DAT_02572370)();
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
          iVar1 = *(int *)(*(longlong *)(lVar8 + 0x10) + 4 + lVar9 * 8);
          lVar8 = *(longlong *)(this + 0x40);
          local_f8 = lVar9;
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          FUN_013903d0(0,0,(longlong)iVar1,0);
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
              lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar8 * 8);
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
          puVar6 = (undefined *)(longlong)(iVar7 >> 3);
        } while (lVar9 < (longlong)puVar6);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar8 = 0;
        do {
          pvVar5 = _pthread_getspecific((pthread_key_t)puVar6);
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
        } while (lVar8 < *(int *)((longlong)puVar4 + 0xc));
      }
      if (*(char *)(this + 0x1a8) != '\x01') {
        FUN_00d64850();
        *(undefined1 *)(this + 0x1a8) = 1;
        FUN_00d64910();
      }
      if ((bVar2) && (lVar10 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
    }
    else {
      FUN_00d403d0();
      local_d8 = DAT_027bf410;
      if (DAT_027bf410 != 0) {
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
      if (this != 0) {
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
      local_b8 = DAT_027e0908;
      if (DAT_027e0908 != 0) {
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
      if (this != 0) {
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




// ==================================================
// @0134b5a0 (1452 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong arg1;
  undefined8 *this;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong local_70;
  char local_68;
  longlong local_50;
  char local_48;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar5 = *(longlong *)(arg1 + 0x40);
  if (*(int *)(lVar5 + 0xc) < 1) {
    bVar1 = false;
    lVar9 = 0;
    bVar2 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar2 = false;
    lVar9 = 0;
    lVar8 = 0;
    bVar1 = false;
    do {
      pVar7 = (pthread_key_t)lVar8;
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + lVar11 * 8);
      if (lVar9 == lVar5) {
        if ((!bVar1) && (lVar9 != 0)) {
          bVar1 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar5 != 0) {
          FUN_00d50b00();
        }
        if ((bVar1) && (lVar9 != 0)) {
          FUN_00d50b20();
          bVar1 = true;
          lVar9 = lVar5;
        }
        else {
          bVar1 = true;
          lVar9 = lVar5;
        }
      }
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        if (param_3 == '\0') {
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013de560();
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
          if (cVar3 != '\0') goto LAB_0134b620;
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfdd0();
        if ((local_48 != '\0') && (local_50 != 0)) {
          FUN_00d50b20();
        }
        if (local_50 == 0) {
          if (*param_1 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
        }
        else {
          if (*param_2 != 0) {
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_68 == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_68 = '\0';
            }
            local_50 = local_70;
            local_48 = '\0';
            FUN_00d21140();
            if (local_70 != 0) {
              FUN_00d50b20();
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_013e5500();
          if (lVar10 == local_50) {
            if ((bVar2) || (lVar10 == 0)) goto joined_r0x0134ba47;
            bVar2 = true;
            if (local_48 == '\0') {
              FUN_00d50b00();
              lVar5 = lVar10;
              goto LAB_0134ba0b;
            }
          }
          else if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            lVar5 = local_50;
            if ((bVar2) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
LAB_0134ba0b:
            bVar2 = true;
            lVar10 = lVar5;
joined_r0x0134ba47:
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
          }
          else if ((bVar2) && (lVar10 != 0)) {
            FUN_00d50b20();
            bVar2 = true;
            lVar10 = local_50;
          }
          else {
            bVar2 = true;
            lVar10 = local_50;
          }
          local_48 = '\0';
          FUN_00d235a0();
          local_50 = lVar10;
        }
      }
LAB_0134b620:
      lVar11 = lVar11 + 1;
      lVar5 = *(longlong *)(arg1 + 0x40);
      lVar8 = (longlong)*(int *)(lVar5 + 0xc);
    } while (lVar11 < lVar8);
  }
  *this = puVar4;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar1) && (lVar9 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar2) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @01349bf0 (1386 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  longlong lVar5;
  pthread_key_t pVar6;
  longlong lVar7;
  longlong *plVar8;
  char unaff_SIL;
  longlong this;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  longlong *local_88;
  char local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_68;
  undefined8 local_60;
  int local_58;
  
  if (*(longlong *)(this + 0x1f8) != 0) {
    return;
  }
  if (*(longlong *)(this + 0x200) != 0) {
    return;
  }
  if (*(longlong *)(this + 0x148) == 0) {
LAB_01349fcd:
    if (*(longlong *)(this + 0x200) != 0) {
      return;
    }
    if (*(longlong *)(this + 0x148) == 0) {
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
      if (*(longlong *)(this + 0x1f8) != 0) {
        return;
      }
      goto LAB_01349fcd;
    }
  }
  plVar8 = *(longlong **)(this + 0x38);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    plVar8 = *(longlong **)(this + 0x38);
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
  }
  (**(code **)(*plVar8 + 0x370))();
  lVar4 = *(longlong *)(this + 0x40);
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
      lVar5 = (longlong)(int)local_60;
      iVar2 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar2);
      if (*(int *)(local_68 + 0xc) <= iVar2) break;
      lVar7 = *(longlong *)(local_68 + 0x10);
      local_78 = *(undefined8 *)(lVar7 + 8 + lVar5 * 8);
      cVar1 = FUN_01347c70();
      pVar6 = (pthread_key_t)lVar7;
      if (cVar1 == '\0') {
        pvVar3 = _pthread_getspecific(pVar6);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de560();
        plVar8 = local_88;
        if (local_80 == '\0') {
          if (local_88 != (longlong *)0x0) {
            FUN_00d50b00();
            if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01349e07;
          }
        }
        else if (local_88 != (longlong *)0x0) {
LAB_01349e07:
          pvVar3 = _pthread_getspecific(pVar6);
          plVar9 = plVar8;
          if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
            plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
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
            if (this != 0) {
              FUN_00d50b20();
            }
            pvVar3 = _pthread_getspecific(pVar6);
            plVar9 = plVar8;
            if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
              plVar9 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
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
              plVar8 = (longlong *)plVar8[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
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
    param_1 = (pthread_key_t)lVar5;
  }
  if (unaff_SIL == '\0') goto LAB_0134a0c6;
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (*(longlong *)(this + 0x148) != 0)) {
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
  if (*(char *)(this + 0x141) != '\x01') {
    FUN_00d64850();
    *(undefined1 *)(this + 0x141) = 1;
    FUN_00d64910();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @013549f0 (1267 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined8 *puVar6;
  pthread_key_t pVar7;
  undefined *puVar8;
  longlong this;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  
  fVar11 = *(float *)(this + 0x7c);
  if ((fVar11 != param_1) || (NAN(fVar11) || NAN(param_1))) {
    FUN_00d64850();
    *(float *)(this + 0x7c) = param_1;
    FUN_00d64910();
    puVar4 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &DAT_02572358;
    *puVar4 = &DAT_02572358;
    pcVar2 = DAT_02572370;
    (*DAT_02572370)();
    if (param_1 <= fVar11) {
      lVar10 = *(longlong *)(this + 0x100);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (pthread_key_t)puVar8;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar9 * 8);
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
          lVar10 = *(longlong *)(this + 0x100);
          puVar8 = (undefined *)(longlong)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (longlong)puVar8);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329970();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_01329030();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
      }
    }
    else {
      lVar10 = *(longlong *)(this + 0xd0);
      if (0 < *(int *)(lVar10 + 0xc)) {
        lVar9 = 0;
        do {
          pVar7 = (pthread_key_t)puVar8;
          lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + lVar9 * 8);
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
          lVar10 = *(longlong *)(this + 0xd0);
          puVar8 = (undefined *)(longlong)*(int *)(lVar10 + 0xc);
        } while (lVar9 < (longlong)puVar8);
      }
      if (0 < *(int *)((longlong)puVar4 + 0xc)) {
        lVar10 = 0;
        do {
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013291f0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
          if (lVar9 != 0) {
            FUN_00d50b00();
          }
          FUN_013297b0();
          if (lVar9 != 0) {
            FUN_00d50b20();
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
      }
    }
    if (*(longlong *)(this + 0x1b8) == 0) {
      puVar6 = (undefined8 *)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar6 = &DAT_02572358;
      (*pcVar2)();
      puVar1 = *(undefined8 **)(this + 0x1b8);
      if (puVar1 == puVar6) {
        FUN_00d50b20();
      }
      else {
        *(undefined8 **)(this + 0x1b8) = puVar6;
        if (puVar1 != (undefined8 *)0x0) {
          FUN_00d50b20();
        }
      }
    }
    if (0 < *(int *)((longlong)puVar4 + 0xc)) {
      lVar10 = 0;
      do {
        lVar9 = *(longlong *)(puVar4[2] + lVar10 * 8);
        if (lVar9 != 0) {
          FUN_00d50b00();
        }
        FUN_00d235a0();
        if (lVar9 != 0) {
          FUN_00d50b20();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)((longlong)puVar4 + 0xc));
    }
    FUN_00d50b20();
  }
  return;
}




// ==================================================
// @01346520 (952 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  char cVar1;
  uint uVar2;
  void *pvVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *this;
  longlong local_50;
  char local_48;
  
  if (*this != 0) {
    pvVar3 = _pthread_getspecific(param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dfdd0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == 0) {
      if (param_2 != '\0') {
        param_1 = 0;
        cVar1 = FUN_01366cc0(0,0,param_3,param_4,0);
        if (cVar1 == '\0') {
          return 0;
        }
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        plVar4 = (longlong *)FUN_00115860();
        (**(code **)(*plVar4 + 0x18))();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = (pthread_key_t)plVar4;
        }
        FUN_013dd650();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bc440();
        plVar4 = (longlong *)*this;
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          plVar4 = (longlong *)*this;
          lVar5 = FUN_00e8b990();
          if (lVar5 != 0) {
            plVar4 = (longlong *)plVar4[(ulonglong)(*(uint *)(lVar5 + 0x154) & 1) + 4];
          }
        }
        (**(code **)(*plVar4 + 0x3a0))();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013de650();
        pvVar3 = _pthread_getspecific(param_1);
        if ((pvVar3 != (void *)0x0) && (lVar5 = FUN_00e8b990(), lVar5 != 0)) {
          param_1 = 0;
        }
        FUN_014bcf30();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_013dfce0();
        FUN_00d50b20();
      }
      return uVar2 ^ 1;
    }
  }
  return 0;
}




// ==================================================
// @01366cc0 (848 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double local_68;
  longlong local_60;
  char local_58;
  double local_48;
  double local_40;
  
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_48 = (double)FUN_013de8d0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_40 = (double)FUN_013de9b0();
  pvVar2 = _pthread_getspecific(param_1);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  cVar1 = FUN_013dee00();
  if (cVar1 == '\0') {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar1 = FUN_013dee60();
    if (cVar1 != '\0') {
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar4 = FUN_013de790();
      if (DAT_023942d0 < (double)lVar3 / (double)lVar4) {
        return 0;
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013df480();
      pvVar2 = _pthread_getspecific(param_1);
      lVar3 = local_60;
      if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        lVar3 = *(longlong *)(local_60 + 0x20 + (ulonglong)(*(uint *)(lVar4 + 0x154) & 1) * 8);
      }
      plVar6 = *(longlong **)(lVar3 + 0x38);
      if (plVar6 == (longlong *)0x0) {
        local_68 = 0.0;
      }
      else {
        pvVar2 = _pthread_getspecific(param_1);
        if (pvVar2 != (void *)0x0) {
          plVar6 = *(longlong **)(lVar3 + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar6 = (longlong *)plVar6[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        local_68 = (double)(**(code **)(*plVar6 + 0x370))();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      pvVar2 = _pthread_getspecific(param_1);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar3 = FUN_013ded30();
      dVar7 = (double)lVar3 / local_68 + DAT_0240d3e0;
      dVar8 = 0.0;
      if (0.0 <= dVar7) {
        dVar8 = dVar7;
      }
      local_48 = local_48 + dVar8;
      local_40 = local_40 - dVar8;
    }
  }
  uVar5 = FUN_013676b0(local_48,local_40);
  return uVar5;
}




// ==================================================
// @0134bda0 (830 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong lVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  bool bVar9;
  longlong arg1;
  undefined8 *this;
  longlong lVar10;
  longlong lVar11;
  longlong local_50;
  char local_48;
  longlong local_38;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar6 = *(longlong *)(arg1 + 0x40);
  if (*(int *)(lVar6 + 0xc) < 1) {
    bVar2 = false;
    local_38 = 0;
    bVar9 = false;
    lVar10 = 0;
  }
  else {
    lVar11 = 0;
    lVar10 = 0;
    bVar9 = false;
    local_38 = 0;
    lVar8 = 0;
    bVar2 = false;
    do {
      pVar7 = (pthread_key_t)lVar8;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + lVar11 * 8);
      if (local_38 == lVar6) {
        if ((!bVar2) && (local_38 != 0)) {
          bVar2 = true;
          FUN_00d50b00();
        }
      }
      else {
        if (lVar6 != 0) {
          FUN_00d50b00();
        }
        if ((bVar2) && (local_38 != 0)) {
          FUN_00d50b20();
          bVar2 = true;
          local_38 = lVar6;
        }
        else {
          bVar2 = true;
          local_38 = lVar6;
        }
      }
      pvVar5 = _pthread_getspecific(pVar7);
      if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
        pVar7 = (pthread_key_t)local_38;
      }
      FUN_013dfcb0();
      if ((local_48 != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != 0) {
        pvVar5 = _pthread_getspecific(pVar7);
        if ((pvVar5 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
          pVar7 = (pthread_key_t)local_38;
        }
        FUN_013de560();
        if (local_50 == lVar10) {
          lVar6 = lVar10;
          bVar1 = bVar9;
          if ((!bVar9) && (local_50 != 0)) {
            bVar1 = true;
            if (local_48 != '\0') goto LAB_0134c000;
            FUN_00d50b00();
            bVar1 = true;
          }
LAB_0134bfec:
          if ((local_48 != '\0') && (local_50 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          lVar6 = local_50;
          if (local_48 == '\0') {
            if (local_50 != 0) {
              FUN_00d50b00();
            }
            bVar1 = true;
            if ((bVar9) && (lVar10 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0134bfec;
          }
          bVar1 = true;
          if ((bVar9) && (lVar10 != 0)) {
            FUN_00d50b20();
          }
        }
LAB_0134c000:
        lVar10 = lVar6;
        bVar9 = bVar1;
        if (param_2 == '\0') {
          pvVar5 = _pthread_getspecific(pVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_014bc070();
          if (cVar3 == '\0') {
            local_48 = '\0';
            FUN_00d21140();
            local_50 = lVar6;
          }
        }
        else {
          local_48 = '\0';
          FUN_00d21140();
          local_50 = lVar6;
        }
      }
      lVar11 = lVar11 + 1;
      lVar6 = *(longlong *)(arg1 + 0x40);
      lVar8 = (longlong)*(int *)(lVar6 + 0xc);
    } while (lVar11 < lVar8);
  }
  *this = puVar4;
  *(undefined1 *)(this + 1) = 1;
  if ((bVar2) && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((bVar9) && (lVar10 != 0)) {
    FUN_00d50b20();
  }
  return this;
}




// ==================================================
// @0133aef0 (754 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  void *pvVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *this;
  longlong local_40;
  char local_38;
  
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013dfdd0();
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      goto LAB_0133af7f;
    }
  }
  else if (local_40 != 0) {
LAB_0133af7f:
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd6a0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013de560();
    if ((local_38 == '\0') && (local_40 != 0)) {
      FUN_00d50b00();
    }
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013dd650();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bc570();
    lVar3 = *this;
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      lVar3 = *this;
      lVar2 = FUN_00e8b990();
      if (lVar2 != 0) {
        lVar3 = *(longlong *)(lVar3 + 0x20 + (ulonglong)(*(uint *)(lVar2 + 0x154) & 1) * 8);
      }
    }
    FUN_013dfce0();
    pvVar1 = _pthread_getspecific(param_1);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_014bcf30();
    if (local_40 != 0) {
      FUN_00d50b20();
      FUN_00d50b20();
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
    FUN_00d50b20();
    goto LAB_0133b1d1;
  }
  uVar4 = 0;
LAB_0133b1d1:
  return uVar4 & 0xffffffff;
}




// ==================================================
// @01349890 (725 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  char cVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong this;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  longlong *local_48;
  char local_40;
  
  plVar5 = *(longlong **)(this + 0x38);
  if (plVar5 != (longlong *)0x0) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      plVar5 = *(longlong **)(this + 0x38);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
    }
    uVar9 = (**(code **)(*plVar5 + 0x370))();
    lVar3 = *(longlong *)(this + 0x40);
    if (lVar3 != 0) {
      FUN_00d50b00();
      if (0 < *(int *)(lVar3 + 0xc)) {
        iVar6 = 0;
        do {
          cVar1 = FUN_01347c70();
          if (cVar1 == '\0') {
            pvVar2 = _pthread_getspecific(param_1);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_013de560();
            if (local_40 == '\0') {
              if (local_48 != (longlong *)0x0) {
                FUN_00d50b00();
                goto LAB_01349a00;
              }
            }
            else if (local_48 != (longlong *)0x0) {
LAB_01349a00:
              pvVar2 = _pthread_getspecific(param_1);
              plVar5 = local_48;
              if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
              }
              fVar7 = (float)(**(code **)(*plVar5 + 0x3e0))();
              if (!NAN(fVar7)) {
                pvVar2 = _pthread_getspecific(param_1);
                if (pvVar2 != (void *)0x0) {
                  FUN_00e8b990();
                }
                FUN_014bd640(uVar9);
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                if (NAN(fVar8)) {
                  pvVar2 = _pthread_getspecific(param_1);
                  if (pvVar2 != (void *)0x0) {
                    FUN_00e8b990();
                  }
                  FUN_014bd3c0(fVar7);
                }
                pvVar2 = _pthread_getspecific(param_1);
                plVar5 = local_48;
                if ((pvVar2 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
                  plVar5 = (longlong *)local_48[(ulonglong)(*(uint *)(lVar4 + 0x154) & 1) + 4];
                }
                fVar8 = (float)(**(code **)(*plVar5 + 0x3e0))();
                FUN_01348960(fVar8 - fVar7);
              }
              FUN_00d50b20();
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(int *)(lVar3 + 0xc));
      }
      FUN_001150f0();
      FUN_00d50b20();
    }
  }
  return;
}




// ==================================================
// @01353c30 (697 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  pthread_key_t pVar4;
  pthread_key_t pVar5;
  longlong this;
  longlong local_58;
  char local_50;
  
  if (((*(longlong *)(this + 0x1f8) == 0) && (*(longlong *)(this + 0x200) == 0)) &&
     (*(longlong *)(this + 0x148) != 0)) {
    pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    iVar1 = FUN_0141bab0();
    if (iVar1 == 3) {
      pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013de560();
      if (local_58 == 0) {
        pVar4 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        local_58 = 0;
      }
      else if (local_50 == '\0') {
        FUN_00d50b00();
        pVar4 = 0;
      }
      else {
        pVar4 = 0;
      }
      pVar5 = pVar4;
      pvVar3 = _pthread_getspecific(pVar4);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar2 = FUN_014bc070();
      if ((char)uVar2 == '\0') {
        FUN_0134c610();
        FUN_01327e70();
        FUN_01327a80();
        FUN_01328e30();
        if (param_2 != '\0') {
          FUN_013293f0();
        }
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d20e0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014d23d0();
        pvVar3 = _pthread_getspecific(pVar5);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014bbe30();
      }
      if ((char)pVar4 != '\0' || local_58 == 0) {
        return uVar2 ^ 1;
      }
      FUN_00d50b20();
      return uVar2 ^ 1;
    }
  }
  return 0;
}




// ==================================================
// @014c36d0 (685 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  char *pcVar4;
  longlong *arg1;
  longlong *this;
  longlong lVar5;
  int iVar6;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38 [8];
  
  FUN_014c34a0();
  lVar5 = local_40;
  if (local_38[0] == '\0') {
    if (local_40 == 0) goto LAB_014c371a;
  }
  else {
    if (local_40 != 0) goto LAB_014c3963;
LAB_014c371a:
    cVar2 = (**(code **)(*arg1 + 1000))();
    iVar6 = -1;
    if ((cVar2 != '\0') && (lVar1 = **(longlong **)(arg1[0x21] + 0x10), lVar1 != 0)) {
      FUN_00d50b00();
      iVar6 = *(int *)(lVar1 + 0xc);
      FUN_00d50b20();
    }
    if (param_2 < iVar6) {
      FUN_014bc340();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc340();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*arg1 + 1000))();
      if ((cVar2 == '\0') ||
         (lVar5 = **(longlong **)(arg1[0x21] + 0x10),
         **(longlong **)(arg1[0x21] + 0x10) == 0)) {
LAB_014c3960:
        lVar5 = 0;
        goto LAB_014c3963;
      }
    }
    else {
      FUN_014bc420();
      lVar1 = local_40;
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_014bc420();
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_014c34a0();
        if ((local_40 != 0) && (lVar5 = local_40, local_38[0] == '\0')) {
          FUN_00d50b00();
        }
        if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
          FUN_00d50b20();
        }
      }
      if (lVar5 != 0) goto LAB_014c3963;
      cVar2 = (**(code **)(*arg1 + 1000))();
      if (cVar2 == '\0') goto LAB_014c3960;
      FUN_00d23340();
      pcVar4 = &local_50;
      if (local_38[0] != '\0') {
        pcVar4 = local_38;
      }
      local_50 = local_38[0];
      *pcVar4 = '\0';
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      lVar5 = local_40;
      if ((local_50 != '\0') || (local_40 == 0)) goto LAB_014c3963;
    }
  }
  FUN_00d50b00();
LAB_014c3963:
  *this = lVar5;
  *(undefined1 *)(this + 1) = 1;
  return this;
}




// ==================================================
// @01109be0 (648 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  undefined8 *this;
  
  *this = &DAT_025d8f90;
  if (this[0x40] != 0) {
    FUN_00d50b20();
  }
  if (this[0x3f] != 0) {
    FUN_00d50b20();
  }
  if (this[0x3e] != 0) {
    FUN_00d50b20();
  }
  if (this[0x3d] != 0) {
    FUN_00d50b20();
  }
  if (this[0x3b] != 0) {
    FUN_00d50b20();
  }
  if (this[0x39] != 0) {
    FUN_00d50b20();
  }
  if (this[0x38] != 0) {
    FUN_00d50b20();
  }
  if (this[0x37] != 0) {
    FUN_00d50b20();
  }
  if (this[0x36] != 0) {
    FUN_00d50b20();
  }
  if (this[0x34] != 0) {
    FUN_00d50b20();
  }
  if (this[0x33] != 0) {
    FUN_00d50b20();
  }
  if (this[0x2f] != 0) {
    FUN_00d50b20();
  }
  if (this[0x2d] != 0) {
    FUN_00d50b20();
  }
  if (this[0x2b] != 0) {
    FUN_00d50b20();
  }
  if (this[0x2a] != 0) {
    FUN_00d50b20();
  }
  if (this[0x29] != 0) {
    FUN_00d50b20();
  }
  if (this[0x27] != 0) {
    FUN_00d50b20();
  }
  if (this[0x25] != 0) {
    FUN_00d50b20();
  }
  if (this[0x24] != 0) {
    FUN_00d50b20();
  }
  if (this[0x23] != 0) {
    FUN_00d50b20();
  }
  if (this[0x22] != 0) {
    FUN_00d50b20();
  }
  if (this[0x21] != 0) {
    FUN_00d50b20();
  }
  if (this[0x20] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1f] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1e] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1d] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1c] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1b] != 0) {
    FUN_00d50b20();
  }
  if (this[0x1a] != 0) {
    FUN_00d50b20();
  }
  if (this[0x19] != 0) {
    FUN_00d50b20();
  }
  if (this[0x16] != 0) {
    FUN_00d50b20();
  }
  if (this[0xd] != 0) {
    FUN_00d50b20();
  }
  if (this[0xc] != 0) {
    FUN_00d50b20();
  }
  if (this[0xb] != 0) {
    FUN_00d50b20();
  }
  if (this[10] != 0) {
    FUN_00d50b20();
  }
  if (this[9] != 0) {
    FUN_00d50b20();
  }
  if (this[8] != 0) {
    FUN_00d50b20();
  }
  FUN_00d4ffa0();
  return;
}




// ==================================================
// @010f5320 (610 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025d0298;
  this[7] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5670();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  this[8] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5760();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  this[9] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5850();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAnalyzer");
  }
  FUN_010f5940();
  this[0xb] = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_010f5a20();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackAudioRecorder");
  }
  *(undefined1 *)(this + 0xc) = 0;
  lVar9 = FUN_00115af0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027bf760 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027bf728 = FUN_00115af0();
        _DAT_027bf720 = "_isAudioAccessible";
        _DAT_027bf730 = 0;
        _DAT_027bf738 = 0x6211;
        _DAT_027bf740 = "bool";
        _DAT_027bf748 = 0;
        uRam00000000027bf750 = 0;
        _DAT_027bf758 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  return;
}




// ==================================================
// @0110ae80 (610 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  longlong arg1;
  undefined8 *this;
  undefined8 *puVar11;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025d9690;
  this[7] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b200();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceElement");
  }
  this[8] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b2f0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceElement";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  this[9] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b3e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  puVar11 = this + 10;
  this[10] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b4d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent",param_3,param_4,puVar11);
  }
  this[0xb] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b5c0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceComponent");
  }
  this[0xc] = 0;
  lVar9 = FUN_007eece0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110b6b0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceElements";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  return;
}




// ==================================================
// @0110c460 (599 bytes) — calculation
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong arg1;
  undefined8 *this;
  char *pcVar10;
  
  FUN_00d4ff80();
  *this = &DAT_02590538;
  uVar1 = *(undefined4 *)(arg1 + 0x14);
  uVar2 = *(undefined4 *)(arg1 + 0x18);
  uVar3 = *(undefined4 *)(arg1 + 0x1c);
  uVar4 = *(undefined4 *)(arg1 + 0x20);
  uVar5 = *(undefined4 *)(arg1 + 0x24);
  uVar6 = *(undefined4 *)(arg1 + 0x28);
  uVar7 = *(undefined4 *)(arg1 + 0x2c);
  *(undefined4 *)(this + 2) = *(undefined4 *)(arg1 + 0x10);
  *(undefined4 *)((longlong)this + 0x14) = uVar1;
  *(undefined4 *)(this + 3) = uVar2;
  *(undefined4 *)((longlong)this + 0x1c) = uVar3;
  *(undefined4 *)(this + 4) = uVar4;
  *(undefined4 *)((longlong)this + 0x24) = uVar5;
  *(undefined4 *)(this + 5) = uVar6;
  *(undefined4 *)((longlong)this + 0x2c) = uVar7;
  this[6] = *(undefined8 *)(arg1 + 0x30);
  *this = &DAT_025bc438;
  *(undefined4 *)(this + 7) = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_02793290 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_02793258 = FUN_0110c220();
        _DAT_02793250 = "_amount";
        _DAT_02793260 = 0;
        _DAT_02793268 = 0x6600;
        _DAT_02793270 = "float";
        _DAT_02793278 = 0;
        uRam0000000002793280 = 0;
        _DAT_02793288 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  *(undefined4 *)((longlong)this + 0x3c) = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    if (DAT_027932d8 == '\0') {
      iVar8 = ___cxa_guard_acquire();
      if (iVar8 != 0) {
        _DAT_027932a0 = FUN_0110c220();
        _DAT_02793298 = "_sampleOffset";
        _DAT_027932a8 = 0;
        _DAT_027932b0 = 0x6900;
        _DAT_027932b8 = "GNInt";
        _DAT_027932c0 = 0;
        uRam00000000027932c8 = 0;
        _DAT_027932d0 = 0;
        ___cxa_guard_release();
      }
    }
    FUN_00e87980();
  }
  this[8] = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110c710();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceInstrumentPortions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceDescription");
  }
  this[9] = 0;
  lVar9 = FUN_0110c220();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_0110c800();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_audioSourceInstrumentPortions";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioSourceInstrument");
  }
  return;
}




// ==================================================
// @00839f30 (581 bytes) — logic_branch
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  int iVar1;
  
  if (DAT_027153a0 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_02715380 = _DAT_0238fcc0;
      uRam0000000002715384 = _UNK_0238fcc4;
      uRam0000000002715388 = _UNK_0238fcc8;
      uRam000000000271538c = _UNK_0238fccc;
      _DAT_02715390 = 0x500000004;
      _DAT_02715398 = 6;
      DAT_0271539c = 1;
      ___cxa_guard_release();
    }
  }
  if (DAT_027153d8 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      _DAT_027153a8 = "MUAudioSourceDescriptionType";
      _DAT_027153b0 = 7;
      DAT_027153b4 = DAT_0271539c;
      _DAT_027153b8 = &DAT_02715380;
      _DAT_027153c0 = &DAT_02715340;
      _DAT_027153c8 = 0;
      uRam00000000027153d0 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e876a0();
  if (DAT_02736730 == '\0') {
    iVar1 = ___cxa_guard_acquire();
    if (iVar1 != 0) {
      if (DAT_027366a0 == '\0') {
        iVar1 = ___cxa_guard_acquire();
        if (iVar1 != 0) {
          _DAT_026f9768 = FUN_0006d940();
          _DAT_026f9750 = "MUPitchSystemRulerView";
          _DAT_026f9758 = 0x168;
          _DAT_026f9760 = FUN_002757e0;
          _DAT_026f9770 = 0;
          uRam00000000026f9778 = 0;
          _DAT_026f9780 = 0;
          _DAT_026f97f8 = 0;
          uRam00000000026f9800 = 0;
          _DAT_026f9808 = 0;
          DAT_026f980a = 1;
          _DAT_026f9788 = 0;
          uRam00000000026f9790 = 0;
          _DAT_026f9798 = 0;
          uRam00000000026f97a0 = 0;
          _DAT_026f97a8 = 0;
          uRam00000000026f97b0 = 0;
          _DAT_026f97b8 = 0;
          uRam00000000026f97c0 = 0;
          _DAT_026f97c8 = 0;
          uRam00000000026f97d0 = 0;
          _DAT_026f97d8 = 0;
          uRam00000000026f97e0 = 0;
          _DAT_026f97e8 = 0;
          uRam00000000026f97f0 = 0;
          DAT_026f9813 = 0;
          _DAT_026f980b = 0;
          ___cxa_guard_release();
        }
      }
      _DAT_027366f0 = "_currentDescriptionType";
      _DAT_027366f8 = &DAT_026f9750;
      _DAT_02736700 = 0;
      _DAT_02736708 = 0x6500;
      _DAT_02736710 = "MUAudioSourceDescriptionType";
      _DAT_02736718 = &DAT_027153a8;
      _DAT_02736720 = 0;
      uRam0000000002736728 = 0;
      ___cxa_guard_release();
    }
  }
  return &DAT_027366f0;
}




// ==================================================
// @0135d660 (556 bytes) — math_loop
// Known properties of MUAudioSourceDescription:
// _currentDescriptionType, _isNewDocument, _isDetectionInProgress, _insertGroupDefinesPerformanceTempo, _stretchInsertGroup, _stretchInsertStartTime, _createdFromSoundfile, _timelineWasModified, _recordingsInProgress, _isComparing, _followsHostRegionSelection, _zoomsToHostRegionSelection, _shouldDisplayStructureProblemDialog, _shouldDisplayUnknownArchiveDialog, _shouldDisplayImportedArchiveDialog, _useAutomaticDetection, _percussiveSeparation, _hasDistinctAttacks, _findSibilantPointsAutomatically, _isPreliminary
// ... and more

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  pthread_key_t pVar4;
  longlong *arg1;
  longlong this;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  FUN_0138f140();
  lVar1 = *arg1;
  if (0 < *(int *)(lVar1 + 0xc)) {
    lVar6 = 0;
    do {
      pVar4 = (pthread_key_t)param_1;
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + lVar6 * 8);
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ce440();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014ceed0();
      pvVar2 = _pthread_getspecific(pVar4);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_014cfcc0();
      pvVar2 = _pthread_getspecific(pVar4);
      if ((pvVar2 == (void *)0x0) || (lVar3 = FUN_00e8b990(), lVar3 == 0)) {
        plVar5 = *(longlong **)(this + 0x38);
        if (plVar5 != (longlong *)0x0) goto LAB_0135d850;
LAB_0135d831:
        uVar7 = 0;
      }
      else {
        plVar5 = *(longlong **)(this + 0x38);
        if (plVar5 == (longlong *)0x0) goto LAB_0135d831;
LAB_0135d850:
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          plVar5 = *(longlong **)(this + 0x38);
          lVar3 = FUN_00e8b990();
          if (lVar3 != 0) {
            plVar5 = (longlong *)plVar5[(ulonglong)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
        }
        uVar7 = (**(code **)(*plVar5 + 0x370))();
      }
      FUN_014bd640(uVar7);
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      lVar6 = lVar6 + 1;
      lVar1 = *arg1;
      param_1 = (longlong)*(int *)(lVar1 + 0xc);
    } while (lVar6 < param_1);
  }
  return;
}



