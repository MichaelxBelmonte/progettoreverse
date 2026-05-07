// Function: FUN_01771c60
// Address: 01771c60
// Size: 538 bytes
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


uint64_t FUN_01771c60(uint32_t param_1)

{
  int iVar1;
  int64_t lVar2;
  char cVar3;
  void *pvVar4;
  char *pcVar5;
  int64_t lVar6;
  void* unaff_ESI;
  int64_t this_ptr;
  char *pcVar7;
  float fVar8;
  float local_64;
  float local_60;
  float local_5c;
  int64_t local_58;
  char local_50 [8];
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (-1 < (int)unaff_ESI) {
    iVar1 = *(int *)(*(int64_t *)(this_ptr + 0x50) + 0xc);
    if (((*(char *)(this_ptr + 0x38) != '\0') || ((int)unaff_ESI < iVar1)) &&
       ((*(char *)(this_ptr + 0x38) == '\0' || ((int)unaff_ESI < iVar1 + -1)))) {
      local_48 = CONCAT44(local_48._4_4_,param_1);
      cVar3 = FUN_017715d0(g_02390124,&local_64);
      if (cVar3 == '\0') {
        return 0;
      }
      if (local_60 < (float)local_48) {
        return 0;
      }
      if ((float)local_48 < local_64) {
        return 0;
      }
      local_5c = (float)FUN_017708f0();
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01779ed0((float)local_48);
      if (*(char *)(this_ptr + 0x38) == '\0') {
        return 1;
      }
      FUN_00d23340();
      lVar2 = local_58;
      local_40[0] = local_50[0];
      pcVar5 = local_40;
      if (local_50[0] != '\0') {
        pcVar5 = local_50;
      }
      *pcVar5 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific(unaff_ESI);
      if ((pvVar4 == (void *)0x0) || (lVar6 = FUN_00e8b990(), lVar6 == 0)) {
        local_48 = lVar2;
      }
      else {
        local_48 = *(int64_t *)(lVar2 + 0x20 + (uint64_t)(*(uint *)(lVar6 + 0x154) & 1) * 8);
      }
      FUN_00d23310();
      pcVar5 = local_38;
      pcVar7 = local_50;
      if (local_50[0] == '\0') {
        pcVar7 = pcVar5;
      }
      local_38[0] = local_50[0];
      *pcVar7 = '\0';
      if ((local_50[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      pvVar4 = _pthread_getspecific((void*)pcVar5);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar8 = (float)FUN_01779ec0();
      FUN_01779ed0(local_5c + fVar8);
      if ((local_38[0] != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if (local_40[0] == '\0') {
        return 1;
      }
      if (lVar2 == 0) {
        return 1;
      }
      FUN_00d50b20();
      return 1;
    }
  }
  return 0;
}

