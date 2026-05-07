// Function: FUN_00a9639e
// Address: 00a9639e
// Size: 1599 bytes
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


int FUN_00a9639e(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  int local_3c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this_ptr + 0x70;
  lVar10 = this_ptr + 0x58;
  lVar11 = this_ptr + 0x50;
  lVar12 = this_ptr + 0x4c;
  lVar13 = this_ptr + 0x48;
  lVar14 = this_ptr + 0x44;
  lVar15 = this_ptr + 0x40;
  lVar16 = this_ptr + 0x3c;
  lVar17 = this_ptr + 0x38;
  lVar18 = this_ptr + 0x34;
  lVar19 = this_ptr + 0x30;
  lVar20 = this_ptr + 0x2c;
  lVar21 = this_ptr + 0x28;
  lVar22 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_3c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,uVar23,uVar24,uVar25)
    ;
    iVar2 = iVar2 + iVar1;
    if (local_3c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar23 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_3c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00aa9ade();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xc0) = 1;
      goto LAB_00a9698f;
    case 2:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xc1) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xc2) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xc3) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xc4) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xc5) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xc6) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x10:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 199) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x11:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 200) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x12:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xc9) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x13:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xca) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xcb) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xcc) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xcd) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xce) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xcf) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x19:
      if (local_3c == 0xf) {
        lVar6 = *(int64_t *)(this_ptr + 0xa8);
        uVar8 = extraout_XMM0_Da;
        for (lVar5 = *(int64_t *)(this_ptr + 0xb0); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
          uVar8 = (***(void**)(lVar5 + -0x20))();
        }
        *(int64_t *)(this_ptr + 0xb0) = lVar6;
        iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
        FUN_00a63e90();
        iVar1 = iVar1 + iVar2;
        if (local_34 != 0) {
          lVar6 = 0;
          uVar7 = 0;
          do {
            iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0xa8) + lVar6) + 0x10))();
            iVar1 = iVar1 + iVar2;
            uVar7 = uVar7 + 1;
            lVar6 = lVar6 + 0x20;
          } while (uVar7 < local_34);
        }
        iVar3 = (**(code **)(*arg1 + 0x100))();
        iVar3 = iVar3 + iVar1;
        *(void*)(this_ptr + 0xd0) = 1;
        goto LAB_00a9698f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_00a9698f:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

