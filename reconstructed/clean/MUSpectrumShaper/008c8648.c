// Function: FUN_008c8648
// Address: 008c8648
// Size: 1007 bytes
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


int FUN_008c8648(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0x40;
  lVar8 = this_ptr + 0x38;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,uVar9,uVar10,uVar11);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar9 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0x14) {
      if (local_36 == 1) {
        if (local_48[0] != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c8935;
        }
        *(void*)(this_ptr + 0x10) = *(void*)(this_ptr + 8);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x10) - *(int64_t *)(this_ptr + 8);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x10) = *(int64_t *)(this_ptr + 8) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 100) = 1;
      }
      else if (local_36 == 2) {
        if (local_48[0] != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c8935;
        }
        *(void*)(this_ptr + 0x28) = *(void*)(this_ptr + 0x20);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x28) - *(int64_t *)(this_ptr + 0x20);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x28) = *(int64_t *)(this_ptr + 0x20) + uVar6;
        }
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          uVar5 = 0;
          do {
            iVar2 = (**(code **)(*arg1 + 0x128))();
            iVar1 = iVar1 + iVar2;
            uVar5 = uVar5 + 1;
          } while (uVar5 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0x65) = 1;
      }
      else {
        if (local_36 != 10) goto LAB_008c88c7;
        if (local_48[0] != 10) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c8935;
        }
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x66) = 1;
      }
    }
    else if (local_36 < 0x1f) {
      if (local_36 == 0x14) {
        if (local_48[0] == 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x150))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x67) = 1;
          goto LAB_008c893b;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 0x1e) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x68) = 1;
          goto LAB_008c893b;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008c88c7:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008c8935:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0x1f) {
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c8935;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x69) = 1;
    }
    else {
      if (local_36 != 0x20) goto LAB_008c88c7;
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c8935;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x6a) = 1;
    }
LAB_008c893b:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

