// Function: FUN_0094252c
// Address: 0094252c
// Size: 1321 bytes
// Class: GNUni
// String references:
//   "version"
//   "format"
//   "storageId"
//   "writeProperties"
//   "nonce"
//   "timeLimited"
//   "countLimited"
//   "typeOfSecret"
//   "algorithmId"
//   "encryptedWithId"
//   "intendedUseOnly"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsAuthKeyPtr (0x%16X)"
//   "static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromLicenseDbToPublic...
//   "binary"
//   "Key format \"%d\" is not supported"
//   "dataReadOnly"
//   "dataWritable"
//   "sizeLimit"
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


void FUN_0094252c(string *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  char *this;
  code *pcVar5;
  char *pcVar6;
  int64_t *arg1;
  void*this_ptr;
  byte local_70;
  int64_t *in_stack_ffffffffffffffb8;
  code *local_40;
  
  *this_ptr = &g_0251c200;
  *(void*)(this_ptr + 1) = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  this_ptr[10] = 0;
  this_ptr[0xb] = 0;
  this_ptr[0xc] = 0;
  this_ptr[0xd] = 0;
  this_ptr[0xe] = 0;
  this_ptr[0xf] = 0;
  *(void*)(this_ptr + 0x10) = 0;
  this = (char *)param_1;
  if (*arg1 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_40 = FUN_0095036d;
    FUN_00983230();
    this = 
    "static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromLicenseDbToPublic(license_services::LsAuthKeyPtr, bool &, bool &, int32_t)"
    ;
    FUN_00928ab0("static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromLicenseDbToPublic(license_services::LsAuthKeyPtr, bool &, bool &, int32_t)"
                 ,&g_00002d7a);
    FUN_009bd14b();
    in_stack_ffffffffffffffb8 = arg1;
  }
  FUN_00a184ee();
  pcVar6 = "format";
  FUN_009bafbc();
  FUN_00a184ee();
  std::string::string((string *)this,(string *)pcVar6);
  iVar2 = std::string::compare(this);
  if (iVar2 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_40 = FUN_009b6370;
    FUN_00983230();
    this = 
    "static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromLicenseDbToPublic(license_services::LsAuthKeyPtr, bool &, bool &, int32_t)"
    ;
    FUN_00928ab0("static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromLicenseDbToPublic(license_services::LsAuthKeyPtr, bool &, bool &, int32_t)"
                 ,&g_00002d82);
    FUN_009bd14b();
    in_stack_ffffffffffffffb8 = (int64_t *)0xffffffffffffff90;
  }
  *(void*)((int64_t)this_ptr + 0x74) = 1;
  FUN_00a184ee();
  pcVar6 = "storageId";
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(void*)(this_ptr + 1) = *(void*)(lVar3 + 0xe4);
  (**(code **)(*(int64_t *)*arg1 + 0x48))();
  std::string::string((string *)this,(string *)pcVar6);
  if (((uint64_t)in_stack_ffffffffffffffb8 & 1) == 0) {
    local_40 = ((uint64_t)in_stack_ffffffffffffffb8 >> 1 & 0x7f);
  }
  pcVar5 = (this_ptr[3] - this_ptr[2]);
  if (pcVar5 < local_40) {
    FUN_0088d550();
  }
  else if (local_40 < pcVar5) {
    pcVar5 = local_40 + this_ptr[2];
    this_ptr[3] = pcVar5;
  }
  _memcpy(pcVar5,local_40,param_3);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(void*)(this_ptr + 0xc) = *(void*)(lVar3 + 0xec);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(void*)((int64_t)this_ptr + 100) = *(void*)(lVar3 + 0x30);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(void*)(this_ptr + 0xd) = *(void*)(lVar3 + 0x68);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  if (this_ptr + 5 != (void*)(lVar3 + 0x38)) {
    FUN_008df080((void*)(lVar3 + 0x38),*(void*)(lVar3 + 0x40));
  }
  if (this_ptr[6] == this_ptr[5]) {
    FUN_00a184ee();
    FUN_009bafbc();
    FUN_00a184ee();
  }
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  if (this_ptr + 8 != (void*)(lVar3 + 200)) {
    FUN_008df080((void*)(lVar3 + 200),*(void*)(lVar3 + 0xd0));
  }
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(void*)((int64_t)this_ptr + 0x6c) = *(void*)(lVar3 + 0x108);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  iVar2 = *(int *)(lVar3 + 0x10c);
  iVar4 = 5;
  if (*(int *)(this_ptr + 0xc) == 2) {
    iVar4 = iVar2;
  }
  if (iVar2 != 0) {
    iVar4 = iVar2;
  }
  *(int *)(this_ptr + 0xb) = iVar4;
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(void*)((int64_t)this_ptr + 0x5c) = *(void*)(lVar3 + 0xe0);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(void*)(this_ptr + 0xe) = *(void*)(lVar3 + 0xa8);
  *(void*)((int64_t)this_ptr + 0x71) = 1;
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(void*)((int64_t)this_ptr + 0x72) = *(void*)(lVar3 + 0xe8);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  bVar1 = *(byte *)(lVar3 + 0x34);
  *(byte *)((int64_t)this_ptr + 0x73) = bVar1;
  *param_2 = *param_2 | *(byte *)((int64_t)this_ptr + 0x72);
  *param_1 = (string)((byte)*param_1 | bVar1);
  if (((uint64_t)in_stack_ffffffffffffffb8 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(param_1);
  }
  return;
}

