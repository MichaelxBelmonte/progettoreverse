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

uint64_t FUN_009444b0(uint64_t param_1,int64_t *param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  void*arg1;
  int64_t lVar4;
  code *pcVar5;
  uint64_t uVar6;
  
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
      pcVar5 = (lVar4 + 0x10);
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
                     ,&g_00002e3b);
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
        (**(code **)(*(int64_t *)*arg1 + 0x48))();
        FUN_00983230();
        FUN_00928ab0("bool pace::AuthorizationVerifier::databaseInfoIsDldValid(license_services::LsDatabaseInfoPtr, const std::vector<pet::authorize::DldLastAuthChangeDate> &)"
                     ,&g_00002e42);
        FUN_009bd14b();
      }
      uVar6 = CONCAT71((int7)((uint64_t)pcVar5 >> 8),1);
      if (lVar3 < lVar4) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00a4050e();
        FUN_009bafbc();
        FUN_00a4050e();
        FUN_00983230();
        (**(code **)(*(int64_t *)*arg1 + 0x48))();
        FUN_00983230();
        FUN_00928ab0("bool pace::AuthorizationVerifier::databaseInfoIsDldValid(license_services::LsDatabaseInfoPtr, const std::vector<pet::authorize::DldLastAuthChangeDate> &)"
                     ,&g_00002e49);
        FUN_009bd14b();
      }
      goto LAB_0094479f;
    }
    lVar4 = lVar4 + 0x30;
  } while( true );
}

