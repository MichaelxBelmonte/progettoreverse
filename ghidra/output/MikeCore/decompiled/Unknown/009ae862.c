// Function: FUN_009ae862
// Address: 009ae862
// Size: 703 bytes
// Class: Unknown
// String references:
//   "KeyExchanger object has not been initialized"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/KeyExchanger.c...
//   "Zero key or block size (dwKeySize = %d, dwBlockSize = %d)"
//   "virtual void pace::KeyExchanger::GenerateEncryptedRandomKey(uint32_t, const BIG_NumberStruct &, con...


void FUN_009ae862(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  void *pvVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong *unaff_RDI;
  undefined4 uVar7;
  longlong *local_res8;
  longlong local_2a8;
  longlong lStack_2a0;
  undefined8 local_298;
  longlong *local_288;
  uint local_280;
  uint local_27c;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_288 = param_4;
  FUN_0098cdbc();
  local_2a8 = 0;
  lStack_2a0 = 0;
  local_298 = 0;
  if ((char)unaff_RDI[0x118] == '\0') {
    FUN_00925fd0();
    uVar2 = FUN_00926010();
    uVar7 = FUN_00928ab0("virtual void pace::KeyExchanger::GenerateEncryptedRandomKey(uint32_t, const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct &, const vector<uint8_t> *, vector<uint8_t> &, vector<uint8_t> &)"
                         ,0x1cd);
    FUN_009c720b(uVar7,uVar2);
  }
  uVar1 = FUN_00972764();
  local_27c = uVar1;
  local_280 = FUN_00972737();
  if ((local_280 == 0) || (uVar1 == 0)) {
    FUN_00925fd0();
    uVar2 = FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    uVar7 = FUN_00928ab0("virtual void pace::KeyExchanger::GenerateEncryptedRandomKey(uint32_t, const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct &, const vector<uint8_t> *, vector<uint8_t> &, vector<uint8_t> &)"
                         ,0x1d8);
    FUN_009c720b(uVar7,uVar2);
  }
  (**(code **)(*unaff_RDI + 0x20))(param_1,param_2,param_3,&local_2a8);
  FUN_0098cf0a(0,1,&local_2a8);
  uVar1 = (local_27c / local_280 + 1) * local_280;
  if (local_27c % local_280 == 0) {
    uVar1 = local_27c;
  }
  uVar5 = (ulonglong)uVar1;
  uVar3 = local_res8[1] - *local_res8;
  if (uVar3 < uVar5) {
    FUN_00958ec0();
  }
  else if (uVar5 < uVar3) {
    local_res8[1] = *local_res8 + uVar5;
  }
  uVar7 = FUN_009e9d9c();
  if (local_288 != local_res8) {
    FUN_009ad770(uVar7,local_res8[1]);
  }
  FUN_0098d842();
  pvVar6 = (void *)(ulonglong)local_27c;
  pvVar4 = (void *)(local_res8[1] - *local_res8);
  if (pvVar4 < pvVar6) {
    FUN_00958ec0();
  }
  else if (pvVar6 < pvVar4) {
    local_res8[1] = *local_res8 + (longlong)pvVar6;
  }
  if (local_2a8 != 0) {
    lStack_2a0 = local_2a8;
    operator_delete(pvVar4);
  }
  FUN_0098ce7c();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


