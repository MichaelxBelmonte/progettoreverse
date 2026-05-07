// Function: FUN_0099952c
// Address: 0099952c
// Size: 529 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "This command requires the use of the authority connection"
//   "virtual void pace::ILok2Commander::SignECDSA_UsingCertPrivateKey_BuildCommand(CMD_CmmdPayload_SignE...
//   "Bad size (%d) of in_vHash"


void FUN_0099952c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  int *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  int local_7c;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if ((*(uint *)((longlong)unaff_RDI + 0x404) & 0xf) != 0xd) {
    local_88 = (undefined8 *)FUN_00925fd0();
    FUN_00926010();
    FUN_00928ab0("virtual void pace::ILok2Commander::SignECDSA_UsingCertPrivateKey_BuildCommand(CMD_CmmdPayload_SignECDSA_UsingCertPrivateKey_Struct &, const vector<uint8_t> &, pace::eden::thrift::ilok::CommandPacket &)"
                 ,0x291);
    FUN_009c720b();
  }
  (**(code **)(*unaff_RDI + 0x2a8))(0x2e,param_1,0);
  local_a0 = (int *)FUN_0094c1c0();
  uVar1 = FUN_009a31dc();
  unaff_RSI[3] = uVar1;
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
  *(char *)((longlong)unaff_RSI + 0x21) = (char)local_7c;
  local_48 = unaff_RSI[3];
  local_50 = unaff_RSI[2];
  local_60 = *unaff_RSI;
  local_58 = unaff_RSI[1];
  local_40 = *(undefined4 *)(unaff_RSI + 4);
  FUN_0093828a(local_58,uVar1);
  local_a0 = (int *)((ulonglong)local_a0 & 0xffffffffffffff00);
  uVar2 = *(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78);
  if (uVar2 < 0x20) {
    FUN_009a8930(uVar2,&local_a0);
  }
  else if (uVar2 != 0x20) {
    *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x78) + 0x20;
  }
  *(undefined1 *)(param_1 + 0x28) = 1;
  (**(code **)(*unaff_RDI + 0x298))(param_1,local_78,1);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


