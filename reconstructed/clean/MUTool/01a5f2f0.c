// Function: FUN_01a5f2f0
// Address: 01a5f2f0
// Size: 1878 bytes
// Class: MUTool

void FUN_01a5f2f0(void* param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *arg1;
  int64_t this_ptr;
  bool bVar6;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t *local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t *local_80;
  char local_78;
  int64_t *local_70;
  char local_68;
  int64_t *local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if (*(int64_t *)(this_ptr + 0x170) != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)(this_ptr + 0x168);
    local_98 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
    FUN_00d50b00();
    local_98 = '\x01';
    local_a0 = plVar1;
    FUN_00e8b9a0();
    if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
      (**(code **)(*local_a0 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    lVar2 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff00();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_88 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_88 = '\x01';
      local_90 = plVar1;
      FUN_00e8b9a0();
      if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
        (**(code **)(*local_90 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    lVar3 = local_40;
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012dff70();
      pvVar4 = _pthread_getspecific(param_1);
      if (pvVar4 != (void *)0x0) {
        FUN_00e8b990();
      }
      local_78 = 0;
      (**(code **)(*plVar1 + 0x10))();
      FUN_00d50b00();
      local_78 = '\x01';
      local_80 = plVar1;
      FUN_00e8b9a0();
      if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
        (**(code **)(*local_80 + 0x10))();
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) goto LAB_01a5f6fd;
    }
    local_68 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_68 = '\x01';
    local_70 = plVar1;
    FUN_00cbb340();
    if ((local_68 != '\0') && (local_70 != (int64_t *)0x0)) {
      (**(code **)(*local_70 + 0x10))();
      FUN_00d50b20();
    }
  }
LAB_01a5f6fd:
  lVar2 = *arg1;
  lVar3 = *(int64_t *)(this_ptr + 0x170);
  if (lVar3 != lVar2) {
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    *(int64_t *)(this_ptr + 0x170) = lVar2;
    bVar6 = lVar3 != 0;
    lVar3 = lVar2;
    if (bVar6) {
      FUN_00d50b20();
      lVar3 = *(int64_t *)(this_ptr + 0x170);
    }
  }
  if (lVar3 != 0) {
    pvVar4 = _pthread_getspecific(param_1);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    plVar1 = (int64_t *)(this_ptr + 0x168);
    local_58 = 0;
    (**(code **)(*(int64_t *)(this_ptr + 0x168) + 0x10))();
    FUN_00d50b00();
    local_58 = '\x01';
    local_e0 = 0;
    local_d8 = '\0';
    pVar5 = 0x20;
    local_60 = plVar1;
    FUN_00e8b850(0x20,&local_e0);
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != (int64_t *)0x0)) {
      (**(code **)(*local_60 + 0x10))();
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff00();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_48 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_48 = '\x01';
    local_d0 = 0;
    local_c8 = '\0';
    pVar5 = 0x20;
    local_50 = plVar1;
    FUN_00e8b850(0x20,&local_d0);
    if ((local_c8 != '\0') && (local_d0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012dff70();
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_a8 = 0;
    (**(code **)(*plVar1 + 0x10))();
    FUN_00d50b00();
    local_a8 = '\x01';
    local_c0 = 0;
    local_b8 = '\0';
    local_b0 = plVar1;
    FUN_00e8b850(0x20,&local_c0);
    if ((local_b8 != '\0') && (local_c0 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
      (**(code **)(*local_b0 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  return;
}

