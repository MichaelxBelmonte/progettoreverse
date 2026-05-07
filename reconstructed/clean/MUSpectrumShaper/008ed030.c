// Function: FUN_008ed030
// Address: 008ed030
// Size: 990 bytes
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


int FUN_008ed030(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar7;
  int local_4c;
  short local_3a [3];
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(local_3a,&local_4c);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_3a[0]) {
    case 1:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      lVar5 = *(int64_t *)(this_ptr + 8);
      uVar7 = extraout_XMM0_Da;
      for (lVar4 = *(int64_t *)(this_ptr + 0x10); lVar4 != lVar5; lVar4 = lVar4 + -0x90) {
        uVar7 = (***(void**)(lVar4 + -0x90))();
      }
      *(int64_t *)(this_ptr + 0x10) = lVar5;
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
      FUN_008ed458();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 8) + lVar5) + 0x10))();
          iVar1 = iVar1 + iVar2;
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x90;
        } while (uVar6 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x68) = 1;
      goto LAB_008ed3c3;
    case 2:
      if (local_4c == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x20);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x28); lVar4 != lVar5; lVar4 = lVar4 + -0x60) {
          uVar7 = (***(void**)(lVar4 + -0x60))();
        }
        *(int64_t *)(this_ptr + 0x28) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_008ed4d4();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x20) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x60;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x69) = 1;
        goto LAB_008ed3c3;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_4c == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x38);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x40); lVar4 != lVar5; lVar4 = lVar4 + -0x58) {
          uVar7 = (***(void**)(lVar4 + -0x58))();
        }
        *(int64_t *)(this_ptr + 0x40) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_008ed54a();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x38) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x58;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x6a) = 1;
        goto LAB_008ed3c3;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_4c == 0xf) {
        lVar5 = *(int64_t *)(this_ptr + 0x50);
        uVar7 = extraout_XMM0_Da;
        for (lVar4 = *(int64_t *)(this_ptr + 0x58); lVar4 != lVar5; lVar4 = lVar4 + -0x88) {
          uVar7 = (***(void**)(lVar4 + -0x88))();
        }
        *(int64_t *)(this_ptr + 0x58) = lVar5;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
        FUN_008ed5bc();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar5 = 0;
          uVar6 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x50) + lVar5) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar6 = uVar6 + 1;
            lVar5 = lVar5 + 0x88;
          } while (uVar6 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x6b) = 1;
        goto LAB_008ed3c3;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008ed3c3:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

