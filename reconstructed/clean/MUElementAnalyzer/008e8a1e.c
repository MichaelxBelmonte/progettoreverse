// Function: FUN_008e8a1e
// Address: 008e8a1e
// Size: 1061 bytes
// Class: MUElementAnalyzer
// String references:
//   "releaseDate"
//   "startDate"
//   "storageId"
//   "TimeLimitRecord"
//   "internalReference"
//   "stopDate"
//   "remainingSeconds"
//   "refreshStartDays"
//   "gracePeriodDays"
//   "isTimeToRefresh"
//   "inGracePeriod"
//   "relativeTime"
//   "validNow"
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


int FUN_008e8a1e(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int64_t lVar16;
  int64_t *arg1;
  int64_t this_ptr;
  
  FUN_0088bf90();
  iVar1 = (**(code **)(*arg1 + 0x20))();
  iVar2 = (**(code **)(*arg1 + 0x30))(1,8);
  iVar3 = (**(code **)(*arg1 + 0x90))();
  iVar4 = (**(code **)(*arg1 + 0x38))();
  iVar5 = (**(code **)(*arg1 + 0x30))(2,0xf);
  iVar6 = (**(code **)(*arg1 + 0x58))();
  iVar6 = iVar2 + iVar1 + iVar3 + iVar4 + iVar5 + iVar6;
  for (lVar16 = *(int64_t *)(this_ptr + 0x10); lVar16 != *(int64_t *)(this_ptr + 0x18);
      lVar16 = lVar16 + 1) {
    iVar1 = (**(code **)(*arg1 + 0x80))();
    iVar6 = iVar6 + iVar1;
  }
  iVar1 = (**(code **)(*arg1 + 0x60))();
  iVar2 = (**(code **)(*arg1 + 0x38))();
  iVar3 = (**(code **)(*arg1 + 0x30))(10,0xb);
  iVar4 = (**(code **)(*arg1 + 0xa8))();
  iVar5 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x30))(0xb,0xb);
  iVar8 = (**(code **)(*arg1 + 0xa8))();
  iVar9 = (**(code **)(*arg1 + 0x38))();
  iVar10 = (**(code **)(*arg1 + 0x30))(0xc,10);
  iVar11 = (**(code **)(*arg1 + 0x98))();
  iVar12 = (**(code **)(*arg1 + 0x38))();
  iVar13 = (**(code **)(*arg1 + 0x30))(0xd,0xb);
  iVar14 = (**(code **)(*arg1 + 0xa8))();
  iVar15 = (**(code **)(*arg1 + 0x38))();
  iVar15 = iVar1 + iVar6 + iVar2 + iVar3 + iVar4 + iVar5 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
           iVar12 + iVar13 + iVar14 + iVar15;
  if (*(char *)(this_ptr + 0x8a) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0xf,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x8b) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x10,8);
    iVar2 = (**(code **)(*arg1 + 0x90))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x8c) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x11,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  if (*(char *)(this_ptr + 0x8d) != '\0') {
    iVar1 = (**(code **)(*arg1 + 0x30))(0x12,2);
    iVar2 = (**(code **)(*arg1 + 0x78))();
    iVar3 = (**(code **)(*arg1 + 0x38))();
    iVar15 = iVar1 + iVar15 + iVar2 + iVar3;
  }
  iVar1 = (**(code **)(*arg1 + 0x30))(0x14,2);
  iVar2 = (**(code **)(*arg1 + 0x78))();
  iVar3 = (**(code **)(*arg1 + 0x38))();
  iVar4 = (**(code **)(*arg1 + 0x30))(0x15,2);
  iVar5 = (**(code **)(*arg1 + 0x78))();
  iVar6 = (**(code **)(*arg1 + 0x38))();
  iVar7 = (**(code **)(*arg1 + 0x40))();
  iVar8 = (**(code **)(*arg1 + 0x28))();
  *(int *)((int64_t)arg1 + 0x1c) = *(int *)((int64_t)arg1 + 0x1c) + -1;
  return iVar1 + iVar15 + iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8;
}

