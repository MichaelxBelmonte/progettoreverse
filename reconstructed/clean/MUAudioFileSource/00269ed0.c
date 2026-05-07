// Function: FUN_00269ed0
// Address: 00269ed0
// Size: 582 bytes
// Class: MUAudioFileSource

uint64_t FUN_00269ed0(uint64_t param_1,int param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char *pcVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t local_40;
  char local_38 [8];
  char local_30 [8];
  
  if (param_2 == 0) {
    return 1;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_00269f57:
    lVar4 = 0;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      lVar4 = *(int64_t *)(this_ptr + 0x90);
      if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_00269f57;
    }
    else {
      lVar4 = local_40;
      if (local_30[0] != '\0') goto LAB_00269f59;
    }
    FUN_00d50b00();
  }
LAB_00269f59:
  FUN_019f7c10();
  if ((plVar1 != (int64_t *)0x0) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_00269fec:
    lVar4 = 0;
    lVar2 = g_026f7008;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      lVar4 = *(int64_t *)(this_ptr + 0x90);
      if (*(int64_t *)(this_ptr + 0x90) == 0) goto LAB_00269fec;
    }
    else {
      lVar4 = local_40;
      lVar2 = g_026f7008;
      if (local_30[0] != '\0') goto joined_r0x00269ff9;
    }
    FUN_00d50b00();
    lVar2 = g_026f7008;
  }
joined_r0x00269ff9:
  g_026f7008 = lVar2;
  if (lVar2 != 0) {
    FUN_00d50b00();
  }
  FUN_019f7c50();
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0) && (lVar4 != 0)) {
    FUN_00d50b20();
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  if (plVar1 == (int64_t *)0x0) {
LAB_0026a0b6:
    local_40 = 0;
    lVar4 = g_026f7010;
  }
  else {
    (**(code **)(&UNK_00001550 + *plVar1))();
    pcVar3 = local_30;
    if (local_38[0] != '\0') {
      pcVar3 = local_38;
    }
    local_30[0] = local_38[0];
    *pcVar3 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 == 0) {
      local_40 = *(int64_t *)(this_ptr + 0x90);
      if (local_40 == 0) goto LAB_0026a0b6;
    }
    else {
      lVar4 = g_026f7010;
      if (local_30[0] != '\0') goto joined_r0x0026a0c3;
    }
    FUN_00d50b00();
    lVar4 = g_026f7010;
  }
joined_r0x0026a0c3:
  g_026f7010 = lVar4;
  if (lVar4 != 0) {
    FUN_00d50b00();
  }
  FUN_019f7c50();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((plVar1 != (int64_t *)0x0) && (local_40 != 0)) {
    FUN_00d50b20();
  }
  return 1;
}

