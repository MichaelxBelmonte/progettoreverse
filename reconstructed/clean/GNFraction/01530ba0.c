// Function: FUN_01530ba0
// Address: 01530ba0
// Size: 2269 bytes
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


void FUN_01530ba0(int64_t *param_1,int64_t param_2)

{
  uint uVar1;
  int64_t lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  void *pvVar9;
  int64_t *plVar10;
  void* pVar11;
  int iVar12;
  int64_t *plVar13;
  uint64_t uVar14;
  int64_t *this_ptr;
  uint64_t uVar15;
  int64_t lVar16;
  float fVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  uint8_t auVar23 [16];
  float fVar24;
  float fVar25;
  double dVar26;
  uint8_t in_XMM2 [16];
  uint8_t auVar27 [16];
  float fVar28;
  uint32_t local_90;
  uint32_t uStack_8c;
  char local_88;
  int64_t *local_60;
  char local_58;
  int64_t *local_48;
  
  plVar13 = param_1;
  FUN_012dde10();
  pVar11 = (void*)plVar13;
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01530c00;
    }
LAB_01530c7c:
    bVar6 = true;
  }
  else {
    if (local_60 == (int64_t *)0x0) goto LAB_01530c7c;
LAB_01530c00:
    pvVar9 = _pthread_getspecific((void*)plVar13);
    if ((pvVar9 == (void *)0x0) || (lVar16 = FUN_00e8b990(), lVar16 == 0)) {
      cVar7 = *(char *)((int64_t)local_60 + 0x4c);
    }
    else {
      cVar7 = *(char *)(local_60[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4] + 0x4c);
      plVar13 = local_60;
    }
    if (cVar7 == '\0') goto LAB_01531484;
    pvVar9 = _pthread_getspecific((void*)plVar13);
    plVar10 = local_60;
    if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
      plVar10 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
      plVar13 = local_60;
    }
    pVar11 = (void*)plVar13;
    if ((*(float *)(plVar10 + 9) == 0.0) && (!NAN(*(float *)(plVar10 + 9)))) goto LAB_01531484;
    bVar6 = false;
  }
  (**(code **)(*this_ptr + 0x5d0))();
  if (local_58 == '\0') {
    if (local_60 != (int64_t *)0x0) {
      FUN_00d50b00();
      goto LAB_01530cee;
    }
LAB_01530db2:
    bVar3 = false;
    bVar5 = true;
joined_r0x01530f6f:
    bVar4 = true;
  }
  else {
    if (local_60 == (int64_t *)0x0) goto LAB_01530db2;
LAB_01530cee:
    FUN_012d2570();
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    bVar4 = true;
    if (local_60 != (int64_t *)0x0) {
      FUN_012d2570();
      pvVar9 = _pthread_getspecific(pVar11);
      if (pvVar9 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012caf10();
      local_48 = local_60;
      plVar13 = local_60;
      if (local_60 == (int64_t *)0x0) {
        local_48 = (int64_t *)0x0;
        bVar3 = false;
      }
      else if (local_58 == '\0') {
        FUN_00d50b00();
        bVar3 = true;
      }
      else {
        bVar3 = true;
      }
      if ((local_88 != '\0') && (CONCAT44(uStack_8c,local_90) != 0)) {
        FUN_00d50b20();
      }
      if (local_48 != (int64_t *)0x0) {
        *(void*)((int64_t)this_ptr + 0xfc) = 0xffffffff;
        uVar18 = (**(code **)(*this_ptr + 0x5e0))();
        uVar19 = (**(code **)(*this_ptr + 0x5f0))();
        pvVar9 = _pthread_getspecific((void*)plVar13);
        if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          plVar13 = local_48;
        }
        dVar22 = (double)FUN_016cb850(uVar18);
        pvVar9 = _pthread_getspecific((void*)plVar13);
        if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
          plVar13 = local_48;
        }
        dVar20 = (double)FUN_016cb850(uVar19);
        cVar7 = (**(code **)(*local_60 + 0x5e8))();
        if (cVar7 == '\0') {
LAB_0153100f:
          iVar12 = *(int *)((int64_t)this_ptr + 0xfc);
LAB_01531015:
          if (iVar12 != -1) goto LAB_0153101e;
        }
        else {
          pvVar9 = _pthread_getspecific((void*)plVar13);
          if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar13 = local_60;
          }
          FUN_00e7c4f0();
          dVar21 = (double)FUN_00e7c860();
          auVar27._0_8_ = dVar22 * dVar21;
          auVar27._8_8_ = 0;
          auVar27 = roundsd(in_XMM2,auVar27,9);
          dVar26 = auVar27._0_8_ / dVar21;
          if ((dVar26 != dVar22) || (NAN(dVar26) || NAN(dVar22))) {
            auVar23._0_8_ = dVar20 * dVar21;
            auVar23._8_8_ = 0;
            auVar27 = roundsd(auVar23,auVar23,9);
            dVar21 = auVar27._0_8_ / dVar21;
            if ((dVar26 == dVar21) && (!NAN(dVar26) && !NAN(dVar21))) goto LAB_0153100f;
            iVar12 = (int)((double)(int)param_1 * ((dVar21 - dVar22) / (dVar20 - dVar22)));
            *(int *)((int64_t)this_ptr + 0xfc) = iVar12;
            goto LAB_01531015;
          }
          *(void*)((int64_t)this_ptr + 0xfc) = 0;
LAB_0153101e:
          pvVar9 = _pthread_getspecific((void*)plVar13);
          if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar13 = local_48;
          }
          pvVar9 = _pthread_getspecific((void*)plVar13);
          if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
            plVar13 = local_60;
          }
          FUN_00e7cd00(dVar20);
          cVar7 = FUN_016cade0();
          if (cVar7 == '\0') {
            pvVar9 = _pthread_getspecific((void*)plVar13);
            plVar10 = local_60;
            if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar10 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
              plVar13 = local_60;
            }
            *(float *)(this_ptr + 0x1f) = *(float *)(plVar10 + 9) * g_0239011c;
            pvVar9 = _pthread_getspecific((void*)plVar13);
            if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              local_60 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            }
            fVar17 = *(float *)(local_60 + 0xd);
          }
          else {
            pvVar9 = _pthread_getspecific((void*)plVar13);
            plVar10 = local_60;
            if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              plVar10 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
              plVar13 = local_60;
            }
            *(int *)(this_ptr + 0x1f) = (int)plVar10[9];
            pvVar9 = _pthread_getspecific((void*)plVar13);
            if ((pvVar9 != (void *)0x0) && (lVar16 = FUN_00e8b990(), lVar16 != 0)) {
              local_60 = (int64_t *)local_60[(uint64_t)(*(uint *)(lVar16 + 0x154) & 1) + 4];
            }
            fVar17 = *(float *)(local_60 + 0xd) * g_02394298 * g_0239011c;
          }
          *(float *)((int64_t)this_ptr + 0xf4) = fVar17;
        }
        bVar4 = false;
        bVar5 = false;
        goto joined_r0x01530def;
      }
      bVar5 = false;
      goto joined_r0x01530f6f;
    }
    bVar3 = false;
    bVar5 = false;
  }
joined_r0x01530def:
  if (0 < (int)param_1) {
    uVar15 = 0;
    do {
      if (uVar15 == *(uint *)((int64_t)this_ptr + 0xfc)) {
        dVar22 = (double)FUN_00b335d0();
        dVar22 = dVar22 * g_0240ed20;
        iVar12 = (int)dVar22;
        *(int *)(this_ptr + 0x1d) = iVar12;
        *(float *)((int64_t)this_ptr + 0xec) = g_02390124 / (float)(int)dVar22;
        *(void*)(this_ptr + 0x1e) = 0;
      }
      else {
        iVar12 = (int)this_ptr[0x1d];
      }
      if (iVar12 != 0) {
        fVar28 = (float)iVar12 * *(float *)((int64_t)this_ptr + 0xec);
        fVar17 = *(float *)(this_ptr + 0x1e);
        if (g_0239426c <= fVar17) {
          if (g_023b3888 <= fVar17) {
            fVar24 = fVar17 + g_0240e354 + fVar17 + g_0240e354 + g_02390d00;
          }
          else {
            fVar24 = g_02390124 - (fVar17 + g_0241b63c + fVar17 + g_0241b63c);
          }
        }
        else {
          fVar24 = fVar17 + fVar17;
        }
        fVar25 = g_02390124 - fVar28 * fVar28;
        fVar17 = (float)_sinf(fVar17 * g_02394278);
        fVar17 = (fVar17 * fVar25 + fVar24 * fVar28 * fVar28) * fVar28 *
                 *(float *)(this_ptr + 0x1f);
        lVar16 = this_ptr[0x20];
        if (lVar16 == 0) {
          for (lVar16 = 0; iVar12 = FUN_00b33120(), lVar16 < iVar12; lVar16 = lVar16 + 1) {
            lVar2 = *(int64_t *)(param_2 + lVar16 * 8);
            *(float *)(lVar2 + uVar15 * 4) = *(float *)(lVar2 + uVar15 * 4) + fVar17;
          }
        }
        else {
          uVar1 = *(uint *)(lVar16 + 0x18);
          uVar8 = uVar1 + 3;
          if (-1 < (int)uVar1) {
            uVar8 = uVar1;
          }
          if (3 < (int)uVar1) {
            lVar16 = *(int64_t *)(lVar16 + 0x10);
            uVar14 = 0;
            if ((uVar1 & 0xfffffffc) != 4) {
              uVar14 = 0;
              do {
                lVar2 = *(int64_t *)(param_2 + (int64_t)*(int *)(lVar16 + uVar14 * 4) * 8);
                *(float *)(lVar2 + uVar15 * 4) = *(float *)(lVar2 + uVar15 * 4) + fVar17;
                lVar2 = *(int64_t *)(param_2 + (int64_t)*(int *)(lVar16 + 4 + uVar14 * 4) * 8);
                *(float *)(lVar2 + uVar15 * 4) = *(float *)(lVar2 + uVar15 * 4) + fVar17;
                uVar14 = uVar14 + 2;
              } while (((int)uVar8 >> 2 & 0xfffffffeU) != (uint)uVar14);
            }
            if (((int)uVar8 >> 2 & 1U) != 0) {
              lVar16 = *(int64_t *)
                        (param_2 + (int64_t)*(int *)(lVar16 + (uVar14 & 0xffffffff) * 4) * 8);
              *(float *)(lVar16 + uVar15 * 4) = fVar17 + *(float *)(lVar16 + uVar15 * 4);
            }
          }
        }
        fVar17 = *(float *)((int64_t)this_ptr + 0xf4);
        dVar22 = (double)FUN_00b335e0();
        fVar17 = (float)(dVar22 * (double)fVar17) + *(float *)(this_ptr + 0x1e);
        *(uint *)(this_ptr + 0x1e) = ~-(uint)(g_02390124 < fVar17) & (uint)fVar17;
        *(int *)(this_ptr + 0x1d) = (int)this_ptr[0x1d] + -1;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != ((uint64_t)param_1 & 0xffffffff));
  }
  if (bVar3 && !bVar4) {
    FUN_00d50b20();
  }
  if (!bVar5) {
    FUN_00d50b20();
  }
  if (bVar6) {
    return;
  }
LAB_01531484:
  FUN_00d50b20();
  return;
}

