// Function: FUN_01433780
// Address: 01433780
// Size: 633 bytes
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


void FUN_01433780(void)

{
  void*puVar1;
  int64_t lVar2;
  void*puVar3;
  int64_t this_ptr;
  uint32_t uVar4;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  int64_t local_30;
  char local_28;
  
  FUN_00e332f0();
  *(void*)(this_ptr + 200) = 0xbff0000000000000;
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_025f0d98;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  (*g_025f0db0)();
  puVar1 = *(void**)(this_ptr + 0xb0);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xb0) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  puVar1 = *(void**)(this_ptr + 0xe8);
  if (puVar1 == puVar3) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0xe8) = puVar3;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  uVar4 = FUN_00d6f370();
  if (local_78 == '\0') {
    if (local_80 == 0) {
      return;
    }
    uVar4 = FUN_00d50b00();
  }
  else if (local_80 == 0) {
    return;
  }
  lVar2 = g_026f6e78;
  if (g_026f6e78 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_70 = lVar2;
  local_68 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_70);
  if ((local_68 != '\0') && (local_70 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = g_027c19f0;
  if (g_027c19f0 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_60 = lVar2;
  local_58 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_60);
  if ((local_58 != '\0') && (local_60 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = g_027c19f8;
  if (g_027c19f8 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_50 = lVar2;
  local_48 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_50);
  if ((local_48 != '\0') && (local_50 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = g_027e2720;
  if (g_027e2720 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_40 = lVar2;
  local_38 = '\x01';
  uVar4 = FUN_00d72780(uVar4,&local_40);
  if ((local_38 != '\0') && (local_40 != 0)) {
    uVar4 = FUN_00d50b20();
  }
  lVar2 = g_027e2730;
  if (g_027e2730 != 0) {
    uVar4 = FUN_00d50b00();
  }
  local_30 = lVar2;
  local_28 = '\x01';
  FUN_00d72780(uVar4,&local_30);
  if ((local_28 != '\0') && (local_30 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

