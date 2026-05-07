// Function: FUN_017c5270
// Address: 017c5270
// Size: 739 bytes
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


void* FUN_017c5270(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  bool bVar3;
  char cVar4;
  void *pvVar5;
  void*puVar6;
  code *pcVar7;
  code *arg1;
  void*this_ptr;
  int64_t lVar8;
  uint64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  uint64_t local_b8;
  uint8_t local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  uint32_t local_98;
  uint64_t local_90;
  code *local_88;
  void*local_80;
  code *local_78;
  
  local_88 = arg1 + 0x50;
  cVar4 = FUN_00e7c7f0();
  if ((cVar4 == '\0') || (lVar1 = *(int64_t *)(arg1 + 0x40), lVar1 == 0)) {
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    local_b0 = 0;
    local_b8 = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = lVar1;
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar3 = false;
      puVar6 = (void*)0x0;
    }
    else {
      local_78 = g_02572370;
      lVar8 = 0;
      local_80 = &g_02572358;
      puVar6 = (void*)0x0;
      bVar3 = false;
      pcVar7 = g_02572370;
      do {
        local_b8 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar8 * 8);
        pvVar5 = _pthread_getspecific((void*)pcVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_017c3170();
        local_d0 = 0;
        local_d8 = 0;
        pcVar7 = arg1;
        cVar4 = FUN_017c4d30(arg1,&local_d8);
        if (cVar4 == '\0') {
          pvVar5 = _pthread_getspecific((void*)pcVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_017c3170();
          uVar2 = *(void*)local_88;
          FUN_00e7c2a0();
          FUN_00e7c3c0();
          local_90 = uVar2;
          FUN_00e7b820();
          local_c0 = 0;
          local_c8 = 0;
          cVar4 = FUN_017c4d30();
          if (cVar4 != '\0') goto LAB_017c549e;
        }
        else {
LAB_017c549e:
          if (puVar6 == (void*)0x0) {
            puVar6 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *puVar6 = local_80;
            (*local_78)();
            bVar3 = true;
          }
          FUN_00d21140();
        }
        lVar8 = lVar8 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,(int)lVar8);
      } while ((int)lVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_0142bf90();
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) goto LAB_017c5550;
    if (puVar6 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_017c5550;
    }
  }
  puVar6 = (void*)0x0;
LAB_017c5550:
  *this_ptr = puVar6;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

