// Function: FUN_0094631c
// Address: 0094631c
// Size: 538 bytes
// Class: Unknown
// String references:
//   "publisherId"
//   "authId"
//   "authInstance"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsLicensePtr (0x%16X)"
//   "Bad LsAuthorizationPtr (0x%16X)"
//   "void pace::AuthorizationVerifier::getChainInLicenseByAuthCoordinates(license_services::LsLicensePtr...


void FUN_0094631c(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *unaff_RSI;
  longlong *in_stack_ffffffffffffffa8;
  
  if (*unaff_RSI == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("void pace::AuthorizationVerifier::getChainInLicenseByAuthCoordinates(license_services::LsLicensePtr, int32_t, int32_t, int32_t, std::vector<LsAuthorizationPtr> &)"
                 ,&DAT_00003079);
    FUN_009bd14b();
    in_stack_ffffffffffffffa8 = unaff_RSI;
  }
  FUN_00946536();
  FUN_00a52804();
  *(longlong **)*param_4 = in_stack_ffffffffffffffa8;
  if (*(longlong *)*param_4 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("void pace::AuthorizationVerifier::getChainInLicenseByAuthCoordinates(license_services::LsLicensePtr, int32_t, int32_t, int32_t, std::vector<LsAuthorizationPtr> &)"
                 ,0x3084);
    FUN_009bd14b();
  }
  FUN_00a1c9ba();
  FUN_009bafbc();
  lVar2 = FUN_00a1c9ba();
  if (*(int *)(lVar2 + 0xa0) == param_1) {
    FUN_00a1c9ba();
    FUN_009bafbc();
    lVar2 = FUN_00a1c9ba();
    if (*(int *)(lVar2 + 0x30) == param_2) {
      if (param_3 == 0) {
        return;
      }
      FUN_00a1c9ba();
      FUN_009bafbc();
      lVar2 = FUN_00a1c9ba();
      if (*(int *)(lVar2 + 0x34) == param_3) {
        return;
      }
    }
  }
  cVar1 = FUN_00946562(param_3,param_1,1,param_4);
  if (cVar1 == '\0') {
    param_4[1] = *param_4;
  }
  return;
}


