// Function: FUN_017c3c30
// Address: 017c3c30
// Size: 502 bytes
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


void FUN_017c3c30(void* param_1,uint64_t param_2)

{
  char cVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t arg1;
  void*this_ptr;
  int64_t *plVar6;
  int iStack_54;
  int iStack_4c;
  int iVar7;
  char local_38;
  
  plVar2 = (int64_t *)FUN_0114f240();
  (**(code **)(*plVar2 + 0x18))();
  pvVar3 = _pthread_getspecific(param_1);
  plVar6 = plVar2;
  if (pvVar3 == (void *)0x0) {
    iVar7 = *(int *)((int64_t)plVar2 + 0x3c);
  }
  else {
    lVar4 = FUN_00e8b990();
    if (lVar4 != 0) {
      plVar6 = (int64_t *)plVar2[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    iVar7 = *(int *)((int64_t)plVar6 + 0x3c);
  }
  if (((iVar7 == 0) || (arg1 >> 0x20 == 0)) || (cVar1 = FUN_00e7c000(), cVar1 == '\0')) {
    FUN_00d64850();
    plVar6[7] = arg1;
    FUN_00d64910();
  }
  uVar5 = FUN_00e7bcc0();
  if ((uVar5 >> 0x20 != 0) && (iVar7 = (int)(arg1 >> 0x20), iVar7 != 0)) {
    while (cVar1 = FUN_00e7c020(), cVar1 != '\0') {
      pvVar3 = _pthread_getspecific(param_1);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_017c3180(0);
      if (local_38 == '\0') {
        if (arg1 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      FUN_017c3eb0();
      if (arg1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (arg1 != 0)) {
        FUN_00d50b20();
      }
      iStack_54 = (int)((uint64_t)param_2 >> 0x20);
      if (iStack_54 == 0) break;
      arg1 = arg1 & 0xffffffff00000000;
      cVar1 = FUN_00e7c630();
      if (cVar1 != '\0') break;
      FUN_00e7b820();
      iStack_4c = (int)(uVar5 >> 0x20);
      if ((iStack_4c == 0) || (iVar7 == 0)) break;
    }
  }
  *this_ptr = plVar2;
  *(void*)(this_ptr + 1) = 1;
  return;
}

