// Function: FUN_0099e640
// Address: 0099e640
// Size: 783 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Bad size (%d) of in_vHash"
//   "virtual void pace::ILok2Commander::SignECDSA_UsingAuthRecords_BuildCommand(const CMD_CmmdPayload_Si...
//   "Bad size (%d) of *in_pvEncryptedSecretILok1Data"


void FUN_0099e640(undefined8 *param_1,undefined8 *param_2,void *param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar4;
  int *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  int local_9c;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  int local_7c;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_98 = 0;
  lStack_90 = 0;
  local_88 = 0;
  uVar4 = (**(code **)(*unaff_RDI + 0x2a8))(0x1a,param_3,0);
  local_40 = *(undefined4 *)(unaff_RSI + 4);
  local_48 = unaff_RSI[3];
  local_50 = unaff_RSI[2];
  local_60 = *unaff_RSI;
  local_58 = unaff_RSI[1];
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
  local_c8 = (int *)((ulonglong)local_c8 & 0xffffffffffffff00);
  uVar2 = *(longlong *)((longlong)param_3 + 0x80) - *(longlong *)((longlong)param_3 + 0x78);
  if (uVar2 < 0x20) {
    uVar4 = FUN_009a8930(uVar2,&local_c8);
  }
  else if (uVar2 != 0x20) {
    *(longlong *)((longlong)param_3 + 0x80) = *(longlong *)((longlong)param_3 + 0x78) + 0x20;
  }
  FUN_0099e98a(uVar4,param_2[1]);
  local_c8 = (int *)((ulonglong)local_c8 & 0xffffffffffffff00);
  uVar2 = lStack_90 - local_98;
  if (uVar2 < 0x20) {
    FUN_009542b4(uVar2,&local_c8);
  }
  else if (uVar2 != 0x20) {
    lStack_90 = local_98 + 0x20;
  }
  if ((param_1 != (undefined8 *)0x0) && (*(char *)((longlong)unaff_RSI + 0x21) != '\0')) {
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
  *(undefined1 *)((longlong)param_3 + 0x28) = 1;
  (**(code **)(*unaff_RDI + 0x298))(param_3,local_78,1);
  if (local_98 != 0) {
    lStack_90 = local_98;
    operator_delete(param_3);
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


