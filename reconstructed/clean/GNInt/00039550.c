// Function: FUN_00039550
// Address: 00039550
// Size: 546 bytes
// Class: GNInt
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


void FUN_00039550(void)

{
  int iVar1;
  void*puVar2;
  void*this_ptr;
  
  FUN_00d4ff40();
  this_ptr[2] = 0;
  *this_ptr = &g_02569280;
  this_ptr[3] = &g_025697c0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  if (1 < g_02802630) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[9] = puVar2;
  }
  iVar1 = g_02802630;
  this_ptr[0xd] = 0;
  *(void*)(this_ptr + 0xe) = 0;
  this_ptr[0xf] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  *(void*)(this_ptr + 0xc) = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[0xf] = puVar2;
    iVar1 = g_02802630;
  }
  this_ptr[0x12] = 0;
  this_ptr[0x13] = 0;
  this_ptr[0x10] = 0;
  this_ptr[0x11] = 0;
  this_ptr[0x15] = 0;
  this_ptr[0x16] = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    this_ptr[0x16] = puVar2;
    iVar1 = g_02802630;
  }
  this_ptr[0x1b] = 0;
  *(void*)(this_ptr + 0x1c) = 0;
  *(void*)((int64_t)this_ptr + 0xe4) = 0;
  this_ptr[0x28] = 0;
  this_ptr[0x18] = 0;
  this_ptr[0x19] = 0;
  *(void*)(this_ptr + 0x1a) = 0;
  this_ptr[0x1e] = 0;
  this_ptr[0x1f] = 0;
  *(void*)(this_ptr + 0x20) = 0;
  this_ptr[0x21] = 0;
  this_ptr[0x22] = 0;
  this_ptr[0x23] = 0;
  this_ptr[0x24] = 0;
  this_ptr[0x25] = 0;
  this_ptr[0x26] = 0;
  *(void*)(this_ptr + 0x27) = 0;
  if (1 < iVar1) {
    puVar2 = (void*)FUN_00e8fc40();
    FUN_00d4ff40();
    *puVar2 = &g_02572358;
    (*g_02572370)();
    FUN_00d22760();
    this_ptr[0x28] = puVar2;
  }
  this_ptr[0x29] = 0;
  this_ptr[0x2b] = 0;
  return;
}

