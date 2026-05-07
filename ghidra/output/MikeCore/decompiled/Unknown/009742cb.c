// Function: FUN_009742cb
// Address: 009742cb
// Size: 1765 bytes
// Class: Unknown
// String references:
//   "version"
//   "platform"
//   "systemName"
//   "nodeName"
//   "LsMachineBinding data size = %ld; expected data size = %ld."
//   "/Users/admin/jenkins/workspace/EdenFiveMacFull/client/pace/libraries/src/libactivate/MachineIdLsUti...
//   "pace::MachineId pace::newMachineIdFromLs(const license_services::LsMachineIdPtr &)"
//   "bindingData"
//   "bindingType"
//   "bindingId"
//   "systemRelease"
//   "systemMachine"
//   "localizedName"


undefined8 FUN_009742cb(void)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong lVar3;
  code *pcVar4;
  code *pcVar5;
  string *this;
  code **ppcVar6;
  longlong lVar7;
  char *pcVar8;
  code *pcVar9;
  code *pcVar10;
  undefined8 unaff_RDI;
  string *psVar11;
  undefined4 uVar12;
  undefined8 local_118;
  longlong local_110;
  undefined *local_108;
  longlong local_100;
  byte local_f8;
  byte local_e0;
  undefined7 uStack_df;
  longlong local_d8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  byte local_78 [24];
  byte local_60 [8];
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_98 = (code *)0x0;
  pcStack_90 = (code *)0x0;
  local_88 = (code *)0x0;
  FUN_00a56bcc();
  this = (string *)(*(ulonglong **)(local_100 + 8))[1];
  if (this != (string *)**(ulonglong **)(local_100 + 8)) {
    psVar11 = (string *)0x0;
    local_108 = PTR_DAT_0249c0b8 + 0x10;
    do {
      FUN_00a5b820(this,psVar11);
      uVar12 = FUN_00a5571e();
      FUN_009bafbc(uVar12,"bindingData");
      FUN_00a5571e();
      FUN_0094e400();
      local_118 = 0x14;
      lVar3 = CONCAT71(uStack_df,local_e0);
      local_110 = local_d8 - lVar3;
      if (local_110 != 0x14) {
        FUN_00925fd0();
        FUN_00926010();
        local_c0 = (code *)&local_110;
        local_b8 = FUN_00ac1940;
        local_b0 = FUN_009baee0;
        FUN_00983230();
        local_c0 = (code *)&local_118;
        local_b8 = FUN_00ac1940;
        local_b0 = FUN_009baee0;
        FUN_00983230();
        FUN_00928ab0("pace::MachineId pace::newMachineIdFromLs(const license_services::LsMachineIdPtr &)"
                     ,0x52);
        FUN_009bcc8b();
        lVar3 = CONCAT71(uStack_df,local_e0);
      }
      if (lVar3 != local_d8) {
        lVar7 = 0;
        do {
          local_78[lVar7] = *(byte *)(lVar3 + lVar7);
          lVar7 = lVar7 + 1;
        } while (local_d8 - lVar3 != lVar7);
      }
      uVar12 = FUN_00a5571e();
      FUN_009bafbc(uVar12,"bindingType");
      FUN_00a5571e();
      uVar12 = FUN_00a5571e();
      FUN_009bafbc(uVar12,"bindingId");
      lVar3 = FUN_00a5571e();
      FUN_009d0730(local_78,*(undefined4 *)(lVar3 + 0x48));
      if (pcStack_90 == local_88) {
        if (0x666666666666666 <
            ((longlong)pcStack_90 - (longlong)local_98 >> 3) * -0x3333333333333333 + 1U) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        FUN_00974b1c(&local_88);
        pcVar2 = local_88;
        pcVar5 = local_a8;
        *(undefined **)local_b0 = local_108;
        *(undefined8 *)(local_b0 + 8) = local_58;
        *(code **)(local_b0 + 0x10) = local_50;
        *(undefined8 *)(local_b0 + 0x18) = local_48;
        *(undefined4 *)(local_b0 + 0x20) = local_40;
        pcVar9 = local_b0 + 0x28;
        pcVar4 = local_b8;
        local_b0 = local_98;
        for (pcVar10 = pcStack_90; pcVar10 != local_98; pcVar10 = pcVar10 + -0x28) {
          *(undefined **)(pcVar4 + -0x28) = &DAT_02523138;
          uVar1 = *(undefined8 *)(pcVar10 + -0x18);
          *(undefined8 *)(pcVar4 + -0x20) = *(undefined8 *)(pcVar10 + -0x20);
          *(undefined8 *)(pcVar4 + -0x18) = uVar1;
          *(undefined8 *)(pcVar4 + -0x10) = *(undefined8 *)(pcVar10 + -0x10);
          *(undefined4 *)(pcVar4 + -8) = *(undefined4 *)(pcVar10 + -8);
          pcVar4 = pcVar4 + -0x28;
          local_b0 = pcStack_90;
        }
        local_b8 = local_98;
        local_88 = local_a8;
        local_a8 = pcVar2;
        local_c0 = local_98;
        local_98 = pcVar4;
        pcStack_90 = pcVar9;
        FUN_009ad698();
      }
      else {
        *(undefined **)pcStack_90 = &DAT_02523138;
        *(undefined8 *)(pcStack_90 + 8) = local_58;
        *(code **)(pcStack_90 + 0x10) = local_50;
        *(undefined8 *)(pcStack_90 + 0x18) = local_48;
        *(undefined4 *)(pcStack_90 + 0x20) = local_40;
        pcStack_90 = pcStack_90 + 0x28;
        pcVar5 = local_50;
      }
      FUN_009d08e6();
      if (CONCAT71(uStack_df,local_e0) != 0) {
        local_d8 = CONCAT71(uStack_df,local_e0);
        operator_delete(pcVar5);
      }
      psVar11 = psVar11 + 1;
      this = (string *)((*(longlong **)(local_100 + 8))[1] - **(longlong **)(local_100 + 8) >> 5);
    } while (psVar11 < this);
  }
  uVar12 = FUN_00a5686e();
  FUN_009bafbc(uVar12,"version");
  lVar3 = FUN_00a5686e();
  uVar12 = *(undefined4 *)(lVar3 + 0x108);
  FUN_00a5686e();
  pcVar8 = "systemName";
  FUN_009bafbc();
  FUN_00a5686e();
  std::string::string(this,(string *)pcVar8);
  FUN_00a5686e();
  pcVar8 = "systemRelease";
  FUN_009bafbc();
  FUN_00a5686e();
  std::string::string(this,(string *)pcVar8);
  FUN_00a5686e();
  pcVar8 = "systemMachine";
  FUN_009bafbc();
  FUN_00a5686e();
  std::string::string(this,(string *)pcVar8);
  FUN_00a5686e();
  pcVar8 = "nodeName";
  FUN_009bafbc();
  FUN_00a5686e();
  std::string::string(this,(string *)pcVar8);
  FUN_00a5686e();
  pcVar8 = "localizedName";
  FUN_009bafbc();
  FUN_00a5686e();
  std::string::string(this,(string *)pcVar8);
  ppcVar6 = &local_c0;
  FUN_009d0e24(ppcVar6,uVar12,local_60,&local_e0);
  uVar12 = FUN_00a5686e();
  FUN_009bafbc(uVar12,"platform");
  FUN_00a5686e();
  FUN_009d0ece();
  if ((local_f8 & 1) != 0) {
    operator_delete(ppcVar6);
  }
  if ((local_78[0] & 1) != 0) {
    operator_delete(ppcVar6);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(ppcVar6);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(ppcVar6);
  }
  if (((ulonglong)local_c0 & 1) != 0) {
    operator_delete(ppcVar6);
  }
  FUN_009ad640();
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_RDI;
}


