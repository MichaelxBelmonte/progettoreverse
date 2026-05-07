// Function: FUN_00900c88
// Address: 00900c88
// Size: 857 bytes
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


int FUN_00900c88(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int local_38;
  short local_32;
  
  FUN_0088d1d0();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar11 = this_ptr + 0x18;
  lVar6 = this_ptr + 0xc;
  lVar7 = this_ptr + 0xb;
  lVar8 = this_ptr + 10;
  lVar9 = this_ptr + 9;
  lVar10 = this_ptr + 8;
  do {
    psVar5 = &local_32;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_38,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,uVar12
                       ,uVar13,uVar14);
    if (local_38 == 0) {
      iVar3 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar12 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    switch((int)local_32) {
    case 1:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x20) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x21) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 3:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x22) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
switchD_00900d67_caseD_4:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x23) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xb:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x24) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xc:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x25) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xd:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x26) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xe:
      if (local_38 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        *(void*)(this_ptr + 0x27) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0x14:
      if (local_38 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 0x28) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      if (local_32 != 0x1e) goto switchD_00900d67_caseD_4;
      if (local_38 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        *(void*)(this_ptr + 0x29) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}

