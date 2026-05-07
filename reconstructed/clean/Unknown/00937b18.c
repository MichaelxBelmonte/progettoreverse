// Function: FUN_00937b18
// Address: 00937b18
// Size: 1792 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "The AuthChain from the caller is empty"
//   "dlcCloudAuthKeyExchange requires an encrypted channel setup with openLicenseDaemonEncryptedChannel ...
//   "Can't verify an authChain that is marked as not authorized."
//   "iLok1 VerifyAuth: Not authorized"
//   "void pace::AuthorizationVerifier::verifyAuthIlokCloud(petpub::AuthChain &, const petpub::VerifyAuth...

void FUN_00937b18(uint64_t param_1,char *param_2,int64_t param_3,int64_t *param_4)

{
  bool bVar1;
  uint64_t uVar2;
  string *psVar3;
  char *pcVar4;
  int64_t lVar5;
  dword *pdVar6;
  int64_t arg1;
  int64_t this_ptr;
  int64_t *plVar7;
  uint32_t uVar8;
  int64_t local_res8;
  int64_t *local_res10;
  uint64_t local_390;
  string *local_388;
  uint64_t local_380;
  void*local_b8;
  int64_t local_b0;
  int64_t local_a8;
  uint64_t local_a0;
  uint64_t local_98;
  uint16_t local_90;
  uint8_t local_8e;
  int64_t local_88;
  uint64_t local_80;
  int64_t local_78;
  int64_t lStack_70;
  uint64_t local_68;
  int64_t local_58;
  int64_t lStack_50;
  uint64_t local_48;
  char *local_40;
  int64_t *local_38;
  
  local_88 = param_3;
  local_80 = param_1;
  local_40 = param_2;
  local_38 = param_4;
  if (*(int64_t *)(arg1 + 0x10) == *(int64_t *)(arg1 + 8)) {
    FUN_00925fd0();
    uVar2 = FUN_00926010();
    uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlokCloud(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                         ,0x3bf2);
    FUN_009bd14b(uVar8,uVar2);
  }
  if (*(char *)(arg1 + 0x20) == '\0') {
    FUN_00925fd0();
    uVar2 = FUN_00926010();
    uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlokCloud(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                         ,0x3bf9);
    FUN_009bd14b(uVar8,uVar2);
  }
  FUN_0094c1c0();
  psVar3 = *(string **)(local_40 + 0x18);
  pcVar4 = local_40;
  FUN_00942a9c(local_40,psVar3,0);
  if (*(char *)(arg1 + 0x20) == '\0') {
    FUN_00925fd0();
    psVar3 = (string *)FUN_00926010();
    pcVar4 = 
    "void pace::AuthorizationVerifier::verifyAuthIlokCloud(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
    ;
    FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlokCloud(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                 ,0x3c33);
    FUN_009bd14b();
  }
  FUN_009f4dea();
  if ((*(byte *)(arg1 + 0x40) & 1) != 0) {
    operator_delete(pcVar4);
  }
  *(void*)(arg1 + 0x50) = local_380;
  *(string **)(arg1 + 0x48) = local_388;
  *(void*)(arg1 + 0x40) = local_390;
  std::string::operator=(local_388,psVar3);
  if (local_38 == (int64_t *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = 7 < (uint64_t)(local_38[1] - *local_38);
  }
  if ((local_res8 != 0) && (local_res10 != (int64_t *)0x0)) {
    lVar5 = local_res10[1] - *local_res10;
    if (lVar5 != 0) {
      plVar7 = local_38;
      if (!bVar1) {
        plVar7 = (int64_t *)0x0;
      }
      FUN_00929d84(lVar5,local_res8,*local_res10,plVar7);
      goto LAB_0093819a;
    }
  }
  if (bVar1) {
    FUN_009b4e10();
    local_b8 = &g_025199e8;
    local_98 = 0x400000000;
    local_a0 = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_90 = 0;
    local_8e = 1;
    if (*(int64_t *)(this_ptr + 0x70) == 0) {
      FUN_00925fd0();
      uVar2 = FUN_00926010();
      uVar8 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuthIlokCloud(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, std::vector<uint8_t> *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<int8_t>)"
                           ,0x3c64);
      FUN_009bd14b(uVar8,uVar2);
    }
    uVar8 = FUN_008f91be();
    FUN_00953d64(uVar8,local_38[1]);
    local_68 = 0;
    local_78 = 0;
    lStack_70 = 0;
    local_48 = 0;
    local_58 = 0;
    lStack_50 = 0;
    FUN_0094783f(0,1);
    uVar8 = FUN_00928f8a(&local_58,&local_78);
    FUN_009511af(uVar8,&local_b8);
    pdVar6 = &MACH_HEADER.cpusubtype;
    if (7 < (uint64_t)(local_a8 - local_b0)) {
      FUN_0092b0a2();
    }
    if (local_58 != 0) {
      lStack_50 = local_58;
      operator_delete(pdVar6);
    }
    if (local_78 != 0) {
      lStack_70 = local_78;
      operator_delete(pdVar6);
    }
    FUN_008b72ec();
    FUN_008b6af6();
    FUN_0094d0ec();
  }
LAB_0093819a:
  if (local_88 != 0) {
    FUN_0092d730(local_88,local_80);
  }
  if (((local_40[0xb] != '\0') && (FUN_0092e102(), *(char *)(this_ptr + 0x196) != '\0')) &&
     (*(char *)(this_ptr + 0x17c) != '\0')) {
    FUN_009b4e10();
    FUN_00943e2a();
    FUN_0094d0ec();
  }
  return;
}

