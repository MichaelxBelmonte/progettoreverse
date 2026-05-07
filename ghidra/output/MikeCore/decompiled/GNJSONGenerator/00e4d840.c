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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_00e4d840(undefined4 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char *pcVar6;
  char *unaff_RBX;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar8;
  undefined *puVar9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined *local_a8;
  char local_a0 [8];
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  int local_44;
  undefined *local_40;
  char local_38 [8];
  
  lVar1 = DAT_02786b60;
  if (*unaff_RSI == 0) {
    if (DAT_02786b60 != 0) {
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
    local_a8 = &DAT_0258d950;
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
    if ((local_a0[0] != '\0') && (local_a8 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
    puVar9 = local_a8;
    if ((DAT_026fd0c0 == '\0') && (iVar8 = ___cxa_guard_acquire(), iVar8 != 0)) {
      local_40 = local_a8;
      _DAT_026d5e58 = FUN_00d4fe50();
      DAT_026d5e40 = "GNString";
      _DAT_026d5e48 = 0x40;
      _DAT_026d5e50 = FUN_0005d920;
      _DAT_026d5e60 = 0;
      uRam00000000026d5e68 = 0;
      _DAT_026d5e70 = 0;
      uRam00000000026d5e78 = 0;
      _DAT_026d5e80 = 0;
      uRam00000000026d5e88 = 0;
      _DAT_026d5e90 = 0;
      uRam00000000026d5e98 = 0;
      _DAT_026d5ea0 = 0;
      uRam00000000026d5ea8 = 0;
      _DAT_026d5eb0 = 0;
      uRam00000000026d5eb8 = 0;
      _DAT_026d5ec0 = 0;
      uRam00000000026d5ec8 = 0;
      _DAT_026d5ed0 = 0;
      uRam00000000026d5ed8 = 0;
      _DAT_026d5ee0 = 0;
      uRam00000000026d5ee8 = 0;
      _DAT_026d5ef0 = 0;
      uRam00000000026d5ef8 = 0;
      _DAT_026d5f00 = 0;
      ___cxa_guard_release();
      puVar9 = local_40;
    }
    puVar5 = (undefined *)FUN_00e86210();
    if (puVar5 == puVar9) {
      uVar3 = FUN_00e4ca00(extraout_XMM0_Da,param_2);
      uVar7 = (ulonglong)uVar3;
    }
    else {
      FUN_00053ac0();
      puVar5 = (undefined *)FUN_00e86210();
      if (puVar5 == puVar9) {
        if (param_2 < 0) {
          param_2 = -param_2;
        }
        else if ((char)unaff_RDI[3] != '\0') {
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
          uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
          FUN_00d8db40();
        }
      }
      else {
        local_58 = *unaff_RSI;
        local_50 = '\0';
        uVar3 = (**(code **)(*unaff_RDI + 0x390))(extraout_XMM0_Da_00,param_2);
        uVar7 = (ulonglong)uVar3;
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    if ((local_38[0] != '\0') && (puVar9 != (undefined *)0x0)) {
      FUN_00d50b20();
    }
  }
  return uVar7 & 0xffffffff;
}


