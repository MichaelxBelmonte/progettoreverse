// Function: FUN_01528a90
// Address: 01528a90
// Size: 1519 bytes
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


void FUN_01528a90(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int64_t lVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  int64_t this_ptr;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int64_t local_78;
  char local_70;
  
  if (*(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) == 0) {
    pvVar7 = _pthread_getspecific((void*)param_1);
    if (pvVar7 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (local_70 == '\0') {
      if (local_78 == 0) goto LAB_01528fda;
      FUN_00d50b00();
    }
    else if (local_78 == 0) goto LAB_01528fda;
    for (iVar4 = 0; pVar9 = (void*)param_1, iVar4 < *(int *)(local_78 + 0xc);
        iVar4 = iVar4 + 1) {
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar10 = (double)FUN_0125a280();
      iVar5 = *(int *)(this_ptr + 0x3c);
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar11 = (double)FUN_0125a280();
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar12 = (double)FUN_01259520();
      iVar1 = *(int *)(this_ptr + 0x3c);
      pvVar7 = _pthread_getspecific(pVar9);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar13 = (double)FUN_01259520();
      param_1 = (uint64_t)((int)(dVar12 / (double)iVar1) - (uint)(dVar13 < 0.0));
      FUN_015278a0(param_1,(int)(dVar10 / (double)iVar5) - (uint)(dVar11 < 0.0),1);
    }
    FUN_001159b0();
    FUN_00d50b20();
  }
  else if ((*(int64_t *)(this_ptr + 0x50) != 0) && (iVar4 = FUN_00c8d620(), 0 < iVar4)) {
    iVar5 = 0;
    bVar3 = true;
    do {
      do {
        lVar6 = FUN_00c8df10();
      } while (lVar6 == 0);
      if (!bVar3) break;
      pvVar7 = _pthread_getspecific((void*)param_1);
      if ((pvVar7 == (void *)0x0) || (lVar8 = FUN_00e8b990(), lVar8 == 0)) {
        if (*(int64_t *)(lVar6 + 0x100) != 0) goto LAB_01528b91;
LAB_01528aea:
        FUN_015287d0();
      }
      else {
        if (*(int64_t *)
             (*(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8) + 0x100)
            == 0) goto LAB_01528aea;
LAB_01528b91:
        pvVar7 = _pthread_getspecific((void*)param_1);
        if ((pvVar7 != (void *)0x0) && (lVar8 = FUN_00e8b990(), lVar8 != 0)) {
          lVar6 = *(int64_t *)(lVar6 + 0x20 + (uint64_t)(*(uint *)(lVar8 + 0x154) & 1) * 8);
        }
        lVar8 = *(int64_t *)(lVar6 + 0x100);
        pvVar7 = _pthread_getspecific((void*)param_1);
        if (pvVar7 != (void *)0x0) {
          lVar8 = *(int64_t *)(lVar6 + 0x100);
          lVar6 = FUN_00e8b990();
          if (lVar6 != 0) {
            lVar8 = *(int64_t *)(lVar8 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
          }
        }
        pVar9 = (void*)param_1;
        if (*(int64_t *)(lVar8 + 0x138) != this_ptr) goto LAB_01528aea;
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar10 = (double)FUN_0125a280();
        iVar1 = *(int *)(this_ptr + 0x3c);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar11 = (double)FUN_0125a280();
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        pVar9 = (void*)(dVar11 < 0.0);
        dVar12 = (double)FUN_01259520();
        iVar2 = *(int *)(this_ptr + 0x3c);
        pvVar7 = _pthread_getspecific(pVar9);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        dVar13 = (double)FUN_01259520();
        param_1 = (uint64_t)((int)(dVar12 / (double)iVar2) - (uint)(dVar13 < 0.0));
        FUN_015278a0(param_1,(int)(dVar10 / (double)iVar1) - (uint)(dVar11 < 0.0),0,param_4,0);
      }
      iVar5 = iVar5 + 1;
      bVar3 = iVar5 < iVar4;
    } while (iVar5 != iVar4);
  }
LAB_01528fda:
  FUN_00d7a2d0();
  lVar6 = *(int64_t *)(this_ptr + 0x48);
  if (lVar6 != 0) {
    for (iVar4 = 0; iVar4 < *(int *)(lVar6 + 0xc); iVar4 = iVar4 + 1) {
      pvVar7 = _pthread_getspecific((void*)param_1);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0152ad10();
    }
    FUN_0152a5b0();
  }
  FUN_01529100();
  *(void*)(this_ptr + 0x38) = 1;
  return;
}

