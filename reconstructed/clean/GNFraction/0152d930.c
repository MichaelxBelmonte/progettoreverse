// Function: FUN_0152d930
// Address: 0152d930
// Size: 747 bytes
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


uint64_t FUN_0152d930(float param_1)

{
  bool bVar1;
  void *pvVar2;
  int64_t lVar3;
  void* in_ECX;
  void* pVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  float fVar6;
  uint64_t uVar7;
  int64_t *local_50;
  char local_48;
  float local_34;
  
  if (*(int64_t *)(this_ptr + 0x68) == 0) goto LAB_0152da11;
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507e40();
  if (local_50 == (int64_t *)0x0) {
    bVar1 = false;
    local_50 = (int64_t *)0x0;
    if (local_48 != '\0') {
      bVar1 = false;
      local_50 = (int64_t *)0x0;
    }
LAB_0152d9e1:
    if (local_50 == (int64_t *)0x0) {
LAB_0152da11:
      pvVar2 = _pthread_getspecific(in_ECX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      uVar7 = FUN_0125a2c0();
      return uVar7;
    }
  }
  else {
    if (local_48 == '\0') {
      FUN_00d50b00();
      bVar1 = true;
      goto LAB_0152d9e1;
    }
    bVar1 = true;
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  plVar5 = local_50;
  if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
    plVar5 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
  }
  pvVar2 = _pthread_getspecific(in_ECX);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01507f00();
  lVar3 = *plVar5;
  local_34 = (float)(**(code **)(lVar3 + 0x3a0))();
  pVar4 = (void*)lVar3;
  if (param_1 <= 0.0) {
    if (0.0 <= param_1) goto LAB_0152dbed;
    pvVar2 = _pthread_getspecific(pVar4);
    plVar5 = local_50;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
    fVar6 = (fVar6 - local_34) * param_1 * g_02390118;
  }
  else {
    pvVar2 = _pthread_getspecific(pVar4);
    plVar5 = local_50;
    if ((pvVar2 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
      plVar5 = (int64_t *)local_50[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
    }
    pvVar2 = _pthread_getspecific(pVar4);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01507f00();
    fVar6 = (float)(**(code **)(*plVar5 + 0x3a0))();
    fVar6 = (fVar6 - local_34) * param_1 * g_0239011c;
  }
  local_34 = local_34 + fVar6;
LAB_0152dbed:
  if ((bVar1) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return (uint64_t)(uint)local_34;
}

