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


void FUN_0094252c(string *param_1,byte *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char *this;
  code *pcVar5;
  char *pcVar6;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  byte local_70;
  longlong *in_stack_ffffffffffffffb8;
  code *local_40;
  
  *unaff_RDI = &DAT_0251c200;
  *(undefined4 *)(unaff_RDI + 1) = 0;
  unaff_RDI[2] = 0;
  unaff_RDI[3] = 0;
  unaff_RDI[4] = 0;
  unaff_RDI[5] = 0;
  unaff_RDI[6] = 0;
  unaff_RDI[7] = 0;
  unaff_RDI[8] = 0;
  unaff_RDI[9] = 0;
  unaff_RDI[10] = 0;
  unaff_RDI[0xb] = 0;
  unaff_RDI[0xc] = 0;
  unaff_RDI[0xd] = 0;
  unaff_RDI[0xe] = 0;
  unaff_RDI[0xf] = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  this = (char *)param_1;
  if (*unaff_RSI == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_40 = FUN_0095036d;
    FUN_00983230();
    this = 
    "static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromLicenseDbToPublic(license_services::LsAuthKeyPtr, bool &, bool &, int32_t)"
    ;
    FUN_00928ab0("static petpub::SecretDataRecord pace::AuthorizationVerifier::convertSecretDataFromLicenseDbToPublic(license_services::LsAuthKeyPtr, bool &, bool &, int32_t)"
                 ,&DAT_00002d7a);
    FUN_009bd14b();
    in_stack_ffffffffffffffb8 = unaff_RSI;
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
                 ,&DAT_00002d82);
    FUN_009bd14b();
    in_stack_ffffffffffffffb8 = (longlong *)0xffffffffffffff90;
  }
  *(undefined1 *)((longlong)unaff_RDI + 0x74) = 1;
  FUN_00a184ee();
  pcVar6 = "storageId";
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(undefined4 *)(unaff_RDI + 1) = *(undefined4 *)(lVar3 + 0xe4);
  (**(code **)(*(longlong *)*unaff_RSI + 0x48))();
  std::string::string((string *)this,(string *)pcVar6);
  if (((ulonglong)in_stack_ffffffffffffffb8 & 1) == 0) {
    local_40 = (code *)((ulonglong)in_stack_ffffffffffffffb8 >> 1 & 0x7f);
  }
  pcVar5 = (code *)(unaff_RDI[3] - unaff_RDI[2]);
  if (pcVar5 < local_40) {
    FUN_0088d550();
  }
  else if (local_40 < pcVar5) {
    pcVar5 = local_40 + unaff_RDI[2];
    unaff_RDI[3] = pcVar5;
  }
  _memcpy(pcVar5,local_40,param_3);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(undefined4 *)(unaff_RDI + 0xc) = *(undefined4 *)(lVar3 + 0xec);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(undefined4 *)((longlong)unaff_RDI + 100) = *(undefined4 *)(lVar3 + 0x30);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(undefined4 *)(unaff_RDI + 0xd) = *(undefined4 *)(lVar3 + 0x68);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  if (unaff_RDI + 5 != (undefined8 *)(lVar3 + 0x38)) {
    FUN_008df080((undefined8 *)(lVar3 + 0x38),*(undefined8 *)(lVar3 + 0x40));
  }
  if (unaff_RDI[6] == unaff_RDI[5]) {
    FUN_00a184ee();
    FUN_009bafbc();
    FUN_00a184ee();
  }
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  if (unaff_RDI + 8 != (undefined8 *)(lVar3 + 200)) {
    FUN_008df080((undefined8 *)(lVar3 + 200),*(undefined8 *)(lVar3 + 0xd0));
  }
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(undefined4 *)((longlong)unaff_RDI + 0x6c) = *(undefined4 *)(lVar3 + 0x108);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  iVar2 = *(int *)(lVar3 + 0x10c);
  iVar4 = 5;
  if (*(int *)(unaff_RDI + 0xc) == 2) {
    iVar4 = iVar2;
  }
  if (iVar2 != 0) {
    iVar4 = iVar2;
  }
  *(int *)(unaff_RDI + 0xb) = iVar4;
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(undefined4 *)((longlong)unaff_RDI + 0x5c) = *(undefined4 *)(lVar3 + 0xe0);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(undefined1 *)(unaff_RDI + 0xe) = *(undefined1 *)(lVar3 + 0xa8);
  *(undefined1 *)((longlong)unaff_RDI + 0x71) = 1;
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  *(undefined1 *)((longlong)unaff_RDI + 0x72) = *(undefined1 *)(lVar3 + 0xe8);
  FUN_00a184ee();
  FUN_009bafbc();
  lVar3 = FUN_00a184ee();
  bVar1 = *(byte *)(lVar3 + 0x34);
  *(byte *)((longlong)unaff_RDI + 0x73) = bVar1;
  *param_2 = *param_2 | *(byte *)((longlong)unaff_RDI + 0x72);
  *param_1 = (string)((byte)*param_1 | bVar1);
  if (((ulonglong)in_stack_ffffffffffffffb8 & 1) != 0) {
    operator_delete(param_1);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(param_1);
  }
  return;
}


