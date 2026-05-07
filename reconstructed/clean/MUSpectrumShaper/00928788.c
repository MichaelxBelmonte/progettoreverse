// Function: FUN_00928788
// Address: 00928788
// Size: 693 bytes
// Class: MUSpectrumShaper
// String references:
//   "The AuthorizationVerifier constructor was not provided a proper channel encyptor (ID = %d)"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "pace::AuthorizationVerifier::AuthorizationVerifier(uint32_t, pace::SharedEncryptor_T, bool)"
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


void FUN_00928788(ulong param_1,int64_t *param_2,size_t param_3)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  void *pvVar5;
  void*puVar6;
  ulong uVar7;
  void*puVar8;
  int unaff_ESI;
  void*this_ptr;
  
  *this_ptr = &g_0251eb40;
  this_ptr[1] = 0;
  this_ptr[2] = 0;
  uVar7 = param_1;
  FUN_009b23e0();
  this_ptr[0xf] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0x11] = &g_0251a348;
  *(void*)(this_ptr + 0x12) = 0;
  ___bzero();
  this_ptr[0x26] = &g_0251c758;
  *(void*)(this_ptr + 0x27) = 0;
  this_ptr[0x28] = 0;
  this_ptr[0x29] = 0;
  this_ptr[0x2a] = 0;
  *(void*)(this_ptr + 0x2b) = 1;
  this_ptr[0x2c] = 0;
  this_ptr[0x2d] = 0;
  this_ptr[0x2e] = 0;
  *(void*)((int64_t)this_ptr + 0x177) = 0;
  *(void*)(this_ptr + 0x30) = 4;
  *(void*)((int64_t)this_ptr + 0x184) = 0;
  *(void*)((int64_t)this_ptr + 0x18c) = 0;
  *(void*)((int64_t)this_ptr + 0x191) = 0;
  *(void*)((int64_t)this_ptr + 0x199) = 1;
  FUN_009b4e10();
  FUN_009285ea();
  if ((unaff_ESI == 0) || (*param_2 == 0)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    uVar7 = 0x1fc0bd8;
    FUN_00928ab0("pace::AuthorizationVerifier::AuthorizationVerifier(uint32_t, pace::SharedEncryptor_T, bool)"
                 ,0xde);
    FUN_009bd14b();
  }
  pvVar5 = operator_new(uVar7);
  FUN_0098cdbc();
  puVar6 = operator_new(uVar7);
  puVar6[2] = 0;
  puVar6[1] = 0;
  puVar8 = &g_0251fb00;
  *puVar6 = &g_0251fb00;
  puVar6[3] = pvVar5;
  this_ptr[0xe] = pvVar5;
  plVar3 = (int64_t *)this_ptr[0xf];
  this_ptr[0xf] = puVar6;
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  lVar2 = *param_2;
  lVar4 = this_ptr[0xe];
  _memcpy(puVar8,section_000001f8.segname + 2,param_3);
  if (lVar4 != lVar2) {
    FUN_009ad770();
  }
  *(void*)(lVar4 + 0x238) = *(void*)(lVar2 + 0x238);
  *(void*)(lVar4 + 0x230) = *(void*)(lVar2 + 0x230);
  *(void*)(this_ptr + 0x10) = 1;
  *(int *)(this_ptr + 0xd) = unaff_ESI;
  this_ptr[0xb] = 0x200000000;
  *(void*)(this_ptr + 0xc) = *(void*)(this_ptr[0xe] + 8);
  *(void*)((int64_t)this_ptr + 100) = 0;
  *(char *)(this_ptr + 0x38) = (char)param_1;
  FUN_0094d0ec();
  return;
}

