// Function: FUN_015298a0
// Address: 015298a0
// Size: 729 bytes
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


void* FUN_015298a0(double param_1,double param_2)

{
  void* pVar1;
  int64_t lVar2;
  bool bVar3;
  code *pcVar4;
  int64_t lVar5;
  char cVar6;
  uint uVar7;
  void *pvVar8;
  int64_t lVar9;
  void*puVar10;
  uint uVar11;
  int iVar12;
  int64_t arg1;
  void*this_ptr;
  uint64_t uVar13;
  int64_t local_58;
  char local_50;
  int local_40;
  
  pcVar4 = g_02572370;
  if (*(char *)(arg1 + 0x38) == '\0') {
LAB_015298fd:
    *(void*)(this_ptr + 1) = 0;
  }
  else {
    uVar11 = (uint)(param_1 / (double)*(int *)(arg1 + 0x3c) +
                   (double)*(int *)(arg1 + 0x40));
    uVar7 = 0;
    if (-1 < (int)uVar11) {
      uVar7 = uVar11;
    }
    iVar12 = (int)((param_1 + param_2) / (double)*(int *)(arg1 + 0x3c) +
                  (double)*(int *)(arg1 + 0x40));
    if (iVar12 < (int)uVar7) goto LAB_015298fd;
    uVar13 = (uint64_t)uVar7;
    puVar10 = (void*)0x0;
    bVar3 = false;
    do {
      lVar5 = local_58;
      pVar1 = *(void* *)(*(int64_t *)(arg1 + 0x48) + 0xc);
      if ((int64_t)(int)pVar1 <= (int64_t)uVar13) break;
      pvVar8 = _pthread_getspecific(pVar1);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152aa70();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
          goto LAB_01529a20;
        }
      }
      else if (local_58 != 0) {
LAB_01529a20:
        local_50 = '\0';
        local_58 = 0;
        local_40 = -1;
        while( true ) {
          lVar9 = (int64_t)local_40;
          local_40 = local_40 + 1;
          if (*(int *)(lVar5 + 0xc) <= local_40) break;
          lVar2 = *(int64_t *)(lVar5 + 0x10);
          local_58 = *(int64_t *)(lVar2 + 8 + lVar9 * 8);
          pvVar8 = _pthread_getspecific((void*)lVar2);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar6 = FUN_01275500(param_1,param_2);
          if (cVar6 != '\0') {
            if (puVar10 == (void*)0x0) {
              puVar10 = (void*)FUN_00e8fc40();
              FUN_00d4ff40();
              *puVar10 = &g_02572358;
              (*pcVar4)();
              bVar3 = true;
            }
            FUN_00d24b60(0,FUN_012e8c90,1);
          }
        }
        FUN_001159b0();
        FUN_00d50b20();
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != iVar12 + 1);
    *(void*)(this_ptr + 1) = 0;
    if (bVar3) goto LAB_01529b8e;
    if (puVar10 != (void*)0x0) {
      FUN_00d50b00();
      goto LAB_01529b8e;
    }
  }
  puVar10 = (void*)0x0;
LAB_01529b8e:
  *this_ptr = puVar10;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

