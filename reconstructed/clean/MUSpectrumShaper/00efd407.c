// Function: FUN_00efd407
// Address: 00efd407
// Size: 712 bytes
// Class: MUSpectrumShaper
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_00efd407(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint32_t uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint64_t uVar8;
  byte bVar9;
  uint64_t *arg1;
  uint uVar10;
  uint64_t *this_ptr;
  uint64_t uVar11;
  uint uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  bool bVar15;
  uint32_t local_res8;
  int local_res10;
  
  lVar1 = param_3 + param_4;
  uVar12 = *(uint *)(param_1 + 0x1c);
  bVar15 = *(int *)(param_1 + 0x60) != 1;
  uVar13 = 0xfffffe;
  if (local_res10 != 1) {
    uVar13 = 0xdffffffe;
  }
  if (1 < uVar12 - 1) {
    uVar13 = 0xdffffffe;
  }
  uVar14 = lVar1 - uVar13;
  if (param_4 <= uVar13) {
    uVar14 = param_3;
    uVar13 = param_4;
  }
  iVar5 = (int)lVar1;
  if (uVar13 == 0) {
    if (arg1 == (uint64_t *)0x0 || bVar15) goto LAB_00efd593;
  }
  else {
    if (*this_ptr == uVar14) {
      uVar8 = this_ptr[2];
      uVar11 = (uint64_t)(uint)this_ptr[3];
      uVar6 = *(uint *)((int64_t)this_ptr + 0x1c);
    }
    else {
      uVar8 = this_ptr[1];
      uVar11 = *this_ptr - uVar8;
      uVar6 = (uint)this_ptr[3];
      *(uint *)((int64_t)this_ptr + 0x1c) = uVar6;
      uVar10 = (uint)uVar11;
      *(uint *)(this_ptr + 3) = uVar10;
      this_ptr[2] = uVar8;
      this_ptr[1] = uVar14 - uVar11;
      if (uVar10 - uVar6 < 8) {
        *(uint *)((int64_t)this_ptr + 0x1c) = uVar10;
        uVar6 = uVar10;
      }
    }
    uVar2 = uVar14 + uVar13;
    *this_ptr = uVar2;
    if ((uVar6 + uVar8 < uVar2) && (uVar14 < uVar8 + (uVar11 & 0xffffffff))) {
      uVar4 = (uint32_t)(uVar2 - uVar8);
      if ((int64_t)(uVar11 & 0xffffffff) < (int64_t)(uVar2 - uVar8)) {
        uVar4 = (uint32_t)uVar11;
      }
      *(void*)((int64_t)this_ptr + 0x1c) = uVar4;
    }
    if (arg1 == (uint64_t *)0x0 || bVar15) goto LAB_00efd593;
    if (*arg1 == uVar14) {
      uVar8 = arg1[2];
      uVar12 = *(uint *)((int64_t)arg1 + 0x1c);
      uVar11 = (uint64_t)(uint)arg1[3];
    }
    else {
      uVar8 = arg1[1];
      uVar11 = *arg1 - uVar8;
      uVar12 = (uint)arg1[3];
      *(uint *)((int64_t)arg1 + 0x1c) = uVar12;
      uVar6 = (uint)uVar11;
      *(uint *)(arg1 + 3) = uVar6;
      arg1[2] = uVar8;
      arg1[1] = uVar14 - uVar11;
      if (uVar6 - uVar12 < 8) {
        *(uint *)((int64_t)arg1 + 0x1c) = uVar6;
        uVar12 = uVar6;
      }
    }
    *arg1 = uVar2;
    if ((uVar12 + uVar8 < uVar2) && (uVar14 < uVar8 + (uVar11 & 0xffffffff))) {
      uVar3 = uVar2 - uVar8;
      if ((int64_t)(uVar11 & 0xffffffff) < (int64_t)(uVar2 - uVar8)) {
        uVar3 = uVar11;
      }
      *(int *)((int64_t)arg1 + 0x1c) = (int)uVar3;
    }
  }
  iVar7 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = iVar5 - (int)arg1[1];
  }
  *(int *)(arg1 + 6) = iVar7;
  _ZSTD_ldm_fillHashTable(param_1 + 0x60,lVar1);
  uVar12 = *(uint *)(param_1 + 0x1c);
LAB_00efd593:
  if (uVar12 < 8) {
    uVar12 = *(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) < *(uint *)(param_1 + 0xc)) {
      uVar12 = *(uint *)(param_1 + 0xc);
    }
    bVar9 = 0x1c;
    if (uVar12 < 0x1c) {
      bVar9 = (byte)uVar12;
    }
    uVar8 = (uint64_t)(uint)(8 << (bVar9 & 0x1f));
    if (uVar8 < uVar13) {
      uVar13 = uVar8;
      uVar14 = lVar1 - uVar8;
    }
  }
  *(int *)((int64_t)this_ptr + 0x2c) = (int)uVar14 - (int)this_ptr[1];
  iVar7 = 0;
  if (*(int *)(param_1 + 0x30) == 0) {
    iVar7 = iVar5 - (int)this_ptr[1];
  }
  *(int *)(this_ptr + 5) = iVar7;
  *(void*)(this_ptr + 0x11) = *(void*)(param_1 + 0x94);
  if (8 < uVar13) {
    FUN_00efbaff(uVar14,param_1,lVar1);
    switch(*(void*)(param_1 + 0x1c)) {
    case 1:
      _ZSTD_fillHashTable(local_res10);
      break;
    case 2:
      _ZSTD_fillDoubleHashTable(local_res10);
      break;
    case 3:
    case 4:
    case 5:
      if (*(int *)((int64_t)this_ptr + 0x8c) == 0) {
        if (*(int *)(param_1 + 0x90) == 1) {
          ___bzero(CONCAT71(0xefd6,*(void*)(param_1 + 0xc)));
          _ZSTD_row_update();
        }
        else {
          _ZSTD_insertAndFindFirstIndex(&switchD_00efd634::switchdataD_00efd6d0,local_res8);
        }
      }
      else {
        _ZSTD_dedicatedDictSearch_lazy_loadDictionary();
      }
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      _ZSTD_updateTree(&switchD_00efd634::switchdataD_00efd6d0,lVar1);
    }
    *(int *)((int64_t)this_ptr + 0x2c) = iVar5 - (int)this_ptr[1];
  }
  return;
}

