// Function: FUN_009aec30
// Address: 009aec30
// Size: 603 bytes
// Class: Unknown
// String references:
//   "KeyExchanger object has not been initialized"
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/KeyExchanger.c...
//   "virtual void pace::KeyExchanger::KeyDerivationFunction(uint32_t, const vector<uint8_t> &, const vec...


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009aec30(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint unaff_ESI;
  longlong unaff_RDI;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined1 local_1e9;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b0;
  longlong local_38;
  
  uVar5 = (ulonglong)unaff_ESI;
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  FUN_0098e9aa();
  local_1c8 = _DAT_023d4d50;
  uStack_1c0 = _UNK_023d4d58;
  local_1d8 = _DAT_023d4d60;
  uStack_1d0 = _UNK_023d4d68;
  local_1e8 = _DAT_023d4d70;
  uStack_1e4 = _UNK_023d4d74;
  uStack_1e0 = _UNK_023d4d78;
  uStack_1dc = _UNK_023d4d7c;
  uVar6 = _DAT_023d4d70;
  if (*(char *)(unaff_RDI + 0x8c0) == '\0') {
    FUN_00925fd0();
    uVar2 = FUN_00926010();
    uVar6 = FUN_00928ab0("virtual void pace::KeyExchanger::KeyDerivationFunction(uint32_t, const vector<uint8_t> &, const vector<uint8_t> *, vector<uint8_t> &)"
                         ,0x237);
    uVar6 = FUN_009c720b(uVar6,uVar2);
  }
  if (unaff_ESI < 0x15) {
    uVar6 = FUN_0098eb1a(uVar6,param_2);
  }
  else if (unaff_ESI < 0x1d) {
    uVar6 = FUN_0098eb1a(uVar6,param_2);
  }
  else if (unaff_ESI < 0x21) {
    uVar6 = FUN_0098eb1a(uVar6,param_2);
  }
  else if (unaff_ESI < 0x31) {
    uVar6 = FUN_0098eb1a(uVar6,param_2);
  }
  else {
    uVar6 = FUN_0098eb1a(uVar6,param_2);
  }
  uVar6 = FUN_0098ef68(uVar6,0x10);
  if (param_1 == 0) {
    uVar6 = FUN_0098ef68(uVar6,0x10);
  }
  else {
    uVar6 = FUN_0098ee68();
  }
  FUN_0098ef68(uVar6,0x10);
  uVar1 = FUN_0098f810();
  uVar3 = (ulonglong)uVar1;
  lVar4 = *param_3;
  if ((ulonglong)(param_3[1] - lVar4) < uVar3) {
    FUN_00958ec0();
    lVar4 = *param_3;
  }
  else if (uVar3 < (ulonglong)(param_3[1] - lVar4)) {
    param_3[1] = uVar3 + lVar4;
  }
  (**(code **)(local_1b0 + 0x48))(0,lVar4);
  local_1e9 = 0xa5;
  uVar3 = param_3[1] - *param_3;
  if (uVar3 < uVar5) {
    FUN_009542b4(uVar3,&local_1e9);
  }
  else if (uVar5 < uVar3) {
    param_3[1] = *param_3 + uVar5;
  }
  FUN_0098edfa();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


