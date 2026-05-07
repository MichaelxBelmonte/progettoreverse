// Function: FUN_0024a8a0
// Address: 0024a8a0
// Size: 740 bytes
// Class: GNFilePath

uint64_t FUN_0024a8a0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  char *pcVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (param_2 != 0) {
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    if (plVar1 == (int64_t *)0x0) {
LAB_0024a92d:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      pcVar2 = local_38;
      if (local_48[0] != '\0') {
        pcVar2 = local_48;
      }
      local_38[0] = local_48[0];
      *pcVar2 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 == 0) {
        lVar3 = *(int64_t *)(this_ptr + 0x90);
        if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_0024a92d;
      }
      else {
        lVar3 = local_50;
        if (local_38[0] != '\0') goto LAB_0024a92f;
      }
      FUN_00d50b00();
    }
LAB_0024a92f:
    FUN_019928e0();
    if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    if (plVar1 == (int64_t *)0x0) {
LAB_0024a9ba:
      lVar3 = 0;
    }
    else {
      (**(code **)(&UNK_00001550 + *plVar1))();
      pcVar2 = local_38;
      if (local_48[0] != '\0') {
        pcVar2 = local_48;
      }
      local_38[0] = local_48[0];
      *pcVar2 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 == 0) {
        lVar3 = *(int64_t *)(this_ptr + 0x90);
        if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_0024a9ba;
      }
      else {
        lVar3 = local_50;
        if (local_38[0] != '\0') goto LAB_0024a9bc;
      }
      FUN_00d50b00();
    }
LAB_0024a9bc:
    FUN_019928b0();
    if ((plVar1 != (int64_t *)0x0) && (lVar3 != 0)) {
      FUN_00d50b20();
    }
    if (*(int64_t **)(this_ptr + 0x90) == (int64_t *)0x0) {
LAB_0024aa26:
      lVar3 = g_026f6f00;
      if (g_026f6f00 == 0) goto LAB_0024aa22;
LAB_0024aa32:
      FUN_00d50b00();
    }
    else {
      (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 == 0) goto LAB_0024aa26;
      lVar3 = g_026f6e80;
      if (g_026f6e80 != 0) goto LAB_0024aa32;
LAB_0024aa22:
      lVar3 = 0;
    }
    FUN_00d6f370();
    FUN_00d70ea0();
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_01caeae0();
  local_40[0] = local_48[0];
  pcVar2 = local_40;
  if (local_48[0] != '\0') {
    pcVar2 = local_48;
  }
  *pcVar2 = '\0';
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_50 == 0) {
    return 1;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_0024ab3d:
    local_50 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar2 = local_48;
    if (local_48[0] == '\0') {
      pcVar2 = local_38;
    }
    local_38[0] = local_48[0];
    *pcVar2 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (local_50 == 0) {
      local_50 = *(int64_t *)(this_ptr + 0x90);
      if (local_50 == 0) goto LAB_0024ab3d;
    }
    else if (local_38[0] != '\0') goto LAB_0024ab40;
    FUN_00d50b00();
  }
LAB_0024ab40:
  FUN_019928e0();
  FUN_01d66ab0();
  if ((plVar1 != (int64_t *)0x0) && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if (local_40[0] != '\0') {
    FUN_00d50b20();
  }
  return 1;
}

