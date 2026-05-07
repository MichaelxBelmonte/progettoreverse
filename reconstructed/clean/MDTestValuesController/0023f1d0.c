// Function: FUN_0023f1d0
// Address: 0023f1d0
// Size: 588 bytes
// Class: MDTestValuesController

uint64_t FUN_0023f1d0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t *plVar4;
  int64_t this_ptr;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    local_58 = local_40[0];
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_0023f250:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023f250;
    (**(code **)((int64_t)&dylib_command_00001288.cmd + *plVar4))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    plVar4 = local_48;
    pcVar3 = local_40;
    if (local_40[0] == '\0') {
      pcVar3 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar3 = '\0';
    if ((local_40[0] != '\0') && (plVar4 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar4 == (int64_t *)0x0) {
      plVar4 = *(int64_t **)(this_ptr + 0x90);
LAB_0023f2cf:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023f2cf;
    (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
                *plVar4 + 0x48))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar2 = g_026f6e10;
    if (g_026f6e10 != 0) {
      FUN_00d50b00();
    }
    FUN_0023de90();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar1 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar1 == (int64_t *)0x0) {
    return 1;
  }
  FUN_01caeae0();
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (local_48 == (int64_t *)0x0) {
    plVar4 = *(int64_t **)(this_ptr + 0x90);
  }
  else {
    plVar4 = local_48;
    if (local_38[0] != '\0') goto LAB_0023f3d3;
  }
  FUN_00d50b00();
LAB_0023f3d3:
  (**(code **)((int64_t)&dylib_command_00001288.cmd + *plVar4))();
  FUN_01d66ab0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}

