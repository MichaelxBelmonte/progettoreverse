// Function: FUN_0099d9d6
// Address: 0099d9d6
// Size: 733 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Bad size (%d) of in_vRandomNumber"
//   "virtual void pace::ILok2Commander::HCPKeyExchange_BuildCommand(const CMD_CmmdPayload_HCPKeyExchange...
//   "The whitebox failed with error %d."
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0099d9d6(int64_t param_1,void*param_2,int64_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  void*arg1;
  int64_t *this_ptr;
  int local_e0;
  int local_dc;
  int *local_98;
  code *local_90;
  void*local_88;
  uint8_t local_78 [24];
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  (**(code **)(*this_ptr + 0x2a8))(0x18,param_1,0);
  local_40 = arg1[4];
  local_48 = arg1[3];
  local_50 = arg1[2];
  local_60 = *arg1;
  local_58 = arg1[1];
  local_e0 = (int)param_2[1] - (int)*param_2;
  if (local_e0 != 0x20) {
    FUN_00925fd0();
    FUN_00926010();
    local_98 = &local_e0;
    local_90 = FUN_009595d8;
    local_88 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::HCPKeyExchange_BuildCommand(const CMD_CmmdPayload_HCPKeyExchange_Struct &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &, vector<uint8_t> *)"
                 ,0x7e6);
    FUN_009c720b();
  }
  FUN_0093828a();
  local_98 = (int *)((uint64_t)local_98 & 0xffffffffffffff00);
  uVar2 = *(int64_t *)(param_1 + 0x80) - *(int64_t *)(param_1 + 0x78);
  if (uVar2 < 0x20) {
    FUN_009a8930(uVar2,&local_98);
  }
  else if (uVar2 != 0x20) {
    *(int64_t *)(param_1 + 0x80) = *(int64_t *)(param_1 + 0x78) + 0x20;
  }
  if (param_3 != 0) {
    FUN_0099dccc();
    FUN_009d4832();
    FUN_009d4832();
    FUN_009977e7();
    FUN_009b4e10();
    iVar1 = FUN_00a02082();
    local_dc = iVar1;
    FUN_0094d0ec();
    if (iVar1 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("virtual void pace::ILok2Commander::HCPKeyExchange_BuildCommand(const CMD_CmmdPayload_HCPKeyExchange_Struct &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &, vector<uint8_t> *)"
                   ,0x824);
      FUN_009c720b();
    }
    FUN_009d47f2();
  }
  (**(code **)(*this_ptr + 0x298))(param_1,local_78,1);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

