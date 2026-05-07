// Function: FUN_00931d0c
// Address: 00931d0c
// Size: 965 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/customer/libraries/src/libpacefusion/Aut...
//   "verifyAuth requires an encrypted channel setup with openLicenseDaemonEncryptedChannel or openQuickL...
//   "The location (%d) is not supported by this software"
//   "void pace::AuthorizationVerifier::verifyAuth(petpub::AuthChain &, const petpub::VerifyAuthOptions &...


void FUN_00931d0c(char *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 uVar6;
  undefined8 local_res10;
  longlong local_c8;
  longlong local_b0;
  longlong local_98;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  
  local_58 = param_1;
  local_50 = param_2;
  local_48 = param_4;
  if (param_3 != 0) {
    lVar5 = *(longlong *)(param_3 + 8);
    for (lVar4 = *(longlong *)(param_3 + 0x10); lVar4 != lVar5; lVar4 = lVar4 + -0x90) {
      (*(code *)**(undefined8 **)(lVar4 + -0x90))();
    }
    *(longlong *)(param_3 + 0x10) = lVar5;
    lVar5 = *(longlong *)(param_3 + 0x20);
    for (lVar4 = *(longlong *)(param_3 + 0x28); lVar4 != lVar5; lVar4 = lVar4 + -0x60) {
      (*(code *)**(undefined8 **)(lVar4 + -0x60))();
    }
    *(longlong *)(param_3 + 0x28) = lVar5;
    lVar5 = *(longlong *)(param_3 + 0x38);
    for (lVar4 = *(longlong *)(param_3 + 0x40); lVar4 != lVar5; lVar4 = lVar4 + -0x58) {
      (*(code *)**(undefined8 **)(lVar4 + -0x58))();
    }
    *(longlong *)(param_3 + 0x40) = lVar5;
    lVar5 = *(longlong *)(param_3 + 0x50);
    for (lVar4 = *(longlong *)(param_3 + 0x58); lVar4 != lVar5; lVar4 = lVar4 + -0x88) {
      (*(code *)**(undefined8 **)(lVar4 + -0x88))();
    }
    *(longlong *)(param_3 + 0x58) = lVar5;
  }
  lVar5 = *(longlong *)(unaff_RSI + 0x58);
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  FUN_009b4e10();
  if (*(longlong *)(unaff_RDI + 0x70) == 0) {
    FUN_00925fd0();
    uVar2 = FUN_00926010();
    uVar6 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuth(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<uint8_t> *)"
                         ,&DAT_00001421);
    FUN_009bd14b(uVar6,uVar2);
  }
  local_40 = param_3;
  uVar6 = FUN_0094d0ec();
  bVar1 = 0;
LAB_00931e80:
  if (0x1f < lVar5) {
    if ((lVar5 == 0x20) || (lVar5 == 0x40)) goto switchD_00931e9d_caseD_4;
    if (lVar5 != 0x80) goto switchD_00931e9d_caseD_3;
    FUN_0094e400();
    pcVar3 = local_58;
    FUN_00937b18(local_58,local_50,local_40,local_res10);
    local_b0 = local_98;
    goto joined_r0x0093209f;
  }
  switch(lVar5) {
  case 1:
    FUN_0094e400();
    pcVar3 = local_58;
    FUN_0093498e(local_58,local_50,local_40,local_res10);
    break;
  case 2:
    pcVar3 = local_58;
    FUN_00932178(local_58,local_50,local_40,local_res10);
    goto LAB_009320ad;
  default:
switchD_00931e9d_caseD_3:
    lVar5 = *(longlong *)(unaff_RSI + 0x1a0);
    if (!(bool)(bVar1 | lVar5 == 0)) goto code_r0x00931ed6;
    FUN_00925fd0();
    uVar2 = FUN_00926010();
    FUN_00983230();
    pcVar3 = 
    "void pace::AuthorizationVerifier::verifyAuth(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<uint8_t> *)"
    ;
    uVar6 = FUN_00928ab0("void pace::AuthorizationVerifier::verifyAuth(petpub::AuthChain &, const petpub::VerifyAuthOptions &, const std::vector<uint32_t> *, petpub::AuthStorage *, const pet::fusion::DecryptionAssistData *, std::vector<uint8_t> *, std::vector<uint8_t> *)"
                         ,&DAT_00001477);
    FUN_009bd14b(uVar6,uVar2);
LAB_009320ad:
    if (local_78 != 0) {
      lStack_70 = local_78;
      operator_delete(pcVar3);
    }
    return;
  case 4:
  case 8:
switchD_00931e9d_caseD_4:
    FUN_0094e400();
    pcVar3 = local_58;
    FUN_00932ac6(local_58,local_50,local_40,local_res10);
    local_b0 = local_c8;
  }
joined_r0x0093209f:
  if (local_b0 != 0) {
    operator_delete(pcVar3);
  }
  goto LAB_009320ad;
code_r0x00931ed6:
  bVar1 = 1;
  if (&local_78 != (longlong *)(unaff_RSI + 0x1a8)) {
    uVar6 = FUN_008df080(uVar6,*(undefined8 *)(unaff_RSI + 0x1b0));
  }
  goto LAB_00931e80;
}


