// Function: FUN_015292f0
// Address: 015292f0
// Size: 1052 bytes
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


void* FUN_015292f0(double param_1,double param_2)

{
  void* pVar1;
  int64_t lVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  int64_t lVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  int64_t lVar10;
  void*puVar11;
  uint uVar12;
  int64_t arg1;
  uint64_t uVar13;
  void*this_ptr;
  int iVar14;
  bool bVar15;
  int64_t local_80;
  char local_78;
  int local_68;
  void*local_58;
  void*local_50;
  
  pcVar5 = g_02578b18;
  pcVar4 = g_02572370;
  if (*(char *)(arg1 + 0x38) != '\0') {
    uVar12 = (uint)(param_1 / (double)*(int *)(arg1 + 0x3c) +
                   (double)*(int *)(arg1 + 0x40));
    uVar8 = 0;
    if (-1 < (int)uVar12) {
      uVar8 = uVar12;
    }
    iVar14 = (int)((param_1 + param_2) / (double)*(int *)(arg1 + 0x3c) +
                  (double)*(int *)(arg1 + 0x40));
    if ((int)uVar8 <= iVar14) {
      uVar13 = (uint64_t)uVar8;
      local_50 = (void*)0x0;
      bVar3 = false;
      local_58 = (void*)0x0;
      bVar15 = false;
      do {
        lVar6 = local_80;
        pVar1 = *(void* *)(*(int64_t *)(arg1 + 0x48) + 0xc);
        if ((int64_t)(int)pVar1 <= (int64_t)uVar13) break;
        pvVar9 = _pthread_getspecific(pVar1);
        if (pvVar9 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        if (local_78 == '\0') {
          if (local_80 != 0) {
            FUN_00d50b00();
            goto LAB_015294b0;
          }
        }
        else if (local_80 != 0) {
LAB_015294b0:
          local_78 = '\0';
          local_80 = 0;
          local_68 = -1;
          while( true ) {
            lVar10 = (int64_t)local_68;
            local_68 = local_68 + 1;
            if (*(int *)(lVar6 + 0xc) <= local_68) break;
            lVar2 = *(int64_t *)(lVar6 + 0x10);
            local_80 = *(int64_t *)(lVar2 + 8 + lVar10 * 8);
            pvVar9 = _pthread_getspecific((void*)lVar2);
            if (pvVar9 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar7 = FUN_012754d0(param_1,param_2);
            if (cVar7 != '\0') {
              if (local_50 == (void*)0x0) {
                local_50 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *local_50 = &g_02572358;
                (*pcVar4)();
                puVar11 = (void*)FUN_00e8fc40();
                FUN_00d4ff40();
                *puVar11 = &g_02578b00;
                (*pcVar5)();
                if ((bVar15) && (local_58 != (void*)0x0)) {
                  FUN_00d50b20();
                }
                bVar3 = true;
                local_58 = puVar11;
                bVar15 = true;
              }
              cVar7 = FUN_00d7a850();
              if (cVar7 == '\0') {
                FUN_00d24b60(0,FUN_012e8c90,0);
                FUN_00d7a410();
              }
            }
          }
          FUN_001159b0();
          FUN_00d50b20();
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != iVar14 + 1);
      *(void*)(this_ptr + 1) = 0;
      if (!bVar3) {
        if (local_50 == (void*)0x0) {
          local_50 = (void*)0x0;
        }
        else {
          FUN_00d50b00();
        }
      }
      goto LAB_015296ee;
    }
  }
  *(void*)(this_ptr + 1) = 0;
  bVar15 = false;
  local_58 = (void*)0x0;
  local_50 = (void*)0x0;
LAB_015296ee:
  *this_ptr = local_50;
  *(void*)(this_ptr + 1) = 1;
  if ((bVar15) && (local_58 != (void*)0x0)) {
    FUN_00d50b20();
  }
  return this_ptr;
}

