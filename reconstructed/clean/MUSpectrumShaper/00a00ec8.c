// Function: FUN_00a00ec8
// Address: 00a00ec8
// Size: 654 bytes
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


uint64_t FUN_00a00ec8(ulong param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  uint32_t uVar8;
  void*puVar9;
  void*puVar10;
  ulong uVar11;
  void *pvVar12;
  int64_t this_ptr;
  size_t sVar13;
  uint32_t uVar14;
  byte local_40;
  uint local_38;
  
  if (*(int *)(this_ptr + 0x68) == 1) {
    *(int64_t *)(this_ptr + 0x70) = *(int64_t *)(this_ptr + 0x70) + 1;
  }
  else if (*(int *)(this_ptr + 0x68) == 0) {
    puVar9 = operator_new(param_1);
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    *puVar9 = &g_0252c2f0;
    uVar11 = 1;
    sVar13 = 0;
    FUN_00a14fd8(1,0x400);
    puVar10 = operator_new(uVar11);
    puVar10[2] = 0;
    puVar10[1] = 0;
    *puVar10 = &g_0251fb50;
    puVar10[3] = puVar9;
    *(void**)(this_ptr + 0x50) = puVar9;
    plVar3 = *(int64_t **)(this_ptr + 0x58);
    *(void**)(this_ptr + 0x58) = puVar10;
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    uVar14 = *(void*)(this_ptr + 0x60);
    uVar8 = FUN_009e9b47();
    uVar7 = _UNK_023d4e7c;
    uVar6 = _UNK_023d4e78;
    uVar5 = _UNK_023d4e74;
    uVar4 = g_023d4e70;
    *(void*)(this_ptr + 0x7c) = 0x40;
    plVar3 = *(int64_t **)(this_ptr + 0x50);
    puVar10 = (void*)plVar3[3];
    puVar9 = puVar10 + 8;
    if ((void*)plVar3[4] < puVar9) {
      (**(code **)(*plVar3 + 0x80))(puVar9,0x40);
    }
    else {
      puVar10[7] = 0;
      puVar10[6] = 0;
      puVar10[5] = 0;
      puVar10[4] = CONCAT44(0x40,uVar14);
      puVar10[3] = 0x6b684354;
      puVar10[2] = CONCAT44(1,uVar7);
      puVar10[1] = CONCAT44(uVar6,uVar5);
      *puVar10 = CONCAT44(uVar4,uVar8);
      plVar3[3] = (int64_t)puVar9;
    }
    if (*(char *)(this_ptr + 100) == '\0') {
      *(void*)(this_ptr + 0x78) = 0;
    }
    else {
      FUN_0094c1c0();
      uVar14 = FUN_0097e92b();
      if ((local_40 & 1) == 0) {
        local_38 = (uint)(local_40 >> 1);
      }
      plVar3 = *(int64_t **)(this_ptr + 0x50);
      pvVar12 = (void *)(uint64_t)(local_38 + 1);
      lVar2 = plVar3[3];
      if ((uint64_t)plVar3[4] < (uint64_t)(lVar2 + (int64_t)pvVar12)) {
        (**(code **)(*plVar3 + 0x80))(uVar14,pvVar12);
      }
      else {
        _memcpy(puVar9,pvVar12,sVar13);
        plVar3[3] = lVar2 + (int64_t)pvVar12;
      }
      *(int *)(this_ptr + 0x78) = *(int *)(this_ptr + 0x7c);
      *(uint *)(this_ptr + 0x7c) = local_38 + 1 + *(int *)(this_ptr + 0x7c);
      if ((local_40 & 1) != 0) {
        operator_delete(puVar9);
      }
    }
    plVar3 = *(int64_t **)(this_ptr + 0x58);
    if (plVar3 == (int64_t *)0x0) {
      FUN_00a01188();
    }
    else {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
      FUN_00a01188();
      LOCK();
      plVar1 = plVar3 + 1;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (lVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
    *(int64_t *)(this_ptr + 0x70) = *(int64_t *)(this_ptr + 0x70) + 1;
    *(void*)(this_ptr + 0x68) = 1;
  }
  return 0;
}

