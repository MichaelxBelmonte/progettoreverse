// Function: FUN_015287d0
// Address: 015287d0
// Size: 516 bytes
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


void FUN_015287d0(void)

{
  bool bVar1;
  int iVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t lVar6;
  int64_t this_ptr;
  uint64_t uVar7;
  bool bVar8;
  uint uVar9;
  int64_t local_60;
  char local_58;
  
  lVar3 = *(int64_t *)(this_ptr + 0x48);
  uVar9 = *(uint *)(lVar3 + 0xc);
  uVar7 = (uint64_t)uVar9;
  if ((int)uVar9 < 1) {
    bVar8 = false;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    bVar8 = false;
    while( true ) {
      uVar9 = uVar9 - 1;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + (uint64_t)uVar9 * 8);
      pVar5 = uVar9;
      if (lVar6 == lVar3) {
        lVar3 = lVar6;
        bVar1 = bVar8;
        if ((!bVar8) && (lVar6 != 0)) {
          FUN_00d50b00();
          bVar1 = true;
        }
      }
      else {
        if (lVar3 != 0) {
          FUN_00d50b00();
        }
        bVar1 = true;
        if ((bVar8) && (lVar6 != 0)) {
          FUN_00d50b20();
        }
      }
      bVar8 = bVar1;
      lVar6 = lVar3;
      pvVar4 = _pthread_getspecific(pVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      iVar2 = FUN_00d237a0();
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if (iVar2 != -1) {
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152abd0();
        pvVar4 = _pthread_getspecific(pVar5);
        if (pvVar4 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152b730();
      }
      if ((int64_t)uVar7 < 2) break;
      uVar7 = uVar7 - 1;
      lVar3 = *(int64_t *)(this_ptr + 0x48);
    }
  }
  FUN_01528450();
  if ((bVar8) && (lVar6 != 0)) {
    FUN_00d50b20();
  }
  return;
}

