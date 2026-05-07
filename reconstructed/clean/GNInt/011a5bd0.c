// Function: FUN_011a5bd0
// Address: 011a5bd0
// Size: 618 bytes
// Class: GNInt
// String references:
//   "GNInt"
//   "_assembledElementRendererCount"
//   "MUSampler"
//   "MUSamplerComponentRenderer"
//   "MUSamplerElementRenderer"
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


void FUN_011a5bd0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_010f3160();
  *this_ptr = &g_025d7780;
  this_ptr[0x1d] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a5f90();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSampler");
  }
  this_ptr[0x1e] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6080();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerElementRenderer");
  }
  *(void*)(this_ptr + 0x1f) = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  FUN_011a6170();
  this_ptr[0x21] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6250();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerElementRenderer");
  }
  this_ptr[0x22] = 0;
  lVar2 = FUN_011a5760();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011a6340();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MUSamplerComponentRenderer");
  }
  return;
}

