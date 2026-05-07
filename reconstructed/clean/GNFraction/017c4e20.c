// Function: FUN_017c4e20
// Address: 017c4e20
// Size: 979 bytes
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


void* FUN_017c4e20(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  bool bVar2;
  code *pcVar3;
  char cVar4;
  void *pvVar5;
  uint64_t uVar6;
  code *pcVar7;
  int64_t arg1;
  void*this_ptr;
  int iVar8;
  void*local_38;
  
  cVar4 = FUN_00e7c7f0();
  pcVar3 = g_02572370;
  if (cVar4 == '\0') {
LAB_017c5192:
    *(void*)(this_ptr + 1) = 0;
LAB_017c519b:
    local_38 = (void*)0x0;
  }
  else {
    if (param_2 != '\0') {
      if (g_0240b530 < *(float *)(arg1 + 0x58)) goto LAB_017c4e86;
      goto LAB_017c5192;
    }
    if (*(float *)(arg1 + 0x58) <= 0.0) goto LAB_017c5192;
LAB_017c4e86:
    lVar1 = *(int64_t *)(arg1 + 0x40);
    if (lVar1 == 0) goto LAB_017c5192;
    if (*(int *)(lVar1 + 0xc) < 1) {
      bVar2 = false;
      local_38 = (void*)0x0;
    }
    else {
      iVar8 = 0;
      local_38 = (void*)0x0;
      bVar2 = false;
      pcVar7 = g_02572370;
      do {
        pvVar5 = _pthread_getspecific((void*)pcVar7);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar6 = FUN_017c3170();
        cVar4 = FUN_00e7c7f0();
        if (cVar4 == '\0') {
LAB_017c4fff:
          pvVar5 = _pthread_getspecific((void*)pcVar7);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar6 = FUN_017c3170();
          FUN_00e7c3c0();
          FUN_00e7b820();
          cVar4 = FUN_00e7c7f0();
          if (cVar4 != '\0') {
            FUN_00e7b970();
            FUN_00e7c2a0();
            FUN_00e7bdc0();
            pcVar7 = 0x0;
            if ((uVar6 & 0xffffffff00000000) == 0x100000000) goto LAB_017c5109;
          }
        }
        else {
          FUN_00e7b970();
          FUN_00e7c2a0();
          FUN_00e7bdc0();
          pcVar7 = 0x0;
          if ((uVar6 & 0xffffffff00000000) != 0x100000000) goto LAB_017c4fff;
LAB_017c5109:
          pcVar7 = 0x0;
          if (local_38 == (void*)0x0) {
            local_38 = (void*)FUN_00e8fc40();
            FUN_00d4ff40();
            *local_38 = &g_02572358;
            (*pcVar3)();
            bVar2 = true;
          }
          FUN_00d21140();
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < *(int *)(lVar1 + 0xc));
    }
    FUN_0142bf90();
    *(void*)(this_ptr + 1) = 0;
    if (bVar2) {
      *this_ptr = local_38;
      goto LAB_017c51a0;
    }
    if (local_38 == (void*)0x0) goto LAB_017c519b;
    FUN_00d50b00();
  }
  *this_ptr = local_38;
LAB_017c51a0:
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

