// Function: FUN_008f2b3c
// Address: 008f2b3c
// Size: 1500 bytes
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


int FUN_008f2b3c(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int local_40;
  uint32_t local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar5 = this_ptr + 0x38;
  lVar6 = this_ptr + 0x30;
  lVar7 = this_ptr + 0x28;
  lVar8 = this_ptr + 0x20;
  lVar9 = this_ptr + 0x18;
  lVar10 = this_ptr + 0x14;
  lVar11 = this_ptr + 0x10;
  lVar12 = this_ptr + 0xc;
  lVar13 = this_ptr + 8;
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (&local_36,&local_40,param_3,param_4,lVar5,lVar6,lVar7,lVar8,lVar9,lVar10,
                       lVar11,lVar12,lVar13);
    iVar2 = iVar2 + iVar1;
    if (local_40 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1 + -1) {
    case 0:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x8a) = 1;
      break;
    case 1:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x8b) = 1;
      break;
    case 2:
      if (local_40 != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x8c) = 1;
      break;
    case 3:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x8d) = 1;
      break;
    case 4:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x8e) = 1;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
switchD_008f2c60_caseD_5:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008f30c4:
      iVar3 = iVar3 + iVar2;
      break;
    case 9:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x8f) = 1;
      break;
    case 10:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x90) = 1;
      break;
    case 0xb:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x91) = 1;
      break;
    case 0xc:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x92) = 1;
      break;
    case 0x13:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x93) = 1;
      break;
    case 0x14:
      if (local_40 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(uint *)(this_ptr + 0x48) = local_34;
      *(void*)(this_ptr + 0x94) = 1;
      break;
    case 0x15:
      if (local_40 != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x95) = 1;
      break;
    case 0x16:
      if (local_40 != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x96) = 1;
      break;
    case 0x1d:
      if (local_40 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008f30c4;
      }
      *(void*)(this_ptr + 0x78) = *(void*)(this_ptr + 0x70);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1 + -1,&local_34);
      FUN_008f31bc();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x138))();
          iVar1 = iVar1 + iVar2;
          *(void*)(*(int64_t *)(this_ptr + 0x70) + uVar4 * 4) = local_3c;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x97) = 1;
      break;
    default:
      if (iVar1 == 0x28) {
        if (local_40 != 2) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008f30c4;
        }
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x98) = 1;
      }
      else {
        if (iVar1 != 0x29) goto switchD_008f2c60_caseD_5;
        if (local_40 != 2) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008f30c4;
        }
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x99) = 1;
      }
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

