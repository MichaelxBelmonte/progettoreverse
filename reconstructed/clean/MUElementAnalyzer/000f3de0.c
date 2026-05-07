// Function: FUN_000f3de0
// Address: 000f3de0
// Size: 775 bytes
// Class: MUElementAnalyzer
// String references:
//   "MUElementAnalyzer"
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


uint64_t FUN_000f3de0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t unaff_R14;
  uint64_t uVar7;
  int64_t local_88;
  char local_80;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40;
  int64_t local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0xb8) == 0) {
    uVar7 = CONCAT71((int7)((uint64_t)unaff_R14 >> 8),1);
    goto LAB_000f4011;
  }
  plVar1 = (int64_t *)*arg1;
  if ((g_026e0c38 == '\0') && (iVar5 = ___cxa_guard_acquire(), iVar5 != 0)) {
    g_026e0b88 = FUN_000fddb0();
    g_026e0b70 = "MUElementAnalyzer";
    g_026e0b78 = 0x180;
    param_1 = 0xfdd80;
    g_026e0b80 = FUN_000fdd80;
    g_026e0b90 = 0;
    ram_00000000026e0b98 = 0;
    g_026e0ba0 = 0;
    g_026e0c18 = 0;
    ram_00000000026e0c20 = 0;
    g_026e0c28 = 0;
    g_026e0c2a = 1;
    g_026e0ba8 = 0;
    ram_00000000026e0bb0 = 0;
    g_026e0bb8 = 0;
    ram_00000000026e0bc0 = 0;
    g_026e0bc8 = 0;
    ram_00000000026e0bd0 = 0;
    g_026e0bd8 = 0;
    ram_00000000026e0be0 = 0;
    g_026e0be8 = 0;
    ram_00000000026e0bf0 = 0;
    g_026e0bf8 = 0;
    ram_00000000026e0c00 = 0;
    g_026e0c08 = 0;
    ram_00000000026e0c10 = 0;
    g_026e0c33 = 0;
    g_026e0c2b = 0;
    ___cxa_guard_release();
  }
  if (plVar1 == (int64_t *)0x0) {
LAB_000f3e34:
    arg1 = &g_02802688;
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_000f3e34;
  }
  lVar2 = arg1[1];
  if (((char)lVar2 == '\0') || (*arg1 == 0)) {
    if (*arg1 == 0) {
      uVar7 = 0;
      goto LAB_000f4011;
    }
  }
  else {
    FUN_00d50b00();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0xb8) + 0x628))();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_004a1110();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01313ad0();
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cb480();
  FUN_013fb320();
  if (local_30 == '\0') {
    if (local_38 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  uVar4 = FUN_00d23d70();
  uVar7 = (uint64_t)uVar4;
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40 != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if ((char)lVar2 != '\0') {
    FUN_00d50b20();
  }
LAB_000f4011:
  return uVar7 & 0xffffffff;
}

