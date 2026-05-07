// Function: FUN_009a725a
// Address: 009a725a
// Size: 1173 bytes
// Class: GNString
// String references:
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libilokutil/Ilok2Commander...
//   "Bad command frame size (%d) while finalizing the command"
//   "virtual void pace::ILok2Commander::finalizeCommand(uint32_t, CMD_ILok2_CommandAndResultFrameStruct ...
//   "[%d] UTILS_CRC32 error setting the CRC in the command frame"
//   "Cannot batch command while the hashing commands option is enabled"
//   "[%d] UTILS_CRC32 error setting the CRC in the extra command data"


void FUN_009a725a(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  ulong uVar5;
  ulonglong uVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int local_280;
  int local_27c;
  int *local_278;
  code *local_270;
  undefined1 *local_268;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  if (0x3f < unaff_ESI - 1U) {
    FUN_00925fd0();
    FUN_00926010();
    local_278 = &local_27c;
    local_270 = FUN_009595d8;
    local_268 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::finalizeCommand(uint32_t, CMD_ILok2_CommandAndResultFrameStruct &, pace::eden::thrift::ilok::CommandPacket &, bool)"
                 ,&DAT_00001616);
    FUN_009c720b();
  }
  uVar7 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x78);
  if (uVar7 == 0) {
    uVar7 = 0;
  }
  else {
    uVar3 = FUN_00972737();
    if (param_3 != '\0') {
      uVar7 = uVar7 + 4;
    }
    iVar8 = uVar3 - uVar7 % uVar3;
    if (uVar7 % uVar3 == 0) {
      iVar8 = 0;
    }
    uVar7 = iVar8 + uVar7;
    uVar9 = (ulonglong)uVar7;
    uVar2 = FUN_009e9b47();
    local_278 = (int *)CONCAT71(local_278._1_7_,uVar2);
    uVar6 = *(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78);
    if (uVar6 < uVar9) {
      FUN_009a8930(uVar6,&local_278);
    }
    else if (uVar9 < uVar6) {
      *(ulonglong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x78) + uVar9;
    }
  }
  *(uint *)((longlong)param_2 + 0x14) = uVar7;
  local_280 = FUN_0097420a(param_2,0);
  if (local_280 != 0) {
    FUN_00925fd0();
    FUN_00926010();
    local_278 = &local_280;
    local_270 = FUN_009595d8;
    local_268 = &LAB_009977a0;
    FUN_00983230();
    FUN_00928ab0("virtual void pace::ILok2Commander::finalizeCommand(uint32_t, CMD_ILok2_CommandAndResultFrameStruct &, pace::eden::thrift::ilok::CommandPacket &, bool)"
                 ,&DAT_0000164a);
    FUN_009c720b();
  }
  iVar8 = *(int *)(unaff_RDI + 0x3fc);
  if (iVar8 != 0) {
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      FUN_00925fd0();
      FUN_00926010();
      FUN_00928ab0("virtual void pace::ILok2Commander::finalizeCommand(uint32_t, CMD_ILok2_CommandAndResultFrameStruct &, pace::eden::thrift::ilok::CommandPacket &, bool)"
                   ,&DAT_00001652);
      FUN_009c720b();
      iVar8 = *(int *)(unaff_RDI + 0x3fc);
    }
    if (iVar8 == 1) {
      *(undefined4 *)(unaff_RDI + 0x3fc) = 0;
      FUN_0098ef68();
      *(undefined4 *)(unaff_RDI + 0x3fc) = 1;
    }
  }
  FUN_0092ca9c();
  uVar5 = 0;
  FUN_0098ce6c(0,1,unaff_RDI + 0x438);
  (**(code **)(local_278 + 0x10))();
  if (uVar7 != 0) {
    if (param_3 != '\0') {
      uVar5 = 0;
      local_280 = FUN_0097420a(0,0);
      if (local_280 != 0) {
        FUN_00925fd0();
        FUN_00926010();
        FUN_00983230();
        uVar5 = 0x1fcf128;
        FUN_00928ab0("virtual void pace::ILok2Commander::finalizeCommand(uint32_t, CMD_ILok2_CommandAndResultFrameStruct &, pace::eden::thrift::ilok::CommandPacket &, bool)"
                     ,&DAT_00001680);
        FUN_009c720b();
      }
    }
    if (*(int *)(unaff_RDI + 0x3fc) == 1) {
      *(undefined4 *)(unaff_RDI + 0x3fc) = 0;
      (**(code **)(*(longlong *)(unaff_RDI + 0x270) + 0x28))();
      *(undefined4 *)(unaff_RDI + 0x3fc) = 1;
    }
    (**(code **)(local_278 + 0x10))();
  }
  plVar4 = operator_new(uVar5);
  plVar4[9] = param_2[7];
  plVar4[8] = param_2[6];
  plVar4[7] = param_2[5];
  plVar4[6] = param_2[4];
  plVar4[5] = param_2[3];
  plVar4[4] = param_2[2];
  lVar1 = *param_2;
  plVar4[3] = param_2[1];
  plVar4[2] = lVar1;
  plVar4[1] = unaff_RDI + 8;
  lVar1 = *(longlong *)(unaff_RDI + 8);
  *plVar4 = lVar1;
  *(longlong **)(lVar1 + 8) = plVar4;
  *(longlong **)(unaff_RDI + 8) = plVar4;
  *(longlong *)(unaff_RDI + 0x18) = *(longlong *)(unaff_RDI + 0x18) + 1;
  *(int *)(unaff_RDI + 0x418) = *(int *)(unaff_RDI + 0x418) + 1;
  FUN_0098ce7c();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


