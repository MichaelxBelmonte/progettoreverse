// Function: FUN_008f43ce
// Address: 008f43ce
// Size: 965 bytes
// Class: MUElementAnalyzer
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


int FUN_008f43ce(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int local_3c;
  uint32_t local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar6 = this_ptr + 0x70;
  lVar7 = this_ptr + 0x68;
  lVar8 = this_ptr + 0x50;
  lVar9 = this_ptr + 0x38;
  lVar10 = this_ptr + 0x20;
  lVar11 = this_ptr + 8;
  while( true ) {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_3c,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,uVar12
                       ,uVar13,uVar14);
    if (local_3c == 0) break;
    switch(local_32) {
    case 1:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0xbe) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0xbf) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 3:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0xc0) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 4:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0xc1) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 5:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0xc2) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 6:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0xc3) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 7:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0xc4) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 8:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0xc5) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0xb8) = local_38;
        *(void*)(this_ptr + 0xc6) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x15:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 199) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x16:
      if (local_3c == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 200) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  }
  iVar3 = (**(code **)(*arg1 + 0xd0))();
  if ((uVar12 & 1) != 0) {
    operator_delete(psVar5);
  }
  *(int *)(arg1 + 3) = (int)arg1[3] + -1;
  return iVar3 + iVar2 + iVar1;
}

