// Function: FUN_009cf554
// Address: 009cf554
// Size: 616 bytes
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


uint64_t FUN_009cf554(dword *param_1,uint64_t param_2,size_t param_3,FILE *param_4)

{
  void*puVar1;
  int64_t lVar2;
  size_t sVar3;
  int iVar4;
  byte *pbVar5;
  uint32_t extraout_var;
  uint32_t extraout_var_00;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lVar9;
  byte *pbVar10;
  void*puVar11;
  int64_t this_ptr;
  void*puVar12;
  dword *pdVar13;
  bool bVar14;
  byte *local_38;
  uint8_t local_29;
  
  if (*(int64_t *)(this_ptr + 0x78) == 0) {
    return 0xffffffff;
  }
  if ((*(byte *)(this_ptr + 0x18c) & 8) == 0) {
    *(void*)(this_ptr + 0x28) = 0;
    *(void*)(this_ptr + 0x30) = 0;
    *(void*)(this_ptr + 0x38) = 0;
    bVar14 = *(char *)(this_ptr + 0x192) == '\0';
    lVar9 = 0x40;
    if (bVar14) {
      lVar9 = 0x68;
    }
    param_1 = *(dword **)(this_ptr + lVar9);
    pbVar10 = (byte *)((int64_t)param_1 +
                      *(int64_t *)((uint64_t)bVar14 * 0x10 + 0x60 + this_ptr));
    *(dword **)(this_ptr + 0x10) = param_1;
    *(byte **)(this_ptr + 0x18) = pbVar10;
    *(byte **)(this_ptr + 0x20) = pbVar10;
    *(void*)(this_ptr + 0x18c) = 8;
    bVar14 = true;
  }
  else {
    pbVar10 = *(byte **)(this_ptr + 0x18);
    bVar14 = false;
  }
  if (pbVar10 == (byte *)0x0) {
    pbVar10 = &stack0xffffffffffffffd8;
    param_1 = (dword *)&local_29;
    *(dword **)(this_ptr + 0x10) = param_1;
    *(byte **)(this_ptr + 0x18) = pbVar10;
    *(byte **)(this_ptr + 0x20) = pbVar10;
  }
  if (bVar14) {
    pbVar5 = *(byte **)(this_ptr + 0x20);
    pdVar13 = (dword *)0x0;
  }
  else {
    pbVar5 = *(byte **)(this_ptr + 0x20);
    pdVar13 = (dword *)(((int64_t)pbVar5 - *(int64_t *)(this_ptr + 0x10)) / 2);
    param_1 = &MACH_HEADER.cputype;
    if ((void*)((int64_t)&MACH_HEADER.magic + 3) < pdVar13) {
      pdVar13 = &MACH_HEADER.cputype;
    }
  }
  if (pbVar10 != pbVar5) {
    uVar6 = (uint64_t)*pbVar10;
    goto LAB_009cf78e;
  }
  _memmove(param_1,pdVar13,param_3);
  if (*(char *)(this_ptr + 0x192) == '\0') {
    lVar9 = *(int64_t *)(this_ptr + 0x48);
    lVar7 = *(int64_t *)(this_ptr + 0x50);
    if ((void *)(lVar7 - lVar9) != (void *)0x0) {
      _memmove(param_1,(void *)(lVar7 - lVar9),param_3);
      lVar9 = *(int64_t *)(this_ptr + 0x48);
      lVar7 = *(int64_t *)(this_ptr + 0x50);
    }
    lVar2 = *(int64_t *)(this_ptr + 0x40);
    lVar9 = (lVar7 - lVar9) + lVar2;
    *(int64_t *)(this_ptr + 0x48) = lVar9;
    if (lVar2 == this_ptr + 0x58) {
      lVar7 = 8;
    }
    else {
      lVar7 = *(int64_t *)(this_ptr + 0x60);
    }
    *(int64_t *)(this_ptr + 0x50) = lVar2 + lVar7;
    uVar8 = *(int64_t *)(this_ptr + 0x70) - (int64_t)pdVar13;
    uVar6 = (lVar2 + lVar7) - lVar9;
    if (uVar8 <= uVar6) {
      uVar6 = uVar8;
    }
    puVar11 = (void*)(this_ptr + 0x88);
    puVar12 = (void*)(this_ptr + 0x108);
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar12 = puVar12 + 1;
    }
    sVar3 = _fread(*(void **)(this_ptr + 0x78),(size_t)uVar6,param_3,param_4);
    if (CONCAT44(extraout_var_00,sVar3) != 0) {
      if (*(int64_t **)(this_ptr + 0x80) == (int64_t *)0x0) {
        FUN_009cf810();
        uVar6 = 0xffffffff;
        if (((section_00000068.segname._0_8_ != 0) &&
            ((uint64_t)MACH_HEADER._16_8_ < (uint64_t)MACH_HEADER._24_8_)) &&
           ((((byte)section_00000158.offset & 0x10) != 0 ||
            (*(char *)(MACH_HEADER._24_8_ + -1) == '\x01')))) {
          puVar1 = (void*)(MACH_HEADER._24_8_ + -1);
          MACH_HEADER._24_8_ = MACH_HEADER._24_8_ + -1;
          *puVar1 = 1;
          uVar6 = 1;
        }
        return uVar6;
      }
      lVar9 = CONCAT44(extraout_var_00,sVar3) + *(int64_t *)(this_ptr + 0x48);
      *(int64_t *)(this_ptr + 0x50) = lVar9;
      iVar4 = (**(code **)(**(int64_t **)(this_ptr + 0x80) + 0x20))
                        (lVar9,*(void*)(this_ptr + 0x40),this_ptr + 0x48,
                         (void*)(*(int64_t *)(this_ptr + 0x10) + (int64_t)pdVar13));
      if (iVar4 == 3) {
        pbVar10 = *(byte **)(this_ptr + 0x40);
        local_38 = *(byte **)(this_ptr + 0x50);
        *(byte **)(this_ptr + 0x10) = pbVar10;
      }
      else {
        pbVar10 = (byte *)((int64_t)pdVar13 + *(int64_t *)(this_ptr + 0x10));
        if (local_38 == pbVar10) goto LAB_009cf789;
      }
      *(byte **)(this_ptr + 0x18) = pbVar10;
      *(byte **)(this_ptr + 0x20) = local_38;
      uVar6 = (uint64_t)*pbVar10;
      goto LAB_009cf78e;
    }
  }
  else {
    sVar3 = _fread(*(void **)(this_ptr + 0x78),
                   ((int)*(void*)(this_ptr + 0x20) - (int)pdVar13) -
                   (int)*(void*)(this_ptr + 0x10),param_3,param_4);
    if (CONCAT44(extraout_var,sVar3) != 0) {
      puVar1 = (void*)(*(int64_t *)(this_ptr + 0x10) + (int64_t)pdVar13);
      *(void**)(this_ptr + 0x18) = puVar1;
      *(void**)(this_ptr + 0x20) = puVar1 + CONCAT44(extraout_var,sVar3);
      uVar6 = (uint64_t)*(byte *)(*(int64_t *)(this_ptr + 0x10) + (int64_t)pdVar13);
      goto LAB_009cf78e;
    }
  }
LAB_009cf789:
  uVar6 = 0xffffffff;
LAB_009cf78e:
  if (*(void**)(this_ptr + 0x10) == &local_29) {
    *(void*)(this_ptr + 0x20) = 0;
    *(void*)(this_ptr + 0x18) = 0;
    *(void*)(this_ptr + 0x10) = 0;
  }
  return uVar6;
}

