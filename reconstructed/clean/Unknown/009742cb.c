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

uint64_t FUN_009742cb(void)

{
  uint64_t uVar1;
  code *pcVar2;
  int64_t lVar3;
  code *pcVar4;
  code *pcVar5;
  string *this;
  code **ppcVar6;
  int64_t lVar7;
  char *pcVar8;
  code *pcVar9;
  code *pcVar10;
  uint64_t this_ptr;
  string *psVar11;
  uint32_t uVar12;
  uint64_t local_118;
  int64_t local_110;
  void*local_108;
  int64_t local_100;
  byte local_f8;
  byte local_e0;
  undefined7 uStack_df;
  int64_t local_d8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  byte local_78 [24];
  byte local_60 [8];
  uint64_t local_58;
  code *local_50;
  uint64_t local_48;
  uint32_t local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  local_98 = 0x0;
  pcStack_90 = 0x0;
  local_88 = 0x0;
  FUN_00a56bcc();
  this = (string *)(*(uint64_t **)(local_100 + 8))[1];
  if (this != (string *)**(uint64_t **)(local_100 + 8)) {
    psVar11 = (string *)0x0;
    local_108 = PTRg_0249c0b8 + 0x10;
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
        local_c0 = &local_110;
        local_b8 = FUN_00ac1940;
        local_b0 = FUN_009baee0;
        FUN_00983230();
        local_c0 = &local_118;
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
      FUN_009d0730(local_78,*(void*)(lVar3 + 0x48));
      if (pcStack_90 == local_88) {
        if (0x666666666666666 <
            ((int64_t)pcStack_90 - (int64_t)local_98 >> 3) * -0x3333333333333333 + 1U) {
                              std::__vector_base_common<true>::__throw_length_error();
        }
        FUN_00974b1c(&local_88);
        pcVar2 = local_88;
        pcVar5 = local_a8;
        *(void**)local_b0 = local_108;
        *(void*)(local_b0 + 8) = local_58;
        *(code **)(local_b0 + 0x10) = local_50;
        *(void*)(local_b0 + 0x18) = local_48;
        *(void*)(local_b0 + 0x20) = local_40;
        pcVar9 = local_b0 + 0x28;
        pcVar4 = local_b8;
        local_b0 = local_98;
        for (pcVar10 = pcStack_90; pcVar10 != local_98; pcVar10 = pcVar10 + -0x28) {
          *(void**)(pcVar4 + -0x28) = &g_02523138;
          uVar1 = *(void*)(pcVar10 + -0x18);
          *(void*)(pcVar4 + -0x20) = *(void*)(pcVar10 + -0x20);
          *(void*)(pcVar4 + -0x18) = uVar1;
          *(void*)(pcVar4 + -0x10) = *(void*)(pcVar10 + -0x10);
          *(void*)(pcVar4 + -8) = *(void*)(pcVar10 + -8);
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
        *(void**)pcStack_90 = &g_02523138;
        *(void*)(pcStack_90 + 8) = local_58;
        *(code **)(pcStack_90 + 0x10) = local_50;
        *(void*)(pcStack_90 + 0x18) = local_48;
        *(void*)(pcStack_90 + 0x20) = local_40;
        pcStack_90 = pcStack_90 + 0x28;
        pcVar5 = local_50;
      }
      FUN_009d08e6();
      if (CONCAT71(uStack_df,local_e0) != 0) {
        local_d8 = CONCAT71(uStack_df,local_e0);
        operator_delete(pcVar5);
      }
      psVar11 = psVar11 + 1;
      this = (string *)((*(int64_t **)(local_100 + 8))[1] - **(int64_t **)(local_100 + 8) >> 5);
    } while (psVar11 < this);
  }
  uVar12 = FUN_00a5686e();
  FUN_009bafbc(uVar12,"version");
  lVar3 = FUN_00a5686e();
  uVar12 = *(void*)(lVar3 + 0x108);
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
  if (((uint64_t)local_c0 & 1) != 0) {
    operator_delete(ppcVar6);
  }
  FUN_009ad640();
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return this_ptr;
}

