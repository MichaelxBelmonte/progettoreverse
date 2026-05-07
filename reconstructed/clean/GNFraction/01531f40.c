// Function: FUN_01531f40
// Address: 01531f40
// Size: 2516 bytes
// Class: GNFraction
// === GNFraction properties ===
//   GNFraction      _linesPerSecond
//   double          _secondsPerGrid
//   double          _offset
//   GNFraction      _startQuarter
//   double          _quarterDeviation
//   bool            _isAccent
//   GNFraction      _subdivison
//   double          _timeAnchor
//   GNInt           _pulseSegmentSize
//   GNInt           _timeSegmentSize
//   bool            _isDefaultDivisionTriplets
//   GNFraction      _defaultPulseMultiple
//   double          _defaultSubPulseDuration
//   GNInt           _beatsPerBar
//   GNFraction      _pulseAnchor
//   GNFraction      _pulsesPerQuarter
//   GNFraction      _beatsPerQuarter
//   GNFraction      _quarterAtPulseAnchor
//   GNInt           _beatAtPulseAnchor
//   GNInt           _barAtPulseAnchor
//   bool            _isRecording
//   float           _clickLevel
//   bool            _isClicking
//   bool            _isMutingAllTracks
//   bool            _isIgnoringSourceTimeForElementTimeFunction
//   double          _releaseDuration
//   double          _preplayDuration
//   GNFraction      _clickResolution
//   float           _clickFrequency
//   GNFraction      _duration
//   ... +8 more


void FUN_01531f40(uint param_1)

{
  int64_t lVar1;
  void* pVar2;
  void *pvVar3;
  int64_t lVar4;
  char *pcVar5;
  uint64_t uVar6;
  char *pcVar7;
  void* pVar8;
  void*puVar9;
  int64_t *arg1;
  int64_t this_ptr;
  double dVar10;
  double dVar11;
  uint64_t local_90;
  double local_88;
  double local_80;
  uint32_t local_68;
  int iStack_64;
  char local_60;
  double local_58;
  char local_50 [16];
  void* local_40;
  uint32_t uStack_3c;
  char local_38 [8];
  
  lVar1 = *arg1;
  lVar4 = *(int64_t *)(this_ptr + 0x10);
  if (lVar4 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x10) = lVar1;
    if (lVar4 != 0) {
      FUN_00d50b20();
    }
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012caf10();
  pVar8 = local_40;
  lVar1 = CONCAT44(uStack_3c,local_40);
  if ((((local_38[0] == '\0') && (lVar1 != 0)) && (FUN_00d50b00(), local_38[0] != '\0')) &&
     (CONCAT44(uStack_3c,local_40) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_58 = (double)FUN_012ebfe0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_88 = (double)FUN_016c9870();
  if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb110();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_012ebd30();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar11 = (double)FUN_016c9950();
  if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pVar2 = local_40;
  if (local_58 <= local_88) {
    local_88 = local_58;
  }
  if (dVar11 <= dVar10) {
    dVar11 = dVar10;
  }
  local_80 = dVar11;
  if (local_38[0] == '\0') {
    if (CONCAT44(uStack_3c,local_40) == 0) goto LAB_01532808;
    FUN_00d50b00();
    if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  else if (CONCAT44(uStack_3c,local_40) == 0) goto LAB_01532808;
  pvVar3 = _pthread_getspecific(param_1);
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
    param_1 = pVar2;
  }
  FUN_015058d0();
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01510280();
  local_58 = (double)CONCAT44(uStack_3c,local_40);
  if (local_38[0] == '\0') {
    if (((local_58 != 0.0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (CONCAT44(uStack_3c,local_40) != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_60 != '\0') && (CONCAT44(iStack_64,local_68) != 0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(param_1);
  dVar10 = local_58;
  if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), dVar10 = local_58, lVar4 != 0)) {
    dVar10 = *(double *)((int64_t)local_58 + 0x20 + (uint64_t)(*(uint *)(lVar4 + 0x154) & 1) * 8);
  }
  FUN_00d23310();
  pcVar5 = local_38;
  local_68 = CONCAT31(local_68._1_3_,local_38[0]);
  pcVar7 = pcVar5;
  if (local_38[0] == '\0') {
    pcVar7 = (char *)&local_68;
  }
  lVar4 = CONCAT44(uStack_3c,local_40);
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  param_1 = (uint)pcVar5;
  if (lVar4 == 0) {
    param_1 = *(int *)(*(int64_t *)((int64_t)dVar10 + 0x48) + 0x18) + 7;
    if (param_1 < 0xf) goto LAB_01532353;
    local_90 = **(uint64_t **)(*(int64_t *)((int64_t)dVar10 + 0x48) + 0x10);
  }
  else {
LAB_01532353:
    local_90 = FUN_00e7bdb0();
    if (((char)local_68 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  FUN_00d23340();
  local_68 = CONCAT31(local_68._1_3_,local_38[0]);
  pcVar5 = local_38;
  if (local_38[0] == '\0') {
    pcVar5 = (char *)&local_68;
  }
  lVar4 = CONCAT44(uStack_3c,local_40);
  *pcVar5 = '\0';
  if ((local_38[0] != '\0') && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  if (lVar4 == 0) {
    param_1 = *(uint *)(*(int64_t *)((int64_t)dVar10 + 0x48) + 0x18);
    if (param_1 + 7 < 0xf) goto LAB_01532405;
    uVar6 = *(uint64_t *)
             ((int64_t)(int)param_1 + -8 +
             *(int64_t *)(*(int64_t *)((int64_t)dVar10 + 0x48) + 0x10));
  }
  else {
LAB_01532405:
    uVar6 = FUN_00e7bdb0();
    if (((char)local_68 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*(int *)(*(int64_t *)((int64_t)dVar10 + 0x48) + 0x18) + 7U < 0xf) {
    FUN_00d23310();
    lVar4 = CONCAT44(uStack_3c,local_40);
    pcVar5 = local_38;
    pcVar7 = (char *)&local_68;
    if (local_38[0] != '\0') {
      pcVar7 = pcVar5;
    }
    local_68 = CONCAT31(local_68._1_3_,local_38[0]);
    *pcVar7 = '\0';
    if ((local_38[0] != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    param_1 = (uint)pcVar5;
    if (((char)local_68 != '\0') && (lVar4 != 0)) {
      FUN_00d50b20();
    }
    if (lVar4 != 0) goto LAB_01532493;
  }
  else {
LAB_01532493:
    if (local_90 >> 0x20 == 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01252670(0,0,&local_68,0);
      local_50[0] = local_38[0];
      pcVar5 = local_38;
      pcVar7 = local_50;
      if (local_38[0] != '\0') {
        pcVar7 = pcVar5;
      }
      lVar4 = CONCAT44(uStack_3c,local_40);
      *pcVar7 = '\0';
      if ((local_38[0] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      param_1 = (uint)pcVar5;
      if ((local_50[0] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      dVar10 = local_88;
      if (iStack_64 != 0) {
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        param_1 = 0;
        FUN_016ca840(0,CONCAT44(iStack_64,local_68),0,0);
        FUN_0123fff0();
        FUN_00e7b970();
        if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
          FUN_00d50b20();
        }
        pvVar3 = _pthread_getspecific(param_1);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_016c98e0();
        goto LAB_0153264b;
      }
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
        param_1 = pVar8;
      }
      dVar10 = (double)FUN_016c98e0();
LAB_0153264b:
      if (local_88 <= dVar10) {
        dVar10 = local_88;
      }
    }
    local_88 = dVar10;
    if (uVar6 >> 0x20 == 0) {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012527b0(&local_68,0,0,0);
      pcVar5 = local_50 + 8;
      pcVar7 = local_38;
      if (local_38[0] == '\0') {
        pcVar7 = pcVar5;
      }
      lVar4 = CONCAT44(uStack_3c,local_40);
      local_50[8] = local_38[0];
      *pcVar7 = '\0';
      if ((local_38[0] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      param_1 = (uint)pcVar5;
      if ((local_50[8] != '\0') && (lVar4 != 0)) {
        FUN_00d50b20();
      }
      if (iStack_64 == 0) goto LAB_015327f1;
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      param_1 = 0;
      FUN_016ca840(0,CONCAT44(iStack_64,local_68),0,0);
      FUN_0123fff0();
      FUN_00e7b820();
      if ((local_38[0] != '\0') && (CONCAT44(uStack_3c,local_40) != 0)) {
        FUN_00d50b20();
      }
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = (double)FUN_016c98e0();
    }
    else {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_80 = (double)FUN_016c98e0();
    }
    if (local_80 <= dVar11) {
      local_80 = dVar11;
    }
  }
LAB_015327f1:
  if (local_58 != 0.0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
LAB_01532808:
  local_40 = 0xffffffff;
  local_68 = 0xffffffff;
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  pVar8 = (void*)&local_68;
  FUN_016c45d0(local_88,&local_40);
  pvVar3 = _pthread_getspecific(pVar8);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  puVar9 = &local_68;
  FUN_016c4630(puVar9,1);
  pvVar3 = _pthread_getspecific((void*)puVar9);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  dVar10 = (double)FUN_016c46a0(&local_68,&local_40);
  *(double *)(this_ptr + 0x18) = dVar10;
  *(double *)(this_ptr + 0x20) = local_80 - dVar10;
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  return;
}

