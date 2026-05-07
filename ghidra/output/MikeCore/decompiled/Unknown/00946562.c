// Function: FUN_00946562
// Address: 00946562
// Size: 922 bytes
// Class: Unknown
// String references:
//   "publisherId"
//   "authId"
//   "authInstance"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsAuthorizationPtr (0x%16X) - input parameter"
//   "bool pace::AuthorizationVerifier::getChildAuthByAuthCoordinates(int32_t, int32_t, int32_t, size_t, ...
//   "Bad LsObjectRelationVectorAuthRelation (0x%16X)"
//   "Bad LsAuthRelationPtr (0x%16X)"
//   "Bad LsAuthorizationPtr (0x%16X) - child of an AuthRelation"


undefined8 FUN_00946562(int param_1,int param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_ESI;
  ulonglong uVar4;
  longlong *local_78;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  int local_3c;
  int local_38;
  int local_34;
  
  local_60 = *(longlong *)(*param_4 + -8 + param_3 * 8);
  local_3c = param_2;
  local_38 = unaff_ESI;
  local_34 = param_1;
  if (local_60 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_78 = &local_60;
    FUN_00983230();
    FUN_00928ab0("bool pace::AuthorizationVerifier::getChildAuthByAuthCoordinates(int32_t, int32_t, int32_t, size_t, std::vector<LsAuthorizationPtr> &)"
                 ,0x30ce);
    FUN_009bd14b();
  }
  cVar1 = FUN_00a1d112();
  if (cVar1 != '\0') {
    local_48 = param_3 + 1;
    if ((ulonglong)(param_4[1] - *param_4 >> 3) < local_48) {
      FUN_00946536();
    }
    FUN_00a1ce76();
    if (local_58 == 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("bool pace::AuthorizationVerifier::getChildAuthByAuthCoordinates(int32_t, int32_t, int32_t, size_t, std::vector<LsAuthorizationPtr> &)"
                   ,0x30e3);
      FUN_009bd14b();
      local_78 = &local_58;
    }
    lVar3 = (*(longlong **)(local_58 + 8))[1] - **(longlong **)(local_58 + 8);
    if (lVar3 != 0) {
      uVar4 = 1;
      while( true ) {
        FUN_00a5960e();
        if (local_50 == 0) {
          FUN_00925fd0();
          FUN_00926010();
          local_78 = &local_50;
          FUN_00983230();
          FUN_00928ab0("bool pace::AuthorizationVerifier::getChildAuthByAuthCoordinates(int32_t, int32_t, int32_t, size_t, std::vector<LsAuthorizationPtr> &)"
                       ,FUN_000030f0);
          FUN_009bd14b();
        }
        FUN_00a1ba3c();
        *(longlong **)(*param_4 + param_3 * 8) = local_78;
        if (*(longlong *)(*param_4 + param_3 * 8) == 0) {
          FUN_00925fd0();
          FUN_00926010();
          local_78 = (longlong *)(param_3 * 8 + *param_4);
          FUN_00983230();
          FUN_00928ab0("bool pace::AuthorizationVerifier::getChildAuthByAuthCoordinates(int32_t, int32_t, int32_t, size_t, std::vector<LsAuthorizationPtr> &)"
                       ,0x30f9);
          FUN_009bd14b();
        }
        FUN_00a1c9ba();
        FUN_009bafbc();
        lVar2 = FUN_00a1c9ba();
        if (*(int *)(lVar2 + 0xa0) == local_3c) {
          FUN_00a1c9ba();
          FUN_009bafbc();
          lVar2 = FUN_00a1c9ba();
          if (*(int *)(lVar2 + 0x30) == local_38) {
            FUN_00a1c9ba();
            FUN_009bafbc();
            lVar2 = FUN_00a1c9ba();
            if (*(int *)(lVar2 + 0x34) == local_34) {
              FUN_00946536();
              return 1;
            }
          }
        }
        lVar2 = FUN_008e4ece();
        if ((local_48 < (ulonglong)(longlong)*(int *)(lVar2 + 0x28)) &&
           (cVar1 = FUN_00946562(local_34,local_3c,local_48,param_4), cVar1 != '\0')) break;
        if ((ulonglong)(lVar3 >> 5) <= uVar4) {
          return 0;
        }
        uVar4 = uVar4 + 1;
      }
      return 1;
    }
  }
  return 0;
}


