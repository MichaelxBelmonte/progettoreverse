// Function: FUN_00941e38
// Address: 00941e38
// Size: 1648 bytes
// Class: Unknown
// String references:
//   "version"
//   "storageId"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Could not get a vector of TimeLimits"
//   "Could not get a vector of CountLimits"
//   "Could not get a vector of DeveloperBlocks"
//   "static void pace::AuthorizationVerifier::populateAuthStorageLicenseDb(license_services::LsAuthoriza...
//   "Could not get a vector of AuthKeys"


void FUN_00941e38(undefined8 param_1,longlong *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_148;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  bool local_31;
  
  local_35 = 0;
  local_34 = 0;
  local_33 = 0;
  local_32 = 0;
  if (param_2 == (longlong *)0x0) {
    local_31 = true;
  }
  else {
    local_31 = param_2[1] == *param_2;
  }
  FUN_00a1d152();
  if (local_88 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthStorageLicenseDb(license_services::LsAuthorizationPtr, const boost::posix_time::ptime &, const std::vector<uint32_t> *, petpub::AuthStorage &, int32_t, int32_t)"
                 ,&DAT_000026f4);
    FUN_009bd14b();
  }
  lVar6 = (*(longlong **)(local_88 + 8))[1] - **(longlong **)(local_88 + 8);
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      FUN_00a59e2e();
      if (local_148 != 0) {
        FUN_00a3ef7e();
        FUN_009bafbc();
        lVar2 = FUN_00a3ef7e();
        if (*(int *)(lVar2 + 0x88) != -0x80000000) {
          if (local_31 == false) {
            piVar3 = (int *)*param_2;
            piVar1 = (int *)param_2[1];
            FUN_00a3ef7e();
            FUN_009bafbc();
            lVar2 = FUN_00a3ef7e();
            piVar4 = piVar3;
            if (piVar3 != piVar1) {
              do {
                piVar4 = piVar3;
                if (*piVar3 == *(int *)(lVar2 + 0x88)) break;
                piVar3 = piVar3 + 1;
                piVar4 = piVar1;
              } while (piVar1 != piVar3);
            }
            if (piVar4 == (int *)param_2[1]) goto LAB_0094200e;
          }
          FUN_0093ee92(0,0,param_4);
          FUN_00940e8a();
          FUN_008e969a();
        }
      }
LAB_0094200e:
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)(lVar6 >> 5));
  }
  FUN_00a1d3ee();
  if (local_80 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthStorageLicenseDb(license_services::LsAuthorizationPtr, const boost::posix_time::ptime &, const std::vector<uint32_t> *, petpub::AuthStorage &, int32_t, int32_t)"
                 ,&DAT_00002717);
    FUN_009bd14b();
  }
  lVar6 = (*(longlong **)(local_80 + 8))[1] - **(longlong **)(local_80 + 8);
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      FUN_00a5a60e();
      if (local_148 != 0) {
        if (local_31 == false) {
          piVar3 = (int *)*param_2;
          piVar1 = (int *)param_2[1];
          FUN_00a432fe();
          FUN_009bafbc();
          lVar2 = FUN_00a432fe();
          piVar4 = piVar3;
          if (piVar3 != piVar1) {
            do {
              piVar4 = piVar3;
              if (*piVar3 == *(int *)(lVar2 + 0xa4)) break;
              piVar3 = piVar3 + 1;
              piVar4 = piVar1;
            } while (piVar1 != piVar3);
          }
          if (piVar4 == (int *)param_2[1]) goto LAB_0094215e;
        }
        FUN_0093890a(&local_34,&local_35);
        FUN_0093f3be();
        FUN_008eab00();
      }
LAB_0094215e:
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)(lVar6 >> 5));
  }
  FUN_00a1d942();
  if (local_78 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthStorageLicenseDb(license_services::LsAuthorizationPtr, const boost::posix_time::ptime &, const std::vector<uint32_t> *, petpub::AuthStorage &, int32_t, int32_t)"
                 ,&DAT_00002738);
    FUN_009bd14b();
  }
  lVar6 = (*(longlong **)(local_78 + 8))[1] - **(longlong **)(local_78 + 8);
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      FUN_00a58e2e();
      if (local_148 != 0) {
        FUN_00a184ee();
        FUN_009bafbc();
        lVar2 = FUN_00a184ee();
        if (*(int *)(lVar2 + 0x108) == param_3) {
          if (local_31 == false) {
            piVar3 = (int *)*param_2;
            piVar1 = (int *)param_2[1];
            FUN_00a184ee();
            FUN_009bafbc();
            lVar2 = FUN_00a184ee();
            piVar4 = piVar3;
            if (piVar3 != piVar1) {
              do {
                piVar4 = piVar3;
                if (*piVar3 == *(int *)(lVar2 + 0xe4)) break;
                piVar3 = piVar3 + 1;
                piVar4 = piVar1;
              } while (piVar1 != piVar3);
            }
            if (piVar4 == (int *)param_2[1]) goto LAB_009422e4;
          }
          FUN_0094252c(&local_32,&local_33);
          FUN_0093f6a6();
          FUN_008eb99a();
        }
      }
LAB_009422e4:
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)(lVar6 >> 5));
  }
  FUN_00a1e028();
  if (local_70 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("static void pace::AuthorizationVerifier::populateAuthStorageLicenseDb(license_services::LsAuthorizationPtr, const boost::posix_time::ptime &, const std::vector<uint32_t> *, petpub::AuthStorage &, int32_t, int32_t)"
                 ,&DAT_0000275a);
    FUN_009bd14b();
  }
  lVar6 = (*(longlong **)(local_70 + 8))[1] - **(longlong **)(local_70 + 8);
  if (lVar6 != 0) {
    uVar5 = 0;
    do {
      FUN_00a5c9de();
      if (local_148 != 0) {
        FUN_00a609be();
        FUN_009bafbc();
        lVar2 = FUN_00a609be();
        if (*(int *)(lVar2 + 0xd0) != -0x80000000) {
          if (local_31 == false) {
            piVar3 = (int *)*param_2;
            piVar1 = (int *)param_2[1];
            FUN_00a609be();
            FUN_009bafbc();
            lVar2 = FUN_00a609be();
            piVar4 = piVar3;
            if (piVar3 != piVar1) {
              do {
                piVar4 = piVar3;
                if (*piVar3 == *(int *)(lVar2 + 0xd0)) break;
                piVar3 = piVar3 + 1;
                piVar4 = piVar1;
              } while (piVar1 != piVar3);
            }
            if (piVar4 == (int *)param_2[1]) goto LAB_0094246b;
          }
          FUN_00939176();
          FUN_00941634();
          FUN_008e844a();
        }
      }
LAB_0094246b:
      uVar5 = uVar5 + 1;
    } while (uVar5 < (ulonglong)(lVar6 >> 5));
  }
  FUN_00941ba8(local_33,local_34,local_32);
  return;
}


