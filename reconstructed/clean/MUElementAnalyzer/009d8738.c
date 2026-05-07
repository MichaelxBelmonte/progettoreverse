// Function: FUN_009d8738
// Address: 009d8738
// Size: 730 bytes
// Class: MUElementAnalyzer
// String references:
//   "The repeat operator \"*\" cannot start a regular expression."
//   "The repeat operator \"?\" cannot start a regular expression."
//   "The repeat operator \"+\" cannot start a regular expression."
//   "Found a closing repetition operator } with no corresponding {."
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


uint64_t FUN_009d8738(void)

{
  byte bVar1;
  int64_t lVar2;
  uint64_t uVar3;
  byte *pbVar4;
  char cVar5;
  uint64_t uVar6;
  byte *pbVar7;
  int64_t *this_ptr;
  byte local_38 [24];
  
  pbVar7 = (byte *)this_ptr[0x11];
  uVar3 = 0;
  switch(*(void*)(*(int64_t *)this_ptr[1] + 0x20 + (uint64_t)*pbVar7)) {
  case 1:
    uVar3 = FUN_009d9144();
    return uVar3;
  case 2:
    goto switchD_009d877a_caseD_2;
  case 3:
    this_ptr[0x11] = (int64_t)(pbVar7 + 1);
    goto LAB_009d87c2;
  case 4:
    this_ptr[0x11] = (int64_t)(pbVar7 + 1);
LAB_009d87c2:
    FUN_009d8a9c(0,0x10);
LAB_009d880d:
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    goto switchD_009d877a_caseD_2;
  case 5:
    this_ptr[0x11] = (int64_t)(pbVar7 + 1);
    cVar5 = '\x02' - ((*(uint *)(*this_ptr + 0x28) >> 0xc & 1) == 0);
    uVar3 = 0;
    if ((*(uint *)(*this_ptr + 0x28) >> 0xd & 1) != 0) {
      cVar5 = '\0';
    }
    lVar2 = FUN_009d8a9c(0,0x18);
    *(char *)(lVar2 + 0x10) = cVar5;
    goto LAB_009d880d;
  case 6:
    if (pbVar7 != (byte *)this_ptr[0xf]) {
      this_ptr[0x11] = (int64_t)(pbVar7 + 1);
LAB_009d884b:
      uVar6 = 0xffffffffffffffff;
LAB_009d8872:
      uVar3 = FUN_009d9e38(0,uVar6);
      return uVar3;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 7:
    if (pbVar7 != (byte *)this_ptr[0xf]) {
      this_ptr[0x11] = (int64_t)(pbVar7 + 1);
      goto LAB_009d884b;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 8:
    if (pbVar7 != (byte *)this_ptr[0xf]) {
      this_ptr[0x11] = (int64_t)(pbVar7 + 1);
      uVar6 = 1;
      goto LAB_009d8872;
    }
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,0);
    break;
  case 9:
    uVar3 = FUN_009daaae();
    return uVar3;
  default:
    goto switchD_009d877a_caseD_a;
  case 0xb:
switchD_009d877a_caseD_b:
    uVar3 = FUN_009da82e();
    return uVar3;
  case 0xc:
    uVar3 = FUN_009d941a();
    return uVar3;
  case 0xd:
    if ((*(uint *)(*this_ptr + 0x28) & 0xa00) != 0x800) goto switchD_009d877a_caseD_a;
    lVar2 = this_ptr[0x10] - (int64_t)pbVar7;
    uVar3 = 0x800;
    do {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
      if (lVar2 == 0) break;
      pbVar4 = pbVar7 + 1;
      this_ptr[0x11] = (int64_t)pbVar4;
      bVar1 = *pbVar7;
      lVar2 = lVar2 + -1;
      pbVar7 = pbVar4;
    } while ((0xd < (uint64_t)bVar1) || ((0x3400UL >> ((uint64_t)bVar1 & 0x3f) & 1) == 0));
    goto switchD_009d877a_caseD_2;
  case 0xf:
    this_ptr[0x11] = (int64_t)(pbVar7 + 1);
    uVar3 = FUN_009da2a6();
    return uVar3;
  case 0x10:
    if ((*(byte *)(*this_ptr + 0x29) & 2) == 0) goto switchD_009d877a_caseD_a;
    lVar2 = this_ptr[0xf];
    pbVar4 = local_38;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar4,(int64_t)pbVar7 - lVar2);
    break;
  case 0x1a:
    if ((*(byte *)(*this_ptr + 0x2a) & 2) != 0) goto switchD_009d877a_caseD_b;
    goto switchD_009d877a_caseD_a;
  }
  if ((local_38[0] & 1) != 0) {
    operator_delete(pbVar4);
  }
  uVar3 = 0;
switchD_009d877a_caseD_2:
  return uVar3 & 0xffffffff;
switchD_009d877a_caseD_a:
  uVar3 = FUN_009d8ca4();
  return uVar3;
}

