// Function: FUN_0168a170
// Address: 0168a170
// Size: 1311 bytes
// Class: GNAudioProcessor

int64_t * FUN_0168a170(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  void *pvVar2;
  int64_t *plVar3;
  void* pVar4;
  int64_t *plVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t local_88;
  char local_80;
  int64_t *local_58;
  char local_50;
  int local_40;
  
  if (*param_2 != 0) {
    plVar5 = *(int64_t **)(arg1 + 0x78);
    if (plVar5 == (int64_t *)0x0) {
LAB_0168a2b1:
      pVar4 = (void*)param_1;
      lVar1 = *param_2;
    }
    else {
      local_58 = (int64_t *)0x0;
      local_40 = -1;
      do {
        local_50 = '\0';
        lVar1 = (int64_t)local_40;
        local_40 = local_40 + 1;
        if (*(int *)((int64_t)plVar5 + 0xc) <= local_40) {
          FUN_01714b60();
          param_1 = plVar5;
          goto LAB_0168a2b1;
        }
        plVar3 = (int64_t *)plVar5[2];
        local_58 = (int64_t *)plVar3[lVar1 + 1];
        pvVar2 = _pthread_getspecific((void*)plVar3);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012c9180();
        lVar1 = *param_2;
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
      } while (local_88 != lVar1);
      pvVar2 = _pthread_getspecific((void*)plVar3);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012c8a10();
      lVar1 = *param_1;
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (local_88 == lVar1) {
        *(void*)(this_ptr + 1) = 0;
        if (local_58 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *this_ptr = (int64_t)local_58;
        *(void*)(this_ptr + 1) = 1;
        FUN_01714b60();
        return this_ptr;
      }
      FUN_01714b60();
      pVar4 = (void*)plVar3;
      lVar1 = *param_2;
      param_1 = plVar3;
    }
    if (lVar1 != 0) goto LAB_0168a486;
  }
  pVar4 = (void*)param_1;
  plVar3 = (int64_t *)FUN_00e8fc40();
  FUN_00bdbf50();
  (**(code **)(*plVar3 + 0x18))();
  plVar5 = (int64_t *)*param_2;
  if (plVar5 == plVar3) {
    if ((char)param_2[1] == '\0') goto LAB_0168a309;
    FUN_00d50b20();
  }
  else {
    *param_2 = (int64_t)plVar3;
    if (((char)param_2[1] != '\0') && (plVar5 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
LAB_0168a309:
    *(void*)(param_2 + 1) = 1;
  }
  FUN_00d9bb60();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b69200();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d46300();
  if (local_50 == '\0') {
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_50 = '\0';
  }
  FUN_00b68960();
  if (local_58 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_0168a486:
  FUN_016ae690();
  FUN_00c811e0();
  if ((local_50 == '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  if ((local_80 != '\0') && (local_88 != 0)) {
    FUN_00d50b20();
  }
  pvVar2 = _pthread_getspecific(pVar4);
  plVar5 = local_58;
  if ((pvVar2 != (void *)0x0) && (lVar1 = FUN_00e8b990(), lVar1 != 0)) {
    plVar5 = (int64_t *)local_58[(uint64_t)(*(uint *)(lVar1 + 0x154) & 1) + 4];
  }
  (**(code **)(*plVar5 + 0x18))();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c78d0();
  pvVar2 = _pthread_getspecific(pVar4);
  if (pvVar2 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012c8a40();
  FUN_00d21140();
  *this_ptr = (int64_t)local_58;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

