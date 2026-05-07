// Function: FUN_009a0388
// Address: 009a0388
// Size: 677 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Bad size (%d) of in_vTweak"
//   "virtual void pace::ILok2Commander::DLCKeyExchange_BuildCommand(const CMD_CmmdPayload_DLCKeyExchange...
//   "Bad size (%d) of in_vEncryptedIlokDataPvssAndQueueSecret"


void FUN_009a0388(undefined8 *param_1,int *param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar6;
  size_t sVar7;
  longlong lVar8;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  sVar7 = 0;
  (**(code **)(*unaff_RDI + 0x2a8))(0x3c,param_3);
  local_40 = unaff_RSI[4];
  local_48 = unaff_RSI[3];
  local_50 = unaff_RSI[2];
  local_60 = *unaff_RSI;
  local_58 = unaff_RSI[1];
  lVar8 = *(longlong *)(param_3 + 0x78);
  uVar3 = *(longlong *)(param_3 + 0x80) - lVar8;
  if (uVar3 < 0x26c) {
    FUN_0088d550();
    lVar8 = *(longlong *)(param_3 + 0x78);
  }
  else if (uVar3 != 0x26c) {
    *(longlong *)(param_3 + 0x80) = lVar8 + 0x26c;
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
  uVar3 = (ulonglong)uVar1 + 8 + (ulonglong)uVar2;
  pvVar5 = *(void **)(param_3 + 0x78);
  uVar6 = *(longlong *)(param_3 + 0x80) - (longlong)pvVar5;
  if (uVar6 < uVar3) {
    FUN_0088d550();
  }
  else if (uVar3 < uVar6) {
    pvVar5 = (void *)((longlong)pvVar5 + uVar3);
    *(void **)(param_3 + 0x80) = pvVar5;
  }
  _memcpy(pvVar5,(void *)(ulonglong)uVar1,sVar7);
  FUN_0094c1c0();
  uVar4 = FUN_009a31dc();
  *(undefined8 *)(lVar8 + 0x10) = uVar4;
  _memcpy(pvVar5,(void *)(ulonglong)uVar2,sVar7);
  *(undefined1 *)(param_3 + 0x28) = 1;
  (**(code **)(*unaff_RDI + 0x298))(param_3,local_78,1);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


