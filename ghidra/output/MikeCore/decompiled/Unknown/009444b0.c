// Function: FUN_009444b0
// Address: 009444b0
// Size: 769 bytes
// Class: Unknown
// String references:
//   "issuerId"
//   "lastAuthChangeDate"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad lastAuthChangeDate (%s) in inDldLastAuthChangeDateList"
//   "bool pace::AuthorizationVerifier::databaseInfoIsDldValid(license_services::LsDatabaseInfoPtr, const...
//   "Bad lastAuthChangeDate (%s) in DatabaseInfo record (UUID:%s)"


ulonglong FUN_009444b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *unaff_RSI;
  longlong lVar4;
  code *pcVar5;
  ulonglong uVar6;
  
  lVar4 = *param_2;
  lVar3 = param_2[1];
  do {
    if (lVar4 == lVar3) {
      uVar6 = 0;
LAB_0094479f:
      return uVar6 & 0xffffffff;
    }
    iVar1 = *(int *)(lVar4 + 8);
    FUN_00a4050e();
    FUN_009bafbc();
    lVar2 = FUN_00a4050e();
    if (iVar1 == *(int *)(lVar2 + 200)) {
      pcVar5 = (code *)(lVar4 + 0x10);
      lVar4 = FUN_009f3f64();
      FUN_00a4050e();
      FUN_009bafbc();
      FUN_00a4050e();
      lVar3 = FUN_009f3f64();
      lVar2 = FUN_009585b8();
      if (lVar4 == lVar2) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("bool pace::AuthorizationVerifier::databaseInfoIsDldValid(license_services::LsDatabaseInfoPtr, const std::vector<pet::authorize::DldLastAuthChangeDate> &)"
                     ,&DAT_00002e3b);
        FUN_009bd14b();
      }
      lVar2 = FUN_009585b8();
      if (lVar3 == lVar2) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00a4050e();
        FUN_009bafbc();
        FUN_00a4050e();
        pcVar5 = FUN_0094ef70;
        FUN_00983230();
        (**(code **)(*(longlong *)*unaff_RSI + 0x48))();
        FUN_00983230();
        FUN_00928ab0("bool pace::AuthorizationVerifier::databaseInfoIsDldValid(license_services::LsDatabaseInfoPtr, const std::vector<pet::authorize::DldLastAuthChangeDate> &)"
                     ,&DAT_00002e42);
        FUN_009bd14b();
      }
      uVar6 = CONCAT71((int7)((ulonglong)pcVar5 >> 8),1);
      if (lVar3 < lVar4) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00a4050e();
        FUN_009bafbc();
        FUN_00a4050e();
        FUN_00983230();
        (**(code **)(*(longlong *)*unaff_RSI + 0x48))();
        FUN_00983230();
        FUN_00928ab0("bool pace::AuthorizationVerifier::databaseInfoIsDldValid(license_services::LsDatabaseInfoPtr, const std::vector<pet::authorize::DldLastAuthChangeDate> &)"
                     ,&DAT_00002e49);
        FUN_009bd14b();
      }
      goto LAB_0094479f;
    }
    lVar4 = lVar4 + 0x30;
  } while( true );
}


