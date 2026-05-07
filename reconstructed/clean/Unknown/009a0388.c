// Function: FUN_009a0388
// Address: 009a0388
// Size: 677 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Bad size (%d) of in_vTweak"
//   "virtual void pace::ILok2Commander::DLCKeyExchange_BuildCommand(const CMD_CmmdPayload_DLCKeyExchange...
//   "Bad size (%d) of in_vEncryptedIlokDataPvssAndQueueSecret"

void FUN_009a0388(void*param_1,int *param_2,int64_t param_3)

{
  uint uVar1;
  uint uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  void *pvVar5;
  void*arg1;
  int64_t *this_ptr;
  uint64_t uVar6;
  size_t sVar7;
  int64_t lVar8;
  uint8_t local_78 [24];
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  sVar7 = 0;
  (**(code **)(*this_ptr + 0x2a8))(0x3c,param_3);
  local_40 = arg1[4];
  local_48 = arg1[3];
  local_50 = arg1[2];
  local_60 = *arg1;
  local_58 = arg1[1];
  lVar8 = *(int64_t *)(param_3 + 0x78);
  uVar3 = *(int64_t *)(param_3 + 0x80) - lVar8;
  if (uVar3 < 0x26c) {
    FUN_0088d550();
    lVar8 = *(int64_t *)(param_3 + 0x78);
  }
  else if (uVar3 != 0x26c) {
    *(int64_t *)(param_3 + 0x80) = lVar8 + 0x26c;
  }
  uVar1 = param_2[2] - *param_2;
  if (uVar1 != 0x10) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::DLCKeyExchange_BuildCommand(const CMD_CmmdPayload_DLCKeyExchange_Struct &, const vector<uint8_t> &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &)"
                 ,0xaed);
    FUN_009c720b();
  }
  uVar2 = (int)param_1[1] - (int)*param_1;
  if ((uVar2 < 0x60) || (0x240 < uVar2)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::DLCKeyExchange_BuildCommand(const CMD_CmmdPayload_DLCKeyExchange_Struct &, const vector<uint8_t> &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &)"
                 ,0xaf8);
    FUN_009c720b();
  }
  uVar3 = (uint64_t)uVar1 + 8 + (uint64_t)uVar2;
  pvVar5 = *(void **)(param_3 + 0x78);
  uVar6 = *(int64_t *)(param_3 + 0x80) - (int64_t)pvVar5;
  if (uVar6 < uVar3) {
    FUN_0088d550();
  }
  else if (uVar3 < uVar6) {
    pvVar5 = (void *)((int64_t)pvVar5 + uVar3);
    *(void **)(param_3 + 0x80) = pvVar5;
  }
  _memcpy(pvVar5,(void *)(uint64_t)uVar1,sVar7);
  FUN_0094c1c0();
  uVar4 = FUN_009a31dc();
  *(void*)(lVar8 + 0x10) = uVar4;
  _memcpy(pvVar5,(void *)(uint64_t)uVar2,sVar7);
  *(void*)(param_3 + 0x28) = 1;
  (**(code **)(*this_ptr + 0x298))(param_3,local_78,1);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

