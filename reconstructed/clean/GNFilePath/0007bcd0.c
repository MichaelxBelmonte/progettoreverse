// Function: FUN_0007bcd0
// Address: 0007bcd0
// Size: 1947 bytes
// Class: GNFilePath

void FUN_0007bcd0(uint64_t param_1,uint64_t param_2)

{
  char cVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  void *pvVar4;
  char *pcVar5;
  void* in_ECX;
  void* pVar6;
  int64_t *plVar7;
  int64_t *in_RDX;
  int64_t *arg1;
  int64_t *plVar8;
  int64_t **pplVar9;
  char *pcVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  char local_f8;
  undefined7 uStack_f7;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t *local_98;
  int64_t local_78;
  char local_70;
  int64_t *local_58;
  int64_t *local_50;
  char local_48 [8];
  char local_40 [8];
  char local_38 [8];
  
  if (*in_RDX == 0) {
    return;
  }
  if (*(int *)(*in_RDX + 0xc) == 0) {
    return;
  }
  FUN_01be8160();
  local_58 = local_50;
  local_98 = local_50;
  if (local_48[0] == '\0') {
    if (local_50 == (int64_t *)0x0) {
      local_98 = (int64_t *)0x0;
      local_58 = (int64_t *)0x0;
    }
    else {
      FUN_00d50b00();
      local_58 = local_98;
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
  }
  FUN_00083c20();
  plVar8 = g_02802688;
  if (local_58 != (int64_t *)0x0) {
    (**(code **)(*local_58 + 0x360))();
    cVar1 = FUN_00e85ea0();
    plVar8 = g_02802688;
    if (cVar1 != '\0') {
      plVar8 = local_98;
    }
  }
  if (plVar8 == (int64_t *)0x0) {
    FUN_01bf03a0();
    plVar8 = local_50;
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (plVar8 == (int64_t *)0x0) {
      dVar12 = (double)(**(code **)(*local_58 + 0x370))(param_2);
      dVar13 = (double)(**(code **)(*local_58 + 0x370))(param_1);
      FUN_00e7bdb0();
      FUN_0127f970(dVar12 - dVar13);
    }
    else {
      dVar12 = (double)(**(code **)(*local_58 + 0x370))(param_2);
      dVar13 = (double)(**(code **)(*local_58 + 0x370))(param_1);
      FUN_01bf03a0();
      FUN_01a905b0();
      FUN_0127f970(dVar12 - dVar13);
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
    }
    goto LAB_0007c0b5;
  }
  FUN_01bf03a0();
  plVar8 = local_50;
  if (local_48[0] == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_0007beed;
    FUN_00d50b00();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == (int64_t *)0x0) {
LAB_0007beed:
    pplVar9 = &local_50;
    FUN_01be8160();
    plVar2 = local_50;
    FUN_00083c20();
    if (plVar2 == (int64_t *)0x0) {
LAB_0007bf28:
      pplVar9 = &g_02802688;
    }
    else {
      (**(code **)(*plVar2 + 0x360))();
      cVar1 = FUN_00e85ea0();
      if (cVar1 == '\0') goto LAB_0007bf28;
    }
    plVar2 = *pplVar9;
    if (plVar2 != (int64_t *)0x0) {
      plVar8 = plVar2;
      if (*(char *)(pplVar9 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar9 + 1) = 0;
      }
    }
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  plVar2 = (int64_t *)FUN_01a8fc90(param_2);
  local_78 = FUN_01a8fc90(param_1);
  local_50 = plVar2;
  FUN_00e7b970();
  uVar3 = FUN_01a905b0();
  in_ECX = 0;
  FUN_01278f90(0,uVar3);
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0007c0b5:
  FUN_00d23310();
  plVar8 = local_50;
  local_40[0] = local_48[0];
  pcVar5 = local_40;
  if (local_48[0] != '\0') {
    pcVar5 = local_48;
  }
  *pcVar5 = '\0';
  if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar4 = _pthread_getspecific(in_ECX);
  if (pvVar4 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01266fe0();
  if (local_78 == *arg1) {
    bVar11 = false;
  }
  else {
    plVar7 = arg1;
    FUN_00d23310();
    plVar2 = local_50;
    pVar6 = (void*)plVar7;
    local_38[0] = local_48[0];
    pcVar5 = local_38;
    if (local_48[0] != '\0') {
      pcVar5 = local_48;
    }
    *pcVar5 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    pvVar4 = _pthread_getspecific(pVar6);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e6a50();
    bVar11 = CONCAT71(uStack_f7,local_f8) != *arg1;
    if ((local_f0 != '\0') && (CONCAT71(uStack_f7,local_f8) != 0)) {
      FUN_00d50b20();
    }
    if ((local_e0 != '\0') && (local_e8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (plVar2 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((local_70 != '\0') && (local_78 != 0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (bVar11) {
    local_d8 = *in_RDX;
    local_d0 = '\0';
    FUN_00d23310();
    plVar8 = local_50;
    pcVar5 = &local_f8;
    pcVar10 = local_48;
    if (local_48[0] == '\0') {
      pcVar10 = pcVar5;
    }
    local_f8 = local_48[0];
    *pcVar10 = '\0';
    if ((local_48[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific((void*)pcVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_01266fe0();
    if (local_70 == '\0') {
      if (local_78 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_70 = '\0';
    }
    local_c8 = *arg1;
    local_c0 = '\0';
    local_b8 = 0;
    local_b0 = '\0';
    local_a8 = 0;
    local_a0 = '\0';
    FUN_004a5d20(&local_b8,&local_c8,&local_a8);
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if ((local_c0 != '\0') && (local_c8 != 0)) {
      FUN_00d50b20();
    }
    if (local_78 != 0) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    if ((local_f8 != '\0') && (plVar8 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_d0 != '\0') && (local_d8 != 0)) {
      FUN_00d50b20();
    }
  }
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

