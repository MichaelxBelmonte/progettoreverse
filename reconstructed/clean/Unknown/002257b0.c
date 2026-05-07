// Function: FUN_002257b0
// Address: 002257b0
// Size: 1569 bytes
// Class: Unknown

void FUN_002257b0(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char *pcVar3;
  void *pvVar4;
  void* pVar5;
  int64_t this_ptr;
  int64_t lVar6;
  bool bVar7;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (local_48 != 0) {
    return;
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  local_80 = local_40[0];
  pcVar3 = &local_80;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  *pcVar3 = '\0';
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  FUN_00d50b00();
  (**(code **)(*plVar1 + 0xa00))();
  if (local_70 == 0) {
    bVar7 = false;
  }
  else {
    plVar1 = *(int64_t **)(this_ptr + 0x90);
    (**(code **)(&UNK_00001550 + *plVar1))();
    local_38[0] = local_40[0];
    pcVar3 = local_38;
    if (local_40[0] != '\0') {
      pcVar3 = local_40;
    }
    *pcVar3 = '\0';
    plVar2 = *(int64_t **)(this_ptr + 0x90);
    FUN_00d50b00();
    (**(code **)(*plVar2 + 0xa00))();
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012cade0();
    bVar7 = CONCAT71(uStack_7f,local_80) != 0;
    if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if (plVar1 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  if (!bVar7) {
    return;
  }
  plVar1 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar1))();
  pcVar3 = local_40;
  if (local_40[0] == '\0') {
    pcVar3 = local_38;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  pVar5 = (void*)local_38;
  plVar2 = *(int64_t **)(this_ptr + 0x90);
  FUN_00d50b00();
  (**(code **)(*plVar2 + 0xa00))();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012cade0();
  pvVar4 = _pthread_getspecific(pVar5);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_015058d0();
  lVar6 = local_70;
  if (local_70 == 0) {
    bVar7 = true;
    lVar6 = 0;
  }
  else {
    if (local_68 == '\0') {
      FUN_00d50b00();
      bVar7 = false;
      if ((local_68 == '\0') || (local_70 == 0)) goto LAB_00225ab8;
      FUN_00d50b20();
    }
    else {
      local_68 = '\0';
    }
    bVar7 = false;
  }
LAB_00225ab8:
  if ((local_78 != '\0') && (CONCAT71(uStack_7f,local_80) != 0)) {
    FUN_00d50b20();
  }
  if ((local_58 != '\0') && (local_60 != 0)) {
    FUN_00d50b20();
  }
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    if (*(int64_t *)(this_ptr + 0xd8) != 0) {
      FUN_01e561b0();
    }
    if (!bVar7) {
      FUN_00d50b20();
    }
  }
  return;
}

