// Function: FUN_0099f3a2
// Address: 0099f3a2
// Size: 523 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "The AuthEx Program vector size (%d) is not valid."
//   "virtual void pace::ILok2Commander::AuthEx_BuildCommand(const CMD_CmmdPayload_AuthEx_Struct &, const...
//   "The AuthEx Program vector size (%d) does not match the stated size (%d) in the command frame."
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0099f3a2(int64_t param_1,int *param_2)

{
  uint uVar1;
  void*arg1;
  int64_t *this_ptr;
  uint8_t local_78 [24];
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint64_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  (**(code **)(*this_ptr + 0x2a8))(0x38,param_1,0);
  local_40 = arg1[4];
  local_48 = arg1[3];
  local_50 = arg1[2];
  local_60 = *arg1;
  local_58 = arg1[1];
  uVar1 = param_2[2] - *param_2;
  if (((0x1010 < uVar1) || (uVar1 == 0)) || ((uVar1 & 0xf) != 0)) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::AuthEx_BuildCommand(const CMD_CmmdPayload_AuthEx_Struct &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &)"
                 ,0x992);
    FUN_009c720b();
  }
  if (uVar1 != (uint)local_40) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::AuthEx_BuildCommand(const CMD_CmmdPayload_AuthEx_Struct &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &)"
                 ,0x99a);
    FUN_009c720b();
  }
  FUN_0093828a();
  *(void*)(param_1 + 0x28) = 1;
  (**(code **)(*this_ptr + 0x298))(param_1,local_78,1);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

