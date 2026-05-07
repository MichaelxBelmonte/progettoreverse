// Function: FUN_00930118
// Address: 00930118
// Size: 1924 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "Channel encryptor not provided to sendEncryptedCommand_AuthorizationServer"
//   "static void pace::AuthorizationVerifier::sendEncryptedCommand_AuthorizationServer(pet::authorize::e...
//   "Channel encryptor not setup properly. Blocksize is zero."
//   "The command %d provided to sendEncryptedCommand_AuthorizationServer has no data"
//   "No authorization client or function pointer to call AuthorizationServer::sendEncryptedCommand is se...
//   "The result for command %d has no result data"
//   "The result for command %d has a bad checksum (calculated: 0x%08X, provided: 0x%08X)"
//   "The result for command %d has a bad size of %d (encrypted size: %d)"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00930118(int64_t *param_1,int64_t *param_2,uint param_3,int64_t *param_4)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint uVar4;
  uint uVar5;
  uint64_t uVar6;
  void*arg1;
  uint uVar7;
  int64_t *plVar8;
  void*local_res8;
  void*local_150;
  uint local_148;
  int64_t local_140;
  int64_t local_138;
  uint64_t local_130;
  int local_128;
  int64_t local_120;
  int64_t local_118;
  uint64_t local_110;
  uint local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint8_t local_d8;
  uint64_t local_d0;
  uint64_t local_c8;
  uint64_t local_c0;
  uint32_t local_b8;
  uint64_t local_b4;
  uint16_t local_ac;
  uint8_t local_aa;
  void*local_a8;
  int64_t local_a0 [3];
  uint8_t local_88 [8];
  uint8_t local_80;
  uint64_t local_7c;
  uint8_t local_74;
  uint64_t *local_70;
  code *local_68;
  code *local_60;
  uint local_58;
  uint local_54;
  uint64_t local_50;
  int64_t *local_48;
  int64_t *local_40;
  
  local_150 = &g_0251a850;
  local_148 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_b8 = 4;
  local_b4 = 0;
  local_ac = 0;
  local_aa = 1;
  local_a8 = &g_0251a8b8;
  local_80 = 0;
  local_88 = (uint8_t  [8])0x0;
  local_a0[2] = 0;
  local_a0[1] = 0;
  local_a0[0] = 0;
  local_7c = 0x100000000000004;
  local_74 = 1;
  plVar8 = (int64_t *)*param_4;
  local_54 = param_3;
  local_48 = param_4;
  if (plVar8 == (int64_t *)0x0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("static void pace::AuthorizationVerifier::sendEncryptedCommand_AuthorizationServer(pet::authorize::eCommandType, const std::vector<uint8_t> &, std::vector<uint8_t> &, pace::SharedAuthorizationClient_T, uint32_t, pace::SharedEncryptor_T, pace::ExtraClientConnectionData *)"
                 ,&g_00001a12);
    FUN_009bd14b();
    plVar8 = (int64_t *)*local_48;
  }
  local_40 = param_2;
  uVar1 = (**(code **)(*plVar8 + 0x50))();
  if (uVar1 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("static void pace::AuthorizationVerifier::sendEncryptedCommand_AuthorizationServer(pet::authorize::eCommandType, const std::vector<uint8_t> &, std::vector<uint8_t> &, pace::SharedAuthorizationClient_T, uint32_t, pace::SharedEncryptor_T, pace::ExtraClientConnectionData *)"
                 ,&g_00001a1a);
    FUN_009bd14b();
  }
  local_128 = (int)arg1[1] - (int)*arg1;
  if (local_128 < 1) {
    FUN_00925fd0();
    FUN_00926010();
    local_70 = (uint64_t *)&stack0xffffffffffffffcc;
    local_68 = FUN_0094f868;
    local_60 = FUN_0094f86e;
    FUN_00983230();
    FUN_00928ab0("static void pace::AuthorizationVerifier::sendEncryptedCommand_AuthorizationServer(pet::authorize::eCommandType, const std::vector<uint8_t> &, std::vector<uint8_t> &, pace::SharedAuthorizationClient_T, uint32_t, pace::SharedEncryptor_T, pace::ExtraClientConnectionData *)"
                 ,&g_00001a23);
    FUN_009bd14b();
  }
  FUN_0093828a();
  uVar3 = (uint64_t)uVar1;
  uVar6 = (int64_t)local_128 + 4 + (uVar3 - ((int64_t)local_128 + 4U) % uVar3) % uVar3;
  local_70 = (uint64_t *)CONCAT71(local_70._1_7_,0x5a);
  if ((uint64_t)(local_138 - local_140) < uVar6) {
    FUN_009a8930(uVar6,&local_70);
  }
  else if (uVar6 < (uint64_t)(local_138 - local_140)) {
    local_138 = uVar6 + local_140;
  }
  FUN_009740dc();
  if ((uint64_t)(local_118 - local_120) < uVar3) {
    FUN_0088d550();
  }
  else if (uVar3 < (uint64_t)(local_118 - local_120)) {
    local_118 = local_120 + uVar3;
  }
  FUN_009e9d9c();
  uVar2 = 0x80000000;
  uVar1 = 1;
  uVar7 = 0xffffffff;
  do {
    uVar4 = uVar2 | uVar1;
    uVar5 = uVar4;
    if ((uVar4 & uVar7) != uVar1) {
      uVar5 = 0;
    }
    if ((uVar4 & uVar7) == uVar2) {
      uVar5 = uVar4;
    }
    uVar7 = uVar7 ^ uVar5;
    uVar2 = uVar2 >> 1;
    uVar1 = uVar1 * 2;
  } while (uVar1 < uVar2);
  FUN_0094f87e(uVar1,uVar3);
  local_108 = FUN_0094f87e();
  local_108 = ~local_108;
  (**(code **)(*(int64_t *)*local_48 + 0x20))();
  (**(code **)(*(int64_t *)*local_48 + 0x40))();
  local_148 = FUN_0097421d();
  local_148 = local_148 ^ local_54;
  if ((int64_t *)*param_1 == (int64_t *)0x0) {
    if (((local_res8 == (void*)0x0) || (*local_res8 == 0x0)) ||
       (local_res8[1] == 0)) {
      FUN_00925fd0();
      FUN_00926010();
      local_70 = (uint64_t *)&stack0xffffffffffffffcc;
      local_68 = FUN_0094f868;
      local_60 = FUN_0094f86e;
      FUN_00983230();
      FUN_00928ab0("static void pace::AuthorizationVerifier::sendEncryptedCommand_AuthorizationServer(pet::authorize::eCommandType, const std::vector<uint8_t> &, std::vector<uint8_t> &, pace::SharedAuthorizationClient_T, uint32_t, pace::SharedEncryptor_T, pace::ExtraClientConnectionData *)"
                   ,&g_00001a61);
      FUN_009bd14b();
    }
    else {
      (**local_res8)(4,&local_150);
    }
  }
  else {
    (**(code **)(*(int64_t *)*param_1 + 400))(4,&local_150);
  }
  if (local_a0 != local_40) {
    FUN_009ad770();
  }
  local_50 = local_40[1] - *local_40;
  if (local_50 == 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_70 = (uint64_t *)&stack0xffffffffffffffcc;
    local_68 = FUN_0094f868;
    local_60 = FUN_0094f86e;
    FUN_00983230();
    FUN_00928ab0("static void pace::AuthorizationVerifier::sendEncryptedCommand_AuthorizationServer(pet::authorize::eCommandType, const std::vector<uint8_t> &, std::vector<uint8_t> &, pace::SharedAuthorizationClient_T, uint32_t, pace::SharedEncryptor_T, pace::ExtraClientConnectionData *)"
                 ,&g_00001a71);
    FUN_009bd14b();
  }
  (**(code **)(*(int64_t *)*local_48 + 0x30))();
  uVar2 = 0x80000000;
  uVar1 = 1;
  uVar7 = 0xffffffff;
  do {
    uVar4 = uVar2 | uVar1;
    uVar5 = uVar4;
    if ((uVar4 & uVar7) != uVar1) {
      uVar5 = 0;
    }
    if ((uVar4 & uVar7) == uVar2) {
      uVar5 = uVar4;
    }
    uVar7 = uVar7 ^ uVar5;
    uVar2 = uVar2 >> 1;
    uVar1 = uVar1 * 2;
  } while (uVar1 < uVar2);
  FUN_0094f87e(uVar1,uVar3);
  local_58 = FUN_0094f87e(local_40,local_50);
  local_58 = ~local_58;
  if (local_88._4_4_ != local_58) {
    FUN_00925fd0();
    FUN_00926010();
    local_70 = (uint64_t *)&stack0xffffffffffffffcc;
    local_68 = FUN_0094f868;
    local_60 = FUN_0094f86e;
    FUN_00983230();
    local_70 = (uint64_t *)&local_58;
    local_68 = FUN_009cac80;
    local_60 = FUN_009cefa0;
    FUN_00983230();
    local_70 = (uint64_t *)(local_88 + 4);
    local_68 = FUN_009cac80;
    local_60 = FUN_009cefa0;
    FUN_00983230();
    FUN_00928ab0("static void pace::AuthorizationVerifier::sendEncryptedCommand_AuthorizationServer(pet::authorize::eCommandType, const std::vector<uint8_t> &, std::vector<uint8_t> &, pace::SharedAuthorizationClient_T, uint32_t, pace::SharedEncryptor_T, pace::ExtraClientConnectionData *)"
                 ,&g_00001a83);
    FUN_009bd14b();
  }
  uVar6 = (uint64_t)(int)local_88._0_4_;
  if (((uVar6 == 0) || (local_50 < uVar6)) || (uVar6 <= local_50 - uVar3)) {
    FUN_00925fd0();
    FUN_00926010();
    local_70 = (uint64_t *)&stack0xffffffffffffffcc;
    local_68 = FUN_0094f868;
    local_60 = FUN_0094f86e;
    FUN_00983230();
    local_70 = (uint64_t *)local_88;
    local_68 = FUN_009cac80;
    local_60 = FUN_009cefa0;
    FUN_00983230();
    local_70 = &local_50;
    local_68 = FUN_00ac1940;
    local_60 = FUN_009baee0;
    FUN_00983230();
    FUN_00928ab0("static void pace::AuthorizationVerifier::sendEncryptedCommand_AuthorizationServer(pet::authorize::eCommandType, const std::vector<uint8_t> &, std::vector<uint8_t> &, pace::SharedAuthorizationClient_T, uint32_t, pace::SharedEncryptor_T, pace::ExtraClientConnectionData *)"
                 ,&g_00001a91);
    FUN_009bd14b();
  }
  uVar3 = local_40[1] - *local_40;
  if (uVar3 < uVar6) {
    FUN_00958ec0();
  }
  else if (uVar6 < uVar3) {
    local_40[1] = *local_40 + uVar6;
  }
  FUN_008cb31c();
  FUN_008ca27c();
  return;
}

