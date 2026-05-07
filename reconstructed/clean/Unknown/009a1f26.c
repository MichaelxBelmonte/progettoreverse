// Function: FUN_009a1f26
// Address: 009a1f26
// Size: 1094 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "The machine bindings hash is the wrong size"
//   "virtual void pace::ILok2Commander::ChangeBindingsInEncryptedCommandPacket(uint32_t, pace::eden::thr...
//   "Bad command frame size = %d "
//   "[%d] UTILS_CRC32 error checking the CRC of the command frame"
//   "The command ID (0x%X) is not the ID for OpenConnection"
//   "[%d] UTILS_CRC32 error updating the CRC of the command frame"

void FUN_009a1f26(int64_t *param_1,int64_t param_2,int64_t *param_3)

{
  uint64_t uVar1;
  void*puVar2;
  char *pcVar3;
  qword *pqVar4;
  size_t sVar5;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  int64_t local_2f8;
  int64_t lStack_2f0;
  uint64_t local_2e8;
  int local_2d4;
  int64_t local_2d0;
  qword *local_2c8;
  int local_2bc;
  char local_78 [8];
  int local_70;
  uint64_t local_4c;
  uint64_t local_44;
  uint32_t local_3c;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_2f8 = 0;
  lStack_2f0 = 0;
  local_2e8 = 0;
  local_2d0 = param_2;
  if (param_1[1] - *param_1 != 0x14) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    uVar6 = FUN_00928ab0("virtual void pace::ILok2Commander::ChangeBindingsInEncryptedCommandPacket(uint32_t, pace::eden::thrift::ilok::CommandPacket &, const vector<uint8_t> &, vector<uint8_t> &)"
                         ,0xcd0);
    FUN_009c720b(uVar6,uVar1);
  }
  FUN_009a23b8();
  sVar5 = (size_t)&local_2f8;
  pcVar3 = (char *)0x0;
  FUN_0098ce6c(0,1);
  local_2c8 = (qword *)(*(int64_t *)(local_2d0 + 0x68) - *(int64_t *)(local_2d0 + 0x60));
  pqVar4 = &segment_command_00000020.vmsize;
  if (local_2c8 != &segment_command_00000020.vmsize) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    FUN_00983230();
    pcVar3 = 
    "virtual void pace::ILok2Commander::ChangeBindingsInEncryptedCommandPacket(uint32_t, pace::eden::thrift::ilok::CommandPacket &, const vector<uint8_t> &, vector<uint8_t> &)"
    ;
    uVar6 = FUN_00928ab0("virtual void pace::ILok2Commander::ChangeBindingsInEncryptedCommandPacket(uint32_t, pace::eden::thrift::ilok::CommandPacket &, const vector<uint8_t> &, vector<uint8_t> &)"
                         ,0xce4);
    FUN_009c720b(uVar6,uVar1);
    pqVar4 = local_2c8;
  }
  _memcpy(pcVar3,pqVar4,sVar5);
  FUN_0098d718();
  local_2bc = FUN_0097420a(local_78,1);
  if (local_2bc != 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    FUN_00983230();
    uVar6 = FUN_00928ab0("virtual void pace::ILok2Commander::ChangeBindingsInEncryptedCommandPacket(uint32_t, pace::eden::thrift::ilok::CommandPacket &, const vector<uint8_t> &, vector<uint8_t> &)"
                         ,0xcf7);
    FUN_009c720b(uVar6,uVar1);
  }
  local_2d4 = local_70;
  if (local_70 != 1) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    FUN_00983230();
    uVar6 = FUN_00928ab0("virtual void pace::ILok2Commander::ChangeBindingsInEncryptedCommandPacket(uint32_t, pace::eden::thrift::ilok::CommandPacket &, const vector<uint8_t> &, vector<uint8_t> &)"
                         ,0xd01);
    FUN_009c720b(uVar6,uVar1);
  }
  puVar2 = (void*)*param_3;
  if ((uint64_t)(param_3[1] - (int64_t)puVar2) < 0x14) {
    FUN_00958ec0();
    puVar2 = (void*)*param_3;
  }
  else if (param_3[1] - (int64_t)puVar2 != 0x14) {
    param_3[1] = (int64_t)puVar2 + 0x14;
  }
  pcVar3 = local_78;
  *(void*)(puVar2 + 2) = local_3c;
  puVar2[1] = local_44;
  *puVar2 = local_4c;
  puVar2 = (void*)*param_1;
  local_4c = *puVar2;
  local_44 = puVar2[1];
  local_3c = *(void*)(puVar2 + 2);
  local_2bc = FUN_0097420a(pcVar3,0);
  uVar6 = extraout_XMM0_Da;
  if (local_2bc != 0) {
    FUN_00925fd0();
    uVar1 = FUN_00926010();
    FUN_00983230();
    pcVar3 = 
    "virtual void pace::ILok2Commander::ChangeBindingsInEncryptedCommandPacket(uint32_t, pace::eden::thrift::ilok::CommandPacket &, const vector<uint8_t> &, vector<uint8_t> &)"
    ;
    uVar6 = FUN_00928ab0("virtual void pace::ILok2Commander::ChangeBindingsInEncryptedCommandPacket(uint32_t, pace::eden::thrift::ilok::CommandPacket &, const vector<uint8_t> &, vector<uint8_t> &)"
                         ,0xd23);
    uVar6 = FUN_009c720b(uVar6,uVar1);
  }
  uVar6 = FUN_0098d28c(uVar6,0);
  FUN_0098d964(uVar6,local_78);
  _memcpy(pcVar3,local_2c8,sVar5);
  FUN_0098ce7c();
  if (local_2f8 != 0) {
    lStack_2f0 = local_2f8;
    operator_delete(pcVar3);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                      ___stack_chk_fail();
}

