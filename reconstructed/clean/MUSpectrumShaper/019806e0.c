// Function: FUN_019806e0
// Address: 019806e0
// Size: 2921 bytes
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


void FUN_019806e0(uint32_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint8_t auVar3 [16];
  uint8_t auVar4 [16];
  uint8_t auVar5 [16];
  uint8_t auVar6 [16];
  int64_t *plVar7;
  int64_t *plVar8;
  char cVar9;
  void *pvVar10;
  void* pVar11;
  char *pcVar12;
  int64_t *this_ptr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  uint64_t uVar18;
  uint32_t extraout_XMM0_Dc;
  uint32_t extraout_XMM0_Dc_00;
  uint64_t extraout_XMM0_Qb;
  uint64_t extraout_XMM0_Qb_00;
  uint64_t extraout_XMM0_Qb_01;
  uint64_t extraout_XMM0_Qb_02;
  uint64_t extraout_XMM0_Qb_03;
  uint64_t extraout_XMM0_Qb_04;
  uint8_t auVar19 [16];
  uint8_t auVar20 [16];
  uint8_t auVar21 [16];
  uint64_t local_118;
  uint64_t uStack_110;
  float local_108;
  uint32_t uStack_100;
  uint8_t local_78 [8];
  uint32_t uStack_70;
  uint32_t uStack_6c;
  float local_68;
  int64_t local_58;
  char local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  if (*(char *)((int64_t)this_ptr + 0x194) != '\0') {
    *(void*)((int64_t)this_ptr + 0x194) = 0;
    FUN_0197f820();
    FUN_01981860();
  }
  FUN_019801c0();
  plVar7 = local_40;
  pVar11 = CONCAT31((int3)((uint)param_1 >> 8),local_38[0]);
  pcVar12 = local_48;
  if (local_38[0] != '\0') {
    pcVar12 = local_38;
  }
  local_48[0] = local_38[0];
  *pcVar12 = '\0';
  if ((local_38[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar7 != (int64_t *)0x0) {
    if ((char)this_ptr[0x31] == '\0') {
      FUN_01989f80();
      plVar1 = local_40;
      lVar2 = this_ptr[0x2e];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      cVar9 = (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *plVar1 + 0x20))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar9 == '\0') {
        if (*(char *)((int64_t)this_ptr + 0x189) != '\0') {
          *(void*)((int64_t)this_ptr + 0x189) = 0;
          *(void*)((int64_t)this_ptr + 0x194) = 1;
          (**(code **)(*this_ptr + 0x620))();
        }
      }
      else if (*(char *)((int64_t)this_ptr + 0x189) == '\0') {
        *(void*)((int64_t)this_ptr + 0x189) = 1;
        *(void*)((int64_t)this_ptr + 0x194) = 1;
        (**(code **)(*this_ptr + 0x620))();
      }
    }
    else {
      FUN_01989f80();
      plVar1 = local_40;
      lVar2 = this_ptr[0x2e];
      if (lVar2 != 0) {
        FUN_00d50b00();
      }
      cVar9 = (**(code **)(
                          "/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                          + *plVar1 + 0x18))();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar9 == '\0') {
        if (*(char *)((int64_t)this_ptr + 0x189) != '\0') {
          *(void*)((int64_t)this_ptr + 0x189) = 0;
          *(void*)((int64_t)this_ptr + 0x194) = 1;
          (**(code **)(*this_ptr + 0x620))();
        }
      }
      else if (*(char *)((int64_t)this_ptr + 0x189) == '\0') {
        *(void*)((int64_t)this_ptr + 0x189) = 1;
        *(void*)((int64_t)this_ptr + 0x194) = 1;
        (**(code **)(*this_ptr + 0x620))();
      }
    }
    if ((int)this_ptr[0x32] == 0) {
      FUN_019801c0();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (int64_t *)0x0) {
        FUN_0198a800();
      }
      (**(code **)(*plVar7 + 0x4d8))();
      (**(code **)(*this_ptr + 0x4d0))();
      goto LAB_01981223;
    }
  }
  if (this_ptr[0x2e] == 0) goto LAB_01981223;
  FUN_01989f80();
  plVar8 = local_40;
  plVar1 = this_ptr + 0x2e;
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  fVar13 = (float)(**(code **)(*plVar8 + 0xc38))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)this_ptr[0x31] == '\0') {
LAB_01980bcf:
    pvVar10 = _pthread_getspecific(pVar11);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012641c0();
    plVar8 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = fVar13;
    if (plVar8 == (int64_t *)0x0) goto LAB_01980d5b;
    FUN_01989f80();
    plVar8 = local_40;
    pvVar10 = _pthread_getspecific(pVar11);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012641c0();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    local_68 = (float)(**(code **)(*plVar8 + 0xc38))();
    if (local_58 != 0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_68 <= fVar13) goto LAB_01980d5b;
    local_118 = FUN_0198a7d0(fVar13 + g_0241b4d0);
    local_108 = (float)FUN_0198a7d0(local_68 + g_0241b4d4);
    uStack_110 = extraout_XMM0_Qb;
    uStack_100 = extraout_XMM0_Dc;
  }
  else {
    pvVar10 = _pthread_getspecific(pVar11);
    if (pvVar10 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01268710();
    plVar8 = local_40;
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 != (int64_t *)0x0) {
      FUN_01989f80();
      plVar8 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268710();
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      fVar14 = (float)(**(code **)(*plVar8 + 0xc38))();
      if (local_58 != 0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      fVar15 = (float)FUN_0198a7d0();
      fVar16 = (float)FUN_0198a7d0();
      if ((float)((uint)(fVar15 - fVar16) & g_02390140) < g_02390d30) {
        fVar13 = fVar14;
      }
    }
    local_68 = fVar13;
    if ((char)this_ptr[0x31] == '\0') goto LAB_01980bcf;
LAB_01980d5b:
    local_108 = (float)FUN_0198a7d0(fVar13 + g_0241b4d4);
    local_118 = FUN_0198a7d0(local_68 + g_0241b4d0);
    uStack_110 = extraout_XMM0_Qb_00;
    uStack_100 = extraout_XMM0_Dc_00;
  }
  local_78._4_4_ = local_108;
  local_78._0_4_ = local_108;
  uStack_70 = uStack_100;
  uStack_6c = uStack_100;
  if ((char)this_ptr[0x31] == '\0') {
    FUN_01989f80();
    plVar8 = local_40;
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    cVar9 = (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                        + *plVar8 + 0x20))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar9 == '\0') {
      FUN_01989f80();
      plVar1 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01259520();
      uVar18 = (**(code **)(*plVar1 + 0x938))();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar21._8_8_ = extraout_XMM0_Qb_04;
      auVar21._0_8_ = uVar18;
      _local_78 = blendps(_local_78,auVar21,1);
      if (*(char *)((int64_t)this_ptr + 0x189) != '\0') {
        *(void*)((int64_t)this_ptr + 0x189) = 0;
        *(void*)((int64_t)this_ptr + 0x194) = 1;
        (**(code **)(*this_ptr + 0x620))();
      }
    }
    else {
      FUN_01989f80();
      plVar1 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_01259520();
      FUN_01989f80();
      uVar18 = (**(code **)(*plVar1 + 0x938))(dVar17 + *(double *)(local_58 + 1000));
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar5._8_8_ = extraout_XMM0_Qb_02;
      auVar5._0_8_ = uVar18;
      _local_78 = blendps(_local_78,auVar5,1);
      if (*(char *)((int64_t)this_ptr + 0x189) != '\x01') {
        *(void*)((int64_t)this_ptr + 0x189) = 1;
        *(void*)((int64_t)this_ptr + 0x194) = 1;
        (**(code **)(*this_ptr + 0x620))();
      }
    }
  }
  else {
    FUN_01989f80();
    plVar8 = local_40;
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    cVar9 = (**(code **)("/System/Library/Frameworks/CoreGraphics.framework/Versions/A/CoreGraphics"
                        + *plVar8 + 0x18))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar9 == '\0') {
      FUN_01989f80();
      plVar1 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a280();
      uVar18 = (**(code **)(*plVar1 + 0x938))();
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar6._8_8_ = extraout_XMM0_Qb_03;
      auVar6._0_8_ = uVar18;
      _local_78 = blendps(_local_78,auVar6,1);
      if (*(char *)((int64_t)this_ptr + 0x189) != '\0') {
        *(void*)((int64_t)this_ptr + 0x189) = 0;
        *(void*)((int64_t)this_ptr + 0x194) = 1;
        (**(code **)(*this_ptr + 0x620))();
      }
    }
    else {
      FUN_01989f80();
      plVar1 = local_40;
      pvVar10 = _pthread_getspecific(pVar11);
      if (pvVar10 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar17 = (double)FUN_0125a280();
      FUN_01989f80();
      uVar18 = (**(code **)(*plVar1 + 0x938))(dVar17 + *(double *)(local_58 + 0x3d8));
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      auVar4._8_8_ = extraout_XMM0_Qb_01;
      auVar4._0_8_ = uVar18;
      _local_78 = blendps(_local_78,auVar4,1);
      if (*(char *)((int64_t)this_ptr + 0x189) != '\x01') {
        *(void*)((int64_t)this_ptr + 0x189) = 1;
        *(void*)((int64_t)this_ptr + 0x194) = 1;
        (**(code **)(*this_ptr + 0x620))();
      }
    }
  }
  auVar3._8_8_ = uStack_110;
  auVar3._0_8_ = local_118;
  auVar19._4_12_ = auVar3._4_12_;
  auVar19._0_4_ = (float)local_118 - local_108;
  auVar21 = insertps(g_0241b4c0,auVar19,0x10);
  auVar20._4_12_ = local_78._4_12_;
  auVar20._0_4_ = local_78._0_4_ + g_023b1614;
  FUN_00d051c0(auVar20._0_8_,auVar21._0_8_);
  (**(code **)(*this_ptr + 0x4d0))();
LAB_01981223:
  if ((local_48[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

