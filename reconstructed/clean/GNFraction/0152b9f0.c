// Function: FUN_0152b9f0
// Address: 0152b9f0
// Size: 910 bytes
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


void FUN_0152b9f0(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  void*puVar3;
  int64_t lVar4;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_58;
  char local_50;
  int local_40;
  
  if ((g_028ad110 == 0) || (g_028ad119 == '\0')) {
    FUN_00e8cb50();
    if (g_028ad110 == 0) {
      plVar2 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar2 + 0x18))();
      puVar3 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar3 = &g_02572358;
      (*g_02572370)();
      lVar4 = g_027c20c0;
      if (g_027c20c0 != 0) {
        FUN_00d50b00();
      }
      FUN_01e2af10();
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_027c40f0;
      if (g_027c40f0 != 0) {
        FUN_00d50b00();
      }
      FUN_000175c0();
      lVar1 = g_028ad110;
      if (g_028ad110 != local_58) {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        g_028ad110 = local_58;
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
      }
      if ((local_58 != 0) && (g_028ad118 == '\0')) {
        g_028ad118 = '\x01';
        FUN_00e8cb90();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (lVar4 != 0) {
        FUN_00d50b20();
      }
      lVar4 = g_028ad110;
      if (g_028ad110 != 0) {
        FUN_00d50b00();
        FUN_00d23d90();
        if (lVar4 != 0) {
          FUN_00d50b20();
        }
      }
      local_50 = '\0';
      local_58 = 0;
      local_40 = -1;
      while( true ) {
        lVar4 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)puVar3 + 0xc) <= local_40) break;
        local_58 = *(int64_t *)(puVar3[2] + 8 + lVar4 * 8);
        FUN_00d50130();
      }
      FUN_00083b20();
      FUN_00d50b20();
      if (plVar2 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      g_028ad119 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028ad119 = '\x01';
      FUN_00e8cb70();
    }
  }
  lVar4 = *(int64_t *)(arg1 + 0x38);
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_00e427c0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_58 == 0) {
    *(void*)(this_ptr + 1) = 0;
    local_58 = *(int64_t *)(arg1 + 0x38);
    if (local_58 == 0) {
      local_58 = 0;
    }
    else {
      FUN_00d50b00();
    }
  }
  *this_ptr = local_58;
  *(void*)(this_ptr + 1) = 1;
  return;
}

