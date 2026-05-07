// Function: FUN_00e4d840
// Address: 00e4d840
// Size: 846 bytes
// Class: GNJSONGenerator
// String references:
//   "\t"
//   "function"
//   "file"
//   "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
//   "line"
//   "appendAsString"
//   "bool GNJSONGenerator::appendAsString(GNArg<GNObject>, GNInt)"
//   "GNString"
//   "\""

uint64_t FUN_00e4d840(uint32_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  uint uVar3;
  uint32_t uVar4;
  void*puVar5;
  char *pcVar6;
  char *unaff_RBX;
  uint64_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int iVar8;
  void*puVar9;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  uint32_t extraout_XMM0_Da_01;
  void*local_a8;
  char local_a0 [8];
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  uint32_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int local_44;
  void*local_40;
  char local_38 [8];
  
  lVar1 = g_02786b60;
  if (*arg1 == 0) {
    if (g_02786b60 != 0) {
      param_1 = FUN_00d50b00();
    }
    local_68 = lVar1;
    local_60 = '\x01';
    local_a0[0] = '\x06';
    local_a0[1] = '\0';
    local_a0[2] = '\0';
    local_a0[3] = '\0';
    local_98 = "function";
    local_90 = "bool GNJSONGenerator::appendAsString(GNArg<GNObject>, GNInt)";
    local_88 = "file";
    local_80 = 
    "/Users/celemony/hudson/workspace/Melodyne_10_mac/AppWork/GNFoundation/Source/GNJSONGenerator.cpp"
    ;
    local_78 = "line";
    local_a8 = &g_0258d950;
    local_70 = 0xd4;
    FUN_00e97360(param_1,&local_a8);
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    uVar7 = 0;
  }
  else {
    FUN_00d4efa0();
    pcVar6 = local_38;
    if (local_a0[0] != '\0') {
      pcVar6 = local_a0;
    }
    local_38[0] = local_a0[0];
    *pcVar6 = '\0';
    if ((local_a0[0] != '\0') && (local_a8 != (void*)0x0)) {
      FUN_00d50b20();
    }
    puVar9 = local_a8;
    if ((g_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
      local_40 = local_a8;
      g_026d5e58 = FUN_00d4fe50();
      g_026d5e40 = "GNString";
      g_026d5e48 = 0x40;
      g_026d5e50 = FUN_0005d920;
      g_026d5e60 = 0;
      ram_00000000026d5e68 = 0;
      g_026d5e70 = 0;
      ram_00000000026d5e78 = 0;
      g_026d5e80 = 0;
      ram_00000000026d5e88 = 0;
      g_026d5e90 = 0;
      ram_00000000026d5e98 = 0;
      g_026d5ea0 = 0;
      ram_00000000026d5ea8 = 0;
      g_026d5eb0 = 0;
      ram_00000000026d5eb8 = 0;
      g_026d5ec0 = 0;
      ram_00000000026d5ec8 = 0;
      g_026d5ed0 = 0;
      ram_00000000026d5ed8 = 0;
      g_026d5ee0 = 0;
      ram_00000000026d5ee8 = 0;
      g_026d5ef0 = 0;
      ram_00000000026d5ef8 = 0;
      g_026d5f00 = 0;
      ___cxa_guard_release();
      puVar9 = local_40;
    }
    puVar5 = (void*)FUN_00e86210();
    if (puVar5 == puVar9) {
      uVar3 = FUN_00e4ca00(extraout_XMM0_Da,param_2);
      uVar7 = (uint64_t)uVar3;
    }
    else {
      FUN_00053ac0();
      puVar5 = (void*)FUN_00e86210();
      if (puVar5 == puVar9) {
        if (param_2 < 0) {
          param_2 = -param_2;
        }
        else if ((char)this_ptr[3] != '\0') {
          if (param_2 == 0) {
            param_2 = 0;
          }
          else {
            unaff_RBX = "\t";
            local_44 = param_2;
            local_40 = puVar9;
            iVar8 = param_2;
            do {
              uVar4 = FUN_00e7dde0();
              FUN_00d8db70(extraout_XMM0_Da_01,uVar4);
              iVar8 = iVar8 + -1;
              puVar9 = local_40;
              param_2 = local_44;
            } while (iVar8 != 0);
          }
        }
        uVar4 = FUN_00d8db40();
        cVar2 = FUN_00e4cc70(uVar4,param_2);
        if (cVar2 == '\0') {
          uVar7 = 0;
        }
        else {
          uVar7 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),1);
          FUN_00d8db40();
        }
      }
      else {
        local_58 = *arg1;
        local_50 = '\0';
        uVar3 = (**(code **)(*this_ptr + 0x390))(extraout_XMM0_Da_00,param_2);
        uVar7 = (uint64_t)uVar3;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_38[0] != '\0') && (puVar9 != (void*)0x0)) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}

