// Function: FUN_0093e4ea
// Address: 0093e4ea
// Size: 2443 bytes
// Class: Unknown
// String references:
//   "counter1CurrentCount"
//   "counter1StartCount"
//   "counter2CurrentCount"
//   "counter2StartCount"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Software Auth Expired: The 64-bit counter reach its maximum of 0x%08X%08X"
//   "static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCou...
//   "Software Auth Expired: The 64-bit counter reach its minimum of 0x%08X%08X"
//   "Software Auth Expired: The 32-bit counter1 reach its maximum of 0x%08X"
//   "Software Auth Expired: The 32-bit counter1 reach its minimum of 0x%08X"
//   "Software Auth Expired: The 32-bit counter2 reach its maximum of 0x%08X"
//   "Software Auth Expired: The 32-bit counter2 reach its minimum of 0x%08X"
//   "A counter (UUID: %s) needs updating, but it can't be without a pointer to the Database Commit Items...
//   "counters64bitCombined"
//   "counter1CountsUpNotDown"
//   "counter2CountsUpNotDown"


void FUN_0093e4ea(char param_1,char param_2,undefined1 *param_3,undefined1 *param_4)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char *this;
  char *pcVar9;
  char unaff_SIL;
  undefined8 *unaff_RDI;
  int iVar10;
  longlong local_res8;
  
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar8 = FUN_00a3ef7e();
  uVar2 = *(uint *)(lVar8 + 0x34);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar8 = FUN_00a3ef7e();
  uVar3 = *(uint *)(lVar8 + 0x38);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar8 = FUN_00a3ef7e();
  uVar4 = *(uint *)(lVar8 + 0x40);
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar8 = FUN_00a3ef7e();
  uVar5 = *(uint *)(lVar8 + 0x44);
  *param_3 = 0;
  *param_4 = 0;
  FUN_00a3ef7e();
  FUN_009bafbc();
  lVar8 = FUN_00a3ef7e();
  cVar1 = *(char *)(lVar8 + 0x48);
  FUN_00a3ef7e();
  pcVar9 = "counter1CountsUpNotDown";
  FUN_009bafbc();
  lVar8 = FUN_00a3ef7e();
  if (cVar1 == '\0') {
    if (*(char *)(lVar8 + 0x30) == '\0') {
      if (((uVar2 != uVar3) && (uVar2 == 0)) && (param_1 != '\0')) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCountLimitPtr, bool, bool, bool, bool &, bool &, std::vector<pet::authorize::DatabaseCommitItem> *, int32_t)"
                     ,&DAT_0000299d);
        FUN_009bd14b();
      }
      if (uVar2 == 0) goto LAB_0093ea21;
      bVar6 = false;
      if (unaff_SIL != '\0') {
        lVar8 = FUN_00a3ef7e();
        *(uint *)(lVar8 + 0x34) = uVar2 - 1;
        lVar8 = FUN_00a3ef7e();
        bVar6 = true;
        *(undefined1 *)(lVar8 + 0xc4) = 1;
        FUN_00a3ef94();
        *param_3 = 1;
      }
    }
    else {
      if (((uVar2 != uVar3) && (uVar2 == 0xffffffff)) && (param_1 != '\0')) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCountLimitPtr, bool, bool, bool, bool &, bool &, std::vector<pet::authorize::DatabaseCommitItem> *, int32_t)"
                     ,&DAT_00002982);
        FUN_009bd14b();
      }
      if (uVar2 == 0xffffffff) {
LAB_0093ea21:
        bVar6 = false;
      }
      else {
        bVar6 = false;
        if (unaff_SIL != '\0') {
          lVar8 = FUN_00a3ef7e();
          *(uint *)(lVar8 + 0x34) = uVar2 + 1;
          lVar8 = FUN_00a3ef7e();
          bVar6 = true;
          *(undefined1 *)(lVar8 + 0xc4) = 1;
          FUN_00a3ef94();
          *param_3 = 1;
        }
      }
    }
    FUN_00a3ef7e();
    pcVar9 = "counter2CountsUpNotDown";
    FUN_009bafbc();
    lVar8 = FUN_00a3ef7e();
    if (*(char *)(lVar8 + 0x3c) == '\0') {
      if (((uVar4 != uVar5) && (uVar4 == 0)) && (param_1 != '\0')) {
        FUN_00925fd0();
        pcVar9 = (char *)FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCountLimitPtr, bool, bool, bool, bool &, bool &, std::vector<pet::authorize::DatabaseCommitItem> *, int32_t)"
                     ,&DAT_000029d8);
        FUN_009bd14b();
      }
      if ((uVar4 != 0) && (param_2 != '\0')) {
        iVar10 = uVar4 - 1;
        goto LAB_0093ebe0;
      }
    }
    else {
      if (((uVar4 != uVar5) && (uVar4 == 0xffffffff)) && (param_1 != '\0')) {
        FUN_00925fd0();
        pcVar9 = (char *)FUN_00926010();
        FUN_00983230();
        FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCountLimitPtr, bool, bool, bool, bool &, bool &, std::vector<pet::authorize::DatabaseCommitItem> *, int32_t)"
                     ,&DAT_000029bd);
        FUN_009bd14b();
      }
      if ((uVar4 != 0xffffffff) && (param_2 != '\0')) {
        iVar10 = uVar4 + 1;
LAB_0093ebe0:
        bVar7 = true;
        param_3 = param_4;
        goto LAB_0093ecb5;
      }
    }
    if (!bVar6) {
      return;
    }
    bVar7 = false;
    bVar6 = true;
    goto LAB_0093eceb;
  }
  if (*(char *)(lVar8 + 0x30) == '\0') {
    if (((param_1 != '\0') && (uVar4 != uVar5)) && ((uVar2 != uVar3 && (uVar4 == 0 && uVar2 == 0))))
    {
      FUN_00925fd0();
      pcVar9 = (char *)FUN_00926010();
      FUN_00983230();
      FUN_00983230();
      FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCountLimitPtr, bool, bool, bool, bool &, bool &, std::vector<pet::authorize::DatabaseCommitItem> *, int32_t)"
                   ,&DAT_0000294d);
      FUN_009bd14b();
    }
    if (unaff_SIL == '\0') {
      return;
    }
    if (uVar4 == 0) {
      if (uVar2 == 0) {
        return;
      }
      lVar8 = FUN_00a3ef7e();
      *(uint *)(lVar8 + 0x34) = uVar2 - 1;
      lVar8 = FUN_00a3ef7e();
      *(undefined1 *)(lVar8 + 0xc4) = 1;
      FUN_00a3ef94();
      iVar10 = -1;
      goto LAB_0093ecaa;
    }
    iVar10 = uVar4 - 1;
LAB_0093e932:
    bVar7 = true;
    bVar6 = false;
  }
  else {
    if ((((param_1 != '\0') && (uVar4 != uVar5)) && (uVar2 != uVar3)) &&
       ((uVar4 & uVar2) == 0xffffffff)) {
      FUN_00925fd0();
      pcVar9 = (char *)FUN_00926010();
      FUN_00983230();
      FUN_00983230();
      FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCountLimitPtr, bool, bool, bool, bool &, bool &, std::vector<pet::authorize::DatabaseCommitItem> *, int32_t)"
                   ,&DAT_0000291d);
      FUN_009bd14b();
    }
    if (unaff_SIL == '\0') {
      return;
    }
    if (uVar4 != 0xffffffff) {
      iVar10 = uVar4 + 1;
      goto LAB_0093e932;
    }
    if (uVar2 == 0xffffffff) {
      return;
    }
    lVar8 = FUN_00a3ef7e();
    *(uint *)(lVar8 + 0x34) = uVar2 + 1;
    lVar8 = FUN_00a3ef7e();
    *(undefined1 *)(lVar8 + 0xc4) = 1;
    FUN_00a3ef94();
    iVar10 = 0;
LAB_0093ecaa:
    bVar6 = true;
    bVar7 = false;
  }
LAB_0093ecb5:
  lVar8 = FUN_00a3ef7e();
  *(int *)(lVar8 + 0x40) = iVar10;
  lVar8 = FUN_00a3ef7e();
  *(undefined1 *)(lVar8 + 199) = 1;
  FUN_00a3ef94();
  *param_3 = 1;
LAB_0093eceb:
  this = &DAT_025197b8;
  if (local_res8 == 0) {
    FUN_00925fd0();
    pcVar9 = (char *)FUN_00926010();
    (**(code **)(*(longlong *)*unaff_RDI + 0x48))();
    FUN_00983230();
    this = 
    "static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCountLimitPtr, bool, bool, bool, bool &, bool &, std::vector<pet::authorize::DatabaseCommitItem> *, int32_t)"
    ;
    FUN_00928ab0("static void pace::AuthorizationVerifier::advanceAndCheckTheCounterLicenseDb(license_services::LsCountLimitPtr, bool, bool, bool, bool &, bool &, std::vector<pet::authorize::DatabaseCommitItem> *, int32_t)"
                 ,&DAT_000029ef);
    FUN_009bd14b();
  }
  if (bVar6) {
    (**(code **)(*(longlong *)*unaff_RDI + 0x48))();
    std::string::operator=((string *)this,(string *)pcVar9);
    FUN_009437da();
  }
  if (bVar7) {
    (**(code **)(*(longlong *)*unaff_RDI + 0x48))();
    std::string::operator=((string *)this,(string *)pcVar9);
    FUN_009437da();
  }
  FUN_008b5046();
  return;
}


