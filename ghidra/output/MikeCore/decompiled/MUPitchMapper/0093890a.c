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


void FUN_0093890a(string *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  char *this;
  code *pcVar4;
  string *psVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong *in_stack_ffffffffffffffb8;
  code *local_40;
  
  *unaff_RDI = &DAT_0251c198;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  *(undefined8 *)((longlong)unaff_RDI + 0x4d) = 0;
  this = (char *)param_1;
  if (*unaff_RSI == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_40 = FUN_0094fb4d;
    FUN_00983230();
    this = 
    "static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromLicenseDbToPublic(license_services::LsDeveloperBlockPtr, bool &, bool &, int32_t)"
    ;
    FUN_00928ab0("static petpub::DeveloperDataRecord pace::AuthorizationVerifier::convertDevDataFromLicenseDbToPublic(license_services::LsDeveloperBlockPtr, bool &, bool &, int32_t)"
                 ,&DAT_00001b88);
    FUN_009bd14b();
    in_stack_ffffffffffffffb8 = unaff_RSI;
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x4b) = 1;
  FUN_00a432fe();
  pcVar6 = "storageId";
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(lVar3 + 0xa4);
  (**(code **)(*(longlong *)*unaff_RSI + 0x48))();
  std::string::string((string *)this,(string *)pcVar6);
  if (((ulonglong)in_stack_ffffffffffffffb8 & 1) == 0) {
    local_40 = (code *)((ulonglong)in_stack_ffffffffffffffb8 >> 1 & 0x7f);
  }
  pcVar4 = (code *)(unaff_RDI[3] - unaff_RDI[2]);
  if (pcVar4 < local_40) {
    FUN_0088d550();
  }
  else if (local_40 < pcVar4) {
    pcVar4 = local_40 + unaff_RDI[2];
    unaff_RDI[3] = pcVar4;
  }
  _memcpy(pcVar4,local_40,param_3);
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  psVar5 = (string *)(lVar3 + 0x38);
  if ((string *)(unaff_RDI + 5) != psVar5) {
    FUN_008df080(psVar5,*(undefined8 *)(lVar3 + 0x40));
  }
  if (unaff_RDI[6] == unaff_RDI[5]) {
    FUN_00a432fe();
    FUN_009bafbc();
    FUN_00a432fe();
  }
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  iVar2 = *(int *)(lVar3 + 200);
  *(int *)(unaff_RDI + 8) = iVar2;
  if (iVar2 == 2) {
    FUN_00a432fe();
    FUN_009bafbc();
    lVar3 = FUN_00a432fe();
    if (*(char *)(lVar3 + 0xcc) != '\0') {
      *(undefined4 *)(unaff_RDI + 8) = 3;
    }
  }
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(undefined4 *)((longlong)unaff_RDI + 0x44) = *(undefined4 *)(lVar3 + 0xa0);
  *(undefined1 *)(unaff_RDI + 9) = 1;
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  *(undefined1 *)((longlong)unaff_RDI + 0x49) = *(undefined1 *)(lVar3 + 0xa8);
  FUN_00a432fe();
  FUN_009bafbc();
  lVar3 = FUN_00a432fe();
  bVar1 = *(byte *)(lVar3 + 0x30);
  *(byte *)((longlong)unaff_RDI + 0x4a) = bVar1;
  if (*(char *)((longlong)unaff_RDI + 0x4b) != '\0') {
    *param_2 = *param_2 | *(byte *)((longlong)unaff_RDI + 0x49);
    *param_1 = (string)((byte)*param_1 | bVar1);
    psVar5 = param_1;
  }
  if (((ulonglong)in_stack_ffffffffffffffb8 & 1) != 0) {
    operator_delete(psVar5);
  }
  return;
}


