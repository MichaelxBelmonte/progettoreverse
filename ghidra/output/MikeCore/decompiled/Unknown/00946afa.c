// Function: FUN_00946afa
// Address: 00946afa
// Size: 898 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Bad LsAuthorizationPtr (0x%16X) - input parameter"
//   "Bad LsObjectRelationVectorAuthRelation (0x%16X)"
//   "Bad LsAuthRelationPtr (0x%16X)"
//   "Bad LsAuthorizationPtr (0x%16X) - child of an AuthRelation"
//   "bool pace::AuthorizationVerifier::getChildAuthByAuthUuid(const std::string &, size_t, std::vector<L...


undefined8 FUN_00946afa(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  char *pcVar8;
  void *pvVar9;
  void *pvVar10;
  byte *unaff_RSI;
  longlong *plVar11;
  void *pvVar12;
  ulonglong uVar13;
  longlong *local_70;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  
  local_58 = *(longlong *)(*param_1 + -8 + param_2 * 8);
  if (local_58 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_70 = &local_58;
    FUN_00983230();
    FUN_00928ab0("bool pace::AuthorizationVerifier::getChildAuthByAuthUuid(const std::string &, size_t, std::vector<LsAuthorizationPtr> &)"
                 ,0x3129);
    FUN_009bd14b();
  }
  cVar3 = FUN_00a1d112();
  if (cVar3 != '\0') {
    uVar1 = param_2 + 1;
    if ((ulonglong)(param_1[1] - *param_1 >> 3) < uVar1) {
      FUN_00946536();
    }
    FUN_00a1ce76();
    if (local_50 == 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("bool pace::AuthorizationVerifier::getChildAuthByAuthUuid(const std::string &, size_t, std::vector<LsAuthorizationPtr> &)"
                   ,0x313e);
      FUN_009bd14b();
      local_70 = &local_50;
    }
    lVar7 = (*(longlong **)(local_50 + 8))[1] - **(longlong **)(local_50 + 8);
    if (lVar7 != 0) {
      uVar13 = 1;
      while( true ) {
        FUN_00a5960e();
        if (local_48 == 0) {
          FUN_00925fd0();
          FUN_00926010();
          local_70 = &local_48;
          FUN_00983230();
          FUN_00928ab0("bool pace::AuthorizationVerifier::getChildAuthByAuthUuid(const std::string &, size_t, std::vector<LsAuthorizationPtr> &)"
                       ,0x314b);
          FUN_009bd14b();
        }
        FUN_00a1ba3c();
        *(longlong **)(*param_1 + param_2 * 8) = local_70;
        plVar11 = *(longlong **)(*param_1 + param_2 * 8);
        pcVar8 = (char *)local_70;
        if (plVar11 == (longlong *)0x0) {
          FUN_00925fd0();
          FUN_00926010();
          local_70 = (longlong *)(param_2 * 8 + *param_1);
          FUN_00983230();
          pcVar8 = 
          "bool pace::AuthorizationVerifier::getChildAuthByAuthUuid(const std::string &, size_t, std::vector<LsAuthorizationPtr> &)"
          ;
          FUN_00928ab0("bool pace::AuthorizationVerifier::getChildAuthByAuthUuid(const std::string &, size_t, std::vector<LsAuthorizationPtr> &)"
                       ,0x3154);
          FUN_009bd14b();
          plVar11 = *(longlong **)(*param_1 + param_2 * 8);
        }
        pbVar5 = (byte *)(**(code **)(*plVar11 + 0x48))();
        bVar2 = *pbVar5;
        if ((bVar2 & 1) == 0) {
          pvVar12 = (void *)(ulonglong)(bVar2 >> 1);
        }
        else {
          pvVar12 = *(void **)(pbVar5 + 8);
        }
        if ((*unaff_RSI & 1) == 0) {
          pvVar10 = (void *)(ulonglong)(*unaff_RSI >> 1);
        }
        else {
          pvVar10 = *(void **)(unaff_RSI + 8);
        }
        pvVar9 = pvVar10;
        if (pvVar12 < pvVar10) {
          pvVar9 = pvVar12;
        }
        if (((pvVar9 == (void *)0x0) ||
            (iVar4 = _memcmp((void *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1),pvVar9,(uint)bVar2),
            iVar4 == 0)) && (pvVar10 == pvVar12)) break;
        lVar6 = FUN_008e4ece();
        if ((uVar1 < (ulonglong)(longlong)*(int *)(lVar6 + 0x28)) &&
           (cVar3 = FUN_00946afa(param_1,uVar1), cVar3 != '\0')) {
          return 1;
        }
        if ((ulonglong)(lVar7 >> 5) <= uVar13) {
          return 0;
        }
        uVar13 = uVar13 + 1;
      }
      FUN_00946536();
      return 1;
    }
  }
  return 0;
}


