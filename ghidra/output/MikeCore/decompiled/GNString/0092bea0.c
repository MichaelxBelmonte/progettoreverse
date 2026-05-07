// Function: FUN_0092bea0
// Address: 0092bea0
// Size: 1420 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "dlcHostAuthKeyExchange requires an encrypted channel setup with openLicenseDaemonEncryptedChannel o...
//   "void pace::AuthorizationVerifier::dlcHostAuthKeyExchange(const petpub::AuthChain &, const pet::fusi...


void FUN_0092bea0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong unaff_RDI;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
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
  longlong local_80;
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
    uVar4 = 0;
    uVar5 = 0;
    local_118 = &DAT_02519ee8;
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
    local_80 = unaff_RDI + 0x18;
    local_78 = 0;
    FUN_009b4e10();
    if (*(longlong *)(unaff_RDI + 0x70) == 0) {
      FUN_00925fd0();
      uVar1 = FUN_00926010();
      uVar3 = FUN_00928ab0("void pace::AuthorizationVerifier::dlcHostAuthKeyExchange(const petpub::AuthChain &, const pet::fusion::DlcKeyExchangeInput &, pet::fusion::DlcKeyExchangeOutput &)"
                           ,&DAT_00002f65,param_3,param_4,uVar4,uVar5);
      FUN_009bd14b(uVar3,uVar1);
    }
    FUN_008f91be();
    FUN_0091b382();
    FUN_008911e2();
    local_58 = 0;
    local_68 = 0;
    lStack_60 = 0;
    local_38 = 0;
    local_48 = 0;
    lStack_40 = 0;
    FUN_00944a1f(0,1);
    plVar2 = &local_48;
    uVar3 = FUN_00928f8a(plVar2,&local_68);
    FUN_009505a2(uVar3,&local_118);
    FUN_0091beda();
    if (local_48 != 0) {
      lStack_40 = local_48;
      operator_delete(plVar2);
    }
    if (local_68 != 0) {
      lStack_60 = local_68;
      operator_delete(plVar2);
    }
    FUN_0094d0ec();
    FUN_008bc266();
    FUN_008bbc10();
  }
  return;
}


