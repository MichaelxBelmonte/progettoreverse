// Function: FUN_0092c48c
// Address: 0092c48c
// Size: 1447 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "dlcCloudAuthKeyExchange requires an encrypted channel setup with openLicenseDaemonEncryptedChannel ...
//   "void pace::AuthorizationVerifier::dlcCloudAuthKeyExchange(const petpub::AuthChain &, const pet::fus...
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0092c48c(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  char *pcVar2;
  int64_t *plVar3;
  int64_t this_ptr;
  uint32_t uVar4;
  uint64_t uVar5;
  uint16_t uVar6;
  void*local_118;
  void*local_110;
  uint16_t local_108;
  uint64_t local_100;
  uint64_t local_f8;
  uint64_t local_f0;
  uint64_t local_e8;
  uint64_t local_e0;
  uint64_t local_d8;
  uint8_t local_d0;
  void*local_c8;
  uint64_t local_c0;
  uint64_t local_b8;
  uint64_t local_b0;
  uint64_t local_a8;
  undefined7 local_a0;
  uint32_t uStack_99;
  uint32_t local_90;
  uint16_t local_8c;
  uint32_t local_88;
  uint16_t local_84;
  char *local_80;
  uint8_t local_78;
  uint64_t local_70;
  int64_t local_68;
  int64_t lStack_60;
  uint64_t local_58;
  int64_t local_48;
  int64_t lStack_40;
  uint64_t local_38;
  
  local_70 = param_2;
  FUN_0092e102();
  if ((*(char *)(this_ptr + 0x195) == '\0') || (*(char *)(this_ptr + 0x17b) == '\0')) {
    *(void*)(param_1 + 0x40) = 1;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    local_118 = &g_02519e38;
    local_110 = &g_0251d7b8;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = &g_0251d288;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_a0 = 0;
    uStack_99 = 0;
    local_90 = 0x101;
    local_8c = 1;
    local_88 = 4;
    local_84 = 0x100;
    pcVar2 = (char *)(this_ptr + 0x18);
    local_78 = 0;
    local_80 = pcVar2;
    FUN_009b4e10();
    if (*(int64_t *)(this_ptr + 0x70) == 0) {
      FUN_00925fd0();
      uVar1 = FUN_00926010();
      pcVar2 = 
      "void pace::AuthorizationVerifier::dlcCloudAuthKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
      ;
      uVar4 = FUN_00928ab0("void pace::AuthorizationVerifier::dlcCloudAuthKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
                           ,&g_00002f3a,param_3,param_4,uVar5,uVar6);
      FUN_009bd14b(uVar4,uVar1);
    }
    FUN_008f91be();
    FUN_0091b382();
    std::string::assign(pcVar2);
    FUN_008911e2();
    local_58 = 0;
    local_68 = 0;
    lStack_60 = 0;
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 0;
    FUN_009447b1(0,1);
    plVar3 = &local_48;
    uVar4 = FUN_00928f8a(plVar3,&local_68);
    FUN_00950388(uVar4,&local_118);
    FUN_0091beda();
    if (local_48 != 0) {
      lStack_40 = local_48;
      operator_delete(plVar3);
    }
    if (local_68 != 0) {
      lStack_60 = local_68;
      operator_delete(plVar3);
    }
    FUN_0094d0ec();
    FUN_008bb672();
    FUN_008baec0();
  }
  return;
}

