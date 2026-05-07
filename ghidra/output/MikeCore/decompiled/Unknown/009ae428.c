// Function: FUN_009ae428
// Address: 009ae428
// Size: 618 bytes
// Class: Unknown
// String references:
//   "KeyExchanger object has not been initialized"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/KeyExchanger.c...
//   "virtual void pace::KeyExchanger::DecryptRandomKey(uint32_t, const BIG_NumberStruct &, const BIG_Pub...
//   "Zero key or block size (dwKeySize = %d, dwBlockSize = %d)"


void FUN_009ae428(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  void *pvVar4;
  longlong *unaff_RDI;
  undefined4 uVar5;
  longlong *local_res8;
  longlong local_2a8;
  longlong lStack_2a0;
  undefined8 local_298;
  longlong *local_288;
  int local_280;
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
    uVar5 = FUN_00928ab0("virtual void pace::KeyExchanger::DecryptRandomKey(uint32_t, const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct &, const vector<uint8_t> *, const vector<uint8_t> &, vector<uint8_t> &)"
                         ,0x146);
    FUN_009c720b(uVar5,uVar2);
  }
  uVar1 = FUN_00972764();
  local_27c = uVar1;
  local_280 = FUN_00972737();
  if ((local_280 == 0) || (uVar1 == 0)) {
    FUN_00925fd0();
    uVar2 = FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    uVar5 = FUN_00928ab0("virtual void pace::KeyExchanger::DecryptRandomKey(uint32_t, const BIG_NumberStruct &, const BIG_PublicKeyECC_Struct &, const vector<uint8_t> *, const vector<uint8_t> &, vector<uint8_t> &)"
                         ,0x151);
    FUN_009c720b(uVar5,uVar2);
  }
  (**(code **)(*unaff_RDI + 0x20))(param_1,param_2,param_3,&local_2a8);
  uVar5 = FUN_0098cf0a(0,1,&local_2a8);
  if (local_res8 != local_288) {
    FUN_009ad770(uVar5,local_288[1]);
  }
  FUN_0098d41a();
  pvVar4 = (void *)(ulonglong)local_27c;
  pvVar3 = (void *)(local_res8[1] - *local_res8);
  if (pvVar3 < pvVar4) {
    FUN_00958ec0();
  }
  else if (pvVar4 < pvVar3) {
    local_res8[1] = *local_res8 + (longlong)pvVar4;
  }
  if (local_2a8 != 0) {
    lStack_2a0 = local_2a8;
    operator_delete(pvVar3);
  }
  FUN_0098ce7c();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


