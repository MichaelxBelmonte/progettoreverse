// Function: FUN_00236500
// Address: 00236500
// Size: 844 bytes
// Class: MUTool

uint64_t FUN_00236500(uint64_t param_1,int param_2)

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
LAB_00236580:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_00236580;
    (**(code **)(&UNK_00001570 + *plVar4))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
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
LAB_0023660a:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023660a;
    (**(code **)(&UNK_00001578 + *plVar4))();
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar2 = g_026f6df8;
    if (g_026f6df8 != 0) {
      FUN_00d50b00();
    }
    FUN_00236990();
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
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
LAB_002366c0:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_002366c0;
    (**(code **)(*plVar4 + 0x620))();
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
LAB_0023673b:
      FUN_00d50b00();
    }
    else if (local_58 == '\0') goto LAB_0023673b;
    (**(code **)(*plVar4 + 0xa48))();
    if (plVar1 != (int64_t *)0x0) {
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
    if (local_38[0] != '\0') goto LAB_002367fe;
  }
  FUN_00d50b00();
LAB_002367fe:
  (**(code **)(&UNK_00001570 + *plVar4))();
  FUN_01d66ab0();
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (CONCAT71(uStack_57,local_58) != 0)) {
    FUN_00d50b20();
  }
  return 1;
}

