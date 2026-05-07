// Function: FUN_0093890a
// Address: 0093890a
// Size: 817 bytes
// Class: MUPitchMapper
// String references:
//   "storageId"
//   "writeProperties"
//   "timeLimited"
//   "countLimited"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsDeveloperBlockPtr (0x%16X)"
//   "static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromLicenseDbToPublic...
//   "dataReadOnly"
//   "dataWritable"
//   "writtenOnce"
//   "sizeLimit"
// === MUPitchMapper properties ===
//   MUPitchMapperCriterion _criterion
//   MUPartMapperScaleScope _scaleScope
//   MUPartMapperVoicingMode _voicingMode
//                   _minInterval
//                   _maxInterval
//                   _minPitchIndex
//                   _maxPitchIndex
//                   _maxTranspositionInterval
//                   _lowestIntervalShouldMatchForthOrFifth
//                   _omitsUnplayedDegrees
//                   _degreeMaskMatchesGender
//                   _redirectsOnDominants
//                   _lowestPitchDegreeMask


void FUN_0093890a(string *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  int64_t lVar3;
  char *this;
  code *pcVar4;
  string *psVar5;
  char *pcVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t *in_stack_ffffffffffffffb8;
  code *local_40;
  
  *this_ptr = &g_0251c198;
  *(void*)(this_ptr + 1) = 0;
  this_ptr[2] = 0;
  this_ptr[3] = 0;
  this_ptr[4] = 0;
  this_ptr[5] = 0;
  this_ptr[6] = 0;
  this_ptr[7] = 0;
  this_ptr[8] = 0;
  this_ptr[9] = 0;
  *(void*)((int64_t)this_ptr + 0x4d) = 0;
  this = (char *)param_1;
  if (*arg1 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_40 = FUN_0094fb4d;
    FUN_00983230();
    this = 
    "static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromLicenseDbToPublic(license_services::LsDeveloperBlockPtr, bool &, bool &, int32_t)"
    ;
    FUN_00928ab0("static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromLicenseDbToPublic(license_services::LsDeveloperBlockPtr, bool &, bool &, int32_t)"
                 ,&g_00001b88);
    FUN_009bd14b();
    in_stack_ffffffffffffffb8 = arg1;
  }
  *(void*)((int64_t)this_ptr + 0x4b) = 1;
  FUN_00a432fe();
  pcVar6 = "storageId";
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(void*)(this_ptr + 1) = *(void*)(lVar3 + 0xa4);
  (**(code **)(*(int64_t *)*arg1 + 0x48))();
  std::string::string((string *)this,(string *)pcVar6);
  if (((uint64_t)in_stack_ffffffffffffffb8 & 1) == 0) {
    local_40 = ((uint64_t)in_stack_ffffffffffffffb8 >> 1 & 0x7f);
  }
  pcVar4 = (this_ptr[3] - this_ptr[2]);
  if (pcVar4 < local_40) {
    FUN_0088d550();
  }
  else if (local_40 < pcVar4) {
    pcVar4 = local_40 + this_ptr[2];
    this_ptr[3] = pcVar4;
  }
  _memcpy(pcVar4,local_40,param_3);
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  psVar5 = (string *)(lVar3 + 0x38);
  if ((string *)(this_ptr + 5) != psVar5) {
    FUN_008df080(psVar5,*(void*)(lVar3 + 0x40));
  }
  if (this_ptr[6] == this_ptr[5]) {
    FUN_00a432fe();
    FUN_009bafbc();
    FUN_00a432fe();
  }
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  iVar2 = *(int *)(lVar3 + 200);
  *(int *)(this_ptr + 8) = iVar2;
  if (iVar2 == 2) {
    FUN_00a432fe();
    FUN_009bafbc();
    lVar3 = FUN_00a432fe();
    if (*(char *)(lVar3 + 0xcc) != '\0') {
      *(void*)(this_ptr + 8) = 3;
    }
  }
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(void*)((int64_t)this_ptr + 0x44) = *(void*)(lVar3 + 0xa0);
  *(void*)(this_ptr + 9) = 1;
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(void*)((int64_t)this_ptr + 0x49) = *(void*)(lVar3 + 0xa8);
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  bVar1 = *(byte *)(lVar3 + 0x30);
  *(byte *)((int64_t)this_ptr + 0x4a) = bVar1;
  if (*(char *)((int64_t)this_ptr + 0x4b) != '\0') {
    *param_2 = *param_2 | *(byte *)((int64_t)this_ptr + 0x49);
    *param_1 = (string)((byte)*param_1 | bVar1);
    psVar5 = param_1;
  }
  if (((uint64_t)in_stack_ffffffffffffffb8 & 1) != 0) {
    operator_delete(psVar5);
  }
  return;
}

