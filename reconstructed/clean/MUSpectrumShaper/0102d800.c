// Function: FUN_0102d800
// Address: 0102d800
// Size: 680 bytes
// Class: MUSpectrumShaper
// String references:
//   "crypto/evp/e_chacha20_poly1305.c"
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


uint64_t FUN_0102d800(void*param_1,uint param_2,size_t param_3,char *param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint uVar3;
  int func;
  int unaff_EBP;
  uint unaff_ESI;
  int64_t this_ptr;
  int reason;
  uint32_t uVar4;
  
  if (0x25 < unaff_ESI) {
switchD_0102d836_caseD_17:
    return 0xffffffff;
  }
  lVar2 = *(int64_t *)(this_ptr + 0x78);
  uVar1 = 1;
  switch(unaff_ESI) {
  case 0:
    if (lVar2 == 0) {
      uVar4 = _Poly1305_ctx_size();
      lVar2 = _CRYPTO_zalloc(uVar4,0x1fd);
      *(int64_t *)(this_ptr + 0x78) = lVar2;
      if (lVar2 == 0) {
        func = 0x86;
        reason = 0x1ff;
        goto LAB_0102da9f;
      }
    }
    *(void*)(lVar2 + 0xb4) = 0;
    *(void*)(lVar2 + 0xbc) = 0;
    *(void*)(lVar2 + 0xa8) = 0;
    *(void*)(lVar2 + 0xb0) = 0;
    *(void*)(lVar2 + 0xc4) = 0xc;
    *(void*)(lVar2 + 200) = 0xffffffffffffffff;
    *(void*)(lVar2 + 0x94) = 0;
    *(void*)(lVar2 + 0x9c) = 0;
    uVar1 = 1;
    break;
  default:
    goto switchD_0102d836_caseD_17;
  case 8:
    if (lVar2 != 0) {
      _Poly1305_ctx_size();
      lVar2 = _CRYPTO_memdup(0x211,"crypto/evp/e_chacha20_poly1305.c");
      param_1[0xf] = lVar2;
      if (lVar2 != 0) {
        return 1;
      }
      func = 0xad;
      reason = 0x213;
LAB_0102da9f:
      _ERR_put_error(0x201051f,func,reason,param_4,unaff_EBP);
      return 0;
    }
    goto LAB_0102da75;
  case 9:
    uVar1 = 0;
    if (param_2 - 1 < 0xc) {
      *(uint *)(lVar2 + 0xc4) = param_2;
      uVar1 = 1;
    }
    break;
  case 0x10:
    uVar1 = 0;
    if ((param_2 - 1 < 0x10) && (*(int *)(this_ptr + 0x10) != 0)) {
      _memcpy((void *)(uint64_t)(param_2 - 1),(void *)(uint64_t)param_2,param_3);
      uVar1 = 1;
    }
    break;
  case 0x11:
    if (0xf < param_2 - 1) {
      return 0;
    }
    if (param_1 != (void*)0x0) {
      _memcpy((void *)(uint64_t)(param_2 - 1),(void *)(uint64_t)param_2,param_3);
      *(uint *)(lVar2 + 0xc0) = param_2;
      return 1;
    }
    goto LAB_0102da75;
  case 0x12:
    uVar1 = 0;
    if (param_2 == 0xc) {
      uVar4 = *(void*)param_1;
      *(void*)(lVar2 + 0x24) = uVar4;
      *(void*)(lVar2 + 0x78) = uVar4;
      uVar4 = *(void*)((int64_t)param_1 + 4);
      *(void*)(lVar2 + 0x28) = uVar4;
      *(void*)(lVar2 + 0x7c) = uVar4;
      uVar4 = *(void*)(param_1 + 1);
      *(void*)(lVar2 + 0x2c) = uVar4;
      *(void*)(lVar2 + 0x80) = uVar4;
      uVar1 = 1;
    }
    break;
  case 0x16:
    uVar1 = 0;
    if (param_2 == 0xd) {
      uVar1 = *param_1;
      *(void*)(lVar2 + 0x99) = *(void*)((int64_t)param_1 + 5);
      *(void*)(lVar2 + 0x94) = uVar1;
      uVar3 = (uint)*(ushort *)((int64_t)param_1 + 0xb) << 0x10;
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8;
      if (*(int *)(this_ptr + 0x10) == 0) {
        if (uVar3 < 0x10) {
          return 0;
        }
        uVar3 = uVar3 - 0x10;
        *(ushort *)(lVar2 + 0x9f) = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
      }
      *(uint64_t *)(lVar2 + 200) = (uint64_t)uVar3;
      *(void*)(lVar2 + 0x24) = *(void*)(lVar2 + 0x78);
      *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x94) ^ *(uint *)(lVar2 + 0x7c);
      *(uint *)(lVar2 + 0x2c) = *(uint *)(lVar2 + 0x98) ^ *(uint *)(lVar2 + 0x80);
      *(void*)(lVar2 + 0xbc) = 0;
      uVar1 = 0x10;
    }
    break;
  case 0x17:
    break;
  case 0x25:
    *(void*)param_1 = *(void*)(lVar2 + 0xc4);
LAB_0102da75:
    uVar1 = 1;
  }
  return uVar1;
}

