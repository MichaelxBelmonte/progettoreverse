// Function: FUN_0142e110
// Address: 0142e110
// Size: 848 bytes
// Class: MUSpectrumShaper
// String references:
//   "MUSpectrumShaperDisplayInfo"
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


void FUN_0142e110(void)

{
  int64_t *plVar1;
  char cVar2;
  int64_t lVar3;
  int64_t **pplVar4;
  int iVar5;
  int64_t *this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  uint64_t local_68;
  int local_60;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  int local_40;
  int iStack_3c;
  int local_38;
  
  uVar6 = FUN_0123f8a0();
  local_90 = this_ptr[0x1d];
  if (local_90 != 0) {
    uVar6 = FUN_00d50b00();
  }
  local_88 = '\x01';
  uVar6 = (**(code **)(*this_ptr + 0x650))(uVar6,&local_90);
  plVar1 = local_58;
  if (local_50 == '\0') {
    if (((local_58 != (int64_t *)0x0) && (uVar6 = FUN_00d50b00(), local_50 != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      uVar6 = FUN_00d50b20();
    }
  }
  else {
    local_50 = '\0';
  }
  if ((local_88 != '\0') && (local_90 != 0)) {
    uVar6 = FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return;
  }
  local_50 = 0;
  local_58 = (int64_t *)0x0;
  local_48 = (int64_t)plVar1;
  local_40 = -1;
  iStack_3c = 0;
  local_38 = 0;
LAB_0142e1e3:
  do {
    do {
      iVar5 = iStack_3c;
      if (iStack_3c != 0) {
        if (iStack_3c < 1) {
          iStack_3c = -iStack_3c;
        }
        else {
          local_40 = local_40 - iStack_3c;
          uVar6 = FUN_00d23690(uVar6,iStack_3c);
          local_38 = local_38 + iVar5;
          iStack_3c = 0;
        }
      }
      lVar3 = (int64_t)local_40;
      local_40 = local_40 + 1;
      if (*(int *)(local_48 + 0xc) <= local_40) {
        FUN_01431fb0();
        FUN_00d50b20();
        return;
      }
      plVar1 = *(int64_t **)(*(int64_t *)(local_48 + 0x10) + 8 + lVar3 * 8);
      local_58 = plVar1;
      local_80 = plVar1;
      if ((g_027b2588 == '\0') &&
         (iVar5 = ___cxa_guard_acquire(), uVar6 = extraout_XMM0_Da_00, iVar5 != 0)) {
        g_027b24d8 = FUN_00d4fe50();
        g_027b24c0 = "MUSpectrumShaperDisplayInfo";
        g_027b24c8 = 0x20;
        g_027b24d0 = FUN_011b1f40;
        g_027b24e0 = 0;
        ram_00000000027b24e8 = 0;
        g_027b24f0 = 0;
        g_027b2568 = 0;
        ram_00000000027b2570 = 0;
        g_027b2578 = 0;
        g_027b257a = 1;
        g_027b24f8 = 0;
        ram_00000000027b2500 = 0;
        g_027b2508 = 0;
        ram_00000000027b2510 = 0;
        g_027b2518 = 0;
        ram_00000000027b2520 = 0;
        g_027b2528 = 0;
        ram_00000000027b2530 = 0;
        g_027b2538 = 0;
        ram_00000000027b2540 = 0;
        g_027b2548 = 0;
        ram_00000000027b2550 = 0;
        g_027b2558 = 0;
        ram_00000000027b2560 = 0;
        g_027b2583 = 0;
        g_027b257b = 0;
        uVar6 = ___cxa_guard_release();
      }
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_80;
        uVar6 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
    } while (*pplVar4 == (int64_t *)0x0);
    uVar6 = FUN_01414fe0();
    plVar1 = local_80;
    if (local_78 == '\0') goto LAB_0142e2a0;
  } while (local_80 == (int64_t *)0x0);
  goto LAB_0142e2d0;
LAB_0142e2a0:
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b00();
    if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0142e2d0:
    local_78 = '\0';
    local_80 = (int64_t *)0x0;
    local_70 = plVar1;
    local_68 = 0xffffffff;
    local_60 = 0;
    while( true ) {
      lVar3 = (int64_t)(int)local_68;
      iVar5 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,iVar5);
      if (*(int *)((int64_t)local_70 + 0xc) <= iVar5) break;
      local_80 = *(int64_t **)(local_70[2] + 8 + lVar3 * 8);
      FUN_014148f0();
      if (local_68._4_4_ != 0) {
        if (local_68._4_4_ < 1) {
          iVar5 = -local_68._4_4_;
        }
        else {
          local_68 = CONCAT44(local_68._4_4_,(int)local_68 - local_68._4_4_);
          FUN_00d23690();
          local_60 = local_60 + local_68._4_4_;
          iVar5 = 0;
        }
        local_68 = CONCAT44(iVar5,(int)local_68);
      }
    }
    FUN_012c2730();
    uVar6 = FUN_00d50b20();
  }
  goto LAB_0142e1e3;
}

