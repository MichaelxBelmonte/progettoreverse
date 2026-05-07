// Function: FUN_0077dba0
// Address: 0077dba0
// Size: 2142 bytes
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


void FUN_0077dba0(uint64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  char cVar5;
  char cVar6;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t local_170;
  char local_168;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  uint64_t local_50;
  int64_t **local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ecc0();
  plVar1 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d3ecf0();
  plVar4 = local_40;
  if (((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
     ((FUN_00d50b00(), local_38 != '\0' && (local_40 != (int64_t *)0x0)))) {
    FUN_00d50b20();
  }
  lVar2 = g_027294e8;
  if (g_027294e8 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026fb7e0;
  if (cVar5 != '\0') {
    FUN_007586e0();
    goto LAB_0077e3ab;
  }
  if (g_026fb7e0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02726c30;
  if (cVar5 != '\0') {
    cVar5 = FUN_016ae5f0();
    if ((cVar5 != '\0') && (cVar5 = FUN_00bd22a0(), cVar5 != '\0')) {
      FUN_0074a910();
    }
    if (*(int64_t *)(this_ptr + 0x70) != 0) {
      FUN_00d50b00();
      FUN_00d50b20();
      plVar1 = *(int64_t **)(this_ptr + 0x70);
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x4a8))();
      FUN_00d50b20();
    }
    goto LAB_0077e3ab;
  }
  if (g_02726c30 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6d50;
  if (cVar5 != '\0') {
    FUN_0076fe30();
    goto LAB_0077e3ab;
  }
  if (g_026f6d50 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6d58;
  if (cVar5 != '\0') {
    FUN_0076feb0();
    goto LAB_0077e3ab;
  }
  if (g_026f6d58 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6d60;
  if (cVar5 != '\0') {
    FUN_0076ff30();
    goto LAB_0077e3ab;
  }
  if (g_026f6d60 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6d20;
  if (cVar5 != '\0') {
    FUN_0076ffb0();
    goto LAB_0077e3ab;
  }
  if (g_026f6d20 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6d30;
  if (cVar5 != '\0') {
    FUN_00770390();
    goto LAB_0077e3ab;
  }
  if (g_026f6d30 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02729460;
  if (cVar5 != '\0') {
    FUN_00771850();
    goto LAB_0077e3ab;
  }
  if (g_02729460 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027295a0;
  if (cVar5 != '\0') {
    FUN_00772060();
    goto LAB_0077e3ab;
  }
  if (g_027295a0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_027ebc70;
  if (cVar5 != '\0') {
    FUN_00772ab0();
    goto LAB_0077e3ab;
  }
  if (g_027ebc70 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02729470;
  if (cVar5 != '\0') {
    FUN_0077cd50();
    goto LAB_0077e3ab;
  }
  if (g_02729470 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  lVar3 = g_02702d30;
  cVar6 = '\x01';
  if (cVar5 == '\0') {
    if (g_02702d30 != 0) {
      FUN_00d50b00();
    }
    cVar6 = (**(code **)(*plVar1 + 0x50))();
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_026f6cf0;
  if (cVar6 != '\0') {
    FUN_0077e980();
    goto LAB_0077e3ab;
  }
  if (g_026f6cf0 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  lVar2 = g_02729590;
  if (cVar5 != '\0') {
    FUN_0077fb50();
    goto LAB_0077e3ab;
  }
  if (g_02729590 != 0) {
    FUN_00d50b00();
  }
  cVar5 = (**(code **)(*plVar1 + 0x50))();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') goto LAB_0077e3ab;
  FUN_00d3ed20();
  local_70 = g_027295d8;
  if (g_027295d8 != 0) {
    FUN_00d50b00();
  }
  local_68 = '\x01';
  local_48 = &local_40;
  FUN_000175c0(param_1,&local_70);
  plVar1 = local_40;
  local_50 = FUN_00053ac0();
  if (plVar1 == (int64_t *)0x0) {
LAB_0077e31b:
    local_48 = (int64_t **)&g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar5 = FUN_00e85ea0();
    if (cVar5 == '\0') goto LAB_0077e31b;
  }
  plVar1 = *local_48;
  if (*(char *)(local_48 + 1) == '\0') {
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    *(void*)(local_48 + 1) = 0;
  }
  if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_168 != '\0') && (local_170 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d459e0();
    FUN_00172d10();
    FUN_00d50b20();
  }
LAB_0077e3ab:
  local_60 = *arg1;
  local_58 = '\0';
  FUN_00d530a0();
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

