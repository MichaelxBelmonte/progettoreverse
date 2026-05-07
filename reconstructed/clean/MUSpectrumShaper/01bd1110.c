// Function: FUN_01bd1110
// Address: 01bd1110
// Size: 1045 bytes
// Class: MUSpectrumShaper
// === MUSpectrumShaper properties ===
//   GNInt           _assembledElementRendererCount
//   MUSpectrumShaperSpectrumType _spectrumType
//   bool            _processSpectrumShaper
//   bool            _canUseSpectrumShaper
//   bool            _processEqualizer
//   bool            _processLowerSpectrum
//   bool            _processUpperSpectrum
//   bool            _isBypassed
//   GNInt           _overallSpectrumFundamentalPitchIndex
//   float           _overallSpectrumFreqPerBin
//   float           _referenceMagnitudeSum
//   float           _maximumMagnitudeSum
//   float           _synthAmps
//   float           _synthPhases
//   float           _emphasizePow
//   float           _allGain
//   float           _ampDifferencePow
//   float           _clipLimit
//   bool            _didRequestCacheValidation
//   bool            _appliedEqualizerFactorsAreValid
//   bool            _appliedEqualizerFormantFactorsAreValid
//   bool            _processSpectrumShaperIsValid
//   float           _startValue
//   float           _riseDuration
//   float           _riseEndValue
//   float           _decayStartTime
//   float           _decayEndTime
//   float           _decayFactor
//   float           _endValue
//   bool            _needsProcessEnvelope
//   ... +35 more


void FUN_01bd1110(uint64_t param_1,uint32_t param_2)

{
  int64_t *plVar1;
  char cVar2;
  uint8_t uVar3;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  uint64_t uVar5;
  uint32_t in_XMM1_Dc;
  uint32_t uVar6;
  int64_t local_c0;
  char local_b8;
  int64_t *local_68;
  char local_60;
  int64_t local_58;
  int local_50;
  uint64_t local_48;
  float local_34;
  
  local_34 = (float)(**(code **)(*this_ptr + 0xb10))();
  cVar2 = (**(code **)(*this_ptr + 0xaf0))();
  if (cVar2 != '\0') {
    local_34 = g_02390124 - local_34;
  }
  (**(code **)(*this_ptr + 0x640))();
  plVar1 = local_68;
  if ((((local_60 == '\0') && (local_68 != (int64_t *)0x0)) && (FUN_00d50b00(), local_60 != '\0'))
     && (local_68 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  uVar6 = *(void*)((int64_t)this_ptr + 0x18c);
  local_48 = FUN_01e3f820();
  uVar3 = (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  (**(code **)(*plVar1 + 0x3f0))((uint32_t)local_48,uVar6,0,uVar3);
  if (this_ptr[0x3c] != 0) {
    local_60 = '\0';
    local_68 = (int64_t *)0x0;
    local_58 = *(int64_t *)(this_ptr[0x3c] + 0x10);
    local_50 = 0;
    if (0 < *(int *)(local_58 + 0xc)) {
      do {
        local_68 = *(int64_t **)(*(int64_t *)(local_58 + 0x10) + (int64_t)local_50 * 8);
        FUN_01bd1720((int64_t)local_50,&local_68);
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        uVar6 = (uint32_t)this_ptr[0x2e];
        uVar4 = FUN_00c71d60();
        *(void*)(this_ptr + 0x2e) = uVar4;
        uVar4 = (**(code **)(*this_ptr + 0xb10))();
        local_48._0_4_ = uVar4;
        (**(code **)(*this_ptr + 0xaf0))();
        FUN_01e3f820();
        local_48 = (**(code **)(*plVar1 + 0x560))();
        uVar4 = FUN_01d526f0();
        uVar5 = FUN_00d05510((uint32_t)local_48,param_2,uVar4);
        local_48 = uVar5;
        cVar2 = (**(code **)(*this_ptr + 0x9a0))();
        if (cVar2 == '\0') {
          in_XMM1_Dc = 0;
          param_2 = g_0239011c;
          FUN_01d49110((uint32_t)local_48,3);
        }
        else {
          (**(code **)(*(int64_t *)*arg1 + 0x400))((uint32_t)local_48);
        }
        *(void*)(this_ptr + 0x2e) = uVar6;
        if (local_c0 != 0) {
          FUN_00d50b20();
        }
        local_50 = local_50 + 1;
      } while (local_50 < *(int *)(local_58 + 0xc));
      if ((local_60 != '\0') && (local_68 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  uVar5 = FUN_01e3f820();
  local_48 = uVar5;
  (**(code **)(*this_ptr + 0x9a0))();
  (**(code **)(*this_ptr + 0xa70))();
  FUN_01cc0c20((uint32_t)local_48,param_2,local_34,g_02390d00,param_2,in_XMM1_Dc);
  FUN_00d50b20();
  return;
}

