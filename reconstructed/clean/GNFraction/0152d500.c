// Function: FUN_0152d500
// Address: 0152d500
// Size: 981 bytes
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


float FUN_0152d500(void* param_1)

{
  void *pvVar1;
  int64_t lVar2;
  void* pVar3;
  int64_t this_ptr;
  int64_t *plVar4;
  int64_t *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int64_t *local_48;
  char local_40;
  float local_34;
  
  if (*(int64_t *)(this_ptr + 0x68) == 0) {
    return 0.0;
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_48 == (int64_t *)0x0) {
    plVar5 = (int64_t *)0x0;
  }
  else {
    plVar5 = local_48;
    if (local_40 != '\0') goto LAB_0152d5a9;
    FUN_00d50b00();
  }
  if ((local_40 != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar5 == (int64_t *)0x0) {
    return 0.0;
  }
LAB_0152d5a9:
  pvVar1 = _pthread_getspecific(param_1);
  plVar4 = plVar5;
  if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
    plVar4 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
  }
  pvVar1 = _pthread_getspecific(param_1);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507f00();
  lVar2 = *plVar4;
  fVar6 = (float)(**(code **)(lVar2 + 0x3a0))();
  pVar3 = (void*)lVar2;
  pvVar1 = _pthread_getspecific(pVar3);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  fVar7 = (float)FUN_0125a2c0();
  if (fVar7 <= fVar6) {
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar7 = (float)FUN_0125a2c0();
    local_34 = 0.0;
    if (fVar7 < fVar6) {
      pvVar1 = _pthread_getspecific(pVar3);
      if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
        plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
      }
      pvVar1 = _pthread_getspecific(pVar3);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01507f00();
      lVar2 = *plVar5;
      fVar7 = (float)(**(code **)(lVar2 + 0x3a0))();
      pvVar1 = _pthread_getspecific((void*)lVar2);
      if (pvVar1 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar8 = (float)FUN_0125a2c0();
      local_34 = ((fVar8 - fVar6) / (fVar7 - fVar6)) * g_023b1608;
    }
  }
  else {
    pvVar1 = _pthread_getspecific(pVar3);
    if ((pvVar1 != (void *)0x0) && (lVar2 = FUN_00e8b990(), lVar2 != 0)) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
    pvVar1 = _pthread_getspecific(pVar3);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    lVar2 = *plVar5;
    fVar7 = (float)(**(code **)(lVar2 + 0x3a0))();
    pvVar1 = _pthread_getspecific((void*)lVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar8 = (float)FUN_0125a2c0();
    local_34 = (fVar8 - fVar6) / (fVar7 - fVar6);
    local_34 = local_34 + local_34;
  }
  if (local_48 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return local_34;
}

