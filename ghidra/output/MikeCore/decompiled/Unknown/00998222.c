// Function: FUN_00998222
// Address: 00998222
// Size: 828 bytes
// Class: Unknown
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Target SerialNumber (0x%X) does no match actual SerialNumber (0x%X)"
//   "virtual void pace::ILok2Commander::openConnection_ResultFrame(const CMD_ILok2_CommandAndResultFrame...
//   "The algorithm key size (%d) is too large for our key buffer (%d)"
//   "ENCR_DeriveILok2FrameKey returned %d"


void FUN_00998222(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong unaff_RSI;
  longlong unaff_RDI;
  undefined4 local_48 [4];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (*(longlong *)(unaff_RDI + 1000) == 0) {
    *(longlong *)(unaff_RDI + 1000) = CONCAT44(*param_1,param_1[1]);
  }
  else if (*(longlong *)(unaff_RDI + 1000) != CONCAT44(*param_1,param_1[1])) {
    FUN_00925fd0();
    FUN_00926010();
    FUN_00983230();
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::openConnection_ResultFrame(const CMD_ILok2_CommandAndResultFrameStruct &, const pace::eden::thrift::ilok::ResultPacket &, CMD_RsltPayload_OpenConnection_Struct &, vector<uint8_t> &)"
                 ,0xfd);
    FUN_009c720b();
  }
  *(undefined4 *)(unaff_RDI + 0x3f0) = param_1[2];
  *(undefined4 *)(unaff_RDI + 0x3f4) = param_1[3];
  *(undefined4 *)(unaff_RDI + 0x3f8) = param_1[4];
  *(undefined2 *)(unaff_RDI + 0x420) = *(undefined2 *)(param_1 + 5);
  *(undefined1 *)(unaff_RDI + 0x422) = *(undefined1 *)((longlong)param_1 + 0x16);
  *(undefined1 *)(unaff_RDI + 0x423) = *(undefined1 *)((longlong)param_1 + 0x17);
  if (*(int *)(unaff_RSI + 0x18) != 2) {
    uVar2 = FUN_00972764();
    if (0x10 < uVar2) {
      FUN_00925fd0();
      FUN_00926010();
      local_48[0] = FUN_00972764();
      FUN_00983230();
      FUN_00983230();
      FUN_00928ab0("virtual void pace::ILok2Commander::openConnection_ResultFrame(const CMD_ILok2_CommandAndResultFrameStruct &, const pace::eden::thrift::ilok::ResultPacket &, CMD_RsltPayload_OpenConnection_Struct &, vector<uint8_t> &)"
                   ,0x110);
      FUN_009c720b();
    }
    iVar3 = FUN_00972a88(local_48,param_1 + 8);
    if (iVar3 != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00983230();
      FUN_00928ab0("virtual void pace::ILok2Commander::openConnection_ResultFrame(const CMD_ILok2_CommandAndResultFrameStruct &, const pace::eden::thrift::ilok::ResultPacket &, CMD_RsltPayload_OpenConnection_Struct &, vector<uint8_t> &)"
                   ,0x120);
      FUN_009c720b();
    }
    uVar1 = param_1[7];
    *(undefined4 *)(unaff_RDI + 0x40c) = uVar1;
    *(undefined4 *)(unaff_RDI + 0x410) = uVar1;
    FUN_00972764();
    FUN_009ad770();
    FUN_009ad770();
    *(undefined8 *)(unaff_RDI + 0x414) = 0x100000000;
    *(undefined4 *)(unaff_RDI + 0x404) = param_1[6];
    *(undefined1 *)(unaff_RDI + 0x424) = 1;
    FUN_0088b676();
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


