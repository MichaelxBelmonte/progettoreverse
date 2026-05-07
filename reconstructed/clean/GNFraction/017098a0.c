// Function: FUN_017098a0
// Address: 017098a0
// Size: 1604 bytes
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


void FUN_017098a0(void)

{
  code *pcVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void *pvVar4;
  void*puVar5;
  void* pVar6;
  int64_t lVar7;
  void**ppuVar8;
  void*puVar9;
  int iVar10;
  void*this_ptr;
  uint uVar11;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  void*local_98;
  void*local_80;
  char local_78 [8];
  void*local_70;
  uint64_t local_68;
  int local_60;
  void*local_58;
  char local_50;
  int64_t local_48;
  uint64_t local_40;
  int local_38;
  
  plVar2 = (int64_t *)FUN_00e8fc40();
  FUN_00022d50();
  (**(code **)(*plVar2 + 0x18))();
  pcVar1 = g_02572370;
  if ((void*)*this_ptr != (void*)0x0) {
    local_78[0] = '\0';
    local_80 = (void*)0x0;
    local_68 = 0xffffffff;
    local_60 = 0;
    local_68._4_4_ = 0;
    local_70 = (void*)*this_ptr;
    while( true ) {
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar10 = -local_68._4_4_;
        }
        else {
          iVar10 = (int)local_68 - local_68._4_4_;
          local_68 = CONCAT44(local_68._4_4_,iVar10);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar10 = 0;
        }
        local_68 = CONCAT44(iVar10,(int)local_68);
      }
      lVar3 = (int64_t)(int)local_68;
      iVar10 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar10);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar10) break;
      lVar7 = local_70[2];
      local_80 = *(void**)(lVar7 + 8 + lVar3 * 8);
      pvVar4 = _pthread_getspecific((void*)lVar7);
      pVar6 = (void*)lVar7;
      puVar5 = local_80;
      if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
        puVar5 = (void*)local_80[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
      }
      lVar3 = puVar5[8];
      if (lVar3 == 0) {
        FUN_00d8ede0();
        if (local_b0 != '\0') goto LAB_017099f7;
        if (local_b8 != 0) {
          FUN_00d50b00();
        }
        local_a8 = local_b8;
      }
      else {
        FUN_00d50b00();
        local_b8 = lVar3;
LAB_017099f7:
        local_b0 = '\0';
        local_a8 = local_b8;
      }
      FUN_0170a170();
      puVar5 = local_58;
      if (local_50 == '\0') {
        if (((local_58 != (void*)0x0) && (FUN_00d50b00(), local_50 != '\0')) &&
           (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50 = '\0';
      }
      if (local_a8 != 0) {
        FUN_00d50b20();
      }
      if ((local_b0 != '\0') && (local_a8 != 0)) {
        FUN_00d50b20();
      }
      if (puVar5 == (void*)0x0) {
        puVar5 = (void*)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &g_02572358;
        (*pcVar1)();
        pvVar4 = _pthread_getspecific(pVar6);
        puVar9 = local_80;
        if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), lVar3 != 0)) {
          puVar9 = (void*)local_80[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
        }
        puVar9 = (void*)puVar9[8];
        if (puVar9 == (void*)0x0) {
          FUN_00d8ede0();
          local_98 = local_58;
          if (local_50 != '\0') goto LAB_01709b6f;
          if (local_58 != (void*)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = 0;
          FUN_00d50b00();
          local_58 = puVar9;
LAB_01709b6f:
          local_50 = '\0';
          local_98 = local_58;
        }
        FUN_0170a220();
        if (local_98 != (void*)0x0) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      local_50 = '\0';
      local_58 = local_80;
      FUN_00d21140();
      if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if (puVar5 != (void*)0x0) {
        FUN_00d50b20();
      }
      local_b8 = local_a8;
    }
    FUN_0170cbd0();
  }
  FUN_00ca1380();
  ppuVar8 = &local_58;
  if (local_78[0] != '\0') {
    ppuVar8 = (void**)local_78;
  }
  local_58 = (void*)CONCAT71(local_58._1_7_,local_78[0]);
  *(char *)ppuVar8 = '\0';
  if ((local_78[0] != '\0') && (local_80 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_58 == '\0') {
    if (local_80 == (void*)0x0) goto LAB_01709f15;
    FUN_00d50b00();
  }
  else if (local_80 == (void*)0x0) goto LAB_01709f15;
  local_78[0] = '\0';
  local_70 = local_80;
  local_60 = 0;
  local_68 = 0;
  if (0 < *(int *)((int64_t)local_80 + 0xc)) {
    uVar11 = 0;
    do {
      local_48 = *(int64_t *)(local_80[2] + (uint64_t)uVar11 * 8);
      if (*(int *)(local_48 + 0xc) < 2) {
        local_50 = '\0';
        local_58 = (void*)0x0;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar10 = -local_40._4_4_;
            }
            else {
              iVar10 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar10 = 0;
            }
            local_40 = CONCAT44(iVar10,(int)local_40);
          }
          lVar3 = (int64_t)(int)local_40;
          iVar10 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          if (*(int *)(local_48 + 0xc) <= iVar10) break;
          puVar5 = *(void**)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
          local_58 = puVar5;
          pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
          puVar9 = local_58;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), puVar5 = puVar9, lVar3 != 0)) {
            puVar5 = (void*)puVar9[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          iVar10 = local_38 + (int)local_40;
          if (*(int *)(puVar5 + 9) != iVar10) {
            FUN_00d64850();
            *(int *)(puVar5 + 9) = iVar10;
            FUN_00d64910();
          }
        }
      }
      else {
        local_50 = '\0';
        local_58 = (void*)0x0;
        local_40 = 0xffffffff;
        local_38 = 0;
        local_40._4_4_ = 0;
        while( true ) {
          if (local_40._4_4_ != 0) {
            if (local_40._4_4_ < 1) {
              iVar10 = -local_40._4_4_;
            }
            else {
              iVar10 = (int)local_40 - local_40._4_4_;
              local_40 = CONCAT44(local_40._4_4_,iVar10);
              FUN_00d23690();
              local_38 = local_38 + local_40._4_4_;
              iVar10 = 0;
            }
            local_40 = CONCAT44(iVar10,(int)local_40);
          }
          lVar3 = (int64_t)(int)local_40;
          iVar10 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar10);
          if (*(int *)(local_48 + 0xc) <= iVar10) break;
          puVar5 = *(void**)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
          local_58 = puVar5;
          pvVar4 = _pthread_getspecific((void*)*(int64_t *)(local_48 + 0x10));
          puVar9 = local_58;
          if ((pvVar4 != (void *)0x0) && (lVar3 = FUN_00e8b990(), puVar5 = puVar9, lVar3 != 0)) {
            puVar5 = (void*)puVar9[(uint64_t)(*(uint *)(lVar3 + 0x154) & 1) + 4];
          }
          iVar10 = (int)local_40 + local_38 + 1;
          if (*(int *)(puVar5 + 9) != iVar10) {
            FUN_00d64850();
            *(int *)(puVar5 + 9) = iVar10;
            FUN_00d64910();
          }
        }
      }
      FUN_0170cbd0();
      uVar11 = uVar11 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar11);
    } while ((int)uVar11 < *(int *)((int64_t)local_80 + 0xc));
  }
  FUN_0170cc70();
  FUN_00d50b20();
LAB_01709f15:
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

