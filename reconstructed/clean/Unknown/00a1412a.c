// Function: FUN_00a1412a
// Address: 00a1412a
// Size: 1501 bytes
// Class: Unknown
// String references:
//   "__REPLACE_ME_EDEN_VERSION_DISPLAY_LONG__"
//   "__REPLACE_ME_EDEN_VERSION_NUMBER_FULL__"
//   "__REPLACE_ME_EDEN_VERSION_DISPLAY__"
//   "__REPLACE_ME_EDEN_COPYRIGHT__"
//   "__REPLACE_ME_EXECUTABLE_NAME__"
//   "__REPLACE_ME_EXECUTABLE__"
//   "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" ...
//   "\t<key>CFBundleExecutable</key>\n\t<string>__REPLACE_ME_EXECUTABLE_NAME__</string>\n"
//   "5.9.0.5097"
//   "5.9.0 GM"
//   "5.9.0 GM (b5097, edaa5278)"
//   "Copyright 2023, PACE Anti-Piracy, Inc., All rights reserved."

void FUN_00a1412a(char *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  size_t sVar1;
  uint32_t extraout_var;
  byte *pbVar2;
  uint32_t extraout_var_00;
  uint32_t extraout_var_01;
  uint32_t extraout_var_02;
  int64_t lVar3;
  byte *pbVar4;
  int64_t lVar5;
  uint64_t uVar6;
  byte *pbVar7;
  uint64_t uVar8;
  byte *arg1;
  byte *this_ptr;
  bool bVar9;
  char *pcVar10;
  char *pcVar11;
  byte *local_90;
  uint64_t local_88;
  uint64_t uStack_80;
  int64_t local_78;
  char *local_68;
  char *local_60;
  byte *local_58;
  char *local_50;
  char *local_48;
  byte *local_40;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  FUN_00a1473a();
  lVar5 = g_02754510;
  sVar1 = _strlen(param_1);
  local_50 = "__REPLACE_ME_EDEN_VERSION_DISPLAY_LONG__";
  local_48 = "";
  local_40 = local_90;
  pbVar7 = this_ptr + 1;
  if ((*this_ptr & 1) == 0) {
    uVar8 = (uint64_t)(*this_ptr >> 1);
    pbVar4 = pbVar7;
  }
  else {
    uVar8 = *(uint64_t *)(this_ptr + 8);
    pbVar4 = *(byte **)(this_ptr + 0x10);
  }
  pbVar4 = pbVar4 + uVar8;
  pbVar2 = (byte *)FUN_009cfa40();
  local_68 = local_50;
  local_60 = local_48;
  local_58 = local_40;
  if (pbVar2 != pbVar4) {
    uStack_80 = CONCAT44(extraout_var,sVar1) + lVar5;
    local_88 = lVar5;
    FUN_009cfaa3(pbVar2,uStack_80,pbVar4,param_4,uStack_80);
    local_40 = pbVar2;
  }
  lVar5 = g_027544f8;
  sVar1 = _strlen((char *)local_40);
  local_50 = "__REPLACE_ME_EDEN_VERSION_NUMBER_FULL__";
  local_48 = "";
  local_40 = local_90;
  if ((*this_ptr & 1) == 0) {
    uVar8 = (uint64_t)(*this_ptr >> 1);
    pbVar4 = pbVar7;
  }
  else {
    uVar8 = *(uint64_t *)(this_ptr + 8);
    pbVar4 = *(byte **)(this_ptr + 0x10);
  }
  pbVar4 = pbVar4 + uVar8;
  pbVar2 = (byte *)FUN_009cfa40();
  local_68 = local_50;
  local_60 = local_48;
  local_58 = local_40;
  if (pbVar2 != pbVar4) {
    uStack_80 = CONCAT44(extraout_var_00,sVar1) + lVar5;
    local_88 = lVar5;
    FUN_009cfaa3(pbVar2,uStack_80,pbVar4,param_4,uStack_80);
    local_40 = pbVar2;
  }
  lVar5 = g_02754508;
  sVar1 = _strlen((char *)local_40);
  local_50 = "__REPLACE_ME_EDEN_VERSION_DISPLAY__";
  local_48 = "";
  local_40 = local_90;
  if ((*this_ptr & 1) == 0) {
    uVar8 = (uint64_t)(*this_ptr >> 1);
    pbVar4 = pbVar7;
  }
  else {
    uVar8 = *(uint64_t *)(this_ptr + 8);
    pbVar4 = *(byte **)(this_ptr + 0x10);
  }
  pbVar4 = pbVar4 + uVar8;
  pbVar2 = (byte *)FUN_009cfa40();
  local_68 = local_50;
  local_60 = local_48;
  local_58 = local_40;
  if (pbVar2 != pbVar4) {
    uStack_80 = CONCAT44(extraout_var_01,sVar1) + lVar5;
    local_88 = lVar5;
    FUN_009cfaa3(pbVar2,uStack_80,pbVar4,param_4,uStack_80);
    local_40 = pbVar2;
  }
  lVar5 = g_02754520;
  sVar1 = _strlen((char *)local_40);
  local_50 = "__REPLACE_ME_EDEN_COPYRIGHT__";
  local_48 = "";
  local_40 = local_90;
  if ((*this_ptr & 1) == 0) {
    uVar8 = (uint64_t)(*this_ptr >> 1);
    pbVar4 = pbVar7;
  }
  else {
    uVar8 = *(uint64_t *)(this_ptr + 8);
    pbVar4 = *(byte **)(this_ptr + 0x10);
  }
  pbVar4 = pbVar4 + uVar8;
  pbVar2 = (byte *)FUN_009cfa40();
  local_68 = local_50;
  local_60 = local_48;
  local_58 = local_40;
  if (pbVar2 != pbVar4) {
    uStack_80 = CONCAT44(extraout_var_02,sVar1) + lVar5;
    local_88 = lVar5;
    FUN_009cfaa3();
    local_40 = pbVar2;
  }
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  if (arg1 == (byte *)0x0) {
    local_88._0_1_ = 0;
  }
  else {
    std::string::assign((char *)local_40);
    if ((*arg1 & 1) == 0) {
      pbVar4 = arg1 + 1;
      uVar8 = (uint64_t)(*arg1 >> 1);
    }
    else {
      uVar8 = *(uint64_t *)(arg1 + 8);
      pbVar4 = *(byte **)(arg1 + 0x10);
    }
    pcVar10 = "__REPLACE_ME_EXECUTABLE_NAME__";
    pcVar11 = "";
    local_50 = "__REPLACE_ME_EXECUTABLE_NAME__";
    local_48 = "";
    local_40 = local_90;
    uVar6 = uStack_80;
    lVar5 = local_78;
    if ((local_88 & 1) == 0) {
      uVar6 = local_88 >> 1 & 0x7f;
      lVar5 = (int64_t)&local_88 + 1;
    }
    lVar5 = uVar6 + lVar5;
    lVar3 = FUN_009cfa40();
    local_68 = local_50;
    local_60 = local_48;
    local_58 = local_40;
    if (lVar3 != lVar5) {
      pbVar2 = pbVar4 + uVar8;
      FUN_00a15da2(lVar3,pbVar2,lVar5,param_4,pbVar2,pbVar4,pbVar2,pcVar10,pcVar11);
    }
  }
  bVar9 = ((byte)local_88 & 1) != 0;
  lVar5 = (int64_t)&local_88 + 1;
  if (bVar9) {
    lVar5 = local_78;
  }
  uVar8 = (uint64_t)((byte)local_88 >> 1);
  if (bVar9) {
    uVar8 = uStack_80;
  }
  pcVar10 = "__REPLACE_ME_EXECUTABLE__";
  pcVar11 = "";
  local_50 = "__REPLACE_ME_EXECUTABLE__";
  local_48 = "";
  local_40 = local_90;
  if ((*this_ptr & 1) == 0) {
    uVar6 = (uint64_t)(*this_ptr >> 1);
  }
  else {
    pbVar7 = *(byte **)(this_ptr + 0x10);
    uVar6 = *(uint64_t *)(this_ptr + 8);
  }
  pbVar7 = pbVar7 + uVar6;
  pbVar4 = (byte *)FUN_009cfa40();
  local_68 = local_50;
  local_60 = local_48;
  local_58 = local_40;
  if (pbVar4 != pbVar7) {
    lVar3 = uVar8 + lVar5;
    FUN_00a15da2(pbVar4,lVar3,pbVar7,param_4,lVar3,lVar5,lVar3,pcVar10,pcVar11);
    local_40 = pbVar4;
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

