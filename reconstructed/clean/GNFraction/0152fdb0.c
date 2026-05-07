// Function: FUN_0152fdb0
// Address: 0152fdb0
// Size: 1499 bytes
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


void FUN_0152fdb0(void* param_1)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  char *pcVar4;
  int64_t lVar5;
  int64_t lVar6;
  void* pVar7;
  char *pcVar8;
  int64_t this_ptr;
  float fVar9;
  int64_t local_58;
  char local_50 [8];
  float local_48;
  float local_44;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x60) == 0) {
    return;
  }
  if (*(int64_t *)(this_ptr + 0x68) == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01274b60();
  local_40[0] = local_50[0];
  pcVar4 = local_40;
  if (local_50[0] != '\0') {
    pcVar4 = local_50;
  }
  *pcVar4 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 == 0) {
    return;
  }
  pvVar3 = _pthread_getspecific(param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_0125e930();
  pcVar4 = local_38;
  pcVar8 = local_50;
  if (local_50[0] == '\0') {
    pcVar8 = pcVar4;
  }
  local_38[0] = local_50[0];
  *pcVar8 = '\0';
  if ((local_50[0] != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  pVar7 = (void*)pcVar4;
  if (local_58 == 0) goto LAB_0153036e;
  pvVar3 = _pthread_getspecific(pVar7);
  if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
    lVar5 = *(int64_t *)(local_58 + 0x68);
  }
  else {
    lVar5 = *(int64_t *)
             (*(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x68)
    ;
  }
  if (lVar5 != 0) {
    FUN_00d50b00();
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      pVar7 = (void*)lVar5;
    }
    local_44 = (float)FUN_01507f00();
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_58 != 0) {
      pvVar3 = _pthread_getspecific(pVar7);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar1 = FUN_0129a470();
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (cVar1 != '\0') {
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_48 = (float)FUN_0125a2c0();
        pvVar3 = _pthread_getspecific(pVar7);
        if (pvVar3 != (void *)0x0) {
          FUN_00e8b990();
        }
        fVar9 = (float)FUN_0125a2c0();
        if ((local_48 != fVar9) || (NAN(local_48) || NAN(fVar9))) {
          pvVar3 = _pthread_getspecific(pVar7);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_48 = (float)FUN_0125a2c0();
          pvVar3 = _pthread_getspecific(pVar7);
          if (pvVar3 != (void *)0x0) {
            FUN_00e8b990();
          }
          fVar9 = (float)FUN_0125a2c0();
          iVar2 = FUN_00e7d780((local_48 - fVar9) / g_023908e0);
          local_44 = (float)((int)local_44 + iVar2);
        }
      }
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01508220();
    pvVar3 = _pthread_getspecific(pVar7);
    lVar5 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar5 = *(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
    fVar9 = *(float *)(lVar5 + 0x48);
    if ((*(float *)(this_ptr + 0x48) != fVar9) || (NAN(*(float *)(this_ptr + 0x48)) || NAN(fVar9))
       ) {
      local_44 = fVar9;
      FUN_00d64850();
      *(float *)(this_ptr + 0x48) = local_44;
      FUN_00d64910();
    }
    pvVar3 = _pthread_getspecific(pVar7);
    lVar5 = local_58;
    if ((pvVar3 != (void *)0x0) && (lVar6 = FUN_00e8b990(), lVar6 != 0)) {
      lVar5 = *(int64_t *)(local_58 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
    }
    fVar9 = *(float *)(lVar5 + 0x4c);
    if ((*(float *)(this_ptr + 0x4c) != fVar9) || (NAN(*(float *)(this_ptr + 0x4c)) || NAN(fVar9))
       ) {
      local_44 = fVar9;
      FUN_00d64850();
      *(float *)(this_ptr + 0x4c) = local_44;
      FUN_00d64910();
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      iVar2 = *(int *)(local_58 + 0x5c);
      if (*(int *)(this_ptr + 0x5c) != iVar2) goto LAB_01530271;
    }
    else {
      iVar2 = *(int *)(*(int64_t *)
                        (local_58 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x5c);
      if (*(int *)(this_ptr + 0x5c) != iVar2) {
LAB_01530271:
        FUN_00d64850();
        *(int *)(this_ptr + 0x5c) = iVar2;
        FUN_00d64910();
      }
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      cVar1 = *(char *)(local_58 + 0x50);
      if (*(char *)(this_ptr + 0x50) != cVar1) goto LAB_015302d5;
    }
    else {
      cVar1 = *(char *)(*(int64_t *)
                         (local_58 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x50);
      if (*(char *)(this_ptr + 0x50) != cVar1) {
LAB_015302d5:
        FUN_00d64850();
        *(char *)(this_ptr + 0x50) = cVar1;
        FUN_00d64910();
      }
    }
    pvVar3 = _pthread_getspecific(pVar7);
    if ((pvVar3 == (void *)0x0) || (lVar5 = FUN_00e8b990(), lVar5 == 0)) {
      cVar1 = *(char *)(local_58 + 0x58);
      if (*(char *)(this_ptr + 0x58) != cVar1) goto LAB_01530339;
    }
    else {
      cVar1 = *(char *)(*(int64_t *)
                         (local_58 + 0x20 + (uint64_t)(*(uint *)(lVar5 + 0x154) & 1) * 8) + 0x58);
      if (*(char *)(this_ptr + 0x58) != cVar1) {
LAB_01530339:
        FUN_00d64850();
        *(char *)(this_ptr + 0x58) = cVar1;
        FUN_00d64910();
      }
    }
    FUN_00d50b20();
  }
  if (local_38[0] != '\0') {
    FUN_00d50b20();
  }
LAB_0153036e:
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return;
}

