// Function: FUN_0099f3a2
// Address: 0099f3a2
// Size: 523 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "The AuthEx Program vector size (%d) is not valid."
//   "virtual void pace::ILok2Commander::AuthEx_BuildCommand(const CMD_CmmdPayload_AuthEx_Struct &, const...
//   "The AuthEx Program vector size (%d) does not match the stated size (%d) in the command frame."


void FUN_0099f3a2(longlong param_1,int *param_2)

{
  uint uVar1;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  (**(code **)(*unaff_RDI + 0x2a8))(0x38,param_1,0);
  local_40 = unaff_RSI[4];
  local_48 = unaff_RSI[3];
  local_50 = unaff_RSI[2];
  local_60 = *unaff_RSI;
  local_58 = unaff_RSI[1];
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
  *(undefined1 *)(param_1 + 0x28) = 1;
  (**(code **)(*unaff_RDI + 0x298))(param_1,local_78,1);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


