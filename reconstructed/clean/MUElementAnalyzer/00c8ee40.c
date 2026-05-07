// Function: FUN_00c8ee40
// Address: 00c8ee40
// Size: 684 bytes
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


void FUN_00c8ee40(void *param_1,uint64_t param_2,size_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  uint8_t uVar4;
  uint32_t uVar5;
  int iVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t local_48;
  char local_40;
  
  cVar3 = (**(code **)(*(int64_t *)*arg1 + 0x380))();
  if (cVar3 == '\0') {
    iVar6 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
    *(int *)(this_ptr + 0x20) = iVar6;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = (**(code **)(*(int64_t *)*arg1 + 0x428))();
    }
    (**(code **)(*(int64_t *)*arg1 + 0x428))();
    FUN_00c8e340();
    (**(code **)(*(int64_t *)*arg1 + 0x478))();
  }
  else {
    *(void*)(this_ptr + 0x1d) = 0;
    lVar2 = g_027815b0;
    plVar1 = (int64_t *)*arg1;
    if (g_027815b0 != 0) {
      FUN_00d50b00();
    }
    uVar5 = (**(code **)(*plVar1 + 0x520))();
    *(void*)(this_ptr + 0x20) = uVar5;
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027815c8;
    plVar1 = (int64_t *)*arg1;
    if (g_027815c8 != 0) {
      FUN_00d50b00();
    }
    uVar4 = (**(code **)(*plVar1 + 0x510))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027726e8;
    plVar1 = (int64_t *)*arg1;
    if (g_027726e8 != 0) {
      FUN_00d50b00();
    }
    iVar6 = (**(code **)(*plVar1 + 0x520))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    lVar2 = g_027648d0;
    if (iVar6 != 0) {
      plVar1 = (int64_t *)*arg1;
      if (g_027648d0 != 0) {
        FUN_00d50b00();
      }
      (**(code **)(*plVar1 + 0x580))();
      if ((local_40 == '\0') && (local_48 != 0)) {
        FUN_00d50b00();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (local_48 != 0) {
        iVar6 = *(int *)(local_48 + 0x18);
        FUN_00c8e340();
        _memcpy(param_1,(void *)(int64_t)iVar6,param_3);
        FUN_00d50b20();
      }
    }
    *(void*)(this_ptr + 0x1c) = uVar4;
    lVar2 = g_027815b8;
    plVar1 = (int64_t *)*arg1;
    if (g_027815b8 != 0) {
      FUN_00d50b00();
    }
    iVar6 = (**(code **)(*plVar1 + 0x520))();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  *(void*)(this_ptr + 0xc) = *(void*)(this_ptr + 0x18);
  if ((*(int *)(this_ptr + 0x20) != 0) && (iVar6 == 1)) {
    FUN_00e7d230();
  }
  return;
}

