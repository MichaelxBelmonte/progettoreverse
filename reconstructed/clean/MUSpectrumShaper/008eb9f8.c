// Function: FUN_008eb9f8
// Address: 008eb9f8
// Size: 1670 bytes
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


int FUN_008eb9f8(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  uint64_t uVar19;
  int local_4c [2];
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0x71;
  lVar8 = this_ptr + 0x70;
  lVar9 = this_ptr + 0x6c;
  lVar10 = this_ptr + 100;
  lVar11 = this_ptr + 0x5c;
  lVar12 = this_ptr + 0x58;
  lVar13 = this_ptr + 0x40;
  lVar14 = this_ptr + 0x28;
  lVar15 = this_ptr + 0x10;
  lVar16 = this_ptr + 8;
  do {
    psVar4 = &local_42;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_4c,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,lVar13
                       ,lVar14,lVar15,lVar16,uVar17,uVar18,uVar19);
    iVar2 = iVar2 + iVar1;
    if (local_4c[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar17 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_42) {
    case 1:
      if (local_4c[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x75) = 1;
      goto LAB_008ebf2e;
    case 2:
      if (local_4c[0] == 0xf) {
        *(void*)(this_ptr + 0x18) = *(void*)(this_ptr + 0x10);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x18) - *(int64_t *)(this_ptr + 0x10);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x18) = *(int64_t *)(this_ptr + 0x10) + uVar6;
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
        *(void*)(this_ptr + 0x76) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_4c[0] == 0xf) {
        *(void*)(this_ptr + 0x30) = *(void*)(this_ptr + 0x28);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x30) - *(int64_t *)(this_ptr + 0x28);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x30) = *(int64_t *)(this_ptr + 0x28) + uVar6;
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
        *(void*)(this_ptr + 0x77) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_4c[0] == 0xf) {
        *(void*)(this_ptr + 0x48) = *(void*)(this_ptr + 0x40);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008ebb07::switchdataD_008ec0b8,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x48) - *(int64_t *)(this_ptr + 0x40);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x48) = *(int64_t *)(this_ptr + 0x40) + uVar6;
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
        *(void*)(this_ptr + 0x78) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x79) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x7a) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x60) = local_34;
        *(void*)(this_ptr + 0x7b) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x7c) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1a:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0x68) = local_34;
        *(void*)(this_ptr + 0x7d) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1b:
      if (local_4c[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x7e) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x7f) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1f:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x80) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x20:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x81) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x21:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x82) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x22:
      if (local_4c[0] == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x83) = 1;
        goto LAB_008ebf2e;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008ebf2e:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

