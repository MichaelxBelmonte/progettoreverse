// Function: FUN_0099e640
// Address: 0099e640
// Size: 783 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Bad size (%d) of in_vHash"
//   "virtual void pace::ILok2Commander::SignECDSA_UsingAuthRecords_BuildCommand(const CMD_CmmdPayload_Si...
//   "Bad size (%d) of *in_pvEncryptedSecretILok1Data"

void FUN_0099e640(void*param_1,void*param_2,void *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  void*arg1;
  int64_t *this_ptr;
  uint32_t uVar4;
  int *local_c8;
  code *local_c0;
  void*local_b8;
  int local_9c;
  int64_t local_98;
  int64_t lStack_90;
  uint64_t local_88;
  int local_7c;
  uint8_t local_78 [24];
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  uVar4 = (**(code **)(*this_ptr + 0x2a8))(0x1a,param_3,0);
  local_40 = *(void*)(arg1 + 4);
  local_48 = arg1[3];
  local_50 = arg1[2];
  local_60 = *arg1;
  local_58 = arg1[1];
  uVar1 = param_2[1];
  local_7c = (int)uVar1 - (int)*param_2;
  if (0x1f < local_7c - 1U) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    local_c8 = &local_7c;
    local_c0 = FUN_009595d8;
    local_b8 = &LAB_009977a0;
    FUN_00983230();
    uVar4 = FUN_00928ab0("virtual void pace::ILok2Commander::SignECDSA_UsingAuthRecords_BuildCommand(const CMD_CmmdPayload_SignECDSA_UsingAuthRecords_Struct &, const vector<uint8_t> &, const vector<uint8_t> *, pace::eden::thrift::ilok::CommandPacket &)"
                         ,0x8dd);
    uVar4 = FUN_009c720b(uVar4,uVar1);
    uVar1 = param_2[1];
  }
  local_40 = CONCAT13((char)local_7c,(undefined3)local_40);
  uVar4 = FUN_0093828a(uVar4,uVar1);
  local_c8 = (int *)((uint64_t)local_c8 & 0xffffffffffffff00);
  uVar2 = *(int64_t *)((int64_t)param_3 + 0x80) - *(int64_t *)((int64_t)param_3 + 0x78);
  if (uVar2 < 0x20) {
    uVar4 = FUN_009a8930(uVar2,&local_c8);
  }
  else if (uVar2 != 0x20) {
    *(int64_t *)((int64_t)param_3 + 0x80) = *(int64_t *)((int64_t)param_3 + 0x78) + 0x20;
  }
  FUN_0099e98a(uVar4,param_2[1]);
  local_c8 = (int *)((uint64_t)local_c8 & 0xffffffffffffff00);
  uVar2 = lStack_90 - local_98;
  if (uVar2 < 0x20) {
    FUN_009542b4(uVar2,&local_c8);
  }
  else if (uVar2 != 0x20) {
    lStack_90 = local_98 + 0x20;
  }
  if ((param_1 != (void*)0x0) && (*(char *)((int64_t)arg1 + 0x21) != '\0')) {
    uVar1 = *param_1;
    uVar3 = param_1[1];
    local_9c = (int)uVar3 - (int)uVar1;
    if (local_9c != 0x30) {
      FUN_00925fd0();
      uVar1 = FUN_00926010();
      local_c8 = &local_9c;
      local_c0 = FUN_009595d8;
      local_b8 = &LAB_009977a0;
      FUN_00983230();
      uVar4 = FUN_00928ab0("virtual void pace::ILok2Commander::SignECDSA_UsingAuthRecords_BuildCommand(const CMD_CmmdPayload_SignECDSA_UsingAuthRecords_Struct &, const vector<uint8_t> &, const vector<uint8_t> *, pace::eden::thrift::ilok::CommandPacket &)"
                           ,0x900);
      FUN_009c720b(uVar4,uVar1);
      uVar1 = *param_1;
      uVar3 = param_1[1];
    }
    FUN_0099eac2(uVar3,uVar1);
    FUN_0099eca0(param_1[1],*param_1);
  }
  *(void*)((int64_t)param_3 + 0x28) = 1;
  (**(code **)(*this_ptr + 0x298))(param_3,local_78,1);
  if (local_98 != 0) {
    lStack_90 = local_98;
    operator_delete(param_3);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

