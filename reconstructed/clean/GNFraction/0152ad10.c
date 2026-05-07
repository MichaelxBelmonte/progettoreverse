// Function: FUN_0152ad10
// Address: 0152ad10
// Size: 1937 bytes
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


void FUN_0152ad10(void)

{
  int64_t lVar1;
  int64_t lVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int64_t lVar7;
  void *pvVar8;
  char *pcVar9;
  int64_t *plVar10;
  void* pVar11;
  char *pcVar12;
  uint uVar13;
  int iVar14;
  int64_t this_ptr;
  int iVar15;
  double dVar16;
  double dVar17;
  int64_t local_b0;
  char local_a8 [12];
  int local_9c;
  char *local_98;
  char local_90 [8];
  char *local_88;
  int local_80;
  int iStack_7c;
  int local_78;
  char *local_70;
  int64_t local_68;
  char local_60;
  char *local_58;
  uint64_t local_50;
  int local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(char *)(this_ptr + 0x54) != '\0') {
    return;
  }
  FUN_004f2260(0);
  pcVar3 = local_98;
  if ((((local_90[0] == '\0') && (local_98 != (char *)0x0)) && (FUN_00d50b00(), local_90[0] != '\0')
      ) && (local_98 != (char *)0x0)) {
    FUN_00d50b20();
  }
  FUN_0025e9a0();
  local_70 = local_98;
  if (((local_90[0] == '\0') && (local_98 != (char *)0x0)) &&
     ((FUN_00d50b00(), local_90[0] != '\0' && (local_98 != (char *)0x0)))) {
    FUN_00d50b20();
  }
  local_90[0] = '\0';
  local_98 = (char *)0x0;
  local_88 = pcVar3;
  local_80 = -1;
  iStack_7c = 0;
  local_78 = 0;
  local_9c = 1;
  iVar15 = 0;
  while( true ) {
    if (iStack_7c != 0) {
      if (iStack_7c < 1) {
        iStack_7c = -iStack_7c;
      }
      else {
        local_80 = local_80 - iStack_7c;
        FUN_00d23690();
        local_78 = local_78 + iStack_7c;
        iStack_7c = 0;
      }
    }
    lVar7 = (int64_t)local_80;
    local_80 = local_80 + 1;
    if (*(int *)(local_88 + 0xc) <= local_80) break;
    pcVar12 = *(char **)(local_88 + 0x10);
    local_98 = *(char **)(pcVar12 + lVar7 * 8 + 8);
    if (local_9c == 1) {
      pvVar8 = _pthread_getspecific((void*)pcVar12);
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0126eaa0();
      lVar7 = local_68;
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      local_9c = 2 - (uint)(lVar7 == 0);
    }
    bVar4 = true;
    do {
      bVar5 = bVar4;
      if (local_70 != (char *)0x0) {
        local_60 = 0;
        local_68 = 0;
        local_58 = local_70;
        local_50 = 0xffffffff;
        local_48 = 0;
        local_50._4_4_ = 0;
        while( true ) {
          if (local_50._4_4_ != 0) {
            if ((int)local_50._4_4_ < 1) {
              iVar14 = -local_50._4_4_;
            }
            else {
              iVar14 = (int)local_50 - local_50._4_4_;
              local_50 = CONCAT44(local_50._4_4_,iVar14);
              FUN_00d23690();
              local_48 = local_48 + local_50._4_4_;
              iVar14 = 0;
            }
            local_50 = CONCAT44(iVar14,(int)local_50);
          }
          lVar7 = (int64_t)(int)local_50;
          iVar14 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,iVar14);
          if (*(int *)(local_58 + 0xc) <= iVar14) {
            lVar7 = 0;
            pcVar12 = local_58;
            goto LAB_0152af22;
          }
          local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar7 * 8);
          pvVar8 = _pthread_getspecific((void*)*(int64_t *)(local_58 + 0x10));
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          local_40[0] = local_a8[0];
          pcVar12 = local_40;
          pcVar9 = local_a8;
          if (local_a8[0] == '\0') {
            pcVar9 = pcVar12;
          }
          lVar1 = CONCAT71(local_b0._1_7_,(char)local_b0);
          *pcVar9 = '\0';
          if ((local_a8[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
          pvVar8 = _pthread_getspecific((void*)pcVar12);
          if (pvVar8 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125a560();
          local_38[0] = local_a8[0];
          pcVar12 = local_38;
          pcVar9 = local_a8;
          if (local_a8[0] == '\0') {
            pcVar9 = pcVar12;
          }
          lVar2 = CONCAT71(local_b0._1_7_,(char)local_b0);
          *pcVar9 = '\0';
          if ((local_a8[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          if (((lVar1 != 0) && (lVar2 != 0)) &&
             (cVar6 = FUN_012a7870(), lVar7 = local_68, cVar6 != '\0')) break;
          if ((local_38[0] != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
          if ((local_40[0] != '\0') && (lVar1 != 0)) {
            FUN_00d50b20();
          }
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if (local_40[0] != '\0') {
          FUN_00d50b20();
        }
LAB_0152af22:
        FUN_001159b0();
        pVar11 = (void*)pcVar12;
        if (lVar7 != 0) {
          local_60 = '\0';
          local_68 = lVar7;
          FUN_00d23f50();
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          break;
        }
      }
      pVar11 = (void*)pcVar12;
      bVar4 = false;
    } while (bVar5);
    local_68 = (int64_t)local_98;
    local_60 = '\0';
    FUN_00d21140();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if (iVar15 < *(int *)(local_70 + 0xc)) {
      iVar15 = *(int *)(local_70 + 0xc);
    }
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    dVar16 = (double)FUN_0125a280();
    local_60 = '\0';
    local_68 = 0;
    local_58 = local_70;
    local_50 = 0xffffffff;
    local_48 = 0;
    uVar13 = 0;
    while( true ) {
      if (uVar13 != 0) {
        if ((int)uVar13 < 1) {
          iVar14 = -uVar13;
        }
        else {
          local_50 = CONCAT44(local_50._4_4_,(int)local_50 - uVar13);
          FUN_00d23690();
          local_48 = local_48 + local_50._4_4_;
          iVar14 = 0;
        }
        local_50 = CONCAT44(iVar14,(int)local_50);
      }
      lVar7 = (int64_t)(int)local_50;
      iVar14 = (int)local_50 + 1;
      local_50 = CONCAT44(local_50._4_4_,iVar14);
      if (*(int *)(local_58 + 0xc) <= iVar14) break;
      local_68 = *(int64_t *)(*(int64_t *)(local_58 + 0x10) + 8 + lVar7 * 8);
      pvVar8 = _pthread_getspecific((void*)*(int64_t *)(local_58 + 0x10));
      if (pvVar8 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_01259520();
      uVar13 = local_50._4_4_;
      if (dVar17 + g_02423ba0 < dVar16) {
        uVar13 = ~local_50._4_4_;
        local_50 = CONCAT44(uVar13,(int)local_50);
      }
    }
    FUN_001159b0();
  }
  pcVar12 = local_88;
  FUN_001159b0();
  pVar11 = (void*)pcVar12;
  FUN_00d64850();
  *(void*)(this_ptr + 0x54) = 1;
  FUN_00d64910();
  iVar15 = iVar15 * local_9c * 2;
  if (*(int *)(this_ptr + 0x50) == iVar15) goto LAB_0152b4b5;
  FUN_00d64850();
  *(int *)(this_ptr + 0x50) = iVar15;
  FUN_00d64910();
  if (*(int64_t *)(this_ptr + 0x48) != 0) {
    pvVar8 = _pthread_getspecific(pVar11);
    if (pvVar8 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0152a4a0();
  }
  FUN_00d23310();
  pcVar12 = local_98;
  plVar10 = (int64_t *)local_90;
  if (local_90[0] == '\0') {
    plVar10 = &local_b0;
  }
  local_b0._0_1_ = local_90[0];
  *(void*)plVar10 = 0;
  if ((local_90[0] != '\0') && (pcVar12 != (char *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = CONCAT71(local_68._1_7_,(char)local_b0 != '\0');
  plVar10 = &local_b0;
  if ((char)local_b0 == '\0') {
    plVar10 = &local_68;
  }
  *(void*)plVar10 = 0;
  if ((char)local_b0 == '\0') {
    if (((char)local_68 == '\0') || (pcVar12 == (char *)0x0)) goto LAB_0152b4b5;
  }
  else {
    if (pcVar12 == (char *)0x0) goto LAB_0152b4b5;
    FUN_00d50b20();
    if ((char)local_68 == '\0') goto LAB_0152b4b5;
  }
  FUN_00d50b20();
LAB_0152b4b5:
  if (local_70 != (char *)0x0) {
    FUN_00d50b20();
  }
  if (pcVar3 != (char *)0x0) {
    FUN_00d50b20();
  }
  return;
}

