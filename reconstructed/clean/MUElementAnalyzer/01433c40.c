// Function: FUN_01433c40
// Address: 01433c40
// Size: 576 bytes
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


void FUN_01433c40(double param_1,uint64_t param_2,size_t param_3)

{
  void *pvVar1;
  int64_t lVar2;
  void*puVar3;
  void* pVar4;
  void *in_RCX;
  int64_t *plVar5;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  
  plVar5 = (int64_t *)*this_ptr;
  pvVar1 = _pthread_getspecific((void*)in_RCX);
  if (pvVar1 != (void *)0x0) {
    plVar5 = (int64_t *)*this_ptr;
    lVar2 = FUN_00e8b990();
    if (lVar2 != 0) {
      plVar5 = (int64_t *)plVar5[(uint64_t)(*(uint *)(lVar2 + 0x154) & 1) + 4];
    }
  }
  lVar2 = (**(code **)(*plVar5 + 0x388))();
  FUN_00c8e690(SUB84(((double)lVar2 / param_1) * g_0241eeb8,0));
  if ((local_58 == '\0') && (local_60 != 0)) {
    FUN_00d50b00();
  }
  FUN_00c92170();
  FUN_00c92160();
  if (3 < (int)*(uint *)(local_60 + 0x18)) {
    _memset_pattern16(in_RCX,(void *)((uint64_t)((*(uint *)(local_60 + 0x18) >> 2) - 1) * 4 + 4),
                      param_3);
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *(void*)(puVar3 + 7) = 0;
  *(void*)((int64_t)puVar3 + 0x3c) = 0;
  *(void*)(puVar3 + 8) = 0;
  pVar4 = 0x25dc9e8;
  *puVar3 = &g_025dc9e8;
  puVar3[9] = 0;
  puVar3[10] = 0;
  (*g_025dca00)();
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb950(SUB84(g_0241eeb8,0));
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_013eb890();
  pvVar1 = _pthread_getspecific(pVar4);
  if (pvVar1 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc1d0();
  FUN_00d50b20();
  FUN_00d50b20();
  return;
}

