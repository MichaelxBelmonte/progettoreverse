// Function: FUN_011cce10
// Address: 011cce10
// Size: 1046 bytes
// Class: GNInt
// String references:
//   "bool"
//   "_cache"
//   "GNInt"
//   "_isValid"
//   "_segmentSize"
//   "_segmentOffset"
//   "MUTrackTimeSegment"
//   "_maximumElementRendererCount"
//   "_maximumElementRendererCountIsValid"
// === GNInt properties ===
//   GNInt           _assembledElementRendererCount
//   bool            _processPeriodBased
//   bool            _usesPososc
//   bool            _resetAllPhasesAtAttack
//   bool            _continueAllPhasesByDefault
//   bool            _renderWithOriginalTime
//   float           _freqDomainFormantResolution
//   GNInt           _freqDomainFourierSize
//   float           _freqDomainPhaseResetParametersScale
//   float           _formantPitchUpCompensationFactor
//   float           _formantPitchDownCompensationFactor
//   bool            _didFail
//   GNInt           _expectedResultLength
//   GNInt           _httpStatusCode
//   bool            _isSuspended
//   SInt64          _uploadLength
//   GNInt           _receivedResultLength
//   bool            _didTimeOut
//   float           _cent
//   GNInt           _westernStandardPitchIndexOffset
//   bool            _isLoop
//   GNInt           _numerator
//   GNInt           _denominator
//   GNInt           _beats
//   GNInt           _tonalKey
//   GNInt           _tonalGender
//   float           _time
//   float           _nextBeepStartTime
//   float           _beepTime
//   float           _beepLength
//   ... +133 more


void FUN_011cce10(void)

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
  *this_ptr = &g_025ebc18;
  *(void*)(this_ptr + 7) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)(this_ptr + 8) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  this_ptr[9] = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    FUN_011cd2e0();
    iVar8 = FUN_00e7ddf0();
    pcVar10 = "_cache";
    if (iVar8 == 0) {
      pcVar10 = (char *)0x0;
    }
    FUN_00e879c0(pcVar10,"MUTrackTimeSegment");
  }
  FUN_011cd3d0();
  *(void*)(this_ptr + 0xb) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x5c) = 0;
  lVar9 = FUN_011ccba0();
  if (*(char *)(lVar9 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

