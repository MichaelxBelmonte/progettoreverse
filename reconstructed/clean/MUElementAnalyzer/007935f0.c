// Function: FUN_007935f0
// Address: 007935f0
// Size: 547 bytes
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


void FUN_007935f0(void)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  void*puVar4;
  int iVar5;
  int64_t *arg1;
  int64_t *this_ptr;
  void*local_48;
  char local_40;
  
  puVar3 = (void*)*arg1;
  if (puVar3 == (void*)0x0) {
    if (*(int *)(this_ptr[0x35] + 0xc) == 0) {
      return;
    }
    puVar3 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar3 = &g_02572358;
    (*g_02572370)();
    lVar1 = *arg1;
    *arg1 = (int64_t)puVar3;
    if (((char)arg1[1] != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
      puVar3 = (void*)*arg1;
    }
    *(void*)(arg1 + 1) = 1;
    if (*(int *)(this_ptr[0x35] + 0xc) == *(int *)((int64_t)puVar3 + 0xc)) goto LAB_0079369e;
  }
  else {
    if ((*(int *)((int64_t)puVar3 + 0xc) == 0) && (*(int *)(this_ptr[0x35] + 0xc) == 0)) {
      return;
    }
    if (*(int *)(this_ptr[0x35] + 0xc) == *(int *)((int64_t)puVar3 + 0xc)) {
LAB_0079369e:
      local_40 = '\0';
      cVar2 = FUN_00d23fd0();
      local_48 = puVar3;
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  FUN_003231a0();
  puVar3 = (void*)this_ptr[0x35];
  puVar4 = puVar3;
  if (puVar3 == local_48) goto LAB_0079374a;
  puVar4 = local_48;
  if (local_40 == '\0') {
    if (local_48 == (void*)0x0) {
      puVar4 = (void*)0x0;
      goto LAB_007936ff;
    }
    FUN_00d50b00();
    puVar3 = (void*)this_ptr[0x35];
    this_ptr[0x35] = (int64_t)local_48;
  }
  else {
    local_40 = '\0';
LAB_007936ff:
    this_ptr[0x35] = (int64_t)puVar4;
  }
  if (puVar3 != (void*)0x0) {
    FUN_00d50b20();
    puVar4 = local_48;
  }
LAB_0079374a:
  if ((local_40 != '\0') && (puVar4 != (void*)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*this_ptr + 0x610))();
  if (local_40 == '\0') {
    if (local_48 == (void*)0x0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_48 == (void*)0x0) {
    return;
  }
  for (iVar5 = 0; iVar5 < *(int *)((int64_t)local_48 + 0xc); iVar5 = iVar5 + 1) {
    FUN_006f63e0();
  }
  FUN_000e3600();
  FUN_00d50b20();
  return;
}

