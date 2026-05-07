// Function: FUN_0099952c
// Address: 0099952c
// Size: 529 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "This command requires the use of the authority connection"
//   "virtual void pace::ILok2Commander::SignECDSA_UsingCertPrivateKey_BuildCommand(CMD_CmmdPayload_SignE...
//   "Bad size (%d) of in_vHash"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_0099952c(int64_t param_1,void*param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  void*arg1;
  int64_t *this_ptr;
  int *local_a0;
  code *local_98;
  void*local_90;
  void*local_88;
  int local_7c;
  uint8_t local_78 [24];
  uint64_t local_60;
  uint64_t local_58;
  uint64_t local_50;
  uint64_t local_48;
  uint32_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  if ((*(uint *)((int64_t)this_ptr + 0x404) & 0xf) != 0xd) {
    local_88 = (void*)FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual void pace::ILok2Commander::SignECDSA_UsingCertPrivateKey_BuildCommand(CMD_CmmdPayload_SignECDSA_UsingCertPrivateKey_Struct &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &)"
                 ,0x291);
    FUN_009c720b();
  }
  (**(code **)(*this_ptr + 0x2a8))(0x2e,param_1,0);
  local_a0 = (int *)FUN_0094c1c0();
  uVar1 = FUN_009a31dc();
  arg1[3] = uVar1;
  uVar1 = param_2[1];
  local_7c = (int)uVar1 - (int)*param_2;
  if (0x1f < local_7c - 1U) {
    FUN_00925fd0();
    local_88 = param_2;
    FUN_00926010();
    local_a0 = &local_7c;
    local_98 = FUN_009595d8;
    local_90 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::SignECDSA_UsingCertPrivateKey_BuildCommand(CMD_CmmdPayload_SignECDSA_UsingCertPrivateKey_Struct &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &)"
                 ,0x2a1);
    FUN_009c720b();
    uVar1 = local_88[1];
  }
  *(char *)((int64_t)arg1 + 0x21) = (char)local_7c;
  local_48 = arg1[3];
  local_50 = arg1[2];
  local_60 = *arg1;
  local_58 = arg1[1];
  local_40 = *(void*)(arg1 + 4);
  FUN_0093828a(local_58,uVar1);
  local_a0 = (int *)((uint64_t)local_a0 & 0xffffffffffffff00);
  uVar2 = *(int64_t *)(param_1 + 0x80) - *(int64_t *)(param_1 + 0x78);
  if (uVar2 < 0x20) {
    FUN_009a8930(uVar2,&local_a0);
  }
  else if (uVar2 != 0x20) {
    *(int64_t *)(param_1 + 0x80) = *(int64_t *)(param_1 + 0x78) + 0x20;
  }
  *(void*)(param_1 + 0x28) = 1;
  (**(code **)(*this_ptr + 0x298))(param_1,local_78,1);
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

