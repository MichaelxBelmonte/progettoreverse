// Function: FUN_011c8690
// Address: 011c8690
// Size: 5621 bytes
// Class: MUSpectrumShaper
// String references:
//   "bool"
//   "MUAraAudioPlaybackRegion"
//   "MUElement"
//   "MUTrack"
//   "MUAudioIOSlot"
//   "_track"
//   "_channelFormat"
//   "GNAudioChannelFormat"
//   "MUAudioGenerator"
//   "_subtracks"
//   "MUPerformance"
//   "_rootTrack"
//   "_isMuted"
//   "_isSolo"
//   "double"
//   "GNInt"
//   "MUAudioEffectChain"
//   "MUModulationSource"
//   "_isPitchToChordAdaptionEnabled"
//   "_didRequestCacheValidation"
//   ... +25 more
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


void FUN_011c8690(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  uint32_t uVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  int iVar8;
  int64_t lVar9;
  char *pcVar10;
  int64_t arg1;
  void*this_ptr;
  void*puVar11;
  
  FUN_00d4ff80();
  *this_ptr = &g_02590538;
  uVar1 = *(void*)(arg1 + 0x14);
  uVar2 = *(void*)(arg1 + 0x18);
  uVar3 = *(void*)(arg1 + 0x1c);
  uVar4 = *(void*)(arg1 + 0x20);
  uVar5 = *(void*)(arg1 + 0x24);
  uVar6 = *(void*)(arg1 + 0x28);
  uVar7 = *(void*)(arg1 + 0x2c);
  *(void*)(this_ptr + 2) = *(void*)(arg1 + 0x10);
  *(void*)((int64_t)this_ptr + 0x14) = uVar1;
  *(void*)(this_ptr + 3) = uVar2;
  *(void*)((int64_t)this_ptr + 0x1c) = uVar3;
  *(void*)(this_ptr + 4) = uVar4;
  *(void*)((int64_t)this_ptr + 0x24) = uVar5;
  *(void*)(this_ptr + 5) = uVar6;
  *(void*)((int64_t)this_ptr + 0x2c) = uVar7;
  this_ptr[6] = *(void*)(arg1 + 0x30);
  *this_ptr = &g_025d6680;
  this_ptr[7] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca1e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_sequenceTrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this_ptr[8] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca2d0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_regionTracks";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  *(void*)(this_ptr + 9) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca3c0();
    FUN_00e87980();
  }
  this_ptr[10] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca540();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_masterTrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this_ptr[0xb] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca630();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_slaveTracks";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this_ptr[0xc] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca720();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_plugInTrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAraAudioPlaybackRegion");
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x69) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6a) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6b) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xe) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0xf] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x10] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x11) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x89) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x8c) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca810();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x12) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011ca980();
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x94) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0x13) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x99) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9a) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9b) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x9c) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011cab00();
  this_ptr[0x15] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cabe0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_supertrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  this_ptr[0x16] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cacd0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_track";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUElement");
  }
  this_ptr[0x17] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cadc0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioEffectChain");
  }
  this_ptr[0x18] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011caeb0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUModulationSource");
  }
  this_ptr[0x19] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cafa0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUModulationSource");
  }
  this_ptr[0x1a] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb090();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_track";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackAutomation");
  }
  this_ptr[0x1b] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb180();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_track";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MURenderCacheSegment");
  }
  this_ptr[0x1c] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb270();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUMidiIOSlot");
  }
  *(void*)(this_ptr + 0x1d) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011cb360();
  *(void*)(this_ptr + 0x1f) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb440();
    FUN_00e87980();
  }
  FUN_011cb5b0();
  *(void*)(this_ptr + 0x21) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x22] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb690();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_subtracks";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrack");
  }
  puVar11 = this_ptr + 0x23;
  this_ptr[0x23] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb780();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_track";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioGenerator");
  }
  this_ptr[0x24] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb870();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOSlot",param_3,param_4,puVar11);
  }
  this_ptr[0x25] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cb960();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUAudioIOSlot");
  }
  this_ptr[0x26] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cba50();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_rootTrack";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUPerformance");
  }
  this_ptr[0x27] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cbb40();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "GNUni";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackElementsCache");
  }
  *(void*)(this_ptr + 0x28) = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[0x29] = 0;
  lVar9 = FUN_000823a0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

