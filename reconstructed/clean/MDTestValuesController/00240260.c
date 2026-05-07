// Function: FUN_00240260
// Address: 00240260
// Size: 790 bytes
// Class: MDTestValuesController

char FUN_00240260(uint64_t param_1,uint32_t param_2)

{
  char *pcVar1;
  int64_t *plVar2;
  int64_t this_ptr;
  int64_t *plVar3;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  uint32_t local_64;
  char local_58;
  undefined7 uStack_57;
  char local_50;
  int64_t *local_48;
  char local_40 [15];
  char local_31;
  
  plVar3 = *(int64_t **)(this_ptr + 0x90);
  local_64 = param_2;
  (**(code **)(&UNK_00001550 + *plVar3))();
  plVar2 = local_48;
  local_58 = local_40[0];
  pcVar1 = local_40;
  if (local_40[0] == '\0') {
    pcVar1 = &local_58;
  }
  *pcVar1 = '\0';
  if ((local_40[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 == (int64_t *)0x0) {
    plVar2 = *(int64_t **)(this_ptr + 0x90);
LAB_002402d8:
    FUN_00d50b00();
  }
  else if (local_58 == '\0') goto LAB_002402d8;
  local_31 = (**(code **)((int64_t)&dylib_command_00001220.dylib.current_version + *plVar2))();
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (local_31 == '\0') {
    FUN_01caeae0();
    plVar3 = local_48;
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      return local_31;
    }
    FUN_01caeae0();
    FUN_00d6f370();
    local_78 = g_026f6e88;
    if (g_026f6e88 != 0) {
      FUN_00d50b00();
    }
    local_70 = '\x01';
    FUN_00d70f90(param_1,1);
    FUN_01d66ab0();
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
      FUN_00d50b20();
    }
    if (local_40[0] == '\0') {
      return local_31;
    }
    if (local_48 == (int64_t *)0x0) {
      return local_31;
    }
    FUN_00d50b20();
    return local_31;
  }
  if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
    plVar3 = (int64_t *)0x0;
  }
  else {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    plVar3 = local_48;
    pcVar1 = local_40;
    if (local_40[0] == '\0') {
      pcVar1 = &local_58;
    }
    local_58 = local_40[0];
    *pcVar1 = '\0';
    if ((local_40[0] != '\0') && (plVar3 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar3 == (int64_t *)0x0) {
      plVar3 = *(int64_t **)(this_ptr + 0x90);
      if (plVar3 == (int64_t *)0x0) {
        plVar3 = (int64_t *)0x0;
        goto LAB_00240452;
      }
    }
    else if (local_58 != '\0') goto LAB_00240452;
    FUN_00d50b00();
  }
LAB_00240452:
  FUN_019415b0();
  if ((char)local_64 != '\0') {
    FUN_01946d20();
    FUN_00d6f370();
    local_88 = g_026f6e88;
    if (g_026f6e88 != 0) {
      FUN_00d50b00();
    }
    local_80 = '\x01';
    FUN_00d70ea0(param_1,&local_88);
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_00d6f370();
    FUN_00d71400();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  plVar2 = local_48;
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_01caeae0();
    FUN_01d66ab0();
    if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return local_31;
}

