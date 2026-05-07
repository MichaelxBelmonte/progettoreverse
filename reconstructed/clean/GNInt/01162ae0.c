// Function: FUN_01162ae0
// Address: 01162ae0
// Size: 1043 bytes
// Class: GNInt
// String references:
//   "bool"
//   "GNInt"
//   "MULoopLibrary"
//   "_coverRows"
//   "_orderindex"
//   "MULoopCover"
//   "_coverRow"
//   "_maxCovers"
//   "_seeAll"
//   "_randomizeOrder"
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


void FUN_01162ae0(void)

{
  int iVar1;
  int64_t lVar2;
  char *pcVar3;
  void*this_ptr;
  
  FUN_01150e50();
  *this_ptr = &g_02611170;
  FUN_01162fe0();
  this_ptr[9] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011630c0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_coverRow";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCover");
  }
  this_ptr[10] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011631b0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "GNUni";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopCover");
  }
  this_ptr[0xb] = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_011632a0();
    iVar1 = FUN_00e7ddf0();
    pcVar3 = "_coverRows";
    if (iVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    FUN_00e879c0(pcVar3,"MULoopLibrary");
  }
  *(void*)(this_ptr + 0xc) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 100) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    FUN_01163390();
    FUN_00e87980();
  }
  *(void*)(this_ptr + 0xd) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6c) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  *(void*)((int64_t)this_ptr + 0x6d) = 0;
  lVar2 = FUN_011627b0();
  if (*(char *)(lVar2 + 0xbb) == '\0') {
    // [STATIC_INIT: property registration]
    FUN_00e87980();
  }
  return;
}

