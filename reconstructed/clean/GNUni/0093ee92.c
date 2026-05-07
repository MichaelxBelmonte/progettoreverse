// Function: FUN_0093ee92
// Address: 0093ee92
// Size: 845 bytes
// Class: GNUni
// String references:
//   "storageId"
//   "counter1CurrentCount"
//   "counter1StartCount"
//   "counter2CurrentCount"
//   "counter2StartCount"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsCountLimitPtr (0x%16X)"
//   "static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromLicenseDbToPublic...
//   "flagsReadOnly"
//   "counters64bitCombined"
//   "counter1CountsUpNotDown"
//   "counter2CountsUpNotDown"
// === GNUni properties ===
//   bool            _preferedFrameSizeLocked
//   GNCoord         _verticalScrollerWidth
//   GNCoord         _horizontalScrollerHeight
//   bool            _canGoUp
//   bool            _canRepeat
//   bool            _canGoDown
//   GNInt           _beatDivision
//   GNInt           _beatCount
//   GNInt           _timeSliceCount
//   GNFraction      _allStartBeat
//   float           _pitchOffset
//   bool            _isBlues
//   GNInt           _bluesRoot
//   bool            _considersBlues
//   bool            _reservesPitchRange
//   bool            _limitsHighestPitchIndex
//   bool            _limitsLowestPitchIndex
//   bool            _isQuarterAssignmentIrrelevant
//   bool            _isPitchAssignmentIrrelevant
//   bool            _calcsAlternateChords
//   bool            _isOutputSlot
//   bool            _isDefaultSlot
//   GNInt           _stereoItemCount
//   MDInspectorModeFlags _mode
//   double          _xDistanceResolutionForLinearApproximation
//   double          _yDistanceResolutionForLinearApproximation
//   bool            _didRequestCacheValidation
//   bool            _canChooseDirectory
//   bool            _canChooseFile
//   bool            _allowsMultipleSelection
//   ... +276 more


void FUN_0093ee92(char *param_1,uint64_t param_2,size_t param_3)

{
  uint uVar1;
  int64_t lVar2;
  code *pcVar3;
  void*puVar4;
  char *pcVar5;
  int64_t *arg1;
  void*this_ptr;
  int64_t *in_stack_ffffffffffffffb0;
  code *local_48;
  
  *this_ptr = &g_0251c140;
  *(void*)(this_ptr + 1) = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  *(void*)(this_ptr + 5) = 0;
  *(void*)((int64_t)this_ptr + 0x2c) = 0;
  *(void*)((int64_t)this_ptr + 0x32) = 0;
  *(void*)((int64_t)this_ptr + 0x53) = 0;
  *(void*)((int64_t)this_ptr + 0x4c) = 0;
  *(void*)((int64_t)this_ptr + 0x44) = 0;
  *(void*)((int64_t)this_ptr + 0x3c) = 0;
  *(void*)((int64_t)this_ptr + 0x57) = 1;
  *(void*)((int64_t)this_ptr + 0x59) = 0;
  if (*arg1 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_48 = FUN_00950352;
    FUN_00983230();
    param_1 = 
    "static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromLicenseDbToPublic(const license_services::LsCountLimitPtr, bool, bool, int32_t)"
    ;
    FUN_00928ab0("static petpub::CountLimitRecord pace::AuthorizationVerifier::convertCountLimitFromLicenseDbToPublic(const license_services::LsCountLimitPtr, bool, bool, int32_t)"
                 ,&g_00002bed);
    FUN_009bd14b();
    in_stack_ffffffffffffffb0 = arg1;
  }
  FUN_00a3ef7e();
  pcVar5 = "storageId";
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(void*)(this_ptr + 1) = *(void*)(lVar2 + 0x88);
  (**(code **)(*(int64_t *)*arg1 + 0x48))();
  std::string::string((string *)param_1,(string *)pcVar5);
  if (((uint64_t)in_stack_ffffffffffffffb0 & 1) == 0) {
    local_48 = ((uint64_t)in_stack_ffffffffffffffb0 >> 1 & 0x7f);
  }
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  uVar1 = *(uint *)(lVar2 + 0x4c);
  pcVar3 = (this_ptr[3] - this_ptr[2]);
  if (pcVar3 < local_48) {
    FUN_0088d550();
  }
  else if (local_48 < pcVar3) {
    this_ptr[3] = local_48 + this_ptr[2];
  }
  _memcpy(param_1,local_48,param_3);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(void*)((int64_t)this_ptr + 0x29) = *(void*)(lVar2 + 0x30);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(void*)((int64_t)this_ptr + 0x2c) = *(void*)(lVar2 + 0x34);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(void*)(this_ptr + 6) = *(void*)(lVar2 + 0x38);
  *(uint *)((int64_t)this_ptr + 0x34) = 2 - (uVar1 & 1);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(void*)((int64_t)this_ptr + 0x39) = *(void*)(lVar2 + 0x3c);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  puVar4 = (void*)((int64_t)this_ptr + 0x3c);
  *puVar4 = *(void*)(lVar2 + 0x40);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(void*)(this_ptr + 8) = *(void*)(lVar2 + 0x44);
  *(uint *)((int64_t)this_ptr + 0x44) = uVar1 & 2 ^ 3;
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar2 = FUN_00a3ef7e();
  *(void*)((int64_t)this_ptr + 0x49) = *(void*)(lVar2 + 0x48);
  FUN_009436fa();
  if (((uint64_t)in_stack_ffffffffffffffb0 & 1) != 0) {
    operator_delete(puVar4);
  }
  return;
}

