// Function: FUN_015278a0
// Address: 015278a0
// Size: 2291 bytes
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


void FUN_015278a0(uint64_t param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  void *pvVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void*puVar10;
  uint uVar11;
  uint uVar12;
  void* pVar13;
  int64_t this_ptr;
  uint uVar14;
  void*puVar15;
  uint64_t uVar16;
  void*unaff_R14;
  int64_t lVar17;
  int64_t lVar18;
  bool bVar19;
  uint local_7c;
  int64_t local_60;
  char local_58;
  void*local_38;
  
  iVar2 = (int)param_1;
  if (*(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) == 0) {
    *(int *)(this_ptr + 0x40) = -param_2;
    uVar11 = iVar2 - param_2;
    if (-1 < (int)uVar11) {
      uVar12 = (iVar2 - param_2) + 1;
      param_1 = (uint64_t)uVar12;
      uVar14 = 0;
      unaff_R14 = (void*)0x0;
      plVar5 = (int64_t *)0x0;
      do {
        plVar4 = (int64_t *)FUN_011d2cb0();
        (**(code **)(*plVar4 + 0x18))();
        cVar1 = (char)unaff_R14;
        if (plVar5 == plVar4) {
          plVar4 = plVar5;
          if ((cVar1 == '\0') && (plVar5 != (int64_t *)0x0)) {
            unaff_R14 = (void*)0x1;
          }
          else if (plVar5 == (int64_t *)0x0) {
            plVar4 = (int64_t *)0x0;
          }
          else {
            FUN_00d50b20();
          }
        }
        else {
          unaff_R14 = (void*)0x1;
          if ((cVar1 != '\0') && (plVar5 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        iVar2 = *(int *)(this_ptr + 0x40);
        pvVar6 = _pthread_getspecific((void*)param_1);
        plVar5 = plVar4;
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          plVar5 = (int64_t *)plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
        }
        *(uint *)(plVar5 + 8) = uVar14 - iVar2;
        FUN_01527350();
        uVar14 = uVar14 + 1;
        plVar5 = plVar4;
      } while (uVar12 != uVar14);
      local_7c = 0;
      local_38 = unaff_R14;
      goto joined_r0x015279ea;
    }
    local_38 = (void*)0x0;
    local_7c = 0;
    if (uVar11 < 0x80000000) goto LAB_01527c4e;
  }
  else {
    local_7c = *(int *)(this_ptr + 0x40) + param_2;
    if ((int)local_7c < 0) {
      uVar11 = iVar2 - param_2;
      uVar16 = (uint64_t)uVar11;
      local_38 = (void*)0x0;
      plVar5 = (int64_t *)0x0;
      do {
        while( true ) {
          plVar4 = (int64_t *)FUN_011d2cb0();
          (**(code **)(*plVar4 + 0x18))();
          cVar1 = (char)local_38;
          if (plVar5 == plVar4) {
            plVar4 = plVar5;
            if ((cVar1 == '\0') && (plVar5 != (int64_t *)0x0)) {
              local_38 = (void*)0x1;
            }
            else if (plVar5 == (int64_t *)0x0) {
              plVar4 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = (void*)0x1;
            if ((cVar1 != '\0') && (plVar5 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          FUN_01527510();
          uVar12 = *(uint *)(this_ptr + 0x40);
          *(uint *)(this_ptr + 0x40) = uVar12 + 1;
          pvVar6 = _pthread_getspecific((void*)uVar16);
          plVar5 = plVar4;
          if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) break;
          *(uint *)(plVar4 + 8) = ~uVar12;
          local_7c = local_7c + 1;
          if (local_7c == 0) goto LAB_01527b05;
        }
        *(uint *)(plVar4[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4] + 0x40) = ~uVar12;
        local_7c = local_7c + 1;
      } while (local_7c != 0);
LAB_01527b05:
      local_7c = 0;
    }
    else {
      uVar11 = iVar2 + *(int *)(this_ptr + 0x40);
      local_38 = (void*)0x0;
      plVar4 = (int64_t *)0x0;
    }
    unaff_R14 = &g_02802558;
    while (param_1 = (uint64_t)uVar11,
          *(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc) <= (int)uVar11) {
      plVar5 = (int64_t *)FUN_011d2cb0();
      (**(code **)(*plVar5 + 0x18))();
      cVar1 = (char)local_38;
      if (plVar4 == plVar5) {
        plVar5 = plVar4;
        if ((cVar1 == '\0') && (plVar4 != (int64_t *)0x0)) {
          local_38 = (void*)0x1;
        }
        else if (plVar4 == (int64_t *)0x0) {
          plVar5 = (int64_t *)0x0;
        }
        else {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = (void*)0x1;
        if ((cVar1 != '\0') && (plVar4 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      iVar2 = *(int *)(*(int64_t *)(this_ptr + 0x48) + 0xc);
      iVar3 = *(int *)(this_ptr + 0x40);
      pvVar6 = _pthread_getspecific((void*)this_ptr);
      plVar4 = plVar5;
      if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
        plVar4 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar7 + 0x154) & 1) + 4];
      }
      *(int *)(plVar4 + 8) = iVar2 - iVar3;
      FUN_01527350();
      plVar4 = plVar5;
    }
joined_r0x015279ea:
    if (plVar4 != (int64_t *)0x0) {
      if ((char)local_38 != '\0') {
        FUN_00d50b20();
      }
      local_38 = (void*)0x0;
    }
    if ((int)local_7c <= (int)uVar11) {
LAB_01527c4e:
      lVar8 = (int64_t)(int)local_7c;
      lVar7 = 0;
      do {
        lVar18 = *(int64_t *)(*(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10) + lVar8 * 8);
        if (lVar7 == lVar18) {
          if (((char)local_38 == '\0') && (lVar7 != 0)) {
            FUN_00d50b00();
            lVar18 = lVar7;
            goto LAB_01527cd0;
          }
          local_38 = (void*)((uint64_t)local_38 & 0xffffffff);
          if (param_3 == '\0') goto LAB_01527cdd;
LAB_01527d80:
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152aaa0();
        }
        else {
          if (lVar18 != 0) {
            FUN_00d50b00();
          }
          if (((char)local_38 != '\0') && (lVar7 != 0)) {
            FUN_00d50b20();
          }
LAB_01527cd0:
          local_38 = (void*)CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
          lVar7 = lVar18;
          if (param_3 != '\0') goto LAB_01527d80;
LAB_01527cdd:
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152aa70();
          cVar1 = FUN_00d23d70();
          if ((local_58 != '\0') && (local_60 != 0)) {
            FUN_00d50b20();
          }
          if (cVar1 == '\0') goto LAB_01527d80;
        }
        pvVar6 = _pthread_getspecific((void*)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152b730();
        lVar8 = lVar8 + 1;
        unaff_R14 = local_38;
      } while (uVar11 + 1 != (int)lVar8);
      goto LAB_01527e4c;
    }
  }
  lVar7 = 0;
LAB_01527e4c:
  if (param_3 == '\0') {
    if (0 < (int)local_7c) {
      uVar16 = 0;
      do {
        lVar8 = *(int64_t *)(*(int64_t *)(this_ptr + 0x48) + 0x10);
        lVar18 = *(int64_t *)(lVar8 + uVar16 * 8);
        if (lVar7 == lVar18) {
          if (((char)local_38 == '\0') && (lVar7 != 0)) {
            local_38 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
            FUN_00d50b00();
          }
        }
        else {
          if (lVar18 != 0) {
            lVar8 = FUN_00d50b00();
          }
          if (((char)local_38 == '\0') || (lVar7 == 0)) {
            local_38 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
            lVar7 = lVar18;
          }
          else {
            uVar9 = FUN_00d50b20();
            local_38 = (void*)CONCAT71((int7)((uint64_t)uVar9 >> 8),1);
            lVar7 = lVar18;
          }
        }
        pvVar6 = _pthread_getspecific((void*)param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        iVar2 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar2 != -1) {
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152abd0();
          pvVar6 = _pthread_getspecific((void*)param_1);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152b730();
        }
        uVar16 = uVar16 + 1;
      } while (local_7c != uVar16);
    }
    lVar8 = *(int64_t *)(this_ptr + 0x48);
    if ((int)(uVar11 + 1) < *(int *)(lVar8 + 0xc)) {
      lVar17 = (int64_t)(int)(uVar11 + 1);
      iVar2 = (*(int *)(lVar8 + 0xc) - uVar11) + -2;
      lVar18 = lVar7;
      while( true ) {
        puVar15 = (void*)((uint64_t)local_38 & 0xffffffff);
        lVar8 = *(int64_t *)(lVar8 + 0x10);
        lVar7 = *(int64_t *)(lVar8 + lVar17 * 8);
        if (lVar18 == lVar7) {
          lVar7 = lVar18;
          puVar10 = puVar15;
          pVar13 = (void*)local_38;
          if (((char)puVar15 == '\0') && (lVar18 != 0)) {
            FUN_00d50b00();
            puVar10 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
            pVar13 = (void*)local_38;
          }
        }
        else {
          if (lVar7 != 0) {
            lVar8 = FUN_00d50b00();
          }
          puVar10 = (void*)CONCAT71((int7)((uint64_t)lVar8 >> 8),1);
          pVar13 = (void*)local_38;
          if (((char)puVar15 != '\0') && (lVar18 != 0)) {
            FUN_00d50b20();
            pVar13 = (void*)local_38;
          }
        }
        local_38 = puVar10;
        pvVar6 = _pthread_getspecific(pVar13);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0152aa70();
        iVar3 = FUN_00d237a0();
        if ((local_58 != '\0') && (local_60 != 0)) {
          FUN_00d50b20();
        }
        if (iVar3 != -1) {
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152abd0();
          pvVar6 = _pthread_getspecific(pVar13);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0152b730();
        }
        bVar19 = iVar2 == 0;
        iVar2 = iVar2 + -1;
        if (bVar19) break;
        lVar8 = *(int64_t *)(this_ptr + 0x48);
        lVar17 = lVar17 + 1;
        lVar18 = lVar7;
      }
    }
    cVar1 = (char)local_38;
    FUN_01528450();
  }
  else {
    cVar1 = (char)local_38;
  }
  if ((cVar1 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  return;
}

