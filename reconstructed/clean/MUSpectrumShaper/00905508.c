// Function: FUN_00905508
// Address: 00905508
// Size: 612 bytes
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


int FUN_00905508(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x20;
  lVar7 = this_ptr + 8;
  do {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (&local_32,&local_38,param_3,param_4,lVar6,lVar7,uVar8,uVar9,uVar10);
    if (local_38 == 0) {
      iVar3 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar8 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    if (local_32 < 0xb) {
      if (local_32 == 1) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(void*)(this_ptr + 0x6a) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else if (local_32 == 2) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(void*)(this_ptr + 0x6b) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else if (local_32 == 3) {
        if (local_38 == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          *(void*)(this_ptr + 0x6c) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
      else {
LAB_009056bc:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else if (local_32 == 0xb) {
      if (local_38 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x6d) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else if (local_32 == 0x15) {
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x6e) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    else {
      if (local_32 != 0x16) goto LAB_009056bc;
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x6f) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}

