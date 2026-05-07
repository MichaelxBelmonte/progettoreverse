// Function: FUN_0090f500
// Address: 0090f500
// Size: 923 bytes
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


int FUN_0090f500(void)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int64_t *arg1;
  uint64_t uVar9;
  int64_t this_ptr;
  uint32_t uVar10;
  int local_54;
  int64_t *local_50;
  short local_3a;
  uint local_38;
  uint local_34;
  
  FUN_0088d1d0();
  iVar4 = (**(code **)(*arg1 + 200))();
  local_50 = (int64_t *)(this_ptr + 0x70);
  do {
    iVar5 = (**(code **)(*arg1 + 0xd8))(&local_3a,&local_54);
    iVar5 = iVar5 + iVar4;
    if (local_54 == 0) {
      iVar4 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar4 + iVar5;
    }
    switch((int)local_3a) {
    case 1:
      if (local_54 != 8) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = (**(code **)(*arg1 + 0x138))();
      iVar6 = iVar6 + iVar5;
      *(uint *)(this_ptr + 8) = local_34;
      *(void*)(this_ptr + 0x88) = 1;
      break;
    case 2:
      if (local_54 != 8) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = (**(code **)(*arg1 + 0x138))();
      iVar6 = iVar6 + iVar5;
      *(uint *)(this_ptr + 0xc) = local_34;
      *(void*)(this_ptr + 0x89) = 1;
      break;
    case 3:
      if (local_54 != 8) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = (**(code **)(*arg1 + 0x138))();
      iVar6 = iVar6 + iVar5;
      *(uint *)(this_ptr + 0x10) = local_34;
      *(void*)(this_ptr + 0x8a) = 1;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
switchD_0090f59e_caseD_4:
      iVar6 = (**(code **)(*arg1 + 0x160))();
LAB_0090f830:
      iVar6 = iVar6 + iVar5;
      break;
    case 0xb:
      if (local_54 != 0xc) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = FUN_008d782a();
      iVar6 = iVar6 + iVar5;
      *(void*)(this_ptr + 0x8b) = 1;
      break;
    case 0xc:
      if (local_54 != 8) {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        goto LAB_0090f830;
      }
      iVar6 = (**(code **)(*arg1 + 0x138))();
      iVar6 = iVar6 + iVar5;
      *(void*)(this_ptr + 0x8c) = 1;
      break;
    default:
      if (local_3a != 0x15) goto switchD_0090f59e_caseD_4;
      if (local_54 == 0xf) {
        uVar10 = FUN_0091c338();
        iVar4 = (**(code **)(*arg1 + 0xf8))(uVar10,&local_34);
        FUN_0090f900();
        iVar4 = iVar4 + iVar5;
        if (local_34 != 0) {
          uVar8 = 0;
          do {
            uVar1 = *(void*)(*local_50 + uVar8 * 0x18);
            *(void*)(*local_50 + 8 + uVar8 * 0x18) = uVar1;
            iVar5 = (**(code **)(*arg1 + 0xf8))(uVar1,&local_38);
            lVar2 = *local_50;
            uVar9 = (uint64_t)local_38;
            lVar3 = *(int64_t *)(lVar2 + uVar8 * 0x18);
            uVar7 = *(int64_t *)(lVar2 + 8 + uVar8 * 0x18) - lVar3;
            if (uVar7 < uVar9) {
              FUN_0088d550();
            }
            else if (uVar9 < uVar7) {
              *(uint64_t *)(lVar2 + 8 + uVar8 * 0x18) = lVar3 + uVar9;
            }
            iVar5 = iVar5 + iVar4;
            if (local_38 != 0) {
              uVar7 = 0;
              do {
                iVar4 = (**(code **)(*arg1 + 0x128))();
                iVar5 = iVar5 + iVar4;
                uVar7 = uVar7 + 1;
              } while (uVar7 < local_38);
            }
            iVar4 = (**(code **)(*arg1 + 0x100))();
            iVar4 = iVar4 + iVar5;
            uVar8 = uVar8 + 1;
          } while (uVar8 < local_34);
        }
        iVar6 = (**(code **)(*arg1 + 0x100))();
        iVar6 = iVar6 + iVar4;
        *(void*)(this_ptr + 0x8d) = 1;
      }
      else {
        iVar6 = (**(code **)(*arg1 + 0x160))();
        iVar6 = iVar6 + iVar5;
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar4 = iVar4 + iVar6;
  } while( true );
}

