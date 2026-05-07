// Function: FUN_0092c48c
// Address: 0092c48c
// Size: 1447 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "dlcCloudAuthKeyExchange requires an encrypted channel setup with openLicenseDaemonEncryptedChannel ...
//   "void pace::AuthorizationVerifier::dlcCloudAuthKeyExchange(const petpub::AuthChain &, const pet::fus...


void FUN_0092c48c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong *plVar3;
  longlong unaff_RDI;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined *local_118;
  undefined *local_110;
  undefined2 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined7 local_a0;
  undefined4 uStack_99;
  undefined4 local_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  char *local_80;
  undefined1 local_78;
  undefined8 local_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_58;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  
  local_70 = param_2;
  FUN_0092e102();
  if ((*(char *)(unaff_RDI + 0x195) == '\0') || (*(char *)(unaff_RDI + 0x17b) == '\0')) {
    *(undefined1 *)(param_1 + 0x40) = 1;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    local_118 = &DAT_02519e38;
    local_110 = &DAT_0251d7b8;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_c8 = &DAT_0251d288;
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
    pcVar2 = (char *)(unaff_RDI + 0x18);
    local_78 = 0;
    local_80 = pcVar2;
    FUN_009b4e10();
    if (*(longlong *)(unaff_RDI + 0x70) == 0) {
      FUN_00925fd0();
      uVar1 = FUN_00926010();
      pcVar2 = 
      "void pace::AuthorizationVerifier::dlcCloudAuthKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
      ;
      uVar4 = FUN_00928ab0("void pace::AuthorizationVerifier::dlcCloudAuthKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
                           ,&DAT_00002f3a,param_3,param_4,uVar5,uVar6);
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


