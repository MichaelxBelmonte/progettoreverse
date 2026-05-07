// Function: FUN_01032af0
// Address: 01032af0
// Size: 770 bytes
// Class: MUElementAnalyzer
// String references:
//   "crypto/evp/evp_enc.c"
//   "assertion failed: bl <= (int)sizeof(ctx->buf)"
// === MUElementAnalyzer properties ===
//   SInt64          _engineSampleOffset
//   GNInt           _engineIndex
//   float *         _originalSignal
//   float *         _originalSignalBufferWithMargin
//   SInt64          _sampleCount
//   SInt64          _nonSilentSampleCount
//   double          _sampleRate
//   double          _duration
//   double          _parameterValuesPerSecond
//   GNInt           _parameterDataSize
//   float           _maxAmplitude
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorSum
//   float           _propertyPointsMagnitudeToEnvelopeAmplitudeFactorWeightSum
//   bool            _isPercussive
//   bool            _isPolyphonic
//   float           _pitchJumpsSum
//   float           _pitchBarycenter
//   float           _allPercussiveDecay
//   float           _allRhythmicQuality
//   float           _allTonality
//   float           _allCentDiffPerMillisecond
//   float           _allPitchRangePerNote
//   float           _allEnergyRelevantRegionRatio
//   float           _allAttackPeakQuality
//   float           _allAttackPeakToEnergyRegionRatio
//   float           _allMonophony
//   float           _referenceAttackPeakValue
//   float           _referencePeakRmsLevel
//   bool            _origRMSValid
//   GNInt *         _nonSilentRmsVals
//   ... +76 more


bool FUN_01032af0(EVP_CIPHER_CTX *param_1,uint *param_2,uint param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  bool bVar5;
  uint *puVar6;
  uint64_t uVar7;
  uint uVar8;
  EVP_CIPHER_CTX *arg1;
  int64_t *this_ptr;
  int reason;
  size_t sVar9;
  int64_t lVar10;
  uint uVar11;
  bool bVar12;
  EVP_CIPHER_CTX *pEVar13;
  
  pEVar13 = param_1;
  iVar3 = _EVP_CIPHER_CTX_test_flags(param_1,(int)param_2);
  uVar8 = param_3;
  if (iVar3 != 0) {
    uVar8 = param_3 + 7;
    if (-1 < (int)(param_3 + 7)) {
      uVar8 = param_3;
    }
    uVar8 = (int)(uVar8 + 7) >> 3;
  }
  if ((int)param_3 < 0) {
LAB_01032c16:
    *param_2 = 0;
    return param_3 == 0;
  }
  lVar10 = *this_ptr;
  uVar11 = *(uint *)(lVar10 + 4);
  if (param_3 == 0) {
    uVar4 = _EVP_CIPHER_flags((EVP_CIPHER *)param_1);
    if ((uVar4 & 0xf0007) != 7) goto LAB_01032c16;
    lVar10 = *this_ptr;
    bVar1 = *(byte *)(lVar10 + 0x12);
  }
  else {
    bVar1 = *(byte *)(lVar10 + 0x12);
  }
  if ((bVar1 & 0x10) == 0) {
    iVar3 = *(int *)((int64_t)this_ptr + 0x14);
    uVar7 = (int64_t)(arg1->oiv + (int64_t)iVar3 + -0x18) - (int64_t)pEVar13;
    bVar12 = uVar7 < (uint64_t)(int64_t)(int)uVar8;
    bVar2 = (uint64_t)-(int64_t)(int)uVar8 < uVar7;
    bVar5 = bVar12;
    if (((0 < (int)uVar8) &&
        ((EVP_CIPHER_CTX *)(arg1->oiv + (int64_t)iVar3 + -0x18) != pEVar13)) &&
       (bVar5 = bVar12 || bVar2, bVar12 || bVar2)) {
      iVar3 = 0xa2;
      reason = 0x150;
LAB_01032cef:
      _ERR_put_error(0x201069c,iVar3,reason,(char *)(uint64_t)uVar11,(int)pEVar13);
      return false;
    }
    if (iVar3 == 0) {
      if ((*(uint *)((int64_t)this_ptr + 0x84) & param_3) == 0) {
        iVar3 = (**(code **)(lVar10 + 0x20))(param_3,pEVar13);
        if (iVar3 != 0) {
          *param_2 = param_3;
          return true;
        }
        *param_2 = 0;
        return false;
      }
      uVar8 = 0;
      if (0x20 < (int)uVar11) goto LAB_01032ca4;
    }
    else {
      if (0x20 < (int)uVar11) {
LAB_01032ca4:
                            _OPENSSL_die(bVar5,0x15e);
      }
      uVar8 = uVar11 - iVar3;
      if ((int)param_3 < (int)uVar8) {
        _memcpy((void *)(uint64_t)uVar8,(void *)(uint64_t)param_3,(size_t)lVar10);
        *(int *)((int64_t)this_ptr + 0x14) = *(int *)((int64_t)this_ptr + 0x14) + param_3;
        *param_2 = 0;
        return true;
      }
      param_3 = param_3 - uVar8;
      if ((int)(0x7fffffff - uVar11) < (int)(-uVar11 & param_3)) {
        iVar3 = 0xb8;
        reason = 0x171;
        goto LAB_01032cef;
      }
      _memcpy((void *)(uint64_t)uVar8,(void *)(int64_t)(int)uVar8,(size_t)lVar10);
      iVar3 = (**(code **)(*this_ptr + 0x20))((int64_t)(int)uVar11,this_ptr + 7);
      if (iVar3 == 0) {
        return false;
      }
      pEVar13 = (EVP_CIPHER_CTX *)((int64_t)(int)uVar8 + (int64_t)(pEVar13->oiv + -0x18));
      uVar8 = uVar11;
    }
    sVar9 = (size_t)lVar10;
    *param_2 = uVar8;
    uVar8 = uVar11 - 1 & param_3;
    uVar11 = param_3 - uVar8;
    puVar6 = param_2;
    if (uVar11 != 0 && (int)uVar8 <= (int)param_3) {
      puVar6 = (uint *)(uint64_t)uVar11;
      iVar3 = (**(code **)(*this_ptr + 0x20))(puVar6,pEVar13);
      if (iVar3 == 0) {
        return false;
      }
      *param_2 = *param_2 + uVar11;
    }
    if (uVar8 != 0) {
      _memcpy(puVar6,(void *)(int64_t)(int)uVar8,sVar9);
    }
    *(uint *)((int64_t)this_ptr + 0x14) = uVar8;
  }
  else {
    if (uVar11 == 1) {
      if (((arg1 != pEVar13) && (0 < (int)uVar8)) &&
         ((uint64_t)((int64_t)arg1 - (int64_t)pEVar13) < (uint64_t)(int64_t)(int)uVar8 ||
          (uint64_t)-(int64_t)(int)uVar8 < (uint64_t)((int64_t)arg1 - (int64_t)pEVar13)))
      {
        iVar3 = 0xa2;
        reason = 0x143;
        goto LAB_01032cef;
      }
    }
    uVar8 = (**(code **)(lVar10 + 0x20))(param_3,pEVar13);
    if ((int)uVar8 < 0) {
      return false;
    }
    *param_2 = uVar8;
  }
  return true;
}

